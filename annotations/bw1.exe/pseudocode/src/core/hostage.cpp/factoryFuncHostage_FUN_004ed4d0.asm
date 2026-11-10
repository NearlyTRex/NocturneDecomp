; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hostage_cpp_factoryFuncHostage_FUN_004ed4d0(void)
;
;
; Called Functions:
;   core_hostage.cpp_CHostage_ctor_FUN_004ed500
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x1fea0                        ; 004ed4d0
        ;   Label: core_hostage.cpp_factoryFuncHostage_FUN_004ed4d0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 004ed4d5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 004ed4da
    TEST EAX,EAX                        ; 004ed4dd
    JNZ 0x004ed4e2                      ; 004ed4df
        ;   XREF to: 004ed4e2 (CONDITIONAL_JUMP)  ; LAB_004ed4e2
    RET                                 ; 004ed4e1
    PUSH EAX                            ; 004ed4e2
        ;   Label: LAB_004ed4e2
    CALL core_hostage.cpp_CHostage_ctor_FUN_004ed500 ; 004ed4e3
        ;   XREF to: 004ed500 (UNCONDITIONAL_CALL)  ; CHostage * core_hostage.cpp_CHostage_ctor_FUN_004ed500(CHostage * this_ptr)
    ADD ESP,0x4                         ; 004ed4e8
    RET                                 ; 004ed4eb

