; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mobster_cpp_factoryFuncMobster_FUN_0051c7a0(void)
;
;
; Called Functions:
;   core_mobster.cpp_CMobster_ctor_FUN_0051c7d0
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc340                         ; 0051c7a0
        ;   Label: core_mobster.cpp_factoryFuncMobster_FUN_0051c7a0
    CALL crt_unknown.c_FUN_005c0f32     ; 0051c7a5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 0051c7aa
    TEST EAX,EAX                        ; 0051c7ad
    JNZ 0x0051c7b2                      ; 0051c7af
        ;   XREF to: 0051c7b2 (CONDITIONAL_JUMP)  ; LAB_0051c7b2
    RET                                 ; 0051c7b1
    PUSH EAX                            ; 0051c7b2
        ;   Label: LAB_0051c7b2
    CALL core_mobster.cpp_CMobster_ctor_FUN_0051c7d0 ; 0051c7b3
        ;   XREF to: 0051c7d0 (UNCONDITIONAL_CALL)  ; CMobster * core_mobster.cpp_CMobster_ctor_FUN_0051c7d0(CMobster * this_ptr)
    ADD ESP,0x4                         ; 0051c7b8
    RET                                 ; 0051c7bb

