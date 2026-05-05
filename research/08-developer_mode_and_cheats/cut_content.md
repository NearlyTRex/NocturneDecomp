# Cut Content — Features in the Binary That Never Shipped

The `nocedit.exe` editor binary contains code for features that exist as compilable, link-able infrastructure but were never reachable from any UI in any shipped Nocturne build. Unlike [`retail_vs_editor_mysteries.md`](retail_vs_editor_mysteries.md) (which covers features the *editor* build hides that retail exposed), this doc covers features that **neither retail nor the editor build ever exposed** — they are cut content, code that was developed far enough to link but cut before the menu hookup was written (or after it was removed).

Each section: **the feature** → **what's in the binary** → **why we believe it never shipped** → **what (if anything) is interesting to do with the orphan code**.

## 1. Network play (multiplayer / netplay)

**Feature:** Host- and join-style network multiplayer over UDP/TCP, with a lobby, packet handlers, simulation history, and chat.

**Status:** Cut before ship. Retail Nocturne never had multiplayer. This binary's netplay infrastructure is unfinished work that was left link-able but never UI-exposed in *any* Nocturne build.

### What's in the binary

**Full netplay infrastructure.** `core/netgame.cpp` has 50+ `CNetGame_*` functions: `init`, `initializeNetwork`, `initializeNetworkToHost`, `initializeNetworkToJoin`, `runLobby`, `disconnect`, `addPlayer`, `processPacket`, `processClientFrame`, `applySimFrameHistory`, `applyNewGameSettings`, `gameSettingsChanged`, `getMyControls`, `processChatOut`. The `support/trisock.cpp` socket layer is also present (UDP/TCP, IP parsing, Winsock startup, address conversion).

**Player identity is established.** `CNetGame::init_FUN_0053f780` reads the `USERNAME` env var (falls back to `COMPUTERNAME`, then literal `"MyComputer"`) and copies it into `player_name`. So netplay *does* run its init path on every launch — just to set up the player identity, not to start a session.

**Host/join entry points exist but are orphans.** `core/game.cpp:hostNetworkGame_FUN_004e2f10` and `core/game.cpp:joinNetworkGame_FUN_004e2fc0` are the user-facing wrappers. `hostNetworkGame` calls `CNetGame::initializeNetworkToHost` → opens a "Select mission to play" dialog → enters the lobby loop. `joinNetworkGame` does the join-side equivalent. **Both are completely orphaned** — no caller anywhere in the binary, in any function, in any keep file. They're dead code.

**No menu strings.** No string literal in `core/menu.cpp` or `core/main.c` matches `"Host"`, `"Join"`, `"Multiplayer"`, or `"Net Game"`. There is no menu entry that would have called `hostNetworkGame` / `joinNetworkGame`.

**`runGameSession` still has netplay paths.** The pick-list dialog handler in `runGameSession_FUN_004daf80` (lines 165–197) still references `g_CNetGamePtr->connection_type` and shows pop-ups like:
- "You are connected to a network game. Do you want to leave the game?"
- "You are hosting a network game. Do you want to abort the game?"

These paths are reachable *if* `connection_type` is `CONNECTION_HOST` or anything-non-zero, but since the binary never invokes `hostNetworkGame` / `joinNetworkGame`, `connection_type` stays `0` and these dialogs never fire.

**Two explicit stubs in trisock.** `support/trisock.cpp:shouldNeverBeCalled1_FUN_005e1a80` and `shouldNeverBeCalled2_FUN_005e1ab0` immediately call `displayErrorAndQuit("Should never be called!")`. These are intentional dead-ends that the rest of the trisock code routes around. Consistent with a partial implementation: callbacks that the design called for but that no caller ever exercised, left as fatal stubs to surface accidental wiring during development.

### Best-guess explanation

Netplay was developed far enough to compile and link — `CNetGame`, the lobby, packet handlers, the trisock socket layer, and the running-session pick-list dialogs ("You are connected to a network game…") all exist. But it was cut before ship: the menu entries that would have called `hostNetworkGame` / `joinNetworkGame` were never written, or were written and removed early enough that no string evidence remains. The orphan functions and the running-session dialog branches survive because the linker pulled them in via the `CNetGame` vtable / function-pointer references and didn't dead-strip them.

### What remains uncertain

- **Was netplay ever functionally tested?** The presence of the Mission Editor's "Rebuild waypoint connectivity" option (entry W, "for net-sim accuracy") suggests *something* exercised the net-sim path during development, even if multiplayer never shipped. Whether the lobby or `runLobby` loop ever ran end-to-end on real sockets is unknown without a debug log or a working build to invoke them from.
- **Is there an earlier Terminal Reality title with a working version of this code?** The trisock layer and `CNetGame` architecture look mature enough to be ported from a prior shipped multiplayer title (4x4 Evolution, Monster Truck Madness 2, etc.). If so, this is "code carried forward, UI never written" rather than "feature attempted from scratch and abandoned."
- **Are there any dead-code menu strings in `g_LicenseAgreement` or elsewhere that reference netplay?** The encrypted blobs (license text, cheat strings) haven't been fully searched for "Host"/"Join". A finding there would shift the picture from "UI never written" toward "UI written and removed."

### Reachability experiment — `NOCTURNE_AUTHENTIC_NETPLAY`

Since retail never had this UI, there is no "authentic" behavior to restore. The flag below follows the `NOCTURNE_AUTHENTIC_*` polarity convention — `1` means "match the shipped binary" (no UI, the dead code stays dead) and `0` means "dev-friendly experimentation" (default; new hotkeys exposed to exercise the orphan code).

In `shims/shim_config.h`, `NOCTURNE_AUTHENTIC_NETPLAY` defaults to `0`. The keep files below wire two unused main-menu hotkeys into the orphan host/join wrappers when the flag is `0`, and compile them out (matching shipped behavior) when the flag is `1`:

- `core/main.c/enterMainGameMenu_FUN_00507a50.keep.c` and `core/menu.cpp/showMainGameMenu_FUN_00512f40.keep.cpp` — two hotkey checks alongside the existing Ctrl+D / Ctrl+L / Ctrl+F / Ctrl+M handlers, all under `#if !NOCTURNE_AUTHENTIC_NETPLAY`:
  - **Ctrl+H** → `core_game_cpp_hostNetworkGame_FUN_004e2f10()`
  - **Ctrl+J** → `core_game_cpp_joinNetworkGame_FUN_004e2fc0()`
- `core/menu.cpp/renderMenuAndGetChoice_FUN_00510000.keep.cpp` (optional, not yet wired) — draw a hint line ("Press CTRL+H to host, CTRL+J to join") near the existing "Press CTRL+D" banner, also gated `#if !NOCTURNE_AUTHENTIC_NETPLAY`.

Caveats:
- Even with hotkeys wired, netplay needs Winsock / socket reachability via the `kernel32` / `wsock32` shim layer. Verify those shims implement `WSAStartup`, `socket()`, `bind()`, `recv()`, `send()`, etc. before testing connectivity.
- The lobby and packet handlers may not have been completed/tested end-to-end before being cut. Expect crashes, asserts in `shouldNeverBeCalled*`, or hangs in `runLobby` — those are findings about the unfinished state of the code, not regressions in this project.

Override with `-DNOCTURNE_AUTHENTIC_NETPLAY=1` to revert to authentic shipped behavior (netplay unreachable, dead code remains dead).

## How to add a new cut-content entry

When you find another feature that exists in the binary but was never UI-exposed in any shipped build, follow the per-section template:

1. **Feature** — what the cut feature is in one sentence.
2. **Status** — your evidence-backed claim about *when* it was cut (before ship vs. removed late, with whatever evidence).
3. **What's in the binary** — concrete file:line references to the orphan code, vtables, dialog strings, etc.
4. **Best-guess explanation** — synthesis with speculation clearly labeled.
5. **What remains uncertain** — open questions that would change the picture if answered.
6. **Reachability experiment** (optional) — only if there's a sensible way to invoke the orphan code from a shim flag for research; skip if it's purely archival.

If a feature might be cut content *or* might be a retail-vs-editor difference and you can't tell yet, put it in [`retail_vs_editor_mysteries.md`](retail_vs_editor_mysteries.md) until the evidence resolves.
