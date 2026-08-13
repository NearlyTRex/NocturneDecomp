; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_CScat_archive_FUN_004fcae0(CScat *this_ptr)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_hero.cpp_CHero_archive_FUN_004b49a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004fcae0
        ;   Label: core_scat.cpp_CScat_archive_FUN_004fcae0
    PUSH EDX                            ; 004fcae4
    CALL core_hero.cpp_CHero_archive_FUN_004b49a0 ; 004fcae5
        ;   XREF to: 004b49a0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_archive_FUN_004b49a0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004fcaea
    RET                                 ; 004fcaed

