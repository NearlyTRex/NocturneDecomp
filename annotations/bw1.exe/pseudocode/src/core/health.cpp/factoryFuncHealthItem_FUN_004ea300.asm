; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_health_cpp_factoryFuncHealthItem_FUN_004ea300(void)
;
;
; Called Functions:
;   core_health.cpp_CHealthItem_ctor_FUN_004ea330
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x2dc                          ; 004ea300
        ;   Label: core_health.cpp_factoryFuncHealthItem_FUN_004ea300
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 004ea305
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 004ea30a
    TEST EAX,EAX                        ; 004ea30d
    JNZ 0x004ea312                      ; 004ea30f
        ;   XREF to: 004ea312 (CONDITIONAL_JUMP)  ; LAB_004ea312
    RET                                 ; 004ea311
    PUSH EAX                            ; 004ea312
        ;   Label: LAB_004ea312
    CALL core_health.cpp_CHealthItem_ctor_FUN_004ea330 ; 004ea313
        ;   XREF to: 004ea330 (UNCONDITIONAL_CALL)  ; CHealthItem * core_health.cpp_CHealthItem_ctor_FUN_004ea330(CHealthItem * this_ptr)
    ADD ESP,0x4                         ; 004ea318
    RET                                 ; 004ea31b

