; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flies_cpp_factoryFuncFlies_FUN_004a6a60(void)
;
;
; Called Functions:
;   core_flies.cpp_CFlies_ctor_FUN_004a6a90
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x2b7c                         ; 004a6a60
        ;   Label: core_flies.cpp_factoryFuncFlies_FUN_004a6a60
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 004a6a65
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 004a6a6a
    TEST EAX,EAX                        ; 004a6a6d
    JNZ 0x004a6a72                      ; 004a6a6f
        ;   XREF to: 004a6a72 (CONDITIONAL_JUMP)  ; LAB_004a6a72
    RET                                 ; 004a6a71
    PUSH EAX                            ; 004a6a72
        ;   Label: LAB_004a6a72
    CALL core_flies.cpp_CFlies_ctor_FUN_004a6a90 ; 004a6a73
        ;   XREF to: 004a6a90 (UNCONDITIONAL_CALL)  ; CFlies * core_flies.cpp_CFlies_ctor_FUN_004a6a90(CFlies * this_ptr)
    ADD ESP,0x4                         ; 004a6a78
    RET                                 ; 004a6a7b

