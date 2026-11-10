# CTextureList

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 108012 | fields | 108012 |
| nocturne | 28004 | fields | 28004 |
| bw1 | 28004 | fields | 28004 |
| blairwitch2 | 28004 | fields | 28004 |
| bw3 | 28004 | fields | 28004 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `texture_count` | `int` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `texture_entries` | `SMRGLTextureBasic[1000]` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `texture_values` | `int[1000]` | 0x5dc4 | 0x5dc4 | 0x5dc4 | 0x5dc4 | 0x5dc4 |
| `master_texture_count` | `int` | 0x6d64 |  |  |  |  |
| `master_texture_names` | `char[5000][16]` | 0x6d68 |  |  |  |  |
| `current_master_selection` | `int` | 0x1a5e8 |  |  |  |  |
