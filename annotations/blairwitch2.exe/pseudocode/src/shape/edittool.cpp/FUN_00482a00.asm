; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00482a00(int *param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined1       Stack[-0x160]:1  local_160
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00482320 at 00482330
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d1e6f
;   TerminatedCString s_gEdFont_must_be_set_by_t_005d1e85
;   TerminatedCString s_shape_edittool_cpp_005d28ff
;   TerminatedCString s_Too_many_picklist_column_005d2915
;   TerminatedCString s_Cancel_005d2930
;   undefined4 DAT_006138e0
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_01c25590
;   undefined4 DAT_01c25f78
;   undefined4 DAT_01c25f7c
;   undefined4 DAT_01c2640c
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   ... and 3 more
;
; Called Functions:
;   FUN_004032b0
;   FUN_0047e1d0
;   FUN_00481240
;   FUN_00484390
;   FUN_00484dd0
;   FUN_00484df0
;   FUN_00484ed0
;   FUN_004852f0
;   FUN_00485380
;   FUN_004aaf00
;   FUN_004ab560
;   FUN_004e4500
;   FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482a00
        ;   Label: FUN_00482a00
    PUSH ESI                            ; 00482a01
    PUSH EDI                            ; 00482a02
    PUSH EBP                            ; 00482a03
    SUB ESP,0x150                       ; 00482a04
    CMP dword ptr [0x01c25590],0x0      ; 00482a0a | DAT_01c25590
    JZ 0x00482b0f                       ; 00482a11
        ;   XREF to: 00482b0f (CONDITIONAL_JUMP)  ; LAB_00482b0f
    MOV EAX,[0x01c25590]                ; 00482a17 | DAT_01c25590
        ;   Label: LAB_00482a17
    PUSH 0x6a                           ; 00482a1c
    MOV EDX,dword ptr [EAX + 0x41e8]    ; 00482a1e
    PUSH EAX                            ; 00482a24
    MOV dword ptr [0x01c25f78],EDX      ; 00482a25 | DAT_01c25f78
    CALL FUN_004ab560                   ; 00482a2b
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab560()
    ADD ESP,0x8                         ; 00482a30
    MOV [0x01c25f7c],EAX                ; 00482a33 | DAT_01c25f7c
    PUSH 0x40                           ; 00482a38
    MOV EDX,dword ptr [ESP + 0x168]     ; 00482a3a
    INC EAX                             ; 00482a41
    PUSH 0x0                            ; 00482a42
    MOV dword ptr [EDX + 0x18c],EAX     ; 00482a44
    LEA EAX,[EDX + 0x10]                ; 00482a4a
    MOV dword ptr [EDX + 0x190],0x8     ; 00482a4d
    PUSH EAX                            ; 00482a57
    MOV dword ptr [EDX + 0x50],0x1      ; 00482a58
    CALL FUN_005b77c0                   ; 00482a5f
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 00482a64
    MOV EAX,dword ptr [ESP + 0x164]     ; 00482a67
    XOR ESI,ESI                         ; 00482a6e
    MOV EDI,dword ptr [EAX]             ; 00482a70
    MOV dword ptr [ESP + 0x14c],ESI     ; 00482a72
    TEST EDI,EDI                        ; 00482a79
    JLE 0x00482b7c                      ; 00482a7b
        ;   XREF to: 00482b7c (CONDITIONAL_JUMP)  ; LAB_00482b7c
    MOV EBX,dword ptr [ESP + 0x14c]     ; 00482a81
        ;   Label: LAB_00482a81
    PUSH EBX                            ; 00482a88
    MOV ESI,dword ptr [ESP + 0x168]     ; 00482a89
    PUSH ESI                            ; 00482a90
    XOR EBP,EBP                         ; 00482a91
    CALL FUN_00481240                   ; 00482a93
        ;   XREF to: 00481240 (UNCONDITIONAL_CALL)  ; undefined FUN_00481240()
    ADD ESP,0x8                         ; 00482a98
    MOV EDI,EAX                         ; 00482a9b
    XOR BL,BL                           ; 00482a9d
    MOV EDX,ESP                         ; 00482a9f
        ;   Label: LAB_00482a9f
    MOV BH,byte ptr [EDI]               ; 00482aa1
    MOV EAX,EDI                         ; 00482aa3
    CMP BL,BH                           ; 00482aa5
    JZ 0x00482ab9                       ; 00482aa7
        ;   XREF to: 00482ab9 (CONDITIONAL_JUMP)  ; LAB_00482ab9
    MOV BH,byte ptr [EAX]               ; 00482aa9
        ;   Label: LAB_00482aa9
    LEA ECX,[EAX + 0x1]                 ; 00482aab
    CMP BH,0x9                          ; 00482aae
    JNZ 0x00482b37                      ; 00482ab1
        ;   XREF to: 00482b37 (CONDITIONAL_JUMP)  ; LAB_00482b37
    MOV EAX,ECX                         ; 00482ab7
    MOV byte ptr [EDX],BL               ; 00482ab9
        ;   Label: LAB_00482ab9
    MOV EDI,EAX                         ; 00482abb
    MOV EAX,ESP                         ; 00482abd
    PUSH EAX                            ; 00482abf
    MOV EAX,[0x01c25590]                ; 00482ac0 | DAT_01c25590
    PUSH EAX                            ; 00482ac5
    CALL FUN_004aaf00                   ; 00482ac6
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined FUN_004aaf00()
    MOV EDX,dword ptr [ESI + 0x10]      ; 00482acb
    ADD ESP,0x8                         ; 00482ace
    CMP EAX,EDX                         ; 00482ad1
    JLE 0x00482ad8                      ; 00482ad3
        ;   XREF to: 00482ad8 (CONDITIONAL_JUMP)  ; LAB_00482ad8
    MOV dword ptr [ESI + 0x10],EAX      ; 00482ad5
    INC EBP                             ; 00482ad8
        ;   Label: LAB_00482ad8
    MOV CL,byte ptr [EDI]               ; 00482ad9
    ADD ESI,0x4                         ; 00482adb
    CMP BL,CL                           ; 00482ade
    JZ 0x00482b4d                       ; 00482ae0
        ;   XREF to: 00482b4d (CONDITIONAL_JUMP)  ; LAB_00482b4d
    CMP EBP,0x10                        ; 00482ae6
    JL 0x00482a9f                       ; 00482ae9
        ;   XREF to: 00482a9f (CONDITIONAL_JUMP)  ; LAB_00482a9f
    MOV EAX,0x5d28ff                    ; 00482aeb | = "..\\shape\\edittool.cpp"
    MOV EDX,0xf9a                       ; 00482af0
    PUSH 0x5d2915                       ; 00482af5 | = "Too many picklist columns!"
    MOV [0x01d046a0],EAX                ; 00482afa | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00482aff | DAT_01d046a4
    CALL FUN_004e4500                   ; 00482b05
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00482b0a
    JMP 0x00482a9f                      ; 00482b0d
        ;   XREF to: 00482a9f (UNCONDITIONAL_JUMP)  ; LAB_00482a9f
    MOV ECX,0x5d1e6f                    ; 00482b0f | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00482b0f
    MOV EBX,0xa0                        ; 00482b14
    PUSH 0x5d1e85                       ; 00482b19 | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d046a0],ECX      ; 00482b1e | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 00482b24 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00482b2a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00482b2f
    JMP 0x00482a17                      ; 00482b32
        ;   XREF to: 00482a17 (UNCONDITIONAL_JUMP)  ; LAB_00482a17
    MOV AL,byte ptr [EAX]               ; 00482b37
        ;   Label: LAB_00482b37
    MOV byte ptr [EDX],AL               ; 00482b39
    INC EDX                             ; 00482b3b
    MOV BH,byte ptr [ECX]               ; 00482b3c
    MOV EAX,ECX                         ; 00482b3e
    CMP BL,BH                           ; 00482b40
    JNZ 0x00482aa9                      ; 00482b42
        ;   XREF to: 00482aa9 (CONDITIONAL_JUMP)  ; LAB_00482aa9
    JMP 0x00482ab9                      ; 00482b48
        ;   XREF to: 00482ab9 (UNCONDITIONAL_JUMP)  ; LAB_00482ab9
    MOV EAX,dword ptr [ESP + 0x164]     ; 00482b4d
        ;   Label: LAB_00482b4d
    CMP EBP,dword ptr [EAX + 0x50]      ; 00482b54
    JLE 0x00482b5c                      ; 00482b57
        ;   XREF to: 00482b5c (CONDITIONAL_JUMP)  ; LAB_00482b5c
    MOV dword ptr [EAX + 0x50],EBP      ; 00482b59
    MOV EBP,dword ptr [ESP + 0x14c]     ; 00482b5c
        ;   Label: LAB_00482b5c
    MOV EDX,dword ptr [ESP + 0x164]     ; 00482b63
    INC EBP                             ; 00482b6a
    MOV ECX,dword ptr [EDX]             ; 00482b6b
    MOV dword ptr [ESP + 0x14c],EBP     ; 00482b6d
    CMP EBP,ECX                         ; 00482b74
    JL 0x00482a81                       ; 00482b76
        ;   XREF to: 00482a81 (CONDITIONAL_JUMP)  ; LAB_00482a81
    MOV ESI,dword ptr [ESP + 0x164]     ; 00482b7c
        ;   Label: LAB_00482b7c
    MOV ECX,0x28                        ; 00482b83
    XOR EDI,EDI                         ; 00482b88
    MOV EAX,dword ptr [ESP + 0x164]     ; 00482b8a
        ;   Label: LAB_00482b8a
    MOV EAX,dword ptr [EAX + 0x50]      ; 00482b91
    DEC EAX                             ; 00482b94
    CMP EDI,EAX                         ; 00482b95
    JGE 0x00482bb3                      ; 00482b97
        ;   XREF to: 00482bb3 (CONDITIONAL_JUMP)  ; LAB_00482bb3
    MOV EAX,[0x006141b8]                ; 00482b99 | DAT_006141b8
    MOV EDX,EAX                         ; 00482b9e
    SAR EDX,0x1f                        ; 00482ba0
    IDIV ECX                            ; 00482ba3
    MOV EBP,dword ptr [ESI + 0x10]      ; 00482ba5
    ADD ESI,0x4                         ; 00482ba8
    ADD EBP,EAX                         ; 00482bab
    INC EDI                             ; 00482bad
    MOV dword ptr [ESI + 0xc],EBP       ; 00482bae
    JMP 0x00482b8a                      ; 00482bb1
        ;   XREF to: 00482b8a (UNCONDITIONAL_JUMP)  ; LAB_00482b8a
    MOV EAX,dword ptr [ESP + 0x164]     ; 00482bb3
        ;   Label: LAB_00482bb3
    MOV EDX,dword ptr [ESP + 0x164]     ; 00482bba
    MOV dword ptr [EAX + 0x1a4],0x0     ; 00482bc1
    MOV EDI,dword ptr [EDX + 0x50]      ; 00482bcb
    XOR EAX,EAX                         ; 00482bce
    TEST EDI,EDI                        ; 00482bd0
    JLE 0x00482c00                      ; 00482bd2
        ;   XREF to: 00482c00 (CONDITIONAL_JUMP)  ; LAB_00482c00
    MOV EBX,dword ptr [ESP + 0x164]     ; 00482bd4
    MOV ECX,dword ptr [EDX + 0x10]      ; 00482bdb
        ;   Label: LAB_00482bdb
    ADD EDX,0x4                         ; 00482bde
    MOV ESI,dword ptr [EBX + 0x1a4]     ; 00482be1
    INC EAX                             ; 00482be7
    ADD ESI,ECX                         ; 00482be8
    MOV EDI,dword ptr [EBX + 0x50]      ; 00482bea
    MOV dword ptr [EBX + 0x1a4],ESI     ; 00482bed
    CMP EAX,EDI                         ; 00482bf3
    JL 0x00482bdb                       ; 00482bf5
        ;   XREF to: 00482bdb (CONDITIONAL_JUMP)  ; LAB_00482bdb
    LEA EAX,[EAX]                       ; 00482bf7
    LEA EDX,[EDX]                       ; 00482bfd
    MOV EAX,dword ptr [ESP + 0x164]     ; 00482c00
        ;   Label: LAB_00482c00
    MOV EDX,dword ptr [ESP + 0x164]     ; 00482c07
    MOV EAX,dword ptr [EAX + 0x190]     ; 00482c0e
    MOV EBP,dword ptr [EDX + 0x1a4]     ; 00482c14
    ADD EAX,EAX                         ; 00482c1a
    ADD EBP,EAX                         ; 00482c1c
    MOV dword ptr [EDX + 0x1a4],EBP     ; 00482c1e
    MOV EDX,dword ptr [0x01c25f7c]      ; 00482c24 | DAT_01c25f7c
    MOV EAX,[0x006141bc]                ; 00482c2a | DAT_006141bc
    SHL EDX,0x2                         ; 00482c2f
    SUB EAX,EDX                         ; 00482c32
    MOV ECX,dword ptr [ESP + 0x164]     ; 00482c34
    MOV EDX,EAX                         ; 00482c3b
    MOV ECX,dword ptr [ECX + 0x18c]     ; 00482c3d
    SAR EDX,0x1f                        ; 00482c43
    IDIV ECX                            ; 00482c46
    MOV EDX,dword ptr [ESP + 0x164]     ; 00482c48
    MOV dword ptr [EDX + 0x1a0],EAX     ; 00482c4f
    CMP EAX,0x1                         ; 00482c55
    JGE 0x00482c64                      ; 00482c58
        ;   XREF to: 00482c64 (CONDITIONAL_JUMP)  ; LAB_00482c64
    MOV dword ptr [EDX + 0x1a0],0x1     ; 00482c5a
    MOV EDX,dword ptr [ESP + 0x164]     ; 00482c64
        ;   Label: LAB_00482c64
    MOV EAX,dword ptr [ESP + 0x164]     ; 00482c6b
    MOV ECX,dword ptr [EDX]             ; 00482c72
    CMP ECX,dword ptr [EAX + 0x1a0]     ; 00482c74
    JGE 0x00482c82                      ; 00482c7a
        ;   XREF to: 00482c82 (CONDITIONAL_JUMP)  ; LAB_00482c82
    MOV dword ptr [EDX + 0x1a0],ECX     ; 00482c7c
    MOV EDX,dword ptr [0x006141b8]      ; 00482c82 | DAT_006141b8
        ;   Label: LAB_00482c82
    LEA EAX,[EDX*0x8 + 0x0]             ; 00482c88
    SUB EAX,EDX                         ; 00482c8f
    MOV EDX,EAX                         ; 00482c91
    SAR EDX,0x1f                        ; 00482c93
    SHL EDX,0x3                         ; 00482c96
    SBB EAX,EDX                         ; 00482c99
    SAR EAX,0x3                         ; 00482c9b
    MOV ECX,dword ptr [ESP + 0x164]     ; 00482c9e
    MOV EDX,EAX                         ; 00482ca5
    MOV ECX,dword ptr [ECX + 0x1a4]     ; 00482ca7
    SAR EDX,0x1f                        ; 00482cad
    IDIV ECX                            ; 00482cb0
    MOV EDX,dword ptr [ESP + 0x164]     ; 00482cb2
    MOV dword ptr [EDX + 0x1a8],EAX     ; 00482cb9
    CMP EAX,0x1                         ; 00482cbf
    JGE 0x00482cce                      ; 00482cc2
        ;   XREF to: 00482cce (CONDITIONAL_JUMP)  ; LAB_00482cce
    MOV dword ptr [EDX + 0x1a8],0x1     ; 00482cc4
    MOV EDX,dword ptr [ESP + 0x164]     ; 00482cce
        ;   Label: LAB_00482cce
    MOV EAX,dword ptr [ESP + 0x164]     ; 00482cd5
    MOV ESI,dword ptr [EDX + 0x1a0]     ; 00482cdc
    MOV EAX,dword ptr [EAX]             ; 00482ce2
    ADD EAX,ESI                         ; 00482ce4
    MOV ECX,dword ptr [ESP + 0x164]     ; 00482ce6
    LEA EDX,[EAX + -0x1]                ; 00482ced
    MOV EDI,dword ptr [ECX + 0x1a0]     ; 00482cf0
    MOV EAX,EDX                         ; 00482cf6
    SAR EDX,0x1f                        ; 00482cf8
    IDIV EDI                            ; 00482cfb
    CMP EAX,dword ptr [ECX + 0x1a8]     ; 00482cfd
    JGE 0x00482d0b                      ; 00482d03
        ;   XREF to: 00482d0b (CONDITIONAL_JUMP)  ; LAB_00482d0b
    MOV dword ptr [ECX + 0x1a8],EAX     ; 00482d05
    MOV EAX,dword ptr [ESP + 0x164]     ; 00482d0b
        ;   Label: LAB_00482d0b
    MOV EDX,dword ptr [EAX + 0x54]      ; 00482d12
    TEST EDX,EDX                        ; 00482d15
    JLE 0x00482d28                      ; 00482d17
        ;   XREF to: 00482d28 (CONDITIONAL_JUMP)  ; LAB_00482d28
    MOV EAX,EDX                         ; 00482d19
    MOV EDX,dword ptr [ESP + 0x164]     ; 00482d1b
    MOV dword ptr [EDX + 0x1a8],EAX     ; 00482d22
    MOV EAX,dword ptr [ESP + 0x164]     ; 00482d28
        ;   Label: LAB_00482d28
    MOV dword ptr [EAX + 0x1f0],0x0     ; 00482d2f
    MOV EDX,dword ptr [ESP + 0x164]     ; 00482d39
    MOV EAX,dword ptr [EAX + 0x1a0]     ; 00482d40
    MOV ECX,dword ptr [EDX + 0x1a8]     ; 00482d46
    IMUL EAX,ECX                        ; 00482d4c
    CMP EAX,dword ptr [EDX]             ; 00482d4f
    JGE 0x00482d66                      ; 00482d51
        ;   XREF to: 00482d66 (CONDITIONAL_JUMP)  ; LAB_00482d66
    CMP ECX,0x1                         ; 00482d53
    JLE 0x00483169                      ; 00482d56
        ;   XREF to: 00483169 (CONDITIONAL_JUMP)  ; LAB_00483169
    MOV dword ptr [EDX + 0x1f0],0x2     ; 00482d5c
    MOV EAX,dword ptr [ESP + 0x164]     ; 00482d66
        ;   Label: LAB_00482d66
    MOV EDX,dword ptr [ESP + 0x164]     ; 00482d6d
    MOV EAX,dword ptr [EAX + 0x1a4]     ; 00482d74
    IMUL EAX,dword ptr [EDX + 0x1a8]    ; 00482d7a
    LEA EBP,[EAX + 0x8]                 ; 00482d81
    MOV ECX,dword ptr [EDX + 0x18c]     ; 00482d84
    MOV EAX,dword ptr [EDX + 0x1a0]     ; 00482d8a
    IMUL EAX,ECX                        ; 00482d90
    LEA ESI,[EAX + 0x6]                 ; 00482d93
    CALL FUN_00484dd0                   ; 00482d96
        ;   XREF to: 00484dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00484dd0()
    MOV EBX,EAX                         ; 00482d9b
    MOV dword ptr [ESP + 0x130],EAX     ; 00482d9d
    CALL FUN_00484df0                   ; 00482da4
        ;   XREF to: 00484df0 (UNCONDITIONAL_CALL)  ; undefined FUN_00484df0()
    MOV EDX,dword ptr [ESP + 0x164]     ; 00482da9
    MOV EDI,dword ptr [EDX + 0x1f0]     ; 00482db0
    MOV dword ptr [ESP + 0x134],EAX     ; 00482db6
    CMP EDI,0x1                         ; 00482dbd
    JNZ 0x00483178                      ; 00482dc0
        ;   XREF to: 00483178 (CONDITIONAL_JUMP)  ; LAB_00483178
    ADD EBP,EBX                         ; 00482dc6
    MOV EAX,[0x006141b8]                ; 00482dc8 | DAT_006141b8
        ;   Label: LAB_00482dc8
    MOV EDX,EAX                         ; 00482dcd
    SAR EDX,0x1f                        ; 00482dcf
    SHL EDX,0x7                         ; 00482dd2
    SBB EAX,EDX                         ; 00482dd5
    SAR EAX,0x7                         ; 00482dd7
    MOV dword ptr [ESP + 0x12c],EAX     ; 00482dda
    MOV EAX,[0x006141bc]                ; 00482de1 | DAT_006141bc
    MOV EDX,EAX                         ; 00482de6
    MOV ECX,0x60                        ; 00482de8
    SAR EDX,0x1f                        ; 00482ded
    IDIV ECX                            ; 00482df0
    XOR EBX,EBX                         ; 00482df2
    XOR EDI,EDI                         ; 00482df4
    MOV dword ptr [ESP + 0x138],EAX     ; 00482df6
    MOV EAX,dword ptr [ESP + 0x164]     ; 00482dfd
    MOV dword ptr [ESP + 0x140],EBX     ; 00482e04
    MOV dword ptr [ESP + 0x144],EBX     ; 00482e0b
    MOV DL,byte ptr [EAX + 0x5c]        ; 00482e12
    MOV dword ptr [ESP + 0x148],EBX     ; 00482e15
    TEST DL,DL                          ; 00482e1c
    JZ 0x00482e3a                       ; 00482e1e
        ;   XREF to: 00482e3a (CONDITIONAL_JUMP)  ; LAB_00482e3a
    ADD EAX,0x5c                        ; 00482e20
    PUSH EAX                            ; 00482e23
    CALL FUN_004852f0                   ; 00482e24
        ;   XREF to: 004852f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004852f0()
    MOV ECX,0x1                         ; 00482e29
    ADD ESP,0x4                         ; 00482e2e
    MOV EDI,EAX                         ; 00482e31
    MOV dword ptr [ESP + 0x148],ECX     ; 00482e33
    MOV EAX,dword ptr [ESP + 0x164]     ; 00482e3a
        ;   Label: LAB_00482e3a
    CMP byte ptr [EAX + 0xc0],0x0       ; 00482e41
    JZ 0x00482e65                       ; 00482e48
        ;   XREF to: 00482e65 (CONDITIONAL_JUMP)  ; LAB_00482e65
    ADD EAX,0xc0                        ; 00482e4a
    PUSH EAX                            ; 00482e4f
    CALL FUN_004852f0                   ; 00482e50
        ;   XREF to: 004852f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004852f0()
    ADD ESP,0x4                         ; 00482e55
    CMP EAX,EDI                         ; 00482e58
    JLE 0x00482e5e                      ; 00482e5a
        ;   XREF to: 00482e5e (CONDITIONAL_JUMP)  ; LAB_00482e5e
    MOV EDI,EAX                         ; 00482e5c
    INC dword ptr [ESP + 0x148]         ; 00482e5e
        ;   Label: LAB_00482e5e
    CMP dword ptr [ESP + 0x148],0x0     ; 00482e65
        ;   Label: LAB_00482e65
    JLE 0x00482eed                      ; 00482e6d
        ;   XREF to: 00482eed (CONDITIONAL_JUMP)  ; LAB_00482eed
    PUSH 0x5d2930                       ; 00482e73 | = "Cancel"
    CALL FUN_004852f0                   ; 00482e78
        ;   XREF to: 004852f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004852f0()
    ADD ESP,0x4                         ; 00482e7d
    CMP EAX,EDI                         ; 00482e80
    JLE 0x00482e86                      ; 00482e82
        ;   XREF to: 00482e86 (CONDITIONAL_JUMP)  ; LAB_00482e86
    MOV EDI,EAX                         ; 00482e84
    PUSH 0x0                            ; 00482e86
        ;   Label: LAB_00482e86
    CALL FUN_00485380                   ; 00482e88
        ;   XREF to: 00485380 (UNCONDITIONAL_CALL)  ; undefined FUN_00485380()
    ADD ESP,0x4                         ; 00482e8d
    MOV EDX,dword ptr [ESP + 0x148]     ; 00482e90
    MOV ECX,dword ptr [ESP + 0x12c]     ; 00482e97
    DEC EDX                             ; 00482e9e
    IMUL EDX,ECX                        ; 00482e9f
    MOV ECX,dword ptr [ESP + 0x148]     ; 00482ea2
    IMUL ECX,EDI                        ; 00482ea9
    MOV EBX,dword ptr [ESP + 0x138]     ; 00482eac
    MOV dword ptr [ESP + 0x144],EAX     ; 00482eb3
    ADD EBX,EAX                         ; 00482eba
    MOV EAX,dword ptr [ESP + 0x164]     ; 00482ebc
    ADD ECX,EDX                         ; 00482ec3
    MOV EDX,dword ptr [EAX + 0x1f0]     ; 00482ec5
    MOV dword ptr [ESP + 0x140],ECX     ; 00482ecb
    CMP EDX,0x2                         ; 00482ed2
    JNZ 0x00482ede                      ; 00482ed5
        ;   XREF to: 00482ede (CONDITIONAL_JUMP)  ; LAB_00482ede
    ADD EBX,dword ptr [ESP + 0x138]     ; 00482ed7
    MOV EAX,dword ptr [ESP + 0x140]     ; 00482ede
        ;   Label: LAB_00482ede
    CMP EBP,EAX                         ; 00482ee5
    JGE 0x00482eeb                      ; 00482ee7
        ;   XREF to: 00482eeb (CONDITIONAL_JUMP)  ; LAB_00482eeb
    MOV EBP,EAX                         ; 00482ee9
    ADD ESI,EBX                         ; 00482eeb
        ;   Label: LAB_00482eeb
    MOV EDX,dword ptr [ESP + 0x16c]     ; 00482eed
        ;   Label: LAB_00482eed
    PUSH EDX                            ; 00482ef4
    MOV ECX,dword ptr [ESP + 0x16c]     ; 00482ef5
    PUSH ECX                            ; 00482efc
    PUSH ESI                            ; 00482efd
    PUSH EBP                            ; 00482efe
    MOV ESI,dword ptr [0x006138e0]      ; 00482eff | DAT_006138e0
    PUSH ESI                            ; 00482f05
    CALL FUN_0047e1d0                   ; 00482f06
        ;   XREF to: 0047e1d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047e1d0()
    MOV EAX,[0x01c35e50]                ; 00482f0b | DAT_01c35e50
    SUB EAX,dword ptr [0x01c35e48]      ; 00482f10 | DAT_01c35e48
    LEA EBP,[EAX + 0x1]                 ; 00482f16
    MOV EDX,dword ptr [0x01c35e4c]      ; 00482f19 | DAT_01c35e4c
    MOV EAX,[0x01c35e54]                ; 00482f1f | DAT_01c35e54
    SUB EAX,EDX                         ; 00482f24
    ADD ESP,0x14                        ; 00482f26
    LEA ESI,[EAX + 0x1]                 ; 00482f29
    MOV EDX,dword ptr [ESP + 0x164]     ; 00482f2c
    MOV EAX,dword ptr [ESP + 0x164]     ; 00482f33
    MOV ECX,dword ptr [EDX + 0x1f0]     ; 00482f3a
    ADD EAX,0x1bc                       ; 00482f40
    CMP ECX,0x1                         ; 00482f45
    JNZ 0x00483188                      ; 00482f48
        ;   XREF to: 00483188 (CONDITIONAL_JUMP)  ; LAB_00483188
    MOV ECX,dword ptr [ESP + 0x130]     ; 00482f4e
    MOV EDX,dword ptr [0x01c35e54]      ; 00482f55 | DAT_01c35e54
    SUB EBP,ECX                         ; 00482f5b
    SUB EDX,dword ptr [ESP + 0x144]     ; 00482f5d
    SUB EDX,dword ptr [ESP + 0x138]     ; 00482f64
    PUSH EDX                            ; 00482f6b
    MOV EDX,dword ptr [0x01c35e50]      ; 00482f6c | DAT_01c35e50
    PUSH EDX                            ; 00482f72
    MOV ECX,dword ptr [0x01c35e4c]      ; 00482f73 | DAT_01c35e4c
    PUSH ECX                            ; 00482f79
    SUB EDX,dword ptr [ESP + 0x13c]     ; 00482f7a
    INC EDX                             ; 00482f81
    PUSH EDX                            ; 00482f82
        ;   Label: LAB_00482f82
    PUSH EAX                            ; 00482f83
    CALL FUN_00484390                   ; 00482f84
        ;   XREF to: 00484390 (UNCONDITIONAL_CALL)  ; undefined FUN_00484390()
    ADD ESP,0x14                        ; 00482f89
    CMP dword ptr [ESP + 0x148],0x0     ; 00482f8c
        ;   Label: LAB_00482f8c
    JLE 0x00483067                      ; 00482f94
        ;   XREF to: 00483067 (CONDITIONAL_JUMP)  ; LAB_00483067
    MOV EDX,dword ptr [ESP + 0x144]     ; 00482f9a
    MOV EAX,[0x01c35e54]                ; 00482fa1 | DAT_01c35e54
    SUB EAX,EDX                         ; 00482fa6
    INC EAX                             ; 00482fa8
    MOV dword ptr [ESP + 0x13c],EAX     ; 00482fa9
    MOV EAX,dword ptr [ESP + 0x164]     ; 00482fb0
    CMP byte ptr [EAX + 0x5c],0x0       ; 00482fb7
    JZ 0x0048300a                       ; 00482fbb
        ;   XREF to: 0048300a (CONDITIONAL_JUMP)  ; LAB_0048300a
    MOV ECX,dword ptr [ESP + 0x140]     ; 00482fbd
    MOV EDX,dword ptr [ESP + 0x164]     ; 00482fc4
    MOV EAX,[0x01c35e50]                ; 00482fcb | DAT_01c35e50
    ADD EDX,0x5c                        ; 00482fd0
    INC EAX                             ; 00482fd3
    PUSH EDX                            ; 00482fd4
    SUB EAX,ECX                         ; 00482fd5
    MOV EDX,dword ptr [ESP + 0x140]     ; 00482fd7
    ADD EDX,dword ptr [ESP + 0x148]     ; 00482fde
    DEC EDX                             ; 00482fe5
    PUSH EDX                            ; 00482fe6
    LEA EDX,[EAX + EDI*0x1 + -0x1]      ; 00482fe7
    PUSH EDX                            ; 00482feb
    MOV EDX,dword ptr [ESP + 0x148]     ; 00482fec
    PUSH EDX                            ; 00482ff3
    PUSH EAX                            ; 00482ff4
    MOV EAX,dword ptr [ESP + 0x178]     ; 00482ff5
    ADD EAX,0x1f4                       ; 00482ffc
    PUSH EAX                            ; 00483001
    CALL FUN_00484ed0                   ; 00483002
        ;   XREF to: 00484ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_00484ed0()
    ADD ESP,0x18                        ; 00483007
    MOV EAX,dword ptr [ESP + 0x164]     ; 0048300a
        ;   Label: LAB_0048300a
    CMP byte ptr [EAX + 0xc0],0x0       ; 00483011
    JZ 0x00483065                       ; 00483018
        ;   XREF to: 00483065 (CONDITIONAL_JUMP)  ; LAB_00483065
    MOV EDX,dword ptr [ESP + 0x164]     ; 0048301a
    ADD EDX,0xc0                        ; 00483021
    MOV ECX,dword ptr [ESP + 0x144]     ; 00483027
    PUSH EDX                            ; 0048302e
    MOV EDX,dword ptr [ESP + 0x140]     ; 0048302f
    MOV EAX,[0x01c35e50]                ; 00483036 | DAT_01c35e50
    ADD EDX,ECX                         ; 0048303b
    INC EAX                             ; 0048303d
    DEC EDX                             ; 0048303e
    SUB EAX,EDI                         ; 0048303f
    PUSH EDX                            ; 00483041
    LEA EDX,[EAX + EDI*0x1 + -0x1]      ; 00483042
    PUSH EDX                            ; 00483046
    MOV EDI,dword ptr [ESP + 0x148]     ; 00483047
    PUSH EDI                            ; 0048304e
    PUSH EAX                            ; 0048304f
    MOV EAX,dword ptr [ESP + 0x178]     ; 00483050
    ADD EAX,0x2d8                       ; 00483057
    PUSH EAX                            ; 0048305c
    CALL FUN_00484ed0                   ; 0048305d
        ;   XREF to: 00484ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_00484ed0()
    ADD ESP,0x18                        ; 00483062
    SUB ESI,EBX                         ; 00483065
        ;   Label: LAB_00483065
    MOV ECX,dword ptr [ESP + 0x164]     ; 00483067
        ;   Label: LAB_00483067
    MOV EDX,ESI                         ; 0048306e
    MOV EAX,ESI                         ; 00483070
    SAR EDX,0x1f                        ; 00483072
    MOV ECX,dword ptr [ECX + 0x18c]     ; 00483075
    IDIV ECX                            ; 0048307b
    MOV EDX,dword ptr [ESP + 0x164]     ; 0048307d
    MOV ECX,dword ptr [EDX + 0x1a4]     ; 00483084
    MOV dword ptr [EDX + 0x1a0],EAX     ; 0048308a
    MOV EDX,EBP                         ; 00483090
    MOV EAX,EBP                         ; 00483092
    SAR EDX,0x1f                        ; 00483094
    IDIV ECX                            ; 00483097
    MOV EDX,dword ptr [ESP + 0x164]     ; 00483099
    MOV dword ptr [EDX + 0x1a8],EAX     ; 004830a0
    MOV ECX,dword ptr [EDX + 0x1a0]     ; 004830a6
    MOV EAX,dword ptr [EDX]             ; 004830ac
    ADD EAX,ECX                         ; 004830ae
    LEA EDX,[EAX + -0x1]                ; 004830b0
    MOV ECX,dword ptr [ESP + 0x164]     ; 004830b3
    MOV EAX,EDX                         ; 004830ba
    MOV EBX,dword ptr [ECX + 0x1a0]     ; 004830bc
    SAR EDX,0x1f                        ; 004830c2
    IDIV EBX                            ; 004830c5
    CMP EAX,dword ptr [ECX + 0x1a8]     ; 004830c7
    JGE 0x004830d5                      ; 004830cd
        ;   XREF to: 004830d5 (CONDITIONAL_JUMP)  ; LAB_004830d5
    MOV dword ptr [ECX + 0x1a8],EAX     ; 004830cf
    MOV EAX,dword ptr [ESP + 0x164]     ; 004830d5
        ;   Label: LAB_004830d5
    CMP dword ptr [EAX + 0x1a8],0x1     ; 004830dc
    JGE 0x004830ef                      ; 004830e3
        ;   XREF to: 004830ef (CONDITIONAL_JUMP)  ; LAB_004830ef
    MOV dword ptr [EAX + 0x1a8],0x1     ; 004830e5
    MOV EAX,dword ptr [ESP + 0x164]     ; 004830ef
        ;   Label: LAB_004830ef
    MOV EDX,dword ptr [ESP + 0x164]     ; 004830f6
    MOV EAX,dword ptr [EAX + 0x1a0]     ; 004830fd
    IMUL EAX,dword ptr [EDX + 0x1a8]    ; 00483103
    MOV ECX,dword ptr [EDX + 0x1a8]     ; 0048310a
    MOV dword ptr [EDX + 0x19c],EAX     ; 00483110
    MOV EDX,EBP                         ; 00483116
    MOV EAX,EBP                         ; 00483118
    SAR EDX,0x1f                        ; 0048311a
    IDIV ECX                            ; 0048311d
    MOV EDX,dword ptr [ESP + 0x164]     ; 0048311f
    MOV dword ptr [EDX + 0x198],0x0     ; 00483126
    MOV dword ptr [EDX + 0x1a4],EAX     ; 00483130
    CALL FUN_004032b0                   ; 00483136
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    MOV EAX,dword ptr [ESP + 0x164]     ; 0048313b
    MOV EBX,0xffffffff                  ; 00483142
    MOV byte ptr [EAX + 0x124],0x0      ; 00483147
    MOV dword ptr [0x01c2640c],EBX      ; 0048314e | DAT_01c2640c
    MOV dword ptr [EAX + 0x188],0x0     ; 00483154
    ADD ESP,0x150                       ; 0048315e
    POP EBP                             ; 00483164
    POP EDI                             ; 00483165
    POP ESI                             ; 00483166
    POP EBX                             ; 00483167
    RET                                 ; 00483168
    MOV dword ptr [EDX + 0x1f0],0x1     ; 00483169
        ;   Label: LAB_00483169
    JMP 0x00482d66                      ; 00483173
        ;   XREF to: 00482d66 (UNCONDITIONAL_JUMP)  ; LAB_00482d66
    CMP EDI,0x2                         ; 00483178
        ;   Label: LAB_00483178
    JNZ 0x00482dc8                      ; 0048317b
        ;   XREF to: 00482dc8 (CONDITIONAL_JUMP)  ; LAB_00482dc8
    ADD ESI,EAX                         ; 00483181
    JMP 0x00482dc8                      ; 00483183
        ;   XREF to: 00482dc8 (UNCONDITIONAL_JUMP)  ; LAB_00482dc8
    CMP ECX,0x2                         ; 00483188
        ;   Label: LAB_00483188
    JNZ 0x00482f8c                      ; 0048318b
        ;   XREF to: 00482f8c (CONDITIONAL_JUMP)  ; LAB_00482f8c
    SUB ESI,dword ptr [ESP + 0x134]     ; 00483191
    MOV EDX,dword ptr [0x01c35e54]      ; 00483198 | DAT_01c35e54
    SUB EDX,EBX                         ; 0048319e
    PUSH EDX                            ; 004831a0
    MOV ECX,dword ptr [0x01c35e50]      ; 004831a1 | DAT_01c35e50
    MOV EDX,dword ptr [0x01c35e54]      ; 004831a7 | DAT_01c35e54
    PUSH ECX                            ; 004831ad
    SUB EDX,dword ptr [ESP + 0x13c]     ; 004831ae
    SUB EDX,EBX                         ; 004831b5
    INC EDX                             ; 004831b7
    PUSH EDX                            ; 004831b8
    MOV EDX,dword ptr [0x01c35e48]      ; 004831b9 | DAT_01c35e48
    JMP 0x00482f82                      ; 004831bf
        ;   XREF to: 00482f82 (UNCONDITIONAL_JUMP)  ; LAB_00482f82

