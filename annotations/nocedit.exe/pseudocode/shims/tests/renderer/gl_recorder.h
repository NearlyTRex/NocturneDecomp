#pragma once

// =============================================================================
// GL RECORDER — a fake driver that remembers what it was told
// =============================================================================
//
// The renderer reaches OpenGL through one global table of function pointers
// (`gl`, in gl/gl_api.h), which it fills at startup from SDL. A test can fill
// that table instead, and then the renderer runs with no context, no window and
// no driver — the whole of trigl_gl.cpp becomes testable in a plain unit test.
//
// This exists because of the class of bug the pure-logic suites cannot reach.
// Those suites test functions: given this input, expect that output. The faults
// that have actually shipped in this renderer were not wrong answers, they were
// wrong ORDER — a texture upload that left its own binding behind so the batch
// flushed after it wore the wrong image, a present that turned depth testing off
// and a state cache that then believed it was still on. Every one of those is a
// property of the sequence of calls, and is invisible to a test that only looks
// at return values.
//
// So the recorder keeps the call log, and tests assert over the log. It also
// models just enough state to answer the queries the renderer makes of the
// driver — texture bindings in particular, because the fix for the binding bug
// works by reading the current binding back and putting it where it found it,
// and a fake that always answered 0 would let that fix pass while broken.
//
// Deliberately NOT a GL implementation: no rasterising, no validation, no
// completeness rules. It records, and it answers the handful of gets the
// renderer asks. Anything else returns a plausible fixed value.

#include "gl/gl_api.h"

#include <cstring>
#include <string>
#include <vector>

namespace gl_recorder {

struct Call {
    std::string name;
    unsigned    a = 0, b = 0, c = 0, d = 0;
};

struct State {
    std::vector<Call> calls;

    // The bindings the renderer can read back, per texture unit.
    unsigned active_unit = 0;
    unsigned bound_texture[8] = {0};

    unsigned bound_program = 0;
    unsigned bound_vao = 0;

    // Name allocators. Start at 1: zero means "none" throughout GL, and a fake
    // that handed out 0 would make "nothing bound" and "this object" identical.
    unsigned next_texture = 1;
    unsigned next_buffer  = 1;
    unsigned next_vao     = 1;
    unsigned next_shader  = 1;
    unsigned next_program = 1;

    void reset() {
        calls.clear();
        active_unit = 0;
        memset(bound_texture, 0, sizeof(bound_texture));
        bound_program = bound_vao = 0;
        next_texture = next_buffer = next_vao = next_shader = next_program = 1;
    }

    // --- reading the log -----------------------------------------------------

    int count(const char *name) const {
        int n = 0;
        for (const Call &call : calls) {
            if (call.name == name) ++n;
        }
        return n;
    }

    int index_of_last(const char *name) const {
        for (int i = (int)calls.size() - 1; i >= 0; --i) {
            if (calls[(size_t)i].name == name) return i;
        }
        return -1;
    }

    // The value the pipeline held for `name`'s first argument at the point in
    // the log where `at` happened — which is the question every ordering
    // invariant reduces to: what was bound when this draw went out?
    unsigned value_at(const char *name, int at) const {
        unsigned value = 0;
        for (int i = 0; i < at && i < (int)calls.size(); ++i) {
            if (calls[(size_t)i].name == name) value = calls[(size_t)i].a;
        }
        return value;
    }
};

State &state();

// Fills the global `gl` table with the recorders and clears the log. Call once
// per test before touching the renderer.
void install();

}  // namespace gl_recorder
