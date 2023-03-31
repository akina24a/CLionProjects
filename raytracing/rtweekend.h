//
// Created by Administrator on 2023/3/29.
//

#ifndef UNTITLED_RTWEEKEND_H
#define UNTITLED_RTWEEKEND_H

#include <cmath>
#include <cstdlib>
#include <limits>
#include <memory>


// Usings

using std::shared_ptr;
using std::make_shared;
using std::sqrt;

// Constants

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

// Utility Functions

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.0;
}


inline double clamp(double x, double min, double max) {
    if (x < min) return min;
    if (x > max) return max;
    return x;
}



// Common Headers

#include "ray.h"
#include "vec3.h"


#endif //UNTITLED_RTWEEKEND_H
