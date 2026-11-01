#pragma once

#include "common/fwd.h"
#include "common/math/matrix3x3f.h"
#include "common/math/vector3f.h"
#include "platform/fwd.h"

namespace nocturne::core {

// A point of view: where it is, how it is turned, and its lens. It has no fog and no alpha
// transforms of its own.
class CCameraView {
public:
    CCameraView();
    virtual ~CCameraView();
    CCameraView(const CCameraView &) = delete;
    CCameraView &operator=(const CCameraView &) = delete;
    CCameraView(CCameraView &&) = delete;
    CCameraView &operator=(CCameraView &&) = delete;

    virtual void setupPerspectiveAndFog(common::CVector3f *position,
                                        platform::SProjectedVertex *projected_vertex);
    virtual int getFogValueAtPosition(common::CVector3i *world_position,
                                      platform::SProjectedVertex *projected_vertex);
    virtual void saveAlphaTransform(int alpha_index);

    [[nodiscard]] float getFixedPointScale() const;
    [[nodiscard]] const common::CVector3f &getPosition() const;
    void setPosition(const common::CVector3f &position);
    [[nodiscard]] const common::CMatrix3x3f &getRotationMatrix() const;
    void setRotationMatrix(const common::CMatrix3x3f &rotation_matrix);
    // In millimetres, as a 35mm lens.
    [[nodiscard]] float getFocalLength() const;
    void setFocalLength(float focal_length);

private:
    static constexpr float kDefaultFixedPointScale = 256.0F;
    static constexpr float kDefaultFocalLength = 28.0F;

    float fixed_point_scale_ = kDefaultFixedPointScale;
    common::CVector3f position_;
    common::CMatrix3x3f rotation_matrix_;
    float focal_length_ = kDefaultFocalLength;
};

} // namespace nocturne::core
