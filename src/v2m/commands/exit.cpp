#include <pthread.h>

#include "exit.hpp"

namespace v2m {
  namespace commands {
    cv::Mat exit(cv::Mat& frame, cv::Mat& prev) {
      pthread_exit(NULL);
      return frame;
    }
  }
}
