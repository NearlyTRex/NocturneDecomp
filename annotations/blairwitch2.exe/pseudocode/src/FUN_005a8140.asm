; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a8140(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_0040cea0 at 0040cec7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a8140
        ;   Label: FUN_005a8140
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a8144
    MOV dword ptr [EAX + 0x24],EDX      ; 005a8148
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a814b
    MOV dword ptr [EAX + 0x28],EDX      ; 005a814f
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a8152
    MOV dword ptr [EAX + 0x2c],EDX      ; 005a8156
    RET                                 ; 005a8159

