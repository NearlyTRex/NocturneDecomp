; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boneguy_cpp_CBoneGuy_setup_FUN_00417630(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined1* switchdataD_00417608 = 00417865
;   undefined1* switchdataD_0041761c = 00417854
;   undefined4 s_CBip01_Head_005b6d95+1
;   TerminatedCString s_Bip01_L_ForeArm_005b6da1
;   TerminatedCString s_Bip01_R_ForeArm_005b6db1
;   TerminatedCString s_Bip01_L_UpperArm_005b6dc1
;   TerminatedCString s_Bip01_R_UpperArm_005b6dd2
;   TerminatedCString s_Bip01_L_Foot_005b6de3
;   TerminatedCString s_Bip01_R_Foot_005b6df0
;   TerminatedCString s_Bip01_L_Hand_005b6dfd
;   TerminatedCString s_Bip01_R_Hand_005b6e0a
;   TerminatedCString s_Bip01_Spine_005b6e17
;   TerminatedCString s_Bip01_Spine2_005b6e23
;   TerminatedCString s_Bip01_Head_005b6e30
;   TerminatedCString s_Bip01_L_UpperArm_005b6e3b
;   ... and 18 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_enemy.cpp_CEnemy_setup_FUN_00489110
;   core_main.c_FUN_004e4330
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00548090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417630
        ;   Label: core_boneguy.cpp_CBoneGuy_setup_FUN_00417630
    PUSH ESI                            ; 00417631
    PUSH EDI                            ; 00417632
    SUB ESP,0x4                         ; 00417633
    MOV EBX,dword ptr [ESP + 0x14]      ; 00417636
    LEA EDI,[EBX + 0x158]               ; 0041763a
    PUSH EDI                            ; 00417640
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0 ; 00417641
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00417646
    PUSH EDI                            ; 00417649
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0041764a
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041764f
    PUSH 0x1                            ; 00417652
    PUSH 0x5b6d96                       ; 00417654 | s_CBip01_Head_005b6d95+1
    PUSH EAX                            ; 00417659
    MOV ESI,EAX                         ; 0041765a
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0041765c
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00417661
    PUSH 0x1                            ; 00417664
    PUSH 0x5b6da1                       ; 00417666 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 0041766b
    MOV [0x007e1620],EAX                ; 0041766c | DAT_007e1620
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00417671
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00417676
    PUSH 0x1                            ; 00417679
    PUSH 0x5b6db1                       ; 0041767b | = "Bip01 R ForeArm"
    PUSH ESI                            ; 00417680
    MOV [0x007e162c],EAX                ; 00417681 | DAT_007e162c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00417686
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041768b
    PUSH 0x1                            ; 0041768e
    PUSH 0x5b6dc1                       ; 00417690 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 00417695
    MOV [0x007e1630],EAX                ; 00417696 | DAT_007e1630
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0041769b
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004176a0
    PUSH 0x1                            ; 004176a3
    PUSH 0x5b6dd2                       ; 004176a5 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004176aa
    MOV [0x007e1634],EAX                ; 004176ab | DAT_007e1634
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004176b0
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004176b5
    PUSH 0x1                            ; 004176b8
    PUSH 0x5b6de3                       ; 004176ba | = "Bip01 L Foot"
    PUSH ESI                            ; 004176bf
    MOV [0x007e1638],EAX                ; 004176c0 | DAT_007e1638
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004176c5
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004176ca
    PUSH 0x1                            ; 004176cd
    PUSH 0x5b6df0                       ; 004176cf | = "Bip01 R Foot"
    PUSH ESI                            ; 004176d4
    MOV [0x007e163c],EAX                ; 004176d5 | DAT_007e163c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004176da
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004176df
    PUSH 0x1                            ; 004176e2
    PUSH 0x5b6dfd                       ; 004176e4 | = "Bip01 L Hand"
    PUSH ESI                            ; 004176e9
    MOV [0x007e1640],EAX                ; 004176ea | DAT_007e1640
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004176ef
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004176f4
    PUSH 0x1                            ; 004176f7
    PUSH 0x5b6e0a                       ; 004176f9 | = "Bip01 R Hand"
    PUSH ESI                            ; 004176fe
    MOV [0x007e1624],EAX                ; 004176ff | DAT_007e1624
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00417704
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00417709
    MOV [0x007e1628],EAX                ; 0041770c | DAT_007e1628
    PUSH 0x1                            ; 00417711
    PUSH 0x5b6e17                       ; 00417713 | = "Bip01 Spine"
    PUSH ESI                            ; 00417718
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00417719
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041771e
    PUSH 0x1                            ; 00417721
    PUSH 0x5b6e23                       ; 00417723 | = "Bip01 Spine2"
    PUSH ESI                            ; 00417728
    MOV [0x007e1644],EAX                ; 00417729 | DAT_007e1644
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0041772e
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00417733
    PUSH 0x1                            ; 00417736
    PUSH 0x5b6e30                       ; 00417738 | = "Bip01 Head"
    PUSH ESI                            ; 0041773d
    MOV [0x007e1648],EAX                ; 0041773e | DAT_007e1648
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00417743
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00417748
    PUSH 0x1                            ; 0041774b
    PUSH 0x5b6e3b                       ; 0041774d | = "Bip01 L UpperArm"
    PUSH ESI                            ; 00417752
    MOV [0x007e1620],EAX                ; 00417753 | DAT_007e1620
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00417758
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041775d
    PUSH 0x1                            ; 00417760
    PUSH 0x5b6e4c                       ; 00417762 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 00417767
    MOV [0x007e1634],EAX                ; 00417768 | DAT_007e1634
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0041776d
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00417772
    PUSH 0x1                            ; 00417775
    PUSH 0x5b6e5d                       ; 00417777 | = "Bip01 Spine"
    PUSH ESI                            ; 0041777c
    MOV [0x007e1638],EAX                ; 0041777d | DAT_007e1638
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00417782
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00417787
    PUSH 0x1                            ; 0041778a
    PUSH 0x5b6e69                       ; 0041778c | = "Bip01 Spine2"
    PUSH ESI                            ; 00417791
    MOV [0x007e1644],EAX                ; 00417792 | DAT_007e1644
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00417797
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0041779c
    PUSH EDI                            ; 0041779f
    MOV [0x007e1648],EAX                ; 004177a0 | DAT_007e1648
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 004177a5
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0xc00]     ; 004177aa
    ADD ESP,0x4                         ; 004177b0
    MOV dword ptr [EBX + 0xd0e8],EAX    ; 004177b3
    CMP EAX,0x14                        ; 004177b9
    JLE 0x004177e1                      ; 004177bc
        ;   XREF to: 004177e1 (CONDITIONAL_JUMP)  ; LAB_004177e1
    MOV ECX,0x5b6e76                    ; 004177be | = "..\\core\\boneguy.cpp"
    MOV ESI,0x136                       ; 004177c3
    PUSH 0x5b6e8a                       ; 004177c8 | = "CBoneGuy::explode - Not enough contai..."
    MOV dword ptr [0x01d71de0],ECX      ; 004177cd | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004177d3 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004177d9
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004177de
    MOV EAX,[0x007e1624]                ; 004177e1 | DAT_007e1624
        ;   Label: LAB_004177e1
    MOV dword ptr [EBX + 0x25a8],EAX    ; 004177e6
    MOV EAX,[0x007e1628]                ; 004177ec | DAT_007e1628
    PUSH EBX                            ; 004177f1
    MOV dword ptr [EBX + 0x2620],EAX    ; 004177f2
    CALL core_enemy.cpp_CEnemy_setup_FUN_00489110 ; 004177f8
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00489110(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004177fd
    PUSH 0x3fe66666                     ; 00417800
    MOV dword ptr [EBX + 0xd078],0x0    ; 00417805
    PUSH 0x3fa66666                     ; 0041780f
    MOV dword ptr [EBX + 0xd690],0x0    ; 00417814
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0041781e
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 00417823
    MOV EDI,dword ptr [EBX + 0x3268]    ; 00417827
    MOV EAX,dword ptr [ESP + 0x8]       ; 0041782d
    MOV dword ptr [EBX + 0xcdcc],EAX    ; 00417831
    ADD ESP,0x8                         ; 00417837
    TEST EDI,EDI                        ; 0041783a
    JZ 0x00417949                       ; 0041783c
        ;   XREF to: 00417949 (CONDITIONAL_JUMP)  ; LAB_00417949
    MOV EAX,dword ptr [EBX + 0xd074]    ; 00417842
    CMP EAX,0x4                         ; 00417848
    JA 0x0041785e                       ; 0041784b
        ;   XREF to: 0041785e (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x41761c]  ; 0041784d | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV dword ptr [EBX + 0xd058],0x41c80000 ; 00417854
        ;   Label: caseD_0
    ADD ESP,0x4                         ; 0041785e
        ;   Label: default
    POP EDI                             ; 00417861
    POP ESI                             ; 00417862
    POP EBX                             ; 00417863
    RET                                 ; 00417864
    MOV dword ptr [EBX + 0xce5c],0x41000000 ; 00417865
        ;   Label: caseD_0
    MOV dword ptr [EBX + 0xce60],0x40a00000 ; 0041786f
    MOV dword ptr [EBX + 0x2538],0x41c80000 ; 00417879
    MOV EAX,dword ptr [EBX + 0x2538]    ; 00417883
        ;   Label: default
    MOV dword ptr [EBX + 0xd058],EAX    ; 00417889
    ADD ESP,0x4                         ; 0041788f
    POP EDI                             ; 00417892
    POP ESI                             ; 00417893
    POP EBX                             ; 00417894
    RET                                 ; 00417895
    MOV dword ptr [EBX + 0xce5c],0x41400000 ; 00417896
        ;   Label: caseD_2
    MOV dword ptr [EBX + 0xce60],0x41000000 ; 004178a0
    MOV dword ptr [EBX + 0x2538],0x41f00000 ; 004178aa
    MOV EAX,dword ptr [EBX + 0x2538]    ; 004178b4
    MOV dword ptr [EBX + 0xd058],EAX    ; 004178ba
    ADD ESP,0x4                         ; 004178c0
    POP EDI                             ; 004178c3
    POP ESI                             ; 004178c4
    POP EBX                             ; 004178c5
    RET                                 ; 004178c6
    MOV dword ptr [EBX + 0xce5c],0x41a00000 ; 004178c7
        ;   Label: caseD_3
    MOV dword ptr [EBX + 0xce60],0x41200000 ; 004178d1
    MOV dword ptr [EBX + 0x2538],0x42200000 ; 004178db
    MOV EAX,dword ptr [EBX + 0x2538]    ; 004178e5
    MOV dword ptr [EBX + 0xd058],EAX    ; 004178eb
    ADD ESP,0x4                         ; 004178f1
    POP EDI                             ; 004178f4
    POP ESI                             ; 004178f5
    POP EBX                             ; 004178f6
    RET                                 ; 004178f7
    MOV dword ptr [EBX + 0x2538],0x41200000 ; 004178f8
        ;   Label: caseD_4
    PUSH 0x40200000                     ; 00417902
    MOV dword ptr [EBX + 0xce5c],0x40a00000 ; 00417907
    PUSH 0x40000000                     ; 00417911
    MOV dword ptr [EBX + 0xce60],0x40a00000 ; 00417916
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00417920
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 00417925
    MOV EAX,dword ptr [ESP + 0x8]       ; 00417929
    MOV dword ptr [EBX + 0xcdcc],EAX    ; 0041792d
    ADD ESP,0x8                         ; 00417933
    MOV EAX,dword ptr [EBX + 0x2538]    ; 00417936
    MOV dword ptr [EBX + 0xd058],EAX    ; 0041793c
    ADD ESP,0x4                         ; 00417942
    POP EDI                             ; 00417945
    POP ESI                             ; 00417946
    POP EBX                             ; 00417947
    RET                                 ; 00417948
    MOV EAX,dword ptr [EBX + 0xd074]    ; 00417949
        ;   Label: LAB_00417949
    CMP EAX,0x4                         ; 0041794f
    JA 0x00417883                       ; 00417952
        ;   XREF to: 00417883 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x417608]  ; 00417958 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV dword ptr [EBX + 0xd058],0x41f00000 ; 0041795f
        ;   Label: caseD_2
    ADD ESP,0x4                         ; 00417969
    POP EDI                             ; 0041796c
    POP ESI                             ; 0041796d
    POP EBX                             ; 0041796e
    RET                                 ; 0041796f
    MOV dword ptr [EBX + 0xd058],0x42200000 ; 00417970
        ;   Label: caseD_3
    ADD ESP,0x4                         ; 0041797a
    POP EDI                             ; 0041797d
    POP ESI                             ; 0041797e
    POP EBX                             ; 0041797f
    RET                                 ; 00417980
    MOV dword ptr [EBX + 0xd058],0x41200000 ; 00417981
        ;   Label: caseD_4
    ADD ESP,0x4                         ; 0041798b
    POP EDI                             ; 0041798e
    POP ESI                             ; 0041798f
    POP EBX                             ; 00417990
    RET                                 ; 00417991

