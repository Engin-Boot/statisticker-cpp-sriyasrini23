#pragma once
#include <math.h>
#include <vector>

class Stats
{
public:
    float average;
    float max;
    float min;

    Stats();

};

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>&);

    float Average(const std::vector<float>&);
    float Max(const std::vector<float>&);
    float Min(const std::vector<float>&);
}
