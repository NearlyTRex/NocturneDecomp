; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_colonel_cpp_CColonel_archive_FUN_00440490(CColonel *this_ptr)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_hero.cpp_CHero_archive_FUN_004f2610
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00440490
        ;   Label: core_colonel.cpp_CColonel_archive_FUN_00440490
    PUSH EDX                            ; 00440494
    CALL core_hero.cpp_CHero_archive_FUN_004f2610 ; 00440495
        ;   XREF to: 004f2610 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_archive_FUN_004f2610(CHero * this_ptr)
    ADD ESP,0x4                         ; 0044049a
    RET                                 ; 0044049d

