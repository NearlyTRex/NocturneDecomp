; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredWrapper_FUN_004895c0 (CDrawSurface *this_ptr,int x,int y,int height,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   height
; char *           Stack[0x14]:4   text
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 at 00489f00
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_00489590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004895c0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_004895c0
    PUSH ESI                            ; 004895c1
    MOV EDX,dword ptr [ESP + 0x14]      ; 004895c2
    PUSH EDX                            ; 004895c6
    MOV ECX,dword ptr [ESP + 0x14]      ; 004895c7
    PUSH ECX                            ; 004895cb
    MOV EBX,dword ptr [ESP + 0x20]      ; 004895cc
    PUSH EBX                            ; 004895d0
    MOV ESI,dword ptr [ESP + 0x18]      ; 004895d1
    PUSH ESI                            ; 004895d5
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_00489590 ; 004895d6
        ;   XREF to: 00489590 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_00489590(CDrawSurface * this_ptr, int x, int y, int height, ...)
    ADD ESP,0x10                        ; 004895db
    POP ESI                             ; 004895de
    POP EBX                             ; 004895df
    RET                                 ; 004895e0

