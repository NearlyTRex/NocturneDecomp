<!-- GitHub shows the release title above these notes, so they start at level 2. -->
<!-- markdownlint-disable-file MD041 -->
## Downloads

Each archive is a self-contained build of the engine for one platform and flavour:

| Archive | Platform | Flavour |
|---|---|---|
| `nocturne-{version}-exe-linux-x86_64.tar.gz` | Linux, 64-bit | Enhanced |
| `nocturne-{version}-exe-windows-x86_64.zip` | Windows, 64-bit | Enhanced |
| `nocturne-{version}-exe-linux-vanilla-x86_64.tar.gz` | Linux, 64-bit | Vanilla |
| `nocturne-{version}-exe-windows-vanilla-x86_64.zip` | Windows, 64-bit | Vanilla |
| `nocturne-{version}-exe-linux-aarch64.tar.gz` | Linux, 64-bit Arm | Enhanced |
| `nocturne-{version}-exe-linux-vanilla-aarch64.tar.gz` | Linux, 64-bit Arm | Vanilla |
| `nocturne-{version}-exe-macos-arm64.tar.gz` | macOS, Apple silicon | Enhanced |
| `nocturne-{version}-exe-macos-vanilla-arm64.tar.gz` | macOS, Apple silicon | Vanilla |
| `nocturne-{version}-exe-macos-x86_64.tar.gz` | macOS, Intel | Enhanced |
| `nocturne-{version}-exe-macos-vanilla-x86_64.tar.gz` | macOS, Intel | Vanilla |

- **Enhanced** includes the project's additions and fixes to the original's defects: the
  automap, save slots, gamepad support, windowed and borderless modes, and HUD scaling.
- **Vanilla** answers every authenticity toggle the way the shipped game did, so it plays as the
  retail game played, bugs included.

See [docs/releasing.md](https://github.com/{repository}/blob/{tag}/docs/releasing.md#the-vanilla-lane)
for exactly what differs.

## No game data is included

These archives hold the engine only. The PODs and original executables are not redistributable,
so you need your own copy of **Nocturne** (1999) to play.

## Installing

1. Install Nocturne from your own copy as usual.
2. Unpack the archive into that same install folder, so `nocturne` (or `nocturne.exe`) sits
   beside the game's own files.
3. **For the cutscenes:** create a `video` folder in the install folder and copy the game's
   `.AVI` files into it. The original installer doesn't do this. The game looks in `video`, but
   the movies ship in `AVI`, which is why the retail game never played them. The name isn't
   case-sensitive, even on Linux.
4. **On macOS:** the build is not signed, so Gatekeeper refuses it at first. Clear the download
   flag once with `xattr -dr com.apple.quarantine .` inside the unpacked folder. The macOS and
   Arm builds are compiled and unit-tested in CI but have had little testing on real machines
   yet.

To keep the engine out of the install folder, run it from anywhere with
`--data-dir <install folder>`. Add `--user-dir <folder>` to keep saves, settings and logs
somewhere else too; the install is then only read.

## Verifying your download

Compare against `SHA256SUMS.txt`:

```sh
sha256sum -c SHA256SUMS.txt --ignore-missing
```

Each build also reports what it is, before it needs a window or any game data:

```sh
./nocturne --version
```
