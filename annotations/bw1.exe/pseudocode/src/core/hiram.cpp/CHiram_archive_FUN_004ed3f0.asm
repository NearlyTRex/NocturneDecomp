; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hiram_cpp_CHiram_archive_FUN_004ed3f0(CHiram *this_ptr)
;
; Parameters:
; CHiram *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_npc.cpp_FUN_00531bf0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ed3f0
        ;   Label: core_hiram.cpp_CHiram_archive_FUN_004ed3f0
    PUSH EDX                            ; 004ed3f4
    CALL core_npc.cpp_FUN_00531bf0      ; 004ed3f5
        ;   XREF to: 00531bf0 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_FUN_00531bf0(CNPC * this_ptr)
    ADD ESP,0x4                         ; 004ed3fa
    RET                                 ; 004ed3fd

