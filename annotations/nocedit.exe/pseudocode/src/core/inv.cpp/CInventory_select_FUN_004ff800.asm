; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_inv_cpp_CInventory_select_FUN_004ff800(CInventory *this_ptr,CDemonActor *actor_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor_ptr
; Local Variables:
; char[256]        Stack[-0x114]:256  local_114
; CHealthItem *    Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_hero.cpp_CHero_tryUseSelectedItem_FUN_004f3760 at 004f37b0
;   core_inv.cpp_CInventory_autoUseHealthItem_FUN_00501570 at 005015f4
;
; Referenced Globals:
;   TerminatedCString s_CAmmo_00630a01
;   TerminatedCString s_core_inv_cpp_00630a07
;   TerminatedCString s_CInventory_select_Catch__00630a17
;   TerminatedCString s_CWeapon_00630a35
;   TerminatedCString s_CHealthItem_00630a3d
;   TerminatedCString s_core_inv_cpp_00630a49
;   TerminatedCString s_CInventory_select_Catch__00630a59
;   TerminatedCString s_You_have_used_00630a77
;   TerminatedCString s_anon_00630a88
;   TerminatedCString s_CGasMask_00630a8a
;   TerminatedCString s_CBoxActor_00630a93
;   double DOUBLE_00630aa2 = 98
;   CEventList* g_CEventListPtr = 02d05310
;   CGame* g_CGamePtr = 02d81a9c
;   undefined4 g_CAmmoClassInfo.name_hash
;   ... and 9 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_event.cpp_CEventList_executeCommands_FUN_004aabe0
;   core_game.cpp_CGame_displayMessage_FUN_004d7f20
;   core_health.cpp_CHealthItem_useItem_FUN_004f1fd0
;   core_inv.cpp_CInventory_removeItem_FUN_004fea70
;   core_inv.cpp_CInventory_selectWeapon_FUN_004feb10
;   core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10
;   core_inv.cpp_getItemDisplayName_FUN_004fcf00
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   support_newmsg.cpp_getLocalizedString_FUN_005441f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ff800
        ;   Label: core_inv.cpp_CInventory_select_FUN_004ff800
    PUSH ESI                            ; 004ff801
    PUSH EDI                            ; 004ff802
    PUSH EBP                            ; 004ff803
    SUB ESP,0x104                       ; 004ff804
    MOV EBP,dword ptr [ESP + 0x118]     ; 004ff80a
    MOV EBX,dword ptr [ESP + 0x11c]     ; 004ff811
    PUSH 0x630a01                       ; 004ff818 | = "CAmmo"
    PUSH EBX                            ; 004ff81d
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004ff81e
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004ff823
    TEST EAX,EAX                        ; 004ff826
    JZ 0x004ff880                       ; 004ff828
        ;   XREF to: 004ff880 (CONDITIONAL_JUMP)  ; LAB_004ff880
    MOV EDX,dword ptr [0x008223a4]      ; 004ff82a | g_CAmmoClassInfo.name_hash
    PUSH EDX                            ; 004ff830
    PUSH EBX                            ; 004ff831
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004ff832
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004ff837
    MOV EBX,EAX                         ; 004ff83a
    TEST EAX,EAX                        ; 004ff83c
    JNZ 0x004ff863                      ; 004ff83e
        ;   XREF to: 004ff863 (CONDITIONAL_JUMP)  ; LAB_004ff863
    MOV ECX,0x630a07                    ; 004ff840 | = "..\\core\\inv.cpp"
    MOV ESI,0x5c3                       ; 004ff845
    PUSH 0x630a17                       ; 004ff84a | = "CInventory::select - Catch 22"
    MOV dword ptr [0x02f0ca48],ECX      ; 004ff84f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004ff855 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004ff85b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004ff860
    MOV EDI,dword ptr [EBX + 0x318]     ; 004ff863
        ;   Label: LAB_004ff863
    PUSH EDI                            ; 004ff869
    PUSH EBP                            ; 004ff86a
    CALL core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10 ; 004ff86b
        ;   XREF to: 004ffe10 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10(CInventory * this_ptr, int ammo_type)
    ADD ESP,0x8                         ; 004ff870
    XOR EAX,EAX                         ; 004ff873
        ;   Label: LAB_004ff873
    ADD ESP,0x104                       ; 004ff875
    POP EBP                             ; 004ff87b
    POP EDI                             ; 004ff87c
    POP ESI                             ; 004ff87d
    POP EBX                             ; 004ff87e
    RET                                 ; 004ff87f
    PUSH 0x630a35                       ; 004ff880 | = "CWeapon"
        ;   Label: LAB_004ff880
    PUSH EBX                            ; 004ff885
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004ff886
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004ff88b
    TEST EAX,EAX                        ; 004ff88e
    JNZ 0x004ff916                      ; 004ff890
        ;   XREF to: 004ff916 (CONDITIONAL_JUMP)  ; LAB_004ff916
    PUSH 0x630a3d                       ; 004ff896 | = "CHealthItem"
    PUSH EBX                            ; 004ff89b
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004ff89c
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004ff8a1
    TEST EAX,EAX                        ; 004ff8a4
    JZ 0x004ffa16                       ; 004ff8a6
        ;   XREF to: 004ffa16 (CONDITIONAL_JUMP)  ; LAB_004ffa16
    MOV EAX,[0x02db87b8]                ; 004ff8ac | DAT_02db8780.name_hash
    PUSH EAX                            ; 004ff8b1
    PUSH EBX                            ; 004ff8b2
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004ff8b3
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004ff8b8
    MOV dword ptr [ESP + 0x100],EAX     ; 004ff8bb
    TEST EAX,EAX                        ; 004ff8c2
    JNZ 0x004ff8e9                      ; 004ff8c4
        ;   XREF to: 004ff8e9 (CONDITIONAL_JUMP)  ; LAB_004ff8e9
    MOV EDX,0x630a49                    ; 004ff8c6 | = "..\\core\\inv.cpp"
    MOV ECX,0x5c9                       ; 004ff8cb
    PUSH 0x630a59                       ; 004ff8d0 | = "CInventory::select - Catch 22"
    MOV dword ptr [0x02f0ca48],EDX      ; 004ff8d5 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004ff8db | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004ff8e1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004ff8e6
    MOV EAX,[0x02db87d0]                ; 004ff8e9 | g_LocalHeroIndex
        ;   Label: LAB_004ff8e9
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004ff8ee | g_HeroActors
    FLD float ptr [EAX + 0x243c]        ; 004ff8f5
    FCOMP double ptr [0x00630aa2]       ; 004ff8fb | DOUBLE_00630aa2
    FNSTSW AX                           ; 004ff901
    SAHF                                ; 004ff903
    JBE 0x004ff931                      ; 004ff904
        ;   XREF to: 004ff931 (CONDITIONAL_JUMP)  ; LAB_004ff931
    MOV EAX,0x1                         ; 004ff906
    ADD ESP,0x104                       ; 004ff90b
    POP EBP                             ; 004ff911
    POP EDI                             ; 004ff912
    POP ESI                             ; 004ff913
    POP EBX                             ; 004ff914
    RET                                 ; 004ff915
    PUSH 0x1                            ; 004ff916
        ;   Label: LAB_004ff916
    PUSH 0x5                            ; 004ff918
    PUSH EBX                            ; 004ff91a
    PUSH EBP                            ; 004ff91b
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004feb10 ; 004ff91c
        ;   XREF to: 004feb10 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004feb10(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004ff921
    XOR EAX,EAX                         ; 004ff924
    ADD ESP,0x104                       ; 004ff926
    POP EBP                             ; 004ff92c
    POP EDI                             ; 004ff92d
    POP ESI                             ; 004ff92e
    POP EBX                             ; 004ff92f
    RET                                 ; 004ff930
    PUSH 0x630a77                       ; 004ff931 | = "You have used : "
        ;   Label: LAB_004ff931
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004ff936
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004ff93b
    MOV EDI,ESP                         ; 004ff93e
    MOV ESI,EAX                         ; 004ff940
    PUSH EDI                            ; 004ff942
    MOV AL,byte ptr [ESI]               ; 004ff943
        ;   Label: LAB_004ff943
    MOV byte ptr [EDI],AL               ; 004ff945
    CMP AL,0x0                          ; 004ff947
    JZ 0x004ff95b                       ; 004ff949
        ;   XREF to: 004ff95b (CONDITIONAL_JUMP)  ; LAB_004ff95b
    MOV AL,byte ptr [ESI + 0x1]         ; 004ff94b
    ADD ESI,0x2                         ; 004ff94e
    MOV byte ptr [EDI + 0x1],AL         ; 004ff951
    ADD EDI,0x2                         ; 004ff954
    CMP AL,0x0                          ; 004ff957
    JNZ 0x004ff943                      ; 004ff959
        ;   XREF to: 004ff943 (CONDITIONAL_JUMP)  ; LAB_004ff943
    POP EDI                             ; 004ff95b
        ;   Label: LAB_004ff95b
    PUSH EBX                            ; 004ff95c
    CALL core_inv.cpp_getItemDisplayName_FUN_004fcf00 ; 004ff95d
        ;   XREF to: 004fcf00 (UNCONDITIONAL_CALL)  ; char * core_inv.cpp_getItemDisplayName_FUN_004fcf00(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004ff962
    MOV EDI,ESP                         ; 004ff965
    MOV ESI,EAX                         ; 004ff967
    PUSH EDI                            ; 004ff969
    SUB ECX,ECX                         ; 004ff96a
    DEC ECX                             ; 004ff96c
    MOV AL,0x0                          ; 004ff96d
    SCASB.REPNE ES:EDI                  ; 004ff96f
    DEC EDI                             ; 004ff971
    MOV AL,byte ptr [ESI]               ; 004ff972
        ;   Label: LAB_004ff972
    MOV byte ptr [EDI],AL               ; 004ff974
    CMP AL,0x0                          ; 004ff976
    JZ 0x004ff98a                       ; 004ff978
        ;   XREF to: 004ff98a (CONDITIONAL_JUMP)  ; LAB_004ff98a
    MOV AL,byte ptr [ESI + 0x1]         ; 004ff97a
    ADD ESI,0x2                         ; 004ff97d
    MOV byte ptr [EDI + 0x1],AL         ; 004ff980
    ADD EDI,0x2                         ; 004ff983
    CMP AL,0x0                          ; 004ff986
    JNZ 0x004ff972                      ; 004ff988
        ;   XREF to: 004ff972 (CONDITIONAL_JUMP)  ; LAB_004ff972
    POP EDI                             ; 004ff98a
        ;   Label: LAB_004ff98a
    PUSH 0x630a88                       ; 004ff98b | = "."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004ff990
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004ff995
    MOV EDI,ESP                         ; 004ff998
    MOV ESI,EAX                         ; 004ff99a
    PUSH EDI                            ; 004ff99c
    SUB ECX,ECX                         ; 004ff99d
    DEC ECX                             ; 004ff99f
    MOV AL,0x0                          ; 004ff9a0
    SCASB.REPNE ES:EDI                  ; 004ff9a2
    DEC EDI                             ; 004ff9a4
    MOV AL,byte ptr [ESI]               ; 004ff9a5
        ;   Label: LAB_004ff9a5
    MOV byte ptr [EDI],AL               ; 004ff9a7
    CMP AL,0x0                          ; 004ff9a9
    JZ 0x004ff9bd                       ; 004ff9ab
        ;   XREF to: 004ff9bd (CONDITIONAL_JUMP)  ; LAB_004ff9bd
    MOV AL,byte ptr [ESI + 0x1]         ; 004ff9ad
    ADD ESI,0x2                         ; 004ff9b0
    MOV byte ptr [EDI + 0x1],AL         ; 004ff9b3
    ADD EDI,0x2                         ; 004ff9b6
    CMP AL,0x0                          ; 004ff9b9
    JNZ 0x004ff9a5                      ; 004ff9bb
        ;   XREF to: 004ff9a5 (CONDITIONAL_JUMP)  ; LAB_004ff9a5
    POP EDI                             ; 004ff9bd
        ;   Label: LAB_004ff9bd
    MOV EAX,ESP                         ; 004ff9be
    PUSH 0x40a00000                     ; 004ff9c0
    PUSH EAX                            ; 004ff9c5
    MOV ESI,dword ptr [0x0067b654]      ; 004ff9c6 | g_CGamePtr
    PUSH ESI                            ; 004ff9cc | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004ff9cd
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    MOV EAX,[0x02db87d0]                ; 004ff9d2 | g_LocalHeroIndex
    ADD ESP,0xc                         ; 004ff9d7
    MOV EDI,dword ptr [EAX*0x4 + 0x2db87c0] ; 004ff9da | g_HeroActors
    PUSH EDI                            ; 004ff9e1
    MOV EAX,dword ptr [ESP + 0x104]     ; 004ff9e2
    PUSH EAX                            ; 004ff9e9
    CALL core_health.cpp_CHealthItem_useItem_FUN_004f1fd0 ; 004ff9ea
        ;   XREF to: 004f1fd0 (UNCONDITIONAL_CALL)  ; int core_health.cpp_CHealthItem_useItem_FUN_004f1fd0(CHealthItem * this_ptr, CCharacter * user)
    ADD ESP,0x8                         ; 004ff9ef
    TEST EAX,EAX                        ; 004ff9f2
    JG 0x004ff873                       ; 004ff9f4
        ;   XREF to: 004ff873 (CONDITIONAL_JUMP)  ; LAB_004ff873
    PUSH 0x1                            ; 004ff9fa
    PUSH EBX                            ; 004ff9fc
    PUSH EBP                            ; 004ff9fd
    CALL core_inv.cpp_CInventory_removeItem_FUN_004fea70 ; 004ff9fe
        ;   XREF to: 004fea70 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_removeItem_FUN_004fea70(CInventory * this_ptr, CDemonActor * item_to_remove, int should_delete_actor)
    MOV EAX,0x1                         ; 004ffa03
    ADD ESP,0xc                         ; 004ffa08
    ADD ESP,0x104                       ; 004ffa0b
    POP EBP                             ; 004ffa11
    POP EDI                             ; 004ffa12
    POP ESI                             ; 004ffa13
    POP EBX                             ; 004ffa14
    RET                                 ; 004ffa15
    PUSH 0x630a8a                       ; 004ffa16 | = "CGasMask"
        ;   Label: LAB_004ffa16
    PUSH EBX                            ; 004ffa1b
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004ffa1c
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004ffa21
    TEST EAX,EAX                        ; 004ffa24
    JZ 0x004ffa63                       ; 004ffa26
        ;   XREF to: 004ffa63 (CONDITIONAL_JUMP)  ; LAB_004ffa63
    MOV ESI,dword ptr [0x02d832a4]      ; 004ffa28 | g_CGasMaskClassInfo.name_hash
    PUSH ESI                            ; 004ffa2e
    PUSH EBX                            ; 004ffa2f
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004ffa30
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004ffa35
    MOV EDI,dword ptr [EAX + 0x2d4]     ; 004ffa38
    MOV EBX,EAX                         ; 004ffa3e
    TEST EDI,EDI                        ; 004ffa40
    SETZ AL                             ; 004ffa42
    AND EAX,0xff                        ; 004ffa45
    MOV dword ptr [EBX + 0x2d4],EAX     ; 004ffa4a
    MOV dword ptr [EBP + 0x454],EBX     ; 004ffa50
    XOR EAX,EAX                         ; 004ffa56
    ADD ESP,0x104                       ; 004ffa58
    POP EBP                             ; 004ffa5e
    POP EDI                             ; 004ffa5f
    POP ESI                             ; 004ffa60
    POP EBX                             ; 004ffa61
    RET                                 ; 004ffa62
    PUSH 0x630a93                       ; 004ffa63 | = "CBoxActor"
        ;   Label: LAB_004ffa63
    PUSH EBX                            ; 004ffa68
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004ffa69
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004ffa6e
    TEST EAX,EAX                        ; 004ffa71
    JZ 0x004ff873                       ; 004ffa73
        ;   XREF to: 004ff873 (CONDITIONAL_JUMP)  ; LAB_004ff873
    MOV EDX,dword ptr [0x008229e8]      ; 004ffa79 | g_CBoxActorClassInfo.name_hash
    PUSH EDX                            ; 004ffa7f
    PUSH EBX                            ; 004ffa80
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004ffa81
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004ffa86
    ADD EAX,0x600                       ; 004ffa89
    PUSH EAX                            ; 004ffa8e
    MOV ECX,dword ptr [0x006793d0]      ; 004ffa8f | g_CEventListInstance | g_CEventListPtr
    PUSH ECX                            ; 004ffa95 | g_CEventListInstance
    CALL core_event.cpp_CEventList_executeCommands_FUN_004aabe0 ; 004ffa96
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004aabe0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004ffa9b
    XOR EAX,EAX                         ; 004ffa9e
    ADD ESP,0x104                       ; 004ffaa0
    POP EBP                             ; 004ffaa6
    POP EDI                             ; 004ffaa7
    POP ESI                             ; 004ffaa8
    POP EBX                             ; 004ffaa9
    RET                                 ; 004ffaaa

