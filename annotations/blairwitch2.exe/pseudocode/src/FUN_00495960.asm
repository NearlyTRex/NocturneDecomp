; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00495960(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00614d30
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01c2a370
;   undefined4 DAT_01e661b8
;   undefined4 DAT_01fb5260
;   undefined4 DAT_01fb5264
;
; Called Functions:
;   FUN_004222d0
;   FUN_00448810
;   FUN_00448860
;   FUN_0049d090
;   FUN_0049d230
;   FUN_00510ef0
;   FUN_005306b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00495960
        ;   Label: FUN_00495960
    PUSH ESI                            ; 00495961
    PUSH EDI                            ; 00495962
    PUSH EBP                            ; 00495963
    SUB ESP,0x44                        ; 00495964
    MOV EBP,dword ptr [ESP + 0x58]      ; 00495967
    MOV EDX,dword ptr [EBP + 0x48]      ; 0049596b
    TEST EDX,EDX                        ; 0049596e
    JNZ 0x00495b15                      ; 00495970
        ;   XREF to: 00495b15 (CONDITIONAL_JUMP)  ; LAB_00495b15
    MOV dword ptr [EBP + 0x48],0x1      ; 00495976
    MOV dword ptr [EBP + 0x50],EDX      ; 0049597d
    PUSH EBP                            ; 00495980
        ;   Label: LAB_00495980
    CALL FUN_00510ef0                   ; 00495981
        ;   XREF to: 00510ef0 (UNCONDITIONAL_CALL)  ; undefined FUN_00510ef0()
    MOV EAX,[0x01c2a370]                ; 00495986 | DAT_01c2a370
    MOV EDX,EAX                         ; 0049598b
    SAR EDX,0x1f                        ; 0049598d
    SHL EDX,0x2                         ; 00495990
    SBB EAX,EDX                         ; 00495993
    SAR EAX,0x2                         ; 00495995
    MOV ESI,dword ptr [EBP + 0x54]      ; 00495998
    ADD ESI,EAX                         ; 0049599b
    MOV EAX,[0x01c2a370]                ; 0049599d | DAT_01c2a370
    MOV EDX,EAX                         ; 004959a2
    SAR EDX,0x1f                        ; 004959a4
    SUB EAX,EDX                         ; 004959a7
    SAR EAX,0x1                         ; 004959a9
    ADD ESP,0x4                         ; 004959ab
    MOV EDI,dword ptr [EBP + 0x58]      ; 004959ae
    MOV dword ptr [EBP + 0x54],ESI      ; 004959b1
    ADD EDI,EAX                         ; 004959b4
    MOV EAX,dword ptr [EBP + 0x4c]      ; 004959b6
    MOV dword ptr [EBP + 0x58],EDI      ; 004959b9
    TEST EAX,EAX                        ; 004959bc
    JNZ 0x00495ae2                      ; 004959be
        ;   XREF to: 00495ae2 (CONDITIONAL_JUMP)  ; LAB_00495ae2
    PUSH EBP                            ; 004959c4
    LEA EBX,[EBP + 0x64]                ; 004959c5
    PUSH EBX                            ; 004959c8
    CALL FUN_00448810                   ; 004959c9
        ;   XREF to: 00448810 (UNCONDITIONAL_CALL)  ; undefined FUN_00448810()
    MOV EDX,dword ptr [EBP + 0x40]      ; 004959ce
    MOV EAX,EDX                         ; 004959d1
    MOV dword ptr [EBX + 0x3c],EDX      ; 004959d3
    SAR EDX,0x1f                        ; 004959d6
    SHL EDX,0x8                         ; 004959d9
    SBB EAX,EDX                         ; 004959dc
    SAR EAX,0x8                         ; 004959de
    MOV EDX,EAX                         ; 004959e1
    SAR EDX,0x1f                        ; 004959e3
    SHL EDX,0x2                         ; 004959e6
    SBB EAX,EDX                         ; 004959e9
    SAR EAX,0x2                         ; 004959eb
    ADD ESP,0x8                         ; 004959ee
    PUSH 0x41000000                     ; 004959f1
    PUSH EBX                            ; 004959f6
    MOV byte ptr [EBX + 0x1c],AL        ; 004959f7
    CALL FUN_00448860                   ; 004959fa
        ;   XREF to: 00448860 (UNCONDITIONAL_CALL)  ; undefined FUN_00448860()
    ADD ESP,0x8                         ; 004959ff
    PUSH EBX                            ; 00495a02
    MOV EDX,dword ptr [0x0061b5a8]      ; 00495a03 | DAT_0061b5a8
    PUSH EDX                            ; 00495a09 | DAT_01e661b8
    MOV dword ptr [EBX + 0x20],0x0      ; 00495a0a
    CALL FUN_005306b0                   ; 00495a11
        ;   XREF to: 005306b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005306b0()
    MOV EAX,[0x01c2a370]                ; 00495a16 | DAT_01c2a370
    MOV ECX,dword ptr [EBP + 0x50]      ; 00495a1b
    ADD ECX,EAX                         ; 00495a1e
    ADD ESP,0x8                         ; 00495a20
    MOV dword ptr [EBP + 0x50],ECX      ; 00495a23
    CMP ECX,0x1000                      ; 00495a26
    JLE 0x00495ae2                      ; 00495a2c
        ;   XREF to: 00495ae2 (CONDITIONAL_JUMP)  ; LAB_00495ae2
    PUSH 0xffff                         ; 00495a32
    PUSH 0x0                            ; 00495a37
    PUSH 0x40000000                     ; 00495a39
    PUSH EBP                            ; 00495a3e
    MOV ESI,dword ptr [0x00614d30]      ; 00495a3f | DAT_00614d30
    LEA EDI,[ECX + 0xfffff000]          ; 00495a45
    PUSH ESI                            ; 00495a4b
    MOV dword ptr [EBP + 0x50],EDI      ; 00495a4c
    CALL FUN_0049d230                   ; 00495a4f
        ;   XREF to: 0049d230 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d230()
    ADD ESP,0x14                        ; 00495a54
    PUSH 0xffff                         ; 00495a57
    PUSH 0x0                            ; 00495a5c
    PUSH 0x10000                        ; 00495a5e
    PUSH 0x20000                        ; 00495a63
    PUSH 0x0                            ; 00495a68
    PUSH EBP                            ; 00495a6a
    MOV EAX,[0x00614d30]                ; 00495a6b | DAT_00614d30
    PUSH EAX                            ; 00495a70
    CALL FUN_0049d090                   ; 00495a71
        ;   XREF to: 0049d090 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d090()
    ADD ESP,0x1c                        ; 00495a76
    PUSH 0xffff                         ; 00495a79
    PUSH 0x0                            ; 00495a7e
    PUSH 0x10000                        ; 00495a80
    PUSH 0x20000                        ; 00495a85
    PUSH 0x0                            ; 00495a8a
    PUSH EBP                            ; 00495a8c
    MOV EDX,dword ptr [0x00614d30]      ; 00495a8d | DAT_00614d30
    PUSH EDX                            ; 00495a93
    CALL FUN_0049d090                   ; 00495a94
        ;   XREF to: 0049d090 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d090()
    ADD ESP,0x1c                        ; 00495a99
    PUSH 0xffff                         ; 00495a9c
    PUSH 0x0                            ; 00495aa1
    PUSH 0x10000                        ; 00495aa3
    PUSH 0x20000                        ; 00495aa8
    PUSH 0x0                            ; 00495aad
    PUSH EBP                            ; 00495aaf
    MOV ECX,dword ptr [0x00614d30]      ; 00495ab0 | DAT_00614d30
    PUSH ECX                            ; 00495ab6
    CALL FUN_0049d090                   ; 00495ab7
        ;   XREF to: 0049d090 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d090()
    ADD ESP,0x1c                        ; 00495abc
    PUSH 0xffff                         ; 00495abf
    PUSH 0x0                            ; 00495ac4
    PUSH 0x10000                        ; 00495ac6
    PUSH 0x20000                        ; 00495acb
    PUSH 0x0                            ; 00495ad0
    PUSH EBP                            ; 00495ad2
    MOV EBX,dword ptr [0x00614d30]      ; 00495ad3 | DAT_00614d30
    PUSH EBX                            ; 00495ad9
    CALL FUN_0049d090                   ; 00495ada
        ;   XREF to: 0049d090 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d090()
    ADD ESP,0x1c                        ; 00495adf
    MOV ESI,dword ptr [EBP + 0x4c]      ; 00495ae2
        ;   Label: LAB_00495ae2
    TEST ESI,ESI                        ; 00495ae5
    JNZ 0x00495b47                      ; 00495ae7
        ;   XREF to: 00495b47 (CONDITIONAL_JUMP)  ; LAB_00495b47
    MOV EDI,0x41a00000                  ; 00495ae9
    MOV ESI,0x40800000                  ; 00495aee
    MOV dword ptr [ESP + 0x3c],EDI      ; 00495af3
    MOV dword ptr [ESP + 0x40],ESI      ; 00495af7
    XOR ESI,ESI                         ; 00495afb
        ;   Label: LAB_00495afb
    XOR EBX,EBX                         ; 00495afd
    MOV EDI,dword ptr [0x0061b5a8]      ; 00495aff | DAT_0061b5a8
        ;   Label: LAB_00495aff
    CMP EBX,dword ptr [EDI + 0x14f0a8]  ; 00495b05 | DAT_01fb5260
    JL 0x00495b74                       ; 00495b0b
        ;   XREF to: 00495b74 (CONDITIONAL_JUMP)  ; LAB_00495b74
    ADD ESP,0x44                        ; 00495b0d
    POP EBP                             ; 00495b10
    POP EDI                             ; 00495b11
    POP ESI                             ; 00495b12
    POP EBX                             ; 00495b13
    RET                                 ; 00495b14
    MOV EDX,dword ptr [0x01c2a370]      ; 00495b15 | DAT_01c2a370
        ;   Label: LAB_00495b15
    MOV EAX,dword ptr [EBP + 0x44]      ; 00495b1b
    IMUL EDX                            ; 00495b1e
    SHRD EAX,EDX,0x10                   ; 00495b20
    MOV ECX,dword ptr [EBP + 0x40]      ; 00495b24
    SUB ECX,EAX                         ; 00495b27
    MOV dword ptr [EBP + 0x40],ECX      ; 00495b29
    TEST ECX,ECX                        ; 00495b2c
    JGE 0x00495980                      ; 00495b2e
        ;   XREF to: 00495980 (CONDITIONAL_JUMP)  ; LAB_00495980
    MOV dword ptr [EBP + 0x24],0x0      ; 00495b34
    MOV dword ptr [EBP + 0x40],0x0      ; 00495b3b
    JMP 0x00495980                      ; 00495b42
        ;   XREF to: 00495980 (UNCONDITIONAL_JUMP)  ; LAB_00495980
    CMP ESI,0x2                         ; 00495b47
        ;   Label: LAB_00495b47
    JNZ 0x00495b60                      ; 00495b4a
        ;   XREF to: 00495b60 (CONDITIONAL_JUMP)  ; LAB_00495b60
    MOV EBX,0x40a00000                  ; 00495b4c
    MOV ECX,0x3f800000                  ; 00495b51
    MOV dword ptr [ESP + 0x3c],EBX      ; 00495b56
    MOV dword ptr [ESP + 0x40],ECX      ; 00495b5a
    JMP 0x00495afb                      ; 00495b5e
        ;   XREF to: 00495afb (UNCONDITIONAL_JUMP)  ; LAB_00495afb
    MOV EDX,0x40a00000                  ; 00495b60
        ;   Label: LAB_00495b60
    MOV EAX,0x3f800000                  ; 00495b65
    MOV dword ptr [ESP + 0x3c],EDX      ; 00495b6a
    MOV dword ptr [ESP + 0x40],EAX      ; 00495b6e
    JMP 0x00495afb                      ; 00495b72
        ;   XREF to: 00495afb (UNCONDITIONAL_JUMP)  ; LAB_00495afb
    MOV EAX,ESP                         ; 00495b74
        ;   Label: LAB_00495b74
    PUSH EAX                            ; 00495b76
    MOV EDI,dword ptr [EDI + ESI*0x1 + 0x14f0ac] ; 00495b77 | DAT_01fb5264
    CALL FUN_004222d0                   ; 00495b7e
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004222d0()
    ADD ESP,0x4                         ; 00495b83
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00495b86
    MOV dword ptr [ESP + 0x4],EAX       ; 00495b8a
    MOV EAX,ESP                         ; 00495b8e
    PUSH EAX                            ; 00495b90
    PUSH dword ptr [ESP + 0x44]         ; 00495b91
    PUSH EBP                            ; 00495b95
    MOV EDX,dword ptr [EDI + 0x2b0]     ; 00495b96
    PUSH EDI                            ; 00495b9c
    ADD ESI,0x4                         ; 00495b9d
    INC EBX                             ; 00495ba0
    CALL dword ptr [EDX + 0x108]        ; 00495ba1
    ADD ESP,0x10                        ; 00495ba7
    JMP 0x00495aff                      ; 00495baa
        ;   XREF to: 00495aff (UNCONDITIONAL_JUMP)  ; LAB_00495aff

