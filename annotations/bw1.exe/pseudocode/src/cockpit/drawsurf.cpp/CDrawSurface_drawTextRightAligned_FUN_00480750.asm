; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_00480750(CDrawSurface *this_ptr,char *text,int x,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
;
; XREF[3]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_004807b0 at 0048080a
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780 at 00480796
;   core_script.cpp_CScript_renderEditor_FUN_00543c00 at 00543d43
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480750
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00480750
    PUSH ESI                            ; 00480751
    PUSH 0x0                            ; 00480752
    PUSH 0x0                            ; 00480754
    MOV EDX,dword ptr [ESP + 0x20]      ; 00480756
    PUSH EDX                            ; 0048075a
    PUSH 0x0                            ; 0048075b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0048075d
    PUSH ECX                            ; 00480761
    MOV EBX,dword ptr [ESP + 0x24]      ; 00480762
    PUSH EBX                            ; 00480766
    MOV ESI,dword ptr [ESP + 0x24]      ; 00480767
    PUSH ESI                            ; 0048076b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480 ; 0048076c
        ;   XREF to: 00480480 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 00480771
    POP ESI                             ; 00480774
    POP EBX                             ; 00480775
    RET                                 ; 00480776

