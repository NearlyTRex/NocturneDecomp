#pragma once

#include "common/fwd.h"
#include "common/math/matrix3x3f.h"
#include "common/math/vector3f.h"
#include "core/box/boundingbox3d.h"
#include "core/dcamera/fog.h"
#include "core/fwd.h"

#include <span>
#include <string>
#include <vector>

namespace nocturne::core {

// One of a set's fixed cameras, as the .SET file describes it.
class C3DSCamera {
public:
    C3DSCamera();
    ~C3DSCamera();

    void free();
    // Everything zero, but a projection scale of 28 and a box of -300 to 300 in x and y and 0 to
    // 300 in z; the camera then uses its own fog.
    void reset();
    // From a .SET file of the version. Before 18 a camera always used the set's fog, which it is
    // given.
    void load(common::CTextScanner &scanner, int set_file_version, const SFog &set_fog);
    void loadPVS(common::CTextScanner &scanner);
    void apply(CDemonCamera *camera);
    int testSphereInFrustum(common::CVector3f *world_position, float radius);

    [[nodiscard]] const std::string &getName() const;
    [[nodiscard]] const common::CVector3f &getPosition() const;
    // Angles in radians about x, y and z.
    [[nodiscard]] const common::CVector3f &getOrientation() const;
    [[nodiscard]] const common::CMatrix3x3f &getRotationMatrix() const;
    [[nodiscard]] float getProjectionScale() const;
    // Whether the set's fog and reverb apply here, rather than the camera's own.
    [[nodiscard]] bool getUseGlobalFog() const;
    [[nodiscard]] const SFog &getFog() const;
    [[nodiscard]] int getReverbPreset() const;
    [[nodiscard]] const CBoundingBox3D &getBox() const;
    // The raytrace cubes the camera can see.
    [[nodiscard]] std::span<const int> getPVSList() const;
    // The scene's ambient light while this camera shows it, the group scripts switch it with,
    // and whether it may be switched to.
    void setAmbientValue(float ambient_value);
    void setCameraGroup(int camera_group);
    void setEnabled(bool enabled);
    [[nodiscard]] float getAmbientValue() const;
    [[nodiscard]] int getCameraGroup() const;
    [[nodiscard]] bool getEnabled() const;

private:
    std::string name_;
    common::CVector3f position_;
    common::CVector3f orientation_;
    common::CMatrix3x3f rotation_matrix_;
    float projection_scale_ = 0.0F;
    bool use_global_fog_ = true;
    SFog fog_;
    int reverb_preset_ = 0;
    CBoundingBox3D box_;
    std::vector<int> pvs_list_;
    float ambient_value_ = 0.0F;
    int camera_group_ = 0;
    bool enabled_ = false;
};

} // namespace nocturne::core
