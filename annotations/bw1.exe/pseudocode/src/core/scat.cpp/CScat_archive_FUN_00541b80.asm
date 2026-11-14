; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_CScat_archive_FUN_00541b80(CScat *this_ptr)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_hero.cpp_CHero_archive_FUN_004eab00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00541b80
        ;   Label: core_scat.cpp_CScat_archive_FUN_00541b80
    PUSH EDX                            ; 00541b84
    CALL core_hero.cpp_CHero_archive_FUN_004eab00 ; 00541b85
        ;   XREF to: 004eab00 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_archive_FUN_004eab00(CHero * this_ptr)
    ADD ESP,0x4                         ; 00541b8a
    RET                                 ; 00541b8d

