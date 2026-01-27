; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_boxactor.cpp_CBoxActor_getPropertyList_FUN_004226e0(CBoxActor * this_ptr, CActorPropertyList * property_list)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; XREF[2]:
;   core_boxactor.cpp_CLightActor_FUN_004234e0 at 004234ec
;   core_stone.cpp_FUN_005badd0 at 005baddb
;
; Referenced Globals:
;   TerminatedCString s_Model_file_kfm_006167a5
;   TerminatedCString s_weight_lbs_006167b7
;   TerminatedCString s_Animation_fps_006167c4
;   TerminatedCString s_PHB_RPM_006167d2
;   TerminatedCString s_Loop_WAV_006167da
;   TerminatedCString s_Collision_WAV_006167e3
;   TerminatedCString s_Pickup_type_00616814
;   TerminatedCString s_canBePushed_00616820
;   TerminatedCString s_CDemonActor_0061682c
;   TerminatedCString s_Constrain_to_this_actor__00616838
;   TerminatedCString s_push_sound_00616856
;   TerminatedCString s_groundType_00616861
;   TerminatedCString s_plotInShadowFlag_0061686c
;   TerminatedCString s_collisionFlag_0061687d
;   TerminatedCString s_isTransparent_0061688b
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e1a0
;   core_actor.cpp_CActorPropertyList_FUN_0040e260
;   core_actor.cpp_CActorPropertyList_FUN_0040e2d0
;   core_actor.cpp_CActorPropertyList_FUN_0040e300
;   core_actor.cpp_CActorPropertyList_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_FUN_0040e350
;   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
;   core_actor.cpp_CActorPropertyList_FUN_0040e480
;   core_actor.cpp_CActorPropertyList_FUN_0040e640
;   core_actor.cpp_CActorPropertyList_FUN_0040e6a0
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004226e0
        ;   Label: core_boxactor.cpp_CBoxActor_getPropertyList_FUN_004226e0
    PUSH ESI                            ; 004226e1
    PUSH EDI                            ; 004226e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004226e3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004226e7
    PUSH ESI                            ; 004226eb
    PUSH EBX                            ; 004226ec
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 004226ed
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 004226f2
    PUSH 0x0                            ; 004226f5
    LEA EDI,[EBX + 0x158]               ; 004226f7
    PUSH EDI                            ; 004226fd
    PUSH 0x6167a5                       ; 004226fe | = "Model file (.kfm)"
    PUSH ESI                            ; 00422703
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0 ; 00422704
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e3b0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00422709
    PUSH 0x0                            ; 0042270c
    PUSH 0x49742400                     ; 0042270e
    LEA EAX,[EBX + 0x390]               ; 00422713
    PUSH 0x0                            ; 00422719
    PUSH EAX                            ; 0042271b
    PUSH 0x6167b7                       ; 0042271c | = "weight (lbs)"
    PUSH ESI                            ; 00422721
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0 ; 00422722
        ;   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e1a0(CActorPropertyList * this_ptr)
    ADD ESP,0x18                        ; 00422727
    PUSH EDI                            ; 0042272a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 0042272b
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x100]     ; 00422730
    ADD ESP,0x4                         ; 00422736
    CMP EAX,0x1                         ; 00422739
    JG 0x004228ac                       ; 0042273c
        ;   XREF to: 004228ac (CONDITIONAL_JUMP)  ; LAB_004228ac
    PUSH 0x0                            ; 00422742
        ;   Label: LAB_00422742
    LEA EAX,[EBX + 0x300]               ; 00422744
    PUSH EAX                            ; 0042274a
    PUSH 0x6167d2                       ; 0042274b | = "PHB RPM"
    PUSH ESI                            ; 00422750
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e260 ; 00422751
        ;   XREF to: 0040e260 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e260(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00422756
    LEA EAX,[EBX + 0x2d4]               ; 00422759
    PUSH EAX                            ; 0042275f
    PUSH 0x6167da                       ; 00422760 | = "Loop WAV"
    PUSH ESI                            ; 00422765
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0 ; 00422766
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e2d0(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 0042276b
    LEA EAX,[EBX + 0x2e8]               ; 0042276e
    PUSH EAX                            ; 00422774
    PUSH 0x6167e3                       ; 00422775 | = "Collision WAV"
    PUSH ESI                            ; 0042277a
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0 ; 0042277b
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e2d0(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 00422780
    LEA EAX,[EBX + 0x314]               ; 00422783
    PUSH EAX                            ; 00422789
    PUSH 0x66e5dc                       ; 0042278a | PTR_s_Cant_0066e5dc
    PUSH 0x5                            ; 0042278f
    PUSH 0x616814                       ; 00422791 | = "Pickup type"
    PUSH ESI                            ; 00422796
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e640 ; 00422797
        ;   XREF to: 0040e640 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e640(CActorPropertyList * this_ptr)
    ADD ESP,0x14                        ; 0042279c
    LEA EAX,[EBX + 0x31c]               ; 0042279f
    PUSH EAX                            ; 004227a5
    PUSH 0x616820                       ; 004227a6 | = "canBePushed"
    PUSH ESI                            ; 004227ab
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 004227ac
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
    MOV EDX,dword ptr [EBX + 0x31c]     ; 004227b1
    ADD ESP,0xc                         ; 004227b7
    TEST EDX,EDX                        ; 004227ba
    JZ 0x004227f1                       ; 004227bc
        ;   XREF to: 004227f1 (CONDITIONAL_JUMP)  ; LAB_004227f1
    PUSH 0x0                            ; 004227be
    PUSH 0x61682c                       ; 004227c0 | = "CDemonActor"
    PUSH 0x1                            ; 004227c5
    LEA EAX,[EBX + 0x324]               ; 004227c7
    PUSH EAX                            ; 004227cd
    PUSH 0x616838                       ; 004227ce | = "Constrain to this actor's box"
    PUSH ESI                            ; 004227d3
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e350 ; 004227d4
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CActorPropertyList_FUN_0040e350(CActorPropertyList * this_ptr)
    ADD ESP,0x18                        ; 004227d9
    LEA EAX,[EBX + 0x32c]               ; 004227dc
    PUSH EAX                            ; 004227e2
    PUSH 0x616856                       ; 004227e3 | = "push sound"
    PUSH ESI                            ; 004227e8
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0 ; 004227e9
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e2d0(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 004227ee
    LEA EAX,[EBX + 0x5f0]               ; 004227f1
        ;   Label: LAB_004227f1
    PUSH EAX                            ; 004227f7
    PUSH 0x616861                       ; 004227f8 | = "groundType"
    PUSH ESI                            ; 004227fd
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e300 ; 004227fe
        ;   XREF to: 0040e300 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e300(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 00422803
    LEA EAX,[EBX + 0x5f4]               ; 00422806
    PUSH EAX                            ; 0042280c
    PUSH 0x61686c                       ; 0042280d | = "plotInShadowFlag"
    PUSH ESI                            ; 00422812
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 00422813
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 00422818
    LEA EAX,[EBX + 0x5f8]               ; 0042281b
    PUSH EAX                            ; 00422821
    PUSH 0x61687d                       ; 00422822 | = "collisionFlag"
    PUSH ESI                            ; 00422827
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 00422828
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 0042282d
    LEA EAX,[EBX + 0xfc]                ; 00422830
    PUSH EAX                            ; 00422836
    PUSH 0x61688b                       ; 00422837 | = "isTransparent"
    PUSH ESI                            ; 0042283c
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 0042283d
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 00422842
    LEA EAX,[EBX + 0x5fc]               ; 00422845
    PUSH EAX                            ; 0042284b
    PUSH 0x616899                       ; 0042284c | = "dontUseNormals"
    PUSH ESI                            ; 00422851
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 00422852
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 00422857
    LEA EAX,[EBX + 0x600]               ; 0042285a
    PUSH EAX                            ; 00422860
    PUSH 0x6168a8                       ; 00422861 | = "Raise event when used"
    PUSH ESI                            ; 00422866
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e480 ; 00422867
        ;   XREF to: 0040e480 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e480(CActorPropertyList * this_ptr)
    MOV ECX,dword ptr [EBX + 0x314]     ; 0042286c
    ADD ESP,0xc                         ; 00422872
    TEST ECX,ECX                        ; 00422875
    JZ 0x00422893                       ; 00422877
        ;   XREF to: 00422893 (CONDITIONAL_JUMP)  ; LAB_00422893
    CMP ECX,0x1                         ; 00422879
    JZ 0x00422893                       ; 0042287c
        ;   XREF to: 00422893 (CONDITIONAL_JUMP)  ; LAB_00422893
    LEA EAX,[EBX + 0x664]               ; 0042287e
    PUSH EAX                            ; 00422884
    PUSH 0x6168be                       ; 00422885 | = "Melee attack types"
    PUSH ESI                            ; 0042288a
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e6a0 ; 0042288b
        ;   XREF to: 0040e6a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e6a0(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 00422890
    ADD EBX,0x668                       ; 00422893
        ;   Label: LAB_00422893
    PUSH EBX                            ; 00422899
    PUSH 0x6168d1                       ; 0042289a | = "Block virtual director"
    PUSH ESI                            ; 0042289f
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 004228a0
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 004228a5
    POP EDI                             ; 004228a8
    POP ESI                             ; 004228a9
    POP EBX                             ; 004228aa
    RET                                 ; 004228ab
    PUSH 0x0                            ; 004228ac
        ;   Label: LAB_004228ac
    PUSH 0x42c80000                     ; 004228ae
    LEA EAX,[EBX + 0x30c]               ; 004228b3
    PUSH 0xc2c80000                     ; 004228b9
    PUSH EAX                            ; 004228be
    PUSH 0x6167c4                       ; 004228bf | = "Animation fps"
    PUSH ESI                            ; 004228c4
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0 ; 004228c5
        ;   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e1a0(CActorPropertyList * this_ptr)
    ADD ESP,0x18                        ; 004228ca
    JMP 0x00422742                      ; 004228cd
        ;   XREF to: 00422742 (UNCONDITIONAL_JUMP)  ; LAB_00422742

