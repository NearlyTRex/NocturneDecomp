; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_updateWeaponLayerActions_FUN_005907a0(CStranger *this_ptr,float delta_time)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x54]:1  local_54
; undefined4       Stack[-0x40]:4  local_40
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
;
; XREF[1]:
;   core_stranger.cpp_CStranger_processFrame_FUN_00585b00 at 00586593
;
; Referenced Globals:
;   void* switchdataD_0059074c = 00590c49
;   void* switchdataD_00590778 = 0059088f
;   TerminatedCString s_CShotgun_005f6fd9
;   TerminatedCString s_CTrap_005f6fe2
;   TerminatedCString s_actionPending_d_stranger_005f6fe8
;   undefined4 DAT_005f7011
;   undefined4 DAT_005f7019
;   undefined4 DAT_00606084
;   undefined4 DAT_00606088
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   undefined4 DAT_0061f650
;   undefined4 g_CDynamiteClassInfo.name_hash
;   undefined4 g_CMeleeClassInfo.name_hash
;   undefined4 DAT_01d2c900
;   undefined4 g_CWeaponClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_isOfClass_FUN_0040c550
;   core_charactr.cpp_CCharacter_advanceLayerAction_FUN_004340b0
;   core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_00434610
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
;   core_charactr.cpp_FUN_004325b0
;   core_dynamite.cpp_CDynamite_isFuseLit_FUN_00492690
;   core_dynamite.cpp_CDynamite_lightFuse_FUN_00492640
;   core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0
;   core_inv.cpp_CInventory_getActiveLightGun_FUN_004f9ed0
;   core_inv.cpp_FUN_004f8d00
;   core_mission.cpp_CDemonMission_addActorToList_FUN_0051b160
;   core_motion.cpp_CMotionController_getMotionList_FUN_00524a00
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005907a0
        ;   Label: core_stranger.cpp_CStranger_updateWeaponLayerActions_FUN_005907a0
    PUSH ESI                            ; 005907a1
    PUSH EDI                            ; 005907a2
    PUSH EBP                            ; 005907a3
    MOV EBP,ESP                         ; 005907a4
    SUB ESP,0x64                        ; 005907a6
    AND ESP,0xfffffff8                  ; 005907a9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005907ac
    CMP dword ptr [EBX + 0x2c98],0xe    ; 005907af
    JNZ 0x005907ce                      ; 005907b6
        ;   XREF to: 005907ce (CONDITIONAL_JUMP)  ; LAB_005907ce
    MOV ECX,dword ptr [EBX + 0x2628]    ; 005907b8
    TEST ECX,ECX                        ; 005907be
    JNZ 0x005907ce                      ; 005907c0
        ;   XREF to: 005907ce (CONDITIONAL_JUMP)  ; LAB_005907ce
    MOV dword ptr [EBX + 0x2c9c],ECX    ; 005907c2
    MOV dword ptr [EBX + 0x2c98],ECX    ; 005907c8
    MOV EDI,0xffffffff                  ; 005907ce
        ;   Label: LAB_005907ce
    MOV EAX,dword ptr [EBX + 0x1ff88]   ; 005907d3
    XOR ESI,ESI                         ; 005907d9
    MOV dword ptr [ESP + 0x38],EDI      ; 005907db
    MOV dword ptr [ESP + 0x54],ESI      ; 005907df
    TEST EAX,EAX                        ; 005907e3
    JZ 0x00590a73                       ; 005907e5
        ;   XREF to: 00590a73 (CONDITIONAL_JUMP)  ; LAB_00590a73
    MOV dword ptr [EBX + 0x1ffac],ESI   ; 005907eb
    LEA EAX,[EBX + 0x1fae8]             ; 005907f1
        ;   Label: LAB_005907f1
    XOR ESI,ESI                         ; 005907f7
    MOV dword ptr [ESP + 0x50],EAX      ; 005907f9
    LEA EAX,[EBX + 0x158]               ; 005907fd
    MOV dword ptr [ESP + 0x40],ESI      ; 00590803
    MOV dword ptr [ESP + 0x44],EAX      ; 00590807
    FLD float ptr [EBP + 0x18]          ; 0059080b
        ;   Label: LAB_0059080b
    FLDZ                                ; 0059080e
    FCOMPP                              ; 00590810
    FNSTSW AX                           ; 00590812
    SAHF                                ; 00590814
    JNC 0x00590a6c                      ; 00590815
        ;   XREF to: 00590a6c (CONDITIONAL_JUMP)  ; LAB_00590a6c
    MOV EDI,dword ptr [EBX + 0x1ff5c]   ; 0059081b
    CMP EDI,0x1                         ; 00590821
    JNZ 0x00590af5                      ; 00590824
        ;   XREF to: 00590af5 (CONDITIONAL_JUMP)  ; LAB_00590af5
    MOV dword ptr [ESP + 0x5c],0x3      ; 0059082a
        ;   Label: LAB_0059082a
    MOV EAX,dword ptr [EBX + 0x2c9c]    ; 00590832
        ;   Label: LAB_00590832
    MOV dword ptr [ESP + 0x4c],EAX      ; 00590838
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0059083c
    PUSH EAX                            ; 00590840
    LEA EAX,[EBP + 0x18]                ; 00590841
    PUSH EAX                            ; 00590844
    PUSH EBX                            ; 00590845
    CALL core_charactr.cpp_CCharacter_advanceLayerAction_FUN_004340b0 ; 00590846
        ;   XREF to: 004340b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_advanceLayerAction_FUN_004340b0(CCharacter * this_ptr, float * remaining_time, int target_bone_index)
    ADD ESP,0xc                         ; 0059084b
    MOV EDX,dword ptr [EBX + 0x2c98]    ; 0059084e
    MOV dword ptr [ESP + 0x58],EAX      ; 00590854
    IMUL EAX,EDX,0x38                   ; 00590858
    IMUL EDI,dword ptr [EBX + EAX*0x1 + 0x27f4],0x120 ; 0059085b
    MOV ESI,dword ptr [ESP + 0x44]      ; 00590866
    PUSH ESI                            ; 0059086a
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00524a00 ; 0059086b
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00524a00(CMotionController * this_ptr)
    ADD EAX,0x1c28                      ; 00590870
    ADD EDI,EAX                         ; 00590875
    MOV EAX,dword ptr [EBX + 0x2c98]    ; 00590877
    SUB EAX,0x6                         ; 0059087d
    ADD ESP,0x4                         ; 00590880
    CMP EAX,0x7                         ; 00590883
    JA 0x005908bc                       ; 00590886
        ;   XREF to: 005908bc (CONDITIONAL_JUMP)  ; caseD_b
    JMP dword ptr [EAX*0x4 + 0x590778]  ; 00590888 | caseD_6 | caseD_7 | caseD_8
        ;   Label: switchD
    MOV ESI,dword ptr [0x01c3db94]      ; 0059088f | g_CDynamiteClassInfo.name_hash
        ;   Label: caseD_6
    PUSH ESI                            ; 00590895
    MOV EAX,dword ptr [EBX + 0x20004]   ; 00590896
    PUSH EAX                            ; 0059089c
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0059089d
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 005908a2
    ADD ESP,0x8                         ; 005908a4
    TEST EAX,EAX                        ; 005908a7
    JZ 0x005908bc                       ; 005908a9
        ;   XREF to: 005908bc (CONDITIONAL_JUMP)  ; caseD_b
    PUSH EAX                            ; 005908ab
    CALL core_dynamite.cpp_CDynamite_isFuseLit_FUN_00492690 ; 005908ac
        ;   XREF to: 00492690 (UNCONDITIONAL_CALL)  ; int core_dynamite.cpp_CDynamite_isFuseLit_FUN_00492690(CDynamite * this_ptr)
    ADD ESP,0x4                         ; 005908b1
    TEST EAX,EAX                        ; 005908b4
    JZ 0x00590d64                       ; 005908b6
        ;   XREF to: 00590d64 (CONDITIONAL_JUMP)  ; LAB_00590d64
    CMP dword ptr [ESP + 0x58],0x0      ; 005908bc
        ;   Label: caseD_9
    JL 0x00590a5a                       ; 005908c1
        ;   XREF to: 00590a5a (CONDITIONAL_JUMP)  ; LAB_00590a5a
    MOV EDI,dword ptr [ESP + 0x54]      ; 005908c7
    MOV EAX,dword ptr [EBX + 0x20004]   ; 005908cb
    CMP EAX,EDI                         ; 005908d1
    JZ 0x0059094a                       ; 005908d3
        ;   XREF to: 0059094a (CONDITIONAL_JUMP)  ; LAB_0059094a
    TEST EAX,EAX                        ; 005908d9
    JZ 0x0059090d                       ; 005908db
        ;   XREF to: 0059090d (CONDITIONAL_JUMP)  ; LAB_0059090d
    MOV EDX,EAX                         ; 005908dd
    JNZ 0x00590fd5                      ; 005908df
        ;   XREF to: 00590fd5 (CONDITIONAL_JUMP)  ; LAB_00590fd5
    CMP EAX,dword ptr [ESP + 0x58]      ; 005908e5
        ;   Label: LAB_005908e5
    JNZ 0x0059090d                      ; 005908e9
        ;   XREF to: 0059090d (CONDITIONAL_JUMP)  ; LAB_0059090d
    PUSH 0x1                            ; 005908eb
    MOV EAX,dword ptr [EBX + 0x20004]   ; 005908ed
    PUSH EAX                            ; 005908f3
    MOV EDX,dword ptr [EAX + 0x154]     ; 005908f4
    CALL dword ptr [EDX + 0xdc]         ; 005908fa
    ADD ESP,0x8                         ; 00590900
    MOV dword ptr [EBX + 0x20004],0x0   ; 00590903
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 0059090d
        ;   Label: LAB_0059090d
    JZ 0x0059094a                       ; 00590914
        ;   XREF to: 0059094a (CONDITIONAL_JUMP)  ; LAB_0059094a
    MOV EDX,dword ptr [ESP + 0x54]      ; 00590916
    TEST EDX,EDX                        ; 0059091a
    JNZ 0x00591038                      ; 0059091c
        ;   XREF to: 00591038 (CONDITIONAL_JUMP)  ; LAB_00591038
    XOR EAX,EAX                         ; 00590922
        ;   Label: LAB_00590922
    CMP EAX,dword ptr [ESP + 0x58]      ; 00590924
        ;   Label: LAB_00590924
    JNZ 0x0059094a                      ; 00590928
        ;   XREF to: 0059094a (CONDITIONAL_JUMP)  ; LAB_0059094a
    MOV EAX,dword ptr [ESP + 0x54]      ; 0059092a
    MOV dword ptr [EBX + 0x20004],EAX   ; 0059092e
    TEST EAX,EAX                        ; 00590934
    JZ 0x0059094a                       ; 00590936
        ;   XREF to: 0059094a (CONDITIONAL_JUMP)  ; LAB_0059094a
    PUSH 0x2                            ; 00590938
    MOV EDX,dword ptr [EAX + 0x154]     ; 0059093a
    PUSH EAX                            ; 00590940
    CALL dword ptr [EDX + 0xdc]         ; 00590941
    ADD ESP,0x8                         ; 00590947
    MOV ESI,dword ptr [EBX + 0x1ff5c]   ; 0059094a
        ;   Label: LAB_0059094a
    CMP ESI,0x1                         ; 00590950
    JNZ 0x00590970                      ; 00590953
        ;   XREF to: 00590970 (CONDITIONAL_JUMP)  ; LAB_00590970
    CMP dword ptr [ESP + 0x58],0x3      ; 00590955
    JNZ 0x00590970                      ; 0059095a
        ;   XREF to: 00590970 (CONDITIONAL_JUMP)  ; LAB_00590970
    PUSH ESI                            ; 0059095c
    PUSH EBX                            ; 0059095d
    CALL core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0 ; 0059095e
        ;   XREF to: 004ec2c0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0(CHero * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 00590963
    MOV dword ptr [EBX + 0x1ff5c],0x0   ; 00590966
    MOV EAX,dword ptr [EBX + 0x1ff8c]   ; 00590970
        ;   Label: LAB_00590970
    TEST EAX,EAX                        ; 00590976
    JZ 0x00590a01                       ; 00590978
        ;   XREF to: 00590a01 (CONDITIONAL_JUMP)  ; LAB_00590a01
    CMP dword ptr [ESP + 0x58],0x3      ; 0059097e
    JNZ 0x00590a01                      ; 00590983
        ;   XREF to: 00590a01 (CONDITIONAL_JUMP)  ; LAB_00590a01
    PUSH 0x0                            ; 00590985
    PUSH EAX                            ; 00590987
    MOV ESI,dword ptr [ESP + 0x58]      ; 00590988
    PUSH ESI                            ; 0059098c
    CALL core_inv.cpp_FUN_004f8d00      ; 0059098d
        ;   XREF to: 004f8d00 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004f8d00(CInventory * this_ptr, CDemonActor * item_to_remove, int should_delete_actor)
    ADD ESP,0xc                         ; 00590992
    MOV EDI,dword ptr [EBX + 0x1ff8c]   ; 00590995
    PUSH EDI                            ; 0059099b
    MOV EAX,[0x0061f650]                ; 0059099c | DAT_0061f650
    PUSH EAX                            ; 005909a1 | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_0051b160 ; 005909a2
        ;   XREF to: 0051b160 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_0051b160(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005909a7
    PUSH 0x0                            ; 005909aa
    MOV EDX,dword ptr [EBX + 0x1ff8c]   ; 005909ac
    PUSH 0x0                            ; 005909b2
    PUSH EDX                            ; 005909b4
    PUSH 0x1                            ; 005909b5
    PUSH EBX                            ; 005909b7
    CALL core_charactr.cpp_FUN_004325b0 ; 005909b8
        ;   XREF to: 004325b0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004325b0()
    ADD ESP,0x14                        ; 005909bd
    PUSH 0x5f6fe2                       ; 005909c0 | = "CTrap"
    MOV ECX,dword ptr [EBX + 0x1ff8c]   ; 005909c5
    PUSH ECX                            ; 005909cb
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 005909cc
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005909d1
    TEST EAX,EAX                        ; 005909d4
    JZ 0x00591062                       ; 005909d6
        ;   XREF to: 00591062 (CONDITIONAL_JUMP)  ; LAB_00591062
    PUSH 0x1                            ; 005909dc
    PUSH 0x1f                           ; 005909de
    MOV ECX,dword ptr [ESP + 0x4c]      ; 005909e0
    PUSH ECX                            ; 005909e4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005909e5
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005909ea
    MOV dword ptr [EBX + 0x1ff5c],0x6   ; 005909ed
    MOV dword ptr [EBX + 0x1ff8c],0x0   ; 005909f7
        ;   Label: LAB_005909f7
    MOV ESI,dword ptr [ESP + 0x58]      ; 00590a01
        ;   Label: LAB_00590a01
    CMP ESI,0xa                         ; 00590a05
    JNZ 0x005910b5                      ; 00590a08
        ;   XREF to: 005910b5 (CONDITIONAL_JUMP)  ; LAB_005910b5
    MOV ECX,dword ptr [ESP + 0x50]      ; 00590a0e
    PUSH ECX                            ; 00590a12
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004f9ed0 ; 00590a13
        ;   XREF to: 004f9ed0 (UNCONDITIONAL_CALL)  ; CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004f9ed0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 00590a18
    TEST EAX,EAX                        ; 00590a1b
    JNZ 0x005910a6                      ; 00590a1d
        ;   XREF to: 005910a6 (CONDITIONAL_JUMP)  ; LAB_005910a6
    MOV dword ptr [EBX + 0x1ff54],0x1   ; 00590a23
        ;   Label: LAB_00590a23
    CMP dword ptr [EBX + 0x1ff5c],0x7   ; 00590a2d
        ;   Label: LAB_00590a2d
    JNZ 0x00590a4c                      ; 00590a34
        ;   XREF to: 00590a4c (CONDITIONAL_JUMP)  ; LAB_00590a4c
    MOV EDI,dword ptr [ESP + 0x58]      ; 00590a36
    TEST EDI,EDI                        ; 00590a3a
    JNZ 0x005910eb                      ; 00590a3c
        ;   XREF to: 005910eb (CONDITIONAL_JUMP)  ; LAB_005910eb
    MOV dword ptr [EBX + 0x1ff5c],0x0   ; 00590a42
        ;   Label: LAB_00590a42
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00590a4c
        ;   Label: LAB_00590a4c
    PUSH EDX                            ; 00590a50
    PUSH EBX                            ; 00590a51
    CALL core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_00434610 ; 00590a52
        ;   XREF to: 00434610 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_00434610(CCharacter * this_ptr, int layer_action_index)
    ADD ESP,0x8                         ; 00590a57
    MOV ECX,dword ptr [ESP + 0x40]      ; 00590a5a
        ;   Label: LAB_00590a5a
    INC ECX                             ; 00590a5e
    MOV dword ptr [ESP + 0x40],ECX      ; 00590a5f
    CMP ECX,0x2                         ; 00590a63
    JL 0x0059080b                       ; 00590a66
        ;   XREF to: 0059080b (CONDITIONAL_JUMP)  ; LAB_0059080b
    MOV ESP,EBP                         ; 00590a6c
        ;   Label: LAB_00590a6c
    POP EBP                             ; 00590a6e
    POP EDI                             ; 00590a6f
    POP ESI                             ; 00590a70
    POP EBX                             ; 00590a71
    RET                                 ; 00590a72
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 00590a73
        ;   Label: LAB_00590a73
    JZ 0x005907f1                       ; 00590a7a
        ;   XREF to: 005907f1 (CONDITIONAL_JUMP)  ; LAB_005907f1
    MOV ECX,dword ptr [EBX + 0x2628]    ; 00590a80
    TEST ECX,ECX                        ; 00590a86
    JNZ 0x00590abc                      ; 00590a88
        ;   XREF to: 00590abc (CONDITIONAL_JUMP)  ; LAB_00590abc
    LEA EAX,[EBX + 0x1fae8]             ; 00590a8a
    MOV EAX,dword ptr [EAX + 0x338]     ; 00590a90
    MOV dword ptr [ESP + 0x54],EAX      ; 00590a96
    MOV EDX,dword ptr [ESP + 0x54]      ; 00590a9a
        ;   Label: LAB_00590a9a
    TEST EDX,EDX                        ; 00590a9e
    JNZ 0x005907f1                      ; 00590aa0
        ;   XREF to: 005907f1 (CONDITIONAL_JUMP)  ; LAB_005907f1
    CMP dword ptr [ESP + 0x38],0x0      ; 00590aa6
    JGE 0x005907f1                      ; 00590aab
        ;   XREF to: 005907f1 (CONDITIONAL_JUMP)  ; LAB_005907f1
    MOV dword ptr [EBX + 0x1ffac],EDX   ; 00590ab1
    JMP 0x005907f1                      ; 00590ab7
        ;   XREF to: 005907f1 (UNCONDITIONAL_JUMP)  ; LAB_005907f1
    MOV ESI,dword ptr [0x02c99770]      ; 00590abc | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_00590abc
    PUSH ESI                            ; 00590ac2
    PUSH ECX                            ; 00590ac3
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00590ac4
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00590ac9
    MOV dword ptr [ESP + 0x54],EAX      ; 00590acc
    TEST EAX,EAX                        ; 00590ad0
    JNZ 0x00590a9a                      ; 00590ad2
        ;   XREF to: 00590a9a (CONDITIONAL_JUMP)  ; LAB_00590a9a
    MOV EAX,dword ptr [EBX + 0x2628]    ; 00590ad4
    PUSH EAX                            ; 00590ada
    MOV EDX,dword ptr [EAX + 0x154]     ; 00590adb
    CALL dword ptr [EDX + 0x74]         ; 00590ae1
    ADD ESP,0x4                         ; 00590ae4
    TEST AL,0x3                         ; 00590ae7
    JZ 0x00590a9a                       ; 00590ae9
        ;   XREF to: 00590a9a (CONDITIONAL_JUMP)  ; LAB_00590a9a
    MOV dword ptr [ESP + 0x38],0x8      ; 00590aeb
    JMP 0x00590a9a                      ; 00590af3
        ;   XREF to: 00590a9a (UNCONDITIONAL_JUMP)  ; LAB_00590a9a
    MOV EAX,dword ptr [EBX + 0x1ff8c]   ; 00590af5
        ;   Label: LAB_00590af5
    TEST EAX,EAX                        ; 00590afb
    JNZ 0x0059082a                      ; 00590afd
        ;   XREF to: 0059082a (CONDITIONAL_JUMP)  ; LAB_0059082a
    CMP EDI,0x2                         ; 00590b03
    JNZ 0x00590b11                      ; 00590b06
        ;   XREF to: 00590b11 (CONDITIONAL_JUMP)  ; LAB_00590b11
    MOV dword ptr [ESP + 0x5c],EAX      ; 00590b08
    JMP 0x00590832                      ; 00590b0c
        ;   XREF to: 00590832 (UNCONDITIONAL_JUMP)  ; LAB_00590832
    CMP EDI,0x3                         ; 00590b11
        ;   Label: LAB_00590b11
    JNZ 0x00590b84                      ; 00590b14
        ;   XREF to: 00590b84 (CONDITIONAL_JUMP)  ; LAB_00590b84
    MOV EDI,0x6                         ; 00590b16
    PUSH EDI                            ; 00590b1b
    PUSH EBX                            ; 00590b1c
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590 ; 00590b1d
        ;   XREF to: 00434590 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0x68],EAX      ; 00590b22
    MOV dword ptr [ESP + 0x64],EDI      ; 00590b26
    FLD float ptr [ESP + 0x68]          ; 00590b2a
    ADD ESP,0x8                         ; 00590b2e
    FCOMP double ptr [0x005f7019]       ; 00590b31 | DAT_005f7019
    FNSTSW AX                           ; 00590b37
    SAHF                                ; 00590b39
    JBE 0x00590832                      ; 00590b3a
        ;   XREF to: 00590832 (CONDITIONAL_JUMP)  ; LAB_00590832
    FLD float ptr [EBP + 0x18]          ; 00590b40
    FMUL double ptr [0x005f7011]        ; 00590b43 | DAT_005f7011
    FADD float ptr [EBX + 0x1ffbc]      ; 00590b49
    FST float ptr [EBX + 0x1ffbc]       ; 00590b4f
    FCOMP float ptr [0x00606088]        ; 00590b55 | DAT_00606088
    FNSTSW AX                           ; 00590b5b
    SAHF                                ; 00590b5d
    JA 0x00590b77                       ; 00590b5e
        ;   XREF to: 00590b77 (CONDITIONAL_JUMP)  ; LAB_00590b77
    MOV EAX,dword ptr [EBX + 0xc1e4]    ; 00590b60
        ;   Label: LAB_00590b60
    TEST EAX,EAX                        ; 00590b66
    JNZ 0x00590a6c                      ; 00590b68
        ;   XREF to: 00590a6c (CONDITIONAL_JUMP)  ; LAB_00590a6c
    MOV dword ptr [ESP + 0x5c],EAX      ; 00590b6e
    JMP 0x00590832                      ; 00590b72
        ;   XREF to: 00590832 (UNCONDITIONAL_JUMP)  ; LAB_00590832
    MOV EAX,[0x00606088]                ; 00590b77 | DAT_00606088
        ;   Label: LAB_00590b77
    MOV dword ptr [EBX + 0x1ffbc],EAX   ; 00590b7c
    JMP 0x00590b60                      ; 00590b82
        ;   XREF to: 00590b60 (UNCONDITIONAL_JUMP)  ; LAB_00590b60
    MOV ESI,dword ptr [ESP + 0x50]      ; 00590b84
        ;   Label: LAB_00590b84
    PUSH ESI                            ; 00590b88
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004f9ed0 ; 00590b89
        ;   XREF to: 004f9ed0 (UNCONDITIONAL_CALL)  ; CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004f9ed0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 00590b8e
    TEST EAX,EAX                        ; 00590b91
    JZ 0x00590ba2                       ; 00590b93
        ;   XREF to: 00590ba2 (CONDITIONAL_JUMP)  ; LAB_00590ba2
    CMP dword ptr [EBX + 0x1ff54],0x0   ; 00590b95
    JZ 0x0059082a                       ; 00590b9c
        ;   XREF to: 0059082a (CONDITIONAL_JUMP)  ; LAB_0059082a
    MOV EAX,dword ptr [ESP + 0x50]      ; 00590ba2
        ;   Label: LAB_00590ba2
    PUSH EAX                            ; 00590ba6
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004f9ed0 ; 00590ba7
        ;   XREF to: 004f9ed0 (UNCONDITIONAL_CALL)  ; CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004f9ed0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 00590bac
    TEST EAX,EAX                        ; 00590baf
    JZ 0x00590bc9                       ; 00590bb1
        ;   XREF to: 00590bc9 (CONDITIONAL_JUMP)  ; LAB_00590bc9
    CMP dword ptr [EBX + 0x1ff54],0x1   ; 00590bb3
    JNZ 0x00590bc9                      ; 00590bba
        ;   XREF to: 00590bc9 (CONDITIONAL_JUMP)  ; LAB_00590bc9
    MOV dword ptr [ESP + 0x5c],0xa      ; 00590bbc
    JMP 0x00590832                      ; 00590bc4
        ;   XREF to: 00590832 (UNCONDITIONAL_JUMP)  ; LAB_00590832
    MOV ECX,dword ptr [ESP + 0x50]      ; 00590bc9
        ;   Label: LAB_00590bc9
    PUSH ECX                            ; 00590bcd
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004f9ed0 ; 00590bce
        ;   XREF to: 004f9ed0 (UNCONDITIONAL_CALL)  ; CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004f9ed0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 00590bd3
    TEST EAX,EAX                        ; 00590bd6
    JNZ 0x00590bf0                      ; 00590bd8
        ;   XREF to: 00590bf0 (CONDITIONAL_JUMP)  ; LAB_00590bf0
    CMP dword ptr [EBX + 0x1ff54],0x2   ; 00590bda
    JNZ 0x00590bf0                      ; 00590be1
        ;   XREF to: 00590bf0 (CONDITIONAL_JUMP)  ; LAB_00590bf0
    MOV dword ptr [ESP + 0x5c],0xa      ; 00590be3
    JMP 0x00590832                      ; 00590beb
        ;   XREF to: 00590832 (UNCONDITIONAL_JUMP)  ; LAB_00590832
    MOV EDI,dword ptr [ESP + 0x50]      ; 00590bf0
        ;   Label: LAB_00590bf0
    PUSH EDI                            ; 00590bf4
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004f9ed0 ; 00590bf5
        ;   XREF to: 004f9ed0 (UNCONDITIONAL_CALL)  ; CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004f9ed0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 00590bfa
    TEST EAX,EAX                        ; 00590bfd
    JNZ 0x00590c0e                      ; 00590bff
        ;   XREF to: 00590c0e (CONDITIONAL_JUMP)  ; LAB_00590c0e
    CMP dword ptr [EBX + 0x1ff54],0x1   ; 00590c01
    JZ 0x0059082a                       ; 00590c08
        ;   XREF to: 0059082a (CONDITIONAL_JUMP)  ; LAB_0059082a
    MOV EDX,dword ptr [ESP + 0x38]      ; 00590c0e
        ;   Label: LAB_00590c0e
    TEST EDX,EDX                        ; 00590c12
    JL 0x00590c1f                       ; 00590c14
        ;   XREF to: 00590c1f (CONDITIONAL_JUMP)  ; LAB_00590c1f
    MOV dword ptr [ESP + 0x5c],EDX      ; 00590c16
    JMP 0x00590832                      ; 00590c1a
        ;   XREF to: 00590832 (UNCONDITIONAL_JUMP)  ; LAB_00590832
    MOV ECX,dword ptr [ESP + 0x54]      ; 00590c1f
        ;   Label: LAB_00590c1f
    MOV EAX,dword ptr [EBX + 0x20004]   ; 00590c23
    CMP EAX,ECX                         ; 00590c29
    JNZ 0x00590c7e                      ; 00590c2b
        ;   XREF to: 00590c7e (CONDITIONAL_JUMP)  ; LAB_00590c7e
    MOV EAX,dword ptr [EBX + 0x20004]   ; 00590c2d
    TEST EAX,EAX                        ; 00590c33
    JZ 0x00590c7a                       ; 00590c35
        ;   XREF to: 00590c7a (CONDITIONAL_JUMP)  ; caseD_8
    MOV EAX,dword ptr [EAX + 0x2e0]     ; 00590c37
    CMP EAX,0xa                         ; 00590c3d
    JA 0x00590c7a                       ; 00590c40
        ;   XREF to: 00590c7a (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [EAX*0x4 + 0x59074c]  ; 00590c42 | caseD_5 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x2                         ; 00590c49
        ;   Label: caseD_0
    MOV dword ptr [ESP + 0x5c],EAX      ; 00590c4e
        ;   Label: LAB_00590c4e
    JMP 0x00590832                      ; 00590c52
        ;   XREF to: 00590832 (UNCONDITIONAL_JUMP)  ; LAB_00590832
    MOV EAX,0x4                         ; 00590c57
        ;   Label: caseD_1
    JMP 0x00590c4e                      ; 00590c5c
        ;   XREF to: 00590c4e (UNCONDITIONAL_JUMP)  ; LAB_00590c4e
    MOV EAX,0xe                         ; 00590c5e
        ;   Label: caseD_9
    JMP 0x00590c4e                      ; 00590c63
        ;   XREF to: 00590c4e (UNCONDITIONAL_JUMP)  ; LAB_00590c4e
    MOV EAX,0x7                         ; 00590c65
        ;   Label: caseD_4
    JMP 0x00590c4e                      ; 00590c6a
        ;   XREF to: 00590c4e (UNCONDITIONAL_JUMP)  ; LAB_00590c4e
    MOV EAX,0x5                         ; 00590c6c
        ;   Label: caseD_2
    JMP 0x00590c4e                      ; 00590c71
        ;   XREF to: 00590c4e (UNCONDITIONAL_JUMP)  ; LAB_00590c4e
    MOV EAX,0x8                         ; 00590c73
        ;   Label: caseD_7
    JMP 0x00590c4e                      ; 00590c78
        ;   XREF to: 00590c4e (UNCONDITIONAL_JUMP)  ; LAB_00590c4e
    XOR EAX,EAX                         ; 00590c7a
        ;   Label: caseD_3
    JMP 0x00590c4e                      ; 00590c7c
        ;   XREF to: 00590c4e (UNCONDITIONAL_JUMP)  ; LAB_00590c4e
    TEST EAX,EAX                        ; 00590c7e
        ;   Label: LAB_00590c7e
    JNZ 0x00590cf6                      ; 00590c80
        ;   XREF to: 00590cf6 (CONDITIONAL_JUMP)  ; LAB_00590cf6
    MOV EDX,ECX                         ; 00590c86
    TEST ECX,ECX                        ; 00590c88
    JNZ 0x00590cc4                      ; 00590c8a
        ;   XREF to: 00590cc4 (CONDITIONAL_JUMP)  ; LAB_00590cc4
    MOV dword ptr [ESP + 0x5c],EAX      ; 00590c8c
        ;   Label: LAB_00590c8c
    JMP 0x00590832                      ; 00590c90
        ;   XREF to: 00590832 (UNCONDITIONAL_JUMP)  ; LAB_00590832
    MOV EAX,0x1                         ; 00590c95
        ;   Label: LAB_00590c95
    JMP 0x00590c8c                      ; 00590c9a
        ;   XREF to: 00590c8c (UNCONDITIONAL_JUMP)  ; LAB_00590c8c
    MOV ESI,dword ptr [0x01d1e2dc]      ; 00590c9c | g_CMeleeClassInfo.name_hash
        ;   Label: LAB_00590c9c
    PUSH ESI                            ; 00590ca2
    PUSH EDX                            ; 00590ca3
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00590ca4
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00590ca9
    TEST EAX,EAX                        ; 00590cac
    JZ 0x00590cc0                       ; 00590cae
        ;   XREF to: 00590cc0 (CONDITIONAL_JUMP)  ; LAB_00590cc0
    CMP dword ptr [EAX + 0x588],0x0     ; 00590cb0
    JZ 0x00590cc0                       ; 00590cb7
        ;   XREF to: 00590cc0 (CONDITIONAL_JUMP)  ; LAB_00590cc0
    MOV EAX,0x3                         ; 00590cb9
    JMP 0x00590c8c                      ; 00590cbe
        ;   XREF to: 00590c8c (UNCONDITIONAL_JUMP)  ; LAB_00590c8c
    XOR EAX,EAX                         ; 00590cc0
        ;   Label: LAB_00590cc0
    JMP 0x00590c8c                      ; 00590cc2
        ;   XREF to: 00590c8c (UNCONDITIONAL_JUMP)  ; LAB_00590c8c
    MOV EAX,dword ptr [ECX + 0x2e0]     ; 00590cc4
        ;   Label: LAB_00590cc4
    CMP EAX,0x7                         ; 00590cca
    JNC 0x00590ce1                      ; 00590ccd
        ;   XREF to: 00590ce1 (CONDITIONAL_JUMP)  ; LAB_00590ce1
    TEST EAX,EAX                        ; 00590ccf
    JZ 0x00590c95                       ; 00590cd1
        ;   XREF to: 00590c95 (CONDITIONAL_JUMP)  ; LAB_00590c95
    MOV EAX,0x3                         ; 00590cd3
    MOV dword ptr [ESP + 0x5c],EAX      ; 00590cd8
    JMP 0x00590832                      ; 00590cdc
        ;   XREF to: 00590832 (UNCONDITIONAL_JUMP)  ; LAB_00590832
    JBE 0x00590c9c                      ; 00590ce1
        ;   XREF to: 00590c9c (CONDITIONAL_JUMP)  ; LAB_00590c9c
        ;   Label: LAB_00590ce1
    CMP EAX,0x8                         ; 00590ce3
    JZ 0x00590c9c                       ; 00590ce6
        ;   XREF to: 00590c9c (CONDITIONAL_JUMP)  ; LAB_00590c9c
    MOV EAX,0x3                         ; 00590ce8
    MOV dword ptr [ESP + 0x5c],EAX      ; 00590ced
    JMP 0x00590832                      ; 00590cf1
        ;   XREF to: 00590832 (UNCONDITIONAL_JUMP)  ; LAB_00590832
    MOV EDX,EAX                         ; 00590cf6
        ;   Label: LAB_00590cf6
    JNZ 0x00590d32                      ; 00590cf8
        ;   XREF to: 00590d32 (CONDITIONAL_JUMP)  ; LAB_00590d32
    MOV dword ptr [ESP + 0x5c],EAX      ; 00590cfa
        ;   Label: LAB_00590cfa
    JMP 0x00590832                      ; 00590cfe
        ;   XREF to: 00590832 (UNCONDITIONAL_JUMP)  ; LAB_00590832
    MOV EAX,0x1                         ; 00590d03
        ;   Label: LAB_00590d03
    JMP 0x00590cfa                      ; 00590d08
        ;   XREF to: 00590cfa (UNCONDITIONAL_JUMP)  ; LAB_00590cfa
    MOV EDI,dword ptr [0x01d1e2dc]      ; 00590d0a | g_CMeleeClassInfo.name_hash
        ;   Label: LAB_00590d0a
    PUSH EDI                            ; 00590d10
    PUSH EDX                            ; 00590d11
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00590d12
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00590d17
    TEST EAX,EAX                        ; 00590d1a
    JZ 0x00590d2e                       ; 00590d1c
        ;   XREF to: 00590d2e (CONDITIONAL_JUMP)  ; LAB_00590d2e
    CMP dword ptr [EAX + 0x588],0x0     ; 00590d1e
    JZ 0x00590d2e                       ; 00590d25
        ;   XREF to: 00590d2e (CONDITIONAL_JUMP)  ; LAB_00590d2e
    MOV EAX,0x3                         ; 00590d27
    JMP 0x00590cfa                      ; 00590d2c
        ;   XREF to: 00590cfa (UNCONDITIONAL_JUMP)  ; LAB_00590cfa
    XOR EAX,EAX                         ; 00590d2e
        ;   Label: LAB_00590d2e
    JMP 0x00590cfa                      ; 00590d30
        ;   XREF to: 00590cfa (UNCONDITIONAL_JUMP)  ; LAB_00590cfa
    MOV EAX,dword ptr [EAX + 0x2e0]     ; 00590d32
        ;   Label: LAB_00590d32
    CMP EAX,0x7                         ; 00590d38
    JNC 0x00590d4f                      ; 00590d3b
        ;   XREF to: 00590d4f (CONDITIONAL_JUMP)  ; LAB_00590d4f
    TEST EAX,EAX                        ; 00590d3d
    JZ 0x00590d03                       ; 00590d3f
        ;   XREF to: 00590d03 (CONDITIONAL_JUMP)  ; LAB_00590d03
    MOV EAX,0x3                         ; 00590d41
    MOV dword ptr [ESP + 0x5c],EAX      ; 00590d46
    JMP 0x00590832                      ; 00590d4a
        ;   XREF to: 00590832 (UNCONDITIONAL_JUMP)  ; LAB_00590832
    JBE 0x00590d0a                      ; 00590d4f
        ;   XREF to: 00590d0a (CONDITIONAL_JUMP)  ; LAB_00590d0a
        ;   Label: LAB_00590d4f
    CMP EAX,0x8                         ; 00590d51
    JZ 0x00590d0a                       ; 00590d54
        ;   XREF to: 00590d0a (CONDITIONAL_JUMP)  ; LAB_00590d0a
    MOV EAX,0x3                         ; 00590d56
    MOV dword ptr [ESP + 0x5c],EAX      ; 00590d5b
    JMP 0x00590832                      ; 00590d5f
        ;   XREF to: 00590832 (UNCONDITIONAL_JUMP)  ; LAB_00590832
    MOV EAX,0xb                         ; 00590d64
        ;   Label: LAB_00590d64
    MOV EDX,EAX                         ; 00590d69
    MOV ECX,dword ptr [EDI + 0x64]      ; 00590d6b
    SAR EDX,0x1f                        ; 00590d6e
    IDIV ECX                            ; 00590d71
    MOV dword ptr [ESP + 0x60],EAX      ; 00590d73
    FILD dword ptr [ESP + 0x60]         ; 00590d77
    FCOMP float ptr [EBX + 0x2c9c]      ; 00590d7b
    FNSTSW AX                           ; 00590d81
    SAHF                                ; 00590d83
    JA 0x005908bc                       ; 00590d84
        ;   XREF to: 005908bc (CONDITIONAL_JUMP)  ; caseD_b
    PUSH ESI                            ; 00590d8a
    CALL core_dynamite.cpp_CDynamite_lightFuse_FUN_00492640 ; 00590d8b
        ;   XREF to: 00492640 (UNCONDITIONAL_CALL)  ; void core_dynamite.cpp_CDynamite_lightFuse_FUN_00492640(CDynamite * this_ptr)
    ADD ESP,0x4                         ; 00590d90
    JMP 0x005908bc                      ; 00590d93
        ;   XREF to: 005908bc (UNCONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [EBX + 0x1ff5c],0x3   ; 00590d98
        ;   Label: caseD_7
    JNZ 0x00590e9c                      ; 00590d9f
        ;   XREF to: 00590e9c (CONDITIONAL_JUMP)  ; LAB_00590e9c
    MOV EAX,0xb                         ; 00590da5
    MOV EDX,EAX                         ; 00590daa
    MOV ECX,dword ptr [EDI + 0x64]      ; 00590dac
    SAR EDX,0x1f                        ; 00590daf
    IDIV ECX                            ; 00590db2
    MOV dword ptr [ESP + 0x60],EAX      ; 00590db4
    FILD dword ptr [ESP + 0x60]         ; 00590db8
    FCOMP float ptr [EBX + 0x2c9c]      ; 00590dbc
    FNSTSW AX                           ; 00590dc2
    SAHF                                ; 00590dc4
    JA 0x00590e9c                       ; 00590dc5
        ;   XREF to: 00590e9c (CONDITIONAL_JUMP)  ; LAB_00590e9c
    PUSH EBX                            ; 00590dcb
    LEA ESI,[ESP + 0x10]                ; 00590dcc
    LEA EDI,[ESP + 0x28]                ; 00590dd0
    CALL core_stranger.cpp_FUN_005906e0 ; 00590dd4
        ;   XREF to: 005906e0 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_FUN_005906e0()
    LEA ESI,[ESP + 0x10]                ; 00590dd9
    ADD ESP,0x4                         ; 00590ddd
    MOVSD ES:EDI,ESI                    ; 00590de0
    MOVSD ES:EDI,ESI                    ; 00590de1
    MOVSD ES:EDI,ESI                    ; 00590de2
    MOV ESI,dword ptr [0x01c3db94]      ; 00590de3 | g_CDynamiteClassInfo.name_hash
    PUSH ESI                            ; 00590de9
    MOV EDI,dword ptr [EBX + 0x20004]   ; 00590dea
    PUSH EDI                            ; 00590df0
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00590df1
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x50],EAX      ; 00590df6
    ADD ESP,0x8                         ; 00590dfa
    MOV dword ptr [ESP + 0x3c],EAX      ; 00590dfd
    TEST EAX,EAX                        ; 00590e01
    JZ 0x00590e67                       ; 00590e03
        ;   XREF to: 00590e67 (CONDITIONAL_JUMP)  ; LAB_00590e67
    LEA EAX,[ESP + 0x24]                ; 00590e05
    PUSH EAX                            ; 00590e09
    PUSH EBX                            ; 00590e0a
    LEA ESI,[ESP + 0x20]                ; 00590e0b
    LEA EDI,[ESP + 0x8]                 ; 00590e0f
    CALL core_actor.cpp_FUN_00408ac0    ; 00590e13
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    ADD ESP,0x8                         ; 00590e18
    LEA ESI,[ESP + 0x18]                ; 00590e1b
    MOV EDX,dword ptr [ESP + 0x48]      ; 00590e1f
    MOV EAX,ESP                         ; 00590e23
    ADD EDX,0x57c                       ; 00590e25
    MOVSD ES:EDI,ESI                    ; 00590e2b
    MOVSD ES:EDI,ESI                    ; 00590e2c
    MOVSD ES:EDI,ESI                    ; 00590e2d
    CMP EDX,EAX                         ; 00590e2e
    JZ 0x00590e45                       ; 00590e30
        ;   XREF to: 00590e45 (CONDITIONAL_JUMP)  ; LAB_00590e45
    MOV EAX,dword ptr [ESP]             ; 00590e32
    MOV dword ptr [EDX],EAX             ; 00590e35
    MOV EAX,dword ptr [ESP + 0x4]       ; 00590e37
    MOV dword ptr [EDX + 0x4],EAX       ; 00590e3b
    MOV EAX,dword ptr [ESP + 0x8]       ; 00590e3e
    MOV dword ptr [EDX + 0x8],EAX       ; 00590e42
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00590e45
        ;   Label: LAB_00590e45
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00590e49
    PUSH EDX                            ; 00590e4d
    MOV EAX,dword ptr [EAX + 0x154]     ; 00590e4e
    CALL dword ptr [EAX + 0xe4]         ; 00590e54
    ADD ESP,0x4                         ; 00590e5a
    MOV dword ptr [EBX + 0x20004],0x0   ; 00590e5d
    CMP dword ptr [EBX + 0x2628],0x0    ; 00590e67
        ;   Label: LAB_00590e67
    JZ 0x00590e87                       ; 00590e6e
        ;   XREF to: 00590e87 (CONDITIONAL_JUMP)  ; LAB_00590e87
    LEA EAX,[ESP + 0x24]                ; 00590e70
    PUSH EAX                            ; 00590e74
    PUSH 0x1                            ; 00590e75
    MOV EDX,dword ptr [EBX + 0x154]     ; 00590e77
    PUSH EBX                            ; 00590e7d
    CALL dword ptr [EDX + 0x128]        ; 00590e7e
    ADD ESP,0xc                         ; 00590e84
    MOV dword ptr [EBX + 0x1ff5c],0x0   ; 00590e87
        ;   Label: LAB_00590e87
    MOV EAX,[0x00606084]                ; 00590e91 | DAT_00606084
    MOV dword ptr [EBX + 0x1ffbc],EAX   ; 00590e96
    FLD float ptr [EBX + 0x2c9c]        ; 00590e9c
        ;   Label: LAB_00590e9c
    FLD1                                ; 00590ea2
    FCOMPP                              ; 00590ea4
    FNSTSW AX                           ; 00590ea6
    SAHF                                ; 00590ea8
    JA 0x005908bc                       ; 00590ea9
        ;   XREF to: 005908bc (CONDITIONAL_JUMP)  ; caseD_b
    MOV dword ptr [EBX + 0x2c98],0x0    ; 00590eaf
    MOV dword ptr [EBX + 0x2c9c],0x0    ; 00590eb9
    JMP 0x005908bc                      ; 00590ec3
        ;   XREF to: 005908bc (UNCONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [ESP + 0x4c],0x3f19999a ; 00590ec8
        ;   Label: caseD_8
    JGE 0x005908bc                      ; 00590ed0
        ;   XREF to: 005908bc (CONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [EBX + 0x2c9c],0x3f19999a ; 00590ed6
    JL 0x005908bc                       ; 00590ee0
        ;   XREF to: 005908bc (CONDITIONAL_JUMP)  ; caseD_b
    PUSH 0x5f6fd9                       ; 00590ee6 | = "CShotgun"
    MOV ESI,dword ptr [EBX + 0x20004]   ; 00590eeb
    PUSH ESI                            ; 00590ef1
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 00590ef2
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00590ef7
    TEST EAX,EAX                        ; 00590efa
    JZ 0x005908bc                       ; 00590efc
        ;   XREF to: 005908bc (CONDITIONAL_JUMP)  ; caseD_b
    MOV EAX,dword ptr [EBX + 0x20004]   ; 00590f02
    PUSH EAX                            ; 00590f08
    MOV EDX,dword ptr [EAX + 0x154]     ; 00590f09
    CALL dword ptr [EDX + 0xd8]         ; 00590f0f
    ADD ESP,0x4                         ; 00590f15
    JMP 0x005908bc                      ; 00590f18
        ;   XREF to: 005908bc (UNCONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [ESP + 0x4c],0x3ebd70a4 ; 00590f1d
        ;   Label: caseD_c
    JGE 0x005908bc                      ; 00590f25
        ;   XREF to: 005908bc (CONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [EBX + 0x2c9c],0x3ebd70a4 ; 00590f2b
    JL 0x005908bc                       ; 00590f35
        ;   XREF to: 005908bc (CONDITIONAL_JUMP)  ; caseD_b
    MOV EAX,dword ptr [EBX + 0x20004]   ; 00590f3b
    TEST EAX,EAX                        ; 00590f41
    JZ 0x005908bc                       ; 00590f43
        ;   XREF to: 005908bc (CONDITIONAL_JUMP)  ; caseD_b
    PUSH 0x1                            ; 00590f49
    MOV EDX,dword ptr [EAX + 0x154]     ; 00590f4b
    PUSH EAX                            ; 00590f51
    CALL dword ptr [EDX + 0x78]         ; 00590f52
    ADD ESP,0x8                         ; 00590f55
    JMP 0x005908bc                      ; 00590f58
        ;   XREF to: 005908bc (UNCONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [ESP + 0x4c],0x3f28f5c3 ; 00590f5d
        ;   Label: caseD_d
    JGE 0x005908bc                      ; 00590f65
        ;   XREF to: 005908bc (CONDITIONAL_JUMP)  ; caseD_b
    CMP dword ptr [EBX + 0x2c9c],0x3f28f5c3 ; 00590f6b
    JL 0x005908bc                       ; 00590f75
        ;   XREF to: 005908bc (CONDITIONAL_JUMP)  ; caseD_b
    MOV ECX,dword ptr [EBX + 0x20004]   ; 00590f7b
    TEST ECX,ECX                        ; 00590f81
    JZ 0x005908bc                       ; 00590f83
        ;   XREF to: 005908bc (CONDITIONAL_JUMP)  ; caseD_b
    PUSH 0x2                            ; 00590f89
    MOV EDX,dword ptr [ECX + 0x154]     ; 00590f8b
    PUSH ECX                            ; 00590f91
    CALL dword ptr [EDX + 0x78]         ; 00590f92
    ADD ESP,0x8                         ; 00590f95
    JMP 0x005908bc                      ; 00590f98
        ;   XREF to: 005908bc (UNCONDITIONAL_JUMP)  ; caseD_b
    MOV EAX,0x1                         ; 00590f9d
        ;   Label: LAB_00590f9d
    JMP 0x005908e5                      ; 00590fa2
        ;   XREF to: 005908e5 (UNCONDITIONAL_JUMP)  ; LAB_005908e5
    MOV ECX,dword ptr [0x01d1e2dc]      ; 00590fa7 | g_CMeleeClassInfo.name_hash
        ;   Label: LAB_00590fa7
    PUSH ECX                            ; 00590fad
    PUSH EDX                            ; 00590fae
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00590faf
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00590fb4
    TEST EAX,EAX                        ; 00590fb7
    JZ 0x00590fce                       ; 00590fb9
        ;   XREF to: 00590fce (CONDITIONAL_JUMP)  ; LAB_00590fce
    CMP dword ptr [EAX + 0x588],0x0     ; 00590fbb
    JZ 0x00590fce                       ; 00590fc2
        ;   XREF to: 00590fce (CONDITIONAL_JUMP)  ; LAB_00590fce
    MOV EAX,0x3                         ; 00590fc4
    JMP 0x005908e5                      ; 00590fc9
        ;   XREF to: 005908e5 (UNCONDITIONAL_JUMP)  ; LAB_005908e5
    XOR EAX,EAX                         ; 00590fce
        ;   Label: LAB_00590fce
    JMP 0x005908e5                      ; 00590fd0
        ;   XREF to: 005908e5 (UNCONDITIONAL_JUMP)  ; LAB_005908e5
    MOV EAX,dword ptr [EAX + 0x2e0]     ; 00590fd5
        ;   Label: LAB_00590fd5
    CMP EAX,0x7                         ; 00590fdb
    JNC 0x00590fee                      ; 00590fde
        ;   XREF to: 00590fee (CONDITIONAL_JUMP)  ; LAB_00590fee
    TEST EAX,EAX                        ; 00590fe0
    JZ 0x00590f9d                       ; 00590fe2
        ;   XREF to: 00590f9d (CONDITIONAL_JUMP)  ; LAB_00590f9d
    MOV EAX,0x3                         ; 00590fe4
    JMP 0x005908e5                      ; 00590fe9
        ;   XREF to: 005908e5 (UNCONDITIONAL_JUMP)  ; LAB_005908e5
    JBE 0x00590fa7                      ; 00590fee
        ;   XREF to: 00590fa7 (CONDITIONAL_JUMP)  ; LAB_00590fa7
        ;   Label: LAB_00590fee
    CMP EAX,0x8                         ; 00590ff0
    JZ 0x00590fa7                       ; 00590ff3
        ;   XREF to: 00590fa7 (CONDITIONAL_JUMP)  ; LAB_00590fa7
    MOV EAX,0x3                         ; 00590ff5
    JMP 0x005908e5                      ; 00590ffa
        ;   XREF to: 005908e5 (UNCONDITIONAL_JUMP)  ; LAB_005908e5
    MOV EAX,0x1                         ; 00590fff
        ;   Label: LAB_00590fff
    JMP 0x00590924                      ; 00591004
        ;   XREF to: 00590924 (UNCONDITIONAL_JUMP)  ; LAB_00590924
    MOV ESI,dword ptr [0x01d1e2dc]      ; 00591009 | g_CMeleeClassInfo.name_hash
        ;   Label: LAB_00591009
    PUSH ESI                            ; 0059100f
    PUSH EDX                            ; 00591010
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00591011
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00591016
    TEST EAX,EAX                        ; 00591019
    JZ 0x00590922                       ; 0059101b
        ;   XREF to: 00590922 (CONDITIONAL_JUMP)  ; LAB_00590922
    CMP dword ptr [EAX + 0x588],0x0     ; 00591021
    JZ 0x00590922                       ; 00591028
        ;   XREF to: 00590922 (CONDITIONAL_JUMP)  ; LAB_00590922
    MOV EAX,0x3                         ; 0059102e
    JMP 0x00590924                      ; 00591033
        ;   XREF to: 00590924 (UNCONDITIONAL_JUMP)  ; LAB_00590924
    MOV EAX,dword ptr [EDX + 0x2e0]     ; 00591038
        ;   Label: LAB_00591038
    CMP EAX,0x7                         ; 0059103e
    JNC 0x00591051                      ; 00591041
        ;   XREF to: 00591051 (CONDITIONAL_JUMP)  ; LAB_00591051
    TEST EAX,EAX                        ; 00591043
    JZ 0x00590fff                       ; 00591045
        ;   XREF to: 00590fff (CONDITIONAL_JUMP)  ; LAB_00590fff
    MOV EAX,0x3                         ; 00591047
    JMP 0x00590924                      ; 0059104c
        ;   XREF to: 00590924 (UNCONDITIONAL_JUMP)  ; LAB_00590924
    JBE 0x00591009                      ; 00591051
        ;   XREF to: 00591009 (CONDITIONAL_JUMP)  ; LAB_00591009
        ;   Label: LAB_00591051
    CMP EAX,0x8                         ; 00591053
    JZ 0x00591009                       ; 00591056
        ;   XREF to: 00591009 (CONDITIONAL_JUMP)  ; LAB_00591009
    MOV EAX,0x3                         ; 00591058
    JMP 0x00590924                      ; 0059105d
        ;   XREF to: 00590924 (UNCONDITIONAL_JUMP)  ; LAB_00590924
    PUSH 0x1                            ; 00591062
        ;   Label: LAB_00591062
    PUSH 0x21                           ; 00591064
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00591066
    PUSH ESI                            ; 0059106a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0059106b
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EDI,dword ptr [EBX + 0x1ff5c]   ; 00591070
    ADD ESP,0xc                         ; 00591076
    TEST EDI,EDI                        ; 00591079
    JZ 0x00591097                       ; 0059107b
        ;   XREF to: 00591097 (CONDITIONAL_JUMP)  ; LAB_00591097
    PUSH 0x141e                         ; 0059107d
    PUSH EDI                            ; 00591082
    PUSH 0x5f6fe8                       ; 00591083 | = "actionPending = %d\nstranger.cpp line %d"
    MOV EDX,dword ptr [0x0061abc0]      ; 00591088 | g_CEditorToolsPtr
    PUSH EDX                            ; 0059108e
    CALL shape_edittool.cpp_FUN_00494340 ; 0059108f
        ;   XREF to: 00494340 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00494340()
    ADD ESP,0x10                        ; 00591094
    MOV dword ptr [EBX + 0x1ff5c],0x2   ; 00591097
        ;   Label: LAB_00591097
    JMP 0x005909f7                      ; 005910a1
        ;   XREF to: 005909f7 (UNCONDITIONAL_JUMP)  ; LAB_005909f7
    MOV dword ptr [EBX + 0x1ff54],0x2   ; 005910a6
        ;   Label: LAB_005910a6
    JMP 0x00590a2d                      ; 005910b0
        ;   XREF to: 00590a2d (UNCONDITIONAL_JUMP)  ; LAB_00590a2d
    CMP ESI,0x3                         ; 005910b5
        ;   Label: LAB_005910b5
    JNZ 0x00590a2d                      ; 005910b8
        ;   XREF to: 00590a2d (CONDITIONAL_JUMP)  ; LAB_00590a2d
    CMP dword ptr [EBX + 0x1ff54],0x2   ; 005910be
    JGE 0x00590a2d                      ; 005910c5
        ;   XREF to: 00590a2d (CONDITIONAL_JUMP)  ; LAB_00590a2d
    MOV EDX,dword ptr [ESP + 0x50]      ; 005910cb
    PUSH EDX                            ; 005910cf
    CALL core_inv.cpp_CInventory_getActiveLightGun_FUN_004f9ed0 ; 005910d0
        ;   XREF to: 004f9ed0 (UNCONDITIONAL_CALL)  ; CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004f9ed0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 005910d5
    TEST EAX,EAX                        ; 005910d8
    JNZ 0x00590a23                      ; 005910da
        ;   XREF to: 00590a23 (CONDITIONAL_JUMP)  ; LAB_00590a23
    MOV dword ptr [EBX + 0x1ff54],EAX   ; 005910e0
    JMP 0x00590a2d                      ; 005910e6
        ;   XREF to: 00590a2d (UNCONDITIONAL_JUMP)  ; LAB_00590a2d
    CMP EDI,0x8                         ; 005910eb
        ;   Label: LAB_005910eb
    JZ 0x00590a42                       ; 005910ee
        ;   XREF to: 00590a42 (CONDITIONAL_JUMP)  ; LAB_00590a42
    JMP 0x00590a4c                      ; 005910f4
        ;   XREF to: 00590a4c (UNCONDITIONAL_JUMP)  ; LAB_00590a4c

