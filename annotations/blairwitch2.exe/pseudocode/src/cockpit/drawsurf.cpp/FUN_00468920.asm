; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_00468920(CDrawSurface *param_1,int param_2,char *param_3)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468920
        ;   Label: cockpit_drawsurf.cpp_FUN_00468920
    MOV EDX,dword ptr [ESP + 0xc]       ; 00468921
    PUSH EDX                            ; 00468925
    MOV ECX,dword ptr [ESP + 0x14]      ; 00468926
    PUSH ECX                            ; 0046892a
    MOV EBX,dword ptr [ESP + 0x10]      ; 0046892b
    PUSH EBX                            ; 0046892f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00468900 ; 00468930
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00468900(CDrawSurface * this_ptr, char * param_2, int param_3)
    ADD ESP,0xc                         ; 00468935
    POP EBX                             ; 00468938
    RET                                 ; 00468939

