; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hiram_cpp_CHiram_archive_FUN_004d11b0(CHiram *this_ptr)
;
; Parameters:
; CHiram *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_npc.cpp_FUN_005109e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d11b0
        ;   Label: core_hiram.cpp_CHiram_archive_FUN_004d11b0
    PUSH EDX                            ; 004d11b4
    CALL core_npc.cpp_FUN_005109e0      ; 004d11b5
        ;   XREF to: 005109e0 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_FUN_005109e0(CNPC * this_ptr)
    ADD ESP,0x4                         ; 004d11ba
    RET                                 ; 004d11bd

