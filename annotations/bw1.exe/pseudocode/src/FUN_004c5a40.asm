; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004c5a40(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e0d1e
;   undefined4 DAT_005e0d22
;   undefined4 DAT_005e0d2a
;   undefined4 DAT_005e0d32
;   undefined4 DAT_005e0d3a
;   undefined4 DAT_005e0d3e
;   undefined4 DAT_005e0d42
;   undefined4 DAT_005e0d46
;   undefined4 DAT_0061f650
;
; Called Functions:
;   FUN_004087b0
;   FUN_004087f0
;   FUN_004207b0
;   FUN_004688a0
;   FUN_004c5c60
;   FUN_004c5e10
;   FUN_005c0880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c5a40
        ;   Label: FUN_004c5a40
    PUSH ESI                            ; 004c5a41
    PUSH EDI                            ; 004c5a42
    PUSH EBP                            ; 004c5a43
    MOV EBP,ESP                         ; 004c5a44
    SUB ESP,0x3c                        ; 004c5a46
    AND ESP,0xfffffff8                  ; 004c5a49
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c5a4c
    MOV EAX,[0x0061f650]                ; 004c5a4f | DAT_0061f650
    CMP dword ptr [EAX + 0x1008],0x0    ; 004c5a54
    JZ 0x004c5a77                       ; 004c5a5b
        ;   XREF to: 004c5a77 (CONDITIONAL_JUMP)  ; LAB_004c5a77
    CALL FUN_004c5e10                   ; 004c5a5d
        ;   XREF to: 004c5e10 (UNCONDITIONAL_CALL)  ; undefined FUN_004c5e10()
    FLD float ptr [EAX + 0x15c]         ; 004c5a62
    PUSH EBX                            ; 004c5a68
    FSTP float ptr [EBX + 0x15c]        ; 004c5a69
    CALL FUN_004c5c60                   ; 004c5a6f
        ;   XREF to: 004c5c60 (UNCONDITIONAL_CALL)  ; undefined FUN_004c5c60()
    ADD ESP,0x4                         ; 004c5a74
    PUSH EBX                            ; 004c5a77
        ;   Label: LAB_004c5a77
    CALL FUN_004087b0                   ; 004c5a78
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087b0()
    ADD ESP,0x4                         ; 004c5a7d
    PUSH 0x0                            ; 004c5a80
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c5a82
    PUSH EBX                            ; 004c5a88
    LEA ESI,[ESP + 0xc]                 ; 004c5a89
    LEA EDI,[ESP + 0x24]                ; 004c5a8d
    CALL dword ptr [EAX + 0x1c]         ; 004c5a91
    MOV ECX,0x6                         ; 004c5a94
    ADD ESP,0x4                         ; 004c5a99
    LEA EAX,[ESP + 0x20]                ; 004c5a9c
    LEA ESI,[ESP + 0x8]                 ; 004c5aa0
    PUSH EAX                            ; 004c5aa4
    MOVSD.REP ES:EDI,ESI                ; 004c5aa5
    CALL FUN_004207b0                   ; 004c5aa7
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 004c5aac
    MOV ESI,EAX                         ; 004c5aaf
    TEST EAX,EAX                        ; 004c5ab1
    JNZ 0x004c5ac7                      ; 004c5ab3
        ;   XREF to: 004c5ac7 (CONDITIONAL_JUMP)  ; LAB_004c5ac7
    PUSH EBX                            ; 004c5ab5
        ;   Label: LAB_004c5ab5
    CALL FUN_004087f0                   ; 004c5ab6
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 004c5abb
    MOV EAX,ESI                         ; 004c5abe
    MOV ESP,EBP                         ; 004c5ac0
    POP EBP                             ; 004c5ac2
    POP EDI                             ; 004c5ac3
    POP ESI                             ; 004c5ac4
    POP EBX                             ; 004c5ac5
    RET                                 ; 004c5ac6
    PUSH -0x1                           ; 004c5ac7
        ;   Label: LAB_004c5ac7
    LEA EAX,[EBX + 0x184]               ; 004c5ac9
    PUSH dword ptr [EBX + 0x180]        ; 004c5acf
    PUSH EAX                            ; 004c5ad5
    CALL FUN_004688a0                   ; 004c5ad6
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688a0()
    LEA EAX,[EBX + 0x384]               ; 004c5adb
    MOV DL,byte ptr [EAX]               ; 004c5ae1
    ADD ESP,0xc                         ; 004c5ae3
    TEST DL,DL                          ; 004c5ae6
    JZ 0x004c5ab5                       ; 004c5ae8
        ;   XREF to: 004c5ab5 (CONDITIONAL_JUMP)  ; LAB_004c5ab5
    MOV ECX,dword ptr [EBX + 0x15c]     ; 004c5aea
    CMP ECX,0x4400c000                  ; 004c5af0
    JL 0x004c5b2c                       ; 004c5af6
        ;   XREF to: 004c5b2c (CONDITIONAL_JUMP)  ; LAB_004c5b2c
    CMP ECX,0x44e10000                  ; 004c5af8
    JGE 0x004c5b35                      ; 004c5afe
        ;   XREF to: 004c5b35 (CONDITIONAL_JUMP)  ; LAB_004c5b35
    XOR EDI,EDI                         ; 004c5b00
    MOV dword ptr [ESP],EDI             ; 004c5b02
    PUSH -0x1                           ; 004c5b05
        ;   Label: LAB_004c5b05
    LEA EAX,[EBX + 0x30c]               ; 004c5b07
    PUSH dword ptr [ESP + 0x4]          ; 004c5b0d
    PUSH EAX                            ; 004c5b11
    CALL FUN_004688a0                   ; 004c5b12
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688a0()
    ADD ESP,0xc                         ; 004c5b17
    PUSH EBX                            ; 004c5b1a
    CALL FUN_004087f0                   ; 004c5b1b
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 004c5b20
    MOV EAX,ESI                         ; 004c5b23
    MOV ESP,EBP                         ; 004c5b25
    POP EBP                             ; 004c5b27
    POP EDI                             ; 004c5b28
    POP ESI                             ; 004c5b29
    POP EBX                             ; 004c5b2a
    RET                                 ; 004c5b2b
    MOV dword ptr [ESP],0x43490000      ; 004c5b2c
        ;   Label: LAB_004c5b2c
    JMP 0x004c5b05                      ; 004c5b33
        ;   XREF to: 004c5b05 (UNCONDITIONAL_JUMP)  ; LAB_004c5b05
    CMP ECX,0x44ed8000                  ; 004c5b35
        ;   Label: LAB_004c5b35
    JGE 0x004c5b4e                      ; 004c5b3b
        ;   XREF to: 004c5b4e (CONDITIONAL_JUMP)  ; LAB_004c5b4e
    FLD float ptr [EBX + 0x15c]         ; 004c5b3d
    FADD float ptr [0x005e0d46]         ; 004c5b43 | DAT_005e0d46
    FSTP float ptr [ESP]                ; 004c5b49
    JMP 0x004c5b05                      ; 004c5b4c
        ;   XREF to: 004c5b05 (UNCONDITIONAL_JUMP)  ; LAB_004c5b05
    CMP ECX,0x44fa0000                  ; 004c5b4e
        ;   Label: LAB_004c5b4e
    JGE 0x004c5b5f                      ; 004c5b54
        ;   XREF to: 004c5b5f (CONDITIONAL_JUMP)  ; LAB_004c5b5f
    MOV dword ptr [ESP],0x42c80000      ; 004c5b56
    JMP 0x004c5b05                      ; 004c5b5d
        ;   XREF to: 004c5b05 (UNCONDITIONAL_JUMP)  ; LAB_004c5b05
    FLD float ptr [EBX + 0x15c]         ; 004c5b5f
        ;   Label: LAB_004c5b5f
    FADD float ptr [0x005e0d1e]         ; 004c5b65 | DAT_005e0d1e
    FLD ST0                             ; 004c5b6b
    FMUL double ptr [0x005e0d22]        ; 004c5b6d | DAT_005e0d22
    FSTP ST1                            ; 004c5b73
    FST float ptr [ESP]                 ; 004c5b75
    FMUL float ptr [0x005e0d2a]         ; 004c5b78 | DAT_005e0d2a
    SUB ESP,0x8                         ; 004c5b7e
    FSTP double ptr [ESP]               ; 004c5b81
    CALL FUN_005c0880                   ; 004c5b84
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0880()
    MOV dword ptr [ESP + 0x3c],EAX      ; 004c5b89
    MOV dword ptr [ESP + 0x40],EDX      ; 004c5b8d
    FLD double ptr [ESP + 0x3c]         ; 004c5b91
    FMUL double ptr [0x005e0d32]        ; 004c5b95 | DAT_005e0d32
    ADD ESP,0x8                         ; 004c5b9b
    FSUBR float ptr [ESP]               ; 004c5b9e
    FST float ptr [ESP]                 ; 004c5ba1
    FCOMP float ptr [0x005e0d3a]        ; 004c5ba4 | DAT_005e0d3a
    FNSTSW AX                           ; 004c5baa
    SAHF                                ; 004c5bac
    JBE 0x004c5bbb                      ; 004c5bad
        ;   XREF to: 004c5bbb (CONDITIONAL_JUMP)  ; LAB_004c5bbb
    FLD float ptr [0x005e0d3e]          ; 004c5baf | DAT_005e0d3e
    FSUB float ptr [ESP]                ; 004c5bb5
    FSTP float ptr [ESP]                ; 004c5bb8
    FLD float ptr [ESP]                 ; 004c5bbb
        ;   Label: LAB_004c5bbb
    FADD float ptr [0x005e0d42]         ; 004c5bbe | DAT_005e0d42
    FSTP float ptr [ESP]                ; 004c5bc4
    JMP 0x004c5b05                      ; 004c5bc7
        ;   XREF to: 004c5b05 (UNCONDITIONAL_JUMP)  ; LAB_004c5b05

