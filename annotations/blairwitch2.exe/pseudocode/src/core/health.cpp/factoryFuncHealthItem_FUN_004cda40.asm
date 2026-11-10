; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_health_cpp_factoryFuncHealthItem_FUN_004cda40(void)
;
;
; Called Functions:
;   core_health.cpp_CHealthItem_ctor_FUN_004cda70
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x43c                          ; 004cda40
        ;   Label: core_health.cpp_factoryFuncHealthItem_FUN_004cda40
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 004cda45
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 004cda4a
    TEST EAX,EAX                        ; 004cda4d
    JNZ 0x004cda52                      ; 004cda4f
        ;   XREF to: 004cda52 (CONDITIONAL_JUMP)  ; LAB_004cda52
    RET                                 ; 004cda51
    PUSH EAX                            ; 004cda52
        ;   Label: LAB_004cda52
    CALL core_health.cpp_CHealthItem_ctor_FUN_004cda70 ; 004cda53
        ;   XREF to: 004cda70 (UNCONDITIONAL_CALL)  ; CHealthItem * core_health.cpp_CHealthItem_ctor_FUN_004cda70(CHealthItem * this_ptr)
    ADD ESP,0x4                         ; 004cda58
    RET                                 ; 004cda5b

