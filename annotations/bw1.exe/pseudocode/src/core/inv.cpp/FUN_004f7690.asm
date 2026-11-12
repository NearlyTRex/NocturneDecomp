; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_inv_cpp_FUN_004f7690(CInventory *this_ptr,CDemonActor *item_actor,int show_tutorial_message)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   item_actor
; int              Stack[0xc]:4   show_tutorial_message
;
; XREF[10]:
;   core_ammobox.cpp_CAmmoBox_addToInventory_FUN_0040e210 at 0040e234
;   core_game.cpp_CGame_processCheatCodes_FUN_004d27b0 at 004d329b
;   core_game.cpp_giveHeroWeaponAmmo_FUN_004d25fe at 004d2680
;   core_game.cpp_giveHeroWeapon_FUN_004d2540 at 004d25c4
;   core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0 at 004ec2ec
;   core_hero.cpp_CHero_createDefaultWeapon_FUN_004eafd0 at 004eb037
;   core_hostage.cpp_CHostage_process_FUN_004ed890 at 004edbf1
;   core_inv.cpp_FUN_004f8b70 at 004f8c27
;   core_scat.cpp_CScat_createDefaultWeapon_FUN_00540d50 at 00540d9a
;   core_script.cpp_CScript_step_FUN_00544460 at 00545d04
;
; Referenced Globals:
;   TerminatedCString s_You_ve_found_005e61d7
;   undefined4 DAT_005e61e7
;   TerminatedCString s_CHealthItem_005e61eb
;   TerminatedCString s_Press_005e61f7
;   TerminatedCString s_and_005e61fe
;   TerminatedCString s_to_cycle_through_your_in_005e6204
;   TerminatedCString s_to_use_this_item_to_rest_005e622e
;   TerminatedCString s_CGasMask_005e6258
;   TerminatedCString s_Press_005e6261
;   TerminatedCString s_and_005e6268
;   TerminatedCString s_to_cycle_through_your_in_005e626e
;   TerminatedCString s_to_put_on_and_off_the_go_005e6298
;   TerminatedCString s_CGoggles_005e62b8
;   TerminatedCString s_Press_005e62c1
;   TerminatedCString s_and_005e62c8
;   ... and 51 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408830
;   core_actor.cpp_createActorByName_FUN_0040c2b0
;   core_actor.cpp_FUN_00408560
;   core_actor.cpp_isOfClass_FUN_0040c550
;   core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ddd0
;   core_game.cpp_CGame_displayMessage_FUN_004cc190
;   core_inv.cpp_CInventory_selectWeapon_FUN_004f8dc0
;   core_inv.cpp_getItemDescription_FUN_004f6350
;   core_inv.cpp_getItemDisplayName_FUN_004f62e0
;   core_menu.cpp_getKeyDisplayName_FUN_0050d220
;   core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60
;   core_mission.cpp_CDemonMission_removeActorFromList_FUN_0051b1d0
;   core_mission.cpp_FUN_0051b740
;   crt_string.c__strcmp_FUN_005c0f80
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7690
        ;   Label: core_inv.cpp_FUN_004f7690
    PUSH ESI                            ; 004f7691
    PUSH EDI                            ; 004f7692
    PUSH EBP                            ; 004f7693
    SUB ESP,0x324                       ; 004f7694
    MOV EBP,dword ptr [ESP + 0x338]     ; 004f769a
    CMP dword ptr [EBP + 0x10],0x64     ; 004f76a1
    JL 0x004f76b4                       ; 004f76a5
        ;   XREF to: 004f76b4 (CONDITIONAL_JUMP)  ; LAB_004f76b4
    XOR EAX,EAX                         ; 004f76a7
    ADD ESP,0x324                       ; 004f76a9
    POP EBP                             ; 004f76af
    POP EDI                             ; 004f76b0
    POP ESI                             ; 004f76b1
    POP EBX                             ; 004f76b2
    RET                                 ; 004f76b3
    MOV ECX,dword ptr [ESP + 0x33c]     ; 004f76b4
        ;   Label: LAB_004f76b4
    MOV EAX,dword ptr [ESP + 0x33c]     ; 004f76bb
    PUSH ECX                            ; 004f76c2
    MOV EAX,dword ptr [EAX + 0x154]     ; 004f76c3
    CALL dword ptr [EAX + 0x94]         ; 004f76c9
    MOV EBX,dword ptr [EBP + 0x4]       ; 004f76cf
    ADD ESP,0x4                         ; 004f76d2
    CMP EAX,EBX                         ; 004f76d5
    JZ 0x004f7711                       ; 004f76d7
        ;   XREF to: 004f7711 (CONDITIONAL_JUMP)  ; LAB_004f7711
    PUSH 0x0                            ; 004f76d9
    MOV ESI,dword ptr [ESP + 0x340]     ; 004f76db
    MOV EAX,dword ptr [ESP + 0x340]     ; 004f76e2
    PUSH ESI                            ; 004f76e9
    MOV EAX,dword ptr [EAX + 0x154]     ; 004f76ea
    CALL dword ptr [EAX + 0x8c]         ; 004f76f0
    MOV EDI,dword ptr [EBP + 0x4]       ; 004f76f6
    ADD ESP,0x8                         ; 004f76f9
    TEST EDI,EDI                        ; 004f76fc
    JZ 0x004f7711                       ; 004f76fe
        ;   XREF to: 004f7711 (CONDITIONAL_JUMP)  ; LAB_004f7711
    PUSH EDI                            ; 004f7700
    MOV EAX,dword ptr [ESI + 0x154]     ; 004f7701
    PUSH ESI                            ; 004f7707
    CALL dword ptr [EAX + 0x88]         ; 004f7708
    ADD ESP,0x8                         ; 004f770e
    MOV EBX,dword ptr [0x01d06ab4]      ; 004f7711 | DAT_01d06ab4
        ;   Label: LAB_004f7711
    MOV EAX,dword ptr [EBP + 0x4]       ; 004f7717
    CMP EAX,dword ptr [EBX*0x4 + 0x1d06aa4] ; 004f771a
    JNZ 0x004f8413                      ; 004f7721
        ;   XREF to: 004f8413 (CONDITIONAL_JUMP)  ; LAB_004f8413
    CMP dword ptr [ESP + 0x340],0x0     ; 004f7727
    JZ 0x004f8413                       ; 004f772f
        ;   XREF to: 004f8413 (CONDITIONAL_JUMP)  ; LAB_004f8413
    MOV EAX,[0x0061d95c]                ; 004f7735 | g_CGamePtr
    CMP dword ptr [EAX + 0x244],0x0     ; 004f773a | g_CGameInstance.letterbox_mode
    JNZ 0x004f8413                      ; 004f7741
        ;   XREF to: 004f8413 (CONDITIONAL_JUMP)  ; LAB_004f8413
    MOV ECX,dword ptr [ESP + 0x33c]     ; 004f7747
    PUSH ECX                            ; 004f774e
    CALL core_inv.cpp_getItemDisplayName_FUN_004f62e0 ; 004f774f
        ;   XREF to: 004f62e0 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDisplayName_FUN_004f62e0(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004f7754
    MOV EBX,dword ptr [ESP + 0x33c]     ; 004f7757
    PUSH EBX                            ; 004f775e
    MOV dword ptr [ESP + 0x304],EAX     ; 004f775f
    CALL core_inv.cpp_getItemDescription_FUN_004f6350 ; 004f7766
        ;   XREF to: 004f6350 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDescription_FUN_004f6350(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004f776b
    MOV ESI,dword ptr [0x007c33a4]      ; 004f776e | g_CAmmoClassInfo.name_hash
    PUSH ESI                            ; 004f7774
    PUSH EBX                            ; 004f7775
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f7776
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f777b
    PUSH 0x5e61d7                       ; 004f777e | = "You've found : "
    MOV EBX,EAX                         ; 004f7783
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f7785
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f778a
    MOV EDI,ESP                         ; 004f778d
    MOV ESI,EAX                         ; 004f778f
    PUSH EDI                            ; 004f7791
    MOV AL,byte ptr [ESI]               ; 004f7792
        ;   Label: LAB_004f7792
    MOV byte ptr [EDI],AL               ; 004f7794
    CMP AL,0x0                          ; 004f7796
    JZ 0x004f77aa                       ; 004f7798
        ;   XREF to: 004f77aa (CONDITIONAL_JUMP)  ; LAB_004f77aa
    MOV AL,byte ptr [ESI + 0x1]         ; 004f779a
    ADD ESI,0x2                         ; 004f779d
    MOV byte ptr [EDI + 0x1],AL         ; 004f77a0
    ADD EDI,0x2                         ; 004f77a3
    CMP AL,0x0                          ; 004f77a6
    JNZ 0x004f7792                      ; 004f77a8
        ;   XREF to: 004f7792 (CONDITIONAL_JUMP)  ; LAB_004f7792
    POP EDI                             ; 004f77aa
        ;   Label: LAB_004f77aa
    TEST EBX,EBX                        ; 004f77ab
    JZ 0x004f77f6                       ; 004f77ad
        ;   XREF to: 004f77f6 (CONDITIONAL_JUMP)  ; LAB_004f77f6
    MOV EAX,dword ptr [EBX + 0x314]     ; 004f77af
    PUSH EAX                            ; 004f77b5
    PUSH 0x5e61e7                       ; 004f77b6 | DAT_005e61e7
    LEA EAX,[ESP + 0x108]               ; 004f77bb
    PUSH EAX                            ; 004f77c2
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004f77c3
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 004f77c8
    LEA ESI,[ESP + 0x100]               ; 004f77cb
    MOV EDI,ESP                         ; 004f77d2
    PUSH EDI                            ; 004f77d4
    SUB ECX,ECX                         ; 004f77d5
    DEC ECX                             ; 004f77d7
    MOV AL,0x0                          ; 004f77d8
    SCASB.REPNE ES:EDI                  ; 004f77da
    DEC EDI                             ; 004f77dc
    MOV AL,byte ptr [ESI]               ; 004f77dd
        ;   Label: LAB_004f77dd
    MOV byte ptr [EDI],AL               ; 004f77df
    CMP AL,0x0                          ; 004f77e1
    JZ 0x004f77f5                       ; 004f77e3
        ;   XREF to: 004f77f5 (CONDITIONAL_JUMP)  ; LAB_004f77f5
    MOV AL,byte ptr [ESI + 0x1]         ; 004f77e5
    ADD ESI,0x2                         ; 004f77e8
    MOV byte ptr [EDI + 0x1],AL         ; 004f77eb
    ADD EDI,0x2                         ; 004f77ee
    CMP AL,0x0                          ; 004f77f1
    JNZ 0x004f77dd                      ; 004f77f3
        ;   XREF to: 004f77dd (CONDITIONAL_JUMP)  ; LAB_004f77dd
    POP EDI                             ; 004f77f5
        ;   Label: LAB_004f77f5
    MOV ESI,dword ptr [ESP + 0x300]     ; 004f77f6
        ;   Label: LAB_004f77f6
    MOV EDI,ESP                         ; 004f77fd
    PUSH EDI                            ; 004f77ff
    SUB ECX,ECX                         ; 004f7800
    DEC ECX                             ; 004f7802
    MOV AL,0x0                          ; 004f7803
    SCASB.REPNE ES:EDI                  ; 004f7805
    DEC EDI                             ; 004f7807
    MOV AL,byte ptr [ESI]               ; 004f7808
        ;   Label: LAB_004f7808
    MOV byte ptr [EDI],AL               ; 004f780a
    CMP AL,0x0                          ; 004f780c
    JZ 0x004f7820                       ; 004f780e
        ;   XREF to: 004f7820 (CONDITIONAL_JUMP)  ; LAB_004f7820
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7810
    ADD ESI,0x2                         ; 004f7813
    MOV byte ptr [EDI + 0x1],AL         ; 004f7816
    ADD EDI,0x2                         ; 004f7819
    CMP AL,0x0                          ; 004f781c
    JNZ 0x004f7808                      ; 004f781e
        ;   XREF to: 004f7808 (CONDITIONAL_JUMP)  ; LAB_004f7808
    POP EDI                             ; 004f7820
        ;   Label: LAB_004f7820
    PUSH 0x5e61eb                       ; 004f7821 | = "CHealthItem"
    MOV EDX,dword ptr [ESP + 0x340]     ; 004f7826
    XOR AH,AH                           ; 004f782d
    PUSH EDX                            ; 004f782f
    MOV byte ptr [ESP + 0x208],AH       ; 004f7830
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004f7837
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f783c
    TEST EAX,EAX                        ; 004f783f
    JZ 0x004f79d9                       ; 004f7841
        ;   XREF to: 004f79d9 (CONDITIONAL_JUMP)  ; LAB_004f79d9
    PUSH 0x5e61f7                       ; 004f7847 | = "Press "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f784c
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f7851
    LEA EDI,[ESP + 0x200]               ; 004f7854
    MOV ESI,EAX                         ; 004f785b
    PUSH EDI                            ; 004f785d
    MOV AL,byte ptr [ESI]               ; 004f785e
        ;   Label: LAB_004f785e
    MOV byte ptr [EDI],AL               ; 004f7860
    CMP AL,0x0                          ; 004f7862
    JZ 0x004f7876                       ; 004f7864
        ;   XREF to: 004f7876 (CONDITIONAL_JUMP)  ; LAB_004f7876
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7866
    ADD ESI,0x2                         ; 004f7869
    MOV byte ptr [EDI + 0x1],AL         ; 004f786c
    ADD EDI,0x2                         ; 004f786f
    CMP AL,0x0                          ; 004f7872
    JNZ 0x004f785e                      ; 004f7874
        ;   XREF to: 004f785e (CONDITIONAL_JUMP)  ; LAB_004f785e
    POP EDI                             ; 004f7876
        ;   Label: LAB_004f7876
    MOV EAX,[0x0061d95c]                ; 004f7877 | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x98]      ; 004f787c | g_CGameInstance.key_next_item
    PUSH ECX                            ; 004f7882
    CALL core_menu.cpp_getKeyDisplayName_FUN_0050d220 ; 004f7883
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_0050d220(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004f7888
    LEA EDI,[ESP + 0x200]               ; 004f788b
    MOV ESI,EAX                         ; 004f7892
    PUSH EDI                            ; 004f7894
    SUB ECX,ECX                         ; 004f7895
    DEC ECX                             ; 004f7897
    MOV AL,0x0                          ; 004f7898
    SCASB.REPNE ES:EDI                  ; 004f789a
    DEC EDI                             ; 004f789c
    MOV AL,byte ptr [ESI]               ; 004f789d
        ;   Label: LAB_004f789d
    MOV byte ptr [EDI],AL               ; 004f789f
    CMP AL,0x0                          ; 004f78a1
    JZ 0x004f78b5                       ; 004f78a3
        ;   XREF to: 004f78b5 (CONDITIONAL_JUMP)  ; LAB_004f78b5
    MOV AL,byte ptr [ESI + 0x1]         ; 004f78a5
    ADD ESI,0x2                         ; 004f78a8
    MOV byte ptr [EDI + 0x1],AL         ; 004f78ab
    ADD EDI,0x2                         ; 004f78ae
    CMP AL,0x0                          ; 004f78b1
    JNZ 0x004f789d                      ; 004f78b3
        ;   XREF to: 004f789d (CONDITIONAL_JUMP)  ; LAB_004f789d
    POP EDI                             ; 004f78b5
        ;   Label: LAB_004f78b5
    PUSH 0x5e61fe                       ; 004f78b6 | = " and "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f78bb
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f78c0
    LEA EDI,[ESP + 0x200]               ; 004f78c3
    MOV ESI,EAX                         ; 004f78ca
    PUSH EDI                            ; 004f78cc
    SUB ECX,ECX                         ; 004f78cd
    DEC ECX                             ; 004f78cf
    MOV AL,0x0                          ; 004f78d0
    SCASB.REPNE ES:EDI                  ; 004f78d2
    DEC EDI                             ; 004f78d4
    MOV AL,byte ptr [ESI]               ; 004f78d5
        ;   Label: LAB_004f78d5
    MOV byte ptr [EDI],AL               ; 004f78d7
    CMP AL,0x0                          ; 004f78d9
    JZ 0x004f78ed                       ; 004f78db
        ;   XREF to: 004f78ed (CONDITIONAL_JUMP)  ; LAB_004f78ed
    MOV AL,byte ptr [ESI + 0x1]         ; 004f78dd
    ADD ESI,0x2                         ; 004f78e0
    MOV byte ptr [EDI + 0x1],AL         ; 004f78e3
    ADD EDI,0x2                         ; 004f78e6
    CMP AL,0x0                          ; 004f78e9
    JNZ 0x004f78d5                      ; 004f78eb
        ;   XREF to: 004f78d5 (CONDITIONAL_JUMP)  ; LAB_004f78d5
    POP EDI                             ; 004f78ed
        ;   Label: LAB_004f78ed
    MOV EAX,[0x0061d95c]                ; 004f78ee | g_CGamePtr
    MOV EBX,dword ptr [EAX + 0x9c]      ; 004f78f3 | g_CGameInstance.key_prev_item
    PUSH EBX                            ; 004f78f9
    CALL core_menu.cpp_getKeyDisplayName_FUN_0050d220 ; 004f78fa
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_0050d220(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004f78ff
    LEA EDI,[ESP + 0x200]               ; 004f7902
    MOV ESI,EAX                         ; 004f7909
    PUSH EDI                            ; 004f790b
    SUB ECX,ECX                         ; 004f790c
    DEC ECX                             ; 004f790e
    MOV AL,0x0                          ; 004f790f
    SCASB.REPNE ES:EDI                  ; 004f7911
    DEC EDI                             ; 004f7913
    MOV AL,byte ptr [ESI]               ; 004f7914
        ;   Label: LAB_004f7914
    MOV byte ptr [EDI],AL               ; 004f7916
    CMP AL,0x0                          ; 004f7918
    JZ 0x004f792c                       ; 004f791a
        ;   XREF to: 004f792c (CONDITIONAL_JUMP)  ; LAB_004f792c
    MOV AL,byte ptr [ESI + 0x1]         ; 004f791c
    ADD ESI,0x2                         ; 004f791f
    MOV byte ptr [EDI + 0x1],AL         ; 004f7922
    ADD EDI,0x2                         ; 004f7925
    CMP AL,0x0                          ; 004f7928
    JNZ 0x004f7914                      ; 004f792a
        ;   XREF to: 004f7914 (CONDITIONAL_JUMP)  ; LAB_004f7914
    POP EDI                             ; 004f792c
        ;   Label: LAB_004f792c
    PUSH 0x5e6204                       ; 004f792d | = " to cycle through your inventory.  Pr..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f7932
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f7937
    LEA EDI,[ESP + 0x200]               ; 004f793a
    MOV ESI,EAX                         ; 004f7941
    PUSH EDI                            ; 004f7943
    SUB ECX,ECX                         ; 004f7944
    DEC ECX                             ; 004f7946
    MOV AL,0x0                          ; 004f7947
    SCASB.REPNE ES:EDI                  ; 004f7949
    DEC EDI                             ; 004f794b
    MOV AL,byte ptr [ESI]               ; 004f794c
        ;   Label: LAB_004f794c
    MOV byte ptr [EDI],AL               ; 004f794e
    CMP AL,0x0                          ; 004f7950
    JZ 0x004f7964                       ; 004f7952
        ;   XREF to: 004f7964 (CONDITIONAL_JUMP)  ; LAB_004f7964
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7954
    ADD ESI,0x2                         ; 004f7957
    MOV byte ptr [EDI + 0x1],AL         ; 004f795a
    ADD EDI,0x2                         ; 004f795d
    CMP AL,0x0                          ; 004f7960
    JNZ 0x004f794c                      ; 004f7962
        ;   XREF to: 004f794c (CONDITIONAL_JUMP)  ; LAB_004f794c
    POP EDI                             ; 004f7964
        ;   Label: LAB_004f7964
    MOV EAX,[0x0061d95c]                ; 004f7965 | g_CGamePtr
    MOV ESI,dword ptr [EAX + 0x4c]      ; 004f796a | g_CGameInstance.key_use_item
    PUSH ESI                            ; 004f796d
    CALL core_menu.cpp_getKeyDisplayName_FUN_0050d220 ; 004f796e
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_0050d220(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004f7973
    LEA EDI,[ESP + 0x200]               ; 004f7976
    MOV ESI,EAX                         ; 004f797d
    PUSH EDI                            ; 004f797f
    SUB ECX,ECX                         ; 004f7980
    DEC ECX                             ; 004f7982
    MOV AL,0x0                          ; 004f7983
    SCASB.REPNE ES:EDI                  ; 004f7985
    DEC EDI                             ; 004f7987
    MOV AL,byte ptr [ESI]               ; 004f7988
        ;   Label: LAB_004f7988
    MOV byte ptr [EDI],AL               ; 004f798a
    CMP AL,0x0                          ; 004f798c
    JZ 0x004f79a0                       ; 004f798e
        ;   XREF to: 004f79a0 (CONDITIONAL_JUMP)  ; LAB_004f79a0
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7990
    ADD ESI,0x2                         ; 004f7993
    MOV byte ptr [EDI + 0x1],AL         ; 004f7996
    ADD EDI,0x2                         ; 004f7999
    CMP AL,0x0                          ; 004f799c
    JNZ 0x004f7988                      ; 004f799e
        ;   XREF to: 004f7988 (CONDITIONAL_JUMP)  ; LAB_004f7988
    POP EDI                             ; 004f79a0
        ;   Label: LAB_004f79a0
    PUSH 0x5e622e                       ; 004f79a1 | = " to use this item to restore some hea..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f79a6
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f79ab
    LEA EDI,[ESP + 0x200]               ; 004f79ae
    MOV ESI,EAX                         ; 004f79b5
    PUSH EDI                            ; 004f79b7
    SUB ECX,ECX                         ; 004f79b8
    DEC ECX                             ; 004f79ba
    MOV AL,0x0                          ; 004f79bb
    SCASB.REPNE ES:EDI                  ; 004f79bd
    DEC EDI                             ; 004f79bf
    MOV AL,byte ptr [ESI]               ; 004f79c0
        ;   Label: LAB_004f79c0
    MOV byte ptr [EDI],AL               ; 004f79c2
    CMP AL,0x0                          ; 004f79c4
    JZ 0x004f79d8                       ; 004f79c6
        ;   XREF to: 004f79d8 (CONDITIONAL_JUMP)  ; LAB_004f79d8
    MOV AL,byte ptr [ESI + 0x1]         ; 004f79c8
    ADD ESI,0x2                         ; 004f79cb
    MOV byte ptr [EDI + 0x1],AL         ; 004f79ce
    ADD EDI,0x2                         ; 004f79d1
    CMP AL,0x0                          ; 004f79d4
    JNZ 0x004f79c0                      ; 004f79d6
        ;   XREF to: 004f79c0 (CONDITIONAL_JUMP)  ; LAB_004f79c0
    POP EDI                             ; 004f79d8
        ;   Label: LAB_004f79d8
    PUSH 0x5e6258                       ; 004f79d9 | = "CGasMask"
        ;   Label: LAB_004f79d9
    MOV EDI,dword ptr [ESP + 0x340]     ; 004f79de
    PUSH EDI                            ; 004f79e5
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004f79e6
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f79eb
    TEST EAX,EAX                        ; 004f79ee
    JZ 0x004f7b88                       ; 004f79f0
        ;   XREF to: 004f7b88 (CONDITIONAL_JUMP)  ; LAB_004f7b88
    PUSH 0x5e6261                       ; 004f79f6 | = "Press "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f79fb
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f7a00
    LEA EDI,[ESP + 0x200]               ; 004f7a03
    MOV ESI,EAX                         ; 004f7a0a
    PUSH EDI                            ; 004f7a0c
    MOV AL,byte ptr [ESI]               ; 004f7a0d
        ;   Label: LAB_004f7a0d
    MOV byte ptr [EDI],AL               ; 004f7a0f
    CMP AL,0x0                          ; 004f7a11
    JZ 0x004f7a25                       ; 004f7a13
        ;   XREF to: 004f7a25 (CONDITIONAL_JUMP)  ; LAB_004f7a25
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7a15
    ADD ESI,0x2                         ; 004f7a18
    MOV byte ptr [EDI + 0x1],AL         ; 004f7a1b
    ADD EDI,0x2                         ; 004f7a1e
    CMP AL,0x0                          ; 004f7a21
    JNZ 0x004f7a0d                      ; 004f7a23
        ;   XREF to: 004f7a0d (CONDITIONAL_JUMP)  ; LAB_004f7a0d
    POP EDI                             ; 004f7a25
        ;   Label: LAB_004f7a25
    MOV EAX,[0x0061d95c]                ; 004f7a26 | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x98]      ; 004f7a2b | g_CGameInstance.key_next_item
    PUSH EDX                            ; 004f7a31
    CALL core_menu.cpp_getKeyDisplayName_FUN_0050d220 ; 004f7a32
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_0050d220(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004f7a37
    LEA EDI,[ESP + 0x200]               ; 004f7a3a
    MOV ESI,EAX                         ; 004f7a41
    PUSH EDI                            ; 004f7a43
    SUB ECX,ECX                         ; 004f7a44
    DEC ECX                             ; 004f7a46
    MOV AL,0x0                          ; 004f7a47
    SCASB.REPNE ES:EDI                  ; 004f7a49
    DEC EDI                             ; 004f7a4b
    MOV AL,byte ptr [ESI]               ; 004f7a4c
        ;   Label: LAB_004f7a4c
    MOV byte ptr [EDI],AL               ; 004f7a4e
    CMP AL,0x0                          ; 004f7a50
    JZ 0x004f7a64                       ; 004f7a52
        ;   XREF to: 004f7a64 (CONDITIONAL_JUMP)  ; LAB_004f7a64
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7a54
    ADD ESI,0x2                         ; 004f7a57
    MOV byte ptr [EDI + 0x1],AL         ; 004f7a5a
    ADD EDI,0x2                         ; 004f7a5d
    CMP AL,0x0                          ; 004f7a60
    JNZ 0x004f7a4c                      ; 004f7a62
        ;   XREF to: 004f7a4c (CONDITIONAL_JUMP)  ; LAB_004f7a4c
    POP EDI                             ; 004f7a64
        ;   Label: LAB_004f7a64
    PUSH 0x5e6268                       ; 004f7a65 | = " and "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f7a6a
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f7a6f
    LEA EDI,[ESP + 0x200]               ; 004f7a72
    MOV ESI,EAX                         ; 004f7a79
    PUSH EDI                            ; 004f7a7b
    SUB ECX,ECX                         ; 004f7a7c
    DEC ECX                             ; 004f7a7e
    MOV AL,0x0                          ; 004f7a7f
    SCASB.REPNE ES:EDI                  ; 004f7a81
    DEC EDI                             ; 004f7a83
    MOV AL,byte ptr [ESI]               ; 004f7a84
        ;   Label: LAB_004f7a84
    MOV byte ptr [EDI],AL               ; 004f7a86
    CMP AL,0x0                          ; 004f7a88
    JZ 0x004f7a9c                       ; 004f7a8a
        ;   XREF to: 004f7a9c (CONDITIONAL_JUMP)  ; LAB_004f7a9c
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7a8c
    ADD ESI,0x2                         ; 004f7a8f
    MOV byte ptr [EDI + 0x1],AL         ; 004f7a92
    ADD EDI,0x2                         ; 004f7a95
    CMP AL,0x0                          ; 004f7a98
    JNZ 0x004f7a84                      ; 004f7a9a
        ;   XREF to: 004f7a84 (CONDITIONAL_JUMP)  ; LAB_004f7a84
    POP EDI                             ; 004f7a9c
        ;   Label: LAB_004f7a9c
    MOV EAX,[0x0061d95c]                ; 004f7a9d | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x9c]      ; 004f7aa2 | g_CGameInstance.key_prev_item
    PUSH ECX                            ; 004f7aa8
    CALL core_menu.cpp_getKeyDisplayName_FUN_0050d220 ; 004f7aa9
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_0050d220(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004f7aae
    LEA EDI,[ESP + 0x200]               ; 004f7ab1
    MOV ESI,EAX                         ; 004f7ab8
    PUSH EDI                            ; 004f7aba
    SUB ECX,ECX                         ; 004f7abb
    DEC ECX                             ; 004f7abd
    MOV AL,0x0                          ; 004f7abe
    SCASB.REPNE ES:EDI                  ; 004f7ac0
    DEC EDI                             ; 004f7ac2
    MOV AL,byte ptr [ESI]               ; 004f7ac3
        ;   Label: LAB_004f7ac3
    MOV byte ptr [EDI],AL               ; 004f7ac5
    CMP AL,0x0                          ; 004f7ac7
    JZ 0x004f7adb                       ; 004f7ac9
        ;   XREF to: 004f7adb (CONDITIONAL_JUMP)  ; LAB_004f7adb
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7acb
    ADD ESI,0x2                         ; 004f7ace
    MOV byte ptr [EDI + 0x1],AL         ; 004f7ad1
    ADD EDI,0x2                         ; 004f7ad4
    CMP AL,0x0                          ; 004f7ad7
    JNZ 0x004f7ac3                      ; 004f7ad9
        ;   XREF to: 004f7ac3 (CONDITIONAL_JUMP)  ; LAB_004f7ac3
    POP EDI                             ; 004f7adb
        ;   Label: LAB_004f7adb
    PUSH 0x5e626e                       ; 004f7adc | = " to cycle through your inventory.  Pr..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f7ae1
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f7ae6
    LEA EDI,[ESP + 0x200]               ; 004f7ae9
    MOV ESI,EAX                         ; 004f7af0
    PUSH EDI                            ; 004f7af2
    SUB ECX,ECX                         ; 004f7af3
    DEC ECX                             ; 004f7af5
    MOV AL,0x0                          ; 004f7af6
    SCASB.REPNE ES:EDI                  ; 004f7af8
    DEC EDI                             ; 004f7afa
    MOV AL,byte ptr [ESI]               ; 004f7afb
        ;   Label: LAB_004f7afb
    MOV byte ptr [EDI],AL               ; 004f7afd
    CMP AL,0x0                          ; 004f7aff
    JZ 0x004f7b13                       ; 004f7b01
        ;   XREF to: 004f7b13 (CONDITIONAL_JUMP)  ; LAB_004f7b13
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7b03
    ADD ESI,0x2                         ; 004f7b06
    MOV byte ptr [EDI + 0x1],AL         ; 004f7b09
    ADD EDI,0x2                         ; 004f7b0c
    CMP AL,0x0                          ; 004f7b0f
    JNZ 0x004f7afb                      ; 004f7b11
        ;   XREF to: 004f7afb (CONDITIONAL_JUMP)  ; LAB_004f7afb
    POP EDI                             ; 004f7b13
        ;   Label: LAB_004f7b13
    MOV EAX,[0x0061d95c]                ; 004f7b14 | g_CGamePtr
    MOV EBX,dword ptr [EAX + 0x4c]      ; 004f7b19 | g_CGameInstance.key_use_item
    PUSH EBX                            ; 004f7b1c
    CALL core_menu.cpp_getKeyDisplayName_FUN_0050d220 ; 004f7b1d
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_0050d220(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004f7b22
    LEA EDI,[ESP + 0x200]               ; 004f7b25
    MOV ESI,EAX                         ; 004f7b2c
    PUSH EDI                            ; 004f7b2e
    SUB ECX,ECX                         ; 004f7b2f
    DEC ECX                             ; 004f7b31
    MOV AL,0x0                          ; 004f7b32
    SCASB.REPNE ES:EDI                  ; 004f7b34
    DEC EDI                             ; 004f7b36
    MOV AL,byte ptr [ESI]               ; 004f7b37
        ;   Label: LAB_004f7b37
    MOV byte ptr [EDI],AL               ; 004f7b39
    CMP AL,0x0                          ; 004f7b3b
    JZ 0x004f7b4f                       ; 004f7b3d
        ;   XREF to: 004f7b4f (CONDITIONAL_JUMP)  ; LAB_004f7b4f
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7b3f
    ADD ESI,0x2                         ; 004f7b42
    MOV byte ptr [EDI + 0x1],AL         ; 004f7b45
    ADD EDI,0x2                         ; 004f7b48
    CMP AL,0x0                          ; 004f7b4b
    JNZ 0x004f7b37                      ; 004f7b4d
        ;   XREF to: 004f7b37 (CONDITIONAL_JUMP)  ; LAB_004f7b37
    POP EDI                             ; 004f7b4f
        ;   Label: LAB_004f7b4f
    PUSH 0x5e6298                       ; 004f7b50 | = " to put on and off the goggles."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f7b55
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f7b5a
    LEA EDI,[ESP + 0x200]               ; 004f7b5d
    MOV ESI,EAX                         ; 004f7b64
    PUSH EDI                            ; 004f7b66
    SUB ECX,ECX                         ; 004f7b67
    DEC ECX                             ; 004f7b69
    MOV AL,0x0                          ; 004f7b6a
    SCASB.REPNE ES:EDI                  ; 004f7b6c
    DEC EDI                             ; 004f7b6e
    MOV AL,byte ptr [ESI]               ; 004f7b6f
        ;   Label: LAB_004f7b6f
    MOV byte ptr [EDI],AL               ; 004f7b71
    CMP AL,0x0                          ; 004f7b73
    JZ 0x004f7b87                       ; 004f7b75
        ;   XREF to: 004f7b87 (CONDITIONAL_JUMP)  ; LAB_004f7b87
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7b77
    ADD ESI,0x2                         ; 004f7b7a
    MOV byte ptr [EDI + 0x1],AL         ; 004f7b7d
    ADD EDI,0x2                         ; 004f7b80
    CMP AL,0x0                          ; 004f7b83
    JNZ 0x004f7b6f                      ; 004f7b85
        ;   XREF to: 004f7b6f (CONDITIONAL_JUMP)  ; LAB_004f7b6f
    POP EDI                             ; 004f7b87
        ;   Label: LAB_004f7b87
    PUSH 0x5e62b8                       ; 004f7b88 | = "CGoggles"
        ;   Label: LAB_004f7b88
    MOV ESI,dword ptr [ESP + 0x340]     ; 004f7b8d
    PUSH ESI                            ; 004f7b94
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004f7b95
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f7b9a
    TEST EAX,EAX                        ; 004f7b9d
    JZ 0x004f7d37                       ; 004f7b9f
        ;   XREF to: 004f7d37 (CONDITIONAL_JUMP)  ; LAB_004f7d37
    PUSH 0x5e62c1                       ; 004f7ba5 | = "Press "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f7baa
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f7baf
    LEA EDI,[ESP + 0x200]               ; 004f7bb2
    MOV ESI,EAX                         ; 004f7bb9
    PUSH EDI                            ; 004f7bbb
    MOV AL,byte ptr [ESI]               ; 004f7bbc
        ;   Label: LAB_004f7bbc
    MOV byte ptr [EDI],AL               ; 004f7bbe
    CMP AL,0x0                          ; 004f7bc0
    JZ 0x004f7bd4                       ; 004f7bc2
        ;   XREF to: 004f7bd4 (CONDITIONAL_JUMP)  ; LAB_004f7bd4
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7bc4
    ADD ESI,0x2                         ; 004f7bc7
    MOV byte ptr [EDI + 0x1],AL         ; 004f7bca
    ADD EDI,0x2                         ; 004f7bcd
    CMP AL,0x0                          ; 004f7bd0
    JNZ 0x004f7bbc                      ; 004f7bd2
        ;   XREF to: 004f7bbc (CONDITIONAL_JUMP)  ; LAB_004f7bbc
    POP EDI                             ; 004f7bd4
        ;   Label: LAB_004f7bd4
    MOV EAX,[0x0061d95c]                ; 004f7bd5 | g_CGamePtr
    MOV EDI,dword ptr [EAX + 0x98]      ; 004f7bda | g_CGameInstance.key_next_item
    PUSH EDI                            ; 004f7be0
    CALL core_menu.cpp_getKeyDisplayName_FUN_0050d220 ; 004f7be1
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_0050d220(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004f7be6
    LEA EDI,[ESP + 0x200]               ; 004f7be9
    MOV ESI,EAX                         ; 004f7bf0
    PUSH EDI                            ; 004f7bf2
    SUB ECX,ECX                         ; 004f7bf3
    DEC ECX                             ; 004f7bf5
    MOV AL,0x0                          ; 004f7bf6
    SCASB.REPNE ES:EDI                  ; 004f7bf8
    DEC EDI                             ; 004f7bfa
    MOV AL,byte ptr [ESI]               ; 004f7bfb
        ;   Label: LAB_004f7bfb
    MOV byte ptr [EDI],AL               ; 004f7bfd
    CMP AL,0x0                          ; 004f7bff
    JZ 0x004f7c13                       ; 004f7c01
        ;   XREF to: 004f7c13 (CONDITIONAL_JUMP)  ; LAB_004f7c13
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7c03
    ADD ESI,0x2                         ; 004f7c06
    MOV byte ptr [EDI + 0x1],AL         ; 004f7c09
    ADD EDI,0x2                         ; 004f7c0c
    CMP AL,0x0                          ; 004f7c0f
    JNZ 0x004f7bfb                      ; 004f7c11
        ;   XREF to: 004f7bfb (CONDITIONAL_JUMP)  ; LAB_004f7bfb
    POP EDI                             ; 004f7c13
        ;   Label: LAB_004f7c13
    PUSH 0x5e62c8                       ; 004f7c14 | = " and "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f7c19
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f7c1e
    LEA EDI,[ESP + 0x200]               ; 004f7c21
    MOV ESI,EAX                         ; 004f7c28
    PUSH EDI                            ; 004f7c2a
    SUB ECX,ECX                         ; 004f7c2b
    DEC ECX                             ; 004f7c2d
    MOV AL,0x0                          ; 004f7c2e
    SCASB.REPNE ES:EDI                  ; 004f7c30
    DEC EDI                             ; 004f7c32
    MOV AL,byte ptr [ESI]               ; 004f7c33
        ;   Label: LAB_004f7c33
    MOV byte ptr [EDI],AL               ; 004f7c35
    CMP AL,0x0                          ; 004f7c37
    JZ 0x004f7c4b                       ; 004f7c39
        ;   XREF to: 004f7c4b (CONDITIONAL_JUMP)  ; LAB_004f7c4b
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7c3b
    ADD ESI,0x2                         ; 004f7c3e
    MOV byte ptr [EDI + 0x1],AL         ; 004f7c41
    ADD EDI,0x2                         ; 004f7c44
    CMP AL,0x0                          ; 004f7c47
    JNZ 0x004f7c33                      ; 004f7c49
        ;   XREF to: 004f7c33 (CONDITIONAL_JUMP)  ; LAB_004f7c33
    POP EDI                             ; 004f7c4b
        ;   Label: LAB_004f7c4b
    MOV EAX,[0x0061d95c]                ; 004f7c4c | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x9c]      ; 004f7c51 | g_CGameInstance.key_prev_item
    PUSH EDX                            ; 004f7c57
    CALL core_menu.cpp_getKeyDisplayName_FUN_0050d220 ; 004f7c58
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_0050d220(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004f7c5d
    LEA EDI,[ESP + 0x200]               ; 004f7c60
    MOV ESI,EAX                         ; 004f7c67
    PUSH EDI                            ; 004f7c69
    SUB ECX,ECX                         ; 004f7c6a
    DEC ECX                             ; 004f7c6c
    MOV AL,0x0                          ; 004f7c6d
    SCASB.REPNE ES:EDI                  ; 004f7c6f
    DEC EDI                             ; 004f7c71
    MOV AL,byte ptr [ESI]               ; 004f7c72
        ;   Label: LAB_004f7c72
    MOV byte ptr [EDI],AL               ; 004f7c74
    CMP AL,0x0                          ; 004f7c76
    JZ 0x004f7c8a                       ; 004f7c78
        ;   XREF to: 004f7c8a (CONDITIONAL_JUMP)  ; LAB_004f7c8a
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7c7a
    ADD ESI,0x2                         ; 004f7c7d
    MOV byte ptr [EDI + 0x1],AL         ; 004f7c80
    ADD EDI,0x2                         ; 004f7c83
    CMP AL,0x0                          ; 004f7c86
    JNZ 0x004f7c72                      ; 004f7c88
        ;   XREF to: 004f7c72 (CONDITIONAL_JUMP)  ; LAB_004f7c72
    POP EDI                             ; 004f7c8a
        ;   Label: LAB_004f7c8a
    PUSH 0x5e62ce                       ; 004f7c8b | = " to cycle through your inventory.  Pr..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f7c90
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f7c95
    LEA EDI,[ESP + 0x200]               ; 004f7c98
    MOV ESI,EAX                         ; 004f7c9f
    PUSH EDI                            ; 004f7ca1
    SUB ECX,ECX                         ; 004f7ca2
    DEC ECX                             ; 004f7ca4
    MOV AL,0x0                          ; 004f7ca5
    SCASB.REPNE ES:EDI                  ; 004f7ca7
    DEC EDI                             ; 004f7ca9
    MOV AL,byte ptr [ESI]               ; 004f7caa
        ;   Label: LAB_004f7caa
    MOV byte ptr [EDI],AL               ; 004f7cac
    CMP AL,0x0                          ; 004f7cae
    JZ 0x004f7cc2                       ; 004f7cb0
        ;   XREF to: 004f7cc2 (CONDITIONAL_JUMP)  ; LAB_004f7cc2
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7cb2
    ADD ESI,0x2                         ; 004f7cb5
    MOV byte ptr [EDI + 0x1],AL         ; 004f7cb8
    ADD EDI,0x2                         ; 004f7cbb
    CMP AL,0x0                          ; 004f7cbe
    JNZ 0x004f7caa                      ; 004f7cc0
        ;   XREF to: 004f7caa (CONDITIONAL_JUMP)  ; LAB_004f7caa
    POP EDI                             ; 004f7cc2
        ;   Label: LAB_004f7cc2
    MOV EAX,[0x0061d95c]                ; 004f7cc3 | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x4c]      ; 004f7cc8 | g_CGameInstance.key_use_item
    PUSH ECX                            ; 004f7ccb
    CALL core_menu.cpp_getKeyDisplayName_FUN_0050d220 ; 004f7ccc
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_0050d220(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004f7cd1
    LEA EDI,[ESP + 0x200]               ; 004f7cd4
    MOV ESI,EAX                         ; 004f7cdb
    PUSH EDI                            ; 004f7cdd
    SUB ECX,ECX                         ; 004f7cde
    DEC ECX                             ; 004f7ce0
    MOV AL,0x0                          ; 004f7ce1
    SCASB.REPNE ES:EDI                  ; 004f7ce3
    DEC EDI                             ; 004f7ce5
    MOV AL,byte ptr [ESI]               ; 004f7ce6
        ;   Label: LAB_004f7ce6
    MOV byte ptr [EDI],AL               ; 004f7ce8
    CMP AL,0x0                          ; 004f7cea
    JZ 0x004f7cfe                       ; 004f7cec
        ;   XREF to: 004f7cfe (CONDITIONAL_JUMP)  ; LAB_004f7cfe
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7cee
    ADD ESI,0x2                         ; 004f7cf1
    MOV byte ptr [EDI + 0x1],AL         ; 004f7cf4
    ADD EDI,0x2                         ; 004f7cf7
    CMP AL,0x0                          ; 004f7cfa
    JNZ 0x004f7ce6                      ; 004f7cfc
        ;   XREF to: 004f7ce6 (CONDITIONAL_JUMP)  ; LAB_004f7ce6
    POP EDI                             ; 004f7cfe
        ;   Label: LAB_004f7cfe
    PUSH 0x5e62f8                       ; 004f7cff | = " to put on and off the goggles."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f7d04
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f7d09
    LEA EDI,[ESP + 0x200]               ; 004f7d0c
    MOV ESI,EAX                         ; 004f7d13
    PUSH EDI                            ; 004f7d15
    SUB ECX,ECX                         ; 004f7d16
    DEC ECX                             ; 004f7d18
    MOV AL,0x0                          ; 004f7d19
    SCASB.REPNE ES:EDI                  ; 004f7d1b
    DEC EDI                             ; 004f7d1d
    MOV AL,byte ptr [ESI]               ; 004f7d1e
        ;   Label: LAB_004f7d1e
    MOV byte ptr [EDI],AL               ; 004f7d20
    CMP AL,0x0                          ; 004f7d22
    JZ 0x004f7d36                       ; 004f7d24
        ;   XREF to: 004f7d36 (CONDITIONAL_JUMP)  ; LAB_004f7d36
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7d26
    ADD ESI,0x2                         ; 004f7d29
    MOV byte ptr [EDI + 0x1],AL         ; 004f7d2c
    ADD EDI,0x2                         ; 004f7d2f
    CMP AL,0x0                          ; 004f7d32
    JNZ 0x004f7d1e                      ; 004f7d34
        ;   XREF to: 004f7d1e (CONDITIONAL_JUMP)  ; LAB_004f7d1e
    POP EDI                             ; 004f7d36
        ;   Label: LAB_004f7d36
    PUSH 0x5e6318                       ; 004f7d37 | = "CKeyActor"
        ;   Label: LAB_004f7d37
    MOV EBX,dword ptr [ESP + 0x340]     ; 004f7d3c
    PUSH EBX                            ; 004f7d43
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004f7d44
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f7d49
    TEST EAX,EAX                        ; 004f7d4c
    JZ 0x004f7df8                       ; 004f7d4e
        ;   XREF to: 004f7df8 (CONDITIONAL_JUMP)  ; LAB_004f7df8
    PUSH 0x5e6322                       ; 004f7d54 | = "With your guns put away, press "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f7d59
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f7d5e
    LEA EDI,[ESP + 0x200]               ; 004f7d61
    MOV ESI,EAX                         ; 004f7d68
    PUSH EDI                            ; 004f7d6a
    MOV AL,byte ptr [ESI]               ; 004f7d6b
        ;   Label: LAB_004f7d6b
    MOV byte ptr [EDI],AL               ; 004f7d6d
    CMP AL,0x0                          ; 004f7d6f
    JZ 0x004f7d83                       ; 004f7d71
        ;   XREF to: 004f7d83 (CONDITIONAL_JUMP)  ; LAB_004f7d83
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7d73
    ADD ESI,0x2                         ; 004f7d76
    MOV byte ptr [EDI + 0x1],AL         ; 004f7d79
    ADD EDI,0x2                         ; 004f7d7c
    CMP AL,0x0                          ; 004f7d7f
    JNZ 0x004f7d6b                      ; 004f7d81
        ;   XREF to: 004f7d6b (CONDITIONAL_JUMP)  ; LAB_004f7d6b
    POP EDI                             ; 004f7d83
        ;   Label: LAB_004f7d83
    MOV EAX,[0x0061d95c]                ; 004f7d84 | g_CGamePtr
    MOV ESI,dword ptr [EAX + 0x48]      ; 004f7d89 | g_CGameInstance.key_fire
    PUSH ESI                            ; 004f7d8c
    CALL core_menu.cpp_getKeyDisplayName_FUN_0050d220 ; 004f7d8d
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_0050d220(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004f7d92
    LEA EDI,[ESP + 0x200]               ; 004f7d95
    MOV ESI,EAX                         ; 004f7d9c
    PUSH EDI                            ; 004f7d9e
    SUB ECX,ECX                         ; 004f7d9f
    DEC ECX                             ; 004f7da1
    MOV AL,0x0                          ; 004f7da2
    SCASB.REPNE ES:EDI                  ; 004f7da4
    DEC EDI                             ; 004f7da6
    MOV AL,byte ptr [ESI]               ; 004f7da7
        ;   Label: LAB_004f7da7
    MOV byte ptr [EDI],AL               ; 004f7da9
    CMP AL,0x0                          ; 004f7dab
    JZ 0x004f7dbf                       ; 004f7dad
        ;   XREF to: 004f7dbf (CONDITIONAL_JUMP)  ; LAB_004f7dbf
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7daf
    ADD ESI,0x2                         ; 004f7db2
    MOV byte ptr [EDI + 0x1],AL         ; 004f7db5
    ADD EDI,0x2                         ; 004f7db8
    CMP AL,0x0                          ; 004f7dbb
    JNZ 0x004f7da7                      ; 004f7dbd
        ;   XREF to: 004f7da7 (CONDITIONAL_JUMP)  ; LAB_004f7da7
    POP EDI                             ; 004f7dbf
        ;   Label: LAB_004f7dbf
    PUSH 0x5e6342                       ; 004f7dc0 | = " to open a previously locked door."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f7dc5
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f7dca
    LEA EDI,[ESP + 0x200]               ; 004f7dcd
    MOV ESI,EAX                         ; 004f7dd4
    PUSH EDI                            ; 004f7dd6
    SUB ECX,ECX                         ; 004f7dd7
    DEC ECX                             ; 004f7dd9
    MOV AL,0x0                          ; 004f7dda
    SCASB.REPNE ES:EDI                  ; 004f7ddc
    DEC EDI                             ; 004f7dde
    MOV AL,byte ptr [ESI]               ; 004f7ddf
        ;   Label: LAB_004f7ddf
    MOV byte ptr [EDI],AL               ; 004f7de1
    CMP AL,0x0                          ; 004f7de3
    JZ 0x004f7df7                       ; 004f7de5
        ;   XREF to: 004f7df7 (CONDITIONAL_JUMP)  ; LAB_004f7df7
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7de7
    ADD ESI,0x2                         ; 004f7dea
    MOV byte ptr [EDI + 0x1],AL         ; 004f7ded
    ADD EDI,0x2                         ; 004f7df0
    CMP AL,0x0                          ; 004f7df3
    JNZ 0x004f7ddf                      ; 004f7df5
        ;   XREF to: 004f7ddf (CONDITIONAL_JUMP)  ; LAB_004f7ddf
    POP EDI                             ; 004f7df7
        ;   Label: LAB_004f7df7
    PUSH 0x5e6365                       ; 004f7df8 | = "CBoxActor"
        ;   Label: LAB_004f7df8
    MOV EDI,dword ptr [ESP + 0x340]     ; 004f7dfd
    PUSH EDI                            ; 004f7e04
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004f7e05
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f7e0a
    TEST EAX,EAX                        ; 004f7e0d
    JZ 0x004f7fa7                       ; 004f7e0f
        ;   XREF to: 004f7fa7 (CONDITIONAL_JUMP)  ; LAB_004f7fa7
    PUSH 0x5e636f                       ; 004f7e15 | = "Press "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f7e1a
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f7e1f
    LEA EDI,[ESP + 0x200]               ; 004f7e22
    MOV ESI,EAX                         ; 004f7e29
    PUSH EDI                            ; 004f7e2b
    MOV AL,byte ptr [ESI]               ; 004f7e2c
        ;   Label: LAB_004f7e2c
    MOV byte ptr [EDI],AL               ; 004f7e2e
    CMP AL,0x0                          ; 004f7e30
    JZ 0x004f7e44                       ; 004f7e32
        ;   XREF to: 004f7e44 (CONDITIONAL_JUMP)  ; LAB_004f7e44
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7e34
    ADD ESI,0x2                         ; 004f7e37
    MOV byte ptr [EDI + 0x1],AL         ; 004f7e3a
    ADD EDI,0x2                         ; 004f7e3d
    CMP AL,0x0                          ; 004f7e40
    JNZ 0x004f7e2c                      ; 004f7e42
        ;   XREF to: 004f7e2c (CONDITIONAL_JUMP)  ; LAB_004f7e2c
    POP EDI                             ; 004f7e44
        ;   Label: LAB_004f7e44
    MOV EAX,[0x0061d95c]                ; 004f7e45 | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x98]      ; 004f7e4a | g_CGameInstance.key_next_item
    PUSH EDX                            ; 004f7e50
    CALL core_menu.cpp_getKeyDisplayName_FUN_0050d220 ; 004f7e51
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_0050d220(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004f7e56
    LEA EDI,[ESP + 0x200]               ; 004f7e59
    MOV ESI,EAX                         ; 004f7e60
    PUSH EDI                            ; 004f7e62
    SUB ECX,ECX                         ; 004f7e63
    DEC ECX                             ; 004f7e65
    MOV AL,0x0                          ; 004f7e66
    SCASB.REPNE ES:EDI                  ; 004f7e68
    DEC EDI                             ; 004f7e6a
    MOV AL,byte ptr [ESI]               ; 004f7e6b
        ;   Label: LAB_004f7e6b
    MOV byte ptr [EDI],AL               ; 004f7e6d
    CMP AL,0x0                          ; 004f7e6f
    JZ 0x004f7e83                       ; 004f7e71
        ;   XREF to: 004f7e83 (CONDITIONAL_JUMP)  ; LAB_004f7e83
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7e73
    ADD ESI,0x2                         ; 004f7e76
    MOV byte ptr [EDI + 0x1],AL         ; 004f7e79
    ADD EDI,0x2                         ; 004f7e7c
    CMP AL,0x0                          ; 004f7e7f
    JNZ 0x004f7e6b                      ; 004f7e81
        ;   XREF to: 004f7e6b (CONDITIONAL_JUMP)  ; LAB_004f7e6b
    POP EDI                             ; 004f7e83
        ;   Label: LAB_004f7e83
    PUSH 0x5e6376                       ; 004f7e84 | = " and "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f7e89
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f7e8e
    LEA EDI,[ESP + 0x200]               ; 004f7e91
    MOV ESI,EAX                         ; 004f7e98
    PUSH EDI                            ; 004f7e9a
    SUB ECX,ECX                         ; 004f7e9b
    DEC ECX                             ; 004f7e9d
    MOV AL,0x0                          ; 004f7e9e
    SCASB.REPNE ES:EDI                  ; 004f7ea0
    DEC EDI                             ; 004f7ea2
    MOV AL,byte ptr [ESI]               ; 004f7ea3
        ;   Label: LAB_004f7ea3
    MOV byte ptr [EDI],AL               ; 004f7ea5
    CMP AL,0x0                          ; 004f7ea7
    JZ 0x004f7ebb                       ; 004f7ea9
        ;   XREF to: 004f7ebb (CONDITIONAL_JUMP)  ; LAB_004f7ebb
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7eab
    ADD ESI,0x2                         ; 004f7eae
    MOV byte ptr [EDI + 0x1],AL         ; 004f7eb1
    ADD EDI,0x2                         ; 004f7eb4
    CMP AL,0x0                          ; 004f7eb7
    JNZ 0x004f7ea3                      ; 004f7eb9
        ;   XREF to: 004f7ea3 (CONDITIONAL_JUMP)  ; LAB_004f7ea3
    POP EDI                             ; 004f7ebb
        ;   Label: LAB_004f7ebb
    MOV EAX,[0x0061d95c]                ; 004f7ebc | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x9c]      ; 004f7ec1 | g_CGameInstance.key_prev_item
    PUSH ECX                            ; 004f7ec7
    CALL core_menu.cpp_getKeyDisplayName_FUN_0050d220 ; 004f7ec8
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_0050d220(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004f7ecd
    LEA EDI,[ESP + 0x200]               ; 004f7ed0
    MOV ESI,EAX                         ; 004f7ed7
    PUSH EDI                            ; 004f7ed9
    SUB ECX,ECX                         ; 004f7eda
    DEC ECX                             ; 004f7edc
    MOV AL,0x0                          ; 004f7edd
    SCASB.REPNE ES:EDI                  ; 004f7edf
    DEC EDI                             ; 004f7ee1
    MOV AL,byte ptr [ESI]               ; 004f7ee2
        ;   Label: LAB_004f7ee2
    MOV byte ptr [EDI],AL               ; 004f7ee4
    CMP AL,0x0                          ; 004f7ee6
    JZ 0x004f7efa                       ; 004f7ee8
        ;   XREF to: 004f7efa (CONDITIONAL_JUMP)  ; LAB_004f7efa
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7eea
    ADD ESI,0x2                         ; 004f7eed
    MOV byte ptr [EDI + 0x1],AL         ; 004f7ef0
    ADD EDI,0x2                         ; 004f7ef3
    CMP AL,0x0                          ; 004f7ef6
    JNZ 0x004f7ee2                      ; 004f7ef8
        ;   XREF to: 004f7ee2 (CONDITIONAL_JUMP)  ; LAB_004f7ee2
    POP EDI                             ; 004f7efa
        ;   Label: LAB_004f7efa
    PUSH 0x5e637c                       ; 004f7efb | = " to cycle through your inventory.  Pr..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f7f00
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f7f05
    LEA EDI,[ESP + 0x200]               ; 004f7f08
    MOV ESI,EAX                         ; 004f7f0f
    PUSH EDI                            ; 004f7f11
    SUB ECX,ECX                         ; 004f7f12
    DEC ECX                             ; 004f7f14
    MOV AL,0x0                          ; 004f7f15
    SCASB.REPNE ES:EDI                  ; 004f7f17
    DEC EDI                             ; 004f7f19
    MOV AL,byte ptr [ESI]               ; 004f7f1a
        ;   Label: LAB_004f7f1a
    MOV byte ptr [EDI],AL               ; 004f7f1c
    CMP AL,0x0                          ; 004f7f1e
    JZ 0x004f7f32                       ; 004f7f20
        ;   XREF to: 004f7f32 (CONDITIONAL_JUMP)  ; LAB_004f7f32
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7f22
    ADD ESI,0x2                         ; 004f7f25
    MOV byte ptr [EDI + 0x1],AL         ; 004f7f28
    ADD EDI,0x2                         ; 004f7f2b
    CMP AL,0x0                          ; 004f7f2e
    JNZ 0x004f7f1a                      ; 004f7f30
        ;   XREF to: 004f7f1a (CONDITIONAL_JUMP)  ; LAB_004f7f1a
    POP EDI                             ; 004f7f32
        ;   Label: LAB_004f7f32
    MOV EAX,[0x0061d95c]                ; 004f7f33 | g_CGamePtr
    MOV EBX,dword ptr [EAX + 0x4c]      ; 004f7f38 | g_CGameInstance.key_use_item
    PUSH EBX                            ; 004f7f3b
    CALL core_menu.cpp_getKeyDisplayName_FUN_0050d220 ; 004f7f3c
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_0050d220(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004f7f41
    LEA EDI,[ESP + 0x200]               ; 004f7f44
    MOV ESI,EAX                         ; 004f7f4b
    PUSH EDI                            ; 004f7f4d
    SUB ECX,ECX                         ; 004f7f4e
    DEC ECX                             ; 004f7f50
    MOV AL,0x0                          ; 004f7f51
    SCASB.REPNE ES:EDI                  ; 004f7f53
    DEC EDI                             ; 004f7f55
    MOV AL,byte ptr [ESI]               ; 004f7f56
        ;   Label: LAB_004f7f56
    MOV byte ptr [EDI],AL               ; 004f7f58
    CMP AL,0x0                          ; 004f7f5a
    JZ 0x004f7f6e                       ; 004f7f5c
        ;   XREF to: 004f7f6e (CONDITIONAL_JUMP)  ; LAB_004f7f6e
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7f5e
    ADD ESI,0x2                         ; 004f7f61
    MOV byte ptr [EDI + 0x1],AL         ; 004f7f64
    ADD EDI,0x2                         ; 004f7f67
    CMP AL,0x0                          ; 004f7f6a
    JNZ 0x004f7f56                      ; 004f7f6c
        ;   XREF to: 004f7f56 (CONDITIONAL_JUMP)  ; LAB_004f7f56
    POP EDI                             ; 004f7f6e
        ;   Label: LAB_004f7f6e
    PUSH 0x5e63a6                       ; 004f7f6f | = " to use this item."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f7f74
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f7f79
    LEA EDI,[ESP + 0x200]               ; 004f7f7c
    MOV ESI,EAX                         ; 004f7f83
    PUSH EDI                            ; 004f7f85
    SUB ECX,ECX                         ; 004f7f86
    DEC ECX                             ; 004f7f88
    MOV AL,0x0                          ; 004f7f89
    SCASB.REPNE ES:EDI                  ; 004f7f8b
    DEC EDI                             ; 004f7f8d
    MOV AL,byte ptr [ESI]               ; 004f7f8e
        ;   Label: LAB_004f7f8e
    MOV byte ptr [EDI],AL               ; 004f7f90
    CMP AL,0x0                          ; 004f7f92
    JZ 0x004f7fa6                       ; 004f7f94
        ;   XREF to: 004f7fa6 (CONDITIONAL_JUMP)  ; LAB_004f7fa6
    MOV AL,byte ptr [ESI + 0x1]         ; 004f7f96
    ADD ESI,0x2                         ; 004f7f99
    MOV byte ptr [EDI + 0x1],AL         ; 004f7f9c
    ADD EDI,0x2                         ; 004f7f9f
    CMP AL,0x0                          ; 004f7fa2
    JNZ 0x004f7f8e                      ; 004f7fa4
        ;   XREF to: 004f7f8e (CONDITIONAL_JUMP)  ; LAB_004f7f8e
    POP EDI                             ; 004f7fa6
        ;   Label: LAB_004f7fa6
    PUSH 0x5e63b9                       ; 004f7fa7 | = "CAmmo"
        ;   Label: LAB_004f7fa7
    MOV ESI,dword ptr [ESP + 0x340]     ; 004f7fac
    PUSH ESI                            ; 004f7fb3
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004f7fb4
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f7fb9
    TEST EAX,EAX                        ; 004f7fbc
    JZ 0x004f81f0                       ; 004f7fbe
        ;   XREF to: 004f81f0 (CONDITIONAL_JUMP)  ; LAB_004f81f0
    MOV EDI,dword ptr [0x007c33a4]      ; 004f7fc4 | g_CAmmoClassInfo.name_hash
    PUSH EDI                            ; 004f7fca
    PUSH ESI                            ; 004f7fcb
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f7fcc
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f7fd1
    ADD EAX,0x2d4                       ; 004f7fd4
    PUSH EAX                            ; 004f7fd9
    CALL core_actor.cpp_createActorByName_FUN_0040c2b0 ; 004f7fda
        ;   XREF to: 0040c2b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c2b0(char * class_name)
    ADD ESP,0x4                         ; 004f7fdf
    PUSH 0x5e63bf                       ; 004f7fe2 | = "This ammo is for your "
    MOV EBX,EAX                         ; 004f7fe7
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f7fe9
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f7fee
    LEA EDI,[ESP + 0x200]               ; 004f7ff1
    MOV ESI,EAX                         ; 004f7ff8
    PUSH EDI                            ; 004f7ffa
    MOV AL,byte ptr [ESI]               ; 004f7ffb
        ;   Label: LAB_004f7ffb
    MOV byte ptr [EDI],AL               ; 004f7ffd
    CMP AL,0x0                          ; 004f7fff
    JZ 0x004f8013                       ; 004f8001
        ;   XREF to: 004f8013 (CONDITIONAL_JUMP)  ; LAB_004f8013
    MOV AL,byte ptr [ESI + 0x1]         ; 004f8003
    ADD ESI,0x2                         ; 004f8006
    MOV byte ptr [EDI + 0x1],AL         ; 004f8009
    ADD EDI,0x2                         ; 004f800c
    CMP AL,0x0                          ; 004f800f
    JNZ 0x004f7ffb                      ; 004f8011
        ;   XREF to: 004f7ffb (CONDITIONAL_JUMP)  ; LAB_004f7ffb
    POP EDI                             ; 004f8013
        ;   Label: LAB_004f8013
    PUSH EBX                            ; 004f8014
    CALL core_inv.cpp_getItemDisplayName_FUN_004f62e0 ; 004f8015
        ;   XREF to: 004f62e0 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDisplayName_FUN_004f62e0(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004f801a
    LEA EDI,[ESP + 0x200]               ; 004f801d
    MOV ESI,EAX                         ; 004f8024
    PUSH EDI                            ; 004f8026
    SUB ECX,ECX                         ; 004f8027
    DEC ECX                             ; 004f8029
    MOV AL,0x0                          ; 004f802a
    SCASB.REPNE ES:EDI                  ; 004f802c
    DEC EDI                             ; 004f802e
    MOV AL,byte ptr [ESI]               ; 004f802f
        ;   Label: LAB_004f802f
    MOV byte ptr [EDI],AL               ; 004f8031
    CMP AL,0x0                          ; 004f8033
    JZ 0x004f8047                       ; 004f8035
        ;   XREF to: 004f8047 (CONDITIONAL_JUMP)  ; LAB_004f8047
    MOV AL,byte ptr [ESI + 0x1]         ; 004f8037
    ADD ESI,0x2                         ; 004f803a
    MOV byte ptr [EDI + 0x1],AL         ; 004f803d
    ADD EDI,0x2                         ; 004f8040
    CMP AL,0x0                          ; 004f8043
    JNZ 0x004f802f                      ; 004f8045
        ;   XREF to: 004f802f (CONDITIONAL_JUMP)  ; LAB_004f802f
    POP EDI                             ; 004f8047
        ;   Label: LAB_004f8047
    PUSH 0x5e63d6                       ; 004f8048 | = ".  Select your "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f804d
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f8052
    LEA EDI,[ESP + 0x200]               ; 004f8055
    MOV ESI,EAX                         ; 004f805c
    PUSH EDI                            ; 004f805e
    SUB ECX,ECX                         ; 004f805f
    DEC ECX                             ; 004f8061
    MOV AL,0x0                          ; 004f8062
    SCASB.REPNE ES:EDI                  ; 004f8064
    DEC EDI                             ; 004f8066
    MOV AL,byte ptr [ESI]               ; 004f8067
        ;   Label: LAB_004f8067
    MOV byte ptr [EDI],AL               ; 004f8069
    CMP AL,0x0                          ; 004f806b
    JZ 0x004f807f                       ; 004f806d
        ;   XREF to: 004f807f (CONDITIONAL_JUMP)  ; LAB_004f807f
    MOV AL,byte ptr [ESI + 0x1]         ; 004f806f
    ADD ESI,0x2                         ; 004f8072
    MOV byte ptr [EDI + 0x1],AL         ; 004f8075
    ADD EDI,0x2                         ; 004f8078
    CMP AL,0x0                          ; 004f807b
    JNZ 0x004f8067                      ; 004f807d
        ;   XREF to: 004f8067 (CONDITIONAL_JUMP)  ; LAB_004f8067
    POP EDI                             ; 004f807f
        ;   Label: LAB_004f807f
    PUSH EBX                            ; 004f8080
    CALL core_inv.cpp_getItemDisplayName_FUN_004f62e0 ; 004f8081
        ;   XREF to: 004f62e0 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDisplayName_FUN_004f62e0(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004f8086
    LEA EDI,[ESP + 0x200]               ; 004f8089
    MOV ESI,EAX                         ; 004f8090
    PUSH EDI                            ; 004f8092
    SUB ECX,ECX                         ; 004f8093
    DEC ECX                             ; 004f8095
    MOV AL,0x0                          ; 004f8096
    SCASB.REPNE ES:EDI                  ; 004f8098
    DEC EDI                             ; 004f809a
    MOV AL,byte ptr [ESI]               ; 004f809b
        ;   Label: LAB_004f809b
    MOV byte ptr [EDI],AL               ; 004f809d
    CMP AL,0x0                          ; 004f809f
    JZ 0x004f80b3                       ; 004f80a1
        ;   XREF to: 004f80b3 (CONDITIONAL_JUMP)  ; LAB_004f80b3
    MOV AL,byte ptr [ESI + 0x1]         ; 004f80a3
    ADD ESI,0x2                         ; 004f80a6
    MOV byte ptr [EDI + 0x1],AL         ; 004f80a9
    ADD EDI,0x2                         ; 004f80ac
    CMP AL,0x0                          ; 004f80af
    JNZ 0x004f809b                      ; 004f80b1
        ;   XREF to: 004f809b (CONDITIONAL_JUMP)  ; LAB_004f809b
    POP EDI                             ; 004f80b3
        ;   Label: LAB_004f80b3
    PUSH 0x5e63e6                       ; 004f80b4 | = " with "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f80b9
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f80be
    LEA EDI,[ESP + 0x200]               ; 004f80c1
    MOV ESI,EAX                         ; 004f80c8
    PUSH EDI                            ; 004f80ca
    SUB ECX,ECX                         ; 004f80cb
    DEC ECX                             ; 004f80cd
    MOV AL,0x0                          ; 004f80ce
    SCASB.REPNE ES:EDI                  ; 004f80d0
    DEC EDI                             ; 004f80d2
    MOV AL,byte ptr [ESI]               ; 004f80d3
        ;   Label: LAB_004f80d3
    MOV byte ptr [EDI],AL               ; 004f80d5
    CMP AL,0x0                          ; 004f80d7
    JZ 0x004f80eb                       ; 004f80d9
        ;   XREF to: 004f80eb (CONDITIONAL_JUMP)  ; LAB_004f80eb
    MOV AL,byte ptr [ESI + 0x1]         ; 004f80db
    ADD ESI,0x2                         ; 004f80de
    MOV byte ptr [EDI + 0x1],AL         ; 004f80e1
    ADD EDI,0x2                         ; 004f80e4
    CMP AL,0x0                          ; 004f80e7
    JNZ 0x004f80d3                      ; 004f80e9
        ;   XREF to: 004f80d3 (CONDITIONAL_JUMP)  ; LAB_004f80d3
    POP EDI                             ; 004f80eb
        ;   Label: LAB_004f80eb
    MOV EAX,[0x0061d95c]                ; 004f80ec | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x90]      ; 004f80f1 | g_CGameInstance.key_next_weapon
    PUSH EDX                            ; 004f80f7
    CALL core_menu.cpp_getKeyDisplayName_FUN_0050d220 ; 004f80f8
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_0050d220(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004f80fd
    LEA EDI,[ESP + 0x200]               ; 004f8100
    MOV ESI,EAX                         ; 004f8107
    PUSH EDI                            ; 004f8109
    SUB ECX,ECX                         ; 004f810a
    DEC ECX                             ; 004f810c
    MOV AL,0x0                          ; 004f810d
    SCASB.REPNE ES:EDI                  ; 004f810f
    DEC EDI                             ; 004f8111
    MOV AL,byte ptr [ESI]               ; 004f8112
        ;   Label: LAB_004f8112
    MOV byte ptr [EDI],AL               ; 004f8114
    CMP AL,0x0                          ; 004f8116
    JZ 0x004f812a                       ; 004f8118
        ;   XREF to: 004f812a (CONDITIONAL_JUMP)  ; LAB_004f812a
    MOV AL,byte ptr [ESI + 0x1]         ; 004f811a
    ADD ESI,0x2                         ; 004f811d
    MOV byte ptr [EDI + 0x1],AL         ; 004f8120
    ADD EDI,0x2                         ; 004f8123
    CMP AL,0x0                          ; 004f8126
    JNZ 0x004f8112                      ; 004f8128
        ;   XREF to: 004f8112 (CONDITIONAL_JUMP)  ; LAB_004f8112
    POP EDI                             ; 004f812a
        ;   Label: LAB_004f812a
    PUSH 0x5e63ed                       ; 004f812b | = " and "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f8130
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f8135
    LEA EDI,[ESP + 0x200]               ; 004f8138
    MOV ESI,EAX                         ; 004f813f
    PUSH EDI                            ; 004f8141
    SUB ECX,ECX                         ; 004f8142
    DEC ECX                             ; 004f8144
    MOV AL,0x0                          ; 004f8145
    SCASB.REPNE ES:EDI                  ; 004f8147
    DEC EDI                             ; 004f8149
    MOV AL,byte ptr [ESI]               ; 004f814a
        ;   Label: LAB_004f814a
    MOV byte ptr [EDI],AL               ; 004f814c
    CMP AL,0x0                          ; 004f814e
    JZ 0x004f8162                       ; 004f8150
        ;   XREF to: 004f8162 (CONDITIONAL_JUMP)  ; LAB_004f8162
    MOV AL,byte ptr [ESI + 0x1]         ; 004f8152
    ADD ESI,0x2                         ; 004f8155
    MOV byte ptr [EDI + 0x1],AL         ; 004f8158
    ADD EDI,0x2                         ; 004f815b
    CMP AL,0x0                          ; 004f815e
    JNZ 0x004f814a                      ; 004f8160
        ;   XREF to: 004f814a (CONDITIONAL_JUMP)  ; LAB_004f814a
    POP EDI                             ; 004f8162
        ;   Label: LAB_004f8162
    MOV EAX,[0x0061d95c]                ; 004f8163 | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x94]      ; 004f8168 | g_CGameInstance.key_prev_weapon
    PUSH ECX                            ; 004f816e
    CALL core_menu.cpp_getKeyDisplayName_FUN_0050d220 ; 004f816f
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_0050d220(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004f8174
    LEA EDI,[ESP + 0x200]               ; 004f8177
    MOV ESI,EAX                         ; 004f817e
    PUSH EDI                            ; 004f8180
    SUB ECX,ECX                         ; 004f8181
    DEC ECX                             ; 004f8183
    MOV AL,0x0                          ; 004f8184
    SCASB.REPNE ES:EDI                  ; 004f8186
    DEC EDI                             ; 004f8188
    MOV AL,byte ptr [ESI]               ; 004f8189
        ;   Label: LAB_004f8189
    MOV byte ptr [EDI],AL               ; 004f818b
    CMP AL,0x0                          ; 004f818d
    JZ 0x004f81a1                       ; 004f818f
        ;   XREF to: 004f81a1 (CONDITIONAL_JUMP)  ; LAB_004f81a1
    MOV AL,byte ptr [ESI + 0x1]         ; 004f8191
    ADD ESI,0x2                         ; 004f8194
    MOV byte ptr [EDI + 0x1],AL         ; 004f8197
    ADD EDI,0x2                         ; 004f819a
    CMP AL,0x0                          ; 004f819d
    JNZ 0x004f8189                      ; 004f819f
        ;   XREF to: 004f8189 (CONDITIONAL_JUMP)  ; LAB_004f8189
    POP EDI                             ; 004f81a1
        ;   Label: LAB_004f81a1
    PUSH 0x5e63f3                       ; 004f81a2 | DAT_005e63f3
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f81a7
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f81ac
    LEA EDI,[ESP + 0x200]               ; 004f81af
    MOV ESI,EAX                         ; 004f81b6
    PUSH EDI                            ; 004f81b8
    SUB ECX,ECX                         ; 004f81b9
    DEC ECX                             ; 004f81bb
    MOV AL,0x0                          ; 004f81bc
    SCASB.REPNE ES:EDI                  ; 004f81be
    DEC EDI                             ; 004f81c0
    MOV AL,byte ptr [ESI]               ; 004f81c1
        ;   Label: LAB_004f81c1
    MOV byte ptr [EDI],AL               ; 004f81c3
    CMP AL,0x0                          ; 004f81c5
    JZ 0x004f81d9                       ; 004f81c7
        ;   XREF to: 004f81d9 (CONDITIONAL_JUMP)  ; LAB_004f81d9
    MOV AL,byte ptr [ESI + 0x1]         ; 004f81c9
    ADD ESI,0x2                         ; 004f81cc
    MOV byte ptr [EDI + 0x1],AL         ; 004f81cf
    ADD EDI,0x2                         ; 004f81d2
    CMP AL,0x0                          ; 004f81d5
    JNZ 0x004f81c1                      ; 004f81d7
        ;   XREF to: 004f81c1 (CONDITIONAL_JUMP)  ; LAB_004f81c1
    POP EDI                             ; 004f81d9
        ;   Label: LAB_004f81d9
    TEST EBX,EBX                        ; 004f81da
    JZ 0x004f81f0                       ; 004f81dc
        ;   XREF to: 004f81f0 (CONDITIONAL_JUMP)  ; LAB_004f81f0
    PUSH 0x2                            ; 004f81de
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f81e0
    PUSH EBX                            ; 004f81e6
    CALL dword ptr [EAX + 0xd0]         ; 004f81e7
    ADD ESP,0x8                         ; 004f81ed
    PUSH 0x5e63f5                       ; 004f81f0 | = "CWeapon"
        ;   Label: LAB_004f81f0
    MOV EBX,dword ptr [ESP + 0x340]     ; 004f81f5
    PUSH EBX                            ; 004f81fc
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 004f81fd
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f8202
    TEST EAX,EAX                        ; 004f8205
    JZ 0x004f83a9                       ; 004f8207
        ;   XREF to: 004f83a9 (CONDITIONAL_JUMP)  ; LAB_004f83a9
    MOV ESI,dword ptr [0x02c99770]      ; 004f820d | g_CWeaponClassInfo.name_hash
    PUSH ESI                            ; 004f8213
    PUSH EBX                            ; 004f8214
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f8215
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f821a
    PUSH 0x5e63fd                       ; 004f821d | = "Select your "
    MOV EBX,EAX                         ; 004f8222
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f8224
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f8229
    LEA EDI,[ESP + 0x200]               ; 004f822c
    MOV ESI,EAX                         ; 004f8233
    PUSH EDI                            ; 004f8235
    MOV AL,byte ptr [ESI]               ; 004f8236
        ;   Label: LAB_004f8236
    MOV byte ptr [EDI],AL               ; 004f8238
    CMP AL,0x0                          ; 004f823a
    JZ 0x004f824e                       ; 004f823c
        ;   XREF to: 004f824e (CONDITIONAL_JUMP)  ; LAB_004f824e
    MOV AL,byte ptr [ESI + 0x1]         ; 004f823e
    ADD ESI,0x2                         ; 004f8241
    MOV byte ptr [EDI + 0x1],AL         ; 004f8244
    ADD EDI,0x2                         ; 004f8247
    CMP AL,0x0                          ; 004f824a
    JNZ 0x004f8236                      ; 004f824c
        ;   XREF to: 004f8236 (CONDITIONAL_JUMP)  ; LAB_004f8236
    POP EDI                             ; 004f824e
        ;   Label: LAB_004f824e
    PUSH EBX                            ; 004f824f
    CALL core_inv.cpp_getItemDisplayName_FUN_004f62e0 ; 004f8250
        ;   XREF to: 004f62e0 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDisplayName_FUN_004f62e0(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004f8255
    LEA EDI,[ESP + 0x200]               ; 004f8258
    MOV ESI,EAX                         ; 004f825f
    PUSH EDI                            ; 004f8261
    SUB ECX,ECX                         ; 004f8262
    DEC ECX                             ; 004f8264
    MOV AL,0x0                          ; 004f8265
    SCASB.REPNE ES:EDI                  ; 004f8267
    DEC EDI                             ; 004f8269
    MOV AL,byte ptr [ESI]               ; 004f826a
        ;   Label: LAB_004f826a
    MOV byte ptr [EDI],AL               ; 004f826c
    CMP AL,0x0                          ; 004f826e
    JZ 0x004f8282                       ; 004f8270
        ;   XREF to: 004f8282 (CONDITIONAL_JUMP)  ; LAB_004f8282
    MOV AL,byte ptr [ESI + 0x1]         ; 004f8272
    ADD ESI,0x2                         ; 004f8275
    MOV byte ptr [EDI + 0x1],AL         ; 004f8278
    ADD EDI,0x2                         ; 004f827b
    CMP AL,0x0                          ; 004f827e
    JNZ 0x004f826a                      ; 004f8280
        ;   XREF to: 004f826a (CONDITIONAL_JUMP)  ; LAB_004f826a
    POP EDI                             ; 004f8282
        ;   Label: LAB_004f8282
    PUSH 0x5e640a                       ; 004f8283 | = " with "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f8288
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f828d
    LEA EDI,[ESP + 0x200]               ; 004f8290
    MOV ESI,EAX                         ; 004f8297
    PUSH EDI                            ; 004f8299
    SUB ECX,ECX                         ; 004f829a
    DEC ECX                             ; 004f829c
    MOV AL,0x0                          ; 004f829d
    SCASB.REPNE ES:EDI                  ; 004f829f
    DEC EDI                             ; 004f82a1
    MOV AL,byte ptr [ESI]               ; 004f82a2
        ;   Label: LAB_004f82a2
    MOV byte ptr [EDI],AL               ; 004f82a4
    CMP AL,0x0                          ; 004f82a6
    JZ 0x004f82ba                       ; 004f82a8
        ;   XREF to: 004f82ba (CONDITIONAL_JUMP)  ; LAB_004f82ba
    MOV AL,byte ptr [ESI + 0x1]         ; 004f82aa
    ADD ESI,0x2                         ; 004f82ad
    MOV byte ptr [EDI + 0x1],AL         ; 004f82b0
    ADD EDI,0x2                         ; 004f82b3
    CMP AL,0x0                          ; 004f82b6
    JNZ 0x004f82a2                      ; 004f82b8
        ;   XREF to: 004f82a2 (CONDITIONAL_JUMP)  ; LAB_004f82a2
    POP EDI                             ; 004f82ba
        ;   Label: LAB_004f82ba
    MOV EAX,[0x0061d95c]                ; 004f82bb | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x90]      ; 004f82c0 | g_CGameInstance.key_next_weapon
    PUSH EDX                            ; 004f82c6
    CALL core_menu.cpp_getKeyDisplayName_FUN_0050d220 ; 004f82c7
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_0050d220(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004f82cc
    LEA EDI,[ESP + 0x200]               ; 004f82cf
    MOV ESI,EAX                         ; 004f82d6
    PUSH EDI                            ; 004f82d8
    SUB ECX,ECX                         ; 004f82d9
    DEC ECX                             ; 004f82db
    MOV AL,0x0                          ; 004f82dc
    SCASB.REPNE ES:EDI                  ; 004f82de
    DEC EDI                             ; 004f82e0
    MOV AL,byte ptr [ESI]               ; 004f82e1
        ;   Label: LAB_004f82e1
    MOV byte ptr [EDI],AL               ; 004f82e3
    CMP AL,0x0                          ; 004f82e5
    JZ 0x004f82f9                       ; 004f82e7
        ;   XREF to: 004f82f9 (CONDITIONAL_JUMP)  ; LAB_004f82f9
    MOV AL,byte ptr [ESI + 0x1]         ; 004f82e9
    ADD ESI,0x2                         ; 004f82ec
    MOV byte ptr [EDI + 0x1],AL         ; 004f82ef
    ADD EDI,0x2                         ; 004f82f2
    CMP AL,0x0                          ; 004f82f5
    JNZ 0x004f82e1                      ; 004f82f7
        ;   XREF to: 004f82e1 (CONDITIONAL_JUMP)  ; LAB_004f82e1
    POP EDI                             ; 004f82f9
        ;   Label: LAB_004f82f9
    PUSH 0x5e6411                       ; 004f82fa | = " and "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f82ff
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f8304
    LEA EDI,[ESP + 0x200]               ; 004f8307
    MOV ESI,EAX                         ; 004f830e
    PUSH EDI                            ; 004f8310
    SUB ECX,ECX                         ; 004f8311
    DEC ECX                             ; 004f8313
    MOV AL,0x0                          ; 004f8314
    SCASB.REPNE ES:EDI                  ; 004f8316
    DEC EDI                             ; 004f8318
    MOV AL,byte ptr [ESI]               ; 004f8319
        ;   Label: LAB_004f8319
    MOV byte ptr [EDI],AL               ; 004f831b
    CMP AL,0x0                          ; 004f831d
    JZ 0x004f8331                       ; 004f831f
        ;   XREF to: 004f8331 (CONDITIONAL_JUMP)  ; LAB_004f8331
    MOV AL,byte ptr [ESI + 0x1]         ; 004f8321
    ADD ESI,0x2                         ; 004f8324
    MOV byte ptr [EDI + 0x1],AL         ; 004f8327
    ADD EDI,0x2                         ; 004f832a
    CMP AL,0x0                          ; 004f832d
    JNZ 0x004f8319                      ; 004f832f
        ;   XREF to: 004f8319 (CONDITIONAL_JUMP)  ; LAB_004f8319
    POP EDI                             ; 004f8331
        ;   Label: LAB_004f8331
    MOV EAX,[0x0061d95c]                ; 004f8332 | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x94]      ; 004f8337 | g_CGameInstance.key_prev_weapon
    PUSH ECX                            ; 004f833d
    CALL core_menu.cpp_getKeyDisplayName_FUN_0050d220 ; 004f833e
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_0050d220(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004f8343
    LEA EDI,[ESP + 0x200]               ; 004f8346
    MOV ESI,EAX                         ; 004f834d
    PUSH EDI                            ; 004f834f
    SUB ECX,ECX                         ; 004f8350
    DEC ECX                             ; 004f8352
    MOV AL,0x0                          ; 004f8353
    SCASB.REPNE ES:EDI                  ; 004f8355
    DEC EDI                             ; 004f8357
    MOV AL,byte ptr [ESI]               ; 004f8358
        ;   Label: LAB_004f8358
    MOV byte ptr [EDI],AL               ; 004f835a
    CMP AL,0x0                          ; 004f835c
    JZ 0x004f8370                       ; 004f835e
        ;   XREF to: 004f8370 (CONDITIONAL_JUMP)  ; LAB_004f8370
    MOV AL,byte ptr [ESI + 0x1]         ; 004f8360
    ADD ESI,0x2                         ; 004f8363
    MOV byte ptr [EDI + 0x1],AL         ; 004f8366
    ADD EDI,0x2                         ; 004f8369
    CMP AL,0x0                          ; 004f836c
    JNZ 0x004f8358                      ; 004f836e
        ;   XREF to: 004f8358 (CONDITIONAL_JUMP)  ; LAB_004f8358
    POP EDI                             ; 004f8370
        ;   Label: LAB_004f8370
    PUSH 0x5e6417                       ; 004f8371 | DAT_005e6417
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004f8376
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004f837b
    LEA EDI,[ESP + 0x200]               ; 004f837e
    MOV ESI,EAX                         ; 004f8385
    PUSH EDI                            ; 004f8387
    SUB ECX,ECX                         ; 004f8388
    DEC ECX                             ; 004f838a
    MOV AL,0x0                          ; 004f838b
    SCASB.REPNE ES:EDI                  ; 004f838d
    DEC EDI                             ; 004f838f
    MOV AL,byte ptr [ESI]               ; 004f8390
        ;   Label: LAB_004f8390
    MOV byte ptr [EDI],AL               ; 004f8392
    CMP AL,0x0                          ; 004f8394
    JZ 0x004f83a8                       ; 004f8396
        ;   XREF to: 004f83a8 (CONDITIONAL_JUMP)  ; LAB_004f83a8
    MOV AL,byte ptr [ESI + 0x1]         ; 004f8398
    ADD ESI,0x2                         ; 004f839b
    MOV byte ptr [EDI + 0x1],AL         ; 004f839e
    ADD EDI,0x2                         ; 004f83a1
    CMP AL,0x0                          ; 004f83a4
    JNZ 0x004f8390                      ; 004f83a6
        ;   XREF to: 004f8390 (CONDITIONAL_JUMP)  ; LAB_004f8390
    POP EDI                             ; 004f83a8
        ;   Label: LAB_004f83a8
    MOV EAX,ESP                         ; 004f83a9
        ;   Label: LAB_004f83a9
    PUSH 0x41200000                     ; 004f83ab
    PUSH EAX                            ; 004f83b0
    MOV EBX,dword ptr [0x0061d95c]      ; 004f83b1 | g_CGamePtr
    PUSH EBX                            ; 004f83b7 | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004f83b8
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004f83bd
    LEA EBX,[EBP + 0x354]               ; 004f83c0
    LEA ESI,[ESP + 0x200]               ; 004f83c6
    MOV EDI,EBX                         ; 004f83cd
    PUSH EDI                            ; 004f83cf
    MOV AL,byte ptr [ESI]               ; 004f83d0
        ;   Label: LAB_004f83d0
    MOV byte ptr [EDI],AL               ; 004f83d2
    CMP AL,0x0                          ; 004f83d4
    JZ 0x004f83e8                       ; 004f83d6
        ;   XREF to: 004f83e8 (CONDITIONAL_JUMP)  ; LAB_004f83e8
    MOV AL,byte ptr [ESI + 0x1]         ; 004f83d8
    ADD ESI,0x2                         ; 004f83db
    MOV byte ptr [EDI + 0x1],AL         ; 004f83de
    ADD EDI,0x2                         ; 004f83e1
    CMP AL,0x0                          ; 004f83e4
    JNZ 0x004f83d0                      ; 004f83e6
        ;   XREF to: 004f83d0 (CONDITIONAL_JUMP)  ; LAB_004f83d0
    POP EDI                             ; 004f83e8
        ;   Label: LAB_004f83e8
    PUSH EBX                            ; 004f83e9
    MOV ESI,dword ptr [0x0152d248]      ; 004f83ea | DAT_0152d248
    PUSH ESI                            ; 004f83f0
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0 ; 004f83f1
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004f83f6
    MOV dword ptr [ESP + 0x320],EAX     ; 004f83f9
    FILD dword ptr [ESP + 0x320]        ; 004f8400
    FMUL double ptr [0x005e6540]        ; 004f8407 | DAT_005e6540
    FSTP float ptr [EBP + 0x34c]        ; 004f840d
    MOV EDI,dword ptr [0x007c33a4]      ; 004f8413 | g_CAmmoClassInfo.name_hash
        ;   Label: LAB_004f8413
    PUSH EDI                            ; 004f8419
    MOV EAX,dword ptr [ESP + 0x340]     ; 004f841a
    PUSH EAX                            ; 004f8421
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f8422
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f8427
    MOV dword ptr [ESP + 0x310],EAX     ; 004f842a
    TEST EAX,EAX                        ; 004f8431
    JZ 0x004f8747                       ; 004f8433
        ;   XREF to: 004f8747 (CONDITIONAL_JUMP)  ; LAB_004f8747
    LEA EBX,[EAX + 0x2d4]               ; 004f8439
    PUSH EBX                            ; 004f843f
    PUSH EAX                            ; 004f8440
    XOR ESI,ESI                         ; 004f8441
    CALL core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ddd0 ; 004f8443
        ;   XREF to: 0040ddd0 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_CAmmo_setWeaponClass_FUN_0040ddd0(CAmmo * this_ptr, char * weapon_class_name)
    MOV EDX,dword ptr [EBP + 0x10]      ; 004f8448
    ADD ESP,0x8                         ; 004f844b
    TEST EDX,EDX                        ; 004f844e
    JLE 0x004f8483                      ; 004f8450
        ;   XREF to: 004f8483 (CONDITIONAL_JUMP)  ; LAB_004f8483
    MOV EDI,EBP                         ; 004f8452
    MOV dword ptr [ESP + 0x308],EBX     ; 004f8454
    MOV EDX,dword ptr [0x007c33a4]      ; 004f845b | g_CAmmoClassInfo.name_hash
        ;   Label: LAB_004f845b
    PUSH EDX                            ; 004f8461
    MOV ECX,dword ptr [EDI + 0x14]      ; 004f8462
    PUSH ECX                            ; 004f8465
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f8466
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 004f846b
    ADD ESP,0x8                         ; 004f846d
    TEST EAX,EAX                        ; 004f8470
    JNZ 0x004f85ce                      ; 004f8472
        ;   XREF to: 004f85ce (CONDITIONAL_JUMP)  ; LAB_004f85ce
    INC ESI                             ; 004f8478
        ;   Label: LAB_004f8478
    MOV ECX,dword ptr [EBP + 0x10]      ; 004f8479
    ADD EDI,0x4                         ; 004f847c
    CMP ESI,ECX                         ; 004f847f
    JL 0x004f845b                       ; 004f8481
        ;   XREF to: 004f845b (CONDITIONAL_JUMP)  ; LAB_004f845b
    MOV EDI,dword ptr [ESP + 0x310]     ; 004f8483
        ;   Label: LAB_004f8483
    MOV ESI,EBP                         ; 004f848a
    MOV EAX,dword ptr [EBP + 0x10]      ; 004f848c
    XOR EBX,EBX                         ; 004f848f
    ADD EDI,0x2d4                       ; 004f8491
    MOV dword ptr [ESP + 0x304],EBX     ; 004f8497
    TEST EAX,EAX                        ; 004f849e
    JLE 0x004f84c8                      ; 004f84a0
        ;   XREF to: 004f84c8 (CONDITIONAL_JUMP)  ; LAB_004f84c8
    MOV EDX,dword ptr [0x02c99770]      ; 004f84a2 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004f84a2
    PUSH EDX                            ; 004f84a8
    MOV ECX,dword ptr [ESI + 0x14]      ; 004f84a9
    PUSH ECX                            ; 004f84ac
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f84ad
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f84b2
    TEST EAX,EAX                        ; 004f84b5
    JNZ 0x004f865b                      ; 004f84b7
        ;   XREF to: 004f865b (CONDITIONAL_JUMP)  ; LAB_004f865b
    INC EBX                             ; 004f84bd
        ;   Label: LAB_004f84bd
    MOV EAX,dword ptr [EBP + 0x10]      ; 004f84be
    ADD ESI,0x4                         ; 004f84c1
    CMP EBX,EAX                         ; 004f84c4
    JL 0x004f84a2                       ; 004f84c6
        ;   XREF to: 004f84a2 (CONDITIONAL_JUMP)  ; LAB_004f84a2
    CMP dword ptr [ESP + 0x304],0x0     ; 004f84c8
        ;   Label: LAB_004f84c8
    JZ 0x004f8731                       ; 004f84d0
        ;   XREF to: 004f8731 (CONDITIONAL_JUMP)  ; LAB_004f8731
    MOV EAX,dword ptr [ESP + 0x310]     ; 004f84d6
        ;   Label: LAB_004f84d6
    MOV EDI,EBP                         ; 004f84dd
    MOV EBX,dword ptr [EBP + 0x10]      ; 004f84df
    ADD EAX,0x2d4                       ; 004f84e2
    XOR ESI,ESI                         ; 004f84e7
    MOV dword ptr [ESP + 0x30c],EAX     ; 004f84e9
    TEST EBX,EBX                        ; 004f84f0
    JLE 0x004f851b                      ; 004f84f2
        ;   XREF to: 004f851b (CONDITIONAL_JUMP)  ; LAB_004f851b
    MOV EAX,[0x02c99770]                ; 004f84f4 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004f84f4
    PUSH EAX                            ; 004f84f9
    MOV EDX,dword ptr [EDI + 0x14]      ; 004f84fa
    PUSH EDX                            ; 004f84fd
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f84fe
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 004f8503
    ADD ESP,0x8                         ; 004f8505
    TEST EAX,EAX                        ; 004f8508
    JNZ 0x004f867b                      ; 004f850a
        ;   XREF to: 004f867b (CONDITIONAL_JUMP)  ; LAB_004f867b
    INC ESI                             ; 004f8510
        ;   Label: LAB_004f8510
    MOV EBX,dword ptr [EBP + 0x10]      ; 004f8511
    ADD EDI,0x4                         ; 004f8514
    CMP ESI,EBX                         ; 004f8517
    JL 0x004f84f4                       ; 004f8519
        ;   XREF to: 004f84f4 (CONDITIONAL_JUMP)  ; LAB_004f84f4
    MOV ESI,dword ptr [ESP + 0x30c]     ; 004f851b
        ;   Label: LAB_004f851b
    PUSH ESI                            ; 004f8522
    CALL core_actor.cpp_createActorByName_FUN_0040c2b0 ; 004f8523
        ;   XREF to: 0040c2b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c2b0(char * class_name)
    ADD ESP,0x4                         ; 004f8528
    PUSH EAX                            ; 004f852b
    MOV EDI,dword ptr [0x0061f650]      ; 004f852c | DAT_0061f650
    PUSH EDI                            ; 004f8532 | DAT_01d2c900
    MOV EBX,EAX                         ; 004f8533
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60 ; 004f8535
        ;   XREF to: 0051bd60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004f853a
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f853d
    PUSH EBX                            ; 004f8543
    CALL dword ptr [EAX]                ; 004f8544
    ADD ESP,0x4                         ; 004f8546
    MOV EAX,dword ptr [ESP + 0x310]     ; 004f8549
    MOV EAX,dword ptr [EAX + 0x314]     ; 004f8550
    MOV dword ptr [EBX + 0x568],EAX     ; 004f8556
    MOV EAX,dword ptr [ESP + 0x310]     ; 004f855c
    MOV EAX,dword ptr [EAX + 0x318]     ; 004f8563
    MOV dword ptr [EBX + 0x56c],EAX     ; 004f8569
    MOV EDX,dword ptr [EBP + 0x4]       ; 004f856f
    PUSH EDX                            ; 004f8572
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f8573
    PUSH EBX                            ; 004f8579
    CALL dword ptr [EAX + 0x88]         ; 004f857a
    ADD ESP,0x8                         ; 004f8580
    MOV EAX,dword ptr [EBP + 0x10]      ; 004f8583
    PUSH 0x1                            ; 004f8586
    MOV ECX,dword ptr [ESP + 0x340]     ; 004f8588
    MOV dword ptr [EBP + EAX*0x4 + 0x14],EBX ; 004f858f
    PUSH ECX                            ; 004f8593
    MOV ESI,dword ptr [EBP + 0x10]      ; 004f8594
    MOV EBX,dword ptr [0x0061f650]      ; 004f8597 | DAT_0061f650
    INC ESI                             ; 004f859d
    PUSH EBX                            ; 004f859e | DAT_01d2c900
    MOV dword ptr [EBP + 0x10],ESI      ; 004f859f
    CALL core_mission.cpp_FUN_0051b740  ; 004f85a2
        ;   XREF to: 0051b740 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_0051b740()
    ADD ESP,0xc                         ; 004f85a7
    PUSH 0x5e6461                       ; 004f85aa | = "Found new type of ammo for existing w..."
    MOV EDI,dword ptr [0x00611100]      ; 004f85af | g_CConsolePtr
    PUSH EDI                            ; 004f85b5 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 004f85b6
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    MOV EAX,0x1                         ; 004f85bb
    ADD ESP,0x8                         ; 004f85c0
    ADD ESP,0x324                       ; 004f85c3
    POP EBP                             ; 004f85c9
    POP EDI                             ; 004f85ca
    POP ESI                             ; 004f85cb
    POP EBX                             ; 004f85cc
    RET                                 ; 004f85cd
    ADD EAX,0x2d4                       ; 004f85ce
        ;   Label: LAB_004f85ce
    PUSH EAX                            ; 004f85d3
    MOV EAX,dword ptr [ESP + 0x30c]     ; 004f85d4
    PUSH EAX                            ; 004f85db
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 004f85dc
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f85e1
    TEST EAX,EAX                        ; 004f85e4
    JNZ 0x004f8478                      ; 004f85e6
        ;   XREF to: 004f8478 (CONDITIONAL_JUMP)  ; LAB_004f8478
    MOV EAX,dword ptr [ESP + 0x310]     ; 004f85ec
    MOV EDX,dword ptr [EBX + 0x318]     ; 004f85f3
    CMP EDX,dword ptr [EAX + 0x318]     ; 004f85f9
    JNZ 0x004f8478                      ; 004f85ff
        ;   XREF to: 004f8478 (CONDITIONAL_JUMP)  ; LAB_004f8478
    MOV EAX,dword ptr [ESP + 0x310]     ; 004f8605
    MOV ECX,dword ptr [EBX + 0x314]     ; 004f860c
    ADD ECX,dword ptr [EAX + 0x314]     ; 004f8612
    PUSH 0x5e6419                       ; 004f8618 | = "Found existing ammo, but no weapon\n"
    MOV dword ptr [EBX + 0x314],ECX     ; 004f861d
    MOV EBX,dword ptr [0x00611100]      ; 004f8623 | g_CConsolePtr
    PUSH EBX                            ; 004f8629 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 004f862a
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004f862f
    PUSH 0x1                            ; 004f8632
    MOV ESI,dword ptr [ESP + 0x340]     ; 004f8634
    PUSH ESI                            ; 004f863b
    MOV EDI,dword ptr [0x0061f650]      ; 004f863c | DAT_0061f650
    PUSH EDI                            ; 004f8642 | DAT_01d2c900
    CALL core_mission.cpp_FUN_0051b740  ; 004f8643
        ;   XREF to: 0051b740 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_0051b740()
    MOV EAX,0x1                         ; 004f8648
    ADD ESP,0xc                         ; 004f864d
    ADD ESP,0x324                       ; 004f8650
    POP EBP                             ; 004f8656
    POP EDI                             ; 004f8657
    POP ESI                             ; 004f8658
    POP EBX                             ; 004f8659
    RET                                 ; 004f865a
    PUSH EAX                            ; 004f865b
        ;   Label: LAB_004f865b
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408830 ; 004f865c
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004f8661
    PUSH EAX                            ; 004f8664
    PUSH EDI                            ; 004f8665
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004f8666
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f866b
    TEST EAX,EAX                        ; 004f866e
    JNZ 0x004f84bd                      ; 004f8670
        ;   XREF to: 004f84bd (CONDITIONAL_JUMP)  ; LAB_004f84bd
    JMP 0x004f84d6                      ; 004f8676
        ;   XREF to: 004f84d6 (UNCONDITIONAL_JUMP)  ; LAB_004f84d6
    PUSH EAX                            ; 004f867b
        ;   Label: LAB_004f867b
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408830 ; 004f867c
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004f8681
    PUSH EAX                            ; 004f8684
    MOV ECX,dword ptr [ESP + 0x310]     ; 004f8685
    PUSH ECX                            ; 004f868c
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004f868d
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f8692
    TEST EAX,EAX                        ; 004f8695
    JNZ 0x004f8510                      ; 004f8697
        ;   XREF to: 004f8510 (CONDITIONAL_JUMP)  ; LAB_004f8510
    MOV EDX,dword ptr [ESP + 0x310]     ; 004f869d
    MOV EAX,dword ptr [EBX + 0x56c]     ; 004f86a4
    CMP EAX,dword ptr [EDX + 0x318]     ; 004f86aa
    JNZ 0x004f8510                      ; 004f86b0
        ;   XREF to: 004f8510 (CONDITIONAL_JUMP)  ; LAB_004f8510
    MOV EDI,dword ptr [0x02c8ad44]      ; 004f86b6 | g_CTommyGunClassInfo.name_hash
    MOV EAX,dword ptr [EDX + 0x314]     ; 004f86bc
    MOV ESI,dword ptr [EBX + 0x568]     ; 004f86c2
    PUSH EDI                            ; 004f86c8
    ADD ESI,EAX                         ; 004f86c9
    PUSH EBX                            ; 004f86cb
    MOV dword ptr [EBX + 0x568],ESI     ; 004f86cc
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f86d2
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f86d7
    TEST EAX,EAX                        ; 004f86da
    JZ 0x004f86f4                       ; 004f86dc
        ;   XREF to: 004f86f4 (CONDITIONAL_JUMP)  ; LAB_004f86f4
    CMP dword ptr [EAX + 0x568],0xc8    ; 004f86de
    JLE 0x004f86f4                      ; 004f86e8
        ;   XREF to: 004f86f4 (CONDITIONAL_JUMP)  ; LAB_004f86f4
    MOV dword ptr [EAX + 0x568],0xc8    ; 004f86ea
    PUSH 0x1                            ; 004f86f4
        ;   Label: LAB_004f86f4
    MOV EAX,dword ptr [ESP + 0x340]     ; 004f86f6
    PUSH EAX                            ; 004f86fd
    MOV EDX,dword ptr [0x0061f650]      ; 004f86fe | DAT_0061f650
    PUSH EDX                            ; 004f8704 | DAT_01d2c900
    CALL core_mission.cpp_FUN_0051b740  ; 004f8705
        ;   XREF to: 0051b740 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_0051b740()
    ADD ESP,0xc                         ; 004f870a
    PUSH 0x5e643d                       ; 004f870d | = "Found weapon to put this ammo into\n"
    MOV ECX,dword ptr [0x00611100]      ; 004f8712 | g_CConsolePtr
    PUSH ECX                            ; 004f8718 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 004f8719
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    MOV EAX,0x1                         ; 004f871e
    ADD ESP,0x8                         ; 004f8723
    ADD ESP,0x324                       ; 004f8726
    POP EBP                             ; 004f872c
    POP EDI                             ; 004f872d
    POP ESI                             ; 004f872e
    POP EBX                             ; 004f872f
    RET                                 ; 004f8730
    PUSH 0x5e64a8                       ; 004f8731 | = "CDynamite"
        ;   Label: LAB_004f8731
    PUSH EDI                            ; 004f8736
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 004f8737
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f873c
    TEST EAX,EAX                        ; 004f873f
    JZ 0x004f8821                       ; 004f8741
        ;   XREF to: 004f8821 (CONDITIONAL_JUMP)  ; LAB_004f8821
    MOV ESI,dword ptr [0x02c99770]      ; 004f8747 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004f8747
    PUSH ESI                            ; 004f874d
    MOV EDI,dword ptr [ESP + 0x340]     ; 004f874e
    PUSH EDI                            ; 004f8755
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f8756
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f875b
    MOV EDI,EAX                         ; 004f875e
    TEST EAX,EAX                        ; 004f8760
    JNZ 0x004f88b2                      ; 004f8762
        ;   XREF to: 004f88b2 (CONDITIONAL_JUMP)  ; LAB_004f88b2
    MOV EAX,dword ptr [EBP + 0x10]      ; 004f8768
        ;   Label: LAB_004f8768
    MOV EDX,dword ptr [ESP + 0x33c]     ; 004f876b
    MOV dword ptr [EBP + EAX*0x4 + 0x14],EDX ; 004f8772
    MOV EBX,dword ptr [EBP + 0x10]      ; 004f8776
    INC EBX                             ; 004f8779
    MOV ESI,dword ptr [EBP + 0x460]     ; 004f877a
    MOV dword ptr [EBP + 0x10],EBX      ; 004f8780
    TEST ESI,ESI                        ; 004f8783
    JNZ 0x004f879c                      ; 004f8785
        ;   XREF to: 004f879c (CONDITIONAL_JUMP)  ; LAB_004f879c
    MOV EAX,[0x01cd0e38]                ; 004f8787 | g_CGogglesClassInfo.name_hash
    PUSH EAX                            ; 004f878c
    PUSH EDX                            ; 004f878d
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f878e
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f8793
    MOV dword ptr [EBP + 0x460],EAX     ; 004f8796
    CMP dword ptr [EBP + 0x45c],0x0     ; 004f879c
        ;   Label: LAB_004f879c
    JNZ 0x004f87c2                      ; 004f87a3
        ;   XREF to: 004f87c2 (CONDITIONAL_JUMP)  ; LAB_004f87c2
    MOV EBX,dword ptr [0x01cd0d40]      ; 004f87a5 | g_CGasMaskClassInfo.name_hash
    PUSH EBX                            ; 004f87ab
    MOV ESI,dword ptr [ESP + 0x340]     ; 004f87ac
    PUSH ESI                            ; 004f87b3
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f87b4
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f87b9
    MOV dword ptr [EBP + 0x45c],EAX     ; 004f87bc
    MOV EAX,dword ptr [ESP + 0x33c]     ; 004f87c2
        ;   Label: LAB_004f87c2
    PUSH EAX                            ; 004f87c9
    MOV EDX,dword ptr [0x0061f650]      ; 004f87ca | DAT_0061f650
    PUSH EDX                            ; 004f87d0 | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_removeActorFromList_FUN_0051b1d0 ; 004f87d1
        ;   XREF to: 0051b1d0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeActorFromList_FUN_0051b1d0(CDemonMission * this_ptr, CDemonActor * actor_ptr)
    ADD ESP,0x8                         ; 004f87d6
    PUSH EBP                            ; 004f87d9
    MOV ECX,dword ptr [ESP + 0x340]     ; 004f87da
    MOV EAX,dword ptr [ESP + 0x340]     ; 004f87e1
    PUSH ECX                            ; 004f87e8
    MOV EAX,dword ptr [EAX + 0x154]     ; 004f87e9
    CALL dword ptr [EAX + 0x6c]         ; 004f87ef
    ADD ESP,0x8                         ; 004f87f2
    TEST EDI,EDI                        ; 004f87f5
    JZ 0x004f8811                       ; 004f87f7
        ;   XREF to: 004f8811 (CONDITIONAL_JUMP)  ; LAB_004f8811
    MOV EAX,dword ptr [EBP + 0x338]     ; 004f87f9
    TEST EAX,EAX                        ; 004f87ff
    JNZ 0x004f8811                      ; 004f8801
        ;   XREF to: 004f8811 (CONDITIONAL_JUMP)  ; LAB_004f8811
    PUSH 0x1                            ; 004f8803
    PUSH 0x5                            ; 004f8805
    PUSH EDI                            ; 004f8807
    PUSH EBP                            ; 004f8808
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004f8dc0 ; 004f8809
        ;   XREF to: 004f8dc0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004f8dc0(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004f880e
    MOV EAX,0x1                         ; 004f8811
        ;   Label: LAB_004f8811
    ADD ESP,0x324                       ; 004f8816
    POP EBP                             ; 004f881c
    POP EDI                             ; 004f881d
    POP ESI                             ; 004f881e
    POP EBX                             ; 004f881f
    RET                                 ; 004f8820
    PUSH 0x5e64b2                       ; 004f8821 | = "CDynamite"
        ;   Label: LAB_004f8821
    CALL core_actor.cpp_createActorByName_FUN_0040c2b0 ; 004f8826
        ;   XREF to: 0040c2b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c2b0(char * class_name)
    ADD ESP,0x4                         ; 004f882b
    PUSH EAX                            ; 004f882e
    MOV ECX,dword ptr [0x0061f650]      ; 004f882f | DAT_0061f650
    PUSH ECX                            ; 004f8835 | DAT_01d2c900
    MOV EBX,EAX                         ; 004f8836
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60 ; 004f8838
        ;   XREF to: 0051bd60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004f883d
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f8840
    PUSH EBX                            ; 004f8846
    CALL dword ptr [EAX]                ; 004f8847
    ADD ESP,0x4                         ; 004f8849
    MOV EAX,dword ptr [ESP + 0x310]     ; 004f884c
    MOV EAX,dword ptr [EAX + 0x314]     ; 004f8853
    MOV dword ptr [EBX + 0x568],EAX     ; 004f8859
    MOV ESI,dword ptr [EBP + 0x4]       ; 004f885f
    PUSH ESI                            ; 004f8862
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f8863
    PUSH EBX                            ; 004f8869
    CALL dword ptr [EAX + 0x88]         ; 004f886a
    ADD ESP,0x8                         ; 004f8870
    MOV EDI,dword ptr [ESP + 0x33c]     ; 004f8873
    PUSH EDI                            ; 004f887a
    CALL core_actor.cpp_FUN_00408560    ; 004f887b
        ;   XREF to: 00408560 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408560()
    ADD ESP,0x4                         ; 004f8880
    PUSH 0x5e64bc                       ; 004f8883 | = "Found dynamite.  Creating weapon for ..."
    MOV EAX,[0x00611100]                ; 004f8888 | g_CConsolePtr
    PUSH EAX                            ; 004f888d | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 004f888e
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004f8893
    PUSH 0x1                            ; 004f8896
    PUSH EBX                            ; 004f8898
    PUSH EBP                            ; 004f8899
    CALL core_inv.cpp_FUN_004f7690      ; 004f889a
        ;   XREF to: 004f7690 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004f7690(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    MOV EAX,0x1                         ; 004f889f
    ADD ESP,0xc                         ; 004f88a4
    ADD ESP,0x324                       ; 004f88a7
    POP EBP                             ; 004f88ad
    POP EDI                             ; 004f88ae
    POP ESI                             ; 004f88af
    POP EBX                             ; 004f88b0
    RET                                 ; 004f88b1
    MOV EDX,dword ptr [0x01d1e2dc]      ; 004f88b2 | g_CMeleeClassInfo.name_hash
        ;   Label: LAB_004f88b2
    PUSH EDX                            ; 004f88b8
    PUSH EAX                            ; 004f88b9
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f88ba
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f88bf
    TEST EAX,EAX                        ; 004f88c2
    JNZ 0x004f89a2                      ; 004f88c4
        ;   XREF to: 004f89a2 (CONDITIONAL_JUMP)  ; LAB_004f89a2
    MOV ECX,dword ptr [EBP + 0x10]      ; 004f88ca
    XOR ESI,ESI                         ; 004f88cd
    TEST ECX,ECX                        ; 004f88cf
    JLE 0x004f8916                      ; 004f88d1
        ;   XREF to: 004f8916 (CONDITIONAL_JUMP)  ; LAB_004f8916
    MOV dword ptr [ESP + 0x314],EBP     ; 004f88d3
    MOV EAX,[0x02c99770]                ; 004f88da | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004f88da
    PUSH EAX                            ; 004f88df
    MOV EAX,dword ptr [ESP + 0x318]     ; 004f88e0
    MOV EDX,dword ptr [EAX + 0x14]      ; 004f88e7
    PUSH EDX                            ; 004f88ea
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f88eb
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 004f88f0
    ADD ESP,0x8                         ; 004f88f2
    TEST EAX,EAX                        ; 004f88f5
    JNZ 0x004f89ed                      ; 004f88f7
        ;   XREF to: 004f89ed (CONDITIONAL_JUMP)  ; LAB_004f89ed
    MOV EAX,dword ptr [ESP + 0x314]     ; 004f88fd
        ;   Label: LAB_004f88fd
    INC ESI                             ; 004f8904
    ADD EAX,0x4                         ; 004f8905
    MOV EDX,dword ptr [EBP + 0x10]      ; 004f8908
    MOV dword ptr [ESP + 0x314],EAX     ; 004f890b
    CMP ESI,EDX                         ; 004f8912
    JL 0x004f88da                       ; 004f8914
        ;   XREF to: 004f88da (CONDITIONAL_JUMP)  ; LAB_004f88da
    XOR EBX,EBX                         ; 004f8916
        ;   Label: LAB_004f8916
    MOV ESI,dword ptr [EBP + 0x10]      ; 004f8918
    MOV dword ptr [ESP + 0x318],EBX     ; 004f891b
    TEST ESI,ESI                        ; 004f8922
    JLE 0x004f8978                      ; 004f8924
        ;   XREF to: 004f8978 (CONDITIONAL_JUMP)  ; LAB_004f8978
    MOV dword ptr [ESP + 0x31c],EBP     ; 004f8926
    MOV ESI,dword ptr [0x007c33a4]      ; 004f892d | g_CAmmoClassInfo.name_hash
        ;   Label: LAB_004f892d
    MOV EAX,dword ptr [ESP + 0x31c]     ; 004f8933
    PUSH ESI                            ; 004f893a
    MOV EDX,dword ptr [EAX + 0x14]      ; 004f893b
    PUSH EDX                            ; 004f893e
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f893f
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 004f8944
    ADD ESP,0x8                         ; 004f8946
    TEST EAX,EAX                        ; 004f8949
    JNZ 0x004f8a9d                      ; 004f894b
        ;   XREF to: 004f8a9d (CONDITIONAL_JUMP)  ; LAB_004f8a9d
    MOV ESI,dword ptr [ESP + 0x31c]     ; 004f8951
        ;   Label: LAB_004f8951
    MOV EAX,dword ptr [ESP + 0x318]     ; 004f8958
    MOV EDX,dword ptr [EBP + 0x10]      ; 004f895f
    ADD ESI,0x4                         ; 004f8962
    INC EAX                             ; 004f8965
    MOV dword ptr [ESP + 0x31c],ESI     ; 004f8966
    MOV dword ptr [ESP + 0x318],EAX     ; 004f896d
    CMP EAX,EDX                         ; 004f8974
    JL 0x004f892d                       ; 004f8976
        ;   XREF to: 004f892d (CONDITIONAL_JUMP)  ; LAB_004f892d
    TEST EBX,EBX                        ; 004f8978
        ;   Label: LAB_004f8978
    JZ 0x004f8768                       ; 004f897a
        ;   XREF to: 004f8768 (CONDITIONAL_JUMP)  ; LAB_004f8768
    PUSH 0x1                            ; 004f8980
    PUSH EDI                            ; 004f8982
    MOV ECX,dword ptr [0x0061f650]      ; 004f8983 | DAT_0061f650
    PUSH ECX                            ; 004f8989 | DAT_01d2c900
    CALL core_mission.cpp_FUN_0051b740  ; 004f898a
        ;   XREF to: 0051b740 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_0051b740()
    MOV EAX,0x1                         ; 004f898f
    ADD ESP,0xc                         ; 004f8994
    ADD ESP,0x324                       ; 004f8997
    POP EBP                             ; 004f899d
    POP EDI                             ; 004f899e
    POP ESI                             ; 004f899f
    POP EBX                             ; 004f89a0
    RET                                 ; 004f89a1
    PUSH 0x0                            ; 004f89a2
        ;   Label: LAB_004f89a2
    MOV EDX,dword ptr [ESP + 0x340]     ; 004f89a4
    MOV EAX,dword ptr [EBP + 0x10]      ; 004f89ab
    PUSH EDX                            ; 004f89ae
    MOV dword ptr [EBP + EAX*0x4 + 0x14],EDX ; 004f89af
    MOV ESI,dword ptr [0x0061f650]      ; 004f89b3 | DAT_0061f650
    MOV EDI,dword ptr [EBP + 0x10]      ; 004f89b9
    PUSH ESI                            ; 004f89bc | DAT_01d2c900
    INC EDI                             ; 004f89bd
    MOV EBX,EDX                         ; 004f89be
    MOV dword ptr [EBP + 0x10],EDI      ; 004f89c0
    CALL core_mission.cpp_FUN_0051b740  ; 004f89c3
        ;   XREF to: 0051b740 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_0051b740()
    ADD ESP,0xc                         ; 004f89c8
    MOV EAX,EBX                         ; 004f89cb
    PUSH EBP                            ; 004f89cd
    MOV EBP,EBX                         ; 004f89ce
    MOV EAX,dword ptr [EAX + 0x154]     ; 004f89d0
    PUSH EBP                            ; 004f89d6
    CALL dword ptr [EAX + 0x6c]         ; 004f89d7
    MOV EAX,0x1                         ; 004f89da
    ADD ESP,0x8                         ; 004f89df
    ADD ESP,0x324                       ; 004f89e2
    POP EBP                             ; 004f89e8
    POP EDI                             ; 004f89e9
    POP ESI                             ; 004f89ea
    POP EBX                             ; 004f89eb
    RET                                 ; 004f89ec
    PUSH EAX                            ; 004f89ed
        ;   Label: LAB_004f89ed
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408830 ; 004f89ee
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004f89f3
    PUSH EAX                            ; 004f89f6
    PUSH EDI                            ; 004f89f7
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408830 ; 004f89f8
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004f89fd
    PUSH EAX                            ; 004f8a00
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 004f8a01
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f8a06
    TEST EAX,EAX                        ; 004f8a09
    JNZ 0x004f88fd                      ; 004f8a0b
        ;   XREF to: 004f88fd (CONDITIONAL_JUMP)  ; LAB_004f88fd
    MOV ECX,dword ptr [EBX + 0x56c]     ; 004f8a11
    CMP ECX,dword ptr [EDI + 0x56c]     ; 004f8a17
    JNZ 0x004f88fd                      ; 004f8a1d
        ;   XREF to: 004f88fd (CONDITIONAL_JUMP)  ; LAB_004f88fd
    MOV EAX,dword ptr [EDI + 0x568]     ; 004f8a23
    MOV EDI,dword ptr [0x02c8ad44]      ; 004f8a29 | g_CTommyGunClassInfo.name_hash
    MOV ESI,dword ptr [EBX + 0x568]     ; 004f8a2f
    PUSH EDI                            ; 004f8a35
    ADD ESI,EAX                         ; 004f8a36
    PUSH EBX                            ; 004f8a38
    MOV dword ptr [EBX + 0x568],ESI     ; 004f8a39
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004f8a3f
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f8a44
    TEST EAX,EAX                        ; 004f8a47
    JZ 0x004f8a61                       ; 004f8a49
        ;   XREF to: 004f8a61 (CONDITIONAL_JUMP)  ; LAB_004f8a61
    CMP dword ptr [EAX + 0x568],0xc8    ; 004f8a4b
    JLE 0x004f8a61                      ; 004f8a55
        ;   XREF to: 004f8a61 (CONDITIONAL_JUMP)  ; LAB_004f8a61
    MOV dword ptr [EAX + 0x568],0xc8    ; 004f8a57
    PUSH 0x5e64e6                       ; 004f8a61 | = "Found same weapon, increasing ammoCou..."
        ;   Label: LAB_004f8a61
    MOV EAX,[0x00611100]                ; 004f8a66 | g_CConsolePtr
    PUSH EAX                            ; 004f8a6b | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 004f8a6c
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004f8a71
    PUSH 0x1                            ; 004f8a74
    MOV EDX,dword ptr [ESP + 0x340]     ; 004f8a76
    PUSH EDX                            ; 004f8a7d
    MOV ECX,dword ptr [0x0061f650]      ; 004f8a7e | DAT_0061f650
    PUSH ECX                            ; 004f8a84 | DAT_01d2c900
    CALL core_mission.cpp_FUN_0051b740  ; 004f8a85
        ;   XREF to: 0051b740 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_0051b740()
    MOV EAX,0x1                         ; 004f8a8a
    ADD ESP,0xc                         ; 004f8a8f
    ADD ESP,0x324                       ; 004f8a92
    POP EBP                             ; 004f8a98
    POP EDI                             ; 004f8a99
    POP ESI                             ; 004f8a9a
    POP EBX                             ; 004f8a9b
    RET                                 ; 004f8a9c
    PUSH EDI                            ; 004f8a9d
        ;   Label: LAB_004f8a9d
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408830 ; 004f8a9e
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004f8aa3
    PUSH EAX                            ; 004f8aa6
    LEA EAX,[ESI + 0x2d4]               ; 004f8aa7
    PUSH EAX                            ; 004f8aad
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 004f8aae
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f8ab3
    TEST EAX,EAX                        ; 004f8ab6
    JNZ 0x004f8951                      ; 004f8ab8
        ;   XREF to: 004f8951 (CONDITIONAL_JUMP)  ; LAB_004f8951
    PUSH EDI                            ; 004f8abe
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408830 ; 004f8abf
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004f8ac4
    PUSH EAX                            ; 004f8ac7
    CALL core_actor.cpp_createActorByName_FUN_0040c2b0 ; 004f8ac8
        ;   XREF to: 0040c2b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c2b0(char * class_name)
    ADD ESP,0x4                         ; 004f8acd
    PUSH EAX                            ; 004f8ad0
    MOV ECX,dword ptr [0x0061f650]      ; 004f8ad1 | DAT_0061f650
    PUSH ECX                            ; 004f8ad7 | DAT_01d2c900
    MOV EBX,EAX                         ; 004f8ad8
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60 ; 004f8ada
        ;   XREF to: 0051bd60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004f8adf
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f8ae2
    PUSH EBX                            ; 004f8ae8
    CALL dword ptr [EAX]                ; 004f8ae9
    MOV EAX,dword ptr [ESI + 0x314]     ; 004f8aeb
    MOV dword ptr [EBX + 0x568],EAX     ; 004f8af1
    MOV EAX,dword ptr [ESI + 0x318]     ; 004f8af7
    MOV dword ptr [EBX + 0x56c],EAX     ; 004f8afd
    ADD ESP,0x4                         ; 004f8b03
    MOV ESI,dword ptr [EBP + 0x4]       ; 004f8b06
    PUSH ESI                            ; 004f8b09
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f8b0a
    PUSH EBX                            ; 004f8b10
    CALL dword ptr [EAX + 0x88]         ; 004f8b11
    ADD ESP,0x8                         ; 004f8b17
    PUSH EBP                            ; 004f8b1a
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f8b1b
    PUSH EBX                            ; 004f8b21
    CALL dword ptr [EAX + 0x6c]         ; 004f8b22
    ADD ESP,0x8                         ; 004f8b25
    MOV EAX,dword ptr [ESP + 0x31c]     ; 004f8b28
    MOV EDX,dword ptr [EAX + 0x14]      ; 004f8b2f
    PUSH EDX                            ; 004f8b32
    CALL core_actor.cpp_FUN_00408560    ; 004f8b33
        ;   XREF to: 00408560 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408560()
    ADD ESP,0x4                         ; 004f8b38
    MOV EAX,dword ptr [ESP + 0x31c]     ; 004f8b3b
    PUSH EDI                            ; 004f8b42
    MOV dword ptr [EAX + 0x14],EBX      ; 004f8b43
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408830 ; 004f8b46
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004f8b4b
    PUSH EAX                            ; 004f8b4e
    PUSH 0x5e650f                       ; 004f8b4f | = "Converting existing ammo for %s to we..."
    MOV ECX,dword ptr [0x00611100]      ; 004f8b54 | g_CConsolePtr
    PUSH ECX                            ; 004f8b5a | g_CConsoleInstance
    MOV EBX,0x1                         ; 004f8b5b
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 004f8b60
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004f8b65
    JMP 0x004f8951                      ; 004f8b68
        ;   XREF to: 004f8951 (UNCONDITIONAL_JUMP)  ; LAB_004f8951

