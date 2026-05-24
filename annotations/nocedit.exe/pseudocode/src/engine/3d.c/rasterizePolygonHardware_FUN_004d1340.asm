; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_rasterizePolygonHardware_FUN_004d1340(SRenderVertex **vertices,int vertex_count)
;
; Parameters:
; SRenderVertex * * Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
; Local Variables:
; SRenderVertex * * Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; SHardwareEdge *  Stack[-0x18]:4  local_18
; SHardwareEdge *  Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_3d.c_renderPolygonSolidTexturedHardwareOp53_FUN_00405aa0 at 00405af6
;   engine_3d.c_renderPolygonTexturedHardwareOp40_FUN_00405a00 at 00405a49
;
; Referenced Globals:
;   int g_WindowHeight = 0xc8
;   int g_EdgeCount
;   SHardwareEdge[16] g_HardwareEdgeTable
;   undefined4 g_HardwareEdgeTable[0].y_max
;   undefined4 g_HardwareEdgeTable[0].x_current
;   undefined4 g_HardwareEdgeTable[0].x_gradient
;   undefined4 g_HardwareEdgeTable[0].u_current
;   undefined4 g_HardwareEdgeTable[0].u_gradient
;   undefined4 g_HardwareEdgeTable[0].v_current
;   undefined4 g_HardwareEdgeTable[0].v_gradient
;   undefined4 g_HardwareEdgeTable[1].y_min
;   int g_EdgeListMinY
;   int g_EdgeListMaxY
;
; Called Functions:
;   wincore_windll.cpp_renderScanline_FUN_005b5710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d1340
        ;   Label: engine_3d.c_rasterizePolygonHardware_FUN_004d1340
    PUSH ESI                            ; 004d1341
    PUSH EDI                            ; 004d1342
    PUSH EBP                            ; 004d1343
    SUB ESP,0x14                        ; 004d1344
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004d1347
    MOV EAX,[0x00679398]                ; 004d134b | g_WindowHeight
    XOR EDX,EDX                         ; 004d1350
    XOR EBP,EBP                         ; 004d1352
    MOV [0x02d7b7ac],EAX                ; 004d1354 | g_EdgeListMinY
    MOV dword ptr [0x02d7b7b0],EDX      ; 004d1359 | g_EdgeListMaxY
    MOV dword ptr [ESP + 0x4],EDX       ; 004d135f
    TEST EBX,EBX                        ; 004d1363
    JLE 0x004d13bb                      ; 004d1365
        ;   XREF to: 004d13bb (CONDITIONAL_JUMP)  ; LAB_004d13bb
    MOV EAX,dword ptr [ESP + 0x28]      ; 004d1367
    MOV dword ptr [ESP],EAX             ; 004d136b
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d136e
        ;   Label: LAB_004d136e
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004d1372
    INC EAX                             ; 004d1376
    CMP EAX,ECX                         ; 004d1377
    JL 0x004d137d                       ; 004d1379
        ;   XREF to: 004d137d (CONDITIONAL_JUMP)  ; LAB_004d137d
    XOR EAX,EAX                         ; 004d137b
    MOV EBX,dword ptr [ESP + 0x28]      ; 004d137d
        ;   Label: LAB_004d137d
    SHL EAX,0x2                         ; 004d1381
    ADD EAX,EBX                         ; 004d1384
    MOV EBX,dword ptr [ESP]             ; 004d1386
    MOV EDI,dword ptr [EAX]             ; 004d1389
    MOV EBX,dword ptr [EBX]             ; 004d138b
    MOV EAX,dword ptr [EDI + 0x14]      ; 004d138d
    MOV EDX,dword ptr [EBX + 0x14]      ; 004d1390
    SAR EAX,0x10                        ; 004d1393
    SAR EDX,0x10                        ; 004d1396
    CMP EDX,EAX                         ; 004d1399
    JNZ 0x004d14e2                      ; 004d139b
        ;   XREF to: 004d14e2 (CONDITIONAL_JUMP)  ; LAB_004d14e2
    MOV ESI,dword ptr [ESP]             ; 004d13a1
        ;   Label: LAB_004d13a1
    MOV EDI,dword ptr [ESP + 0x4]       ; 004d13a4
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004d13a8
    ADD ESI,0x4                         ; 004d13ac
    INC EDI                             ; 004d13af
    MOV dword ptr [ESP],ESI             ; 004d13b0
    MOV dword ptr [ESP + 0x4],EDI       ; 004d13b3
    CMP EDI,EDX                         ; 004d13b7
    JL 0x004d136e                       ; 004d13b9
        ;   XREF to: 004d136e (CONDITIONAL_JUMP)  ; LAB_004d136e
    MOV EAX,0x2d7b42c                   ; 004d13bb | g_HardwareEdgeTable
        ;   Label: LAB_004d13bb
    MOV ECX,dword ptr [0x02d7b7ac]      ; 004d13c0 | g_EdgeListMinY
    XOR EDX,EDX                         ; 004d13c6
    TEST EBP,EBP                        ; 004d13c8
    JLE 0x004d15f3                      ; 004d13ca
        ;   XREF to: 004d15f3 (CONDITIONAL_JUMP)  ; LAB_004d15f3
    CMP ECX,dword ptr [EAX]             ; 004d13d0 | g_HardwareEdgeTable | g_HardwareEdgeTable[1].y_min
        ;   Label: LAB_004d13d0
    JNZ 0x004d15e7                      ; 004d13d2
        ;   XREF to: 004d15e7 (CONDITIONAL_JUMP)  ; LAB_004d15e7
    TEST EAX,EAX                        ; 004d13d8
    JZ 0x004d15e7                       ; 004d13da
        ;   XREF to: 004d15e7 (CONDITIONAL_JUMP)  ; LAB_004d15e7
    MOV dword ptr [ESP + 0xc],EAX       ; 004d13e0 | g_HardwareEdgeTable | g_HardwareEdgeTable[1].y_min
        ;   Label: LAB_004d13e0
    MOV dword ptr [0x02d7b428],EBP      ; 004d13e4 | g_EdgeCount
    TEST EAX,EAX                        ; 004d13ea
    JZ 0x004d14d4                       ; 004d13ec
        ;   XREF to: 004d14d4 (CONDITIONAL_JUMP)  ; LAB_004d14d4
    MOV EBX,dword ptr [0x02d7b7ac]      ; 004d13f2 | g_EdgeListMinY
    MOV ECX,EAX                         ; 004d13f8 | g_HardwareEdgeTable
    XOR EDX,EDX                         ; 004d13fa
    MOV EAX,0x2d7b42c                   ; 004d13fc | g_HardwareEdgeTable
    TEST EBP,EBP                        ; 004d1401
    JLE 0x004d1606                      ; 004d1403
        ;   XREF to: 004d1606 (CONDITIONAL_JUMP)  ; LAB_004d1606
    CMP EBX,dword ptr [EAX]             ; 004d1409 | g_HardwareEdgeTable | g_HardwareEdgeTable[1].y_min
        ;   Label: LAB_004d1409
    JNZ 0x004d15fa                      ; 004d140b
        ;   XREF to: 004d15fa (CONDITIONAL_JUMP)  ; LAB_004d15fa
    CMP EAX,ECX                         ; 004d1411
    JZ 0x004d15fa                       ; 004d1413
        ;   XREF to: 004d15fa (CONDITIONAL_JUMP)  ; LAB_004d15fa
    MOV dword ptr [ESP + 0x10],EAX      ; 004d1419 | g_HardwareEdgeTable | g_HardwareEdgeTable[1].y_min
        ;   Label: LAB_004d1419
    MOV dword ptr [0x02d7b428],EBP      ; 004d141d | g_EdgeCount
    TEST EAX,EAX                        ; 004d1423
    JZ 0x004d14d4                       ; 004d1425
        ;   XREF to: 004d14d4 (CONDITIONAL_JUMP)  ; LAB_004d14d4
    MOV EAX,[0x02d7b7ac]                ; 004d142b | g_EdgeListMinY
    MOV dword ptr [ESP + 0x8],EAX       ; 004d1430
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d1434
        ;   Label: LAB_004d1434
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d1438
    CMP EAX,dword ptr [EDX + 0x4]       ; 004d143c | g_HardwareEdgeTable[0].y_max
    JL 0x004d1480                       ; 004d143f
        ;   XREF to: 004d1480 (CONDITIONAL_JUMP)  ; LAB_004d1480
    MOV ECX,dword ptr [ESP + 0x10]      ; 004d1441
    MOV EBP,dword ptr [0x02d7b428]      ; 004d1445 | g_EdgeCount
    MOV EBX,EAX                         ; 004d144b
    MOV dword ptr [EDX],0xffffffff      ; 004d144d | g_HardwareEdgeTable
    MOV EAX,0x2d7b42c                   ; 004d1453 | g_HardwareEdgeTable
    XOR EDX,EDX                         ; 004d1458
    TEST EBP,EBP                        ; 004d145a
    JLE 0x004d1619                      ; 004d145c
        ;   XREF to: 004d1619 (CONDITIONAL_JUMP)  ; LAB_004d1619
    CMP EBX,dword ptr [EAX]             ; 004d1462 | g_HardwareEdgeTable | g_HardwareEdgeTable[1].y_min
        ;   Label: LAB_004d1462
    JNZ 0x004d160d                      ; 004d1464
        ;   XREF to: 004d160d (CONDITIONAL_JUMP)  ; LAB_004d160d
    CMP EAX,ECX                         ; 004d146a
    JZ 0x004d160d                       ; 004d146c
        ;   XREF to: 004d160d (CONDITIONAL_JUMP)  ; LAB_004d160d
    MOV dword ptr [ESP + 0xc],EAX       ; 004d1472 | g_HardwareEdgeTable | g_HardwareEdgeTable[1].y_min
        ;   Label: LAB_004d1472
    MOV dword ptr [0x02d7b428],EBP      ; 004d1476 | g_EdgeCount
    TEST EAX,EAX                        ; 004d147c
    JZ 0x004d14d4                       ; 004d147e
        ;   XREF to: 004d14d4 (CONDITIONAL_JUMP)  ; LAB_004d14d4
    MOV EDX,dword ptr [ESP + 0x10]      ; 004d1480 | g_HardwareEdgeTable
        ;   Label: LAB_004d1480
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d1484
    CMP EAX,dword ptr [EDX + 0x4]       ; 004d1488 | g_HardwareEdgeTable[0].y_max
    JL 0x004d1633                       ; 004d148b
        ;   XREF to: 004d1633 (CONDITIONAL_JUMP)  ; LAB_004d1633
    MOV ECX,dword ptr [ESP + 0xc]       ; 004d1491
    MOV EBP,dword ptr [0x02d7b428]      ; 004d1495 | g_EdgeCount
    MOV EBX,EAX                         ; 004d149b
    MOV dword ptr [EDX],0xffffffff      ; 004d149d | g_HardwareEdgeTable
    MOV EAX,0x2d7b42c                   ; 004d14a3 | g_HardwareEdgeTable
    XOR EDX,EDX                         ; 004d14a8
    TEST EBP,EBP                        ; 004d14aa
    JLE 0x004d162c                      ; 004d14ac
        ;   XREF to: 004d162c (CONDITIONAL_JUMP)  ; LAB_004d162c
    CMP EBX,dword ptr [EAX]             ; 004d14b2 | g_HardwareEdgeTable | g_HardwareEdgeTable[1].y_min
        ;   Label: LAB_004d14b2
    JNZ 0x004d1620                      ; 004d14b4
        ;   XREF to: 004d1620 (CONDITIONAL_JUMP)  ; LAB_004d1620
    CMP EAX,ECX                         ; 004d14ba
    JZ 0x004d1620                       ; 004d14bc
        ;   XREF to: 004d1620 (CONDITIONAL_JUMP)  ; LAB_004d1620
    MOV dword ptr [ESP + 0x10],EAX      ; 004d14c2 | g_HardwareEdgeTable | g_HardwareEdgeTable[1].y_min
        ;   Label: LAB_004d14c2
    MOV dword ptr [0x02d7b428],EBP      ; 004d14c6 | g_EdgeCount
    TEST EAX,EAX                        ; 004d14cc
    JNZ 0x004d1633                      ; 004d14ce
        ;   XREF to: 004d1633 (CONDITIONAL_JUMP)  ; LAB_004d1633
    MOV EBP,dword ptr [0x02d7b428]      ; 004d14d4 | g_EdgeCount
        ;   Label: LAB_004d14d4
    ADD ESP,0x14                        ; 004d14da
    POP EBP                             ; 004d14dd
    POP EDI                             ; 004d14de
    POP ESI                             ; 004d14df
    POP EBX                             ; 004d14e0
    RET                                 ; 004d14e1
    MOV ESI,dword ptr [EDI + 0x14]      ; 004d14e2
        ;   Label: LAB_004d14e2
    CMP ESI,dword ptr [EBX + 0x14]      ; 004d14e5
    JGE 0x004d14f6                      ; 004d14e8
        ;   XREF to: 004d14f6 (CONDITIONAL_JUMP)  ; LAB_004d14f6
    MOV ECX,EBX                         ; 004d14ea
    MOV EBX,EDI                         ; 004d14ec
    MOV EDI,ECX                         ; 004d14ee
    MOV ECX,EDX                         ; 004d14f0
    MOV EDX,EAX                         ; 004d14f2
    MOV EAX,ECX                         ; 004d14f4
    IMUL ECX,EBP,0x38                   ; 004d14f6
        ;   Label: LAB_004d14f6
    ADD ECX,0x2d7b42c                   ; 004d14f9 | g_HardwareEdgeTable
    MOV dword ptr [ECX],EDX             ; 004d14ff | g_HardwareEdgeTable
    MOV ESI,dword ptr [0x02d7b7ac]      ; 004d1501 | g_EdgeListMinY
    MOV dword ptr [ECX + 0x4],EAX       ; 004d1507 | g_HardwareEdgeTable[0].y_max
    CMP EDX,ESI                         ; 004d150a
    JGE 0x004d1514                      ; 004d150c
        ;   XREF to: 004d1514 (CONDITIONAL_JUMP)  ; LAB_004d1514
    MOV dword ptr [0x02d7b7ac],EDX      ; 004d150e | g_EdgeListMinY
    CMP EAX,dword ptr [0x02d7b7b0]      ; 004d1514 | g_EdgeListMaxY
        ;   Label: LAB_004d1514
    JLE 0x004d1521                      ; 004d151a
        ;   XREF to: 004d1521 (CONDITIONAL_JUMP)  ; LAB_004d1521
    MOV [0x02d7b7b0],EAX                ; 004d151c | g_EdgeListMaxY
    MOV EAX,dword ptr [EBX + 0x10]      ; 004d1521
        ;   Label: LAB_004d1521
    MOV dword ptr [ECX + 0x8],EAX       ; 004d1524 | g_HardwareEdgeTable[0].x_current
    MOV EAX,dword ptr [EBX + 0x18]      ; 004d1527
    MOV dword ptr [ECX + 0x18],EAX      ; 004d152a | g_HardwareEdgeTable[0].u_current
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004d152d
    MOV dword ptr [ECX + 0x20],EAX      ; 004d1530 | g_HardwareEdgeTable[0].v_current
    MOV ESI,dword ptr [EDI + 0x14]      ; 004d1533
    SUB ESI,dword ptr [EBX + 0x14]      ; 004d1536
    CMP ESI,0x10000                     ; 004d1539
    JNC 0x004d15d7                      ; 004d153f
        ;   XREF to: 004d15d7 (CONDITIONAL_JUMP)  ; LAB_004d15d7
    XOR ESI,ESI                         ; 004d1545
    MOV EAX,dword ptr [EDI + 0x10]      ; 004d1547
        ;   Label: LAB_004d1547
    MOV EDX,dword ptr [EBX + 0x10]      ; 004d154a
    SUB EAX,EDX                         ; 004d154d
    MOV EDX,EAX                         ; 004d154f
    MOV EAX,ESI                         ; 004d1551
    MOV dword ptr [0x02d7b428],EBP      ; 004d1553 | g_EdgeCount
    IMUL EDX                            ; 004d1559
    SHRD EAX,EDX,0x10                   ; 004d155b
    MOV dword ptr [ECX + 0xc],EAX       ; 004d155f | g_HardwareEdgeTable[0].x_gradient
    MOV EAX,dword ptr [EDI + 0x18]      ; 004d1562
    MOV EDX,dword ptr [EBX + 0x18]      ; 004d1565
    SUB EAX,EDX                         ; 004d1568
    MOV EDX,EAX                         ; 004d156a
    MOV EAX,ESI                         ; 004d156c
    IMUL EDX                            ; 004d156e
    SHRD EAX,EDX,0x10                   ; 004d1570
    MOV dword ptr [ECX + 0x1c],EAX      ; 004d1574 | g_HardwareEdgeTable[0].u_gradient
    MOV EDX,dword ptr [EDI + 0x1c]      ; 004d1577
    MOV EDI,dword ptr [EBX + 0x1c]      ; 004d157a
    MOV EAX,ESI                         ; 004d157d
    SUB EDX,EDI                         ; 004d157f
    IMUL EDX                            ; 004d1581
    SHRD EAX,EDX,0x10                   ; 004d1583
    MOV dword ptr [ECX + 0x24],EAX      ; 004d1587 | g_HardwareEdgeTable[0].v_gradient
    MOV EBX,dword ptr [EBX + 0x14]      ; 004d158a
    AND EBX,0xffff                      ; 004d158d
    XOR BX,0xffff                       ; 004d1593
    MOV EDX,dword ptr [ECX + 0xc]       ; 004d1597 | g_HardwareEdgeTable[0].x_gradient
    MOV EAX,EBX                         ; 004d159a
    IMUL EDX                            ; 004d159c
    SHRD EAX,EDX,0x10                   ; 004d159e
    ADD dword ptr [ECX + 0x8],EAX       ; 004d15a2 | g_HardwareEdgeTable[0].x_current
    MOV EAX,EBX                         ; 004d15a5
    MOV EDX,dword ptr [ECX + 0x1c]      ; 004d15a7 | g_HardwareEdgeTable[0].u_gradient
    IMUL EDX                            ; 004d15aa
    SHRD EAX,EDX,0x10                   ; 004d15ac
    MOV ESI,dword ptr [ECX + 0x18]      ; 004d15b0 | g_HardwareEdgeTable[0].u_current
    MOV EDX,dword ptr [ECX + 0x24]      ; 004d15b3 | g_HardwareEdgeTable[0].v_gradient
    ADD ESI,EAX                         ; 004d15b6
    MOV EAX,EBX                         ; 004d15b8
    MOV dword ptr [ECX + 0x18],ESI      ; 004d15ba | g_HardwareEdgeTable[0].u_current
    IMUL EDX                            ; 004d15bd
    SHRD EAX,EDX,0x10                   ; 004d15bf
    MOV EDI,dword ptr [ECX + 0x20]      ; 004d15c3 | g_HardwareEdgeTable[0].v_current
    MOV EBP,dword ptr [0x02d7b428]      ; 004d15c6 | g_EdgeCount
    ADD EDI,EAX                         ; 004d15cc
    INC EBP                             ; 004d15ce
    MOV dword ptr [ECX + 0x20],EDI      ; 004d15cf | g_HardwareEdgeTable[0].v_current
    JMP 0x004d13a1                      ; 004d15d2
        ;   XREF to: 004d13a1 (UNCONDITIONAL_JUMP)  ; LAB_004d13a1
    MOV EAX,0xffffffff                  ; 004d15d7
        ;   Label: LAB_004d15d7
    XOR EDX,EDX                         ; 004d15dc
    DIV ESI                             ; 004d15de
    MOV ESI,EAX                         ; 004d15e0
    JMP 0x004d1547                      ; 004d15e2
        ;   XREF to: 004d1547 (UNCONDITIONAL_JUMP)  ; LAB_004d1547
    INC EDX                             ; 004d15e7
        ;   Label: LAB_004d15e7
    ADD EAX,0x38                        ; 004d15e8
    CMP EDX,EBP                         ; 004d15eb
    JL 0x004d13d0                       ; 004d15ed
        ;   XREF to: 004d13d0 (CONDITIONAL_JUMP)  ; LAB_004d13d0
    XOR EAX,EAX                         ; 004d15f3
        ;   Label: LAB_004d15f3
    JMP 0x004d13e0                      ; 004d15f5
        ;   XREF to: 004d13e0 (UNCONDITIONAL_JUMP)  ; LAB_004d13e0
    INC EDX                             ; 004d15fa
        ;   Label: LAB_004d15fa
    ADD EAX,0x38                        ; 004d15fb
    CMP EDX,EBP                         ; 004d15fe
    JL 0x004d1409                       ; 004d1600
        ;   XREF to: 004d1409 (CONDITIONAL_JUMP)  ; LAB_004d1409
    XOR EAX,EAX                         ; 004d1606
        ;   Label: LAB_004d1606
    JMP 0x004d1419                      ; 004d1608
        ;   XREF to: 004d1419 (UNCONDITIONAL_JUMP)  ; LAB_004d1419
    INC EDX                             ; 004d160d
        ;   Label: LAB_004d160d
    ADD EAX,0x38                        ; 004d160e
    CMP EDX,EBP                         ; 004d1611
    JL 0x004d1462                       ; 004d1613
        ;   XREF to: 004d1462 (CONDITIONAL_JUMP)  ; LAB_004d1462
    XOR EAX,EAX                         ; 004d1619
        ;   Label: LAB_004d1619
    JMP 0x004d1472                      ; 004d161b
        ;   XREF to: 004d1472 (UNCONDITIONAL_JUMP)  ; LAB_004d1472
    INC EDX                             ; 004d1620
        ;   Label: LAB_004d1620
    ADD EAX,0x38                        ; 004d1621 | g_HardwareEdgeTable[1].y_min
    CMP EDX,EBP                         ; 004d1624
    JL 0x004d14b2                       ; 004d1626
        ;   XREF to: 004d14b2 (CONDITIONAL_JUMP)  ; LAB_004d14b2
    XOR EAX,EAX                         ; 004d162c
        ;   Label: LAB_004d162c
    JMP 0x004d14c2                      ; 004d162e
        ;   XREF to: 004d14c2 (UNCONDITIONAL_JUMP)  ; LAB_004d14c2
    MOV EDI,dword ptr [ESP + 0x10]      ; 004d1633
        ;   Label: LAB_004d1633
    MOV ESI,dword ptr [ESP + 0xc]       ; 004d1637
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d163b
    CALL wincore_windll.cpp_renderScanline_FUN_005b5710 ; 004d163f
        ;   XREF to: 005b5710 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_renderScanline_FUN_005b5710(SSoftwareEdge * left, SSoftwareEdge * right, int scanline_y)
    MOV EAX,dword ptr [ESP + 0xc]       ; 004d1644
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d1648
    MOV EAX,dword ptr [EAX + 0xc]       ; 004d164c
    MOV EDI,dword ptr [EDX + 0x8]       ; 004d164f
    MOV ECX,dword ptr [EDX + 0x18]      ; 004d1652
    MOV EBX,dword ptr [EDX + 0x20]      ; 004d1655
    ADD EDI,EAX                         ; 004d1658
    MOV EAX,dword ptr [EDX + 0x1c]      ; 004d165a
    MOV dword ptr [EDX + 0x8],EDI       ; 004d165d
    ADD ECX,EAX                         ; 004d1660
    MOV EAX,dword ptr [EDX + 0x24]      ; 004d1662
    MOV dword ptr [EDX + 0x18],ECX      ; 004d1665
    ADD EBX,EAX                         ; 004d1668
    MOV EAX,dword ptr [ESP + 0x10]      ; 004d166a
    MOV dword ptr [EDX + 0x20],EBX      ; 004d166e
    MOV EDX,dword ptr [ESP + 0x10]      ; 004d1671
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d1675
    MOV EAX,dword ptr [EAX + 0xc]       ; 004d1679
    INC EBX                             ; 004d167c
    MOV ESI,dword ptr [EDX + 0x8]       ; 004d167d
    MOV EDI,dword ptr [EDX + 0x18]      ; 004d1680
    MOV ECX,dword ptr [EDX + 0x20]      ; 004d1683
    ADD ESI,EAX                         ; 004d1686
    MOV EAX,dword ptr [EDX + 0x1c]      ; 004d1688
    MOV dword ptr [EDX + 0x8],ESI       ; 004d168b
    ADD EDI,EAX                         ; 004d168e
    MOV EAX,dword ptr [EDX + 0x24]      ; 004d1690
    MOV dword ptr [EDX + 0x18],EDI      ; 004d1693
    ADD ECX,EAX                         ; 004d1696
    MOV dword ptr [ESP + 0x8],EBX       ; 004d1698
    MOV dword ptr [EDX + 0x20],ECX      ; 004d169c
    JMP 0x004d1434                      ; 004d169f
        ;   XREF to: 004d1434 (UNCONDITIONAL_JUMP)  ; LAB_004d1434

