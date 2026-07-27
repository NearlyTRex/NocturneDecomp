; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_0045dc00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_0045e370 at 0045e540
;
; Called Functions:
;   cockpit_drawsurf.cpp_FUN_0045dbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045dc00
        ;   Label: cockpit_drawsurf.cpp_FUN_0045dc00
    PUSH ESI                            ; 0045dc01
    MOV EDX,dword ptr [ESP + 0x14]      ; 0045dc02
    PUSH EDX                            ; 0045dc06
    MOV ECX,dword ptr [ESP + 0x14]      ; 0045dc07
    PUSH ECX                            ; 0045dc0b
    MOV EBX,dword ptr [ESP + 0x20]      ; 0045dc0c
    PUSH EBX                            ; 0045dc10
    MOV ESI,dword ptr [ESP + 0x18]      ; 0045dc11
    PUSH ESI                            ; 0045dc15
    CALL cockpit_drawsurf.cpp_FUN_0045dbd0 ; 0045dc16
        ;   XREF to: 0045dbd0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0045dbd0()
    ADD ESP,0x10                        ; 0045dc1b
    POP ESI                             ; 0045dc1e
    POP EBX                             ; 0045dc1f
    RET                                 ; 0045dc20

