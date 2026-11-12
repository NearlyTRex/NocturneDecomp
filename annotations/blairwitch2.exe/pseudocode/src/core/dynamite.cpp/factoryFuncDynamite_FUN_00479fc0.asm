; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDynamite * __cdecl core_dynamite_cpp_factoryFuncDynamite_FUN_00479fc0(void)
;
;
; Called Functions:
;   core_dynamite.cpp_CDynamite_ctor_FUN_00479ff0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x6e8                          ; 00479fc0
        ;   Label: core_dynamite.cpp_factoryFuncDynamite_FUN_00479fc0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 00479fc5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 00479fca
    TEST EAX,EAX                        ; 00479fcd
    JNZ 0x00479fd2                      ; 00479fcf
        ;   XREF to: 00479fd2 (CONDITIONAL_JUMP)  ; LAB_00479fd2
    RET                                 ; 00479fd1
    PUSH EAX                            ; 00479fd2
        ;   Label: LAB_00479fd2
    CALL core_dynamite.cpp_CDynamite_ctor_FUN_00479ff0 ; 00479fd3
        ;   XREF to: 00479ff0 (UNCONDITIONAL_CALL)  ; CDynamite * core_dynamite.cpp_CDynamite_ctor_FUN_00479ff0(CDynamite * this_ptr)
    ADD ESP,0x4                         ; 00479fd8
    RET                                 ; 00479fdb

