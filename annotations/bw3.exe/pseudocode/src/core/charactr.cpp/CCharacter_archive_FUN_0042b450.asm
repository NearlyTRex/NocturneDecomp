; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_archive_FUN_0042b450(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_bird.cpp_CBird_archive_FUN_0040ff80 at 0040ff8f
;   core_enemy.cpp_CEnemy_archive_FUN_00489120 at 00489190
;   core_hero.cpp_CHero_archive_FUN_004d27b0 at 004d2843
;   core_moocow.cpp_CMooCow_archive_FUN_004f9010 at 004f9016
;   core_npc.cpp_CNPC_archive_FUN_00509800 at 00509814
;   core_spireagl.cpp_CSpiritEagle_archive_FUN_00599bc0 at 00599c4d
;
; Referenced Globals:
;   TerminatedCString s_hitPoints_005b8020
;   TerminatedCString s_numCarryHands_005b802a
;   TerminatedCString s_carry_hand_005b8038
;   TerminatedCString s_carry_actor_005b8043
;   TerminatedCString s_carry_pos_005b804f
;   TerminatedCString s_carry_orient_005b8059
;   TerminatedCString s_numCarryHands_005b8066
;   TerminatedCString s_carry_hand_005b8074
;   TerminatedCString s_carry_actor_005b807f
;   TerminatedCString s_carry_pos_005b808b
;   TerminatedCString s_carry_orient_005b8095
;   TerminatedCString s_talkToMeEvent_005b80a2
;   TerminatedCString s_grabbedBy_005b80b0
;   TerminatedCString s_grabbedType_005b80ba
;   TerminatedCString s_clothList_005b80c6
;   ... and 20 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b930
;   core_actor.cpp_archiveClothList_FUN_0040bf20
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveLocalizedString_FUN_0040b7a0
;   core_actor.cpp_archiveOrientation_FUN_0040b4a0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_actor.cpp_archiveVector_FUN_0040b400
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;   core_xform.cpp_FUN_00583940
;   core_xform.cpp_FUN_00584450
;   core_xform.cpp_matrixToEulerAngles_FUN_00583b10
;   core_xform.cpp_setIdentityMatrix3x4_FUN_005835d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b450
        ;   Label: core_charactr.cpp_CCharacter_archive_FUN_0042b450
    PUSH ESI                            ; 0042b451
    PUSH EDI                            ; 0042b452
    PUSH EBP                            ; 0042b453
    SUB ESP,0x58                        ; 0042b454
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0042b457
    PUSH EBX                            ; 0042b45b
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 0042b45c
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042b461
    PUSH 0x5b8020                       ; 0042b464 | = "hitPoints"
    LEA EAX,[EBX + 0x2538]              ; 0042b469
    PUSH EAX                            ; 0042b46f
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0042b470
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    MOV EDX,dword ptr [0x005f0f48]      ; 0042b475 | g_CCharacterClassVersion
    ADD ESP,0x8                         ; 0042b47b
    CMP EDX,0x2                         ; 0042b47e
    JL 0x0042b502                       ; 0042b481
        ;   XREF to: 0042b502 (CONDITIONAL_JUMP)  ; LAB_0042b502
    CMP dword ptr [0x007df9b8],0x1      ; 0042b487 | DAT_007df9b8
    JZ 0x0042b722                       ; 0042b48e
        ;   XREF to: 0042b722 (CONDITIONAL_JUMP)  ; LAB_0042b722
    XOR ESI,ESI                         ; 0042b494
    MOV EAX,EBX                         ; 0042b496
    MOV dword ptr [ESP + 0x54],ESI      ; 0042b498
    MOV dword ptr [ESP + 0x50],ESI      ; 0042b49c
    LEA ESI,[EBX + 0xf0]                ; 0042b4a0
    CMP dword ptr [EAX + 0x25b0],0x0    ; 0042b4a6
        ;   Label: LAB_0042b4a6
    JZ 0x0042b4b3                       ; 0042b4ad
        ;   XREF to: 0042b4b3 (CONDITIONAL_JUMP)  ; LAB_0042b4b3
    INC dword ptr [ESP + 0x50]          ; 0042b4af
    ADD EAX,0x78                        ; 0042b4b3
        ;   Label: LAB_0042b4b3
    CMP EAX,ESI                         ; 0042b4b6
    JNZ 0x0042b4a6                      ; 0042b4b8
        ;   XREF to: 0042b4a6 (CONDITIONAL_JUMP)  ; LAB_0042b4a6
    PUSH 0x5b8066                       ; 0042b4ba | = "numCarryHands"
    LEA EAX,[ESP + 0x54]                ; 0042b4bf
    MOV ESI,0x2                         ; 0042b4c3
    PUSH EAX                            ; 0042b4c8
    XOR EDI,EDI                         ; 0042b4c9
    MOV dword ptr [ESP + 0x5c],ESI      ; 0042b4cb
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0042b4cf
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042b4d4
    LEA EBP,[EBX + 0x25a8]              ; 0042b4d7
    MOV dword ptr [ESP + 0x54],EDI      ; 0042b4dd
    IMUL EAX,dword ptr [ESP + 0x54],0x78 ; 0042b4e1
        ;   Label: LAB_0042b4e1
    CMP dword ptr [EBX + EAX*0x1 + 0x25b0],0x0 ; 0042b4e6
    JNZ 0x0042b7ff                      ; 0042b4ee
        ;   XREF to: 0042b7ff (CONDITIONAL_JUMP)  ; LAB_0042b7ff
    MOV ESI,dword ptr [ESP + 0x54]      ; 0042b4f4
        ;   Label: LAB_0042b4f4
    INC ESI                             ; 0042b4f8
    MOV dword ptr [ESP + 0x54],ESI      ; 0042b4f9
    CMP ESI,0x2                         ; 0042b4fd
    JL 0x0042b4e1                       ; 0042b500
        ;   XREF to: 0042b4e1 (CONDITIONAL_JUMP)  ; LAB_0042b4e1
    CMP dword ptr [0x005f0f48],0x3      ; 0042b502 | g_CCharacterClassVersion
        ;   Label: LAB_0042b502
    JL 0x0042b51f                       ; 0042b509
        ;   XREF to: 0042b51f (CONDITIONAL_JUMP)  ; LAB_0042b51f
    PUSH 0x5b80a2                       ; 0042b50b | = "talkToMeEvent"
    LEA EAX,[EBX + 0x2698]              ; 0042b510
    PUSH EAX                            ; 0042b516
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0042b517
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0042b51c
    CMP dword ptr [0x005f0f48],0x4      ; 0042b51f | g_CCharacterClassVersion
        ;   Label: LAB_0042b51f
    JL 0x0042b564                       ; 0042b526
        ;   XREF to: 0042b564 (CONDITIONAL_JUMP)  ; LAB_0042b564
    PUSH 0x5b80b0                       ; 0042b528 | = "grabbedBy"
    LEA EAX,[EBX + 0x26fc]              ; 0042b52d
    PUSH EAX                            ; 0042b533
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 0042b534
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 0042b539
    PUSH 0x5b80ba                       ; 0042b53c | = "grabbedType"
    LEA EAX,[EBX + 0x2700]              ; 0042b541
    PUSH EAX                            ; 0042b547
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0042b548
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042b54d
    PUSH 0x5b80c6                       ; 0042b550 | = "clothList"
    LEA EAX,[EBX + 0x2f08]              ; 0042b555
    PUSH EAX                            ; 0042b55b
    CALL core_actor.cpp_archiveClothList_FUN_0040bf20 ; 0042b55c
        ;   XREF to: 0040bf20 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveClothList_FUN_0040bf20()
    ADD ESP,0x8                         ; 0042b561
    CMP dword ptr [0x005f0f48],0x5      ; 0042b564 | g_CCharacterClassVersion
        ;   Label: LAB_0042b564
    JL 0x0042b581                       ; 0042b56b
        ;   XREF to: 0042b581 (CONDITIONAL_JUMP)  ; LAB_0042b581
    PUSH 0x5b80d0                       ; 0042b56d | = "sizeScale"
    LEA EAX,[EBX + 0x27b8]              ; 0042b572
    PUSH EAX                            ; 0042b578
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0042b579
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0042b57e
    CMP dword ptr [0x005f0f48],0x6      ; 0042b581 | g_CCharacterClassVersion
        ;   Label: LAB_0042b581
    JL 0x0042b8a3                       ; 0042b588
        ;   XREF to: 0042b8a3 (CONDITIONAL_JUMP)  ; LAB_0042b8a3
    PUSH 0x5b80da                       ; 0042b58e | = "healthBarMode"
    LEA EAX,[EBX + 0x2540]              ; 0042b593
    PUSH EAX                            ; 0042b599
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0042b59a
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042b59f
    PUSH 0x5b80e8                       ; 0042b5a2 | = "descriptiveName"
    LEA EAX,[EBX + 0x2544]              ; 0042b5a7
    PUSH EAX                            ; 0042b5ad
    CALL core_actor.cpp_archiveLocalizedString_FUN_0040b7a0 ; 0042b5ae
        ;   XREF to: 0040b7a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveLocalizedString_FUN_0040b7a0(char * string_buffer, char * localization_key)
    ADD ESP,0x8                         ; 0042b5b3
    PUSH 0x5b80f8                       ; 0042b5b6 | = "maxHitPoints"
    LEA EAX,[EBX + 0x253c]              ; 0042b5bb
    PUSH EAX                            ; 0042b5c1
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0042b5c2
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0042b5c7
    CMP dword ptr [0x005f0f48],0x7      ; 0042b5ca | g_CCharacterClassVersion
        ;   Label: LAB_0042b5ca
    JL 0x0042b5e7                       ; 0042b5d1
        ;   XREF to: 0042b5e7 (CONDITIONAL_JUMP)  ; LAB_0042b5e7
    PUSH 0x5b8105                       ; 0042b5d3 | = "spectralFlag"
    LEA EAX,[EBX + 0x27a8]              ; 0042b5d8
    PUSH EAX                            ; 0042b5de
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0042b5df
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042b5e4
    CMP dword ptr [0x005f0f48],0x8      ; 0042b5e7 | g_CCharacterClassVersion
        ;   Label: LAB_0042b5e7
    JL 0x0042b604                       ; 0042b5ee
        ;   XREF to: 0042b604 (CONDITIONAL_JUMP)  ; LAB_0042b604
    PUSH 0x5b8112                       ; 0042b5f0 | = "invulnerableFlag"
    LEA EAX,[EBX + 0x27b0]              ; 0042b5f5
    PUSH EAX                            ; 0042b5fb
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0042b5fc
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042b601
    CMP dword ptr [0x005f0f48],0x9      ; 0042b604 | g_CCharacterClassVersion
        ;   Label: LAB_0042b604
    JL 0x0042b621                       ; 0042b60b
        ;   XREF to: 0042b621 (CONDITIONAL_JUMP)  ; LAB_0042b621
    PUSH 0x5b8123                       ; 0042b60d | = "etheralFlag"
    LEA EAX,[EBX + 0x27a4]              ; 0042b612
    PUSH EAX                            ; 0042b618
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0042b619
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042b61e
    CMP dword ptr [0x005f0f48],0xa      ; 0042b621 | g_CCharacterClassVersion
        ;   Label: LAB_0042b621
    JL 0x0042b652                       ; 0042b628
        ;   XREF to: 0042b652 (CONDITIONAL_JUMP)  ; LAB_0042b652
    PUSH 0x5b812f                       ; 0042b62a | = "bind_time"
    LEA EAX,[EBX + 0x3254]              ; 0042b62f
    PUSH EAX                            ; 0042b635
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0042b636
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0042b63b
    PUSH 0x5b8139                       ; 0042b63e | = "on_fire_time"
    LEA EAX,[EBX + 0x3260]              ; 0042b643
    PUSH EAX                            ; 0042b649
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0042b64a
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0042b64f
    CMP dword ptr [0x005f0f48],0xb      ; 0042b652 | g_CCharacterClassVersion
        ;   Label: LAB_0042b652
    JL 0x0042b66f                       ; 0042b659
        ;   XREF to: 0042b66f (CONDITIONAL_JUMP)  ; LAB_0042b66f
    PUSH 0x5b8146                       ; 0042b65b | = "bind_type"
    LEA EAX,[EBX + 0x3258]              ; 0042b660
    PUSH EAX                            ; 0042b666
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0042b667
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042b66c
    CMP dword ptr [0x005f0f48],0xc      ; 0042b66f | g_CCharacterClassVersion
        ;   Label: LAB_0042b66f
    JL 0x0042b68c                       ; 0042b676
        ;   XREF to: 0042b68c (CONDITIONAL_JUMP)  ; LAB_0042b68c
    PUSH 0x5b8150                       ; 0042b678 | = "additive"
    LEA EAX,[EBX + 0xcdc4]              ; 0042b67d
    PUSH EAX                            ; 0042b683
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0042b684
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042b689
    CMP dword ptr [0x005f0f48],0xd      ; 0042b68c | g_CCharacterClassVersion
        ;   Label: LAB_0042b68c
    JL 0x0042b70d                       ; 0042b693
        ;   XREF to: 0042b70d (CONDITIONAL_JUMP)  ; LAB_0042b70d
    PUSH 0x5b8159                       ; 0042b695 | = "scriptWalkDest"
    LEA EAX,[EBX + 0x2704]              ; 0042b69a
    PUSH EAX                            ; 0042b6a0
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 0042b6a1
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 0042b6a6
    PUSH 0x5b8168                       ; 0042b6a9 | = "scriptWalkDist"
    LEA EAX,[EBX + 0x2708]              ; 0042b6ae
    PUSH EAX                            ; 0042b6b4
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0042b6b5
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0042b6ba
    PUSH 0x5b8177                       ; 0042b6bd | = "scriptRunDist"
    LEA EAX,[EBX + 0x270c]              ; 0042b6c2
    PUSH EAX                            ; 0042b6c8
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0042b6c9
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0042b6ce
    PUSH 0x5b8185                       ; 0042b6d1 | = "scriptWalkTimer"
    LEA EAX,[EBX + 0x2710]              ; 0042b6d6
    PUSH EAX                            ; 0042b6dc
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0042b6dd
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0042b6e2
    PUSH 0x5b8195                       ; 0042b6e5 | = "scriptWalkState"
    LEA EAX,[EBX + 0x273c]              ; 0042b6ea
    PUSH EAX                            ; 0042b6f0
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0042b6f1
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042b6f6
    PUSH 0x5b81a5                       ; 0042b6f9 | = "scriptDoorToOpen"
    LEA EAX,[EBX + 0x2740]              ; 0042b6fe
    PUSH EAX                            ; 0042b704
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 0042b705
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 0042b70a
    CMP dword ptr [0x005f0f48],0xe      ; 0042b70d | g_CCharacterClassVersion
        ;   Label: LAB_0042b70d
    JGE 0x0042b8b4                      ; 0042b714
        ;   XREF to: 0042b8b4 (CONDITIONAL_JUMP)  ; LAB_0042b8b4
    ADD ESP,0x58                        ; 0042b71a
    POP EBP                             ; 0042b71d
    POP EDI                             ; 0042b71e
    POP ESI                             ; 0042b71f
    POP EBX                             ; 0042b720
    RET                                 ; 0042b721
    PUSH 0x5b802a                       ; 0042b722 | = "numCarryHands"
        ;   Label: LAB_0042b722
    LEA EAX,[ESP + 0x4c]                ; 0042b727
    PUSH EAX                            ; 0042b72b
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0042b72c
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042b731
    XOR EBP,EBP                         ; 0042b734
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042b736
    MOV dword ptr [ESP + 0x54],EBP      ; 0042b73a
    TEST EAX,EAX                        ; 0042b73e
    JLE 0x0042b502                      ; 0042b740
        ;   XREF to: 0042b502 (CONDITIONAL_JUMP)  ; LAB_0042b502
    LEA EBP,[EBX + 0x25a8]              ; 0042b746
    PUSH 0x5b8038                       ; 0042b74c | = "carry hand"
        ;   Label: LAB_0042b74c
    LEA EAX,[ESP + 0x50]                ; 0042b751
    PUSH EAX                            ; 0042b755
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0042b756
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042b75b
    IMUL EAX,dword ptr [ESP + 0x4c],0x78 ; 0042b75e
    ADD EAX,EBP                         ; 0042b763
    PUSH 0x5b8043                       ; 0042b765 | = "carry actor"
    ADD EAX,0x8                         ; 0042b76a
    PUSH EAX                            ; 0042b76d
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 0042b76e
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 0042b773
    IMUL EAX,dword ptr [ESP + 0x4c],0x78 ; 0042b776
    ADD EAX,EBP                         ; 0042b77b
    ADD EAX,0xc                         ; 0042b77d
    PUSH EAX                            ; 0042b780
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005835d0 ; 0042b781
        ;   XREF to: 005835d0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_setIdentityMatrix3x4_FUN_005835d0()
    ADD ESP,0x4                         ; 0042b786
    IMUL EAX,dword ptr [ESP + 0x4c],0x78 ; 0042b789
    MOV dword ptr [EBX + EAX*0x1 + 0x25e8],0x3f800000 ; 0042b78e
    CMP dword ptr [0x005f0f48],0xd      ; 0042b799 | g_CCharacterClassVersion
    JL 0x0042b7e5                       ; 0042b7a0
        ;   XREF to: 0042b7e5 (CONDITIONAL_JUMP)  ; LAB_0042b7e5
    PUSH 0x5b804f                       ; 0042b7a2 | = "carry pos"
    LEA EAX,[ESP + 0x34]                ; 0042b7a7
    PUSH EAX                            ; 0042b7ab
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 0042b7ac
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b400()
    ADD ESP,0x8                         ; 0042b7b1
    PUSH 0x5b8059                       ; 0042b7b4 | = "carry orient"
    LEA EAX,[ESP + 0x1c]                ; 0042b7b9
    PUSH EAX                            ; 0042b7bd
    CALL core_actor.cpp_archiveOrientation_FUN_0040b4a0 ; 0042b7be
        ;   XREF to: 0040b4a0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveOrientation_FUN_0040b4a0()
    ADD ESP,0x8                         ; 0042b7c3
    LEA EAX,[ESP + 0x18]                ; 0042b7c6
    PUSH EAX                            ; 0042b7ca
    LEA EAX,[ESP + 0x34]                ; 0042b7cb
    MOV EDX,dword ptr [ESP + 0x50]      ; 0042b7cf
    PUSH EAX                            ; 0042b7d3
    IMUL EAX,EDX,0x78                   ; 0042b7d4
    ADD EAX,EBP                         ; 0042b7d7
    ADD EAX,0xc                         ; 0042b7d9
    PUSH EAX                            ; 0042b7dc
    CALL core_xform.cpp_FUN_00583940    ; 0042b7dd
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    ADD ESP,0xc                         ; 0042b7e2
    MOV EAX,dword ptr [ESP + 0x54]      ; 0042b7e5
        ;   Label: LAB_0042b7e5
    INC EAX                             ; 0042b7e9
    MOV EDX,dword ptr [ESP + 0x48]      ; 0042b7ea
    MOV dword ptr [ESP + 0x54],EAX      ; 0042b7ee
    CMP EAX,EDX                         ; 0042b7f2
    JL 0x0042b74c                       ; 0042b7f4
        ;   XREF to: 0042b74c (CONDITIONAL_JUMP)  ; LAB_0042b74c
    JMP 0x0042b502                      ; 0042b7fa
        ;   XREF to: 0042b502 (UNCONDITIONAL_JUMP)  ; LAB_0042b502
    PUSH 0x5b8074                       ; 0042b7ff | = "carry hand"
        ;   Label: LAB_0042b7ff
    LEA EAX,[ESP + 0x58]                ; 0042b804
    PUSH EAX                            ; 0042b808
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0042b809
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042b80e
    IMUL EAX,dword ptr [ESP + 0x54],0x78 ; 0042b811
    ADD EAX,EBP                         ; 0042b816
    PUSH 0x5b807f                       ; 0042b818 | = "carry actor"
    ADD EAX,0x8                         ; 0042b81d
    PUSH EAX                            ; 0042b820
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 0042b821
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    MOV EDI,dword ptr [0x005f0f48]      ; 0042b826 | g_CCharacterClassVersion
    ADD ESP,0x8                         ; 0042b82c
    CMP EDI,0xd                         ; 0042b82f
    JL 0x0042b4f4                       ; 0042b832
        ;   XREF to: 0042b4f4 (CONDITIONAL_JUMP)  ; LAB_0042b4f4
    IMUL EAX,dword ptr [ESP + 0x54],0x78 ; 0042b838
    ADD EAX,EBP                         ; 0042b83d
    ADD EAX,0xc                         ; 0042b83f
    PUSH EAX                            ; 0042b842
    LEA ESI,[ESP + 0x10]                ; 0042b843
    CALL core_xform.cpp_FUN_00584450    ; 0042b847
        ;   XREF to: 00584450 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00584450()
    ADD ESP,0x4                         ; 0042b84c
    IMUL EAX,dword ptr [ESP + 0x54],0x78 ; 0042b84f
    MOV EDI,ESP                         ; 0042b854
    ADD EAX,EBP                         ; 0042b856
    LEA ESI,[ESP + 0xc]                 ; 0042b858
    ADD EAX,0xc                         ; 0042b85c
    MOVSD ES:EDI,ESI                    ; 0042b85f
    MOVSD ES:EDI,ESI                    ; 0042b860
    MOVSD ES:EDI,ESI                    ; 0042b861
    PUSH EAX                            ; 0042b862
    LEA ESI,[ESP + 0x40]                ; 0042b863
    CALL core_xform.cpp_matrixToEulerAngles_FUN_00583b10 ; 0042b867
        ;   XREF to: 00583b10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_00583b10()
    ADD ESP,0x4                         ; 0042b86c
    LEA EDI,[ESP + 0x24]                ; 0042b86f
    PUSH 0x5b808b                       ; 0042b873 | = "carry pos"
    LEA EAX,[ESP + 0x4]                 ; 0042b878
    LEA ESI,[ESP + 0x40]                ; 0042b87c
    PUSH EAX                            ; 0042b880
    MOVSD ES:EDI,ESI                    ; 0042b881
    MOVSD ES:EDI,ESI                    ; 0042b882
    MOVSD ES:EDI,ESI                    ; 0042b883
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 0042b884
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b400()
    ADD ESP,0x8                         ; 0042b889
    PUSH 0x5b8095                       ; 0042b88c | = "carry orient"
    LEA EAX,[ESP + 0x28]                ; 0042b891
    PUSH EAX                            ; 0042b895
    CALL core_actor.cpp_archiveOrientation_FUN_0040b4a0 ; 0042b896
        ;   XREF to: 0040b4a0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveOrientation_FUN_0040b4a0()
    ADD ESP,0x8                         ; 0042b89b
    JMP 0x0042b4f4                      ; 0042b89e
        ;   XREF to: 0042b4f4 (UNCONDITIONAL_JUMP)  ; LAB_0042b4f4
    MOV EAX,dword ptr [EBX + 0x2538]    ; 0042b8a3
        ;   Label: LAB_0042b8a3
    MOV dword ptr [EBX + 0x253c],EAX    ; 0042b8a9
    JMP 0x0042b5ca                      ; 0042b8af
        ;   XREF to: 0042b5ca (UNCONDITIONAL_JUMP)  ; LAB_0042b5ca
    PUSH 0x5b81b6                       ; 0042b8b4 | = "been_damaged"
        ;   Label: LAB_0042b8b4
    ADD EBX,0x3268                      ; 0042b8b9
    PUSH EBX                            ; 0042b8bf
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0042b8c0
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042b8c5
    ADD ESP,0x58                        ; 0042b8c8
    POP EBP                             ; 0042b8cb
    POP EDI                             ; 0042b8cc
    POP ESI                             ; 0042b8cd
    POP EBX                             ; 0042b8ce
    RET                                 ; 0042b8cf

