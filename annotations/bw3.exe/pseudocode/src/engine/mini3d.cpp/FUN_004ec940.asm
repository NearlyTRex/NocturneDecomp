; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004ec940(void)
;
;
; XREF[1]:
;   engine_palette.cpp_FUN_00509d90 at 00509de6
;
; Called Functions:
;   engine_special.cpp_unlockFrame_FUN_00565870
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 004ec940
        ;   Label: engine_mini3d.cpp_FUN_004ec940
    CALL engine_special.cpp_unlockFrame_FUN_00565870 ; 004ec942
        ;   XREF to: 00565870 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_unlockFrame_FUN_00565870(int clear_lock_flag)
    ADD ESP,0x4                         ; 004ec947
    RET                                 ; 004ec94a

