#pragma once

#include "core/fwd.h"

#include <cstdio>

namespace nocturne::core {

class CGore {
public:
    CGore();
    ~CGore();

    void reset();
    void renderParticles();
    void renderDecals(int render_all, int expire_flag);
    void process();
    void spawnBloodParticles(CVector3f *position, CVector3f *velocity, int blood_type);
    void createGroundBloodSplat(CVector3f *position, int blood_type);
    void createWallBloodSplat(CVector3f *position, CVector3f *normal, int blood_type);
    void spawnBloodBurst(CVector3f *position, CVector3f *direction, int count, int blood_type);
    void createBloodPool(CVector3f *position, int blood_type);
    void loadAssets();
    void spawnFliesOnActor(CDemonActor *actor, int gather_count, float spawn_rate,
                           CVector3f *box_size);
    void createFootstep(CVector3f *position, UOrientationVector *orientation, int surface_type,
                        int alpha, int blood_type);
    int findBloodTypeAtPosition(CVector3f *position, int *out_blood_type);
    int load(std::FILE *file_handle);
    int save(std::FILE *file_handle);
};

} // namespace nocturne::core
