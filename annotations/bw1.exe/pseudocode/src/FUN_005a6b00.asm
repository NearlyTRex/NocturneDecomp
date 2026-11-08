; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a6b00(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01d39d34
;
; Called Functions:
;   FUN_004087b0
;   FUN_004087f0
;   FUN_004207b0
;   FUN_0042f3c0
;   FUN_00441800
;   FUN_00483e60
;   FUN_00523290
;   FUN_005232d0
;   FUN_005237e0
;   FUN_005254b0
;   FUN_00569810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a6b00
        ;   Label: FUN_005a6b00
    PUSH EBP                            ; 005a6b01
    SUB ESP,0x3c                        ; 005a6b02
    MOV EBX,dword ptr [ESP + 0x48]      ; 005a6b05
    CMP dword ptr [EBX + 0x24fc],0x0    ; 005a6b09
    JZ 0x005a6b1a                       ; 005a6b10
        ;   XREF to: 005a6b1a (CONDITIONAL_JUMP)  ; LAB_005a6b1a
    XOR EAX,EAX                         ; 005a6b12
    ADD ESP,0x3c                        ; 005a6b14
    POP EBP                             ; 005a6b17
    POP EBX                             ; 005a6b18
    RET                                 ; 005a6b19
    PUSH EDI                            ; 005a6b1a
        ;   Label: LAB_005a6b1a
    PUSH ESI                            ; 005a6b1b
    PUSH EBX                            ; 005a6b1c
    CALL FUN_004087b0                   ; 005a6b1d
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087b0()
    ADD ESP,0x4                         ; 005a6b22
    PUSH 0x0                            ; 005a6b25
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a6b27
    PUSH EBX                            ; 005a6b2d
    LEA ESI,[ESP + 0x10]                ; 005a6b2e
    LEA EDI,[ESP + 0x28]                ; 005a6b32
    CALL dword ptr [EAX + 0x1c]         ; 005a6b36
    MOV ECX,0x6                         ; 005a6b39
    ADD ESP,0x4                         ; 005a6b3e
    LEA EAX,[ESP + 0x24]                ; 005a6b41
    LEA ESI,[ESP + 0xc]                 ; 005a6b45
    PUSH EAX                            ; 005a6b49
    MOVSD.REP ES:EDI,ESI                ; 005a6b4a
    CALL FUN_004207b0                   ; 005a6b4c
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 005a6b51
    MOV dword ptr [ESP + 0x38],EAX      ; 005a6b54
    TEST EAX,EAX                        ; 005a6b58
    JZ 0x005a6bdf                       ; 005a6b5a
        ;   XREF to: 005a6bdf (CONDITIONAL_JUMP)  ; LAB_005a6bdf
    LEA EBP,[EBX + 0x83c6c]             ; 005a6b60
    LEA EAX,[EBX + 0x4913c]             ; 005a6b66
    MOV ECX,dword ptr [EBX + 0xbe79c]   ; 005a6b6c
    MOV dword ptr [ESP + 0x40],EAX      ; 005a6b72
    LEA EAX,[EBX + 0x158]               ; 005a6b76
    TEST ECX,ECX                        ; 005a6b7c
    JNZ 0x005a6bf4                      ; 005a6b7e
        ;   XREF to: 005a6bf4 (CONDITIONAL_JUMP)  ; LAB_005a6bf4
    PUSH ECX                            ; 005a6b80
    PUSH 0x1                            ; 005a6b81
    PUSH -0x1                           ; 005a6b83
    PUSH -0x1                           ; 005a6b85
    PUSH EAX                            ; 005a6b87
    CALL FUN_00569810                   ; 005a6b88
        ;   XREF to: 00569810 (UNCONDITIONAL_CALL)  ; undefined FUN_00569810()
    ADD ESP,0x14                        ; 005a6b8d
    PUSH 0x0                            ; 005a6b90
    MOV EDI,dword ptr [ESP + 0x44]      ; 005a6b92
    PUSH EDI                            ; 005a6b96
    CALL FUN_00441800                   ; 005a6b97
        ;   XREF to: 00441800 (UNCONDITIONAL_CALL)  ; undefined FUN_00441800()
    ADD ESP,0x8                         ; 005a6b9c
    PUSH 0x0                            ; 005a6b9f
    PUSH EBP                            ; 005a6ba1
    CALL FUN_00441800                   ; 005a6ba2
        ;   XREF to: 00441800 (UNCONDITIONAL_CALL)  ; undefined FUN_00441800()
        ;   Label: LAB_005a6ba2
    ADD ESP,0x8                         ; 005a6ba7
        ;   Label: LAB_005a6ba7
    PUSH EBX                            ; 005a6baa
    CALL FUN_0042f3c0                   ; 005a6bab
        ;   XREF to: 0042f3c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f3c0()
    MOV EBP,dword ptr [0x01d39d34]      ; 005a6bb0 | DAT_01d39d34
    ADD ESP,0x4                         ; 005a6bb6
    TEST EBP,EBP                        ; 005a6bb9
    JZ 0x005a6bdf                       ; 005a6bbb
        ;   XREF to: 005a6bdf (CONDITIONAL_JUMP)  ; LAB_005a6bdf
    MOV EAX,[0x00612560]                ; 005a6bbd | DAT_00612560
    PUSH EAX                            ; 005a6bc2 | DAT_01bc120c
    CALL FUN_00483e60                   ; 005a6bc3
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e60()
    ADD ESP,0x4                         ; 005a6bc8
    TEST EAX,EAX                        ; 005a6bcb
    JNZ 0x005a6bdf                      ; 005a6bcd
        ;   XREF to: 005a6bdf (CONDITIONAL_JUMP)  ; LAB_005a6bdf
    PUSH EBX                            ; 005a6bcf
    LEA EAX,[EBX + 0x158]               ; 005a6bd0
    PUSH EAX                            ; 005a6bd6
    CALL FUN_005254b0                   ; 005a6bd7
        ;   XREF to: 005254b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005254b0()
    ADD ESP,0x8                         ; 005a6bdc
    PUSH EBX                            ; 005a6bdf
        ;   Label: LAB_005a6bdf
    CALL FUN_004087f0                   ; 005a6be0
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 005a6be5
    MOV EAX,dword ptr [ESP + 0x38]      ; 005a6be8
    POP ESI                             ; 005a6bec
    POP EDI                             ; 005a6bed
    ADD ESP,0x3c                        ; 005a6bee
    POP EBP                             ; 005a6bf1
    POP EBX                             ; 005a6bf2
    RET                                 ; 005a6bf3
    LEA EDI,[EBX + 0xe60c]              ; 005a6bf4
        ;   Label: LAB_005a6bf4
    LEA ESI,[EBX + 0xc268]              ; 005a6bfa
    MOV dword ptr [ESP + 0x3c],ESI      ; 005a6c00
    CMP ECX,0x2                         ; 005a6c04
    JNZ 0x005a6c1f                      ; 005a6c07
        ;   XREF to: 005a6c1f (CONDITIONAL_JUMP)  ; LAB_005a6c1f
    PUSH 0x0                            ; 005a6c09
    PUSH 0x1                            ; 005a6c0b
    PUSH -0x1                           ; 005a6c0d
    PUSH -0x1                           ; 005a6c0f
    PUSH ESI                            ; 005a6c11
    CALL FUN_00569810                   ; 005a6c12
        ;   XREF to: 00569810 (UNCONDITIONAL_CALL)  ; undefined FUN_00569810()
    ADD ESP,0x14                        ; 005a6c17
    PUSH 0x0                            ; 005a6c1a
    PUSH EDI                            ; 005a6c1c
    JMP 0x005a6ba2                      ; 005a6c1d
        ;   XREF to: 005a6ba2 (UNCONDITIONAL_JUMP)  ; LAB_005a6ba2
    PUSH 0x0                            ; 005a6c1f
        ;   Label: LAB_005a6c1f
    PUSH EAX                            ; 005a6c21
    PUSH 0x0                            ; 005a6c22
    LEA ESI,[EBX + 0xbe7a0]             ; 005a6c24
    PUSH ESI                            ; 005a6c2a
    CALL FUN_00523290                   ; 005a6c2b
        ;   XREF to: 00523290 (UNCONDITIONAL_CALL)  ; undefined FUN_00523290()
    ADD ESP,0x10                        ; 005a6c30
    PUSH 0x1                            ; 005a6c33
    PUSH 0x0                            ; 005a6c35
    MOV EAX,dword ptr [ESP + 0x48]      ; 005a6c37
    PUSH EAX                            ; 005a6c3b
    PUSH 0x0                            ; 005a6c3c
    PUSH ESI                            ; 005a6c3e
    CALL FUN_005232d0                   ; 005a6c3f
        ;   XREF to: 005232d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005232d0()
    ADD ESP,0x14                        ; 005a6c44
    PUSH 0x2                            ; 005a6c47
    PUSH 0x0                            ; 005a6c49
    MOV EDX,dword ptr [ESP + 0x48]      ; 005a6c4b
    PUSH EDX                            ; 005a6c4f
    PUSH 0x0                            ; 005a6c50
    PUSH ESI                            ; 005a6c52
    CALL FUN_005232d0                   ; 005a6c53
        ;   XREF to: 005232d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005232d0()
    ADD ESP,0x14                        ; 005a6c58
    PUSH 0x3                            ; 005a6c5b
    PUSH 0x0                            ; 005a6c5d
    PUSH EBP                            ; 005a6c5f
    PUSH 0x0                            ; 005a6c60
    PUSH ESI                            ; 005a6c62
    CALL FUN_005232d0                   ; 005a6c63
        ;   XREF to: 005232d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005232d0()
    ADD ESP,0x14                        ; 005a6c68
    PUSH 0x4                            ; 005a6c6b
    PUSH 0x0                            ; 005a6c6d
    PUSH EBP                            ; 005a6c6f
    PUSH 0x0                            ; 005a6c70
    PUSH ESI                            ; 005a6c72
    CALL FUN_005232d0                   ; 005a6c73
        ;   XREF to: 005232d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005232d0()
    ADD ESP,0x14                        ; 005a6c78
    PUSH 0x0                            ; 005a6c7b
    MOV ECX,dword ptr [ESP + 0x40]      ; 005a6c7d
    PUSH ECX                            ; 005a6c81
    PUSH 0x1                            ; 005a6c82
    PUSH ESI                            ; 005a6c84
    CALL FUN_00523290                   ; 005a6c85
        ;   XREF to: 00523290 (UNCONDITIONAL_CALL)  ; undefined FUN_00523290()
    ADD ESP,0x10                        ; 005a6c8a
    PUSH 0x1                            ; 005a6c8d
    PUSH 0x0                            ; 005a6c8f
    PUSH EDI                            ; 005a6c91
    PUSH 0x1                            ; 005a6c92
    PUSH ESI                            ; 005a6c94
    CALL FUN_005232d0                   ; 005a6c95
        ;   XREF to: 005232d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005232d0()
    ADD ESP,0x14                        ; 005a6c9a
    PUSH 0x2                            ; 005a6c9d
    PUSH 0x0                            ; 005a6c9f
    PUSH EDI                            ; 005a6ca1
    PUSH 0x1                            ; 005a6ca2
    PUSH ESI                            ; 005a6ca4
    CALL FUN_005232d0                   ; 005a6ca5
        ;   XREF to: 005232d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005232d0()
    ADD ESP,0x14                        ; 005a6caa
    PUSH dword ptr [EBX + 0xbf3cc]      ; 005a6cad
    PUSH ESI                            ; 005a6cb3
    CALL FUN_005237e0                   ; 005a6cb4
        ;   XREF to: 005237e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005237e0()
    JMP 0x005a6ba7                      ; 005a6cb9
        ;   XREF to: 005a6ba7 (UNCONDITIONAL_JUMP)  ; LAB_005a6ba7

