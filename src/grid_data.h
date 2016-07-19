#ifndef GRID_DATA_H_
#define GRID_DATA_H_

#include <vector>

class grid_data{
    // ( N, i_v0, i_v1, i_v2, ..., i_vN-1)
public:
    struct poly{
        int len;
        int* vertex_indices
        bool contains_point()
        double* bounding_box
    };
    grid_data();
    ~grid_data();
    int add_poly(int*, int);

    std::vector<poly> polys;
};

#endif