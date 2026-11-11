; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stranger_cpp_factoryFuncStranger_FUN_005627c0(void)
;
;
; Called Functions:
;   core_stranger.cpp_CStranger_ctor_FUN_005627f0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x258dc                        ; 005627c0
        ;   Label: core_stranger.cpp_factoryFuncStranger_FUN_005627c0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 005627c5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 005627ca
    TEST EAX,EAX                        ; 005627cd
    JNZ 0x005627d2                      ; 005627cf
        ;   XREF to: 005627d2 (CONDITIONAL_JUMP)  ; LAB_005627d2
    RET                                 ; 005627d1
    PUSH EAX                            ; 005627d2
        ;   Label: LAB_005627d2
    CALL core_stranger.cpp_CStranger_ctor_FUN_005627f0 ; 005627d3
        ;   XREF to: 005627f0 (UNCONDITIONAL_CALL)  ; CStranger * core_stranger.cpp_CStranger_ctor_FUN_005627f0(CStranger * this_ptr)
    ADD ESP,0x4                         ; 005627d8
    RET                                 ; 005627db

