; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_moloch_cpp_factoryFuncMoloch_FUN_005202c0(void)
;
;
; Called Functions:
;   core_moloch.cpp_CMoloch_ctor_FUN_005202f0
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x23060                        ; 005202c0
        ;   Label: core_moloch.cpp_factoryFuncMoloch_FUN_005202c0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 005202c5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 005202ca
    TEST EAX,EAX                        ; 005202cd
    JNZ 0x005202d2                      ; 005202cf
        ;   XREF to: 005202d2 (CONDITIONAL_JUMP)  ; LAB_005202d2
    RET                                 ; 005202d1
    PUSH EAX                            ; 005202d2
        ;   Label: LAB_005202d2
    CALL core_moloch.cpp_CMoloch_ctor_FUN_005202f0 ; 005202d3
        ;   XREF to: 005202f0 (UNCONDITIONAL_CALL)  ; CMoloch * core_moloch.cpp_CMoloch_ctor_FUN_005202f0(CMoloch * this_ptr)
    ADD ESP,0x4                         ; 005202d8
    RET                                 ; 005202db

