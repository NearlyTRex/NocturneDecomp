; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSpawner * __cdecl core_spawner_cpp_factoryFuncSpawner_FUN_00563870(void)
;
;
; Called Functions:
;   core_spawner.cpp_CSpawner_ctor_FUN_005638a0
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x2574                         ; 00563870
        ;   Label: core_spawner.cpp_factoryFuncSpawner_FUN_00563870
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00563875
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0056387a
    TEST EAX,EAX                        ; 0056387d
    JNZ 0x00563882                      ; 0056387f
        ;   XREF to: 00563882 (CONDITIONAL_JUMP)  ; LAB_00563882
    RET                                 ; 00563881
    PUSH EAX                            ; 00563882
        ;   Label: LAB_00563882
    CALL core_spawner.cpp_CSpawner_ctor_FUN_005638a0 ; 00563883
        ;   XREF to: 005638a0 (UNCONDITIONAL_CALL)  ; CSpawner * core_spawner.cpp_CSpawner_ctor_FUN_005638a0(CSpawner * this_ptr)
    ADD ESP,0x4                         ; 00563888
    RET                                 ; 0056388b

