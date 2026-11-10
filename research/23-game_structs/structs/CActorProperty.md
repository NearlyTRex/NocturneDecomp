# CActorProperty

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 236 | fields | — |
| nocturne | 236 | fields | — |
| bw1 | unsized | placeholder | — |
| blairwitch2 | unsized | placeholder | — |
| bw3 | unsized | placeholder | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `type` | `EActorPropertyType` | 0x0 | 0x0 |  |  |  |
| `name` | `char[80]` | 0x4 | 0x4 |  |  |  |
| `enabled_flag` | `int` | 0x54 | 0x54 |  |  |  |
| `auto_update_flag` | `int` | 0x58 | 0x58 |  |  |  |
| `param1` | `UActorPropertyParam` | 0x5c | 0x5c |  |  |  |
| `param2` | `UActorPropertyParam` | 0x60 | 0x60 |  |  |  |
| `param3` | `UActorPropertyParam` | 0x64 | 0x64 |  |  |  |
| `data` | `UActorPropertyData` | 0x68 | 0x68 |  |  |  |
| `param4` | `UActorPropertyParam` | 0x6c | 0x6c |  |  |  |
| `string1` | `char[20]` | 0x70 | 0x70 |  |  |  |
| `string2` | `char[100]` | 0x84 | 0x84 |  |  |  |
| `callback` | `UActorPropertyCallback` | 0xe8 | 0xe8 |  |  |  |
