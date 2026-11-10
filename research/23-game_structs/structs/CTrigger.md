# CTrigger

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 880 | fields | 880 |
| nocturne | 872 | fields | 872 |
| bw1 | 884 | fields | 884 |
| blairwitch2 | 1232 | fields | 1232 |
| bw3 | 884 | fields | 884 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CDemonActor` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `test_radius` | `float` | 0x158 | 0x150 | 0x158 |  | 0x158 |
| `event_type` | `ETriggerEventType` | 0x15c | 0x154 | 0x15c |  | 0x15c |
| `trigger_size` | `CVector3f` | 0x160 | 0x158 | 0x160 |  | 0x160 |
| `trigger_state` | `int` | 0x16c | 0x164 | 0x16c |  | 0x16c |
| `trigger_shape` | `ETriggerShape` | 0x170 | 0x168 | 0x170 |  | 0x170 |
| `trigger_cause` | `ETriggerCause` | 0x174 | 0x16c | 0x174 | 0x2d0 | 0x174 |
| `actor_name` | `char[80]` | 0x178 | 0x170 | 0x178 | 0x2d4 | 0x178 |
| `actor_type` | `char[80]` | 0x1c8 | 0x1c0 | 0x1c8 | 0x324 | 0x1c8 |
| `pressure_plate` | `int` | 0x218 | 0x210 | 0x218 | 0x374 | 0x218 |
| `light_min` | `float` | 0x21c | 0x214 | 0x21c | 0x378 | 0x21c |
| `light_max` | `float` | 0x220 | 0x218 | 0x220 | 0x37c | 0x220 |
| `on_event` | `char[100]` | 0x224 | 0x21c | 0x224 | 0x380 | 0x224 |
| `off_event` | `char[100]` | 0x288 | 0x280 | 0x288 | 0x3e4 | 0x288 |
| `prev_triggered` | `int` | 0x2ec | 0x2e4 | 0x2ec | 0x448 | 0x2ec |
| `event_flag` | `int` | 0x2f0 | 0x2e8 | 0x2f0 | 0x44c | 0x2f0 |
| `laser_type` | `int` | 0x2f4 | 0x2ec | 0x2f4 | 0x450 | 0x2f4 |
| `hit_points` | `float` | 0x2f8 | 0x2f0 | 0x2f8 | 0x454 | 0x2f8 |
| `triggering_actor` | `CDemonActor*` | 0x2fc | 0x2f4 |  |  |  |
| `auto_aim_at_me` | `int` | 0x300 | 0x2f8 |  |  |  |
| `damage_actor_wildcard_name` | `char[100]` | 0x304 | 0x2fc |  |  |  |
| `cached_actor` | `CDemonActor*` | 0x368 | 0x360 |  | 0x4c8 |  |
| `damage_cooldown` | `float` | 0x36c | 0x364 |  | 0x4cc |  |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x2fc+0x78
- **blairwitch2**: 0x158+0x178, 0x458+0x70
- **bw3**: 0x2fc+0x78
