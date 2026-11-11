; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gargoyle_cpp_factoryFuncGargoyle_FUN_004c4db0(void)
;
;
; Called Functions:
;   core_gargoyle.cpp_CGargoyle_ctor_FUN_004c4de0
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd0b0                         ; 004c4db0
        ;   Label: core_gargoyle.cpp_factoryFuncGargoyle_FUN_004c4db0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 004c4db5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004c4dba
    TEST EAX,EAX                        ; 004c4dbd
    JNZ 0x004c4dc2                      ; 004c4dbf
        ;   XREF to: 004c4dc2 (CONDITIONAL_JUMP)  ; LAB_004c4dc2
    RET                                 ; 004c4dc1
    PUSH EAX                            ; 004c4dc2
        ;   Label: LAB_004c4dc2
    CALL core_gargoyle.cpp_CGargoyle_ctor_FUN_004c4de0 ; 004c4dc3
        ;   XREF to: 004c4de0 (UNCONDITIONAL_CALL)  ; CGargoyle * core_gargoyle.cpp_CGargoyle_ctor_FUN_004c4de0(CGargoyle * this_ptr)
    ADD ESP,0x4                         ; 004c4dc8
    RET                                 ; 004c4dcb

