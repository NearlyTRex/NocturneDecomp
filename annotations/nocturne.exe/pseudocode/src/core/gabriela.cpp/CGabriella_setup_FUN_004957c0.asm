; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gabriela_cpp_CGabriella_setup_FUN_004957c0(CHero *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_gabriela_dfm_00581e62
;   TerminatedCString s_gabcoat_cth_00581e6f
;   TerminatedCString s_Bip01_head_00581e7b
;   TerminatedCString s_Bip01_L_Clavicle_00581e86
;   TerminatedCString s_Bip01_R_Clavicle_00581e97
;   TerminatedCString s_Bip01_L_UpperArm_00581ea8
;   TerminatedCString s_Bip01_R_UpperArm_00581eb9
;   TerminatedCString s_Bip01_L_ForeArm_00581eca
;   TerminatedCString s_Bip01_R_ForeArm_00581eda
;   TerminatedCString s_Bip01_L_Foot_00581eea
;   TerminatedCString s_Bip01_R_Foot_00581ef7
;   TerminatedCString s_Bip01_L_Thigh_00581f04
;   TerminatedCString s_Bip01_R_Thigh_00581f12
;   TerminatedCString s_Bip01_L_Calf_00581f20
;   TerminatedCString s_Bip01_R_Calf_00581f2d
;   ... and 27 more
;
; Called Functions:
;   core_cloth.cpp_CCloth_load_FUN_00435240
;   core_cloth.cpp_CCloth_setup_FUN_004359e0
;   core_hero.cpp_CHero_setup_FUN_004b48d0
;   core_motion.cpp_CMotionController_getMotionList_FUN_004e1890
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004957c0
        ;   Label: core_gabriela.cpp_CGabriella_setup_FUN_004957c0
    PUSH ESI                            ; 004957c1
    PUSH EDI                            ; 004957c2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004957c3
    PUSH ESI                            ; 004957c7
    CALL core_hero.cpp_CHero_setup_FUN_004b48d0 ; 004957c8
        ;   XREF to: 004b48d0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_setup_FUN_004b48d0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004957cd
    PUSH 0x581e62                       ; 004957d0 | = "gabriela.dfm"
    LEA EDI,[ESI + 0x150]               ; 004957d5
    PUSH EDI                            ; 004957db
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 004957dc
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 004957e1
    PUSH EDI                            ; 004957e4
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 ; 004957e5
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004957ea
    PUSH 0x581e6f                       ; 004957ed | = "gabcoat.cth"
    LEA EBX,[ESI + 0x1fa7c]             ; 004957f2
    PUSH EBX                            ; 004957f8
    CALL core_cloth.cpp_CCloth_load_FUN_00435240 ; 004957f9
        ;   XREF to: 00435240 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_load_FUN_00435240(CCloth * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004957fe
    PUSH EDI                            ; 00495801
    LEA EAX,[ESI + 0x30]                ; 00495802
    PUSH EAX                            ; 00495805
    LEA EAX,[ESI + 0x20]                ; 00495806
    PUSH EAX                            ; 00495809
    PUSH EBX                            ; 0049580a
    CALL core_cloth.cpp_CCloth_setup_FUN_004359e0 ; 0049580b
        ;   XREF to: 004359e0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_setup_FUN_004359e0(CCloth * this_ptr, CVector3f * position, CVector3f * euler, CDeformableModelInstance * model_ptr)
    ADD ESP,0x10                        ; 00495810
    PUSH EDI                            ; 00495813
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 00495814
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00495819
    PUSH 0x1                            ; 0049581c
    PUSH 0x581e7b                       ; 0049581e | = "Bip01 head"
    PUSH EAX                            ; 00495823
    MOV EBX,EAX                         ; 00495824
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00495826
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0049582b
    PUSH 0x1                            ; 0049582e
    PUSH 0x581e86                       ; 00495830 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 00495835
    MOV [0x01c71398],EAX                ; 00495836 | DAT_01c71398
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0049583b
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00495840
    PUSH 0x1                            ; 00495843
    PUSH 0x581e97                       ; 00495845 | = "Bip01 R Clavicle"
    PUSH EBX                            ; 0049584a
    MOV [0x01c7139c],EAX                ; 0049584b | DAT_01c7139c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00495850
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00495855
    PUSH 0x1                            ; 00495858
    PUSH 0x581ea8                       ; 0049585a | = "Bip01 L UpperArm"
    PUSH EBX                            ; 0049585f
    MOV [0x01c713a0],EAX                ; 00495860 | DAT_01c713a0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00495865
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0049586a
    PUSH 0x1                            ; 0049586d
    PUSH 0x581eb9                       ; 0049586f | = "Bip01 R UpperArm"
    PUSH EBX                            ; 00495874
    MOV [0x01c713a4],EAX                ; 00495875 | DAT_01c713a4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0049587a
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0049587f
    PUSH 0x1                            ; 00495882
    PUSH 0x581eca                       ; 00495884 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 00495889
    MOV [0x01c713a8],EAX                ; 0049588a | DAT_01c713a8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0049588f
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00495894
    MOV [0x01c713ac],EAX                ; 00495897 | DAT_01c713ac
    PUSH 0x1                            ; 0049589c
    PUSH 0x581eda                       ; 0049589e | = "Bip01 R ForeArm"
    PUSH EBX                            ; 004958a3
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004958a4
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004958a9
    PUSH 0x1                            ; 004958ac
    PUSH 0x581eea                       ; 004958ae | = "Bip01 L Foot"
    PUSH EBX                            ; 004958b3
    MOV [0x01c713b0],EAX                ; 004958b4 | DAT_01c713b0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004958b9
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004958be
    PUSH 0x1                            ; 004958c1
    PUSH 0x581ef7                       ; 004958c3 | = "Bip01 R Foot"
    PUSH EBX                            ; 004958c8
    MOV [0x01c713b4],EAX                ; 004958c9 | DAT_01c713b4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004958ce
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004958d3
    PUSH 0x1                            ; 004958d6
    PUSH 0x581f04                       ; 004958d8 | = "Bip01 L Thigh"
    PUSH EBX                            ; 004958dd
    MOV [0x01c713b8],EAX                ; 004958de | DAT_01c713b8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004958e3
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004958e8
    PUSH 0x1                            ; 004958eb
    PUSH 0x581f12                       ; 004958ed | = "Bip01 R Thigh"
    PUSH EBX                            ; 004958f2
    MOV [0x01c713bc],EAX                ; 004958f3 | DAT_01c713bc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004958f8
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004958fd
    PUSH 0x1                            ; 00495900
    PUSH 0x581f20                       ; 00495902 | = "Bip01 L Calf"
    PUSH EBX                            ; 00495907
    MOV [0x01c713c0],EAX                ; 00495908 | DAT_01c713c0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0049590d
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00495912
    PUSH 0x1                            ; 00495915
    PUSH 0x581f2d                       ; 00495917 | = "Bip01 R Calf"
    PUSH EBX                            ; 0049591c
    MOV [0x01c713c4],EAX                ; 0049591d | DAT_01c713c4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00495922
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00495927
    PUSH 0x1                            ; 0049592a
    PUSH 0x581f3a                       ; 0049592c | = "Bip01 L Hand"
    PUSH EBX                            ; 00495931
    MOV [0x01c713c8],EAX                ; 00495932 | DAT_01c713c8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00495937
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0049593c
    PUSH 0x1                            ; 0049593f
    PUSH 0x581f47                       ; 00495941 | = "Bip01 R Hand"
    PUSH EBX                            ; 00495946
    MOV [0x01c713d8],EAX                ; 00495947 | DAT_01c713d8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 0049594c
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00495951
    PUSH 0x1                            ; 00495954
    PUSH 0x581f54                       ; 00495956 | = "Bip01 Spine2"
    PUSH EBX                            ; 0049595b
    MOV [0x01c713dc],EAX                ; 0049595c | DAT_01c713dc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00495961
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00495966
    MOV [0x01c713e0],EAX                ; 00495969 | DAT_01c713e0
    PUSH 0x1                            ; 0049596e
    PUSH 0x581f61                       ; 00495970 | = "Bip01 Spine"
    PUSH EBX                            ; 00495975
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00495976
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0049597b
    PUSH 0x1                            ; 0049597e
    PUSH 0x581f6d                       ; 00495980 | = "gab draw"
    PUSH EDI                            ; 00495985
    MOV [0x01c713e4],EAX                ; 00495986 | DAT_01c713e4
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 0049598b
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004e1890(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00495990
    PUSH EAX                            ; 00495993
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010 ; 00495994
        ;   XREF to: 004e1010 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00495999
    PUSH 0x1                            ; 0049599c
    PUSH 0x581f76                       ; 0049599e | = "gab shoot"
    PUSH EDI                            ; 004959a3
    MOV [0x01c713cc],EAX                ; 004959a4 | DAT_01c713cc
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 004959a9
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004e1890(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004959ae
    PUSH EAX                            ; 004959b1
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010 ; 004959b2
        ;   XREF to: 004e1010 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 004959b7
    PUSH 0x1                            ; 004959ba
    PUSH 0x581f80                       ; 004959bc | = "gab crossbow shoot"
    PUSH EDI                            ; 004959c1
    MOV [0x01c713d4],EAX                ; 004959c2 | DAT_01c713d4
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 004959c7
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004e1890(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004959cc
    PUSH EAX                            ; 004959cf
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010 ; 004959d0
        ;   XREF to: 004e1010 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    MOV dword ptr [ESI + 0x1fa0c],0x0   ; 004959d5
    MOV dword ptr [ESI + 0x1fa10],0x0   ; 004959df
    MOV [0x01c713d0],EAX                ; 004959e9 | DAT_01c713d0
    MOV dword ptr [ESI + 0x1fa14],0x0   ; 004959ee
    MOV EAX,[0x01c713d8]                ; 004959f8 | DAT_01c713d8
    ADD ESP,0xc                         ; 004959fd
    MOV dword ptr [ESI + 0x24a4],EAX    ; 00495a00
    POP EDI                             ; 00495a06
    POP ESI                             ; 00495a07
    POP EBX                             ; 00495a08
    RET                                 ; 00495a09

