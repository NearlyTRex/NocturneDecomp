; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b5e00(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)
;
;
; XREF[3]:
;   FUN_0049f0e0 at 0049f2c5
;   FUN_004aee60 at 004aee8e
;   FUN_004fda40 at 004fdefe
;
; Referenced Globals:
;   undefined4 DAT_01ca9e5c
;   undefined4 DAT_01ca9e9c
;
; Called Functions:
;   FUN_0040cc60
;   FUN_005737d0
;   FUN_005738d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5e00
        ;   Label: FUN_004b5e00
    PUSH EDI                            ; 004b5e01
    PUSH EBP                            ; 004b5e02
    MOV EAX,[0x01ca9e5c]                ; 004b5e03 | DAT_01ca9e5c
    LEA EBX,[EAX*0x4 + 0x0]             ; 004b5e08
    ADD EBX,EAX                         ; 004b5e0f
    SHL EBX,0x3                         ; 004b5e11
    ADD EBX,EAX                         ; 004b5e14
    SHL EBX,0x2                         ; 004b5e16
    LEA EDX,[EAX + 0x1]                 ; 004b5e19
    ADD EBX,0x1ca9e60                   ; 004b5e1c
    MOV dword ptr [0x01ca9e5c],EDX      ; 004b5e22 | DAT_01ca9e5c
    CMP EDX,0x40                        ; 004b5e28
    JL 0x004b5e37                       ; 004b5e2b
        ;   XREF to: 004b5e37 (CONDITIONAL_JUMP)  ; LAB_004b5e37
    PUSH ESI                            ; 004b5e2d
    XOR ESI,ESI                         ; 004b5e2e
    MOV dword ptr [0x01ca9e5c],ESI      ; 004b5e30 | DAT_01ca9e5c
    POP ESI                             ; 004b5e36
    MOV EDI,dword ptr [ESP + 0x18]      ; 004b5e37
        ;   Label: LAB_004b5e37
    PUSH EDI                            ; 004b5e3b
    MOV EBP,dword ptr [ESP + 0x18]      ; 004b5e3c
    PUSH EBP                            ; 004b5e40
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004b5e41 | DAT_01ca9e9c
    PUSH EBX                            ; 004b5e44
    CALL dword ptr [EAX]                ; 004b5e45
    ADD ESP,0xc                         ; 004b5e47
    PUSH 0xffff                         ; 004b5e4a
    PUSH 0xc000                         ; 004b5e4f
    CALL FUN_0040cc60                   ; 004b5e54
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc60()
    ADD ESP,0x8                         ; 004b5e59
    MOV dword ptr [EBX + 0x40],EAX      ; 004b5e5c
    CMP dword ptr [ESP + 0x1c],0x0      ; 004b5e5f
    JNZ 0x004b5ea0                      ; 004b5e64
        ;   XREF to: 004b5ea0 (CONDITIONAL_JUMP)  ; LAB_004b5ea0
    MOV dword ptr [EBX + 0x44],0x2000   ; 004b5e66
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004b5e6d
        ;   Label: LAB_004b5e6d
    PUSH EBX                            ; 004b5e71
    MOV dword ptr [EBX + 0x4c],EAX      ; 004b5e72
    MOV EAX,dword ptr [ESP + 0x24]      ; 004b5e75
    MOV dword ptr [EBX + 0x48],0x0      ; 004b5e79
    PUSH EAX                            ; 004b5e80
    MOV dword ptr [EBX + 0x60],EAX      ; 004b5e81
    CALL FUN_005737d0                   ; 004b5e84
        ;   XREF to: 005737d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005737d0()
    ADD ESP,0x8                         ; 004b5e89
    LEA EAX,[EBX + 0xc]                 ; 004b5e8c
    PUSH EAX                            ; 004b5e8f
    MOV ECX,dword ptr [EBX + 0x60]      ; 004b5e90
    PUSH ECX                            ; 004b5e93
    CALL FUN_005738d0                   ; 004b5e94
        ;   XREF to: 005738d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005738d0()
    ADD ESP,0x8                         ; 004b5e99
    POP EBP                             ; 004b5e9c
    POP EDI                             ; 004b5e9d
    POP EBX                             ; 004b5e9e
    RET                                 ; 004b5e9f
    MOV dword ptr [EBX + 0x44],0x8000   ; 004b5ea0
        ;   Label: LAB_004b5ea0
    JMP 0x004b5e6d                      ; 004b5ea7
        ;   XREF to: 004b5e6d (UNCONDITIONAL_JUMP)  ; LAB_004b5e6d

