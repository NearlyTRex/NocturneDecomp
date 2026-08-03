; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hiram_cpp_CHiram_archive_FUN_004b68b0(CHiram *this_ptr)
;
; Parameters:
; CHiram *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_npc.cpp_CNPC_archive_FUN_004eed10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b68b0
        ;   Label: core_hiram.cpp_CHiram_archive_FUN_004b68b0
    PUSH EDX                            ; 004b68b4
    CALL core_npc.cpp_CNPC_archive_FUN_004eed10 ; 004b68b5
        ;   XREF to: 004eed10 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_archive_FUN_004eed10(CNPC * this_ptr)
    ADD ESP,0x4                         ; 004b68ba
    RET                                 ; 004b68bd

