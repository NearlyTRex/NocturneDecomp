# Testing

Two kinds of verification exist alongside the build: unit tests over the shim layer, and the
per-file compile/suspect checks described in
[decompilation-workflow.md](decompilation-workflow.md).

## Running them

```sh
cmake --build build/<preset> --target nocturne_tests
ctest --test-dir build/<preset>
```

The test binaries are `EXCLUDE_FROM_ALL`, so an ordinary build does not pay for them — but
`ctest` only runs what is already built, which means **building the target first is not
optional**. A stale test binary will report a green run against code you have since changed.

`ctest -L <suite>` runs one suite.

## Adding tests

Tests live in `pseudocode/tests/`, which mirrors `pseudocode/`: the test for
`shims/core/file_search.cpp` is `tests/shims/core/test_file_search.cpp`. Any directory there
with a `CMakeLists.txt` is a suite and is found automatically; each `test_*.cpp` in it is one
test binary, also found automatically, named by its path (`shims/core/test_file_search`). A
suite names the code it links:

```cmake
nocturne_test_suite(shims_core
    SUBJECTS                     # relative to pseudocode/
        shims/core/file_search.cpp
        src/some/annotated.cpp
    SUPPORT helper.cpp           # test-side files with no main(), relative to the suite
)
```

`TESTS`, `EXCLUDE` and `DEFINITIONS` cover the rest; see
[`cmake/nocturne_tests.cmake`](../cmake/nocturne_tests.cmake). Subjects are named rather than
globbed: a file that pulls in GL or engine globals should be noticed when it is added. The
globs are `CONFIGURE_DEPENDS`, so a new test or suite is picked up by the next build.

## The harness

[`tests/nocturne_test.h`](../annotations/nocedit.exe/pseudocode/tests/nocturne_test.h)
— header-only, no external dependency, deliberately:

```c
#include "nocturne_test.h"

NOCTURNE_TEST(flags_map_to_depth_state) {
    CHECK_EQ(f(0), 1);
    CHECK(p != nullptr);
}

NOCTURNE_TEST_MAIN()
```

A failing check reports file, line, expression and both values, then **lets the rest of the body
run** — one broken case in a loop over 256 flag words should print all 256 failures, not stop at
the first.

The project already builds SDL2 and FFmpeg from source; a unit-test framework would be a third
external tree to fetch, pin and cross-build for the 32-bit lane, in exchange for assertion
macros and a runner. This is those two things.

## What is covered

| Suite | Subject |
|---|---|
| `shims_core` | ASCII case handling, file search |
| `shims_game` | Walk turning |
| `shims_watcom` | Watcom CRT I/O and path resolution |
| `shims_win32` | `kernel32` entry points and the built-in DLL registry |
| `shims_renderer` | `trigl` batching, state, texture, vertex handling |
| `shims_renderer_gl` | `trigl` GL call sequences and golden traces (`test_*_sequence.cpp`) |

The renderer suites are the interesting ones. They test **order**, not just answers: the
renderer reaches GL through a single table of function pointers, which `gl_recorder.cpp` fills
with recording stubs. That keeps `gl_api.cpp` — and SDL — out of the link, and makes the
sequence of GL calls an assertable artifact.

Golden traces live beside the tests in `renderer/golden` and are read from the source tree, so a
changed trace shows up as a reviewable diff rather than a rebuilt copy nobody sees.

## Beyond unit tests

Much of what matters here cannot be unit tested — whether a frame looks right. The pattern the
renderer work settled on is an **A/B oracle**: render one held frame through both paths and
compare, flipping live rather than across runs. The rules that make it trustworthy are in
[debugging.md](debugging.md) and
[research/17-shader_renderer_migration/](../research/17-shader_renderer_migration/); the short
version is to sync captures to the real swap, and to establish the noise floor in the same run,
because more than one conclusion has turned out to be smaller than the noise it was measured
against.
