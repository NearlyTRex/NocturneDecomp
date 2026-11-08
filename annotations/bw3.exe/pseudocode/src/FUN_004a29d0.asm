; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a29d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)
;
;
; XREF[2]:
;   FUN_00442a20 at 00442d41
;   FUN_00487eb0 at 0048819b
;
; Referenced Globals:
;   undefined4 DAT_01cba2b4
;   undefined4 DAT_01cba2f4
;
; Called Functions:
;   FUN_0040cea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a29d0
        ;   Label: FUN_004a29d0
    PUSH EDI                            ; 004a29d1
    PUSH EBP                            ; 004a29d2
    MOV EBX,dword ptr [0x01cba2b4]      ; 004a29d3 | DAT_01cba2b4
    LEA EAX,[EBX*0x4 + 0x0]             ; 004a29d9
    SUB EAX,EBX                         ; 004a29e0
    MOV EDX,dword ptr [0x01cba2b4]      ; 004a29e2 | DAT_01cba2b4
    SHL EAX,0x3                         ; 004a29e8
    INC EDX                             ; 004a29eb
    SUB EAX,EBX                         ; 004a29ec
    MOV EBX,0x1cba2b8                   ; 004a29ee
    SHL EAX,0x2                         ; 004a29f3
    MOV dword ptr [0x01cba2b4],EDX      ; 004a29f6 | DAT_01cba2b4
    ADD EBX,EAX                         ; 004a29fc
    CMP EDX,0x40                        ; 004a29fe
    JL 0x004a2a0d                       ; 004a2a01
        ;   XREF to: 004a2a0d (CONDITIONAL_JUMP)  ; LAB_004a2a0d
    PUSH ESI                            ; 004a2a03
    XOR ESI,ESI                         ; 004a2a04
    MOV dword ptr [0x01cba2b4],ESI      ; 004a2a06 | DAT_01cba2b4
    POP ESI                             ; 004a2a0c
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a2a0d
        ;   Label: LAB_004a2a0d
    PUSH EDI                            ; 004a2a11
    MOV EBP,dword ptr [ESP + 0x18]      ; 004a2a12
    PUSH EBP                            ; 004a2a16
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a2a17 | DAT_01cba2f4
    PUSH EBX                            ; 004a2a1a
    CALL dword ptr [EAX]                ; 004a2a1b
    ADD ESP,0xc                         ; 004a2a1d
    PUSH 0xffff                         ; 004a2a20
    PUSH 0xc000                         ; 004a2a25
    CALL FUN_0040cea0                   ; 004a2a2a
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cea0()
    ADD ESP,0x8                         ; 004a2a2f
    MOV EDX,EAX                         ; 004a2a32
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a2a34
    IMUL EDX                            ; 004a2a38
    SHRD EAX,EDX,0x10                   ; 004a2a3a
    MOV dword ptr [EBX + 0x40],EAX      ; 004a2a3e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004a2a41
    MOV dword ptr [EBX + 0x44],EAX      ; 004a2a45
    MOV EAX,dword ptr [ESP + 0x24]      ; 004a2a48
    MOV dword ptr [EBX + 0x54],EAX      ; 004a2a4c
    MOV EAX,dword ptr [ESP + 0x28]      ; 004a2a4f
    MOV dword ptr [EBX + 0x58],EAX      ; 004a2a53
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004a2a56
    MOV dword ptr [EBX + 0x48],EAX      ; 004a2a5a
    MOV EAX,dword ptr [ESP + 0x30]      ; 004a2a5d
    MOV dword ptr [EBX + 0x50],EAX      ; 004a2a61
    LEA EAX,[EBX + 0xc]                 ; 004a2a64
    MOV dword ptr [EBX + 0x4c],0x0      ; 004a2a67
    MOV dword ptr [EAX + 0x8],0x0       ; 004a2a6e
    MOV EDX,dword ptr [EAX + 0x8]       ; 004a2a75
    MOV dword ptr [EAX + 0x4],EDX       ; 004a2a78
    MOV EDX,dword ptr [EAX + 0x4]       ; 004a2a7b
    MOV dword ptr [EAX],EDX             ; 004a2a7e
    MOV dword ptr [EBX + 0x20],0x0      ; 004a2a80
    MOV EAX,dword ptr [EBX + 0x20]      ; 004a2a87
    MOV dword ptr [EBX + 0x1c],EAX      ; 004a2a8a
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004a2a8d
    MOV dword ptr [EBX + 0x18],EAX      ; 004a2a90
    POP EBP                             ; 004a2a93
    POP EDI                             ; 004a2a94
    POP EBX                             ; 004a2a95
    RET                                 ; 004a2a96

