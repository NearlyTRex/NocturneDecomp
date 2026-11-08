; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046b8e0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[45]:
;   FUN_00410670 at 004107c5
;   FUN_00415e10 at 00415e6b
;   FUN_00419b80 at 00419c06
;   FUN_0041c690 at 0041c722
;   FUN_0041f450 at 0041f59c
;   FUN_00424c80 at 00424d86
;   FUN_00426730 at 0042675d
;   FUN_00493710 at 00493a0b
;   FUN_00493d50 at 00493dc4
;   FUN_004968d0 at 0049696a
;   ... and 35 more
;
; Called Functions:
;   FUN_00406da0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0046b8e0
        ;   Label: FUN_0046b8e0
    PUSH EDX                            ; 0046b8e4
    CALL FUN_00406da0                   ; 0046b8e5
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; undefined FUN_00406da0()
    ADD ESP,0x4                         ; 0046b8ea
    RET                                 ; 0046b8ed

