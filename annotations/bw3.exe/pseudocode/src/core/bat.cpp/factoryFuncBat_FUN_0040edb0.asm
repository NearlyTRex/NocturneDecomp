; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBat * __cdecl core_bat_cpp_factoryFuncBat_FUN_0040edb0(void)
;
;
; Called Functions:
;   core_bat.cpp_CBat_ctor_FUN_0040ede0
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x388                          ; 0040edb0
        ;   Label: core_bat.cpp_factoryFuncBat_FUN_0040edb0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0040edb5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0040edba
    TEST EAX,EAX                        ; 0040edbd
    JNZ 0x0040edc2                      ; 0040edbf
        ;   XREF to: 0040edc2 (CONDITIONAL_JUMP)  ; LAB_0040edc2
    RET                                 ; 0040edc1
    PUSH EAX                            ; 0040edc2
        ;   Label: LAB_0040edc2
    CALL core_bat.cpp_CBat_ctor_FUN_0040ede0 ; 0040edc3
        ;   XREF to: 0040ede0 (UNCONDITIONAL_CALL)  ; CBat * core_bat.cpp_CBat_ctor_FUN_0040ede0(CBat * this_ptr)
    ADD ESP,0x4                         ; 0040edc8
    RET                                 ; 0040edcb

