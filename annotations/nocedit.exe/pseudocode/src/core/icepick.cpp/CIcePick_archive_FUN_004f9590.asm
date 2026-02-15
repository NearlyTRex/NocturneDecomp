; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_icepick_cpp_CIcePick_archive_FUN_004f9590(CIcePick *this_ptr)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_hero.cpp_CHero_archive_FUN_004f2610
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f9590
        ;   Label: core_icepick.cpp_CIcePick_archive_FUN_004f9590
    PUSH EDX                            ; 004f9594
    CALL core_hero.cpp_CHero_archive_FUN_004f2610 ; 004f9595
        ;   XREF to: 004f2610 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_archive_FUN_004f2610(CHero * this_ptr)
    ADD ESP,0x4                         ; 004f959a
    RET                                 ; 004f959d

