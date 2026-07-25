; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_inv_cpp_CInventory_select_FUN_004c1580(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined1       Stack[-0x114]:1  local_114
; undefined1       Stack[-0x113]:1  local_113
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004b5b00 at 004b5b50
;   core_inv.cpp_CInventory_autoUseHealthItem_FUN_004c3350 at 004c33d4
;
; Referenced Globals:
;   TerminatedCString s_CAmmo_00587360
;   TerminatedCString s_core_inv_cpp_00587366
;   TerminatedCString s_CInventory_select_Catch_00587376
;   TerminatedCString s_CWeapon_00587394
;   TerminatedCString s_CHealthItem_0058739c
;   TerminatedCString s_core_inv_cpp_005873a8
;   TerminatedCString s_CInventory_select_Catch_005873b8
;   TerminatedCString s_You_have_used_005873d6
;   TerminatedCString s_anon_005873e7
;   TerminatedCString s_CGasMask_005873e9
;   TerminatedCString s_CBoxActor_005873f2
;   double DOUBLE_00587401 = 98
;   undefined4 DAT_005b7650
;   undefined4 DAT_005b9354
;   undefined4 CDemonActorType_007641bc.name_hash
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_event.cpp_CEventList_executeCommands_FUN_0047ab70
;   core_game.cpp_CGame_displayMessage_FUN_0049aa30
;   core_health.cpp_CHealthItem_useItem_FUN_004b43f0
;   core_inv.cpp_CInventory_removeItem_FUN_004c07b0
;   core_inv.cpp_CInventory_selectWeapon_FUN_004c0850
;   core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004c1b90
;   core_inv.cpp_getItemDisplayName_FUN_004beca0
;   FUN_004c8440
;   support_newmsg.cpp_getLocalizedString_FUN_004ee370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1580
        ;   Label: core_inv.cpp_CInventory_select_FUN_004c1580
    PUSH ESI                            ; 004c1581
    PUSH EDI                            ; 004c1582
    PUSH EBP                            ; 004c1583
    SUB ESP,0x104                       ; 004c1584
    MOV EBP,dword ptr [ESP + 0x118]     ; 004c158a
    MOV EBX,dword ptr [ESP + 0x11c]     ; 004c1591
    PUSH 0x587360                       ; 004c1598 | = "CAmmo"
    PUSH EBX                            ; 004c159d
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c159e
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c15a3
    TEST EAX,EAX                        ; 004c15a6
    JZ 0x004c1600                       ; 004c15a8
        ;   XREF to: 004c1600 (CONDITIONAL_JUMP)  ; LAB_004c1600
    MOV EDX,dword ptr [0x007641f4]      ; 004c15aa | CDemonActorType_007641bc.name_hash
    PUSH EDX                            ; 004c15b0
    PUSH EBX                            ; 004c15b1
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c15b2
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004c15b7
    MOV EBX,EAX                         ; 004c15ba
    TEST EAX,EAX                        ; 004c15bc
    JNZ 0x004c15e3                      ; 004c15be
        ;   XREF to: 004c15e3 (CONDITIONAL_JUMP)  ; LAB_004c15e3
    MOV ECX,0x587366                    ; 004c15c0 | = "..\\core\\inv.cpp"
    MOV ESI,0x5c3                       ; 004c15c5
    PUSH 0x587376                       ; 004c15ca | = "CInventory::select - Catch 22"
    MOV dword ptr [0x01cc4800],ECX      ; 004c15cf | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004c15d5 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004c15db
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004c15e0
    MOV EDI,dword ptr [EBX + 0x310]     ; 004c15e3
        ;   Label: LAB_004c15e3
    PUSH EDI                            ; 004c15e9
    PUSH EBP                            ; 004c15ea
    CALL core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004c1b90 ; 004c15eb
        ;   XREF to: 004c1b90 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004c1b90()
    ADD ESP,0x8                         ; 004c15f0
    XOR EAX,EAX                         ; 004c15f3
        ;   Label: LAB_004c15f3
    ADD ESP,0x104                       ; 004c15f5
    POP EBP                             ; 004c15fb
    POP EDI                             ; 004c15fc
    POP ESI                             ; 004c15fd
    POP EBX                             ; 004c15fe
    RET                                 ; 004c15ff
    PUSH 0x587394                       ; 004c1600 | = "CWeapon"
        ;   Label: LAB_004c1600
    PUSH EBX                            ; 004c1605
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c1606
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c160b
    TEST EAX,EAX                        ; 004c160e
    JNZ 0x004c1696                      ; 004c1610
        ;   XREF to: 004c1696 (CONDITIONAL_JUMP)  ; LAB_004c1696
    PUSH 0x58739c                       ; 004c1616 | = "CHealthItem"
    PUSH EBX                            ; 004c161b
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c161c
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c1621
    TEST EAX,EAX                        ; 004c1624
    JZ 0x004c1796                       ; 004c1626
        ;   XREF to: 004c1796 (CONDITIONAL_JUMP)  ; LAB_004c1796
    MOV EAX,[0x01cae0d0]                ; 004c162c | DAT_01cae0d0
    PUSH EAX                            ; 004c1631
    PUSH EBX                            ; 004c1632
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c1633
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004c1638
    MOV dword ptr [ESP + 0x100],EAX     ; 004c163b
    TEST EAX,EAX                        ; 004c1642
    JNZ 0x004c1669                      ; 004c1644
        ;   XREF to: 004c1669 (CONDITIONAL_JUMP)  ; LAB_004c1669
    MOV EDX,0x5873a8                    ; 004c1646 | = "..\\core\\inv.cpp"
    MOV ECX,0x5c9                       ; 004c164b
    PUSH 0x5873b8                       ; 004c1650 | = "CInventory::select - Catch 22"
    MOV dword ptr [0x01cc4800],EDX      ; 004c1655 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004c165b | DAT_01cc4804
    CALL FUN_004c8440                   ; 004c1661
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004c1666
    MOV EAX,[0x01cae0e8]                ; 004c1669 | DAT_01cae0e8
        ;   Label: LAB_004c1669
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004c166e
    FLD float ptr [EAX + 0x2434]        ; 004c1675
    FCOMP double ptr [0x00587401]       ; 004c167b | DOUBLE_00587401
    FNSTSW AX                           ; 004c1681
    SAHF                                ; 004c1683
    JBE 0x004c16b1                      ; 004c1684
        ;   XREF to: 004c16b1 (CONDITIONAL_JUMP)  ; LAB_004c16b1
    MOV EAX,0x1                         ; 004c1686
    ADD ESP,0x104                       ; 004c168b
    POP EBP                             ; 004c1691
    POP EDI                             ; 004c1692
    POP ESI                             ; 004c1693
    POP EBX                             ; 004c1694
    RET                                 ; 004c1695
    PUSH 0x1                            ; 004c1696
        ;   Label: LAB_004c1696
    PUSH 0x5                            ; 004c1698
    PUSH EBX                            ; 004c169a
    PUSH EBP                            ; 004c169b
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004c0850 ; 004c169c
        ;   XREF to: 004c0850 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_selectWeapon_FUN_004c0850()
    ADD ESP,0x10                        ; 004c16a1
    XOR EAX,EAX                         ; 004c16a4
    ADD ESP,0x104                       ; 004c16a6
    POP EBP                             ; 004c16ac
    POP EDI                             ; 004c16ad
    POP ESI                             ; 004c16ae
    POP EBX                             ; 004c16af
    RET                                 ; 004c16b0
    PUSH 0x5873d6                       ; 004c16b1 | = "You have used : "
        ;   Label: LAB_004c16b1
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004c16b6
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004c16bb
    MOV EDI,ESP                         ; 004c16be
    MOV ESI,EAX                         ; 004c16c0
    PUSH EDI                            ; 004c16c2
    MOV AL,byte ptr [ESI]               ; 004c16c3
        ;   Label: LAB_004c16c3
    MOV byte ptr [EDI],AL               ; 004c16c5
    CMP AL,0x0                          ; 004c16c7
    JZ 0x004c16db                       ; 004c16c9
        ;   XREF to: 004c16db (CONDITIONAL_JUMP)  ; LAB_004c16db
    MOV AL,byte ptr [ESI + 0x1]         ; 004c16cb
    ADD ESI,0x2                         ; 004c16ce
    MOV byte ptr [EDI + 0x1],AL         ; 004c16d1
    ADD EDI,0x2                         ; 004c16d4
    CMP AL,0x0                          ; 004c16d7
    JNZ 0x004c16c3                      ; 004c16d9
        ;   XREF to: 004c16c3 (CONDITIONAL_JUMP)  ; LAB_004c16c3
    POP EDI                             ; 004c16db
        ;   Label: LAB_004c16db
    PUSH EBX                            ; 004c16dc
    CALL core_inv.cpp_getItemDisplayName_FUN_004beca0 ; 004c16dd
        ;   XREF to: 004beca0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemDisplayName_FUN_004beca0()
    ADD ESP,0x4                         ; 004c16e2
    MOV EDI,ESP                         ; 004c16e5
    MOV ESI,EAX                         ; 004c16e7
    PUSH EDI                            ; 004c16e9
    SUB ECX,ECX                         ; 004c16ea
    DEC ECX                             ; 004c16ec
    MOV AL,0x0                          ; 004c16ed
    SCASB.REPNE ES:EDI                  ; 004c16ef
    DEC EDI                             ; 004c16f1
    MOV AL,byte ptr [ESI]               ; 004c16f2
        ;   Label: LAB_004c16f2
    MOV byte ptr [EDI],AL               ; 004c16f4
    CMP AL,0x0                          ; 004c16f6
    JZ 0x004c170a                       ; 004c16f8
        ;   XREF to: 004c170a (CONDITIONAL_JUMP)  ; LAB_004c170a
    MOV AL,byte ptr [ESI + 0x1]         ; 004c16fa
    ADD ESI,0x2                         ; 004c16fd
    MOV byte ptr [EDI + 0x1],AL         ; 004c1700
    ADD EDI,0x2                         ; 004c1703
    CMP AL,0x0                          ; 004c1706
    JNZ 0x004c16f2                      ; 004c1708
        ;   XREF to: 004c16f2 (CONDITIONAL_JUMP)  ; LAB_004c16f2
    POP EDI                             ; 004c170a
        ;   Label: LAB_004c170a
    PUSH 0x5873e7                       ; 004c170b | = "."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004c1710
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004c1715
    MOV EDI,ESP                         ; 004c1718
    MOV ESI,EAX                         ; 004c171a
    PUSH EDI                            ; 004c171c
    SUB ECX,ECX                         ; 004c171d
    DEC ECX                             ; 004c171f
    MOV AL,0x0                          ; 004c1720
    SCASB.REPNE ES:EDI                  ; 004c1722
    DEC EDI                             ; 004c1724
    MOV AL,byte ptr [ESI]               ; 004c1725
        ;   Label: LAB_004c1725
    MOV byte ptr [EDI],AL               ; 004c1727
    CMP AL,0x0                          ; 004c1729
    JZ 0x004c173d                       ; 004c172b
        ;   XREF to: 004c173d (CONDITIONAL_JUMP)  ; LAB_004c173d
    MOV AL,byte ptr [ESI + 0x1]         ; 004c172d
    ADD ESI,0x2                         ; 004c1730
    MOV byte ptr [EDI + 0x1],AL         ; 004c1733
    ADD EDI,0x2                         ; 004c1736
    CMP AL,0x0                          ; 004c1739
    JNZ 0x004c1725                      ; 004c173b
        ;   XREF to: 004c1725 (CONDITIONAL_JUMP)  ; LAB_004c1725
    POP EDI                             ; 004c173d
        ;   Label: LAB_004c173d
    MOV EAX,ESP                         ; 004c173e
    PUSH 0x40a00000                     ; 004c1740
    PUSH EAX                            ; 004c1745
    MOV ESI,dword ptr [0x005b9354]      ; 004c1746 | DAT_005b9354
    PUSH ESI                            ; 004c174c | DAT_01c775ec
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004c174d
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_displayMessage_FUN_0049aa30()
    MOV EAX,[0x01cae0e8]                ; 004c1752 | DAT_01cae0e8
    ADD ESP,0xc                         ; 004c1757
    MOV EDI,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004c175a
    PUSH EDI                            ; 004c1761
    MOV EAX,dword ptr [ESP + 0x104]     ; 004c1762
    PUSH EAX                            ; 004c1769
    CALL core_health.cpp_CHealthItem_useItem_FUN_004b43f0 ; 004c176a
        ;   XREF to: 004b43f0 (UNCONDITIONAL_CALL)  ; undefined core_health.cpp_CHealthItem_useItem_FUN_004b43f0()
    ADD ESP,0x8                         ; 004c176f
    TEST EAX,EAX                        ; 004c1772
    JG 0x004c15f3                       ; 004c1774
        ;   XREF to: 004c15f3 (CONDITIONAL_JUMP)  ; LAB_004c15f3
    PUSH 0x1                            ; 004c177a
    PUSH EBX                            ; 004c177c
    PUSH EBP                            ; 004c177d
    CALL core_inv.cpp_CInventory_removeItem_FUN_004c07b0 ; 004c177e
        ;   XREF to: 004c07b0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_removeItem_FUN_004c07b0()
    MOV EAX,0x1                         ; 004c1783
    ADD ESP,0xc                         ; 004c1788
    ADD ESP,0x104                       ; 004c178b
    POP EBP                             ; 004c1791
    POP EDI                             ; 004c1792
    POP ESI                             ; 004c1793
    POP EBX                             ; 004c1794
    RET                                 ; 004c1795
    PUSH 0x5873e9                       ; 004c1796 | = "CGasMask"
        ;   Label: LAB_004c1796
    PUSH EBX                            ; 004c179b
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c179c
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c17a1
    TEST EAX,EAX                        ; 004c17a4
    JZ 0x004c17e3                       ; 004c17a6
        ;   XREF to: 004c17e3 (CONDITIONAL_JUMP)  ; LAB_004c17e3
    MOV ESI,dword ptr [0x01c78bbc]      ; 004c17a8 | DAT_01c78bbc
    PUSH ESI                            ; 004c17ae
    PUSH EBX                            ; 004c17af
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c17b0
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004c17b5
    MOV EDI,dword ptr [EAX + 0x2cc]     ; 004c17b8
    MOV EBX,EAX                         ; 004c17be
    TEST EDI,EDI                        ; 004c17c0
    SETZ AL                             ; 004c17c2
    AND EAX,0xff                        ; 004c17c5
    MOV dword ptr [EBX + 0x2cc],EAX     ; 004c17ca
    MOV dword ptr [EBP + 0x454],EBX     ; 004c17d0
    XOR EAX,EAX                         ; 004c17d6
    ADD ESP,0x104                       ; 004c17d8
    POP EBP                             ; 004c17de
    POP EDI                             ; 004c17df
    POP ESI                             ; 004c17e0
    POP EBX                             ; 004c17e1
    RET                                 ; 004c17e2
    PUSH 0x5873f2                       ; 004c17e3 | = "CBoxActor"
        ;   Label: LAB_004c17e3
    PUSH EBX                            ; 004c17e8
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c17e9
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c17ee
    TEST EAX,EAX                        ; 004c17f1
    JZ 0x004c15f3                       ; 004c17f3
        ;   XREF to: 004c15f3 (CONDITIONAL_JUMP)  ; LAB_004c15f3
    MOV EDX,dword ptr [0x00764838]      ; 004c17f9 | CDemonActorType_00764800.name_hash
    PUSH EDX                            ; 004c17ff
    PUSH EBX                            ; 004c1800
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c1801
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004c1806
    ADD EAX,0x5f8                       ; 004c1809
    PUSH EAX                            ; 004c180e
    MOV ECX,dword ptr [0x005b7650]      ; 004c180f | DAT_005b7650
    PUSH ECX                            ; 004c1815
    CALL core_event.cpp_CEventList_executeCommands_FUN_0047ab70 ; 004c1816
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_executeCommands_FUN_0047ab70()
    ADD ESP,0x8                         ; 004c181b
    XOR EAX,EAX                         ; 004c181e
    ADD ESP,0x104                       ; 004c1820
    POP EBP                             ; 004c1826
    POP EDI                             ; 004c1827
    POP ESI                             ; 004c1828
    POP EBX                             ; 004c1829
    RET                                 ; 004c182a

