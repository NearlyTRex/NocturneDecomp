; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a57c0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x630]:1  local_630
; undefined        Stack[-0x130]:1  local_130
; undefined1       Stack[-0x12f]:1  local_12f
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
;   FUN_0049da10 at 0049e5a1
;
; Referenced Globals:
;   undefined4 DAT_0058437c
;   string s_Can't_open_%s_00584380
;   string s_%s_is_%d_bytes,_but_expected_%dx_0058438e
;   undefined1 DAT_005843be
;   undefined1 DAT_005843bf
;   undefined1 DAT_005843c0
;   undefined1 DAT_005843c1
;   undefined4 DAT_005843c3
;   undefined4 DAT_005843c6
;   string s_Can't_open_%s_005843ca
;   undefined4 DAT_005843d8
;   undefined4 DAT_005843db
;   string s_..\\core\\game.cpp_005843df
;   string s_Can't_open_%s_005843f0
;   undefined4 DAT_005b6d50
;   ... and 15 more
;
; Called Functions:
;   FUN_00403f50
;   FUN_004568c0
;   FUN_00456a60
;   FUN_0046fcd0
;   FUN_0049a890
;   FUN_0049e8b0
;   FUN_0049f8c0
;   FUN_004c8440
;   FUN_0052ee70
;   FUN_005322e0
;   FUN_00532320
;   FUN_00553470
;   FUN_00553520
;   FUN_00553910
;   FUN_00558b70
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a57c0
        ;   Label: FUN_004a57c0
    PUSH ESI                            ; 004a57c1
    PUSH EDI                            ; 004a57c2
    PUSH EBP                            ; 004a57c3
    SUB ESP,0xa20                       ; 004a57c4
    MOV EAX,dword ptr [ESP + 0xa34]     ; 004a57ca
    CMP byte ptr [EAX + 0x8b4],0x0      ; 004a57d1
    JNZ 0x004a57e5                      ; 004a57d8
        ;   XREF to: 004a57e5 (CONDITIONAL_JUMP)  ; LAB_004a57e5
    ADD ESP,0xa20                       ; 004a57da
    POP EBP                             ; 004a57e0
    POP EDI                             ; 004a57e1
    POP ESI                             ; 004a57e2
    POP EBX                             ; 004a57e3
    RET                                 ; 004a57e4
    LEA ESI,[EAX + 0x8b4]               ; 004a57e5
        ;   Label: LAB_004a57e5
    PUSH ESI                            ; 004a57eb
    PUSH 0x58437c                       ; 004a57ec | DAT_0058437c
    MOV dword ptr [EAX + 0xcc],0x0      ; 004a57f1
    CALL FUN_004568c0                   ; 004a57fb
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004568c0()
    MOV EDX,EAX                         ; 004a5800
    ADD ESP,0x8                         ; 004a5802
    TEST EAX,EAX                        ; 004a5805
    JL 0x004a5bc4                       ; 004a5807
        ;   XREF to: 004a5bc4 (CONDITIONAL_JUMP)  ; LAB_004a5bc4
    MOV ECX,dword ptr [ESP + 0xa34]     ; 004a580d
    MOV EAX,dword ptr [ESP + 0xa34]     ; 004a5814
    MOV EBX,dword ptr [ECX + 0x9b8]     ; 004a581b
    MOV EAX,dword ptr [EAX + 0x9b4]     ; 004a5821
    IMUL EAX,EBX                        ; 004a5827
    CMP EDX,EAX                         ; 004a582a
    JNZ 0x004a5bf2                      ; 004a582c
        ;   XREF to: 004a5bf2 (CONDITIONAL_JUMP)  ; LAB_004a5bf2
    PUSH 0x0                            ; 004a5832
    LEA EAX,[ESP + 0x904]               ; 004a5834
    PUSH EAX                            ; 004a583b
    PUSH 0x0                            ; 004a583c
    PUSH 0x0                            ; 004a583e
    PUSH ESI                            ; 004a5840
    CALL FUN_00566498                   ; 004a5841
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; undefined FUN_00566498()
    ADD ESP,0x14                        ; 004a5846
    LEA EDI,[ESP + 0x900]               ; 004a5849
    MOV ESI,0x5843be                    ; 004a5850 | DAT_005843be
    PUSH EDI                            ; 004a5855
    SUB ECX,ECX                         ; 004a5856
    DEC ECX                             ; 004a5858
    MOV AL,0x0                          ; 004a5859
    SCASB.REPNE ES:EDI                  ; 004a585b
    DEC EDI                             ; 004a585d
    MOV AL,byte ptr [ESI]               ; 004a585e | DAT_005843be | DAT_005843c0
        ;   Label: LAB_004a585e
    MOV byte ptr [EDI],AL               ; 004a5860
    CMP AL,0x0                          ; 004a5862
    JZ 0x004a5876                       ; 004a5864
        ;   XREF to: 004a5876 (CONDITIONAL_JUMP)  ; LAB_004a5876
    MOV AL,byte ptr [ESI + 0x1]         ; 004a5866 | DAT_005843bf | DAT_005843c1
    ADD ESI,0x2                         ; 004a5869
    MOV byte ptr [EDI + 0x1],AL         ; 004a586c
    ADD EDI,0x2                         ; 004a586f
    CMP AL,0x0                          ; 004a5872
    JNZ 0x004a585e                      ; 004a5874
        ;   XREF to: 004a585e (CONDITIONAL_JUMP)  ; LAB_004a585e
    POP EDI                             ; 004a5876
        ;   Label: LAB_004a5876
    PUSH 0x5843c3                       ; 004a5877 | DAT_005843c3
    LEA EAX,[ESP + 0x904]               ; 004a587c
    PUSH EAX                            ; 004a5883
    PUSH 0x5843c6                       ; 004a5884 | DAT_005843c6
    CALL FUN_00456a60                   ; 004a5889
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00456a60()
    MOV EBX,EAX                         ; 004a588e
    ADD ESP,0xc                         ; 004a5890
    TEST EAX,EAX                        ; 004a5893
    JZ 0x004a5c29                       ; 004a5895
        ;   XREF to: 004a5c29 (CONDITIONAL_JUMP)  ; LAB_004a5c29
    PUSH EAX                            ; 004a589b
    PUSH 0x300                          ; 004a589c
    PUSH 0x1                            ; 004a58a1
    LEA EAX,[ESP + 0x40c]               ; 004a58a3
    PUSH EAX                            ; 004a58aa
    CALL FUN_005636d0                   ; 004a58ab
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005636d0()
    ADD ESP,0x10                        ; 004a58b0
    PUSH EBX                            ; 004a58b3
    CALL FUN_00563380                   ; 004a58b4
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined FUN_00563380()
    ADD ESP,0x4                         ; 004a58b9
    XOR EBX,EBX                         ; 004a58bc
    XOR ESI,ESI                         ; 004a58be
    MOV dword ptr [ESP + 0xa10],EBX     ; 004a58c0
    CMP dword ptr [0x005b7624],0x10     ; 004a58c7 | DAT_005b7624
        ;   Label: LAB_004a58c7
    JNZ 0x004a5c5e                      ; 004a58ce
        ;   XREF to: 004a5c5e (CONDITIONAL_JUMP)  ; LAB_004a5c5e
    MOV EDI,dword ptr [0x01c00628]      ; 004a58d4 | DAT_01c00628
    XOR EAX,EAX                         ; 004a58da
    XOR EDX,EDX                         ; 004a58dc
    MOV AL,byte ptr [ESP + EBX*0x1 + 0x400] ; 004a58de
    DIV EDI                             ; 004a58e5
    MOVZX EBP,byte ptr [ESP + EBX*0x1 + 0x401] ; 004a58e7
    MOV dword ptr [ESP + 0xa00],EBP     ; 004a58ef
    MOV EDI,EAX                         ; 004a58f6
    XOR EDX,EDX                         ; 004a58f8
    MOV EAX,EBP                         ; 004a58fa
    DIV dword ptr [0x01c00634]          ; 004a58fc | DAT_01c00634
    XOR ECX,ECX                         ; 004a5902
    MOV CL,byte ptr [ESP + EBX*0x1 + 0x402] ; 004a5904
    MOV dword ptr [ESP + 0xa04],ECX     ; 004a590b
    MOV dword ptr [ESP + 0xa00],EAX     ; 004a5912
    XOR EDX,EDX                         ; 004a5919
    MOV EAX,ECX                         ; 004a591b
    DIV dword ptr [0x01c00640]          ; 004a591d | DAT_01c00640
    MOV CL,byte ptr [0x01c00624]        ; 004a5923 | DAT_01c00624
    MOV dword ptr [ESP + 0xa04],EAX     ; 004a5929
    MOV EAX,dword ptr [ESP + 0xa00]     ; 004a5930
    SHL EDI,CL                          ; 004a5937
    MOV CL,byte ptr [0x01c00630]        ; 004a5939 | DAT_01c00630
    SHL EAX,CL                          ; 004a593f
    MOV CL,byte ptr [0x01c0063c]        ; 004a5941 | DAT_01c0063c
    OR EDI,EAX                          ; 004a5947
    MOV EAX,dword ptr [ESP + 0xa04]     ; 004a5949
    SHL EAX,CL                          ; 004a5950
    OR EAX,EDI                          ; 004a5952
    MOV word ptr [ESP + ESI*0x1 + 0x700],AX ; 004a5954
    MOV EDI,dword ptr [ESP + 0xa10]     ; 004a595c
        ;   Label: LAB_004a595c
    ADD ESI,0x2                         ; 004a5963
    ADD EDI,0x4                         ; 004a5966
    ADD EBX,0x3                         ; 004a5969
    MOV dword ptr [ESP + 0xa10],EDI     ; 004a596c
    CMP ESI,0x200                       ; 004a5973
    JNZ 0x004a58c7                      ; 004a5979
        ;   XREF to: 004a58c7 (CONDITIONAL_JUMP)  ; LAB_004a58c7
    CALL FUN_00553470                   ; 004a597f
        ;   XREF to: 00553470 (UNCONDITIONAL_CALL)  ; undefined FUN_00553470()
    CALL FUN_005322e0                   ; 004a5984
        ;   XREF to: 005322e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005322e0()
    CALL FUN_0052ee70                   ; 004a5989
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; undefined FUN_0052ee70()
    CALL FUN_00532320                   ; 004a598e
        ;   XREF to: 00532320 (UNCONDITIONAL_CALL)  ; undefined FUN_00532320()
    CALL FUN_00553520                   ; 004a5993
        ;   XREF to: 00553520 (UNCONDITIONAL_CALL)  ; undefined FUN_00553520()
    CALL FUN_00553910                   ; 004a5998
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined FUN_00553910()
    MOV EAX,dword ptr [ESP + 0xa34]     ; 004a599d
    MOV EDX,dword ptr [ESP + 0xa34]     ; 004a59a4
    MOV EAX,dword ptr [EAX + 0x9b4]     ; 004a59ab
    IMUL EAX,dword ptr [EDX + 0x9b8]    ; 004a59b1
    PUSH EAX                            ; 004a59b8
    CALL FUN_005635b0                   ; 004a59b9
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005635b0()
    ADD ESP,0x4                         ; 004a59be
    MOV dword ptr [ESP + 0xa18],EAX     ; 004a59c1
    TEST EAX,EAX                        ; 004a59c8
    JZ 0x004a5c45                       ; 004a59ca
        ;   XREF to: 004a5c45 (CONDITIONAL_JUMP)  ; LAB_004a5c45
    MOV ESI,dword ptr [ESP + 0xa34]     ; 004a59d0
    PUSH 0x5843d8                       ; 004a59d7 | DAT_005843d8
    ADD ESI,0x8b4                       ; 004a59dc
    PUSH ESI                            ; 004a59e2
    PUSH 0x5843db                       ; 004a59e3 | DAT_005843db
    CALL FUN_00456a60                   ; 004a59e8
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00456a60()
    ADD ESP,0xc                         ; 004a59ed
    MOV EBX,EAX                         ; 004a59f0
    TEST EAX,EAX                        ; 004a59f2
    JNZ 0x004a5a19                      ; 004a59f4
        ;   XREF to: 004a5a19 (CONDITIONAL_JUMP)  ; LAB_004a5a19
    PUSH ESI                            ; 004a59f6
    MOV EAX,0x5843df                    ; 004a59f7 | = "..\\core\\game.cpp"
    MOV EDX,0x1028                      ; 004a59fc
    PUSH 0x5843f0                       ; 004a5a01 | = "Can't open %s"
    MOV [0x01cc4800],EAX                ; 004a5a06 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004a5a0b | DAT_01cc4804
    CALL FUN_004c8440                   ; 004a5a11
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 004a5a16
    MOV EAX,dword ptr [ESP + 0xa34]     ; 004a5a19
        ;   Label: LAB_004a5a19
    PUSH EBX                            ; 004a5a20
    MOV ECX,dword ptr [EAX + 0x9b8]     ; 004a5a21
    PUSH ECX                            ; 004a5a27
    MOV ESI,dword ptr [EAX + 0x9b4]     ; 004a5a28
    PUSH ESI                            ; 004a5a2e
    MOV EDI,dword ptr [ESP + 0xa24]     ; 004a5a2f
    PUSH EDI                            ; 004a5a36
    CALL FUN_005636d0                   ; 004a5a37
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005636d0()
    ADD ESP,0x10                        ; 004a5a3c
    PUSH EBX                            ; 004a5a3f
    XOR EBP,EBP                         ; 004a5a40
    CALL FUN_00563380                   ; 004a5a42
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined FUN_00563380()
    ADD ESP,0x4                         ; 004a5a47
    MOV EAX,[0x005b7620]                ; 004a5a4a | DAT_005b7620
    MOV dword ptr [ESP + 0xa14],EBP     ; 004a5a4f
    TEST EAX,EAX                        ; 004a5a56
    JLE 0x004a5b59                      ; 004a5a58
        ;   XREF to: 004a5b59 (CONDITIONAL_JUMP)  ; LAB_004a5b59
    MOV dword ptr [ESP + 0xa0c],EBP     ; 004a5a5e
    MOV EAX,dword ptr [ESP + 0xa34]     ; 004a5a65
        ;   Label: LAB_004a5a65
    MOV EDX,dword ptr [ESP + 0xa14]     ; 004a5a6c
    IMUL EDX,dword ptr [EAX + 0x9b8]    ; 004a5a73
    MOV ECX,dword ptr [0x005b7620]      ; 004a5a7a | DAT_005b7620
    MOV EAX,EDX                         ; 004a5a80
    SAR EDX,0x1f                        ; 004a5a82
    IDIV ECX                            ; 004a5a85
    MOV EDX,dword ptr [ESP + 0xa34]     ; 004a5a87
    MOV EDX,dword ptr [EDX + 0x9b4]     ; 004a5a8e
    IMUL EDX,EAX                        ; 004a5a94
    MOV EBX,dword ptr [0x005b761c]      ; 004a5a97 | DAT_005b761c
    XOR ECX,ECX                         ; 004a5a9d
    MOV dword ptr [ESP + 0xa1c],EDX     ; 004a5a9f
    TEST EBX,EBX                        ; 004a5aa6
    JLE 0x004a5b2b                      ; 004a5aa8
        ;   XREF to: 004a5b2b (CONDITIONAL_JUMP)  ; LAB_004a5b2b
    MOV EDI,dword ptr [ESP + 0xa0c]     ; 004a5aae
    XOR EBX,EBX                         ; 004a5ab5
    XOR ESI,ESI                         ; 004a5ab7
    MOV EDX,dword ptr [ESP + 0xa34]     ; 004a5ab9
        ;   Label: LAB_004a5ab9
    MOV EDX,dword ptr [EDX + 0x9b4]     ; 004a5ac0
    IMUL EDX,ECX                        ; 004a5ac6
    MOV EBP,dword ptr [0x005b761c]      ; 004a5ac9 | DAT_005b761c
    MOV EAX,EDX                         ; 004a5acf
    SAR EDX,0x1f                        ; 004a5ad1
    IDIV EBP                            ; 004a5ad4
    ADD EAX,dword ptr [ESP + 0xa1c]     ; 004a5ad6
    MOV EDX,dword ptr [ESP + 0xa18]     ; 004a5add
    MOV EBP,dword ptr [0x005b7624]      ; 004a5ae4 | DAT_005b7624
    ADD EDX,EAX                         ; 004a5aea
    CMP EBP,0x10                        ; 004a5aec
    JNZ 0x004a5ccb                      ; 004a5aef
        ;   XREF to: 004a5ccb (CONDITIONAL_JUMP)  ; LAB_004a5ccb
    MOV EAX,dword ptr [EDI + 0x1bd2fa0] ; 004a5af5 | DAT_01bd2fa0
    ADD EAX,ESI                         ; 004a5afb
    MOV dword ptr [ESP + 0xa08],EAX     ; 004a5afd
    XOR EAX,EAX                         ; 004a5b04
    MOV AL,byte ptr [EDX]               ; 004a5b06
    MOV EDX,dword ptr [ESP + 0xa08]     ; 004a5b08
    MOV AX,word ptr [ESP + EAX*0x2 + 0x700] ; 004a5b0f
    MOV word ptr [EDX],AX               ; 004a5b17
    MOV EBP,dword ptr [0x005b761c]      ; 004a5b1a | DAT_005b761c
        ;   Label: LAB_004a5b1a
    ADD EBX,0x4                         ; 004a5b20
    INC ECX                             ; 004a5b23
    ADD ESI,0x2                         ; 004a5b24
    CMP ECX,EBP                         ; 004a5b27
    JL 0x004a5ab9                       ; 004a5b29
        ;   XREF to: 004a5ab9 (CONDITIONAL_JUMP)  ; LAB_004a5ab9
    MOV EDX,dword ptr [ESP + 0xa0c]     ; 004a5b2b
        ;   Label: LAB_004a5b2b
    MOV ECX,dword ptr [ESP + 0xa14]     ; 004a5b32
    MOV EBX,dword ptr [0x005b7620]      ; 004a5b39 | DAT_005b7620
    ADD EDX,0x4                         ; 004a5b3f
    INC ECX                             ; 004a5b42
    MOV dword ptr [ESP + 0xa0c],EDX     ; 004a5b43
    MOV dword ptr [ESP + 0xa14],ECX     ; 004a5b4a
    CMP ECX,EBX                         ; 004a5b51
    JL 0x004a5a65                       ; 004a5b53
        ;   XREF to: 004a5a65 (CONDITIONAL_JUMP)  ; LAB_004a5a65
    MOV ESI,dword ptr [ESP + 0xa34]     ; 004a5b59
        ;   Label: LAB_004a5b59
    CALL FUN_00403f50                   ; 004a5b60
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00403f50()
    PUSH ESI                            ; 004a5b65
    CALL FUN_0049f8c0                   ; 004a5b66
        ;   XREF to: 0049f8c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049f8c0()
    ADD ESP,0x4                         ; 004a5b6b
    XOR EBX,EBX                         ; 004a5b6e
    CALL FUN_00553910                   ; 004a5b70
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined FUN_00553910()
        ;   Label: LAB_004a5b70
    MOV EAX,dword ptr [ESP + 0xa34]     ; 004a5b75
    CMP dword ptr [EAX + 0xbc],0x2      ; 004a5b7c
    JNZ 0x004a5b8e                      ; 004a5b83
        ;   XREF to: 004a5b8e (CONDITIONAL_JUMP)  ; LAB_004a5b8e
    PUSH EAX                            ; 004a5b85
    CALL FUN_0049e8b0                   ; 004a5b86
        ;   XREF to: 0049e8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049e8b0()
    ADD ESP,0x4                         ; 004a5b8b
    CALL FUN_00558b70                   ; 004a5b8e
        ;   XREF to: 00558b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00558b70()
        ;   Label: LAB_004a5b8e
    TEST EAX,EAX                        ; 004a5b93
    JZ 0x004a5ce4                       ; 004a5b95
        ;   XREF to: 004a5ce4 (CONDITIONAL_JUMP)  ; LAB_004a5ce4
    XOR EBX,EBX                         ; 004a5b9b
        ;   Label: LAB_004a5b9b
    CMP EBX,dword ptr [0x01bd1d94]      ; 004a5b9d | DAT_01bd1d94
        ;   Label: LAB_004a5b9d
    JZ 0x004a5d15                       ; 004a5ba3
        ;   XREF to: 004a5d15 (CONDITIONAL_JUMP)  ; LAB_004a5d15
    MOV EAX,dword ptr [ESP + 0xa34]     ; 004a5ba9
        ;   Label: LAB_004a5ba9
    CMP dword ptr [EAX + 0xbc],0x2      ; 004a5bb0
    JZ 0x004a5d75                       ; 004a5bb7
        ;   XREF to: 004a5d75 (CONDITIONAL_JUMP)  ; LAB_004a5d75
    CALL FUN_00553910                   ; 004a5bbd
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined FUN_00553910()
    JMP 0x004a5b9d                      ; 004a5bc2
        ;   XREF to: 004a5b9d (UNCONDITIONAL_JUMP)  ; LAB_004a5b9d
    PUSH ESI                            ; 004a5bc4
        ;   Label: LAB_004a5bc4
    PUSH 0x584380                       ; 004a5bc5 | = "Can't open %s"
    MOV EBX,dword ptr [0x005b6d50]      ; 004a5bca | DAT_005b6d50
    PUSH EBX                            ; 004a5bd0
    CALL FUN_0046fcd0                   ; 004a5bd1
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fcd0()
    ADD ESP,0xc                         ; 004a5bd6
    MOV EAX,dword ptr [ESP + 0xa34]     ; 004a5bd9
    MOV byte ptr [EAX + 0x8b4],0x0      ; 004a5be0
    ADD ESP,0xa20                       ; 004a5be7
    POP EBP                             ; 004a5bed
    POP EDI                             ; 004a5bee
    POP ESI                             ; 004a5bef
    POP EBX                             ; 004a5bf0
    RET                                 ; 004a5bf1
    PUSH EAX                            ; 004a5bf2
        ;   Label: LAB_004a5bf2
    PUSH EBX                            ; 004a5bf3
    MOV EDX,dword ptr [ECX + 0x9b4]     ; 004a5bf4
    PUSH EDX                            ; 004a5bfa
    PUSH ESI                            ; 004a5bfb
    PUSH 0x58438e                       ; 004a5bfc | = "%s is %d bytes, but expected %dx%d=%d..."
    MOV ECX,dword ptr [0x005b6d50]      ; 004a5c01 | DAT_005b6d50
    PUSH ECX                            ; 004a5c07
    CALL FUN_0046fcd0                   ; 004a5c08
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fcd0()
    ADD ESP,0x18                        ; 004a5c0d
    MOV EAX,dword ptr [ESP + 0xa34]     ; 004a5c10
    MOV byte ptr [EAX + 0x8b4],0x0      ; 004a5c17
    ADD ESP,0xa20                       ; 004a5c1e
    POP EBP                             ; 004a5c24
    POP EDI                             ; 004a5c25
    POP ESI                             ; 004a5c26
    POP EBX                             ; 004a5c27
    RET                                 ; 004a5c28
    LEA EAX,[ESP + 0x900]               ; 004a5c29
        ;   Label: LAB_004a5c29
    PUSH EAX                            ; 004a5c30
    PUSH 0x5843ca                       ; 004a5c31 | = "Can't open %s"
    MOV EDI,dword ptr [0x005b6d50]      ; 004a5c36 | DAT_005b6d50
    PUSH EDI                            ; 004a5c3c
    CALL FUN_0046fcd0                   ; 004a5c3d
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fcd0()
    ADD ESP,0xc                         ; 004a5c42
    MOV EAX,dword ptr [ESP + 0xa34]     ; 004a5c45
        ;   Label: LAB_004a5c45
    MOV byte ptr [EAX + 0x8b4],0x0      ; 004a5c4c
    ADD ESP,0xa20                       ; 004a5c53
    POP EBP                             ; 004a5c59
    POP EDI                             ; 004a5c5a
    POP ESI                             ; 004a5c5b
    POP EBX                             ; 004a5c5c
    RET                                 ; 004a5c5d
    MOV EBP,dword ptr [0x005b7624]      ; 004a5c5e | DAT_005b7624
        ;   Label: LAB_004a5c5e
    MOVZX EDI,byte ptr [ESP + EBX*0x1 + 0x400] ; 004a5c64
    XOR EDX,EDX                         ; 004a5c6c
    XOR EAX,EAX                         ; 004a5c6e
    MOV DL,byte ptr [ESP + EBX*0x1 + 0x401] ; 004a5c70
    MOV AL,byte ptr [ESP + EBX*0x1 + 0x402] ; 004a5c77
    CMP EBP,0x20                        ; 004a5c7e
    JNZ 0x004a5cb0                      ; 004a5c81
        ;   XREF to: 004a5cb0 (CONDITIONAL_JUMP)  ; LAB_004a5cb0
    MOV CL,byte ptr [0x01c00624]        ; 004a5c83 | DAT_01c00624
    SHL EDI,CL                          ; 004a5c89
    MOV CL,byte ptr [0x01c00630]        ; 004a5c8b | DAT_01c00630
    SHL EDX,CL                          ; 004a5c91
    MOV CL,byte ptr [0x01c0063c]        ; 004a5c93 | DAT_01c0063c
    OR EDI,EDX                          ; 004a5c99
    SHL EAX,CL                          ; 004a5c9b
    MOV ECX,EDI                         ; 004a5c9d
    OR ECX,EAX                          ; 004a5c9f
    MOV EAX,dword ptr [ESP + 0xa10]     ; 004a5ca1
    MOV dword ptr [ESP + EAX*0x1],ECX   ; 004a5ca8
    JMP 0x004a595c                      ; 004a5cab
        ;   XREF to: 004a595c (UNCONDITIONAL_JUMP)  ; LAB_004a595c
    MOV ECX,EDX                         ; 004a5cb0
        ;   Label: LAB_004a5cb0
    SHL EDI,0x10                        ; 004a5cb2
    SHL ECX,0x8                         ; 004a5cb5
    OR ECX,EDI                          ; 004a5cb8
    OR ECX,EAX                          ; 004a5cba
    MOV EAX,dword ptr [ESP + 0xa10]     ; 004a5cbc
    MOV dword ptr [ESP + EAX*0x1],ECX   ; 004a5cc3
    JMP 0x004a595c                      ; 004a5cc6
        ;   XREF to: 004a595c (UNCONDITIONAL_JUMP)  ; LAB_004a595c
    MOV DL,byte ptr [EDX]               ; 004a5ccb
        ;   Label: LAB_004a5ccb
    MOV EBP,dword ptr [EDI + 0x1bd2fa0] ; 004a5ccd | DAT_01bd2fa0
    AND EDX,0xff                        ; 004a5cd3
    MOV EAX,dword ptr [ESP + EDX*0x4]   ; 004a5cd9
    MOV dword ptr [EBX + EBP*0x1],EAX   ; 004a5cdc
    JMP 0x004a5b1a                      ; 004a5cdf
        ;   XREF to: 004a5b1a (UNCONDITIONAL_JUMP)  ; LAB_004a5b1a
    MOV ECX,dword ptr [ESP + 0xa34]     ; 004a5ce4
        ;   Label: LAB_004a5ce4
    MOV EBP,dword ptr [ECX + 0x48]      ; 004a5ceb
    MOV EAX,[0x005bac64]                ; 004a5cee | DAT_005bac64
    PUSH EBP                            ; 004a5cf3
    MOV EDX,dword ptr [EAX]             ; 004a5cf4 | DAT_01cc30e4
    PUSH EAX                            ; 004a5cf6 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 004a5cf7
    ADD ESP,0x8                         ; 004a5cf9
    TEST EAX,EAX                        ; 004a5cfc
    JNZ 0x004a5b9b                      ; 004a5cfe
        ;   XREF to: 004a5b9b (CONDITIONAL_JUMP)  ; LAB_004a5b9b
    CMP EBX,dword ptr [0x01bd1d94]      ; 004a5d04 | DAT_01bd1d94
    JNZ 0x004a5b9b                      ; 004a5d0a
        ;   XREF to: 004a5b9b (CONDITIONAL_JUMP)  ; LAB_004a5b9b
    JMP 0x004a5b70                      ; 004a5d10
        ;   XREF to: 004a5b70 (UNCONDITIONAL_JUMP)  ; LAB_004a5b70
    MOV ECX,dword ptr [ESP + 0xa34]     ; 004a5d15
        ;   Label: LAB_004a5d15
    MOV ESI,dword ptr [ECX + 0x48]      ; 004a5d1c
    MOV EAX,[0x005bac64]                ; 004a5d1f | DAT_005bac64
    PUSH ESI                            ; 004a5d24
    MOV EDX,dword ptr [EAX]             ; 004a5d25 | DAT_01cc30e4
    PUSH EAX                            ; 004a5d27 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 004a5d28
    ADD ESP,0x8                         ; 004a5d2a
    TEST EAX,EAX                        ; 004a5d2d
    JNZ 0x004a5ba9                      ; 004a5d2f
        ;   XREF to: 004a5ba9 (CONDITIONAL_JUMP)  ; LAB_004a5ba9
    MOV EDI,dword ptr [ESP + 0xa34]     ; 004a5d35
    CALL FUN_00403f50                   ; 004a5d3c
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00403f50()
    PUSH EDI                            ; 004a5d41
    CALL FUN_0049f8c0                   ; 004a5d42
        ;   XREF to: 0049f8c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049f8c0()
    ADD ESP,0x4                         ; 004a5d47
    PUSH EDI                            ; 004a5d4a
    CALL FUN_0049a890                   ; 004a5d4b
        ;   XREF to: 0049a890 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a890()
    ADD ESP,0x4                         ; 004a5d50
    MOV EAX,dword ptr [ESP + 0xa18]     ; 004a5d53
    PUSH EAX                            ; 004a5d5a
    MOV byte ptr [EDI + 0x8b4],0x0      ; 004a5d5b
    CALL FUN_005638d0                   ; 004a5d62
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    ADD ESP,0x4                         ; 004a5d67
    ADD ESP,0xa20                       ; 004a5d6a
    POP EBP                             ; 004a5d70
    POP EDI                             ; 004a5d71
    POP ESI                             ; 004a5d72
    POP EBX                             ; 004a5d73
    RET                                 ; 004a5d74
    PUSH EAX                            ; 004a5d75
        ;   Label: LAB_004a5d75
    CALL FUN_0049e8b0                   ; 004a5d76
        ;   XREF to: 0049e8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049e8b0()
    ADD ESP,0x4                         ; 004a5d7b
    CALL FUN_00553910                   ; 004a5d7e
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined FUN_00553910()
    JMP 0x004a5b9d                      ; 004a5d83
        ;   XREF to: 004a5b9d (UNCONDITIONAL_JUMP)  ; LAB_004a5b9d

