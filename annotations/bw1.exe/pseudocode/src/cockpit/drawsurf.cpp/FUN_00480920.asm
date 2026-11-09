; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_00480920(CDrawSurface *param_1,int param_2,int param_3,char *param_4)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00481090 at 00481260
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_004808f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480920
        ;   Label: cockpit_drawsurf.cpp_FUN_00480920
    PUSH ESI                            ; 00480921
    MOV EDX,dword ptr [ESP + 0x14]      ; 00480922
    PUSH EDX                            ; 00480926
    MOV ECX,dword ptr [ESP + 0x14]      ; 00480927
    PUSH ECX                            ; 0048092b
    MOV EBX,dword ptr [ESP + 0x20]      ; 0048092c
    PUSH EBX                            ; 00480930
    MOV ESI,dword ptr [ESP + 0x18]      ; 00480931
    PUSH ESI                            ; 00480935
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_004808f0 ; 00480936
        ;   XREF to: 004808f0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_004808f0(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 0048093b
    POP ESI                             ; 0048093e
    POP EBX                             ; 0048093f
    RET                                 ; 00480940

