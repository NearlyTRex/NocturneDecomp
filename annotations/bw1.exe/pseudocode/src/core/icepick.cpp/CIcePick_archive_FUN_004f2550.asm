; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_icepick_cpp_CIcePick_archive_FUN_004f2550(CIcePick *this_ptr)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_hero.cpp_CHero_archive_FUN_004eab00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f2550
        ;   Label: core_icepick.cpp_CIcePick_archive_FUN_004f2550
    PUSH EDX                            ; 004f2554
    CALL core_hero.cpp_CHero_archive_FUN_004eab00 ; 004f2555
        ;   XREF to: 004eab00 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_archive_FUN_004eab00(CHero * this_ptr)
    ADD ESP,0x4                         ; 004f255a
    RET                                 ; 004f255d

