; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_glass_cpp_FUN_004e1150(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e3f0c
;   undefined4 DAT_005e3f14
;   undefined4 DAT_005e3f1c
;   undefined4 DAT_005e3f24
;   undefined4 DAT_00612560
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_actor.cpp_FUN_00408850
;   core_dirmat.cpp_FUN_0045f690
;   core_main.c_FUN_005030e0
;   core_mirror.cpp_CMirror_setupCorners_FUN_00518820
;   crt_math.c_round_FUN_005c03a0
;   crt_string.c__strcmp_FUN_005c0f80
;   crt_string.c__stricmp_FUN_005c04e0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1150
        ;   Label: core_glass.cpp_FUN_004e1150
    PUSH ESI                            ; 004e1151
    PUSH EDI                            ; 004e1152
    PUSH EBP                            ; 004e1153
    MOV EBP,ESP                         ; 004e1154
    SUB ESP,0x128                       ; 004e1156
    AND ESP,0xfffffff8                  ; 004e115c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e115f
    PUSH EBX                            ; 004e1162
    CALL core_actor.cpp_FUN_00408850    ; 004e1163
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408850(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e1168
    LEA EAX,[EBX + 0x164]               ; 004e116b
    PUSH EAX                            ; 004e1171
    MOV EDX,dword ptr [0x00612560]      ; 004e1172 | DAT_00612560
    PUSH EDX                            ; 004e1178
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004e1179
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV ECX,dword ptr [EBX + 0x1e8]     ; 004e117e
    ADD ESP,0x8                         ; 004e1184
    TEST ECX,ECX                        ; 004e1187
    JNZ 0x004e1331                      ; 004e1189
        ;   XREF to: 004e1331 (CONDITIONAL_JUMP)  ; LAB_004e1331
    FLD float ptr [EBX + 0x158]         ; 004e118f
        ;   Label: LAB_004e118f
    FMUL double ptr [0x005e3f14]        ; 004e1195 | DAT_005e3f14
    CALL crt_math.c_round_FUN_005c03a0  ; 004e119b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x124]       ; 004e11a0
    MOV EAX,dword ptr [ESP + 0x124]     ; 004e11a7
    INC EAX                             ; 004e11ae
    MOV dword ptr [EBX + 0xb2c],EAX     ; 004e11af
    CMP EAX,0x4                         ; 004e11b5
    JLE 0x004e11c4                      ; 004e11b8
        ;   XREF to: 004e11c4 (CONDITIONAL_JUMP)  ; LAB_004e11c4
    MOV dword ptr [EBX + 0xb2c],0x4     ; 004e11ba
    FLD float ptr [EBX + 0x15c]         ; 004e11c4
        ;   Label: LAB_004e11c4
    FMUL double ptr [0x005e3f14]        ; 004e11ca | DAT_005e3f14
    CALL crt_math.c_round_FUN_005c03a0  ; 004e11d0
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x124]       ; 004e11d5
    MOV EAX,dword ptr [ESP + 0x124]     ; 004e11dc
    INC EAX                             ; 004e11e3
    MOV dword ptr [EBX + 0xb30],EAX     ; 004e11e4
    CMP EAX,0x4                         ; 004e11ea
    JLE 0x004e11f9                      ; 004e11ed
        ;   XREF to: 004e11f9 (CONDITIONAL_JUMP)  ; LAB_004e11f9
    MOV dword ptr [EBX + 0xb30],0x4     ; 004e11ef
    MOV EAX,dword ptr [EBX + 0xb30]     ; 004e11f9
        ;   Label: LAB_004e11f9
    MOV EDX,dword ptr [EBX + 0xb2c]     ; 004e11ff
    INC EAX                             ; 004e1205
    INC EDX                             ; 004e1206
    IMUL EDX,EAX                        ; 004e1207
    MOV ESI,dword ptr [EBX + 0xb30]     ; 004e120a
    MOV EAX,dword ptr [EBX + 0xb2c]     ; 004e1210
    IMUL EAX,ESI                        ; 004e1216
    MOV dword ptr [EBX + 0xb34],EDX     ; 004e1219
    MOV EDI,dword ptr [EBX + 0xb34]     ; 004e121f
    MOV dword ptr [EBX + 0xb38],EAX     ; 004e1225
    CMP EDI,0x19                        ; 004e122b
    JLE 0x004e160d                      ; 004e122e
        ;   XREF to: 004e160d (CONDITIONAL_JUMP)  ; LAB_004e160d
    MOV ESI,dword ptr [EBX + 0xb38]     ; 004e1234
        ;   Label: LAB_004e1234
    PUSH ESI                            ; 004e123a
    MOV EDI,dword ptr [EBX + 0xb34]     ; 004e123b
    PUSH EDI                            ; 004e1241
    MOV EDX,0x5e3e50                    ; 004e1242
    MOV ECX,0x86                        ; 004e1247
    PUSH 0x5e3e62                       ; 004e124c
    MOV dword ptr [0x01d1d400],EDX      ; 004e1251 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004e1257 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004e125d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 004e1262
    FILD dword ptr [EBX + 0xb2c]        ; 004e1265
        ;   Label: LAB_004e1265
    FDIVR float ptr [EBX + 0x158]       ; 004e126b
    FILD dword ptr [EBX + 0xb30]        ; 004e1271
    FDIVR float ptr [EBX + 0x15c]       ; 004e1277
    XOR EAX,EAX                         ; 004e127d
    XOR EDI,EDI                         ; 004e127f
    MOV dword ptr [ESP + 0x11c],EAX     ; 004e1281
    FXCH                                ; 004e1288
    FSTP float ptr [ESP + 0x118]        ; 004e128a
    MOV dword ptr [ESP + 0xa8],EAX      ; 004e1291
    MOV dword ptr [ESP + 0xac],EAX      ; 004e1298
    MOV dword ptr [ESP + 0xb0],EAX      ; 004e129f
    LEA EAX,[EBX + 0x38c]               ; 004e12a6
    FSTP float ptr [ESP + 0x110]        ; 004e12ac
    MOV dword ptr [ESP + 0x10c],EAX     ; 004e12b3
    MOV EAX,dword ptr [EBX + 0xb30]     ; 004e12ba
        ;   Label: LAB_004e12ba
    MOV EDX,dword ptr [ESP + 0x11c]     ; 004e12c0
    INC EAX                             ; 004e12c7
    CMP EAX,EDX                         ; 004e12c8
    JLE 0x004e16e8                      ; 004e12ca
        ;   XREF to: 004e16e8 (CONDITIONAL_JUMP)  ; LAB_004e16e8
    IMUL EDX,EDI,0xc                    ; 004e12d0
    FLD float ptr [EBX + 0x158]         ; 004e12d3
    FCHS                                ; 004e12d9
    FMUL double ptr [0x005e3f14]        ; 004e12db | DAT_005e3f14
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004e12e1
    XOR ESI,ESI                         ; 004e12e8
    FSTP float ptr [ESP + 0xa8]         ; 004e12ea
    LEA ECX,[EDI*0x4 + 0x0]             ; 004e12f1
    ADD EDX,EAX                         ; 004e12f8
    ADD ECX,EBX                         ; 004e12fa
    MOV EAX,dword ptr [EBX + 0xb2c]     ; 004e12fc
        ;   Label: LAB_004e12fc
    INC EAX                             ; 004e1302
    CMP ESI,EAX                         ; 004e1303
    JL 0x004e161b                       ; 004e1305
        ;   XREF to: 004e161b (CONDITIONAL_JUMP)  ; LAB_004e161b
    FLD float ptr [ESP + 0xac]          ; 004e130b
    MOV EDX,dword ptr [ESP + 0x11c]     ; 004e1312
    FADD float ptr [ESP + 0x110]        ; 004e1319
    INC EDX                             ; 004e1320
    FSTP float ptr [ESP + 0xac]         ; 004e1321
    MOV dword ptr [ESP + 0x11c],EDX     ; 004e1328
    JMP 0x004e12ba                      ; 004e132f
        ;   XREF to: 004e12ba (UNCONDITIONAL_JUMP)  ; LAB_004e12ba
    XOR ESI,ESI                         ; 004e1331
        ;   Label: LAB_004e1331
    MOV dword ptr [ESP + 0xf8],ESI      ; 004e1333
    MOV dword ptr [ESP + 0xf4],ESI      ; 004e133a
    MOV dword ptr [ESP + 0xf0],ESI      ; 004e1341
    FLD float ptr [EBX + 0x158]         ; 004e1348
    FMUL float ptr [0x005e3f0c]         ; 004e134e | DAT_005e3f0c
    LEA EAX,[ESP + 0xf0]                ; 004e1354
    LEA EDI,[ESP + 0x54]                ; 004e135b
    PUSH EAX                            ; 004e135f
    LEA EAX,[EBX + 0x3c]                ; 004e1360
    LEA ESI,[ESP + 0x100]               ; 004e1363
    PUSH EAX                            ; 004e136a
    FSTP float ptr [ESP + 0xf8]         ; 004e136b
    CALL core_dirmat.cpp_FUN_0045f690   ; 004e1372
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x104]               ; 004e1377
    ADD ESP,0x8                         ; 004e137e
    LEA EAX,[EBX + 0x20]                ; 004e1381
    MOVSD ES:EDI,ESI                    ; 004e1384
    MOVSD ES:EDI,ESI                    ; 004e1385
    MOVSD ES:EDI,ESI                    ; 004e1386
    LEA EDX,[ESP + 0x48]                ; 004e1387
    FLD float ptr [EAX + 0x4]           ; 004e138b
    FLD float ptr [EAX + 0x8]           ; 004e138e
    FLD float ptr [EAX]                 ; 004e1391
    LEA EDI,[ESP + 0x60]                ; 004e1393
    LEA ESI,[ESP + 0x3c]                ; 004e1397
    LEA EAX,[ESP + 0x60]                ; 004e139b
    FADD float ptr [ESP + 0x54]         ; 004e139f
    FXCH ST2                            ; 004e13a3
    FADD float ptr [ESP + 0x58]         ; 004e13a5
    FXCH                                ; 004e13a9
    FADD float ptr [ESP + 0x5c]         ; 004e13ab
    FXCH ST2                            ; 004e13af
    FSTP float ptr [ESP + 0x3c]         ; 004e13b1
    FSTP float ptr [ESP + 0x40]         ; 004e13b5
    FSTP float ptr [ESP + 0x44]         ; 004e13b9
    MOVSD ES:EDI,ESI                    ; 004e13bd
    MOVSD ES:EDI,ESI                    ; 004e13be
    MOVSD ES:EDI,ESI                    ; 004e13bf
    CMP EDX,EAX                         ; 004e13c0
    JZ 0x004e13dc                       ; 004e13c2
        ;   XREF to: 004e13dc (CONDITIONAL_JUMP)  ; LAB_004e13dc
    MOV EAX,dword ptr [ESP + 0x60]      ; 004e13c4
    MOV dword ptr [ESP + 0x48],EAX      ; 004e13c8
    MOV EAX,dword ptr [ESP + 0x64]      ; 004e13cc
    MOV dword ptr [ESP + 0x4c],EAX      ; 004e13d0
    MOV EAX,dword ptr [ESP + 0x68]      ; 004e13d4
    MOV dword ptr [ESP + 0x50],EAX      ; 004e13d8
    XOR byte ptr [ESP + 0xf3],0x80      ; 004e13dc
        ;   Label: LAB_004e13dc
    LEA EAX,[ESP + 0xf0]                ; 004e13e4
    PUSH EAX                            ; 004e13eb
    LEA EAX,[EBX + 0x3c]                ; 004e13ec
    PUSH EAX                            ; 004e13ef
    LEA ESI,[ESP + 0x80]                ; 004e13f0
    LEA EDI,[ESP + 0xd4]                ; 004e13f7
    CALL core_dirmat.cpp_FUN_0045f690   ; 004e13fe
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x80]                ; 004e1403
    ADD ESP,0x8                         ; 004e140a
    LEA EAX,[EBX + 0x20]                ; 004e140d
    MOVSD ES:EDI,ESI                    ; 004e1410
    MOVSD ES:EDI,ESI                    ; 004e1411
    MOVSD ES:EDI,ESI                    ; 004e1412
    LEA EDX,[ESP + 0x9c]                ; 004e1413
    FLD float ptr [EAX + 0x4]           ; 004e141a
    FLD float ptr [EAX + 0x8]           ; 004e141d
    FLD float ptr [EAX]                 ; 004e1420
    LEA EDI,[ESP + 0xe4]                ; 004e1422
    LEA ESI,[ESP + 0xc0]                ; 004e1429
    LEA EAX,[ESP + 0xe4]                ; 004e1430
    FADD float ptr [ESP + 0xcc]         ; 004e1437
    FXCH ST2                            ; 004e143e
    FADD float ptr [ESP + 0xd0]         ; 004e1440
    FXCH                                ; 004e1447
    FADD float ptr [ESP + 0xd4]         ; 004e1449
    FXCH ST2                            ; 004e1450
    FSTP float ptr [ESP + 0xc0]         ; 004e1452
    FSTP float ptr [ESP + 0xc4]         ; 004e1459
    FSTP float ptr [ESP + 0xc8]         ; 004e1460
    MOVSD ES:EDI,ESI                    ; 004e1467
    MOVSD ES:EDI,ESI                    ; 004e1468
    MOVSD ES:EDI,ESI                    ; 004e1469
    CMP EDX,EAX                         ; 004e146a
    JZ 0x004e1498                       ; 004e146c
        ;   XREF to: 004e1498 (CONDITIONAL_JUMP)  ; LAB_004e1498
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004e146e
    MOV dword ptr [ESP + 0x9c],EAX      ; 004e1475
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004e147c
    MOV dword ptr [ESP + 0xa0],EAX      ; 004e1483
    MOV EAX,dword ptr [ESP + 0xec]      ; 004e148a
    MOV dword ptr [ESP + 0xa4],EAX      ; 004e1491
    MOV EAX,dword ptr [EBX + 0x15c]     ; 004e1498
        ;   Label: LAB_004e1498
    MOV dword ptr [ESP + 0xf4],EAX      ; 004e149e
    LEA EAX,[ESP + 0xf0]                ; 004e14a5
    PUSH EAX                            ; 004e14ac
    LEA EAX,[EBX + 0x3c]                ; 004e14ad
    PUSH EAX                            ; 004e14b0
    LEA ESI,[ESP + 0x8]                 ; 004e14b1
    LEA EDI,[ESP + 0x8c]                ; 004e14b5
    CALL core_dirmat.cpp_FUN_0045f690   ; 004e14bc
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x8]                 ; 004e14c1
    ADD ESP,0x8                         ; 004e14c5
    LEA EAX,[EBX + 0x20]                ; 004e14c8
    MOVSD ES:EDI,ESI                    ; 004e14cb
    MOVSD ES:EDI,ESI                    ; 004e14cc
    MOVSD ES:EDI,ESI                    ; 004e14cd
    LEA EDX,[ESP + 0xb4]                ; 004e14ce
    FLD float ptr [EAX + 0x4]           ; 004e14d5
    FLD float ptr [EAX + 0x8]           ; 004e14d8
    FLD float ptr [EAX]                 ; 004e14db
    LEA EDI,[ESP + 0xb4]                ; 004e14dd
    LEA ESI,[ESP + 0x6c]                ; 004e14e4
    LEA EAX,[ESP + 0x30]                ; 004e14e8
    FADD float ptr [ESP + 0x84]         ; 004e14ec
    FXCH ST2                            ; 004e14f3
    FADD float ptr [ESP + 0x88]         ; 004e14f5
    FXCH                                ; 004e14fc
    FADD float ptr [ESP + 0x8c]         ; 004e14fe
    FXCH ST2                            ; 004e1505
    FSTP float ptr [ESP + 0x6c]         ; 004e1507
    FSTP float ptr [ESP + 0x70]         ; 004e150b
    FSTP float ptr [ESP + 0x74]         ; 004e150f
    MOVSD ES:EDI,ESI                    ; 004e1513
    MOVSD ES:EDI,ESI                    ; 004e1514
    MOVSD ES:EDI,ESI                    ; 004e1515
    CMP EAX,EDX                         ; 004e1516
    JZ 0x004e153b                       ; 004e1518
        ;   XREF to: 004e153b (CONDITIONAL_JUMP)  ; LAB_004e153b
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004e151a
    MOV dword ptr [ESP + 0x30],EAX      ; 004e1521
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004e1525
    MOV dword ptr [ESP + 0x34],EAX      ; 004e152c
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004e1530
    MOV dword ptr [ESP + 0x38],EAX      ; 004e1537
    MOV DL,byte ptr [ESP + 0xf3]        ; 004e153b
        ;   Label: LAB_004e153b
    LEA EAX,[ESP + 0xf0]                ; 004e1542
    LEA ESI,[ESP + 0xc]                 ; 004e1549
    PUSH EAX                            ; 004e154d
    LEA EAX,[EBX + 0x3c]                ; 004e154e
    XOR DL,0x80                         ; 004e1551
    PUSH EAX                            ; 004e1554
    LEA EDI,[ESP + 0x20]                ; 004e1555
    MOV byte ptr [ESP + 0xfb],DL        ; 004e1559
    CALL core_dirmat.cpp_FUN_0045f690   ; 004e1560
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x14]                ; 004e1565
    ADD ESP,0x8                         ; 004e1569
    LEA EAX,[EBX + 0x20]                ; 004e156c
    MOVSD ES:EDI,ESI                    ; 004e156f
    MOVSD ES:EDI,ESI                    ; 004e1570
    MOVSD ES:EDI,ESI                    ; 004e1571
    LEA EDX,[ESP + 0x24]                ; 004e1572
    FLD float ptr [EAX + 0x4]           ; 004e1576
    FLD float ptr [EAX + 0x8]           ; 004e1579
    FLD float ptr [EAX]                 ; 004e157c
    LEA EDI,[ESP + 0xd8]                ; 004e157e
    LEA ESI,[ESP + 0x90]                ; 004e1585
    LEA EAX,[ESP + 0xd8]                ; 004e158c
    FADD float ptr [ESP + 0x18]         ; 004e1593
    FXCH ST2                            ; 004e1597
    FADD float ptr [ESP + 0x1c]         ; 004e1599
    FXCH                                ; 004e159d
    FADD float ptr [ESP + 0x20]         ; 004e159f
    FXCH ST2                            ; 004e15a3
    FSTP float ptr [ESP + 0x90]         ; 004e15a5
    FSTP float ptr [ESP + 0x94]         ; 004e15ac
    FSTP float ptr [ESP + 0x98]         ; 004e15b3
    MOVSD ES:EDI,ESI                    ; 004e15ba
    MOVSD ES:EDI,ESI                    ; 004e15bb
    MOVSD ES:EDI,ESI                    ; 004e15bc
    CMP EDX,EAX                         ; 004e15bd
    JZ 0x004e15e2                       ; 004e15bf
        ;   XREF to: 004e15e2 (CONDITIONAL_JUMP)  ; LAB_004e15e2
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004e15c1
    MOV dword ptr [ESP + 0x24],EAX      ; 004e15c8
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004e15cc
    MOV dword ptr [ESP + 0x28],EAX      ; 004e15d3
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004e15d7
    MOV dword ptr [ESP + 0x2c],EAX      ; 004e15de
    LEA EAX,[ESP + 0x24]                ; 004e15e2
        ;   Label: LAB_004e15e2
    PUSH EAX                            ; 004e15e6
    LEA EAX,[ESP + 0x34]                ; 004e15e7
    PUSH EAX                            ; 004e15eb
    LEA EAX,[ESP + 0xa4]                ; 004e15ec
    PUSH EAX                            ; 004e15f3
    LEA EAX,[ESP + 0x54]                ; 004e15f4
    PUSH EAX                            ; 004e15f8
    LEA EAX,[EBX + 0x1ec]               ; 004e15f9
    PUSH EAX                            ; 004e15ff
    CALL core_mirror.cpp_CMirror_setupCorners_FUN_00518820 ; 004e1600
        ;   XREF to: 00518820 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_CMirror_setupCorners_FUN_00518820(CMirror * this_ptr, CVector3f * corner1, CVector3f * corner2, CVector3f * corner3, ...)
    ADD ESP,0x14                        ; 004e1605
    JMP 0x004e118f                      ; 004e1608
        ;   XREF to: 004e118f (UNCONDITIONAL_JUMP)  ; LAB_004e118f
    CMP EAX,0x10                        ; 004e160d
        ;   Label: LAB_004e160d
    JG 0x004e1234                       ; 004e1610
        ;   XREF to: 004e1234 (CONDITIONAL_JUMP)  ; LAB_004e1234
    JMP 0x004e1265                      ; 004e1616
        ;   XREF to: 004e1265 (UNCONDITIONAL_JUMP)  ; LAB_004e1265
    LEA EAX,[ESP + 0xa8]                ; 004e161b
        ;   Label: LAB_004e161b
    CMP EDX,EAX                         ; 004e1622
    JZ 0x004e1643                       ; 004e1624
        ;   XREF to: 004e1643 (CONDITIONAL_JUMP)  ; LAB_004e1643
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004e1626
    MOV dword ptr [EDX],EAX             ; 004e162d
    MOV EAX,dword ptr [ESP + 0xac]      ; 004e162f
    MOV dword ptr [EDX + 0x4],EAX       ; 004e1636
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004e1639
    MOV dword ptr [EDX + 0x8],EAX       ; 004e1640
    MOV dword ptr [ESP + 0x124],ESI     ; 004e1643
        ;   Label: LAB_004e1643
    FILD dword ptr [EBX + 0xb2c]        ; 004e164a
    FILD dword ptr [ESP + 0x124]        ; 004e1650
    FDIVRP                              ; 004e1657
    FLD double ptr [0x005e3f1c]         ; 004e1659 | DAT_005e3f1c
    FXCH                                ; 004e165f
    FMUL ST1                            ; 004e1661
    FLD double ptr [0x005e3f24]         ; 004e1663 | DAT_005e3f24
    FXCH                                ; 004e1669
    FADD ST0,ST1                        ; 004e166b
    CALL crt_math.c_round_FUN_005c03a0  ; 004e166d
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x124]       ; 004e1672
    MOV EAX,dword ptr [ESP + 0x124]     ; 004e1679
    MOV dword ptr [ECX + 0x5e4],EAX     ; 004e1680
    MOV EAX,dword ptr [EBX + 0xb30]     ; 004e1686
    SUB EAX,dword ptr [ESP + 0x11c]     ; 004e168c
    MOV dword ptr [ESP + 0x124],EAX     ; 004e1693
    FILD dword ptr [ESP + 0x124]        ; 004e169a
    FILD dword ptr [EBX + 0xb30]        ; 004e16a1
    FDIVP                               ; 004e16a7
    FMULP ST2                           ; 004e16a9
    ADD ECX,0x4                         ; 004e16ab
    FADDP                               ; 004e16ae
    CALL crt_math.c_round_FUN_005c03a0  ; 004e16b0
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x124]       ; 004e16b5
    MOV EAX,dword ptr [ESP + 0x124]     ; 004e16bc
    ADD EDX,0xc                         ; 004e16c3
    MOV dword ptr [ECX + 0x644],EAX     ; 004e16c6
    INC EDI                             ; 004e16cc
    FLD float ptr [ESP + 0xa8]          ; 004e16cd
    FADD float ptr [ESP + 0x118]        ; 004e16d4
    INC ESI                             ; 004e16db
    FSTP float ptr [ESP + 0xa8]         ; 004e16dc
    JMP 0x004e12fc                      ; 004e16e3
        ;   XREF to: 004e12fc (UNCONDITIONAL_JUMP)  ; LAB_004e12fc
    XOR ECX,ECX                         ; 004e16e8
        ;   Label: LAB_004e16e8
    MOV EDI,dword ptr [EBX + 0xb30]     ; 004e16ea
    MOV dword ptr [ESP + 0x120],ECX     ; 004e16f0
    MOV dword ptr [ESP + 0x108],ECX     ; 004e16f7
    TEST EDI,EDI                        ; 004e16fe
    JLE 0x004e182e                      ; 004e1700
        ;   XREF to: 004e182e (CONDITIONAL_JUMP)  ; LAB_004e182e
    LEA EAX,[EBX + 0x6ac]               ; 004e1706
    MOV dword ptr [ESP + 0x114],EAX     ; 004e170c
    MOV EDX,dword ptr [EBX + 0xb2c]     ; 004e1713
        ;   Label: LAB_004e1713
    XOR ESI,ESI                         ; 004e1719
    TEST EDX,EDX                        ; 004e171b
    JLE 0x004e1811                      ; 004e171d
        ;   XREF to: 004e1811 (CONDITIONAL_JUMP)  ; LAB_004e1811
    IMUL EAX,dword ptr [ESP + 0x108],0x48 ; 004e1723
    ADD EAX,dword ptr [ESP + 0x114]     ; 004e172b
    MOV dword ptr [EAX + 0x4],0x4       ; 004e1732
        ;   Label: LAB_004e1732
    MOV dword ptr [EAX + 0x14],0x0      ; 004e1739
    MOV EDX,dword ptr [EAX + 0x14]      ; 004e1740
    MOV dword ptr [EAX + 0x10],EDX      ; 004e1743
    MOV dword ptr [EAX + 0xc],EDX       ; 004e1746
    MOV dword ptr [EAX + 0x8],EDX       ; 004e1749
    MOV EDX,dword ptr [EBX + 0xb2c]     ; 004e174c
    MOV ECX,dword ptr [ESP + 0x120]     ; 004e1752
    INC EDX                             ; 004e1759
    IMUL EDX,ECX                        ; 004e175a
    ADD EDX,ESI                         ; 004e175d
    MOV dword ptr [EAX + 0x18],EDX      ; 004e175f
    MOV EDI,dword ptr [EBX + EDX*0x4 + 0x5e4] ; 004e1762
    MOV dword ptr [EAX + 0x1c],EDI      ; 004e1769
    MOV EDI,dword ptr [EBX + EDX*0x4 + 0x648] ; 004e176c
    MOV dword ptr [EAX + 0x20],EDI      ; 004e1773
    LEA EDI,[EDX + 0x1]                 ; 004e1776
    MOV dword ptr [EAX + 0x24],EDI      ; 004e1779
    MOV EDI,dword ptr [EBX + EDX*0x4 + 0x5e8] ; 004e177c
    MOV dword ptr [EAX + 0x28],EDI      ; 004e1783
    MOV ECX,dword ptr [EBX + EDX*0x4 + 0x64c] ; 004e1786
    MOV dword ptr [EAX + 0x2c],ECX      ; 004e178d
    MOV ECX,dword ptr [EBX + 0xb2c]     ; 004e1790
    ADD ECX,EDX                         ; 004e1796
    ADD ECX,0x2                         ; 004e1798
    MOV dword ptr [EAX + 0x30],ECX      ; 004e179b
    MOV ECX,dword ptr [EBX + 0xb2c]     ; 004e179e
    ADD ECX,EDX                         ; 004e17a4
    MOV ECX,dword ptr [EBX + ECX*0x4 + 0x5ec] ; 004e17a6
    MOV dword ptr [EAX + 0x34],ECX      ; 004e17ad
    MOV ECX,dword ptr [EBX + 0xb2c]     ; 004e17b0
    ADD ECX,EDX                         ; 004e17b6
    MOV ECX,dword ptr [EBX + ECX*0x4 + 0x650] ; 004e17b8
    MOV dword ptr [EAX + 0x38],ECX      ; 004e17bf
    MOV ECX,dword ptr [EBX + 0xb2c]     ; 004e17c2
    ADD ECX,EDX                         ; 004e17c8
    INC ECX                             ; 004e17ca
    MOV dword ptr [EAX + 0x3c],ECX      ; 004e17cb
    MOV ECX,dword ptr [EBX + 0xb2c]     ; 004e17ce
    ADD ECX,EDX                         ; 004e17d4
    MOV ECX,dword ptr [EBX + ECX*0x4 + 0x5e8] ; 004e17d6
    MOV dword ptr [EAX + 0x40],ECX      ; 004e17dd
    ADD EDX,dword ptr [EBX + 0xb2c]     ; 004e17e0
    ADD EAX,0x48                        ; 004e17e6
    MOV EDX,dword ptr [EBX + EDX*0x4 + 0x64c] ; 004e17e9
    MOV dword ptr [EAX + -0x4],EDX      ; 004e17f0
    MOV EDX,dword ptr [ESP + 0x108]     ; 004e17f3
    INC ESI                             ; 004e17fa
    INC EDX                             ; 004e17fb
    MOV ECX,dword ptr [EBX + 0xb2c]     ; 004e17fc
    MOV dword ptr [ESP + 0x108],EDX     ; 004e1802
    CMP ESI,ECX                         ; 004e1809
    JL 0x004e1732                       ; 004e180b
        ;   XREF to: 004e1732 (CONDITIONAL_JUMP)  ; LAB_004e1732
    MOV ECX,dword ptr [ESP + 0x120]     ; 004e1811
        ;   Label: LAB_004e1811
    INC ECX                             ; 004e1818
    MOV ESI,dword ptr [EBX + 0xb30]     ; 004e1819
    MOV dword ptr [ESP + 0x120],ECX     ; 004e181f
    CMP ECX,ESI                         ; 004e1826
    JL 0x004e1713                       ; 004e1828
        ;   XREF to: 004e1713 (CONDITIONAL_JUMP)  ; LAB_004e1713
    CMP dword ptr [EBX + 0x17c],0xfde8  ; 004e182e
        ;   Label: LAB_004e182e
    SETLE AL                            ; 004e1838
    AND EAX,0xff                        ; 004e183b
    PUSH 0x5e3e97                       ; 004e1840
    MOV dword ptr [EBX + 0xfc],EAX      ; 004e1845
    LEA EAX,[EBX + 0x184]               ; 004e184b
    PUSH EAX                            ; 004e1851
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004e1852
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004e1857
    TEST EAX,EAX                        ; 004e185a
    JNZ 0x004e1865                      ; 004e185c
        ;   XREF to: 004e1865 (CONDITIONAL_JUMP)  ; LAB_004e1865
    MOV byte ptr [EBX + 0x184],0x0      ; 004e185e
    MOV DH,byte ptr [EBX + 0x184]       ; 004e1865
        ;   Label: LAB_004e1865
    MOV dword ptr [EBX + 0x104],0x0     ; 004e186b
    TEST DH,DH                          ; 004e1875
    JNZ 0x004e1883                      ; 004e1877
        ;   XREF to: 004e1883 (CONDITIONAL_JUMP)  ; LAB_004e1883
    MOV dword ptr [EBX + 0x104],0x1     ; 004e1879
    MOV EAX,dword ptr [EBX + 0x370]     ; 004e1883
        ;   Label: LAB_004e1883
    MOV dword ptr [EBX + 0xb3c],0x0     ; 004e1889
    TEST EAX,EAX                        ; 004e1893
    JNZ 0x004e189e                      ; 004e1895
        ;   XREF to: 004e189e (CONDITIONAL_JUMP)  ; LAB_004e189e
    MOV ESP,EBP                         ; 004e1897
        ;   Label: LAB_004e1897
    POP EBP                             ; 004e1899
    POP EDI                             ; 004e189a
    POP ESI                             ; 004e189b
    POP EBX                             ; 004e189c
    RET                                 ; 004e189d
    PUSH 0x5e3e9c                       ; 004e189e
        ;   Label: LAB_004e189e
    LEA EDI,[EBX + 0x37c]               ; 004e18a3
    PUSH EDI                            ; 004e18a9
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 004e18aa
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 004e18af
    TEST EAX,EAX                        ; 004e18b2
    JNZ 0x004e1897                      ; 004e18b4
        ;   XREF to: 004e1897 (CONDITIONAL_JUMP)  ; LAB_004e1897
    PUSH 0x5e3ea7                       ; 004e18b6
    LEA EAX,[EBX + 0x16c]               ; 004e18bb
    PUSH EAX                            ; 004e18c1
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004e18c2
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004e18c7
    TEST EAX,EAX                        ; 004e18ca
    JZ 0x004e1994                       ; 004e18cc
        ;   XREF to: 004e1994 (CONDITIONAL_JUMP)  ; LAB_004e1994
    PUSH 0x5e3ec0                       ; 004e18d2
        ;   Label: LAB_004e18d2
    LEA EAX,[EBX + 0x16c]               ; 004e18d7
    PUSH EAX                            ; 004e18dd
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004e18de
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004e18e3
    TEST EAX,EAX                        ; 004e18e6
    JNZ 0x004e190f                      ; 004e18e8
        ;   XREF to: 004e190f (CONDITIONAL_JUMP)  ; LAB_004e190f
    MOV ESI,0x5e3ecc                    ; 004e18ea
    LEA EDI,[EBX + 0x37c]               ; 004e18ef
    PUSH EDI                            ; 004e18f5
    MOV AL,byte ptr [ESI]               ; 004e18f6
        ;   Label: LAB_004e18f6
    MOV byte ptr [EDI],AL               ; 004e18f8
    CMP AL,0x0                          ; 004e18fa
    JZ 0x004e190e                       ; 004e18fc
        ;   XREF to: 004e190e (CONDITIONAL_JUMP)  ; LAB_004e190e
    MOV AL,byte ptr [ESI + 0x1]         ; 004e18fe
    ADD ESI,0x2                         ; 004e1901
    MOV byte ptr [EDI + 0x1],AL         ; 004e1904
    ADD EDI,0x2                         ; 004e1907
    CMP AL,0x0                          ; 004e190a
    JNZ 0x004e18f6                      ; 004e190c
        ;   XREF to: 004e18f6 (CONDITIONAL_JUMP)  ; LAB_004e18f6
    POP EDI                             ; 004e190e
        ;   Label: LAB_004e190e
    PUSH 0x5e3ed9                       ; 004e190f
        ;   Label: LAB_004e190f
    LEA EAX,[EBX + 0x16c]               ; 004e1914
    PUSH EAX                            ; 004e191a
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004e191b
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004e1920
    TEST EAX,EAX                        ; 004e1923
    JNZ 0x004e194c                      ; 004e1925
        ;   XREF to: 004e194c (CONDITIONAL_JUMP)  ; LAB_004e194c
    MOV ESI,0x5e3ee5                    ; 004e1927
    LEA EDI,[EBX + 0x37c]               ; 004e192c
    PUSH EDI                            ; 004e1932
    MOV AL,byte ptr [ESI]               ; 004e1933
        ;   Label: LAB_004e1933
    MOV byte ptr [EDI],AL               ; 004e1935
    CMP AL,0x0                          ; 004e1937
    JZ 0x004e194b                       ; 004e1939
        ;   XREF to: 004e194b (CONDITIONAL_JUMP)  ; LAB_004e194b
    MOV AL,byte ptr [ESI + 0x1]         ; 004e193b
    ADD ESI,0x2                         ; 004e193e
    MOV byte ptr [EDI + 0x1],AL         ; 004e1941
    ADD EDI,0x2                         ; 004e1944
    CMP AL,0x0                          ; 004e1947
    JNZ 0x004e1933                      ; 004e1949
        ;   XREF to: 004e1933 (CONDITIONAL_JUMP)  ; LAB_004e1933
    POP EDI                             ; 004e194b
        ;   Label: LAB_004e194b
    PUSH 0x5e3ef2                       ; 004e194c
        ;   Label: LAB_004e194c
    LEA EAX,[EBX + 0x16c]               ; 004e1951
    PUSH EAX                            ; 004e1957
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004e1958
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004e195d
    TEST EAX,EAX                        ; 004e1960
    JNZ 0x004e1897                      ; 004e1962
        ;   XREF to: 004e1897 (CONDITIONAL_JUMP)  ; LAB_004e1897
    MOV ESI,0x5e3efe                    ; 004e1968
    LEA EDI,[EBX + 0x37c]               ; 004e196d
    PUSH EDI                            ; 004e1973
    MOV AL,byte ptr [ESI]               ; 004e1974
        ;   Label: LAB_004e1974
    MOV byte ptr [EDI],AL               ; 004e1976
    CMP AL,0x0                          ; 004e1978
    JZ 0x004e198c                       ; 004e197a
        ;   XREF to: 004e198c (CONDITIONAL_JUMP)  ; LAB_004e198c
    MOV AL,byte ptr [ESI + 0x1]         ; 004e197c
    ADD ESI,0x2                         ; 004e197f
    MOV byte ptr [EDI + 0x1],AL         ; 004e1982
    ADD EDI,0x2                         ; 004e1985
    CMP AL,0x0                          ; 004e1988
    JNZ 0x004e1974                      ; 004e198a
        ;   XREF to: 004e1974 (CONDITIONAL_JUMP)  ; LAB_004e1974
    POP EDI                             ; 004e198c
        ;   Label: LAB_004e198c
    MOV ESP,EBP                         ; 004e198d
    POP EBP                             ; 004e198f
    POP EDI                             ; 004e1990
    POP ESI                             ; 004e1991
    POP EBX                             ; 004e1992
    RET                                 ; 004e1993
    MOV ESI,0x5e3eb3                    ; 004e1994
        ;   Label: LAB_004e1994
    PUSH EDI                            ; 004e1999
    MOV AL,byte ptr [ESI]               ; 004e199a
        ;   Label: LAB_004e199a
    MOV byte ptr [EDI],AL               ; 004e199c
    CMP AL,0x0                          ; 004e199e
    JZ 0x004e19b2                       ; 004e19a0
        ;   XREF to: 004e19b2 (CONDITIONAL_JUMP)  ; LAB_004e19b2
    MOV AL,byte ptr [ESI + 0x1]         ; 004e19a2
    ADD ESI,0x2                         ; 004e19a5
    MOV byte ptr [EDI + 0x1],AL         ; 004e19a8
    ADD EDI,0x2                         ; 004e19ab
    CMP AL,0x0                          ; 004e19ae
    JNZ 0x004e199a                      ; 004e19b0
        ;   XREF to: 004e199a (CONDITIONAL_JUMP)  ; LAB_004e199a
    POP EDI                             ; 004e19b2
        ;   Label: LAB_004e19b2
    JMP 0x004e18d2                      ; 004e19b3
        ;   XREF to: 004e18d2 (UNCONDITIONAL_JUMP)  ; LAB_004e18d2

