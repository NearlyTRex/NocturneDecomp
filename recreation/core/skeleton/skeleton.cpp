#include "core/skeleton/skeleton.h"

#include "common/error/error.h"
#include "common/text/ascii.h"
#include "common/text/scan.h"
#include "common/text/scanformat.h"
#include "common/text/textlines.h"
#include "common/text/textscanner.h"
#include "core/xform/xform.h"
#include "engine/dosio/dosio.h"

#include <cstddef>
#include <format>
#include <initializer_list>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {
namespace {

constexpr int kLatestVersion = 3;
constexpr int kOldestVersion = 2;
// The version that adds the reference bone origins after the motions.
constexpr int kReferenceOriginVersion = 3;

} // namespace

// The original also marked its reference bone origins unread, which retail has no field for.
// nocedit 0x00599880
CSkeleton::CSkeleton(const engine::CDosIo &dosio) : dosio_(dosio) {}

// nocedit 0x005998e0
CSkeleton::~CSkeleton() = default;

// nocedit 0x00599a50
void CSkeleton::free() {
    bones_.clear();
    frame_count_ = 0;
    bone_angle_frames_.clear();
    root_offsets_.clear();
    canceled_movements_.clear();
}

// The original quit when it couldn't allocate, which a failed allocation does here.
// nocedit 0x00599910
void CSkeleton::allocMemory(int bone_count, int frame_count) {
    free();
    if (bone_count > kMaxBones) {
        common::displayErrorAndQuit("Too bony!");
    }
    const std::size_t bones = common::toCount(bone_count);
    const std::size_t frames = common::toCount(frame_count);
    bones_.assign(bones, {});
    frame_count_ = frame_count;
    bone_angle_frames_.assign(bones * frames, {});
    root_offsets_.assign(frames, {});
    canceled_movements_.assign(frames, {});
}

// nocedit 0x00599b10
void CSkeleton::load(std::string_view filename) {
    loaded_filename_ = filename;
    const std::optional<std::string> file = dosio_.readFile("data", filename);
    if (!file) {
        common::displayErrorAndQuit(std::format("CSkeleton::load - Can't open {}", filename));
    }
    const std::string text = common::toTextMode(*file);
    common::CTextScanner scanner(text);
    loadStream(scanner);
}

// Each group of fields follows a comment line, which is passed over. Retail reads past the
// reference bone origins that end a version 3 file, where nocedit keeps them; the original also
// quit on a read error, which reading the whole file first can't have.
// nocedit 0x00599bb0
void CSkeleton::loadStream(common::CTextScanner &scanner) {
    free();
    scanner.skipLine();
    int version = -1;
    common::scanFormat(scanner, "%d\n", version);
    if (version < 1) {
        common::displayErrorAndQuit("Invalid skeleton version");
    }
    if (version < kOldestVersion) {
        common::displayErrorAndQuit(std::format("Old skeleton version {} not supported", version));
    }
    if (version > kLatestVersion) {
        common::displayErrorAndQuit(std::format(
            "Skeleton version {} is newer than .EXE, which can only process up to version {}",
            version, kLatestVersion));
    }
    scanner.skipLine();
    int bone_count = 0;
    int frame_count = 0;
    common::scanFormat(scanner, "%d,%d\n", bone_count, frame_count);
    allocMemory(bone_count, frame_count);
    scanner.skipLine();
    for (SBone &bone : bones_) {
        common::scanFormat(scanner, "\"%[^\"]\",%d\n", bone.bone_name, bone.parent_index);
    }
    scanner.skipLine();
    for (common::CQuaternion4f &angle : bone_angle_frames_) {
        common::scanFormat(scanner, "%f,%f,%f,%f\n", angle.w, angle.x, angle.y, angle.z);
    }
    for (std::vector<common::CVector3f> *list : {&root_offsets_, &canceled_movements_}) {
        scanner.skipLine();
        for (common::CVector3f &point : *list) {
            common::scanFormat(scanner, "%f,%f,%f\n", point.x, point.y, point.z);
        }
    }
    motion_list_.load(scanner);
    if (version < kReferenceOriginVersion) {
        return;
    }
    scanner.skipLine();
    for (std::size_t i = 0; i < bones_.size(); ++i) {
        scanner.skipLine();
    }
}

// nocedit 0x00599fc0
int CSkeleton::findBone(std::string_view bone_name, bool assert_if_not_found) const {
    for (std::size_t i = 0; i < bones_.size(); ++i) {
        if (common::equalsIgnoringAsciiCase(bones_[i].bone_name, bone_name)) {
            return static_cast<int>(i);
        }
    }
    if (assert_if_not_found) {
        common::displayErrorAndQuit(
            std::format("Can't find bone {} in skeleton {}!", bone_name, loaded_filename_));
    }
    return -1;
}

// nocedit 0x0059a050
const common::CQuaternion4f &CSkeleton::getBoneAngleAtFrame(int bone_index, int frame_index) const {
    const int index = (frame_index * getBoneCount()) + bone_index;
    return bone_angle_frames_[static_cast<std::size_t>(index)];
}

// nocedit 0x0059a070
common::CQuaternion4f CSkeleton::getBoneAngleInterpolated(int bone_index, int frame_index_1,
                                                          int frame_index_2,
                                                          float interpolation) const {
    if (interpolation <= 0.0F) {
        return getBoneAngleAtFrame(bone_index, frame_index_1);
    }
    if (!(1.0F > interpolation)) {
        return getBoneAngleAtFrame(bone_index, frame_index_2);
    }
    return slerpQuaternion(getBoneAngleAtFrame(bone_index, frame_index_1),
                           getBoneAngleAtFrame(bone_index, frame_index_2), interpolation);
}

// nocedit 0x0059a100
int CSkeleton::getHierarchyDistance(int start_bone_index, int target_bone_index) const {
    int distance = 0;
    int bone = start_bone_index;
    do {
        if (bone == target_bone_index) {
            return distance;
        }
        bone = bones_[static_cast<std::size_t>(bone)].parent_index;
        ++distance;
    } while (bone >= 0);
    return target_bone_index < 0 ? distance : -1;
}

const std::string &CSkeleton::getLoadedFilename() const {
    return loaded_filename_;
}

std::span<const SBone> CSkeleton::getBones() const {
    return bones_;
}

int CSkeleton::getBoneCount() const {
    return static_cast<int>(bones_.size());
}

int CSkeleton::getFrameCount() const {
    return frame_count_;
}

std::span<const common::CQuaternion4f> CSkeleton::getBoneAngleFrames() const {
    return bone_angle_frames_;
}

std::span<const common::CVector3f> CSkeleton::getRootOffsets() const {
    return root_offsets_;
}

std::span<const common::CVector3f> CSkeleton::getCanceledMovements() const {
    return canceled_movements_;
}

const CMotionList &CSkeleton::getMotionList() const {
    return motion_list_;
}

} // namespace nocturne::core
