; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGrandma * __cdecl core_bwgrndma_cpp_factoryFuncGrandma_FUN_005a7ae0(void)
;
;
; Called Functions:
;   core_bwgrndma.cpp_CGrandma_ctor_FUN_005a7b10
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x11854                        ; 005a7ae0
        ;   Label: core_bwgrndma.cpp_factoryFuncGrandma_FUN_005a7ae0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 005a7ae5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 005a7aea
    TEST EAX,EAX                        ; 005a7aed
    JNZ 0x005a7af2                      ; 005a7aef
        ;   XREF to: 005a7af2 (CONDITIONAL_JUMP)  ; LAB_005a7af2
    RET                                 ; 005a7af1
    PUSH EAX                            ; 005a7af2
        ;   Label: LAB_005a7af2
    CALL core_bwgrndma.cpp_CGrandma_ctor_FUN_005a7b10 ; 005a7af3
        ;   XREF to: 005a7b10 (UNCONDITIONAL_CALL)  ; CGrandma * core_bwgrndma.cpp_CGrandma_ctor_FUN_005a7b10(CGrandma * this_ptr)
    ADD ESP,0x4                         ; 005a7af8
    RET                                 ; 005a7afb

