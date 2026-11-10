# CDemonMission

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 10192 | fields | 10192 |
| nocturne | 10140 | fields | 10140 |
| bw1 | unsized | placeholder | — |
| blairwitch2 | unsized | placeholder | — |
| bw3 | unsized | placeholder | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `current_set_index` | `int` | 0x0 | 0x0 |  |  |  |
| `is_in_editor` | `int` | 0x4 | 0x4 |  |  |  |
| `mission_version_num` | `int` | 0x8 | 0x8 |  |  |  |
| `has_inventory_actors` | `int` | 0xc | 0xc |  |  |  |
| `current_camera_index` | `int` | 0x10 |  |  |  |  |
| `viewport` | `SWindowRect` | 0x14 |  |  |  |  |
| `show_3d_viewport` | `int` | 0x24 |  |  |  |  |
| `selected_actor` | `CDemonActor*` | 0x28 |  |  |  |  |
| `hovered_actor` | `CDemonActor*` | 0x2c |  |  |  |  |
| `render_sky_in_editor` | `int` | 0x30 |  |  |  |  |
| `render_water_in_editor` | `int` | 0x34 |  |  |  |  |
| `full_light_in_editor` | `int` | 0x38 |  |  |  |  |
| `skip_gore_load_flag` | `int` | 0x3c |  |  |  |  |
| `show_waypoint_coverage` | `int` | 0x40 |  |  |  |  |
| `mission_name` | `char[256]` | 0x44 | 0x10 |  |  |  |
| `num_sets` | `int` | 0x144 | 0x110 |  |  |  |
| `set_names` | `char[4][256]` | 0x148 | 0x114 |  |  |  |
| `first_actor` | `CDemonActor*` | 0x548 | 0x514 |  |  |  |
| `last_actor` | `CDemonActor*` | 0x54c | 0x518 |  |  |  |
| `pending_teleport` | `CLocation` | 0x550 | 0x51c |  |  |  |
| `delete_queue_count` | `int` | 0x560 | 0x52c |  |  |  |
| `delete_queue_actors` | `CDemonActor*[100]` | 0x564 | 0x530 |  |  |  |
| `delete_queue_flags` | `uint[100]` | 0x6f4 | 0x6c0 |  |  |  |
| `actors_prepared` | `int` | 0x884 | 0x850 |  |  |  |
| `next_inventory_actor` | `CDemonActor*` | 0x888 | 0x854 |  |  |  |
| `actor_lookup_count` | `int` | 0x88c | 0x858 |  |  |  |
| `actor_lookup_table` | `CDemonActor*[2000]` | 0x890 | 0x85c |  |  |  |
