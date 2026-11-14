; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_svetlana_cpp_CSvetlana_archive_FUN_00594330(CSvetlana *this_ptr)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_hero.cpp_CHero_archive_FUN_004eab00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00594330
        ;   Label: core_svetlana.cpp_CSvetlana_archive_FUN_00594330
    PUSH EDX                            ; 00594334
    CALL core_hero.cpp_CHero_archive_FUN_004eab00 ; 00594335
        ;   XREF to: 004eab00 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_archive_FUN_004eab00(CHero * this_ptr)
    ADD ESP,0x4                         ; 0059433a
    RET                                 ; 0059433d

