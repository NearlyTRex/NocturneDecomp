# CConveyor

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 2144 | fields | 2144 |
| nocturne | 2132 | fields | 2132 |
| bw1 | 2140 | fields | 2140 |
| blairwitch2 | 2488 | fields | 2488 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `base` | `CPlatform` | 0x0 | 0x0 | 0x0 | 0x0 |
| `size` | `CVector3f` | 0x72c | 0x720 | 0x728 | 0x884 |
| `direction` | `CVector3f` | 0x738 | 0x72c | 0x734 | 0x890 |
| `start_event` | `char[100]` | 0x744 | 0x738 | 0x740 | 0x89c |
| `stop_event` | `char[100]` | 0x7a8 | 0x79c | 0x7a4 | 0x900 |
| `state` | `int` | 0x80c | 0x800 | 0x808 | 0x964 |
| `actor_class` | `char[80]` | 0x810 | 0x804 | 0x80c | 0x968 |
