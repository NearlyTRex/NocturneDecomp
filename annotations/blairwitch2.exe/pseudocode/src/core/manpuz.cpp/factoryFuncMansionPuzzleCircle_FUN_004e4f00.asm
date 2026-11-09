; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_manpuz_cpp_factoryFuncMansionPuzzleCircle_FUN_004e4f00(void)
;
;
; Called Functions:
;   core_manpuz.cpp_CMansionPuzzleCircle_ctor_FUN_004e4f30
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x1670                         ; 004e4f00
        ;   Label: core_manpuz.cpp_factoryFuncMansionPuzzleCircle_FUN_004e4f00
    CALL crt_unknown.c_FUN_005b8be2     ; 004e4f05
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 004e4f0a
    TEST EAX,EAX                        ; 004e4f0d
    JNZ 0x004e4f12                      ; 004e4f0f
        ;   XREF to: 004e4f12 (CONDITIONAL_JUMP)  ; LAB_004e4f12
    RET                                 ; 004e4f11
    PUSH EAX                            ; 004e4f12
        ;   Label: LAB_004e4f12
    CALL core_manpuz.cpp_CMansionPuzzleCircle_ctor_FUN_004e4f30 ; 004e4f13
        ;   XREF to: 004e4f30 (UNCONDITIONAL_CALL)  ; CMansionPuzzleCircle * core_manpuz.cpp_CMansionPuzzleCircle_ctor_FUN_004e4f30(CMansionPuzzleCircle * this_ptr)
    ADD ESP,0x4                         ; 004e4f18
    RET                                 ; 004e4f1b

