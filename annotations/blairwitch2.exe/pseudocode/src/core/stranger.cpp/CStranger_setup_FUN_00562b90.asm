; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_setup_FUN_00562b90(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_head_005eb34e
;   TerminatedCString s_Bip01_L_Clavicle_005eb359
;   TerminatedCString s_Bip01_R_Clavicle_005eb36a
;   TerminatedCString s_Bip01_L_UpperArm_005eb37b
;   TerminatedCString s_Bip01_R_UpperArm_005eb38c
;   TerminatedCString s_Bip01_L_ForeArm_005eb39d
;   TerminatedCString s_Bip01_R_ForeArm_005eb3ad
;   TerminatedCString s_Bip01_L_Foot_005eb3bd
;   TerminatedCString s_Bip01_R_Foot_005eb3ca
;   TerminatedCString s_Bip01_L_Thigh_005eb3d7
;   TerminatedCString s_Bip01_R_Thigh_005eb3e5
;   TerminatedCString s_Bip01_L_Calf_005eb3f3
;   TerminatedCString s_Bip01_R_Calf_005eb400
;   TerminatedCString s_Bip01_L_Hand_005eb40d
;   TerminatedCString s_Bip01_R_Hand_005eb41a
;   ... and 33 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;   core_hero.cpp_CHero_setup_FUN_004ce4a0
;   core_motion.cpp_CMotionController_getMotionList_FUN_00503860
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100
;   core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_00544f50
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;   core_stranger.cpp_FUN_00565ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562b90
        ;   Label: core_stranger.cpp_CStranger_setup_FUN_00562b90
    PUSH ESI                            ; 00562b91
    PUSH EDI                            ; 00562b92
    PUSH EBP                            ; 00562b93
    SUB ESP,0x30                        ; 00562b94
    MOV EBP,dword ptr [ESP + 0x44]      ; 00562b97
    PUSH EBP                            ; 00562b9b
    CALL core_hero.cpp_CHero_setup_FUN_004ce4a0 ; 00562b9c
        ;   XREF to: 004ce4a0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_setup_FUN_004ce4a0(CHero * this_ptr)
    ADD ESP,0x4                         ; 00562ba1
    LEA ESI,[EBP + 0x2b4]               ; 00562ba4
    PUSH ESI                            ; 00562baa
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00562bab
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00562bb0
    PUSH 0x1                            ; 00562bb3
    PUSH 0x5eb34e                       ; 00562bb5 | = "Bip01 head"
    PUSH EAX                            ; 00562bba
    MOV EBX,EAX                         ; 00562bbb
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00562bbd
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00562bc2
    PUSH 0x1                            ; 00562bc5
    PUSH 0x5eb359                       ; 00562bc7 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 00562bcc
    MOV [0x0264be30],EAX                ; 00562bcd | DAT_0264be30
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00562bd2
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00562bd7
    PUSH 0x1                            ; 00562bda
    PUSH 0x5eb36a                       ; 00562bdc | = "Bip01 R Clavicle"
    PUSH EBX                            ; 00562be1
    MOV [0x0264be34],EAX                ; 00562be2 | DAT_0264be34
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00562be7
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00562bec
    PUSH 0x1                            ; 00562bef
    PUSH 0x5eb37b                       ; 00562bf1 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 00562bf6
    MOV [0x0264be38],EAX                ; 00562bf7 | DAT_0264be38
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00562bfc
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00562c01
    PUSH 0x1                            ; 00562c04
    PUSH 0x5eb38c                       ; 00562c06 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 00562c0b
    MOV [0x0264be3c],EAX                ; 00562c0c | DAT_0264be3c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00562c11
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00562c16
    PUSH 0x1                            ; 00562c19
    PUSH 0x5eb39d                       ; 00562c1b | = "Bip01 L ForeArm"
    PUSH EBX                            ; 00562c20
    MOV [0x0264be40],EAX                ; 00562c21 | DAT_0264be40
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00562c26
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00562c2b
    PUSH 0x1                            ; 00562c2e
    PUSH 0x5eb3ad                       ; 00562c30 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 00562c35
    MOV [0x0264be44],EAX                ; 00562c36 | DAT_0264be44
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00562c3b
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00562c40
    PUSH 0x1                            ; 00562c43
    PUSH 0x5eb3bd                       ; 00562c45 | = "Bip01 L Foot"
    PUSH EBX                            ; 00562c4a
    MOV [0x0264be48],EAX                ; 00562c4b | DAT_0264be48
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00562c50
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00562c55
    PUSH 0x1                            ; 00562c58
    PUSH 0x5eb3ca                       ; 00562c5a | = "Bip01 R Foot"
    PUSH EBX                            ; 00562c5f
    MOV [0x0264be4c],EAX                ; 00562c60 | DAT_0264be4c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00562c65
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00562c6a
    MOV [0x0264be50],EAX                ; 00562c6d | DAT_0264be50
    PUSH 0x1                            ; 00562c72
    PUSH 0x5eb3d7                       ; 00562c74 | = "Bip01 L Thigh"
    PUSH EBX                            ; 00562c79
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00562c7a
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00562c7f
    PUSH 0x1                            ; 00562c82
    PUSH 0x5eb3e5                       ; 00562c84 | = "Bip01 R Thigh"
    PUSH EBX                            ; 00562c89
    MOV [0x0264be54],EAX                ; 00562c8a | DAT_0264be54
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00562c8f
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00562c94
    PUSH 0x1                            ; 00562c97
    PUSH 0x5eb3f3                       ; 00562c99 | = "Bip01 L Calf"
    PUSH EBX                            ; 00562c9e
    MOV [0x0264be58],EAX                ; 00562c9f | DAT_0264be58
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00562ca4
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00562ca9
    PUSH 0x1                            ; 00562cac
    PUSH 0x5eb400                       ; 00562cae | = "Bip01 R Calf"
    PUSH EBX                            ; 00562cb3
    MOV [0x0264be5c],EAX                ; 00562cb4 | DAT_0264be5c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00562cb9
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00562cbe
    PUSH 0x1                            ; 00562cc1
    PUSH 0x5eb40d                       ; 00562cc3 | = "Bip01 L Hand"
    PUSH EBX                            ; 00562cc8
    MOV [0x0264be60],EAX                ; 00562cc9 | DAT_0264be60
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00562cce
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00562cd3
    PUSH 0x1                            ; 00562cd6
    PUSH 0x5eb41a                       ; 00562cd8 | = "Bip01 R Hand"
    PUSH EBX                            ; 00562cdd
    MOV [0x0264be64],EAX                ; 00562cde | DAT_0264be64
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00562ce3
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00562ce8
    PUSH 0x1                            ; 00562ceb
    PUSH 0x5eb427                       ; 00562ced | = "Bip01 Neck"
    PUSH EBX                            ; 00562cf2
    MOV [0x0264be68],EAX                ; 00562cf3 | DAT_0264be68
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00562cf8
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00562cfd
    PUSH 0x1                            ; 00562d00
    PUSH 0x5eb432                       ; 00562d02 | = "Bip01 Spine2"
    PUSH EBX                            ; 00562d07
    MOV [0x0264be6c],EAX                ; 00562d08 | DAT_0264be6c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00562d0d
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00562d12
    PUSH 0x1                            ; 00562d15
    PUSH 0x5eb43f                       ; 00562d17 | = "Bip01 Spine1"
    PUSH EBX                            ; 00562d1c
    MOV [0x0264be70],EAX                ; 00562d1d | DAT_0264be70
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00562d22
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00562d27
    PUSH 0x1                            ; 00562d2a
    PUSH 0x5eb44c                       ; 00562d2c | = "Bip01 Spine"
    PUSH EBX                            ; 00562d31
    MOV [0x0264be74],EAX                ; 00562d32 | DAT_0264be74
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00562d37
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00562d3c
    MOV [0x0264be78],EAX                ; 00562d3f | DAT_0264be78
    PUSH 0x1                            ; 00562d44
    PUSH 0x5eb458                       ; 00562d46 | = "Bip01 Pelvis"
    PUSH EBX                            ; 00562d4b
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 00562d4c
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00562d51
    PUSH 0x1                            ; 00562d54
    MOV [0x0264be7c],EAX                ; 00562d56 | DAT_0264be7c
    MOV EAX,[0x0264be64]                ; 00562d5b | DAT_0264be64
    PUSH 0x5eb465                       ; 00562d60 | = "turnlstart"
    MOV dword ptr [EBP + 0x2618],EAX    ; 00562d65
    MOV EAX,[0x0264be68]                ; 00562d6b | DAT_0264be68
    PUSH ESI                            ; 00562d70
    MOV dword ptr [EBP + 0x2690],EAX    ; 00562d71
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00503860 ; 00562d77
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00503860(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00562d7c
    PUSH EAX                            ; 00562d7f
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10 ; 00562d80
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00562d85
    PUSH 0x1                            ; 00562d88
    PUSH 0x5eb470                       ; 00562d8a | = "turnrstart"
    PUSH ESI                            ; 00562d8f
    MOV [0x0264be80],EAX                ; 00562d90 | DAT_0264be80
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00503860 ; 00562d95
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00503860(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00562d9a
    PUSH EAX                            ; 00562d9d
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10 ; 00562d9e
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00562da3
    PUSH 0x1                            ; 00562da6
    PUSH 0x5eb47b                       ; 00562da8 | = "pickup"
    PUSH ESI                            ; 00562dad
    MOV [0x0264be84],EAX                ; 00562dae | DAT_0264be84
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00503860 ; 00562db3
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00503860(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00562db8
    PUSH EAX                            ; 00562dbb
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10 ; 00562dbc
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00562dc1
    PUSH 0x41b00000                     ; 00562dc4
    PUSH EAX                            ; 00562dc9
    PUSH ESI                            ; 00562dca
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_00544f50 ; 00562dcb
        ;   XREF to: 00544f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_00544f50(CDeformableModelInstance * this_ptr, int motion_index, float frame_number)
    ADD ESP,0xc                         ; 00562dd0
    MOV EDX,dword ptr [0x0264be68]      ; 00562dd3 | DAT_0264be68
    PUSH EDX                            ; 00562dd9
    LEA EDI,[ESP + 0x4]                 ; 00562dda
    PUSH ESI                            ; 00562dde
    LEA ESI,[ESP + 0x2c]                ; 00562ddf
    LEA EBX,[EBP + 0x25728]             ; 00562de3
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0 ; 00562de9
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x2c]                ; 00562dee
    ADD ESP,0x8                         ; 00562df2
    MOV EAX,ESP                         ; 00562df5
    MOVSD ES:EDI,ESI                    ; 00562df7
    MOVSD ES:EDI,ESI                    ; 00562df8
    MOVSD ES:EDI,ESI                    ; 00562df9
    CMP EBX,EAX                         ; 00562dfa
    JZ 0x00562e11                       ; 00562dfc
        ;   XREF to: 00562e11 (CONDITIONAL_JUMP)  ; LAB_00562e11
    MOV EAX,dword ptr [ESP]             ; 00562dfe
    MOV dword ptr [EBX],EAX             ; 00562e01
    MOV EAX,dword ptr [ESP + 0x4]       ; 00562e03
    MOV dword ptr [EBX + 0x4],EAX       ; 00562e07
    MOV EAX,dword ptr [ESP + 0x8]       ; 00562e0a
    MOV dword ptr [EBX + 0x8],EAX       ; 00562e0e
    MOV ECX,dword ptr [0x0264be40]      ; 00562e11 | DAT_0264be40
        ;   Label: LAB_00562e11
    PUSH ECX                            ; 00562e17
    LEA EAX,[EBP + 0x2b4]               ; 00562e18
    LEA ESI,[ESP + 0x10]                ; 00562e1e
    PUSH EAX                            ; 00562e22
    LEA EDI,[ESP + 0x20]                ; 00562e23
    LEA EBX,[EBP + 0x25734]             ; 00562e27
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0 ; 00562e2d
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x14]                ; 00562e32
    ADD ESP,0x8                         ; 00562e36
    LEA EAX,[ESP + 0x18]                ; 00562e39
    MOVSD ES:EDI,ESI                    ; 00562e3d
    MOVSD ES:EDI,ESI                    ; 00562e3e
    MOVSD ES:EDI,ESI                    ; 00562e3f
    CMP EBX,EAX                         ; 00562e40
    JZ 0x00562e58                       ; 00562e42
        ;   XREF to: 00562e58 (CONDITIONAL_JUMP)  ; LAB_00562e58
    MOV EAX,dword ptr [ESP + 0x18]      ; 00562e44
    MOV dword ptr [EBX],EAX             ; 00562e48
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00562e4a
    MOV dword ptr [EBX + 0x4],EAX       ; 00562e4e
    MOV EAX,dword ptr [ESP + 0x20]      ; 00562e51
    MOV dword ptr [EBX + 0x8],EAX       ; 00562e55
    PUSH EBP                            ; 00562e58
        ;   Label: LAB_00562e58
    CALL core_stranger.cpp_FUN_00565ff0 ; 00562e59
        ;   XREF to: 00565ff0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_FUN_00565ff0(CStranger * this_ptr)
    ADD ESP,0x4                         ; 00562e5e
    PUSH 0x5eb482                       ; 00562e61 | = "stranger-hat.kfm"
    LEA EBX,[EBP + 0x25744]             ; 00562e66
    MOV dword ptr [EBP + 0x25740],0x0   ; 00562e6c
    PUSH EBX                            ; 00562e76
    MOV dword ptr [EBP + 0x258d0],0x0   ; 00562e77
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 00562e81
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00562e86
    PUSH EBX                            ; 00562e89
    ADD EBP,0x2b4                       ; 00562e8a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 00562e90
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    MOV dword ptr [EBP + 0x25624],0x0   ; 00562e95
    ADD ESP,0x4                         ; 00562e9f
    MOV dword ptr [EBP + 0x25400],0x0   ; 00562ea2
    PUSH EBP                            ; 00562eac
    MOV dword ptr [EBP + 0x25404],0x0   ; 00562ead
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 00562eb7
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00562ebc
    PUSH 0x1                            ; 00562ebf
    PUSH 0x5eb493                       ; 00562ec1 | DAT_005eb493
    PUSH EAX                            ; 00562ec6
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 00562ec7
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 00562ecc
    MOV [0x0264be88],EAX                ; 00562ecf | DAT_0264be88
    ADD ESP,0x30                        ; 00562ed4
    POP EBP                             ; 00562ed7
    POP EDI                             ; 00562ed8
    POP ESI                             ; 00562ed9
    POP EBX                             ; 00562eda
    RET                                 ; 00562edb

