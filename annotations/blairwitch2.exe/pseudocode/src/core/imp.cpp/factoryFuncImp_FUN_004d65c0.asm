; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_imp_cpp_factoryFuncImp_FUN_004d65c0(void)
;
;
; Called Functions:
;   core_imp.cpp_CImp_ctor_FUN_004d65f0
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x10b30                        ; 004d65c0
        ;   Label: core_imp.cpp_factoryFuncImp_FUN_004d65c0
    CALL crt_unknown.c_FUN_005b8be2     ; 004d65c5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 004d65ca
    TEST EAX,EAX                        ; 004d65cd
    JNZ 0x004d65d2                      ; 004d65cf
        ;   XREF to: 004d65d2 (CONDITIONAL_JUMP)  ; LAB_004d65d2
    RET                                 ; 004d65d1
    PUSH EAX                            ; 004d65d2
        ;   Label: LAB_004d65d2
    CALL core_imp.cpp_CImp_ctor_FUN_004d65f0 ; 004d65d3
        ;   XREF to: 004d65f0 (UNCONDITIONAL_CALL)  ; CImp * core_imp.cpp_CImp_ctor_FUN_004d65f0(CImp * this_ptr)
    ADD ESP,0x4                         ; 004d65d8
    RET                                 ; 004d65db

