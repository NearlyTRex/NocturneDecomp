; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hiram_cpp_CHiram_setup_FUN_004ed290(CHiram *this_ptr)
;
; Parameters:
; CHiram *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_npc.cpp_CNPC_setup_FUN_00531720
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ed290
        ;   Label: core_hiram.cpp_CHiram_setup_FUN_004ed290
    PUSH EDX                            ; 004ed294
    CALL core_npc.cpp_CNPC_setup_FUN_00531720 ; 004ed295
        ;   XREF to: 00531720 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_setup_FUN_00531720(CNPC * this_ptr)
    ADD ESP,0x4                         ; 004ed29a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ed29d
    MOV dword ptr [EAX + 0x2750],0x0    ; 004ed2a1
    RET                                 ; 004ed2ab

