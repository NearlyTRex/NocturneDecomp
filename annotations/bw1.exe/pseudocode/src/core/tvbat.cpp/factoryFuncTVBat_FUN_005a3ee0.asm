; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTVBat * __cdecl core_tvbat_cpp_factoryFuncTVBat_FUN_005a3ee0(void)
;
;
; Called Functions:
;   core_tvbat.cpp_CTVBat_ctor_FUN_005a3f40
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc4a0                         ; 005a3ee0
        ;   Label: core_tvbat.cpp_factoryFuncTVBat_FUN_005a3ee0
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 005a3ee5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 005a3eea
    TEST EAX,EAX                        ; 005a3eed
    JNZ 0x005a3ef2                      ; 005a3eef
        ;   XREF to: 005a3ef2 (CONDITIONAL_JUMP)  ; LAB_005a3ef2
    RET                                 ; 005a3ef1
    PUSH EAX                            ; 005a3ef2
        ;   Label: LAB_005a3ef2
    CALL core_tvbat.cpp_CTVBat_ctor_FUN_005a3f40 ; 005a3ef3
        ;   XREF to: 005a3f40 (UNCONDITIONAL_CALL)  ; CTVBat * core_tvbat.cpp_CTVBat_ctor_FUN_005a3f40(CTVBat * this_ptr)
    ADD ESP,0x4                         ; 005a3ef8
    RET                                 ; 005a3efb

