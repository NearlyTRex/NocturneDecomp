; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_svetlana_cpp_CSvetlana_archive_FUN_005716f0(CSvetlana *this_ptr)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_hero.cpp_CHero_archive_FUN_004ce590
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005716f0
        ;   Label: core_svetlana.cpp_CSvetlana_archive_FUN_005716f0
    PUSH EDX                            ; 005716f4
    CALL core_hero.cpp_CHero_archive_FUN_004ce590 ; 005716f5
        ;   XREF to: 004ce590 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_archive_FUN_004ce590(CHero * this_ptr)
    ADD ESP,0x4                         ; 005716fa
    RET                                 ; 005716fd

