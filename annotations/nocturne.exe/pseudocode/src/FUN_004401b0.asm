; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004401b0(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_0043ff50 at 0043ff8f
;   FUN_005090f0 at 00509113
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004401b0
        ;   Label: FUN_004401b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004401b4
    MOV dword ptr [EAX + 0x144],EDX     ; 004401b8
    MOV EDX,dword ptr [ESP + 0xc]       ; 004401be
    MOV dword ptr [EAX + 0x148],EDX     ; 004401c2
    RET                                 ; 004401c8

