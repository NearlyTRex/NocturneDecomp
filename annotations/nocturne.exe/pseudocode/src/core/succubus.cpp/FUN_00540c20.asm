; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_succubus_cpp_FUN_00540c20(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_succubusx_dfm_00596023
;   TerminatedCString s_hotdemonx_dfm_00596031
;   TerminatedCString s_succubus_dfm_0059603f
;   TerminatedCString s_hotdemon_dfm_0059604c
;   TerminatedCString s_Bip01_Head_00596059
;   TerminatedCString s_Bip01_L_ForeArm_00596064
;   TerminatedCString s_Bip01_R_ForeArm_00596074
;   TerminatedCString s_Bip01_L_UpperArm_00596084
;   TerminatedCString s_Bip01_R_UpperArm_00596095
;   TerminatedCString s_Bip01_L_Foot_005960a6
;   TerminatedCString s_Bip01_R_Foot_005960b3
;   TerminatedCString s_Bip01_L_Hand_005960c0
;   TerminatedCString s_Bip01_R_Hand_005960cd
;   TerminatedCString s_Bip01_Spine_005960da
;   TerminatedCString s_Bip01_Spine1_005960e6
;   ... and 22 more
;
; Called Functions:
;   core_cloth.cpp_CClothList_load_FUN_00438270
;   core_cloth.cpp_CClothList_process_FUN_00438550
;   core_cloth.cpp_CClothList_setup_FUN_00438510
;   core_enemy.cpp_CEnemy_setup_FUN_004796b0
;   core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0
;   core_morph.cpp_CMorph_getReady_FUN_004e03c0
;   core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540c20
        ;   Label: core_succubus.cpp_FUN_00540c20
    PUSH ESI                            ; 00540c21
    PUSH EDI                            ; 00540c22
    PUSH EBP                            ; 00540c23
    SUB ESP,0x8                         ; 00540c24
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00540c27
    MOV EDI,dword ptr [0x005b9354]      ; 00540c2b | DAT_005b9354
    LEA ESI,[EBX + 0xbd24]              ; 00540c31
    MOV EDX,dword ptr [EDI + 0x18]      ; 00540c37 | DAT_01c77604
    LEA EAX,[EBX + 0x150]               ; 00540c3a
    TEST EDX,EDX                        ; 00540c40
    JZ 0x00540f2e                       ; 00540c42
        ;   XREF to: 00540f2e (CONDITIONAL_JUMP)  ; LAB_00540f2e
    PUSH 0x59603f                       ; 00540c48 | = "succubus.dfm"
    PUSH EAX                            ; 00540c4d
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 00540c4e
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    ADD ESP,0x8                         ; 00540c53
    PUSH 0x59604c                       ; 00540c56 | = "hotdemon.dfm"
    PUSH ESI                            ; 00540c5b
        ;   Label: LAB_00540c5b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 00540c5c
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    ADD ESP,0x8                         ; 00540c61
    PUSH EBX                            ; 00540c64
    CALL core_enemy.cpp_CEnemy_setup_FUN_004796b0 ; 00540c65
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_setup_FUN_004796b0()
    ADD ESP,0x4                         ; 00540c6a
    LEA EBP,[EBX + 0x150]               ; 00540c6d
    PUSH EBP                            ; 00540c73
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 ; 00540c74
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0()
    ADD ESP,0x4                         ; 00540c79
    LEA EDI,[EBX + 0xbd24]              ; 00540c7c
    PUSH EDI                            ; 00540c82
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 ; 00540c83
        ;   XREF to: 0051dcd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0()
    ADD ESP,0x4                         ; 00540c88
    LEA ESI,[EBX + 0xdfd8]              ; 00540c8b
    PUSH ESI                            ; 00540c91
    CALL core_cloth.cpp_CClothList_load_FUN_00438270 ; 00540c92
        ;   XREF to: 00438270 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CClothList_load_FUN_00438270()
    ADD ESP,0x4                         ; 00540c97
    PUSH EDI                            ; 00540c9a
    LEA EAX,[EBX + 0x30]                ; 00540c9b
    PUSH EAX                            ; 00540c9e
    MOV dword ptr [ESP + 0x8],EAX       ; 00540c9f
    LEA EAX,[EBX + 0x20]                ; 00540ca3
    PUSH EAX                            ; 00540ca6
    PUSH ESI                            ; 00540ca7
    MOV dword ptr [ESP + 0x14],EAX      ; 00540ca8
    CALL core_cloth.cpp_CClothList_setup_FUN_00438510 ; 00540cac
        ;   XREF to: 00438510 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CClothList_setup_FUN_00438510()
    ADD ESP,0x10                        ; 00540cb1
    PUSH EDI                            ; 00540cb4
    PUSH dword ptr [EBX + 0x240c]       ; 00540cb5
    MOV EDX,dword ptr [ESP + 0x8]       ; 00540cbb
    PUSH 0x3d4ccccd                     ; 00540cbf
    PUSH EDX                            ; 00540cc4
    MOV ECX,dword ptr [ESP + 0x14]      ; 00540cc5
    PUSH ECX                            ; 00540cc9
    LEA EAX,[EBX + 0x2a8c]              ; 00540cca
    PUSH EAX                            ; 00540cd0
    CALL core_cloth.cpp_CClothList_process_FUN_00438550 ; 00540cd1
        ;   XREF to: 00438550 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CClothList_process_FUN_00438550()
    ADD ESP,0x18                        ; 00540cd6
    PUSH EBP                            ; 00540cd9
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 00540cda
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 00540cdf
    PUSH 0x1                            ; 00540ce2
    PUSH 0x596059                       ; 00540ce4 | = "Bip01 Head"
    PUSH EAX                            ; 00540ce9
    MOV ESI,EAX                         ; 00540cea
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00540cec
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00540cf1
    PUSH 0x1                            ; 00540cf4
    PUSH 0x596064                       ; 00540cf6 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 00540cfb
    MOV [0x02dc9fec],EAX                ; 00540cfc | DAT_02dc9fec
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00540d01
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00540d06
    PUSH 0x1                            ; 00540d09
    PUSH 0x596074                       ; 00540d0b | = "Bip01 R ForeArm"
    PUSH ESI                            ; 00540d10
    MOV [0x02dc9ff8],EAX                ; 00540d11 | DAT_02dc9ff8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00540d16
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00540d1b
    PUSH 0x1                            ; 00540d1e
    PUSH 0x596084                       ; 00540d20 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 00540d25
    MOV [0x02dc9ffc],EAX                ; 00540d26 | DAT_02dc9ffc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00540d2b
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00540d30
    PUSH 0x1                            ; 00540d33
    PUSH 0x596095                       ; 00540d35 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 00540d3a
    MOV [0x02dca000],EAX                ; 00540d3b | DAT_02dca000
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00540d40
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00540d45
    MOV [0x02dca004],EAX                ; 00540d48 | DAT_02dca004
    PUSH 0x1                            ; 00540d4d
    PUSH 0x5960a6                       ; 00540d4f | = "Bip01 L Foot"
    PUSH ESI                            ; 00540d54
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00540d55
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00540d5a
    PUSH 0x1                            ; 00540d5d
    PUSH 0x5960b3                       ; 00540d5f | = "Bip01 R Foot"
    PUSH ESI                            ; 00540d64
    MOV [0x02dca008],EAX                ; 00540d65 | DAT_02dca008
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00540d6a
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00540d6f
    PUSH 0x1                            ; 00540d72
    PUSH 0x5960c0                       ; 00540d74 | = "Bip01 L Hand"
    PUSH ESI                            ; 00540d79
    MOV [0x02dca00c],EAX                ; 00540d7a | DAT_02dca00c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00540d7f
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00540d84
    PUSH 0x1                            ; 00540d87
    PUSH 0x5960cd                       ; 00540d89 | = "Bip01 R Hand"
    PUSH ESI                            ; 00540d8e
    MOV [0x02dc9ff0],EAX                ; 00540d8f | DAT_02dc9ff0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00540d94
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00540d99
    PUSH 0x1                            ; 00540d9c
    PUSH 0x5960da                       ; 00540d9e | = "Bip01 Spine"
    PUSH ESI                            ; 00540da3
    MOV [0x02dc9ff4],EAX                ; 00540da4 | DAT_02dc9ff4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00540da9
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00540dae
    PUSH 0x1                            ; 00540db1
    PUSH 0x5960e6                       ; 00540db3 | = "Bip01 Spine1"
    PUSH ESI                            ; 00540db8
    MOV [0x02dca010],EAX                ; 00540db9 | DAT_02dca010
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00540dbe
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00540dc3
    PUSH 0x1                            ; 00540dc6
    PUSH 0x5960f3                       ; 00540dc8 | = "Bip01 Spine2"
    PUSH ESI                            ; 00540dcd
    MOV [0x02dca014],EAX                ; 00540dce | DAT_02dca014
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00540dd3
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00540dd8
    PUSH 0x1                            ; 00540ddb
    PUSH 0x596100                       ; 00540ddd | = "Bip01 Head"
    PUSH ESI                            ; 00540de2
    MOV [0x02dca018],EAX                ; 00540de3 | DAT_02dca018
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00540de8
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00540ded
    PUSH 0x1                            ; 00540df0
    PUSH 0x59610b                       ; 00540df2 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 00540df7
    MOV [0x02dc9fec],EAX                ; 00540df8 | DAT_02dc9fec
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00540dfd
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00540e02
    PUSH 0x1                            ; 00540e05
    PUSH 0x59611c                       ; 00540e07 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 00540e0c
    MOV [0x02dca000],EAX                ; 00540e0d | DAT_02dca000
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00540e12
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00540e17
    MOV [0x02dca004],EAX                ; 00540e1a | DAT_02dca004
    PUSH 0x1                            ; 00540e1f
    PUSH 0x59612d                       ; 00540e21 | = "Bip01 Spine"
    PUSH ESI                            ; 00540e26
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00540e27
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00540e2c
    PUSH 0x1                            ; 00540e2f
    PUSH 0x596139                       ; 00540e31 | = "Bip01 Spine2"
    PUSH ESI                            ; 00540e36
    MOV [0x02dca010],EAX                ; 00540e37 | DAT_02dca010
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 00540e3c
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 00540e41
    PUSH EDI                            ; 00540e44
    MOV [0x02dca018],EAX                ; 00540e45 | DAT_02dca018
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800 ; 00540e4a
        ;   XREF to: 0051b800 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800()
    ADD ESP,0x4                         ; 00540e4f
    PUSH EBP                            ; 00540e52
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800 ; 00540e53
        ;   XREF to: 0051b800 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800()
    FLD float ptr [EBX + 0x7fc]         ; 00540e58
    ADD ESP,0x4                         ; 00540e5e
    FADD float ptr [0x00596148]         ; 00540e61 | FLOAT_00596148
    PUSH EBP                            ; 00540e67
    FSTP float ptr [EBX + 0x7fc]        ; 00540e68
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0 ; 00540e6e
        ;   XREF to: 0051d3c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0()
    ADD ESP,0x4                         ; 00540e73
    PUSH EDI                            ; 00540e76
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0 ; 00540e77
        ;   XREF to: 0051d3c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0()
    ADD ESP,0x4                         ; 00540e7c
    PUSH EBP                            ; 00540e7f
    PUSH 0x0                            ; 00540e80
    LEA ESI,[EBX + 0xe1a4]              ; 00540e82
    PUSH ESI                            ; 00540e88
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170 ; 00540e89
        ;   XREF to: 004e0170 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170()
    ADD ESP,0xc                         ; 00540e8e
    PUSH EDI                            ; 00540e91
    PUSH 0x1                            ; 00540e92
    PUSH ESI                            ; 00540e94
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170 ; 00540e95
        ;   XREF to: 004e0170 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170()
    ADD ESP,0xc                         ; 00540e9a
    XOR EAX,EAX                         ; 00540e9d
    PUSH EAX                            ; 00540e9f
    MOV EDX,dword ptr [EBX + 0xe16c]    ; 00540ea0
    PUSH EDX                            ; 00540ea6
    PUSH 0x1                            ; 00540ea7
    PUSH ESI                            ; 00540ea9
    MOV [0x01cd4314],EAX                ; 00540eaa | DAT_01cd4314
    CALL core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0 ; 00540eaf
        ;   XREF to: 004e02c0 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0()
    ADD ESP,0x10                        ; 00540eb4
    PUSH 0x0                            ; 00540eb7
    MOV EAX,dword ptr [EBX + 0xe16c]    ; 00540eb9
    PUSH EAX                            ; 00540ebf
    MOV ECX,0x1                         ; 00540ec0
    PUSH ECX                            ; 00540ec5
    PUSH ESI                            ; 00540ec6
    MOV dword ptr [0x01cd4314],ECX      ; 00540ec7 | DAT_01cd4314
    CALL core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0 ; 00540ecd
        ;   XREF to: 004e02c0 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0()
    ADD ESP,0x10                        ; 00540ed2
    XOR EDX,EDX                         ; 00540ed5
    PUSH ESI                            ; 00540ed7
    MOV dword ptr [0x01cd4314],EDX      ; 00540ed8 | DAT_01cd4314
    MOV dword ptr [EBX + 0xedcc],EDX    ; 00540ede
    CALL core_morph.cpp_CMorph_getReady_FUN_004e03c0 ; 00540ee4
        ;   XREF to: 004e03c0 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_CMorph_getReady_FUN_004e03c0()
    MOV dword ptr [EBX + 0xe19c],0x0    ; 00540ee9
    MOV dword ptr [EBX + 0xe1a0],0x0    ; 00540ef3
    ADD ESP,0x4                         ; 00540efd
    MOV dword ptr [EBX + 0xe194],0x0    ; 00540f00
    PUSH EDI                            ; 00540f0a
    MOV dword ptr [EBX + 0xe198],0x40a00000 ; 00540f0b
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880 ; 00540f15
        ;   XREF to: 0051b880 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880()
    ADD ESP,0x4                         ; 00540f1a
    PUSH EBP                            ; 00540f1d
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880 ; 00540f1e
        ;   XREF to: 0051b880 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880()
    ADD ESP,0x4                         ; 00540f23
    ADD ESP,0x8                         ; 00540f26
    POP EBP                             ; 00540f29
    POP EDI                             ; 00540f2a
    POP ESI                             ; 00540f2b
    POP EBX                             ; 00540f2c
    RET                                 ; 00540f2d
    PUSH 0x596023                       ; 00540f2e | = "succubusx.dfm"
        ;   Label: LAB_00540f2e
    PUSH EAX                            ; 00540f33
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 00540f34
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    ADD ESP,0x8                         ; 00540f39
    PUSH 0x596031                       ; 00540f3c | = "hotdemonx.dfm"
    JMP 0x00540c5b                      ; 00540f41
        ;   XREF to: 00540c5b (UNCONDITIONAL_JUMP)  ; LAB_00540c5b

