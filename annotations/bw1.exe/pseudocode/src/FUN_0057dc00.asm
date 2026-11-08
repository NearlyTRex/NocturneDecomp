; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057dc00(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_004a1d00 at 004a38d9
;
; Referenced Globals:
;   undefined4 DAT_02c832ac
;   undefined4 DAT_02c832b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0057dc00
        ;   Label: FUN_0057dc00
    MOV [0x02c832ac],EAX                ; 0057dc04 | DAT_02c832ac
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057dc09
    MOV [0x02c832b0],EAX                ; 0057dc0d | DAT_02c832b0
    RET                                 ; 0057dc12

