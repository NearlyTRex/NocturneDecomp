; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_event_cpp_FUN_004b1a49 (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)
;
;
; *****************************************************************************

section .text

    PUSH ECX                            ; 004b1a49
        ;   Label: core_event.cpp_FUN_004b1a49
    PUSH ES                             ; 004b1a4a
    MOV word ptr [ECX + 0x4],DX         ; 004b1a4b
    MOV dword ptr [ECX],EDX             ; 004b1a4f
    FMULP ST0                           ; 004b1a51
    RET 0x4                             ; 004b1a53

