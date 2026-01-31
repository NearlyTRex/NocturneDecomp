; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_hiram_cpp_CHiram_setup_FUN_004f4530(CHiram *this_ptr)
;
; Parameters:
; CHiram *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_npc.cpp_CNPC_setup_FUN_00544870
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f4530
        ;   Label: core_hiram.cpp_CHiram_setup_FUN_004f4530
    PUSH EDX                            ; 004f4534
    CALL core_npc.cpp_CNPC_setup_FUN_00544870 ; 004f4535
        ;   XREF to: 00544870 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_setup_FUN_00544870(CNPC * this_ptr)
    ADD ESP,0x4                         ; 004f453a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f453d
    MOV dword ptr [EAX + 0x25c4],0x0    ; 004f4541
    RET                                 ; 004f454b

