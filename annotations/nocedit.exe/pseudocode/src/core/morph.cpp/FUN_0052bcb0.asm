; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl undefined core_morph.cpp_FUN_0052bcb0()
;
; Local Variables:
; undefined1       Stack[-0x4db8]:1  local_4db8
; undefined1       Stack[-0x2b04]:1  local_2b04
; undefined1       Stack[-0x4a8]:1  local_4a8
; undefined1       Stack[-0x228]:1  local_228
; undefined1       Stack[-0x128]:1  local_128
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 005078a6
;
; Referenced Globals:
;   TerminatedCString s_dfm_0063a498
;   TerminatedCString s_models_0063a49e
;   TerminatedCString s_Select_1st_model_file_0063a4a5
;   TerminatedCString s_dfm_0063a4bb
;   TerminatedCString s_models_0063a4c1
;   TerminatedCString s_Select_2nd_model_file_0063a4c8
;   TerminatedCString s_Loading_0063a4de
;   TerminatedCString s_Can_t_add_any_more_contr_0063a4e9
;   TerminatedCString s_Select_motion_0063a529
;   WatcomTypeInfo g_CBoundingBox3DTypeInfo
;   WatcomTypeInfo g_CDeformableModelInstanceTypeInfo
;   float FLOAT_00661b48 = 0.00390625
;   WatcomTypeInfo g_SMorphControlPointTypeInfo
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   ... and 18 more
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90
;   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
;   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
;   core_morph.cpp_CMorph_getReady_FUN_0052b680
;   core_morph.cpp_CMorphModel_FUN_0052b350
;   core_morph.cpp_freeDeformableModelInstances_FUN_0052ccd0
;   core_morph.cpp_freeMorphControlPoints_FUN_0052ccb0
;   core_morph.cpp_FUN_0052b430
;   core_morph.cpp_FUN_0052bb80
;   core_morph.cpp_FUN_0052ca90
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;   ... and 27 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0052bcb0
        ;   Label: core_morph.cpp_FUN_0052bcb0
    SUB ESP,0x4db4                      ; 0052bcb1
    PUSH 0x65af20                       ; 0052bcb7 | WatcomTypeInfo g_CDeformableModelInstanceTypeInfo
    PUSH 0x2                            ; 0052bcbc
    LEA EAX,[ESP + 0x8]                 ; 0052bcbe
    PUSH EAX                            ; 0052bcc2
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 0052bcc3 | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0052bcc8
    PUSH 0x0                            ; 0052bccb
    LEA EAX,[ESP + 0x4b94]              ; 0052bccd
    PUSH EAX                            ; 0052bcd4
    PUSH 0x63a498                       ; 0052bcd5 | = "*.dfm" | s_dfm_0063a498 = *.dfm
    PUSH 0x63a49e                       ; 0052bcda | = "models" | s_models_0063a49e = models
    PUSH 0x63a4a5                       ; 0052bcdf | = "Select 1st model file" | s_Select_1st_model_file_0063a4a5 = Select 1st model file
    MOV EDX,dword ptr [0x00678a60]      ; 0052bce4 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 0052bcea | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 0052bceb | int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, ...)
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 0052bcf0
    TEST EAX,EAX                        ; 0052bcf3
    JZ 0x0052c0fa                       ; 0052bcf5 | LAB_0052c0fa
        ;   XREF to: 0052c0fa (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x4b90]              ; 0052bcfb
    PUSH EAX                            ; 0052bd02
    LEA EAX,[ESP + 0x4]                 ; 0052bd03
    PUSH EAX                            ; 0052bd07
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 0052bd08 | void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052bd0d
    PUSH 0x0                            ; 0052bd10
    LEA EAX,[ESP + 0x4b94]              ; 0052bd12
    PUSH EAX                            ; 0052bd19
    PUSH 0x63a4bb                       ; 0052bd1a | = "*.dfm" | s_dfm_0063a4bb = *.dfm
    PUSH 0x63a4c1                       ; 0052bd1f | = "models" | s_models_0063a4c1 = models
    PUSH 0x63a4c8                       ; 0052bd24 | = "Select 2nd model file" | s_Select_2nd_model_file_0063a4c8 = Select 2nd model file
    MOV ECX,dword ptr [0x00678a60]      ; 0052bd29 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 0052bd2f | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 0052bd30 | int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, ...)
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 0052bd35
    TEST EAX,EAX                        ; 0052bd38
    JZ 0x0052c0fa                       ; 0052bd3a | LAB_0052c0fa
        ;   XREF to: 0052c0fa (CONDITIONAL_JUMP)
    PUSH EDI                            ; 0052bd40
    PUSH ESI                            ; 0052bd41
    PUSH EBX                            ; 0052bd42
    LEA EAX,[ESP + 0x4b9c]              ; 0052bd43
    PUSH EAX                            ; 0052bd4a
    LEA EAX,[ESP + 0x22c4]              ; 0052bd4b
    PUSH EAX                            ; 0052bd52
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 0052bd53 | void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052bd58
    PUSH 0x63a4de                       ; 0052bd5b | = "Loading..." | s_Loading_0063a4de = Loading...
    MOV EBX,dword ptr [0x00678a60]      ; 0052bd60 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EBX                            ; 0052bd66 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0052bd67 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052bd6c
    LEA EAX,[ESP + 0xc]                 ; 0052bd6f
    PUSH EAX                            ; 0052bd73
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 0052bd74 | void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052bd79
    LEA EAX,[ESP + 0x22c0]              ; 0052bd7c
    PUSH EAX                            ; 0052bd83
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 0052bd84 | void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052bd89
    LEA EAX,[ESP + 0xc]                 ; 0052bd8c
    PUSH EAX                            ; 0052bd90
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 0052bd91 | CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052bd96
    MOV dword ptr [ESP + 0x4d38],EAX    ; 0052bd99
    LEA EAX,[ESP + 0x22c0]              ; 0052bda0
    PUSH EAX                            ; 0052bda7
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 0052bda8 | CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052bdad
    PUSH 0x661b80                       ; 0052bdb0 | WatcomTypeInfo g_SMorphControlPointTypeInfo
    PUSH 0x14                           ; 0052bdb5
    MOV dword ptr [ESP + 0x4d44],EAX    ; 0052bdb7
    LEA EAX,[ESP + 0x4924]              ; 0052bdbe
    PUSH EAX                            ; 0052bdc5
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 0052bdc6 | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0052bdcb
    MOV EAX,[0x006810c8]                ; 0052bdce | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH 0x1f                           ; 0052bdd3
    MOV ESI,dword ptr [0x0068416c]      ; 0052bdd5 | CSpotView * g_CSpotViewPtr
    MOV EDX,dword ptr [EAX + 0x15ac80]  ; 0052bddb | g_CDemonSetInstance.lighting_quality_mode
    PUSH ESI                            ; 0052bde1 | CSpotView g_CSpotViewInstance
    MOV dword ptr [ESP + 0x4d4c],EDX    ; 0052bde2
    MOV dword ptr [EAX + 0x15ac80],0x1  ; 0052bde9 | g_CDemonSetInstance.lighting_quality_mode
    CALL shape_spotview.cpp_CSpotView_FUN_005b9620 ; 0052bdf3 | void shape_spotview.cpp_CSpotView_FUN_005b9620(CSpotView * this_ptr)
        ;   XREF to: 005b9620 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052bdf8
    MOV EDI,dword ptr [0x0067b654]      ; 0052bdfb | CGame * g_CGamePtr
    PUSH EDI                            ; 0052be01 | CGame g_CGameInstance
    XOR EBP,EBP                         ; 0052be02
    MOV EBX,0xffffffff                  ; 0052be04
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 0052be09 | void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * n1, CGame * n2)
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052be0e
    MOV dword ptr [0x02cf6a94],EBP      ; 0052be11 | int g_MouseButtonFlags
    MOV dword ptr [ESP + 0x4d68],EBP    ; 0052be17
    MOV dword ptr [ESP + 0x4d4c],EBP    ; 0052be1e
    MOV dword ptr [ESP + 0x4d58],EBX    ; 0052be25
    MOV dword ptr [ESP + 0x4d54],EBX    ; 0052be2c
    MOV dword ptr [ESP + 0x4d50],EBP    ; 0052be33
    PUSH 0x659900                       ; 0052be3a | WatcomTypeInfo g_CBoundingBox3DTypeInfo
        ;   Label: LAB_0052be3a
    PUSH 0x2                            ; 0052be3f
    LEA EAX,[ESP + 0x4ca4]              ; 0052be41
    PUSH EAX                            ; 0052be48
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 0052be49 | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0052be4e
    XOR EAX,EAX                         ; 0052be51
    XOR EDX,EDX                         ; 0052be53
    MOV dword ptr [ESP + 0x4d94],EAX    ; 0052be55
    LEA EAX,[ESP + 0x4c9c]              ; 0052be5c
    MOV dword ptr [ESP + 0x4d90],EDX    ; 0052be63
    MOV dword ptr [ESP + 0x4d88],EAX    ; 0052be6a
    LEA EAX,[ESP + 0xc]                 ; 0052be71
    MOV dword ptr [ESP + 0x4d7c],EDX    ; 0052be75
    MOV dword ptr [ESP + 0x4d9c],EAX    ; 0052be7c
    IMUL EDI,dword ptr [ESP + 0x4d94],0x22b4 ; 0052be83
        ;   Label: LAB_0052be83
    MOV ESI,dword ptr [ESP + 0x4d9c]    ; 0052be8e
    PUSH ESI                            ; 0052be95
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80 ; 0052be96 | void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(CDeformableModelInstance * this_ptr)
        ;   XREF to: 0059df80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052be9b
    PUSH ESI                            ; 0052be9e
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 ; 0052be9f | void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance * this_ptr)
        ;   XREF to: 0059fb40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052bea4
    PUSH 0x0                            ; 0052bea7
    PUSH ESI                            ; 0052bea9
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0 ; 0052beaa | void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(CDeformableModelInstance * this_ptr, int lod_index)
        ;   XREF to: 005a01d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052beaf
    MOV EAX,dword ptr [ESP + 0x4d90]    ; 0052beb2
    MOV ECX,dword ptr [ESP + EDI*0x1 + 0x2240] ; 0052beb9
    MOV EAX,dword ptr [ESP + EAX*0x1 + 0x4d38] ; 0052bec0
    PUSH ECX                            ; 0052bec7
    MOV EBX,dword ptr [EAX + 0x2c]      ; 0052bec8
    PUSH EBX                            ; 0052becb
    MOV ESI,dword ptr [ESP + 0x4d90]    ; 0052becc
    PUSH ESI                            ; 0052bed3
    CALL core_box.cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90 ; 0052bed4 | void core_box.cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90(CBoundingBox3D * this_ptr, int vertex_count, CVector3i * vertices)
        ;   XREF to: 00420e90 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0052bed9
    XOR ECX,ECX                         ; 0052bedc
    TEST EBP,EBP                        ; 0052bede
    JLE 0x0052bf3c                      ; 0052bee0 | LAB_0052bf3c
        ;   XREF to: 0052bf3c (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x4d7c]    ; 0052bee2
    LEA EAX,[ESP + 0x491c]              ; 0052bee9
    ADD EDX,0x8                         ; 0052bef0
    MOV ESI,dword ptr [ESP + 0x4d90]    ; 0052bef3
    ADD EDX,EAX                         ; 0052befa
    IMUL EBX,dword ptr [ESP + ESI*0x1 + 0x491c],0xc ; 0052befc
        ;   Label: LAB_0052befc
    MOV EAX,dword ptr [ESP + EDI*0x1 + 0x2240] ; 0052bf04
    ADD ESI,0x20                        ; 0052bf0b
    ADD EAX,EBX                         ; 0052bf0e
    MOV EBX,EDX                         ; 0052bf10
    INC ECX                             ; 0052bf12
    FILD dword ptr [EAX]                ; 0052bf13
    FMUL float ptr [0x00661b48]         ; 0052bf15 | float FLOAT_00661b48
    FSTP float ptr [EBX]                ; 0052bf1b
    FILD dword ptr [EAX + 0x4]          ; 0052bf1d
    FMUL float ptr [0x00661b48]         ; 0052bf20 | float FLOAT_00661b48
    FSTP float ptr [EBX + 0x4]          ; 0052bf26
    FILD dword ptr [EAX + 0x8]          ; 0052bf29
    FMUL float ptr [0x00661b48]         ; 0052bf2c | float FLOAT_00661b48
    FSTP float ptr [EBX + 0x8]          ; 0052bf32
    ADD EDX,0x20                        ; 0052bf35
    CMP ECX,EBP                         ; 0052bf38
    JL 0x0052befc                       ; 0052bf3a | LAB_0052befc
        ;   XREF to: 0052befc (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x4d90]    ; 0052bf3c
        ;   Label: LAB_0052bf3c
    MOV EBX,dword ptr [ESP + 0x4d9c]    ; 0052bf43
    MOV ESI,dword ptr [ESP + 0x4d7c]    ; 0052bf4a
    MOV EDI,dword ptr [ESP + 0x4d94]    ; 0052bf51
    MOV EDX,dword ptr [ESP + 0x4d88]    ; 0052bf58
    ADD ECX,0x4                         ; 0052bf5f
    ADD EBX,0x22b4                      ; 0052bf62
    ADD ESI,0xc                         ; 0052bf68
    INC EDI                             ; 0052bf6b
    ADD EDX,0x18                        ; 0052bf6c
    MOV dword ptr [ESP + 0x4d90],ECX    ; 0052bf6f
    MOV dword ptr [ESP + 0x4d9c],EBX    ; 0052bf76
    MOV dword ptr [ESP + 0x4d7c],ESI    ; 0052bf7d
    MOV dword ptr [ESP + 0x4d94],EDI    ; 0052bf84
    MOV dword ptr [ESP + 0x4d88],EDX    ; 0052bf8b
    CMP EDI,0x2                         ; 0052bf92
    JL 0x0052be83                       ; 0052bf95 | LAB_0052be83
        ;   XREF to: 0052be83 (CONDITIONAL_JUMP)
    MOV EAX,[0x00679398]                ; 0052bf9b | int g_WindowHeight
    PUSH 0x4                            ; 0052bfa0
    DEC EAX                             ; 0052bfa2
    PUSH EAX                            ; 0052bfa3
    MOV EAX,[0x00679394]                ; 0052bfa4 | int g_WindowWidth
    DEC EAX                             ; 0052bfa9
    PUSH EAX                            ; 0052bfaa
    PUSH 0x0                            ; 0052bfab
    PUSH 0x0                            ; 0052bfad
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 0052bfaf | void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0052bfb4
    CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4 ; 0052bfb7 | void wincore_windll.cpp_clearZBuffer_FUN_005b3ed4()
        ;   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00679398]                ; 0052bfbc | int g_WindowHeight
    MOV EDX,EAX                         ; 0052bfc1
    SAR EDX,0x1f                        ; 0052bfc3
    SHL EDX,0x2                         ; 0052bfc6
    SBB EAX,EDX                         ; 0052bfc9
    SAR EAX,0x2                         ; 0052bfcb
    MOV EDI,0xffffffff                  ; 0052bfce
    MOV EDX,dword ptr [0x00679398]      ; 0052bfd3 | int g_WindowHeight
    MOV dword ptr [ESP + 0x4d70],EAX    ; 0052bfd9
    ADD EAX,EAX                         ; 0052bfe0
    XOR ESI,ESI                         ; 0052bfe2
    SUB EDX,EAX                         ; 0052bfe4
    LEA EAX,[ESP + 0xc]                 ; 0052bfe6
    MOV dword ptr [ESP + 0x4d6c],EDX    ; 0052bfea
    XOR EDX,EDX                         ; 0052bff1
    MOV dword ptr [ESP + 0x4d84],EAX    ; 0052bff3
    MOV dword ptr [ESP + 0x4dbc],EDX    ; 0052bffa
    MOV dword ptr [ESP + 0x4d80],EDX    ; 0052c001
    MOV EAX,[0x00679394]                ; 0052c008 | int g_WindowWidth
        ;   Label: LAB_0052c008
    MOV EDX,EAX                         ; 0052c00d
    SAR EDX,0x1f                        ; 0052c00f
    SUB EAX,EDX                         ; 0052c012
    SAR EAX,0x1                         ; 0052c014
    MOV EBX,dword ptr [ESP + 0x4d6c]    ; 0052c016
    PUSH EBX                            ; 0052c01d
    PUSH EAX                            ; 0052c01e
    IMUL EAX,ESI                        ; 0052c01f
    MOV EDX,dword ptr [ESP + 0x4d78]    ; 0052c022
    PUSH EDX                            ; 0052c029
    PUSH EAX                            ; 0052c02a
    MOV ECX,dword ptr [0x006703ec]      ; 0052c02b | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH ECX                            ; 0052c031 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890 ; 0052c032 | void engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890(CDemonRenderer * this_ptr, int x, int y, int width, ...)
        ;   XREF to: 0048c890 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0052c037
    MOV EBX,dword ptr [0x0068416c]      ; 0052c03a | CSpotView g_CSpotViewInstance | CSpotView * g_CSpotViewPtr
    PUSH EBX                            ; 0052c040 | CSpotView g_CSpotViewInstance
    CALL shape_spotview.cpp_CSpotView_FUN_005b9a20 ; 0052c041 | void shape_spotview.cpp_CSpotView_FUN_005b9a20(CSpotView * this_ptr)
        ;   XREF to: 005b9a20 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052c046
    PUSH 0x3f87558                      ; 0052c049 | CVector3f g_ZeroVector
    MOV EAX,[0x006703ec]                ; 0052c04e | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EAX                            ; 0052c053 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 0052c054 | void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052c059
    PUSH 0x0                            ; 0052c05c
    MOV EDX,dword ptr [ESP + 0x4d88]    ; 0052c05e
    PUSH EDX                            ; 0052c065
    CALL core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250 ; 0052c066 | void core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250(CDeformableModelInstance * this_ptr, int lod_index)
        ;   XREF to: 005a0250 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02cf6a8c]                ; 0052c06b | int g_MouseX
    SUB EAX,0x5                         ; 0052c070
    ADD ESP,0x8                         ; 0052c073
    SHL EAX,0x10                        ; 0052c076
    MOV dword ptr [ESP + 0x4db0],EAX    ; 0052c079
    MOV EAX,[0x02cf6a8c]                ; 0052c080 | int g_MouseX
    ADD EAX,0x5                         ; 0052c085
    SHL EAX,0x10                        ; 0052c088
    MOV dword ptr [ESP + 0x4da4],EAX    ; 0052c08b
    MOV EAX,[0x02cf6a90]                ; 0052c092 | int g_MouseY
    SUB EAX,0x5                         ; 0052c097
    SHL EAX,0x10                        ; 0052c09a
    MOV dword ptr [ESP + 0x4dac],EAX    ; 0052c09d
    MOV EAX,[0x02cf6a90]                ; 0052c0a4 | int g_MouseY
    ADD EAX,0x5                         ; 0052c0a9
    SHL EAX,0x10                        ; 0052c0ac
    XOR EBX,EBX                         ; 0052c0af
    MOV dword ptr [ESP + 0x4db4],EAX    ; 0052c0b1
    MOV EAX,dword ptr [ESP + 0x4d80]    ; 0052c0b8
    XOR EDX,EDX                         ; 0052c0bf
    MOV dword ptr [ESP + 0x4da8],EAX    ; 0052c0c1
    MOV EAX,dword ptr [ESP + 0x4da8]    ; 0052c0c8
        ;   Label: LAB_0052c0c8
    MOV EAX,dword ptr [ESP + EAX*0x1 + 0x4d38] ; 0052c0cf
    CMP EDX,dword ptr [EAX + 0x2c]      ; 0052c0d6
    JGE 0x0052c110                      ; 0052c0d9 | LAB_0052c110
        ;   XREF to: 0052c110 (CONDITIONAL_JUMP)
    MOV EAX,[0x006703ec]                ; 0052c0db | CDemonRenderer * g_CDemonRendererPtr
    MOV EAX,dword ptr [EAX]             ; 0052c0e0 | CDemonRenderer g_CDemonRendererInstance
    ADD EAX,EBX                         ; 0052c0e2
    MOV ECX,dword ptr [EAX + 0x10]      ; 0052c0e4
    CMP ECX,dword ptr [ESP + 0x4db0]    ; 0052c0e7
    JGE 0x0052c54f                      ; 0052c0ee | LAB_0052c54f
        ;   XREF to: 0052c54f (CONDITIONAL_JUMP)
    INC EDX                             ; 0052c0f4
        ;   Label: LAB_0052c0f4
    ADD EBX,0x30                        ; 0052c0f5
    JMP 0x0052c0c8                      ; 0052c0f8 | LAB_0052c0c8
        ;   XREF to: 0052c0c8 (UNCONDITIONAL_JUMP)
    PUSH EAX                            ; 0052c0fa
        ;   Label: LAB_0052c0fa
    LEA EAX,[ESP + 0x4]                 ; 0052c0fb
    PUSH EAX                            ; 0052c0ff
    CALL core_morph.cpp_freeDeformableModelInstances_FUN_0052ccd0 ; 0052c100 | void core_morph.cpp_freeDeformableModelInstances_FUN_0052ccd0(CDeformableModelInstance * * array)
        ;   XREF to: 0052ccd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052c105
    ADD ESP,0x4db4                      ; 0052c108
    POP EBP                             ; 0052c10e
    RET                                 ; 0052c10f
    MOV EBX,dword ptr [0x006703ec]      ; 0052c110 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
        ;   Label: LAB_0052c110
    PUSH EBX                            ; 0052c116 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480 ; 0052c117 | void engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480(CDemonRenderer * this_ptr)
        ;   XREF to: 0048c8c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052c11c
    INC ESI                             ; 0052c11f
    MOV EAX,dword ptr [ESP + 0x4d80]    ; 0052c120
    MOV EDX,dword ptr [ESP + 0x4d84]    ; 0052c127
    ADD EAX,0x4                         ; 0052c12e
    ADD EDX,0x22b4                      ; 0052c131
    MOV dword ptr [ESP + 0x4d80],EAX    ; 0052c137
    MOV dword ptr [ESP + 0x4d84],EDX    ; 0052c13e
    CMP ESI,0x2                         ; 0052c145
    JL 0x0052c008                       ; 0052c148 | LAB_0052c008
        ;   XREF to: 0052c008 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x4d74],0xffffffff ; 0052c14e
    TEST EDI,EDI                        ; 0052c159
    JL 0x0052c1c9                       ; 0052c15b | LAB_0052c1c9
        ;   XREF to: 0052c1c9 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 0052c15d
    MOV EBX,dword ptr [ESP + 0x4dbc]    ; 0052c162
    MOV EDX,dword ptr [ESP + 0x4dbc]    ; 0052c169
    SUB EAX,EBX                         ; 0052c170
    SHL EDX,0x2                         ; 0052c172
    MOV dword ptr [ESP + 0x4d48],EAX    ; 0052c175
    TEST EBP,EBP                        ; 0052c17c
    JLE 0x0052c1bb                      ; 0052c17e | LAB_0052c1bb
        ;   XREF to: 0052c1bb (CONDITIONAL_JUMP)
    SHL EAX,0x2                         ; 0052c180
    MOV EBX,EBP                         ; 0052c183
    MOV dword ptr [ESP + 0x4d5c],EAX    ; 0052c185
    SHL EBX,0x5                         ; 0052c18c
    XOR EAX,EAX                         ; 0052c18f
    CMP EDI,dword ptr [ESP + EDX*0x1 + 0x491c] ; 0052c191
        ;   Label: LAB_0052c191
    JNZ 0x0052c1b1                      ; 0052c198 | LAB_0052c1b1
        ;   XREF to: 0052c1b1 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x4d5c]    ; 0052c19a
    ADD ECX,EAX                         ; 0052c1a1
    MOV ECX,dword ptr [ESP + ECX*0x1 + 0x491c] ; 0052c1a3
    MOV dword ptr [ESP + 0x4d74],ECX    ; 0052c1aa
    ADD EAX,0x20                        ; 0052c1b1
        ;   Label: LAB_0052c1b1
    ADD EDX,0x20                        ; 0052c1b4
    CMP EAX,EBX                         ; 0052c1b7
    JL 0x0052c191                       ; 0052c1b9 | LAB_0052c191
        ;   XREF to: 0052c191 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x4d74],0x0    ; 0052c1bb
        ;   Label: LAB_0052c1bb
    JL 0x0052c58d                       ; 0052c1c3 | LAB_0052c58d
        ;   XREF to: 0052c58d (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0052c1c9
        ;   Label: LAB_0052c1c9
    MOV dword ptr [ESP + 0x4db8],EAX    ; 0052c1cb
    IMUL EAX,EDI,0x30                   ; 0052c1d2
    MOV EDX,dword ptr [ESP + 0x4d74]    ; 0052c1d5
    MOV dword ptr [ESP + 0x4d60],EAX    ; 0052c1dc
    IMUL EAX,EDX,0x30                   ; 0052c1e3
    XOR ECX,ECX                         ; 0052c1e6
    MOV ESI,0xffffffff                  ; 0052c1e8
    MOV dword ptr [ESP + 0x4d8c],ECX    ; 0052c1ed
    MOV dword ptr [ESP + 0x4d64],EAX    ; 0052c1f4
    LEA EAX,[ESP + 0xc]                 ; 0052c1fb
    MOV dword ptr [ESP + 0x4da0],ESI    ; 0052c1ff
    MOV dword ptr [ESP + 0x4d98],EAX    ; 0052c206
    MOV EAX,[0x00679394]                ; 0052c20d | int g_WindowWidth
        ;   Label: LAB_0052c20d
    MOV EDX,EAX                         ; 0052c212
    SAR EDX,0x1f                        ; 0052c214
    SUB EAX,EDX                         ; 0052c217
    SAR EAX,0x1                         ; 0052c219
    MOV EBX,dword ptr [ESP + 0x4d6c]    ; 0052c21b
    PUSH EBX                            ; 0052c222
    MOV EDX,dword ptr [ESP + 0x4dbc]    ; 0052c223
    PUSH EAX                            ; 0052c22a
    IMUL EAX,EDX                        ; 0052c22b
    MOV ESI,dword ptr [ESP + 0x4d78]    ; 0052c22e
    PUSH ESI                            ; 0052c235
    PUSH EAX                            ; 0052c236
    MOV ECX,dword ptr [0x006703ec]      ; 0052c237 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH ECX                            ; 0052c23d | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890 ; 0052c23e | void engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890(CDemonRenderer * this_ptr, int x, int y, int width, ...)
        ;   XREF to: 0048c890 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0052c243
    MOV EBX,dword ptr [0x0068416c]      ; 0052c246 | CSpotView g_CSpotViewInstance | CSpotView * g_CSpotViewPtr
    PUSH EBX                            ; 0052c24c | CSpotView g_CSpotViewInstance
    CALL shape_spotview.cpp_CSpotView_FUN_005b9a20 ; 0052c24d | void shape_spotview.cpp_CSpotView_FUN_005b9a20(CSpotView * this_ptr)
        ;   XREF to: 005b9a20 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052c252
    PUSH 0x3f87558                      ; 0052c255 | CVector3f g_ZeroVector
    MOV ESI,dword ptr [0x006703ec]      ; 0052c25a | CDemonRenderer * g_CDemonRendererPtr
    PUSH ESI                            ; 0052c260 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 0052c261 | void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052c266
    PUSH 0x0                            ; 0052c269
    MOV EAX,dword ptr [ESP + 0x4d9c]    ; 0052c26b
    PUSH EAX                            ; 0052c272
    CALL core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250 ; 0052c273 | void core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250(CDeformableModelInstance * this_ptr, int lod_index)
        ;   XREF to: 005a0250 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052c278
    MOV EDX,dword ptr [ESP + 0x4d68]    ; 0052c27b
    TEST EDX,EDX                        ; 0052c282
    JZ 0x0052c8a0                       ; 0052c284 | LAB_0052c8a0
        ;   XREF to: 0052c8a0 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x4d98]    ; 0052c28a
    PUSH EBX                            ; 0052c291
    CALL core_skeleton.cpp_CDeformableModelInstance_outlinePolygons_FUN_005a03b0 ; 0052c292 | void core_skeleton.cpp_CDeformableModelInstance_outlinePolygons_FUN_005a03b0(CDeformableModelInstance * this_ptr)
        ;   XREF to: 005a03b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052c297
    MOV ESI,0xff                        ; 0052c29a
        ;   Label: LAB_0052c29a
    XOR EBX,EBX                         ; 0052c29f
    MOV dword ptr [0x02d02570],ESI      ; 0052c2a1 | int g_ActiveRenderColor
    TEST EBP,EBP                        ; 0052c2a7
    JLE 0x0052c2f6                      ; 0052c2a9 | LAB_0052c2f6
        ;   XREF to: 0052c2f6 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x4d8c]    ; 0052c2ab
    MOV EDX,dword ptr [ESP + 0x4dbc]    ; 0052c2b2
        ;   Label: LAB_0052c2b2
    MOV ECX,dword ptr [ESP + 0x4db8]    ; 0052c2b9
    MOV EAX,dword ptr [ESP + ESI*0x1 + 0x491c] ; 0052c2c0
    CMP EDX,ECX                         ; 0052c2c7
    JNZ 0x0052c2d6                      ; 0052c2c9 | LAB_0052c2d6
        ;   XREF to: 0052c2d6 (CONDITIONAL_JUMP)
    CMP EDI,EAX                         ; 0052c2cb
    JNZ 0x0052c2d6                      ; 0052c2cd | LAB_0052c2d6
        ;   XREF to: 0052c2d6 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x4da0],EBX    ; 0052c2cf
    IMUL EAX,EAX,0x30                   ; 0052c2d6
        ;   Label: LAB_0052c2d6
    MOV EDX,dword ptr [0x006703ec]      ; 0052c2d9 | CDemonRenderer * g_CDemonRendererPtr
    MOV EDX,dword ptr [EDX]             ; 0052c2df | CDemonRenderer g_CDemonRendererInstance
    PUSH 0x5                            ; 0052c2e1
    ADD EAX,EDX                         ; 0052c2e3
    PUSH EAX                            ; 0052c2e5
    ADD ESI,0x20                        ; 0052c2e6
    INC EBX                             ; 0052c2e9
    CALL core_morph.cpp_FUN_0052bb80    ; 0052c2ea | undefined core_morph.cpp_FUN_0052bb80()
        ;   XREF to: 0052bb80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052c2ef
    CMP EBX,EBP                         ; 0052c2f2
    JL 0x0052c2b2                       ; 0052c2f4 | LAB_0052c2b2
        ;   XREF to: 0052c2b2 (CONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 0052c2f6
        ;   Label: LAB_0052c2f6
    JL 0x0052c33d                       ; 0052c2f8 | LAB_0052c33d
        ;   XREF to: 0052c33d (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x00678a60]      ; 0052c2fa | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EBX                            ; 0052c300 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330 ; 0052c301 | uchar shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(CEditorTools * this_ptr)
        ;   XREF to: 004a1330 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052c306
    MOV [0x02d02570],EAX                ; 0052c309 | int g_ActiveRenderColor
    MOV EAX,dword ptr [ESP + 0x4dbc]    ; 0052c30e
    CMP EAX,dword ptr [ESP + 0x4db8]    ; 0052c315
    JNZ 0x0052c8b8                      ; 0052c31c | LAB_0052c8b8
        ;   XREF to: 0052c8b8 (CONDITIONAL_JUMP)
    MOV EAX,[0x006703ec]                ; 0052c322 | CDemonRenderer * g_CDemonRendererPtr
    MOV ECX,dword ptr [ESP + 0x4d60]    ; 0052c327
    MOV EAX,dword ptr [EAX]             ; 0052c32e | CDemonRenderer g_CDemonRendererInstance
    PUSH 0x5                            ; 0052c330
    ADD EAX,ECX                         ; 0052c332
    PUSH EAX                            ; 0052c334
        ;   Label: LAB_0052c334
    CALL core_morph.cpp_FUN_0052bb80    ; 0052c335 | undefined core_morph.cpp_FUN_0052bb80()
        ;   XREF to: 0052bb80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052c33a
    MOV EBX,dword ptr [0x006703ec]      ; 0052c33d | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
        ;   Label: LAB_0052c33d
    PUSH EBX                            ; 0052c343 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480 ; 0052c344 | void engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480(CDemonRenderer * this_ptr)
        ;   XREF to: 0048c8c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052c349
    MOV ESI,dword ptr [ESP + 0x4d98]    ; 0052c34c
    MOV EAX,dword ptr [ESP + 0x4d8c]    ; 0052c353
    MOV EDX,dword ptr [ESP + 0x4db8]    ; 0052c35a
    ADD ESI,0x22b4                      ; 0052c361
    ADD EAX,0x4                         ; 0052c367
    INC EDX                             ; 0052c36a
    MOV dword ptr [ESP + 0x4d98],ESI    ; 0052c36b
    MOV dword ptr [ESP + 0x4d8c],EAX    ; 0052c372
    MOV dword ptr [ESP + 0x4db8],EDX    ; 0052c379
    CMP EDX,0x2                         ; 0052c380
    JL 0x0052c20d                       ; 0052c383 | LAB_0052c20d
        ;   XREF to: 0052c20d (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x02cf6a94]      ; 0052c389 | int g_MouseButtonFlags
    CMP EBX,0x1                         ; 0052c38f
    JNZ 0x0052c99d                      ; 0052c392 | LAB_0052c99d
        ;   XREF to: 0052c99d (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x4d4c]    ; 0052c398
    CMP EDX,EBX                         ; 0052c39f
    JNZ 0x0052c8f1                      ; 0052c3a1 | LAB_0052c8f1
        ;   XREF to: 0052c8f1 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x4d58],0x0    ; 0052c3a7
    JL 0x0052c3cf                       ; 0052c3af | LAB_0052c3cf
        ;   XREF to: 0052c3cf (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x4d54]    ; 0052c3b1
    CMP EAX,dword ptr [ESP + 0x4dbc]    ; 0052c3b8
    JNZ 0x0052c3cf                      ; 0052c3bf | LAB_0052c3cf
        ;   XREF to: 0052c3cf (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x4da0],0x0    ; 0052c3c1
    JL 0x0052c8cf                       ; 0052c3c9 | LAB_0052c8cf
        ;   XREF to: 0052c8cf (CONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 0052c3cf
        ;   Label: LAB_0052c3cf
    JL 0x0052c9b5                       ; 0052c3d1 | LAB_0052c9b5
        ;   XREF to: 0052c9b5 (CONDITIONAL_JUMP)
    MOV EAX,[0x02cf6a94]                ; 0052c3d7 | int g_MouseButtonFlags
        ;   Label: LAB_0052c3d7
    MOV dword ptr [ESP + 0x4d4c],EAX    ; 0052c3dc
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0052c3e3 | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [0x0067b654]      ; 0052c3e8 | CGame * g_CGamePtr
    PUSH ESI                            ; 0052c3ee | CGame g_CGameInstance
    CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90 ; 0052c3ef | void core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90(CGame * this_ptr)
        ;   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052c3f4
    PUSH 0x1f                           ; 0052c3f7
    MOV EDI,dword ptr [0x0068416c]      ; 0052c3f9 | CSpotView * g_CSpotViewPtr
    PUSH EDI                            ; 0052c3ff | CSpotView g_CSpotViewInstance
    CALL shape_spotview.cpp_CSpotView_FUN_005b9670 ; 0052c400 | void shape_spotview.cpp_CSpotView_FUN_005b9670(CSpotView * this_ptr)
        ;   XREF to: 005b9670 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052c405
    MOV EAX,[0x0067cf44]                ; 0052c408 | CKeys * g_CKeysPtr
    PUSH 0x1                            ; 0052c40d
    MOV EDX,dword ptr [EAX]             ; 0052c40f | void * g_CKeysPtr
    PUSH EAX                            ; 0052c411 | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 0052c412
    ADD ESP,0x8                         ; 0052c415
    TEST EAX,EAX                        ; 0052c418
    JNZ 0x0052ca4b                      ; 0052c41a | LAB_0052ca4b
        ;   XREF to: 0052ca4b (CONDITIONAL_JUMP)
    PUSH 0x14                           ; 0052c420
    MOV EAX,[0x0067cf44]                ; 0052c422 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 0052c427 | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 0052c428 | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 0052c42a
    ADD ESP,0x8                         ; 0052c42d
    TEST EAX,EAX                        ; 0052c430
    JZ 0x0052c4d1                       ; 0052c432 | LAB_0052c4d1
        ;   XREF to: 0052c4d1 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0xc]                 ; 0052c438
    PUSH EAX                            ; 0052c43c
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80 ; 0052c43d | void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(CDeformableModelInstance * this_ptr)
        ;   XREF to: 0059df80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052c442
    LEA EAX,[ESP + 0x22c0]              ; 0052c445
    PUSH EAX                            ; 0052c44c
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80 ; 0052c44d | void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(CDeformableModelInstance * this_ptr)
        ;   XREF to: 0059df80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052c452
    LEA EAX,[ESP + 0xc]                 ; 0052c455
    PUSH EAX                            ; 0052c459
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 ; 0052c45a | void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance * this_ptr)
        ;   XREF to: 0059fb40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052c45f
    LEA EAX,[ESP + 0x22c0]              ; 0052c462
    PUSH EAX                            ; 0052c469
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 ; 0052c46a | void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance * this_ptr)
        ;   XREF to: 0059fb40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052c46f
    LEA EAX,[ESP + 0xc]                 ; 0052c472
    PUSH EAX                            ; 0052c476
    PUSH 0x0                            ; 0052c477
    MOV EAX,dword ptr [ESP + 0x4dd0]    ; 0052c479
    PUSH EAX                            ; 0052c480
    CALL core_morph.cpp_FUN_0052b430    ; 0052c481 | void core_morph.cpp_FUN_0052b430()
        ;   XREF to: 0052b430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0052c486
    LEA EAX,[ESP + 0x22c0]              ; 0052c489
    PUSH EAX                            ; 0052c490
    PUSH 0x1                            ; 0052c491
    MOV EDX,dword ptr [ESP + 0x4dd0]    ; 0052c493
    PUSH EDX                            ; 0052c49a
    CALL core_morph.cpp_FUN_0052b430    ; 0052c49b | void core_morph.cpp_FUN_0052b430()
        ;   XREF to: 0052b430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0052c4a0
    MOV ECX,dword ptr [ESP + 0x4dc8]    ; 0052c4a3
    PUSH ECX                            ; 0052c4aa
    CALL core_morph.cpp_CMorph_getReady_FUN_0052b680 ; 0052c4ab | void core_morph.cpp_CMorph_getReady_FUN_0052b680(CMorph * this_ptr)
        ;   XREF to: 0052b680 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052c4b0
    LEA EAX,[ESP + 0xc]                 ; 0052c4b3
    PUSH EAX                            ; 0052c4b7
    MOV EBX,dword ptr [ESP + 0x4dcc]    ; 0052c4b8
    PUSH EBX                            ; 0052c4bf
    CALL core_morph.cpp_FUN_0052ca90    ; 0052c4c0 | undefined core_morph.cpp_FUN_0052ca90()
        ;   XREF to: 0052ca90 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052c4c5
    PUSH EBX                            ; 0052c4c8
    CALL core_morph.cpp_CMorphModel_FUN_0052b350 ; 0052c4c9 | void core_morph.cpp_CMorphModel_FUN_0052b350(CMorphModel * this_ptr)
        ;   XREF to: 0052b350 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052c4ce
    PUSH 0x32                           ; 0052c4d1
        ;   Label: LAB_0052c4d1
    MOV EAX,[0x0067cf44]                ; 0052c4d3 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 0052c4d8 | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 0052c4d9 | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 0052c4db
    ADD ESP,0x8                         ; 0052c4de
    TEST EAX,EAX                        ; 0052c4e1
    JZ 0x0052ca17                       ; 0052c4e3 | LAB_0052ca17
        ;   XREF to: 0052ca17 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x4574]              ; 0052c4e9
    PUSH EAX                            ; 0052c4f0
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0052c4f1 | CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052c4f6
    IMUL EDI,dword ptr [ESP + 0x4dbc],0x22b4 ; 0052c4f9
    XOR ESI,ESI                         ; 0052c504
    LEA EAX,[ESP + 0xc]                 ; 0052c506
    XOR EBX,EBX                         ; 0052c50a
    ADD EDI,EAX                         ; 0052c50c
    PUSH EDI                            ; 0052c50e
        ;   Label: LAB_0052c50e
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 0052c50f | CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EAX + 0x964]     ; 0052c514
    ADD ESP,0x4                         ; 0052c51a
    CMP ESI,EDX                         ; 0052c51d
    JGE 0x0052c9cb                      ; 0052c51f | LAB_0052c9cb
        ;   XREF to: 0052c9cb (CONDITIONAL_JUMP)
    PUSH EDI                            ; 0052c525
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 0052c526 | CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
    ADD EAX,0x968                       ; 0052c52b
    ADD ESP,0x4                         ; 0052c530
    ADD EAX,EBX                         ; 0052c533
    PUSH EAX                            ; 0052c535
    LEA EAX,[ESP + 0x4578]              ; 0052c536
    PUSH EAX                            ; 0052c53d
    INC ESI                             ; 0052c53e
    ADD EBX,0x54c                       ; 0052c53f
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0052c545 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052c54a
    JMP 0x0052c50e                      ; 0052c54d | LAB_0052c50e
        ;   XREF to: 0052c50e (UNCONDITIONAL_JUMP)
    CMP ECX,dword ptr [ESP + 0x4da4]    ; 0052c54f
        ;   Label: LAB_0052c54f
    JG 0x0052c0f4                       ; 0052c556 | LAB_0052c0f4
        ;   XREF to: 0052c0f4 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EAX + 0x14]      ; 0052c55c
    CMP ECX,dword ptr [ESP + 0x4dac]    ; 0052c55f
    JL 0x0052c0f4                       ; 0052c566 | LAB_0052c0f4
        ;   XREF to: 0052c0f4 (CONDITIONAL_JUMP)
    MOV EAX,ECX                         ; 0052c56c
    CMP EAX,dword ptr [ESP + 0x4db4]    ; 0052c56e
    JG 0x0052c0f4                       ; 0052c575 | LAB_0052c0f4
        ;   XREF to: 0052c0f4 (CONDITIONAL_JUMP)
    MOV EDI,EDX                         ; 0052c57b
    MOV dword ptr [ESP + 0x4dbc],ESI    ; 0052c57d
    INC EDX                             ; 0052c584
    ADD EBX,0x30                        ; 0052c585
    JMP 0x0052c0c8                      ; 0052c588 | LAB_0052c0c8
        ;   XREF to: 0052c0c8 (UNCONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x4dbc]    ; 0052c58d
        ;   Label: LAB_0052c58d
    IMUL EAX,ESI,0x22b4                 ; 0052c594
    IMUL EDX,EDI,0xc                    ; 0052c59a
    MOV EAX,dword ptr [ESP + EAX*0x1 + 0x2240] ; 0052c59d
    ADD EAX,EDX                         ; 0052c5a4
    IMUL EDX,ESI,0x18                   ; 0052c5a6
    LEA EBX,[ESP + 0x4cf0]              ; 0052c5a9
    FILD dword ptr [EAX]                ; 0052c5b0
    FMUL float ptr [0x00661b48]         ; 0052c5b2 | float FLOAT_00661b48
    FSTP float ptr [EBX]                ; 0052c5b8
    FILD dword ptr [EAX + 0x4]          ; 0052c5ba
    FMUL float ptr [0x00661b48]         ; 0052c5bd | float FLOAT_00661b48
    FSTP float ptr [EBX + 0x4]          ; 0052c5c3
    FILD dword ptr [EAX + 0x8]          ; 0052c5c6
    FMUL float ptr [0x00661b48]         ; 0052c5c9 | float FLOAT_00661b48
    FSTP float ptr [EBX + 0x8]          ; 0052c5cf
    LEA EAX,[ESP + 0x4c9c]              ; 0052c5d2
    MOV ECX,dword ptr [ESP + 0x4d48]    ; 0052c5d9
    ADD EDX,EAX                         ; 0052c5e0
    IMUL EAX,ECX,0x18                   ; 0052c5e2
    FLD float ptr [ESP + 0x4cf4]        ; 0052c5e5
    FLD float ptr [ESP + 0x4cf0]        ; 0052c5ec
    FSUB float ptr [EDX]                ; 0052c5f3
    FLD float ptr [ESP + 0x4cf8]        ; 0052c5f5
    FXCH                                ; 0052c5fc
    FSTP float ptr [ESP + 0x4cf0]       ; 0052c5fe
    FXCH                                ; 0052c605
    FSUB float ptr [EDX + 0x4]          ; 0052c607
    LEA ECX,[ESP + 0x4c9c]              ; 0052c60a
    FSTP float ptr [ESP + 0x4cf4]       ; 0052c611
    ADD EAX,ECX                         ; 0052c618
    FSUB float ptr [EDX + 0x8]          ; 0052c61a
    LEA ECX,[EAX + 0xc]                 ; 0052c61d
    FSTP float ptr [ESP + 0x4cf8]       ; 0052c620
    FLD float ptr [ECX]                 ; 0052c627
    FSUB float ptr [EAX]                ; 0052c629
    FSTP float ptr [ESP + 0x4ccc]       ; 0052c62b
    FLD float ptr [ECX + 0x4]           ; 0052c632
    FSUB float ptr [EAX + 0x4]          ; 0052c635
    FSTP float ptr [ESP + 0x4cd0]       ; 0052c638
    FLD float ptr [ECX + 0x8]           ; 0052c63f
    FSUB float ptr [EAX + 0x8]          ; 0052c642
    LEA EBX,[EDX + 0xc]                 ; 0052c645
    FSTP float ptr [ESP + 0x4cd4]       ; 0052c648
    FLD float ptr [EBX]                 ; 0052c64f
    FSUB float ptr [EDX]                ; 0052c651
    FLD float ptr [ESP + 0x4ccc]        ; 0052c653
    FXCH                                ; 0052c65a
    FSTP float ptr [ESP + 0x4d20]       ; 0052c65c
    FDIV float ptr [ESP + 0x4d20]       ; 0052c663
    FLD float ptr [EBX + 0x4]           ; 0052c66a
    FSUB float ptr [EDX + 0x4]          ; 0052c66d
    FSTP float ptr [ESP + 0x4d24]       ; 0052c670
    FLD float ptr [EBX + 0x8]           ; 0052c677
    FSUB float ptr [EDX + 0x8]          ; 0052c67a
    FXCH                                ; 0052c67d
    FMUL float ptr [ESP + 0x4cf0]       ; 0052c67f
    FXCH                                ; 0052c686
    FSTP float ptr [ESP + 0x4d28]       ; 0052c688
    FSTP float ptr [ESP + 0x4cf0]       ; 0052c68f
    FLD float ptr [ECX]                 ; 0052c696
    FSUB float ptr [EAX]                ; 0052c698
    FSTP float ptr [ESP + 0x4d08]       ; 0052c69a
    FLD float ptr [ECX + 0x4]           ; 0052c6a1
    FSUB float ptr [EAX + 0x4]          ; 0052c6a4
    FSTP float ptr [ESP + 0x4d0c]       ; 0052c6a7
    FLD float ptr [ECX + 0x8]           ; 0052c6ae
    FSUB float ptr [EAX + 0x8]          ; 0052c6b1
    FSTP float ptr [ESP + 0x4d10]       ; 0052c6b4
    FLD float ptr [EBX]                 ; 0052c6bb
    FSUB float ptr [EDX]                ; 0052c6bd
    FSTP float ptr [ESP + 0x4ce4]       ; 0052c6bf
    FLD float ptr [EBX + 0x4]           ; 0052c6c6
    FSUB float ptr [EDX + 0x4]          ; 0052c6c9
    FLD float ptr [ESP + 0x4d0c]        ; 0052c6cc
    FXCH                                ; 0052c6d3
    FSTP float ptr [ESP + 0x4ce8]       ; 0052c6d5
    FDIV float ptr [ESP + 0x4ce8]       ; 0052c6dc
    FLD float ptr [EBX + 0x8]           ; 0052c6e3
    FSUB float ptr [EDX + 0x8]          ; 0052c6e6
    FXCH                                ; 0052c6e9
    FMUL float ptr [ESP + 0x4cf4]       ; 0052c6eb
    FXCH                                ; 0052c6f2
    FSTP float ptr [ESP + 0x4cec]       ; 0052c6f4
    FSTP float ptr [ESP + 0x4cf4]       ; 0052c6fb
    FLD float ptr [ECX]                 ; 0052c702
    FSUB float ptr [EAX]                ; 0052c704
    FSTP float ptr [ESP + 0x4cd8]       ; 0052c706
    FLD float ptr [ECX + 0x4]           ; 0052c70d
    FSUB float ptr [EAX + 0x4]          ; 0052c710
    FSTP float ptr [ESP + 0x4cdc]       ; 0052c713
    FLD float ptr [ECX + 0x8]           ; 0052c71a
    FSUB float ptr [EAX + 0x8]          ; 0052c71d
    FSTP float ptr [ESP + 0x4ce0]       ; 0052c720
    FLD float ptr [EBX]                 ; 0052c727
    FSUB float ptr [EDX]                ; 0052c729
    FSTP float ptr [ESP + 0x4cfc]       ; 0052c72b
    FLD float ptr [EBX + 0x4]           ; 0052c732
    FSUB float ptr [EDX + 0x4]          ; 0052c735
    FSTP float ptr [ESP + 0x4d00]       ; 0052c738
    FLD float ptr [EBX + 0x8]           ; 0052c73f
    FSUB float ptr [EDX + 0x8]          ; 0052c742
    FLD float ptr [ESP + 0x4ce0]        ; 0052c745
    FXCH                                ; 0052c74c
    FSTP float ptr [ESP + 0x4d04]       ; 0052c74e
    FDIV float ptr [ESP + 0x4d04]       ; 0052c755
    FMUL float ptr [ESP + 0x4cf8]       ; 0052c75c
    MOV ESI,0x1                         ; 0052c763
    FLD float ptr [ESP + 0x4cf0]        ; 0052c768
    FLD float ptr [ESP + 0x4cf4]        ; 0052c76f
    MOV EBX,0x7149f2ca                  ; 0052c776
    XOR ECX,ECX                         ; 0052c77b
    MOV dword ptr [ESP + 0x4d40],EBX    ; 0052c77d
    FXCH ST2                            ; 0052c784
    FSTP float ptr [ESP + 0x4cf8]       ; 0052c786
    FADD float ptr [EAX]                ; 0052c78d
    XOR EDX,EDX                         ; 0052c78f
    FSTP float ptr [ESP + 0x4cf0]       ; 0052c791
    FADD float ptr [EAX + 0x4]          ; 0052c798
    FLD float ptr [ESP + 0x4cf8]        ; 0052c79b
    FXCH                                ; 0052c7a2
    FSTP float ptr [ESP + 0x4cf4]       ; 0052c7a4
    FADD float ptr [EAX + 0x8]          ; 0052c7ab
    MOV EAX,dword ptr [ESP + 0x4dbc]    ; 0052c7ae
    FSTP float ptr [ESP + 0x4cf8]       ; 0052c7b5
    SUB ESI,EAX                         ; 0052c7bc
    MOV EAX,dword ptr [ESP + ESI*0x4 + 0x4d38] ; 0052c7be
        ;   Label: LAB_0052c7be
    CMP EDX,dword ptr [EAX + 0x2c]      ; 0052c7c5
    JGE 0x0052c1c9                      ; 0052c7c8 | LAB_0052c1c9
        ;   XREF to: 0052c1c9 (CONDITIONAL_JUMP)
    IMUL EAX,ESI,0x22b4                 ; 0052c7ce
    MOV EAX,dword ptr [ESP + EAX*0x1 + 0x2240] ; 0052c7d4
    LEA EBX,[ESP + 0x4d14]              ; 0052c7db
    ADD EAX,ECX                         ; 0052c7e2
    FILD dword ptr [EAX]                ; 0052c7e4
    FMUL float ptr [0x00661b48]         ; 0052c7e6 | float FLOAT_00661b48
    FSTP float ptr [EBX]                ; 0052c7ec
    FILD dword ptr [EAX + 0x4]          ; 0052c7ee
    FMUL float ptr [0x00661b48]         ; 0052c7f1 | float FLOAT_00661b48
    FSTP float ptr [EBX + 0x4]          ; 0052c7f7
    FILD dword ptr [EAX + 0x8]          ; 0052c7fa
    FMUL float ptr [0x00661b48]         ; 0052c7fd | float FLOAT_00661b48
    FSTP float ptr [EBX + 0x8]          ; 0052c803
    FLD float ptr [ESP + 0x4cf0]        ; 0052c806
    FLD float ptr [ESP + 0x4cf4]        ; 0052c80d
    FSUB float ptr [ESP + 0x4d18]       ; 0052c814
    FXCH                                ; 0052c81b
    FSUB float ptr [ESP + 0x4d14]       ; 0052c81d
    FXCH                                ; 0052c824
    FST float ptr [ESP + 0x4d30]        ; 0052c826
    FMUL float ptr [ESP + 0x4d30]       ; 0052c82d
    FXCH                                ; 0052c834
    FST float ptr [ESP + 0x4d2c]        ; 0052c836
    FMUL float ptr [ESP + 0x4d2c]       ; 0052c83d
    FLD float ptr [ESP + 0x4cf8]        ; 0052c844
    FSUB float ptr [ESP + 0x4d1c]       ; 0052c84b
    FXCH                                ; 0052c852
    FADDP ST2,ST0                       ; 0052c854
    FST float ptr [ESP + 0x4d34]        ; 0052c856
    FMUL float ptr [ESP + 0x4d34]       ; 0052c85d
    FADDP                               ; 0052c864
    FST float ptr [ESP + 0x4d78]        ; 0052c866
    FCOMP float ptr [ESP + 0x4d40]      ; 0052c86d
    FNSTSW AX                           ; 0052c874
    SAHF                                ; 0052c876
    JC 0x0052c882                       ; 0052c877 | LAB_0052c882
        ;   XREF to: 0052c882 (CONDITIONAL_JUMP)
    INC EDX                             ; 0052c879
    ADD ECX,0xc                         ; 0052c87a
    JMP 0x0052c7be                      ; 0052c87d | LAB_0052c7be
        ;   XREF to: 0052c7be (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x4d78]    ; 0052c882
        ;   Label: LAB_0052c882
    MOV dword ptr [ESP + 0x4d74],EDX    ; 0052c889
    MOV dword ptr [ESP + 0x4d40],EAX    ; 0052c890
    INC EDX                             ; 0052c897
    ADD ECX,0xc                         ; 0052c898
    JMP 0x0052c7be                      ; 0052c89b | LAB_0052c7be
        ;   XREF to: 0052c7be (UNCONDITIONAL_JUMP)
    PUSH EDX                            ; 0052c8a0
        ;   Label: LAB_0052c8a0
    PUSH -0x1                           ; 0052c8a1
    MOV ECX,dword ptr [ESP + 0x4da0]    ; 0052c8a3
    PUSH ECX                            ; 0052c8aa
    CALL core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340 ; 0052c8ab | void core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340(CDeformableModelInstance * this_ptr)
        ;   XREF to: 005a0340 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0052c8b0
    JMP 0x0052c29a                      ; 0052c8b3 | LAB_0052c29a
        ;   XREF to: 0052c29a (UNCONDITIONAL_JUMP)
    MOV EAX,[0x006703ec]                ; 0052c8b8 | CDemonRenderer * g_CDemonRendererPtr
        ;   Label: LAB_0052c8b8
    MOV EDX,dword ptr [ESP + 0x4d64]    ; 0052c8bd
    MOV EAX,dword ptr [EAX]             ; 0052c8c4 | CDemonRenderer g_CDemonRendererInstance
    PUSH 0x5                            ; 0052c8c6
    ADD EAX,EDX                         ; 0052c8c8
    JMP 0x0052c334                      ; 0052c8ca | LAB_0052c334
        ;   XREF to: 0052c334 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x4d54]    ; 0052c8cf
        ;   Label: LAB_0052c8cf
    MOV EDX,dword ptr [ESP + 0x4d58]    ; 0052c8d6
    SHL EAX,0x2                         ; 0052c8dd
    SHL EDX,0x5                         ; 0052c8e0
    ADD EAX,EDX                         ; 0052c8e3
    MOV dword ptr [ESP + EAX*0x1 + 0x491c],EDI ; 0052c8e5
    JMP 0x0052c3cf                      ; 0052c8ec | LAB_0052c3cf
        ;   XREF to: 0052c3cf (UNCONDITIONAL_JUMP)
    TEST EDX,EDX                        ; 0052c8f1
        ;   Label: LAB_0052c8f1
    JNZ 0x0052c3cf                      ; 0052c8f3 | LAB_0052c3cf
        ;   XREF to: 0052c3cf (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x4da0]    ; 0052c8f9
    TEST EBX,EBX                        ; 0052c900
    JL 0x0052c91e                       ; 0052c902 | LAB_0052c91e
        ;   XREF to: 0052c91e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x4dbc]    ; 0052c904
    MOV dword ptr [ESP + 0x4d58],EBX    ; 0052c90b
    MOV dword ptr [ESP + 0x4d54],EAX    ; 0052c912
    JMP 0x0052c3cf                      ; 0052c919 | LAB_0052c3cf
        ;   XREF to: 0052c3cf (UNCONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 0052c91e
        ;   Label: LAB_0052c91e
    JL 0x0052c3cf                       ; 0052c920 | LAB_0052c3cf
        ;   XREF to: 0052c3cf (CONDITIONAL_JUMP)
    CMP EBP,0x14                        ; 0052c926
    JL 0x0052c944                       ; 0052c929 | LAB_0052c944
        ;   XREF to: 0052c944 (CONDITIONAL_JUMP)
    PUSH 0x63a4e9                       ; 0052c92b | = "Can't add any more control points.  M..." | s_Can_t_add_any_more_contr_0063a4e9 = Can't add any more control points.  MAX_CONTROL_POINTS reached.
    MOV ESI,dword ptr [0x00678a60]      ; 0052c930 | CEditorTools * g_CEditorToolsPtr
    PUSH ESI                            ; 0052c936 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0052c937 | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052c93c
    JMP 0x0052c3cf                      ; 0052c93f | LAB_0052c3cf
        ;   XREF to: 0052c3cf (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x4dbc]    ; 0052c944
        ;   Label: LAB_0052c944
    MOV ESI,dword ptr [ESP + 0x4d50]    ; 0052c94b
    MOV dword ptr [ESP + 0x4d54],EAX    ; 0052c952
    SHL EAX,0x2                         ; 0052c959
    ADD EAX,ESI                         ; 0052c95c
    MOV EDX,dword ptr [ESP + 0x4dbc]    ; 0052c95e
    MOV dword ptr [ESP + EAX*0x1 + 0x491c],EDI ; 0052c965
    MOV EAX,0x1                         ; 0052c96c
    SUB EAX,EDX                         ; 0052c971
    MOV dword ptr [ESP + 0x4d58],EBP    ; 0052c973
    SHL EAX,0x2                         ; 0052c97a
    INC EBP                             ; 0052c97d
    ADD EAX,ESI                         ; 0052c97e
    MOV EDX,dword ptr [ESP + 0x4d74]    ; 0052c980
    LEA EBX,[ESI + 0x20]                ; 0052c987
    MOV dword ptr [ESP + EAX*0x1 + 0x491c],EDX ; 0052c98a
    MOV dword ptr [ESP + 0x4d50],EBX    ; 0052c991
    JMP 0x0052c3cf                      ; 0052c998 | LAB_0052c3cf
        ;   XREF to: 0052c3cf (UNCONDITIONAL_JUMP)
    MOV ESI,0xffffffff                  ; 0052c99d
        ;   Label: LAB_0052c99d
    MOV dword ptr [ESP + 0x4d58],ESI    ; 0052c9a2
    MOV dword ptr [ESP + 0x4d54],ESI    ; 0052c9a9
    JMP 0x0052c3cf                      ; 0052c9b0 | LAB_0052c3cf
        ;   XREF to: 0052c3cf (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 0052c9b5
        ;   Label: LAB_0052c9b5
    MOV EBX,dword ptr [0x00678a60]      ; 0052c9b7 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EBX                            ; 0052c9bd | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380 ; 0052c9be | void shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380(CEditorTools * this_ptr, bool use_clipping)
        ;   XREF to: 004a1380 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052c9c3
    JMP 0x0052c3d7                      ; 0052c9c6 | LAB_0052c3d7
        ;   XREF to: 0052c3d7 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 0052c9cb
        ;   Label: LAB_0052c9cb
    PUSH -0x1                           ; 0052c9cd
    PUSH 0x63a529                       ; 0052c9cf | = "Select motion" | s_Select_motion_0063a529 = Select motion
    LEA EAX,[ESP + 0x4580]              ; 0052c9d4
    PUSH EAX                            ; 0052c9db
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0052c9dc | int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0052c9e1
    TEST EAX,EAX                        ; 0052c9e4
    JL 0x0052ca05                       ; 0052c9e6 | LAB_0052ca05
        ;   XREF to: 0052ca05 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0052c9e8
    PUSH EAX                            ; 0052c9ea
    LEA EAX,[ESP + 0x457c]              ; 0052c9eb
    PUSH EAX                            ; 0052c9f2
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0052c9f3 | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052c9f8
    PUSH EAX                            ; 0052c9fb
    PUSH EDI                            ; 0052c9fc
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0 ; 0052c9fd | void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0(CMotionController * this_ptr, char * motion_name, float frame_number)
        ;   XREF to: 0052ddb0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0052ca02
    PUSH 0x0                            ; 0052ca05
        ;   Label: LAB_0052ca05
    LEA EAX,[ESP + 0x4578]              ; 0052ca07
    PUSH EAX                            ; 0052ca0e
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0052ca0f | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052ca14
    PUSH 0x18                           ; 0052ca17
        ;   Label: LAB_0052ca17
    MOV EAX,[0x0067cf44]                ; 0052ca19 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 0052ca1e | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 0052ca1f | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 0052ca21
    ADD ESP,0x8                         ; 0052ca24
    TEST EAX,EAX                        ; 0052ca27
    JZ 0x0052be3a                       ; 0052ca29 | LAB_0052be3a
        ;   XREF to: 0052be3a (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x4d68],0x0    ; 0052ca2f
    SETZ AL                             ; 0052ca37
    AND EAX,0xff                        ; 0052ca3a
    MOV dword ptr [ESP + 0x4d68],EAX    ; 0052ca3f
    JMP 0x0052be3a                      ; 0052ca46 | LAB_0052be3a
        ;   XREF to: 0052be3a (UNCONDITIONAL_JUMP)
    MOV EAX,[0x006810c8]                ; 0052ca4b | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
        ;   Label: LAB_0052ca4b
    MOV EDX,dword ptr [ESP + 0x4d44]    ; 0052ca50
    MOV dword ptr [EAX + 0x15ac80],EDX  ; 0052ca57 | g_CDemonSetInstance.lighting_quality_mode
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0052ca5d | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    PUSH 0x0                            ; 0052ca62
    LEA EAX,[ESP + 0x4920]              ; 0052ca64
    PUSH EAX                            ; 0052ca6b
    CALL core_morph.cpp_freeMorphControlPoints_FUN_0052ccb0 ; 0052ca6c | void core_morph.cpp_freeMorphControlPoints_FUN_0052ccb0(SMorphControlPoint * * array)
        ;   XREF to: 0052ccb0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052ca71
    PUSH 0x0                            ; 0052ca74
    LEA EAX,[ESP + 0x10]                ; 0052ca76
    PUSH EAX                            ; 0052ca7a
    CALL core_morph.cpp_freeDeformableModelInstances_FUN_0052ccd0 ; 0052ca7b | void core_morph.cpp_freeDeformableModelInstances_FUN_0052ccd0(CDeformableModelInstance * * array)
        ;   XREF to: 0052ccd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052ca80
    POP EBX                             ; 0052ca83
    POP ESI                             ; 0052ca84
    POP EDI                             ; 0052ca85
    ADD ESP,0x4db4                      ; 0052ca86
    POP EBP                             ; 0052ca8c
    RET                                 ; 0052ca8d

