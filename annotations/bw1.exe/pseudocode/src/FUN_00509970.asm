; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00509970(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_005098d0 at 00509904
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00509970
        ;   Label: FUN_00509970
    MOV dword ptr [EAX + 0x598],0x3f800000 ; 00509974
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050997e
    FLD float ptr [EAX + 0x598]         ; 00509982
    MOV dword ptr [EAX + 0x58c],EDX     ; 00509988
    MOV EDX,dword ptr [ESP + 0x8]       ; 0050998e
    FSTP float ptr [EAX + 0x594]        ; 00509992
    MOV dword ptr [EAX + 0x590],EDX     ; 00509998
    RET                                 ; 0050999e

