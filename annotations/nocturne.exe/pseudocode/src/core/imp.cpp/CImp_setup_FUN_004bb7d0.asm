; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_imp_cpp_CImp_setup_FUN_004bb7d0(CEnemy *param_1)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_0058628a
;   TerminatedCString s_Bip01_L_ForeArm_00586295
;   TerminatedCString s_Bip01_R_ForeArm_005862a5
;   TerminatedCString s_Bip01_L_UpperArm_005862b5
;   TerminatedCString s_Bip01_R_UpperArm_005862c6
;   TerminatedCString s_Bip01_L_Foot_005862d7
;   TerminatedCString s_Bip01_R_Foot_005862e4
;   TerminatedCString s_Bip01_L_Hand_005862f1
;   TerminatedCString s_Bip01_R_Hand_005862fe
;   TerminatedCString s_Bip01_Spine_0058630b
;   TerminatedCString s_Bip01_Spine1_00586317
;   TerminatedCString s_Bip01_Spine2_00586324
;   TerminatedCString s_Bip01_Head_00586331
;   TerminatedCString s_Bip01_L_UpperArm_0058633c
;   TerminatedCString s_Bip01_R_UpperArm_0058634d
;   ... and 25 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_enemy.cpp_CEnemy_setup_FUN_004796b0
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb7d0
        ;   Label: core_imp.cpp_CImp_setup_FUN_004bb7d0
    PUSH ESI                            ; 004bb7d1
    SUB ESP,0x4                         ; 004bb7d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004bb7d5
    PUSH EDI                            ; 004bb7d9
    PUSH EBX                            ; 004bb7da
    CALL core_enemy.cpp_CEnemy_setup_FUN_004796b0 ; 004bb7db
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004796b0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004bb7e0
    LEA EDI,[EBX + 0x150]               ; 004bb7e3
    PUSH EDI                            ; 004bb7e9
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 ; 004bb7ea
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004bb7ef
    PUSH EDI                            ; 004bb7f2
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 004bb7f3
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004bb7f8
    PUSH 0x1                            ; 004bb7fb
    PUSH 0x58628a                       ; 004bb7fd | = "Bip01 Head"
    PUSH EAX                            ; 004bb802
    MOV ESI,EAX                         ; 004bb803
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004bb805
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004bb80a
    PUSH 0x1                            ; 004bb80d
    PUSH 0x586295                       ; 004bb80f | = "Bip01 L ForeArm"
    PUSH ESI                            ; 004bb814
    MOV [0x01cae30c],EAX                ; 004bb815 | DAT_01cae30c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004bb81a
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004bb81f
    PUSH 0x1                            ; 004bb822
    PUSH 0x5862a5                       ; 004bb824 | = "Bip01 R ForeArm"
    PUSH ESI                            ; 004bb829
    MOV [0x01cae318],EAX                ; 004bb82a | DAT_01cae318
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004bb82f
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004bb834
    PUSH 0x1                            ; 004bb837
    PUSH 0x5862b5                       ; 004bb839 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004bb83e
    MOV [0x01cae31c],EAX                ; 004bb83f | DAT_01cae31c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004bb844
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004bb849
    PUSH 0x1                            ; 004bb84c
    PUSH 0x5862c6                       ; 004bb84e | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004bb853
    MOV [0x01cae320],EAX                ; 004bb854 | DAT_01cae320
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004bb859
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004bb85e
    PUSH 0x1                            ; 004bb861
    PUSH 0x5862d7                       ; 004bb863 | = "Bip01 L Foot"
    PUSH ESI                            ; 004bb868
    MOV [0x01cae324],EAX                ; 004bb869 | DAT_01cae324
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004bb86e
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004bb873
    PUSH 0x1                            ; 004bb876
    PUSH 0x5862e4                       ; 004bb878 | = "Bip01 R Foot"
    PUSH ESI                            ; 004bb87d
    MOV [0x01cae328],EAX                ; 004bb87e | DAT_01cae328
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004bb883
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004bb888
    PUSH 0x1                            ; 004bb88b
    PUSH 0x5862f1                       ; 004bb88d | = "Bip01 L Hand"
    PUSH ESI                            ; 004bb892
    MOV [0x01cae32c],EAX                ; 004bb893 | DAT_01cae32c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004bb898
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004bb89d
    MOV [0x01cae310],EAX                ; 004bb8a0 | DAT_01cae310
    PUSH 0x1                            ; 004bb8a5
    PUSH 0x5862fe                       ; 004bb8a7 | = "Bip01 R Hand"
    PUSH ESI                            ; 004bb8ac
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004bb8ad
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004bb8b2
    PUSH 0x1                            ; 004bb8b5
    PUSH 0x58630b                       ; 004bb8b7 | = "Bip01 Spine"
    PUSH ESI                            ; 004bb8bc
    MOV [0x01cae314],EAX                ; 004bb8bd | DAT_01cae314
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004bb8c2
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004bb8c7
    PUSH 0x1                            ; 004bb8ca
    PUSH 0x586317                       ; 004bb8cc | = "Bip01 Spine1"
    PUSH ESI                            ; 004bb8d1
    MOV [0x01cae330],EAX                ; 004bb8d2 | DAT_01cae330
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004bb8d7
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004bb8dc
    PUSH 0x1                            ; 004bb8df
    PUSH 0x586324                       ; 004bb8e1 | = "Bip01 Spine2"
    PUSH ESI                            ; 004bb8e6
    MOV [0x01cae334],EAX                ; 004bb8e7 | DAT_01cae334
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004bb8ec
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004bb8f1
    PUSH 0x1                            ; 004bb8f4
    PUSH 0x586331                       ; 004bb8f6 | = "Bip01 Head"
    PUSH ESI                            ; 004bb8fb
    MOV [0x01cae338],EAX                ; 004bb8fc | DAT_01cae338
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004bb901
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004bb906
    PUSH 0x1                            ; 004bb909
    PUSH 0x58633c                       ; 004bb90b | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004bb910
    MOV [0x01cae30c],EAX                ; 004bb911 | DAT_01cae30c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004bb916
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004bb91b
    PUSH 0x1                            ; 004bb91e
    PUSH 0x58634d                       ; 004bb920 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004bb925
    MOV [0x01cae320],EAX                ; 004bb926 | DAT_01cae320
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004bb92b
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004bb930
    PUSH 0x1                            ; 004bb933
    PUSH 0x58635e                       ; 004bb935 | = "Bip01 Spine"
    PUSH ESI                            ; 004bb93a
    MOV [0x01cae324],EAX                ; 004bb93b | DAT_01cae324
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004bb940
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004bb945
    PUSH 0x1                            ; 004bb948
    PUSH 0x58636a                       ; 004bb94a | = "Bip01 Spine2"
    PUSH ESI                            ; 004bb94f
    MOV [0x01cae330],EAX                ; 004bb950 | DAT_01cae330
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004bb955
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004bb95a
    PUSH EDI                            ; 004bb95d
    MOV [0x01cae338],EAX                ; 004bb95e | DAT_01cae338
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 004bb963
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    MOV ESI,EAX                         ; 004bb968
    ADD ESP,0x4                         ; 004bb96a
    POP EDI                             ; 004bb96d
    PUSH 0x1                            ; 004bb96e
    PUSH 0x586377                       ; 004bb970 | = "larm01"
    PUSH EAX                            ; 004bb975
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004bb976
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004bb97b
    PUSH 0x1                            ; 004bb97e
    PUSH 0x58637e                       ; 004bb980 | = "l4arm01"
    PUSH ESI                            ; 004bb985
    MOV dword ptr [EBX + 0xbd30],EAX    ; 004bb986
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004bb98c
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004bb991
    PUSH 0x1                            ; 004bb994
    PUSH 0x586386                       ; 004bb996 | = "rarm01"
    PUSH ESI                            ; 004bb99b
    MOV dword ptr [EBX + 0xbd34],EAX    ; 004bb99c
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004bb9a2
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004bb9a7
    PUSH 0x1                            ; 004bb9aa
    PUSH 0x58638d                       ; 004bb9ac | = "r4arm01"
    PUSH ESI                            ; 004bb9b1
    MOV dword ptr [EBX + 0xbd38],EAX    ; 004bb9b2
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004bb9b8
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004bb9bd
    PUSH 0x1                            ; 004bb9c0
    PUSH 0x586395                       ; 004bb9c2 | = "rthigh01"
    PUSH ESI                            ; 004bb9c7
    MOV dword ptr [EBX + 0xbd3c],EAX    ; 004bb9c8
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004bb9ce
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004bb9d3
    PUSH 0x1                            ; 004bb9d6
    PUSH 0x58639e                       ; 004bb9d8 | = "rshin01"
    PUSH ESI                            ; 004bb9dd
    MOV dword ptr [EBX + 0xbd40],EAX    ; 004bb9de
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004bb9e4
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004bb9e9
    PUSH 0x1                            ; 004bb9ec
    PUSH 0x5863a6                       ; 004bb9ee | = "lthigh01"
    PUSH ESI                            ; 004bb9f3
    MOV dword ptr [EBX + 0xbd44],EAX    ; 004bb9f4
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004bb9fa
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004bb9ff
    PUSH 0x1                            ; 004bba02
    PUSH 0x5863af                       ; 004bba04 | = "lshin01"
    PUSH ESI                            ; 004bba09
    MOV dword ptr [EBX + 0xbd48],EAX    ; 004bba0a
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004bba10
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004bba15
    PUSH 0x1                            ; 004bba18
    PUSH 0x5863b7                       ; 004bba1a | = "ass01"
    PUSH ESI                            ; 004bba1f
    MOV dword ptr [EBX + 0xbd4c],EAX    ; 004bba20
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004bba26
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004bba2b
    MOV dword ptr [EBX + 0xbd50],EAX    ; 004bba2e
    PUSH 0x1                            ; 004bba34
    PUSH 0x5863bd                       ; 004bba36 | = "torso01"
    PUSH ESI                            ; 004bba3b
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004bba3c
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004bba41
    PUSH 0x1                            ; 004bba44
    PUSH 0x5863c5                       ; 004bba46 | = "head01"
    PUSH ESI                            ; 004bba4b
    MOV dword ptr [EBX + 0xbd54],EAX    ; 004bba4c
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30 ; 004bba52
        ;   XREF to: 00519b30 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    MOV dword ptr [EBX + 0xbd24],0x0    ; 004bba57
    MOV dword ptr [EBX + 0xbd28],0x0    ; 004bba61
    MOV dword ptr [EBX + 0xbd58],EAX    ; 004bba6b
    MOV EAX,[0x01cae310]                ; 004bba71 | DAT_01cae310
    MOV dword ptr [EBX + 0x24a4],EAX    ; 004bba76
    MOV EAX,dword ptr [EBX + 0xbd34]    ; 004bba7c
    MOV dword ptr [EBX + 0x24a8],EAX    ; 004bba82
    MOV EAX,[0x01cae314]                ; 004bba88 | DAT_01cae314
    ADD ESP,0xc                         ; 004bba8d
    MOV dword ptr [EBX + 0x24e8],EAX    ; 004bba90
    PUSH 0x41a00000                     ; 004bba96
    MOV EAX,dword ptr [EBX + 0xbd3c]    ; 004bba9b
    PUSH 0x41200000                     ; 004bbaa1
    MOV dword ptr [EBX + 0x24ec],EAX    ; 004bbaa6
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004bbaac
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x8],EAX       ; 004bbab1
    MOV EAX,dword ptr [ESP + 0x8]       ; 004bbab5
    MOV dword ptr [EBX + 0xbd2c],EAX    ; 004bbab9
    ADD ESP,0x8                         ; 004bbabf
    ADD ESP,0x4                         ; 004bbac2
    POP ESI                             ; 004bbac5
    POP EBX                             ; 004bbac6
    RET                                 ; 004bbac7

