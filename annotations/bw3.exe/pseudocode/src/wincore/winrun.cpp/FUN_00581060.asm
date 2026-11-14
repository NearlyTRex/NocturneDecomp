; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_00581060(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02d21b78
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02d21b78]      ; 00581060 | DAT_02d21b78
        ;   Label: wincore_winrun.cpp_FUN_00581060
    PUSH EDX                            ; 00581066
    CALL dword ptr CS:[0x5b34b0]        ; 00581067
    XOR ECX,ECX                         ; 0058106e
    MOV dword ptr [0x02d21b78],ECX      ; 00581070 | DAT_02d21b78
    RET                                 ; 00581076

