; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spawner_cpp_factoryFuncSpawner_FUN_00563870(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005a3cb2
;   engine_special.cpp_CSpawner_ctor_FUN_005638a0
;
; *****************************************************************************

section .text

    PUSH 0x2574                         ; 00563870
        ;   Label: core_spawner.cpp_factoryFuncSpawner_FUN_00563870
    CALL crt_unknown.c_FUN_005a3cb2     ; 00563875
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0056387a
    TEST EAX,EAX                        ; 0056387d
    JNZ 0x00563882                      ; 0056387f
        ;   XREF to: 00563882 (CONDITIONAL_JUMP)  ; LAB_00563882
    RET                                 ; 00563881
    PUSH EAX                            ; 00563882
        ;   Label: LAB_00563882
    CALL engine_special.cpp_CSpawner_ctor_FUN_005638a0 ; 00563883
        ;   XREF to: 005638a0 (UNCONDITIONAL_CALL)  ; CSpawner * engine_special.cpp_CSpawner_ctor_FUN_005638a0(CSpawner * this_ptr)
    ADD ESP,0x4                         ; 00563888
    RET                                 ; 0056388b

