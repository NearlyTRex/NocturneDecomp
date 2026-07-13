; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00525f50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[3]:
;   FUN_00484b60 at 00484bf9
;   FUN_004caef0 at 004cafd7
;   FUN_0052d120 at 0052d6f8
;
; Referenced Globals:
;   undefined4 DAT_02dc1b74
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02dc1b74]      ; 00525f50 | DAT_02dc1b74
        ;   Label: FUN_00525f50
    LEA EAX,[EDX*0x4 + 0x0]             ; 00525f56
    SUB EAX,EDX                         ; 00525f5d
    SHL EAX,0x2                         ; 00525f5f
    MOV EDX,EAX                         ; 00525f62
    SHL EAX,0x3                         ; 00525f64
    ADD EAX,EDX                         ; 00525f67
    MOV EDX,dword ptr [ESP + 0x4]       ; 00525f69
    MOV dword ptr [EAX + 0x2dc1b7c],EDX ; 00525f6d
    MOV EDX,dword ptr [ESP + 0x8]       ; 00525f73
    MOV dword ptr [EAX + 0x2dc1b80],EDX ; 00525f77
    MOV EDX,dword ptr [ESP + 0xc]       ; 00525f7d
    MOV dword ptr [EAX + 0x2dc1b84],EDX ; 00525f81
    MOV EDX,dword ptr [ESP + 0x10]      ; 00525f87
    MOV dword ptr [EAX + 0x2dc1b88],EDX ; 00525f8b
    MOV EDX,dword ptr [ESP + 0x14]      ; 00525f91
    MOV dword ptr [EAX + 0x2dc1b8c],EDX ; 00525f95
    MOV EDX,dword ptr [ESP + 0x18]      ; 00525f9b
    MOV dword ptr [EAX + 0x2dc1b90],EDX ; 00525f9f
    XOR EDX,EDX                         ; 00525fa5
    MOV dword ptr [EAX + 0x2dc1b94],EDX ; 00525fa7
    MOV dword ptr [EAX + 0x2dc1b98],EDX ; 00525fad
    RET                                 ; 00525fb3

