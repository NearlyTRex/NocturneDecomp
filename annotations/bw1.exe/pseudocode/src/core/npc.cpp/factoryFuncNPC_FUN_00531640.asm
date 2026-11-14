; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CNPC * __cdecl core_npc_cpp_factoryFuncNPC_FUN_00531640(void)
;
;
; Called Functions:
;   core_npc.cpp_CNPC_ctor_FUN_00531670
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x1fab8                        ; 00531640
        ;   Label: core_npc.cpp_factoryFuncNPC_FUN_00531640
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 00531645
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 0053164a
    TEST EAX,EAX                        ; 0053164d
    JNZ 0x00531652                      ; 0053164f
        ;   XREF to: 00531652 (CONDITIONAL_JUMP)  ; LAB_00531652
    RET                                 ; 00531651
    PUSH EAX                            ; 00531652
        ;   Label: LAB_00531652
    CALL core_npc.cpp_CNPC_ctor_FUN_00531670 ; 00531653
        ;   XREF to: 00531670 (UNCONDITIONAL_CALL)  ; CNPC * core_npc.cpp_CNPC_ctor_FUN_00531670(CNPC * this_ptr)
    ADD ESP,0x4                         ; 00531658
    RET                                 ; 0053165b

