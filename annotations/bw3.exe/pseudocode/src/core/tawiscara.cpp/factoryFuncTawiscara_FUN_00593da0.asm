; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tawiscara_cpp_factoryFuncTawiscara_FUN_00593da0(void)
;
;
; Called Functions:
;   core_tawiscara.cpp_CTawiscara_ctor_FUN_00593dd0
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd09c                         ; 00593da0
        ;   Label: core_tawiscara.cpp_factoryFuncTawiscara_FUN_00593da0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00593da5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 00593daa
    TEST EAX,EAX                        ; 00593dad
    JNZ 0x00593db2                      ; 00593daf
        ;   XREF to: 00593db2 (CONDITIONAL_JUMP)  ; LAB_00593db2
    RET                                 ; 00593db1
    PUSH EAX                            ; 00593db2
        ;   Label: LAB_00593db2
    CALL core_tawiscara.cpp_CTawiscara_ctor_FUN_00593dd0 ; 00593db3
        ;   XREF to: 00593dd0 (UNCONDITIONAL_CALL)  ; CTawiscara * core_tawiscara.cpp_CTawiscara_ctor_FUN_00593dd0(CTawiscara * this_ptr)
    ADD ESP,0x4                         ; 00593db8
    RET                                 ; 00593dbb

