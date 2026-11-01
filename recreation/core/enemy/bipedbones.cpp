#include "core/enemy/bipedbones.h"

#include "core/skeleton/skeleton.h"

#include <string_view>

namespace nocturne::core {

SBipedBones findBipedBones(const CSkeleton &skeleton, bool with_spine1) {
    const auto bone = [&skeleton](std::string_view name) { return skeleton.findBone(name, true); };
    SBipedBones bones;
    bones.head = bone("Bip01 Head");
    bones.left_forearm = bone("Bip01 L ForeArm");
    bones.right_forearm = bone("Bip01 R ForeArm");
    bones.left_upper_arm = bone("Bip01 L UpperArm");
    bones.right_upper_arm = bone("Bip01 R UpperArm");
    bones.left_foot = bone("Bip01 L Foot");
    bones.right_foot = bone("Bip01 R Foot");
    bones.left_hand = bone("Bip01 L Hand");
    bones.right_hand = bone("Bip01 R Hand");
    bones.spine = bone("Bip01 Spine");
    if (with_spine1) {
        bones.spine1 = bone("Bip01 Spine1");
    }
    bones.spine2 = bone("Bip01 Spine2");
    return bones;
}

} // namespace nocturne::core
