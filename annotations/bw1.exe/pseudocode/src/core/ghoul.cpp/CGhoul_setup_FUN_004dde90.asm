; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghoul_cpp_CGhoul_setup_FUN_004dde90(CGhoul *this_ptr)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_Bip01_Head_005e3a58+1
;   TerminatedCString s_Bip01_L_ForeArm_005e3a64
;   TerminatedCString s_Bip01_R_ForeArm_005e3a74
;   TerminatedCString s_Bip01_L_UpperArm_005e3a84
;   TerminatedCString s_Bip01_R_UpperArm_005e3a95
;   TerminatedCString s_Bip01_L_Foot_005e3aa6
;   TerminatedCString s_Bip01_R_Foot_005e3ab3
;   TerminatedCString s_Bip01_L_Hand_005e3ac0
;   TerminatedCString s_Bip01_R_Hand_005e3acd
;   TerminatedCString s_Bip01_Spine_005e3ada
;   TerminatedCString s_Bip01_Spine2_005e3ae6
;   TerminatedCString s_r_high_arm01_005e3af3
;   TerminatedCString s_r_lo_arm01_005e3b00
;   TerminatedCString s_l_high_arm01_005e3b0b
;   TerminatedCString s_l_lo_arm01_005e3b18
;   ... and 18 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004a0510
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dde90
        ;   Label: core_ghoul.cpp_CGhoul_setup_FUN_004dde90
    PUSH ESI                            ; 004dde91
    MOV EBX,dword ptr [ESP + 0xc]       ; 004dde92
    PUSH EDI                            ; 004dde96
    LEA EDI,[EBX + 0x158]               ; 004dde97
    PUSH EDI                            ; 004dde9d
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20 ; 004dde9e
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004ddea3
    PUSH EDI                            ; 004ddea6
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 004ddea7
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004ddeac
    PUSH 0x1                            ; 004ddeaf
    PUSH 0x5e3a59                       ; 004ddeb1 | s_Bip01_Head_005e3a58+1
    PUSH EAX                            ; 004ddeb6
    MOV ESI,EAX                         ; 004ddeb7
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004ddeb9
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004ddebe
    PUSH 0x1                            ; 004ddec1
    PUSH 0x5e3a64                       ; 004ddec3 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 004ddec8
    MOV [0x01cd0d98],EAX                ; 004ddec9 | DAT_01cd0d98
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004ddece
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004dded3
    PUSH 0x1                            ; 004dded6
    PUSH 0x5e3a74                       ; 004dded8 | = "Bip01 R ForeArm"
    PUSH ESI                            ; 004ddedd
    MOV [0x01cd0da4],EAX                ; 004ddede | DAT_01cd0da4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004ddee3
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004ddee8
    PUSH 0x1                            ; 004ddeeb
    PUSH 0x5e3a84                       ; 004ddeed | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004ddef2
    MOV [0x01cd0da8],EAX                ; 004ddef3 | DAT_01cd0da8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004ddef8
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004ddefd
    PUSH 0x1                            ; 004ddf00
    PUSH 0x5e3a95                       ; 004ddf02 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004ddf07
    MOV [0x01cd0dac],EAX                ; 004ddf08 | DAT_01cd0dac
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004ddf0d
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004ddf12
    PUSH 0x1                            ; 004ddf15
    PUSH 0x5e3aa6                       ; 004ddf17 | = "Bip01 L Foot"
    PUSH ESI                            ; 004ddf1c
    MOV [0x01cd0db0],EAX                ; 004ddf1d | DAT_01cd0db0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004ddf22
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004ddf27
    PUSH 0x1                            ; 004ddf2a
    PUSH 0x5e3ab3                       ; 004ddf2c | = "Bip01 R Foot"
    PUSH ESI                            ; 004ddf31
    MOV [0x01cd0db4],EAX                ; 004ddf32 | DAT_01cd0db4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004ddf37
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004ddf3c
    PUSH 0x1                            ; 004ddf3f
    PUSH 0x5e3ac0                       ; 004ddf41 | = "Bip01 L Hand"
    PUSH ESI                            ; 004ddf46
    MOV [0x01cd0db8],EAX                ; 004ddf47 | DAT_01cd0db8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004ddf4c
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004ddf51
    PUSH 0x1                            ; 004ddf54
    PUSH 0x5e3acd                       ; 004ddf56 | = "Bip01 R Hand"
    PUSH ESI                            ; 004ddf5b
    MOV [0x01cd0d9c],EAX                ; 004ddf5c | DAT_01cd0d9c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004ddf61
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004ddf66
    MOV [0x01cd0da0],EAX                ; 004ddf69 | DAT_01cd0da0
    PUSH 0x1                            ; 004ddf6e
    PUSH 0x5e3ada                       ; 004ddf70 | = "Bip01 Spine"
    PUSH ESI                            ; 004ddf75
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004ddf76
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004ddf7b
    PUSH 0x1                            ; 004ddf7e
    PUSH 0x5e3ae6                       ; 004ddf80 | = "Bip01 Spine2"
    PUSH ESI                            ; 004ddf85
    MOV [0x01cd0dbc],EAX                ; 004ddf86 | DAT_01cd0dbc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004ddf8b
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004ddf90
    PUSH EDI                            ; 004ddf93
    MOV [0x01cd0dc0],EAX                ; 004ddf94 | DAT_01cd0dc0
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 004ddf99
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004ddf9e
    PUSH 0x1                            ; 004ddfa1
    PUSH 0x5e3af3                       ; 004ddfa3 | = "r high arm01"
    PUSH EAX                            ; 004ddfa8
    MOV ESI,EAX                         ; 004ddfa9
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 004ddfab
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004ddfb0
    PUSH 0x1                            ; 004ddfb3
    PUSH 0x5e3b00                       ; 004ddfb5 | = "r lo arm01"
    PUSH ESI                            ; 004ddfba
    MOV dword ptr [EBX + 0xc28c],EAX    ; 004ddfbb
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 004ddfc1
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004ddfc6
    PUSH 0x1                            ; 004ddfc9
    PUSH 0x5e3b0b                       ; 004ddfcb | = "l high arm01"
    PUSH ESI                            ; 004ddfd0
    MOV dword ptr [EBX + 0xc290],EAX    ; 004ddfd1
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 004ddfd7
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004ddfdc
    PUSH 0x1                            ; 004ddfdf
    PUSH 0x5e3b18                       ; 004ddfe1 | = "l lo arm01"
    PUSH ESI                            ; 004ddfe6
    MOV dword ptr [EBX + 0xc294],EAX    ; 004ddfe7
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 004ddfed
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004ddff2
    PUSH 0x1                            ; 004ddff5
    PUSH 0x5e3b23                       ; 004ddff7 | = "r thigh01"
    PUSH ESI                            ; 004ddffc
    MOV dword ptr [EBX + 0xc298],EAX    ; 004ddffd
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 004de003
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004de008
    PUSH 0x1                            ; 004de00b
    PUSH 0x5e3b2d                       ; 004de00d | = "r shin01"
    PUSH ESI                            ; 004de012
    MOV dword ptr [EBX + 0xc29c],EAX    ; 004de013
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 004de019
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004de01e
    PUSH 0x1                            ; 004de021
    PUSH 0x5e3b36                       ; 004de023 | = "l thigh01"
    PUSH ESI                            ; 004de028
    MOV dword ptr [EBX + 0xc2a0],EAX    ; 004de029
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 004de02f
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004de034
    MOV dword ptr [EBX + 0xc2a4],EAX    ; 004de037
    POP EDI                             ; 004de03d
    PUSH 0x1                            ; 004de03e
    PUSH 0x5e3b40                       ; 004de040 | = "l shin01"
    PUSH ESI                            ; 004de045
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 004de046
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004de04b
    PUSH 0x1                            ; 004de04e
    PUSH 0x5e3b49                       ; 004de050 | = "lo torso01"
    PUSH ESI                            ; 004de055
    MOV dword ptr [EBX + 0xc2a8],EAX    ; 004de056
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 004de05c
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004de061
    PUSH 0x1                            ; 004de064
    PUSH 0x5e3b54                       ; 004de066 | = "high torso01"
    PUSH ESI                            ; 004de06b
    MOV dword ptr [EBX + 0xc2ac],EAX    ; 004de06c
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 004de072
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004de077
    PUSH 0x1                            ; 004de07a
    PUSH 0x5e3b61                       ; 004de07c | = "head01"
    PUSH ESI                            ; 004de081
    MOV dword ptr [EBX + 0xc2b0],EAX    ; 004de082
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780 ; 004de088
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00565780(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004de08d
    PUSH EBX                            ; 004de090
    MOV dword ptr [EBX + 0xc2b4],EAX    ; 004de091
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a0510 ; 004de097
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a0510(CEnemy * this_ptr)
    MOV dword ptr [EBX + 0xc2c4],0x0    ; 004de09c
    MOV dword ptr [EBX + 0xc2c8],0x0    ; 004de0a6
    MOV dword ptr [EBX + 0xc2cc],0x0    ; 004de0b0
    MOV dword ptr [EBX + 0xc2d0],0x0    ; 004de0ba
    MOV dword ptr [EBX + 0xc2d4],0x0    ; 004de0c4
    MOV dword ptr [EBX + 0xc2b8],0x0    ; 004de0ce
    MOV dword ptr [EBX + 0xc2bc],0x0    ; 004de0d8
    ADD ESP,0x4                         ; 004de0e2
    MOV dword ptr [EBX + 0xc2c0],0x0    ; 004de0e5
    POP ESI                             ; 004de0ef
    POP EBX                             ; 004de0f0
    RET                                 ; 004de0f1

