; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_colonel_cpp_CColonel_archive_FUN_004451a0(CColonel *this_ptr)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_hero.cpp_CHero_archive_FUN_004eab00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004451a0
        ;   Label: core_colonel.cpp_CColonel_archive_FUN_004451a0
    PUSH EDX                            ; 004451a4
    CALL core_hero.cpp_CHero_archive_FUN_004eab00 ; 004451a5
        ;   XREF to: 004eab00 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_archive_FUN_004eab00(CHero * this_ptr)
    ADD ESP,0x4                         ; 004451aa
    RET                                 ; 004451ad

