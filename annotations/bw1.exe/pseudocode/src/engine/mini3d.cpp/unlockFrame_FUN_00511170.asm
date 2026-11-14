; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_unlockFrame_FUN_00511170(void)
;
;
; XREF[1]:
;   engine_palette.cpp_FUN_005320b0 at 00532106
;
; Called Functions:
;   engine_special.cpp_unlockFrame_FUN_00581fa0
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00511170
        ;   Label: engine_mini3d.cpp_unlockFrame_FUN_00511170
    CALL engine_special.cpp_unlockFrame_FUN_00581fa0 ; 00511172
        ;   XREF to: 00581fa0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_unlockFrame_FUN_00581fa0(int clear_lock_flag)
    ADD ESP,0x4                         ; 00511177
    RET                                 ; 0051117a

