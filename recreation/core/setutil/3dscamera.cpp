#include "core/setutil/3dscamera.h"

#include "common/error/error.h"
#include "common/text/scanformat.h"
#include "common/text/textscanner.h"
#include "core/dcamera/dcamera.h"
#include "core/setutil/setfileversion.h"

#include <algorithm>
#include <cstddef>
#include <format>

namespace nocturne::core {
namespace {

using common::scanFormat;

// The .SET versions that first gave a camera its own fog, and a box and a reverb preset.
constexpr int kCameraFogVersion = 18;
constexpr int kBoxVersion = 23;
constexpr float kDefaultProjectionScale = 28.0F;
constexpr float kDefaultBoxExtent = 300.0F;
constexpr int kMaxPVSCount = 0x1fffffff;

} // namespace

// nocedit 0x00585310
C3DSCamera::C3DSCamera() = default;

// nocedit 0x00585340
C3DSCamera::~C3DSCamera() = default;

// nocedit 0x00585360
void C3DSCamera::free() {
    pvs_list_.clear();
}

// nocedit 0x005853b0
void C3DSCamera::reset() {
    *this = C3DSCamera();
    use_global_fog_ = false;
    projection_scale_ = kDefaultProjectionScale;
    box_ = {.min = {.x = -kDefaultBoxExtent, .y = -kDefaultBoxExtent, .z = 0.0F},
            .max = {.x = kDefaultBoxExtent, .y = kDefaultBoxExtent, .z = kDefaultBoxExtent}};
}

// nocedit also read whether a version 27 camera panned, quitting if it did; retail reads no such
// line.
// nocedit 0x00585420
void C3DSCamera::load(common::CTextScanner &scanner, int set_file_version, const SFog &set_fog) {
    reset();
    const bool labelled = set_file_version >= kLabelledSetFileVersion;
    if (labelled) {
        scanner.skipLine();
    }
    name_ = common::CTextScanner(scanner.readLine()).scanWord();
    if (labelled) {
        scanner.skipLine();
    }
    scanFormat(scanner, "%f,%f,%f\n", position_.x, position_.y, position_.z);
    if (labelled) {
        scanner.skipLine();
    }
    scanFormat(scanner, "%f,%f,%f\n", orientation_.x, orientation_.z, orientation_.y);
    if (labelled) {
        scanner.skipLine();
    }
    scanFormat(scanner, "%f\n", projection_scale_);
    scanner.skipLine();
    for (common::CVector3f &row : rotation_matrix_.m) {
        scanFormat(scanner, "%f,%f,%f\n", row.x, row.y, row.z);
    }
    if (set_file_version < kCameraFogVersion) {
        use_global_fog_ = true;
        fog_ = set_fog;
    } else {
        int use_global_fog = 0;
        scanFormat(scanner, "%d\n", use_global_fog);
        use_global_fog_ = use_global_fog != 0;
        if (!use_global_fog_) {
            loadCameraFog(fog_, scanner, set_file_version);
        }
    }
    if (set_file_version >= kBoxVersion) {
        scanner.skipLine();
        scanFormat(scanner, "%f,%f,%f\n", box_.min.x, box_.min.y, box_.min.z);
        scanFormat(scanner, "%f,%f,%f\n", box_.max.x, box_.max.y, box_.max.z);
        scanner.skipLine();
        scanFormat(scanner, "%d\n", reverb_preset_);
    }
}

// A count the file lacks keeps the list as it was; a cube the file lacks reads as 0. A count
// whose byte size wrapped got the original a short list it wrote past; here it is fatal.
// nocedit 0x005857b0
void C3DSCamera::loadPVS(common::CTextScanner &scanner) {
    int pvs_count = static_cast<int>(pvs_list_.size());
    scanFormat(scanner, "%d\n", pvs_count);
    if (pvs_count > kMaxPVSCount) {
        common::displayErrorAndQuit(std::format("Out of memory for pvsList - {}", pvs_count));
    }
    pvs_list_.resize(static_cast<std::size_t>(std::max(pvs_count, 0)));
    for (int &cube : pvs_list_) {
        scanFormat(scanner, "\t%d\n", cube);
    }
}

const std::string &C3DSCamera::getName() const {
    return name_;
}

const common::CVector3f &C3DSCamera::getPosition() const {
    return position_;
}

const common::CVector3f &C3DSCamera::getOrientation() const {
    return orientation_;
}

const common::CMatrix3x3f &C3DSCamera::getRotationMatrix() const {
    return rotation_matrix_;
}

float C3DSCamera::getProjectionScale() const {
    return projection_scale_;
}

bool C3DSCamera::getUseGlobalFog() const {
    return use_global_fog_;
}

const SFog &C3DSCamera::getFog() const {
    return fog_;
}

int C3DSCamera::getReverbPreset() const {
    return reverb_preset_;
}

const CBoundingBox3D &C3DSCamera::getBox() const {
    return box_;
}

std::span<const int> C3DSCamera::getPVSList() const {
    return pvs_list_;
}

} // namespace nocturne::core
