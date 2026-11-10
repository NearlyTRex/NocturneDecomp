; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_imp_cpp_factoryFuncImp_FUN_004f27c0(void)
;
;
; Called Functions:
;   core_imp.cpp_CImp_ctor_FUN_004f27f0
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc2a0                         ; 004f27c0
        ;   Label: core_imp.cpp_factoryFuncImp_FUN_004f27c0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 004f27c5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 004f27ca
    TEST EAX,EAX                        ; 004f27cd
    JNZ 0x004f27d2                      ; 004f27cf
        ;   XREF to: 004f27d2 (CONDITIONAL_JUMP)  ; LAB_004f27d2
    RET                                 ; 004f27d1
    PUSH EAX                            ; 004f27d2
        ;   Label: LAB_004f27d2
    CALL core_imp.cpp_CImp_ctor_FUN_004f27f0 ; 004f27d3
        ;   XREF to: 004f27f0 (UNCONDITIONAL_CALL)  ; CImp * core_imp.cpp_CImp_ctor_FUN_004f27f0(CImp * this_ptr)
    ADD ESP,0x4                         ; 004f27d8
    RET                                 ; 004f27db

