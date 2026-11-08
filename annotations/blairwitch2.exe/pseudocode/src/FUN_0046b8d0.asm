; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046b8d0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[35]:
;   FUN_00410670 at 004107b1
;   FUN_00413c70 at 00413db5
;   FUN_00426730 at 00426749
;   FUN_0042b760 at 0042be34
;   FUN_0044b020 at 0044b516
;   FUN_0044b960 at 0044bca8
;   FUN_0044d060 at 0044d0d4
;   FUN_00464ac0 at 00464c14
;   FUN_004947a0 at 004948b5
;   FUN_00495150 at 0049527b
;   ... and 25 more
;
; Called Functions:
;   FUN_00406df0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0046b8d0
        ;   Label: FUN_0046b8d0
    PUSH EDX                            ; 0046b8d4
    CALL FUN_00406df0                   ; 0046b8d5
        ;   XREF to: 00406df0 (UNCONDITIONAL_CALL)  ; undefined FUN_00406df0()
    ADD ESP,0x4                         ; 0046b8da
    RET                                 ; 0046b8dd

