; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_004809c0(CDrawSurface *this_ptr,char *text,int x,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_00480a20 at 00480a7a
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004809c0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_004809c0
    PUSH ESI                            ; 004809c1
    PUSH 0x3                            ; 004809c2
    PUSH 0x0                            ; 004809c4
    MOV EDX,dword ptr [ESP + 0x20]      ; 004809c6
    PUSH EDX                            ; 004809ca
    PUSH 0x0                            ; 004809cb
    MOV ECX,dword ptr [ESP + 0x24]      ; 004809cd
    PUSH ECX                            ; 004809d1
    MOV EBX,dword ptr [ESP + 0x24]      ; 004809d2
    PUSH EBX                            ; 004809d6
    MOV ESI,dword ptr [ESP + 0x24]      ; 004809d7
    PUSH ESI                            ; 004809db
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480 ; 004809dc
        ;   XREF to: 00480480 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 004809e1
    POP ESI                             ; 004809e4
    POP EBX                             ; 004809e5
    RET                                 ; 004809e6

