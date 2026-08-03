; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hotdemon_cpp_CHotDemon_setup_FUN_004b8d00(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_hotdemonx_dfm_00585e04
;   TerminatedCString s_hotdemon_dfm_00585e12
;   TerminatedCString s_Bip01_Head_00585e1f
;   TerminatedCString s_Bip01_L_ForeArm_00585e2a
;   TerminatedCString s_Bip01_R_ForeArm_00585e3a
;   TerminatedCString s_Bip01_L_UpperArm_00585e4a
;   TerminatedCString s_Bip01_R_UpperArm_00585e5b
;   TerminatedCString s_Bip01_L_Foot_00585e6c
;   TerminatedCString s_Bip01_R_Foot_00585e79
;   TerminatedCString s_Bip01_L_Hand_00585e86
;   TerminatedCString s_Bip01_R_Hand_00585e93
;   TerminatedCString s_Bip01_Spine_00585ea0
;   TerminatedCString s_Bip01_Spine1_00585eac
;   TerminatedCString s_Bip01_Spine2_00585eb9
;   TerminatedCString s_Bip01_Head_00585ec6
;   ... and 18 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004796b0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b8d00
        ;   Label: core_hotdemon.cpp_CHotDemon_setup_FUN_004b8d00
    PUSH ESI                            ; 004b8d01
    PUSH EDI                            ; 004b8d02
    MOV EDI,dword ptr [ESP + 0x10]      ; 004b8d03
    MOV EBX,dword ptr [0x005b9354]      ; 004b8d07 | g_CGame_PTR_005b9354
    MOV EDX,dword ptr [EBX + 0x18]      ; 004b8d0d | g_CGame_01c775ec.nudity_flag
    LEA EAX,[EDI + 0x150]               ; 004b8d10
    TEST EDX,EDX                        ; 004b8d16
    JZ 0x004b8ed5                       ; 004b8d18
        ;   XREF to: 004b8ed5 (CONDITIONAL_JUMP)  ; LAB_004b8ed5
    PUSH 0x585e12                       ; 004b8d1e | = "hotdemon.dfm"
    PUSH EAX                            ; 004b8d23
        ;   Label: LAB_004b8d23
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 004b8d24
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 004b8d29
    PUSH EDI                            ; 004b8d2c
    CALL core_enemy.cpp_CEnemy_setup_FUN_004796b0 ; 004b8d2d
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004796b0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004b8d32
    LEA ESI,[EDI + 0x150]               ; 004b8d35
    PUSH ESI                            ; 004b8d3b
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 ; 004b8d3c
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004b8d41
    PUSH ESI                            ; 004b8d44
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 004b8d45
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004b8d4a
    PUSH 0x1                            ; 004b8d4d
    PUSH 0x585e1f                       ; 004b8d4f | = "Bip01 Head"
    PUSH EAX                            ; 004b8d54
    MOV EBX,EAX                         ; 004b8d55
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b8d57
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b8d5c
    PUSH 0x1                            ; 004b8d5f
    PUSH 0x585e2a                       ; 004b8d61 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 004b8d66
    MOV [0x01cae1e0],EAX                ; 004b8d67 | DAT_01cae1e0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b8d6c
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b8d71
    PUSH 0x1                            ; 004b8d74
    PUSH 0x585e3a                       ; 004b8d76 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 004b8d7b
    MOV [0x01cae1ec],EAX                ; 004b8d7c | DAT_01cae1ec
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b8d81
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b8d86
    PUSH 0x1                            ; 004b8d89
    PUSH 0x585e4a                       ; 004b8d8b | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004b8d90
    MOV [0x01cae1f0],EAX                ; 004b8d91 | DAT_01cae1f0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b8d96
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b8d9b
    PUSH 0x1                            ; 004b8d9e
    PUSH 0x585e5b                       ; 004b8da0 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004b8da5
    MOV [0x01cae1f4],EAX                ; 004b8da6 | DAT_01cae1f4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b8dab
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b8db0
    PUSH 0x1                            ; 004b8db3
    PUSH 0x585e6c                       ; 004b8db5 | = "Bip01 L Foot"
    PUSH EBX                            ; 004b8dba
    MOV [0x01cae1f8],EAX                ; 004b8dbb | DAT_01cae1f8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b8dc0
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b8dc5
    PUSH 0x1                            ; 004b8dc8
    PUSH 0x585e79                       ; 004b8dca | = "Bip01 R Foot"
    PUSH EBX                            ; 004b8dcf
    MOV [0x01cae1fc],EAX                ; 004b8dd0 | DAT_01cae1fc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b8dd5
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b8dda
    PUSH 0x1                            ; 004b8ddd
    PUSH 0x585e86                       ; 004b8ddf | = "Bip01 L Hand"
    PUSH EBX                            ; 004b8de4
    MOV [0x01cae200],EAX                ; 004b8de5 | DAT_01cae200
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b8dea
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b8def
    MOV [0x01cae1e4],EAX                ; 004b8df2 | DAT_01cae1e4
    PUSH 0x1                            ; 004b8df7
    PUSH 0x585e93                       ; 004b8df9 | = "Bip01 R Hand"
    PUSH EBX                            ; 004b8dfe
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b8dff
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b8e04
    PUSH 0x1                            ; 004b8e07
    PUSH 0x585ea0                       ; 004b8e09 | = "Bip01 Spine"
    PUSH EBX                            ; 004b8e0e
    MOV [0x01cae1e8],EAX                ; 004b8e0f | DAT_01cae1e8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b8e14
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b8e19
    PUSH 0x1                            ; 004b8e1c
    PUSH 0x585eac                       ; 004b8e1e | = "Bip01 Spine1"
    PUSH EBX                            ; 004b8e23
    MOV [0x01cae204],EAX                ; 004b8e24 | DAT_01cae204
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b8e29
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b8e2e
    PUSH 0x1                            ; 004b8e31
    PUSH 0x585eb9                       ; 004b8e33 | = "Bip01 Spine2"
    PUSH EBX                            ; 004b8e38
    MOV [0x01cae208],EAX                ; 004b8e39 | DAT_01cae208
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b8e3e
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b8e43
    PUSH 0x1                            ; 004b8e46
    PUSH 0x585ec6                       ; 004b8e48 | = "Bip01 Head"
    PUSH EBX                            ; 004b8e4d
    MOV [0x01cae20c],EAX                ; 004b8e4e | DAT_01cae20c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b8e53
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b8e58
    PUSH 0x1                            ; 004b8e5b
    PUSH 0x585ed1                       ; 004b8e5d | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004b8e62
    MOV [0x01cae1e0],EAX                ; 004b8e63 | DAT_01cae1e0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b8e68
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b8e6d
    PUSH 0x1                            ; 004b8e70
    PUSH 0x585ee2                       ; 004b8e72 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004b8e77
    MOV [0x01cae1f4],EAX                ; 004b8e78 | DAT_01cae1f4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b8e7d
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b8e82
    PUSH 0x1                            ; 004b8e85
    PUSH 0x585ef3                       ; 004b8e87 | = "Bip01 Spine"
    PUSH EBX                            ; 004b8e8c
    MOV [0x01cae1f8],EAX                ; 004b8e8d | DAT_01cae1f8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b8e92
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b8e97
    PUSH 0x1                            ; 004b8e9a
    PUSH 0x585eff                       ; 004b8e9c | = "Bip01 Spine2"
    PUSH EBX                            ; 004b8ea1
    MOV [0x01cae204],EAX                ; 004b8ea2 | DAT_01cae204
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b8ea7
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004b8eac
    PUSH ESI                            ; 004b8eaf
    MOV [0x01cae20c],EAX                ; 004b8eb0 | DAT_01cae20c
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 004b8eb5
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    MOV dword ptr [EDI + 0xbd24],0x0    ; 004b8eba
    ADD ESP,0x4                         ; 004b8ec4
    MOV dword ptr [EDI + 0xbd28],0x0    ; 004b8ec7
    POP EDI                             ; 004b8ed1
    POP ESI                             ; 004b8ed2
    POP EBX                             ; 004b8ed3
    RET                                 ; 004b8ed4
    PUSH 0x585e04                       ; 004b8ed5 | = "hotdemonx.dfm"
        ;   Label: LAB_004b8ed5
    JMP 0x004b8d23                      ; 004b8eda
        ;   XREF to: 004b8d23 (UNCONDITIONAL_JUMP)  ; LAB_004b8d23

