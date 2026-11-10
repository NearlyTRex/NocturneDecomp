; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_npc_cpp_factoryFuncNPC_FUN_00510430(void)
;
;
; Called Functions:
;   core_npc.cpp_CNPC_ctor_FUN_00510460
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x24348                        ; 00510430
        ;   Label: core_npc.cpp_factoryFuncNPC_FUN_00510430
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 00510435
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 0051043a
    TEST EAX,EAX                        ; 0051043d
    JNZ 0x00510442                      ; 0051043f
        ;   XREF to: 00510442 (CONDITIONAL_JUMP)  ; LAB_00510442
    RET                                 ; 00510441
    PUSH EAX                            ; 00510442
        ;   Label: LAB_00510442
    CALL core_npc.cpp_CNPC_ctor_FUN_00510460 ; 00510443
        ;   XREF to: 00510460 (UNCONDITIONAL_CALL)  ; CNPC * core_npc.cpp_CNPC_ctor_FUN_00510460(CNPC * this_ptr)
    ADD ESP,0x4                         ; 00510448
    RET                                 ; 0051044b

