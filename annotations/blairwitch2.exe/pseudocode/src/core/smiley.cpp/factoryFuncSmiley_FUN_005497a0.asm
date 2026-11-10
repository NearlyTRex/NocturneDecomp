; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_smiley_cpp_factoryFuncSmiley_FUN_005497a0(void)
;
;
; Called Functions:
;   core_smiley.cpp_CSmiley_ctor_FUN_005497d0
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x10b3c                        ; 005497a0
        ;   Label: core_smiley.cpp_factoryFuncSmiley_FUN_005497a0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 005497a5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 005497aa
    TEST EAX,EAX                        ; 005497ad
    JNZ 0x005497b2                      ; 005497af
        ;   XREF to: 005497b2 (CONDITIONAL_JUMP)  ; LAB_005497b2
    RET                                 ; 005497b1
    PUSH EAX                            ; 005497b2
        ;   Label: LAB_005497b2
    CALL core_smiley.cpp_CSmiley_ctor_FUN_005497d0 ; 005497b3
        ;   XREF to: 005497d0 (UNCONDITIONAL_CALL)  ; CSmiley * core_smiley.cpp_CSmiley_ctor_FUN_005497d0(CSmiley * this_ptr)
    ADD ESP,0x4                         ; 005497b8
    RET                                 ; 005497bb

