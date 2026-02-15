; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_00489660(CDrawSurface *this_ptr,char *text,int x,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_004896c0 at 0048971a
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredWrapper_FUN_00489690 at 004896a6
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489660
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_00489660
    PUSH ESI                            ; 00489661
    PUSH 0x3                            ; 00489662
    PUSH 0x0                            ; 00489664
    MOV EDX,dword ptr [ESP + 0x20]      ; 00489666
    PUSH EDX                            ; 0048966a
    PUSH 0x0                            ; 0048966b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0048966d
    PUSH ECX                            ; 00489671
    MOV EBX,dword ptr [ESP + 0x24]      ; 00489672
    PUSH EBX                            ; 00489676
    MOV ESI,dword ptr [ESP + 0x24]      ; 00489677
    PUSH ESI                            ; 0048967b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 ; 0048967c
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 00489681
    POP ESI                             ; 00489684
    POP EBX                             ; 00489685
    RET                                 ; 00489686

