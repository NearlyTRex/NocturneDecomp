; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fforest_cpp_factoryFuncTwigZombie_FUN_005a26a0(void)
;
;
; Called Functions:
;   core_fforest.cpp_CTwigZombie_ctor_FUN_005a26d0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x11858                        ; 005a26a0
        ;   Label: core_fforest.cpp_factoryFuncTwigZombie_FUN_005a26a0
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 005a26a5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 005a26aa
    TEST EAX,EAX                        ; 005a26ad
    JNZ 0x005a26b2                      ; 005a26af
        ;   XREF to: 005a26b2 (CONDITIONAL_JUMP)  ; LAB_005a26b2
    RET                                 ; 005a26b1
    PUSH EAX                            ; 005a26b2
        ;   Label: LAB_005a26b2
    CALL core_fforest.cpp_CTwigZombie_ctor_FUN_005a26d0 ; 005a26b3
        ;   XREF to: 005a26d0 (UNCONDITIONAL_CALL)  ; CTwigZombie * core_fforest.cpp_CTwigZombie_ctor_FUN_005a26d0(CTwigZombie * this_ptr)
    ADD ESP,0x4                         ; 005a26b8
    RET                                 ; 005a26bb

