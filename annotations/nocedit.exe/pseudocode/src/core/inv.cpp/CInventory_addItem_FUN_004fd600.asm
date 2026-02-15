; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_inv_cpp_CInventory_addItem_FUN_004fd600(CInventory *this_ptr,CDemonActor *item_actor,int show_tutorial_message)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   item_actor
; int              Stack[0xc]:4   show_tutorial_message
;
; XREF[10]:
;   core_ammobox.cpp_CAmmoBox_FUN_00411700 at 00411724
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004e036d
;   core_game.cpp_giveHeroWeaponAmmo_FUN_004dd930 at 004dd9ba
;   core_game.cpp_giveHeroWeapon_FUN_004dd870 at 004dd8f4
;   core_hero.cpp_CHero_FUN_004f38d0 at 004f38fc
;   core_hero.cpp_CHero_createDefaultGun_FUN_004f2a30 at 004f2a97
;   core_hostage.cpp_CHostage_process_FUN_004f4bd0 at 004f4ec8
;   core_inv.cpp_CInventory_createAmmoFromWeapon_FUN_004fe900 at 004fe9c1
;   core_scat.cpp_CScat_createDefaultGun_FUN_00557150 at 0055719a
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055bcd8
;
; Referenced Globals:
;   TerminatedCString s_You_ve_found_006304d2
;   TerminatedCString s_d_006304e2
;   TerminatedCString s_CHealthItem_006304e6
;   TerminatedCString s_Press_006304f2
;   TerminatedCString s_and_006304f9
;   TerminatedCString s_to_cycle_through_your_in_006304ff
;   TerminatedCString s_to_use_this_item_to_rest_00630529
;   TerminatedCString s_CGasMask_00630553
;   TerminatedCString s_Press_0063055c
;   TerminatedCString s_and_00630563
;   TerminatedCString s_to_cycle_through_your_in_00630569
;   TerminatedCString s_to_put_on_and_off_the_ma_00630593
;   TerminatedCString s_CKeyActor_006305b0
;   TerminatedCString s_With_your_guns_put_away__006305ba
;   TerminatedCString s_to_open_a_previously_loc_006305da
;   ... and 48 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
;   core_actor.cpp_createActorByName_FUN_0040c430
;   core_actor.cpp_deleteActor_FUN_00408820
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_ammo.cpp_CAmmo_FUN_00410fd0
;   core_game.cpp_CGame_displayMessage_FUN_004d7f20
;   core_inv.cpp_CInventory_selectWeapon_FUN_004feb10
;   core_inv.cpp_getItemDisplayName_FUN_004fcf00
;   core_inv.cpp_getItemIconName_FUN_004fcf70
;   core_menu.cpp_getKeyDisplayName_FUN_005134e0
;   core_mission.cpp_CDemonMission_generateActorName_FUN_00524700
;   core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
;   core_mission.cpp_CDemonMission_removeActorFromList_FUN_00523be0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd600
        ;   Label: core_inv.cpp_CInventory_addItem_FUN_004fd600
    PUSH ESI                            ; 004fd601
    PUSH EDI                            ; 004fd602
    PUSH EBP                            ; 004fd603
    SUB ESP,0x324                       ; 004fd604
    MOV EBP,dword ptr [ESP + 0x338]     ; 004fd60a
    CMP dword ptr [EBP + 0x8],0x64      ; 004fd611
    JL 0x004fd624                       ; 004fd615
        ;   XREF to: 004fd624 (CONDITIONAL_JUMP)  ; LAB_004fd624
    XOR EAX,EAX                         ; 004fd617
    ADD ESP,0x324                       ; 004fd619
    POP EBP                             ; 004fd61f
    POP EDI                             ; 004fd620
    POP ESI                             ; 004fd621
    POP EBX                             ; 004fd622
    RET                                 ; 004fd623
    MOV ECX,dword ptr [ESP + 0x33c]     ; 004fd624
        ;   Label: LAB_004fd624
    MOV EAX,dword ptr [ESP + 0x33c]     ; 004fd62b
    PUSH ECX                            ; 004fd632
    MOV EAX,dword ptr [EAX + 0x154]     ; 004fd633
    CALL dword ptr [EAX + 0x8c]         ; 004fd639
    MOV EBX,dword ptr [EBP + 0x4]       ; 004fd63f
    ADD ESP,0x4                         ; 004fd642
    CMP EAX,EBX                         ; 004fd645
    JZ 0x004fd681                       ; 004fd647
        ;   XREF to: 004fd681 (CONDITIONAL_JUMP)  ; LAB_004fd681
    PUSH 0x0                            ; 004fd649
    MOV ESI,dword ptr [ESP + 0x340]     ; 004fd64b
    MOV EAX,dword ptr [ESP + 0x340]     ; 004fd652
    PUSH ESI                            ; 004fd659
    MOV EAX,dword ptr [EAX + 0x154]     ; 004fd65a
    CALL dword ptr [EAX + 0x84]         ; 004fd660
    MOV EDI,dword ptr [EBP + 0x4]       ; 004fd666
    ADD ESP,0x8                         ; 004fd669
    TEST EDI,EDI                        ; 004fd66c
    JZ 0x004fd681                       ; 004fd66e
        ;   XREF to: 004fd681 (CONDITIONAL_JUMP)  ; LAB_004fd681
    PUSH EDI                            ; 004fd670
    MOV EAX,dword ptr [ESI + 0x154]     ; 004fd671
    PUSH ESI                            ; 004fd677
    CALL dword ptr [EAX + 0x80]         ; 004fd678
    ADD ESP,0x8                         ; 004fd67e
    MOV EBX,dword ptr [0x02db87d0]      ; 004fd681 | g_LocalHeroIndex
        ;   Label: LAB_004fd681
    MOV EAX,dword ptr [EBP + 0x4]       ; 004fd687
    CMP EAX,dword ptr [EBX*0x4 + 0x2db87c0] ; 004fd68a | g_HeroActors
    JNZ 0x004fe1ea                      ; 004fd691
        ;   XREF to: 004fe1ea (CONDITIONAL_JUMP)  ; LAB_004fe1ea
    CMP dword ptr [ESP + 0x340],0x0     ; 004fd697
    JZ 0x004fe1ea                       ; 004fd69f
        ;   XREF to: 004fe1ea (CONDITIONAL_JUMP)  ; LAB_004fe1ea
    MOV EAX,[0x0067b654]                ; 004fd6a5 | g_CGameInstance | g_CGamePtr
    CMP dword ptr [EAX + 0x228],0x0     ; 004fd6aa | DAT_02d81cc4
    JNZ 0x004fe1ea                      ; 004fd6b1
        ;   XREF to: 004fe1ea (CONDITIONAL_JUMP)  ; LAB_004fe1ea
    MOV ECX,dword ptr [ESP + 0x33c]     ; 004fd6b7
    PUSH ECX                            ; 004fd6be
    CALL core_inv.cpp_getItemDisplayName_FUN_004fcf00 ; 004fd6bf
        ;   XREF to: 004fcf00 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDisplayName_FUN_004fcf00(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004fd6c4
    MOV EBX,dword ptr [ESP + 0x33c]     ; 004fd6c7
    PUSH EBX                            ; 004fd6ce
    MOV dword ptr [ESP + 0x304],EAX     ; 004fd6cf
    CALL core_inv.cpp_getItemIconName_FUN_004fcf70 ; 004fd6d6
        ;   XREF to: 004fcf70 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemIconName_FUN_004fcf70(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004fd6db
    MOV ESI,dword ptr [0x008223a4]      ; 004fd6de | g_CAmmoClassInfo.name_hash
    PUSH ESI                            ; 004fd6e4
    PUSH EBX                            ; 004fd6e5
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004fd6e6
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004fd6eb
    PUSH 0x6304d2                       ; 004fd6ee | = "You've found : "
    MOV EBX,EAX                         ; 004fd6f3
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004fd6f5
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004fd6fa
    MOV EDI,ESP                         ; 004fd6fd
    MOV ESI,EAX                         ; 004fd6ff
    PUSH EDI                            ; 004fd701
    MOV AL,byte ptr [ESI]               ; 004fd702
        ;   Label: LAB_004fd702
    MOV byte ptr [EDI],AL               ; 004fd704
    CMP AL,0x0                          ; 004fd706
    JZ 0x004fd71a                       ; 004fd708
        ;   XREF to: 004fd71a (CONDITIONAL_JUMP)  ; LAB_004fd71a
    MOV AL,byte ptr [ESI + 0x1]         ; 004fd70a
    ADD ESI,0x2                         ; 004fd70d
    MOV byte ptr [EDI + 0x1],AL         ; 004fd710
    ADD EDI,0x2                         ; 004fd713
    CMP AL,0x0                          ; 004fd716
    JNZ 0x004fd702                      ; 004fd718
        ;   XREF to: 004fd702 (CONDITIONAL_JUMP)  ; LAB_004fd702
    POP EDI                             ; 004fd71a
        ;   Label: LAB_004fd71a
    TEST EBX,EBX                        ; 004fd71b
    JZ 0x004fd766                       ; 004fd71d
        ;   XREF to: 004fd766 (CONDITIONAL_JUMP)  ; LAB_004fd766
    MOV EAX,dword ptr [EBX + 0x314]     ; 004fd71f
    PUSH EAX                            ; 004fd725
    PUSH 0x6304e2                       ; 004fd726 | = "%d "
    LEA EAX,[ESP + 0x208]               ; 004fd72b
    PUSH EAX                            ; 004fd732
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004fd733
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004fd738
    LEA ESI,[ESP + 0x200]               ; 004fd73b
    MOV EDI,ESP                         ; 004fd742
    PUSH EDI                            ; 004fd744
    SUB ECX,ECX                         ; 004fd745
    DEC ECX                             ; 004fd747
    MOV AL,0x0                          ; 004fd748
    SCASB.REPNE ES:EDI                  ; 004fd74a
    DEC EDI                             ; 004fd74c
    MOV AL,byte ptr [ESI]               ; 004fd74d
        ;   Label: LAB_004fd74d
    MOV byte ptr [EDI],AL               ; 004fd74f
    CMP AL,0x0                          ; 004fd751
    JZ 0x004fd765                       ; 004fd753
        ;   XREF to: 004fd765 (CONDITIONAL_JUMP)  ; LAB_004fd765
    MOV AL,byte ptr [ESI + 0x1]         ; 004fd755
    ADD ESI,0x2                         ; 004fd758
    MOV byte ptr [EDI + 0x1],AL         ; 004fd75b
    ADD EDI,0x2                         ; 004fd75e
    CMP AL,0x0                          ; 004fd761
    JNZ 0x004fd74d                      ; 004fd763
        ;   XREF to: 004fd74d (CONDITIONAL_JUMP)  ; LAB_004fd74d
    POP EDI                             ; 004fd765
        ;   Label: LAB_004fd765
    MOV ESI,dword ptr [ESP + 0x300]     ; 004fd766
        ;   Label: LAB_004fd766
    MOV EDI,ESP                         ; 004fd76d
    PUSH EDI                            ; 004fd76f
    SUB ECX,ECX                         ; 004fd770
    DEC ECX                             ; 004fd772
    MOV AL,0x0                          ; 004fd773
    SCASB.REPNE ES:EDI                  ; 004fd775
    DEC EDI                             ; 004fd777
    MOV AL,byte ptr [ESI]               ; 004fd778
        ;   Label: LAB_004fd778
    MOV byte ptr [EDI],AL               ; 004fd77a
    CMP AL,0x0                          ; 004fd77c
    JZ 0x004fd790                       ; 004fd77e
        ;   XREF to: 004fd790 (CONDITIONAL_JUMP)  ; LAB_004fd790
    MOV AL,byte ptr [ESI + 0x1]         ; 004fd780
    ADD ESI,0x2                         ; 004fd783
    MOV byte ptr [EDI + 0x1],AL         ; 004fd786
    ADD EDI,0x2                         ; 004fd789
    CMP AL,0x0                          ; 004fd78c
    JNZ 0x004fd778                      ; 004fd78e
        ;   XREF to: 004fd778 (CONDITIONAL_JUMP)  ; LAB_004fd778
    POP EDI                             ; 004fd790
        ;   Label: LAB_004fd790
    PUSH 0x6304e6                       ; 004fd791 | = "CHealthItem"
    MOV EDX,dword ptr [ESP + 0x340]     ; 004fd796
    XOR AH,AH                           ; 004fd79d
    PUSH EDX                            ; 004fd79f
    MOV byte ptr [ESP + 0x108],AH       ; 004fd7a0
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004fd7a7
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fd7ac
    TEST EAX,EAX                        ; 004fd7af
    JZ 0x004fd949                       ; 004fd7b1
        ;   XREF to: 004fd949 (CONDITIONAL_JUMP)  ; LAB_004fd949
    PUSH 0x6304f2                       ; 004fd7b7 | = "Press "
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004fd7bc
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004fd7c1
    LEA EDI,[ESP + 0x100]               ; 004fd7c4
    MOV ESI,EAX                         ; 004fd7cb
    PUSH EDI                            ; 004fd7cd
    MOV AL,byte ptr [ESI]               ; 004fd7ce
        ;   Label: LAB_004fd7ce
    MOV byte ptr [EDI],AL               ; 004fd7d0
    CMP AL,0x0                          ; 004fd7d2
    JZ 0x004fd7e6                       ; 004fd7d4
        ;   XREF to: 004fd7e6 (CONDITIONAL_JUMP)  ; LAB_004fd7e6
    MOV AL,byte ptr [ESI + 0x1]         ; 004fd7d6
    ADD ESI,0x2                         ; 004fd7d9
    MOV byte ptr [EDI + 0x1],AL         ; 004fd7dc
    ADD EDI,0x2                         ; 004fd7df
    CMP AL,0x0                          ; 004fd7e2
    JNZ 0x004fd7ce                      ; 004fd7e4
        ;   XREF to: 004fd7ce (CONDITIONAL_JUMP)  ; LAB_004fd7ce
    POP EDI                             ; 004fd7e6
        ;   Label: LAB_004fd7e6
    MOV EAX,[0x0067b654]                ; 004fd7e7 | g_CGameInstance | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x84]      ; 004fd7ec | g_CGameInstance.key_next_item
    PUSH ECX                            ; 004fd7f2
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004fd7f3
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
    ADD ESP,0x4                         ; 004fd7f8
    LEA EDI,[ESP + 0x100]               ; 004fd7fb
    MOV ESI,EAX                         ; 004fd802
    PUSH EDI                            ; 004fd804
    SUB ECX,ECX                         ; 004fd805
    DEC ECX                             ; 004fd807
    MOV AL,0x0                          ; 004fd808
    SCASB.REPNE ES:EDI                  ; 004fd80a
    DEC EDI                             ; 004fd80c
    MOV AL,byte ptr [ESI]               ; 004fd80d
        ;   Label: LAB_004fd80d
    MOV byte ptr [EDI],AL               ; 004fd80f
    CMP AL,0x0                          ; 004fd811
    JZ 0x004fd825                       ; 004fd813
        ;   XREF to: 004fd825 (CONDITIONAL_JUMP)  ; LAB_004fd825
    MOV AL,byte ptr [ESI + 0x1]         ; 004fd815
    ADD ESI,0x2                         ; 004fd818
    MOV byte ptr [EDI + 0x1],AL         ; 004fd81b
    ADD EDI,0x2                         ; 004fd81e
    CMP AL,0x0                          ; 004fd821
    JNZ 0x004fd80d                      ; 004fd823
        ;   XREF to: 004fd80d (CONDITIONAL_JUMP)  ; LAB_004fd80d
    POP EDI                             ; 004fd825
        ;   Label: LAB_004fd825
    PUSH 0x6304f9                       ; 004fd826 | = " and "
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004fd82b
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004fd830
    LEA EDI,[ESP + 0x100]               ; 004fd833
    MOV ESI,EAX                         ; 004fd83a
    PUSH EDI                            ; 004fd83c
    SUB ECX,ECX                         ; 004fd83d
    DEC ECX                             ; 004fd83f
    MOV AL,0x0                          ; 004fd840
    SCASB.REPNE ES:EDI                  ; 004fd842
    DEC EDI                             ; 004fd844
    MOV AL,byte ptr [ESI]               ; 004fd845
        ;   Label: LAB_004fd845
    MOV byte ptr [EDI],AL               ; 004fd847
    CMP AL,0x0                          ; 004fd849
    JZ 0x004fd85d                       ; 004fd84b
        ;   XREF to: 004fd85d (CONDITIONAL_JUMP)  ; LAB_004fd85d
    MOV AL,byte ptr [ESI + 0x1]         ; 004fd84d
    ADD ESI,0x2                         ; 004fd850
    MOV byte ptr [EDI + 0x1],AL         ; 004fd853
    ADD EDI,0x2                         ; 004fd856
    CMP AL,0x0                          ; 004fd859
    JNZ 0x004fd845                      ; 004fd85b
        ;   XREF to: 004fd845 (CONDITIONAL_JUMP)  ; LAB_004fd845
    POP EDI                             ; 004fd85d
        ;   Label: LAB_004fd85d
    MOV EAX,[0x0067b654]                ; 004fd85e | g_CGameInstance | g_CGamePtr
    MOV EBX,dword ptr [EAX + 0x88]      ; 004fd863 | g_CGameInstance.key_prev_item
    PUSH EBX                            ; 004fd869
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004fd86a
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
    ADD ESP,0x4                         ; 004fd86f
    LEA EDI,[ESP + 0x100]               ; 004fd872
    MOV ESI,EAX                         ; 004fd879
    PUSH EDI                            ; 004fd87b
    SUB ECX,ECX                         ; 004fd87c
    DEC ECX                             ; 004fd87e
    MOV AL,0x0                          ; 004fd87f
    SCASB.REPNE ES:EDI                  ; 004fd881
    DEC EDI                             ; 004fd883
    MOV AL,byte ptr [ESI]               ; 004fd884
        ;   Label: LAB_004fd884
    MOV byte ptr [EDI],AL               ; 004fd886
    CMP AL,0x0                          ; 004fd888
    JZ 0x004fd89c                       ; 004fd88a
        ;   XREF to: 004fd89c (CONDITIONAL_JUMP)  ; LAB_004fd89c
    MOV AL,byte ptr [ESI + 0x1]         ; 004fd88c
    ADD ESI,0x2                         ; 004fd88f
    MOV byte ptr [EDI + 0x1],AL         ; 004fd892
    ADD EDI,0x2                         ; 004fd895
    CMP AL,0x0                          ; 004fd898
    JNZ 0x004fd884                      ; 004fd89a
        ;   XREF to: 004fd884 (CONDITIONAL_JUMP)  ; LAB_004fd884
    POP EDI                             ; 004fd89c
        ;   Label: LAB_004fd89c
    PUSH 0x6304ff                       ; 004fd89d | = " to cycle through your inventory.  Pr..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004fd8a2
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004fd8a7
    LEA EDI,[ESP + 0x100]               ; 004fd8aa
    MOV ESI,EAX                         ; 004fd8b1
    PUSH EDI                            ; 004fd8b3
    SUB ECX,ECX                         ; 004fd8b4
    DEC ECX                             ; 004fd8b6
    MOV AL,0x0                          ; 004fd8b7
    SCASB.REPNE ES:EDI                  ; 004fd8b9
    DEC EDI                             ; 004fd8bb
    MOV AL,byte ptr [ESI]               ; 004fd8bc
        ;   Label: LAB_004fd8bc
    MOV byte ptr [EDI],AL               ; 004fd8be
    CMP AL,0x0                          ; 004fd8c0
    JZ 0x004fd8d4                       ; 004fd8c2
        ;   XREF to: 004fd8d4 (CONDITIONAL_JUMP)  ; LAB_004fd8d4
    MOV AL,byte ptr [ESI + 0x1]         ; 004fd8c4
    ADD ESI,0x2                         ; 004fd8c7
    MOV byte ptr [EDI + 0x1],AL         ; 004fd8ca
    ADD EDI,0x2                         ; 004fd8cd
    CMP AL,0x0                          ; 004fd8d0
    JNZ 0x004fd8bc                      ; 004fd8d2
        ;   XREF to: 004fd8bc (CONDITIONAL_JUMP)  ; LAB_004fd8bc
    POP EDI                             ; 004fd8d4
        ;   Label: LAB_004fd8d4
    MOV EAX,[0x0067b654]                ; 004fd8d5 | g_CGameInstance | g_CGamePtr
    MOV ESI,dword ptr [EAX + 0x4c]      ; 004fd8da | g_CGameInstance.key_use_item
    PUSH ESI                            ; 004fd8dd
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004fd8de
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
    ADD ESP,0x4                         ; 004fd8e3
    LEA EDI,[ESP + 0x100]               ; 004fd8e6
    MOV ESI,EAX                         ; 004fd8ed
    PUSH EDI                            ; 004fd8ef
    SUB ECX,ECX                         ; 004fd8f0
    DEC ECX                             ; 004fd8f2
    MOV AL,0x0                          ; 004fd8f3
    SCASB.REPNE ES:EDI                  ; 004fd8f5
    DEC EDI                             ; 004fd8f7
    MOV AL,byte ptr [ESI]               ; 004fd8f8
        ;   Label: LAB_004fd8f8
    MOV byte ptr [EDI],AL               ; 004fd8fa
    CMP AL,0x0                          ; 004fd8fc
    JZ 0x004fd910                       ; 004fd8fe
        ;   XREF to: 004fd910 (CONDITIONAL_JUMP)  ; LAB_004fd910
    MOV AL,byte ptr [ESI + 0x1]         ; 004fd900
    ADD ESI,0x2                         ; 004fd903
    MOV byte ptr [EDI + 0x1],AL         ; 004fd906
    ADD EDI,0x2                         ; 004fd909
    CMP AL,0x0                          ; 004fd90c
    JNZ 0x004fd8f8                      ; 004fd90e
        ;   XREF to: 004fd8f8 (CONDITIONAL_JUMP)  ; LAB_004fd8f8
    POP EDI                             ; 004fd910
        ;   Label: LAB_004fd910
    PUSH 0x630529                       ; 004fd911 | = " to use this item to restore some hea..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004fd916
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004fd91b
    LEA EDI,[ESP + 0x100]               ; 004fd91e
    MOV ESI,EAX                         ; 004fd925
    PUSH EDI                            ; 004fd927
    SUB ECX,ECX                         ; 004fd928
    DEC ECX                             ; 004fd92a
    MOV AL,0x0                          ; 004fd92b
    SCASB.REPNE ES:EDI                  ; 004fd92d
    DEC EDI                             ; 004fd92f
    MOV AL,byte ptr [ESI]               ; 004fd930
        ;   Label: LAB_004fd930
    MOV byte ptr [EDI],AL               ; 004fd932
    CMP AL,0x0                          ; 004fd934
    JZ 0x004fd948                       ; 004fd936
        ;   XREF to: 004fd948 (CONDITIONAL_JUMP)  ; LAB_004fd948
    MOV AL,byte ptr [ESI + 0x1]         ; 004fd938
    ADD ESI,0x2                         ; 004fd93b
    MOV byte ptr [EDI + 0x1],AL         ; 004fd93e
    ADD EDI,0x2                         ; 004fd941
    CMP AL,0x0                          ; 004fd944
    JNZ 0x004fd930                      ; 004fd946
        ;   XREF to: 004fd930 (CONDITIONAL_JUMP)  ; LAB_004fd930
    POP EDI                             ; 004fd948
        ;   Label: LAB_004fd948
    PUSH 0x630553                       ; 004fd949 | = "CGasMask"
        ;   Label: LAB_004fd949
    MOV EDI,dword ptr [ESP + 0x340]     ; 004fd94e
    PUSH EDI                            ; 004fd955
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004fd956
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fd95b
    TEST EAX,EAX                        ; 004fd95e
    JZ 0x004fdaf8                       ; 004fd960
        ;   XREF to: 004fdaf8 (CONDITIONAL_JUMP)  ; LAB_004fdaf8
    PUSH 0x63055c                       ; 004fd966 | = "Press "
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004fd96b
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004fd970
    LEA EDI,[ESP + 0x100]               ; 004fd973
    MOV ESI,EAX                         ; 004fd97a
    PUSH EDI                            ; 004fd97c
    MOV AL,byte ptr [ESI]               ; 004fd97d
        ;   Label: LAB_004fd97d
    MOV byte ptr [EDI],AL               ; 004fd97f
    CMP AL,0x0                          ; 004fd981
    JZ 0x004fd995                       ; 004fd983
        ;   XREF to: 004fd995 (CONDITIONAL_JUMP)  ; LAB_004fd995
    MOV AL,byte ptr [ESI + 0x1]         ; 004fd985
    ADD ESI,0x2                         ; 004fd988
    MOV byte ptr [EDI + 0x1],AL         ; 004fd98b
    ADD EDI,0x2                         ; 004fd98e
    CMP AL,0x0                          ; 004fd991
    JNZ 0x004fd97d                      ; 004fd993
        ;   XREF to: 004fd97d (CONDITIONAL_JUMP)  ; LAB_004fd97d
    POP EDI                             ; 004fd995
        ;   Label: LAB_004fd995
    MOV EAX,[0x0067b654]                ; 004fd996 | g_CGameInstance | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x84]      ; 004fd99b | g_CGameInstance.key_next_item
    PUSH EDX                            ; 004fd9a1
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004fd9a2
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
    ADD ESP,0x4                         ; 004fd9a7
    LEA EDI,[ESP + 0x100]               ; 004fd9aa
    MOV ESI,EAX                         ; 004fd9b1
    PUSH EDI                            ; 004fd9b3
    SUB ECX,ECX                         ; 004fd9b4
    DEC ECX                             ; 004fd9b6
    MOV AL,0x0                          ; 004fd9b7
    SCASB.REPNE ES:EDI                  ; 004fd9b9
    DEC EDI                             ; 004fd9bb
    MOV AL,byte ptr [ESI]               ; 004fd9bc
        ;   Label: LAB_004fd9bc
    MOV byte ptr [EDI],AL               ; 004fd9be
    CMP AL,0x0                          ; 004fd9c0
    JZ 0x004fd9d4                       ; 004fd9c2
        ;   XREF to: 004fd9d4 (CONDITIONAL_JUMP)  ; LAB_004fd9d4
    MOV AL,byte ptr [ESI + 0x1]         ; 004fd9c4
    ADD ESI,0x2                         ; 004fd9c7
    MOV byte ptr [EDI + 0x1],AL         ; 004fd9ca
    ADD EDI,0x2                         ; 004fd9cd
    CMP AL,0x0                          ; 004fd9d0
    JNZ 0x004fd9bc                      ; 004fd9d2
        ;   XREF to: 004fd9bc (CONDITIONAL_JUMP)  ; LAB_004fd9bc
    POP EDI                             ; 004fd9d4
        ;   Label: LAB_004fd9d4
    PUSH 0x630563                       ; 004fd9d5 | = " and "
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004fd9da
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004fd9df
    LEA EDI,[ESP + 0x100]               ; 004fd9e2
    MOV ESI,EAX                         ; 004fd9e9
    PUSH EDI                            ; 004fd9eb
    SUB ECX,ECX                         ; 004fd9ec
    DEC ECX                             ; 004fd9ee
    MOV AL,0x0                          ; 004fd9ef
    SCASB.REPNE ES:EDI                  ; 004fd9f1
    DEC EDI                             ; 004fd9f3
    MOV AL,byte ptr [ESI]               ; 004fd9f4
        ;   Label: LAB_004fd9f4
    MOV byte ptr [EDI],AL               ; 004fd9f6
    CMP AL,0x0                          ; 004fd9f8
    JZ 0x004fda0c                       ; 004fd9fa
        ;   XREF to: 004fda0c (CONDITIONAL_JUMP)  ; LAB_004fda0c
    MOV AL,byte ptr [ESI + 0x1]         ; 004fd9fc
    ADD ESI,0x2                         ; 004fd9ff
    MOV byte ptr [EDI + 0x1],AL         ; 004fda02
    ADD EDI,0x2                         ; 004fda05
    CMP AL,0x0                          ; 004fda08
    JNZ 0x004fd9f4                      ; 004fda0a
        ;   XREF to: 004fd9f4 (CONDITIONAL_JUMP)  ; LAB_004fd9f4
    POP EDI                             ; 004fda0c
        ;   Label: LAB_004fda0c
    MOV EAX,[0x0067b654]                ; 004fda0d | g_CGameInstance | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x88]      ; 004fda12 | g_CGameInstance.key_prev_item
    PUSH ECX                            ; 004fda18
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004fda19
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
    ADD ESP,0x4                         ; 004fda1e
    LEA EDI,[ESP + 0x100]               ; 004fda21
    MOV ESI,EAX                         ; 004fda28
    PUSH EDI                            ; 004fda2a
    SUB ECX,ECX                         ; 004fda2b
    DEC ECX                             ; 004fda2d
    MOV AL,0x0                          ; 004fda2e
    SCASB.REPNE ES:EDI                  ; 004fda30
    DEC EDI                             ; 004fda32
    MOV AL,byte ptr [ESI]               ; 004fda33
        ;   Label: LAB_004fda33
    MOV byte ptr [EDI],AL               ; 004fda35
    CMP AL,0x0                          ; 004fda37
    JZ 0x004fda4b                       ; 004fda39
        ;   XREF to: 004fda4b (CONDITIONAL_JUMP)  ; LAB_004fda4b
    MOV AL,byte ptr [ESI + 0x1]         ; 004fda3b
    ADD ESI,0x2                         ; 004fda3e
    MOV byte ptr [EDI + 0x1],AL         ; 004fda41
    ADD EDI,0x2                         ; 004fda44
    CMP AL,0x0                          ; 004fda47
    JNZ 0x004fda33                      ; 004fda49
        ;   XREF to: 004fda33 (CONDITIONAL_JUMP)  ; LAB_004fda33
    POP EDI                             ; 004fda4b
        ;   Label: LAB_004fda4b
    PUSH 0x630569                       ; 004fda4c | = " to cycle through your inventory.  Pr..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004fda51
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004fda56
    LEA EDI,[ESP + 0x100]               ; 004fda59
    MOV ESI,EAX                         ; 004fda60
    PUSH EDI                            ; 004fda62
    SUB ECX,ECX                         ; 004fda63
    DEC ECX                             ; 004fda65
    MOV AL,0x0                          ; 004fda66
    SCASB.REPNE ES:EDI                  ; 004fda68
    DEC EDI                             ; 004fda6a
    MOV AL,byte ptr [ESI]               ; 004fda6b
        ;   Label: LAB_004fda6b
    MOV byte ptr [EDI],AL               ; 004fda6d
    CMP AL,0x0                          ; 004fda6f
    JZ 0x004fda83                       ; 004fda71
        ;   XREF to: 004fda83 (CONDITIONAL_JUMP)  ; LAB_004fda83
    MOV AL,byte ptr [ESI + 0x1]         ; 004fda73
    ADD ESI,0x2                         ; 004fda76
    MOV byte ptr [EDI + 0x1],AL         ; 004fda79
    ADD EDI,0x2                         ; 004fda7c
    CMP AL,0x0                          ; 004fda7f
    JNZ 0x004fda6b                      ; 004fda81
        ;   XREF to: 004fda6b (CONDITIONAL_JUMP)  ; LAB_004fda6b
    POP EDI                             ; 004fda83
        ;   Label: LAB_004fda83
    MOV EAX,[0x0067b654]                ; 004fda84 | g_CGameInstance | g_CGamePtr
    MOV EBX,dword ptr [EAX + 0x4c]      ; 004fda89 | g_CGameInstance.key_use_item
    PUSH EBX                            ; 004fda8c
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004fda8d
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
    ADD ESP,0x4                         ; 004fda92
    LEA EDI,[ESP + 0x100]               ; 004fda95
    MOV ESI,EAX                         ; 004fda9c
    PUSH EDI                            ; 004fda9e
    SUB ECX,ECX                         ; 004fda9f
    DEC ECX                             ; 004fdaa1
    MOV AL,0x0                          ; 004fdaa2
    SCASB.REPNE ES:EDI                  ; 004fdaa4
    DEC EDI                             ; 004fdaa6
    MOV AL,byte ptr [ESI]               ; 004fdaa7
        ;   Label: LAB_004fdaa7
    MOV byte ptr [EDI],AL               ; 004fdaa9
    CMP AL,0x0                          ; 004fdaab
    JZ 0x004fdabf                       ; 004fdaad
        ;   XREF to: 004fdabf (CONDITIONAL_JUMP)  ; LAB_004fdabf
    MOV AL,byte ptr [ESI + 0x1]         ; 004fdaaf
    ADD ESI,0x2                         ; 004fdab2
    MOV byte ptr [EDI + 0x1],AL         ; 004fdab5
    ADD EDI,0x2                         ; 004fdab8
    CMP AL,0x0                          ; 004fdabb
    JNZ 0x004fdaa7                      ; 004fdabd
        ;   XREF to: 004fdaa7 (CONDITIONAL_JUMP)  ; LAB_004fdaa7
    POP EDI                             ; 004fdabf
        ;   Label: LAB_004fdabf
    PUSH 0x630593                       ; 004fdac0 | = " to put on and off the mask."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004fdac5
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004fdaca
    LEA EDI,[ESP + 0x100]               ; 004fdacd
    MOV ESI,EAX                         ; 004fdad4
    PUSH EDI                            ; 004fdad6
    SUB ECX,ECX                         ; 004fdad7
    DEC ECX                             ; 004fdad9
    MOV AL,0x0                          ; 004fdada
    SCASB.REPNE ES:EDI                  ; 004fdadc
    DEC EDI                             ; 004fdade
    MOV AL,byte ptr [ESI]               ; 004fdadf
        ;   Label: LAB_004fdadf
    MOV byte ptr [EDI],AL               ; 004fdae1
    CMP AL,0x0                          ; 004fdae3
    JZ 0x004fdaf7                       ; 004fdae5
        ;   XREF to: 004fdaf7 (CONDITIONAL_JUMP)  ; LAB_004fdaf7
    MOV AL,byte ptr [ESI + 0x1]         ; 004fdae7
    ADD ESI,0x2                         ; 004fdaea
    MOV byte ptr [EDI + 0x1],AL         ; 004fdaed
    ADD EDI,0x2                         ; 004fdaf0
    CMP AL,0x0                          ; 004fdaf3
    JNZ 0x004fdadf                      ; 004fdaf5
        ;   XREF to: 004fdadf (CONDITIONAL_JUMP)  ; LAB_004fdadf
    POP EDI                             ; 004fdaf7
        ;   Label: LAB_004fdaf7
    PUSH 0x6305b0                       ; 004fdaf8 | = "CKeyActor"
        ;   Label: LAB_004fdaf8
    MOV ESI,dword ptr [ESP + 0x340]     ; 004fdafd
    PUSH ESI                            ; 004fdb04
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004fdb05
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fdb0a
    TEST EAX,EAX                        ; 004fdb0d
    JZ 0x004fdbb9                       ; 004fdb0f
        ;   XREF to: 004fdbb9 (CONDITIONAL_JUMP)  ; LAB_004fdbb9
    PUSH 0x6305ba                       ; 004fdb15 | = "With your guns put away, press "
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004fdb1a
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004fdb1f
    LEA EDI,[ESP + 0x100]               ; 004fdb22
    MOV ESI,EAX                         ; 004fdb29
    PUSH EDI                            ; 004fdb2b
    MOV AL,byte ptr [ESI]               ; 004fdb2c
        ;   Label: LAB_004fdb2c
    MOV byte ptr [EDI],AL               ; 004fdb2e
    CMP AL,0x0                          ; 004fdb30
    JZ 0x004fdb44                       ; 004fdb32
        ;   XREF to: 004fdb44 (CONDITIONAL_JUMP)  ; LAB_004fdb44
    MOV AL,byte ptr [ESI + 0x1]         ; 004fdb34
    ADD ESI,0x2                         ; 004fdb37
    MOV byte ptr [EDI + 0x1],AL         ; 004fdb3a
    ADD EDI,0x2                         ; 004fdb3d
    CMP AL,0x0                          ; 004fdb40
    JNZ 0x004fdb2c                      ; 004fdb42
        ;   XREF to: 004fdb2c (CONDITIONAL_JUMP)  ; LAB_004fdb2c
    POP EDI                             ; 004fdb44
        ;   Label: LAB_004fdb44
    MOV EAX,[0x0067b654]                ; 004fdb45 | g_CGameInstance | g_CGamePtr
    MOV EDI,dword ptr [EAX + 0x48]      ; 004fdb4a | g_CGameInstance.key_fire
    PUSH EDI                            ; 004fdb4d
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004fdb4e
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
    ADD ESP,0x4                         ; 004fdb53
    LEA EDI,[ESP + 0x100]               ; 004fdb56
    MOV ESI,EAX                         ; 004fdb5d
    PUSH EDI                            ; 004fdb5f
    SUB ECX,ECX                         ; 004fdb60
    DEC ECX                             ; 004fdb62
    MOV AL,0x0                          ; 004fdb63
    SCASB.REPNE ES:EDI                  ; 004fdb65
    DEC EDI                             ; 004fdb67
    MOV AL,byte ptr [ESI]               ; 004fdb68
        ;   Label: LAB_004fdb68
    MOV byte ptr [EDI],AL               ; 004fdb6a
    CMP AL,0x0                          ; 004fdb6c
    JZ 0x004fdb80                       ; 004fdb6e
        ;   XREF to: 004fdb80 (CONDITIONAL_JUMP)  ; LAB_004fdb80
    MOV AL,byte ptr [ESI + 0x1]         ; 004fdb70
    ADD ESI,0x2                         ; 004fdb73
    MOV byte ptr [EDI + 0x1],AL         ; 004fdb76
    ADD EDI,0x2                         ; 004fdb79
    CMP AL,0x0                          ; 004fdb7c
    JNZ 0x004fdb68                      ; 004fdb7e
        ;   XREF to: 004fdb68 (CONDITIONAL_JUMP)  ; LAB_004fdb68
    POP EDI                             ; 004fdb80
        ;   Label: LAB_004fdb80
    PUSH 0x6305da                       ; 004fdb81 | = " to open a previously locked door."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004fdb86
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004fdb8b
    LEA EDI,[ESP + 0x100]               ; 004fdb8e
    MOV ESI,EAX                         ; 004fdb95
    PUSH EDI                            ; 004fdb97
    SUB ECX,ECX                         ; 004fdb98
    DEC ECX                             ; 004fdb9a
    MOV AL,0x0                          ; 004fdb9b
    SCASB.REPNE ES:EDI                  ; 004fdb9d
    DEC EDI                             ; 004fdb9f
    MOV AL,byte ptr [ESI]               ; 004fdba0
        ;   Label: LAB_004fdba0
    MOV byte ptr [EDI],AL               ; 004fdba2
    CMP AL,0x0                          ; 004fdba4
    JZ 0x004fdbb8                       ; 004fdba6
        ;   XREF to: 004fdbb8 (CONDITIONAL_JUMP)  ; LAB_004fdbb8
    MOV AL,byte ptr [ESI + 0x1]         ; 004fdba8
    ADD ESI,0x2                         ; 004fdbab
    MOV byte ptr [EDI + 0x1],AL         ; 004fdbae
    ADD EDI,0x2                         ; 004fdbb1
    CMP AL,0x0                          ; 004fdbb4
    JNZ 0x004fdba0                      ; 004fdbb6
        ;   XREF to: 004fdba0 (CONDITIONAL_JUMP)  ; LAB_004fdba0
    POP EDI                             ; 004fdbb8
        ;   Label: LAB_004fdbb8
    PUSH 0x6305fd                       ; 004fdbb9 | = "CBoxActor"
        ;   Label: LAB_004fdbb9
    MOV EAX,dword ptr [ESP + 0x340]     ; 004fdbbe
    PUSH EAX                            ; 004fdbc5
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004fdbc6
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fdbcb
    TEST EAX,EAX                        ; 004fdbce
    JZ 0x004fdd68                       ; 004fdbd0
        ;   XREF to: 004fdd68 (CONDITIONAL_JUMP)  ; LAB_004fdd68
    PUSH 0x630607                       ; 004fdbd6 | = "Press "
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004fdbdb
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004fdbe0
    LEA EDI,[ESP + 0x100]               ; 004fdbe3
    MOV ESI,EAX                         ; 004fdbea
    PUSH EDI                            ; 004fdbec
    MOV AL,byte ptr [ESI]               ; 004fdbed
        ;   Label: LAB_004fdbed
    MOV byte ptr [EDI],AL               ; 004fdbef
    CMP AL,0x0                          ; 004fdbf1
    JZ 0x004fdc05                       ; 004fdbf3
        ;   XREF to: 004fdc05 (CONDITIONAL_JUMP)  ; LAB_004fdc05
    MOV AL,byte ptr [ESI + 0x1]         ; 004fdbf5
    ADD ESI,0x2                         ; 004fdbf8
    MOV byte ptr [EDI + 0x1],AL         ; 004fdbfb
    ADD EDI,0x2                         ; 004fdbfe
    CMP AL,0x0                          ; 004fdc01
    JNZ 0x004fdbed                      ; 004fdc03
        ;   XREF to: 004fdbed (CONDITIONAL_JUMP)  ; LAB_004fdbed
    POP EDI                             ; 004fdc05
        ;   Label: LAB_004fdc05
    MOV EAX,[0x0067b654]                ; 004fdc06 | g_CGameInstance | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x84]      ; 004fdc0b | g_CGameInstance.key_next_item
    PUSH EDX                            ; 004fdc11
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004fdc12
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
    ADD ESP,0x4                         ; 004fdc17
    LEA EDI,[ESP + 0x100]               ; 004fdc1a
    MOV ESI,EAX                         ; 004fdc21
    PUSH EDI                            ; 004fdc23
    SUB ECX,ECX                         ; 004fdc24
    DEC ECX                             ; 004fdc26
    MOV AL,0x0                          ; 004fdc27
    SCASB.REPNE ES:EDI                  ; 004fdc29
    DEC EDI                             ; 004fdc2b
    MOV AL,byte ptr [ESI]               ; 004fdc2c
        ;   Label: LAB_004fdc2c
    MOV byte ptr [EDI],AL               ; 004fdc2e
    CMP AL,0x0                          ; 004fdc30
    JZ 0x004fdc44                       ; 004fdc32
        ;   XREF to: 004fdc44 (CONDITIONAL_JUMP)  ; LAB_004fdc44
    MOV AL,byte ptr [ESI + 0x1]         ; 004fdc34
    ADD ESI,0x2                         ; 004fdc37
    MOV byte ptr [EDI + 0x1],AL         ; 004fdc3a
    ADD EDI,0x2                         ; 004fdc3d
    CMP AL,0x0                          ; 004fdc40
    JNZ 0x004fdc2c                      ; 004fdc42
        ;   XREF to: 004fdc2c (CONDITIONAL_JUMP)  ; LAB_004fdc2c
    POP EDI                             ; 004fdc44
        ;   Label: LAB_004fdc44
    PUSH 0x63060e                       ; 004fdc45 | = " and "
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004fdc4a
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004fdc4f
    LEA EDI,[ESP + 0x100]               ; 004fdc52
    MOV ESI,EAX                         ; 004fdc59
    PUSH EDI                            ; 004fdc5b
    SUB ECX,ECX                         ; 004fdc5c
    DEC ECX                             ; 004fdc5e
    MOV AL,0x0                          ; 004fdc5f
    SCASB.REPNE ES:EDI                  ; 004fdc61
    DEC EDI                             ; 004fdc63
    MOV AL,byte ptr [ESI]               ; 004fdc64
        ;   Label: LAB_004fdc64
    MOV byte ptr [EDI],AL               ; 004fdc66
    CMP AL,0x0                          ; 004fdc68
    JZ 0x004fdc7c                       ; 004fdc6a
        ;   XREF to: 004fdc7c (CONDITIONAL_JUMP)  ; LAB_004fdc7c
    MOV AL,byte ptr [ESI + 0x1]         ; 004fdc6c
    ADD ESI,0x2                         ; 004fdc6f
    MOV byte ptr [EDI + 0x1],AL         ; 004fdc72
    ADD EDI,0x2                         ; 004fdc75
    CMP AL,0x0                          ; 004fdc78
    JNZ 0x004fdc64                      ; 004fdc7a
        ;   XREF to: 004fdc64 (CONDITIONAL_JUMP)  ; LAB_004fdc64
    POP EDI                             ; 004fdc7c
        ;   Label: LAB_004fdc7c
    MOV EAX,[0x0067b654]                ; 004fdc7d | g_CGameInstance | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x88]      ; 004fdc82 | g_CGameInstance.key_prev_item
    PUSH ECX                            ; 004fdc88
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004fdc89
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
    ADD ESP,0x4                         ; 004fdc8e
    LEA EDI,[ESP + 0x100]               ; 004fdc91
    MOV ESI,EAX                         ; 004fdc98
    PUSH EDI                            ; 004fdc9a
    SUB ECX,ECX                         ; 004fdc9b
    DEC ECX                             ; 004fdc9d
    MOV AL,0x0                          ; 004fdc9e
    SCASB.REPNE ES:EDI                  ; 004fdca0
    DEC EDI                             ; 004fdca2
    MOV AL,byte ptr [ESI]               ; 004fdca3
        ;   Label: LAB_004fdca3
    MOV byte ptr [EDI],AL               ; 004fdca5
    CMP AL,0x0                          ; 004fdca7
    JZ 0x004fdcbb                       ; 004fdca9
        ;   XREF to: 004fdcbb (CONDITIONAL_JUMP)  ; LAB_004fdcbb
    MOV AL,byte ptr [ESI + 0x1]         ; 004fdcab
    ADD ESI,0x2                         ; 004fdcae
    MOV byte ptr [EDI + 0x1],AL         ; 004fdcb1
    ADD EDI,0x2                         ; 004fdcb4
    CMP AL,0x0                          ; 004fdcb7
    JNZ 0x004fdca3                      ; 004fdcb9
        ;   XREF to: 004fdca3 (CONDITIONAL_JUMP)  ; LAB_004fdca3
    POP EDI                             ; 004fdcbb
        ;   Label: LAB_004fdcbb
    PUSH 0x630614                       ; 004fdcbc | = " to cycle through your inventory.  Pr..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004fdcc1
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004fdcc6
    LEA EDI,[ESP + 0x100]               ; 004fdcc9
    MOV ESI,EAX                         ; 004fdcd0
    PUSH EDI                            ; 004fdcd2
    SUB ECX,ECX                         ; 004fdcd3
    DEC ECX                             ; 004fdcd5
    MOV AL,0x0                          ; 004fdcd6
    SCASB.REPNE ES:EDI                  ; 004fdcd8
    DEC EDI                             ; 004fdcda
    MOV AL,byte ptr [ESI]               ; 004fdcdb
        ;   Label: LAB_004fdcdb
    MOV byte ptr [EDI],AL               ; 004fdcdd
    CMP AL,0x0                          ; 004fdcdf
    JZ 0x004fdcf3                       ; 004fdce1
        ;   XREF to: 004fdcf3 (CONDITIONAL_JUMP)  ; LAB_004fdcf3
    MOV AL,byte ptr [ESI + 0x1]         ; 004fdce3
    ADD ESI,0x2                         ; 004fdce6
    MOV byte ptr [EDI + 0x1],AL         ; 004fdce9
    ADD EDI,0x2                         ; 004fdcec
    CMP AL,0x0                          ; 004fdcef
    JNZ 0x004fdcdb                      ; 004fdcf1
        ;   XREF to: 004fdcdb (CONDITIONAL_JUMP)  ; LAB_004fdcdb
    POP EDI                             ; 004fdcf3
        ;   Label: LAB_004fdcf3
    MOV EAX,[0x0067b654]                ; 004fdcf4 | g_CGameInstance | g_CGamePtr
    MOV EBX,dword ptr [EAX + 0x4c]      ; 004fdcf9 | g_CGameInstance.key_use_item
    PUSH EBX                            ; 004fdcfc
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004fdcfd
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
    ADD ESP,0x4                         ; 004fdd02
    LEA EDI,[ESP + 0x100]               ; 004fdd05
    MOV ESI,EAX                         ; 004fdd0c
    PUSH EDI                            ; 004fdd0e
    SUB ECX,ECX                         ; 004fdd0f
    DEC ECX                             ; 004fdd11
    MOV AL,0x0                          ; 004fdd12
    SCASB.REPNE ES:EDI                  ; 004fdd14
    DEC EDI                             ; 004fdd16
    MOV AL,byte ptr [ESI]               ; 004fdd17
        ;   Label: LAB_004fdd17
    MOV byte ptr [EDI],AL               ; 004fdd19
    CMP AL,0x0                          ; 004fdd1b
    JZ 0x004fdd2f                       ; 004fdd1d
        ;   XREF to: 004fdd2f (CONDITIONAL_JUMP)  ; LAB_004fdd2f
    MOV AL,byte ptr [ESI + 0x1]         ; 004fdd1f
    ADD ESI,0x2                         ; 004fdd22
    MOV byte ptr [EDI + 0x1],AL         ; 004fdd25
    ADD EDI,0x2                         ; 004fdd28
    CMP AL,0x0                          ; 004fdd2b
    JNZ 0x004fdd17                      ; 004fdd2d
        ;   XREF to: 004fdd17 (CONDITIONAL_JUMP)  ; LAB_004fdd17
    POP EDI                             ; 004fdd2f
        ;   Label: LAB_004fdd2f
    PUSH 0x63063e                       ; 004fdd30 | = " to use this item."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004fdd35
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004fdd3a
    LEA EDI,[ESP + 0x100]               ; 004fdd3d
    MOV ESI,EAX                         ; 004fdd44
    PUSH EDI                            ; 004fdd46
    SUB ECX,ECX                         ; 004fdd47
    DEC ECX                             ; 004fdd49
    MOV AL,0x0                          ; 004fdd4a
    SCASB.REPNE ES:EDI                  ; 004fdd4c
    DEC EDI                             ; 004fdd4e
    MOV AL,byte ptr [ESI]               ; 004fdd4f
        ;   Label: LAB_004fdd4f
    MOV byte ptr [EDI],AL               ; 004fdd51
    CMP AL,0x0                          ; 004fdd53
    JZ 0x004fdd67                       ; 004fdd55
        ;   XREF to: 004fdd67 (CONDITIONAL_JUMP)  ; LAB_004fdd67
    MOV AL,byte ptr [ESI + 0x1]         ; 004fdd57
    ADD ESI,0x2                         ; 004fdd5a
    MOV byte ptr [EDI + 0x1],AL         ; 004fdd5d
    ADD EDI,0x2                         ; 004fdd60
    CMP AL,0x0                          ; 004fdd63
    JNZ 0x004fdd4f                      ; 004fdd65
        ;   XREF to: 004fdd4f (CONDITIONAL_JUMP)  ; LAB_004fdd4f
    POP EDI                             ; 004fdd67
        ;   Label: LAB_004fdd67
    PUSH 0x630651                       ; 004fdd68 | = "CAmmo"
        ;   Label: LAB_004fdd68
    MOV ESI,dword ptr [ESP + 0x340]     ; 004fdd6d
    PUSH ESI                            ; 004fdd74
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004fdd75
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fdd7a
    TEST EAX,EAX                        ; 004fdd7d
    JZ 0x004fdfc4                       ; 004fdd7f
        ;   XREF to: 004fdfc4 (CONDITIONAL_JUMP)  ; LAB_004fdfc4
    MOV EDI,dword ptr [0x008223a4]      ; 004fdd85 | g_CAmmoClassInfo.name_hash
    PUSH EDI                            ; 004fdd8b
    PUSH ESI                            ; 004fdd8c
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004fdd8d
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004fdd92
    ADD EAX,0x2d4                       ; 004fdd95
    PUSH EAX                            ; 004fdd9a
    CALL core_actor.cpp_createActorByName_FUN_0040c430 ; 004fdd9b
        ;   XREF to: 0040c430 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c430(char * class_name)
    ADD ESP,0x4                         ; 004fdda0
    PUSH 0x630657                       ; 004fdda3 | = "This ammo is for your "
    MOV EBX,EAX                         ; 004fdda8
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004fddaa
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004fddaf
    LEA EDI,[ESP + 0x100]               ; 004fddb2
    MOV ESI,EAX                         ; 004fddb9
    PUSH EDI                            ; 004fddbb
    MOV AL,byte ptr [ESI]               ; 004fddbc
        ;   Label: LAB_004fddbc
    MOV byte ptr [EDI],AL               ; 004fddbe
    CMP AL,0x0                          ; 004fddc0
    JZ 0x004fddd4                       ; 004fddc2
        ;   XREF to: 004fddd4 (CONDITIONAL_JUMP)  ; LAB_004fddd4
    MOV AL,byte ptr [ESI + 0x1]         ; 004fddc4
    ADD ESI,0x2                         ; 004fddc7
    MOV byte ptr [EDI + 0x1],AL         ; 004fddca
    ADD EDI,0x2                         ; 004fddcd
    CMP AL,0x0                          ; 004fddd0
    JNZ 0x004fddbc                      ; 004fddd2
        ;   XREF to: 004fddbc (CONDITIONAL_JUMP)  ; LAB_004fddbc
    POP EDI                             ; 004fddd4
        ;   Label: LAB_004fddd4
    PUSH EBX                            ; 004fddd5
    CALL core_inv.cpp_getItemDisplayName_FUN_004fcf00 ; 004fddd6
        ;   XREF to: 004fcf00 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDisplayName_FUN_004fcf00(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004fdddb
    LEA EDI,[ESP + 0x100]               ; 004fddde
    MOV ESI,EAX                         ; 004fdde5
    PUSH EDI                            ; 004fdde7
    SUB ECX,ECX                         ; 004fdde8
    DEC ECX                             ; 004fddea
    MOV AL,0x0                          ; 004fddeb
    SCASB.REPNE ES:EDI                  ; 004fdded
    DEC EDI                             ; 004fddef
    MOV AL,byte ptr [ESI]               ; 004fddf0
        ;   Label: LAB_004fddf0
    MOV byte ptr [EDI],AL               ; 004fddf2
    CMP AL,0x0                          ; 004fddf4
    JZ 0x004fde08                       ; 004fddf6
        ;   XREF to: 004fde08 (CONDITIONAL_JUMP)  ; LAB_004fde08
    MOV AL,byte ptr [ESI + 0x1]         ; 004fddf8
    ADD ESI,0x2                         ; 004fddfb
    MOV byte ptr [EDI + 0x1],AL         ; 004fddfe
    ADD EDI,0x2                         ; 004fde01
    CMP AL,0x0                          ; 004fde04
    JNZ 0x004fddf0                      ; 004fde06
        ;   XREF to: 004fddf0 (CONDITIONAL_JUMP)  ; LAB_004fddf0
    POP EDI                             ; 004fde08
        ;   Label: LAB_004fde08
    PUSH 0x63066e                       ; 004fde09 | = ".  Select your "
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004fde0e
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004fde13
    LEA EDI,[ESP + 0x100]               ; 004fde16
    MOV ESI,EAX                         ; 004fde1d
    PUSH EDI                            ; 004fde1f
    SUB ECX,ECX                         ; 004fde20
    DEC ECX                             ; 004fde22
    MOV AL,0x0                          ; 004fde23
    SCASB.REPNE ES:EDI                  ; 004fde25
    DEC EDI                             ; 004fde27
    MOV AL,byte ptr [ESI]               ; 004fde28
        ;   Label: LAB_004fde28
    MOV byte ptr [EDI],AL               ; 004fde2a
    CMP AL,0x0                          ; 004fde2c
    JZ 0x004fde40                       ; 004fde2e
        ;   XREF to: 004fde40 (CONDITIONAL_JUMP)  ; LAB_004fde40
    MOV AL,byte ptr [ESI + 0x1]         ; 004fde30
    ADD ESI,0x2                         ; 004fde33
    MOV byte ptr [EDI + 0x1],AL         ; 004fde36
    ADD EDI,0x2                         ; 004fde39
    CMP AL,0x0                          ; 004fde3c
    JNZ 0x004fde28                      ; 004fde3e
        ;   XREF to: 004fde28 (CONDITIONAL_JUMP)  ; LAB_004fde28
    POP EDI                             ; 004fde40
        ;   Label: LAB_004fde40
    PUSH EBX                            ; 004fde41
    CALL core_inv.cpp_getItemDisplayName_FUN_004fcf00 ; 004fde42
        ;   XREF to: 004fcf00 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDisplayName_FUN_004fcf00(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004fde47
    LEA EDI,[ESP + 0x100]               ; 004fde4a
    MOV ESI,EAX                         ; 004fde51
    PUSH EDI                            ; 004fde53
    SUB ECX,ECX                         ; 004fde54
    DEC ECX                             ; 004fde56
    MOV AL,0x0                          ; 004fde57
    SCASB.REPNE ES:EDI                  ; 004fde59
    DEC EDI                             ; 004fde5b
    MOV AL,byte ptr [ESI]               ; 004fde5c
        ;   Label: LAB_004fde5c
    MOV byte ptr [EDI],AL               ; 004fde5e
    CMP AL,0x0                          ; 004fde60
    JZ 0x004fde74                       ; 004fde62
        ;   XREF to: 004fde74 (CONDITIONAL_JUMP)  ; LAB_004fde74
    MOV AL,byte ptr [ESI + 0x1]         ; 004fde64
    ADD ESI,0x2                         ; 004fde67
    MOV byte ptr [EDI + 0x1],AL         ; 004fde6a
    ADD EDI,0x2                         ; 004fde6d
    CMP AL,0x0                          ; 004fde70
    JNZ 0x004fde5c                      ; 004fde72
        ;   XREF to: 004fde5c (CONDITIONAL_JUMP)  ; LAB_004fde5c
    POP EDI                             ; 004fde74
        ;   Label: LAB_004fde74
    PUSH 0x63067e                       ; 004fde75 | = " with "
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004fde7a
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004fde7f
    LEA EDI,[ESP + 0x100]               ; 004fde82
    MOV ESI,EAX                         ; 004fde89
    PUSH EDI                            ; 004fde8b
    SUB ECX,ECX                         ; 004fde8c
    DEC ECX                             ; 004fde8e
    MOV AL,0x0                          ; 004fde8f
    SCASB.REPNE ES:EDI                  ; 004fde91
    DEC EDI                             ; 004fde93
    MOV AL,byte ptr [ESI]               ; 004fde94
        ;   Label: LAB_004fde94
    MOV byte ptr [EDI],AL               ; 004fde96
    CMP AL,0x0                          ; 004fde98
    JZ 0x004fdeac                       ; 004fde9a
        ;   XREF to: 004fdeac (CONDITIONAL_JUMP)  ; LAB_004fdeac
    MOV AL,byte ptr [ESI + 0x1]         ; 004fde9c
    ADD ESI,0x2                         ; 004fde9f
    MOV byte ptr [EDI + 0x1],AL         ; 004fdea2
    ADD EDI,0x2                         ; 004fdea5
    CMP AL,0x0                          ; 004fdea8
    JNZ 0x004fde94                      ; 004fdeaa
        ;   XREF to: 004fde94 (CONDITIONAL_JUMP)  ; LAB_004fde94
    POP EDI                             ; 004fdeac
        ;   Label: LAB_004fdeac
    MOV EAX,[0x0067b654]                ; 004fdead | g_CGameInstance | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x7c]      ; 004fdeb2 | g_CGameInstance.key_next_weapon
    PUSH EDX                            ; 004fdeb5
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004fdeb6
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
    ADD ESP,0x4                         ; 004fdebb
    LEA EDI,[ESP + 0x100]               ; 004fdebe
    MOV ESI,EAX                         ; 004fdec5
    PUSH EDI                            ; 004fdec7
    SUB ECX,ECX                         ; 004fdec8
    DEC ECX                             ; 004fdeca
    MOV AL,0x0                          ; 004fdecb
    SCASB.REPNE ES:EDI                  ; 004fdecd
    DEC EDI                             ; 004fdecf
    MOV AL,byte ptr [ESI]               ; 004fded0
        ;   Label: LAB_004fded0
    MOV byte ptr [EDI],AL               ; 004fded2
    CMP AL,0x0                          ; 004fded4
    JZ 0x004fdee8                       ; 004fded6
        ;   XREF to: 004fdee8 (CONDITIONAL_JUMP)  ; LAB_004fdee8
    MOV AL,byte ptr [ESI + 0x1]         ; 004fded8
    ADD ESI,0x2                         ; 004fdedb
    MOV byte ptr [EDI + 0x1],AL         ; 004fdede
    ADD EDI,0x2                         ; 004fdee1
    CMP AL,0x0                          ; 004fdee4
    JNZ 0x004fded0                      ; 004fdee6
        ;   XREF to: 004fded0 (CONDITIONAL_JUMP)  ; LAB_004fded0
    POP EDI                             ; 004fdee8
        ;   Label: LAB_004fdee8
    PUSH 0x630685                       ; 004fdee9 | = " and "
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004fdeee
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004fdef3
    LEA EDI,[ESP + 0x100]               ; 004fdef6
    MOV ESI,EAX                         ; 004fdefd
    PUSH EDI                            ; 004fdeff
    SUB ECX,ECX                         ; 004fdf00
    DEC ECX                             ; 004fdf02
    MOV AL,0x0                          ; 004fdf03
    SCASB.REPNE ES:EDI                  ; 004fdf05
    DEC EDI                             ; 004fdf07
    MOV AL,byte ptr [ESI]               ; 004fdf08
        ;   Label: LAB_004fdf08
    MOV byte ptr [EDI],AL               ; 004fdf0a
    CMP AL,0x0                          ; 004fdf0c
    JZ 0x004fdf20                       ; 004fdf0e
        ;   XREF to: 004fdf20 (CONDITIONAL_JUMP)  ; LAB_004fdf20
    MOV AL,byte ptr [ESI + 0x1]         ; 004fdf10
    ADD ESI,0x2                         ; 004fdf13
    MOV byte ptr [EDI + 0x1],AL         ; 004fdf16
    ADD EDI,0x2                         ; 004fdf19
    CMP AL,0x0                          ; 004fdf1c
    JNZ 0x004fdf08                      ; 004fdf1e
        ;   XREF to: 004fdf08 (CONDITIONAL_JUMP)  ; LAB_004fdf08
    POP EDI                             ; 004fdf20
        ;   Label: LAB_004fdf20
    MOV EAX,[0x0067b654]                ; 004fdf21 | g_CGameInstance | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x80]      ; 004fdf26 | g_CGameInstance.key_prev_weapon
    PUSH ECX                            ; 004fdf2c
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004fdf2d
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
    ADD ESP,0x4                         ; 004fdf32
    LEA EDI,[ESP + 0x100]               ; 004fdf35
    MOV ESI,EAX                         ; 004fdf3c
    PUSH EDI                            ; 004fdf3e
    SUB ECX,ECX                         ; 004fdf3f
    DEC ECX                             ; 004fdf41
    MOV AL,0x0                          ; 004fdf42
    SCASB.REPNE ES:EDI                  ; 004fdf44
    DEC EDI                             ; 004fdf46
    MOV AL,byte ptr [ESI]               ; 004fdf47
        ;   Label: LAB_004fdf47
    MOV byte ptr [EDI],AL               ; 004fdf49
    CMP AL,0x0                          ; 004fdf4b
    JZ 0x004fdf5f                       ; 004fdf4d
        ;   XREF to: 004fdf5f (CONDITIONAL_JUMP)  ; LAB_004fdf5f
    MOV AL,byte ptr [ESI + 0x1]         ; 004fdf4f
    ADD ESI,0x2                         ; 004fdf52
    MOV byte ptr [EDI + 0x1],AL         ; 004fdf55
    ADD EDI,0x2                         ; 004fdf58
    CMP AL,0x0                          ; 004fdf5b
    JNZ 0x004fdf47                      ; 004fdf5d
        ;   XREF to: 004fdf47 (CONDITIONAL_JUMP)  ; LAB_004fdf47
    POP EDI                             ; 004fdf5f
        ;   Label: LAB_004fdf5f
    PUSH 0x63068b                       ; 004fdf60 | = "."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004fdf65
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004fdf6a
    LEA EDI,[ESP + 0x100]               ; 004fdf6d
    MOV ESI,EAX                         ; 004fdf74
    PUSH EDI                            ; 004fdf76
    SUB ECX,ECX                         ; 004fdf77
    DEC ECX                             ; 004fdf79
    MOV AL,0x0                          ; 004fdf7a
    SCASB.REPNE ES:EDI                  ; 004fdf7c
    DEC EDI                             ; 004fdf7e
    MOV AL,byte ptr [ESI]               ; 004fdf7f
        ;   Label: LAB_004fdf7f
    MOV byte ptr [EDI],AL               ; 004fdf81
    CMP AL,0x0                          ; 004fdf83
    JZ 0x004fdf97                       ; 004fdf85
        ;   XREF to: 004fdf97 (CONDITIONAL_JUMP)  ; LAB_004fdf97
    MOV AL,byte ptr [ESI + 0x1]         ; 004fdf87
    ADD ESI,0x2                         ; 004fdf8a
    MOV byte ptr [EDI + 0x1],AL         ; 004fdf8d
    ADD EDI,0x2                         ; 004fdf90
    CMP AL,0x0                          ; 004fdf93
    JNZ 0x004fdf7f                      ; 004fdf95
        ;   XREF to: 004fdf7f (CONDITIONAL_JUMP)  ; LAB_004fdf7f
    POP EDI                             ; 004fdf97
        ;   Label: LAB_004fdf97
    MOV ESI,0x63068d                    ; 004fdf98 | = "..\\core\\inv.cpp"
    MOV EDI,0x219                       ; 004fdf9d
    MOV dword ptr [0x0067d20c],ESI      ; 004fdfa2 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDI      ; 004fdfa8 | g_CurrentDebugLine
    TEST EBX,EBX                        ; 004fdfae
    JZ 0x004fdfc4                       ; 004fdfb0
        ;   XREF to: 004fdfc4 (CONDITIONAL_JUMP)  ; LAB_004fdfc4
    PUSH 0x2                            ; 004fdfb2
    MOV EAX,dword ptr [EBX + 0x154]     ; 004fdfb4
    PUSH EBX                            ; 004fdfba
    CALL dword ptr [EAX + 0xe4]         ; 004fdfbb
    ADD ESP,0x8                         ; 004fdfc1
    PUSH 0x63069d                       ; 004fdfc4 | = "CWeapon"
        ;   Label: LAB_004fdfc4
    MOV EAX,dword ptr [ESP + 0x340]     ; 004fdfc9
    PUSH EAX                            ; 004fdfd0
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004fdfd1
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fdfd6
    TEST EAX,EAX                        ; 004fdfd9
    JZ 0x004fe181                       ; 004fdfdb
        ;   XREF to: 004fe181 (CONDITIONAL_JUMP)  ; LAB_004fe181
    MOV EDX,dword ptr [0x03f95d78]      ; 004fdfe1 | g_CWeaponClassInfo.name_hash
    PUSH EDX                            ; 004fdfe7
    MOV ECX,dword ptr [ESP + 0x340]     ; 004fdfe8
    PUSH ECX                            ; 004fdfef
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004fdff0
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004fdff5
    PUSH 0x6306a5                       ; 004fdff8 | = "Select your "
    MOV EBX,EAX                         ; 004fdffd
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004fdfff
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004fe004
    LEA EDI,[ESP + 0x100]               ; 004fe007
    MOV ESI,EAX                         ; 004fe00e
    PUSH EDI                            ; 004fe010
    MOV AL,byte ptr [ESI]               ; 004fe011
        ;   Label: LAB_004fe011
    MOV byte ptr [EDI],AL               ; 004fe013
    CMP AL,0x0                          ; 004fe015
    JZ 0x004fe029                       ; 004fe017
        ;   XREF to: 004fe029 (CONDITIONAL_JUMP)  ; LAB_004fe029
    MOV AL,byte ptr [ESI + 0x1]         ; 004fe019
    ADD ESI,0x2                         ; 004fe01c
    MOV byte ptr [EDI + 0x1],AL         ; 004fe01f
    ADD EDI,0x2                         ; 004fe022
    CMP AL,0x0                          ; 004fe025
    JNZ 0x004fe011                      ; 004fe027
        ;   XREF to: 004fe011 (CONDITIONAL_JUMP)  ; LAB_004fe011
    POP EDI                             ; 004fe029
        ;   Label: LAB_004fe029
    PUSH EBX                            ; 004fe02a
    CALL core_inv.cpp_getItemDisplayName_FUN_004fcf00 ; 004fe02b
        ;   XREF to: 004fcf00 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDisplayName_FUN_004fcf00(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004fe030
    LEA EDI,[ESP + 0x100]               ; 004fe033
    MOV ESI,EAX                         ; 004fe03a
    PUSH EDI                            ; 004fe03c
    SUB ECX,ECX                         ; 004fe03d
    DEC ECX                             ; 004fe03f
    MOV AL,0x0                          ; 004fe040
    SCASB.REPNE ES:EDI                  ; 004fe042
    DEC EDI                             ; 004fe044
    MOV AL,byte ptr [ESI]               ; 004fe045
        ;   Label: LAB_004fe045
    MOV byte ptr [EDI],AL               ; 004fe047
    CMP AL,0x0                          ; 004fe049
    JZ 0x004fe05d                       ; 004fe04b
        ;   XREF to: 004fe05d (CONDITIONAL_JUMP)  ; LAB_004fe05d
    MOV AL,byte ptr [ESI + 0x1]         ; 004fe04d
    ADD ESI,0x2                         ; 004fe050
    MOV byte ptr [EDI + 0x1],AL         ; 004fe053
    ADD EDI,0x2                         ; 004fe056
    CMP AL,0x0                          ; 004fe059
    JNZ 0x004fe045                      ; 004fe05b
        ;   XREF to: 004fe045 (CONDITIONAL_JUMP)  ; LAB_004fe045
    POP EDI                             ; 004fe05d
        ;   Label: LAB_004fe05d
    PUSH 0x6306b2                       ; 004fe05e | = " with "
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004fe063
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004fe068
    LEA EDI,[ESP + 0x100]               ; 004fe06b
    MOV ESI,EAX                         ; 004fe072
    PUSH EDI                            ; 004fe074
    SUB ECX,ECX                         ; 004fe075
    DEC ECX                             ; 004fe077
    MOV AL,0x0                          ; 004fe078
    SCASB.REPNE ES:EDI                  ; 004fe07a
    DEC EDI                             ; 004fe07c
    MOV AL,byte ptr [ESI]               ; 004fe07d
        ;   Label: LAB_004fe07d
    MOV byte ptr [EDI],AL               ; 004fe07f
    CMP AL,0x0                          ; 004fe081
    JZ 0x004fe095                       ; 004fe083
        ;   XREF to: 004fe095 (CONDITIONAL_JUMP)  ; LAB_004fe095
    MOV AL,byte ptr [ESI + 0x1]         ; 004fe085
    ADD ESI,0x2                         ; 004fe088
    MOV byte ptr [EDI + 0x1],AL         ; 004fe08b
    ADD EDI,0x2                         ; 004fe08e
    CMP AL,0x0                          ; 004fe091
    JNZ 0x004fe07d                      ; 004fe093
        ;   XREF to: 004fe07d (CONDITIONAL_JUMP)  ; LAB_004fe07d
    POP EDI                             ; 004fe095
        ;   Label: LAB_004fe095
    MOV EAX,[0x0067b654]                ; 004fe096 | g_CGameInstance | g_CGamePtr
    MOV EBX,dword ptr [EAX + 0x7c]      ; 004fe09b | g_CGameInstance.key_next_weapon
    PUSH EBX                            ; 004fe09e
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004fe09f
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
    ADD ESP,0x4                         ; 004fe0a4
    LEA EDI,[ESP + 0x100]               ; 004fe0a7
    MOV ESI,EAX                         ; 004fe0ae
    PUSH EDI                            ; 004fe0b0
    SUB ECX,ECX                         ; 004fe0b1
    DEC ECX                             ; 004fe0b3
    MOV AL,0x0                          ; 004fe0b4
    SCASB.REPNE ES:EDI                  ; 004fe0b6
    DEC EDI                             ; 004fe0b8
    MOV AL,byte ptr [ESI]               ; 004fe0b9
        ;   Label: LAB_004fe0b9
    MOV byte ptr [EDI],AL               ; 004fe0bb
    CMP AL,0x0                          ; 004fe0bd
    JZ 0x004fe0d1                       ; 004fe0bf
        ;   XREF to: 004fe0d1 (CONDITIONAL_JUMP)  ; LAB_004fe0d1
    MOV AL,byte ptr [ESI + 0x1]         ; 004fe0c1
    ADD ESI,0x2                         ; 004fe0c4
    MOV byte ptr [EDI + 0x1],AL         ; 004fe0c7
    ADD EDI,0x2                         ; 004fe0ca
    CMP AL,0x0                          ; 004fe0cd
    JNZ 0x004fe0b9                      ; 004fe0cf
        ;   XREF to: 004fe0b9 (CONDITIONAL_JUMP)  ; LAB_004fe0b9
    POP EDI                             ; 004fe0d1
        ;   Label: LAB_004fe0d1
    PUSH 0x6306b9                       ; 004fe0d2 | = " and "
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004fe0d7
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004fe0dc
    LEA EDI,[ESP + 0x100]               ; 004fe0df
    MOV ESI,EAX                         ; 004fe0e6
    PUSH EDI                            ; 004fe0e8
    SUB ECX,ECX                         ; 004fe0e9
    DEC ECX                             ; 004fe0eb
    MOV AL,0x0                          ; 004fe0ec
    SCASB.REPNE ES:EDI                  ; 004fe0ee
    DEC EDI                             ; 004fe0f0
    MOV AL,byte ptr [ESI]               ; 004fe0f1
        ;   Label: LAB_004fe0f1
    MOV byte ptr [EDI],AL               ; 004fe0f3
    CMP AL,0x0                          ; 004fe0f5
    JZ 0x004fe109                       ; 004fe0f7
        ;   XREF to: 004fe109 (CONDITIONAL_JUMP)  ; LAB_004fe109
    MOV AL,byte ptr [ESI + 0x1]         ; 004fe0f9
    ADD ESI,0x2                         ; 004fe0fc
    MOV byte ptr [EDI + 0x1],AL         ; 004fe0ff
    ADD EDI,0x2                         ; 004fe102
    CMP AL,0x0                          ; 004fe105
    JNZ 0x004fe0f1                      ; 004fe107
        ;   XREF to: 004fe0f1 (CONDITIONAL_JUMP)  ; LAB_004fe0f1
    POP EDI                             ; 004fe109
        ;   Label: LAB_004fe109
    MOV EAX,[0x0067b654]                ; 004fe10a | g_CGameInstance | g_CGamePtr
    MOV ESI,dword ptr [EAX + 0x80]      ; 004fe10f | g_CGameInstance.key_prev_weapon
    PUSH ESI                            ; 004fe115
    CALL core_menu.cpp_getKeyDisplayName_FUN_005134e0 ; 004fe116
        ;   XREF to: 005134e0 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_005134e0(int key_code)
    ADD ESP,0x4                         ; 004fe11b
    LEA EDI,[ESP + 0x100]               ; 004fe11e
    MOV ESI,EAX                         ; 004fe125
    PUSH EDI                            ; 004fe127
    SUB ECX,ECX                         ; 004fe128
    DEC ECX                             ; 004fe12a
    MOV AL,0x0                          ; 004fe12b
    SCASB.REPNE ES:EDI                  ; 004fe12d
    DEC EDI                             ; 004fe12f
    MOV AL,byte ptr [ESI]               ; 004fe130
        ;   Label: LAB_004fe130
    MOV byte ptr [EDI],AL               ; 004fe132
    CMP AL,0x0                          ; 004fe134
    JZ 0x004fe148                       ; 004fe136
        ;   XREF to: 004fe148 (CONDITIONAL_JUMP)  ; LAB_004fe148
    MOV AL,byte ptr [ESI + 0x1]         ; 004fe138
    ADD ESI,0x2                         ; 004fe13b
    MOV byte ptr [EDI + 0x1],AL         ; 004fe13e
    ADD EDI,0x2                         ; 004fe141
    CMP AL,0x0                          ; 004fe144
    JNZ 0x004fe130                      ; 004fe146
        ;   XREF to: 004fe130 (CONDITIONAL_JUMP)  ; LAB_004fe130
    POP EDI                             ; 004fe148
        ;   Label: LAB_004fe148
    PUSH 0x6306bf                       ; 004fe149 | = "."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004fe14e
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004fe153
    LEA EDI,[ESP + 0x100]               ; 004fe156
    MOV ESI,EAX                         ; 004fe15d
    PUSH EDI                            ; 004fe15f
    SUB ECX,ECX                         ; 004fe160
    DEC ECX                             ; 004fe162
    MOV AL,0x0                          ; 004fe163
    SCASB.REPNE ES:EDI                  ; 004fe165
    DEC EDI                             ; 004fe167
    MOV AL,byte ptr [ESI]               ; 004fe168
        ;   Label: LAB_004fe168
    MOV byte ptr [EDI],AL               ; 004fe16a
    CMP AL,0x0                          ; 004fe16c
    JZ 0x004fe180                       ; 004fe16e
        ;   XREF to: 004fe180 (CONDITIONAL_JUMP)  ; LAB_004fe180
    MOV AL,byte ptr [ESI + 0x1]         ; 004fe170
    ADD ESI,0x2                         ; 004fe173
    MOV byte ptr [EDI + 0x1],AL         ; 004fe176
    ADD EDI,0x2                         ; 004fe179
    CMP AL,0x0                          ; 004fe17c
    JNZ 0x004fe168                      ; 004fe17e
        ;   XREF to: 004fe168 (CONDITIONAL_JUMP)  ; LAB_004fe168
    POP EDI                             ; 004fe180
        ;   Label: LAB_004fe180
    MOV EAX,ESP                         ; 004fe181
        ;   Label: LAB_004fe181
    PUSH 0x41200000                     ; 004fe183
    PUSH EAX                            ; 004fe188
    MOV EDI,dword ptr [0x0067b654]      ; 004fe189 | g_CGamePtr
    PUSH EDI                            ; 004fe18f | g_CGameInstance
    LEA EBX,[EBP + 0x34c]               ; 004fe190
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004fe196
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004fe19b
    LEA ESI,[ESP + 0x100]               ; 004fe19e
    MOV EDI,EBX                         ; 004fe1a5
    PUSH EDI                            ; 004fe1a7
    MOV AL,byte ptr [ESI]               ; 004fe1a8
        ;   Label: LAB_004fe1a8
    MOV byte ptr [EDI],AL               ; 004fe1aa
    CMP AL,0x0                          ; 004fe1ac
    JZ 0x004fe1c0                       ; 004fe1ae
        ;   XREF to: 004fe1c0 (CONDITIONAL_JUMP)  ; LAB_004fe1c0
    MOV AL,byte ptr [ESI + 0x1]         ; 004fe1b0
    ADD ESI,0x2                         ; 004fe1b3
    MOV byte ptr [EDI + 0x1],AL         ; 004fe1b6
    ADD EDI,0x2                         ; 004fe1b9
    CMP AL,0x0                          ; 004fe1bc
    JNZ 0x004fe1a8                      ; 004fe1be
        ;   XREF to: 004fe1a8 (CONDITIONAL_JUMP)  ; LAB_004fe1a8
    POP EDI                             ; 004fe1c0
        ;   Label: LAB_004fe1c0
    PUSH EBX                            ; 004fe1c1
    MOV EAX,[0x020a5724]                ; 004fe1c2 | g_SmallEditorFont
    PUSH EAX                            ; 004fe1c7
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 004fe1c8
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004fe1cd
    MOV dword ptr [ESP + 0x320],EAX     ; 004fe1d0
    FILD dword ptr [ESP + 0x320]        ; 004fe1d7
    FMUL double ptr [0x006307e2]        ; 004fe1de | DOUBLE_006307e2
    FSTP float ptr [EBP + 0x344]        ; 004fe1e4
    MOV EDX,dword ptr [0x008223a4]      ; 004fe1ea | g_CAmmoClassInfo.name_hash
        ;   Label: LAB_004fe1ea
    PUSH EDX                            ; 004fe1f0
    MOV ECX,dword ptr [ESP + 0x340]     ; 004fe1f1
    PUSH ECX                            ; 004fe1f8
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004fe1f9
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004fe1fe
    MOV dword ptr [ESP + 0x310],EAX     ; 004fe201
    TEST EAX,EAX                        ; 004fe208
    JZ 0x004fe521                       ; 004fe20a
        ;   XREF to: 004fe521 (CONDITIONAL_JUMP)  ; LAB_004fe521
    LEA EBX,[EAX + 0x2d4]               ; 004fe210
    PUSH EBX                            ; 004fe216
    PUSH EAX                            ; 004fe217
    XOR ESI,ESI                         ; 004fe218
    CALL core_ammo.cpp_CAmmo_FUN_00410fd0 ; 004fe21a
        ;   XREF to: 00410fd0 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_FUN_00410fd0(CAmmo * this_ptr, char * weapon_class_name)
    MOV EDI,dword ptr [EBP + 0x8]       ; 004fe21f
    ADD ESP,0x8                         ; 004fe222
    TEST EDI,EDI                        ; 004fe225
    JLE 0x004fe25a                      ; 004fe227
        ;   XREF to: 004fe25a (CONDITIONAL_JUMP)  ; LAB_004fe25a
    MOV EDI,EBP                         ; 004fe229
    MOV dword ptr [ESP + 0x308],EBX     ; 004fe22b
    MOV EBX,dword ptr [0x008223a4]      ; 004fe232 | g_CAmmoClassInfo.name_hash
        ;   Label: LAB_004fe232
    PUSH EBX                            ; 004fe238
    MOV EAX,dword ptr [EDI + 0xc]       ; 004fe239
    PUSH EAX                            ; 004fe23c
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004fe23d
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 004fe242
    ADD ESP,0x8                         ; 004fe244
    TEST EAX,EAX                        ; 004fe247
    JNZ 0x004fe3a7                      ; 004fe249
        ;   XREF to: 004fe3a7 (CONDITIONAL_JUMP)  ; LAB_004fe3a7
    INC ESI                             ; 004fe24f
        ;   Label: LAB_004fe24f
    MOV EAX,dword ptr [EBP + 0x8]       ; 004fe250
    ADD EDI,0x4                         ; 004fe253
    CMP ESI,EAX                         ; 004fe256
    JL 0x004fe232                       ; 004fe258
        ;   XREF to: 004fe232 (CONDITIONAL_JUMP)  ; LAB_004fe232
    MOV ESI,dword ptr [ESP + 0x310]     ; 004fe25a
        ;   Label: LAB_004fe25a
    MOV EBX,EBP                         ; 004fe261
    MOV ECX,dword ptr [EBP + 0x8]       ; 004fe263
    XOR EDX,EDX                         ; 004fe266
    XOR EDI,EDI                         ; 004fe268
    ADD ESI,0x2d4                       ; 004fe26a
    MOV dword ptr [ESP + 0x304],EDX     ; 004fe270
    TEST ECX,ECX                        ; 004fe277
    JLE 0x004fe2a1                      ; 004fe279
        ;   XREF to: 004fe2a1 (CONDITIONAL_JUMP)  ; LAB_004fe2a1
    MOV ECX,dword ptr [0x03f95d78]      ; 004fe27b | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004fe27b
    PUSH ECX                            ; 004fe281
    MOV EAX,dword ptr [EBX + 0xc]       ; 004fe282
    PUSH EAX                            ; 004fe285
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004fe286
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004fe28b
    TEST EAX,EAX                        ; 004fe28e
    JNZ 0x004fe435                      ; 004fe290
        ;   XREF to: 004fe435 (CONDITIONAL_JUMP)  ; LAB_004fe435
    INC EDI                             ; 004fe296
        ;   Label: LAB_004fe296
    MOV EDX,dword ptr [EBP + 0x8]       ; 004fe297
    ADD EBX,0x4                         ; 004fe29a
    CMP EDI,EDX                         ; 004fe29d
    JL 0x004fe27b                       ; 004fe29f
        ;   XREF to: 004fe27b (CONDITIONAL_JUMP)  ; LAB_004fe27b
    CMP dword ptr [ESP + 0x304],0x0     ; 004fe2a1
        ;   Label: LAB_004fe2a1
    JZ 0x004fe50b                       ; 004fe2a9
        ;   XREF to: 004fe50b (CONDITIONAL_JUMP)  ; LAB_004fe50b
    MOV EAX,dword ptr [ESP + 0x310]     ; 004fe2af
        ;   Label: LAB_004fe2af
    MOV ESI,EBP                         ; 004fe2b6
    MOV EDX,dword ptr [EBP + 0x8]       ; 004fe2b8
    ADD EAX,0x2d4                       ; 004fe2bb
    XOR EDI,EDI                         ; 004fe2c0
    MOV dword ptr [ESP + 0x30c],EAX     ; 004fe2c2
    TEST EDX,EDX                        ; 004fe2c9
    JLE 0x004fe2f4                      ; 004fe2cb
        ;   XREF to: 004fe2f4 (CONDITIONAL_JUMP)  ; LAB_004fe2f4
    MOV EAX,[0x03f95d78]                ; 004fe2cd | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004fe2cd
    PUSH EAX                            ; 004fe2d2
    MOV EDX,dword ptr [ESI + 0xc]       ; 004fe2d3
    PUSH EDX                            ; 004fe2d6
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004fe2d7
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 004fe2dc
    ADD ESP,0x8                         ; 004fe2de
    TEST EAX,EAX                        ; 004fe2e1
    JNZ 0x004fe455                      ; 004fe2e3
        ;   XREF to: 004fe455 (CONDITIONAL_JUMP)  ; LAB_004fe455
    INC EDI                             ; 004fe2e9
        ;   Label: LAB_004fe2e9
    MOV ECX,dword ptr [EBP + 0x8]       ; 004fe2ea
    ADD ESI,0x4                         ; 004fe2ed
    CMP EDI,ECX                         ; 004fe2f0
    JL 0x004fe2cd                       ; 004fe2f2
        ;   XREF to: 004fe2cd (CONDITIONAL_JUMP)  ; LAB_004fe2cd
    MOV EBX,dword ptr [ESP + 0x30c]     ; 004fe2f4
        ;   Label: LAB_004fe2f4
    PUSH EBX                            ; 004fe2fb
    CALL core_actor.cpp_createActorByName_FUN_0040c430 ; 004fe2fc
        ;   XREF to: 0040c430 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c430(char * class_name)
    ADD ESP,0x4                         ; 004fe301
    PUSH EAX                            ; 004fe304
    MOV ESI,dword ptr [0x0067d550]      ; 004fe305 | g_CDemonMissionPtr
    PUSH ESI                            ; 004fe30b | g_CDemonMissionInstance
    MOV EBX,EAX                         ; 004fe30c
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_00524700 ; 004fe30e
        ;   XREF to: 00524700 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_00524700(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004fe313
    MOV EAX,dword ptr [EBX + 0x154]     ; 004fe316
    PUSH EBX                            ; 004fe31c
    CALL dword ptr [EAX]                ; 004fe31d
    ADD ESP,0x4                         ; 004fe31f
    MOV EAX,dword ptr [ESP + 0x310]     ; 004fe322
    MOV EAX,dword ptr [EAX + 0x314]     ; 004fe329
    MOV dword ptr [EBX + 0x568],EAX     ; 004fe32f
    MOV EAX,dword ptr [ESP + 0x310]     ; 004fe335
    MOV EAX,dword ptr [EAX + 0x318]     ; 004fe33c
    MOV dword ptr [EBX + 0x56c],EAX     ; 004fe342
    MOV EDI,dword ptr [EBP + 0x4]       ; 004fe348
    PUSH EDI                            ; 004fe34b
    MOV EAX,dword ptr [EBX + 0x154]     ; 004fe34c
    PUSH EBX                            ; 004fe352
    CALL dword ptr [EAX + 0x80]         ; 004fe353
    ADD ESP,0x8                         ; 004fe359
    MOV EAX,dword ptr [EBP + 0x8]       ; 004fe35c
    PUSH 0x1                            ; 004fe35f
    MOV dword ptr [EBP + EAX*0x4 + 0xc],EBX ; 004fe361
    MOV EAX,dword ptr [ESP + 0x340]     ; 004fe365
    MOV ECX,dword ptr [EBP + 0x8]       ; 004fe36c
    PUSH EAX                            ; 004fe36f
    MOV EDX,dword ptr [0x0067d550]      ; 004fe370 | g_CDemonMissionInstance | g_CDemonMissionPtr
    INC ECX                             ; 004fe376
    PUSH EDX                            ; 004fe377 | g_CDemonMissionInstance
    MOV dword ptr [EBP + 0x8],ECX       ; 004fe378
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0 ; 004fe37b
        ;   XREF to: 005240a0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0(CDemonMission * this_ptr, CDemonActor * actor, uint flags)
    ADD ESP,0xc                         ; 004fe380
    PUSH 0x630709                       ; 004fe383 | = "Found new type of ammo for existing w..."
    MOV EBX,dword ptr [0x0066e8e0]      ; 004fe388 | g_CConsoleInstance | g_CConsolePtr
    PUSH EBX                            ; 004fe38e | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004fe38f
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    MOV EAX,0x1                         ; 004fe394
    ADD ESP,0x8                         ; 004fe399
    ADD ESP,0x324                       ; 004fe39c
    POP EBP                             ; 004fe3a2
    POP EDI                             ; 004fe3a3
    POP ESI                             ; 004fe3a4
    POP EBX                             ; 004fe3a5
    RET                                 ; 004fe3a6
    ADD EAX,0x2d4                       ; 004fe3a7
        ;   Label: LAB_004fe3a7
    PUSH EAX                            ; 004fe3ac
    MOV EDX,dword ptr [ESP + 0x30c]     ; 004fe3ad
    PUSH EDX                            ; 004fe3b4
    CALL crt_string.c_strcmp_FUN_005fef20 ; 004fe3b5
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 004fe3ba
    TEST EAX,EAX                        ; 004fe3bd
    JNZ 0x004fe24f                      ; 004fe3bf
        ;   XREF to: 004fe24f (CONDITIONAL_JUMP)  ; LAB_004fe24f
    MOV EAX,dword ptr [ESP + 0x310]     ; 004fe3c5
    MOV ECX,dword ptr [EBX + 0x318]     ; 004fe3cc
    CMP ECX,dword ptr [EAX + 0x318]     ; 004fe3d2
    JNZ 0x004fe24f                      ; 004fe3d8
        ;   XREF to: 004fe24f (CONDITIONAL_JUMP)  ; LAB_004fe24f
    MOV EAX,dword ptr [ESP + 0x310]     ; 004fe3de
    PUSH 0x6306c1                       ; 004fe3e5 | = "Found existing ammo, but no weapon\n"
    MOV ESI,dword ptr [EBX + 0x314]     ; 004fe3ea
    MOV EAX,dword ptr [EAX + 0x314]     ; 004fe3f0
    MOV EDI,dword ptr [0x0066e8e0]      ; 004fe3f6 | g_CConsolePtr
    ADD ESI,EAX                         ; 004fe3fc
    PUSH EDI                            ; 004fe3fe | g_CConsoleInstance
    MOV dword ptr [EBX + 0x314],ESI     ; 004fe3ff
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004fe405
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004fe40a
    PUSH 0x1                            ; 004fe40d
    MOV EBP,dword ptr [ESP + 0x340]     ; 004fe40f
    PUSH EBP                            ; 004fe416
    MOV EAX,[0x0067d550]                ; 004fe417 | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH EAX                            ; 004fe41c | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0 ; 004fe41d
        ;   XREF to: 005240a0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0(CDemonMission * this_ptr, CDemonActor * actor, uint flags)
    MOV EAX,0x1                         ; 004fe422
    ADD ESP,0xc                         ; 004fe427
    ADD ESP,0x324                       ; 004fe42a
    POP EBP                             ; 004fe430
    POP EDI                             ; 004fe431
    POP ESI                             ; 004fe432
    POP EBX                             ; 004fe433
    RET                                 ; 004fe434
    PUSH EAX                            ; 004fe435
        ;   Label: LAB_004fe435
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90 ; 004fe436
        ;   XREF to: 00408b90 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004fe43b
    PUSH EAX                            ; 004fe43e
    PUSH ESI                            ; 004fe43f
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004fe440
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004fe445
    TEST EAX,EAX                        ; 004fe448
    JNZ 0x004fe296                      ; 004fe44a
        ;   XREF to: 004fe296 (CONDITIONAL_JUMP)  ; LAB_004fe296
    JMP 0x004fe2af                      ; 004fe450
        ;   XREF to: 004fe2af (UNCONDITIONAL_JUMP)  ; LAB_004fe2af
    PUSH EAX                            ; 004fe455
        ;   Label: LAB_004fe455
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90 ; 004fe456
        ;   XREF to: 00408b90 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004fe45b
    PUSH EAX                            ; 004fe45e
    MOV ECX,dword ptr [ESP + 0x310]     ; 004fe45f
    PUSH ECX                            ; 004fe466
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004fe467
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004fe46c
    TEST EAX,EAX                        ; 004fe46f
    JNZ 0x004fe2e9                      ; 004fe471
        ;   XREF to: 004fe2e9 (CONDITIONAL_JUMP)  ; LAB_004fe2e9
    MOV EDX,dword ptr [ESP + 0x310]     ; 004fe477
    MOV EAX,dword ptr [EBX + 0x56c]     ; 004fe47e
    CMP EAX,dword ptr [EDX + 0x318]     ; 004fe484
    JNZ 0x004fe2e9                      ; 004fe48a
        ;   XREF to: 004fe2e9 (CONDITIONAL_JUMP)  ; LAB_004fe2e9
    MOV EDI,dword ptr [0x03f873dc]      ; 004fe490 | g_CTommyGunClassInfo.name_hash
    MOV EAX,dword ptr [EDX + 0x314]     ; 004fe496
    MOV ESI,dword ptr [EBX + 0x568]     ; 004fe49c
    PUSH EDI                            ; 004fe4a2
    ADD ESI,EAX                         ; 004fe4a3
    PUSH EBX                            ; 004fe4a5
    MOV dword ptr [EBX + 0x568],ESI     ; 004fe4a6
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004fe4ac
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004fe4b1
    TEST EAX,EAX                        ; 004fe4b4
    JZ 0x004fe4ce                       ; 004fe4b6
        ;   XREF to: 004fe4ce (CONDITIONAL_JUMP)  ; LAB_004fe4ce
    CMP dword ptr [EAX + 0x568],0xc8    ; 004fe4b8
    JLE 0x004fe4ce                      ; 004fe4c2
        ;   XREF to: 004fe4ce (CONDITIONAL_JUMP)  ; LAB_004fe4ce
    MOV dword ptr [EAX + 0x568],0xc8    ; 004fe4c4
    PUSH 0x1                            ; 004fe4ce
        ;   Label: LAB_004fe4ce
    MOV EAX,dword ptr [ESP + 0x340]     ; 004fe4d0
    PUSH EAX                            ; 004fe4d7
    MOV EDX,dword ptr [0x0067d550]      ; 004fe4d8 | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH EDX                            ; 004fe4de | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0 ; 004fe4df
        ;   XREF to: 005240a0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0(CDemonMission * this_ptr, CDemonActor * actor, uint flags)
    ADD ESP,0xc                         ; 004fe4e4
    PUSH 0x6306e5                       ; 004fe4e7 | = "Found weapon to put this ammo into\n"
    MOV ECX,dword ptr [0x0066e8e0]      ; 004fe4ec | g_CConsoleInstance | g_CConsolePtr
    PUSH ECX                            ; 004fe4f2 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004fe4f3
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    MOV EAX,0x1                         ; 004fe4f8
    ADD ESP,0x8                         ; 004fe4fd
    ADD ESP,0x324                       ; 004fe500
    POP EBP                             ; 004fe506
    POP EDI                             ; 004fe507
    POP ESI                             ; 004fe508
    POP EBX                             ; 004fe509
    RET                                 ; 004fe50a
    PUSH 0x630750                       ; 004fe50b | = "CDynamite"
        ;   Label: LAB_004fe50b
    PUSH ESI                            ; 004fe510
    CALL crt_string.c_strcmp_FUN_005fef20 ; 004fe511
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 004fe516
    TEST EAX,EAX                        ; 004fe519
    JZ 0x004fe5a7                       ; 004fe51b
        ;   XREF to: 004fe5a7 (CONDITIONAL_JUMP)  ; LAB_004fe5a7
    MOV ECX,dword ptr [0x03f95d78]      ; 004fe521 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004fe521
    PUSH ECX                            ; 004fe527
    MOV EBX,dword ptr [ESP + 0x340]     ; 004fe528
    PUSH EBX                            ; 004fe52f
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004fe530
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004fe535
    MOV EDI,EAX                         ; 004fe538
    TEST EAX,EAX                        ; 004fe53a
    JNZ 0x004fe639                      ; 004fe53c
        ;   XREF to: 004fe639 (CONDITIONAL_JUMP)  ; LAB_004fe639
    MOV EDX,dword ptr [ESP + 0x33c]     ; 004fe542
        ;   Label: LAB_004fe542
    MOV EAX,dword ptr [EBP + 0x8]       ; 004fe549
    PUSH EDX                            ; 004fe54c
    MOV dword ptr [EBP + EAX*0x4 + 0xc],EDX ; 004fe54d
    MOV ESI,dword ptr [0x0067d550]      ; 004fe551 | g_CDemonMissionPtr
    MOV EAX,dword ptr [EBP + 0x8]       ; 004fe557
    PUSH ESI                            ; 004fe55a | g_CDemonMissionInstance
    INC EAX                             ; 004fe55b
    MOV EBX,EDX                         ; 004fe55c
    MOV dword ptr [EBP + 0x8],EAX       ; 004fe55e
    CALL core_mission.cpp_CDemonMission_removeActorFromList_FUN_00523be0 ; 004fe561
        ;   XREF to: 00523be0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeActorFromList_FUN_00523be0(CDemonMission * this_ptr, CDemonActor * actor_ptr)
    ADD ESP,0x8                         ; 004fe566
    MOV EAX,EBX                         ; 004fe569
    PUSH EBP                            ; 004fe56b
    MOV EDX,EBX                         ; 004fe56c
    MOV EAX,dword ptr [EAX + 0x154]     ; 004fe56e
    PUSH EDX                            ; 004fe574
    CALL dword ptr [EAX + 0x64]         ; 004fe575
    ADD ESP,0x8                         ; 004fe578
    TEST EDI,EDI                        ; 004fe57b
    JZ 0x004fe597                       ; 004fe57d
        ;   XREF to: 004fe597 (CONDITIONAL_JUMP)  ; LAB_004fe597
    MOV EAX,dword ptr [EBP + 0x330]     ; 004fe57f
    TEST EAX,EAX                        ; 004fe585
    JNZ 0x004fe597                      ; 004fe587
        ;   XREF to: 004fe597 (CONDITIONAL_JUMP)  ; LAB_004fe597
    PUSH 0x1                            ; 004fe589
    PUSH 0x5                            ; 004fe58b
    PUSH EDI                            ; 004fe58d
    PUSH EBP                            ; 004fe58e
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004feb10 ; 004fe58f
        ;   XREF to: 004feb10 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004feb10(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004fe594
    MOV EAX,0x1                         ; 004fe597
        ;   Label: LAB_004fe597
    ADD ESP,0x324                       ; 004fe59c
    POP EBP                             ; 004fe5a2
    POP EDI                             ; 004fe5a3
    POP ESI                             ; 004fe5a4
    POP EBX                             ; 004fe5a5
    RET                                 ; 004fe5a6
    PUSH 0x63075a                       ; 004fe5a7 | = "CDynamite"
        ;   Label: LAB_004fe5a7
    CALL core_actor.cpp_createActorByName_FUN_0040c430 ; 004fe5ac
        ;   XREF to: 0040c430 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c430(char * class_name)
    ADD ESP,0x4                         ; 004fe5b1
    PUSH EAX                            ; 004fe5b4
    MOV ESI,dword ptr [0x0067d550]      ; 004fe5b5 | g_CDemonMissionPtr
    PUSH ESI                            ; 004fe5bb | g_CDemonMissionInstance
    MOV EBX,EAX                         ; 004fe5bc
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_00524700 ; 004fe5be
        ;   XREF to: 00524700 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_00524700(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004fe5c3
    MOV EAX,dword ptr [EBX + 0x154]     ; 004fe5c6
    PUSH EBX                            ; 004fe5cc
    CALL dword ptr [EAX]                ; 004fe5cd
    ADD ESP,0x4                         ; 004fe5cf
    MOV EAX,dword ptr [ESP + 0x310]     ; 004fe5d2
    MOV EAX,dword ptr [EAX + 0x314]     ; 004fe5d9
    MOV dword ptr [EBX + 0x568],EAX     ; 004fe5df
    MOV EDI,dword ptr [EBP + 0x4]       ; 004fe5e5
    PUSH EDI                            ; 004fe5e8
    MOV EAX,dword ptr [EBX + 0x154]     ; 004fe5e9
    PUSH EBX                            ; 004fe5ef
    CALL dword ptr [EAX + 0x80]         ; 004fe5f0
    ADD ESP,0x8                         ; 004fe5f6
    MOV EAX,dword ptr [ESP + 0x33c]     ; 004fe5f9
    PUSH EAX                            ; 004fe600
    CALL core_actor.cpp_deleteActor_FUN_00408820 ; 004fe601
        ;   XREF to: 00408820 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_deleteActor_FUN_00408820(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004fe606
    PUSH 0x630764                       ; 004fe609 | = "Found dynamite.  Creating weapon for ..."
    MOV EDX,dword ptr [0x0066e8e0]      ; 004fe60e | g_CConsoleInstance | g_CConsolePtr
    PUSH EDX                            ; 004fe614 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004fe615
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004fe61a
    PUSH 0x1                            ; 004fe61d
    PUSH EBX                            ; 004fe61f
    PUSH EBP                            ; 004fe620
    CALL core_inv.cpp_CInventory_addItem_FUN_004fd600 ; 004fe621
        ;   XREF to: 004fd600 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004fd600(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    MOV EAX,0x1                         ; 004fe626
    ADD ESP,0xc                         ; 004fe62b
    ADD ESP,0x324                       ; 004fe62e
    POP EBP                             ; 004fe634
    POP EDI                             ; 004fe635
    POP ESI                             ; 004fe636
    POP EBX                             ; 004fe637
    RET                                 ; 004fe638
    MOV ESI,dword ptr [0x02f0d928]      ; 004fe639 | g_CMeleeClassInfo.name_hash
        ;   Label: LAB_004fe639
    PUSH ESI                            ; 004fe63f
    PUSH EAX                            ; 004fe640
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004fe641
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004fe646
    TEST EAX,EAX                        ; 004fe649
    JNZ 0x004fe729                      ; 004fe64b
        ;   XREF to: 004fe729 (CONDITIONAL_JUMP)  ; LAB_004fe729
    MOV EAX,dword ptr [EBP + 0x8]       ; 004fe651
    XOR ESI,ESI                         ; 004fe654
    TEST EAX,EAX                        ; 004fe656
    JLE 0x004fe69d                      ; 004fe658
        ;   XREF to: 004fe69d (CONDITIONAL_JUMP)  ; LAB_004fe69d
    MOV dword ptr [ESP + 0x314],EBP     ; 004fe65a
    MOV EAX,[0x03f95d78]                ; 004fe661 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004fe661
    PUSH EAX                            ; 004fe666
    MOV EAX,dword ptr [ESP + 0x318]     ; 004fe667
    MOV EDX,dword ptr [EAX + 0xc]       ; 004fe66e
    PUSH EDX                            ; 004fe671
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004fe672
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 004fe677
    ADD ESP,0x8                         ; 004fe679
    TEST EAX,EAX                        ; 004fe67c
    JNZ 0x004fe775                      ; 004fe67e
        ;   XREF to: 004fe775 (CONDITIONAL_JUMP)  ; LAB_004fe775
    MOV EAX,dword ptr [ESP + 0x314]     ; 004fe684
        ;   Label: LAB_004fe684
    INC ESI                             ; 004fe68b
    ADD EAX,0x4                         ; 004fe68c
    MOV EDX,dword ptr [EBP + 0x8]       ; 004fe68f
    MOV dword ptr [ESP + 0x314],EAX     ; 004fe692
    CMP ESI,EDX                         ; 004fe699
    JL 0x004fe661                       ; 004fe69b
        ;   XREF to: 004fe661 (CONDITIONAL_JUMP)  ; LAB_004fe661
    XOR EBX,EBX                         ; 004fe69d
        ;   Label: LAB_004fe69d
    MOV ESI,dword ptr [EBP + 0x8]       ; 004fe69f
    MOV dword ptr [ESP + 0x318],EBX     ; 004fe6a2
    TEST ESI,ESI                        ; 004fe6a9
    JLE 0x004fe6ff                      ; 004fe6ab
        ;   XREF to: 004fe6ff (CONDITIONAL_JUMP)  ; LAB_004fe6ff
    MOV dword ptr [ESP + 0x31c],EBP     ; 004fe6ad
    MOV ESI,dword ptr [0x008223a4]      ; 004fe6b4 | g_CAmmoClassInfo.name_hash
        ;   Label: LAB_004fe6b4
    MOV EAX,dword ptr [ESP + 0x31c]     ; 004fe6ba
    PUSH ESI                            ; 004fe6c1
    MOV EDX,dword ptr [EAX + 0xc]       ; 004fe6c2
    PUSH EDX                            ; 004fe6c5
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004fe6c6
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 004fe6cb
    ADD ESP,0x8                         ; 004fe6cd
    TEST EAX,EAX                        ; 004fe6d0
    JNZ 0x004fe825                      ; 004fe6d2
        ;   XREF to: 004fe825 (CONDITIONAL_JUMP)  ; LAB_004fe825
    MOV ESI,dword ptr [ESP + 0x31c]     ; 004fe6d8
        ;   Label: LAB_004fe6d8
    MOV EAX,dword ptr [ESP + 0x318]     ; 004fe6df
    MOV EDX,dword ptr [EBP + 0x8]       ; 004fe6e6
    ADD ESI,0x4                         ; 004fe6e9
    INC EAX                             ; 004fe6ec
    MOV dword ptr [ESP + 0x31c],ESI     ; 004fe6ed
    MOV dword ptr [ESP + 0x318],EAX     ; 004fe6f4
    CMP EAX,EDX                         ; 004fe6fb
    JL 0x004fe6b4                       ; 004fe6fd
        ;   XREF to: 004fe6b4 (CONDITIONAL_JUMP)  ; LAB_004fe6b4
    TEST EBX,EBX                        ; 004fe6ff
        ;   Label: LAB_004fe6ff
    JZ 0x004fe542                       ; 004fe701
        ;   XREF to: 004fe542 (CONDITIONAL_JUMP)  ; LAB_004fe542
    PUSH 0x1                            ; 004fe707
    PUSH EDI                            ; 004fe709
    MOV ECX,dword ptr [0x0067d550]      ; 004fe70a | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH ECX                            ; 004fe710 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0 ; 004fe711
        ;   XREF to: 005240a0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0(CDemonMission * this_ptr, CDemonActor * actor, uint flags)
    MOV EAX,0x1                         ; 004fe716
    ADD ESP,0xc                         ; 004fe71b
    ADD ESP,0x324                       ; 004fe71e
    POP EBP                             ; 004fe724
    POP EDI                             ; 004fe725
    POP ESI                             ; 004fe726
    POP EBX                             ; 004fe727
    RET                                 ; 004fe728
    MOV EAX,dword ptr [EBP + 0x8]       ; 004fe729
        ;   Label: LAB_004fe729
    PUSH 0x0                            ; 004fe72c
    MOV dword ptr [EBP + EAX*0x4 + 0xc],EBX ; 004fe72e
    PUSH EBX                            ; 004fe732
    MOV EBX,dword ptr [EBP + 0x8]       ; 004fe733
    MOV ECX,dword ptr [0x0067d550]      ; 004fe736 | g_CDemonMissionInstance | g_CDemonMissionPtr
    INC EBX                             ; 004fe73c
    PUSH ECX                            ; 004fe73d | g_CDemonMissionInstance
    MOV dword ptr [EBP + 0x8],EBX       ; 004fe73e
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0 ; 004fe741
        ;   XREF to: 005240a0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0(CDemonMission * this_ptr, CDemonActor * actor, uint flags)
    ADD ESP,0xc                         ; 004fe746
    PUSH EBP                            ; 004fe749
    MOV ESI,dword ptr [ESP + 0x340]     ; 004fe74a
    MOV EAX,dword ptr [ESP + 0x340]     ; 004fe751
    PUSH ESI                            ; 004fe758
    MOV EAX,dword ptr [EAX + 0x154]     ; 004fe759
    CALL dword ptr [EAX + 0x64]         ; 004fe75f
    MOV EAX,0x1                         ; 004fe762
    ADD ESP,0x8                         ; 004fe767
    ADD ESP,0x324                       ; 004fe76a
    POP EBP                             ; 004fe770
    POP EDI                             ; 004fe771
    POP ESI                             ; 004fe772
    POP EBX                             ; 004fe773
    RET                                 ; 004fe774
    PUSH EAX                            ; 004fe775
        ;   Label: LAB_004fe775
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90 ; 004fe776
        ;   XREF to: 00408b90 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004fe77b
    PUSH EAX                            ; 004fe77e
    PUSH EDI                            ; 004fe77f
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90 ; 004fe780
        ;   XREF to: 00408b90 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004fe785
    PUSH EAX                            ; 004fe788
    CALL crt_string.c_strcmp_FUN_005fef20 ; 004fe789
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 004fe78e
    TEST EAX,EAX                        ; 004fe791
    JNZ 0x004fe684                      ; 004fe793
        ;   XREF to: 004fe684 (CONDITIONAL_JUMP)  ; LAB_004fe684
    MOV ECX,dword ptr [EBX + 0x56c]     ; 004fe799
    CMP ECX,dword ptr [EDI + 0x56c]     ; 004fe79f
    JNZ 0x004fe684                      ; 004fe7a5
        ;   XREF to: 004fe684 (CONDITIONAL_JUMP)  ; LAB_004fe684
    MOV EAX,dword ptr [EDI + 0x568]     ; 004fe7ab
    MOV EDI,dword ptr [0x03f873dc]      ; 004fe7b1 | g_CTommyGunClassInfo.name_hash
    MOV ESI,dword ptr [EBX + 0x568]     ; 004fe7b7
    PUSH EDI                            ; 004fe7bd
    ADD ESI,EAX                         ; 004fe7be
    PUSH EBX                            ; 004fe7c0
    MOV dword ptr [EBX + 0x568],ESI     ; 004fe7c1
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004fe7c7
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004fe7cc
    TEST EAX,EAX                        ; 004fe7cf
    JZ 0x004fe7e9                       ; 004fe7d1
        ;   XREF to: 004fe7e9 (CONDITIONAL_JUMP)  ; LAB_004fe7e9
    CMP dword ptr [EAX + 0x568],0xc8    ; 004fe7d3
    JLE 0x004fe7e9                      ; 004fe7dd
        ;   XREF to: 004fe7e9 (CONDITIONAL_JUMP)  ; LAB_004fe7e9
    MOV dword ptr [EAX + 0x568],0xc8    ; 004fe7df
    PUSH 0x63078e                       ; 004fe7e9 | = "Found same weapon, increasing ammoCou..."
        ;   Label: LAB_004fe7e9
    MOV EAX,[0x0066e8e0]                ; 004fe7ee | g_CConsoleInstance | g_CConsolePtr
    PUSH EAX                            ; 004fe7f3 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004fe7f4
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004fe7f9
    PUSH 0x1                            ; 004fe7fc
    MOV EDX,dword ptr [ESP + 0x340]     ; 004fe7fe
    PUSH EDX                            ; 004fe805
    MOV ECX,dword ptr [0x0067d550]      ; 004fe806 | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH ECX                            ; 004fe80c | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0 ; 004fe80d
        ;   XREF to: 005240a0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0(CDemonMission * this_ptr, CDemonActor * actor, uint flags)
    MOV EAX,0x1                         ; 004fe812
    ADD ESP,0xc                         ; 004fe817
    ADD ESP,0x324                       ; 004fe81a
    POP EBP                             ; 004fe820
    POP EDI                             ; 004fe821
    POP ESI                             ; 004fe822
    POP EBX                             ; 004fe823
    RET                                 ; 004fe824
    PUSH EDI                            ; 004fe825
        ;   Label: LAB_004fe825
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90 ; 004fe826
        ;   XREF to: 00408b90 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004fe82b
    PUSH EAX                            ; 004fe82e
    LEA EAX,[ESI + 0x2d4]               ; 004fe82f
    PUSH EAX                            ; 004fe835
    CALL crt_string.c_strcmp_FUN_005fef20 ; 004fe836
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 004fe83b
    TEST EAX,EAX                        ; 004fe83e
    JNZ 0x004fe6d8                      ; 004fe840
        ;   XREF to: 004fe6d8 (CONDITIONAL_JUMP)  ; LAB_004fe6d8
    PUSH EDI                            ; 004fe846
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90 ; 004fe847
        ;   XREF to: 00408b90 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004fe84c
    PUSH EAX                            ; 004fe84f
    CALL core_actor.cpp_createActorByName_FUN_0040c430 ; 004fe850
        ;   XREF to: 0040c430 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c430(char * class_name)
    ADD ESP,0x4                         ; 004fe855
    PUSH EAX                            ; 004fe858
    MOV ECX,dword ptr [0x0067d550]      ; 004fe859 | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH ECX                            ; 004fe85f | g_CDemonMissionInstance
    MOV EBX,EAX                         ; 004fe860
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_00524700 ; 004fe862
        ;   XREF to: 00524700 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_00524700(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004fe867
    MOV EAX,dword ptr [EBX + 0x154]     ; 004fe86a
    PUSH EBX                            ; 004fe870
    CALL dword ptr [EAX]                ; 004fe871
    MOV EAX,dword ptr [ESI + 0x314]     ; 004fe873
    MOV dword ptr [EBX + 0x568],EAX     ; 004fe879
    MOV EAX,dword ptr [ESI + 0x318]     ; 004fe87f
    MOV dword ptr [EBX + 0x56c],EAX     ; 004fe885
    ADD ESP,0x4                         ; 004fe88b
    MOV ESI,dword ptr [EBP + 0x4]       ; 004fe88e
    PUSH ESI                            ; 004fe891
    MOV EAX,dword ptr [EBX + 0x154]     ; 004fe892
    PUSH EBX                            ; 004fe898
    CALL dword ptr [EAX + 0x80]         ; 004fe899
    ADD ESP,0x8                         ; 004fe89f
    PUSH EBP                            ; 004fe8a2
    MOV EAX,dword ptr [EBX + 0x154]     ; 004fe8a3
    PUSH EBX                            ; 004fe8a9
    CALL dword ptr [EAX + 0x64]         ; 004fe8aa
    ADD ESP,0x8                         ; 004fe8ad
    MOV EAX,dword ptr [ESP + 0x31c]     ; 004fe8b0
    MOV EDX,dword ptr [EAX + 0xc]       ; 004fe8b7
    PUSH EDX                            ; 004fe8ba
    CALL core_actor.cpp_deleteActor_FUN_00408820 ; 004fe8bb
        ;   XREF to: 00408820 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_deleteActor_FUN_00408820(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004fe8c0
    MOV EAX,dword ptr [ESP + 0x31c]     ; 004fe8c3
    PUSH EDI                            ; 004fe8ca
    MOV dword ptr [EAX + 0xc],EBX       ; 004fe8cb
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90 ; 004fe8ce
        ;   XREF to: 00408b90 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004fe8d3
    PUSH EAX                            ; 004fe8d6
    PUSH 0x6307b7                       ; 004fe8d7 | = "Converting existing ammo for %s to we..."
    MOV ECX,dword ptr [0x0066e8e0]      ; 004fe8dc | g_CConsoleInstance | g_CConsolePtr
    PUSH ECX                            ; 004fe8e2 | g_CConsoleInstance
    MOV EBX,0x1                         ; 004fe8e3
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004fe8e8
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004fe8ed
    JMP 0x004fe6d8                      ; 004fe8f0
        ;   XREF to: 004fe6d8 (UNCONDITIONAL_JUMP)  ; LAB_004fe6d8

