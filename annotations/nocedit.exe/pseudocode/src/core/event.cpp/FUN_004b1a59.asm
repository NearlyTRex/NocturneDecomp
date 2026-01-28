; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown char core_event_cpp_FUN_004b1a59 (char param_1,undefined2 param_2,undefined4 param_3,undefined2 *param_4)
;
;
; *****************************************************************************

section .text

    PUSH ECX                            ; 004b1a59
        ;   Label: core_event.cpp_FUN_004b1a59
    ADD AL,0x89                         ; 004b1a5a
    ADC ESI,EBX                         ; 004b1a5c
    ENTER 0x4c2,0x0                     ; 004b1a5e
    MOV EAX,EAX                         ; 004b1a62
    MOV byte ptr [ECX + 0x2],DL         ; 004b1a64
    MOV word ptr [ECX],DX               ; 004b1a67
    FMULP ST0                           ; 004b1a6a
    RET 0x4                             ; 004b1a6c

