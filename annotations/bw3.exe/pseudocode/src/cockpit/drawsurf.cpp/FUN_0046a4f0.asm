; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_0046a4f0(CDrawSurface *param_1,int param_2,char *param_3)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_0046a4d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a4f0
        ;   Label: cockpit_drawsurf.cpp_FUN_0046a4f0
    MOV EDX,dword ptr [ESP + 0xc]       ; 0046a4f1
    PUSH EDX                            ; 0046a4f5
    MOV ECX,dword ptr [ESP + 0x14]      ; 0046a4f6
    PUSH ECX                            ; 0046a4fa
    MOV EBX,dword ptr [ESP + 0x10]      ; 0046a4fb
    PUSH EBX                            ; 0046a4ff
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_0046a4d0 ; 0046a500
        ;   XREF to: 0046a4d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_0046a4d0(CDrawSurface * this_ptr, char * param_2, int param_3)
    ADD ESP,0xc                         ; 0046a505
    POP EBX                             ; 0046a508
    RET                                 ; 0046a509

