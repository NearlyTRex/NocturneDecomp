; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004a1480(void)
;
;
; XREF[5]:
;   core_event.cpp_FUN_0048c2e0 at 0048f4ba
;   core_fire.cpp_CFireEffect_load_FUN_004a4030 at 004a4051
;   core_fire.cpp_FUN_004a1460 at 004a1466
;   core_game.cpp_FUN_004b7f90 at 004b866b
;   core_game.cpp_FUN_004bdfb0 at 004be6dd
;
; Referenced Globals:
;   undefined4 DAT_01c74e9c
;   undefined4 DAT_01c74ea0
;   undefined4 DAT_01c74ecc
;   undefined4 DAT_01c8aea0
;   undefined4 DAT_01c8aea4
;   undefined4 DAT_01c8eea8
;   undefined4 DAT_01c8eeac
;   undefined4 DAT_01cb4eb0
;   undefined4 g_SparkPool[0].field36_0x24
;   undefined4 g_SparkPool[1].field36_0x24
;   undefined4 DAT_01cba2b4
;   undefined4 CFirefly_ARRAY_01cba2b8[0].field36_0x24
;   undefined4 CFirefly_ARRAY_01cba2b8[1].field36_0x24
;   undefined4 DAT_01cbb9bc
;   undefined4 DAT_01cbba18
;   ... and 31 more
;
; Called Functions:
;   core_fire.cpp_CExplosion_ctor_FUN_0049c670
;   core_fire.cpp_CLightningBolt_reset_FUN_0049f410
;   core_fire.cpp_CToss_reset_FUN_0049cec0
;   core_fire.cpp_CTrail_reset_FUN_004a05d0
;   core_fire.cpp_FUN_00496d50
;   core_fire.cpp_FUN_0049d570
;   core_fire.cpp_FUN_004a0470
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1480
        ;   Label: core_fire.cpp_FUN_004a1480
    PUSH ESI                            ; 004a1481
    PUSH EBP                            ; 004a1482
    MOV EBX,0x1c74ea0                   ; 004a1483
    XOR EDX,EDX                         ; 004a1488
    LEA ESI,[EBX + 0x16000]             ; 004a148a
    MOV dword ptr [0x01c74e9c],EDX      ; 004a1490 | DAT_01c74e9c
    PUSH EBX                            ; 004a1496 | DAT_01c74ea0 | DAT_01c74ecc
        ;   Label: LAB_004a1496
    CALL core_fire.cpp_FUN_00496d50     ; 004a1497
        ;   XREF to: 00496d50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_00496d50(CSmokeParticle * this_ptr)
    ADD EBX,0x2c                        ; 004a149c
    ADD ESP,0x4                         ; 004a149f
    CMP EBX,ESI                         ; 004a14a2
    JNZ 0x004a1496                      ; 004a14a4
        ;   XREF to: 004a1496 (CONDITIONAL_JUMP)  ; LAB_004a1496
    XOR ECX,ECX                         ; 004a14a6
    XOR EBX,ESI                         ; 004a14a8
    MOV dword ptr [0x01c8aea4],ECX      ; 004a14aa | DAT_01c8aea4
    MOV dword ptr [0x01c8aea0],EBX      ; 004a14b0 | DAT_01c8aea0
    MOV EBX,0x1cb4eb4                   ; 004a14b6
    MOV dword ptr [0x01cb4eb0],ECX      ; 004a14bb | DAT_01cb4eb0
    LEA EAX,[EBX + 0x5400]              ; 004a14c1
    ADD EBX,0x54                        ; 004a14c7
        ;   Label: LAB_004a14c7
    MOV dword ptr [EBX + -0x30],0x0     ; 004a14ca | g_SparkPool[0].field36_0x24 | g_SparkPool[1].field36_0x24
    CMP EBX,EAX                         ; 004a14d1
    JNZ 0x004a14c7                      ; 004a14d3
        ;   XREF to: 004a14c7 (CONDITIONAL_JUMP)  ; LAB_004a14c7
    MOV EBX,0x1cba2b8                   ; 004a14d5
    LEA EAX,[EBX + 0x1700]              ; 004a14da
    ADD EBX,0x5c                        ; 004a14e0
        ;   Label: LAB_004a14e0
    MOV dword ptr [EBX + -0x38],0x0     ; 004a14e3 | CFirefly_ARRAY_01cba2b8[0].field36_0x24 | CFirefly_ARRAY_01cba2b8[1].field36_0x24
    CMP EBX,EAX                         ; 004a14ea
    JNZ 0x004a14e0                      ; 004a14ec
        ;   XREF to: 004a14e0 (CONDITIONAL_JUMP)  ; LAB_004a14e0
    MOV EBX,0x1cbb9bc                   ; 004a14ee
    LEA EAX,[EBX + 0x730]               ; 004a14f3
    MOV dword ptr [EBX],0x0             ; 004a14f9 | DAT_01cbb9bc | DAT_01cbba18
        ;   Label: LAB_004a14f9
    ADD EBX,0x5c                        ; 004a14ff
    CMP EBX,EAX                         ; 004a1502
    JNZ 0x004a14f9                      ; 004a1504
        ;   XREF to: 004a14f9 (CONDITIONAL_JUMP)  ; LAB_004a14f9
    PUSH EDI                            ; 004a1506
    XOR EDI,EDI                         ; 004a1507
    MOV EBX,0x1cbc0f0                   ; 004a1509
    MOV dword ptr [0x01c8eea8],EDI      ; 004a150e | DAT_01c8eea8
    MOV dword ptr [0x01c8eeac],EDI      ; 004a1514 | DAT_01c8eeac
    MOV dword ptr [0x01cbc0ec],EDI      ; 004a151a | DAT_01cbc0ec
    LEA EAX,[EBX + 0x33c20]             ; 004a1520
    ADD EBX,0xd4                        ; 004a1526
        ;   Label: LAB_004a1526
    MOV dword ptr [EBX + 0xffffff50],0x0 ; 004a152c | CGlassParticle_ARRAY_01cbc0f0[0].field36_0x24 | CGlassParticle_ARRAY_01cbc0f0[1].field36_0x24
    CMP EBX,EAX                         ; 004a1536
    JNZ 0x004a1526                      ; 004a1538
        ;   XREF to: 004a1526 (CONDITIONAL_JUMP)  ; LAB_004a1526
    MOV EBX,0x1cefd14                   ; 004a153a
    LEA EAX,[EBX + 0x168]               ; 004a153f
    ADD EBX,0x24                        ; 004a1545
        ;   Label: LAB_004a1545
    MOV dword ptr [EBX + -0x4],0x0      ; 004a1548 | DAT_01cefd34 | DAT_01cefd58
    CMP EBX,EAX                         ; 004a154f
    JNZ 0x004a1545                      ; 004a1551
        ;   XREF to: 004a1545 (CONDITIONAL_JUMP)  ; LAB_004a1545
    XOR EDX,EDX                         ; 004a1553
    MOV EBX,0x1cefe80                   ; 004a1555
    MOV dword ptr [0x01cefe7c],EDX      ; 004a155a | DAT_01cefe7c
    LEA EAX,[EBX + 0x2900]              ; 004a1560
    ADD EBX,0xa4                        ; 004a1566
        ;   Label: LAB_004a1566
    MOV dword ptr [EBX + -0x80],0x0     ; 004a156c | g_FireballPool[0].field36_0x24 | g_FireballPool[1].field36_0x24
    CMP EBX,EAX                         ; 004a1573
    JNZ 0x004a1566                      ; 004a1575
        ;   XREF to: 004a1566 (CONDITIONAL_JUMP)  ; LAB_004a1566
    XOR ECX,ECX                         ; 004a1577
    MOV EBX,0x1cf2784                   ; 004a1579
    MOV dword ptr [0x01cf2780],ECX      ; 004a157e | DAT_01cf2780
    LEA EAX,[EBX + 0x1400]              ; 004a1584
    ADD EBX,0x50                        ; 004a158a
        ;   Label: LAB_004a158a
    MOV dword ptr [EBX + -0x2c],0x0     ; 004a158d | g_RockPool[0].field36_0x24 | g_RockPool[1].field36_0x24
    CMP EBX,EAX                         ; 004a1594
    JNZ 0x004a158a                      ; 004a1596
        ;   XREF to: 004a158a (CONDITIONAL_JUMP)  ; LAB_004a158a
    XOR EBX,EAX                         ; 004a1598
    MOV dword ptr [0x01cf3b84],EBX      ; 004a159a | DAT_01cf3b84
    MOV EBX,0x1cf3b88                   ; 004a15a0
    LEA EAX,[EBX + 0x1500]              ; 004a15a5
    ADD EBX,0x54                        ; 004a15ab
        ;   Label: LAB_004a15ab
    MOV dword ptr [EBX + -0x30],0x0     ; 004a15ae | CLeaf_ARRAY_01cf3b88[0].field36_0x24 | CLeaf_ARRAY_01cf3b88[1].field36_0x24
    CMP EBX,EAX                         ; 004a15b5
    JNZ 0x004a15ab                      ; 004a15b7
        ;   XREF to: 004a15ab (CONDITIONAL_JUMP)  ; LAB_004a15ab
    XOR ESI,ESI                         ; 004a15b9
    MOV EBX,0x1cba2b8                   ; 004a15bb
    MOV dword ptr [0x01cba2b4],ESI      ; 004a15c0 | DAT_01cba2b4
    LEA EAX,[EBX + 0x1700]              ; 004a15c6
    ADD EBX,0x5c                        ; 004a15cc
        ;   Label: LAB_004a15cc
    MOV dword ptr [EBX + -0x38],0x0     ; 004a15cf | CFirefly_ARRAY_01cba2b8[0].field36_0x24 | CFirefly_ARRAY_01cba2b8[1].field36_0x24
    CMP EBX,EAX                         ; 004a15d6
    JNZ 0x004a15cc                      ; 004a15d8
        ;   XREF to: 004a15cc (CONDITIONAL_JUMP)  ; LAB_004a15cc
    MOV EBX,0x1cf6090                   ; 004a15da
    XOR EDI,EDI                         ; 004a15df
    LEA ESI,[EBX + 0x140]               ; 004a15e1
    MOV dword ptr [0x01cf608c],EDI      ; 004a15e7 | DAT_01cf608c
    PUSH EBX                            ; 004a15ed
        ;   Label: LAB_004a15ed
    CALL core_fire.cpp_CExplosion_ctor_FUN_0049c670 ; 004a15ee
        ;   XREF to: 0049c670 (UNCONDITIONAL_CALL)  ; CExplosion * core_fire.cpp_CExplosion_ctor_FUN_0049c670(CExplosion * this_ptr)
    ADD EBX,0x20                        ; 004a15f3
    ADD ESP,0x4                         ; 004a15f6
    CMP EBX,ESI                         ; 004a15f9
    JNZ 0x004a15ed                      ; 004a15fb
        ;   XREF to: 004a15ed (CONDITIONAL_JUMP)  ; LAB_004a15ed
    MOV EBX,0x1cf61d4                   ; 004a15fd
    XOR EBP,EBP                         ; 004a1602
    LEA ESI,[EBX + 0x4e20]              ; 004a1604
    MOV dword ptr [0x01cf61d0],EBP      ; 004a160a | DAT_01cf61d0
    PUSH EBX                            ; 004a1610
        ;   Label: LAB_004a1610
    CALL core_fire.cpp_CToss_reset_FUN_0049cec0 ; 004a1611
        ;   XREF to: 0049cec0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CToss_reset_FUN_0049cec0(CToss * this_ptr)
    ADD EBX,0x3e8                       ; 004a1616
    ADD ESP,0x4                         ; 004a161c
    CMP EBX,ESI                         ; 004a161f
    JNZ 0x004a1610                      ; 004a1621
        ;   XREF to: 004a1610 (CONDITIONAL_JUMP)  ; LAB_004a1610
    MOV EBX,0x1cfaff8                   ; 004a1623
    XOR EAX,EAX                         ; 004a1628
    LEA ESI,[EBX + 0x8c0]               ; 004a162a
    MOV [0x01cfaff4],EAX                ; 004a1630 | DAT_01cfaff4
    PUSH EBX                            ; 004a1635
        ;   Label: LAB_004a1635
    CALL core_fire.cpp_FUN_0049d570     ; 004a1636
        ;   XREF to: 0049d570 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_0049d570()
    ADD EBX,0x70                        ; 004a163b
    ADD ESP,0x4                         ; 004a163e
    CMP EBX,ESI                         ; 004a1641
    JNZ 0x004a1635                      ; 004a1643
        ;   XREF to: 004a1635 (CONDITIONAL_JUMP)  ; LAB_004a1635
    MOV EBX,0x1cfb8bc                   ; 004a1645
    XOR EDX,EDX                         ; 004a164a
    LEA ESI,[EBX + 0x55f0]              ; 004a164c
    MOV dword ptr [0x01cfb8b8],EDX      ; 004a1652 | DAT_01cfb8b8
    PUSH EBX                            ; 004a1658
        ;   Label: LAB_004a1658
    CALL core_fire.cpp_CExplosion_ctor_FUN_0049c670 ; 004a1659
        ;   XREF to: 0049c670 (UNCONDITIONAL_CALL)  ; CExplosion * core_fire.cpp_CExplosion_ctor_FUN_0049c670(CExplosion * this_ptr)
    ADD EBX,0x2c                        ; 004a165e
    ADD ESP,0x4                         ; 004a1661
    CMP EBX,ESI                         ; 004a1664
    JNZ 0x004a1658                      ; 004a1666
        ;   XREF to: 004a1658 (CONDITIONAL_JUMP)  ; LAB_004a1658
    MOV EBX,0x1d00eb0                   ; 004a1668
    XOR ECX,ECX                         ; 004a166d
    LEA ESI,[EBX + 0xc00]               ; 004a166f
    MOV dword ptr [0x01d00eac],ECX      ; 004a1675 | DAT_01d00eac
    PUSH EBX                            ; 004a167b
        ;   Label: LAB_004a167b
    CALL core_fire.cpp_CLightningBolt_reset_FUN_0049f410 ; 004a167c
        ;   XREF to: 0049f410 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CLightningBolt_reset_FUN_0049f410(CLightningBolt * this_ptr)
    ADD EBX,0x30                        ; 004a1681
    ADD ESP,0x4                         ; 004a1684
    CMP EBX,ESI                         ; 004a1687
    JNZ 0x004a167b                      ; 004a1689
        ;   XREF to: 004a167b (CONDITIONAL_JUMP)  ; LAB_004a167b
    XOR EBX,ESI                         ; 004a168b
    MOV dword ptr [0x01d01ab0],EBX      ; 004a168d | DAT_01d01ab0
    MOV EBX,0x1d01ab4                   ; 004a1693
    LEA ESI,[EBX + 0xe10]               ; 004a1698
    PUSH EBX                            ; 004a169e
        ;   Label: LAB_004a169e
    CALL core_fire.cpp_CTrail_reset_FUN_004a05d0 ; 004a169f
        ;   XREF to: 004a05d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CTrail_reset_FUN_004a05d0(CTrail * this_ptr)
    ADD EBX,0x24                        ; 004a16a4
    ADD ESP,0x4                         ; 004a16a7
    CMP EBX,ESI                         ; 004a16aa
    JNZ 0x004a169e                      ; 004a16ac
        ;   XREF to: 004a169e (CONDITIONAL_JUMP)  ; LAB_004a169e
    XOR ESI,ESI                         ; 004a16ae
    MOV EBX,0x1d028c8                   ; 004a16b0
    MOV dword ptr [0x01d028c4],ESI      ; 004a16b5 | DAT_01d028c4
    LEA EAX,[EBX + 0x12c0]              ; 004a16bb
    ADD EBX,0x60                        ; 004a16c1
        ;   Label: LAB_004a16c1
    MOV dword ptr [EBX + -0x3c],0x0     ; 004a16c4 | g_ShellPool[0].field36_0x24 | g_ShellPool[1].field36_0x24
    CMP EBX,EAX                         ; 004a16cb
    JNZ 0x004a16c1                      ; 004a16cd
        ;   XREF to: 004a16c1 (CONDITIONAL_JUMP)  ; LAB_004a16c1
    XOR EDI,EDI                         ; 004a16cf
    MOV EBX,0x1d03b8c                   ; 004a16d1
    MOV dword ptr [0x01d03b88],EDI      ; 004a16d6 | DAT_01d03b88
    LEA EAX,[EBX + 0x4000]              ; 004a16dc
    POP EDI                             ; 004a16e2
    ADD EBX,0x40                        ; 004a16e3
        ;   Label: LAB_004a16e3
    MOV dword ptr [EBX + -0x1c],0x0     ; 004a16e6 | g_PopcornPool[0].field36_0x24 | g_PopcornPool[1].field36_0x24
    CMP EBX,EAX                         ; 004a16ed
    JNZ 0x004a16e3                      ; 004a16ef
        ;   XREF to: 004a16e3 (CONDITIONAL_JUMP)  ; LAB_004a16e3
    XOR EBP,EBP                         ; 004a16f1
    MOV EBX,0x1d07b90                   ; 004a16f3
    MOV dword ptr [0x01d07b8c],EBP      ; 004a16f8 | DAT_01d07b8c
    LEA EAX,[EBX + 0x4000]              ; 004a16fe
    ADD EBX,0x40                        ; 004a1704
        ;   Label: LAB_004a1704
    MOV dword ptr [EBX + -0x1c],0x0     ; 004a1707 | g_RainDropPool[0].field36_0x24 | g_RainDropPool[1].field36_0x24
    CMP EBX,EAX                         ; 004a170e
    JNZ 0x004a1704                      ; 004a1710
        ;   XREF to: 004a1704 (CONDITIONAL_JUMP)  ; LAB_004a1704
    MOV EBX,0x1d0bb94                   ; 004a1712
    XOR EAX,EAX                         ; 004a1717
    LEA ESI,[EBX + 0x12e8]              ; 004a1719
    MOV [0x01d0bb90],EAX                ; 004a171f | DAT_01d0bb90
    PUSH EBX                            ; 004a1724
        ;   Label: LAB_004a1724
    CALL core_fire.cpp_CLightningBolt_reset_FUN_0049f410 ; 004a1725
        ;   XREF to: 0049f410 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CLightningBolt_reset_FUN_0049f410(CLightningBolt * this_ptr)
    ADD EBX,0x1e4                       ; 004a172a
    ADD ESP,0x4                         ; 004a1730
    CMP EBX,ESI                         ; 004a1733
    JNZ 0x004a1724                      ; 004a1735
        ;   XREF to: 004a1724 (CONDITIONAL_JUMP)  ; LAB_004a1724
    MOV EBX,0x1d0ce80                   ; 004a1737
    XOR EDX,EDX                         ; 004a173c
    LEA ESI,[EBX + 0x30]                ; 004a173e
    MOV dword ptr [0x01d0ce7c],EDX      ; 004a1741 | DAT_01d0ce7c
    PUSH EBX                            ; 004a1747
        ;   Label: LAB_004a1747
    CALL core_fire.cpp_FUN_004a0470     ; 004a1748
        ;   XREF to: 004a0470 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a0470()
    ADD EBX,0xc                         ; 004a174d
    ADD ESP,0x4                         ; 004a1750
    CMP EBX,ESI                         ; 004a1753
    JNZ 0x004a1747                      ; 004a1755
        ;   XREF to: 004a1747 (CONDITIONAL_JUMP)  ; LAB_004a1747
    POP EBP                             ; 004a1757
    POP ESI                             ; 004a1758
    POP EBX                             ; 004a1759
    RET                                 ; 004a175a

