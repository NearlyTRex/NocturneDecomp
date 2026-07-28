; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_0045e110(CDrawSurface *param_1,int param_2,char *param_3)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_0045e0f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045e110
        ;   Label: cockpit_drawsurf.cpp_FUN_0045e110
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045e111
    PUSH EDX                            ; 0045e115
    MOV ECX,dword ptr [ESP + 0x14]      ; 0045e116
    PUSH ECX                            ; 0045e11a
    MOV EBX,dword ptr [ESP + 0x10]      ; 0045e11b
    PUSH EBX                            ; 0045e11f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_0045e0f0 ; 0045e120
        ;   XREF to: 0045e0f0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_0045e0f0(CDrawSurface * this_ptr, char * text, int y)
    ADD ESP,0xc                         ; 0045e125
    POP EBX                             ; 0045e128
    RET                                 ; 0045e129

