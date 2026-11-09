; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_005b25f0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_02c9a624
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b25f0
        ;   Label: wincore_winrun.cpp_FUN_005b25f0
    MOV [0x02c9a624],EAX                ; 005b25f4 | DAT_02c9a624
    RET                                 ; 005b25f9

