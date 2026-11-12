; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_inv_cpp_FUN_004dc8c0(int param_1,CDemonActor *param_2)
;
; Local Variables:
; undefined        Stack[-0x218]:1  local_218
; undefined1       Stack[-0x217]:1  local_217
; undefined        Stack[-0x118]:1  local_118
; undefined1       Stack[-0x117]:1  local_117
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_hero.cpp_FUN_004cfc80 at 004cfd22
;   core_inv.cpp_CInventory_autoUseHealthItem_FUN_004df010 at 004df0aa
;
; Referenced Globals:
;   TerminatedCString s_CAmmo_005db929
;   TerminatedCString s_core_inv_cpp_005db92f
;   TerminatedCString s_CInventory_select_Catch_005db93f
;   undefined4 DAT_005db95d
;   TerminatedCString s_Reloading_Revolver_005db962
;   TerminatedCString s_CWeapon_005db977
;   TerminatedCString s_CHealthItem_005db97f
;   TerminatedCString s_core_inv_cpp_005db98b
;   TerminatedCString s_CInventory_select_Catch_005db99b
;   TerminatedCString s_You_have_used_005db9b9
;   undefined4 DAT_005db9ca
;   TerminatedCString s_CGasMask_005db9cc
;   TerminatedCString s_CBoxActor_005db9d5
;   undefined4 DAT_005db9e2
;   undefined4 DAT_006141f0
;   ... and 10 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_isOfClass_FUN_0040c840
;   core_ammo.cpp_FUN_0040e450
;   core_doc.cpp_FUN_0045d260
;   core_event.cpp_FUN_00490f80
;   core_game.cpp_CGame_displayMessage_FUN_004b31a0
;   core_health.cpp_CHealthItem_useItem_FUN_004cdf90
;   core_inv.cpp_FUN_004db8e0
;   core_inv.cpp_FUN_004db9d0
;   core_inv.cpp_getItemDisplayName_FUN_004d9f10
;   core_main.c_FUN_004e4500
;   support_newmsg.cpp_getLocalizedString_FUN_0050fe80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dc8c0
        ;   Label: core_inv.cpp_FUN_004dc8c0
    PUSH ESI                            ; 004dc8c1
    PUSH EDI                            ; 004dc8c2
    PUSH EBP                            ; 004dc8c3
    MOV EBP,ESP                         ; 004dc8c4
    SUB ESP,0x208                       ; 004dc8c6
    MOV EBX,dword ptr [EBP + 0x18]      ; 004dc8cc
    PUSH 0x5db929                       ; 004dc8cf | = "CAmmo"
    PUSH EBX                            ; 004dc8d4
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004dc8d5
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dc8da
    TEST EAX,EAX                        ; 004dc8dd
    JZ 0x004dca7e                       ; 004dc8df
        ;   XREF to: 004dca7e (CONDITIONAL_JUMP)  ; LAB_004dca7e
    MOV ESI,dword ptr [0x007bc3a4]      ; 004dc8e5 | g_CAmmoClassInfo.name_hash
    PUSH ESI                            ; 004dc8eb
    PUSH EBX                            ; 004dc8ec
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004dc8ed
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004dc8f2
    MOV dword ptr [EBP + -0x4],EAX      ; 004dc8f5
    TEST EAX,EAX                        ; 004dc8f8
    JNZ 0x004dc91e                      ; 004dc8fa
        ;   XREF to: 004dc91e (CONDITIONAL_JUMP)  ; LAB_004dc91e
    MOV EDI,0x5db92f                    ; 004dc8fc | = "..\\core\\inv.cpp"
    MOV EAX,0x6a3                       ; 004dc901
    PUSH 0x5db93f                       ; 004dc906 | = "CInventory::select - Catch 22"
    MOV dword ptr [0x01d046a0],EDI      ; 004dc90b | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004dc911 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004dc916
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004dc91b
    MOV EAX,[0x01cedef4]                ; 004dc91e | DAT_01cedef4
        ;   Label: LAB_004dc91e
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004dc923
    PUSH EAX                            ; 004dc92a
    MOV EDI,dword ptr [EAX + 0x2b0]     ; 004dc92b
    CALL dword ptr [EDI + 0x154]        ; 004dc931
    ADD ESP,0x4                         ; 004dc937
    TEST EAX,EAX                        ; 004dc93a
    JZ 0x004dc95b                       ; 004dc93c
        ;   XREF to: 004dc95b (CONDITIONAL_JUMP)  ; LAB_004dc95b
    MOV EAX,[0x01cedef4]                ; 004dc93e | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004dc943
    MOV EDX,dword ptr [EAX + 0x247e4]   ; 004dc94a
    MOV EAX,dword ptr [EAX + EDX*0x4 + 0x2498c] ; 004dc950
    TEST EAX,EAX                        ; 004dc957
    JNZ 0x004dc962                      ; 004dc959
        ;   XREF to: 004dc962 (CONDITIONAL_JUMP)  ; LAB_004dc962
    MOV ESP,EBP                         ; 004dc95b
        ;   Label: LAB_004dc95b
    POP EBP                             ; 004dc95d
    POP EDI                             ; 004dc95e
    POP ESI                             ; 004dc95f
    POP EBX                             ; 004dc960
    RET                                 ; 004dc961
    PUSH 0x5db95d                       ; 004dc962 | DAT_005db95d
        ;   Label: LAB_004dc962
    PUSH EAX                            ; 004dc967
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004dc968
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dc96d
    TEST EAX,EAX                        ; 004dc970
    JZ 0x004dc95b                       ; 004dc972
        ;   XREF to: 004dc95b (CONDITIONAL_JUMP)  ; LAB_004dc95b
    MOV EAX,[0x01cedef4]                ; 004dc974 | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004dc979
    MOV EDX,dword ptr [EAX + 0x247e4]   ; 004dc980
    MOV EAX,dword ptr [EAX + EDX*0x4 + 0x2498c] ; 004dc986
    CMP dword ptr [EAX + 0x6c4],0x6     ; 004dc98d
    JL 0x004dc99f                       ; 004dc994
        ;   XREF to: 004dc99f (CONDITIONAL_JUMP)  ; LAB_004dc99f
    XOR EAX,EAX                         ; 004dc996
    MOV ESP,EBP                         ; 004dc998
    POP EBP                             ; 004dc99a
    POP EDI                             ; 004dc99b
    POP ESI                             ; 004dc99c
    POP EBX                             ; 004dc99d
    RET                                 ; 004dc99e
    PUSH 0x5db962                       ; 004dc99f | = "Reloading Revolver.."
        ;   Label: LAB_004dc99f
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004dc9a4
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004dc9a9
    LEA EDI,[EBP + 0xfffffdf8]          ; 004dc9ac
    MOV ESI,EAX                         ; 004dc9b2
    PUSH EDI                            ; 004dc9b4
    MOV AL,byte ptr [ESI]               ; 004dc9b5
        ;   Label: LAB_004dc9b5
    MOV byte ptr [EDI],AL               ; 004dc9b7
    CMP AL,0x0                          ; 004dc9b9
    JZ 0x004dc9cd                       ; 004dc9bb
        ;   XREF to: 004dc9cd (CONDITIONAL_JUMP)  ; LAB_004dc9cd
    MOV AL,byte ptr [ESI + 0x1]         ; 004dc9bd
    ADD ESI,0x2                         ; 004dc9c0
    MOV byte ptr [EDI + 0x1],AL         ; 004dc9c3
    ADD EDI,0x2                         ; 004dc9c6
    CMP AL,0x0                          ; 004dc9c9
    JNZ 0x004dc9b5                      ; 004dc9cb
        ;   XREF to: 004dc9b5 (CONDITIONAL_JUMP)  ; LAB_004dc9b5
    POP EDI                             ; 004dc9cd
        ;   Label: LAB_004dc9cd
    LEA EAX,[EBP + 0xfffffdf8]          ; 004dc9ce
    PUSH 0x40a00000                     ; 004dc9d4
    PUSH EAX                            ; 004dc9d9
    MOV ECX,dword ptr [0x00616494]      ; 004dc9da | g_CGamePtr
    PUSH ECX                            ; 004dc9e0 | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004b31a0 ; 004dc9e1
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b31a0(CGame * this_ptr, char * message, float duration)
    MOV EAX,[0x01cedef4]                ; 004dc9e6 | DAT_01cedef4
    ADD ESP,0xc                         ; 004dc9eb
    MOV ESI,dword ptr [EAX*0x4 + 0x1cedee4] ; 004dc9ee
    PUSH ESI                            ; 004dc9f5
    MOV EDI,dword ptr [EBP + -0x4]      ; 004dc9f6
    PUSH EDI                            ; 004dc9f9
    CALL core_ammo.cpp_FUN_0040e450     ; 004dc9fa
        ;   XREF to: 0040e450 (UNCONDITIONAL_CALL)  ; undefined core_ammo.cpp_FUN_0040e450()
    ADD ESP,0x8                         ; 004dc9ff
    CMP EAX,0x1                         ; 004dca02
    JNZ 0x004dca5a                      ; 004dca05
        ;   XREF to: 004dca5a (CONDITIONAL_JUMP)  ; LAB_004dca5a
    MOV EAX,[0x01cedef4]                ; 004dca07 | DAT_01cedef4
    MOV EDI,dword ptr [EAX*0x4 + 0x1cedee4] ; 004dca0c
    MOV EDX,dword ptr [EDI + 0x247e4]   ; 004dca13
    MOV EDX,dword ptr [EDI + EDX*0x4 + 0x2498c] ; 004dca19
    MOV dword ptr [EDX + 0x6c4],0x6     ; 004dca20
    MOV EDX,dword ptr [0x01b4d2ec]      ; 004dca2a | g_CDocClassInfo.name_hash
    PUSH EDX                            ; 004dca30
    MOV ECX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004dca31
    PUSH ECX                            ; 004dca38
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004dca39
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004dca3e
    TEST EAX,EAX                        ; 004dca41
    JZ 0x004dca4e                       ; 004dca43
        ;   XREF to: 004dca4e (CONDITIONAL_JUMP)  ; LAB_004dca4e
    PUSH EAX                            ; 004dca45
    CALL core_doc.cpp_FUN_0045d260      ; 004dca46
        ;   XREF to: 0045d260 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_0045d260()
    ADD ESP,0x4                         ; 004dca4b
    MOV EAX,dword ptr [EBP + -0x4]      ; 004dca4e
        ;   Label: LAB_004dca4e
    CMP dword ptr [EAX + 0x470],0x0     ; 004dca51
    JZ 0x004dca63                       ; 004dca58
        ;   XREF to: 004dca63 (CONDITIONAL_JUMP)  ; LAB_004dca63
    XOR EAX,EAX                         ; 004dca5a
        ;   Label: LAB_004dca5a
    MOV ESP,EBP                         ; 004dca5c
    POP EBP                             ; 004dca5e
    POP EDI                             ; 004dca5f
    POP ESI                             ; 004dca60
    POP EBX                             ; 004dca61
    RET                                 ; 004dca62
    PUSH 0x1                            ; 004dca63
        ;   Label: LAB_004dca63
    PUSH EBX                            ; 004dca65
    MOV EDI,dword ptr [EBP + 0x14]      ; 004dca66
    PUSH EDI                            ; 004dca69
    CALL core_inv.cpp_FUN_004db8e0      ; 004dca6a
        ;   XREF to: 004db8e0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004db8e0()
    MOV EAX,0x1                         ; 004dca6f
    ADD ESP,0xc                         ; 004dca74
    MOV ESP,EBP                         ; 004dca77
    POP EBP                             ; 004dca79
    POP EDI                             ; 004dca7a
    POP ESI                             ; 004dca7b
    POP EBX                             ; 004dca7c
    RET                                 ; 004dca7d
    PUSH 0x5db977                       ; 004dca7e | = "CWeapon"
        ;   Label: LAB_004dca7e
    PUSH EBX                            ; 004dca83
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004dca84
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dca89
    TEST EAX,EAX                        ; 004dca8c
    JZ 0x004dcaaa                       ; 004dca8e
        ;   XREF to: 004dcaaa (CONDITIONAL_JUMP)  ; LAB_004dcaaa
    PUSH 0x1                            ; 004dca90
    PUSH 0x5                            ; 004dca92
    PUSH EBX                            ; 004dca94
    MOV ECX,dword ptr [EBP + 0x14]      ; 004dca95
    PUSH ECX                            ; 004dca98
    CALL core_inv.cpp_FUN_004db9d0      ; 004dca99
        ;   XREF to: 004db9d0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004db9d0()
    ADD ESP,0x10                        ; 004dca9e
    XOR EAX,EAX                         ; 004dcaa1
    MOV ESP,EBP                         ; 004dcaa3
    POP EBP                             ; 004dcaa5
    POP EDI                             ; 004dcaa6
    POP ESI                             ; 004dcaa7
    POP EBX                             ; 004dcaa8
    RET                                 ; 004dcaa9
    PUSH 0x5db97f                       ; 004dcaaa | = "CHealthItem"
        ;   Label: LAB_004dcaaa
    PUSH EBX                            ; 004dcaaf
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004dcab0
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dcab5
    TEST EAX,EAX                        ; 004dcab8
    JZ 0x004dcc12                       ; 004dcaba
        ;   XREF to: 004dcc12 (CONDITIONAL_JUMP)  ; LAB_004dcc12
    MOV EAX,[0x01ceded8]                ; 004dcac0 | g_CHealthItemClassInfo.name_hash
    PUSH EAX                            ; 004dcac5
    PUSH EBX                            ; 004dcac6
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004dcac7
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004dcacc
    MOV dword ptr [EBP + -0x8],EAX      ; 004dcacf
    TEST EAX,EAX                        ; 004dcad2
    JNZ 0x004dcaf9                      ; 004dcad4
        ;   XREF to: 004dcaf9 (CONDITIONAL_JUMP)  ; LAB_004dcaf9
    MOV EDX,0x5db98b                    ; 004dcad6 | = "..\\core\\inv.cpp"
    MOV ECX,0x6c2                       ; 004dcadb
    PUSH 0x5db99b                       ; 004dcae0 | = "CInventory::select - Catch 22"
    MOV dword ptr [0x01d046a0],EDX      ; 004dcae5 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004dcaeb | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004dcaf1
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004dcaf6
    MOV EAX,[0x01cedef4]                ; 004dcaf9 | DAT_01cedef4
        ;   Label: LAB_004dcaf9
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004dcafe
    FLD float ptr [EAX + 0x25a8]        ; 004dcb05
    FCOMP double ptr [0x005db9e2]       ; 004dcb0b | DAT_005db9e2
    FNSTSW AX                           ; 004dcb11
    SAHF                                ; 004dcb13
    JBE 0x004dcb22                      ; 004dcb14
        ;   XREF to: 004dcb22 (CONDITIONAL_JUMP)  ; LAB_004dcb22
    MOV EAX,0x1                         ; 004dcb16
    MOV ESP,EBP                         ; 004dcb1b
    POP EBP                             ; 004dcb1d
    POP EDI                             ; 004dcb1e
    POP ESI                             ; 004dcb1f
    POP EBX                             ; 004dcb20
    RET                                 ; 004dcb21
    PUSH 0x5db9b9                       ; 004dcb22 | = "You have used : "
        ;   Label: LAB_004dcb22
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004dcb27
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004dcb2c
    LEA EDI,[EBP + 0xfffffef8]          ; 004dcb2f
    MOV ESI,EAX                         ; 004dcb35
    PUSH EDI                            ; 004dcb37
    MOV AL,byte ptr [ESI]               ; 004dcb38
        ;   Label: LAB_004dcb38
    MOV byte ptr [EDI],AL               ; 004dcb3a
    CMP AL,0x0                          ; 004dcb3c
    JZ 0x004dcb50                       ; 004dcb3e
        ;   XREF to: 004dcb50 (CONDITIONAL_JUMP)  ; LAB_004dcb50
    MOV AL,byte ptr [ESI + 0x1]         ; 004dcb40
    ADD ESI,0x2                         ; 004dcb43
    MOV byte ptr [EDI + 0x1],AL         ; 004dcb46
    ADD EDI,0x2                         ; 004dcb49
    CMP AL,0x0                          ; 004dcb4c
    JNZ 0x004dcb38                      ; 004dcb4e
        ;   XREF to: 004dcb38 (CONDITIONAL_JUMP)  ; LAB_004dcb38
    POP EDI                             ; 004dcb50
        ;   Label: LAB_004dcb50
    PUSH EBX                            ; 004dcb51
    CALL core_inv.cpp_getItemDisplayName_FUN_004d9f10 ; 004dcb52
        ;   XREF to: 004d9f10 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_getItemDisplayName_FUN_004d9f10()
    ADD ESP,0x4                         ; 004dcb57
    LEA EDI,[EBP + 0xfffffef8]          ; 004dcb5a
    MOV ESI,EAX                         ; 004dcb60
    PUSH EDI                            ; 004dcb62
    SUB ECX,ECX                         ; 004dcb63
    DEC ECX                             ; 004dcb65
    MOV AL,0x0                          ; 004dcb66
    SCASB.REPNE ES:EDI                  ; 004dcb68
    DEC EDI                             ; 004dcb6a
    MOV AL,byte ptr [ESI]               ; 004dcb6b
        ;   Label: LAB_004dcb6b
    MOV byte ptr [EDI],AL               ; 004dcb6d
    CMP AL,0x0                          ; 004dcb6f
    JZ 0x004dcb83                       ; 004dcb71
        ;   XREF to: 004dcb83 (CONDITIONAL_JUMP)  ; LAB_004dcb83
    MOV AL,byte ptr [ESI + 0x1]         ; 004dcb73
    ADD ESI,0x2                         ; 004dcb76
    MOV byte ptr [EDI + 0x1],AL         ; 004dcb79
    ADD EDI,0x2                         ; 004dcb7c
    CMP AL,0x0                          ; 004dcb7f
    JNZ 0x004dcb6b                      ; 004dcb81
        ;   XREF to: 004dcb6b (CONDITIONAL_JUMP)  ; LAB_004dcb6b
    POP EDI                             ; 004dcb83
        ;   Label: LAB_004dcb83
    PUSH 0x5db9ca                       ; 004dcb84 | DAT_005db9ca
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004dcb89
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004dcb8e
    LEA EDI,[EBP + 0xfffffef8]          ; 004dcb91
    MOV ESI,EAX                         ; 004dcb97
    PUSH EDI                            ; 004dcb99
    SUB ECX,ECX                         ; 004dcb9a
    DEC ECX                             ; 004dcb9c
    MOV AL,0x0                          ; 004dcb9d
    SCASB.REPNE ES:EDI                  ; 004dcb9f
    DEC EDI                             ; 004dcba1
    MOV AL,byte ptr [ESI]               ; 004dcba2
        ;   Label: LAB_004dcba2
    MOV byte ptr [EDI],AL               ; 004dcba4
    CMP AL,0x0                          ; 004dcba6
    JZ 0x004dcbba                       ; 004dcba8
        ;   XREF to: 004dcbba (CONDITIONAL_JUMP)  ; LAB_004dcbba
    MOV AL,byte ptr [ESI + 0x1]         ; 004dcbaa
    ADD ESI,0x2                         ; 004dcbad
    MOV byte ptr [EDI + 0x1],AL         ; 004dcbb0
    ADD EDI,0x2                         ; 004dcbb3
    CMP AL,0x0                          ; 004dcbb6
    JNZ 0x004dcba2                      ; 004dcbb8
        ;   XREF to: 004dcba2 (CONDITIONAL_JUMP)  ; LAB_004dcba2
    POP EDI                             ; 004dcbba
        ;   Label: LAB_004dcbba
    LEA EAX,[EBP + 0xfffffef8]          ; 004dcbbb
    PUSH 0x40a00000                     ; 004dcbc1
    PUSH EAX                            ; 004dcbc6
    MOV ESI,dword ptr [0x00616494]      ; 004dcbc7 | g_CGamePtr
    PUSH ESI                            ; 004dcbcd | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004b31a0 ; 004dcbce
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b31a0(CGame * this_ptr, char * message, float duration)
    MOV EAX,[0x01cedef4]                ; 004dcbd3 | DAT_01cedef4
    ADD ESP,0xc                         ; 004dcbd8
    MOV EDI,dword ptr [EAX*0x4 + 0x1cedee4] ; 004dcbdb
    PUSH EDI                            ; 004dcbe2
    MOV EAX,dword ptr [EBP + -0x8]      ; 004dcbe3
    PUSH EAX                            ; 004dcbe6
    CALL core_health.cpp_CHealthItem_useItem_FUN_004cdf90 ; 004dcbe7
        ;   XREF to: 004cdf90 (UNCONDITIONAL_CALL)  ; int core_health.cpp_CHealthItem_useItem_FUN_004cdf90(CHealthItem * this_ptr, CCharacter * user)
    ADD ESP,0x8                         ; 004dcbec
    TEST EAX,EAX                        ; 004dcbef
    JG 0x004dca5a                       ; 004dcbf1
        ;   XREF to: 004dca5a (CONDITIONAL_JUMP)  ; LAB_004dca5a
    PUSH 0x1                            ; 004dcbf7
    PUSH EBX                            ; 004dcbf9
    MOV EDX,dword ptr [EBP + 0x14]      ; 004dcbfa
    PUSH EDX                            ; 004dcbfd
    CALL core_inv.cpp_FUN_004db8e0      ; 004dcbfe
        ;   XREF to: 004db8e0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004db8e0()
    MOV EAX,0x1                         ; 004dcc03
    ADD ESP,0xc                         ; 004dcc08
    MOV ESP,EBP                         ; 004dcc0b
    POP EBP                             ; 004dcc0d
    POP EDI                             ; 004dcc0e
    POP ESI                             ; 004dcc0f
    POP EBX                             ; 004dcc10
    RET                                 ; 004dcc11
    PUSH 0x5db9cc                       ; 004dcc12 | = "CGasMask"
        ;   Label: LAB_004dcc12
    PUSH EBX                            ; 004dcc17
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004dcc18
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dcc1d
    TEST EAX,EAX                        ; 004dcc20
    JZ 0x004dcc5e                       ; 004dcc22
        ;   XREF to: 004dcc5e (CONDITIONAL_JUMP)  ; LAB_004dcc5e
    MOV ESI,dword ptr [0x01cb81c4]      ; 004dcc24 | g_CGasMaskClassInfo.name_hash
    PUSH ESI                            ; 004dcc2a
    PUSH EBX                            ; 004dcc2b
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004dcc2c
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004dcc31
    MOV EDI,dword ptr [EAX + 0x430]     ; 004dcc34
    MOV EBX,EAX                         ; 004dcc3a
    TEST EDI,EDI                        ; 004dcc3c
    SETZ AL                             ; 004dcc3e
    AND EAX,0xff                        ; 004dcc41
    MOV dword ptr [EBX + 0x430],EAX     ; 004dcc46
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dcc4c
    MOV dword ptr [EAX + 0x458],EBX     ; 004dcc4f
    XOR EAX,EAX                         ; 004dcc55
    MOV ESP,EBP                         ; 004dcc57
    POP EBP                             ; 004dcc59
    POP EDI                             ; 004dcc5a
    POP ESI                             ; 004dcc5b
    POP EBX                             ; 004dcc5c
    RET                                 ; 004dcc5d
    PUSH 0x5db9d5                       ; 004dcc5e | = "CBoxActor"
        ;   Label: LAB_004dcc5e
    PUSH EBX                            ; 004dcc63
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004dcc64
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dcc69
    TEST EAX,EAX                        ; 004dcc6c
    JZ 0x004dca5a                       ; 004dcc6e
        ;   XREF to: 004dca5a (CONDITIONAL_JUMP)  ; LAB_004dca5a
    MOV EDX,dword ptr [0x007bc9e8]      ; 004dcc74 | g_CBoxActorClassInfo.name_hash
    PUSH EDX                            ; 004dcc7a
    PUSH EBX                            ; 004dcc7b
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004dcc7c
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004dcc81
    PUSH 0x1                            ; 004dcc84
    ADD EAX,0x75c                       ; 004dcc86
    PUSH EAX                            ; 004dcc8b
    MOV ECX,dword ptr [0x006141f0]      ; 004dcc8c | DAT_006141f0
    PUSH ECX                            ; 004dcc92
    CALL core_event.cpp_FUN_00490f80    ; 004dcc93
        ;   XREF to: 00490f80 (UNCONDITIONAL_CALL)  ; void core_event.cpp_FUN_00490f80(CEventList * this_ptr, char * name, int add_flag)
    ADD ESP,0xc                         ; 004dcc98
    XOR EAX,EAX                         ; 004dcc9b
    MOV ESP,EBP                         ; 004dcc9d
    POP EBP                             ; 004dcc9f
    POP EDI                             ; 004dcca0
    POP ESI                             ; 004dcca1
    POP EBX                             ; 004dcca2
    RET                                 ; 004dcca3

