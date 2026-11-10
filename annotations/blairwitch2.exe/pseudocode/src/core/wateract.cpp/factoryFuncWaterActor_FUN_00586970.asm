; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_wateract_cpp_factoryFuncWaterActor_FUN_00586970(void)
;
;
; Called Functions:
;   core_wateract.cpp_CWaterActor_ctor_FUN_005869a0
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x2b394                        ; 00586970
        ;   Label: core_wateract.cpp_factoryFuncWaterActor_FUN_00586970
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 00586975
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 0058697a
    TEST EAX,EAX                        ; 0058697d
    JNZ 0x00586982                      ; 0058697f
        ;   XREF to: 00586982 (CONDITIONAL_JUMP)  ; LAB_00586982
    RET                                 ; 00586981
    PUSH EAX                            ; 00586982
        ;   Label: LAB_00586982
    CALL core_wateract.cpp_CWaterActor_ctor_FUN_005869a0 ; 00586983
        ;   XREF to: 005869a0 (UNCONDITIONAL_CALL)  ; CWaterActor * core_wateract.cpp_CWaterActor_ctor_FUN_005869a0(CWaterActor * this_ptr)
    ADD ESP,0x4                         ; 00586988
    RET                                 ; 0058698b

