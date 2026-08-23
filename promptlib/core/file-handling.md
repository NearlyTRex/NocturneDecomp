---
id: file-handling
kind: rule
title: File Handling
requires: [rules]
triggers: []          # TODO: map detector names onto this recipe
provides: []          # TODO: terms of art this fragment defines
---

- **NEVER modify the original `.cpp`/`.c` file.** Create or update a `.keep.cpp`/`.keep.c` file alongside it.
- **Match the original file extension.** If the original is `.c`, create `.keep.c`. If `.cpp`, create `.keep.cpp`. Do NOT upgrade `.c` to `.cpp`.
- The `.keep` file replaces the original for compilation — the build system picks it up automatically.
- Path: same directory and base name, with `.keep.cpp`/`.keep.c` extension.
