; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_inv_cpp_FUN_004dadb0(CDemonActor *param_1,CDemonActor *param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
;
; XREF[9]:
;   core_ammobox.cpp_CAmmoBox_addToInventory_FUN_0040e670 at 0040e696
;   core_game.cpp_FUN_004b8e10 at 004b8ee1
;   core_game.cpp_FUN_004b90d0 at 004b9af6
;   core_game.cpp_giveHeroWeaponAmmo_FUN_004b8fce at 004b9053
;   core_hero.cpp_FUN_004cff90 at 004d0011
;   core_hostage.cpp_CHostage_process_FUN_004d1660 at 004d19c3
;   core_inv.cpp_FUN_004db760 at 004db81a
;   core_scat.cpp_CScat_createDefaultWeapon_FUN_0051ec20 at 0051ec6c
;   core_script.cpp_FUN_00522350 at 00523e4f
;
; Referenced Globals:
;   TerminatedCString s_You_ve_found_005db527
;   undefined4 DAT_005db537
;   TerminatedCString s_CHealthItem_005db53b
;   TerminatedCString s_CGasMask_005db547
;   TerminatedCString s_Press_005db550
;   TerminatedCString s_and_005db557
;   TerminatedCString s_to_cycle_through_your_in_005db55d
;   TerminatedCString s_to_put_on_and_off_the_ma_005db587
;   TerminatedCString s_CKeyActor_005db5a4
;   TerminatedCString s_With_your_guns_put_away_005db5ae
;   TerminatedCString s_to_open_a_previously_loc_005db5ce
;   TerminatedCString s_CBoxActor_005db5f1
;   TerminatedCString s_CAmmo_005db5fb
;   TerminatedCString s_CWeapon_005db601
;   TerminatedCString s_Found_existing_ammo_addi_005db609
;   ... and 21 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_createActorByName_FUN_0040c5a0
;   core_actor.cpp_FUN_00408730
;   core_actor.cpp_FUN_00408a50
;   core_actor.cpp_isOfClass_FUN_0040c840
;   core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040e240
;   core_game.cpp_CGame_displayMessage_FUN_004b31a0
;   core_inv.cpp_FUN_004db9d0
;   core_inv.cpp_getItemDescription_FUN_004d9f80
;   core_inv.cpp_getItemDisplayName_FUN_004d9f10
;   core_menu.cpp_getKeyDisplayName_FUN_004ee960
;   core_mission.cpp_CDemonMission_generateActorName_FUN_004fcda0
;   core_mission.cpp_CDemonMission_removeActorFromList_FUN_004fc270
;   core_mission.cpp_FUN_004fc7b0
;   crt_string.c__strcmp_FUN_005b8c30
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dadb0
        ;   Label: core_inv.cpp_FUN_004dadb0
    PUSH ESI                            ; 004dadb1
    PUSH EDI                            ; 004dadb2
    PUSH EBP                            ; 004dadb3
    SUB ESP,0x31c                       ; 004dadb4
    MOV EBX,dword ptr [ESP + 0x330]     ; 004dadba
    MOV EAX,dword ptr [EBX + 0x468]     ; 004dadc1
    MOV EDX,dword ptr [EBX + 0x10]      ; 004dadc7
    MOV dword ptr [ESP + 0x308],EAX     ; 004dadca
    CMP EDX,0x64                        ; 004dadd1
    JL 0x004dade3                       ; 004dadd4
        ;   XREF to: 004dade3 (CONDITIONAL_JUMP)  ; LAB_004dade3
    XOR EAX,EAX                         ; 004dadd6
    ADD ESP,0x31c                       ; 004dadd8
    POP EBP                             ; 004dadde
    POP EDI                             ; 004daddf
    POP ESI                             ; 004dade0
    POP EBX                             ; 004dade1
    RET                                 ; 004dade2
    MOV ECX,dword ptr [ESP + 0x334]     ; 004dade3
        ;   Label: LAB_004dade3
    MOV EAX,dword ptr [ESP + 0x334]     ; 004dadea
    PUSH ECX                            ; 004dadf1
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004dadf2
    CALL dword ptr [EAX + 0x9c]         ; 004dadf8
    MOV ESI,dword ptr [EBX + 0x4]       ; 004dadfe
    ADD ESP,0x4                         ; 004dae01
    CMP EAX,ESI                         ; 004dae04
    JZ 0x004dae40                       ; 004dae06
        ;   XREF to: 004dae40 (CONDITIONAL_JUMP)  ; LAB_004dae40
    PUSH 0x0                            ; 004dae08
    MOV EDI,dword ptr [ESP + 0x338]     ; 004dae0a
    MOV EAX,dword ptr [ESP + 0x338]     ; 004dae11
    PUSH EDI                            ; 004dae18
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004dae19
    CALL dword ptr [EAX + 0x94]         ; 004dae1f
    MOV EBP,dword ptr [EBX + 0x4]       ; 004dae25
    ADD ESP,0x8                         ; 004dae28
    TEST EBP,EBP                        ; 004dae2b
    JZ 0x004dae40                       ; 004dae2d
        ;   XREF to: 004dae40 (CONDITIONAL_JUMP)  ; LAB_004dae40
    PUSH EBP                            ; 004dae2f
    MOV EAX,dword ptr [EDI + 0x2b0]     ; 004dae30
    PUSH EDI                            ; 004dae36
    CALL dword ptr [EAX + 0x90]         ; 004dae37
    ADD ESP,0x8                         ; 004dae3d
    MOV EAX,[0x01cedef4]                ; 004dae40 | DAT_01cedef4
        ;   Label: LAB_004dae40
    MOV ESI,dword ptr [EBX + 0x4]       ; 004dae45
    CMP ESI,dword ptr [EAX*0x4 + 0x1cedee4] ; 004dae48
    JNZ 0x004db258                      ; 004dae4f
        ;   XREF to: 004db258 (CONDITIONAL_JUMP)  ; LAB_004db258
    CMP dword ptr [ESP + 0x338],0x0     ; 004dae55
    JZ 0x004db258                       ; 004dae5d
        ;   XREF to: 004db258 (CONDITIONAL_JUMP)  ; LAB_004db258
    MOV EAX,[0x00616494]                ; 004dae63 | g_CGamePtr
    CMP dword ptr [EAX + 0x244],0x0     ; 004dae68 | g_CGameInstance.letterbox_mode
    JNZ 0x004db258                      ; 004dae6f
        ;   XREF to: 004db258 (CONDITIONAL_JUMP)  ; LAB_004db258
    MOV ECX,dword ptr [ESP + 0x334]     ; 004dae75
    PUSH ECX                            ; 004dae7c
    CALL core_inv.cpp_getItemDisplayName_FUN_004d9f10 ; 004dae7d
        ;   XREF to: 004d9f10 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDisplayName_FUN_004d9f10(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004dae82
    MOV ESI,dword ptr [ESP + 0x334]     ; 004dae85
    PUSH ESI                            ; 004dae8c
    MOV dword ptr [ESP + 0x308],EAX     ; 004dae8d
    CALL core_inv.cpp_getItemDescription_FUN_004d9f80 ; 004dae94
        ;   XREF to: 004d9f80 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDescription_FUN_004d9f80(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004dae99
    MOV EDI,dword ptr [0x007bc3a4]      ; 004dae9c | g_CAmmoClassInfo.name_hash
    PUSH EDI                            ; 004daea2
    PUSH ESI                            ; 004daea3
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004daea4
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004daea9
    PUSH 0x5db527                       ; 004daeac | = "You've found : "
    MOV EBP,EAX                         ; 004daeb1
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004daeb3
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004daeb8
    LEA EDI,[ESP + 0x200]               ; 004daebb
    MOV ESI,EAX                         ; 004daec2
    PUSH EDI                            ; 004daec4
    MOV AL,byte ptr [ESI]               ; 004daec5
        ;   Label: LAB_004daec5
    MOV byte ptr [EDI],AL               ; 004daec7
    CMP AL,0x0                          ; 004daec9
    JZ 0x004daedd                       ; 004daecb
        ;   XREF to: 004daedd (CONDITIONAL_JUMP)  ; LAB_004daedd
    MOV AL,byte ptr [ESI + 0x1]         ; 004daecd
    ADD ESI,0x2                         ; 004daed0
    MOV byte ptr [EDI + 0x1],AL         ; 004daed3
    ADD EDI,0x2                         ; 004daed6
    CMP AL,0x0                          ; 004daed9
    JNZ 0x004daec5                      ; 004daedb
        ;   XREF to: 004daec5 (CONDITIONAL_JUMP)  ; LAB_004daec5
    POP EDI                             ; 004daedd
        ;   Label: LAB_004daedd
    TEST EBP,EBP                        ; 004daede
    JZ 0x004daf2e                       ; 004daee0
        ;   XREF to: 004daf2e (CONDITIONAL_JUMP)  ; LAB_004daf2e
    MOV EAX,dword ptr [EBP + 0x470]     ; 004daee2
    PUSH EAX                            ; 004daee8
    PUSH 0x5db537                       ; 004daee9 | DAT_005db537
    LEA EAX,[ESP + 0x108]               ; 004daeee
    PUSH EAX                            ; 004daef5
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004daef6
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 004daefb
    LEA ESI,[ESP + 0x100]               ; 004daefe
    LEA EDI,[ESP + 0x200]               ; 004daf05
    PUSH EDI                            ; 004daf0c
    SUB ECX,ECX                         ; 004daf0d
    DEC ECX                             ; 004daf0f
    MOV AL,0x0                          ; 004daf10
    SCASB.REPNE ES:EDI                  ; 004daf12
    DEC EDI                             ; 004daf14
    MOV AL,byte ptr [ESI]               ; 004daf15
        ;   Label: LAB_004daf15
    MOV byte ptr [EDI],AL               ; 004daf17
    CMP AL,0x0                          ; 004daf19
    JZ 0x004daf2d                       ; 004daf1b
        ;   XREF to: 004daf2d (CONDITIONAL_JUMP)  ; LAB_004daf2d
    MOV AL,byte ptr [ESI + 0x1]         ; 004daf1d
    ADD ESI,0x2                         ; 004daf20
    MOV byte ptr [EDI + 0x1],AL         ; 004daf23
    ADD EDI,0x2                         ; 004daf26
    CMP AL,0x0                          ; 004daf29
    JNZ 0x004daf15                      ; 004daf2b
        ;   XREF to: 004daf15 (CONDITIONAL_JUMP)  ; LAB_004daf15
    POP EDI                             ; 004daf2d
        ;   Label: LAB_004daf2d
    MOV ESI,dword ptr [ESP + 0x304]     ; 004daf2e
        ;   Label: LAB_004daf2e
    LEA EDI,[ESP + 0x200]               ; 004daf35
    PUSH EDI                            ; 004daf3c
    SUB ECX,ECX                         ; 004daf3d
    DEC ECX                             ; 004daf3f
    MOV AL,0x0                          ; 004daf40
    SCASB.REPNE ES:EDI                  ; 004daf42
    DEC EDI                             ; 004daf44
    MOV AL,byte ptr [ESI]               ; 004daf45
        ;   Label: LAB_004daf45
    MOV byte ptr [EDI],AL               ; 004daf47
    CMP AL,0x0                          ; 004daf49
    JZ 0x004daf5d                       ; 004daf4b
        ;   XREF to: 004daf5d (CONDITIONAL_JUMP)  ; LAB_004daf5d
    MOV AL,byte ptr [ESI + 0x1]         ; 004daf4d
    ADD ESI,0x2                         ; 004daf50
    MOV byte ptr [EDI + 0x1],AL         ; 004daf53
    ADD EDI,0x2                         ; 004daf56
    CMP AL,0x0                          ; 004daf59
    JNZ 0x004daf45                      ; 004daf5b
        ;   XREF to: 004daf45 (CONDITIONAL_JUMP)  ; LAB_004daf45
    POP EDI                             ; 004daf5d
        ;   Label: LAB_004daf5d
    PUSH 0x5db53b                       ; 004daf5e | = "CHealthItem"
    MOV EDX,dword ptr [ESP + 0x338]     ; 004daf63
    XOR AH,AH                           ; 004daf6a
    PUSH EDX                            ; 004daf6c
    MOV byte ptr [ESP + 0x8],AH         ; 004daf6d
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004daf71
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004daf76
    PUSH 0x5db547                       ; 004daf79 | = "CGasMask"
    MOV ECX,dword ptr [ESP + 0x338]     ; 004daf7e
    PUSH ECX                            ; 004daf85
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004daf86
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004daf8b
    TEST EAX,EAX                        ; 004daf8e
    JZ 0x004db105                       ; 004daf90
        ;   XREF to: 004db105 (CONDITIONAL_JUMP)  ; LAB_004db105
    PUSH 0x5db550                       ; 004daf96 | = "Press "
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004daf9b
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004dafa0
    MOV EDI,ESP                         ; 004dafa3
    MOV ESI,EAX                         ; 004dafa5
    PUSH EDI                            ; 004dafa7
    MOV AL,byte ptr [ESI]               ; 004dafa8
        ;   Label: LAB_004dafa8
    MOV byte ptr [EDI],AL               ; 004dafaa
    CMP AL,0x0                          ; 004dafac
    JZ 0x004dafc0                       ; 004dafae
        ;   XREF to: 004dafc0 (CONDITIONAL_JUMP)  ; LAB_004dafc0
    MOV AL,byte ptr [ESI + 0x1]         ; 004dafb0
    ADD ESI,0x2                         ; 004dafb3
    MOV byte ptr [EDI + 0x1],AL         ; 004dafb6
    ADD EDI,0x2                         ; 004dafb9
    CMP AL,0x0                          ; 004dafbc
    JNZ 0x004dafa8                      ; 004dafbe
        ;   XREF to: 004dafa8 (CONDITIONAL_JUMP)  ; LAB_004dafa8
    POP EDI                             ; 004dafc0
        ;   Label: LAB_004dafc0
    MOV EAX,[0x00616494]                ; 004dafc1 | g_CGamePtr
    MOV ESI,dword ptr [EAX + 0x98]      ; 004dafc6 | g_CGameInstance.key_next_item
    PUSH ESI                            ; 004dafcc
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004dafcd
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004ee960(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004dafd2
    MOV EDI,ESP                         ; 004dafd5
    MOV ESI,EAX                         ; 004dafd7
    PUSH EDI                            ; 004dafd9
    SUB ECX,ECX                         ; 004dafda
    DEC ECX                             ; 004dafdc
    MOV AL,0x0                          ; 004dafdd
    SCASB.REPNE ES:EDI                  ; 004dafdf
    DEC EDI                             ; 004dafe1
    MOV AL,byte ptr [ESI]               ; 004dafe2
        ;   Label: LAB_004dafe2
    MOV byte ptr [EDI],AL               ; 004dafe4
    CMP AL,0x0                          ; 004dafe6
    JZ 0x004daffa                       ; 004dafe8
        ;   XREF to: 004daffa (CONDITIONAL_JUMP)  ; LAB_004daffa
    MOV AL,byte ptr [ESI + 0x1]         ; 004dafea
    ADD ESI,0x2                         ; 004dafed
    MOV byte ptr [EDI + 0x1],AL         ; 004daff0
    ADD EDI,0x2                         ; 004daff3
    CMP AL,0x0                          ; 004daff6
    JNZ 0x004dafe2                      ; 004daff8
        ;   XREF to: 004dafe2 (CONDITIONAL_JUMP)  ; LAB_004dafe2
    POP EDI                             ; 004daffa
        ;   Label: LAB_004daffa
    PUSH 0x5db557                       ; 004daffb | = " and "
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004db000
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004db005
    MOV EDI,ESP                         ; 004db008
    MOV ESI,EAX                         ; 004db00a
    PUSH EDI                            ; 004db00c
    SUB ECX,ECX                         ; 004db00d
    DEC ECX                             ; 004db00f
    MOV AL,0x0                          ; 004db010
    SCASB.REPNE ES:EDI                  ; 004db012
    DEC EDI                             ; 004db014
    MOV AL,byte ptr [ESI]               ; 004db015
        ;   Label: LAB_004db015
    MOV byte ptr [EDI],AL               ; 004db017
    CMP AL,0x0                          ; 004db019
    JZ 0x004db02d                       ; 004db01b
        ;   XREF to: 004db02d (CONDITIONAL_JUMP)  ; LAB_004db02d
    MOV AL,byte ptr [ESI + 0x1]         ; 004db01d
    ADD ESI,0x2                         ; 004db020
    MOV byte ptr [EDI + 0x1],AL         ; 004db023
    ADD EDI,0x2                         ; 004db026
    CMP AL,0x0                          ; 004db029
    JNZ 0x004db015                      ; 004db02b
        ;   XREF to: 004db015 (CONDITIONAL_JUMP)  ; LAB_004db015
    POP EDI                             ; 004db02d
        ;   Label: LAB_004db02d
    MOV EAX,[0x00616494]                ; 004db02e | g_CGamePtr
    MOV EDI,dword ptr [EAX + 0x9c]      ; 004db033 | g_CGameInstance.key_prev_item
    PUSH EDI                            ; 004db039
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004db03a
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004ee960(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004db03f
    MOV EDI,ESP                         ; 004db042
    MOV ESI,EAX                         ; 004db044
    PUSH EDI                            ; 004db046
    SUB ECX,ECX                         ; 004db047
    DEC ECX                             ; 004db049
    MOV AL,0x0                          ; 004db04a
    SCASB.REPNE ES:EDI                  ; 004db04c
    DEC EDI                             ; 004db04e
    MOV AL,byte ptr [ESI]               ; 004db04f
        ;   Label: LAB_004db04f
    MOV byte ptr [EDI],AL               ; 004db051
    CMP AL,0x0                          ; 004db053
    JZ 0x004db067                       ; 004db055
        ;   XREF to: 004db067 (CONDITIONAL_JUMP)  ; LAB_004db067
    MOV AL,byte ptr [ESI + 0x1]         ; 004db057
    ADD ESI,0x2                         ; 004db05a
    MOV byte ptr [EDI + 0x1],AL         ; 004db05d
    ADD EDI,0x2                         ; 004db060
    CMP AL,0x0                          ; 004db063
    JNZ 0x004db04f                      ; 004db065
        ;   XREF to: 004db04f (CONDITIONAL_JUMP)  ; LAB_004db04f
    POP EDI                             ; 004db067
        ;   Label: LAB_004db067
    PUSH 0x5db55d                       ; 004db068 | = " to cycle through your inventory.  Pr..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004db06d
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004db072
    MOV EDI,ESP                         ; 004db075
    MOV ESI,EAX                         ; 004db077
    PUSH EDI                            ; 004db079
    SUB ECX,ECX                         ; 004db07a
    DEC ECX                             ; 004db07c
    MOV AL,0x0                          ; 004db07d
    SCASB.REPNE ES:EDI                  ; 004db07f
    DEC EDI                             ; 004db081
    MOV AL,byte ptr [ESI]               ; 004db082
        ;   Label: LAB_004db082
    MOV byte ptr [EDI],AL               ; 004db084
    CMP AL,0x0                          ; 004db086
    JZ 0x004db09a                       ; 004db088
        ;   XREF to: 004db09a (CONDITIONAL_JUMP)  ; LAB_004db09a
    MOV AL,byte ptr [ESI + 0x1]         ; 004db08a
    ADD ESI,0x2                         ; 004db08d
    MOV byte ptr [EDI + 0x1],AL         ; 004db090
    ADD EDI,0x2                         ; 004db093
    CMP AL,0x0                          ; 004db096
    JNZ 0x004db082                      ; 004db098
        ;   XREF to: 004db082 (CONDITIONAL_JUMP)  ; LAB_004db082
    POP EDI                             ; 004db09a
        ;   Label: LAB_004db09a
    MOV EAX,[0x00616494]                ; 004db09b | g_CGamePtr
    MOV EBP,dword ptr [EAX + 0x4c]      ; 004db0a0 | g_CGameInstance.key_use_item
    PUSH EBP                            ; 004db0a3
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004db0a4
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004ee960(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004db0a9
    MOV EDI,ESP                         ; 004db0ac
    MOV ESI,EAX                         ; 004db0ae
    PUSH EDI                            ; 004db0b0
    SUB ECX,ECX                         ; 004db0b1
    DEC ECX                             ; 004db0b3
    MOV AL,0x0                          ; 004db0b4
    SCASB.REPNE ES:EDI                  ; 004db0b6
    DEC EDI                             ; 004db0b8
    MOV AL,byte ptr [ESI]               ; 004db0b9
        ;   Label: LAB_004db0b9
    MOV byte ptr [EDI],AL               ; 004db0bb
    CMP AL,0x0                          ; 004db0bd
    JZ 0x004db0d1                       ; 004db0bf
        ;   XREF to: 004db0d1 (CONDITIONAL_JUMP)  ; LAB_004db0d1
    MOV AL,byte ptr [ESI + 0x1]         ; 004db0c1
    ADD ESI,0x2                         ; 004db0c4
    MOV byte ptr [EDI + 0x1],AL         ; 004db0c7
    ADD EDI,0x2                         ; 004db0ca
    CMP AL,0x0                          ; 004db0cd
    JNZ 0x004db0b9                      ; 004db0cf
        ;   XREF to: 004db0b9 (CONDITIONAL_JUMP)  ; LAB_004db0b9
    POP EDI                             ; 004db0d1
        ;   Label: LAB_004db0d1
    PUSH 0x5db587                       ; 004db0d2 | = " to put on and off the mask."
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004db0d7
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004db0dc
    MOV EDI,ESP                         ; 004db0df
    MOV ESI,EAX                         ; 004db0e1
    PUSH EDI                            ; 004db0e3
    SUB ECX,ECX                         ; 004db0e4
    DEC ECX                             ; 004db0e6
    MOV AL,0x0                          ; 004db0e7
    SCASB.REPNE ES:EDI                  ; 004db0e9
    DEC EDI                             ; 004db0eb
    MOV AL,byte ptr [ESI]               ; 004db0ec
        ;   Label: LAB_004db0ec
    MOV byte ptr [EDI],AL               ; 004db0ee
    CMP AL,0x0                          ; 004db0f0
    JZ 0x004db104                       ; 004db0f2
        ;   XREF to: 004db104 (CONDITIONAL_JUMP)  ; LAB_004db104
    MOV AL,byte ptr [ESI + 0x1]         ; 004db0f4
    ADD ESI,0x2                         ; 004db0f7
    MOV byte ptr [EDI + 0x1],AL         ; 004db0fa
    ADD EDI,0x2                         ; 004db0fd
    CMP AL,0x0                          ; 004db100
    JNZ 0x004db0ec                      ; 004db102
        ;   XREF to: 004db0ec (CONDITIONAL_JUMP)  ; LAB_004db0ec
    POP EDI                             ; 004db104
        ;   Label: LAB_004db104
    PUSH 0x5db5a4                       ; 004db105 | = "CKeyActor"
        ;   Label: LAB_004db105
    MOV EAX,dword ptr [ESP + 0x338]     ; 004db10a
    PUSH EAX                            ; 004db111
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004db112
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004db117
    TEST EAX,EAX                        ; 004db11a
    JZ 0x004db1b7                       ; 004db11c
        ;   XREF to: 004db1b7 (CONDITIONAL_JUMP)  ; LAB_004db1b7
    PUSH 0x5db5ae                       ; 004db122 | = "With your guns put away, press "
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004db127
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004db12c
    MOV EDI,ESP                         ; 004db12f
    MOV ESI,EAX                         ; 004db131
    PUSH EDI                            ; 004db133
    MOV AL,byte ptr [ESI]               ; 004db134
        ;   Label: LAB_004db134
    MOV byte ptr [EDI],AL               ; 004db136
    CMP AL,0x0                          ; 004db138
    JZ 0x004db14c                       ; 004db13a
        ;   XREF to: 004db14c (CONDITIONAL_JUMP)  ; LAB_004db14c
    MOV AL,byte ptr [ESI + 0x1]         ; 004db13c
    ADD ESI,0x2                         ; 004db13f
    MOV byte ptr [EDI + 0x1],AL         ; 004db142
    ADD EDI,0x2                         ; 004db145
    CMP AL,0x0                          ; 004db148
    JNZ 0x004db134                      ; 004db14a
        ;   XREF to: 004db134 (CONDITIONAL_JUMP)  ; LAB_004db134
    POP EDI                             ; 004db14c
        ;   Label: LAB_004db14c
    MOV EAX,[0x00616494]                ; 004db14d | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x48]      ; 004db152 | g_CGameInstance.key_fire
    PUSH EDX                            ; 004db155
    CALL core_menu.cpp_getKeyDisplayName_FUN_004ee960 ; 004db156
        ;   XREF to: 004ee960 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004ee960(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004db15b
    MOV EDI,ESP                         ; 004db15e
    MOV ESI,EAX                         ; 004db160
    PUSH EDI                            ; 004db162
    SUB ECX,ECX                         ; 004db163
    DEC ECX                             ; 004db165
    MOV AL,0x0                          ; 004db166
    SCASB.REPNE ES:EDI                  ; 004db168
    DEC EDI                             ; 004db16a
    MOV AL,byte ptr [ESI]               ; 004db16b
        ;   Label: LAB_004db16b
    MOV byte ptr [EDI],AL               ; 004db16d
    CMP AL,0x0                          ; 004db16f
    JZ 0x004db183                       ; 004db171
        ;   XREF to: 004db183 (CONDITIONAL_JUMP)  ; LAB_004db183
    MOV AL,byte ptr [ESI + 0x1]         ; 004db173
    ADD ESI,0x2                         ; 004db176
    MOV byte ptr [EDI + 0x1],AL         ; 004db179
    ADD EDI,0x2                         ; 004db17c
    CMP AL,0x0                          ; 004db17f
    JNZ 0x004db16b                      ; 004db181
        ;   XREF to: 004db16b (CONDITIONAL_JUMP)  ; LAB_004db16b
    POP EDI                             ; 004db183
        ;   Label: LAB_004db183
    PUSH 0x5db5ce                       ; 004db184 | = " to open a previously locked door."
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004db189
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004db18e
    MOV EDI,ESP                         ; 004db191
    MOV ESI,EAX                         ; 004db193
    PUSH EDI                            ; 004db195
    SUB ECX,ECX                         ; 004db196
    DEC ECX                             ; 004db198
    MOV AL,0x0                          ; 004db199
    SCASB.REPNE ES:EDI                  ; 004db19b
    DEC EDI                             ; 004db19d
    MOV AL,byte ptr [ESI]               ; 004db19e
        ;   Label: LAB_004db19e
    MOV byte ptr [EDI],AL               ; 004db1a0
    CMP AL,0x0                          ; 004db1a2
    JZ 0x004db1b6                       ; 004db1a4
        ;   XREF to: 004db1b6 (CONDITIONAL_JUMP)  ; LAB_004db1b6
    MOV AL,byte ptr [ESI + 0x1]         ; 004db1a6
    ADD ESI,0x2                         ; 004db1a9
    MOV byte ptr [EDI + 0x1],AL         ; 004db1ac
    ADD EDI,0x2                         ; 004db1af
    CMP AL,0x0                          ; 004db1b2
    JNZ 0x004db19e                      ; 004db1b4
        ;   XREF to: 004db19e (CONDITIONAL_JUMP)  ; LAB_004db19e
    POP EDI                             ; 004db1b6
        ;   Label: LAB_004db1b6
    PUSH 0x5db5f1                       ; 004db1b7 | = "CBoxActor"
        ;   Label: LAB_004db1b7
    MOV ECX,dword ptr [ESP + 0x338]     ; 004db1bc
    PUSH ECX                            ; 004db1c3
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004db1c4
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004db1c9
    PUSH 0x5db5fb                       ; 004db1cc | = "CAmmo"
    MOV ESI,dword ptr [ESP + 0x338]     ; 004db1d1
    PUSH ESI                            ; 004db1d8
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004db1d9
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004db1de
    PUSH 0x5db601                       ; 004db1e1 | = "CWeapon"
    PUSH ESI                            ; 004db1e6
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004db1e7
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004db1ec
    LEA EAX,[ESP + 0x200]               ; 004db1ef
    PUSH 0x41200000                     ; 004db1f6
    PUSH EAX                            ; 004db1fb
    MOV EBP,dword ptr [0x00616494]      ; 004db1fc | g_CGamePtr
    PUSH EBP                            ; 004db202
    CALL core_game.cpp_CGame_displayMessage_FUN_004b31a0 ; 004db203
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b31a0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004db208
    LEA EBP,[EBX + 0x354]               ; 004db20b
    MOV ESI,ESP                         ; 004db211
    MOV EDI,EBP                         ; 004db213
    PUSH EDI                            ; 004db215
    MOV AL,byte ptr [ESI]               ; 004db216
        ;   Label: LAB_004db216
    MOV byte ptr [EDI],AL               ; 004db218
    CMP AL,0x0                          ; 004db21a
    JZ 0x004db22e                       ; 004db21c
        ;   XREF to: 004db22e (CONDITIONAL_JUMP)  ; LAB_004db22e
    MOV AL,byte ptr [ESI + 0x1]         ; 004db21e
    ADD ESI,0x2                         ; 004db221
    MOV byte ptr [EDI + 0x1],AL         ; 004db224
    ADD EDI,0x2                         ; 004db227
    CMP AL,0x0                          ; 004db22a
    JNZ 0x004db216                      ; 004db22c
        ;   XREF to: 004db216 (CONDITIONAL_JUMP)  ; LAB_004db216
    POP EDI                             ; 004db22e
        ;   Label: LAB_004db22e
    PUSH EBP                            ; 004db22f
    MOV EAX,[0x01511cc4]                ; 004db230 | DAT_01511cc4
    PUSH EAX                            ; 004db235
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00 ; 004db236
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004aaf00(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004db23b
    MOV dword ptr [ESP + 0x318],EAX     ; 004db23e
    FILD dword ptr [ESP + 0x318]        ; 004db245
    FMUL double ptr [0x005db702]        ; 004db24c | DAT_005db702
    FSTP float ptr [EBX + 0x34c]        ; 004db252
    MOV EDX,dword ptr [0x007bc3a4]      ; 004db258 | g_CAmmoClassInfo.name_hash
        ;   Label: LAB_004db258
    PUSH EDX                            ; 004db25e
    MOV ECX,dword ptr [ESP + 0x338]     ; 004db25f
    PUSH ECX                            ; 004db266
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004db267
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004db26c
    MOV dword ptr [ESP + 0x310],EAX     ; 004db26f
    TEST EAX,EAX                        ; 004db276
    JZ 0x004db334                       ; 004db278
        ;   XREF to: 004db334 (CONDITIONAL_JUMP)  ; LAB_004db334
    LEA ESI,[EAX + 0x430]               ; 004db27e
    PUSH ESI                            ; 004db284
    PUSH EAX                            ; 004db285
    XOR EBP,EBP                         ; 004db286
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040e240 ; 004db288
        ;   XREF to: 0040e240 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040e240(CAmmo * this_ptr, char * weapon_class_name)
    MOV EDI,dword ptr [EBX + 0x10]      ; 004db28d
    ADD ESP,0x8                         ; 004db290
    TEST EDI,EDI                        ; 004db293
    JLE 0x004db2d4                      ; 004db295
        ;   XREF to: 004db2d4 (CONDITIONAL_JUMP)  ; LAB_004db2d4
    MOV EDI,EBX                         ; 004db297
    MOV dword ptr [ESP + 0x30c],ESI     ; 004db299
    MOV ECX,dword ptr [0x007bc3a4]      ; 004db2a0 | g_CAmmoClassInfo.name_hash
        ;   Label: LAB_004db2a0
    PUSH ECX                            ; 004db2a6
    MOV ESI,dword ptr [EDI + 0x14]      ; 004db2a7
    PUSH ESI                            ; 004db2aa
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004db2ab
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 004db2b0
    MOV EDX,dword ptr [EBX + 0x468]     ; 004db2b2
    MOV EAX,dword ptr [EDI + 0x46c]     ; 004db2b8
    ADD ESP,0x8                         ; 004db2be
    CMP EAX,EDX                         ; 004db2c1
    JZ 0x004db44b                       ; 004db2c3
        ;   XREF to: 004db44b (CONDITIONAL_JUMP)  ; LAB_004db44b
    INC EBP                             ; 004db2c9
        ;   Label: LAB_004db2c9
    MOV EAX,dword ptr [EBX + 0x10]      ; 004db2ca
    ADD EDI,0x4                         ; 004db2cd
    CMP EBP,EAX                         ; 004db2d0
    JL 0x004db2a0                       ; 004db2d2
        ;   XREF to: 004db2a0 (CONDITIONAL_JUMP)  ; LAB_004db2a0
    MOV EDX,dword ptr [EBX + 0x10]      ; 004db2d4
        ;   Label: LAB_004db2d4
    XOR ESI,ESI                         ; 004db2d7
    TEST EDX,EDX                        ; 004db2d9
    JLE 0x004db312                      ; 004db2db
        ;   XREF to: 004db312 (CONDITIONAL_JUMP)  ; LAB_004db312
    MOV EBP,dword ptr [ESP + 0x310]     ; 004db2dd
    MOV EDI,EBX                         ; 004db2e4
    ADD EBP,0x430                       ; 004db2e6
    MOV EDX,dword ptr [0x02661f38]      ; 004db2ec | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004db2ec
    PUSH EDX                            ; 004db2f2
    MOV ECX,dword ptr [EDI + 0x14]      ; 004db2f3
    PUSH ECX                            ; 004db2f6
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004db2f7
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004db2fc
    TEST EAX,EAX                        ; 004db2ff
    JNZ 0x004db4e3                      ; 004db301
        ;   XREF to: 004db4e3 (CONDITIONAL_JUMP)  ; LAB_004db4e3
    INC ESI                             ; 004db307
        ;   Label: LAB_004db307
    MOV EAX,dword ptr [EBX + 0x10]      ; 004db308
    ADD EDI,0x4                         ; 004db30b
    CMP ESI,EAX                         ; 004db30e
    JL 0x004db2ec                       ; 004db310
        ;   XREF to: 004db2ec (CONDITIONAL_JUMP)  ; LAB_004db2ec
    MOV EAX,dword ptr [ESP + 0x310]     ; 004db312
        ;   Label: LAB_004db312
    PUSH 0x5db698                       ; 004db319 | = "CDynamite"
    ADD EAX,0x430                       ; 004db31e
    PUSH EAX                            ; 004db323
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 004db324
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 004db329
    TEST EAX,EAX                        ; 004db32c
    JZ 0x004db503                       ; 004db32e
        ;   XREF to: 004db503 (CONDITIONAL_JUMP)  ; LAB_004db503
    MOV ECX,dword ptr [0x01ceded8]      ; 004db334 | g_CHealthItemClassInfo.name_hash
        ;   Label: LAB_004db334
    PUSH ECX                            ; 004db33a
    MOV ESI,dword ptr [ESP + 0x338]     ; 004db33b
    PUSH ESI                            ; 004db342
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004db343
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004db348
    MOV dword ptr [ESP + 0x300],EAX     ; 004db34b
    TEST EAX,EAX                        ; 004db352
    JZ 0x004db393                       ; 004db354
        ;   XREF to: 004db393 (CONDITIONAL_JUMP)  ; LAB_004db393
    MOV EBP,dword ptr [EBX + 0x10]      ; 004db356
    XOR EDI,EDI                         ; 004db359
    TEST EBP,EBP                        ; 004db35b
    JLE 0x004db393                      ; 004db35d
        ;   XREF to: 004db393 (CONDITIONAL_JUMP)  ; LAB_004db393
    MOV ESI,EBX                         ; 004db35f
    MOV EDX,dword ptr [0x01ceded8]      ; 004db361 | g_CHealthItemClassInfo.name_hash
        ;   Label: LAB_004db361
    PUSH EDX                            ; 004db367
    MOV ECX,dword ptr [ESI + 0x14]      ; 004db368
    PUSH ECX                            ; 004db36b
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004db36c
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBP,dword ptr [ESI + 0x46c]     ; 004db371
    MOV EDX,dword ptr [EBX + 0x468]     ; 004db377
    ADD ESP,0x8                         ; 004db37d
    CMP EBP,EDX                         ; 004db380
    JZ 0x004db598                       ; 004db382
        ;   XREF to: 004db598 (CONDITIONAL_JUMP)  ; LAB_004db598
    INC EDI                             ; 004db388
        ;   Label: LAB_004db388
    MOV EAX,dword ptr [EBX + 0x10]      ; 004db389
    ADD ESI,0x4                         ; 004db38c
    CMP EDI,EAX                         ; 004db38f
    JL 0x004db361                       ; 004db391
        ;   XREF to: 004db361 (CONDITIONAL_JUMP)  ; LAB_004db361
    MOV EDI,dword ptr [0x02661f38]      ; 004db393 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004db393
    PUSH EDI                            ; 004db399
    MOV EBP,dword ptr [ESP + 0x338]     ; 004db39a
    PUSH EBP                            ; 004db3a1
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004db3a2
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004db3a7
    MOV dword ptr [ESP + 0x314],EAX     ; 004db3aa
    TEST EAX,EAX                        ; 004db3b1
    JNZ 0x004db5e4                      ; 004db3b3
        ;   XREF to: 004db5e4 (CONDITIONAL_JUMP)  ; LAB_004db5e4
    MOV EAX,dword ptr [EBX + 0x10]      ; 004db3b9
        ;   Label: LAB_004db3b9
    MOV ESI,dword ptr [ESP + 0x334]     ; 004db3bc
    MOV dword ptr [EBX + EAX*0x4 + 0x14],ESI ; 004db3c3
    MOV EAX,dword ptr [EBX + 0x10]      ; 004db3c7
    MOV ESI,dword ptr [EBX + 0x468]     ; 004db3ca
    MOV EDX,dword ptr [ESP + 0x334]     ; 004db3d0
    MOV dword ptr [EBX + EAX*0x4 + 0x46c],ESI ; 004db3d7
    PUSH EDX                            ; 004db3de
    MOV ESI,dword ptr [EBX + 0x10]      ; 004db3df
    MOV ECX,dword ptr [0x00618170]      ; 004db3e2 | DAT_00618170
    INC ESI                             ; 004db3e8
    PUSH ECX                            ; 004db3e9
    MOV dword ptr [EBX + 0x10],ESI      ; 004db3ea
    CALL core_mission.cpp_CDemonMission_removeActorFromList_FUN_004fc270 ; 004db3ed
        ;   XREF to: 004fc270 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeActorFromList_FUN_004fc270(CDemonMission * this_ptr, CDemonActor * actor_ptr)
    ADD ESP,0x8                         ; 004db3f2
    PUSH EBX                            ; 004db3f5
    MOV EDI,dword ptr [ESP + 0x338]     ; 004db3f6
    MOV EAX,dword ptr [ESP + 0x338]     ; 004db3fd
    PUSH EDI                            ; 004db404
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004db405
    CALL dword ptr [EAX + 0x74]         ; 004db40b
    ADD ESP,0x8                         ; 004db40e
    MOV EBP,dword ptr [ESP + 0x314]     ; 004db411
    TEST EBP,EBP                        ; 004db418
    JZ 0x004db43b                       ; 004db41a
        ;   XREF to: 004db43b (CONDITIONAL_JUMP)  ; LAB_004db43b
    MOV EAX,dword ptr [EBX + 0x468]     ; 004db41c
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x610] ; 004db422
    TEST EAX,EAX                        ; 004db429
    JNZ 0x004db43b                      ; 004db42b
        ;   XREF to: 004db43b (CONDITIONAL_JUMP)  ; LAB_004db43b
    PUSH 0x1                            ; 004db42d
    PUSH 0x5                            ; 004db42f
    PUSH EBP                            ; 004db431
    PUSH EBX                            ; 004db432
    CALL core_inv.cpp_FUN_004db9d0      ; 004db433
        ;   XREF to: 004db9d0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004db9d0()
    ADD ESP,0x10                        ; 004db438
    MOV EAX,0x1                         ; 004db43b
        ;   Label: LAB_004db43b
    ADD ESP,0x31c                       ; 004db440
    POP EBP                             ; 004db446
    POP EDI                             ; 004db447
    POP ESI                             ; 004db448
    POP EBX                             ; 004db449
    RET                                 ; 004db44a
    TEST ESI,ESI                        ; 004db44b
        ;   Label: LAB_004db44b
    JZ 0x004db2c9                       ; 004db44d
        ;   XREF to: 004db2c9 (CONDITIONAL_JUMP)  ; LAB_004db2c9
    LEA EAX,[ESI + 0x430]               ; 004db453
    PUSH EAX                            ; 004db459
    MOV ECX,dword ptr [ESP + 0x310]     ; 004db45a
    PUSH ECX                            ; 004db461
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 004db462
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 004db467
    TEST EAX,EAX                        ; 004db46a
    JNZ 0x004db2c9                      ; 004db46c
        ;   XREF to: 004db2c9 (CONDITIONAL_JUMP)  ; LAB_004db2c9
    MOV EAX,dword ptr [ESP + 0x310]     ; 004db472
    MOV EDX,dword ptr [ESI + 0x474]     ; 004db479
    CMP EDX,dword ptr [EAX + 0x474]     ; 004db47f
    JNZ 0x004db2c9                      ; 004db485
        ;   XREF to: 004db2c9 (CONDITIONAL_JUMP)  ; LAB_004db2c9
    MOV EAX,dword ptr [ESP + 0x310]     ; 004db48b
    PUSH 0x5db609                       ; 004db492 | = "Found existing ammo... adding count"
    MOV ECX,dword ptr [ESI + 0x470]     ; 004db497
    MOV EAX,dword ptr [EAX + 0x470]     ; 004db49d
    MOV EBX,dword ptr [0x00609ed0]      ; 004db4a3 | g_CConsolePtr
    ADD ECX,EAX                         ; 004db4a9
    PUSH EBX                            ; 004db4ab | g_CConsoleInstance
    MOV dword ptr [ESI + 0x470],ECX     ; 004db4ac
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 004db4b2
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004db4b7
    PUSH 0x1                            ; 004db4ba
    MOV ESI,dword ptr [ESP + 0x338]     ; 004db4bc
    PUSH ESI                            ; 004db4c3
    MOV EDI,dword ptr [0x00618170]      ; 004db4c4 | DAT_00618170
    PUSH EDI                            ; 004db4ca
    CALL core_mission.cpp_FUN_004fc7b0  ; 004db4cb
        ;   XREF to: 004fc7b0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004fc7b0()
    MOV EAX,0x1                         ; 004db4d0
    ADD ESP,0xc                         ; 004db4d5
    ADD ESP,0x31c                       ; 004db4d8
    POP EBP                             ; 004db4de
    POP EDI                             ; 004db4df
    POP ESI                             ; 004db4e0
    POP EBX                             ; 004db4e1
    RET                                 ; 004db4e2
    PUSH EAX                            ; 004db4e3
        ;   Label: LAB_004db4e3
    CALL core_actor.cpp_FUN_00408a50    ; 004db4e4
        ;   XREF to: 00408a50 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408a50()
    ADD ESP,0x4                         ; 004db4e9
    PUSH EAX                            ; 004db4ec
    PUSH EBP                            ; 004db4ed
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004db4ee
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004db4f3
    TEST EAX,EAX                        ; 004db4f6
    JNZ 0x004db307                      ; 004db4f8
        ;   XREF to: 004db307 (CONDITIONAL_JUMP)  ; LAB_004db307
    JMP 0x004db312                      ; 004db4fe
        ;   XREF to: 004db312 (UNCONDITIONAL_JUMP)  ; LAB_004db312
    PUSH 0x5db6a2                       ; 004db503 | = "CDynamite"
        ;   Label: LAB_004db503
    CALL core_actor.cpp_createActorByName_FUN_0040c5a0 ; 004db508
        ;   XREF to: 0040c5a0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c5a0(char * class_name)
    ADD ESP,0x4                         ; 004db50d
    PUSH EAX                            ; 004db510
    MOV EDI,dword ptr [0x00618170]      ; 004db511 | DAT_00618170
    PUSH EDI                            ; 004db517
    MOV ESI,EAX                         ; 004db518
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004fcda0 ; 004db51a
        ;   XREF to: 004fcda0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004fcda0(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004db51f
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 004db522
    PUSH ESI                            ; 004db528
    CALL dword ptr [EAX + 0x8]          ; 004db529
    ADD ESP,0x4                         ; 004db52c
    MOV EAX,dword ptr [ESP + 0x310]     ; 004db52f
    MOV EAX,dword ptr [EAX + 0x470]     ; 004db536
    MOV dword ptr [ESI + 0x6c4],EAX     ; 004db53c
    MOV EBP,dword ptr [EBX + 0x4]       ; 004db542
    PUSH EBP                            ; 004db545
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 004db546
    PUSH ESI                            ; 004db54c
    CALL dword ptr [EAX + 0x90]         ; 004db54d
    ADD ESP,0x8                         ; 004db553
    MOV EAX,dword ptr [ESP + 0x334]     ; 004db556
    PUSH EAX                            ; 004db55d
    CALL core_actor.cpp_FUN_00408730    ; 004db55e
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408730()
    ADD ESP,0x4                         ; 004db563
    PUSH 0x5db6ac                       ; 004db566 | = "Found dynamite.  Creating weapon for ..."
    MOV EDX,dword ptr [0x00609ed0]      ; 004db56b | g_CConsolePtr
    PUSH EDX                            ; 004db571 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 004db572
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004db577
    PUSH 0x0                            ; 004db57a
    PUSH 0x1                            ; 004db57c
    PUSH ESI                            ; 004db57e
    PUSH EBX                            ; 004db57f
    CALL core_inv.cpp_FUN_004dadb0      ; 004db580
        ;   XREF to: 004dadb0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dadb0()
    MOV EAX,0x1                         ; 004db585
    ADD ESP,0x10                        ; 004db58a
    ADD ESP,0x31c                       ; 004db58d
    POP EBP                             ; 004db593
    POP EDI                             ; 004db594
    POP ESI                             ; 004db595
    POP EBX                             ; 004db596
    RET                                 ; 004db597
    TEST EAX,EAX                        ; 004db598
        ;   Label: LAB_004db598
    JZ 0x004db388                       ; 004db59a
        ;   XREF to: 004db388 (CONDITIONAL_JUMP)  ; LAB_004db388
    MOV EBX,dword ptr [ESP + 0x300]     ; 004db5a0
    MOV ECX,dword ptr [EAX + 0x430]     ; 004db5a7
    MOV EBX,dword ptr [EBX + 0x430]     ; 004db5ad
    PUSH 0x1                            ; 004db5b3
    ADD ECX,EBX                         ; 004db5b5
    MOV EBX,dword ptr [ESP + 0x338]     ; 004db5b7
    PUSH EBX                            ; 004db5be
    MOV ESI,dword ptr [0x00618170]      ; 004db5bf | DAT_00618170
    PUSH ESI                            ; 004db5c5
    MOV dword ptr [EAX + 0x430],ECX     ; 004db5c6
    CALL core_mission.cpp_FUN_004fc7b0  ; 004db5cc
        ;   XREF to: 004fc7b0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004fc7b0()
    MOV EAX,0x1                         ; 004db5d1
    ADD ESP,0xc                         ; 004db5d6
    ADD ESP,0x31c                       ; 004db5d9
    POP EBP                             ; 004db5df
    POP EDI                             ; 004db5e0
    POP ESI                             ; 004db5e1
    POP EBX                             ; 004db5e2
    RET                                 ; 004db5e3
    MOV EDX,dword ptr [0x01d0557c]      ; 004db5e4 | g_CMeleeClassInfo.name_hash
        ;   Label: LAB_004db5e4
    PUSH EDX                            ; 004db5ea
    PUSH EAX                            ; 004db5eb
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004db5ec
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004db5f1
    TEST EAX,EAX                        ; 004db5f4
    JNZ 0x004db63c                      ; 004db5f6
        ;   XREF to: 004db63c (CONDITIONAL_JUMP)  ; LAB_004db63c
    MOV ECX,dword ptr [EBX + 0x10]      ; 004db5f8
    XOR EBP,EBP                         ; 004db5fb
    TEST ECX,ECX                        ; 004db5fd
    JLE 0x004db3b9                      ; 004db5ff
        ;   XREF to: 004db3b9 (CONDITIONAL_JUMP)  ; LAB_004db3b9
    MOV EDI,EBX                         ; 004db605
    MOV ESI,dword ptr [0x02661f38]      ; 004db607 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004db607
    PUSH ESI                            ; 004db60d
    MOV EAX,dword ptr [EDI + 0x14]      ; 004db60e
    PUSH EAX                            ; 004db611
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004db612
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 004db617
    MOV EDX,dword ptr [EBX + 0x468]     ; 004db619
    MOV EAX,dword ptr [EDI + 0x46c]     ; 004db61f
    ADD ESP,0x8                         ; 004db625
    CMP EAX,EDX                         ; 004db628
    JZ 0x004db691                       ; 004db62a
        ;   XREF to: 004db691 (CONDITIONAL_JUMP)  ; LAB_004db691
    INC EBP                             ; 004db62c
        ;   Label: LAB_004db62c
    MOV ECX,dword ptr [EBX + 0x10]      ; 004db62d
    ADD EDI,0x4                         ; 004db630
    CMP EBP,ECX                         ; 004db633
    JL 0x004db607                       ; 004db635
        ;   XREF to: 004db607 (CONDITIONAL_JUMP)  ; LAB_004db607
    JMP 0x004db3b9                      ; 004db637
        ;   XREF to: 004db3b9 (UNCONDITIONAL_JUMP)  ; LAB_004db3b9
    MOV EAX,dword ptr [EBX + 0x10]      ; 004db63c
        ;   Label: LAB_004db63c
    MOV dword ptr [EBX + EAX*0x4 + 0x14],EBP ; 004db63f
    PUSH 0x0                            ; 004db643
    MOV EAX,dword ptr [EBX + 0x10]      ; 004db645
    MOV ESI,dword ptr [ESP + 0x30c]     ; 004db648
    PUSH EBP                            ; 004db64f
    MOV dword ptr [EBX + EAX*0x4 + 0x46c],ESI ; 004db650
    MOV ESI,EBP                         ; 004db657
    MOV EBP,dword ptr [EBX + 0x10]      ; 004db659
    MOV EDI,dword ptr [0x00618170]      ; 004db65c | DAT_00618170
    INC EBP                             ; 004db662
    PUSH EDI                            ; 004db663
    MOV dword ptr [EBX + 0x10],EBP      ; 004db664
    CALL core_mission.cpp_FUN_004fc7b0  ; 004db667
        ;   XREF to: 004fc7b0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004fc7b0()
    ADD ESP,0xc                         ; 004db66c
    MOV EAX,ESI                         ; 004db66f
    PUSH EBX                            ; 004db671
    MOV EDX,ESI                         ; 004db672
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004db674
    PUSH EDX                            ; 004db67a
    CALL dword ptr [EAX + 0x74]         ; 004db67b
    MOV EAX,0x1                         ; 004db67e
    ADD ESP,0x8                         ; 004db683
    ADD ESP,0x31c                       ; 004db686
    POP EBP                             ; 004db68c
    POP EDI                             ; 004db68d
    POP ESI                             ; 004db68e
    POP EBX                             ; 004db68f
    RET                                 ; 004db690
    TEST ESI,ESI                        ; 004db691
        ;   Label: LAB_004db691
    JZ 0x004db62c                       ; 004db693
        ;   XREF to: 004db62c (CONDITIONAL_JUMP)  ; LAB_004db62c
    PUSH ESI                            ; 004db695
    CALL core_actor.cpp_FUN_00408a50    ; 004db696
        ;   XREF to: 00408a50 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408a50()
    ADD ESP,0x4                         ; 004db69b
    PUSH EAX                            ; 004db69e
    MOV ECX,dword ptr [ESP + 0x318]     ; 004db69f
    PUSH ECX                            ; 004db6a6
    CALL core_actor.cpp_FUN_00408a50    ; 004db6a7
        ;   XREF to: 00408a50 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408a50()
    ADD ESP,0x4                         ; 004db6ac
    PUSH EAX                            ; 004db6af
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 004db6b0
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 004db6b5
    TEST EAX,EAX                        ; 004db6b8
    JNZ 0x004db62c                      ; 004db6ba
        ;   XREF to: 004db62c (CONDITIONAL_JUMP)  ; LAB_004db62c
    MOV EAX,dword ptr [ESP + 0x314]     ; 004db6c0
    MOV EDX,dword ptr [ESI + 0x6c8]     ; 004db6c7
    CMP EDX,dword ptr [EAX + 0x6c8]     ; 004db6cd
    JNZ 0x004db62c                      ; 004db6d3
        ;   XREF to: 004db62c (CONDITIONAL_JUMP)  ; LAB_004db62c
    MOV EAX,dword ptr [ESP + 0x314]     ; 004db6d9
    MOV EBX,dword ptr [0x02653574]      ; 004db6e0 | g_CTommyGunClassInfo.name_hash
    MOV ECX,dword ptr [ESI + 0x6c4]     ; 004db6e6
    MOV EAX,dword ptr [EAX + 0x6c4]     ; 004db6ec
    PUSH EBX                            ; 004db6f2
    ADD ECX,EAX                         ; 004db6f3
    PUSH ESI                            ; 004db6f5
    MOV dword ptr [ESI + 0x6c4],ECX     ; 004db6f6
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004db6fc
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004db701
    TEST EAX,EAX                        ; 004db704
    JZ 0x004db71e                       ; 004db706
        ;   XREF to: 004db71e (CONDITIONAL_JUMP)  ; LAB_004db71e
    CMP dword ptr [EAX + 0x6c4],0xc8    ; 004db708
    JLE 0x004db71e                      ; 004db712
        ;   XREF to: 004db71e (CONDITIONAL_JUMP)  ; LAB_004db71e
    MOV dword ptr [EAX + 0x6c4],0xc8    ; 004db714
    PUSH 0x5db6d6                       ; 004db71e | = "Found same weapon, increasing ammoCou..."
        ;   Label: LAB_004db71e
    MOV EDI,dword ptr [0x00609ed0]      ; 004db723 | g_CConsolePtr
    PUSH EDI                            ; 004db729 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 004db72a
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004db72f
    PUSH 0x1                            ; 004db732
    MOV EBP,dword ptr [ESP + 0x338]     ; 004db734
    PUSH EBP                            ; 004db73b
    MOV EAX,[0x00618170]                ; 004db73c | DAT_00618170
    PUSH EAX                            ; 004db741
    CALL core_mission.cpp_FUN_004fc7b0  ; 004db742
        ;   XREF to: 004fc7b0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004fc7b0()
    MOV EAX,0x1                         ; 004db747
    ADD ESP,0xc                         ; 004db74c
    ADD ESP,0x31c                       ; 004db74f
    POP EBP                             ; 004db755
    POP EDI                             ; 004db756
    POP ESI                             ; 004db757
    POP EBX                             ; 004db758
    RET                                 ; 004db759

