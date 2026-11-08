; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00424b90(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00522350 at 005286ce
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00424b90
        ;   Label: FUN_00424b90
    MOV EDX,dword ptr [ESP + 0x8]       ; 00424b94
    MOV dword ptr [EAX + 0x109c8],EDX   ; 00424b98
    MOV EDX,dword ptr [ESP + 0xc]       ; 00424b9e
    MOV dword ptr [EAX + 0x109d4],EDX   ; 00424ba2
    RET                                 ; 00424ba8

