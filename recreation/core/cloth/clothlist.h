#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CClothList {
public:
    CClothList();
    ~CClothList();

    void load();
    void reset();
    void add(char *filename);
    void setup(CVector3f *position, CVector3f *euler, CDeformableModelInstance *model_ptr);
    void process(CVector3f *position, CVector3f *euler, float delta_time, float floor_y,
                 CDeformableModelInstance *model_ptr);
    void render(CDeformableModelInstance *model_ptr);
};

} // namespace nocturne::core
