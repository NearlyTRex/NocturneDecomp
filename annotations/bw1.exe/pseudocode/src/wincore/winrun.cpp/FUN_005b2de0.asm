; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_005b2de0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02c9be68
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c9be68]      ; 005b2de0 | DAT_02c9be68
        ;   Label: wincore_winrun.cpp_FUN_005b2de0
    PUSH EDX                            ; 005b2de6
    CALL dword ptr CS:[0x5d04b0]        ; 005b2de7
    XOR ECX,ECX                         ; 005b2dee
    MOV dword ptr [0x02c9be68],ECX      ; 005b2df0 | DAT_02c9be68
    RET                                 ; 005b2df6

