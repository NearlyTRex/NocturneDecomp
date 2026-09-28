# Releasing

## Where the version lives

`CMakeLists.txt`'s `project(NocturneDecomp VERSION x.y.z ...)` is the only place the number is
written. Everything else derives from it:

| Thing | Where it comes from |
|---|---|
| `NOCTURNE_VERSION` | the `project()` line |
| `NOCTURNE_VERSION_GIT` | `git describe --tags --always --dirty` at build time |
| `NOCTURNE_VERSION_BUILD` | `NOCTURNE_BUILD_TAG`, set per preset in `CMakePresets.json` |

`cmake/write_version.cmake` writes `build/<preset>/generated/nocturne_version.h` from
`cmake/nocturne_version.h.in`. It runs on **every build**, not only on reconfigure — `git
describe` answers differently after every commit, and a version that refreshes only when cmake
happens to re-run names a commit that is not the one in the binary. The write goes through
`copy_if_different`, so an unchanged answer rebuilds nothing.

Only `shims/core/version.cpp` includes the generated header. Everything else asks through
`shims/core/version.h`, which is reached from `nocturne.h` like any other shim. That split is
what keeps a new commit from rebuilding the whole tree.

## Where it shows

```sh
./build/exe-linux-x86_64/nocturne --version
NocturneDecomp 0.1.0 (v0.1.0-12-gae024d0-dirty), exe-linux-x86_64
```

A release build names its release exactly:

```sh
./nocturne --version
NocturneDecomp 0.1.0 (v0.1.0), exe-linux-x86_64
```

The `Release` workflow only creates the tag after the archives are built, so each build tags its
own checkout first, locally and never pushed, with the same tag on the same commit. Without that,
`git describe` would find no tag and stamp a bare commit hash, which is what v0.1.0 shipped with.

`--version` answers before any initialisation, so it works on a binary that cannot open a
window or find the game data. The same line goes to the console at session start, next to the
shipped `game.cpp built on` banner, so it is in every `nocturne_debug.log` anyone sends.

The menu corner carries `git describe`, right-aligned under the copyright line, behind
`NOCTURNE_AUTHENTIC_MENU_VERSION` — see [authenticity-flags.md](authenticity-flags.md).

## The vanilla lane

A release ships in two flavours. The default lane is the enhanced build — the automap, the save
slots, the gamepad layer, the fixes to the original's defects. The **vanilla** lane answers every
authenticity toggle the way the shipped game did, so it plays as the retail game played, bugs
included.

```sh
cmake --preset exe-linux-vanilla-x86_64
-- vanilla: 58 toggles set to the shipped behaviour
-- vanilla: 6 left at their defaults (host): FORMAT_STRINGS, WINDOWS,
   UI_CURSOR_WARP, SOUND_DEVICE, RENDERER_DLL, HEAP_REPORT
```

`NOCTURNE_VANILLA=ON` includes `cmake/vanilla.cmake`, which reads the toggles out of
`shim_config_authentic.h`'s own index table and sets them by **kind** rather than by name:

| Kind | Vanilla | Why |
|---|---|---|
| `defect` | 1 | the shipped bug, restored |
| `choice` | 1 | the shipped answer rather than the one we prefer |
| `addition` | 1 | the feature absent, since the shipped game had none of it |
| `host` | default | at 1 these ask for a Windows that is not there |
| `binary` | 0 | these pick *which* binary; vanilla is retail nocturne.exe, acceleration included |

Reading the kinds instead of listing names means a toggle added later is authentic in vanilla the
moment it exists, with nobody having to remember this file. The `host` exceptions are not a
matter of taste: `RENDERER_DLL` at 1 wants the renderer as a file on disk when it is compiled
in, and `UI_CURSOR_WARP` at 1 turns `SetCursorPos` into an SDL warp that drags the pointer away
every frame. A vanilla build nobody can run would not be a faithful one.

An explicit `-D` still wins, so `-DNOCTURNE_VANILLA=ON -DNOCTURNE_AUTHENTIC_AUTOMAP=0` is a
vanilla build that still has the automap.

Both lanes play the opening movie when `video/opening.avi` is present, as retail did; the
renderer starts on a built-in one (trigl) rather than the shipped default `trid3d.dll`.

**Two binaries, not one switch.** The toggles are compile-time and `shim_config.h` reaches every
translation unit, so a single binary cannot carry both sets.

## Cutting a release

1. **Actions → Prepare Release → Run workflow**, with `patch`, `minor`, `major` or an exact
   `x.y.z`. It bumps `project(NocturneDecomp VERSION ...)` on a `release/vX.Y.Z` branch and opens
   a pull request.
2. **Merge it.** The `Release` workflow sees a version with no tag yet, builds four lanes —
   `exe-linux-x86_64`, `exe-windows-x86_64` and the two vanilla ones — tags the merge commit, and
   attaches the archives and a `SHA256SUMS.txt` to a **draft** release. Don't tag it yourself:
   a tag that already exists tells the workflow the version is released, and it builds nothing.
3. **Check the draft, then publish it by hand.** It becomes the *Latest* release on publishing.

The notes open with [`.github/release-notes.md`](../.github/release-notes.md), which says what
each archive is and that no game data is included, followed by GitHub's generated notes. Edit
the draft to add anything specific to the release.

A push that doesn't change the version finds its tag already there and builds nothing, so the
version in `CMakeLists.txt` and the tag cannot drift apart.

The workflows come from the shared
[NearlyTRex/Workflows](https://github.com/NearlyTRex/Workflows) library; see its README for how
`release-check`, `cpp-build` and `release` fit together.

## Building an archive locally

```sh
./scripts/Bash/package_release.sh                              # exe-linux-x86_64
./scripts/Bash/package_release.sh exe-windows-x86_64
./scripts/Bash/package_release.sh exe-linux-vanilla-x86_64
./scripts/Bash/package_release.sh --no-build exe-linux-x86_64
```

Archives land in `dist/`, named `nocturne-<version>-<preset>.tar.gz` (or `.zip` for Windows).

The default is **not** the ASan preset that everything else in the repository defaults to. A
release must not carry sanitizer instrumentation: it is far slower, and UBSan aborts the process
on the first finding, which for a player is a crash.

## What an archive holds

The executable, the shared libraries it needs, `LICENSE`, `gamecontrollerdb.txt` and its
licence, `README.md`, and a `VERSION.txt` that is the binary's own `--version` output — so an
unpacked directory can still say what it is.

**No game data.** The PODs and the original executables are not in the repository and are not
redistributable. An archive holds the engine; whoever runs it supplies their own copy of the
game, which is the arrangement the build has always had.

## The runpath, and why it is `$ORIGIN`

SDL2 and SDL2_ttf are built from source as shared objects under `build/<preset>/_deps/`, and the
link records their absolute paths. That is right for running out of the build tree and useless
anywhere else — an archive would carry a runpath naming a directory on the machine that built
it. The `nocturne` target therefore appends `$ORIGIN` to its runpath on non-Windows, and
`package_release.sh` copies those `.so` files in beside the binary under the SONAME the loader
asks for. Both keep working: the build tree resolves through the absolute entries, the archive
through `$ORIGIN`.

Check an archive is self-contained by unpacking it somewhere else and running `ldd ./nocturne` —
nothing should say *not found*, and the SDL lines should point inside the unpacked directory.
