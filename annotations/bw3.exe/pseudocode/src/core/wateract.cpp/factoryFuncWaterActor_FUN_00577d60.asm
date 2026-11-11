; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_wateract_cpp_factoryFuncWaterActor_FUN_00577d60(void)
;
;
; Called Functions:
;   core_wateract.cpp_CWaterActor_ctor_FUN_00577d90
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x2b23c                        ; 00577d60
        ;   Label: core_wateract.cpp_factoryFuncWaterActor_FUN_00577d60
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00577d65
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 00577d6a
    TEST EAX,EAX                        ; 00577d6d
    JNZ 0x00577d72                      ; 00577d6f
        ;   XREF to: 00577d72 (CONDITIONAL_JUMP)  ; LAB_00577d72
    RET                                 ; 00577d71
    PUSH EAX                            ; 00577d72
        ;   Label: LAB_00577d72
    CALL core_wateract.cpp_CWaterActor_ctor_FUN_00577d90 ; 00577d73
        ;   XREF to: 00577d90 (UNCONDITIONAL_CALL)  ; CWaterActor * core_wateract.cpp_CWaterActor_ctor_FUN_00577d90(CWaterActor * this_ptr)
    ADD ESP,0x4                         ; 00577d78
    RET                                 ; 00577d7b

