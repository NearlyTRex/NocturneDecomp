; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_robin_cpp_factoryFuncRobin_FUN_005a5e40(void)
;
;
; Called Functions:
;   core_robin.cpp_CRobin_ctor_FUN_005a5e70
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x11858                        ; 005a5e40
        ;   Label: core_robin.cpp_factoryFuncRobin_FUN_005a5e40
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 005a5e45
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 005a5e4a
    TEST EAX,EAX                        ; 005a5e4d
    JNZ 0x005a5e52                      ; 005a5e4f
        ;   XREF to: 005a5e52 (CONDITIONAL_JUMP)  ; LAB_005a5e52
    RET                                 ; 005a5e51
    PUSH EAX                            ; 005a5e52
        ;   Label: LAB_005a5e52
    CALL core_robin.cpp_CRobin_ctor_FUN_005a5e70 ; 005a5e53
        ;   XREF to: 005a5e70 (UNCONDITIONAL_CALL)  ; CRobin * core_robin.cpp_CRobin_ctor_FUN_005a5e70(CRobin * this_ptr)
    ADD ESP,0x4                         ; 005a5e58
    RET                                 ; 005a5e5b

