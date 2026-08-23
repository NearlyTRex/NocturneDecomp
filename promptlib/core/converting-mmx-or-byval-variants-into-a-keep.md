---
id: converting-mmx-or-byval-variants-into-a-keep
kind: rule
title: "Converting `.mmx` or `.byval` Variants into a `.keep`"
requires: [rules]
triggers: []          # TODO: map detector names onto this recipe
provides: []          # TODO: terms of art this fragment defines
---

The `.mmx.*` and `.byval.*` variants are generated alongside the original but are **not compiled** by the build — they exist only as references. When a function has one of these variants, it's usually a sign that the original `.cpp`/`.c` won't compile cleanly and the variant was the historical escape hatch.

- **When the user asks to fix or convert an `.mmx`/`.byval` function, offer to promote the variant into a `.keep` file** as the default path forward, since the variant itself no longer participates in compilation.
- **For `.byval` variants:** stay close to the variant's intent — the transform exists specifically to model Watcom's by-value struct passing that the decompiler fumbles. Port it faithfully.
- **For `.mmx` variants:** do **not** reproduce the inline assembly byte-for-byte. MMX inline asm is non-portable (`__asm` block syntax varies across compilers) and mechanically complex. Instead, write a `.keep` that captures the **spirit** of what the original does in portable C/C++:
  - If the MMX block is an optimized `memcpy`/`memset`/`memmove`, use the standard library call directly.
  - If the MMX block is a bulk copy or fill with a known pattern, express it as a straightforward loop or a standard library call.
  - If the MMX block computes something non-trivial (pixel blending, vector math, etc.), write the scalar C/C++ equivalent. A clean scalar translation is better than a clever but platform-locked asm port.
  - The `.keep` signature must still match the original exactly. Only the body is rewritten for portability/intent.
