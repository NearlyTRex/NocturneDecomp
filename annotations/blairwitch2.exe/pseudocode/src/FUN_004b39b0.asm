; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b39b0(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_004e57f0 at 004e58f3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b39b0
        ;   Label: FUN_004b39b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b39b4
    MOV dword ptr [EAX + 0x9e0],EDX     ; 004b39b8
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b39be
    MOV dword ptr [EAX + 0x9e4],EDX     ; 004b39c2
    RET                                 ; 004b39c8

