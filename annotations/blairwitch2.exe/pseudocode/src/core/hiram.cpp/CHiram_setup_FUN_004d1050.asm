; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hiram_cpp_CHiram_setup_FUN_004d1050(CHiram *this_ptr)
;
; Parameters:
; CHiram *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_npc.cpp_CNPC_setup_FUN_00510510
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d1050
        ;   Label: core_hiram.cpp_CHiram_setup_FUN_004d1050
    PUSH EDX                            ; 004d1054
    CALL core_npc.cpp_CNPC_setup_FUN_00510510 ; 004d1055
        ;   XREF to: 00510510 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_setup_FUN_00510510(CNPC * this_ptr)
    ADD ESP,0x4                         ; 004d105a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d105d
    MOV dword ptr [EAX + 0x27c0],0x0    ; 004d1061
    RET                                 ; 004d106b

