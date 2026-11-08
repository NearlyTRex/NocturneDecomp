; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e6a40(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_0046cb70 at 0046cb80
;   FUN_0046cb90 at 0046cbda
;
; Referenced Globals:
;   undefined4 DAT_01c6e2d8
;   undefined4 DAT_01c6e2dc
;   undefined4 DAT_01c6e2e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e6a40
        ;   Label: FUN_004e6a40
    MOV [0x01c6e2d8],EAX                ; 004e6a44 | DAT_01c6e2d8
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e6a49
    MOV [0x01c6e2dc],EAX                ; 004e6a4d | DAT_01c6e2dc
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e6a52
    MOV [0x01c6e2e0],EAX                ; 004e6a56 | DAT_01c6e2e0
    RET                                 ; 004e6a5b

