; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_CScat_archive_FUN_0051fa50(CScat *this_ptr)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_hero.cpp_CHero_archive_FUN_004ce590
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0051fa50
        ;   Label: core_scat.cpp_CScat_archive_FUN_0051fa50
    PUSH EDX                            ; 0051fa54
    CALL core_hero.cpp_CHero_archive_FUN_004ce590 ; 0051fa55
        ;   XREF to: 004ce590 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_archive_FUN_004ce590(CHero * this_ptr)
    ADD ESP,0x4                         ; 0051fa5a
    RET                                 ; 0051fa5d

