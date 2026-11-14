# CLZWDictionary

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 28 | fields | — |
| nocturne | 28 | fields | — |
| bw1 | 28 | fields | — |
| blairwitch2 | 28 | fields | — |
| bw3 | 28 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `table_capacity` | `int` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `num_bits` | `int` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `current_num_bits` | `int` | 0x8 | 0x8 | 0x8 | 0x8 | 0x8 |
| `entry_count` | `int` | 0xc | 0xc | 0xc | 0xc | 0xc |
| `node_table` | `CLZWDictionaryNode*` | 0x10 | 0x10 | 0x10 | 0x10 | 0x10 |
| `bit_state` | `SBitBuffer` | 0x14 | 0x14 | 0x14 | 0x14 | 0x14 |
