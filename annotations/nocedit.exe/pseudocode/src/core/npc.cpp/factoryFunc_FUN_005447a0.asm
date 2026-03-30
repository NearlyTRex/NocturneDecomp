; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CNPC * __cdecl core_npc_cpp_factoryFunc_FUN_005447a0(void)
;
;
; XREF[1]:
;   core_npc.cpp_staticInit_FUN_00544770 at 0054477c
;
; Referenced Globals:
;   TerminatedCString s_core_npc_cpp_0063e2f9
;
; Called Functions:
;   core_npc.cpp_CNPC_ctor_FUN_005447e0
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x2d                           ; 005447a0
        ;   Label: core_npc.cpp_factoryFunc_FUN_005447a0
    PUSH 0x63e2f9                       ; 005447a2 | = "..\\core\\npc.cpp"
    PUSH 0x1f708                        ; 005447a7
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 005447ac
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005447b1
    TEST EAX,EAX                        ; 005447b4
    JNZ 0x005447b9                      ; 005447b6
        ;   XREF to: 005447b9 (CONDITIONAL_JUMP)  ; LAB_005447b9
    RET                                 ; 005447b8
    PUSH EAX                            ; 005447b9
        ;   Label: LAB_005447b9
    CALL core_npc.cpp_CNPC_ctor_FUN_005447e0 ; 005447ba
        ;   XREF to: 005447e0 (UNCONDITIONAL_CALL)  ; CNPC * core_npc.cpp_CNPC_ctor_FUN_005447e0(CNPC * this_ptr)
    ADD ESP,0x4                         ; 005447bf
    RET                                 ; 005447c2

