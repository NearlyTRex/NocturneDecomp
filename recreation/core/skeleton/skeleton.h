#pragma once

#include "common/fwd.h"
#include "common/math/quaternion4f.h"
#include "common/math/vector3f.h"
#include "core/fwd.h"
#include "core/motion/motionlist.h"
#include "engine/fwd.h"

#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {

// A bone, and the one it hangs from; -1 for the root.
struct SBone {
    std::string bone_name;
    int parent_index = 0;
};

// A skeleton as a data\*.SKL file holds it: the bones, each bone's angle at every frame of every
// motion, the root's movement each frame, and the motions that play them.
class CSkeleton {
public:
    // The most bones a skeleton holds.
    static constexpr int kMaxBones = 100;

    explicit CSkeleton(const engine::CDosIo &dosio);
    ~CSkeleton();
    CSkeleton(const CSkeleton &) = delete;
    CSkeleton &operator=(const CSkeleton &) = delete;
    CSkeleton(CSkeleton &&) = delete;
    CSkeleton &operator=(CSkeleton &&) = delete;

    void free();
    // data\<filename>; a file that won't open, or of a version that can't be read, is fatal.
    void load(std::string_view filename);
    int findBone(char *bone_name, int assert_if_not_found);
    [[nodiscard]] const common::CQuaternion4f &getBoneAngleAtFrame(int bone_index,
                                                                   int frame_index) const;
    // The first frame's at 0 or less, the second's at 1 or more or a NaN, and between them the
    // slerp of the two.
    [[nodiscard]] common::CQuaternion4f getBoneAngleInterpolated(int bone_index, int frame_index_1,
                                                                 int frame_index_2,
                                                                 float interpolation) const;
    int getHierarchyDistance(int start_bone_index, int target_bone_index);
    int calculateFrameDataSize();

    [[nodiscard]] const std::string &getLoadedFilename() const;
    [[nodiscard]] std::span<const SBone> getBones() const;
    [[nodiscard]] int getBoneCount() const;
    // Over every motion's frames together.
    [[nodiscard]] int getFrameCount() const;
    // Frame by frame, each frame every bone's.
    [[nodiscard]] std::span<const common::CQuaternion4f> getBoneAngleFrames() const;
    [[nodiscard]] std::span<const common::CVector3f> getRootOffsets() const;
    // Where root motion comes from, each frame.
    [[nodiscard]] std::span<const common::CVector3f> getCanceledMovements() const;
    [[nodiscard]] const CMotionList &getMotionList() const;

private:
    void loadStream(common::CTextScanner &scanner);
    // More than kMaxBones bones is fatal.
    void allocMemory(int bone_count, int frame_count);

    const engine::CDosIo &dosio_;
    CMotionList motion_list_;
    std::string loaded_filename_;
    std::vector<SBone> bones_;
    int frame_count_ = 0;
    std::vector<common::CQuaternion4f> bone_angle_frames_;
    std::vector<common::CVector3f> root_offsets_;
    std::vector<common::CVector3f> canceled_movements_;
};

} // namespace nocturne::core
