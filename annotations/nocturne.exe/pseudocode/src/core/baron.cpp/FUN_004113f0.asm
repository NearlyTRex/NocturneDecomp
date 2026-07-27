; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_baron_cpp_FUN_004113f0(undefined4 param_1)
;
;
; Called Functions:
;   core_weapon.cpp_FUN_00553f50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004113f0
        ;   Label: core_baron.cpp_FUN_004113f0
    PUSH EDX                            ; 004113f4
    CALL core_weapon.cpp_FUN_00553f50   ; 004113f5
        ;   XREF to: 00553f50 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_FUN_00553f50()
    ADD ESP,0x4                         ; 004113fa
    RET                                 ; 004113fd

