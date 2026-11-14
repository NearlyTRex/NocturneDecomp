; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMattanntote * __cdecl core_mattnntt_cpp_factoryFuncMattanntote_FUN_00591b70(void)
;
;
; Called Functions:
;   core_mattnntt.cpp_CMattanntote_ctor_FUN_00591ba0
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xf09c                         ; 00591b70
        ;   Label: core_mattnntt.cpp_factoryFuncMattanntote_FUN_00591b70
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00591b75
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 00591b7a
    TEST EAX,EAX                        ; 00591b7d
    JNZ 0x00591b82                      ; 00591b7f
        ;   XREF to: 00591b82 (CONDITIONAL_JUMP)  ; LAB_00591b82
    RET                                 ; 00591b81
    PUSH EAX                            ; 00591b82
        ;   Label: LAB_00591b82
    CALL core_mattnntt.cpp_CMattanntote_ctor_FUN_00591ba0 ; 00591b83
        ;   XREF to: 00591ba0 (UNCONDITIONAL_CALL)  ; CMattanntote * core_mattnntt.cpp_CMattanntote_ctor_FUN_00591ba0(CMattanntote * this_ptr)
    ADD ESP,0x4                         ; 00591b88
    RET                                 ; 00591b8b

