; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fe800(void)
;
;
; Called Functions:
;   FUN_004667e0
;   FUN_004fe830
;   FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x1d1bd1c                      ; 004fe800
        ;   Label: FUN_004fe800
    CALL FUN_004fe830                   ; 004fe805
        ;   XREF to: 004fe830 (UNCONDITIONAL_CALL)  ; undefined FUN_004fe830()
    ADD ESP,0x4                         ; 004fe80a
    PUSH 0x1d1be4c                      ; 004fe80d
    CALL FUN_004667e0                   ; 004fe812
        ;   XREF to: 004667e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004667e0()
    ADD ESP,0x4                         ; 004fe817
    PUSH 0x61f2d0                       ; 004fe81a
    CALL FUN_005c1093                   ; 004fe81f
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 004fe824
    RET                                 ; 004fe827

