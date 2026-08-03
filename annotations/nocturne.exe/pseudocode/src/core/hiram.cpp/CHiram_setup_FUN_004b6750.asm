; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hiram_cpp_CHiram_setup_FUN_004b6750(CHiram *this_ptr)
;
; Parameters:
; CHiram *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_npc.cpp_CNPC_setup_FUN_004ee9e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b6750
        ;   Label: core_hiram.cpp_CHiram_setup_FUN_004b6750
    PUSH EDX                            ; 004b6754
    CALL core_npc.cpp_CNPC_setup_FUN_004ee9e0 ; 004b6755
        ;   XREF to: 004ee9e0 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_setup_FUN_004ee9e0(CNPC * this_ptr)
    ADD ESP,0x4                         ; 004b675a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b675d
    MOV dword ptr [EAX + 0x25bc],0x0    ; 004b6761
    RET                                 ; 004b676b

