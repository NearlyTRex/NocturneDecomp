#include "core/setutil/3dscamera.h"

#include "common/error/error.h"
#include "common/math/extendedfloat.h"
#include "common/text/scanformat.h"
#include "common/text/textscanner.h"
#include "core/dcamera/dcamera.h"
#include "core/dcamera/demoncamera.h"
#include "core/setutil/setfileversion.h"

#include <algorithm>
#include <cstddef>
#include <format>
#include <utility>
#include <vector>

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

// The original also copied a flag no camera sets, and quit on a panning camera, which retail
// can't load.
// deferred: the console's notes on an ambient level below the set's least or above a quarter,
//   with the console among the set's owners
// nocedit 0x00585870
void C3DSCamera::apply(CDemonCamera &camera) const {
    camera.setPosition(position_);
    camera.setRotationMatrix(rotation_matrix_);
    camera.setFocalLength(projection_scale_);
    camera.setCameraName(name_);
    camera.setEffectIntensity(ambient_value_);
}

// Each side compared with the point moved by the radius at the x87's precision.
// nocedit 0x00585970
bool C3DSCamera::testSphereInFrustum(const common::CVector3f &world_position, float radius) const {
    const common::CVector3f local =
        rotation_matrix_.transformVectorTranspose({.x = world_position.x - position_.x,
                                                   .y = world_position.y - position_.y,
                                                   .z = world_position.z - position_.z});
    const common::CExtendedFloat reach(radius);
    const auto inside = [&reach](float point, float low, float high) {
        const common::CExtendedFloat at(point);
        return common::CExtendedFloat(low) <= at + reach &&
               at - reach <= common::CExtendedFloat(high);
    };
    return inside(local.x, box_.min.x, box_.max.x) && inside(local.y, box_.min.y, box_.max.y) &&
           inside(local.z, box_.min.z, box_.max.z);
}

const std::string &C3DSCamera::getName() const {
    return name_;
}

const common::CVector3f &C3DSCamera::getPosition() const {
    return position_;
}

int C3DSCamera::getVdirZone() const {
    return vdir_zone_;
}

void C3DSCamera::setVdirZone(int vdir_zone) {
    vdir_zone_ = vdir_zone;
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

void C3DSCamera::setPVSList(std::vector<int> pvs_list) {
    pvs_list_ = std::move(pvs_list);
}

void C3DSCamera::setAmbientValue(float ambient_value) {
    ambient_value_ = ambient_value;
}

void C3DSCamera::setCameraGroup(int camera_group) {
    camera_group_ = camera_group;
}

void C3DSCamera::setEnabled(bool enabled) {
    enabled_ = enabled;
}

float C3DSCamera::getAmbientValue() const {
    return ambient_value_;
}

int C3DSCamera::getCameraGroup() const {
    return camera_group_;
}

bool C3DSCamera::getEnabled() const {
    return enabled_;
}

} // namespace nocturne::core
