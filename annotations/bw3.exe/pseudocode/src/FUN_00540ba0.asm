; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00540ba0(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   FUN_0048c2e0 at 00490e53
;   FUN_005114f0 at 0051161b
;   FUN_00529a70 at 0052fb13
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00540ba0
        ;   Label: FUN_00540ba0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00540ba4
    MOV dword ptr [EAX + 0x15aec8],EDX  ; 00540ba8
    MOV EDX,dword ptr [ESP + 0xc]       ; 00540bae
    MOV dword ptr [EAX + 0x15aecc],EDX  ; 00540bb2
    RET                                 ; 00540bb8

