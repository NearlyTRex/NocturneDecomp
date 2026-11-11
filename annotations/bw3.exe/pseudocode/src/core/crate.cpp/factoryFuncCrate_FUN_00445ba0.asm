; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_crate_cpp_factoryFuncCrate_FUN_00445ba0(void)
;
;
; Called Functions:
;   core_crate.cpp_CCrate_ctor_FUN_00445bd0
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x2fc                          ; 00445ba0
        ;   Label: core_crate.cpp_factoryFuncCrate_FUN_00445ba0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00445ba5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 00445baa
    TEST EAX,EAX                        ; 00445bad
    JNZ 0x00445bb2                      ; 00445baf
        ;   XREF to: 00445bb2 (CONDITIONAL_JUMP)  ; LAB_00445bb2
    RET                                 ; 00445bb1
    PUSH EAX                            ; 00445bb2
        ;   Label: LAB_00445bb2
    CALL core_crate.cpp_CCrate_ctor_FUN_00445bd0 ; 00445bb3
        ;   XREF to: 00445bd0 (UNCONDITIONAL_CALL)  ; CCrate * core_crate.cpp_CCrate_ctor_FUN_00445bd0(CCrate * this_ptr)
    ADD ESP,0x4                         ; 00445bb8
    RET                                 ; 00445bbb

