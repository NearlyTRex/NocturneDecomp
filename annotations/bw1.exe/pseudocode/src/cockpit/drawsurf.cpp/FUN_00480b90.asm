; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_00480b90(CDrawSurface *param_1,int param_2,int param_3,int param_4,char *param_5)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00481090 at 00481278
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00480b60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480b90
        ;   Label: cockpit_drawsurf.cpp_FUN_00480b90
    PUSH ESI                            ; 00480b91
    PUSH EDI                            ; 00480b92
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00480b93
    PUSH EDX                            ; 00480b97
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00480b98
    PUSH ECX                            ; 00480b9c
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00480b9d
    PUSH EBX                            ; 00480ba1
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00480ba2
    PUSH ESI                            ; 00480ba6
    MOV EDI,dword ptr [ESP + 0x20]      ; 00480ba7
    PUSH EDI                            ; 00480bab
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00480b60 ; 00480bac
        ;   XREF to: 00480b60 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00480b60(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x14                        ; 00480bb1
    POP EDI                             ; 00480bb4
    POP ESI                             ; 00480bb5
    POP EBX                             ; 00480bb6
    RET                                 ; 00480bb7

