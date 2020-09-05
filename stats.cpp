#include "stats.h"

Stats::Stats(): average(NAN), max(NAN), min(NAN) { }

Stats Statistics::ComputeStatistics(const std::vector<float>& numbers) {
    Stats result;

    if (numbers.empty())
        return result;
    else
    {
        result.average = Statistics::Average(numbers);
        result.max = Statistics::Max(numbers);
        result.min = Statistics::Min(numbers);
    }
    return result;
}

float Statistics::Average(const std::vector<float>& numbers) {
    
    float sum = 0;
    
    for (int i = 0; i < numbers.size(); i++)
    { sum += numbers[i]; }

    float average = sum / numbers.size();

    return average;
}

float Statistics::Max(const std::vector<float>& numbers)
{
    float max = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] > max)
            max = numbers[i];
    }
    return max;
}

float Statistics::Min(const std::vector<float>& numbers)
{
    float min = 10000000;
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] < min)
            min = numbers[i];
    }
    return min;
}
