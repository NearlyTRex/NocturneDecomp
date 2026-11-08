; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00422e00(int param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; Called Functions:
;   FUN_004088b0
;   FUN_00421e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422e00
        ;   Label: FUN_00422e00
    PUSH ESI                            ; 00422e01
    PUSH EDI                            ; 00422e02
    MOV EDI,dword ptr [ESP + 0x10]      ; 00422e03
    MOV ESI,dword ptr [ESP + 0x14]      ; 00422e07
    MOV EBX,dword ptr [ESP + 0x18]      ; 00422e0b
    LEA EAX,[EDI + 0x20]                ; 00422e0f
    MOV EDX,dword ptr [ESI]             ; 00422e12
    MOV dword ptr [EAX],EDX             ; 00422e14
    MOV EDX,dword ptr [ESI + 0x4]       ; 00422e16
    MOV dword ptr [EAX + 0x4],EDX       ; 00422e19
    MOV EDX,dword ptr [ESI + 0x8]       ; 00422e1c
    MOV dword ptr [EAX + 0x8],EDX       ; 00422e1f
    LEA EAX,[EDI + 0x30]                ; 00422e22
    CMP EAX,EBX                         ; 00422e25
    JZ 0x00422e39                       ; 00422e27
        ;   XREF to: 00422e39 (CONDITIONAL_JUMP)  ; LAB_00422e39
    MOV EDX,dword ptr [EBX]             ; 00422e29
    MOV dword ptr [EAX],EDX             ; 00422e2b
    MOV EDX,dword ptr [EBX + 0x4]       ; 00422e2d
    MOV dword ptr [EAX + 0x4],EDX       ; 00422e30
    MOV EDX,dword ptr [EBX + 0x8]       ; 00422e33
    MOV dword ptr [EAX + 0x8],EDX       ; 00422e36
    PUSH EDI                            ; 00422e39
        ;   Label: LAB_00422e39
    CALL FUN_004088b0                   ; 00422e3a
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004088b0()
    LEA EAX,[EDI + 0x394]               ; 00422e3f
    ADD ESP,0x4                         ; 00422e45
    CMP EAX,ESI                         ; 00422e48
    JZ 0x00422e5c                       ; 00422e4a
        ;   XREF to: 00422e5c (CONDITIONAL_JUMP)  ; LAB_00422e5c
    MOV EDX,dword ptr [ESI]             ; 00422e4c
    MOV dword ptr [EAX],EDX             ; 00422e4e
    MOV EDX,dword ptr [ESI + 0x4]       ; 00422e50
    MOV dword ptr [EAX + 0x4],EDX       ; 00422e53
    MOV EDX,dword ptr [ESI + 0x8]       ; 00422e56
    MOV dword ptr [EAX + 0x8],EDX       ; 00422e59
    LEA EAX,[EDI + 0x3a0]               ; 00422e5c
        ;   Label: LAB_00422e5c
    CMP EAX,EBX                         ; 00422e62
    JZ 0x00422e76                       ; 00422e64
        ;   XREF to: 00422e76 (CONDITIONAL_JUMP)  ; LAB_00422e76
    MOV EDX,dword ptr [EBX]             ; 00422e66
    MOV dword ptr [EAX],EDX             ; 00422e68
    MOV EDX,dword ptr [EBX + 0x4]       ; 00422e6a
    MOV dword ptr [EAX + 0x4],EDX       ; 00422e6d
    MOV EDX,dword ptr [EBX + 0x8]       ; 00422e70
    MOV dword ptr [EAX + 0x8],EDX       ; 00422e73
    PUSH EDI                            ; 00422e76
        ;   Label: LAB_00422e76
    CALL FUN_00421e80                   ; 00422e77
        ;   XREF to: 00421e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00421e80()
    ADD ESP,0x4                         ; 00422e7c
    POP EDI                             ; 00422e7f
    POP ESI                             ; 00422e80
    POP EBX                             ; 00422e81
    RET                                 ; 00422e82

