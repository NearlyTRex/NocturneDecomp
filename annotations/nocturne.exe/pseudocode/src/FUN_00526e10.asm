; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00526e10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)
;
;
; XREF[1]:
;   FUN_004caef0 at 004caf7b
;
; Referenced Globals:
;   undefined4 DAT_02dc8318
;
; Called Functions:
;   FUN_005234b0
;   FUN_00524830
;   FUN_00528890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00526e10
        ;   Label: FUN_00526e10
    PUSH 0x1                            ; 00526e11
    MOV EDX,dword ptr [ESP + 0xc]       ; 00526e13
    PUSH EDX                            ; 00526e17
    CALL FUN_005234b0                   ; 00526e18
        ;   XREF to: 005234b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005234b0()
    MOV EBX,EAX                         ; 00526e1d
    ADD ESP,0x8                         ; 00526e1f
    TEST EAX,EAX                        ; 00526e22
    JNZ 0x00526e28                      ; 00526e24
        ;   XREF to: 00526e28 (CONDITIONAL_JUMP)  ; LAB_00526e28
    POP EBX                             ; 00526e26
    RET                                 ; 00526e27
    PUSH EDI                            ; 00526e28
        ;   Label: LAB_00526e28
    PUSH ESI                            ; 00526e29
    MOV dword ptr [EBX + 0x1c],0x0      ; 00526e2a
    MOV EAX,dword ptr [ESP + 0x14]      ; 00526e31
    MOV dword ptr [EBX + 0x20],0x0      ; 00526e35
    MOV dword ptr [EBX + 0x4],EAX       ; 00526e3c
    MOV EAX,dword ptr [ESP + 0x18]      ; 00526e3f
    MOV dword ptr [EBX + 0x8],EAX       ; 00526e43
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00526e46
    MOV dword ptr [EBX + 0xc],EAX       ; 00526e4a
    MOV EAX,dword ptr [ESP + 0x20]      ; 00526e4d
    PUSH 0x0                            ; 00526e51
    MOV dword ptr [EBX + 0x10],EAX      ; 00526e53
    MOV EAX,dword ptr [ESP + 0x28]      ; 00526e56
    PUSH EBX                            ; 00526e5a
    MOV dword ptr [EBX + 0x14],EAX      ; 00526e5b
    MOV EAX,dword ptr [ESP + 0x30]      ; 00526e5e
    MOV ESI,0x1                         ; 00526e62
    MOV dword ptr [EBX + 0x18],EAX      ; 00526e67
    CALL FUN_00524830                   ; 00526e6a
        ;   XREF to: 00524830 (UNCONDITIONAL_CALL)  ; undefined FUN_00524830()
    MOV ECX,dword ptr [EBX + 0x6c]      ; 00526e6f
    ADD ESP,0x8                         ; 00526e72
    TEST ECX,ECX                        ; 00526e75
    JZ 0x00526e91                       ; 00526e77
        ;   XREF to: 00526e91 (CONDITIONAL_JUMP)  ; LAB_00526e91
    MOV EDI,dword ptr [0x02dc8318]      ; 00526e79 | DAT_02dc8318
    TEST EDI,EDI                        ; 00526e7f
    JZ 0x00526e91                       ; 00526e81
        ;   XREF to: 00526e91 (CONDITIONAL_JUMP)  ; LAB_00526e91
    PUSH 0x2                            ; 00526e83
    PUSH EBX                            ; 00526e85
    MOV ESI,dword ptr [EDI]             ; 00526e86
    PUSH EDI                            ; 00526e88
    CALL dword ptr [ESI + 0x40]         ; 00526e89
    ADD ESP,0xc                         ; 00526e8c
    MOV ESI,EAX                         ; 00526e8f
    CALL FUN_00528890                   ; 00526e91
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; undefined FUN_00528890()
        ;   Label: LAB_00526e91
    MOV EAX,ESI                         ; 00526e96
    POP ESI                             ; 00526e98
    POP EDI                             ; 00526e99
    POP EBX                             ; 00526e9a
    RET                                 ; 00526e9b

