; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_svetlana_cpp_FUN_00542d10(CHero *param_1)
;
;
; Called Functions:
;   core_hero.cpp_FUN_004b49a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00542d10
        ;   Label: core_svetlana.cpp_FUN_00542d10
    PUSH EDX                            ; 00542d14
    CALL core_hero.cpp_FUN_004b49a0     ; 00542d15
        ;   XREF to: 004b49a0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_FUN_004b49a0(CHero * this_ptr)
    ADD ESP,0x4                         ; 00542d1a
    RET                                 ; 00542d1d

