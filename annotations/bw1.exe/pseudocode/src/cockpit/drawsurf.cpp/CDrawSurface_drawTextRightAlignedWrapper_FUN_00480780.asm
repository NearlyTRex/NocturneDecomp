; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780(CDrawSurface *this_ptr,int x,int y,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; char *           Stack[0x10]:4   text
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00481090 at 0048121b
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00480750
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480780
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780
    PUSH ESI                            ; 00480781
    MOV EDX,dword ptr [ESP + 0x14]      ; 00480782
    PUSH EDX                            ; 00480786
    MOV ECX,dword ptr [ESP + 0x14]      ; 00480787
    PUSH ECX                            ; 0048078b
    MOV EBX,dword ptr [ESP + 0x20]      ; 0048078c
    PUSH EBX                            ; 00480790
    MOV ESI,dword ptr [ESP + 0x18]      ; 00480791
    PUSH ESI                            ; 00480795
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00480750 ; 00480796
        ;   XREF to: 00480750 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00480750(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 0048079b
    POP ESI                             ; 0048079e
    POP EBX                             ; 0048079f
    RET                                 ; 004807a0

