; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_smiley_cpp_factoryFuncSmiley_FUN_0056be20(void)
;
;
; Called Functions:
;   core_smiley.cpp_CSmiley_ctor_FUN_0056be50
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc2ac                         ; 0056be20
        ;   Label: core_smiley.cpp_factoryFuncSmiley_FUN_0056be20
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 0056be25
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 0056be2a
    TEST EAX,EAX                        ; 0056be2d
    JNZ 0x0056be32                      ; 0056be2f
        ;   XREF to: 0056be32 (CONDITIONAL_JUMP)  ; LAB_0056be32
    RET                                 ; 0056be31
    PUSH EAX                            ; 0056be32
        ;   Label: LAB_0056be32
    CALL core_smiley.cpp_CSmiley_ctor_FUN_0056be50 ; 0056be33
        ;   XREF to: 0056be50 (UNCONDITIONAL_CALL)  ; CSmiley * core_smiley.cpp_CSmiley_ctor_FUN_0056be50(CSmiley * this_ptr)
    ADD ESP,0x4                         ; 0056be38
    RET                                 ; 0056be3b

