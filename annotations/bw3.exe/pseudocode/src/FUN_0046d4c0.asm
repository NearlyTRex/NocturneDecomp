; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046d4c0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[49]:
;   FUN_00414e90 at 00414eeb
;   FUN_00418f90 at 00419016
;   FUN_0041f9f0 at 0041faac
;   FUN_004215f0 at 0042173c
;   FUN_0042a280 at 0042a37c
;   FUN_0042d9f0 at 0042daf6
;   FUN_0042f310 at 0042f33e
;   FUN_0043f460 at 0043f4a8
;   FUN_00448060 at 004480f0
;   FUN_00496f60 at 0049725b
;   ... and 39 more
;
; Called Functions:
;   FUN_00406bf0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0046d4c0
        ;   Label: FUN_0046d4c0
    PUSH EDX                            ; 0046d4c4
    CALL FUN_00406bf0                   ; 0046d4c5
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00406bf0()
    ADD ESP,0x4                         ; 0046d4ca
    RET                                 ; 0046d4cd

