; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00559580(void)
;
;
; XREF[2]:
;   FUN_0051b5a0 at 0051b5f0
;   FUN_0054d3c0 at 0054e3ae
;
; Referenced Globals:
;   undefined4 DAT_01fe5c1c
;
; Called Functions:
;   FUN_0048f5b0
;   FUN_00535280
;
; *****************************************************************************

section .text

    PUSH 0x1fe5c1c                      ; 00559580 | DAT_01fe5c1c
        ;   Label: FUN_00559580
    CALL FUN_0048f5b0                   ; 00559585
        ;   XREF to: 0048f5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048f5b0()
    ADD ESP,0x4                         ; 0055958a
    JMP 0x00535280                      ; 0055958d
        ;   XREF to: 00535280 (UNCONDITIONAL_CALL)

