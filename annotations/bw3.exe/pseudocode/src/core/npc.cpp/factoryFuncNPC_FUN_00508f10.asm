; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_npc_cpp_factoryFuncNPC_FUN_00508f10(void)
;
;
; Called Functions:
;   core_npc.cpp_CNPC_ctor_FUN_00508f40
;   crt_unknown.c_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x206c8                        ; 00508f10
        ;   Label: core_npc.cpp_factoryFuncNPC_FUN_00508f10
    CALL crt_unknown.c_FUN_005a3cb2     ; 00508f15
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 00508f1a
    TEST EAX,EAX                        ; 00508f1d
    JNZ 0x00508f22                      ; 00508f1f
        ;   XREF to: 00508f22 (CONDITIONAL_JUMP)  ; LAB_00508f22
    RET                                 ; 00508f21
    PUSH EAX                            ; 00508f22
        ;   Label: LAB_00508f22
    CALL core_npc.cpp_CNPC_ctor_FUN_00508f40 ; 00508f23
        ;   XREF to: 00508f40 (UNCONDITIONAL_CALL)  ; CNPC * core_npc.cpp_CNPC_ctor_FUN_00508f40(CNPC * this_ptr)
    ADD ESP,0x4                         ; 00508f28
    RET                                 ; 00508f2b

