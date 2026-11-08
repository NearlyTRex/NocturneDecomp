; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049a630(void)
;
;
; XREF[1]:
;   FUN_004a24a0 at 004a2543
;
; Referenced Globals:
;   undefined4 s_gunflash_kfm_005c05bf+1
;
; Called Functions:
;   FUN_00462580
;   FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH 0x5c05c0                       ; 0049a630 | s_gunflash_kfm_005c05bf+1
        ;   Label: FUN_0049a630
    PUSH 0x1c74278                      ; 0049a635
    CALL FUN_004625f0                   ; 0049a63a
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 0049a63f
    PUSH 0x1c74278                      ; 0049a642
    CALL FUN_00462580                   ; 0049a647
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 0049a64c
    RET                                 ; 0049a64f

