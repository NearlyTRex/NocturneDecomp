#pragma once

#include "common/math/vector3f.h"

#include <array>

namespace nocturne::common {

// A rotation's rows as the x87 holds them before they are stored as floats.
using Rows3x3d = std::array<std::array<double, 3>, 3>;

// Rows of a rotation; a vector transforms by row, so the transpose is the inverse rotation.
class CMatrix3x3f {
public:
    std::array<CVector3f, 3> m{};

    // From angles in radians, about x, y and z, as getEulerAngles returns them.
    void buildRotationMatrix(const CVector3f &euler_angles);
    [[nodiscard]] CVector3f transformVector(const CVector3f &input) const;
    [[nodiscard]] CVector3f transformVectorTranspose(const CVector3f &input) const;
    // Straight up or down, the y and z angles share one axis, so z is zero and y takes it all.
    [[nodiscard]] CVector3f getEulerAngles() const;
    // Throws std::domain_error for a singular matrix, where the original quits the game.
    void invert();
    [[nodiscard]] CMatrix3x3f multiply(const CMatrix3x3f &matrix_b) const;
};

// getEulerAngles on rows not yet rounded to float; the original repeats it inline in
// matrixToEulerAngles.
[[nodiscard]] CVector3f eulerAnglesFromRows(const Rows3x3d &rows);

} // namespace nocturne::common
