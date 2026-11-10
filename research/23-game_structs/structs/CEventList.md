# CEventList

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 20812 | fields | — |
| nocturne | 20812 | fields | — |
| bw1 | unsized | placeholder | — |
| blairwitch2 | unsized | placeholder | — |
| bw3 | unsized | placeholder | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `events` | `SEventNameBlock` | 0x0 | 0x0 |  |  |  |
| `current_events` | `SEventNameBlock` | 0xc84 | 0xc84 |  |  |  |
| `game_flags` | `SEventNameBlock` | 0x1908 | 0x1908 |  |  |  |
| `persistent_events` | `SEventNameBlock` | 0x258c | 0x258c |  |  |  |
| `timers` | `STimerBlock` | 0x3210 | 0x3210 |  |  |  |
| `counters` | `SCounterBlock` | 0x337c | 0x337c |  |  |  |
| `actor_vars` | `SActorVarBlock` | 0x34e8 | 0x34e8 |  |  |  |
| `sfx_handles` | `SSfxBlock` | 0x3ac8 | 0x3ac8 |  |  |  |
