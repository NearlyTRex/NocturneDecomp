# CDemonActorType

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 60 | fields | — |
| nocturne | 60 | fields | — |
| bw1 | 60 | fields | — |
| blairwitch2 | 60 | fields | — |
| bw3 | 60 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `class_name` | `char[40]` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `parent_type` | `CDemonActorType*` | 0x28 | 0x28 | 0x28 | 0x28 | 0x28 |
| `factory_func` | `CDemonActor_FactoryFunc*` | 0x2c | 0x2c | 0x2c | 0x2c | 0x2c |
| `archive_version` | `int*` | 0x30 | 0x30 | 0x30 | 0x30 | 0x30 |
| `latest_version` | `int` | 0x34 | 0x34 | 0x34 | 0x34 | 0x34 |
| `name_hash` | `uint` | 0x38 | 0x38 | 0x38 | 0x38 | 0x38 |
