; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_inv_cpp_CInventory_addItem_FUN_004bf360(CInventory *this_ptr,CDemonActor *item_actor,int show_tutorial_message)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   item_actor
; int              Stack[0xc]:4   show_tutorial_message
;
; XREF[10]:
;   core_ammobox.cpp_CAmmoBox_FUN_0040f1a0 at 0040f1c4
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a115f
;   core_game.cpp_FUN_004a03a0 at 004a0420
;   core_game.cpp_giveHeroWeapon_FUN_004a02e0 at 004a0364
;   core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004b5c70 at 004b5c9c
;   core_hero.cpp_CHero_createDefaultWeapon_FUN_004b4dd0 at 004b4e37
;   core_hostage.cpp_CHostage_process_FUN_004b6d80 at 004b7078
;   core_inv.cpp_CInventory_FUN_004c0640 at 004c06f7
;   core_scat.cpp_CScat_createDefaultWeapon_FUN_004fbe80 at 004fbeca
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00500788
;
; Referenced Globals:
;   TerminatedCString s_You_ve_found_00586e61
;   TerminatedCString s_d_00586e71
;   TerminatedCString s_CHealthItem_00586e75
;   TerminatedCString s_Press_00586e81
;   TerminatedCString s_and_00586e88
;   TerminatedCString s_to_cycle_through_your_in_00586e8e
;   TerminatedCString s_to_use_this_item_to_rest_00586eb8
;   TerminatedCString s_CGasMask_00586ee2
;   TerminatedCString s_Press_00586eeb
;   TerminatedCString s_and_00586ef2
;   TerminatedCString s_to_cycle_through_your_in_00586ef8
;   TerminatedCString s_to_put_on_and_off_the_ma_00586f22
;   TerminatedCString s_CKeyActor_00586f3f
;   TerminatedCString s_With_your_guns_put_away_00586f49
;   TerminatedCString s_to_open_a_previously_loc_00586f69
;   ... and 43 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0
;   core_actor.cpp_createActorByName_FUN_0040d540
;   core_actor.cpp_destroyActor_FUN_00409cd0
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80
;   core_game.cpp_CGame_displayMessage_FUN_0049aa30
;   core_inv.cpp_CInventory_selectWeapon_FUN_004c0850
;   core_inv.cpp_getItemDisplayName_FUN_004beca0
;   core_inv.cpp_getItemIconName_FUN_004bed10
;   core_menu.cpp_getKeyDisplayName_FUN_004d2900
;   core_mission.cpp_CDemonMission_FUN_004d8cd0
;   core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720
;   core_mission.cpp_CDemonMission_markActorToDelete_FUN_004d9110
;   crt_stdio.c_sprintf_FUN_00563c90
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bf360
        ;   Label: core_inv.cpp_CInventory_addItem_FUN_004bf360
    PUSH ESI                            ; 004bf361
    PUSH EDI                            ; 004bf362
    PUSH EBP                            ; 004bf363
    SUB ESP,0x324                       ; 004bf364
    MOV EBP,dword ptr [ESP + 0x338]     ; 004bf36a
    CMP dword ptr [EBP + 0x8],0x64      ; 004bf371
    JL 0x004bf384                       ; 004bf375
        ;   XREF to: 004bf384 (CONDITIONAL_JUMP)  ; LAB_004bf384
    XOR EAX,EAX                         ; 004bf377
    ADD ESP,0x324                       ; 004bf379
    POP EBP                             ; 004bf37f
    POP EDI                             ; 004bf380
    POP ESI                             ; 004bf381
    POP EBX                             ; 004bf382
    RET                                 ; 004bf383
    MOV ECX,dword ptr [ESP + 0x33c]     ; 004bf384
        ;   Label: LAB_004bf384
    MOV EAX,dword ptr [ESP + 0x33c]     ; 004bf38b
    PUSH ECX                            ; 004bf392
    MOV EAX,dword ptr [EAX + 0x14c]     ; 004bf393
    CALL dword ptr [EAX + 0x8c]         ; 004bf399
    MOV EBX,dword ptr [EBP + 0x4]       ; 004bf39f
    ADD ESP,0x4                         ; 004bf3a2
    CMP EAX,EBX                         ; 004bf3a5
    JZ 0x004bf3e1                       ; 004bf3a7
        ;   XREF to: 004bf3e1 (CONDITIONAL_JUMP)  ; LAB_004bf3e1
    PUSH 0x0                            ; 004bf3a9
    MOV ESI,dword ptr [ESP + 0x340]     ; 004bf3ab
    MOV EAX,dword ptr [ESP + 0x340]     ; 004bf3b2
    PUSH ESI                            ; 004bf3b9
    MOV EAX,dword ptr [EAX + 0x14c]     ; 004bf3ba
    CALL dword ptr [EAX + 0x84]         ; 004bf3c0
    MOV EDI,dword ptr [EBP + 0x4]       ; 004bf3c6
    ADD ESP,0x8                         ; 004bf3c9
    TEST EDI,EDI                        ; 004bf3cc
    JZ 0x004bf3e1                       ; 004bf3ce
        ;   XREF to: 004bf3e1 (CONDITIONAL_JUMP)  ; LAB_004bf3e1
    PUSH EDI                            ; 004bf3d0
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004bf3d1
    PUSH ESI                            ; 004bf3d7
    CALL dword ptr [EAX + 0x80]         ; 004bf3d8
    ADD ESP,0x8                         ; 004bf3de
    MOV EBX,dword ptr [0x01cae0e8]      ; 004bf3e1 | DAT_01cae0e8
        ;   Label: LAB_004bf3e1
    MOV EAX,dword ptr [EBP + 0x4]       ; 004bf3e7
    CMP EAX,dword ptr [EBX*0x4 + 0x1cae0d8] ; 004bf3ea
    JNZ 0x004bff2e                      ; 004bf3f1
        ;   XREF to: 004bff2e (CONDITIONAL_JUMP)  ; LAB_004bff2e
    CMP dword ptr [ESP + 0x340],0x0     ; 004bf3f7
    JZ 0x004bff2e                       ; 004bf3ff
        ;   XREF to: 004bff2e (CONDITIONAL_JUMP)  ; LAB_004bff2e
    MOV EAX,[0x005b9354]                ; 004bf405 | g_CGame_PTR_005b9354
    CMP dword ptr [EAX + 0x228],0x0     ; 004bf40a | g_CGame_01c775ec.letterbox_mode
    JNZ 0x004bff2e                      ; 004bf411
        ;   XREF to: 004bff2e (CONDITIONAL_JUMP)  ; LAB_004bff2e
    MOV ECX,dword ptr [ESP + 0x33c]     ; 004bf417
    PUSH ECX                            ; 004bf41e
    CALL core_inv.cpp_getItemDisplayName_FUN_004beca0 ; 004bf41f
        ;   XREF to: 004beca0 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDisplayName_FUN_004beca0(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004bf424
    MOV EBX,dword ptr [ESP + 0x33c]     ; 004bf427
    PUSH EBX                            ; 004bf42e
    MOV dword ptr [ESP + 0x304],EAX     ; 004bf42f
    CALL core_inv.cpp_getItemIconName_FUN_004bed10 ; 004bf436
        ;   XREF to: 004bed10 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemIconName_FUN_004bed10(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004bf43b
    MOV ESI,dword ptr [0x007641f4]      ; 004bf43e | g_CAmmoActorType_007641bc.name_hash
    PUSH ESI                            ; 004bf444
    PUSH EBX                            ; 004bf445
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004bf446
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004bf44b
    PUSH 0x586e61                       ; 004bf44e | = "You've found : "
    MOV EBX,EAX                         ; 004bf453
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004bf455
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004bf45a
    MOV EDI,ESP                         ; 004bf45d
    MOV ESI,EAX                         ; 004bf45f
    PUSH EDI                            ; 004bf461
    MOV AL,byte ptr [ESI]               ; 004bf462
        ;   Label: LAB_004bf462
    MOV byte ptr [EDI],AL               ; 004bf464
    CMP AL,0x0                          ; 004bf466
    JZ 0x004bf47a                       ; 004bf468
        ;   XREF to: 004bf47a (CONDITIONAL_JUMP)  ; LAB_004bf47a
    MOV AL,byte ptr [ESI + 0x1]         ; 004bf46a
    ADD ESI,0x2                         ; 004bf46d
    MOV byte ptr [EDI + 0x1],AL         ; 004bf470
    ADD EDI,0x2                         ; 004bf473
    CMP AL,0x0                          ; 004bf476
    JNZ 0x004bf462                      ; 004bf478
        ;   XREF to: 004bf462 (CONDITIONAL_JUMP)  ; LAB_004bf462
    POP EDI                             ; 004bf47a
        ;   Label: LAB_004bf47a
    TEST EBX,EBX                        ; 004bf47b
    JZ 0x004bf4c6                       ; 004bf47d
        ;   XREF to: 004bf4c6 (CONDITIONAL_JUMP)  ; LAB_004bf4c6
    MOV EAX,dword ptr [EBX + 0x30c]     ; 004bf47f
    PUSH EAX                            ; 004bf485
    PUSH 0x586e71                       ; 004bf486 | = "%d "
    LEA EAX,[ESP + 0x208]               ; 004bf48b
    PUSH EAX                            ; 004bf492
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004bf493
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 004bf498
    LEA ESI,[ESP + 0x200]               ; 004bf49b
    MOV EDI,ESP                         ; 004bf4a2
    PUSH EDI                            ; 004bf4a4
    SUB ECX,ECX                         ; 004bf4a5
    DEC ECX                             ; 004bf4a7
    MOV AL,0x0                          ; 004bf4a8
    SCASB.REPNE ES:EDI                  ; 004bf4aa
    DEC EDI                             ; 004bf4ac
    MOV AL,byte ptr [ESI]               ; 004bf4ad
        ;   Label: LAB_004bf4ad
    MOV byte ptr [EDI],AL               ; 004bf4af
    CMP AL,0x0                          ; 004bf4b1
    JZ 0x004bf4c5                       ; 004bf4b3
        ;   XREF to: 004bf4c5 (CONDITIONAL_JUMP)  ; LAB_004bf4c5
    MOV AL,byte ptr [ESI + 0x1]         ; 004bf4b5
    ADD ESI,0x2                         ; 004bf4b8
    MOV byte ptr [EDI + 0x1],AL         ; 004bf4bb
    ADD EDI,0x2                         ; 004bf4be
    CMP AL,0x0                          ; 004bf4c1
    JNZ 0x004bf4ad                      ; 004bf4c3
        ;   XREF to: 004bf4ad (CONDITIONAL_JUMP)  ; LAB_004bf4ad
    POP EDI                             ; 004bf4c5
        ;   Label: LAB_004bf4c5
    MOV ESI,dword ptr [ESP + 0x300]     ; 004bf4c6
        ;   Label: LAB_004bf4c6
    MOV EDI,ESP                         ; 004bf4cd
    PUSH EDI                            ; 004bf4cf
    SUB ECX,ECX                         ; 004bf4d0
    DEC ECX                             ; 004bf4d2
    MOV AL,0x0                          ; 004bf4d3
    SCASB.REPNE ES:EDI                  ; 004bf4d5
    DEC EDI                             ; 004bf4d7
    MOV AL,byte ptr [ESI]               ; 004bf4d8
        ;   Label: LAB_004bf4d8
    MOV byte ptr [EDI],AL               ; 004bf4da
    CMP AL,0x0                          ; 004bf4dc
    JZ 0x004bf4f0                       ; 004bf4de
        ;   XREF to: 004bf4f0 (CONDITIONAL_JUMP)  ; LAB_004bf4f0
    MOV AL,byte ptr [ESI + 0x1]         ; 004bf4e0
    ADD ESI,0x2                         ; 004bf4e3
    MOV byte ptr [EDI + 0x1],AL         ; 004bf4e6
    ADD EDI,0x2                         ; 004bf4e9
    CMP AL,0x0                          ; 004bf4ec
    JNZ 0x004bf4d8                      ; 004bf4ee
        ;   XREF to: 004bf4d8 (CONDITIONAL_JUMP)  ; LAB_004bf4d8
    POP EDI                             ; 004bf4f0
        ;   Label: LAB_004bf4f0
    PUSH 0x586e75                       ; 004bf4f1 | = "CHealthItem"
    MOV EDX,dword ptr [ESP + 0x340]     ; 004bf4f6
    XOR AH,AH                           ; 004bf4fd
    PUSH EDX                            ; 004bf4ff
    MOV byte ptr [ESP + 0x108],AH       ; 004bf500
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004bf507
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004bf50c
    TEST EAX,EAX                        ; 004bf50f
    JZ 0x004bf6a9                       ; 004bf511
        ;   XREF to: 004bf6a9 (CONDITIONAL_JUMP)  ; LAB_004bf6a9
    PUSH 0x586e81                       ; 004bf517 | = "Press "
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004bf51c
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004bf521
    LEA EDI,[ESP + 0x100]               ; 004bf524
    MOV ESI,EAX                         ; 004bf52b
    PUSH EDI                            ; 004bf52d
    MOV AL,byte ptr [ESI]               ; 004bf52e
        ;   Label: LAB_004bf52e
    MOV byte ptr [EDI],AL               ; 004bf530
    CMP AL,0x0                          ; 004bf532
    JZ 0x004bf546                       ; 004bf534
        ;   XREF to: 004bf546 (CONDITIONAL_JUMP)  ; LAB_004bf546
    MOV AL,byte ptr [ESI + 0x1]         ; 004bf536
    ADD ESI,0x2                         ; 004bf539
    MOV byte ptr [EDI + 0x1],AL         ; 004bf53c
    ADD EDI,0x2                         ; 004bf53f
    CMP AL,0x0                          ; 004bf542
    JNZ 0x004bf52e                      ; 004bf544
        ;   XREF to: 004bf52e (CONDITIONAL_JUMP)  ; LAB_004bf52e
    POP EDI                             ; 004bf546
        ;   Label: LAB_004bf546
    MOV EAX,[0x005b9354]                ; 004bf547 | g_CGame_PTR_005b9354
    MOV ECX,dword ptr [EAX + 0x84]      ; 004bf54c | g_CGame_01c775ec.key_next_item
    PUSH ECX                            ; 004bf552
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 004bf553
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004d2900(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004bf558
    LEA EDI,[ESP + 0x100]               ; 004bf55b
    MOV ESI,EAX                         ; 004bf562
    PUSH EDI                            ; 004bf564
    SUB ECX,ECX                         ; 004bf565
    DEC ECX                             ; 004bf567
    MOV AL,0x0                          ; 004bf568
    SCASB.REPNE ES:EDI                  ; 004bf56a
    DEC EDI                             ; 004bf56c
    MOV AL,byte ptr [ESI]               ; 004bf56d
        ;   Label: LAB_004bf56d
    MOV byte ptr [EDI],AL               ; 004bf56f
    CMP AL,0x0                          ; 004bf571
    JZ 0x004bf585                       ; 004bf573
        ;   XREF to: 004bf585 (CONDITIONAL_JUMP)  ; LAB_004bf585
    MOV AL,byte ptr [ESI + 0x1]         ; 004bf575
    ADD ESI,0x2                         ; 004bf578
    MOV byte ptr [EDI + 0x1],AL         ; 004bf57b
    ADD EDI,0x2                         ; 004bf57e
    CMP AL,0x0                          ; 004bf581
    JNZ 0x004bf56d                      ; 004bf583
        ;   XREF to: 004bf56d (CONDITIONAL_JUMP)  ; LAB_004bf56d
    POP EDI                             ; 004bf585
        ;   Label: LAB_004bf585
    PUSH 0x586e88                       ; 004bf586 | = " and "
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004bf58b
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004bf590
    LEA EDI,[ESP + 0x100]               ; 004bf593
    MOV ESI,EAX                         ; 004bf59a
    PUSH EDI                            ; 004bf59c
    SUB ECX,ECX                         ; 004bf59d
    DEC ECX                             ; 004bf59f
    MOV AL,0x0                          ; 004bf5a0
    SCASB.REPNE ES:EDI                  ; 004bf5a2
    DEC EDI                             ; 004bf5a4
    MOV AL,byte ptr [ESI]               ; 004bf5a5
        ;   Label: LAB_004bf5a5
    MOV byte ptr [EDI],AL               ; 004bf5a7
    CMP AL,0x0                          ; 004bf5a9
    JZ 0x004bf5bd                       ; 004bf5ab
        ;   XREF to: 004bf5bd (CONDITIONAL_JUMP)  ; LAB_004bf5bd
    MOV AL,byte ptr [ESI + 0x1]         ; 004bf5ad
    ADD ESI,0x2                         ; 004bf5b0
    MOV byte ptr [EDI + 0x1],AL         ; 004bf5b3
    ADD EDI,0x2                         ; 004bf5b6
    CMP AL,0x0                          ; 004bf5b9
    JNZ 0x004bf5a5                      ; 004bf5bb
        ;   XREF to: 004bf5a5 (CONDITIONAL_JUMP)  ; LAB_004bf5a5
    POP EDI                             ; 004bf5bd
        ;   Label: LAB_004bf5bd
    MOV EAX,[0x005b9354]                ; 004bf5be | g_CGame_PTR_005b9354
    MOV EBX,dword ptr [EAX + 0x88]      ; 004bf5c3 | g_CGame_01c775ec.key_prev_item
    PUSH EBX                            ; 004bf5c9
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 004bf5ca
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004d2900(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004bf5cf
    LEA EDI,[ESP + 0x100]               ; 004bf5d2
    MOV ESI,EAX                         ; 004bf5d9
    PUSH EDI                            ; 004bf5db
    SUB ECX,ECX                         ; 004bf5dc
    DEC ECX                             ; 004bf5de
    MOV AL,0x0                          ; 004bf5df
    SCASB.REPNE ES:EDI                  ; 004bf5e1
    DEC EDI                             ; 004bf5e3
    MOV AL,byte ptr [ESI]               ; 004bf5e4
        ;   Label: LAB_004bf5e4
    MOV byte ptr [EDI],AL               ; 004bf5e6
    CMP AL,0x0                          ; 004bf5e8
    JZ 0x004bf5fc                       ; 004bf5ea
        ;   XREF to: 004bf5fc (CONDITIONAL_JUMP)  ; LAB_004bf5fc
    MOV AL,byte ptr [ESI + 0x1]         ; 004bf5ec
    ADD ESI,0x2                         ; 004bf5ef
    MOV byte ptr [EDI + 0x1],AL         ; 004bf5f2
    ADD EDI,0x2                         ; 004bf5f5
    CMP AL,0x0                          ; 004bf5f8
    JNZ 0x004bf5e4                      ; 004bf5fa
        ;   XREF to: 004bf5e4 (CONDITIONAL_JUMP)  ; LAB_004bf5e4
    POP EDI                             ; 004bf5fc
        ;   Label: LAB_004bf5fc
    PUSH 0x586e8e                       ; 004bf5fd | = " to cycle through your inventory.  Pr..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004bf602
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004bf607
    LEA EDI,[ESP + 0x100]               ; 004bf60a
    MOV ESI,EAX                         ; 004bf611
    PUSH EDI                            ; 004bf613
    SUB ECX,ECX                         ; 004bf614
    DEC ECX                             ; 004bf616
    MOV AL,0x0                          ; 004bf617
    SCASB.REPNE ES:EDI                  ; 004bf619
    DEC EDI                             ; 004bf61b
    MOV AL,byte ptr [ESI]               ; 004bf61c
        ;   Label: LAB_004bf61c
    MOV byte ptr [EDI],AL               ; 004bf61e
    CMP AL,0x0                          ; 004bf620
    JZ 0x004bf634                       ; 004bf622
        ;   XREF to: 004bf634 (CONDITIONAL_JUMP)  ; LAB_004bf634
    MOV AL,byte ptr [ESI + 0x1]         ; 004bf624
    ADD ESI,0x2                         ; 004bf627
    MOV byte ptr [EDI + 0x1],AL         ; 004bf62a
    ADD EDI,0x2                         ; 004bf62d
    CMP AL,0x0                          ; 004bf630
    JNZ 0x004bf61c                      ; 004bf632
        ;   XREF to: 004bf61c (CONDITIONAL_JUMP)  ; LAB_004bf61c
    POP EDI                             ; 004bf634
        ;   Label: LAB_004bf634
    MOV EAX,[0x005b9354]                ; 004bf635 | g_CGame_PTR_005b9354
    MOV ESI,dword ptr [EAX + 0x4c]      ; 004bf63a | g_CGame_01c775ec.key_use_item
    PUSH ESI                            ; 004bf63d
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 004bf63e
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004d2900(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004bf643
    LEA EDI,[ESP + 0x100]               ; 004bf646
    MOV ESI,EAX                         ; 004bf64d
    PUSH EDI                            ; 004bf64f
    SUB ECX,ECX                         ; 004bf650
    DEC ECX                             ; 004bf652
    MOV AL,0x0                          ; 004bf653
    SCASB.REPNE ES:EDI                  ; 004bf655
    DEC EDI                             ; 004bf657
    MOV AL,byte ptr [ESI]               ; 004bf658
        ;   Label: LAB_004bf658
    MOV byte ptr [EDI],AL               ; 004bf65a
    CMP AL,0x0                          ; 004bf65c
    JZ 0x004bf670                       ; 004bf65e
        ;   XREF to: 004bf670 (CONDITIONAL_JUMP)  ; LAB_004bf670
    MOV AL,byte ptr [ESI + 0x1]         ; 004bf660
    ADD ESI,0x2                         ; 004bf663
    MOV byte ptr [EDI + 0x1],AL         ; 004bf666
    ADD EDI,0x2                         ; 004bf669
    CMP AL,0x0                          ; 004bf66c
    JNZ 0x004bf658                      ; 004bf66e
        ;   XREF to: 004bf658 (CONDITIONAL_JUMP)  ; LAB_004bf658
    POP EDI                             ; 004bf670
        ;   Label: LAB_004bf670
    PUSH 0x586eb8                       ; 004bf671 | = " to use this item to restore some hea..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004bf676
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004bf67b
    LEA EDI,[ESP + 0x100]               ; 004bf67e
    MOV ESI,EAX                         ; 004bf685
    PUSH EDI                            ; 004bf687
    SUB ECX,ECX                         ; 004bf688
    DEC ECX                             ; 004bf68a
    MOV AL,0x0                          ; 004bf68b
    SCASB.REPNE ES:EDI                  ; 004bf68d
    DEC EDI                             ; 004bf68f
    MOV AL,byte ptr [ESI]               ; 004bf690
        ;   Label: LAB_004bf690
    MOV byte ptr [EDI],AL               ; 004bf692
    CMP AL,0x0                          ; 004bf694
    JZ 0x004bf6a8                       ; 004bf696
        ;   XREF to: 004bf6a8 (CONDITIONAL_JUMP)  ; LAB_004bf6a8
    MOV AL,byte ptr [ESI + 0x1]         ; 004bf698
    ADD ESI,0x2                         ; 004bf69b
    MOV byte ptr [EDI + 0x1],AL         ; 004bf69e
    ADD EDI,0x2                         ; 004bf6a1
    CMP AL,0x0                          ; 004bf6a4
    JNZ 0x004bf690                      ; 004bf6a6
        ;   XREF to: 004bf690 (CONDITIONAL_JUMP)  ; LAB_004bf690
    POP EDI                             ; 004bf6a8
        ;   Label: LAB_004bf6a8
    PUSH 0x586ee2                       ; 004bf6a9 | = "CGasMask"
        ;   Label: LAB_004bf6a9
    MOV EDI,dword ptr [ESP + 0x340]     ; 004bf6ae
    PUSH EDI                            ; 004bf6b5
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004bf6b6
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004bf6bb
    TEST EAX,EAX                        ; 004bf6be
    JZ 0x004bf858                       ; 004bf6c0
        ;   XREF to: 004bf858 (CONDITIONAL_JUMP)  ; LAB_004bf858
    PUSH 0x586eeb                       ; 004bf6c6 | = "Press "
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004bf6cb
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004bf6d0
    LEA EDI,[ESP + 0x100]               ; 004bf6d3
    MOV ESI,EAX                         ; 004bf6da
    PUSH EDI                            ; 004bf6dc
    MOV AL,byte ptr [ESI]               ; 004bf6dd
        ;   Label: LAB_004bf6dd
    MOV byte ptr [EDI],AL               ; 004bf6df
    CMP AL,0x0                          ; 004bf6e1
    JZ 0x004bf6f5                       ; 004bf6e3
        ;   XREF to: 004bf6f5 (CONDITIONAL_JUMP)  ; LAB_004bf6f5
    MOV AL,byte ptr [ESI + 0x1]         ; 004bf6e5
    ADD ESI,0x2                         ; 004bf6e8
    MOV byte ptr [EDI + 0x1],AL         ; 004bf6eb
    ADD EDI,0x2                         ; 004bf6ee
    CMP AL,0x0                          ; 004bf6f1
    JNZ 0x004bf6dd                      ; 004bf6f3
        ;   XREF to: 004bf6dd (CONDITIONAL_JUMP)  ; LAB_004bf6dd
    POP EDI                             ; 004bf6f5
        ;   Label: LAB_004bf6f5
    MOV EAX,[0x005b9354]                ; 004bf6f6 | g_CGame_PTR_005b9354
    MOV EDX,dword ptr [EAX + 0x84]      ; 004bf6fb | g_CGame_01c775ec.key_next_item
    PUSH EDX                            ; 004bf701
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 004bf702
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004d2900(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004bf707
    LEA EDI,[ESP + 0x100]               ; 004bf70a
    MOV ESI,EAX                         ; 004bf711
    PUSH EDI                            ; 004bf713
    SUB ECX,ECX                         ; 004bf714
    DEC ECX                             ; 004bf716
    MOV AL,0x0                          ; 004bf717
    SCASB.REPNE ES:EDI                  ; 004bf719
    DEC EDI                             ; 004bf71b
    MOV AL,byte ptr [ESI]               ; 004bf71c
        ;   Label: LAB_004bf71c
    MOV byte ptr [EDI],AL               ; 004bf71e
    CMP AL,0x0                          ; 004bf720
    JZ 0x004bf734                       ; 004bf722
        ;   XREF to: 004bf734 (CONDITIONAL_JUMP)  ; LAB_004bf734
    MOV AL,byte ptr [ESI + 0x1]         ; 004bf724
    ADD ESI,0x2                         ; 004bf727
    MOV byte ptr [EDI + 0x1],AL         ; 004bf72a
    ADD EDI,0x2                         ; 004bf72d
    CMP AL,0x0                          ; 004bf730
    JNZ 0x004bf71c                      ; 004bf732
        ;   XREF to: 004bf71c (CONDITIONAL_JUMP)  ; LAB_004bf71c
    POP EDI                             ; 004bf734
        ;   Label: LAB_004bf734
    PUSH 0x586ef2                       ; 004bf735 | = " and "
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004bf73a
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004bf73f
    LEA EDI,[ESP + 0x100]               ; 004bf742
    MOV ESI,EAX                         ; 004bf749
    PUSH EDI                            ; 004bf74b
    SUB ECX,ECX                         ; 004bf74c
    DEC ECX                             ; 004bf74e
    MOV AL,0x0                          ; 004bf74f
    SCASB.REPNE ES:EDI                  ; 004bf751
    DEC EDI                             ; 004bf753
    MOV AL,byte ptr [ESI]               ; 004bf754
        ;   Label: LAB_004bf754
    MOV byte ptr [EDI],AL               ; 004bf756
    CMP AL,0x0                          ; 004bf758
    JZ 0x004bf76c                       ; 004bf75a
        ;   XREF to: 004bf76c (CONDITIONAL_JUMP)  ; LAB_004bf76c
    MOV AL,byte ptr [ESI + 0x1]         ; 004bf75c
    ADD ESI,0x2                         ; 004bf75f
    MOV byte ptr [EDI + 0x1],AL         ; 004bf762
    ADD EDI,0x2                         ; 004bf765
    CMP AL,0x0                          ; 004bf768
    JNZ 0x004bf754                      ; 004bf76a
        ;   XREF to: 004bf754 (CONDITIONAL_JUMP)  ; LAB_004bf754
    POP EDI                             ; 004bf76c
        ;   Label: LAB_004bf76c
    MOV EAX,[0x005b9354]                ; 004bf76d | g_CGame_PTR_005b9354
    MOV ECX,dword ptr [EAX + 0x88]      ; 004bf772 | g_CGame_01c775ec.key_prev_item
    PUSH ECX                            ; 004bf778
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 004bf779
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004d2900(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004bf77e
    LEA EDI,[ESP + 0x100]               ; 004bf781
    MOV ESI,EAX                         ; 004bf788
    PUSH EDI                            ; 004bf78a
    SUB ECX,ECX                         ; 004bf78b
    DEC ECX                             ; 004bf78d
    MOV AL,0x0                          ; 004bf78e
    SCASB.REPNE ES:EDI                  ; 004bf790
    DEC EDI                             ; 004bf792
    MOV AL,byte ptr [ESI]               ; 004bf793
        ;   Label: LAB_004bf793
    MOV byte ptr [EDI],AL               ; 004bf795
    CMP AL,0x0                          ; 004bf797
    JZ 0x004bf7ab                       ; 004bf799
        ;   XREF to: 004bf7ab (CONDITIONAL_JUMP)  ; LAB_004bf7ab
    MOV AL,byte ptr [ESI + 0x1]         ; 004bf79b
    ADD ESI,0x2                         ; 004bf79e
    MOV byte ptr [EDI + 0x1],AL         ; 004bf7a1
    ADD EDI,0x2                         ; 004bf7a4
    CMP AL,0x0                          ; 004bf7a7
    JNZ 0x004bf793                      ; 004bf7a9
        ;   XREF to: 004bf793 (CONDITIONAL_JUMP)  ; LAB_004bf793
    POP EDI                             ; 004bf7ab
        ;   Label: LAB_004bf7ab
    PUSH 0x586ef8                       ; 004bf7ac | = " to cycle through your inventory.  Pr..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004bf7b1
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004bf7b6
    LEA EDI,[ESP + 0x100]               ; 004bf7b9
    MOV ESI,EAX                         ; 004bf7c0
    PUSH EDI                            ; 004bf7c2
    SUB ECX,ECX                         ; 004bf7c3
    DEC ECX                             ; 004bf7c5
    MOV AL,0x0                          ; 004bf7c6
    SCASB.REPNE ES:EDI                  ; 004bf7c8
    DEC EDI                             ; 004bf7ca
    MOV AL,byte ptr [ESI]               ; 004bf7cb
        ;   Label: LAB_004bf7cb
    MOV byte ptr [EDI],AL               ; 004bf7cd
    CMP AL,0x0                          ; 004bf7cf
    JZ 0x004bf7e3                       ; 004bf7d1
        ;   XREF to: 004bf7e3 (CONDITIONAL_JUMP)  ; LAB_004bf7e3
    MOV AL,byte ptr [ESI + 0x1]         ; 004bf7d3
    ADD ESI,0x2                         ; 004bf7d6
    MOV byte ptr [EDI + 0x1],AL         ; 004bf7d9
    ADD EDI,0x2                         ; 004bf7dc
    CMP AL,0x0                          ; 004bf7df
    JNZ 0x004bf7cb                      ; 004bf7e1
        ;   XREF to: 004bf7cb (CONDITIONAL_JUMP)  ; LAB_004bf7cb
    POP EDI                             ; 004bf7e3
        ;   Label: LAB_004bf7e3
    MOV EAX,[0x005b9354]                ; 004bf7e4 | g_CGame_PTR_005b9354
    MOV EBX,dword ptr [EAX + 0x4c]      ; 004bf7e9 | g_CGame_01c775ec.key_use_item
    PUSH EBX                            ; 004bf7ec
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 004bf7ed
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004d2900(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004bf7f2
    LEA EDI,[ESP + 0x100]               ; 004bf7f5
    MOV ESI,EAX                         ; 004bf7fc
    PUSH EDI                            ; 004bf7fe
    SUB ECX,ECX                         ; 004bf7ff
    DEC ECX                             ; 004bf801
    MOV AL,0x0                          ; 004bf802
    SCASB.REPNE ES:EDI                  ; 004bf804
    DEC EDI                             ; 004bf806
    MOV AL,byte ptr [ESI]               ; 004bf807
        ;   Label: LAB_004bf807
    MOV byte ptr [EDI],AL               ; 004bf809
    CMP AL,0x0                          ; 004bf80b
    JZ 0x004bf81f                       ; 004bf80d
        ;   XREF to: 004bf81f (CONDITIONAL_JUMP)  ; LAB_004bf81f
    MOV AL,byte ptr [ESI + 0x1]         ; 004bf80f
    ADD ESI,0x2                         ; 004bf812
    MOV byte ptr [EDI + 0x1],AL         ; 004bf815
    ADD EDI,0x2                         ; 004bf818
    CMP AL,0x0                          ; 004bf81b
    JNZ 0x004bf807                      ; 004bf81d
        ;   XREF to: 004bf807 (CONDITIONAL_JUMP)  ; LAB_004bf807
    POP EDI                             ; 004bf81f
        ;   Label: LAB_004bf81f
    PUSH 0x586f22                       ; 004bf820 | = " to put on and off the mask."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004bf825
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004bf82a
    LEA EDI,[ESP + 0x100]               ; 004bf82d
    MOV ESI,EAX                         ; 004bf834
    PUSH EDI                            ; 004bf836
    SUB ECX,ECX                         ; 004bf837
    DEC ECX                             ; 004bf839
    MOV AL,0x0                          ; 004bf83a
    SCASB.REPNE ES:EDI                  ; 004bf83c
    DEC EDI                             ; 004bf83e
    MOV AL,byte ptr [ESI]               ; 004bf83f
        ;   Label: LAB_004bf83f
    MOV byte ptr [EDI],AL               ; 004bf841
    CMP AL,0x0                          ; 004bf843
    JZ 0x004bf857                       ; 004bf845
        ;   XREF to: 004bf857 (CONDITIONAL_JUMP)  ; LAB_004bf857
    MOV AL,byte ptr [ESI + 0x1]         ; 004bf847
    ADD ESI,0x2                         ; 004bf84a
    MOV byte ptr [EDI + 0x1],AL         ; 004bf84d
    ADD EDI,0x2                         ; 004bf850
    CMP AL,0x0                          ; 004bf853
    JNZ 0x004bf83f                      ; 004bf855
        ;   XREF to: 004bf83f (CONDITIONAL_JUMP)  ; LAB_004bf83f
    POP EDI                             ; 004bf857
        ;   Label: LAB_004bf857
    PUSH 0x586f3f                       ; 004bf858 | = "CKeyActor"
        ;   Label: LAB_004bf858
    MOV ESI,dword ptr [ESP + 0x340]     ; 004bf85d
    PUSH ESI                            ; 004bf864
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004bf865
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004bf86a
    TEST EAX,EAX                        ; 004bf86d
    JZ 0x004bf919                       ; 004bf86f
        ;   XREF to: 004bf919 (CONDITIONAL_JUMP)  ; LAB_004bf919
    PUSH 0x586f49                       ; 004bf875 | = "With your guns put away, press "
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004bf87a
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004bf87f
    LEA EDI,[ESP + 0x100]               ; 004bf882
    MOV ESI,EAX                         ; 004bf889
    PUSH EDI                            ; 004bf88b
    MOV AL,byte ptr [ESI]               ; 004bf88c
        ;   Label: LAB_004bf88c
    MOV byte ptr [EDI],AL               ; 004bf88e
    CMP AL,0x0                          ; 004bf890
    JZ 0x004bf8a4                       ; 004bf892
        ;   XREF to: 004bf8a4 (CONDITIONAL_JUMP)  ; LAB_004bf8a4
    MOV AL,byte ptr [ESI + 0x1]         ; 004bf894
    ADD ESI,0x2                         ; 004bf897
    MOV byte ptr [EDI + 0x1],AL         ; 004bf89a
    ADD EDI,0x2                         ; 004bf89d
    CMP AL,0x0                          ; 004bf8a0
    JNZ 0x004bf88c                      ; 004bf8a2
        ;   XREF to: 004bf88c (CONDITIONAL_JUMP)  ; LAB_004bf88c
    POP EDI                             ; 004bf8a4
        ;   Label: LAB_004bf8a4
    MOV EAX,[0x005b9354]                ; 004bf8a5 | g_CGame_PTR_005b9354
    MOV EDI,dword ptr [EAX + 0x48]      ; 004bf8aa | g_CGame_01c775ec.key_fire
    PUSH EDI                            ; 004bf8ad
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 004bf8ae
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004d2900(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004bf8b3
    LEA EDI,[ESP + 0x100]               ; 004bf8b6
    MOV ESI,EAX                         ; 004bf8bd
    PUSH EDI                            ; 004bf8bf
    SUB ECX,ECX                         ; 004bf8c0
    DEC ECX                             ; 004bf8c2
    MOV AL,0x0                          ; 004bf8c3
    SCASB.REPNE ES:EDI                  ; 004bf8c5
    DEC EDI                             ; 004bf8c7
    MOV AL,byte ptr [ESI]               ; 004bf8c8
        ;   Label: LAB_004bf8c8
    MOV byte ptr [EDI],AL               ; 004bf8ca
    CMP AL,0x0                          ; 004bf8cc
    JZ 0x004bf8e0                       ; 004bf8ce
        ;   XREF to: 004bf8e0 (CONDITIONAL_JUMP)  ; LAB_004bf8e0
    MOV AL,byte ptr [ESI + 0x1]         ; 004bf8d0
    ADD ESI,0x2                         ; 004bf8d3
    MOV byte ptr [EDI + 0x1],AL         ; 004bf8d6
    ADD EDI,0x2                         ; 004bf8d9
    CMP AL,0x0                          ; 004bf8dc
    JNZ 0x004bf8c8                      ; 004bf8de
        ;   XREF to: 004bf8c8 (CONDITIONAL_JUMP)  ; LAB_004bf8c8
    POP EDI                             ; 004bf8e0
        ;   Label: LAB_004bf8e0
    PUSH 0x586f69                       ; 004bf8e1 | = " to open a previously locked door."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004bf8e6
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004bf8eb
    LEA EDI,[ESP + 0x100]               ; 004bf8ee
    MOV ESI,EAX                         ; 004bf8f5
    PUSH EDI                            ; 004bf8f7
    SUB ECX,ECX                         ; 004bf8f8
    DEC ECX                             ; 004bf8fa
    MOV AL,0x0                          ; 004bf8fb
    SCASB.REPNE ES:EDI                  ; 004bf8fd
    DEC EDI                             ; 004bf8ff
    MOV AL,byte ptr [ESI]               ; 004bf900
        ;   Label: LAB_004bf900
    MOV byte ptr [EDI],AL               ; 004bf902
    CMP AL,0x0                          ; 004bf904
    JZ 0x004bf918                       ; 004bf906
        ;   XREF to: 004bf918 (CONDITIONAL_JUMP)  ; LAB_004bf918
    MOV AL,byte ptr [ESI + 0x1]         ; 004bf908
    ADD ESI,0x2                         ; 004bf90b
    MOV byte ptr [EDI + 0x1],AL         ; 004bf90e
    ADD EDI,0x2                         ; 004bf911
    CMP AL,0x0                          ; 004bf914
    JNZ 0x004bf900                      ; 004bf916
        ;   XREF to: 004bf900 (CONDITIONAL_JUMP)  ; LAB_004bf900
    POP EDI                             ; 004bf918
        ;   Label: LAB_004bf918
    PUSH 0x586f8c                       ; 004bf919 | = "CBoxActor"
        ;   Label: LAB_004bf919
    MOV EAX,dword ptr [ESP + 0x340]     ; 004bf91e
    PUSH EAX                            ; 004bf925
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004bf926
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004bf92b
    TEST EAX,EAX                        ; 004bf92e
    JZ 0x004bfac8                       ; 004bf930
        ;   XREF to: 004bfac8 (CONDITIONAL_JUMP)  ; LAB_004bfac8
    PUSH 0x586f96                       ; 004bf936 | = "Press "
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004bf93b
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004bf940
    LEA EDI,[ESP + 0x100]               ; 004bf943
    MOV ESI,EAX                         ; 004bf94a
    PUSH EDI                            ; 004bf94c
    MOV AL,byte ptr [ESI]               ; 004bf94d
        ;   Label: LAB_004bf94d
    MOV byte ptr [EDI],AL               ; 004bf94f
    CMP AL,0x0                          ; 004bf951
    JZ 0x004bf965                       ; 004bf953
        ;   XREF to: 004bf965 (CONDITIONAL_JUMP)  ; LAB_004bf965
    MOV AL,byte ptr [ESI + 0x1]         ; 004bf955
    ADD ESI,0x2                         ; 004bf958
    MOV byte ptr [EDI + 0x1],AL         ; 004bf95b
    ADD EDI,0x2                         ; 004bf95e
    CMP AL,0x0                          ; 004bf961
    JNZ 0x004bf94d                      ; 004bf963
        ;   XREF to: 004bf94d (CONDITIONAL_JUMP)  ; LAB_004bf94d
    POP EDI                             ; 004bf965
        ;   Label: LAB_004bf965
    MOV EAX,[0x005b9354]                ; 004bf966 | g_CGame_PTR_005b9354
    MOV EDX,dword ptr [EAX + 0x84]      ; 004bf96b | g_CGame_01c775ec.key_next_item
    PUSH EDX                            ; 004bf971
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 004bf972
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004d2900(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004bf977
    LEA EDI,[ESP + 0x100]               ; 004bf97a
    MOV ESI,EAX                         ; 004bf981
    PUSH EDI                            ; 004bf983
    SUB ECX,ECX                         ; 004bf984
    DEC ECX                             ; 004bf986
    MOV AL,0x0                          ; 004bf987
    SCASB.REPNE ES:EDI                  ; 004bf989
    DEC EDI                             ; 004bf98b
    MOV AL,byte ptr [ESI]               ; 004bf98c
        ;   Label: LAB_004bf98c
    MOV byte ptr [EDI],AL               ; 004bf98e
    CMP AL,0x0                          ; 004bf990
    JZ 0x004bf9a4                       ; 004bf992
        ;   XREF to: 004bf9a4 (CONDITIONAL_JUMP)  ; LAB_004bf9a4
    MOV AL,byte ptr [ESI + 0x1]         ; 004bf994
    ADD ESI,0x2                         ; 004bf997
    MOV byte ptr [EDI + 0x1],AL         ; 004bf99a
    ADD EDI,0x2                         ; 004bf99d
    CMP AL,0x0                          ; 004bf9a0
    JNZ 0x004bf98c                      ; 004bf9a2
        ;   XREF to: 004bf98c (CONDITIONAL_JUMP)  ; LAB_004bf98c
    POP EDI                             ; 004bf9a4
        ;   Label: LAB_004bf9a4
    PUSH 0x586f9d                       ; 004bf9a5 | = " and "
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004bf9aa
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004bf9af
    LEA EDI,[ESP + 0x100]               ; 004bf9b2
    MOV ESI,EAX                         ; 004bf9b9
    PUSH EDI                            ; 004bf9bb
    SUB ECX,ECX                         ; 004bf9bc
    DEC ECX                             ; 004bf9be
    MOV AL,0x0                          ; 004bf9bf
    SCASB.REPNE ES:EDI                  ; 004bf9c1
    DEC EDI                             ; 004bf9c3
    MOV AL,byte ptr [ESI]               ; 004bf9c4
        ;   Label: LAB_004bf9c4
    MOV byte ptr [EDI],AL               ; 004bf9c6
    CMP AL,0x0                          ; 004bf9c8
    JZ 0x004bf9dc                       ; 004bf9ca
        ;   XREF to: 004bf9dc (CONDITIONAL_JUMP)  ; LAB_004bf9dc
    MOV AL,byte ptr [ESI + 0x1]         ; 004bf9cc
    ADD ESI,0x2                         ; 004bf9cf
    MOV byte ptr [EDI + 0x1],AL         ; 004bf9d2
    ADD EDI,0x2                         ; 004bf9d5
    CMP AL,0x0                          ; 004bf9d8
    JNZ 0x004bf9c4                      ; 004bf9da
        ;   XREF to: 004bf9c4 (CONDITIONAL_JUMP)  ; LAB_004bf9c4
    POP EDI                             ; 004bf9dc
        ;   Label: LAB_004bf9dc
    MOV EAX,[0x005b9354]                ; 004bf9dd | g_CGame_PTR_005b9354
    MOV ECX,dword ptr [EAX + 0x88]      ; 004bf9e2 | g_CGame_01c775ec.key_prev_item
    PUSH ECX                            ; 004bf9e8
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 004bf9e9
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004d2900(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004bf9ee
    LEA EDI,[ESP + 0x100]               ; 004bf9f1
    MOV ESI,EAX                         ; 004bf9f8
    PUSH EDI                            ; 004bf9fa
    SUB ECX,ECX                         ; 004bf9fb
    DEC ECX                             ; 004bf9fd
    MOV AL,0x0                          ; 004bf9fe
    SCASB.REPNE ES:EDI                  ; 004bfa00
    DEC EDI                             ; 004bfa02
    MOV AL,byte ptr [ESI]               ; 004bfa03
        ;   Label: LAB_004bfa03
    MOV byte ptr [EDI],AL               ; 004bfa05
    CMP AL,0x0                          ; 004bfa07
    JZ 0x004bfa1b                       ; 004bfa09
        ;   XREF to: 004bfa1b (CONDITIONAL_JUMP)  ; LAB_004bfa1b
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfa0b
    ADD ESI,0x2                         ; 004bfa0e
    MOV byte ptr [EDI + 0x1],AL         ; 004bfa11
    ADD EDI,0x2                         ; 004bfa14
    CMP AL,0x0                          ; 004bfa17
    JNZ 0x004bfa03                      ; 004bfa19
        ;   XREF to: 004bfa03 (CONDITIONAL_JUMP)  ; LAB_004bfa03
    POP EDI                             ; 004bfa1b
        ;   Label: LAB_004bfa1b
    PUSH 0x586fa3                       ; 004bfa1c | = " to cycle through your inventory.  Pr..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004bfa21
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004bfa26
    LEA EDI,[ESP + 0x100]               ; 004bfa29
    MOV ESI,EAX                         ; 004bfa30
    PUSH EDI                            ; 004bfa32
    SUB ECX,ECX                         ; 004bfa33
    DEC ECX                             ; 004bfa35
    MOV AL,0x0                          ; 004bfa36
    SCASB.REPNE ES:EDI                  ; 004bfa38
    DEC EDI                             ; 004bfa3a
    MOV AL,byte ptr [ESI]               ; 004bfa3b
        ;   Label: LAB_004bfa3b
    MOV byte ptr [EDI],AL               ; 004bfa3d
    CMP AL,0x0                          ; 004bfa3f
    JZ 0x004bfa53                       ; 004bfa41
        ;   XREF to: 004bfa53 (CONDITIONAL_JUMP)  ; LAB_004bfa53
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfa43
    ADD ESI,0x2                         ; 004bfa46
    MOV byte ptr [EDI + 0x1],AL         ; 004bfa49
    ADD EDI,0x2                         ; 004bfa4c
    CMP AL,0x0                          ; 004bfa4f
    JNZ 0x004bfa3b                      ; 004bfa51
        ;   XREF to: 004bfa3b (CONDITIONAL_JUMP)  ; LAB_004bfa3b
    POP EDI                             ; 004bfa53
        ;   Label: LAB_004bfa53
    MOV EAX,[0x005b9354]                ; 004bfa54 | g_CGame_PTR_005b9354
    MOV EBX,dword ptr [EAX + 0x4c]      ; 004bfa59 | g_CGame_01c775ec.key_use_item
    PUSH EBX                            ; 004bfa5c
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 004bfa5d
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004d2900(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004bfa62
    LEA EDI,[ESP + 0x100]               ; 004bfa65
    MOV ESI,EAX                         ; 004bfa6c
    PUSH EDI                            ; 004bfa6e
    SUB ECX,ECX                         ; 004bfa6f
    DEC ECX                             ; 004bfa71
    MOV AL,0x0                          ; 004bfa72
    SCASB.REPNE ES:EDI                  ; 004bfa74
    DEC EDI                             ; 004bfa76
    MOV AL,byte ptr [ESI]               ; 004bfa77
        ;   Label: LAB_004bfa77
    MOV byte ptr [EDI],AL               ; 004bfa79
    CMP AL,0x0                          ; 004bfa7b
    JZ 0x004bfa8f                       ; 004bfa7d
        ;   XREF to: 004bfa8f (CONDITIONAL_JUMP)  ; LAB_004bfa8f
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfa7f
    ADD ESI,0x2                         ; 004bfa82
    MOV byte ptr [EDI + 0x1],AL         ; 004bfa85
    ADD EDI,0x2                         ; 004bfa88
    CMP AL,0x0                          ; 004bfa8b
    JNZ 0x004bfa77                      ; 004bfa8d
        ;   XREF to: 004bfa77 (CONDITIONAL_JUMP)  ; LAB_004bfa77
    POP EDI                             ; 004bfa8f
        ;   Label: LAB_004bfa8f
    PUSH 0x586fcd                       ; 004bfa90 | = " to use this item."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004bfa95
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004bfa9a
    LEA EDI,[ESP + 0x100]               ; 004bfa9d
    MOV ESI,EAX                         ; 004bfaa4
    PUSH EDI                            ; 004bfaa6
    SUB ECX,ECX                         ; 004bfaa7
    DEC ECX                             ; 004bfaa9
    MOV AL,0x0                          ; 004bfaaa
    SCASB.REPNE ES:EDI                  ; 004bfaac
    DEC EDI                             ; 004bfaae
    MOV AL,byte ptr [ESI]               ; 004bfaaf
        ;   Label: LAB_004bfaaf
    MOV byte ptr [EDI],AL               ; 004bfab1
    CMP AL,0x0                          ; 004bfab3
    JZ 0x004bfac7                       ; 004bfab5
        ;   XREF to: 004bfac7 (CONDITIONAL_JUMP)  ; LAB_004bfac7
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfab7
    ADD ESI,0x2                         ; 004bfaba
    MOV byte ptr [EDI + 0x1],AL         ; 004bfabd
    ADD EDI,0x2                         ; 004bfac0
    CMP AL,0x0                          ; 004bfac3
    JNZ 0x004bfaaf                      ; 004bfac5
        ;   XREF to: 004bfaaf (CONDITIONAL_JUMP)  ; LAB_004bfaaf
    POP EDI                             ; 004bfac7
        ;   Label: LAB_004bfac7
    PUSH 0x586fe0                       ; 004bfac8 | = "CAmmo"
        ;   Label: LAB_004bfac8
    MOV ESI,dword ptr [ESP + 0x340]     ; 004bfacd
    PUSH ESI                            ; 004bfad4
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004bfad5
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004bfada
    TEST EAX,EAX                        ; 004bfadd
    JZ 0x004bfd0e                       ; 004bfadf
        ;   XREF to: 004bfd0e (CONDITIONAL_JUMP)  ; LAB_004bfd0e
    MOV EDI,dword ptr [0x007641f4]      ; 004bfae5 | g_CAmmoActorType_007641bc.name_hash
    PUSH EDI                            ; 004bfaeb
    PUSH ESI                            ; 004bfaec
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004bfaed
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004bfaf2
    ADD EAX,0x2cc                       ; 004bfaf5
    PUSH EAX                            ; 004bfafa
    CALL core_actor.cpp_createActorByName_FUN_0040d540 ; 004bfafb
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040d540(char * class_name)
    ADD ESP,0x4                         ; 004bfb00
    PUSH 0x586fe6                       ; 004bfb03 | = "This ammo is for your "
    MOV EBX,EAX                         ; 004bfb08
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004bfb0a
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004bfb0f
    LEA EDI,[ESP + 0x100]               ; 004bfb12
    MOV ESI,EAX                         ; 004bfb19
    PUSH EDI                            ; 004bfb1b
    MOV AL,byte ptr [ESI]               ; 004bfb1c
        ;   Label: LAB_004bfb1c
    MOV byte ptr [EDI],AL               ; 004bfb1e
    CMP AL,0x0                          ; 004bfb20
    JZ 0x004bfb34                       ; 004bfb22
        ;   XREF to: 004bfb34 (CONDITIONAL_JUMP)  ; LAB_004bfb34
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfb24
    ADD ESI,0x2                         ; 004bfb27
    MOV byte ptr [EDI + 0x1],AL         ; 004bfb2a
    ADD EDI,0x2                         ; 004bfb2d
    CMP AL,0x0                          ; 004bfb30
    JNZ 0x004bfb1c                      ; 004bfb32
        ;   XREF to: 004bfb1c (CONDITIONAL_JUMP)  ; LAB_004bfb1c
    POP EDI                             ; 004bfb34
        ;   Label: LAB_004bfb34
    PUSH EBX                            ; 004bfb35
    CALL core_inv.cpp_getItemDisplayName_FUN_004beca0 ; 004bfb36
        ;   XREF to: 004beca0 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDisplayName_FUN_004beca0(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004bfb3b
    LEA EDI,[ESP + 0x100]               ; 004bfb3e
    MOV ESI,EAX                         ; 004bfb45
    PUSH EDI                            ; 004bfb47
    SUB ECX,ECX                         ; 004bfb48
    DEC ECX                             ; 004bfb4a
    MOV AL,0x0                          ; 004bfb4b
    SCASB.REPNE ES:EDI                  ; 004bfb4d
    DEC EDI                             ; 004bfb4f
    MOV AL,byte ptr [ESI]               ; 004bfb50
        ;   Label: LAB_004bfb50
    MOV byte ptr [EDI],AL               ; 004bfb52
    CMP AL,0x0                          ; 004bfb54
    JZ 0x004bfb68                       ; 004bfb56
        ;   XREF to: 004bfb68 (CONDITIONAL_JUMP)  ; LAB_004bfb68
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfb58
    ADD ESI,0x2                         ; 004bfb5b
    MOV byte ptr [EDI + 0x1],AL         ; 004bfb5e
    ADD EDI,0x2                         ; 004bfb61
    CMP AL,0x0                          ; 004bfb64
    JNZ 0x004bfb50                      ; 004bfb66
        ;   XREF to: 004bfb50 (CONDITIONAL_JUMP)  ; LAB_004bfb50
    POP EDI                             ; 004bfb68
        ;   Label: LAB_004bfb68
    PUSH 0x586ffd                       ; 004bfb69 | = ".  Select your "
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004bfb6e
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004bfb73
    LEA EDI,[ESP + 0x100]               ; 004bfb76
    MOV ESI,EAX                         ; 004bfb7d
    PUSH EDI                            ; 004bfb7f
    SUB ECX,ECX                         ; 004bfb80
    DEC ECX                             ; 004bfb82
    MOV AL,0x0                          ; 004bfb83
    SCASB.REPNE ES:EDI                  ; 004bfb85
    DEC EDI                             ; 004bfb87
    MOV AL,byte ptr [ESI]               ; 004bfb88
        ;   Label: LAB_004bfb88
    MOV byte ptr [EDI],AL               ; 004bfb8a
    CMP AL,0x0                          ; 004bfb8c
    JZ 0x004bfba0                       ; 004bfb8e
        ;   XREF to: 004bfba0 (CONDITIONAL_JUMP)  ; LAB_004bfba0
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfb90
    ADD ESI,0x2                         ; 004bfb93
    MOV byte ptr [EDI + 0x1],AL         ; 004bfb96
    ADD EDI,0x2                         ; 004bfb99
    CMP AL,0x0                          ; 004bfb9c
    JNZ 0x004bfb88                      ; 004bfb9e
        ;   XREF to: 004bfb88 (CONDITIONAL_JUMP)  ; LAB_004bfb88
    POP EDI                             ; 004bfba0
        ;   Label: LAB_004bfba0
    PUSH EBX                            ; 004bfba1
    CALL core_inv.cpp_getItemDisplayName_FUN_004beca0 ; 004bfba2
        ;   XREF to: 004beca0 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDisplayName_FUN_004beca0(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004bfba7
    LEA EDI,[ESP + 0x100]               ; 004bfbaa
    MOV ESI,EAX                         ; 004bfbb1
    PUSH EDI                            ; 004bfbb3
    SUB ECX,ECX                         ; 004bfbb4
    DEC ECX                             ; 004bfbb6
    MOV AL,0x0                          ; 004bfbb7
    SCASB.REPNE ES:EDI                  ; 004bfbb9
    DEC EDI                             ; 004bfbbb
    MOV AL,byte ptr [ESI]               ; 004bfbbc
        ;   Label: LAB_004bfbbc
    MOV byte ptr [EDI],AL               ; 004bfbbe
    CMP AL,0x0                          ; 004bfbc0
    JZ 0x004bfbd4                       ; 004bfbc2
        ;   XREF to: 004bfbd4 (CONDITIONAL_JUMP)  ; LAB_004bfbd4
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfbc4
    ADD ESI,0x2                         ; 004bfbc7
    MOV byte ptr [EDI + 0x1],AL         ; 004bfbca
    ADD EDI,0x2                         ; 004bfbcd
    CMP AL,0x0                          ; 004bfbd0
    JNZ 0x004bfbbc                      ; 004bfbd2
        ;   XREF to: 004bfbbc (CONDITIONAL_JUMP)  ; LAB_004bfbbc
    POP EDI                             ; 004bfbd4
        ;   Label: LAB_004bfbd4
    PUSH 0x58700d                       ; 004bfbd5 | = " with "
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004bfbda
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004bfbdf
    LEA EDI,[ESP + 0x100]               ; 004bfbe2
    MOV ESI,EAX                         ; 004bfbe9
    PUSH EDI                            ; 004bfbeb
    SUB ECX,ECX                         ; 004bfbec
    DEC ECX                             ; 004bfbee
    MOV AL,0x0                          ; 004bfbef
    SCASB.REPNE ES:EDI                  ; 004bfbf1
    DEC EDI                             ; 004bfbf3
    MOV AL,byte ptr [ESI]               ; 004bfbf4
        ;   Label: LAB_004bfbf4
    MOV byte ptr [EDI],AL               ; 004bfbf6
    CMP AL,0x0                          ; 004bfbf8
    JZ 0x004bfc0c                       ; 004bfbfa
        ;   XREF to: 004bfc0c (CONDITIONAL_JUMP)  ; LAB_004bfc0c
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfbfc
    ADD ESI,0x2                         ; 004bfbff
    MOV byte ptr [EDI + 0x1],AL         ; 004bfc02
    ADD EDI,0x2                         ; 004bfc05
    CMP AL,0x0                          ; 004bfc08
    JNZ 0x004bfbf4                      ; 004bfc0a
        ;   XREF to: 004bfbf4 (CONDITIONAL_JUMP)  ; LAB_004bfbf4
    POP EDI                             ; 004bfc0c
        ;   Label: LAB_004bfc0c
    MOV EAX,[0x005b9354]                ; 004bfc0d | g_CGame_PTR_005b9354
    MOV EDX,dword ptr [EAX + 0x7c]      ; 004bfc12 | g_CGame_01c775ec.key_next_weapon
    PUSH EDX                            ; 004bfc15
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 004bfc16
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004d2900(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004bfc1b
    LEA EDI,[ESP + 0x100]               ; 004bfc1e
    MOV ESI,EAX                         ; 004bfc25
    PUSH EDI                            ; 004bfc27
    SUB ECX,ECX                         ; 004bfc28
    DEC ECX                             ; 004bfc2a
    MOV AL,0x0                          ; 004bfc2b
    SCASB.REPNE ES:EDI                  ; 004bfc2d
    DEC EDI                             ; 004bfc2f
    MOV AL,byte ptr [ESI]               ; 004bfc30
        ;   Label: LAB_004bfc30
    MOV byte ptr [EDI],AL               ; 004bfc32
    CMP AL,0x0                          ; 004bfc34
    JZ 0x004bfc48                       ; 004bfc36
        ;   XREF to: 004bfc48 (CONDITIONAL_JUMP)  ; LAB_004bfc48
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfc38
    ADD ESI,0x2                         ; 004bfc3b
    MOV byte ptr [EDI + 0x1],AL         ; 004bfc3e
    ADD EDI,0x2                         ; 004bfc41
    CMP AL,0x0                          ; 004bfc44
    JNZ 0x004bfc30                      ; 004bfc46
        ;   XREF to: 004bfc30 (CONDITIONAL_JUMP)  ; LAB_004bfc30
    POP EDI                             ; 004bfc48
        ;   Label: LAB_004bfc48
    PUSH 0x587014                       ; 004bfc49 | = " and "
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004bfc4e
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004bfc53
    LEA EDI,[ESP + 0x100]               ; 004bfc56
    MOV ESI,EAX                         ; 004bfc5d
    PUSH EDI                            ; 004bfc5f
    SUB ECX,ECX                         ; 004bfc60
    DEC ECX                             ; 004bfc62
    MOV AL,0x0                          ; 004bfc63
    SCASB.REPNE ES:EDI                  ; 004bfc65
    DEC EDI                             ; 004bfc67
    MOV AL,byte ptr [ESI]               ; 004bfc68
        ;   Label: LAB_004bfc68
    MOV byte ptr [EDI],AL               ; 004bfc6a
    CMP AL,0x0                          ; 004bfc6c
    JZ 0x004bfc80                       ; 004bfc6e
        ;   XREF to: 004bfc80 (CONDITIONAL_JUMP)  ; LAB_004bfc80
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfc70
    ADD ESI,0x2                         ; 004bfc73
    MOV byte ptr [EDI + 0x1],AL         ; 004bfc76
    ADD EDI,0x2                         ; 004bfc79
    CMP AL,0x0                          ; 004bfc7c
    JNZ 0x004bfc68                      ; 004bfc7e
        ;   XREF to: 004bfc68 (CONDITIONAL_JUMP)  ; LAB_004bfc68
    POP EDI                             ; 004bfc80
        ;   Label: LAB_004bfc80
    MOV EAX,[0x005b9354]                ; 004bfc81 | g_CGame_PTR_005b9354
    MOV ECX,dword ptr [EAX + 0x80]      ; 004bfc86 | g_CGame_01c775ec.key_prev_weapon
    PUSH ECX                            ; 004bfc8c
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 004bfc8d
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004d2900(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004bfc92
    LEA EDI,[ESP + 0x100]               ; 004bfc95
    MOV ESI,EAX                         ; 004bfc9c
    PUSH EDI                            ; 004bfc9e
    SUB ECX,ECX                         ; 004bfc9f
    DEC ECX                             ; 004bfca1
    MOV AL,0x0                          ; 004bfca2
    SCASB.REPNE ES:EDI                  ; 004bfca4
    DEC EDI                             ; 004bfca6
    MOV AL,byte ptr [ESI]               ; 004bfca7
        ;   Label: LAB_004bfca7
    MOV byte ptr [EDI],AL               ; 004bfca9
    CMP AL,0x0                          ; 004bfcab
    JZ 0x004bfcbf                       ; 004bfcad
        ;   XREF to: 004bfcbf (CONDITIONAL_JUMP)  ; LAB_004bfcbf
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfcaf
    ADD ESI,0x2                         ; 004bfcb2
    MOV byte ptr [EDI + 0x1],AL         ; 004bfcb5
    ADD EDI,0x2                         ; 004bfcb8
    CMP AL,0x0                          ; 004bfcbb
    JNZ 0x004bfca7                      ; 004bfcbd
        ;   XREF to: 004bfca7 (CONDITIONAL_JUMP)  ; LAB_004bfca7
    POP EDI                             ; 004bfcbf
        ;   Label: LAB_004bfcbf
    PUSH 0x58701a                       ; 004bfcc0 | = "."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004bfcc5
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004bfcca
    LEA EDI,[ESP + 0x100]               ; 004bfccd
    MOV ESI,EAX                         ; 004bfcd4
    PUSH EDI                            ; 004bfcd6
    SUB ECX,ECX                         ; 004bfcd7
    DEC ECX                             ; 004bfcd9
    MOV AL,0x0                          ; 004bfcda
    SCASB.REPNE ES:EDI                  ; 004bfcdc
    DEC EDI                             ; 004bfcde
    MOV AL,byte ptr [ESI]               ; 004bfcdf
        ;   Label: LAB_004bfcdf
    MOV byte ptr [EDI],AL               ; 004bfce1
    CMP AL,0x0                          ; 004bfce3
    JZ 0x004bfcf7                       ; 004bfce5
        ;   XREF to: 004bfcf7 (CONDITIONAL_JUMP)  ; LAB_004bfcf7
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfce7
    ADD ESI,0x2                         ; 004bfcea
    MOV byte ptr [EDI + 0x1],AL         ; 004bfced
    ADD EDI,0x2                         ; 004bfcf0
    CMP AL,0x0                          ; 004bfcf3
    JNZ 0x004bfcdf                      ; 004bfcf5
        ;   XREF to: 004bfcdf (CONDITIONAL_JUMP)  ; LAB_004bfcdf
    POP EDI                             ; 004bfcf7
        ;   Label: LAB_004bfcf7
    TEST EBX,EBX                        ; 004bfcf8
    JZ 0x004bfd0e                       ; 004bfcfa
        ;   XREF to: 004bfd0e (CONDITIONAL_JUMP)  ; LAB_004bfd0e
    PUSH 0x2                            ; 004bfcfc
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004bfcfe
    PUSH EBX                            ; 004bfd04
    CALL dword ptr [EAX + 0xc8]         ; 004bfd05
    ADD ESP,0x8                         ; 004bfd0b
    PUSH 0x58701c                       ; 004bfd0e | = "CWeapon"
        ;   Label: LAB_004bfd0e
    MOV EBX,dword ptr [ESP + 0x340]     ; 004bfd13
    PUSH EBX                            ; 004bfd1a
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004bfd1b
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004bfd20
    TEST EAX,EAX                        ; 004bfd23
    JZ 0x004bfec4                       ; 004bfd25
        ;   XREF to: 004bfec4 (CONDITIONAL_JUMP)  ; LAB_004bfec4
    MOV ESI,dword ptr [0x02ddf9a8]      ; 004bfd2b | g_CWeaponActorType_02ddf970.name_hash
    PUSH ESI                            ; 004bfd31
    PUSH EBX                            ; 004bfd32
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004bfd33
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004bfd38
    PUSH 0x587024                       ; 004bfd3b | = "Select your "
    MOV EBX,EAX                         ; 004bfd40
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004bfd42
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004bfd47
    LEA EDI,[ESP + 0x100]               ; 004bfd4a
    MOV ESI,EAX                         ; 004bfd51
    PUSH EDI                            ; 004bfd53
    MOV AL,byte ptr [ESI]               ; 004bfd54
        ;   Label: LAB_004bfd54
    MOV byte ptr [EDI],AL               ; 004bfd56
    CMP AL,0x0                          ; 004bfd58
    JZ 0x004bfd6c                       ; 004bfd5a
        ;   XREF to: 004bfd6c (CONDITIONAL_JUMP)  ; LAB_004bfd6c
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfd5c
    ADD ESI,0x2                         ; 004bfd5f
    MOV byte ptr [EDI + 0x1],AL         ; 004bfd62
    ADD EDI,0x2                         ; 004bfd65
    CMP AL,0x0                          ; 004bfd68
    JNZ 0x004bfd54                      ; 004bfd6a
        ;   XREF to: 004bfd54 (CONDITIONAL_JUMP)  ; LAB_004bfd54
    POP EDI                             ; 004bfd6c
        ;   Label: LAB_004bfd6c
    PUSH EBX                            ; 004bfd6d
    CALL core_inv.cpp_getItemDisplayName_FUN_004beca0 ; 004bfd6e
        ;   XREF to: 004beca0 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDisplayName_FUN_004beca0(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004bfd73
    LEA EDI,[ESP + 0x100]               ; 004bfd76
    MOV ESI,EAX                         ; 004bfd7d
    PUSH EDI                            ; 004bfd7f
    SUB ECX,ECX                         ; 004bfd80
    DEC ECX                             ; 004bfd82
    MOV AL,0x0                          ; 004bfd83
    SCASB.REPNE ES:EDI                  ; 004bfd85
    DEC EDI                             ; 004bfd87
    MOV AL,byte ptr [ESI]               ; 004bfd88
        ;   Label: LAB_004bfd88
    MOV byte ptr [EDI],AL               ; 004bfd8a
    CMP AL,0x0                          ; 004bfd8c
    JZ 0x004bfda0                       ; 004bfd8e
        ;   XREF to: 004bfda0 (CONDITIONAL_JUMP)  ; LAB_004bfda0
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfd90
    ADD ESI,0x2                         ; 004bfd93
    MOV byte ptr [EDI + 0x1],AL         ; 004bfd96
    ADD EDI,0x2                         ; 004bfd99
    CMP AL,0x0                          ; 004bfd9c
    JNZ 0x004bfd88                      ; 004bfd9e
        ;   XREF to: 004bfd88 (CONDITIONAL_JUMP)  ; LAB_004bfd88
    POP EDI                             ; 004bfda0
        ;   Label: LAB_004bfda0
    PUSH 0x587031                       ; 004bfda1 | = " with "
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004bfda6
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004bfdab
    LEA EDI,[ESP + 0x100]               ; 004bfdae
    MOV ESI,EAX                         ; 004bfdb5
    PUSH EDI                            ; 004bfdb7
    SUB ECX,ECX                         ; 004bfdb8
    DEC ECX                             ; 004bfdba
    MOV AL,0x0                          ; 004bfdbb
    SCASB.REPNE ES:EDI                  ; 004bfdbd
    DEC EDI                             ; 004bfdbf
    MOV AL,byte ptr [ESI]               ; 004bfdc0
        ;   Label: LAB_004bfdc0
    MOV byte ptr [EDI],AL               ; 004bfdc2
    CMP AL,0x0                          ; 004bfdc4
    JZ 0x004bfdd8                       ; 004bfdc6
        ;   XREF to: 004bfdd8 (CONDITIONAL_JUMP)  ; LAB_004bfdd8
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfdc8
    ADD ESI,0x2                         ; 004bfdcb
    MOV byte ptr [EDI + 0x1],AL         ; 004bfdce
    ADD EDI,0x2                         ; 004bfdd1
    CMP AL,0x0                          ; 004bfdd4
    JNZ 0x004bfdc0                      ; 004bfdd6
        ;   XREF to: 004bfdc0 (CONDITIONAL_JUMP)  ; LAB_004bfdc0
    POP EDI                             ; 004bfdd8
        ;   Label: LAB_004bfdd8
    MOV EAX,[0x005b9354]                ; 004bfdd9 | g_CGame_PTR_005b9354
    MOV EDX,dword ptr [EAX + 0x7c]      ; 004bfdde | g_CGame_01c775ec.key_next_weapon
    PUSH EDX                            ; 004bfde1
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 004bfde2
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004d2900(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004bfde7
    LEA EDI,[ESP + 0x100]               ; 004bfdea
    MOV ESI,EAX                         ; 004bfdf1
    PUSH EDI                            ; 004bfdf3
    SUB ECX,ECX                         ; 004bfdf4
    DEC ECX                             ; 004bfdf6
    MOV AL,0x0                          ; 004bfdf7
    SCASB.REPNE ES:EDI                  ; 004bfdf9
    DEC EDI                             ; 004bfdfb
    MOV AL,byte ptr [ESI]               ; 004bfdfc
        ;   Label: LAB_004bfdfc
    MOV byte ptr [EDI],AL               ; 004bfdfe
    CMP AL,0x0                          ; 004bfe00
    JZ 0x004bfe14                       ; 004bfe02
        ;   XREF to: 004bfe14 (CONDITIONAL_JUMP)  ; LAB_004bfe14
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfe04
    ADD ESI,0x2                         ; 004bfe07
    MOV byte ptr [EDI + 0x1],AL         ; 004bfe0a
    ADD EDI,0x2                         ; 004bfe0d
    CMP AL,0x0                          ; 004bfe10
    JNZ 0x004bfdfc                      ; 004bfe12
        ;   XREF to: 004bfdfc (CONDITIONAL_JUMP)  ; LAB_004bfdfc
    POP EDI                             ; 004bfe14
        ;   Label: LAB_004bfe14
    PUSH 0x587038                       ; 004bfe15 | = " and "
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004bfe1a
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004bfe1f
    LEA EDI,[ESP + 0x100]               ; 004bfe22
    MOV ESI,EAX                         ; 004bfe29
    PUSH EDI                            ; 004bfe2b
    SUB ECX,ECX                         ; 004bfe2c
    DEC ECX                             ; 004bfe2e
    MOV AL,0x0                          ; 004bfe2f
    SCASB.REPNE ES:EDI                  ; 004bfe31
    DEC EDI                             ; 004bfe33
    MOV AL,byte ptr [ESI]               ; 004bfe34
        ;   Label: LAB_004bfe34
    MOV byte ptr [EDI],AL               ; 004bfe36
    CMP AL,0x0                          ; 004bfe38
    JZ 0x004bfe4c                       ; 004bfe3a
        ;   XREF to: 004bfe4c (CONDITIONAL_JUMP)  ; LAB_004bfe4c
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfe3c
    ADD ESI,0x2                         ; 004bfe3f
    MOV byte ptr [EDI + 0x1],AL         ; 004bfe42
    ADD EDI,0x2                         ; 004bfe45
    CMP AL,0x0                          ; 004bfe48
    JNZ 0x004bfe34                      ; 004bfe4a
        ;   XREF to: 004bfe34 (CONDITIONAL_JUMP)  ; LAB_004bfe34
    POP EDI                             ; 004bfe4c
        ;   Label: LAB_004bfe4c
    MOV EAX,[0x005b9354]                ; 004bfe4d | g_CGame_PTR_005b9354
    MOV ECX,dword ptr [EAX + 0x80]      ; 004bfe52 | g_CGame_01c775ec.key_prev_weapon
    PUSH ECX                            ; 004bfe58
    CALL core_menu.cpp_getKeyDisplayName_FUN_004d2900 ; 004bfe59
        ;   XREF to: 004d2900 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004d2900(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004bfe5e
    LEA EDI,[ESP + 0x100]               ; 004bfe61
    MOV ESI,EAX                         ; 004bfe68
    PUSH EDI                            ; 004bfe6a
    SUB ECX,ECX                         ; 004bfe6b
    DEC ECX                             ; 004bfe6d
    MOV AL,0x0                          ; 004bfe6e
    SCASB.REPNE ES:EDI                  ; 004bfe70
    DEC EDI                             ; 004bfe72
    MOV AL,byte ptr [ESI]               ; 004bfe73
        ;   Label: LAB_004bfe73
    MOV byte ptr [EDI],AL               ; 004bfe75
    CMP AL,0x0                          ; 004bfe77
    JZ 0x004bfe8b                       ; 004bfe79
        ;   XREF to: 004bfe8b (CONDITIONAL_JUMP)  ; LAB_004bfe8b
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfe7b
    ADD ESI,0x2                         ; 004bfe7e
    MOV byte ptr [EDI + 0x1],AL         ; 004bfe81
    ADD EDI,0x2                         ; 004bfe84
    CMP AL,0x0                          ; 004bfe87
    JNZ 0x004bfe73                      ; 004bfe89
        ;   XREF to: 004bfe73 (CONDITIONAL_JUMP)  ; LAB_004bfe73
    POP EDI                             ; 004bfe8b
        ;   Label: LAB_004bfe8b
    PUSH 0x58703e                       ; 004bfe8c | = "."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004bfe91
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004bfe96
    LEA EDI,[ESP + 0x100]               ; 004bfe99
    MOV ESI,EAX                         ; 004bfea0
    PUSH EDI                            ; 004bfea2
    SUB ECX,ECX                         ; 004bfea3
    DEC ECX                             ; 004bfea5
    MOV AL,0x0                          ; 004bfea6
    SCASB.REPNE ES:EDI                  ; 004bfea8
    DEC EDI                             ; 004bfeaa
    MOV AL,byte ptr [ESI]               ; 004bfeab
        ;   Label: LAB_004bfeab
    MOV byte ptr [EDI],AL               ; 004bfead
    CMP AL,0x0                          ; 004bfeaf
    JZ 0x004bfec3                       ; 004bfeb1
        ;   XREF to: 004bfec3 (CONDITIONAL_JUMP)  ; LAB_004bfec3
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfeb3
    ADD ESI,0x2                         ; 004bfeb6
    MOV byte ptr [EDI + 0x1],AL         ; 004bfeb9
    ADD EDI,0x2                         ; 004bfebc
    CMP AL,0x0                          ; 004bfebf
    JNZ 0x004bfeab                      ; 004bfec1
        ;   XREF to: 004bfeab (CONDITIONAL_JUMP)  ; LAB_004bfeab
    POP EDI                             ; 004bfec3
        ;   Label: LAB_004bfec3
    MOV EAX,ESP                         ; 004bfec4
        ;   Label: LAB_004bfec4
    PUSH 0x41200000                     ; 004bfec6
    PUSH EAX                            ; 004bfecb
    MOV EBX,dword ptr [0x005b9354]      ; 004bfecc | g_CGame_PTR_005b9354
    PUSH EBX                            ; 004bfed2 | g_CGame_01c775ec
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004bfed3
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004bfed8
    LEA EBX,[EBP + 0x34c]               ; 004bfedb
    LEA ESI,[ESP + 0x100]               ; 004bfee1
    MOV EDI,EBX                         ; 004bfee8
    PUSH EDI                            ; 004bfeea
    MOV AL,byte ptr [ESI]               ; 004bfeeb
        ;   Label: LAB_004bfeeb
    MOV byte ptr [EDI],AL               ; 004bfeed
    CMP AL,0x0                          ; 004bfeef
    JZ 0x004bff03                       ; 004bfef1
        ;   XREF to: 004bff03 (CONDITIONAL_JUMP)  ; LAB_004bff03
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfef3
    ADD ESI,0x2                         ; 004bfef6
    MOV byte ptr [EDI + 0x1],AL         ; 004bfef9
    ADD EDI,0x2                         ; 004bfefc
    CMP AL,0x0                          ; 004bfeff
    JNZ 0x004bfeeb                      ; 004bff01
        ;   XREF to: 004bfeeb (CONDITIONAL_JUMP)  ; LAB_004bfeeb
    POP EDI                             ; 004bff03
        ;   Label: LAB_004bff03
    PUSH EBX                            ; 004bff04
    MOV ESI,dword ptr [0x014b9904]      ; 004bff05 | g_CBitFont_PTR_014b9904
    PUSH ESI                            ; 004bff0b
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 004bff0c
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004bff11
    MOV dword ptr [ESP + 0x320],EAX     ; 004bff14
    FILD dword ptr [ESP + 0x320]        ; 004bff1b
    FMUL double ptr [0x00587161]        ; 004bff22 | DOUBLE_00587161
    FSTP float ptr [EBP + 0x344]        ; 004bff28
    MOV EDI,dword ptr [0x007641f4]      ; 004bff2e | g_CAmmoActorType_007641bc.name_hash
        ;   Label: LAB_004bff2e
    PUSH EDI                            ; 004bff34
    MOV EAX,dword ptr [ESP + 0x340]     ; 004bff35
    PUSH EAX                            ; 004bff3c
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004bff3d
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004bff42
    MOV dword ptr [ESP + 0x310],EAX     ; 004bff45
    TEST EAX,EAX                        ; 004bff4c
    JZ 0x004c0262                       ; 004bff4e
        ;   XREF to: 004c0262 (CONDITIONAL_JUMP)  ; LAB_004c0262
    LEA EBX,[EAX + 0x2cc]               ; 004bff54
    PUSH EBX                            ; 004bff5a
    PUSH EAX                            ; 004bff5b
    XOR EDI,EDI                         ; 004bff5c
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80 ; 004bff5e
        ;   XREF to: 0040ed80 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ed80(CAmmo * this_ptr, char * weapon_class_name)
    MOV EDX,dword ptr [EBP + 0x8]       ; 004bff63
    ADD ESP,0x8                         ; 004bff66
    TEST EDX,EDX                        ; 004bff69
    JLE 0x004bff9e                      ; 004bff6b
        ;   XREF to: 004bff9e (CONDITIONAL_JUMP)  ; LAB_004bff9e
    MOV ESI,EBP                         ; 004bff6d
    MOV dword ptr [ESP + 0x308],EBX     ; 004bff6f
    MOV EDX,dword ptr [0x007641f4]      ; 004bff76 | g_CAmmoActorType_007641bc.name_hash
        ;   Label: LAB_004bff76
    PUSH EDX                            ; 004bff7c
    MOV ECX,dword ptr [ESI + 0xc]       ; 004bff7d
    PUSH ECX                            ; 004bff80
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004bff81
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 004bff86
    ADD ESP,0x8                         ; 004bff88
    TEST EAX,EAX                        ; 004bff8b
    JNZ 0x004c00e9                      ; 004bff8d
        ;   XREF to: 004c00e9 (CONDITIONAL_JUMP)  ; LAB_004c00e9
    INC EDI                             ; 004bff93
        ;   Label: LAB_004bff93
    MOV ECX,dword ptr [EBP + 0x8]       ; 004bff94
    ADD ESI,0x4                         ; 004bff97
    CMP EDI,ECX                         ; 004bff9a
    JL 0x004bff76                       ; 004bff9c
        ;   XREF to: 004bff76 (CONDITIONAL_JUMP)  ; LAB_004bff76
    MOV EDI,dword ptr [ESP + 0x310]     ; 004bff9e
        ;   Label: LAB_004bff9e
    MOV ESI,EBP                         ; 004bffa5
    MOV EAX,dword ptr [EBP + 0x8]       ; 004bffa7
    XOR EBX,EBX                         ; 004bffaa
    ADD EDI,0x2cc                       ; 004bffac
    MOV dword ptr [ESP + 0x304],EBX     ; 004bffb2
    TEST EAX,EAX                        ; 004bffb9
    JLE 0x004bffe3                      ; 004bffbb
        ;   XREF to: 004bffe3 (CONDITIONAL_JUMP)  ; LAB_004bffe3
    MOV EDX,dword ptr [0x02ddf9a8]      ; 004bffbd | g_CWeaponActorType_02ddf970.name_hash
        ;   Label: LAB_004bffbd
    PUSH EDX                            ; 004bffc3
    MOV ECX,dword ptr [ESI + 0xc]       ; 004bffc4
    PUSH ECX                            ; 004bffc7
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004bffc8
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004bffcd
    TEST EAX,EAX                        ; 004bffd0
    JNZ 0x004c0176                      ; 004bffd2
        ;   XREF to: 004c0176 (CONDITIONAL_JUMP)  ; LAB_004c0176
    INC EBX                             ; 004bffd8
        ;   Label: LAB_004bffd8
    MOV EAX,dword ptr [EBP + 0x8]       ; 004bffd9
    ADD ESI,0x4                         ; 004bffdc
    CMP EBX,EAX                         ; 004bffdf
    JL 0x004bffbd                       ; 004bffe1
        ;   XREF to: 004bffbd (CONDITIONAL_JUMP)  ; LAB_004bffbd
    CMP dword ptr [ESP + 0x304],0x0     ; 004bffe3
        ;   Label: LAB_004bffe3
    JZ 0x004c024c                       ; 004bffeb
        ;   XREF to: 004c024c (CONDITIONAL_JUMP)  ; LAB_004c024c
    MOV EAX,dword ptr [ESP + 0x310]     ; 004bfff1
        ;   Label: LAB_004bfff1
    MOV ESI,EBP                         ; 004bfff8
    MOV EBX,dword ptr [EBP + 0x8]       ; 004bfffa
    ADD EAX,0x2cc                       ; 004bfffd
    XOR EDI,EDI                         ; 004c0002
    MOV dword ptr [ESP + 0x30c],EAX     ; 004c0004
    TEST EBX,EBX                        ; 004c000b
    JLE 0x004c0036                      ; 004c000d
        ;   XREF to: 004c0036 (CONDITIONAL_JUMP)  ; LAB_004c0036
    MOV EAX,[0x02ddf9a8]                ; 004c000f | g_CWeaponActorType_02ddf970.name_hash
        ;   Label: LAB_004c000f
    PUSH EAX                            ; 004c0014
    MOV EDX,dword ptr [ESI + 0xc]       ; 004c0015
    PUSH EDX                            ; 004c0018
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c0019
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 004c001e
    ADD ESP,0x8                         ; 004c0020
    TEST EAX,EAX                        ; 004c0023
    JNZ 0x004c0196                      ; 004c0025
        ;   XREF to: 004c0196 (CONDITIONAL_JUMP)  ; LAB_004c0196
    INC EDI                             ; 004c002b
        ;   Label: LAB_004c002b
    MOV ECX,dword ptr [EBP + 0x8]       ; 004c002c
    ADD ESI,0x4                         ; 004c002f
    CMP EDI,ECX                         ; 004c0032
    JL 0x004c000f                       ; 004c0034
        ;   XREF to: 004c000f (CONDITIONAL_JUMP)  ; LAB_004c000f
    MOV EBX,dword ptr [ESP + 0x30c]     ; 004c0036
        ;   Label: LAB_004c0036
    PUSH EBX                            ; 004c003d
    CALL core_actor.cpp_createActorByName_FUN_0040d540 ; 004c003e
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040d540(char * class_name)
    ADD ESP,0x4                         ; 004c0043
    PUSH EAX                            ; 004c0046
    MOV ESI,dword ptr [0x005baf90]      ; 004c0047 | g_CDemonMission_PTR_005baf90
    PUSH ESI                            ; 004c004d
    MOV EBX,EAX                         ; 004c004e
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720 ; 004c0050
        ;   XREF to: 004d9720 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004c0055
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004c0058
    PUSH EBX                            ; 004c005e
    CALL dword ptr [EAX]                ; 004c005f
    ADD ESP,0x4                         ; 004c0061
    MOV EAX,dword ptr [ESP + 0x310]     ; 004c0064
    MOV EAX,dword ptr [EAX + 0x30c]     ; 004c006b
    MOV dword ptr [EBX + 0x560],EAX     ; 004c0071
    MOV EAX,dword ptr [ESP + 0x310]     ; 004c0077
    MOV EAX,dword ptr [EAX + 0x310]     ; 004c007e
    MOV dword ptr [EBX + 0x564],EAX     ; 004c0084
    MOV EDI,dword ptr [EBP + 0x4]       ; 004c008a
    PUSH EDI                            ; 004c008d
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004c008e
    PUSH EBX                            ; 004c0094
    CALL dword ptr [EAX + 0x80]         ; 004c0095
    ADD ESP,0x8                         ; 004c009b
    MOV EAX,dword ptr [EBP + 0x8]       ; 004c009e
    PUSH 0x1                            ; 004c00a1
    MOV dword ptr [EBP + EAX*0x4 + 0xc],EBX ; 004c00a3
    MOV EAX,dword ptr [ESP + 0x340]     ; 004c00a7
    MOV ECX,dword ptr [EBP + 0x8]       ; 004c00ae
    PUSH EAX                            ; 004c00b1
    MOV EDX,dword ptr [0x005baf90]      ; 004c00b2 | g_CDemonMission_PTR_005baf90
    INC ECX                             ; 004c00b8
    PUSH EDX                            ; 004c00b9
    MOV dword ptr [EBP + 0x8],ECX       ; 004c00ba
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_004d9110 ; 004c00bd
        ;   XREF to: 004d9110 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_004d9110(CDemonMission * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 004c00c2
    PUSH 0x587088                       ; 004c00c5 | = "Found new type of ammo for existing w..."
    MOV EBX,dword ptr [0x005ad350]      ; 004c00ca | g_CConsole_PTR_005ad350
    PUSH EBX                            ; 004c00d0 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004c00d1
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    MOV EAX,0x1                         ; 004c00d6
    ADD ESP,0x8                         ; 004c00db
    ADD ESP,0x324                       ; 004c00de
    POP EBP                             ; 004c00e4
    POP EDI                             ; 004c00e5
    POP ESI                             ; 004c00e6
    POP EBX                             ; 004c00e7
    RET                                 ; 004c00e8
    ADD EAX,0x2cc                       ; 004c00e9
        ;   Label: LAB_004c00e9
    PUSH EAX                            ; 004c00ee
    MOV EAX,dword ptr [ESP + 0x30c]     ; 004c00ef
    PUSH EAX                            ; 004c00f6
    CALL crt_string.c__strcmp_FUN_005649c0 ; 004c00f7
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004c00fc
    TEST EAX,EAX                        ; 004c00ff
    JNZ 0x004bff93                      ; 004c0101
        ;   XREF to: 004bff93 (CONDITIONAL_JUMP)  ; LAB_004bff93
    MOV EAX,dword ptr [ESP + 0x310]     ; 004c0107
    MOV EDX,dword ptr [EBX + 0x310]     ; 004c010e
    CMP EDX,dword ptr [EAX + 0x310]     ; 004c0114
    JNZ 0x004bff93                      ; 004c011a
        ;   XREF to: 004bff93 (CONDITIONAL_JUMP)  ; LAB_004bff93
    MOV EAX,dword ptr [ESP + 0x310]     ; 004c0120
    MOV ECX,dword ptr [EBX + 0x30c]     ; 004c0127
    ADD ECX,dword ptr [EAX + 0x30c]     ; 004c012d
    PUSH 0x587040                       ; 004c0133 | = "Found existing ammo, but no weapon\n"
    MOV dword ptr [EBX + 0x30c],ECX     ; 004c0138
    MOV EBX,dword ptr [0x005ad350]      ; 004c013e | g_CConsole_PTR_005ad350
    PUSH EBX                            ; 004c0144 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004c0145
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004c014a
    PUSH 0x1                            ; 004c014d
    MOV ESI,dword ptr [ESP + 0x340]     ; 004c014f
    PUSH ESI                            ; 004c0156
    MOV EDI,dword ptr [0x005baf90]      ; 004c0157 | g_CDemonMission_PTR_005baf90
    PUSH EDI                            ; 004c015d
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_004d9110 ; 004c015e
        ;   XREF to: 004d9110 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_004d9110(CDemonMission * this_ptr, undefined4 param_2, undefined4 param_3)
    MOV EAX,0x1                         ; 004c0163
    ADD ESP,0xc                         ; 004c0168
    ADD ESP,0x324                       ; 004c016b
    POP EBP                             ; 004c0171
    POP EDI                             ; 004c0172
    POP ESI                             ; 004c0173
    POP EBX                             ; 004c0174
    RET                                 ; 004c0175
    PUSH EAX                            ; 004c0176
        ;   Label: LAB_004c0176
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0 ; 004c0177
        ;   XREF to: 00409fa0 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c017c
    PUSH EAX                            ; 004c017f
    PUSH EDI                            ; 004c0180
    CALL crt_string.c__stricmp_FUN_00564520 ; 004c0181
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004c0186
    TEST EAX,EAX                        ; 004c0189
    JNZ 0x004bffd8                      ; 004c018b
        ;   XREF to: 004bffd8 (CONDITIONAL_JUMP)  ; LAB_004bffd8
    JMP 0x004bfff1                      ; 004c0191
        ;   XREF to: 004bfff1 (UNCONDITIONAL_JUMP)  ; LAB_004bfff1
    PUSH EAX                            ; 004c0196
        ;   Label: LAB_004c0196
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0 ; 004c0197
        ;   XREF to: 00409fa0 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c019c
    PUSH EAX                            ; 004c019f
    MOV ECX,dword ptr [ESP + 0x310]     ; 004c01a0
    PUSH ECX                            ; 004c01a7
    CALL crt_string.c__stricmp_FUN_00564520 ; 004c01a8
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004c01ad
    TEST EAX,EAX                        ; 004c01b0
    JNZ 0x004c002b                      ; 004c01b2
        ;   XREF to: 004c002b (CONDITIONAL_JUMP)  ; LAB_004c002b
    MOV EDX,dword ptr [ESP + 0x310]     ; 004c01b8
    MOV EAX,dword ptr [EBX + 0x564]     ; 004c01bf
    CMP EAX,dword ptr [EDX + 0x310]     ; 004c01c5
    JNZ 0x004c002b                      ; 004c01cb
        ;   XREF to: 004c002b (CONDITIONAL_JUMP)  ; LAB_004c002b
    MOV EDI,dword ptr [0x02dd1008]      ; 004c01d1 | g_CTommyGunActorType_02dd0fd0.name_hash
    MOV EAX,dword ptr [EDX + 0x30c]     ; 004c01d7
    MOV ESI,dword ptr [EBX + 0x560]     ; 004c01dd
    PUSH EDI                            ; 004c01e3
    ADD ESI,EAX                         ; 004c01e4
    PUSH EBX                            ; 004c01e6
    MOV dword ptr [EBX + 0x560],ESI     ; 004c01e7
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c01ed
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004c01f2
    TEST EAX,EAX                        ; 004c01f5
    JZ 0x004c020f                       ; 004c01f7
        ;   XREF to: 004c020f (CONDITIONAL_JUMP)  ; LAB_004c020f
    CMP dword ptr [EAX + 0x560],0xc8    ; 004c01f9
    JLE 0x004c020f                      ; 004c0203
        ;   XREF to: 004c020f (CONDITIONAL_JUMP)  ; LAB_004c020f
    MOV dword ptr [EAX + 0x560],0xc8    ; 004c0205
    PUSH 0x1                            ; 004c020f
        ;   Label: LAB_004c020f
    MOV EAX,dword ptr [ESP + 0x340]     ; 004c0211
    PUSH EAX                            ; 004c0218
    MOV EDX,dword ptr [0x005baf90]      ; 004c0219 | g_CDemonMission_PTR_005baf90
    PUSH EDX                            ; 004c021f
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_004d9110 ; 004c0220
        ;   XREF to: 004d9110 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_004d9110(CDemonMission * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 004c0225
    PUSH 0x587064                       ; 004c0228 | = "Found weapon to put this ammo into\n"
    MOV ECX,dword ptr [0x005ad350]      ; 004c022d | g_CConsole_PTR_005ad350
    PUSH ECX                            ; 004c0233 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004c0234
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    MOV EAX,0x1                         ; 004c0239
    ADD ESP,0x8                         ; 004c023e
    ADD ESP,0x324                       ; 004c0241
    POP EBP                             ; 004c0247
    POP EDI                             ; 004c0248
    POP ESI                             ; 004c0249
    POP EBX                             ; 004c024a
    RET                                 ; 004c024b
    PUSH 0x5870cf                       ; 004c024c | = "CDynamite"
        ;   Label: LAB_004c024c
    PUSH EDI                            ; 004c0251
    CALL crt_string.c__strcmp_FUN_005649c0 ; 004c0252
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004c0257
    TEST EAX,EAX                        ; 004c025a
    JZ 0x004c02e8                       ; 004c025c
        ;   XREF to: 004c02e8 (CONDITIONAL_JUMP)  ; LAB_004c02e8
    MOV ESI,dword ptr [0x02ddf9a8]      ; 004c0262 | g_CWeaponActorType_02ddf970.name_hash
        ;   Label: LAB_004c0262
    PUSH ESI                            ; 004c0268
    MOV EDI,dword ptr [ESP + 0x340]     ; 004c0269
    PUSH EDI                            ; 004c0270
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c0271
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004c0276
    MOV EDI,EAX                         ; 004c0279
    TEST EAX,EAX                        ; 004c027b
    JNZ 0x004c0379                      ; 004c027d
        ;   XREF to: 004c0379 (CONDITIONAL_JUMP)  ; LAB_004c0379
    MOV EDX,dword ptr [ESP + 0x33c]     ; 004c0283
        ;   Label: LAB_004c0283
    MOV EAX,dword ptr [EBP + 0x8]       ; 004c028a
    PUSH EDX                            ; 004c028d
    MOV dword ptr [EBP + EAX*0x4 + 0xc],EDX ; 004c028e
    MOV ESI,dword ptr [0x005baf90]      ; 004c0292 | g_CDemonMission_PTR_005baf90
    MOV EAX,dword ptr [EBP + 0x8]       ; 004c0298
    PUSH ESI                            ; 004c029b
    INC EAX                             ; 004c029c
    MOV EBX,EDX                         ; 004c029d
    MOV dword ptr [EBP + 0x8],EAX       ; 004c029f
    CALL core_mission.cpp_CDemonMission_FUN_004d8cd0 ; 004c02a2
        ;   XREF to: 004d8cd0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_FUN_004d8cd0(CDemonMission * this_ptr, CDemonActor * param_2)
    ADD ESP,0x8                         ; 004c02a7
    MOV EAX,EBX                         ; 004c02aa
    PUSH EBP                            ; 004c02ac
    MOV EDX,EBX                         ; 004c02ad
    MOV EAX,dword ptr [EAX + 0x14c]     ; 004c02af
    PUSH EDX                            ; 004c02b5
    CALL dword ptr [EAX + 0x64]         ; 004c02b6
    ADD ESP,0x8                         ; 004c02b9
    TEST EDI,EDI                        ; 004c02bc
    JZ 0x004c02d8                       ; 004c02be
        ;   XREF to: 004c02d8 (CONDITIONAL_JUMP)  ; LAB_004c02d8
    MOV EAX,dword ptr [EBP + 0x330]     ; 004c02c0
    TEST EAX,EAX                        ; 004c02c6
    JNZ 0x004c02d8                      ; 004c02c8
        ;   XREF to: 004c02d8 (CONDITIONAL_JUMP)  ; LAB_004c02d8
    PUSH 0x1                            ; 004c02ca
    PUSH 0x5                            ; 004c02cc
    PUSH EDI                            ; 004c02ce
    PUSH EBP                            ; 004c02cf
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004c0850 ; 004c02d0
        ;   XREF to: 004c0850 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004c0850(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004c02d5
    MOV EAX,0x1                         ; 004c02d8
        ;   Label: LAB_004c02d8
    ADD ESP,0x324                       ; 004c02dd
    POP EBP                             ; 004c02e3
    POP EDI                             ; 004c02e4
    POP ESI                             ; 004c02e5
    POP EBX                             ; 004c02e6
    RET                                 ; 004c02e7
    PUSH 0x5870d9                       ; 004c02e8 | = "CDynamite"
        ;   Label: LAB_004c02e8
    CALL core_actor.cpp_createActorByName_FUN_0040d540 ; 004c02ed
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040d540(char * class_name)
    ADD ESP,0x4                         ; 004c02f2
    PUSH EAX                            ; 004c02f5
    MOV ECX,dword ptr [0x005baf90]      ; 004c02f6 | g_CDemonMission_PTR_005baf90
    PUSH ECX                            ; 004c02fc
    MOV EBX,EAX                         ; 004c02fd
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720 ; 004c02ff
        ;   XREF to: 004d9720 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004c0304
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004c0307
    PUSH EBX                            ; 004c030d
    CALL dword ptr [EAX]                ; 004c030e
    ADD ESP,0x4                         ; 004c0310
    MOV EAX,dword ptr [ESP + 0x310]     ; 004c0313
    MOV EAX,dword ptr [EAX + 0x30c]     ; 004c031a
    MOV dword ptr [EBX + 0x560],EAX     ; 004c0320
    MOV ESI,dword ptr [EBP + 0x4]       ; 004c0326
    PUSH ESI                            ; 004c0329
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004c032a
    PUSH EBX                            ; 004c0330
    CALL dword ptr [EAX + 0x80]         ; 004c0331
    ADD ESP,0x8                         ; 004c0337
    MOV EDI,dword ptr [ESP + 0x33c]     ; 004c033a
    PUSH EDI                            ; 004c0341
    CALL core_actor.cpp_destroyActor_FUN_00409cd0 ; 004c0342
        ;   XREF to: 00409cd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_destroyActor_FUN_00409cd0(CDemonActor * actor)
    ADD ESP,0x4                         ; 004c0347
    PUSH 0x5870e3                       ; 004c034a | = "Found dynamite.  Creating weapon for ..."
    MOV EAX,[0x005ad350]                ; 004c034f | g_CConsole_PTR_005ad350
    PUSH EAX                            ; 004c0354 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004c0355
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004c035a
    PUSH 0x1                            ; 004c035d
    PUSH EBX                            ; 004c035f
    PUSH EBP                            ; 004c0360
    CALL core_inv.cpp_CInventory_addItem_FUN_004bf360 ; 004c0361
        ;   XREF to: 004bf360 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_addItem_FUN_004bf360(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    MOV EAX,0x1                         ; 004c0366
    ADD ESP,0xc                         ; 004c036b
    ADD ESP,0x324                       ; 004c036e
    POP EBP                             ; 004c0374
    POP EDI                             ; 004c0375
    POP ESI                             ; 004c0376
    POP EBX                             ; 004c0377
    RET                                 ; 004c0378
    MOV EDX,dword ptr [0x01cc56dc]      ; 004c0379 | g_CMeleeActorType_01cc56a4.name_hash
        ;   Label: LAB_004c0379
    PUSH EDX                            ; 004c037f
    PUSH EAX                            ; 004c0380
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c0381
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004c0386
    TEST EAX,EAX                        ; 004c0389
    JNZ 0x004c0469                      ; 004c038b
        ;   XREF to: 004c0469 (CONDITIONAL_JUMP)  ; LAB_004c0469
    MOV ECX,dword ptr [EBP + 0x8]       ; 004c0391
    XOR ESI,ESI                         ; 004c0394
    TEST ECX,ECX                        ; 004c0396
    JLE 0x004c03dd                      ; 004c0398
        ;   XREF to: 004c03dd (CONDITIONAL_JUMP)  ; LAB_004c03dd
    MOV dword ptr [ESP + 0x314],EBP     ; 004c039a
    MOV EAX,[0x02ddf9a8]                ; 004c03a1 | g_CWeaponActorType_02ddf970.name_hash
        ;   Label: LAB_004c03a1
    PUSH EAX                            ; 004c03a6
    MOV EAX,dword ptr [ESP + 0x318]     ; 004c03a7
    MOV EDX,dword ptr [EAX + 0xc]       ; 004c03ae
    PUSH EDX                            ; 004c03b1
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c03b2
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 004c03b7
    ADD ESP,0x8                         ; 004c03b9
    TEST EAX,EAX                        ; 004c03bc
    JNZ 0x004c04b4                      ; 004c03be
        ;   XREF to: 004c04b4 (CONDITIONAL_JUMP)  ; LAB_004c04b4
    MOV EAX,dword ptr [ESP + 0x314]     ; 004c03c4
        ;   Label: LAB_004c03c4
    INC ESI                             ; 004c03cb
    ADD EAX,0x4                         ; 004c03cc
    MOV EDX,dword ptr [EBP + 0x8]       ; 004c03cf
    MOV dword ptr [ESP + 0x314],EAX     ; 004c03d2
    CMP ESI,EDX                         ; 004c03d9
    JL 0x004c03a1                       ; 004c03db
        ;   XREF to: 004c03a1 (CONDITIONAL_JUMP)  ; LAB_004c03a1
    XOR EBX,EBX                         ; 004c03dd
        ;   Label: LAB_004c03dd
    MOV ESI,dword ptr [EBP + 0x8]       ; 004c03df
    MOV dword ptr [ESP + 0x318],EBX     ; 004c03e2
    TEST ESI,ESI                        ; 004c03e9
    JLE 0x004c043f                      ; 004c03eb
        ;   XREF to: 004c043f (CONDITIONAL_JUMP)  ; LAB_004c043f
    MOV dword ptr [ESP + 0x31c],EBP     ; 004c03ed
    MOV ESI,dword ptr [0x007641f4]      ; 004c03f4 | g_CAmmoActorType_007641bc.name_hash
        ;   Label: LAB_004c03f4
    MOV EAX,dword ptr [ESP + 0x31c]     ; 004c03fa
    PUSH ESI                            ; 004c0401
    MOV EDX,dword ptr [EAX + 0xc]       ; 004c0402
    PUSH EDX                            ; 004c0405
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c0406
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 004c040b
    ADD ESP,0x8                         ; 004c040d
    TEST EAX,EAX                        ; 004c0410
    JNZ 0x004c0564                      ; 004c0412
        ;   XREF to: 004c0564 (CONDITIONAL_JUMP)  ; LAB_004c0564
    MOV ESI,dword ptr [ESP + 0x31c]     ; 004c0418
        ;   Label: LAB_004c0418
    MOV EAX,dword ptr [ESP + 0x318]     ; 004c041f
    MOV EDX,dword ptr [EBP + 0x8]       ; 004c0426
    ADD ESI,0x4                         ; 004c0429
    INC EAX                             ; 004c042c
    MOV dword ptr [ESP + 0x31c],ESI     ; 004c042d
    MOV dword ptr [ESP + 0x318],EAX     ; 004c0434
    CMP EAX,EDX                         ; 004c043b
    JL 0x004c03f4                       ; 004c043d
        ;   XREF to: 004c03f4 (CONDITIONAL_JUMP)  ; LAB_004c03f4
    TEST EBX,EBX                        ; 004c043f
        ;   Label: LAB_004c043f
    JZ 0x004c0283                       ; 004c0441
        ;   XREF to: 004c0283 (CONDITIONAL_JUMP)  ; LAB_004c0283
    PUSH 0x1                            ; 004c0447
    PUSH EDI                            ; 004c0449
    MOV ECX,dword ptr [0x005baf90]      ; 004c044a | g_CDemonMission_PTR_005baf90
    PUSH ECX                            ; 004c0450
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_004d9110 ; 004c0451
        ;   XREF to: 004d9110 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_004d9110(CDemonMission * this_ptr, undefined4 param_2, undefined4 param_3)
    MOV EAX,0x1                         ; 004c0456
    ADD ESP,0xc                         ; 004c045b
    ADD ESP,0x324                       ; 004c045e
    POP EBP                             ; 004c0464
    POP EDI                             ; 004c0465
    POP ESI                             ; 004c0466
    POP EBX                             ; 004c0467
    RET                                 ; 004c0468
    PUSH 0x0                            ; 004c0469
        ;   Label: LAB_004c0469
    MOV EDX,dword ptr [ESP + 0x340]     ; 004c046b
    MOV EAX,dword ptr [EBP + 0x8]       ; 004c0472
    PUSH EDX                            ; 004c0475
    MOV dword ptr [EBP + EAX*0x4 + 0xc],EDX ; 004c0476
    MOV ESI,dword ptr [0x005baf90]      ; 004c047a | g_CDemonMission_PTR_005baf90
    MOV EDI,dword ptr [EBP + 0x8]       ; 004c0480
    PUSH ESI                            ; 004c0483
    INC EDI                             ; 004c0484
    MOV EBX,EDX                         ; 004c0485
    MOV dword ptr [EBP + 0x8],EDI       ; 004c0487
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_004d9110 ; 004c048a
        ;   XREF to: 004d9110 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_004d9110(CDemonMission * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 004c048f
    MOV EAX,EBX                         ; 004c0492
    PUSH EBP                            ; 004c0494
    MOV EBP,EBX                         ; 004c0495
    MOV EAX,dword ptr [EAX + 0x14c]     ; 004c0497
    PUSH EBP                            ; 004c049d
    CALL dword ptr [EAX + 0x64]         ; 004c049e
    MOV EAX,0x1                         ; 004c04a1
    ADD ESP,0x8                         ; 004c04a6
    ADD ESP,0x324                       ; 004c04a9
    POP EBP                             ; 004c04af
    POP EDI                             ; 004c04b0
    POP ESI                             ; 004c04b1
    POP EBX                             ; 004c04b2
    RET                                 ; 004c04b3
    PUSH EAX                            ; 004c04b4
        ;   Label: LAB_004c04b4
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0 ; 004c04b5
        ;   XREF to: 00409fa0 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c04ba
    PUSH EAX                            ; 004c04bd
    PUSH EDI                            ; 004c04be
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0 ; 004c04bf
        ;   XREF to: 00409fa0 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c04c4
    PUSH EAX                            ; 004c04c7
    CALL crt_string.c__strcmp_FUN_005649c0 ; 004c04c8
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004c04cd
    TEST EAX,EAX                        ; 004c04d0
    JNZ 0x004c03c4                      ; 004c04d2
        ;   XREF to: 004c03c4 (CONDITIONAL_JUMP)  ; LAB_004c03c4
    MOV ECX,dword ptr [EBX + 0x564]     ; 004c04d8
    CMP ECX,dword ptr [EDI + 0x564]     ; 004c04de
    JNZ 0x004c03c4                      ; 004c04e4
        ;   XREF to: 004c03c4 (CONDITIONAL_JUMP)  ; LAB_004c03c4
    MOV EAX,dword ptr [EDI + 0x560]     ; 004c04ea
    MOV EDI,dword ptr [0x02dd1008]      ; 004c04f0 | g_CTommyGunActorType_02dd0fd0.name_hash
    MOV ESI,dword ptr [EBX + 0x560]     ; 004c04f6
    PUSH EDI                            ; 004c04fc
    ADD ESI,EAX                         ; 004c04fd
    PUSH EBX                            ; 004c04ff
    MOV dword ptr [EBX + 0x560],ESI     ; 004c0500
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c0506
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004c050b
    TEST EAX,EAX                        ; 004c050e
    JZ 0x004c0528                       ; 004c0510
        ;   XREF to: 004c0528 (CONDITIONAL_JUMP)  ; LAB_004c0528
    CMP dword ptr [EAX + 0x560],0xc8    ; 004c0512
    JLE 0x004c0528                      ; 004c051c
        ;   XREF to: 004c0528 (CONDITIONAL_JUMP)  ; LAB_004c0528
    MOV dword ptr [EAX + 0x560],0xc8    ; 004c051e
    PUSH 0x58710d                       ; 004c0528 | = "Found same weapon, increasing ammoCou..."
        ;   Label: LAB_004c0528
    MOV EAX,[0x005ad350]                ; 004c052d | g_CConsole_PTR_005ad350
    PUSH EAX                            ; 004c0532 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004c0533
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004c0538
    PUSH 0x1                            ; 004c053b
    MOV EDX,dword ptr [ESP + 0x340]     ; 004c053d
    PUSH EDX                            ; 004c0544
    MOV ECX,dword ptr [0x005baf90]      ; 004c0545 | g_CDemonMission_PTR_005baf90
    PUSH ECX                            ; 004c054b
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_004d9110 ; 004c054c
        ;   XREF to: 004d9110 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_004d9110(CDemonMission * this_ptr, undefined4 param_2, undefined4 param_3)
    MOV EAX,0x1                         ; 004c0551
    ADD ESP,0xc                         ; 004c0556
    ADD ESP,0x324                       ; 004c0559
    POP EBP                             ; 004c055f
    POP EDI                             ; 004c0560
    POP ESI                             ; 004c0561
    POP EBX                             ; 004c0562
    RET                                 ; 004c0563
    PUSH EDI                            ; 004c0564
        ;   Label: LAB_004c0564
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0 ; 004c0565
        ;   XREF to: 00409fa0 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c056a
    PUSH EAX                            ; 004c056d
    LEA EAX,[ESI + 0x2cc]               ; 004c056e
    PUSH EAX                            ; 004c0574
    CALL crt_string.c__strcmp_FUN_005649c0 ; 004c0575
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005649c0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004c057a
    TEST EAX,EAX                        ; 004c057d
    JNZ 0x004c0418                      ; 004c057f
        ;   XREF to: 004c0418 (CONDITIONAL_JUMP)  ; LAB_004c0418
    PUSH EDI                            ; 004c0585
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0 ; 004c0586
        ;   XREF to: 00409fa0 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c058b
    PUSH EAX                            ; 004c058e
    CALL core_actor.cpp_createActorByName_FUN_0040d540 ; 004c058f
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040d540(char * class_name)
    ADD ESP,0x4                         ; 004c0594
    PUSH EAX                            ; 004c0597
    MOV ECX,dword ptr [0x005baf90]      ; 004c0598 | g_CDemonMission_PTR_005baf90
    PUSH ECX                            ; 004c059e
    MOV EBX,EAX                         ; 004c059f
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720 ; 004c05a1
        ;   XREF to: 004d9720 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004c05a6
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004c05a9
    PUSH EBX                            ; 004c05af
    CALL dword ptr [EAX]                ; 004c05b0
    MOV EAX,dword ptr [ESI + 0x30c]     ; 004c05b2
    MOV dword ptr [EBX + 0x560],EAX     ; 004c05b8
    MOV EAX,dword ptr [ESI + 0x310]     ; 004c05be
    MOV dword ptr [EBX + 0x564],EAX     ; 004c05c4
    ADD ESP,0x4                         ; 004c05ca
    MOV ESI,dword ptr [EBP + 0x4]       ; 004c05cd
    PUSH ESI                            ; 004c05d0
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004c05d1
    PUSH EBX                            ; 004c05d7
    CALL dword ptr [EAX + 0x80]         ; 004c05d8
    ADD ESP,0x8                         ; 004c05de
    PUSH EBP                            ; 004c05e1
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004c05e2
    PUSH EBX                            ; 004c05e8
    CALL dword ptr [EAX + 0x64]         ; 004c05e9
    ADD ESP,0x8                         ; 004c05ec
    MOV EAX,dword ptr [ESP + 0x31c]     ; 004c05ef
    MOV EDX,dword ptr [EAX + 0xc]       ; 004c05f6
    PUSH EDX                            ; 004c05f9
    CALL core_actor.cpp_destroyActor_FUN_00409cd0 ; 004c05fa
        ;   XREF to: 00409cd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_destroyActor_FUN_00409cd0(CDemonActor * actor)
    ADD ESP,0x4                         ; 004c05ff
    MOV EAX,dword ptr [ESP + 0x31c]     ; 004c0602
    PUSH EDI                            ; 004c0609
    MOV dword ptr [EAX + 0xc],EBX       ; 004c060a
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0 ; 004c060d
        ;   XREF to: 00409fa0 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c0612
    PUSH EAX                            ; 004c0615
    PUSH 0x587136                       ; 004c0616 | = "Converting existing ammo for %s to we..."
    MOV ECX,dword ptr [0x005ad350]      ; 004c061b | g_CConsole_PTR_005ad350
    PUSH ECX                            ; 004c0621 | g_CConsole_0077ad0c
    MOV EBX,0x1                         ; 004c0622
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004c0627
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004c062c
    JMP 0x004c0418                      ; 004c062f
        ;   XREF to: 004c0418 (UNCONDITIONAL_JUMP)  ; LAB_004c0418

