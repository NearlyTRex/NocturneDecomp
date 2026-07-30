; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_icepick_cpp_CIcePick_archive_FUN_004bb4c0(CHero *param_1)
;
;
; Called Functions:
;   core_hero.cpp_CHero_archive_FUN_004b49a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004bb4c0
        ;   Label: core_icepick.cpp_CIcePick_archive_FUN_004bb4c0
    PUSH EDX                            ; 004bb4c4
    CALL core_hero.cpp_CHero_archive_FUN_004b49a0 ; 004bb4c5
        ;   XREF to: 004b49a0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_archive_FUN_004b49a0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004bb4ca
    RET                                 ; 004bb4cd

