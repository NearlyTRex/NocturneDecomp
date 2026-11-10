; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_prye_cpp_CPrye_setup_FUN_00518680(CPrye *this_ptr)
;
; Parameters:
; CPrye *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_005cce2c
;   TerminatedCString s_Bip01_L_Clavicle_005cce37
;   TerminatedCString s_Bip01_R_Clavicle_005cce48
;   TerminatedCString s_Bip01_L_UpperArm_005cce59
;   TerminatedCString s_Bip01_R_UpperArm_005cce6a
;   TerminatedCString s_Bip01_L_ForeArm_005cce7b
;   TerminatedCString s_Bip01_R_ForeArm_005cce8b
;   TerminatedCString s_Bip01_L_Foot_005cce9b
;   TerminatedCString s_Bip01_R_Foot_005ccea8
;   TerminatedCString s_Bip01_L_Thigh_005cceb5
;   TerminatedCString s_Bip01_R_Thigh_005ccec3
;   TerminatedCString s_Bip01_L_Calf_005cced1
;   TerminatedCString s_Bip01_R_Calf_005ccede
;   TerminatedCString s_Bip01_L_Hand_005cceeb
;   TerminatedCString s_Bip01_R_Hand_005ccef8
;   ... and 46 more
;
; Called Functions:
;   core_hero.cpp_FUN_004d26b0
;   core_motion.cpp_CMotionController_getMotionList_FUN_004fc310
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0
;   core_prye.cpp_FUN_0051c1c0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0054c180
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00548090
;   core_skeleton.cpp_FUN_0054dbd0
;   sound_sndmain.cpp_FUN_00556230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00518680
        ;   Label: core_prye.cpp_CPrye_setup_FUN_00518680
    PUSH ESI                            ; 00518681
    PUSH EDI                            ; 00518682
    PUSH EBP                            ; 00518683
    SUB ESP,0x30                        ; 00518684
    MOV EBP,dword ptr [ESP + 0x44]      ; 00518687
    PUSH EBP                            ; 0051868b
    CALL core_hero.cpp_FUN_004d26b0     ; 0051868c
        ;   XREF to: 004d26b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d26b0()
    ADD ESP,0x4                         ; 00518691
    LEA ESI,[EBP + 0x158]               ; 00518694
    PUSH ESI                            ; 0051869a
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0051869b
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005186a0
    PUSH 0x1                            ; 005186a3
    PUSH 0x5cce2c                       ; 005186a5 | = "Bip01 head"
    PUSH EAX                            ; 005186aa
    MOV EBX,EAX                         ; 005186ab
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 005186ad
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005186b2
    PUSH 0x1                            ; 005186b5
    PUSH 0x5cce37                       ; 005186b7 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 005186bc
    MOV [0x01ed36dc],EAX                ; 005186bd | DAT_01ed36dc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 005186c2
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005186c7
    PUSH 0x1                            ; 005186ca
    PUSH 0x5cce48                       ; 005186cc | = "Bip01 R Clavicle"
    PUSH EBX                            ; 005186d1
    MOV [0x01ed36e0],EAX                ; 005186d2 | DAT_01ed36e0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 005186d7
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005186dc
    PUSH 0x1                            ; 005186df
    PUSH 0x5cce59                       ; 005186e1 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 005186e6
    MOV [0x01ed36e4],EAX                ; 005186e7 | DAT_01ed36e4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 005186ec
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005186f1
    PUSH 0x1                            ; 005186f4
    PUSH 0x5cce6a                       ; 005186f6 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 005186fb
    MOV [0x01ed36e8],EAX                ; 005186fc | DAT_01ed36e8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00518701
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00518706
    PUSH 0x1                            ; 00518709
    PUSH 0x5cce7b                       ; 0051870b | = "Bip01 L ForeArm"
    PUSH EBX                            ; 00518710
    MOV [0x01ed36ec],EAX                ; 00518711 | DAT_01ed36ec
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00518716
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0051871b
    PUSH 0x1                            ; 0051871e
    PUSH 0x5cce8b                       ; 00518720 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 00518725
    MOV [0x01ed36f0],EAX                ; 00518726 | DAT_01ed36f0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0051872b
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00518730
    PUSH 0x1                            ; 00518733
    PUSH 0x5cce9b                       ; 00518735 | = "Bip01 L Foot"
    PUSH EBX                            ; 0051873a
    MOV [0x01ed36f4],EAX                ; 0051873b | DAT_01ed36f4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00518740
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00518745
    PUSH 0x1                            ; 00518748
    PUSH 0x5ccea8                       ; 0051874a | = "Bip01 R Foot"
    PUSH EBX                            ; 0051874f
    MOV [0x01ed36f8],EAX                ; 00518750 | DAT_01ed36f8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00518755
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0051875a
    MOV [0x01ed36fc],EAX                ; 0051875d | DAT_01ed36fc
    PUSH 0x1                            ; 00518762
    PUSH 0x5cceb5                       ; 00518764 | = "Bip01 L Thigh"
    PUSH EBX                            ; 00518769
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0051876a
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0051876f
    PUSH 0x1                            ; 00518772
    PUSH 0x5ccec3                       ; 00518774 | = "Bip01 R Thigh"
    PUSH EBX                            ; 00518779
    MOV [0x01ed3700],EAX                ; 0051877a | DAT_01ed3700
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0051877f
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00518784
    PUSH 0x1                            ; 00518787
    PUSH 0x5cced1                       ; 00518789 | = "Bip01 L Calf"
    PUSH EBX                            ; 0051878e
    MOV [0x01ed3704],EAX                ; 0051878f | DAT_01ed3704
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00518794
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00518799
    PUSH 0x1                            ; 0051879c
    PUSH 0x5ccede                       ; 0051879e | = "Bip01 R Calf"
    PUSH EBX                            ; 005187a3
    MOV [0x01ed3708],EAX                ; 005187a4 | DAT_01ed3708
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 005187a9
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005187ae
    PUSH 0x1                            ; 005187b1
    PUSH 0x5cceeb                       ; 005187b3 | = "Bip01 L Hand"
    PUSH EBX                            ; 005187b8
    MOV [0x01ed370c],EAX                ; 005187b9 | DAT_01ed370c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 005187be
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005187c3
    PUSH 0x1                            ; 005187c6
    PUSH 0x5ccef8                       ; 005187c8 | = "Bip01 R Hand"
    PUSH EBX                            ; 005187cd
    MOV [0x01ed3710],EAX                ; 005187ce | DAT_01ed3710
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 005187d3
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005187d8
    PUSH 0x1                            ; 005187db
    PUSH 0x5ccf05                       ; 005187dd | = "Bip01 Neck"
    PUSH EBX                            ; 005187e2
    MOV [0x01ed3714],EAX                ; 005187e3 | DAT_01ed3714
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 005187e8
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005187ed
    PUSH 0x1                            ; 005187f0
    PUSH 0x5ccf10                       ; 005187f2 | = "Bip01 Spine2"
    PUSH EBX                            ; 005187f7
    MOV [0x01ed3718],EAX                ; 005187f8 | DAT_01ed3718
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 005187fd
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00518802
    PUSH 0x1                            ; 00518805
    PUSH 0x5ccf1d                       ; 00518807 | = "Bip01 Spine1"
    PUSH EBX                            ; 0051880c
    MOV [0x01ed371c],EAX                ; 0051880d | DAT_01ed371c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00518812
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00518817
    PUSH 0x1                            ; 0051881a
    PUSH 0x5ccf2a                       ; 0051881c | = "Bip01 Spine"
    PUSH EBX                            ; 00518821
    MOV [0x01ed3720],EAX                ; 00518822 | DAT_01ed3720
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00518827
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0051882c
    MOV [0x01ed3724],EAX                ; 0051882f | DAT_01ed3724
    PUSH 0x1                            ; 00518834
    PUSH 0x5ccf36                       ; 00518836 | = "Bip01 Pelvis"
    PUSH EBX                            ; 0051883b
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0051883c
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00518841
    PUSH 0x1                            ; 00518844
    PUSH 0x5ccf43                       ; 00518846 | = "Bip01 L Finger1"
    PUSH EBX                            ; 0051884b
    MOV [0x01ed3728],EAX                ; 0051884c | DAT_01ed3728
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00518851
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00518856
    PUSH 0x1                            ; 00518859
    PUSH 0x5ccf53                       ; 0051885b | = "Bip01 L Finger11"
    PUSH EBX                            ; 00518860
    MOV [0x01ed372c],EAX                ; 00518861 | DAT_01ed372c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00518866
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0051886b
    PUSH 0x1                            ; 0051886e
    PUSH 0x5ccf64                       ; 00518870 | = "Bip01 R Finger1"
    PUSH EBX                            ; 00518875
    MOV [0x01ed3730],EAX                ; 00518876 | DAT_01ed3730
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 0051887b
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00518880
    PUSH 0x1                            ; 00518883
    PUSH 0x5ccf74                       ; 00518885 | = "Bip01 R Finger11"
    PUSH EBX                            ; 0051888a
    MOV [0x01ed3734],EAX                ; 0051888b | DAT_01ed3734
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 00518890
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00518895
    PUSH 0x1                            ; 00518898
    MOV [0x01ed3738],EAX                ; 0051889a | DAT_01ed3738
    MOV EAX,[0x01ed3710]                ; 0051889f | DAT_01ed3710
    PUSH 0x5ccf85                       ; 005188a4 | = "turnlstart"
    MOV dword ptr [EBP + 0x25a8],EAX    ; 005188a9
    MOV EAX,[0x01ed3714]                ; 005188af | DAT_01ed3714
    PUSH ESI                            ; 005188b4
    MOV dword ptr [EBP + 0x2620],EAX    ; 005188b5
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004fc310 ; 005188bb
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005188c0
    PUSH EAX                            ; 005188c3
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0 ; 005188c4
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 005188c9
    PUSH 0x1                            ; 005188cc
    PUSH 0x5ccf90                       ; 005188ce | = "turnrstart"
    PUSH ESI                            ; 005188d3
    MOV [0x01ed373c],EAX                ; 005188d4 | DAT_01ed373c
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004fc310 ; 005188d9
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005188de
    PUSH EAX                            ; 005188e1
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0 ; 005188e2
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 005188e7
    PUSH 0x1                            ; 005188ea
    PUSH 0x5ccf9b                       ; 005188ec | = "pickup"
    PUSH ESI                            ; 005188f1
    MOV [0x01ed3740],EAX                ; 005188f2 | DAT_01ed3740
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004fc310 ; 005188f7
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005188fc
    PUSH EAX                            ; 005188ff
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0 ; 00518900
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00518905
    PUSH 0x41b00000                     ; 00518908
    PUSH EAX                            ; 0051890d
    PUSH ESI                            ; 0051890e
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0054c180 ; 0051890f
        ;   XREF to: 0054c180 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0054c180(CDeformableModelInstance * this_ptr, int motion_index, float frame_number)
    ADD ESP,0xc                         ; 00518914
    MOV EDX,dword ptr [0x01ed3714]      ; 00518917 | DAT_01ed3714
    PUSH EDX                            ; 0051891d
    LEA EDI,[ESP + 0x1c]                ; 0051891e
    PUSH ESI                            ; 00518922
    LEA ESI,[ESP + 0x14]                ; 00518923
    LEA EBX,[EBP + 0x20cb0]             ; 00518927
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 0051892d
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    LEA ESI,[ESP + 0x14]                ; 00518932
    ADD ESP,0x8                         ; 00518936
    LEA EAX,[ESP + 0x18]                ; 00518939
    MOVSD ES:EDI,ESI                    ; 0051893d
    MOVSD ES:EDI,ESI                    ; 0051893e
    MOVSD ES:EDI,ESI                    ; 0051893f
    CMP EBX,EAX                         ; 00518940
    JZ 0x00518958                       ; 00518942
        ;   XREF to: 00518958 (CONDITIONAL_JUMP)  ; LAB_00518958
    MOV EAX,dword ptr [ESP + 0x18]      ; 00518944
    MOV dword ptr [EBX],EAX             ; 00518948
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0051894a
    MOV dword ptr [EBX + 0x4],EAX       ; 0051894e
    MOV EAX,dword ptr [ESP + 0x20]      ; 00518951
    MOV dword ptr [EBX + 0x8],EAX       ; 00518955
    MOV ECX,dword ptr [0x01ed36ec]      ; 00518958 | DAT_01ed36ec
        ;   Label: LAB_00518958
    PUSH ECX                            ; 0051895e
    LEA EAX,[EBP + 0x158]               ; 0051895f
    LEA ESI,[ESP + 0x28]                ; 00518965
    PUSH EAX                            ; 00518969
    LEA EDI,[ESP + 0x8]                 ; 0051896a
    LEA EBX,[EBP + 0x20cbc]             ; 0051896e
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 00518974
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    LEA ESI,[ESP + 0x2c]                ; 00518979
    ADD ESP,0x8                         ; 0051897d
    MOV EAX,ESP                         ; 00518980
    MOVSD ES:EDI,ESI                    ; 00518982
    MOVSD ES:EDI,ESI                    ; 00518983
    MOVSD ES:EDI,ESI                    ; 00518984
    CMP EBX,EAX                         ; 00518985
    JZ 0x0051899c                       ; 00518987
        ;   XREF to: 0051899c (CONDITIONAL_JUMP)  ; LAB_0051899c
    MOV EAX,dword ptr [ESP]             ; 00518989
    MOV dword ptr [EBX],EAX             ; 0051898c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0051898e
    MOV dword ptr [EBX + 0x4],EAX       ; 00518992
    MOV EAX,dword ptr [ESP + 0x8]       ; 00518995
    MOV dword ptr [EBX + 0x8],EAX       ; 00518999
    PUSH EBP                            ; 0051899c
        ;   Label: LAB_0051899c
    CALL core_prye.cpp_FUN_0051c1c0     ; 0051899d
        ;   XREF to: 0051c1c0 (UNCONDITIONAL_CALL)  ; undefined core_prye.cpp_FUN_0051c1c0()
    MOV dword ptr [EBP + 0x20cc8],0x0   ; 005189a2
    MOV dword ptr [EBP + 0x20cdc],0x0   ; 005189ac
    MOV dword ptr [EBP + 0x20cf0],0x0   ; 005189b6
    MOV dword ptr [EBP + 0x20c40],0x0   ; 005189c0
    ADD ESP,0x4                         ; 005189ca
    MOV dword ptr [EBP + 0x20d00],0x0   ; 005189cd
    LEA EAX,[EBP + 0x158]               ; 005189d7
    MOV dword ptr [EBP + 0x20c38],0x0   ; 005189dd
    PUSH EAX                            ; 005189e7
    XOR EBX,EBX                         ; 005189e8
    MOV dword ptr [EBP + 0x20c3c],0x0   ; 005189ea
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 005189f4
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005189f9
    MOV dword ptr [EBP + 0x20cf8],EBX   ; 005189fc
    PUSH 0x5ccfa2                       ; 00518a02 | = "prye-pain1.wav"
    MOV dword ptr [0x01ed3744],EBX      ; 00518a07 | DAT_01ed3744
    MOV dword ptr [EBP + 0x20cfc],EBX   ; 00518a0d
    CALL sound_sndmain.cpp_FUN_00556230 ; 00518a13
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00518a18
    PUSH 0x5ccfb1                       ; 00518a1b | = "prye-pain2.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 00518a20
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00518a25
    PUSH 0x5ccfc0                       ; 00518a28 | = "prye-pain3.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 00518a2d
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00518a32
    PUSH 0x5ccfcf                       ; 00518a35 | = "prye-death1.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 00518a3a
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00518a3f
    PUSH 0x5ccfdf                       ; 00518a42 | = "prye-death2.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 00518a47
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00518a4c
    PUSH 0x5ccfef                       ; 00518a4f | = "prye-death3.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 00518a54
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00518a59
    PUSH 0x5ccfff                       ; 00518a5c | = "fall-1.wav"
    CALL sound_sndmain.cpp_FUN_00556230 ; 00518a61
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00518a66
    ADD ESP,0x30                        ; 00518a69
    POP EBP                             ; 00518a6c
    POP EDI                             ; 00518a6d
    POP ESI                             ; 00518a6e
    POP EBX                             ; 00518a6f
    RET                                 ; 00518a70

