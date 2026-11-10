# CSpawner

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw3 | 9588 | fields | 9588 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw3 |
|---|---|---:|
| `base` | `CDemonActor` | 0x0 |
| `spawn_name` | `char[30]` | 0x158 |
| `actor_class_name` | `char[30]` | 0x176 |
| `starting_state` | `char[32]` | 0x194 |
| `spawn_timer` | `float` | 0x1b4 |
| `reset_timer` | `float` | 0x1b8 |
| `spawn_time` | `float` | 0x1bc |
| `number_of_spawns` | `int` | 0x1c0 |
| `max_number_of_spawns` | `int` | 0x1c4 |
| `dont_spawn_when_in_view` | `int` | 0x1c8 |
| `start_guard_dist` | `float` | 0x1cc |
| `spawn_model` | `CDeformableModelInstance` | 0x1d0 |
