; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gargoyle_cpp_factoryFuncGargoyle_FUN_004bfab0(void)
;
;
; Called Functions:
;   core_gargoyle.cpp_CGargoyle_ctor_FUN_004bfae0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x10b54                        ; 004bfab0
        ;   Label: core_gargoyle.cpp_factoryFuncGargoyle_FUN_004bfab0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 004bfab5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 004bfaba
    TEST EAX,EAX                        ; 004bfabd
    JNZ 0x004bfac2                      ; 004bfabf
        ;   XREF to: 004bfac2 (CONDITIONAL_JUMP)  ; LAB_004bfac2
    RET                                 ; 004bfac1
    PUSH EAX                            ; 004bfac2
        ;   Label: LAB_004bfac2
    CALL core_gargoyle.cpp_CGargoyle_ctor_FUN_004bfae0 ; 004bfac3
        ;   XREF to: 004bfae0 (UNCONDITIONAL_CALL)  ; CGargoyle * core_gargoyle.cpp_CGargoyle_ctor_FUN_004bfae0(CGargoyle * this_ptr)
    ADD ESP,0x4                         ; 004bfac8
    RET                                 ; 004bfacb

