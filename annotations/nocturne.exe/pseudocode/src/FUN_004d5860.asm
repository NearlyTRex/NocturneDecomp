; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d5860(int param_1)
;
; Local Variables:
; undefined        Stack[-0xf4]:1  local_f4
; undefined        Stack[-0xc4]:1  local_c4
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01b4d750
;   undefined4 DAT_01c039b8
;   undefined4 DAT_01c039dc
;   undefined4 DAT_01c039e8
;   undefined4 DAT_01c039ec
;   undefined4 DAT_01c039f0
;   undefined4 DAT_01cae0e8
;   undefined4 DAT_01cc9094
;   undefined4 DAT_01cd4318
;   undefined4 DAT_02dc9fe4
;
; Called Functions:
;   FUN_00409f20
;   FUN_00409f60
;   FUN_0040d890
;   FUN_0041ceb0
;   FUN_004265a0
;   FUN_00437db0
;   FUN_004544d0
;   FUN_00460aa0
;   FUN_00461090
;   FUN_004613c0
;   FUN_004cdac0
;   FUN_004e0820
;   FUN_004e1660
;   FUN_004e22b0
;   FUN_0051d9d0
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d5860
        ;   Label: FUN_004d5860
    PUSH ESI                            ; 004d5861
    PUSH EDI                            ; 004d5862
    PUSH EBP                            ; 004d5863
    MOV EBP,ESP                         ; 004d5864
    SUB ESP,0xe4                        ; 004d5866
    SUB EBP,0x7e                        ; 004d586c
    MOV EBX,dword ptr [EBP + 0x92]      ; 004d586f
    CMP dword ptr [EBX + 0x2404],0x0    ; 004d5875
    JZ 0x004d5888                       ; 004d587c
        ;   XREF to: 004d5888 (CONDITIONAL_JUMP)  ; LAB_004d5888
    XOR EAX,EAX                         ; 004d587e
    LEA ESP,[EBP + 0x7e]                ; 004d5880
    POP EBP                             ; 004d5883
    POP EDI                             ; 004d5884
    POP ESI                             ; 004d5885
    POP EBX                             ; 004d5886
    RET                                 ; 004d5887
    PUSH EBX                            ; 004d5888
        ;   Label: LAB_004d5888
    CALL FUN_00409f20                   ; 004d5889
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; undefined FUN_00409f20()
    ADD ESP,0x4                         ; 004d588e
    PUSH 0x0                            ; 004d5891
    LEA EAX,[EBP + 0x2a]                ; 004d5893
    PUSH EAX                            ; 004d5896
    MOV ESI,dword ptr [EBX + 0x14c]     ; 004d5897
    PUSH EBX                            ; 004d589d
    CALL dword ptr [ESI + 0x14]         ; 004d589e
    ADD ESP,0x8                         ; 004d58a1
    PUSH EAX                            ; 004d58a4
    CALL FUN_0041ceb0                   ; 004d58a5
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041ceb0()
    ADD ESP,0x8                         ; 004d58aa
    MOV dword ptr [EBP + 0x72],EAX      ; 004d58ad
    TEST EAX,EAX                        ; 004d58b0
    JZ 0x004d58d8                       ; 004d58b2
        ;   XREF to: 004d58d8 (CONDITIONAL_JUMP)  ; LAB_004d58d8
    FLD float ptr [EBX + 0x47578]       ; 004d58b4
    FLDZ                                ; 004d58ba
    FCOMPP                              ; 004d58bc
    FNSTSW AX                           ; 004d58be
    SAHF                                ; 004d58c0
    JA 0x004d58ec                       ; 004d58c1
        ;   XREF to: 004d58ec (CONDITIONAL_JUMP)  ; LAB_004d58ec
    LEA EAX,[EBX + 0x4694c]             ; 004d58c3
    PUSH dword ptr [EBX + 0x47578]      ; 004d58c9
    PUSH EAX                            ; 004d58cf
    CALL FUN_004e0820                   ; 004d58d0
        ;   XREF to: 004e0820 (UNCONDITIONAL_CALL)  ; undefined FUN_004e0820()
    ADD ESP,0x8                         ; 004d58d5
        ;   Label: LAB_004d58d5
    PUSH EBX                            ; 004d58d8
        ;   Label: LAB_004d58d8
    CALL FUN_00409f60                   ; 004d58d9
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined FUN_00409f60()
    MOV EAX,dword ptr [EBP + 0x72]      ; 004d58de
    ADD ESP,0x4                         ; 004d58e1
    LEA ESP,[EBP + 0x7e]                ; 004d58e4
    POP EBP                             ; 004d58e7
    POP EDI                             ; 004d58e8
    POP ESI                             ; 004d58e9
    POP EBX                             ; 004d58ea
    RET                                 ; 004d58eb
    MOV EAX,[0x005ae704]                ; 004d58ec | DAT_005ae704
        ;   Label: LAB_004d58ec
    MOV EAX,dword ptr [EAX + 0x18]      ; 004d58f1 | DAT_01b4d750
    MOV dword ptr [EBP + 0x76],EAX      ; 004d58f4
    TEST EAX,EAX                        ; 004d58f7
    SETZ AL                             ; 004d58f9
    AND EAX,0xff                        ; 004d58fc
    PUSH EAX                            ; 004d5901
    MOV ECX,dword ptr [0x005ae704]      ; 004d5902 | DAT_005ae704
    PUSH ECX                            ; 004d5908 | DAT_01b4d738
    CALL FUN_004613c0                   ; 004d5909
        ;   XREF to: 004613c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004613c0()
    ADD ESP,0x8                         ; 004d590e
    CALL FUN_004cdac0                   ; 004d5911
        ;   XREF to: 004cdac0 (UNCONDITIONAL_CALL)  ; undefined FUN_004cdac0()
    PUSH 0x0                            ; 004d5916
    MOV ESI,dword ptr [0x01c039b8]      ; 004d5918 | DAT_01c039b8
    MOV EDI,dword ptr [0x01c039dc]      ; 004d591e | DAT_01c039dc
    MOV EAX,[0x01c039e8]                ; 004d5924 | DAT_01c039e8
    MOV EDX,dword ptr [0x01c039ec]      ; 004d5929 | DAT_01c039ec
    MOV ECX,dword ptr [0x01c039f0]      ; 004d592f | DAT_01c039f0
    PUSH 0x1                            ; 004d5935
    NEG ESI                             ; 004d5937
    NEG EDI                             ; 004d5939
    NEG EAX                             ; 004d593b
    NEG EDX                             ; 004d593d
    NEG ECX                             ; 004d593f
    PUSH -0x1                           ; 004d5941
    MOV dword ptr [0x01c039b8],ESI      ; 004d5943 | DAT_01c039b8
    MOV [0x01c039e8],EAX                ; 004d5949 | DAT_01c039e8
    PUSH -0x1                           ; 004d594e
    LEA EAX,[EBX + 0x150]               ; 004d5950
    MOV dword ptr [0x01c039dc],EDI      ; 004d5956 | DAT_01c039dc
    PUSH EAX                            ; 004d595c
    MOV dword ptr [0x01c039ec],EDX      ; 004d595d | DAT_01c039ec
    MOV dword ptr [0x01c039f0],ECX      ; 004d5963 | DAT_01c039f0
    CALL FUN_0051d9d0                   ; 004d5969
        ;   XREF to: 0051d9d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051d9d0()
    ADD ESP,0x14                        ; 004d596e
    PUSH 0x0                            ; 004d5971
    LEA EAX,[EBX + 0xbdec]              ; 004d5973
    PUSH EAX                            ; 004d5979
    CALL FUN_00437db0                   ; 004d597a
        ;   XREF to: 00437db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00437db0()
    ADD ESP,0x8                         ; 004d597f
    MOV ESI,dword ptr [0x02dc9fe4]      ; 004d5982 | DAT_02dc9fe4
    MOV EAX,[0x01cae0e8]                ; 004d5988 | DAT_01cae0e8
    PUSH ESI                            ; 004d598d
    MOV EDI,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004d598e
    PUSH EDI                            ; 004d5995
    CALL FUN_0040d890                   ; 004d5996
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d890()
    MOV dword ptr [EBP + 0x7a],EAX      ; 004d599b
    ADD ESP,0x8                         ; 004d599e
    TEST EAX,EAX                        ; 004d59a1
    JZ 0x004d5a74                       ; 004d59a3
        ;   XREF to: 004d5a74 (CONDITIONAL_JUMP)  ; LAB_004d5a74
    MOV ESI,0x40490fdb                  ; 004d59a9
    XOR EDX,EDX                         ; 004d59ae
    LEA EAX,[EBP + 0x66]                ; 004d59b0
    MOV dword ptr [EBP + 0x66],EDX      ; 004d59b3
    PUSH EAX                            ; 004d59b6
    MOV EAX,0x3f38263b                  ; 004d59b7
    MOV dword ptr [EBP + 0x6e],EDX      ; 004d59bc
    MOV dword ptr [EBP + 0x52],EAX      ; 004d59bf
    LEA EAX,[EBP + 0x4e]                ; 004d59c2
    MOV dword ptr [EBP + 0x4e],EDX      ; 004d59c5
    PUSH EAX                            ; 004d59c8
    LEA EAX,[EBP + -0x36]               ; 004d59c9
    MOV EDX,0x3e3d70a4                  ; 004d59cc
    PUSH EAX                            ; 004d59d1
    MOV dword ptr [EBP + 0x6a],ESI      ; 004d59d2
    MOV dword ptr [EBP + 0x56],EDX      ; 004d59d5
    CALL FUN_0055afb0                   ; 004d59d8
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055afb0()
    MOV ESI,dword ptr [0x01cc9094]      ; 004d59dd | DAT_01cc9094
    LEA EAX,[ESI*0x4 + 0x0]             ; 004d59e3
    SUB EAX,ESI                         ; 004d59ea
    MOV ESI,EAX                         ; 004d59ec
    SHL ESI,0x4                         ; 004d59ee
    LEA EAX,[EBX + 0xfd0]               ; 004d59f1
    ADD ESP,0xc                         ; 004d59f7
    ADD EAX,ESI                         ; 004d59fa
    PUSH EAX                            ; 004d59fc
    LEA EAX,[EBP + -0x36]               ; 004d59fd
    PUSH EAX                            ; 004d5a00
    LEA ESI,[EBP + -0x66]               ; 004d5a01
    LEA EDI,[EBP + -0x6]                ; 004d5a04
    CALL FUN_0055aa00                   ; 004d5a07
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0055aa00()
    ADD ESP,0x8                         ; 004d5a0c
    LEA EAX,[EBP + 0x42]                ; 004d5a0f
    MOV ECX,0xc                         ; 004d5a12
    PUSH EAX                            ; 004d5a17
    LEA EAX,[EBP + -0x6]                ; 004d5a18
    LEA ESI,[EBP + -0x66]               ; 004d5a1b
    PUSH EAX                            ; 004d5a1e
    MOVSD.REP ES:EDI,ESI                ; 004d5a1f
    CALL FUN_0055bc00                   ; 004d5a21
        ;   XREF to: 0055bc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0055bc00()
    ADD ESP,0x8                         ; 004d5a26
    LEA EAX,[EBP + 0x5a]                ; 004d5a29
    PUSH EAX                            ; 004d5a2c
    LEA EAX,[EBP + -0x6]                ; 004d5a2d
    PUSH EAX                            ; 004d5a30
    CALL FUN_0055b180                   ; 004d5a31
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; undefined FUN_0055b180()
    ADD ESP,0x8                         ; 004d5a36
    LEA EAX,[EBP + 0x42]                ; 004d5a39
    PUSH EAX                            ; 004d5a3c
    LEA EAX,[EBP + 0x5a]                ; 004d5a3d
    PUSH EAX                            ; 004d5a40
    MOV ECX,dword ptr [0x005ae704]      ; 004d5a41 | DAT_005ae704
    PUSH ECX                            ; 004d5a47 | DAT_01b4d738
    CALL FUN_00460aa0                   ; 004d5a48
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00460aa0()
    ADD ESP,0xc                         ; 004d5a4d
    MOV EAX,dword ptr [EBP + 0x7a]      ; 004d5a50
    PUSH -0x1                           ; 004d5a53
    ADD EAX,0x1fb40                     ; 004d5a55
    PUSH 0x0                            ; 004d5a5a
    PUSH EAX                            ; 004d5a5c
    CALL FUN_004544d0                   ; 004d5a5d
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004544d0()
    ADD ESP,0xc                         ; 004d5a62
    MOV ESI,dword ptr [0x005ae704]      ; 004d5a65 | DAT_005ae704
    PUSH ESI                            ; 004d5a6b | DAT_01b4d738
    CALL thunk_FUN_004cdbc0             ; 004d5a6c
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004cdbc0()
    ADD ESP,0x4                         ; 004d5a71
    PUSH EBX                            ; 004d5a74
        ;   Label: LAB_004d5a74
    CALL FUN_004265a0                   ; 004d5a75
        ;   XREF to: 004265a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004265a0()
    MOV EDI,dword ptr [0x01cd4318]      ; 004d5a7a | DAT_01cd4318
    ADD ESP,0x4                         ; 004d5a80
    TEST EDI,EDI                        ; 004d5a83
    JZ 0x004d5ab2                       ; 004d5a85
        ;   XREF to: 004d5ab2 (CONDITIONAL_JUMP)  ; LAB_004d5ab2
    MOV EAX,[0x005ae704]                ; 004d5a87 | DAT_005ae704
    PUSH EAX                            ; 004d5a8c | DAT_01b4d738
    CALL FUN_00461090                   ; 004d5a8d
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; undefined FUN_00461090()
    ADD ESP,0x4                         ; 004d5a92
    TEST EAX,EAX                        ; 004d5a95
    JNZ 0x004d5ab2                      ; 004d5a97
        ;   XREF to: 004d5ab2 (CONDITIONAL_JUMP)  ; LAB_004d5ab2
    PUSH EBX                            ; 004d5a99
    LEA ESI,[EBX + 0x150]               ; 004d5a9a
    PUSH ESI                            ; 004d5aa0
    CALL FUN_004e22b0                   ; 004d5aa1
        ;   XREF to: 004e22b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e22b0()
    ADD ESP,0x8                         ; 004d5aa6
    PUSH ESI                            ; 004d5aa9
    CALL FUN_004e1660                   ; 004d5aaa
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1660()
    ADD ESP,0x4                         ; 004d5aaf
    MOV EDX,dword ptr [0x005ae704]      ; 004d5ab2 | DAT_005ae704
        ;   Label: LAB_004d5ab2
    PUSH EDX                            ; 004d5ab8 | DAT_01b4d738
    CALL thunk_FUN_004cdbc0             ; 004d5ab9
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004cdbc0()
    ADD ESP,0x4                         ; 004d5abe
    MOV ECX,dword ptr [EBP + 0x76]      ; 004d5ac1
    PUSH ECX                            ; 004d5ac4
    MOV ESI,dword ptr [0x005ae704]      ; 004d5ac5 | DAT_005ae704
    PUSH ESI                            ; 004d5acb | DAT_01b4d738
    CALL FUN_004613c0                   ; 004d5acc
        ;   XREF to: 004613c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004613c0()
    JMP 0x004d58d5                      ; 004d5ad1
        ;   XREF to: 004d58d5 (UNCONDITIONAL_JUMP)  ; LAB_004d58d5

