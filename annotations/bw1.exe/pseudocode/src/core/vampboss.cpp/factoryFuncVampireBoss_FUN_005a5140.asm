; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVampireBoss * __cdecl core_vampboss_cpp_factoryFuncVampireBoss_FUN_005a5140(void)
;
;
; Called Functions:
;   core_vampboss.cpp_CVampireBoss_ctor_FUN_005a5170
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xbf3fc                        ; 005a5140
        ;   Label: core_vampboss.cpp_factoryFuncVampireBoss_FUN_005a5140
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 005a5145
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 005a514a
    TEST EAX,EAX                        ; 005a514d
    JNZ 0x005a5152                      ; 005a514f
        ;   XREF to: 005a5152 (CONDITIONAL_JUMP)  ; LAB_005a5152
    RET                                 ; 005a5151
    PUSH EAX                            ; 005a5152
        ;   Label: LAB_005a5152
    CALL core_vampboss.cpp_CVampireBoss_ctor_FUN_005a5170 ; 005a5153
        ;   XREF to: 005a5170 (UNCONDITIONAL_CALL)  ; CVampireBoss * core_vampboss.cpp_CVampireBoss_ctor_FUN_005a5170(CVampireBoss * this_ptr)
    ADD ESP,0x4                         ; 005a5158
    RET                                 ; 005a515b

