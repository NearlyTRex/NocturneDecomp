; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004319e0(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[13]:
;   FUN_00410400 at 00410418
;   FUN_00415910 at 00415975
;   FUN_004451c0 at 00445237
;   FUN_004737b0 at 00473a88
;   FUN_004a0f00 at 004a0f27
;   FUN_004cab10 at 004cac68
;   FUN_004ea140 at 004ea1d0
;   FUN_004f2570 at 004f262d
;   FUN_00521990 at 00521a23
;   FUN_00531da0 at 00531e1b
;   ... and 3 more
;
; Referenced Globals:
;   undefined4 s_ShotInvulnerable_005d5a7e+1
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061d95c
;   undefined4 DAT_0061dca4
;   undefined4 DAT_01ccf390
;   undefined4 DAT_01d06ab4
;
; Called Functions:
;   FUN_00408b40
;   FUN_00430440
;   FUN_004308a0
;   FUN_00430c40
;   FUN_00430c90
;   FUN_00430d90
;   FUN_004328c0
;   FUN_004a1b70
;   FUN_004d6340
;   FUN_004e6060
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004319e0
        ;   Label: FUN_004319e0
    PUSH ESI                            ; 004319e1
    PUSH EDI                            ; 004319e2
    PUSH EBP                            ; 004319e3
    MOV EBP,ESP                         ; 004319e4
    SUB ESP,0x44                        ; 004319e6
    AND ESP,0xfffffff8                  ; 004319e9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004319ec
    CMP dword ptr [EBX + 0x27b0],0x0    ; 004319ef
    JNZ 0x00431b97                      ; 004319f6
        ;   XREF to: 00431b97 (CONDITIONAL_JUMP)  ; LAB_00431b97
    MOV EAX,dword ptr [EBP + 0x18]      ; 004319fc
    FLD float ptr [EAX + 0x4]           ; 004319ff
    FLDZ                                ; 00431a02
    FCOMPP                              ; 00431a04
    FNSTSW AX                           ; 00431a06
    SAHF                                ; 00431a08
    JNC 0x00431b90                      ; 00431a09
        ;   XREF to: 00431b90 (CONDITIONAL_JUMP)  ; LAB_00431b90
    MOV EDX,dword ptr [EBP + 0x18]      ; 00431a0f
    FLD float ptr [EDX + 0x10]          ; 00431a12
    FMUL ST0                            ; 00431a15
    FLD float ptr [EDX + 0xc]           ; 00431a17
    FMUL ST0                            ; 00431a1a
    FADDP                               ; 00431a1c
    FLD float ptr [EDX + 0x14]          ; 00431a1e
    FMUL ST0                            ; 00431a21
    FADDP                               ; 00431a23
    FSQRT                               ; 00431a25
    XOR ECX,ECX                         ; 00431a27
    ADD EDX,0xc                         ; 00431a29
    FLDZ                                ; 00431a2c
    FCOMPP                              ; 00431a2e
    FNSTSW AX                           ; 00431a30
    SAHF                                ; 00431a32
    JNC 0x00431a37                      ; 00431a33
        ;   XREF to: 00431a37 (CONDITIONAL_JUMP)  ; LAB_00431a37
    MOV ECX,EDX                         ; 00431a35
    MOV EAX,dword ptr [EBP + 0x18]      ; 00431a37
        ;   Label: LAB_00431a37
    MOV EAX,dword ptr [EAX + 0x30]      ; 00431a3a
    CMP EAX,0x6                         ; 00431a3d
    JNC 0x00431be6                      ; 00431a40
        ;   XREF to: 00431be6 (CONDITIONAL_JUMP)  ; LAB_00431be6
    CMP EAX,0x4                         ; 00431a46
    JNC 0x00431c03                      ; 00431a49
        ;   XREF to: 00431c03 (CONDITIONAL_JUMP)  ; LAB_00431c03
    CMP EAX,0x3                         ; 00431a4f
    JNZ 0x00431a64                      ; 00431a52
        ;   XREF to: 00431a64 (CONDITIONAL_JUMP)  ; LAB_00431a64
    MOV EAX,dword ptr [EBP + 0x18]      ; 00431a54
    PUSH dword ptr [EAX + 0x18]         ; 00431a57
    PUSH ECX                            ; 00431a5a
    PUSH EBX                            ; 00431a5b
    CALL FUN_00430c90                   ; 00431a5c
        ;   XREF to: 00430c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00430c90()
    ADD ESP,0xc                         ; 00431a61
    MOV EAX,dword ptr [EBP + 0x18]      ; 00431a64
        ;   Label: LAB_00431a64
    CMP dword ptr [EAX + 0x28],0x5      ; 00431a67
    JNZ 0x00431aa6                      ; 00431a6b
        ;   XREF to: 00431aa6 (CONDITIONAL_JUMP)  ; LAB_00431aa6
    ADD EAX,0x1c                        ; 00431a6d
    PUSH EAX                            ; 00431a70
    PUSH EBX                            ; 00431a71
    LEA ESI,[ESP + 0x2c]                ; 00431a72
    CALL FUN_00408b40                   ; 00431a76
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    ADD ESP,0x8                         ; 00431a7b
    LEA EDI,[ESP + 0xc]                 ; 00431a7e
    PUSH 0x0                            ; 00431a82
    LEA ESI,[ESP + 0x28]                ; 00431a84
    MOV EAX,dword ptr [EBP + 0x18]      ; 00431a88
    PUSH 0x3f800000                     ; 00431a8b
    MOVSD ES:EDI,ESI                    ; 00431a90
    MOVSD ES:EDI,ESI                    ; 00431a91
    MOVSD ES:EDI,ESI                    ; 00431a92
    PUSH 0x0                            ; 00431a93
    MOV ESI,dword ptr [EAX]             ; 00431a95
    PUSH ESI                            ; 00431a97
    LEA EAX,[ESP + 0x1c]                ; 00431a98
    PUSH EAX                            ; 00431a9c
    PUSH EBX                            ; 00431a9d
    CALL FUN_004308a0                   ; 00431a9e
        ;   XREF to: 004308a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004308a0()
    ADD ESP,0x18                        ; 00431aa3
    MOV EAX,dword ptr [EBP + 0x18]      ; 00431aa6
        ;   Label: LAB_00431aa6
    CMP dword ptr [EAX + 0x28],0x9      ; 00431aa9
    JNZ 0x00431aca                      ; 00431aad
        ;   XREF to: 00431aca (CONDITIONAL_JUMP)  ; LAB_00431aca
    ADD EAX,0x1c                        ; 00431aaf
    PUSH EAX                            ; 00431ab2
    PUSH EBX                            ; 00431ab3
    LEA ESI,[ESP + 0x38]                ; 00431ab4
    CALL FUN_00408b40                   ; 00431ab8
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    ADD ESP,0x8                         ; 00431abd
    MOV dword ptr [EBX + 0xb9f0],0x3f000000 ; 00431ac0
    MOV EAX,dword ptr [EBP + 0x18]      ; 00431aca
        ;   Label: LAB_00431aca
    FLD float ptr [EAX + 0x8]           ; 00431acd
    FLDZ                                ; 00431ad0
    FCOMPP                              ; 00431ad2
    FNSTSW AX                           ; 00431ad4
    SAHF                                ; 00431ad6
    JNC 0x00431b3a                      ; 00431ad7
        ;   XREF to: 00431b3a (CONDITIONAL_JUMP)  ; LAB_00431b3a
    MOV EAX,dword ptr [EBP + 0x18]      ; 00431ad9
    FLD float ptr [EAX + 0x4]           ; 00431adc
    FMUL float ptr [EAX + 0x8]          ; 00431adf
    CALL FUN_005c03a0                   ; 00431ae2
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x3c]        ; 00431ae7
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00431aeb
    INC EAX                             ; 00431aef
    MOV dword ptr [ESP + 0x40],EAX      ; 00431af0
    MOV EAX,dword ptr [EBP + 0x18]      ; 00431af4
    ADD EAX,0x1c                        ; 00431af7
    PUSH EAX                            ; 00431afa
    PUSH EBX                            ; 00431afb
    LEA ESI,[ESP + 0x8]                 ; 00431afc
    LEA EDI,[ESP + 0x20]                ; 00431b00
    CALL FUN_00408b40                   ; 00431b04
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0x8]                 ; 00431b09
    ADD ESP,0x8                         ; 00431b0d
    MOVSD ES:EDI,ESI                    ; 00431b10
    MOVSD ES:EDI,ESI                    ; 00431b11
    MOVSD ES:EDI,ESI                    ; 00431b12
    MOV EAX,dword ptr [EBX + 0x27a0]    ; 00431b13
    PUSH EAX                            ; 00431b19
    MOV EDX,dword ptr [ESP + 0x44]      ; 00431b1a
    MOV EAX,dword ptr [EBP + 0x18]      ; 00431b1e
    PUSH EDX                            ; 00431b21
    ADD EAX,0xc                         ; 00431b22
    PUSH EAX                            ; 00431b25
    LEA EAX,[ESP + 0x24]                ; 00431b26
    PUSH EAX                            ; 00431b2a
    MOV ECX,dword ptr [0x0061dca4]      ; 00431b2b | DAT_0061dca4
    PUSH ECX                            ; 00431b31
    CALL FUN_004e6060                   ; 00431b32
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; undefined FUN_004e6060()
    ADD ESP,0x14                        ; 00431b37
    CMP dword ptr [EBX + 0x2540],0x1    ; 00431b3a
        ;   Label: LAB_00431b3a
    JNZ 0x00431b7d                      ; 00431b41
        ;   XREF to: 00431b7d (CONDITIONAL_JUMP)  ; LAB_00431b7d
    MOV EAX,[0x01d06ab4]                ; 00431b43 | DAT_01d06ab4
    CMP EBX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 00431b48
    JZ 0x00431b7d                       ; 00431b4f
        ;   XREF to: 00431b7d (CONDITIONAL_JUMP)  ; LAB_00431b7d
    FLD float ptr [EBX + 0x2538]        ; 00431b51
    FDIV float ptr [EBX + 0x253c]       ; 00431b57
    PUSH 0x40a00000                     ; 00431b5d
    SUB ESP,0x4                         ; 00431b62
    LEA EAX,[EBX + 0x2544]              ; 00431b65
    FSTP float ptr [ESP]                ; 00431b6b
    PUSH EAX                            ; 00431b6e
    MOV EAX,[0x0061d95c]                ; 00431b6f | DAT_0061d95c
    PUSH EAX                            ; 00431b74 | DAT_01ccf390
    CALL FUN_004d6340                   ; 00431b75
        ;   XREF to: 004d6340 (UNCONDITIONAL_CALL)  ; undefined FUN_004d6340()
    ADD ESP,0x10                        ; 00431b7a
    FLD float ptr [EBX + 0x2538]        ; 00431b7d
        ;   Label: LAB_00431b7d
    FLDZ                                ; 00431b83
    FCOMPP                              ; 00431b85
    FNSTSW AX                           ; 00431b87
    SAHF                                ; 00431b89
    JNC 0x00431c13                      ; 00431b8a
        ;   XREF to: 00431c13 (CONDITIONAL_JUMP)  ; LAB_00431c13
    MOV ESP,EBP                         ; 00431b90
        ;   Label: LAB_00431b90
    POP EBP                             ; 00431b92
    POP EDI                             ; 00431b93
    POP ESI                             ; 00431b94
    POP EBX                             ; 00431b95
    RET                                 ; 00431b96
    PUSH 0x5d5a7f                       ; 00431b97 | s_ShotInvulnerable_005d5a7e+1
        ;   Label: LAB_00431b97
    MOV EDX,dword ptr [0x0061b4d0]      ; 00431b9c | DAT_0061b4d0
    PUSH EDX                            ; 00431ba2
    CALL FUN_004a1b70                   ; 00431ba3
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; undefined FUN_004a1b70()
    ADD ESP,0x8                         ; 00431ba8
    MOV ESP,EBP                         ; 00431bab
    POP EBP                             ; 00431bad
    POP EDI                             ; 00431bae
    POP ESI                             ; 00431baf
    POP EBX                             ; 00431bb0
    RET                                 ; 00431bb1
    PUSH 0x0                            ; 00431bb2
        ;   Label: LAB_00431bb2
    MOV EAX,dword ptr [EBP + 0x18]      ; 00431bb4
    PUSH dword ptr [EAX + 0x18]         ; 00431bb7
    PUSH ECX                            ; 00431bba
    PUSH EBX                            ; 00431bbb
    CALL FUN_00430d90                   ; 00431bbc
        ;   XREF to: 00430d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00430d90()
    ADD ESP,0x10                        ; 00431bc1
    JMP 0x00431a64                      ; 00431bc4
        ;   XREF to: 00431a64 (UNCONDITIONAL_JUMP)  ; LAB_00431a64
    PUSH EBX                            ; 00431bc9
        ;   Label: LAB_00431bc9
    CALL FUN_00430440                   ; 00431bca
        ;   XREF to: 00430440 (UNCONDITIONAL_CALL)  ; undefined FUN_00430440()
    ADD ESP,0x4                         ; 00431bcf
    JMP 0x00431a64                      ; 00431bd2
        ;   XREF to: 00431a64 (UNCONDITIONAL_JUMP)  ; LAB_00431a64
    MOV dword ptr [EBX + 0xb9f0],0x40400000 ; 00431bd7
        ;   Label: LAB_00431bd7
    JMP 0x00431a64                      ; 00431be1
        ;   XREF to: 00431a64 (UNCONDITIONAL_JUMP)  ; LAB_00431a64
    JBE 0x00431bd7                      ; 00431be6
        ;   XREF to: 00431bd7 (CONDITIONAL_JUMP)  ; LAB_00431bd7
        ;   Label: LAB_00431be6
    CMP EAX,0x68                        ; 00431be8
    JNC 0x00431bf7                      ; 00431beb
        ;   XREF to: 00431bf7 (CONDITIONAL_JUMP)  ; LAB_00431bf7
    CMP EAX,0x7                         ; 00431bed
    JZ 0x00431bb2                       ; 00431bf0
        ;   XREF to: 00431bb2 (CONDITIONAL_JUMP)  ; LAB_00431bb2
    JMP 0x00431a64                      ; 00431bf2
        ;   XREF to: 00431a64 (UNCONDITIONAL_JUMP)  ; LAB_00431a64
    JBE 0x00431bc9                      ; 00431bf7
        ;   XREF to: 00431bc9 (CONDITIONAL_JUMP)  ; LAB_00431bc9
        ;   Label: LAB_00431bf7
    CMP EAX,0x6a                        ; 00431bf9
    JZ 0x00431bd7                       ; 00431bfc
        ;   XREF to: 00431bd7 (CONDITIONAL_JUMP)  ; LAB_00431bd7
    JMP 0x00431a64                      ; 00431bfe
        ;   XREF to: 00431a64 (UNCONDITIONAL_JUMP)  ; LAB_00431a64
    JBE 0x00431bb2                      ; 00431c03
        ;   XREF to: 00431bb2 (CONDITIONAL_JUMP)  ; LAB_00431bb2
        ;   Label: LAB_00431c03
    PUSH EBX                            ; 00431c05
    CALL FUN_00430c40                   ; 00431c06
        ;   XREF to: 00430c40 (UNCONDITIONAL_CALL)  ; undefined FUN_00430c40()
    ADD ESP,0x4                         ; 00431c0b
    JMP 0x00431a64                      ; 00431c0e
        ;   XREF to: 00431a64 (UNCONDITIONAL_JUMP)  ; LAB_00431a64
    PUSH EBX                            ; 00431c13
        ;   Label: LAB_00431c13
    CALL FUN_004328c0                   ; 00431c14
        ;   XREF to: 004328c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004328c0()
    ADD ESP,0x4                         ; 00431c19
    MOV ESP,EBP                         ; 00431c1c
    POP EBP                             ; 00431c1e
    POP EDI                             ; 00431c1f
    POP ESI                             ; 00431c20
    POP EBX                             ; 00431c21
    RET                                 ; 00431c22

