#include "core/course/course.h"

#include "common/error/error.h"
#include "common/math/matrix3x4f.h"
#include "common/text/textscanner.h"
#include "core/xform/xform.h"
#include "engine/dosio/dosio.h"

#include <algorithm>
#include <cmath>
#include <cstddef>
#include <format>
#include <optional>
#include <string>

namespace nocturne::core {
namespace {

// Closer than this to a frame, the frame is taken as it is.
constexpr double kOnFrame = 0.001;

// A "%f" field, left as it was when the text doesn't hold one.
void scanField(common::CTextScanner &scanner, float &field) {
    if (const std::optional<float> value = scanner.scanFloat()) {
        field = *value;
    }
}

} // namespace

// nocedit 0x004424c0
CCourse::CCourse(const engine::CDosIo &dosio) : dosio_(dosio) {}

// nocedit 0x004424e0
CCourse::~CCourse() = default;

// nocedit 0x004426c0
void CCourse::free() {
    frames_.clear();
}

// A negative count asked the original for an impossible block, which was fatal.
// nocedit 0x00442500
void CCourse::allocMemory(int count) {
    free();
    frames_.assign(static_cast<std::size_t>(std::max(count, 0)), {});
}

// Fields a line doesn't hold are left zero; the original left them uninitialised.
// nocedit 0x00442580
void CCourse::load(std::string_view filename) {
    free();
    const std::optional<std::string> text = dosio_.readFile("data", filename);
    if (!text) {
        common::displayErrorAndQuit(std::format("CCourse::load - can't open data\\{}", filename));
    }
    common::CTextScanner scanner(*text);
    scanner.skipLine();
    static_cast<void>(scanner.scanInteger());
    scanner.skipWhitespace();
    scanner.skipLine();
    const int count = scanner.scanInteger().value_or(0);
    scanner.expect(',');
    if (const std::optional<int> loop = scanner.scanInteger()) {
        loop_ = *loop != 0;
    }
    scanner.skipWhitespace();
    allocMemory(count);
    scanner.skipLine();
    for (CCourseFrame &frame : frames_) {
        for (float *field : {&frame.pos.x, &frame.pos.y, &frame.pos.z, &frame.orient.w,
                             &frame.orient.x, &frame.orient.y}) {
            scanField(scanner, *field);
            scanner.expect(',');
        }
        scanField(scanner, frame.orient.z);
        scanner.skipWhitespace();
    }
}

// nocedit 0x00442710
void CCourse::evaluate(float time, common::CVector3f &out_pos, common::CVector3f &out_euler) const {
    common::CQuaternion4f orient;
    interpolate(time, out_pos, orient);
    out_euler = matrixToEulerAngles(quaternionToMatrix3x4(orient));
}

// A looping course wraps time into its length; one that doesn't holds at its ends. The original
// read through a null pointer for an empty course, and past the end when rounding wrapped time
// up to exactly the length.
// nocedit 0x004427a0
void CCourse::interpolate(float time, common::CVector3f &out_pos,
                          common::CQuaternion4f &out_orient) const {
    if (frames_.empty()) {
        out_pos = {};
        out_orient = {.w = 1.0F};
        return;
    }
    const auto length = static_cast<int>(frames_.size());
    int index = 0;
    int next = 0;
    float fraction = 0.0F;
    if (!loop_) {
        if (time > 0.0F && time < static_cast<float>(length - 1)) {
            index = static_cast<int>(time);
            fraction = time - static_cast<float>(index);
            next = index + 1;
        } else if (time > 0.0F) {
            index = length - 1;
        }
    } else {
        const auto span = static_cast<float>(length);
        float wrapped = 0.0F;
        if (time >= 0.0F) {
            wrapped = time - (std::floor(time / span) * span);
        } else {
            wrapped = (std::floor(-time / span) * span) + time;
            if (wrapped < 0.0F) {
                wrapped += span;
            }
        }
        index = static_cast<int>(wrapped);
        fraction = wrapped - static_cast<float>(index);
        if (index >= length) {
            index = 0;
            fraction = 0.0F;
        }
        next = index + 1 < length ? index + 1 : 0;
    }
    const CCourseFrame &from = frames_[static_cast<std::size_t>(index)];
    if (static_cast<double>(fraction) <= kOnFrame) {
        out_pos = from.pos;
        out_orient = from.orient;
        return;
    }
    const CCourseFrame &to = frames_[static_cast<std::size_t>(next)];
    const float keep = 1.0F - fraction;
    out_pos = {.x = (from.pos.x * keep) + (to.pos.x * fraction),
               .y = (from.pos.y * keep) + (to.pos.y * fraction),
               .z = (from.pos.z * keep) + (fraction * to.pos.z)};
    out_orient = slerpQuaternion(from.orient, to.orient, fraction);
}

int CCourse::getLength() const {
    return static_cast<int>(frames_.size());
}

} // namespace nocturne::core
