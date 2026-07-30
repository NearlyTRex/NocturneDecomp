; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_colonel_cpp_CColonel_archive_FUN_0043a9e0(CHero *param_1)
;
;
; Called Functions:
;   core_hero.cpp_CHero_archive_FUN_004b49a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0043a9e0
        ;   Label: core_colonel.cpp_CColonel_archive_FUN_0043a9e0
    PUSH EDX                            ; 0043a9e4
    CALL core_hero.cpp_CHero_archive_FUN_004b49a0 ; 0043a9e5
        ;   XREF to: 004b49a0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_archive_FUN_004b49a0(CHero * this_ptr)
    ADD ESP,0x4                         ; 0043a9ea
    RET                                 ; 0043a9ed

