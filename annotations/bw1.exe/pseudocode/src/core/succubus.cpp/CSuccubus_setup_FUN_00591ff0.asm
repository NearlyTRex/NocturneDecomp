; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_succubus_cpp_CSuccubus_setup_FUN_00591ff0(CSuccubus *this_ptr)
;
; Parameters:
; CSuccubus *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_succubusx_dfm_005f722d
;   TerminatedCString s_hotdemonx_dfm_005f723b
;   TerminatedCString s_succubus_dfm_005f7249
;   TerminatedCString s_hotdemon_dfm_005f7256
;   TerminatedCString s_Bip01_Head_005f7263
;   TerminatedCString s_Bip01_L_ForeArm_005f726e
;   TerminatedCString s_Bip01_R_ForeArm_005f727e
;   TerminatedCString s_Bip01_L_UpperArm_005f728e
;   TerminatedCString s_Bip01_R_UpperArm_005f729f
;   TerminatedCString s_Bip01_L_Foot_005f72b0
;   TerminatedCString s_Bip01_R_Foot_005f72bd
;   TerminatedCString s_Bip01_L_Hand_005f72ca
;   TerminatedCString s_Bip01_R_Hand_005f72d7
;   TerminatedCString s_Bip01_Spine_005f72e4
;   TerminatedCString s_Bip01_Spine1_005f72f0
;   ... and 22 more
;
; Called Functions:
;   core_cloth.cpp_CClothList_load_FUN_00441cc0
;   core_cloth.cpp_CClothList_process_FUN_00441fa0
;   core_cloth.cpp_CClothList_setup_FUN_00441f60
;   core_enemy.cpp_CEnemy_setup_FUN_004a0510
;   core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_00523210
;   core_morph.cpp_CMorph_getReady_FUN_00523310
;   core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00591ff0
        ;   Label: core_succubus.cpp_CSuccubus_setup_FUN_00591ff0
    PUSH ESI                            ; 00591ff1
    PUSH EDI                            ; 00591ff2
    PUSH EBP                            ; 00591ff3
    SUB ESP,0x8                         ; 00591ff4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00591ff7
    MOV EDI,dword ptr [0x0061d95c]      ; 00591ffb | g_CGamePtr
    LEA ESI,[EBX + 0xc268]              ; 00592001
    MOV EDX,dword ptr [EDI + 0x18]      ; 00592007 | g_CGameInstance.nudity_flag
    LEA EAX,[EBX + 0x158]               ; 0059200a
    TEST EDX,EDX                        ; 00592010
    JZ 0x005922fe                       ; 00592012
        ;   XREF to: 005922fe (CONDITIONAL_JUMP)  ; LAB_005922fe
    PUSH 0x5f7249                       ; 00592018 | = "succubus.dfm"
    PUSH EAX                            ; 0059201d
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 0059201e
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00592023
    PUSH 0x5f7256                       ; 00592026 | = "hotdemon.dfm"
    PUSH ESI                            ; 0059202b
        ;   Label: LAB_0059202b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 0059202c
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00592031
    PUSH EBX                            ; 00592034
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a0510 ; 00592035
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a0510(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0059203a
    LEA EBP,[EBX + 0x158]               ; 0059203d
    PUSH EBP                            ; 00592043
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20 ; 00592044
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00592049
    LEA EDI,[EBX + 0xc268]              ; 0059204c
    PUSH EDI                            ; 00592052
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20 ; 00592053
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00592058
    LEA ESI,[EBX + 0xe60c]              ; 0059205b
    PUSH ESI                            ; 00592061
    CALL core_cloth.cpp_CClothList_load_FUN_00441cc0 ; 00592062
        ;   XREF to: 00441cc0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_load_FUN_00441cc0(CClothList * this_ptr)
    ADD ESP,0x4                         ; 00592067
    PUSH EDI                            ; 0059206a
    LEA EAX,[EBX + 0x30]                ; 0059206b
    PUSH EAX                            ; 0059206e
    MOV dword ptr [ESP + 0x8],EAX       ; 0059206f
    LEA EAX,[EBX + 0x20]                ; 00592073
    PUSH EAX                            ; 00592076
    PUSH ESI                            ; 00592077
    MOV dword ptr [ESP + 0x14],EAX      ; 00592078
    CALL core_cloth.cpp_CClothList_setup_FUN_00441f60 ; 0059207c
        ;   XREF to: 00441f60 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_setup_FUN_00441f60(CClothList * this_ptr, CVector3f * position, CVector3f * euler, CDeformableModelInstance * model_ptr)
    ADD ESP,0x10                        ; 00592081
    PUSH EDI                            ; 00592084
    PUSH dword ptr [EBX + 0x2504]       ; 00592085
    MOV EDX,dword ptr [ESP + 0x8]       ; 0059208b
    PUSH 0x3d4ccccd                     ; 0059208f
    PUSH EDX                            ; 00592094
    MOV ECX,dword ptr [ESP + 0x14]      ; 00592095
    PUSH ECX                            ; 00592099
    LEA EAX,[EBX + 0x2ca0]              ; 0059209a
    PUSH EAX                            ; 005920a0
    CALL core_cloth.cpp_CClothList_process_FUN_00441fa0 ; 005920a1
        ;   XREF to: 00441fa0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_process_FUN_00441fa0(CClothList * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 005920a6
    PUSH EBP                            ; 005920a9
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 005920aa
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005920af
    PUSH 0x1                            ; 005920b2
    PUSH 0x5f7263                       ; 005920b4 | = "Bip01 Head"
    PUSH EAX                            ; 005920b9
    MOV ESI,EAX                         ; 005920ba
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005920bc
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005920c1
    PUSH 0x1                            ; 005920c4
    PUSH 0x5f726e                       ; 005920c6 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 005920cb
    MOV [0x02c8369c],EAX                ; 005920cc | DAT_02c8369c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005920d1
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005920d6
    PUSH 0x1                            ; 005920d9
    PUSH 0x5f727e                       ; 005920db | = "Bip01 R ForeArm"
    PUSH ESI                            ; 005920e0
    MOV [0x02c836a8],EAX                ; 005920e1 | DAT_02c836a8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005920e6
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005920eb
    PUSH 0x1                            ; 005920ee
    PUSH 0x5f728e                       ; 005920f0 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 005920f5
    MOV [0x02c836ac],EAX                ; 005920f6 | DAT_02c836ac
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005920fb
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00592100
    PUSH 0x1                            ; 00592103
    PUSH 0x5f729f                       ; 00592105 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 0059210a
    MOV [0x02c836b0],EAX                ; 0059210b | DAT_02c836b0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00592110
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00592115
    MOV [0x02c836b4],EAX                ; 00592118 | DAT_02c836b4
    PUSH 0x1                            ; 0059211d
    PUSH 0x5f72b0                       ; 0059211f | = "Bip01 L Foot"
    PUSH ESI                            ; 00592124
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00592125
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0059212a
    PUSH 0x1                            ; 0059212d
    PUSH 0x5f72bd                       ; 0059212f | = "Bip01 R Foot"
    PUSH ESI                            ; 00592134
    MOV [0x02c836b8],EAX                ; 00592135 | DAT_02c836b8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0059213a
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0059213f
    PUSH 0x1                            ; 00592142
    PUSH 0x5f72ca                       ; 00592144 | = "Bip01 L Hand"
    PUSH ESI                            ; 00592149
    MOV [0x02c836bc],EAX                ; 0059214a | DAT_02c836bc
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0059214f
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00592154
    PUSH 0x1                            ; 00592157
    PUSH 0x5f72d7                       ; 00592159 | = "Bip01 R Hand"
    PUSH ESI                            ; 0059215e
    MOV [0x02c836a0],EAX                ; 0059215f | DAT_02c836a0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00592164
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00592169
    PUSH 0x1                            ; 0059216c
    PUSH 0x5f72e4                       ; 0059216e | = "Bip01 Spine"
    PUSH ESI                            ; 00592173
    MOV [0x02c836a4],EAX                ; 00592174 | DAT_02c836a4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00592179
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0059217e
    PUSH 0x1                            ; 00592181
    PUSH 0x5f72f0                       ; 00592183 | = "Bip01 Spine1"
    PUSH ESI                            ; 00592188
    MOV [0x02c836c0],EAX                ; 00592189 | DAT_02c836c0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0059218e
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00592193
    PUSH 0x1                            ; 00592196
    PUSH 0x5f72fd                       ; 00592198 | = "Bip01 Spine2"
    PUSH ESI                            ; 0059219d
    MOV [0x02c836c4],EAX                ; 0059219e | DAT_02c836c4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005921a3
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005921a8
    PUSH 0x1                            ; 005921ab
    PUSH 0x5f730a                       ; 005921ad | = "Bip01 Head"
    PUSH ESI                            ; 005921b2
    MOV [0x02c836c8],EAX                ; 005921b3 | DAT_02c836c8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005921b8
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005921bd
    PUSH 0x1                            ; 005921c0
    PUSH 0x5f7315                       ; 005921c2 | = "Bip01 L UpperArm"
    PUSH ESI                            ; 005921c7
    MOV [0x02c8369c],EAX                ; 005921c8 | DAT_02c8369c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005921cd
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005921d2
    PUSH 0x1                            ; 005921d5
    PUSH 0x5f7326                       ; 005921d7 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 005921dc
    MOV [0x02c836b0],EAX                ; 005921dd | DAT_02c836b0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005921e2
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005921e7
    MOV [0x02c836b4],EAX                ; 005921ea | DAT_02c836b4
    PUSH 0x1                            ; 005921ef
    PUSH 0x5f7337                       ; 005921f1 | = "Bip01 Spine"
    PUSH ESI                            ; 005921f6
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005921f7
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005921fc
    PUSH 0x1                            ; 005921ff
    PUSH 0x5f7343                       ; 00592201 | = "Bip01 Spine2"
    PUSH ESI                            ; 00592206
    MOV [0x02c836c0],EAX                ; 00592207 | DAT_02c836c0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0059220c
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00592211
    PUSH EDI                            ; 00592214
    MOV [0x02c836c8],EAX                ; 00592215 | DAT_02c836c8
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500 ; 0059221a
        ;   XREF to: 00567500 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059221f
    PUSH EBP                            ; 00592222
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500 ; 00592223
        ;   XREF to: 00567500 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500(CDeformableModelInstance * this_ptr)
    FLD float ptr [EBX + 0x804]         ; 00592228
    ADD ESP,0x4                         ; 0059222e
    FADD float ptr [0x005f7352]         ; 00592231 | DAT_005f7352
    PUSH EBP                            ; 00592237
    FSTP float ptr [EBX + 0x804]        ; 00592238
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180 ; 0059223e
        ;   XREF to: 00569180 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00592243
    PUSH EDI                            ; 00592246
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180 ; 00592247
        ;   XREF to: 00569180 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059224c
    PUSH EBP                            ; 0059224f
    PUSH 0x0                            ; 00592250
    LEA ESI,[EBX + 0xe7d8]              ; 00592252
    PUSH ESI                            ; 00592258
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0 ; 00592259
        ;   XREF to: 005230c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 0059225e
    PUSH EDI                            ; 00592261
    PUSH 0x1                            ; 00592262
    PUSH ESI                            ; 00592264
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0 ; 00592265
        ;   XREF to: 005230c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 0059226a
    XOR EAX,EAX                         ; 0059226d
    PUSH EAX                            ; 0059226f
    MOV EDX,dword ptr [EBX + 0xe7a0]    ; 00592270
    PUSH EDX                            ; 00592276
    PUSH 0x1                            ; 00592277
    PUSH ESI                            ; 00592279
    MOV [0x01d39d30],EAX                ; 0059227a | DAT_01d39d30
    CALL core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_00523210 ; 0059227f
        ;   XREF to: 00523210 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_00523210(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index)
    ADD ESP,0x10                        ; 00592284
    PUSH 0x0                            ; 00592287
    MOV EAX,dword ptr [EBX + 0xe7a0]    ; 00592289
    PUSH EAX                            ; 0059228f
    MOV ECX,0x1                         ; 00592290
    PUSH ECX                            ; 00592295
    PUSH ESI                            ; 00592296
    MOV dword ptr [0x01d39d30],ECX      ; 00592297 | DAT_01d39d30
    CALL core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_00523210 ; 0059229d
        ;   XREF to: 00523210 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_00523210(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index)
    ADD ESP,0x10                        ; 005922a2
    XOR EDX,EDX                         ; 005922a5
    PUSH ESI                            ; 005922a7
    MOV dword ptr [0x01d39d30],EDX      ; 005922a8 | DAT_01d39d30
    MOV dword ptr [EBX + 0xf400],EDX    ; 005922ae
    CALL core_morph.cpp_CMorph_getReady_FUN_00523310 ; 005922b4
        ;   XREF to: 00523310 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_getReady_FUN_00523310(CMorph * this_ptr)
    MOV dword ptr [EBX + 0xe7d0],0x0    ; 005922b9
    MOV dword ptr [EBX + 0xe7d4],0x0    ; 005922c3
    ADD ESP,0x4                         ; 005922cd
    MOV dword ptr [EBX + 0xe7c8],0x0    ; 005922d0
    PUSH EDI                            ; 005922da
    MOV dword ptr [EBX + 0xe7cc],0x40a00000 ; 005922db
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580 ; 005922e5
        ;   XREF to: 00567580 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005922ea
    PUSH EBP                            ; 005922ed
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580 ; 005922ee
        ;   XREF to: 00567580 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00567580(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005922f3
    ADD ESP,0x8                         ; 005922f6
    POP EBP                             ; 005922f9
    POP EDI                             ; 005922fa
    POP ESI                             ; 005922fb
    POP EBX                             ; 005922fc
    RET                                 ; 005922fd
    PUSH 0x5f722d                       ; 005922fe | = "succubusx.dfm"
        ;   Label: LAB_005922fe
    PUSH EAX                            ; 00592303
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 00592304
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00592309
    PUSH 0x5f723b                       ; 0059230c | = "hotdemonx.dfm"
    JMP 0x0059202b                      ; 00592311
        ;   XREF to: 0059202b (UNCONDITIONAL_JUMP)  ; LAB_0059202b

