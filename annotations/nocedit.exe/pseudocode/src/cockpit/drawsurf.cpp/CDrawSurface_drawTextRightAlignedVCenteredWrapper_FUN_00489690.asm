; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredWrapper_FUN_00489690(CDrawSurface *this_ptr,int x,int y,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; char *           Stack[0x10]:4   text
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_00489660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489690
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredWrapper_FUN_00489690
    PUSH ESI                            ; 00489691
    MOV EDX,dword ptr [ESP + 0x14]      ; 00489692
    PUSH EDX                            ; 00489696
    MOV ECX,dword ptr [ESP + 0x14]      ; 00489697
    PUSH ECX                            ; 0048969b
    MOV EBX,dword ptr [ESP + 0x20]      ; 0048969c
    PUSH EBX                            ; 004896a0
    MOV ESI,dword ptr [ESP + 0x18]      ; 004896a1
    PUSH ESI                            ; 004896a5
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_00489660 ; 004896a6
        ;   XREF to: 00489660 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_00489660(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 004896ab
    POP ESI                             ; 004896ae
    POP EBX                             ; 004896af
    RET                                 ; 004896b0

