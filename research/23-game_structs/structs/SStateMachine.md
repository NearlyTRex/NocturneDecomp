# SStateMachine

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| blairwitch2 | 2124 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | blairwitch2 |
|---|---|---:|
| `state_names` | `char[20][25]` | 0x0 |
| `ref_states` | `SStateRef[50]` | 0x1f4 |
| `state_count` | `int` | 0x834 |
| `ref_state_count` | `int` | 0x838 |
| `initial_state` | `int` | 0x83c |
| `current_state` | `int` | 0x840 |
| `next_state` | `int` | 0x844 |
| `transition_delay` | `float` | 0x848 |
