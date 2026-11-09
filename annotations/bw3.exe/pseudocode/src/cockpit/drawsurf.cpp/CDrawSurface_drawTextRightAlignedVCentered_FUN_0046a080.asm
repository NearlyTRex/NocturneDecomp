; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_0046a080(CDrawSurface *this_ptr,char *text,int x,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_0046a0e0 at 0046a13a
;
; Called Functions:
;   cockpit_drawsurf.cpp_FUN_00469b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a080
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_0046a080
    PUSH ESI                            ; 0046a081
    PUSH 0x3                            ; 0046a082
    PUSH 0x0                            ; 0046a084
    MOV EDX,dword ptr [ESP + 0x20]      ; 0046a086
    PUSH EDX                            ; 0046a08a
    PUSH 0x0                            ; 0046a08b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0046a08d
    PUSH ECX                            ; 0046a091
    MOV EBX,dword ptr [ESP + 0x24]      ; 0046a092
    PUSH EBX                            ; 0046a096
    MOV ESI,dword ptr [ESP + 0x24]      ; 0046a097
    PUSH ESI                            ; 0046a09b
    CALL cockpit_drawsurf.cpp_FUN_00469b40 ; 0046a09c
        ;   XREF to: 00469b40 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00469b40(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 0046a0a1
    POP ESI                             ; 0046a0a4
    POP EBX                             ; 0046a0a5
    RET                                 ; 0046a0a6

