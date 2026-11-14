# CActorDestination

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 500 | fields | 500 |
| nocturne | 492 | fields | 492 |
| bw1 | 500 | fields | 500 |
| blairwitch2 | 848 | fields | 848 |
| bw3 | 500 | fields | 500 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CDemonActor` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `dest_actor` | `CDemonActor*` | 0x158 | 0x150 | 0x158 | 0x2b4 | 0x158 |
| `dest_class` | `char[40]` | 0x15c | 0x154 | 0x15c | 0x2b8 | 0x15c |
| `triggered` | `int` | 0x184 | 0x17c | 0x184 | 0x2e0 | 0x184 |
| `what_event` | `char[100]` | 0x188 | 0x180 | 0x188 | 0x2e4 | 0x188 |
| `persistent_event_flag` | `int` | 0x1ec | 0x1e4 | 0x1ec | 0x348 | 0x1ec |
| `needs_actor_search` | `int` | 0x1f0 | 0x1e8 | 0x1f0 | 0x34c | 0x1f0 |
