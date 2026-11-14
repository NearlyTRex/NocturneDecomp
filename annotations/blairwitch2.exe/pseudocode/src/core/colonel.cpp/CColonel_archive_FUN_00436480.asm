; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_colonel_cpp_CColonel_archive_FUN_00436480(CColonel *this_ptr)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_hero.cpp_CHero_archive_FUN_004ce590
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00436480
        ;   Label: core_colonel.cpp_CColonel_archive_FUN_00436480
    PUSH EDX                            ; 00436484
    CALL core_hero.cpp_CHero_archive_FUN_004ce590 ; 00436485
        ;   XREF to: 004ce590 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_archive_FUN_004ce590(CHero * this_ptr)
    ADD ESP,0x4                         ; 0043648a
    RET                                 ; 0043648d

