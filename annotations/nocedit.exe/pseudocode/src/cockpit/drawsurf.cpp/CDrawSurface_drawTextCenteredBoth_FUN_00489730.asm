; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00489730(CDrawSurface * this_ptr, int x, int y, int height, char * text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   height
; char *           Stack[0x14]:4   text
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_00489790 at 004897ea
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothWrapper_FUN_00489760 at 00489776
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489730
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00489730
    PUSH ESI                            ; 00489731
    PUSH 0x4                            ; 00489732
    PUSH 0x0                            ; 00489734
    MOV EDX,dword ptr [ESP + 0x20]      ; 00489736
    PUSH EDX                            ; 0048973a
    PUSH 0x0                            ; 0048973b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0048973d
    PUSH ECX                            ; 00489741
    MOV EBX,dword ptr [ESP + 0x24]      ; 00489742
    PUSH EBX                            ; 00489746
    MOV ESI,dword ptr [ESP + 0x24]      ; 00489747
    PUSH ESI                            ; 0048974b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 ; 0048974c | void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120(CDrawSurface * this_ptr, int x, int y, int width, ...)
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)
    ADD ESP,0x1c                        ; 00489751
    POP ESI                             ; 00489754
    POP EBX                             ; 00489755
    RET                                 ; 00489756

