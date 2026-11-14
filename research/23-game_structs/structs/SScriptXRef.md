# SScriptXRef

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 276 | fields | — |
| nocturne | 276 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne |
|---|---|---:|---:|
| `name` | `char[256]` | 0x0 | 0x0 |
| `type` | `EScriptXRefType` | 0x100 | 0x100 |
| `actor` | `CDemonActor*` | 0x104 | 0x104 |
| `property_index` | `int` | 0x108 | 0x108 |
| `line_number` | `int` | 0x10c | 0x10c |
| `display_index` | `int` | 0x110 | 0x110 |
