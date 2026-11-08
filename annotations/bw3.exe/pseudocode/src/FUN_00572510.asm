; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00572510(void)
;
;
; Called Functions:
;   FUN_00574e00
;   FUN_005a3e13
;
; *****************************************************************************

section .text

    PUSH 0x2cfd8c0                      ; 00572510
        ;   Label: FUN_00572510
    CALL FUN_00574e00                   ; 00572515
        ;   XREF to: 00574e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00574e00()
    ADD ESP,0x4                         ; 0057251a
    PUSH 0x606abc                       ; 0057251d
    CALL FUN_005a3e13                   ; 00572522
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3e13()
    ADD ESP,0x4                         ; 00572527
    RET                                 ; 0057252a

