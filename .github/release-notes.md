<!-- GitHub shows the release title above these notes, so they start at level 2. -->
<!-- markdownlint-disable-file MD041 -->
## No game data is included

These archives hold the engine only. The PODs and original executables are not redistributable,
so you need your own copy of **Nocturne** (1999) to play.

## Which build?

Every platform comes in two flavours:

- **Enhanced** includes the project's additions and fixes to the original's defects: the
  automap, save slots, gamepad support, windowed and borderless modes, and HUD scaling.
- **Vanilla** answers every authenticity toggle the way the shipped game did, so it plays as the
  retail game played, bugs included.

See [docs/releasing.md](https://github.com/{repository}/blob/{tag}/docs/releasing.md#the-vanilla-lane)
for exactly what differs.

## Windows

| Archive | System | Flavour |
|---|---|---|
| `nocturne-{version}-exe-windows-x86_64.zip` | Windows, 64-bit | Enhanced |
| `nocturne-{version}-exe-windows-vanilla-x86_64.zip` | Windows, 64-bit | Vanilla |

1. Install Nocturne from your own copy as usual.
2. Unpack the archive into that same install folder, so `nocturne.exe` replaces the game's own.
3. Set up the cutscenes ([below](#cutscenes)).

**Reporting a crash:** the game shows a message box and saves a crash report to
`%LOCALAPPDATA%\NocturneDecomp\nocturne_crash.txt`. Attach it, along with the `nocturne_*.log`
files from the game folder.

## macOS

| Archive | System | Flavour |
|---|---|---|
| `nocturne-{version}-exe-macos-arm64.tar.gz` | Apple silicon | Enhanced |
| `nocturne-{version}-exe-macos-vanilla-arm64.tar.gz` | Apple silicon | Vanilla |
| `nocturne-{version}-exe-macos-x86_64.tar.gz` | Intel | Enhanced |
| `nocturne-{version}-exe-macos-vanilla-x86_64.tar.gz` | Intel | Vanilla |

1. Unpack the archive and move `Nocturne.app` (or `Nocturne Vanilla.app`) wherever you like,
   such as `/Applications`.
2. The app is not signed with a developer identity, so Gatekeeper refuses it at first. Clear the
   download flag once: `xattr -dr com.apple.quarantine /Applications/Nocturne.app`.
3. Start the app once. It creates `~/Library/Application Support/NocturneDecomp/`, opens it in
   Finder, and asks for the game files.
4. Copy everything from a Nocturne install folder into it: a Windows install, or one made under
   Wine or CrossOver. Both apps share this folder, saves included.
5. Set up the cutscenes ([below](#cutscenes)), then start the app again.

**Reporting a crash:** macOS saves its own crash report to
`~/Library/Logs/DiagnosticReports/` as `Nocturne-<date>.ips` (`Nocturne Vanilla-<date>.ips` for the
vanilla app). Attach the newest one, along with the `nocturne_*.log` files from
`~/Library/Application Support/NocturneDecomp/`.

The macOS builds are compiled in CI but have had little testing on real Macs yet.

## Linux

| Archive | System | Flavour |
|---|---|---|
| `nocturne-{version}-exe-linux-x86_64.tar.gz` | x86-64 | Enhanced |
| `nocturne-{version}-exe-linux-vanilla-x86_64.tar.gz` | x86-64 | Vanilla |
| `nocturne-{version}-exe-linux-aarch64.tar.gz` | 64-bit Arm | Enhanced |
| `nocturne-{version}-exe-linux-vanilla-aarch64.tar.gz` | 64-bit Arm | Vanilla |

1. Copy a Nocturne install folder onto the machine: a Windows install, or one made under Wine.
2. Unpack the archive into that folder, so `nocturne` sits beside the game's own files.
3. Set up the cutscenes ([below](#cutscenes)).

**Reporting a crash:** start the game from a terminal (`./nocturne`) and attach what it prints,
along with the `nocturne_*.log` files from the game folder. On distributions that use
systemd-coredump, `coredumpctl info nocturne` shows the backtrace of the most recent crash.

The Arm builds are compiled and unit-tested in CI but have had little testing on real machines yet.

## Cutscenes

The game looks for its movies in a `video` folder, but they ship in `AVI`, which is why the retail
game never played them. Create a `video` folder in the game folder and copy the `.AVI` files into
it. The name isn't case-sensitive, even on Linux and macOS.

## Keeping the engine apart from the game

On Windows and Linux, run the engine from anywhere with `--data-dir <game folder>`. Add
`--user-dir <folder>` to keep saves, settings and logs somewhere else too; the game folder is
then only read. On macOS, `--data-dir` replaces the Application Support folder.

## Verifying your download

Compare against `SHA256SUMS.txt`:

```sh
sha256sum -c SHA256SUMS.txt --ignore-missing
```

Each build also reports what it is, before it needs a window or any game data:

```sh
./nocturne --version                                # Windows and Linux
/Applications/Nocturne.app/Contents/MacOS/Nocturne --version   # macOS
```
