; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_constrct_cpp_factoryFuncConstruct_FUN_004457f0(void)
;
;
; Called Functions:
;   core_constrct.cpp_CConstruct_ctor_FUN_00445820
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xca6c                         ; 004457f0
        ;   Label: core_constrct.cpp_factoryFuncConstruct_FUN_004457f0
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 004457f5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 004457fa
    TEST EAX,EAX                        ; 004457fd
    JNZ 0x00445802                      ; 004457ff
        ;   XREF to: 00445802 (CONDITIONAL_JUMP)  ; LAB_00445802
    RET                                 ; 00445801
    PUSH EAX                            ; 00445802
        ;   Label: LAB_00445802
    CALL core_constrct.cpp_CConstruct_ctor_FUN_00445820 ; 00445803
        ;   XREF to: 00445820 (UNCONDITIONAL_CALL)  ; CConstruct * core_constrct.cpp_CConstruct_ctor_FUN_00445820(CConstruct * this_ptr)
    ADD ESP,0x4                         ; 00445808
    RET                                 ; 0044580b

