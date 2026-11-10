# CFlameCan

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 1512 | fields | 1512 |
| nocturne | 1496 | fields | 1496 |
| bw1 | 1512 | fields | 1512 |
| blairwitch2 | 2208 | fields | 2208 |
| bw3 | 1512 | fields | 1512 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CDemonActor` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `model` | `CKeyFramedModelInstance` | 0x158 | 0x150 | 0x158 | 0x2b4 | 0x158 |
| `on_fire` | `int` | 0x2d4 | 0x2cc | 0x2d4 | 0x430 | 0x2d4 |
| `time_to_explode` | `float` | 0x2d8 | 0x2d0 | 0x2d8 | 0x434 | 0x2d8 |
| `on_fire_condition` | `char[100]` | 0x2dc | 0x2d4 | 0x2dc | 0x438 | 0x2dc |
| `flame` | `CFlame` | 0x340 | 0x338 | 0x340 | 0x49c | 0x340 |
| `is_visible` | `int` | 0x5e4 | 0x5d4 | 0x5e4 | 0x89c | 0x5e4 |
