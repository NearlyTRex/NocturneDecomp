; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_inv_cpp_CInventory_select_FUN_004dcb40(CInventory *this_ptr,CDemonActor *actor_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor_ptr
; Local Variables:
; undefined1       Stack[-0x114]:1  local_114
; undefined1       Stack[-0x113]:1  local_113
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_hero.cpp_FUN_004d3c90 at 004d3d8e
;
; Referenced Globals:
;   TerminatedCString s_CAmmo_005c653e
;   TerminatedCString s_core_inv_cpp_005c6544
;   TerminatedCString s_CInventory_select_Catch_005c6554
;   TerminatedCString s_CWeapon_005c6572
;   TerminatedCString s_CHealthItem_005c657a
;   TerminatedCString s_core_inv_cpp_005c6586
;   TerminatedCString s_CInventory_select_Catch_005c6596
;   TerminatedCString s_You_have_used_005c65b4
;   undefined4 DAT_005c65c5
;   TerminatedCString s_CBoxActor_005c65c7
;   undefined4 DAT_005c65d7
;   undefined4 DAT_005fba60
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 g_CAmmoClassInfo.name_hash
;   undefined4 g_CBoxActorClassInfo.name_hash
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_isOfClass_FUN_0040c790
;   core_event.cpp_CEventList_executeCommands_FUN_0048c150
;   core_game.cpp_CGame_displayMessage_FUN_004b46b0
;   core_health.cpp_FUN_004d20c0
;   core_inv.cpp_CInventory_removeItem_FUN_004dbaa0
;   core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40
;   core_inv.cpp_FUN_004dd2d0
;   core_inv.cpp_getItemDisplayName_FUN_004d9e40
;   core_main.c_FUN_004e4330
;   support_newmsg.cpp_getLocalizedString_FUN_00508960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dcb40
        ;   Label: core_inv.cpp_CInventory_select_FUN_004dcb40
    PUSH ESI                            ; 004dcb41
    PUSH EDI                            ; 004dcb42
    PUSH EBP                            ; 004dcb43
    SUB ESP,0x104                       ; 004dcb44
    MOV EBP,dword ptr [ESP + 0x118]     ; 004dcb4a
    MOV EBX,dword ptr [ESP + 0x11c]     ; 004dcb51
    PUSH 0x5c653e                       ; 004dcb58 | = "CAmmo"
    PUSH EBX                            ; 004dcb5d
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dcb5e
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dcb63
    TEST EAX,EAX                        ; 004dcb66
    JZ 0x004dcbbf                       ; 004dcb68
        ;   XREF to: 004dcbbf (CONDITIONAL_JUMP)  ; LAB_004dcbbf
    MOV EDI,dword ptr [0x007dfd24]      ; 004dcb6a | g_CAmmoClassInfo.name_hash
    PUSH EDI                            ; 004dcb70
    PUSH EBX                            ; 004dcb71
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004dcb72
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004dcb77
    MOV EBX,EAX                         ; 004dcb7a
    TEST EAX,EAX                        ; 004dcb7c
    JNZ 0x004dcba2                      ; 004dcb7e
        ;   XREF to: 004dcba2 (CONDITIONAL_JUMP)  ; LAB_004dcba2
    MOV EAX,0x5c6544                    ; 004dcb80 | = "..\\core\\inv.cpp"
    MOV EDX,0x7bc                       ; 004dcb85
    PUSH 0x5c6554                       ; 004dcb8a | = "CInventory::select - Catch 22"
    MOV [0x01d71de0],EAX                ; 004dcb8f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 004dcb94 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004dcb9a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004dcb9f
    MOV ECX,dword ptr [EBX + 0x318]     ; 004dcba2
        ;   Label: LAB_004dcba2
    PUSH ECX                            ; 004dcba8
    PUSH EBP                            ; 004dcba9
    CALL core_inv.cpp_FUN_004dd2d0      ; 004dcbaa
        ;   XREF to: 004dd2d0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dd2d0()
    ADD ESP,0x8                         ; 004dcbaf
    XOR EAX,EAX                         ; 004dcbb2
        ;   Label: LAB_004dcbb2
    ADD ESP,0x104                       ; 004dcbb4
    POP EBP                             ; 004dcbba
    POP EDI                             ; 004dcbbb
    POP ESI                             ; 004dcbbc
    POP EBX                             ; 004dcbbd
    RET                                 ; 004dcbbe
    PUSH 0x5c6572                       ; 004dcbbf | = "CWeapon"
        ;   Label: LAB_004dcbbf
    PUSH EBX                            ; 004dcbc4
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dcbc5
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dcbca
    TEST EAX,EAX                        ; 004dcbcd
    JNZ 0x004dcc55                      ; 004dcbcf
        ;   XREF to: 004dcc55 (CONDITIONAL_JUMP)  ; LAB_004dcc55
    PUSH 0x5c657a                       ; 004dcbd5 | = "CHealthItem"
    PUSH EBX                            ; 004dcbda
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dcbdb
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dcbe0
    TEST EAX,EAX                        ; 004dcbe3
    JZ 0x004dcd55                       ; 004dcbe5
        ;   XREF to: 004dcd55 (CONDITIONAL_JUMP)  ; LAB_004dcd55
    MOV ESI,dword ptr [0x01d5b9b4]      ; 004dcbeb | g_CHealthItemClassInfo.name_hash
    PUSH ESI                            ; 004dcbf1
    PUSH EBX                            ; 004dcbf2
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004dcbf3
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004dcbf8
    MOV dword ptr [ESP + 0x100],EAX     ; 004dcbfb
    TEST EAX,EAX                        ; 004dcc02
    JNZ 0x004dcc28                      ; 004dcc04
        ;   XREF to: 004dcc28 (CONDITIONAL_JUMP)  ; LAB_004dcc28
    MOV EDI,0x5c6586                    ; 004dcc06 | = "..\\core\\inv.cpp"
    MOV EAX,0x7c2                       ; 004dcc0b
    PUSH 0x5c6596                       ; 004dcc10 | = "CInventory::select - Catch 22"
    MOV dword ptr [0x01d71de0],EDI      ; 004dcc15 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004dcc1b | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004dcc20
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004dcc25
    MOV EAX,[0x01d5ba14]                ; 004dcc28 | DAT_01d5ba14
        ;   Label: LAB_004dcc28
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004dcc2d
    FLD float ptr [EAX + 0x2538]        ; 004dcc34
    FCOMP double ptr [0x005c65d7]       ; 004dcc3a | DAT_005c65d7
    FNSTSW AX                           ; 004dcc40
    SAHF                                ; 004dcc42
    JBE 0x004dcc70                      ; 004dcc43
        ;   XREF to: 004dcc70 (CONDITIONAL_JUMP)  ; LAB_004dcc70
    MOV EAX,0x1                         ; 004dcc45
    ADD ESP,0x104                       ; 004dcc4a
    POP EBP                             ; 004dcc50
    POP EDI                             ; 004dcc51
    POP ESI                             ; 004dcc52
    POP EBX                             ; 004dcc53
    RET                                 ; 004dcc54
    PUSH 0x1                            ; 004dcc55
        ;   Label: LAB_004dcc55
    PUSH 0x5                            ; 004dcc57
    PUSH EBX                            ; 004dcc59
    PUSH EBP                            ; 004dcc5a
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40 ; 004dcc5b
        ;   XREF to: 004dbb40 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 004dcc60
    XOR EAX,EAX                         ; 004dcc63
    ADD ESP,0x104                       ; 004dcc65
    POP EBP                             ; 004dcc6b
    POP EDI                             ; 004dcc6c
    POP ESI                             ; 004dcc6d
    POP EBX                             ; 004dcc6e
    RET                                 ; 004dcc6f
    PUSH 0x5c65b4                       ; 004dcc70 | = "You have used : "
        ;   Label: LAB_004dcc70
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004dcc75
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004dcc7a
    MOV EDI,ESP                         ; 004dcc7d
    MOV ESI,EAX                         ; 004dcc7f
    PUSH EDI                            ; 004dcc81
    MOV AL,byte ptr [ESI]               ; 004dcc82
        ;   Label: LAB_004dcc82
    MOV byte ptr [EDI],AL               ; 004dcc84
    CMP AL,0x0                          ; 004dcc86
    JZ 0x004dcc9a                       ; 004dcc88
        ;   XREF to: 004dcc9a (CONDITIONAL_JUMP)  ; LAB_004dcc9a
    MOV AL,byte ptr [ESI + 0x1]         ; 004dcc8a
    ADD ESI,0x2                         ; 004dcc8d
    MOV byte ptr [EDI + 0x1],AL         ; 004dcc90
    ADD EDI,0x2                         ; 004dcc93
    CMP AL,0x0                          ; 004dcc96
    JNZ 0x004dcc82                      ; 004dcc98
        ;   XREF to: 004dcc82 (CONDITIONAL_JUMP)  ; LAB_004dcc82
    POP EDI                             ; 004dcc9a
        ;   Label: LAB_004dcc9a
    PUSH EBX                            ; 004dcc9b
    CALL core_inv.cpp_getItemDisplayName_FUN_004d9e40 ; 004dcc9c
        ;   XREF to: 004d9e40 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemDisplayName_FUN_004d9e40()
    ADD ESP,0x4                         ; 004dcca1
    MOV EDI,ESP                         ; 004dcca4
    MOV ESI,EAX                         ; 004dcca6
    PUSH EDI                            ; 004dcca8
    SUB ECX,ECX                         ; 004dcca9
    DEC ECX                             ; 004dccab
    MOV AL,0x0                          ; 004dccac
    SCASB.REPNE ES:EDI                  ; 004dccae
    DEC EDI                             ; 004dccb0
    MOV AL,byte ptr [ESI]               ; 004dccb1
        ;   Label: LAB_004dccb1
    MOV byte ptr [EDI],AL               ; 004dccb3
    CMP AL,0x0                          ; 004dccb5
    JZ 0x004dccc9                       ; 004dccb7
        ;   XREF to: 004dccc9 (CONDITIONAL_JUMP)  ; LAB_004dccc9
    MOV AL,byte ptr [ESI + 0x1]         ; 004dccb9
    ADD ESI,0x2                         ; 004dccbc
    MOV byte ptr [EDI + 0x1],AL         ; 004dccbf
    ADD EDI,0x2                         ; 004dccc2
    CMP AL,0x0                          ; 004dccc5
    JNZ 0x004dccb1                      ; 004dccc7
        ;   XREF to: 004dccb1 (CONDITIONAL_JUMP)  ; LAB_004dccb1
    POP EDI                             ; 004dccc9
        ;   Label: LAB_004dccc9
    PUSH 0x5c65c5                       ; 004dccca | DAT_005c65c5
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004dcccf
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004dccd4
    MOV EDI,ESP                         ; 004dccd7
    MOV ESI,EAX                         ; 004dccd9
    PUSH EDI                            ; 004dccdb
    SUB ECX,ECX                         ; 004dccdc
    DEC ECX                             ; 004dccde
    MOV AL,0x0                          ; 004dccdf
    SCASB.REPNE ES:EDI                  ; 004dcce1
    DEC EDI                             ; 004dcce3
    MOV AL,byte ptr [ESI]               ; 004dcce4
        ;   Label: LAB_004dcce4
    MOV byte ptr [EDI],AL               ; 004dcce6
    CMP AL,0x0                          ; 004dcce8
    JZ 0x004dccfc                       ; 004dccea
        ;   XREF to: 004dccfc (CONDITIONAL_JUMP)  ; LAB_004dccfc
    MOV AL,byte ptr [ESI + 0x1]         ; 004dccec
    ADD ESI,0x2                         ; 004dccef
    MOV byte ptr [EDI + 0x1],AL         ; 004dccf2
    ADD EDI,0x2                         ; 004dccf5
    CMP AL,0x0                          ; 004dccf8
    JNZ 0x004dcce4                      ; 004dccfa
        ;   XREF to: 004dcce4 (CONDITIONAL_JUMP)  ; LAB_004dcce4
    POP EDI                             ; 004dccfc
        ;   Label: LAB_004dccfc
    MOV EAX,ESP                         ; 004dccfd
    PUSH 0x40a00000                     ; 004dccff
    PUSH EAX                            ; 004dcd04
    MOV EDX,dword ptr [0x005fe9dc]      ; 004dcd05 | g_CGamePtr
    PUSH EDX                            ; 004dcd0b | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004b46b0 ; 004dcd0c
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b46b0(CGame * this_ptr, char * message, float duration)
    MOV EAX,[0x01d5ba14]                ; 004dcd11 | DAT_01d5ba14
    ADD ESP,0xc                         ; 004dcd16
    MOV ECX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004dcd19
    PUSH ECX                            ; 004dcd20
    MOV ESI,dword ptr [ESP + 0x104]     ; 004dcd21
    PUSH ESI                            ; 004dcd28
    CALL core_health.cpp_FUN_004d20c0   ; 004dcd29
        ;   XREF to: 004d20c0 (UNCONDITIONAL_CALL)  ; undefined core_health.cpp_FUN_004d20c0()
    ADD ESP,0x8                         ; 004dcd2e
    TEST EAX,EAX                        ; 004dcd31
    JG 0x004dcbb2                       ; 004dcd33
        ;   XREF to: 004dcbb2 (CONDITIONAL_JUMP)  ; LAB_004dcbb2
    PUSH 0x1                            ; 004dcd39
    PUSH EBX                            ; 004dcd3b
    PUSH EBP                            ; 004dcd3c
    CALL core_inv.cpp_CInventory_removeItem_FUN_004dbaa0 ; 004dcd3d
        ;   XREF to: 004dbaa0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_removeItem_FUN_004dbaa0(CInventory * this_ptr, CDemonActor * item_to_remove, int should_delete_actor)
    MOV EAX,0x1                         ; 004dcd42
    ADD ESP,0xc                         ; 004dcd47
    ADD ESP,0x104                       ; 004dcd4a
    POP EBP                             ; 004dcd50
    POP EDI                             ; 004dcd51
    POP ESI                             ; 004dcd52
    POP EBX                             ; 004dcd53
    RET                                 ; 004dcd54
    PUSH 0x5c65c7                       ; 004dcd55 | = "CBoxActor"
        ;   Label: LAB_004dcd55
    PUSH EBX                            ; 004dcd5a
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dcd5b
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dcd60
    TEST EAX,EAX                        ; 004dcd63
    JZ 0x004dcbb2                       ; 004dcd65
        ;   XREF to: 004dcbb2 (CONDITIONAL_JUMP)  ; LAB_004dcbb2
    MOV EDX,dword ptr [0x007e17b4]      ; 004dcd6b | g_CBoxActorClassInfo.name_hash
    PUSH EDX                            ; 004dcd71
    PUSH EBX                            ; 004dcd72
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004dcd73
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004dcd78
    ADD EAX,0x600                       ; 004dcd7b
    PUSH EAX                            ; 004dcd80
    MOV ECX,dword ptr [0x005fba60]      ; 004dcd81 | DAT_005fba60
    PUSH ECX                            ; 004dcd87
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 004dcd88
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004dcd8d
    XOR EAX,EAX                         ; 004dcd90
    ADD ESP,0x104                       ; 004dcd92
    POP EBP                             ; 004dcd98
    POP EDI                             ; 004dcd99
    POP ESI                             ; 004dcd9a
    POP EBX                             ; 004dcd9b
    RET                                 ; 004dcd9c

