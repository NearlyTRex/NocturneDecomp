; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b0fe0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   FUN_004b1060 at 004b10ac
;   FUN_004f1890 at 004f19b9
;   FUN_004f1b80 at 004f1c04
;   FUN_00571700 at 00571839
;   FUN_00582ec0 at 00582f57
;   FUN_005b17d0 at 005b1826
;
; Referenced Globals:
;   undefined4 DAT_005f119b
;   undefined4 DAT_0060b280
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01e661b8
;   undefined4 DAT_02668a14
;   undefined4 DAT_02668a28
;   undefined4 DAT_02668a2c
;   undefined4 DAT_02668a30
;   undefined4 DAT_02668a34
;   undefined4 DAT_02668a38
;   undefined4 DAT_02668a3c
;   undefined4 DAT_02668a5c
;
; Called Functions:
;   FUN_0046b880
;   FUN_0046b8e0
;   FUN_0046b920
;   FUN_0046b960
;   FUN_00531e90
;   FUN_00532190
;   FUN_00533f40
;   FUN_00574e00
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0fe0
        ;   Label: FUN_005b0fe0
    PUSH ESI                            ; 005b0fe1
    PUSH EDI                            ; 005b0fe2
    PUSH EBP                            ; 005b0fe3
    SUB ESP,0x14                        ; 005b0fe4
    MOV EBP,dword ptr [ESP + 0x28]      ; 005b0fe7
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005b0feb
    MOV EDX,dword ptr [EBP + 0x10c]     ; 005b0fef
    PUSH EDX                            ; 005b0ff5
    MOV ECX,dword ptr [EBP + 0x104]     ; 005b0ff6
    PUSH ECX                            ; 005b0ffc
    MOV ESI,dword ptr [0x0061b5a8]      ; 005b0ffd | DAT_0061b5a8
    PUSH ESI                            ; 005b1003 | DAT_01e661b8
    CALL FUN_00531e90                   ; 005b1004
        ;   XREF to: 00531e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00531e90()
    ADD ESP,0xc                         ; 005b1009
    PUSH 0x1                            ; 005b100c
    MOV EDI,dword ptr [0x0060b280]      ; 005b100e | DAT_0060b280
    PUSH EDI                            ; 005b1014 | DAT_01ba5c50
    CALL FUN_0046b880                   ; 005b1015
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b880()
    ADD ESP,0x8                         ; 005b101a
    PUSH 0xffff                         ; 005b101d
    MOV EAX,[0x0060b280]                ; 005b1022 | DAT_0060b280
    PUSH EAX                            ; 005b1027 | DAT_01ba5c50
    CALL FUN_0046b8e0                   ; 005b1028
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b8e0()
    ADD ESP,0x8                         ; 005b102d
    MOV EDX,dword ptr [0x0060b280]      ; 005b1030 | DAT_0060b280
    PUSH EDX                            ; 005b1036 | DAT_01ba5c50
    CALL FUN_0046b960                   ; 005b1037
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    FLD float ptr [EBP + 0x37b48]       ; 005b103c
    FMUL double ptr [0x005f119b]        ; 005b1042 | DAT_005f119b
    ADD ESP,0x4                         ; 005b1048
    CALL FUN_005b7ff0                   ; 005b104b
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x4]         ; 005b1050
    MOV ECX,dword ptr [ESP + 0x4]       ; 005b1054
    CMP ECX,0x3e8                       ; 005b1058
    JL 0x005b1204                       ; 005b105e
        ;   XREF to: 005b1204 (CONDITIONAL_JUMP)  ; LAB_005b1204
    CMP ECX,0xf618                      ; 005b1064
    JL 0x005b120c                       ; 005b106a
        ;   XREF to: 005b120c (CONDITIONAL_JUMP)  ; LAB_005b120c
    LEA EAX,[EBP + 0x124]               ; 005b1070
        ;   Label: LAB_005b1070
    PUSH EAX                            ; 005b1076
    CALL FUN_00574e00                   ; 005b1077
        ;   XREF to: 00574e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00574e00()
    MOV EDX,dword ptr [EBP + 0x37b44]   ; 005b107c
    ADD ESP,0x4                         ; 005b1082
    TEST EDX,EDX                        ; 005b1085
    JNZ 0x005b1276                      ; 005b1087
        ;   XREF to: 005b1276 (CONDITIONAL_JUMP)  ; LAB_005b1276
    MOV EAX,dword ptr [EBP + 0x110]     ; 005b108d
    PUSH EDX                            ; 005b1093
    MOV EDX,EAX                         ; 005b1094
    SAR EDX,0x1f                        ; 005b1096
    SUB EAX,EDX                         ; 005b1099
    SAR EAX,0x1                         ; 005b109b
    PUSH 0x4                            ; 005b109d
    MOV ESI,dword ptr [EBP + 0x10c]     ; 005b109f
    PUSH ESI                            ; 005b10a5
    MOV EDI,dword ptr [EBP + 0x114]     ; 005b10a6
    PUSH EDI                            ; 005b10ac
    PUSH EAX                            ; 005b10ad
    MOV EAX,dword ptr [EBP + 0x104]     ; 005b10ae
    PUSH EAX                            ; 005b10b4
    MOV EDX,dword ptr [0x0061b5a8]      ; 005b10b5 | DAT_0061b5a8
    PUSH EDX                            ; 005b10bb | DAT_01e661b8
    CALL FUN_00532190                   ; 005b10bc
        ;   XREF to: 00532190 (UNCONDITIONAL_CALL)  ; undefined FUN_00532190()
    ADD ESP,0x1c                        ; 005b10c1
    TEST EBX,EBX                        ; 005b10c4
    JZ 0x005b1120                       ; 005b10c6
        ;   XREF to: 005b1120 (CONDITIONAL_JUMP)  ; LAB_005b1120
    MOV ECX,dword ptr [EBP + 0x39ce8]   ; 005b10c8
    XOR EBX,EBX                         ; 005b10ce
    TEST ECX,ECX                        ; 005b10d0
    JLE 0x005b1120                      ; 005b10d2
        ;   XREF to: 005b1120 (CONDITIONAL_JUMP)  ; LAB_005b1120
    MOV EAX,EBP                         ; 005b10d4
    MOV EDX,dword ptr [EAX + 0x39cec]   ; 005b10d6
        ;   Label: LAB_005b10d6
    IMUL EDX,EDX,0x30                   ; 005b10dc
    MOV ECX,dword ptr [0x0060b280]      ; 005b10df | DAT_0060b280
    MOV ESI,dword ptr [ECX]             ; 005b10e5 | DAT_01ba5c50
    ADD ESI,EDX                         ; 005b10e7
    MOV dword ptr [ESP],ESI             ; 005b10e9
    MOV EDI,dword ptr [ESP]             ; 005b10ec
    MOV ESI,dword ptr [EAX + 0x3a64c]   ; 005b10ef
    MOV dword ptr [EDI + 0x20],ESI      ; 005b10f5
    MOV ESI,dword ptr [ECX]             ; 005b10f8 | DAT_01ba5c50
    MOV EDI,dword ptr [EAX + 0x3a7dc]   ; 005b10fa
    MOV dword ptr [EDX + ESI*0x1 + 0x24],EDI ; 005b1100
    MOV ECX,dword ptr [ECX]             ; 005b1104 | DAT_01ba5c50
    ADD EDX,ECX                         ; 005b1106
    MOV ECX,dword ptr [EAX + 0x3a96c]   ; 005b1108
    MOV dword ptr [EDX + 0x28],ECX      ; 005b110e
    INC EBX                             ; 005b1111
    MOV ESI,dword ptr [EBP + 0x39ce8]   ; 005b1112
    ADD EAX,0x4                         ; 005b1118
    CMP EBX,ESI                         ; 005b111b
    JL 0x005b10d6                       ; 005b111d
        ;   XREF to: 005b10d6 (CONDITIONAL_JUMP)  ; LAB_005b10d6
    NOP                                 ; 005b111f
    CMP dword ptr [ESP + 0x4],0xf618    ; 005b1120
        ;   Label: LAB_005b1120
    JGE 0x005b1220                      ; 005b1128
        ;   XREF to: 005b1220 (CONDITIONAL_JUMP)  ; LAB_005b1220
    MOV EAX,dword ptr [EBP + 0x110]     ; 005b112e
    MOV EDX,EAX                         ; 005b1134
    SAR EDX,0x1f                        ; 005b1136
    SUB EAX,EDX                         ; 005b1139
    SAR EAX,0x1                         ; 005b113b
    PUSH 0x267                          ; 005b113d
    PUSH EAX                            ; 005b1142
    MOV ECX,dword ptr [EBP + 0x114]     ; 005b1143
    PUSH ECX                            ; 005b1149
    MOV EBX,dword ptr [0x0061b5a8]      ; 005b114a | DAT_0061b5a8
    PUSH EBX                            ; 005b1150 | DAT_01e661b8
    CALL FUN_00533f40                   ; 005b1151
        ;   XREF to: 00533f40 (UNCONDITIONAL_CALL)  ; undefined FUN_00533f40()
        ;   Label: LAB_005b1151
    ADD ESP,0x10                        ; 005b1156
    MOV EAX,dword ptr [EBP + 0x110]     ; 005b1159
    MOV EDX,EAX                         ; 005b115f
    SAR EDX,0x1f                        ; 005b1161
    SUB EAX,EDX                         ; 005b1164
    SAR EAX,0x1                         ; 005b1166
    PUSH 0x0                            ; 005b1168
    MOV EDX,EAX                         ; 005b116a
    SHL EAX,0x3                         ; 005b116c
    MOV ESI,dword ptr [EBP + 0x10c]     ; 005b116f
    LEA ECX,[EDX + EAX*0x1]             ; 005b1175
    PUSH 0x4                            ; 005b1178
    SHL ECX,0x3                         ; 005b117a
    MOV EAX,dword ptr [EBP + 0x114]     ; 005b117d
    PUSH ESI                            ; 005b1183
    ADD EAX,ECX                         ; 005b1184
    PUSH EAX                            ; 005b1186
    PUSH EDX                            ; 005b1187
    MOV EDI,dword ptr [EBP + 0x104]     ; 005b1188
    PUSH EDI                            ; 005b118e
    MOV EAX,[0x0061b5a8]                ; 005b118f | DAT_0061b5a8
    PUSH EAX                            ; 005b1194 | DAT_01e661b8
    CALL FUN_00532190                   ; 005b1195
        ;   XREF to: 00532190 (UNCONDITIONAL_CALL)  ; undefined FUN_00532190()
    ADD ESP,0x1c                        ; 005b119a
    CMP dword ptr [ESP + 0x4],0xf618    ; 005b119d
    JGE 0x005b1245                      ; 005b11a5
        ;   XREF to: 005b1245 (CONDITIONAL_JUMP)  ; LAB_005b1245
    MOV EAX,dword ptr [EBP + 0x110]     ; 005b11ab
    MOV EDX,EAX                         ; 005b11b1
    SAR EDX,0x1f                        ; 005b11b3
    SUB EAX,EDX                         ; 005b11b6
    SAR EAX,0x1                         ; 005b11b8
    PUSH 0x267                          ; 005b11ba
    PUSH EAX                            ; 005b11bf
    MOV EDX,EAX                         ; 005b11c0
    SHL EAX,0x3                         ; 005b11c2
    ADD EDX,EAX                         ; 005b11c5
    SHL EDX,0x3                         ; 005b11c7
    MOV EAX,dword ptr [EBP + 0x114]     ; 005b11ca
    ADD EAX,EDX                         ; 005b11d0
    PUSH EAX                            ; 005b11d2
    MOV EBX,dword ptr [0x0061b5a8]      ; 005b11d3 | DAT_0061b5a8
        ;   Label: LAB_005b11d3
    PUSH EBX                            ; 005b11d9 | DAT_01e661b8
    CALL FUN_00533f40                   ; 005b11da
        ;   XREF to: 00533f40 (UNCONDITIONAL_CALL)  ; undefined FUN_00533f40()
        ;   Label: LAB_005b11da
    ADD ESP,0x10                        ; 005b11df
    PUSH 0x0                            ; 005b11e2
    MOV ESI,dword ptr [0x0060b280]      ; 005b11e4 | DAT_0060b280
    PUSH ESI                            ; 005b11ea | DAT_01ba5c50
    CALL FUN_0046b880                   ; 005b11eb
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b880()
    ADD ESP,0x8                         ; 005b11f0
    PUSH 0x1                            ; 005b11f3
    MOV EDI,dword ptr [0x0060b280]      ; 005b11f5 | DAT_0060b280
    PUSH EDI                            ; 005b11fb | DAT_01ba5c50
    CALL FUN_0046b920                   ; 005b11fc
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b920()
    ADD ESP,0x8                         ; 005b1201
    ADD ESP,0x14                        ; 005b1204
        ;   Label: LAB_005b1204
    POP EBP                             ; 005b1207
    POP EDI                             ; 005b1208
    POP ESI                             ; 005b1209
    POP EBX                             ; 005b120a
    RET                                 ; 005b120b
    PUSH ECX                            ; 005b120c
        ;   Label: LAB_005b120c
    MOV EAX,[0x0060b280]                ; 005b120d | DAT_0060b280
    PUSH EAX                            ; 005b1212 | DAT_01ba5c50
    CALL FUN_0046b8e0                   ; 005b1213
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b8e0()
    ADD ESP,0x8                         ; 005b1218
    JMP 0x005b1070                      ; 005b121b
        ;   XREF to: 005b1070 (UNCONDITIONAL_JUMP)  ; LAB_005b1070
    MOV EAX,dword ptr [EBP + 0x110]     ; 005b1220
        ;   Label: LAB_005b1220
    MOV EDX,EAX                         ; 005b1226
    SAR EDX,0x1f                        ; 005b1228
    SUB EAX,EDX                         ; 005b122b
    SAR EAX,0x1                         ; 005b122d
    PUSH -0x1                           ; 005b122f
    PUSH EAX                            ; 005b1231
    MOV EAX,dword ptr [EBP + 0x114]     ; 005b1232
    PUSH EAX                            ; 005b1238
    MOV EDX,dword ptr [0x0061b5a8]      ; 005b1239 | DAT_0061b5a8
    PUSH EDX                            ; 005b123f | DAT_01e661b8
    JMP 0x005b1151                      ; 005b1240
        ;   XREF to: 005b1151 (UNCONDITIONAL_JUMP)  ; LAB_005b1151
    MOV EAX,dword ptr [EBP + 0x110]     ; 005b1245
        ;   Label: LAB_005b1245
    MOV EDX,EAX                         ; 005b124b
    SAR EDX,0x1f                        ; 005b124d
    SUB EAX,EDX                         ; 005b1250
    SAR EAX,0x1                         ; 005b1252
    PUSH -0x1                           ; 005b1254
    PUSH EAX                            ; 005b1256
    MOV EDX,EAX                         ; 005b1257
    SHL EAX,0x3                         ; 005b1259
    ADD EAX,EDX                         ; 005b125c
    SHL EAX,0x3                         ; 005b125e
    MOV EDX,dword ptr [EBP + 0x114]     ; 005b1261
    ADD EAX,EDX                         ; 005b1267
    PUSH EAX                            ; 005b1269
    MOV ECX,dword ptr [0x0061b5a8]      ; 005b126a | DAT_0061b5a8
    PUSH ECX                            ; 005b1270 | DAT_01e661b8
    JMP 0x005b11da                      ; 005b1271
        ;   XREF to: 005b11da (UNCONDITIONAL_JUMP)  ; LAB_005b11da
    PUSH 0x0                            ; 005b1276
        ;   Label: LAB_005b1276
    PUSH 0x4                            ; 005b1278
    MOV ECX,dword ptr [EBP + 0x10c]     ; 005b127a
    PUSH ECX                            ; 005b1280
    MOV ESI,dword ptr [EBP + 0x114]     ; 005b1281
    PUSH ESI                            ; 005b1287
    MOV EDI,dword ptr [EBP + 0x110]     ; 005b1288
    PUSH EDI                            ; 005b128e
    MOV EAX,dword ptr [EBP + 0x104]     ; 005b128f
    PUSH EAX                            ; 005b1295
    MOV EDX,dword ptr [0x0061b5a8]      ; 005b1296 | DAT_0061b5a8
    PUSH EDX                            ; 005b129c | DAT_01e661b8
    CALL FUN_00532190                   ; 005b129d
        ;   XREF to: 00532190 (UNCONDITIONAL_CALL)  ; undefined FUN_00532190()
    ADD ESP,0x1c                        ; 005b12a2
    TEST EBX,EBX                        ; 005b12a5
    JZ 0x005b1300                       ; 005b12a7
        ;   XREF to: 005b1300 (CONDITIONAL_JUMP)  ; LAB_005b1300
    MOV ECX,dword ptr [EBP + 0x39ce8]   ; 005b12a9
    XOR EBX,EBX                         ; 005b12af
    TEST ECX,ECX                        ; 005b12b1
    JLE 0x005b1300                      ; 005b12b3
        ;   XREF to: 005b1300 (CONDITIONAL_JUMP)  ; LAB_005b1300
    MOV EAX,EBP                         ; 005b12b5
    MOV ECX,dword ptr [EAX + 0x39cec]   ; 005b12b7
        ;   Label: LAB_005b12b7
    IMUL ECX,ECX,0x30                   ; 005b12bd
    MOV EDX,dword ptr [0x0060b280]      ; 005b12c0 | DAT_0060b280
    MOV EDI,dword ptr [EDX]             ; 005b12c6 | DAT_01ba5c50
    MOV ESI,dword ptr [EAX + 0x3a64c]   ; 005b12c8
    MOV dword ptr [ECX + EDI*0x1 + 0x20],ESI ; 005b12ce
    MOV ESI,dword ptr [EDX]             ; 005b12d2 | DAT_01ba5c50
    ADD ESI,ECX                         ; 005b12d4
    MOV dword ptr [ESP],ESI             ; 005b12d6
    MOV EDI,dword ptr [ESP]             ; 005b12d9
    MOV ESI,dword ptr [EAX + 0x3a7dc]   ; 005b12dc
    MOV dword ptr [EDI + 0x24],ESI      ; 005b12e2
    MOV EDX,dword ptr [EDX]             ; 005b12e5 | DAT_01ba5c50
    ADD ECX,EDX                         ; 005b12e7
    MOV EDX,dword ptr [EAX + 0x3a96c]   ; 005b12e9
    MOV dword ptr [ECX + 0x28],EDX      ; 005b12ef
    INC EBX                             ; 005b12f2
    MOV ESI,dword ptr [EBP + 0x39ce8]   ; 005b12f3
    ADD EAX,0x4                         ; 005b12f9
    CMP EBX,ESI                         ; 005b12fc
    JL 0x005b12b7                       ; 005b12fe
        ;   XREF to: 005b12b7 (CONDITIONAL_JUMP)  ; LAB_005b12b7
    CMP dword ptr [ESP + 0x4],0xf618    ; 005b1300
        ;   Label: LAB_005b1300
    JGE 0x005b1404                      ; 005b1308
        ;   XREF to: 005b1404 (CONDITIONAL_JUMP)  ; LAB_005b1404
    PUSH 0x267                          ; 005b130e
    MOV EBX,dword ptr [EBP + 0x110]     ; 005b1313
    PUSH EBX                            ; 005b1319
    MOV ESI,dword ptr [EBP + 0x114]     ; 005b131a
    PUSH ESI                            ; 005b1320
    MOV EDI,dword ptr [0x0061b5a8]      ; 005b1321 | DAT_0061b5a8
    PUSH EDI                            ; 005b1327 | DAT_01e661b8
    CALL FUN_00533f40                   ; 005b1328
        ;   XREF to: 00533f40 (UNCONDITIONAL_CALL)  ; undefined FUN_00533f40()
        ;   Label: LAB_005b1328
    ADD ESP,0x10                        ; 005b132d
    MOV EAX,dword ptr [EBP + 0x110]     ; 005b1330
    MOV dword ptr [ESP + 0x8],EAX       ; 005b1336
    CMP EAX,0x3e8                       ; 005b133a
    JLE 0x005b1349                      ; 005b133f
        ;   XREF to: 005b1349 (CONDITIONAL_JUMP)  ; LAB_005b1349
    MOV dword ptr [ESP + 0x8],0x3e8     ; 005b1341
    XOR ECX,ECX                         ; 005b1349
        ;   Label: LAB_005b1349
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b134b
    MOV dword ptr [ESP + 0xc],ECX       ; 005b134f
    TEST EBX,EBX                        ; 005b1353
    JLE 0x005b13bf                      ; 005b1355
        ;   XREF to: 005b13bf (CONDITIONAL_JUMP)  ; LAB_005b13bf
    MOV dword ptr [ESP + 0x10],0x2668a10 ; 005b1357
    IMUL EAX,dword ptr [ESP + 0xc],0x48 ; 005b135f
        ;   Label: LAB_005b135f
    MOV EDX,dword ptr [EBP + 0x114]     ; 005b1364
    ADD EDX,EAX                         ; 005b136a
    MOV ECX,dword ptr [ESP + 0x10]      ; 005b136c
    MOV EAX,dword ptr [EDX + 0x4]       ; 005b1370
    MOV dword ptr [ECX + 0x4],EAX       ; 005b1373 | DAT_02668a14 | DAT_02668a5c
    MOV ECX,dword ptr [EDX + 0x4]       ; 005b1376
    XOR EAX,EAX                         ; 005b1379
    TEST ECX,ECX                        ; 005b137b
    JLE 0x005b13a3                      ; 005b137d
        ;   XREF to: 005b13a3 (CONDITIONAL_JUMP)  ; LAB_005b13a3
    MOV ECX,dword ptr [ESP + 0x10]      ; 005b137f
    MOV EBX,dword ptr [EDX + 0x4]       ; 005b1383
        ;   Label: LAB_005b1383
    SUB EBX,EAX                         ; 005b1386
    DEC EBX                             ; 005b1388
    IMUL EBX,EBX,0xc                    ; 005b1389
    LEA ESI,[EDX + EBX*0x1]             ; 005b138c
    LEA EDI,[ECX + 0x18]                ; 005b138f
    LEA ESI,[ESI + 0x18]                ; 005b1392
    MOVSD ES:EDI,ESI                    ; 005b1395 | DAT_02668a28 | DAT_02668a34
    MOVSD ES:EDI,ESI                    ; 005b1396 | DAT_02668a2c | DAT_02668a38
    MOVSD ES:EDI,ESI                    ; 005b1397 | DAT_02668a30 | DAT_02668a3c
    INC EAX                             ; 005b1398
    MOV EBX,dword ptr [EDX + 0x4]       ; 005b1399
    ADD ECX,0xc                         ; 005b139c
    CMP EAX,EBX                         ; 005b139f
    JL 0x005b1383                       ; 005b13a1
        ;   XREF to: 005b1383 (CONDITIONAL_JUMP)  ; LAB_005b1383
    MOV ESI,dword ptr [ESP + 0x10]      ; 005b13a3
        ;   Label: LAB_005b13a3
    MOV EDI,dword ptr [ESP + 0xc]       ; 005b13a7
    MOV EDX,dword ptr [ESP + 0x8]       ; 005b13ab
    ADD ESI,0x48                        ; 005b13af
    INC EDI                             ; 005b13b2
    MOV dword ptr [ESP + 0x10],ESI      ; 005b13b3
    MOV dword ptr [ESP + 0xc],EDI       ; 005b13b7
    CMP EDI,EDX                         ; 005b13bb
    JL 0x005b135f                       ; 005b13bd
        ;   XREF to: 005b135f (CONDITIONAL_JUMP)  ; LAB_005b135f
    PUSH 0x0                            ; 005b13bf
        ;   Label: LAB_005b13bf
    PUSH 0x4                            ; 005b13c1
    MOV ECX,dword ptr [EBP + 0x10c]     ; 005b13c3
    PUSH ECX                            ; 005b13c9
    PUSH 0x2668a10                      ; 005b13ca
    MOV EBX,dword ptr [ESP + 0x18]      ; 005b13cf
    PUSH EBX                            ; 005b13d3
    MOV ESI,dword ptr [EBP + 0x104]     ; 005b13d4
    PUSH ESI                            ; 005b13da
    MOV EDI,dword ptr [0x0061b5a8]      ; 005b13db | DAT_0061b5a8
    PUSH EDI                            ; 005b13e1 | DAT_01e661b8
    CALL FUN_00532190                   ; 005b13e2
        ;   XREF to: 00532190 (UNCONDITIONAL_CALL)  ; undefined FUN_00532190()
    ADD ESP,0x1c                        ; 005b13e7
    CMP dword ptr [ESP + 0x4],0xf618    ; 005b13ea
    JGE 0x005b1420                      ; 005b13f2
        ;   XREF to: 005b1420 (CONDITIONAL_JUMP)  ; LAB_005b1420
    PUSH 0x267                          ; 005b13f4
    PUSH EBX                            ; 005b13f9
    PUSH 0x2668a10                      ; 005b13fa
    JMP 0x005b11d3                      ; 005b13ff
        ;   XREF to: 005b11d3 (UNCONDITIONAL_JUMP)  ; LAB_005b11d3
    PUSH -0x1                           ; 005b1404
        ;   Label: LAB_005b1404
    MOV EAX,dword ptr [EBP + 0x110]     ; 005b1406
    PUSH EAX                            ; 005b140c
    MOV EDX,dword ptr [EBP + 0x114]     ; 005b140d
    PUSH EDX                            ; 005b1413
    MOV ECX,dword ptr [0x0061b5a8]      ; 005b1414 | DAT_0061b5a8
    PUSH ECX                            ; 005b141a | DAT_01e661b8
    JMP 0x005b1328                      ; 005b141b
        ;   XREF to: 005b1328 (UNCONDITIONAL_JUMP)  ; LAB_005b1328
    PUSH -0x1                           ; 005b1420
        ;   Label: LAB_005b1420
    PUSH EBX                            ; 005b1422
    PUSH 0x2668a10                      ; 005b1423
    MOV EDX,dword ptr [0x0061b5a8]      ; 005b1428 | DAT_0061b5a8
    PUSH EDX                            ; 005b142e | DAT_01e661b8
    JMP 0x005b11da                      ; 005b142f
        ;   XREF to: 005b11da (UNCONDITIONAL_JUMP)  ; LAB_005b11da

