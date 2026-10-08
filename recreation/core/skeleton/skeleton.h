#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CSkeleton {
public:
    CSkeleton();
    ~CSkeleton();

    void free();
    void load(char *filename);
    int findBone(char *bone_name, int assert_if_not_found);
    CQuaternion4f *getBoneAngleAtFrame(int bone_index, int frame_index);
    CQuaternion4f *getBoneAngleInterpolated(int bone_index, int frame_index_1, int frame_index_2,
                                            float interpolation, CQuaternion4f *result_out);
    int getHierarchyDistance(int start_bone_index, int target_bone_index);
    int calculateFrameDataSize();
};

} // namespace nocturne::core
