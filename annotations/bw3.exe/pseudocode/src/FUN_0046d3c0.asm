; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046d3c0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_004217c0 at 004218bc
;   FUN_00577760 at 00577cba
;
; Referenced Globals:
;   undefined4 DAT_007303dc
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0046d3c0
        ;   Label: FUN_0046d3c0
    MOV [0x007303dc],EAX                ; 0046d3c4 | DAT_007303dc
    RET                                 ; 0046d3c9

