#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

#include <cstdio>

namespace nocturne::core {

class CGore {
public:
    CGore();

    void reset();
    void renderParticles();
    void renderDecals(int render_all, int expire_flag);
    void process();
    void spawnBloodParticles(common::CVector3f *position, common::CVector3f *velocity,
                             int blood_type);
    void createGroundBloodSplat(common::CVector3f *position, int blood_type);
    void createWallBloodSplat(common::CVector3f *position, common::CVector3f *normal,
                              int blood_type);
    void spawnBloodBurst(common::CVector3f *position, common::CVector3f *direction, int count,
                         int blood_type);
    void createBloodPool(common::CVector3f *position, int blood_type);
    void loadAssets();
    void spawnFliesOnActor(CDemonActor *actor, int gather_count, float spawn_rate,
                           common::CVector3f *box_size);
    void createFootstep(common::CVector3f *position, common::UOrientationVector *orientation,
                        int surface_type, int alpha, int blood_type);
    int findBloodTypeAtPosition(common::CVector3f *position, int *out_blood_type);
    int load(std::FILE *file_handle);
    int save(std::FILE *file_handle);
};

} // namespace nocturne::core
