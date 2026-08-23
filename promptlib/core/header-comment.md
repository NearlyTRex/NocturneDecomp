---
id: header-comment
kind: rule
title: Header Comment
requires: [rules]
triggers: []          # TODO: map detector names onto this recipe
provides: []          # TODO: terms of art this fragment defines
---

- Preserve the `// Name:` and `// Address:` lines from the original.
- Add `// MANUAL RECONSTRUCTION` after the `// Address:` line. This is required for all `.keep` files.
- Preserve `// Address Range:`, `// Convention:`, `// Signature:` if present (they go after `// MANUAL RECONSTRUCTION`).
- The file must `#include "nocturne.h"`.
