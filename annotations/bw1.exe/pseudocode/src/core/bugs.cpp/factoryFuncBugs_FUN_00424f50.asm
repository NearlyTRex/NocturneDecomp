; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bugs_cpp_factoryFuncBugs_FUN_00424f50(void)
;
;
; Called Functions:
;   core_bugs.cpp_CBugs_ctor_FUN_00424f80
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x19da4                        ; 00424f50
        ;   Label: core_bugs.cpp_factoryFuncBugs_FUN_00424f50
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 00424f55
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 00424f5a
    TEST EAX,EAX                        ; 00424f5d
    JNZ 0x00424f62                      ; 00424f5f
        ;   XREF to: 00424f62 (CONDITIONAL_JUMP)  ; LAB_00424f62
    RET                                 ; 00424f61
    PUSH EAX                            ; 00424f62
        ;   Label: LAB_00424f62
    CALL core_bugs.cpp_CBugs_ctor_FUN_00424f80 ; 00424f63
        ;   XREF to: 00424f80 (UNCONDITIONAL_CALL)  ; CBugs * core_bugs.cpp_CBugs_ctor_FUN_00424f80(CBugs * this_ptr)
    ADD ESP,0x4                         ; 00424f68
    RET                                 ; 00424f6b

