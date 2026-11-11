; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hecaitmx_cpp_factoryFuncHecaitomix_FUN_00597dc0(void)
;
;
; Called Functions:
;   core_hecaitmx.cpp_CHecaitomix_ctor_FUN_00597df0
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd07c                         ; 00597dc0
        ;   Label: core_hecaitmx.cpp_factoryFuncHecaitomix_FUN_00597dc0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00597dc5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 00597dca
    TEST EAX,EAX                        ; 00597dcd
    JNZ 0x00597dd2                      ; 00597dcf
        ;   XREF to: 00597dd2 (CONDITIONAL_JUMP)  ; LAB_00597dd2
    RET                                 ; 00597dd1
    PUSH EAX                            ; 00597dd2
        ;   Label: LAB_00597dd2
    CALL core_hecaitmx.cpp_CHecaitomix_ctor_FUN_00597df0 ; 00597dd3
        ;   XREF to: 00597df0 (UNCONDITIONAL_CALL)  ; CHecaitomix * core_hecaitmx.cpp_CHecaitomix_ctor_FUN_00597df0(CHecaitomix * this_ptr)
    ADD ESP,0x4                         ; 00597dd8
    RET                                 ; 00597ddb

