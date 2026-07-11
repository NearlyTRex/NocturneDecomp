; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005135d0(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   FUN_0047ac50 at 0047d6a5
;   FUN_004f6170 at 004f629b
;   FUN_004ff2c0 at 00504316
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005135d0
        ;   Label: FUN_005135d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005135d4
    MOV dword ptr [EAX + 0x15aac8],EDX  ; 005135d8
    MOV EDX,dword ptr [ESP + 0xc]       ; 005135de
    MOV dword ptr [EAX + 0x15aacc],EDX  ; 005135e2
    RET                                 ; 005135e8

