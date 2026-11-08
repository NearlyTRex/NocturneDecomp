; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b1f80(void)
;
;
; XREF[1]:
;   FUN_004b5ac0 at 004b5b11
;
; Referenced Globals:
;   TerminatedCString s_dynamitestick_kfm_005df3d2
;
; Called Functions:
;   FUN_00468780
;
; *****************************************************************************

section .text

    PUSH 0x5df3d2                       ; 004b1f80 | = "dynamitestick.kfm"
        ;   Label: FUN_004b1f80
    CALL FUN_00468780                   ; 004b1f85
        ;   XREF to: 00468780 (UNCONDITIONAL_CALL)  ; undefined FUN_00468780()
    ADD ESP,0x4                         ; 004b1f8a
    RET                                 ; 004b1f8d

