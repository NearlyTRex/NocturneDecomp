# Testing

Two kinds of verification exist alongside the build: unit tests over the shim layer, and the
per-file compile/suspect checks described in
[decompilation-workflow.md](decompilation-workflow.md).

## Running them

```sh
ctest --test-dir build/<preset>
```

The test binaries are `EXCLUDE_FROM_ALL`, so an ordinary build does not pay for them. `ctest`
builds them itself: every test requires the `build_tests` fixture, which builds the
`nocturne_tests` target (and, in a coverage build, the exe the gate also reads) before any test
runs, so no run is green against a binary older than its sources.

`ctest -L <suite>` runs one suite, still after the build.

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
| `shims_core` | ASCII case handling, file search, host memory, FNV-1a, the clock, the debug log |
| `shims_game` | Walk turning |
| `shims_watcom` | The Watcom C library and its iostream stand-ins, path resolution, the C++ runtime's array helpers |
| `shims_win32` | `kernel32`, `advapi32`, Winsock on loopback, window messages and the built-in DLL registry |
| `shims_win32_sdl` | `user32`, `wingdi`, `mmsystem`, MCI movies and `shim_init`, on SDL's dummy video and audio drivers; the movies are written by the tests with FFmpeg, and what no movie makes fail, `ffmpeg_faults.h` does |
| `shims_directx` | DirectDraw's display mode, flip chain, Lock and Flip, through GL and through an SDL renderer, on SDL's dummy video driver; DirectSound's mixing, read back from SDL's disk audio driver |
| `shims_debug` | The focus trace, the frame-rate overlay and the sound-error report, over a stand-in for the game state they read |
| `shims_debug_dump` | The gdb dump tools, each writing into a temporary directory, over a stand-in for the engine state and calls they reach |
| `shims_gl` | Shader program building, the present quad and the pixel-format helpers, against the recorder; the window mode and the resolution list, on SDL's dummy video driver, with the shim settings in `nocturne.ini` through a stand-in for the engine's CIni |
| `shims_gl_api` | Loading the GL entry points, from a stand-in for `SDL_GL_GetProcAddress` |
| `shims_gl_present` | The presenter: context, scene target, letterboxed presents and the mouse mapping, its GL calls to the recorder and SDL's GL calls to a stand-in |
| `shims_renderer` | `trigl` batching, state, texture, vertex handling, the built-in DLL registry, and the mirror pass's field of view |
| `shims_renderer_gl` | `trigl` GL call sequences, the device and golden traces (`test_*_sequence.cpp`) |

The renderer suites are the interesting ones. They test **order**, not just answers: the
renderer reaches GL through a single table of function pointers, which `gl_recorder.cpp` fills
with recording stubs. That keeps `gl_api.cpp` — and SDL — out of the link, and makes the
sequence of GL calls an assertable artifact.

Golden traces live beside the tests in `renderer/golden` and are read from the source tree, so a
changed trace shows up as a reviewable diff rather than a rebuilt copy nobody sees.

## Coverage

The shims are held to full line, function and branch coverage, as the recreation is. The
decompiled `src/`, the generated `include/` and `main/main.cpp`, which builds with the decompiled
modules, don't count.
Files not there yet are listed in
[`tests/coverage_exclusions.txt`](../annotations/nocedit.exe/pseudocode/tests/coverage_exclusions.txt).
That list only shrinks: take a file off it once its tests cover it, and never add one, so a new
shim needs its tests to land with it.

`NOCTURNE_COVERAGE` instruments the shims and the tests with clang's source-based coverage, and
writes `coverage_args.txt`, the arguments for Workflows' `ci-cpp-coverage`. The decompiled
modules compile exactly as without it, so CI turns it on in the `exe-linux-x86_64` lane and the
modules come from the same ccache as the release build. Locally, the
`exe-linux-coverage-x86_64` preset keeps it out of your everyday build directory:

```sh
cmake --preset exe-linux-coverage-x86_64
cmake --build --preset exe-linux-coverage-x86_64
mapfile -t args < build/exe-linux-coverage-x86_64/coverage_args.txt
python3 ~/Repositories/Workflows/actions/build-env/ci_cpp_coverage.py "${args[@]}" \
    -- ctest --test-dir build/exe-linux-coverage-x86_64
```

The exe is one of the objects but never runs, so a shim no test links still counts, as unrun.
Only the Linux x86_64 build is measured, so a file compiled only for another platform isn't
gated.

## The Python tooling

The scripts in `scripts/Python`, `cmake/collect_sources.py` and `recreation/cmake/tidy.py` have
their own pytest suite under `tests/`, held to [pytest-testrex](https://github.com/NearlyTRex/TestRex)'s
rules and to full line and branch coverage. [tests/README.md](../tests/README.md) has the layout
and how to run it.

## Beyond unit tests

Much of what matters here cannot be unit tested — whether a frame looks right. The pattern the
renderer work settled on is an **A/B oracle**: render one held frame through both paths and
compare, flipping live rather than across runs. The rules that make it trustworthy are in
[debugging.md](debugging.md) and
[research/17-shader_renderer_migration/](../research/17-shader_renderer_migration/); the short
version is to sync captures to the real swap, and to establish the noise floor in the same run,
because more than one conclusion has turned out to be smaller than the noise it was measured
against.
