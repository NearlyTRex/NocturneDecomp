; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00489b60(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00529a70 at 0052f4e2
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00489b60
        ;   Label: FUN_00489b60
    MOV EDX,dword ptr [ESP + 0x8]       ; 00489b64
    MOV dword ptr [EAX + 0xcde8],0x0    ; 00489b68
    MOV dword ptr [EAX + 0xd04c],EDX    ; 00489b72
    RET                                 ; 00489b78

