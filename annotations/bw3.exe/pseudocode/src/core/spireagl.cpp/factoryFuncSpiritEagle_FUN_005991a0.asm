; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spireagl_cpp_factoryFuncSpiritEagle_FUN_005991a0(void)
;
;
; Called Functions:
;   core_spireagl.cpp_CSpiritEagle_ctor_FUN_005991d0
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x214ac                        ; 005991a0
        ;   Label: core_spireagl.cpp_factoryFuncSpiritEagle_FUN_005991a0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 005991a5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 005991aa
    TEST EAX,EAX                        ; 005991ad
    JNZ 0x005991b2                      ; 005991af
        ;   XREF to: 005991b2 (CONDITIONAL_JUMP)  ; LAB_005991b2
    RET                                 ; 005991b1
    PUSH EAX                            ; 005991b2
        ;   Label: LAB_005991b2
    CALL core_spireagl.cpp_CSpiritEagle_ctor_FUN_005991d0 ; 005991b3
        ;   XREF to: 005991d0 (UNCONDITIONAL_CALL)  ; CSpiritEagle * core_spireagl.cpp_CSpiritEagle_ctor_FUN_005991d0(CSpiritEagle * this_ptr)
    ADD ESP,0x4                         ; 005991b8
    RET                                 ; 005991bb

