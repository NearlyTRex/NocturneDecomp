; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a6e90(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x1134]:4  local_1134
; undefined        Stack[-0x134]:1  local_134
; undefined1       Stack[-0x133]:1  local_133
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   FUN_004a6a10 at 004a6add
;   FUN_004d21c0 at 004d2374
;
; Referenced Globals:
;   string s_stats_00584672
;   undefined4 DAT_00584678
;   string s_credits.txt_0058467b
;   undefined4 DAT_00584687
;   undefined4 DAT_0058468c
;   string s_..\\core\\game.cpp_00584691
;   string s_CGame::rollCredits_-_Out_of_memo_005846a2
;   string s_faded-remix.mp3_005846c5
;   undefined4 DAT_005846d6
;   undefined4 DAT_005bac64
;   undefined4 DAT_014b9900
;   undefined4 DAT_01cc30e4
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_01d16810
;
; Called Functions:
;   FUN_00403e60
;   FUN_00403f50
;   FUN_00408370
;   FUN_0040e320
;   FUN_0040e340
;   FUN_0040e3c0
;   FUN_0040e710
;   FUN_00456a60
;   FUN_00490de0
;   FUN_004930e0
;   FUN_0049a890
;   FUN_0049a8a0
;   FUN_004c8440
;   FUN_005261b0
;   FUN_00526240
;   ... and 15 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6e90
        ;   Label: FUN_004a6e90
    PUSH EBP                            ; 004a6e91
    SUB ESP,0x112c                      ; 004a6e92
    XOR EDX,EDX                         ; 004a6e98
    MOV ECX,0x43f00000                  ; 004a6e9a
    MOV dword ptr [ESP + 0x1118],EDX    ; 004a6e9f
    MOV dword ptr [ESP + 0x1120],ECX    ; 004a6ea6
    CALL FUN_00403f50                   ; 004a6ead
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00403f50()
    XOR EAX,EAX                         ; 004a6eb2
    ADD EAX,0x4                         ; 004a6eb4
        ;   Label: LAB_004a6eb4
    XOR EBX,EBX                         ; 004a6eb7
    MOV dword ptr [ESP + EAX*0x1 + -0x4],EBX ; 004a6eb9
    CMP EAX,0x1000                      ; 004a6ebd
    JNZ 0x004a6eb4                      ; 004a6ec2
        ;   XREF to: 004a6eb4 (CONDITIONAL_JUMP)  ; LAB_004a6eb4
    LEA EAX,[ESP + 0x1100]              ; 004a6ec4
    PUSH EAX                            ; 004a6ecb
    CALL FUN_0040e320                   ; 004a6ecc
        ;   XREF to: 0040e320 (UNCONDITIONAL_CALL)  ; undefined FUN_0040e320()
    ADD ESP,0x4                         ; 004a6ed1
    PUSH 0x1e0                          ; 004a6ed4
    PUSH 0x280                          ; 004a6ed9
    PUSH 0x584672                       ; 004a6ede | = "stats"
    LEA EAX,[ESP + 0x110c]              ; 004a6ee3
    PUSH EAX                            ; 004a6eea
    CALL FUN_0040e3c0                   ; 004a6eeb
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040e3c0()
    ADD ESP,0x10                        ; 004a6ef0
    PUSH 0x584678                       ; 004a6ef3 | DAT_00584678
    PUSH 0x58467b                       ; 004a6ef8 | = "credits.txt"
    PUSH 0x584687                       ; 004a6efd | DAT_00584687
    CALL FUN_00456a60                   ; 004a6f02
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00456a60()
    ADD ESP,0xc                         ; 004a6f07
    MOV EBP,EAX                         ; 004a6f0a
    TEST EAX,EAX                        ; 004a6f0c
    JZ 0x004a7155                       ; 004a6f0e
        ;   XREF to: 004a7155 (CONDITIONAL_JUMP)  ; LAB_004a7155
    PUSH EDI                            ; 004a6f14
    PUSH ESI                            ; 004a6f15
    MOV EBX,dword ptr [ESP + 0x1120]    ; 004a6f16
    SHL EBX,0x2                         ; 004a6f1d
    TEST byte ptr [EBP + 0xc],0x10      ; 004a6f20
        ;   Label: LAB_004a6f20
    JNZ 0x004a6f61                      ; 004a6f24
        ;   XREF to: 004a6f61 (CONDITIONAL_JUMP)  ; LAB_004a6f61
    CMP EBX,0x1000                      ; 004a6f26
    JGE 0x004a6f61                      ; 004a6f2c
        ;   XREF to: 004a6f61 (CONDITIONAL_JUMP)  ; LAB_004a6f61
    PUSH EBP                            ; 004a6f2e
    PUSH 0xff                           ; 004a6f2f
    LEA EAX,[ESP + 0x1010]              ; 004a6f34
    PUSH EAX                            ; 004a6f3b
    CALL FUN_00564b20                   ; 004a6f3c
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00564b20()
    ADD ESP,0xc                         ; 004a6f41
    PUSH 0x58468c                       ; 004a6f44 | DAT_0058468c
    LEA EAX,[ESP + 0x100c]              ; 004a6f49
    PUSH EAX                            ; 004a6f50
    CALL FUN_005649c0                   ; 004a6f51
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005649c0()
    ADD ESP,0x8                         ; 004a6f56
    TEST EAX,EAX                        ; 004a6f59
    JNZ 0x004a716f                      ; 004a6f5b
        ;   XREF to: 004a716f (CONDITIONAL_JUMP)  ; LAB_004a716f
    PUSH EBP                            ; 004a6f61
        ;   Label: LAB_004a6f61
    CALL FUN_00563380                   ; 004a6f62
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined FUN_00563380()
    ADD ESP,0x4                         ; 004a6f67
    CALL FUN_00528080                   ; 004a6f6a
        ;   XREF to: 00528080 (UNCONDITIONAL_CALL)  ; undefined FUN_00528080()
    CALL FUN_00527e40                   ; 004a6f6f
        ;   XREF to: 00527e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00527e40()
    XOR ECX,ECX                         ; 004a6f74
    PUSH 0x1                            ; 004a6f76
    MOV dword ptr [ESP + 0x1128],ECX    ; 004a6f78
    CALL FUN_00527490                   ; 004a6f7f
        ;   XREF to: 00527490 (UNCONDITIONAL_CALL)  ; undefined FUN_00527490()
    ADD ESP,0x4                         ; 004a6f84
    TEST EAX,EAX                        ; 004a6f87
    JNZ 0x004a71f4                      ; 004a6f89
        ;   XREF to: 004a71f4 (CONDITIONAL_JUMP)  ; LAB_004a71f4
    CALL FUN_00403f50                   ; 004a6f8f
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00403f50()
        ;   Label: LAB_004a6f8f
    PUSH 0x58                           ; 004a6f94
    MOV EDI,dword ptr [0x014b9900]      ; 004a6f96 | DAT_014b9900
    PUSH EDI                            ; 004a6f9c
    MOV dword ptr [EDI + 0x3190],0x0    ; 004a6f9d
    CALL FUN_004930e0                   ; 004a6fa7
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004930e0()
    MOV EBX,EAX                         ; 004a6fac
    ADD ESP,0x8                         ; 004a6fae
    MOV EBP,EAX                         ; 004a6fb1
    MOV EAX,dword ptr [ESP + 0x1140]    ; 004a6fb3
    MOV ESI,0xffffffff                  ; 004a6fba
    PUSH EAX                            ; 004a6fbf
    MOV dword ptr [ESP + 0x1120],ESI    ; 004a6fc0
    CALL FUN_0049a890                   ; 004a6fc7
        ;   XREF to: 0049a890 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a890()
    ADD ESP,0x4                         ; 004a6fcc
    PUSH 0xffff                         ; 004a6fcf
    CALL FUN_00408370                   ; 004a6fd4
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; undefined FUN_00408370()
    MOV EAX,0x1df                       ; 004a6fd9
    ADD ESP,0x4                         ; 004a6fde
    SUB EAX,EBX                         ; 004a6fe1
    MOV dword ptr [ESP + 0x112c],EAX    ; 004a6fe3
    FLD float ptr [ESP + 0x1128]        ; 004a6fea
        ;   Label: LAB_004a6fea
    MOV EDX,dword ptr [ESP + 0x111c]    ; 004a6ff1
    CALL FUN_00563a30                   ; 004a6ff8
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP + 0x1130]      ; 004a6ffd
    MOV EAX,dword ptr [ESP + 0x1130]    ; 004a7004
    CMP EAX,EDX                         ; 004a700b
    JZ 0x004a7103                       ; 004a700d
        ;   XREF to: 004a7103 (CONDITIONAL_JUMP)  ; LAB_004a7103
    MOV dword ptr [ESP + 0x111c],EAX    ; 004a7013
    CALL FUN_0052ee70                   ; 004a701a
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; undefined FUN_0052ee70()
    PUSH 0xffff                         ; 004a701f
    PUSH 0x0                            ; 004a7024
    PUSH 0x0                            ; 004a7026
    LEA EAX,[ESP + 0x1114]              ; 004a7028
    PUSH EAX                            ; 004a702f
    CALL FUN_0040e710                   ; 004a7030
        ;   XREF to: 0040e710 (UNCONDITIONAL_CALL)  ; undefined FUN_0040e710()
    ADD ESP,0x10                        ; 004a7035
    MOV ECX,dword ptr [ESP + 0x1120]    ; 004a7038
    TEST ECX,ECX                        ; 004a703f
    JLE 0x004a70b1                      ; 004a7041
        ;   XREF to: 004a70b1 (CONDITIONAL_JUMP)  ; LAB_004a70b1
    LEA ESI,[ECX*0x4 + 0x0]             ; 004a7047
    XOR EBX,EBX                         ; 004a704e
    MOV EAX,dword ptr [ESP + EBX*0x1 + 0x8] ; 004a7050
        ;   Label: LAB_004a7050
    MOV CL,byte ptr [EAX]               ; 004a7054
    MOV EDX,0xf8                        ; 004a7056
    CMP CL,0x5c                         ; 004a705b
    JNZ 0x004a706e                      ; 004a705e
        ;   XREF to: 004a706e (CONDITIONAL_JUMP)  ; LAB_004a706e
    CMP byte ptr [EAX + 0x1],0x62       ; 004a7060
    JNZ 0x004a706b                      ; 004a7064
        ;   XREF to: 004a706b (CONDITIONAL_JUMP)  ; LAB_004a706b
    MOV EDX,0x2                         ; 004a7066
    ADD EAX,0x2                         ; 004a706b
        ;   Label: LAB_004a706b
    MOV ECX,dword ptr [ESP + 0x1130]    ; 004a706e
        ;   Label: LAB_004a706e
    TEST ECX,ECX                        ; 004a7075
    JL 0x004a709a                       ; 004a7077
        ;   XREF to: 004a709a (CONDITIONAL_JUMP)  ; LAB_004a709a
    CMP ECX,dword ptr [ESP + 0x112c]    ; 004a7079
    JGE 0x004a709a                      ; 004a7080
        ;   XREF to: 004a709a (CONDITIONAL_JUMP)  ; LAB_004a709a
    PUSH EAX                            ; 004a7082
    PUSH 0x0                            ; 004a7083
    PUSH EDX                            ; 004a7085
    PUSH ECX                            ; 004a7086
    PUSH 0x27f                          ; 004a7087
    PUSH 0x19e                          ; 004a708c
    PUSH EDI                            ; 004a7091
    CALL FUN_00490de0                   ; 004a7092
        ;   XREF to: 00490de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00490de0()
    ADD ESP,0x1c                        ; 004a7097
    MOV EAX,dword ptr [ESP + 0x1130]    ; 004a709a
        ;   Label: LAB_004a709a
    ADD EAX,EBP                         ; 004a70a1
    ADD EBX,0x4                         ; 004a70a3
    MOV dword ptr [ESP + 0x1130],EAX    ; 004a70a6
    CMP EBX,ESI                         ; 004a70ad
    JL 0x004a7050                       ; 004a70af
        ;   XREF to: 004a7050 (CONDITIONAL_JUMP)  ; LAB_004a7050
    MOV EDX,dword ptr [ESP + 0x1124]    ; 004a70b1
        ;   Label: LAB_004a70b1
    TEST EDX,EDX                        ; 004a70b8
    JZ 0x004a70cd                       ; 004a70ba
        ;   XREF to: 004a70cd (CONDITIONAL_JUMP)  ; LAB_004a70cd
    PUSH EDX                            ; 004a70bc
    CALL FUN_00526c50                   ; 004a70bd
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00526c50()
    ADD ESP,0x4                         ; 004a70c2
    TEST EAX,EAX                        ; 004a70c5
    JZ 0x004a722b                       ; 004a70c7
        ;   XREF to: 004a722b (CONDITIONAL_JUMP)  ; LAB_004a722b
    PUSH 0x0                            ; 004a70cd
        ;   Label: LAB_004a70cd
    PUSH 0x1e                           ; 004a70cf
    PUSH 0x27f                          ; 004a70d1
    PUSH 0x0                            ; 004a70d6
    PUSH 0x19e                          ; 004a70d8
    CALL FUN_00403e60                   ; 004a70dd
        ;   XREF to: 00403e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00403e60()
    ADD ESP,0x14                        ; 004a70e2
    PUSH 0x0                            ; 004a70e5
    PUSH 0x1df                          ; 004a70e7
    PUSH 0x27f                          ; 004a70ec
    PUSH 0x1b7                          ; 004a70f1
    PUSH 0x19e                          ; 004a70f6
    CALL FUN_00403e60                   ; 004a70fb
        ;   XREF to: 00403e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00403e60()
    ADD ESP,0x14                        ; 004a7100
    CALL FUN_00553910                   ; 004a7103
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined FUN_00553910()
        ;   Label: LAB_004a7103
    PUSH 0x1                            ; 004a7108
    MOV EAX,[0x005bac64]                ; 004a710a | DAT_005bac64
    PUSH EAX                            ; 004a710f | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004a7110 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 004a7112
    ADD ESP,0x8                         ; 004a7114
    TEST EAX,EAX                        ; 004a7117
    JNZ 0x004a722b                      ; 004a7119
        ;   XREF to: 004a722b (CONDITIONAL_JUMP)  ; LAB_004a722b
    MOV EDX,dword ptr [ESP + 0x1140]    ; 004a711f
    PUSH EDX                            ; 004a7126
    CALL FUN_0049a8a0                   ; 004a7127
        ;   XREF to: 0049a8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a8a0()
    ADD ESP,0x4                         ; 004a712c
    MOV EAX,dword ptr [ESP + 0x1140]    ; 004a712f
    FLD float ptr [EAX + 0x264]         ; 004a7136
    FMUL float ptr [0x005846d6]         ; 004a713c | DAT_005846d6
    FSUBR float ptr [ESP + 0x1128]      ; 004a7142
    FSTP float ptr [ESP + 0x1128]       ; 004a7149
    JMP 0x004a6fea                      ; 004a7150
        ;   XREF to: 004a6fea (UNCONDITIONAL_JUMP)  ; LAB_004a6fea
    PUSH EBX                            ; 004a7155
        ;   Label: LAB_004a7155
    LEA EAX,[ESP + 0x1104]              ; 004a7156
    PUSH EAX                            ; 004a715d
    CALL FUN_0040e340                   ; 004a715e
        ;   XREF to: 0040e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0040e340()
    ADD ESP,0x8                         ; 004a7163
    ADD ESP,0x112c                      ; 004a7166
    POP EBP                             ; 004a716c
    POP EBX                             ; 004a716d
    RET                                 ; 004a716e
    LEA EDI,[ESP + 0x1008]              ; 004a716f
        ;   Label: LAB_004a716f
    SUB ECX,ECX                         ; 004a7176
    DEC ECX                             ; 004a7178
    XOR EAX,EAX                         ; 004a7179
    SCASB.REPNE ES:EDI                  ; 004a717b
    NOT ECX                             ; 004a717d
    DEC ECX                             ; 004a717f
    ADD ECX,0xa                         ; 004a7180
    PUSH ECX                            ; 004a7183
    CALL FUN_005635b0                   ; 004a7184
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005635b0()
    ADD ESP,0x4                         ; 004a7189
    MOV dword ptr [ESP + EBX*0x1 + 0x8],EAX ; 004a718c
    TEST EAX,EAX                        ; 004a7190
    JZ 0x004a71d0                       ; 004a7192
        ;   XREF to: 004a71d0 (CONDITIONAL_JUMP)  ; LAB_004a71d0
    LEA ESI,[ESP + 0x1008]              ; 004a7194
        ;   Label: LAB_004a7194
    MOV EDI,dword ptr [ESP + EBX*0x1 + 0x8] ; 004a719b
    MOV EDX,dword ptr [ESP + 0x1120]    ; 004a719f
    PUSH EDI                            ; 004a71a6
    MOV AL,byte ptr [ESI]               ; 004a71a7
        ;   Label: LAB_004a71a7
    MOV byte ptr [EDI],AL               ; 004a71a9
    CMP AL,0x0                          ; 004a71ab
    JZ 0x004a71bf                       ; 004a71ad
        ;   XREF to: 004a71bf (CONDITIONAL_JUMP)  ; LAB_004a71bf
    MOV AL,byte ptr [ESI + 0x1]         ; 004a71af
    ADD ESI,0x2                         ; 004a71b2
    MOV byte ptr [EDI + 0x1],AL         ; 004a71b5
    ADD EDI,0x2                         ; 004a71b8
    CMP AL,0x0                          ; 004a71bb
    JNZ 0x004a71a7                      ; 004a71bd
        ;   XREF to: 004a71a7 (CONDITIONAL_JUMP)  ; LAB_004a71a7
    POP EDI                             ; 004a71bf
        ;   Label: LAB_004a71bf
    INC EDX                             ; 004a71c0
    ADD EBX,0x4                         ; 004a71c1
    MOV dword ptr [ESP + 0x1120],EDX    ; 004a71c4
    JMP 0x004a6f20                      ; 004a71cb
        ;   XREF to: 004a6f20 (UNCONDITIONAL_JUMP)  ; LAB_004a6f20
    MOV EDI,0x584691                    ; 004a71d0 | = "..\\core\\game.cpp"
        ;   Label: LAB_004a71d0
    MOV EAX,0x1242                      ; 004a71d5
    PUSH 0x5846a2                       ; 004a71da | = "CGame::rollCredits - Out of memory"
    MOV dword ptr [0x01cc4800],EDI      ; 004a71df | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004a71e5 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004a71ea
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004a71ef
    JMP 0x004a7194                      ; 004a71f2
        ;   XREF to: 004a7194 (UNCONDITIONAL_JUMP)  ; LAB_004a7194
    CALL FUN_00526340                   ; 004a71f4
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; undefined FUN_00526340()
        ;   Label: LAB_004a71f4
    PUSH 0x1                            ; 004a71f9
    CALL FUN_005261b0                   ; 004a71fb
        ;   XREF to: 005261b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005261b0()
    ADD ESP,0x4                         ; 004a7200
    PUSH 0x1                            ; 004a7203
    CALL FUN_00526240                   ; 004a7205
        ;   XREF to: 00526240 (UNCONDITIONAL_CALL)  ; undefined FUN_00526240()
    ADD ESP,0x4                         ; 004a720a
    PUSH 0x5846c5                       ; 004a720d | = "faded-remix.mp3"
    CALL FUN_005265a0                   ; 004a7212
        ;   XREF to: 005265a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005265a0()
    ADD ESP,0x4                         ; 004a7217
    MOV dword ptr [ESP + 0x1124],EAX    ; 004a721a
    CALL FUN_005263c0                   ; 004a7221
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005263c0()
    JMP 0x004a6f8f                      ; 004a7226
        ;   XREF to: 004a6f8f (UNCONDITIONAL_JUMP)  ; LAB_004a6f8f
    CMP dword ptr [0x01d16810],0x0      ; 004a722b | DAT_01d16810
        ;   Label: LAB_004a722b
    JZ 0x004a723e                       ; 004a7232
        ;   XREF to: 004a723e (CONDITIONAL_JUMP)  ; LAB_004a723e
    MOV dword ptr [EDI + 0x3190],0x1    ; 004a7234
    CALL FUN_00528080                   ; 004a723e
        ;   XREF to: 00528080 (UNCONDITIONAL_CALL)  ; undefined FUN_00528080()
        ;   Label: LAB_004a723e
    MOV EBX,dword ptr [ESP + 0x1120]    ; 004a7243
    CALL FUN_00403f50                   ; 004a724a
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00403f50()
    TEST EBX,EBX                        ; 004a724f
    JLE 0x004a7280                      ; 004a7251
        ;   XREF to: 004a7280 (CONDITIONAL_JUMP)  ; LAB_004a7280
    MOV ESI,dword ptr [ESP + 0x1120]    ; 004a7253
    XOR EBX,EBX                         ; 004a725a
    SHL ESI,0x2                         ; 004a725c
    MOV EDI,dword ptr [ESP + EBX*0x1 + 0x8] ; 004a725f
        ;   Label: LAB_004a725f
    PUSH EDI                            ; 004a7263
    ADD EBX,0x4                         ; 004a7264
    CALL FUN_005638d0                   ; 004a7267
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    ADD ESP,0x4                         ; 004a726c
    CMP EBX,ESI                         ; 004a726f
    JL 0x004a725f                       ; 004a7271
        ;   XREF to: 004a725f (CONDITIONAL_JUMP)  ; LAB_004a725f
    LEA EAX,[EAX]                       ; 004a7273
    LEA EDX,[EDX]                       ; 004a7279
    NOP                                 ; 004a727f
    PUSH 0x0                            ; 004a7280
        ;   Label: LAB_004a7280
    LEA EAX,[ESP + 0x110c]              ; 004a7282
    PUSH EAX                            ; 004a7289
    CALL FUN_0040e340                   ; 004a728a
        ;   XREF to: 0040e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0040e340()
    ADD ESP,0x8                         ; 004a728f
    POP ESI                             ; 004a7292
    POP EDI                             ; 004a7293
    ADD ESP,0x112c                      ; 004a7294
    POP EBP                             ; 004a729a
    POP EBX                             ; 004a729b
    RET                                 ; 004a729c

