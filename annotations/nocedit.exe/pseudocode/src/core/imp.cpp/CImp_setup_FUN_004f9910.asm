; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_imp_cpp_CImp_setup_FUN_004f9910(CImp *this_ptr)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_0062f83b
;   TerminatedCString s_Bip01_L_ForeArm_0062f846
;   TerminatedCString s_Bip01_R_ForeArm_0062f856
;   TerminatedCString s_Bip01_L_UpperArm_0062f866
;   TerminatedCString s_Bip01_R_UpperArm_0062f877
;   TerminatedCString s_Bip01_L_Foot_0062f888
;   TerminatedCString s_Bip01_R_Foot_0062f895
;   TerminatedCString s_Bip01_L_Hand_0062f8a2
;   TerminatedCString s_Bip01_R_Hand_0062f8af
;   TerminatedCString s_Bip01_Spine_0062f8bc
;   TerminatedCString s_Bip01_Spine1_0062f8c8
;   TerminatedCString s_Bip01_Spine2_0062f8d5
;   TerminatedCString s_Bip01_Head_0062f8e2
;   TerminatedCString s_Bip01_L_UpperArm_0062f8ed
;   TerminatedCString s_Bip01_R_UpperArm_0062f8fe
;   ... and 25 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_enemy.cpp_CEnemy_setup_FUN_004a9650
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9910
        ;   Label: core_imp.cpp_CImp_setup_FUN_004f9910
    PUSH ESI                            ; 004f9911
    SUB ESP,0x4                         ; 004f9912
    MOV EBX,dword ptr [ESP + 0x10]      ; 004f9915
    PUSH EDI                            ; 004f9919
    PUSH EBX                            ; 004f991a
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a9650 ; 004f991b
        ;   XREF to: 004a9650 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a9650(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004f9920
    LEA EDI,[EBX + 0x158]               ; 004f9923
    PUSH EDI                            ; 004f9929
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 004f992a
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f992f
    PUSH EDI                            ; 004f9932
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 004f9933
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f9938
    PUSH 0x1                            ; 004f993b
    PUSH 0x62f83b                       ; 004f993d | = "Bip01 Head"
    PUSH EAX                            ; 004f9942
    MOV ESI,EAX                         ; 004f9943
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f9945
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f994a
    PUSH 0x1                            ; 004f994d
    PUSH 0x62f846                       ; 004f994f | = "Bip01 L ForeArm"
    PUSH ESI                            ; 004f9954
    MOV [0x02db89f4],EAX                ; 004f9955 | g_ImpIndices
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f995a
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f995f
    PUSH 0x1                            ; 004f9962
    PUSH 0x62f856                       ; 004f9964 | = "Bip01 R ForeArm"
    PUSH ESI                            ; 004f9969
    MOV [0x02db8a00],EAX                ; 004f996a | g_ImpIndices[3]
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f996f
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f9974
    PUSH 0x1                            ; 004f9977
    PUSH 0x62f866                       ; 004f9979 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004f997e
    MOV [0x02db8a04],EAX                ; 004f997f | g_ImpIndices[4]
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f9984
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f9989
    PUSH 0x1                            ; 004f998c
    PUSH 0x62f877                       ; 004f998e | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004f9993
    MOV [0x02db8a08],EAX                ; 004f9994 | g_ImpIndices[5]
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f9999
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f999e
    PUSH 0x1                            ; 004f99a1
    PUSH 0x62f888                       ; 004f99a3 | = "Bip01 L Foot"
    PUSH ESI                            ; 004f99a8
    MOV [0x02db8a0c],EAX                ; 004f99a9 | g_ImpIndices[6]
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f99ae
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f99b3
    PUSH 0x1                            ; 004f99b6
    PUSH 0x62f895                       ; 004f99b8 | = "Bip01 R Foot"
    PUSH ESI                            ; 004f99bd
    MOV [0x02db8a10],EAX                ; 004f99be | g_ImpIndices[7]
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f99c3
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f99c8
    PUSH 0x1                            ; 004f99cb
    PUSH 0x62f8a2                       ; 004f99cd | = "Bip01 L Hand"
    PUSH ESI                            ; 004f99d2
    MOV [0x02db8a14],EAX                ; 004f99d3 | g_ImpIndices[8]
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f99d8
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f99dd
    MOV [0x02db89f8],EAX                ; 004f99e0 | g_ImpIndices[1]
    PUSH 0x1                            ; 004f99e5
    PUSH 0x62f8af                       ; 004f99e7 | = "Bip01 R Hand"
    PUSH ESI                            ; 004f99ec
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f99ed
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f99f2
    PUSH 0x1                            ; 004f99f5
    PUSH 0x62f8bc                       ; 004f99f7 | = "Bip01 Spine"
    PUSH ESI                            ; 004f99fc
    MOV [0x02db89fc],EAX                ; 004f99fd | g_ImpIndices[2]
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f9a02
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f9a07
    PUSH 0x1                            ; 004f9a0a
    PUSH 0x62f8c8                       ; 004f9a0c | = "Bip01 Spine1"
    PUSH ESI                            ; 004f9a11
    MOV [0x02db8a18],EAX                ; 004f9a12 | g_ImpIndices[9]
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f9a17
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f9a1c
    PUSH 0x1                            ; 004f9a1f
    PUSH 0x62f8d5                       ; 004f9a21 | = "Bip01 Spine2"
    PUSH ESI                            ; 004f9a26
    MOV [0x02db8a1c],EAX                ; 004f9a27 | g_ImpIndices[10]
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f9a2c
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f9a31
    PUSH 0x1                            ; 004f9a34
    PUSH 0x62f8e2                       ; 004f9a36 | = "Bip01 Head"
    PUSH ESI                            ; 004f9a3b
    MOV [0x02db8a20],EAX                ; 004f9a3c | g_ImpIndices[11]
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f9a41
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f9a46
    PUSH 0x1                            ; 004f9a49
    PUSH 0x62f8ed                       ; 004f9a4b | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004f9a50
    MOV [0x02db89f4],EAX                ; 004f9a51 | g_ImpIndices
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f9a56
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f9a5b
    PUSH 0x1                            ; 004f9a5e
    PUSH 0x62f8fe                       ; 004f9a60 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004f9a65
    MOV [0x02db8a08],EAX                ; 004f9a66 | g_ImpIndices[5]
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f9a6b
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f9a70
    PUSH 0x1                            ; 004f9a73
    PUSH 0x62f90f                       ; 004f9a75 | = "Bip01 Spine"
    PUSH ESI                            ; 004f9a7a
    MOV [0x02db8a0c],EAX                ; 004f9a7b | g_ImpIndices[6]
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f9a80
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f9a85
    PUSH 0x1                            ; 004f9a88
    PUSH 0x62f91b                       ; 004f9a8a | = "Bip01 Spine2"
    PUSH ESI                            ; 004f9a8f
    MOV [0x02db8a18],EAX                ; 004f9a90 | g_ImpIndices[9]
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 ; 004f9a95
        ;   XREF to: 00599fc0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004f9a9a
    PUSH EDI                            ; 004f9a9d
    MOV [0x02db8a20],EAX                ; 004f9a9e | g_ImpIndices[11]
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 004f9aa3
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    MOV ESI,EAX                         ; 004f9aa8
    ADD ESP,0x4                         ; 004f9aaa
    POP EDI                             ; 004f9aad
    PUSH 0x1                            ; 004f9aae
    PUSH 0x62f928                       ; 004f9ab0 | = "larm01"
    PUSH EAX                            ; 004f9ab5
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004f9ab6
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004f9abb
    PUSH 0x1                            ; 004f9abe
    PUSH 0x62f92f                       ; 004f9ac0 | = "l4arm01"
    PUSH ESI                            ; 004f9ac5
    MOV dword ptr [EBX + 0xbec8],EAX    ; 004f9ac6
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004f9acc
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004f9ad1
    PUSH 0x1                            ; 004f9ad4
    PUSH 0x62f937                       ; 004f9ad6 | = "rarm01"
    PUSH ESI                            ; 004f9adb
    MOV dword ptr [EBX + 0xbecc],EAX    ; 004f9adc
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004f9ae2
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004f9ae7
    PUSH 0x1                            ; 004f9aea
    PUSH 0x62f93e                       ; 004f9aec | = "r4arm01"
    PUSH ESI                            ; 004f9af1
    MOV dword ptr [EBX + 0xbed0],EAX    ; 004f9af2
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004f9af8
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004f9afd
    PUSH 0x1                            ; 004f9b00
    PUSH 0x62f946                       ; 004f9b02 | = "rthigh01"
    PUSH ESI                            ; 004f9b07
    MOV dword ptr [EBX + 0xbed4],EAX    ; 004f9b08
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004f9b0e
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004f9b13
    PUSH 0x1                            ; 004f9b16
    PUSH 0x62f94f                       ; 004f9b18 | = "rshin01"
    PUSH ESI                            ; 004f9b1d
    MOV dword ptr [EBX + 0xbed8],EAX    ; 004f9b1e
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004f9b24
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004f9b29
    PUSH 0x1                            ; 004f9b2c
    PUSH 0x62f957                       ; 004f9b2e | = "lthigh01"
    PUSH ESI                            ; 004f9b33
    MOV dword ptr [EBX + 0xbedc],EAX    ; 004f9b34
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004f9b3a
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004f9b3f
    PUSH 0x1                            ; 004f9b42
    PUSH 0x62f960                       ; 004f9b44 | = "lshin01"
    PUSH ESI                            ; 004f9b49
    MOV dword ptr [EBX + 0xbee0],EAX    ; 004f9b4a
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004f9b50
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004f9b55
    PUSH 0x1                            ; 004f9b58
    PUSH 0x62f968                       ; 004f9b5a | = "ass01"
    PUSH ESI                            ; 004f9b5f
    MOV dword ptr [EBX + 0xbee4],EAX    ; 004f9b60
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004f9b66
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004f9b6b
    MOV dword ptr [EBX + 0xbee8],EAX    ; 004f9b6e
    PUSH 0x1                            ; 004f9b74
    PUSH 0x62f96e                       ; 004f9b76 | = "torso01"
    PUSH ESI                            ; 004f9b7b
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004f9b7c
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004f9b81
    PUSH 0x1                            ; 004f9b84
    PUSH 0x62f976                       ; 004f9b86 | = "head01"
    PUSH ESI                            ; 004f9b8b
    MOV dword ptr [EBX + 0xbeec],EAX    ; 004f9b8c
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 ; 004f9b92
        ;   XREF to: 0059c240 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    MOV dword ptr [EBX + 0xbebc],0x0    ; 004f9b97
    MOV dword ptr [EBX + 0xbec0],0x0    ; 004f9ba1
    MOV dword ptr [EBX + 0xbef0],EAX    ; 004f9bab
    MOV EAX,[0x02db89f8]                ; 004f9bb1 | g_ImpIndices[1]
    MOV dword ptr [EBX + 0x24ac],EAX    ; 004f9bb6
    MOV EAX,dword ptr [EBX + 0xbecc]    ; 004f9bbc
    MOV dword ptr [EBX + 0x24b0],EAX    ; 004f9bc2
    MOV EAX,[0x02db89fc]                ; 004f9bc8 | g_ImpIndices[2]
    ADD ESP,0xc                         ; 004f9bcd
    MOV dword ptr [EBX + 0x24f0],EAX    ; 004f9bd0
    PUSH 0x41a00000                     ; 004f9bd6
    MOV EAX,dword ptr [EBX + 0xbed4]    ; 004f9bdb
    PUSH 0x41200000                     ; 004f9be1
    MOV dword ptr [EBX + 0x24f4],EAX    ; 004f9be6
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004f9bec
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

