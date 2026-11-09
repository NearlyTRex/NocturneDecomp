; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_0058ebb0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_02662de4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0058ebb0
        ;   Label: wincore_winrun.cpp_FUN_0058ebb0
    MOV [0x02662de4],EAX                ; 0058ebb4 | DAT_02662de4
    RET                                 ; 0058ebb9

