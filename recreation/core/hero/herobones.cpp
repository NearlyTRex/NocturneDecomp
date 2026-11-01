#include "core/hero/herobones.h"

#include "core/skeleton/skeleton.h"

#include <string_view>

namespace nocturne::core {

SHeroBones findHeroBones(const CSkeleton &skeleton) {
    const auto bone = [&skeleton](std::string_view name) { return skeleton.findBone(name, true); };
    SHeroBones bones;
    bones.head = bone("Bip01 head");
    bones.left_clavicle = bone("Bip01 L Clavicle");
    bones.right_clavicle = bone("Bip01 R Clavicle");
    bones.left_upper_arm = bone("Bip01 L UpperArm");
    bones.right_upper_arm = bone("Bip01 R UpperArm");
    bones.left_forearm = bone("Bip01 L ForeArm");
    bones.right_forearm = bone("Bip01 R ForeArm");
    bones.left_foot = bone("Bip01 L Foot");
    bones.right_foot = bone("Bip01 R Foot");
    bones.left_thigh = bone("Bip01 L Thigh");
    bones.right_thigh = bone("Bip01 R Thigh");
    bones.left_calf = bone("Bip01 L Calf");
    bones.right_calf = bone("Bip01 R Calf");
    bones.left_hand = bone("Bip01 L Hand");
    bones.right_hand = bone("Bip01 R Hand");
    bones.spine2 = bone("Bip01 Spine2");
    bones.spine = bone("Bip01 Spine");
    return bones;
}

} // namespace nocturne::core
