#ifndef V2M_COMMANDS_ALGORITHMS_DENSE_FLOW_HPP
#define V2M_COMMANDS_ALGORITHMS_DENSE_FLOW_HPP

#include <vector>

#include <opencv2/core/mat.hpp>

namespace v2m {
  namespace commands {
    namespace algorithms {
      namespace dense_flow {
        std::vector<cv::Vec<double, 8>> get3dFlow(cv::Mat& frame, cv::Mat& prev);
      }
    }
  }
}

#endif
