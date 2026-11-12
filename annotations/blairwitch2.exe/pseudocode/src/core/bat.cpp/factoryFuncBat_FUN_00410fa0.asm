; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBat * __cdecl core_bat_cpp_factoryFuncBat_FUN_00410fa0(void)
;
;
; Called Functions:
;   core_bat.cpp_CBat_ctor_FUN_00410fd0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x4e4                          ; 00410fa0
        ;   Label: core_bat.cpp_factoryFuncBat_FUN_00410fa0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 00410fa5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 00410faa
    TEST EAX,EAX                        ; 00410fad
    JNZ 0x00410fb2                      ; 00410faf
        ;   XREF to: 00410fb2 (CONDITIONAL_JUMP)  ; LAB_00410fb2
    RET                                 ; 00410fb1
    PUSH EAX                            ; 00410fb2
        ;   Label: LAB_00410fb2
    CALL core_bat.cpp_CBat_ctor_FUN_00410fd0 ; 00410fb3
        ;   XREF to: 00410fd0 (UNCONDITIONAL_CALL)  ; CBat * core_bat.cpp_CBat_ctor_FUN_00410fd0(CBat * this_ptr)
    ADD ESP,0x4                         ; 00410fb8
    RET                                 ; 00410fbb

