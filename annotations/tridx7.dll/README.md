# tridx7.dll — reference only

This tree is the decompiled DirectX 7 renderer the game shipped with. **It is not compiled.**
Nothing in the build reads it, and no target depends on it.

It is kept because it is the specification for the renderer that replaced it. `shims/renderer/`
implements the same 37 `APIDLL*` entry points directly against OpenGL, and every question about
what one of them is supposed to do — what a render flag means, how a vertex is built, what a
texture upload does to a palette — is answered here, in the code the original shipped with.
Two files carry most of that: `applyRenderState_FUN_10003f10.keep.cpp` for the flag-to-state
mapping and `buildTLVertex_FUN_100044b0.keep.cpp` for the vertex conversion. `research/02` and
`research/03` extract the render flags and the primitive formats from it.

The scaffolding that once let it run — a DirectDraw/Direct3D implementation on GL, an export
table, Win32 imports, a shader layer — is gone with the build entry. Recovering it means git
history, not this directory.

**Consequence to know about:** an uncompiled tree is no longer checked by a compiler. A
re-export from Ghidra can land here with errors in it and nothing will say so.
