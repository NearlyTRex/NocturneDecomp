; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrawSurface * __cdecl cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0047e240(CDrawSurface *this_ptr,int x,int y,int width,int height,CDrawSurface *parent_surface)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
; CDrawSurface *   Stack[0x18]:4   parent_surface
;
; XREF[2]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00481090 at 004810ec
;   core_script.cpp_CScript_renderEditor_FUN_00543c00 at 00543c3e
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_init_FUN_0047e280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047e240
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0047e240
    PUSH ESI                            ; 0047e241
    PUSH EDI                            ; 0047e242
    PUSH EBP                            ; 0047e243
    MOV EBX,dword ptr [ESP + 0x14]      ; 0047e244
    MOV EDX,dword ptr [ESP + 0x28]      ; 0047e248
    PUSH EDX                            ; 0047e24c
    MOV ECX,dword ptr [ESP + 0x28]      ; 0047e24d
    PUSH ECX                            ; 0047e251
    MOV ESI,dword ptr [ESP + 0x28]      ; 0047e252
    PUSH ESI                            ; 0047e256
    MOV EDI,dword ptr [ESP + 0x28]      ; 0047e257
    PUSH EDI                            ; 0047e25b
    MOV EBP,dword ptr [ESP + 0x28]      ; 0047e25c
    PUSH EBP                            ; 0047e260
    PUSH EBX                            ; 0047e261
    CALL cockpit_drawsurf.cpp_CDrawSurface_init_FUN_0047e280 ; 0047e262
        ;   XREF to: 0047e280 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_init_FUN_0047e280(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 0047e267
    MOV EAX,EBX                         ; 0047e26a
    POP EBP                             ; 0047e26c
    POP EDI                             ; 0047e26d
    POP ESI                             ; 0047e26e
    POP EBX                             ; 0047e26f
    RET                                 ; 0047e270

