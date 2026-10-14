#pragma once

#include "common/fwd.h"
#include "common/math/quaternion4f.h"
#include "common/math/vector3f.h"
#include "core/fwd.h"
#include "engine/fwd.h"

#include <string_view>
#include <vector>

namespace nocturne::core {

// A path through space: a position and orientation per frame, looping or not.
class CCourse {
public:
    explicit CCourse(const engine::CDosIo &dosio);
    ~CCourse();

    // data/<filename>: a comment, a version, a comment, the frame count and loop flag, a comment,
    // then a frame a line, position and orientation as w, x, y, z. Fatal when it can't be opened.
    void load(std::string_view filename);
    void free();
    // Where the course is time frames in, and its orientation as angles about x, y and z.
    void evaluate(float time, common::CVector3f &out_pos, common::CVector3f &out_euler) const;

    [[nodiscard]] int getLength() const;

private:
    struct CCourseFrame {
        common::CVector3f pos;
        common::CQuaternion4f orient;
    };

    void allocMemory(int count);
    void interpolate(float time, common::CVector3f &out_pos,
                     common::CQuaternion4f &out_orient) const;

    const engine::CDosIo &dosio_;
    std::vector<CCourseFrame> frames_;
    bool loop_ = true;
};

} // namespace nocturne::core
