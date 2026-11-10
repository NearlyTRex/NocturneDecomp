; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gargoyle_cpp_CGargoyle_setup_FUN_004c4ee0(CGargoyle *this_ptr)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005c3ddf
;   TerminatedCString s_Bip01_L_ForeArm_005c3dea
;   TerminatedCString s_Bip01_R_ForeArm_005c3dfa
;   TerminatedCString s_Bip01_L_UpperArm_005c3e0a
;   TerminatedCString s_Bip01_R_UpperArm_005c3e1b
;   TerminatedCString s_Bip01_L_Foot_005c3e2c
;   TerminatedCString s_Bip01_R_Foot_005c3e39
;   TerminatedCString s_Bip01_L_Hand_005c3e46
;   TerminatedCString s_Bip01_R_Hand_005c3e53
;   TerminatedCString s_Bip01_Spine_005c3e60
;   TerminatedCString s_Bip01_Spine1_005c3e6c
;   TerminatedCString s_Bip01_Spine2_005c3e79
;   TerminatedCString s_Bip01_Head_005c3e86
;   TerminatedCString s_Bip01_L_UpperArm_005c3e91
;   TerminatedCString s_Bip01_R_UpperArm_005c3ea2
;   ... and 26 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_00489110
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00548090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4ee0
        ;   Label: core_gargoyle.cpp_CGargoyle_setup_FUN_004c4ee0
    PUSH ESI                            ; 004c4ee1
    PUSH EDI                            ; 004c4ee2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004c4ee3
    PUSH ESI                            ; 004c4ee7
    CALL core_enemy.cpp_CEnemy_setup_FUN_00489110 ; 004c4ee8
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00489110(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004c4eed
    LEA EDI,[ESI + 0x158]               ; 004c4ef0
    PUSH EDI                            ; 004c4ef6
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0 ; 004c4ef7
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c4efc
    PUSH EDI                            ; 004c4eff
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 004c4f00
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c4f05
    PUSH 0x1                            ; 004c4f08
    PUSH 0x5c3ddf                       ; 004c4f0a | = "Bip01 Head"
    PUSH EAX                            ; 004c4f0f
    MOV EBX,EAX                         ; 004c4f10
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c4f12
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c4f17
    PUSH 0x1                            ; 004c4f1a
    PUSH 0x5c3dea                       ; 004c4f1c | = "Bip01 L ForeArm"
    PUSH EBX                            ; 004c4f21
    MOV [0x01d22ca4],EAX                ; 004c4f22 | DAT_01d22ca4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c4f27
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c4f2c
    PUSH 0x1                            ; 004c4f2f
    PUSH 0x5c3dfa                       ; 004c4f31 | = "Bip01 R ForeArm"
    PUSH EBX                            ; 004c4f36
    MOV [0x01d22cb0],EAX                ; 004c4f37 | DAT_01d22cb0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c4f3c
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c4f41
    PUSH 0x1                            ; 004c4f44
    PUSH 0x5c3e0a                       ; 004c4f46 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004c4f4b
    MOV [0x01d22cb4],EAX                ; 004c4f4c | DAT_01d22cb4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c4f51
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c4f56
    PUSH 0x1                            ; 004c4f59
    PUSH 0x5c3e1b                       ; 004c4f5b | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004c4f60
    MOV [0x01d22cb8],EAX                ; 004c4f61 | DAT_01d22cb8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c4f66
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c4f6b
    PUSH 0x1                            ; 004c4f6e
    PUSH 0x5c3e2c                       ; 004c4f70 | = "Bip01 L Foot"
    PUSH EBX                            ; 004c4f75
    MOV [0x01d22cbc],EAX                ; 004c4f76 | DAT_01d22cbc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c4f7b
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c4f80
    PUSH 0x1                            ; 004c4f83
    PUSH 0x5c3e39                       ; 004c4f85 | = "Bip01 R Foot"
    PUSH EBX                            ; 004c4f8a
    MOV [0x01d22cc0],EAX                ; 004c4f8b | DAT_01d22cc0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c4f90
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c4f95
    PUSH 0x1                            ; 004c4f98
    PUSH 0x5c3e46                       ; 004c4f9a | = "Bip01 L Hand"
    PUSH EBX                            ; 004c4f9f
    MOV [0x01d22cc4],EAX                ; 004c4fa0 | DAT_01d22cc4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c4fa5
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c4faa
    MOV [0x01d22ca8],EAX                ; 004c4fad | DAT_01d22ca8
    PUSH 0x1                            ; 004c4fb2
    PUSH 0x5c3e53                       ; 004c4fb4 | = "Bip01 R Hand"
    PUSH EBX                            ; 004c4fb9
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c4fba
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c4fbf
    PUSH 0x1                            ; 004c4fc2
    PUSH 0x5c3e60                       ; 004c4fc4 | = "Bip01 Spine"
    PUSH EBX                            ; 004c4fc9
    MOV [0x01d22cac],EAX                ; 004c4fca | DAT_01d22cac
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c4fcf
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c4fd4
    PUSH 0x1                            ; 004c4fd7
    PUSH 0x5c3e6c                       ; 004c4fd9 | = "Bip01 Spine1"
    PUSH EBX                            ; 004c4fde
    MOV [0x01d22cc8],EAX                ; 004c4fdf | DAT_01d22cc8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c4fe4
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c4fe9
    PUSH 0x1                            ; 004c4fec
    PUSH 0x5c3e79                       ; 004c4fee | = "Bip01 Spine2"
    PUSH EBX                            ; 004c4ff3
    MOV [0x01d22ccc],EAX                ; 004c4ff4 | DAT_01d22ccc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c4ff9
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c4ffe
    PUSH 0x1                            ; 004c5001
    PUSH 0x5c3e86                       ; 004c5003 | = "Bip01 Head"
    PUSH EBX                            ; 004c5008
    MOV [0x01d22cd0],EAX                ; 004c5009 | DAT_01d22cd0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c500e
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c5013
    PUSH 0x1                            ; 004c5016
    PUSH 0x5c3e91                       ; 004c5018 | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004c501d
    MOV [0x01d22ca4],EAX                ; 004c501e | DAT_01d22ca4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c5023
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c5028
    PUSH 0x1                            ; 004c502b
    PUSH 0x5c3ea2                       ; 004c502d | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004c5032
    MOV [0x01d22cb8],EAX                ; 004c5033 | DAT_01d22cb8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c5038
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c503d
    PUSH 0x1                            ; 004c5040
    PUSH 0x5c3eb3                       ; 004c5042 | = "Bip01 Spine"
    PUSH EBX                            ; 004c5047
    MOV [0x01d22cbc],EAX                ; 004c5048 | DAT_01d22cbc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c504d
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c5052
    PUSH 0x1                            ; 004c5055
    PUSH 0x5c3ebf                       ; 004c5057 | = "Bip01 Spine2"
    PUSH EBX                            ; 004c505c
    MOV [0x01d22cc8],EAX                ; 004c505d | DAT_01d22cc8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00548090 ; 004c5062
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00548090(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c5067
    PUSH EDI                            ; 004c506a
    MOV [0x01d22cd0],EAX                ; 004c506b | DAT_01d22cd0
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 004c5070
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    MOV EBX,EAX                         ; 004c5075
    ADD ESP,0x4                         ; 004c5077
    PUSH 0x1                            ; 004c507a
    PUSH 0x5c3ecc                       ; 004c507c | = "larm01"
    PUSH EAX                            ; 004c5081
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004c5082
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c5087
    PUSH 0x1                            ; 004c508a
    PUSH 0x5c3ed3                       ; 004c508c | = "l4arm01"
    PUSH EBX                            ; 004c5091
    MOV dword ptr [ESI + 0xd054],EAX    ; 004c5092
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004c5098
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c509d
    PUSH 0x1                            ; 004c50a0
    PUSH 0x5c3edb                       ; 004c50a2 | = "rarm01"
    PUSH EBX                            ; 004c50a7
    MOV dword ptr [ESI + 0xd058],EAX    ; 004c50a8
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004c50ae
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c50b3
    PUSH 0x1                            ; 004c50b6
    PUSH 0x5c3ee2                       ; 004c50b8 | = "r4arm01"
    PUSH EBX                            ; 004c50bd
    MOV dword ptr [ESI + 0xd05c],EAX    ; 004c50be
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004c50c4
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c50c9
    PUSH 0x1                            ; 004c50cc
    PUSH 0x5c3eea                       ; 004c50ce | = "rthigh01"
    PUSH EBX                            ; 004c50d3
    MOV dword ptr [ESI + 0xd060],EAX    ; 004c50d4
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004c50da
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c50df
    PUSH 0x1                            ; 004c50e2
    PUSH 0x5c3ef3                       ; 004c50e4 | = "rshin01"
    PUSH EBX                            ; 004c50e9
    MOV dword ptr [ESI + 0xd064],EAX    ; 004c50ea
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004c50f0
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c50f5
    PUSH 0x1                            ; 004c50f8
    PUSH 0x5c3efb                       ; 004c50fa | = "lthigh01"
    PUSH EBX                            ; 004c50ff
    MOV dword ptr [ESI + 0xd068],EAX    ; 004c5100
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004c5106
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c510b
    PUSH 0x1                            ; 004c510e
    PUSH 0x5c3f04                       ; 004c5110 | = "lshin01"
    PUSH EBX                            ; 004c5115
    MOV dword ptr [ESI + 0xd06c],EAX    ; 004c5116
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004c511c
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c5121
    PUSH 0x1                            ; 004c5124
    PUSH 0x5c3f0c                       ; 004c5126 | = "ass01"
    PUSH EBX                            ; 004c512b
    MOV dword ptr [ESI + 0xd070],EAX    ; 004c512c
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004c5132
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c5137
    MOV dword ptr [ESI + 0xd074],EAX    ; 004c513a
    PUSH 0x1                            ; 004c5140
    PUSH 0x5c3f12                       ; 004c5142 | = "torso01"
    PUSH EBX                            ; 004c5147
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004c5148
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c514d
    PUSH 0x1                            ; 004c5150
    PUSH 0x5c3f1a                       ; 004c5152 | = "head01"
    PUSH EBX                            ; 004c5157
    MOV dword ptr [ESI + 0xd078],EAX    ; 004c5158
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004c515e
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c5163
    PUSH 0x1                            ; 004c5166
    PUSH 0x5c3f21                       ; 004c5168 | = "tail01"
    PUSH EBX                            ; 004c516d
    MOV dword ptr [ESI + 0xd07c],EAX    ; 004c516e
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310 ; 004c5174
        ;   XREF to: 0054a310 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0054a310(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    MOV dword ptr [ESI + 0xd094],0x0    ; 004c5179
    MOV dword ptr [ESI + 0xd098],0x0    ; 004c5183
    ADD ESP,0xc                         ; 004c518d
    MOV dword ptr [ESI + 0xd080],EAX    ; 004c5190
    POP EDI                             ; 004c5196
    POP ESI                             ; 004c5197
    POP EBX                             ; 004c5198
    RET                                 ; 004c5199

