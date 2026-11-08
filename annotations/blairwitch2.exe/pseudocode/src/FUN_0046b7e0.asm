; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046b7e0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_0041f620 at 0041f71c
;   FUN_005862e0 at 005868de
;
; Referenced Globals:
;   undefined4 DAT_0070ca5c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0046b7e0
        ;   Label: FUN_0046b7e0
    MOV [0x0070ca5c],EAX                ; 0046b7e4 | DAT_0070ca5c
    RET                                 ; 0046b7e9

