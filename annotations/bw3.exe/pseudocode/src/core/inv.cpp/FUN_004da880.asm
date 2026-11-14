; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_inv_cpp_FUN_004da880(CInventory *this_ptr,CDemonActor *item_actor,int show_tutorial_message)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   item_actor
; int              Stack[0xc]:4   show_tutorial_message
; Local Variables:
; undefined1       Stack[-0x33c]:1  local_33c
; undefined1       Stack[-0x33b]:1  local_33b
; undefined        Stack[-0x23c]:1  local_23c
; undefined1       Stack[-0x23b]:1  local_23b
; undefined        Stack[-0x13c]:1  local_13c
; undefined1       Stack[-0x13b]:1  local_13b
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[8]:
;   core_ammobox.cpp_CAmmoBox_addToInventory_FUN_0040e720 at 0040e744
;   core_game.cpp_CGame_processCheatCodes_FUN_004bb100 at 004bbbbb
;   core_game.cpp_giveHeroWeapon_FUN_004bafd0 at 004bb054
;   core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004d41a0 at 004d41cc
;   core_hero.cpp_FUN_004d3e20 at 004d4016
;   core_inv.cpp_FUN_004db8d0 at 004db974
;   core_prye.cpp_CPrye_createDefaultWeapon_FUN_00518430 at 005184b8
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052b3eb
;
; Referenced Globals:
;   TerminatedCString s_wp_getmana_wav_005c5fe2
;   TerminatedCString s_wp_getammo_wav_005c5ff1
;   TerminatedCString s_You_ve_found_005c6000
;   undefined4 DAT_005c6010
;   TerminatedCString s_bullets_005c6014
;   undefined4 s_ullets_005c6014+1
;   undefined4 s_llets_005c6014+2
;   undefined4 s_lets_005c6014+3
;   undefined1 DAT_005c601c
;   undefined1 DAT_005c601d
;   TerminatedCString s_You_ve_received_d_health_005c6021
;   TerminatedCString s_CHealthItem_005c603d
;   TerminatedCString s_Press_005c6049
;   TerminatedCString s_and_005c6050
;   TerminatedCString s_to_cycle_through_your_in_005c6056
;   ... and 43 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870
;   core_actor.cpp_createActorByName_FUN_0040c4f0
;   core_actor.cpp_FUN_004085a0
;   core_actor.cpp_isOfClass_FUN_0040c790
;   core_game.cpp_CGame_displayMessage_FUN_004b46b0
;   core_health.cpp_FUN_004d20c0
;   core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40
;   core_inv.cpp_getItemDescription_FUN_004d9eb0
;   core_inv.cpp_getItemDisplayName_FUN_004d9e40
;   core_menu.cpp_getKeyDisplayName_FUN_004eaa60
;   core_mission.cpp_CDemonMission_generateActorName_FUN_004f7530
;   core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10
;   core_mission.cpp_CDemonMission_removeActorFromList_FUN_004f69a0
;   core_sound.cpp_CSound_playActorSound_FUN_005609d0
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004da880
        ;   Label: core_inv.cpp_FUN_004da880
    PUSH ESI                            ; 004da881
    PUSH EDI                            ; 004da882
    PUSH EBP                            ; 004da883
    SUB ESP,0x32c                       ; 004da884
    MOV EBP,dword ptr [ESP + 0x340]     ; 004da88a
    MOV EDX,dword ptr [0x007dfd24]      ; 004da891 | g_CAmmoClassInfo.name_hash
    PUSH EDX                            ; 004da897
    MOV ECX,dword ptr [ESP + 0x348]     ; 004da898
    PUSH ECX                            ; 004da89f
    MOV EBX,0x1                         ; 004da8a0
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004da8a5
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 004da8aa
    ADD ESP,0x8                         ; 004da8ac
    TEST EAX,EAX                        ; 004da8af
    JNZ 0x004db2cd                      ; 004da8b1
        ;   XREF to: 004db2cd (CONDITIONAL_JUMP)  ; LAB_004db2cd
    MOV EDI,dword ptr [0x01d5b9b4]      ; 004da8b7 | g_CHealthItemClassInfo.name_hash
        ;   Label: LAB_004da8b7
    PUSH EDI                            ; 004da8bd
    MOV EAX,dword ptr [ESP + 0x348]     ; 004da8be
    PUSH EAX                            ; 004da8c5
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004da8c6
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004da8cb
    MOV ESI,EAX                         ; 004da8ce
    MOV dword ptr [ESP + 0x304],EAX     ; 004da8d0
    TEST EAX,EAX                        ; 004da8d7
    JZ 0x004db380                       ; 004da8d9
        ;   XREF to: 004db380 (CONDITIONAL_JUMP)  ; LAB_004db380
    CMP dword ptr [EAX + 0x2e0],0x0     ; 004da8df
    JZ 0x004db380                       ; 004da8e6
        ;   XREF to: 004db380 (CONDITIONAL_JUMP)  ; LAB_004db380
    MOV EAX,[0x01d5ba70]                ; 004da8ec | g_CHeroClassInfo.name_hash
    PUSH EAX                            ; 004da8f1
    MOV EDX,dword ptr [EBP + 0x4]       ; 004da8f2
    PUSH EDX                            ; 004da8f5
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004da8f6
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004da8fb
    TEST EAX,EAX                        ; 004da8fe
    JZ 0x004da90c                       ; 004da900
        ;   XREF to: 004da90c (CONDITIONAL_JUMP)  ; LAB_004da90c
    PUSH EAX                            ; 004da902
    PUSH ESI                            ; 004da903
    CALL core_health.cpp_FUN_004d20c0   ; 004da904
        ;   XREF to: 004d20c0 (UNCONDITIONAL_CALL)  ; undefined core_health.cpp_FUN_004d20c0()
    ADD ESP,0x8                         ; 004da909
    XOR EBX,EBX                         ; 004da90c
        ;   Label: LAB_004da90c
    MOV EAX,[0x01d5ba14]                ; 004da90e | DAT_01d5ba14
        ;   Label: LAB_004da90e
    MOV EDX,dword ptr [EBP + 0x4]       ; 004da913
    CMP EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004da916
    JNZ 0x004db104                      ; 004da91d
        ;   XREF to: 004db104 (CONDITIONAL_JUMP)  ; LAB_004db104
    CMP dword ptr [ESP + 0x348],0x0     ; 004da923
    JZ 0x004db104                       ; 004da92b
        ;   XREF to: 004db104 (CONDITIONAL_JUMP)  ; LAB_004db104
    MOV EAX,[0x005fe9dc]                ; 004da931 | g_CGamePtr
    CMP dword ptr [EAX + 0x24c],0x0     ; 004da936 | g_CGameInstance.letterbox_mode
    JNZ 0x004db104                      ; 004da93d
        ;   XREF to: 004db104 (CONDITIONAL_JUMP)  ; LAB_004db104
    MOV EAX,dword ptr [ESP + 0x344]     ; 004da943
    PUSH EAX                            ; 004da94a
    CALL core_inv.cpp_getItemDisplayName_FUN_004d9e40 ; 004da94b
        ;   XREF to: 004d9e40 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDisplayName_FUN_004d9e40(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004da950
    MOV EDX,dword ptr [ESP + 0x344]     ; 004da953
    PUSH EDX                            ; 004da95a
    MOV dword ptr [ESP + 0x304],EAX     ; 004da95b
    CALL core_inv.cpp_getItemDescription_FUN_004d9eb0 ; 004da962
        ;   XREF to: 004d9eb0 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDescription_FUN_004d9eb0(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004da967
    PUSH 0x5c6000                       ; 004da96a | = "You've found : "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004da96f
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004da974
    LEA EDI,[ESP + 0x100]               ; 004da977
    MOV ESI,EAX                         ; 004da97e
    PUSH EDI                            ; 004da980
    MOV AL,byte ptr [ESI]               ; 004da981
        ;   Label: LAB_004da981
    MOV byte ptr [EDI],AL               ; 004da983
    CMP AL,0x0                          ; 004da985
    JZ 0x004da999                       ; 004da987
        ;   XREF to: 004da999 (CONDITIONAL_JUMP)  ; LAB_004da999
    MOV AL,byte ptr [ESI + 0x1]         ; 004da989
    ADD ESI,0x2                         ; 004da98c
    MOV byte ptr [EDI + 0x1],AL         ; 004da98f
    ADD EDI,0x2                         ; 004da992
    CMP AL,0x0                          ; 004da995
    JNZ 0x004da981                      ; 004da997
        ;   XREF to: 004da981 (CONDITIONAL_JUMP)  ; LAB_004da981
    POP EDI                             ; 004da999
        ;   Label: LAB_004da999
    MOV ECX,dword ptr [0x007dfd24]      ; 004da99a | g_CAmmoClassInfo.name_hash
    PUSH ECX                            ; 004da9a0
    MOV ESI,dword ptr [ESP + 0x348]     ; 004da9a1
    PUSH ESI                            ; 004da9a8
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004da9a9
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x314],EAX     ; 004da9ae
    ADD ESP,0x8                         ; 004da9b5
    MOV EDI,dword ptr [0x01d5b9b4]      ; 004da9b8 | g_CHealthItemClassInfo.name_hash
    PUSH EDI                            ; 004da9be
    PUSH ESI                            ; 004da9bf
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004da9c0
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004da9c5
    MOV EDX,dword ptr [ESP + 0x30c]     ; 004da9c8
    TEST EDX,EDX                        ; 004da9cf
    JZ 0x004db40a                       ; 004da9d1
        ;   XREF to: 004db40a (CONDITIONAL_JUMP)  ; LAB_004db40a
    MOV ESI,dword ptr [EDX + 0x314]     ; 004da9d7
    PUSH ESI                            ; 004da9dd
    PUSH 0x5c6010                       ; 004da9de | DAT_005c6010
    LEA EAX,[ESP + 0x208]               ; 004da9e3
    PUSH EAX                            ; 004da9ea
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004da9eb
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004da9f0
    LEA EDI,[ESP + 0x100]               ; 004da9f3
    LEA ESI,[ESP + 0x200]               ; 004da9fa
    PUSH EDI                            ; 004daa01
    SUB ECX,ECX                         ; 004daa02
    DEC ECX                             ; 004daa04
    MOV AL,0x0                          ; 004daa05
    SCASB.REPNE ES:EDI                  ; 004daa07
    DEC EDI                             ; 004daa09
    MOV AL,byte ptr [ESI]               ; 004daa0a
        ;   Label: LAB_004daa0a
    MOV byte ptr [EDI],AL               ; 004daa0c
    CMP AL,0x0                          ; 004daa0e
    JZ 0x004daa22                       ; 004daa10
        ;   XREF to: 004daa22 (CONDITIONAL_JUMP)  ; LAB_004daa22
    MOV AL,byte ptr [ESI + 0x1]         ; 004daa12
    ADD ESI,0x2                         ; 004daa15
    MOV byte ptr [EDI + 0x1],AL         ; 004daa18
    ADD EDI,0x2                         ; 004daa1b
    CMP AL,0x0                          ; 004daa1e
    JNZ 0x004daa0a                      ; 004daa20
        ;   XREF to: 004daa0a (CONDITIONAL_JUMP)  ; LAB_004daa0a
    POP EDI                             ; 004daa22
        ;   Label: LAB_004daa22
    MOV EAX,dword ptr [ESP + 0x30c]     ; 004daa23
    MOV EDI,dword ptr [EAX + 0x318]     ; 004daa2a
    CMP EDI,0xb                         ; 004daa30
    JNZ 0x004db3f7                      ; 004daa33
        ;   XREF to: 004db3f7 (CONDITIONAL_JUMP)  ; LAB_004db3f7
    MOV ESI,0x5c6014                    ; 004daa39 | = "bullets"
    LEA EDI,[ESP + 0x100]               ; 004daa3e
        ;   Label: LAB_004daa3e
    PUSH EDI                            ; 004daa45
    SUB ECX,ECX                         ; 004daa46
    DEC ECX                             ; 004daa48
    MOV AL,0x0                          ; 004daa49
    SCASB.REPNE ES:EDI                  ; 004daa4b
    DEC EDI                             ; 004daa4d
    MOV AL,byte ptr [ESI]               ; 004daa4e | = "bullets" | s_llets_005c6014+2 | DAT_005c601c
        ;   Label: LAB_004daa4e
    MOV byte ptr [EDI],AL               ; 004daa50
    CMP AL,0x0                          ; 004daa52
    JZ 0x004daa66                       ; 004daa54
        ;   XREF to: 004daa66 (CONDITIONAL_JUMP)  ; LAB_004daa66
    MOV AL,byte ptr [ESI + 0x1]         ; 004daa56 | s_ullets_005c6014+1 | s_lets_005c6014+3 | DAT_005c601d
    ADD ESI,0x2                         ; 004daa59
    MOV byte ptr [EDI + 0x1],AL         ; 004daa5c
    ADD EDI,0x2                         ; 004daa5f
    CMP AL,0x0                          ; 004daa62
    JNZ 0x004daa4e                      ; 004daa64
        ;   XREF to: 004daa4e (CONDITIONAL_JUMP)  ; LAB_004daa4e
    POP EDI                             ; 004daa66
        ;   Label: LAB_004daa66
    PUSH 0x5c603d                       ; 004daa67 | = "CHealthItem"
        ;   Label: LAB_004daa67
    MOV ECX,dword ptr [ESP + 0x348]     ; 004daa6c
    XOR AH,AH                           ; 004daa73
    PUSH ECX                            ; 004daa75
    MOV byte ptr [ESP + 0x8],AH         ; 004daa76
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004daa7a
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004daa7f
    TEST EAX,EAX                        ; 004daa82
    JZ 0x004dac01                       ; 004daa84
        ;   XREF to: 004dac01 (CONDITIONAL_JUMP)  ; LAB_004dac01
    TEST EBX,EBX                        ; 004daa8a
    JZ 0x004dac01                       ; 004daa8c
        ;   XREF to: 004dac01 (CONDITIONAL_JUMP)  ; LAB_004dac01
    PUSH 0x5c6049                       ; 004daa92 | = "Press "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004daa97
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004daa9c
    MOV EDI,ESP                         ; 004daa9f
    MOV ESI,EAX                         ; 004daaa1
    PUSH EDI                            ; 004daaa3
    MOV AL,byte ptr [ESI]               ; 004daaa4
        ;   Label: LAB_004daaa4
    MOV byte ptr [EDI],AL               ; 004daaa6
    CMP AL,0x0                          ; 004daaa8
    JZ 0x004daabc                       ; 004daaaa
        ;   XREF to: 004daabc (CONDITIONAL_JUMP)  ; LAB_004daabc
    MOV AL,byte ptr [ESI + 0x1]         ; 004daaac
    ADD ESI,0x2                         ; 004daaaf
    MOV byte ptr [EDI + 0x1],AL         ; 004daab2
    ADD EDI,0x2                         ; 004daab5
    CMP AL,0x0                          ; 004daab8
    JNZ 0x004daaa4                      ; 004daaba
        ;   XREF to: 004daaa4 (CONDITIONAL_JUMP)  ; LAB_004daaa4
    POP EDI                             ; 004daabc
        ;   Label: LAB_004daabc
    MOV EAX,[0x005fe9dc]                ; 004daabd | g_CGamePtr
    MOV ESI,dword ptr [EAX + 0x9c]      ; 004daac2 | g_CGameInstance.key_next_item
    PUSH ESI                            ; 004daac8
    CALL core_menu.cpp_getKeyDisplayName_FUN_004eaa60 ; 004daac9
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004daace
    MOV EDI,ESP                         ; 004daad1
    MOV ESI,EAX                         ; 004daad3
    PUSH EDI                            ; 004daad5
    SUB ECX,ECX                         ; 004daad6
    DEC ECX                             ; 004daad8
    MOV AL,0x0                          ; 004daad9
    SCASB.REPNE ES:EDI                  ; 004daadb
    DEC EDI                             ; 004daadd
    MOV AL,byte ptr [ESI]               ; 004daade
        ;   Label: LAB_004daade
    MOV byte ptr [EDI],AL               ; 004daae0
    CMP AL,0x0                          ; 004daae2
    JZ 0x004daaf6                       ; 004daae4
        ;   XREF to: 004daaf6 (CONDITIONAL_JUMP)  ; LAB_004daaf6
    MOV AL,byte ptr [ESI + 0x1]         ; 004daae6
    ADD ESI,0x2                         ; 004daae9
    MOV byte ptr [EDI + 0x1],AL         ; 004daaec
    ADD EDI,0x2                         ; 004daaef
    CMP AL,0x0                          ; 004daaf2
    JNZ 0x004daade                      ; 004daaf4
        ;   XREF to: 004daade (CONDITIONAL_JUMP)  ; LAB_004daade
    POP EDI                             ; 004daaf6
        ;   Label: LAB_004daaf6
    PUSH 0x5c6050                       ; 004daaf7 | = " and "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004daafc
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004dab01
    MOV EDI,ESP                         ; 004dab04
    MOV ESI,EAX                         ; 004dab06
    PUSH EDI                            ; 004dab08
    SUB ECX,ECX                         ; 004dab09
    DEC ECX                             ; 004dab0b
    MOV AL,0x0                          ; 004dab0c
    SCASB.REPNE ES:EDI                  ; 004dab0e
    DEC EDI                             ; 004dab10
    MOV AL,byte ptr [ESI]               ; 004dab11
        ;   Label: LAB_004dab11
    MOV byte ptr [EDI],AL               ; 004dab13
    CMP AL,0x0                          ; 004dab15
    JZ 0x004dab29                       ; 004dab17
        ;   XREF to: 004dab29 (CONDITIONAL_JUMP)  ; LAB_004dab29
    MOV AL,byte ptr [ESI + 0x1]         ; 004dab19
    ADD ESI,0x2                         ; 004dab1c
    MOV byte ptr [EDI + 0x1],AL         ; 004dab1f
    ADD EDI,0x2                         ; 004dab22
    CMP AL,0x0                          ; 004dab25
    JNZ 0x004dab11                      ; 004dab27
        ;   XREF to: 004dab11 (CONDITIONAL_JUMP)  ; LAB_004dab11
    POP EDI                             ; 004dab29
        ;   Label: LAB_004dab29
    MOV EAX,[0x005fe9dc]                ; 004dab2a | g_CGamePtr
    MOV EDI,dword ptr [EAX + 0xa0]      ; 004dab2f | g_CGameInstance.key_prev_item
    PUSH EDI                            ; 004dab35
    CALL core_menu.cpp_getKeyDisplayName_FUN_004eaa60 ; 004dab36
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004dab3b
    MOV EDI,ESP                         ; 004dab3e
    MOV ESI,EAX                         ; 004dab40
    PUSH EDI                            ; 004dab42
    SUB ECX,ECX                         ; 004dab43
    DEC ECX                             ; 004dab45
    MOV AL,0x0                          ; 004dab46
    SCASB.REPNE ES:EDI                  ; 004dab48
    DEC EDI                             ; 004dab4a
    MOV AL,byte ptr [ESI]               ; 004dab4b
        ;   Label: LAB_004dab4b
    MOV byte ptr [EDI],AL               ; 004dab4d
    CMP AL,0x0                          ; 004dab4f
    JZ 0x004dab63                       ; 004dab51
        ;   XREF to: 004dab63 (CONDITIONAL_JUMP)  ; LAB_004dab63
    MOV AL,byte ptr [ESI + 0x1]         ; 004dab53
    ADD ESI,0x2                         ; 004dab56
    MOV byte ptr [EDI + 0x1],AL         ; 004dab59
    ADD EDI,0x2                         ; 004dab5c
    CMP AL,0x0                          ; 004dab5f
    JNZ 0x004dab4b                      ; 004dab61
        ;   XREF to: 004dab4b (CONDITIONAL_JUMP)  ; LAB_004dab4b
    POP EDI                             ; 004dab63
        ;   Label: LAB_004dab63
    PUSH 0x5c6056                       ; 004dab64 | = " to cycle through your inventory.  Pr..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004dab69
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004dab6e
    MOV EDI,ESP                         ; 004dab71
    MOV ESI,EAX                         ; 004dab73
    PUSH EDI                            ; 004dab75
    SUB ECX,ECX                         ; 004dab76
    DEC ECX                             ; 004dab78
    MOV AL,0x0                          ; 004dab79
    SCASB.REPNE ES:EDI                  ; 004dab7b
    DEC EDI                             ; 004dab7d
    MOV AL,byte ptr [ESI]               ; 004dab7e
        ;   Label: LAB_004dab7e
    MOV byte ptr [EDI],AL               ; 004dab80
    CMP AL,0x0                          ; 004dab82
    JZ 0x004dab96                       ; 004dab84
        ;   XREF to: 004dab96 (CONDITIONAL_JUMP)  ; LAB_004dab96
    MOV AL,byte ptr [ESI + 0x1]         ; 004dab86
    ADD ESI,0x2                         ; 004dab89
    MOV byte ptr [EDI + 0x1],AL         ; 004dab8c
    ADD EDI,0x2                         ; 004dab8f
    CMP AL,0x0                          ; 004dab92
    JNZ 0x004dab7e                      ; 004dab94
        ;   XREF to: 004dab7e (CONDITIONAL_JUMP)  ; LAB_004dab7e
    POP EDI                             ; 004dab96
        ;   Label: LAB_004dab96
    MOV EAX,[0x005fe9dc]                ; 004dab97 | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x50]      ; 004dab9c | g_CGameInstance.key_use_item
    PUSH EDX                            ; 004dab9f
    CALL core_menu.cpp_getKeyDisplayName_FUN_004eaa60 ; 004daba0
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004daba5
    MOV EDI,ESP                         ; 004daba8
    MOV ESI,EAX                         ; 004dabaa
    PUSH EDI                            ; 004dabac
    SUB ECX,ECX                         ; 004dabad
    DEC ECX                             ; 004dabaf
    MOV AL,0x0                          ; 004dabb0
    SCASB.REPNE ES:EDI                  ; 004dabb2
    DEC EDI                             ; 004dabb4
    MOV AL,byte ptr [ESI]               ; 004dabb5
        ;   Label: LAB_004dabb5
    MOV byte ptr [EDI],AL               ; 004dabb7
    CMP AL,0x0                          ; 004dabb9
    JZ 0x004dabcd                       ; 004dabbb
        ;   XREF to: 004dabcd (CONDITIONAL_JUMP)  ; LAB_004dabcd
    MOV AL,byte ptr [ESI + 0x1]         ; 004dabbd
    ADD ESI,0x2                         ; 004dabc0
    MOV byte ptr [EDI + 0x1],AL         ; 004dabc3
    ADD EDI,0x2                         ; 004dabc6
    CMP AL,0x0                          ; 004dabc9
    JNZ 0x004dabb5                      ; 004dabcb
        ;   XREF to: 004dabb5 (CONDITIONAL_JUMP)  ; LAB_004dabb5
    POP EDI                             ; 004dabcd
        ;   Label: LAB_004dabcd
    PUSH 0x5c6080                       ; 004dabce | = " to use this item to restore some hea..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004dabd3
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004dabd8
    MOV EDI,ESP                         ; 004dabdb
    MOV ESI,EAX                         ; 004dabdd
    PUSH EDI                            ; 004dabdf
    SUB ECX,ECX                         ; 004dabe0
    DEC ECX                             ; 004dabe2
    MOV AL,0x0                          ; 004dabe3
    SCASB.REPNE ES:EDI                  ; 004dabe5
    DEC EDI                             ; 004dabe7
    MOV AL,byte ptr [ESI]               ; 004dabe8
        ;   Label: LAB_004dabe8
    MOV byte ptr [EDI],AL               ; 004dabea
    CMP AL,0x0                          ; 004dabec
    JZ 0x004dac00                       ; 004dabee
        ;   XREF to: 004dac00 (CONDITIONAL_JUMP)  ; LAB_004dac00
    MOV AL,byte ptr [ESI + 0x1]         ; 004dabf0
    ADD ESI,0x2                         ; 004dabf3
    MOV byte ptr [EDI + 0x1],AL         ; 004dabf6
    ADD EDI,0x2                         ; 004dabf9
    CMP AL,0x0                          ; 004dabfc
    JNZ 0x004dabe8                      ; 004dabfe
        ;   XREF to: 004dabe8 (CONDITIONAL_JUMP)  ; LAB_004dabe8
    POP EDI                             ; 004dac00
        ;   Label: LAB_004dac00
    PUSH 0x5c60aa                       ; 004dac01 | = "CKeyActor"
        ;   Label: LAB_004dac01
    MOV ECX,dword ptr [ESP + 0x348]     ; 004dac06
    PUSH ECX                            ; 004dac0d
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dac0e
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dac13
    TEST EAX,EAX                        ; 004dac16
    JZ 0x004dacb3                       ; 004dac18
        ;   XREF to: 004dacb3 (CONDITIONAL_JUMP)  ; LAB_004dacb3
    PUSH 0x5c60b4                       ; 004dac1e | = "With your guns put away, press "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004dac23
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004dac28
    MOV EDI,ESP                         ; 004dac2b
    MOV ESI,EAX                         ; 004dac2d
    PUSH EDI                            ; 004dac2f
    MOV AL,byte ptr [ESI]               ; 004dac30
        ;   Label: LAB_004dac30
    MOV byte ptr [EDI],AL               ; 004dac32
    CMP AL,0x0                          ; 004dac34
    JZ 0x004dac48                       ; 004dac36
        ;   XREF to: 004dac48 (CONDITIONAL_JUMP)  ; LAB_004dac48
    MOV AL,byte ptr [ESI + 0x1]         ; 004dac38
    ADD ESI,0x2                         ; 004dac3b
    MOV byte ptr [EDI + 0x1],AL         ; 004dac3e
    ADD EDI,0x2                         ; 004dac41
    CMP AL,0x0                          ; 004dac44
    JNZ 0x004dac30                      ; 004dac46
        ;   XREF to: 004dac30 (CONDITIONAL_JUMP)  ; LAB_004dac30
    POP EDI                             ; 004dac48
        ;   Label: LAB_004dac48
    MOV EAX,[0x005fe9dc]                ; 004dac49 | g_CGamePtr
    MOV ESI,dword ptr [EAX + 0x48]      ; 004dac4e | g_CGameInstance.key_fire
    PUSH ESI                            ; 004dac51
    CALL core_menu.cpp_getKeyDisplayName_FUN_004eaa60 ; 004dac52
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004dac57
    MOV EDI,ESP                         ; 004dac5a
    MOV ESI,EAX                         ; 004dac5c
    PUSH EDI                            ; 004dac5e
    SUB ECX,ECX                         ; 004dac5f
    DEC ECX                             ; 004dac61
    MOV AL,0x0                          ; 004dac62
    SCASB.REPNE ES:EDI                  ; 004dac64
    DEC EDI                             ; 004dac66
    MOV AL,byte ptr [ESI]               ; 004dac67
        ;   Label: LAB_004dac67
    MOV byte ptr [EDI],AL               ; 004dac69
    CMP AL,0x0                          ; 004dac6b
    JZ 0x004dac7f                       ; 004dac6d
        ;   XREF to: 004dac7f (CONDITIONAL_JUMP)  ; LAB_004dac7f
    MOV AL,byte ptr [ESI + 0x1]         ; 004dac6f
    ADD ESI,0x2                         ; 004dac72
    MOV byte ptr [EDI + 0x1],AL         ; 004dac75
    ADD EDI,0x2                         ; 004dac78
    CMP AL,0x0                          ; 004dac7b
    JNZ 0x004dac67                      ; 004dac7d
        ;   XREF to: 004dac67 (CONDITIONAL_JUMP)  ; LAB_004dac67
    POP EDI                             ; 004dac7f
        ;   Label: LAB_004dac7f
    PUSH 0x5c60d4                       ; 004dac80 | = " to open a previously locked door."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004dac85
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004dac8a
    MOV EDI,ESP                         ; 004dac8d
    MOV ESI,EAX                         ; 004dac8f
    PUSH EDI                            ; 004dac91
    SUB ECX,ECX                         ; 004dac92
    DEC ECX                             ; 004dac94
    MOV AL,0x0                          ; 004dac95
    SCASB.REPNE ES:EDI                  ; 004dac97
    DEC EDI                             ; 004dac99
    MOV AL,byte ptr [ESI]               ; 004dac9a
        ;   Label: LAB_004dac9a
    MOV byte ptr [EDI],AL               ; 004dac9c
    CMP AL,0x0                          ; 004dac9e
    JZ 0x004dacb2                       ; 004daca0
        ;   XREF to: 004dacb2 (CONDITIONAL_JUMP)  ; LAB_004dacb2
    MOV AL,byte ptr [ESI + 0x1]         ; 004daca2
    ADD ESI,0x2                         ; 004daca5
    MOV byte ptr [EDI + 0x1],AL         ; 004daca8
    ADD EDI,0x2                         ; 004dacab
    CMP AL,0x0                          ; 004dacae
    JNZ 0x004dac9a                      ; 004dacb0
        ;   XREF to: 004dac9a (CONDITIONAL_JUMP)  ; LAB_004dac9a
    POP EDI                             ; 004dacb2
        ;   Label: LAB_004dacb2
    PUSH 0x5c60f7                       ; 004dacb3 | = "CBoxActor"
        ;   Label: LAB_004dacb3
    MOV EDI,dword ptr [ESP + 0x348]     ; 004dacb8
    PUSH EDI                            ; 004dacbf
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dacc0
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dacc5
    TEST EAX,EAX                        ; 004dacc8
    JZ 0x004dae3f                       ; 004dacca
        ;   XREF to: 004dae3f (CONDITIONAL_JUMP)  ; LAB_004dae3f
    PUSH 0x5c6101                       ; 004dacd0 | = "Press "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004dacd5
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004dacda
    MOV EDI,ESP                         ; 004dacdd
    MOV ESI,EAX                         ; 004dacdf
    PUSH EDI                            ; 004dace1
    MOV AL,byte ptr [ESI]               ; 004dace2
        ;   Label: LAB_004dace2
    MOV byte ptr [EDI],AL               ; 004dace4
    CMP AL,0x0                          ; 004dace6
    JZ 0x004dacfa                       ; 004dace8
        ;   XREF to: 004dacfa (CONDITIONAL_JUMP)  ; LAB_004dacfa
    MOV AL,byte ptr [ESI + 0x1]         ; 004dacea
    ADD ESI,0x2                         ; 004daced
    MOV byte ptr [EDI + 0x1],AL         ; 004dacf0
    ADD EDI,0x2                         ; 004dacf3
    CMP AL,0x0                          ; 004dacf6
    JNZ 0x004dace2                      ; 004dacf8
        ;   XREF to: 004dace2 (CONDITIONAL_JUMP)  ; LAB_004dace2
    POP EDI                             ; 004dacfa
        ;   Label: LAB_004dacfa
    MOV EAX,[0x005fe9dc]                ; 004dacfb | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x9c]      ; 004dad00 | g_CGameInstance.key_next_item
    PUSH EDX                            ; 004dad06
    CALL core_menu.cpp_getKeyDisplayName_FUN_004eaa60 ; 004dad07
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004dad0c
    MOV EDI,ESP                         ; 004dad0f
    MOV ESI,EAX                         ; 004dad11
    PUSH EDI                            ; 004dad13
    SUB ECX,ECX                         ; 004dad14
    DEC ECX                             ; 004dad16
    MOV AL,0x0                          ; 004dad17
    SCASB.REPNE ES:EDI                  ; 004dad19
    DEC EDI                             ; 004dad1b
    MOV AL,byte ptr [ESI]               ; 004dad1c
        ;   Label: LAB_004dad1c
    MOV byte ptr [EDI],AL               ; 004dad1e
    CMP AL,0x0                          ; 004dad20
    JZ 0x004dad34                       ; 004dad22
        ;   XREF to: 004dad34 (CONDITIONAL_JUMP)  ; LAB_004dad34
    MOV AL,byte ptr [ESI + 0x1]         ; 004dad24
    ADD ESI,0x2                         ; 004dad27
    MOV byte ptr [EDI + 0x1],AL         ; 004dad2a
    ADD EDI,0x2                         ; 004dad2d
    CMP AL,0x0                          ; 004dad30
    JNZ 0x004dad1c                      ; 004dad32
        ;   XREF to: 004dad1c (CONDITIONAL_JUMP)  ; LAB_004dad1c
    POP EDI                             ; 004dad34
        ;   Label: LAB_004dad34
    PUSH 0x5c6108                       ; 004dad35 | = " and "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004dad3a
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004dad3f
    MOV EDI,ESP                         ; 004dad42
    MOV ESI,EAX                         ; 004dad44
    PUSH EDI                            ; 004dad46
    SUB ECX,ECX                         ; 004dad47
    DEC ECX                             ; 004dad49
    MOV AL,0x0                          ; 004dad4a
    SCASB.REPNE ES:EDI                  ; 004dad4c
    DEC EDI                             ; 004dad4e
    MOV AL,byte ptr [ESI]               ; 004dad4f
        ;   Label: LAB_004dad4f
    MOV byte ptr [EDI],AL               ; 004dad51
    CMP AL,0x0                          ; 004dad53
    JZ 0x004dad67                       ; 004dad55
        ;   XREF to: 004dad67 (CONDITIONAL_JUMP)  ; LAB_004dad67
    MOV AL,byte ptr [ESI + 0x1]         ; 004dad57
    ADD ESI,0x2                         ; 004dad5a
    MOV byte ptr [EDI + 0x1],AL         ; 004dad5d
    ADD EDI,0x2                         ; 004dad60
    CMP AL,0x0                          ; 004dad63
    JNZ 0x004dad4f                      ; 004dad65
        ;   XREF to: 004dad4f (CONDITIONAL_JUMP)  ; LAB_004dad4f
    POP EDI                             ; 004dad67
        ;   Label: LAB_004dad67
    MOV EAX,[0x005fe9dc]                ; 004dad68 | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0xa0]      ; 004dad6d | g_CGameInstance.key_prev_item
    PUSH ECX                            ; 004dad73
    CALL core_menu.cpp_getKeyDisplayName_FUN_004eaa60 ; 004dad74
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004dad79
    MOV EDI,ESP                         ; 004dad7c
    MOV ESI,EAX                         ; 004dad7e
    PUSH EDI                            ; 004dad80
    SUB ECX,ECX                         ; 004dad81
    DEC ECX                             ; 004dad83
    MOV AL,0x0                          ; 004dad84
    SCASB.REPNE ES:EDI                  ; 004dad86
    DEC EDI                             ; 004dad88
    MOV AL,byte ptr [ESI]               ; 004dad89
        ;   Label: LAB_004dad89
    MOV byte ptr [EDI],AL               ; 004dad8b
    CMP AL,0x0                          ; 004dad8d
    JZ 0x004dada1                       ; 004dad8f
        ;   XREF to: 004dada1 (CONDITIONAL_JUMP)  ; LAB_004dada1
    MOV AL,byte ptr [ESI + 0x1]         ; 004dad91
    ADD ESI,0x2                         ; 004dad94
    MOV byte ptr [EDI + 0x1],AL         ; 004dad97
    ADD EDI,0x2                         ; 004dad9a
    CMP AL,0x0                          ; 004dad9d
    JNZ 0x004dad89                      ; 004dad9f
        ;   XREF to: 004dad89 (CONDITIONAL_JUMP)  ; LAB_004dad89
    POP EDI                             ; 004dada1
        ;   Label: LAB_004dada1
    PUSH 0x5c610e                       ; 004dada2 | = " to cycle through your inventory.  Pr..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004dada7
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004dadac
    MOV EDI,ESP                         ; 004dadaf
    MOV ESI,EAX                         ; 004dadb1
    PUSH EDI                            ; 004dadb3
    SUB ECX,ECX                         ; 004dadb4
    DEC ECX                             ; 004dadb6
    MOV AL,0x0                          ; 004dadb7
    SCASB.REPNE ES:EDI                  ; 004dadb9
    DEC EDI                             ; 004dadbb
    MOV AL,byte ptr [ESI]               ; 004dadbc
        ;   Label: LAB_004dadbc
    MOV byte ptr [EDI],AL               ; 004dadbe
    CMP AL,0x0                          ; 004dadc0
    JZ 0x004dadd4                       ; 004dadc2
        ;   XREF to: 004dadd4 (CONDITIONAL_JUMP)  ; LAB_004dadd4
    MOV AL,byte ptr [ESI + 0x1]         ; 004dadc4
    ADD ESI,0x2                         ; 004dadc7
    MOV byte ptr [EDI + 0x1],AL         ; 004dadca
    ADD EDI,0x2                         ; 004dadcd
    CMP AL,0x0                          ; 004dadd0
    JNZ 0x004dadbc                      ; 004dadd2
        ;   XREF to: 004dadbc (CONDITIONAL_JUMP)  ; LAB_004dadbc
    POP EDI                             ; 004dadd4
        ;   Label: LAB_004dadd4
    MOV EAX,[0x005fe9dc]                ; 004dadd5 | g_CGamePtr
    MOV ESI,dword ptr [EAX + 0x50]      ; 004dadda | g_CGameInstance.key_use_item
    PUSH ESI                            ; 004daddd
    CALL core_menu.cpp_getKeyDisplayName_FUN_004eaa60 ; 004dadde
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004dade3
    MOV EDI,ESP                         ; 004dade6
    MOV ESI,EAX                         ; 004dade8
    PUSH EDI                            ; 004dadea
    SUB ECX,ECX                         ; 004dadeb
    DEC ECX                             ; 004daded
    MOV AL,0x0                          ; 004dadee
    SCASB.REPNE ES:EDI                  ; 004dadf0
    DEC EDI                             ; 004dadf2
    MOV AL,byte ptr [ESI]               ; 004dadf3
        ;   Label: LAB_004dadf3
    MOV byte ptr [EDI],AL               ; 004dadf5
    CMP AL,0x0                          ; 004dadf7
    JZ 0x004dae0b                       ; 004dadf9
        ;   XREF to: 004dae0b (CONDITIONAL_JUMP)  ; LAB_004dae0b
    MOV AL,byte ptr [ESI + 0x1]         ; 004dadfb
    ADD ESI,0x2                         ; 004dadfe
    MOV byte ptr [EDI + 0x1],AL         ; 004dae01
    ADD EDI,0x2                         ; 004dae04
    CMP AL,0x0                          ; 004dae07
    JNZ 0x004dadf3                      ; 004dae09
        ;   XREF to: 004dadf3 (CONDITIONAL_JUMP)  ; LAB_004dadf3
    POP EDI                             ; 004dae0b
        ;   Label: LAB_004dae0b
    PUSH 0x5c6138                       ; 004dae0c | = " to use this item."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004dae11
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004dae16
    MOV EDI,ESP                         ; 004dae19
    MOV ESI,EAX                         ; 004dae1b
    PUSH EDI                            ; 004dae1d
    SUB ECX,ECX                         ; 004dae1e
    DEC ECX                             ; 004dae20
    MOV AL,0x0                          ; 004dae21
    SCASB.REPNE ES:EDI                  ; 004dae23
    DEC EDI                             ; 004dae25
    MOV AL,byte ptr [ESI]               ; 004dae26
        ;   Label: LAB_004dae26
    MOV byte ptr [EDI],AL               ; 004dae28
    CMP AL,0x0                          ; 004dae2a
    JZ 0x004dae3e                       ; 004dae2c
        ;   XREF to: 004dae3e (CONDITIONAL_JUMP)  ; LAB_004dae3e
    MOV AL,byte ptr [ESI + 0x1]         ; 004dae2e
    ADD ESI,0x2                         ; 004dae31
    MOV byte ptr [EDI + 0x1],AL         ; 004dae34
    ADD EDI,0x2                         ; 004dae37
    CMP AL,0x0                          ; 004dae3a
    JNZ 0x004dae26                      ; 004dae3c
        ;   XREF to: 004dae26 (CONDITIONAL_JUMP)  ; LAB_004dae26
    POP EDI                             ; 004dae3e
        ;   Label: LAB_004dae3e
    PUSH 0x5c614b                       ; 004dae3f | = "CLightActor"
        ;   Label: LAB_004dae3f
    MOV EDI,dword ptr [ESP + 0x348]     ; 004dae44
    PUSH EDI                            ; 004dae4b
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dae4c
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dae51
    TEST EAX,EAX                        ; 004dae54
    JZ 0x004daef1                       ; 004dae56
        ;   XREF to: 004daef1 (CONDITIONAL_JUMP)  ; LAB_004daef1
    PUSH 0x5c6157                       ; 004dae5c | = "Press "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004dae61
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004dae66
    MOV EDI,ESP                         ; 004dae69
    MOV ESI,EAX                         ; 004dae6b
    PUSH EDI                            ; 004dae6d
    MOV AL,byte ptr [ESI]               ; 004dae6e
        ;   Label: LAB_004dae6e
    MOV byte ptr [EDI],AL               ; 004dae70
    CMP AL,0x0                          ; 004dae72
    JZ 0x004dae86                       ; 004dae74
        ;   XREF to: 004dae86 (CONDITIONAL_JUMP)  ; LAB_004dae86
    MOV AL,byte ptr [ESI + 0x1]         ; 004dae76
    ADD ESI,0x2                         ; 004dae79
    MOV byte ptr [EDI + 0x1],AL         ; 004dae7c
    ADD EDI,0x2                         ; 004dae7f
    CMP AL,0x0                          ; 004dae82
    JNZ 0x004dae6e                      ; 004dae84
        ;   XREF to: 004dae6e (CONDITIONAL_JUMP)  ; LAB_004dae6e
    POP EDI                             ; 004dae86
        ;   Label: LAB_004dae86
    MOV EAX,[0x005fe9dc]                ; 004dae87 | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x54]      ; 004dae8c | g_CGameInstance.key_light
    PUSH EDX                            ; 004dae8f
    CALL core_menu.cpp_getKeyDisplayName_FUN_004eaa60 ; 004dae90
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004dae95
    MOV EDI,ESP                         ; 004dae98
    MOV ESI,EAX                         ; 004dae9a
    PUSH EDI                            ; 004dae9c
    SUB ECX,ECX                         ; 004dae9d
    DEC ECX                             ; 004dae9f
    MOV AL,0x0                          ; 004daea0
    SCASB.REPNE ES:EDI                  ; 004daea2
    DEC EDI                             ; 004daea4
    MOV AL,byte ptr [ESI]               ; 004daea5
        ;   Label: LAB_004daea5
    MOV byte ptr [EDI],AL               ; 004daea7
    CMP AL,0x0                          ; 004daea9
    JZ 0x004daebd                       ; 004daeab
        ;   XREF to: 004daebd (CONDITIONAL_JUMP)  ; LAB_004daebd
    MOV AL,byte ptr [ESI + 0x1]         ; 004daead
    ADD ESI,0x2                         ; 004daeb0
    MOV byte ptr [EDI + 0x1],AL         ; 004daeb3
    ADD EDI,0x2                         ; 004daeb6
    CMP AL,0x0                          ; 004daeb9
    JNZ 0x004daea5                      ; 004daebb
        ;   XREF to: 004daea5 (CONDITIONAL_JUMP)  ; LAB_004daea5
    POP EDI                             ; 004daebd
        ;   Label: LAB_004daebd
    PUSH 0x5c615e                       ; 004daebe | = " to use the lantern."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004daec3
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004daec8
    MOV EDI,ESP                         ; 004daecb
    MOV ESI,EAX                         ; 004daecd
    PUSH EDI                            ; 004daecf
    SUB ECX,ECX                         ; 004daed0
    DEC ECX                             ; 004daed2
    MOV AL,0x0                          ; 004daed3
    SCASB.REPNE ES:EDI                  ; 004daed5
    DEC EDI                             ; 004daed7
    MOV AL,byte ptr [ESI]               ; 004daed8
        ;   Label: LAB_004daed8
    MOV byte ptr [EDI],AL               ; 004daeda
    CMP AL,0x0                          ; 004daedc
    JZ 0x004daef0                       ; 004daede
        ;   XREF to: 004daef0 (CONDITIONAL_JUMP)  ; LAB_004daef0
    MOV AL,byte ptr [ESI + 0x1]         ; 004daee0
    ADD ESI,0x2                         ; 004daee3
    MOV byte ptr [EDI + 0x1],AL         ; 004daee6
    ADD EDI,0x2                         ; 004daee9
    CMP AL,0x0                          ; 004daeec
    JNZ 0x004daed8                      ; 004daeee
        ;   XREF to: 004daed8 (CONDITIONAL_JUMP)  ; LAB_004daed8
    POP EDI                             ; 004daef0
        ;   Label: LAB_004daef0
    PUSH 0x5c6173                       ; 004daef1 | = "CWeapon"
        ;   Label: LAB_004daef1
    MOV ECX,dword ptr [ESP + 0x348]     ; 004daef6
    PUSH ECX                            ; 004daefd
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004daefe
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004daf03
    TEST EAX,EAX                        ; 004daf06
    JZ 0x004db09a                       ; 004daf08
        ;   XREF to: 004db09a (CONDITIONAL_JUMP)  ; LAB_004db09a
    MOV ESI,dword ptr [0x02d0c150]      ; 004daf0e | g_CWeaponClassInfo.name_hash
    PUSH ESI                            ; 004daf14
    MOV EDI,dword ptr [ESP + 0x348]     ; 004daf15
    PUSH EDI                            ; 004daf1c
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004daf1d
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x330],EAX     ; 004daf22
    ADD ESP,0x8                         ; 004daf29
    PUSH 0x5c617b                       ; 004daf2c | = "Select your "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004daf31
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004daf36
    MOV EDI,ESP                         ; 004daf39
    MOV ESI,EAX                         ; 004daf3b
    PUSH EDI                            ; 004daf3d
    MOV AL,byte ptr [ESI]               ; 004daf3e
        ;   Label: LAB_004daf3e
    MOV byte ptr [EDI],AL               ; 004daf40
    CMP AL,0x0                          ; 004daf42
    JZ 0x004daf56                       ; 004daf44
        ;   XREF to: 004daf56 (CONDITIONAL_JUMP)  ; LAB_004daf56
    MOV AL,byte ptr [ESI + 0x1]         ; 004daf46
    ADD ESI,0x2                         ; 004daf49
    MOV byte ptr [EDI + 0x1],AL         ; 004daf4c
    ADD EDI,0x2                         ; 004daf4f
    CMP AL,0x0                          ; 004daf52
    JNZ 0x004daf3e                      ; 004daf54
        ;   XREF to: 004daf3e (CONDITIONAL_JUMP)  ; LAB_004daf3e
    POP EDI                             ; 004daf56
        ;   Label: LAB_004daf56
    MOV EAX,dword ptr [ESP + 0x328]     ; 004daf57
    PUSH EAX                            ; 004daf5e
    CALL core_inv.cpp_getItemDisplayName_FUN_004d9e40 ; 004daf5f
        ;   XREF to: 004d9e40 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDisplayName_FUN_004d9e40(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004daf64
    MOV EDI,ESP                         ; 004daf67
    MOV ESI,EAX                         ; 004daf69
    PUSH EDI                            ; 004daf6b
    SUB ECX,ECX                         ; 004daf6c
    DEC ECX                             ; 004daf6e
    MOV AL,0x0                          ; 004daf6f
    SCASB.REPNE ES:EDI                  ; 004daf71
    DEC EDI                             ; 004daf73
    MOV AL,byte ptr [ESI]               ; 004daf74
        ;   Label: LAB_004daf74
    MOV byte ptr [EDI],AL               ; 004daf76
    CMP AL,0x0                          ; 004daf78
    JZ 0x004daf8c                       ; 004daf7a
        ;   XREF to: 004daf8c (CONDITIONAL_JUMP)  ; LAB_004daf8c
    MOV AL,byte ptr [ESI + 0x1]         ; 004daf7c
    ADD ESI,0x2                         ; 004daf7f
    MOV byte ptr [EDI + 0x1],AL         ; 004daf82
    ADD EDI,0x2                         ; 004daf85
    CMP AL,0x0                          ; 004daf88
    JNZ 0x004daf74                      ; 004daf8a
        ;   XREF to: 004daf74 (CONDITIONAL_JUMP)  ; LAB_004daf74
    POP EDI                             ; 004daf8c
        ;   Label: LAB_004daf8c
    PUSH 0x5c6188                       ; 004daf8d | = " with "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004daf92
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004daf97
    MOV EDI,ESP                         ; 004daf9a
    MOV ESI,EAX                         ; 004daf9c
    PUSH EDI                            ; 004daf9e
    SUB ECX,ECX                         ; 004daf9f
    DEC ECX                             ; 004dafa1
    MOV AL,0x0                          ; 004dafa2
    SCASB.REPNE ES:EDI                  ; 004dafa4
    DEC EDI                             ; 004dafa6
    MOV AL,byte ptr [ESI]               ; 004dafa7
        ;   Label: LAB_004dafa7
    MOV byte ptr [EDI],AL               ; 004dafa9
    CMP AL,0x0                          ; 004dafab
    JZ 0x004dafbf                       ; 004dafad
        ;   XREF to: 004dafbf (CONDITIONAL_JUMP)  ; LAB_004dafbf
    MOV AL,byte ptr [ESI + 0x1]         ; 004dafaf
    ADD ESI,0x2                         ; 004dafb2
    MOV byte ptr [EDI + 0x1],AL         ; 004dafb5
    ADD EDI,0x2                         ; 004dafb8
    CMP AL,0x0                          ; 004dafbb
    JNZ 0x004dafa7                      ; 004dafbd
        ;   XREF to: 004dafa7 (CONDITIONAL_JUMP)  ; LAB_004dafa7
    POP EDI                             ; 004dafbf
        ;   Label: LAB_004dafbf
    MOV EAX,[0x005fe9dc]                ; 004dafc0 | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x94]      ; 004dafc5 | g_CGameInstance.key_next_weapon
    PUSH EDX                            ; 004dafcb
    CALL core_menu.cpp_getKeyDisplayName_FUN_004eaa60 ; 004dafcc
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004dafd1
    MOV EDI,ESP                         ; 004dafd4
    MOV ESI,EAX                         ; 004dafd6
    PUSH EDI                            ; 004dafd8
    SUB ECX,ECX                         ; 004dafd9
    DEC ECX                             ; 004dafdb
    MOV AL,0x0                          ; 004dafdc
    SCASB.REPNE ES:EDI                  ; 004dafde
    DEC EDI                             ; 004dafe0
    MOV AL,byte ptr [ESI]               ; 004dafe1
        ;   Label: LAB_004dafe1
    MOV byte ptr [EDI],AL               ; 004dafe3
    CMP AL,0x0                          ; 004dafe5
    JZ 0x004daff9                       ; 004dafe7
        ;   XREF to: 004daff9 (CONDITIONAL_JUMP)  ; LAB_004daff9
    MOV AL,byte ptr [ESI + 0x1]         ; 004dafe9
    ADD ESI,0x2                         ; 004dafec
    MOV byte ptr [EDI + 0x1],AL         ; 004dafef
    ADD EDI,0x2                         ; 004daff2
    CMP AL,0x0                          ; 004daff5
    JNZ 0x004dafe1                      ; 004daff7
        ;   XREF to: 004dafe1 (CONDITIONAL_JUMP)  ; LAB_004dafe1
    POP EDI                             ; 004daff9
        ;   Label: LAB_004daff9
    PUSH 0x5c618f                       ; 004daffa | = " and "
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004dafff
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004db004
    MOV EDI,ESP                         ; 004db007
    MOV ESI,EAX                         ; 004db009
    PUSH EDI                            ; 004db00b
    SUB ECX,ECX                         ; 004db00c
    DEC ECX                             ; 004db00e
    MOV AL,0x0                          ; 004db00f
    SCASB.REPNE ES:EDI                  ; 004db011
    DEC EDI                             ; 004db013
    MOV AL,byte ptr [ESI]               ; 004db014
        ;   Label: LAB_004db014
    MOV byte ptr [EDI],AL               ; 004db016
    CMP AL,0x0                          ; 004db018
    JZ 0x004db02c                       ; 004db01a
        ;   XREF to: 004db02c (CONDITIONAL_JUMP)  ; LAB_004db02c
    MOV AL,byte ptr [ESI + 0x1]         ; 004db01c
    ADD ESI,0x2                         ; 004db01f
    MOV byte ptr [EDI + 0x1],AL         ; 004db022
    ADD EDI,0x2                         ; 004db025
    CMP AL,0x0                          ; 004db028
    JNZ 0x004db014                      ; 004db02a
        ;   XREF to: 004db014 (CONDITIONAL_JUMP)  ; LAB_004db014
    POP EDI                             ; 004db02c
        ;   Label: LAB_004db02c
    MOV EAX,[0x005fe9dc]                ; 004db02d | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x98]      ; 004db032 | g_CGameInstance.key_prev_weapon
    PUSH ECX                            ; 004db038
    CALL core_menu.cpp_getKeyDisplayName_FUN_004eaa60 ; 004db039
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_004eaa60(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004db03e
    MOV EDI,ESP                         ; 004db041
    MOV ESI,EAX                         ; 004db043
    PUSH EDI                            ; 004db045
    SUB ECX,ECX                         ; 004db046
    DEC ECX                             ; 004db048
    MOV AL,0x0                          ; 004db049
    SCASB.REPNE ES:EDI                  ; 004db04b
    DEC EDI                             ; 004db04d
    MOV AL,byte ptr [ESI]               ; 004db04e
        ;   Label: LAB_004db04e
    MOV byte ptr [EDI],AL               ; 004db050
    CMP AL,0x0                          ; 004db052
    JZ 0x004db066                       ; 004db054
        ;   XREF to: 004db066 (CONDITIONAL_JUMP)  ; LAB_004db066
    MOV AL,byte ptr [ESI + 0x1]         ; 004db056
    ADD ESI,0x2                         ; 004db059
    MOV byte ptr [EDI + 0x1],AL         ; 004db05c
    ADD EDI,0x2                         ; 004db05f
    CMP AL,0x0                          ; 004db062
    JNZ 0x004db04e                      ; 004db064
        ;   XREF to: 004db04e (CONDITIONAL_JUMP)  ; LAB_004db04e
    POP EDI                             ; 004db066
        ;   Label: LAB_004db066
    PUSH 0x5c6195                       ; 004db067 | DAT_005c6195
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004db06c
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004db071
    MOV EDI,ESP                         ; 004db074
    MOV ESI,EAX                         ; 004db076
    PUSH EDI                            ; 004db078
    SUB ECX,ECX                         ; 004db079
    DEC ECX                             ; 004db07b
    MOV AL,0x0                          ; 004db07c
    SCASB.REPNE ES:EDI                  ; 004db07e
    DEC EDI                             ; 004db080
    MOV AL,byte ptr [ESI]               ; 004db081
        ;   Label: LAB_004db081
    MOV byte ptr [EDI],AL               ; 004db083
    CMP AL,0x0                          ; 004db085
    JZ 0x004db099                       ; 004db087
        ;   XREF to: 004db099 (CONDITIONAL_JUMP)  ; LAB_004db099
    MOV AL,byte ptr [ESI + 0x1]         ; 004db089
    ADD ESI,0x2                         ; 004db08c
    MOV byte ptr [EDI + 0x1],AL         ; 004db08f
    ADD EDI,0x2                         ; 004db092
    CMP AL,0x0                          ; 004db095
    JNZ 0x004db081                      ; 004db097
        ;   XREF to: 004db081 (CONDITIONAL_JUMP)  ; LAB_004db081
    POP EDI                             ; 004db099
        ;   Label: LAB_004db099
    LEA EAX,[ESP + 0x100]               ; 004db09a
        ;   Label: LAB_004db09a
    PUSH 0x41200000                     ; 004db0a1
    PUSH EAX                            ; 004db0a6
    MOV ESI,dword ptr [0x005fe9dc]      ; 004db0a7 | g_CGamePtr
    PUSH ESI                            ; 004db0ad
    CALL core_game.cpp_CGame_displayMessage_FUN_004b46b0 ; 004db0ae
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b46b0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004db0b3
    LEA EDX,[EBP + 0x354]               ; 004db0b6
    MOV ESI,ESP                         ; 004db0bc
    MOV EDI,EDX                         ; 004db0be
    PUSH EDI                            ; 004db0c0
    MOV AL,byte ptr [ESI]               ; 004db0c1
        ;   Label: LAB_004db0c1
    MOV byte ptr [EDI],AL               ; 004db0c3
    CMP AL,0x0                          ; 004db0c5
    JZ 0x004db0d9                       ; 004db0c7
        ;   XREF to: 004db0d9 (CONDITIONAL_JUMP)  ; LAB_004db0d9
    MOV AL,byte ptr [ESI + 0x1]         ; 004db0c9
    ADD ESI,0x2                         ; 004db0cc
    MOV byte ptr [EDI + 0x1],AL         ; 004db0cf
    ADD EDI,0x2                         ; 004db0d2
    CMP AL,0x0                          ; 004db0d5
    JNZ 0x004db0c1                      ; 004db0d7
        ;   XREF to: 004db0c1 (CONDITIONAL_JUMP)  ; LAB_004db0c1
    POP EDI                             ; 004db0d9
        ;   Label: LAB_004db0d9
    PUSH EDX                            ; 004db0da
    MOV EDI,dword ptr [0x01549ab4]      ; 004db0db | DAT_01549ab4
    PUSH EDI                            ; 004db0e1
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80 ; 004db0e2
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004db0e7
    MOV dword ptr [ESP + 0x328],EAX     ; 004db0ea
    FILD dword ptr [ESP + 0x328]        ; 004db0f1
    FMUL double ptr [0x005c627f]        ; 004db0f8 | DAT_005c627f
    FSTP float ptr [EBP + 0x34c]        ; 004db0fe
    CMP dword ptr [ESP + 0x304],0x0     ; 004db104
        ;   Label: LAB_004db104
    JZ 0x004db116                       ; 004db10c
        ;   XREF to: 004db116 (CONDITIONAL_JUMP)  ; LAB_004db116
    TEST EBX,EBX                        ; 004db10e
    JZ 0x004db452                       ; 004db110
        ;   XREF to: 004db452 (CONDITIONAL_JUMP)  ; LAB_004db452
    MOV EBX,dword ptr [0x007dfd24]      ; 004db116 | g_CAmmoClassInfo.name_hash
        ;   Label: LAB_004db116
    PUSH EBX                            ; 004db11c
    MOV ESI,dword ptr [ESP + 0x348]     ; 004db11d
    PUSH ESI                            ; 004db124
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004db125
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004db12a
    MOV dword ptr [ESP + 0x318],EAX     ; 004db12d
    TEST EAX,EAX                        ; 004db134
    JNZ 0x004db47b                      ; 004db136
        ;   XREF to: 004db47b (CONDITIONAL_JUMP)  ; LAB_004db47b
    JZ 0x004db5c3                       ; 004db13c
        ;   XREF to: 004db5c3 (CONDITIONAL_JUMP)  ; LAB_004db5c3
    MOV EDX,dword ptr [EBP + 0x10]      ; 004db142
    XOR EDI,EDI                         ; 004db145
    TEST EDX,EDX                        ; 004db147
    JLE 0x004db181                      ; 004db149
        ;   XREF to: 004db181 (CONDITIONAL_JUMP)  ; LAB_004db181
    ADD EAX,0x2d4                       ; 004db14b
    MOV ESI,EBP                         ; 004db150
    MOV dword ptr [ESP + 0x310],EAX     ; 004db152
    MOV EBX,dword ptr [0x007dfd24]      ; 004db159 | g_CAmmoClassInfo.name_hash
        ;   Label: LAB_004db159
    PUSH EBX                            ; 004db15f
    MOV EAX,dword ptr [ESI + 0x14]      ; 004db160
    PUSH EAX                            ; 004db163
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004db164
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 004db169
    ADD ESP,0x8                         ; 004db16b
    TEST EAX,EAX                        ; 004db16e
    JNZ 0x004db49d                      ; 004db170
        ;   XREF to: 004db49d (CONDITIONAL_JUMP)  ; LAB_004db49d
    INC EDI                             ; 004db176
        ;   Label: LAB_004db176
    MOV EAX,dword ptr [EBP + 0x10]      ; 004db177
    ADD ESI,0x4                         ; 004db17a
    CMP EDI,EAX                         ; 004db17d
    JL 0x004db159                       ; 004db17f
        ;   XREF to: 004db159 (CONDITIONAL_JUMP)  ; LAB_004db159
    MOV ECX,dword ptr [EBP + 0x10]      ; 004db181
        ;   Label: LAB_004db181
    XOR EDX,EDX                         ; 004db184
    XOR ESI,ESI                         ; 004db186
    MOV dword ptr [ESP + 0x308],EDX     ; 004db188
    TEST ECX,ECX                        ; 004db18f
    JLE 0x004db1c7                      ; 004db191
        ;   XREF to: 004db1c7 (CONDITIONAL_JUMP)  ; LAB_004db1c7
    MOV EDI,dword ptr [ESP + 0x318]     ; 004db193
    MOV EBX,EBP                         ; 004db19a
    ADD EDI,0x2d4                       ; 004db19c
    MOV EAX,[0x02d0c150]                ; 004db1a2 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004db1a2
    PUSH EAX                            ; 004db1a7
    MOV EDX,dword ptr [EBX + 0x14]      ; 004db1a8
    PUSH EDX                            ; 004db1ab
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004db1ac
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004db1b1
    TEST EAX,EAX                        ; 004db1b4
    JNZ 0x004db52b                      ; 004db1b6
        ;   XREF to: 004db52b (CONDITIONAL_JUMP)  ; LAB_004db52b
    INC ESI                             ; 004db1bc
        ;   Label: LAB_004db1bc
    MOV EDX,dword ptr [EBP + 0x10]      ; 004db1bd
    ADD EBX,0x4                         ; 004db1c0
    CMP ESI,EDX                         ; 004db1c3
    JL 0x004db1a2                       ; 004db1c5
        ;   XREF to: 004db1a2 (CONDITIONAL_JUMP)  ; LAB_004db1a2
    CMP dword ptr [ESP + 0x308],0x0     ; 004db1c7
        ;   Label: LAB_004db1c7
    JZ 0x004db5c3                       ; 004db1cf
        ;   XREF to: 004db5c3 (CONDITIONAL_JUMP)  ; LAB_004db5c3
    MOV EAX,dword ptr [ESP + 0x318]     ; 004db1d5
        ;   Label: LAB_004db1d5
    MOV EDI,EBP                         ; 004db1dc
    MOV ECX,dword ptr [EBP + 0x10]      ; 004db1de
    ADD EAX,0x2d4                       ; 004db1e1
    XOR ESI,ESI                         ; 004db1e6
    MOV dword ptr [ESP + 0x314],EAX     ; 004db1e8
    TEST ECX,ECX                        ; 004db1ef
    JLE 0x004db21a                      ; 004db1f1
        ;   XREF to: 004db21a (CONDITIONAL_JUMP)  ; LAB_004db21a
    MOV EAX,[0x02d0c150]                ; 004db1f3 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004db1f3
    PUSH EAX                            ; 004db1f8
    MOV EDX,dword ptr [EDI + 0x14]      ; 004db1f9
    PUSH EDX                            ; 004db1fc
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004db1fd
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 004db202
    ADD ESP,0x8                         ; 004db204
    TEST EAX,EAX                        ; 004db207
    JNZ 0x004db54b                      ; 004db209
        ;   XREF to: 004db54b (CONDITIONAL_JUMP)  ; LAB_004db54b
    INC ESI                             ; 004db20f
        ;   Label: LAB_004db20f
    MOV ECX,dword ptr [EBP + 0x10]      ; 004db210
    ADD EDI,0x4                         ; 004db213
    CMP ESI,ECX                         ; 004db216
    JL 0x004db1f3                       ; 004db218
        ;   XREF to: 004db1f3 (CONDITIONAL_JUMP)  ; LAB_004db1f3
    MOV EBX,dword ptr [ESP + 0x314]     ; 004db21a
        ;   Label: LAB_004db21a
    PUSH EBX                            ; 004db221
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 004db222
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c4f0(char * class_name)
    ADD ESP,0x4                         ; 004db227
    PUSH EAX                            ; 004db22a
    MOV ESI,dword ptr [0x00600530]      ; 004db22b | DAT_00600530
    PUSH ESI                            ; 004db231
    MOV EBX,EAX                         ; 004db232
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004f7530 ; 004db234
        ;   XREF to: 004f7530 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004f7530(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004db239
    MOV EAX,dword ptr [EBX + 0x154]     ; 004db23c
    PUSH EBX                            ; 004db242
    CALL dword ptr [EAX]                ; 004db243
    ADD ESP,0x4                         ; 004db245
    MOV EAX,dword ptr [ESP + 0x318]     ; 004db248
    MOV EAX,dword ptr [EAX + 0x314]     ; 004db24f
    MOV dword ptr [EBX + 0x568],EAX     ; 004db255
    MOV EAX,dword ptr [ESP + 0x318]     ; 004db25b
    MOV EAX,dword ptr [EAX + 0x318]     ; 004db262
    MOV dword ptr [EBX + 0x56c],EAX     ; 004db268
    MOV EDI,dword ptr [EBP + 0x4]       ; 004db26e
    PUSH EDI                            ; 004db271
    MOV EAX,dword ptr [EBX + 0x154]     ; 004db272
    PUSH EBX                            ; 004db278
    CALL dword ptr [EAX + 0x88]         ; 004db279
    ADD ESP,0x8                         ; 004db27f
    MOV EAX,dword ptr [EBP + 0x10]      ; 004db282
    PUSH 0x1                            ; 004db285
    MOV dword ptr [EBP + EAX*0x4 + 0x14],EBX ; 004db287
    MOV EAX,dword ptr [ESP + 0x348]     ; 004db28b
    MOV ECX,dword ptr [EBP + 0x10]      ; 004db292
    PUSH EAX                            ; 004db295
    MOV EDX,dword ptr [0x00600530]      ; 004db296 | DAT_00600530
    INC ECX                             ; 004db29c
    PUSH EDX                            ; 004db29d
    MOV dword ptr [EBP + 0x10],ECX      ; 004db29e
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10 ; 004db2a1
        ;   XREF to: 004f6f10 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10(CDemonMission * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 004db2a6
    PUSH 0x5c61df                       ; 004db2a9 | = "Found new type of ammo for existing w..."
    MOV EBX,dword ptr [0x005f1690]      ; 004db2ae | g_CConsolePtr
    PUSH EBX                            ; 004db2b4 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 004db2b5
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
        ;   Label: LAB_004db2b5
    MOV EAX,0x1                         ; 004db2ba
    ADD ESP,0x8                         ; 004db2bf
    ADD ESP,0x32c                       ; 004db2c2
    POP EBP                             ; 004db2c8
    POP EDI                             ; 004db2c9
    POP ESI                             ; 004db2ca
    POP EBX                             ; 004db2cb
    RET                                 ; 004db2cc
    MOV EDI,dword ptr [0x01d5ba70]      ; 004db2cd | g_CHeroClassInfo.name_hash
        ;   Label: LAB_004db2cd
    PUSH EDI                            ; 004db2d3
    MOV EAX,dword ptr [EBP + 0x4]       ; 004db2d4
    PUSH EAX                            ; 004db2d7
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004db2d8
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004db2dd
    MOV EDI,EAX                         ; 004db2e0
    TEST EAX,EAX                        ; 004db2e2
    JZ 0x004da8b7                       ; 004db2e4
        ;   XREF to: 004da8b7 (CONDITIONAL_JUMP)  ; LAB_004da8b7
    MOV EDX,dword ptr [ESI + 0x318]     ; 004db2ea
    CMP EDX,0xa                         ; 004db2f0
    JZ 0x004db33d                       ; 004db2f3
        ;   XREF to: 004db33d (CONDITIONAL_JUMP)  ; LAB_004db33d
    CMP EDX,0xb                         ; 004db2f5
    JNZ 0x004db336                      ; 004db2f8
        ;   XREF to: 004db336 (CONDITIONAL_JUMP)  ; LAB_004db336
    MOV EBX,dword ptr [EAX + 0x20b84]   ; 004db2fa
    MOV EDX,dword ptr [ESI + 0x314]     ; 004db300
    ADD EBX,EDX                         ; 004db306
    MOV dword ptr [EAX + 0x20b84],EBX   ; 004db308
    CMP EBX,0x32                        ; 004db30e
    JLE 0x004db31d                      ; 004db311
        ;   XREF to: 004db31d (CONDITIONAL_JUMP)  ; LAB_004db31d
    MOV dword ptr [EAX + 0x20b84],0x32  ; 004db313
    LEA EAX,[EDI + 0x20]                ; 004db31d
        ;   Label: LAB_004db31d
    PUSH EAX                            ; 004db320
    PUSH 0x5c5ff1                       ; 004db321 | = "wp_getammo.wav"
    PUSH EDI                            ; 004db326
    MOV EDI,dword ptr [0x006045f8]      ; 004db327 | DAT_006045f8
    PUSH EDI                            ; 004db32d
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 004db32e
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004db333
    XOR EBX,EBX                         ; 004db336
        ;   Label: LAB_004db336
    JMP 0x004da8b7                      ; 004db338
        ;   XREF to: 004da8b7 (UNCONDITIONAL_JUMP)  ; LAB_004da8b7
    MOV ECX,dword ptr [EAX + 0x20b80]   ; 004db33d
        ;   Label: LAB_004db33d
    MOV EDX,dword ptr [ESI + 0x314]     ; 004db343
    ADD ECX,EDX                         ; 004db349
    MOV dword ptr [EAX + 0x20b80],ECX   ; 004db34b
    CMP ECX,0x64                        ; 004db351
    JLE 0x004db360                      ; 004db354
        ;   XREF to: 004db360 (CONDITIONAL_JUMP)  ; LAB_004db360
    MOV dword ptr [EAX + 0x20b80],0x64  ; 004db356
    LEA EAX,[EDI + 0x20]                ; 004db360
        ;   Label: LAB_004db360
    PUSH EAX                            ; 004db363
    PUSH 0x5c5fe2                       ; 004db364 | = "wp_getmana.wav"
    PUSH EDI                            ; 004db369
    MOV ESI,dword ptr [0x006045f8]      ; 004db36a | DAT_006045f8
    PUSH ESI                            ; 004db370
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 004db371
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004db376
    XOR EBX,EBX                         ; 004db379
    JMP 0x004da8b7                      ; 004db37b
        ;   XREF to: 004da8b7 (UNCONDITIONAL_JUMP)  ; LAB_004da8b7
    TEST EBX,EBX                        ; 004db380
        ;   Label: LAB_004db380
    JZ 0x004da90e                       ; 004db382
        ;   XREF to: 004da90e (CONDITIONAL_JUMP)  ; LAB_004da90e
    CMP dword ptr [EBP + 0x10],0x64     ; 004db388
    JL 0x004db39b                       ; 004db38c
        ;   XREF to: 004db39b (CONDITIONAL_JUMP)  ; LAB_004db39b
    XOR EAX,EAX                         ; 004db38e
    ADD ESP,0x32c                       ; 004db390
    POP EBP                             ; 004db396
    POP EDI                             ; 004db397
    POP ESI                             ; 004db398
    POP EBX                             ; 004db399
    RET                                 ; 004db39a
    MOV ESI,dword ptr [ESP + 0x344]     ; 004db39b
        ;   Label: LAB_004db39b
    MOV EAX,dword ptr [ESP + 0x344]     ; 004db3a2
    PUSH ESI                            ; 004db3a9
    MOV EAX,dword ptr [EAX + 0x154]     ; 004db3aa
    CALL dword ptr [EAX + 0x94]         ; 004db3b0
    MOV EDI,dword ptr [EBP + 0x4]       ; 004db3b6
    ADD ESP,0x4                         ; 004db3b9
    CMP EAX,EDI                         ; 004db3bc
    JZ 0x004da90e                       ; 004db3be
        ;   XREF to: 004da90e (CONDITIONAL_JUMP)  ; LAB_004da90e
    PUSH 0x0                            ; 004db3c4
    MOV EAX,dword ptr [ESI + 0x154]     ; 004db3c6
    PUSH ESI                            ; 004db3cc
    CALL dword ptr [EAX + 0x8c]         ; 004db3cd
    MOV ECX,dword ptr [EBP + 0x4]       ; 004db3d3
    ADD ESP,0x8                         ; 004db3d6
    TEST ECX,ECX                        ; 004db3d9
    JZ 0x004da90e                       ; 004db3db
        ;   XREF to: 004da90e (CONDITIONAL_JUMP)  ; LAB_004da90e
    PUSH ECX                            ; 004db3e1
    MOV EAX,dword ptr [ESI + 0x154]     ; 004db3e2
    PUSH ESI                            ; 004db3e8
    CALL dword ptr [EAX + 0x88]         ; 004db3e9
    ADD ESP,0x8                         ; 004db3ef
    JMP 0x004da90e                      ; 004db3f2
        ;   XREF to: 004da90e (UNCONDITIONAL_JUMP)  ; LAB_004da90e
    CMP EDI,0xa                         ; 004db3f7
        ;   Label: LAB_004db3f7
    JNZ 0x004daa67                      ; 004db3fa
        ;   XREF to: 004daa67 (CONDITIONAL_JUMP)  ; LAB_004daa67
    MOV ESI,0x5c601c                    ; 004db400 | DAT_005c601c
    JMP 0x004daa3e                      ; 004db405
        ;   XREF to: 004daa3e (UNCONDITIONAL_JUMP)  ; LAB_004daa3e
    TEST EAX,EAX                        ; 004db40a
        ;   Label: LAB_004db40a
    JZ 0x004db412                       ; 004db40c
        ;   XREF to: 004db412 (CONDITIONAL_JUMP)  ; LAB_004db412
    TEST EBX,EBX                        ; 004db40e
    JZ 0x004db41e                       ; 004db410
        ;   XREF to: 004db41e (CONDITIONAL_JUMP)  ; LAB_004db41e
    MOV ESI,dword ptr [ESP + 0x300]     ; 004db412
        ;   Label: LAB_004db412
    JMP 0x004daa3e                      ; 004db419
        ;   XREF to: 004daa3e (UNCONDITIONAL_JUMP)  ; LAB_004daa3e
    FLD float ptr [EAX + 0x2d8]         ; 004db41e
        ;   Label: LAB_004db41e
    CALL crt_math.c_round_FUN_005a3120  ; 004db424
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x328]       ; 004db429
    MOV ECX,dword ptr [ESP + 0x328]     ; 004db430
    PUSH ECX                            ; 004db437
    PUSH 0x5c6021                       ; 004db438 | = "You've received : %d health"
    LEA EAX,[ESP + 0x108]               ; 004db43d
    PUSH EAX                            ; 004db444
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004db445
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004db44a
    JMP 0x004daa67                      ; 004db44d
        ;   XREF to: 004daa67 (UNCONDITIONAL_JUMP)  ; LAB_004daa67
    PUSH 0x1                            ; 004db452
        ;   Label: LAB_004db452
    MOV EDX,dword ptr [ESP + 0x348]     ; 004db454
    PUSH EDX                            ; 004db45b
    MOV ECX,dword ptr [0x00600530]      ; 004db45c | DAT_00600530
    PUSH ECX                            ; 004db462
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10 ; 004db463
        ;   XREF to: 004f6f10 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10(CDemonMission * this_ptr, undefined4 param_2, undefined4 param_3)
    MOV EAX,0x1                         ; 004db468
    ADD ESP,0xc                         ; 004db46d
    ADD ESP,0x32c                       ; 004db470
    POP EBP                             ; 004db476
    POP EDI                             ; 004db477
    POP ESI                             ; 004db478
    POP EBX                             ; 004db479
    RET                                 ; 004db47a
    PUSH 0x1                            ; 004db47b
        ;   Label: LAB_004db47b
    PUSH ESI                            ; 004db47d
    MOV EBX,dword ptr [0x00600530]      ; 004db47e | DAT_00600530
    PUSH EBX                            ; 004db484
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10 ; 004db485
        ;   XREF to: 004f6f10 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10(CDemonMission * this_ptr, undefined4 param_2, undefined4 param_3)
    MOV EAX,0x1                         ; 004db48a
    ADD ESP,0xc                         ; 004db48f
    ADD ESP,0x32c                       ; 004db492
    POP EBP                             ; 004db498
    POP EDI                             ; 004db499
    POP ESI                             ; 004db49a
    POP EBX                             ; 004db49b
    RET                                 ; 004db49c
    ADD EAX,0x2d4                       ; 004db49d
        ;   Label: LAB_004db49d
    PUSH EAX                            ; 004db4a2
    MOV EDX,dword ptr [ESP + 0x314]     ; 004db4a3
    PUSH EDX                            ; 004db4aa
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 004db4ab
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 004db4b0
    TEST EAX,EAX                        ; 004db4b3
    JNZ 0x004db176                      ; 004db4b5
        ;   XREF to: 004db176 (CONDITIONAL_JUMP)  ; LAB_004db176
    MOV EAX,dword ptr [ESP + 0x318]     ; 004db4bb
    MOV ECX,dword ptr [EBX + 0x318]     ; 004db4c2
    CMP ECX,dword ptr [EAX + 0x318]     ; 004db4c8
    JNZ 0x004db176                      ; 004db4ce
        ;   XREF to: 004db176 (CONDITIONAL_JUMP)  ; LAB_004db176
    MOV EAX,dword ptr [ESP + 0x318]     ; 004db4d4
    PUSH 0x5c6197                       ; 004db4db | = "Found existing ammo, but no weapon\n"
    MOV ESI,dword ptr [EBX + 0x314]     ; 004db4e0
    MOV EAX,dword ptr [EAX + 0x314]     ; 004db4e6
    MOV EDI,dword ptr [0x005f1690]      ; 004db4ec | g_CConsolePtr
    ADD ESI,EAX                         ; 004db4f2
    PUSH EDI                            ; 004db4f4 | g_CConsoleInstance
    MOV dword ptr [EBX + 0x314],ESI     ; 004db4f5
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 004db4fb
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004db500
    PUSH 0x1                            ; 004db503
    MOV EBP,dword ptr [ESP + 0x348]     ; 004db505
    PUSH EBP                            ; 004db50c
    MOV EAX,[0x00600530]                ; 004db50d | DAT_00600530
    PUSH EAX                            ; 004db512
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10 ; 004db513
        ;   XREF to: 004f6f10 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10(CDemonMission * this_ptr, undefined4 param_2, undefined4 param_3)
    MOV EAX,0x1                         ; 004db518
    ADD ESP,0xc                         ; 004db51d
    ADD ESP,0x32c                       ; 004db520
    POP EBP                             ; 004db526
    POP EDI                             ; 004db527
    POP ESI                             ; 004db528
    POP EBX                             ; 004db529
    RET                                 ; 004db52a
    PUSH EAX                            ; 004db52b
        ;   Label: LAB_004db52b
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870 ; 004db52c
        ;   XREF to: 00408870 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004db531
    PUSH EAX                            ; 004db534
    PUSH EDI                            ; 004db535
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004db536
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004db53b
    TEST EAX,EAX                        ; 004db53e
    JNZ 0x004db1bc                      ; 004db540
        ;   XREF to: 004db1bc (CONDITIONAL_JUMP)  ; LAB_004db1bc
    JMP 0x004db1d5                      ; 004db546
        ;   XREF to: 004db1d5 (UNCONDITIONAL_JUMP)  ; LAB_004db1d5
    PUSH EAX                            ; 004db54b
        ;   Label: LAB_004db54b
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870 ; 004db54c
        ;   XREF to: 00408870 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004db551
    PUSH EAX                            ; 004db554
    MOV ECX,dword ptr [ESP + 0x318]     ; 004db555
    PUSH ECX                            ; 004db55c
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004db55d
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004db562
    TEST EAX,EAX                        ; 004db565
    JNZ 0x004db20f                      ; 004db567
        ;   XREF to: 004db20f (CONDITIONAL_JUMP)  ; LAB_004db20f
    MOV EDX,dword ptr [ESP + 0x318]     ; 004db56d
    MOV EAX,dword ptr [EBX + 0x56c]     ; 004db574
    CMP EAX,dword ptr [EDX + 0x318]     ; 004db57a
    JNZ 0x004db20f                      ; 004db580
        ;   XREF to: 004db20f (CONDITIONAL_JUMP)  ; LAB_004db20f
    PUSH 0x1                            ; 004db586
    MOV EDI,dword ptr [ESP + 0x348]     ; 004db588
    MOV EAX,dword ptr [EDX + 0x314]     ; 004db58f
    MOV ESI,dword ptr [EBX + 0x568]     ; 004db595
    PUSH EDI                            ; 004db59b
    MOV EBP,dword ptr [0x00600530]      ; 004db59c | DAT_00600530
    ADD ESI,EAX                         ; 004db5a2
    PUSH EBP                            ; 004db5a4
    MOV dword ptr [EBX + 0x568],ESI     ; 004db5a5
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10 ; 004db5ab
        ;   XREF to: 004f6f10 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10(CDemonMission * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 004db5b0
    PUSH 0x5c61bb                       ; 004db5b3 | = "Found weapon to put this ammo into\n"
    MOV EAX,[0x005f1690]                ; 004db5b8 | g_CConsolePtr
    PUSH EAX                            ; 004db5bd | g_CConsoleInstance
    JMP 0x004db2b5                      ; 004db5be
        ;   XREF to: 004db2b5 (UNCONDITIONAL_JUMP)  ; LAB_004db2b5
    MOV EBX,dword ptr [0x02d0c150]      ; 004db5c3 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004db5c3
    PUSH EBX                            ; 004db5c9
    MOV ESI,dword ptr [ESP + 0x348]     ; 004db5ca
    PUSH ESI                            ; 004db5d1
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004db5d2
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004db5d7
    MOV EDI,EAX                         ; 004db5da
    TEST EAX,EAX                        ; 004db5dc
    JNZ 0x004db645                      ; 004db5de
        ;   XREF to: 004db645 (CONDITIONAL_JUMP)  ; LAB_004db645
    MOV EDX,dword ptr [ESP + 0x344]     ; 004db5e0
        ;   Label: LAB_004db5e0
    MOV EAX,dword ptr [EBP + 0x10]      ; 004db5e7
    PUSH EDX                            ; 004db5ea
    MOV dword ptr [EBP + EAX*0x4 + 0x14],EDX ; 004db5eb
    MOV ESI,dword ptr [0x00600530]      ; 004db5ef | DAT_00600530
    MOV EAX,dword ptr [EBP + 0x10]      ; 004db5f5
    PUSH ESI                            ; 004db5f8
    INC EAX                             ; 004db5f9
    MOV EBX,EDX                         ; 004db5fa
    MOV dword ptr [EBP + 0x10],EAX      ; 004db5fc
    CALL core_mission.cpp_CDemonMission_removeActorFromList_FUN_004f69a0 ; 004db5ff
        ;   XREF to: 004f69a0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeActorFromList_FUN_004f69a0(CDemonMission * this_ptr, CDemonActor * actor_ptr)
    ADD ESP,0x8                         ; 004db604
    MOV EAX,EBX                         ; 004db607
    PUSH EBP                            ; 004db609
    MOV EDX,EBX                         ; 004db60a
    MOV EAX,dword ptr [EAX + 0x154]     ; 004db60c
    PUSH EDX                            ; 004db612
    CALL dword ptr [EAX + 0x6c]         ; 004db613
    ADD ESP,0x8                         ; 004db616
    TEST EDI,EDI                        ; 004db619
    JZ 0x004db635                       ; 004db61b
        ;   XREF to: 004db635 (CONDITIONAL_JUMP)  ; LAB_004db635
    MOV EAX,dword ptr [EBP + 0x338]     ; 004db61d
    TEST EAX,EAX                        ; 004db623
    JNZ 0x004db635                      ; 004db625
        ;   XREF to: 004db635 (CONDITIONAL_JUMP)  ; LAB_004db635
    PUSH 0x1                            ; 004db627
    PUSH 0x5                            ; 004db629
    PUSH EDI                            ; 004db62b
    PUSH EBP                            ; 004db62c
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40 ; 004db62d
        ;   XREF to: 004dbb40 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004db632
    MOV EAX,0x1                         ; 004db635
        ;   Label: LAB_004db635
    ADD ESP,0x32c                       ; 004db63a
    POP EBP                             ; 004db640
    POP EDI                             ; 004db641
    POP ESI                             ; 004db642
    POP EBX                             ; 004db643
    RET                                 ; 004db644
    MOV EDX,dword ptr [0x01d72c08]      ; 004db645 | g_CMeleeClassInfo.name_hash
        ;   Label: LAB_004db645
    PUSH EDX                            ; 004db64b
    PUSH EAX                            ; 004db64c
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004db64d
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004db652
    TEST EAX,EAX                        ; 004db655
    JNZ 0x004db72f                      ; 004db657
        ;   XREF to: 004db72f (CONDITIONAL_JUMP)  ; LAB_004db72f
    MOV EBX,dword ptr [EBP + 0x10]      ; 004db65d
    MOV dword ptr [ESP + 0x320],EAX     ; 004db660
    TEST EBX,EBX                        ; 004db667
    JLE 0x004db6a3                      ; 004db669
        ;   XREF to: 004db6a3 (CONDITIONAL_JUMP)  ; LAB_004db6a3
    MOV ESI,EBP                         ; 004db66b
    MOV EDX,dword ptr [0x02d0c150]      ; 004db66d | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004db66d
    PUSH EDX                            ; 004db673
    MOV ECX,dword ptr [ESI + 0x14]      ; 004db674
    PUSH ECX                            ; 004db677
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004db678
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 004db67d
    ADD ESP,0x8                         ; 004db67f
    TEST EAX,EAX                        ; 004db682
    JNZ 0x004db76d                      ; 004db684
        ;   XREF to: 004db76d (CONDITIONAL_JUMP)  ; LAB_004db76d
    MOV ECX,dword ptr [ESP + 0x320]     ; 004db68a
        ;   Label: LAB_004db68a
    ADD ESI,0x4                         ; 004db691
    INC ECX                             ; 004db694
    MOV EBX,dword ptr [EBP + 0x10]      ; 004db695
    MOV dword ptr [ESP + 0x320],ECX     ; 004db698
    CMP ECX,EBX                         ; 004db69f
    JL 0x004db66d                       ; 004db6a1
        ;   XREF to: 004db66d (CONDITIONAL_JUMP)  ; LAB_004db66d
    XOR EBX,EBX                         ; 004db6a3
        ;   Label: LAB_004db6a3
    MOV EAX,dword ptr [EBP + 0x10]      ; 004db6a5
    MOV dword ptr [ESP + 0x31c],EBX     ; 004db6a8
    TEST EAX,EAX                        ; 004db6af
    JLE 0x004db705                      ; 004db6b1
        ;   XREF to: 004db705 (CONDITIONAL_JUMP)  ; LAB_004db705
    MOV dword ptr [ESP + 0x324],EBP     ; 004db6b3
    MOV ESI,dword ptr [0x007dfd24]      ; 004db6ba | g_CAmmoClassInfo.name_hash
        ;   Label: LAB_004db6ba
    MOV EAX,dword ptr [ESP + 0x324]     ; 004db6c0
    PUSH ESI                            ; 004db6c7
    MOV EDX,dword ptr [EAX + 0x14]      ; 004db6c8
    PUSH EDX                            ; 004db6cb
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004db6cc
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 004db6d1
    ADD ESP,0x8                         ; 004db6d3
    TEST EAX,EAX                        ; 004db6d6
    JNZ 0x004db7f4                      ; 004db6d8
        ;   XREF to: 004db7f4 (CONDITIONAL_JUMP)  ; LAB_004db7f4
    MOV EAX,dword ptr [ESP + 0x324]     ; 004db6de
        ;   Label: LAB_004db6de
    MOV EDX,dword ptr [ESP + 0x31c]     ; 004db6e5
    MOV ECX,dword ptr [EBP + 0x10]      ; 004db6ec
    ADD EAX,0x4                         ; 004db6ef
    INC EDX                             ; 004db6f2
    MOV dword ptr [ESP + 0x324],EAX     ; 004db6f3
    MOV dword ptr [ESP + 0x31c],EDX     ; 004db6fa
    CMP EDX,ECX                         ; 004db701
    JL 0x004db6ba                       ; 004db703
        ;   XREF to: 004db6ba (CONDITIONAL_JUMP)  ; LAB_004db6ba
    TEST EBX,EBX                        ; 004db705
        ;   Label: LAB_004db705
    JZ 0x004db5e0                       ; 004db707
        ;   XREF to: 004db5e0 (CONDITIONAL_JUMP)  ; LAB_004db5e0
    PUSH 0x1                            ; 004db70d
    PUSH EDI                            ; 004db70f
    MOV EBX,dword ptr [0x00600530]      ; 004db710 | DAT_00600530
    PUSH EBX                            ; 004db716
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10 ; 004db717
        ;   XREF to: 004f6f10 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10(CDemonMission * this_ptr, undefined4 param_2, undefined4 param_3)
    MOV EAX,0x1                         ; 004db71c
    ADD ESP,0xc                         ; 004db721
    ADD ESP,0x32c                       ; 004db724
    POP EBP                             ; 004db72a
    POP EDI                             ; 004db72b
    POP ESI                             ; 004db72c
    POP EBX                             ; 004db72d
    RET                                 ; 004db72e
    MOV EAX,dword ptr [EBP + 0x10]      ; 004db72f
        ;   Label: LAB_004db72f
    PUSH 0x0                            ; 004db732
    MOV dword ptr [EBP + EAX*0x4 + 0x14],ESI ; 004db734
    PUSH ESI                            ; 004db738
    MOV EAX,dword ptr [EBP + 0x10]      ; 004db739
    MOV EDI,dword ptr [0x00600530]      ; 004db73c | DAT_00600530
    INC EAX                             ; 004db742
    PUSH EDI                            ; 004db743
    MOV dword ptr [EBP + 0x10],EAX      ; 004db744
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10 ; 004db747
        ;   XREF to: 004f6f10 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10(CDemonMission * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 004db74c
    PUSH EBP                            ; 004db74f
    MOV EAX,dword ptr [ESI + 0x154]     ; 004db750
    PUSH ESI                            ; 004db756
    CALL dword ptr [EAX + 0x6c]         ; 004db757
    MOV EAX,0x1                         ; 004db75a
    ADD ESP,0x8                         ; 004db75f
    ADD ESP,0x32c                       ; 004db762
    POP EBP                             ; 004db768
    POP EDI                             ; 004db769
    POP ESI                             ; 004db76a
    POP EBX                             ; 004db76b
    RET                                 ; 004db76c
    PUSH EAX                            ; 004db76d
        ;   Label: LAB_004db76d
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870 ; 004db76e
        ;   XREF to: 00408870 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004db773
    PUSH EAX                            ; 004db776
    PUSH EDI                            ; 004db777
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870 ; 004db778
        ;   XREF to: 00408870 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004db77d
    PUSH EAX                            ; 004db780
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 004db781
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 004db786
    TEST EAX,EAX                        ; 004db789
    JNZ 0x004db68a                      ; 004db78b
        ;   XREF to: 004db68a (CONDITIONAL_JUMP)  ; LAB_004db68a
    MOV EDX,dword ptr [EBX + 0x56c]     ; 004db791
    CMP EDX,dword ptr [EDI + 0x56c]     ; 004db797
    JNZ 0x004db68a                      ; 004db79d
        ;   XREF to: 004db68a (CONDITIONAL_JUMP)  ; LAB_004db68a
    MOV EAX,dword ptr [EDI + 0x568]     ; 004db7a3
    MOV ECX,dword ptr [EBX + 0x568]     ; 004db7a9
    ADD ECX,EAX                         ; 004db7af
    PUSH 0x5c6226                       ; 004db7b1 | = "Found same weapon, increasing ammoCou..."
    MOV dword ptr [EBX + 0x568],ECX     ; 004db7b6
    MOV EBX,dword ptr [0x005f1690]      ; 004db7bc | g_CConsolePtr
    PUSH EBX                            ; 004db7c2 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 004db7c3
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004db7c8
    PUSH 0x1                            ; 004db7cb
    MOV ESI,dword ptr [ESP + 0x348]     ; 004db7cd
    PUSH ESI                            ; 004db7d4
    MOV EDI,dword ptr [0x00600530]      ; 004db7d5 | DAT_00600530
    PUSH EDI                            ; 004db7db
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10 ; 004db7dc
        ;   XREF to: 004f6f10 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_004f6f10(CDemonMission * this_ptr, undefined4 param_2, undefined4 param_3)
    MOV EAX,0x1                         ; 004db7e1
    ADD ESP,0xc                         ; 004db7e6
    ADD ESP,0x32c                       ; 004db7e9
    POP EBP                             ; 004db7ef
    POP EDI                             ; 004db7f0
    POP ESI                             ; 004db7f1
    POP EBX                             ; 004db7f2
    RET                                 ; 004db7f3
    PUSH EDI                            ; 004db7f4
        ;   Label: LAB_004db7f4
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870 ; 004db7f5
        ;   XREF to: 00408870 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004db7fa
    PUSH EAX                            ; 004db7fd
    LEA EAX,[ESI + 0x2d4]               ; 004db7fe
    PUSH EAX                            ; 004db804
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 004db805
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 004db80a
    TEST EAX,EAX                        ; 004db80d
    JNZ 0x004db6de                      ; 004db80f
        ;   XREF to: 004db6de (CONDITIONAL_JUMP)  ; LAB_004db6de
    PUSH EDI                            ; 004db815
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870 ; 004db816
        ;   XREF to: 00408870 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004db81b
    PUSH EAX                            ; 004db81e
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 004db81f
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c4f0(char * class_name)
    ADD ESP,0x4                         ; 004db824
    PUSH EAX                            ; 004db827
    MOV ECX,dword ptr [0x00600530]      ; 004db828 | DAT_00600530
    PUSH ECX                            ; 004db82e
    MOV EBX,EAX                         ; 004db82f
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004f7530 ; 004db831
        ;   XREF to: 004f7530 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004f7530(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004db836
    MOV EAX,dword ptr [EBX + 0x154]     ; 004db839
    PUSH EBX                            ; 004db83f
    CALL dword ptr [EAX]                ; 004db840
    MOV EAX,dword ptr [ESI + 0x314]     ; 004db842
    MOV dword ptr [EBX + 0x568],EAX     ; 004db848
    MOV EAX,dword ptr [ESI + 0x318]     ; 004db84e
    MOV dword ptr [EBX + 0x56c],EAX     ; 004db854
    ADD ESP,0x4                         ; 004db85a
    MOV ESI,dword ptr [EBP + 0x4]       ; 004db85d
    PUSH ESI                            ; 004db860
    MOV EAX,dword ptr [EBX + 0x154]     ; 004db861
    PUSH EBX                            ; 004db867
    CALL dword ptr [EAX + 0x88]         ; 004db868
    ADD ESP,0x8                         ; 004db86e
    PUSH EBP                            ; 004db871
    MOV EAX,dword ptr [EBX + 0x154]     ; 004db872
    PUSH EBX                            ; 004db878
    CALL dword ptr [EAX + 0x6c]         ; 004db879
    ADD ESP,0x8                         ; 004db87c
    MOV EAX,dword ptr [ESP + 0x324]     ; 004db87f
    MOV EDX,dword ptr [EAX + 0x14]      ; 004db886
    PUSH EDX                            ; 004db889
    CALL core_actor.cpp_FUN_004085a0    ; 004db88a
        ;   XREF to: 004085a0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004085a0()
    ADD ESP,0x4                         ; 004db88f
    MOV EAX,dword ptr [ESP + 0x324]     ; 004db892
    PUSH EDI                            ; 004db899
    MOV dword ptr [EAX + 0x14],EBX      ; 004db89a
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870 ; 004db89d
        ;   XREF to: 00408870 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004db8a2
    PUSH EAX                            ; 004db8a5
    PUSH 0x5c624f                       ; 004db8a6 | = "Converting existing ammo for %s to we..."
    MOV ECX,dword ptr [0x005f1690]      ; 004db8ab | g_CConsolePtr
    PUSH ECX                            ; 004db8b1 | g_CConsoleInstance
    MOV EBX,0x1                         ; 004db8b2
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 004db8b7
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004db8bc
    JMP 0x004db6de                      ; 004db8bf
        ;   XREF to: 004db6de (UNCONDITIONAL_JUMP)  ; LAB_004db6de

