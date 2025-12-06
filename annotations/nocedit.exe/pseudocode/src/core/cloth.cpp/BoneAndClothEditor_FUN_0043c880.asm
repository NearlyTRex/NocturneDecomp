; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_cloth.cpp_BoneAndClothEditor_FUN_0043c880()
;
; Local Variables:
; undefined4       Stack[-0x558]:4  local_558
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
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
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_cloth.cpp_FUN_0043ddf0 at 0043dfd0
;
; Referenced Globals:
;   TerminatedCString s_noc_d_pcx_00618693
;   undefined4 DAT_0065bb3c
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CSpotView* g_CSpotViewPtr = 03f6b9e0
;   undefined4 DAT_00838e40
;   undefined4 DAT_00838e44
;   undefined4 DAT_00838e48
;   undefined4 DAT_00838e4c
;   undefined4 DAT_00838e50
;   ... and 17 more
;
; Called Functions:
;   core_cloth.cpp_FUN_00439710
;   core_cloth.cpp_FUN_0043a2b0
;   core_cloth.cpp_FUN_0043ab80
;   core_cloth.cpp_FUN_0043b7e0
;   core_cloth.cpp_FUN_0043bae0
;   core_cloth.cpp_FUN_0043c6e0
;   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
;   ... and 13 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c880
        ;   Label: core_cloth.cpp_BoneAndClothEditor_FUN_0043c880
    PUSH ESI                            ; 0043c881
    PUSH EDI                            ; 0043c882
    PUSH EBP                            ; 0043c883
    MOV EBP,ESP                         ; 0043c884
    SUB ESP,0x544                       ; 0043c886
    AND ESP,0xfffffff8                  ; 0043c88c
    MOV ESI,dword ptr [EBP + 0x14]      ; 0043c88f
    MOV EDX,0x1                         ; 0043c892
    PUSH 0x1f                           ; 0043c897
    MOV EDI,dword ptr [0x0068416c]      ; 0043c899 | CSpotView * g_CSpotViewPtr
    XOR EAX,EAX                         ; 0043c89f
    MOV dword ptr [ESP + 0x530],EDX     ; 0043c8a1
    MOV dword ptr [ESP + 0x51c],EDX     ; 0043c8a8
    MOV EBX,EDX                         ; 0043c8af
    MOV dword ptr [ESP + 0x508],EDX     ; 0043c8b1
    MOV dword ptr [ESP + 0x50c],EDX     ; 0043c8b8
    MOV dword ptr [ESP + 0x510],EAX     ; 0043c8bf
    MOV dword ptr [ESP + 0x514],EAX     ; 0043c8c6
    MOV dword ptr [ESP + 0x534],EAX     ; 0043c8cd
    MOV [0x00838e48],EAX                ; 0043c8d4 | DAT_00838e48
    MOV [0x00838e44],EAX                ; 0043c8d9 | DAT_00838e44
    MOV [0x00838e40],EAX                ; 0043c8de | DAT_00838e40
    MOV [0x00838e54],EAX                ; 0043c8e3 | DAT_00838e54
    MOV [0x00838e50],EAX                ; 0043c8e8 | DAT_00838e50
    PUSH EDI                            ; 0043c8ed | CSpotView g_CSpotViewInstance
    MOV [0x00838e4c],EAX                ; 0043c8ee | DAT_00838e4c
    XOR EBX,EDX                         ; 0043c8f3
    CALL shape_spotview.cpp_CSpotView_FUN_005b9620 ; 0043c8f5 | void shape_spotview.cpp_CSpotView_FUN_005b9620(CSpotView * this_ptr)
        ;   XREF to: 005b9620 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0043c8fa
    MOV EAX,[0x0067b654]                ; 0043c8fd | CGame * g_CGamePtr
    PUSH EAX                            ; 0043c902 | CGame g_CGameInstance
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 0043c903 | void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * n1, CGame * n2)
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0043c908
    PUSH 0x0                            ; 0043c90b
    PUSH EBX                            ; 0043c90d
    PUSH 0x838e58                       ; 0043c90e | CDeformableModelInstance g_CDeformableModelInstanceInstance
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0 ; 0043c913 | void core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
        ;   XREF to: 0052dde0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0043c918
    PUSH 0x838e58                       ; 0043c91b | CDeformableModelInstance g_CDeformableModelInstanceInstance
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0043c920 | CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0043c925
    PUSH 0x838e58                       ; 0043c928 | CDeformableModelInstance g_CDeformableModelInstanceInstance
    PUSH 0x838e4c                       ; 0043c92d | DAT_00838e4c
    MOV EBX,EAX                         ; 0043c932
    PUSH 0x838e40                       ; 0043c934 | DAT_00838e40
    MOV dword ptr [ESP + 0x530],EAX     ; 0043c939
    MOV EAX,[0x006810c8]                ; 0043c940 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH ESI                            ; 0043c945
    MOV dword ptr [EAX + 0x15ac80],0x1  ; 0043c946 | g_CDemonSetInstance.lighting_quality_mode
    CALL core_cloth.cpp_FUN_00439710    ; 0043c950 | undefined core_cloth.cpp_FUN_00439710()
        ;   XREF to: 00439710 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0043c955
    LEA EAX,[ESI + 0x3ce90]             ; 0043c958
    MOV dword ptr [ESP + 0x514],EAX     ; 0043c95e
    LEA EAX,[ESI + 0x56d8]              ; 0043c965
    ADD EBX,0x968                       ; 0043c96b
    MOV dword ptr [ESP + 0x520],EAX     ; 0043c971
    MOV dword ptr [ESP + 0x4f8],EAX     ; 0043c978
    LEA EAX,[ESI + 0x3fe48]             ; 0043c97f
    MOV dword ptr [ESP + 0x4f4],EBX     ; 0043c985
    MOV dword ptr [ESP + 0x51c],EAX     ; 0043c98c
    MOV EAX,[0x0067b654]                ; 0043c993 | CGame * g_CGamePtr
        ;   Label: LAB_0043c993
    MOV EAX,dword ptr [EAX + 0x264]     ; 0043c998 | g_CGameInstance.delta_time_float
    PUSH 0x838e58                       ; 0043c99e | CDeformableModelInstance g_CDeformableModelInstanceInstance
    MOV dword ptr [ESP + 0x504],EAX     ; 0043c9a3
    MOV dword ptr [ESP + 0x4],EAX       ; 0043c9aa
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0043c9ae | SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0043c9b3
    MOV EDX,dword ptr [ESP + 0x50c]     ; 0043c9b6
    MOV dword ptr [ESP + 0x534],EAX     ; 0043c9bd
    TEST EDX,EDX                        ; 0043c9c4
    JZ 0x0043d413                       ; 0043c9c6 | LAB_0043d413
        ;   XREF to: 0043d413 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x518],0x0     ; 0043c9cc
        ;   Label: LAB_0043c9cc
    JZ 0x0043d48d                       ; 0043c9d4 | LAB_0043d48d
        ;   XREF to: 0043d48d (CONDITIONAL_JUMP)
    PUSH 0x838e58                       ; 0043c9da | CDeformableModelInstance g_CDeformableModelInstanceInstance
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80 ; 0043c9df | void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(CDeformableModelInstance * this_ptr)
        ;   XREF to: 0059df80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0043c9e4
        ;   Label: LAB_0043c9e4
    PUSH 0x838e58                       ; 0043c9e7 | CDeformableModelInstance g_CDeformableModelInstanceInstance
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 ; 0043c9ec | void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance * this_ptr)
        ;   XREF to: 0059fb40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0043c9f1
    MOV EAX,dword ptr [ESP + 0x51c]     ; 0043c9f4
    FLD float ptr [0x0083b0ac]          ; 0043c9fb | g_CDeformableModelInstanceInstance.accumulated_root_motion.x
    FSUBR float ptr [EAX]               ; 0043ca01
    FSTP float ptr [EAX]                ; 0043ca03
    FLD float ptr [0x0083b0b0]          ; 0043ca05 | g_CDeformableModelInstanceInstance.accumulated_root_motion.y
    FSUBR float ptr [EAX + 0x4]         ; 0043ca0b
    XOR EDI,EDI                         ; 0043ca0e
    FSTP float ptr [EAX + 0x4]          ; 0043ca10
    FLD float ptr [0x0083b0b4]          ; 0043ca13 | g_CDeformableModelInstanceInstance.accumulated_root_motion.z
    FSUBR float ptr [EAX + 0x8]         ; 0043ca19
    MOV ECX,dword ptr [ESP + 0x518]     ; 0043ca1c
    FSTP float ptr [EAX + 0x8]          ; 0043ca23
    MOV dword ptr [0x0083b0b4],EDI      ; 0043ca26 | g_CDeformableModelInstanceInstance.accumulated_root_motion.z
    MOV dword ptr [0x0083b0b0],EDI      ; 0043ca2c | g_CDeformableModelInstanceInstance.accumulated_root_motion.y
    MOV dword ptr [0x0083b0ac],EDI      ; 0043ca32 | g_CDeformableModelInstanceInstance.accumulated_root_motion.x
    TEST ECX,ECX                        ; 0043ca38
    JNZ 0x0043d49c                      ; 0043ca3a | LAB_0043d49c
        ;   XREF to: 0043d49c (CONDITIONAL_JUMP)
    PUSH 0x838e58                       ; 0043ca40 | CDeformableModelInstance g_CDeformableModelInstanceInstance
    PUSH 0x0                            ; 0043ca45
    PUSH dword ptr [ESP + 0x8]          ; 0043ca47
    PUSH 0x838e4c                       ; 0043ca4b | DAT_00838e4c
    PUSH 0x838e40                       ; 0043ca50 | DAT_00838e40
    PUSH ESI                            ; 0043ca55
    CALL core_cloth.cpp_FUN_0043ab80    ; 0043ca56 | undefined core_cloth.cpp_FUN_0043ab80()
        ;   XREF to: 0043ab80 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 0043ca5b
    MOV EAX,[0x0067cf44]                ; 0043ca5e | CKeys * g_CKeysPtr
        ;   Label: LAB_0043ca5e
    PUSH EAX                            ; 0043ca63 | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 0043ca64 | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x8]          ; 0043ca66
    ADD ESP,0x4                         ; 0043ca69
    MOV EBX,dword ptr [0x0068416c]      ; 0043ca6c | CSpotView g_CSpotViewInstance | CSpotView * g_CSpotViewPtr
    PUSH EBX                            ; 0043ca72 | CSpotView g_CSpotViewInstance
    CALL shape_spotview.cpp_CSpotView_FUN_005b9a20 ; 0043ca73 | void shape_spotview.cpp_CSpotView_FUN_005b9a20(CSpotView * this_ptr)
        ;   XREF to: 005b9a20 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0043ca78
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0043ca7b | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00679398]                ; 0043ca80 | int g_WindowHeight
    PUSH 0xf8                           ; 0043ca85
    DEC EAX                             ; 0043ca8a
    PUSH EAX                            ; 0043ca8b
    MOV EAX,[0x00679394]                ; 0043ca8c | int g_WindowWidth
    DEC EAX                             ; 0043ca91
    PUSH EAX                            ; 0043ca92
    PUSH 0x0                            ; 0043ca93
    PUSH 0x0                            ; 0043ca95
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 0043ca97 | void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0043ca9c
    CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4 ; 0043ca9f | void wincore_windll.cpp_clearZBuffer_FUN_005b3ed4()
        ;   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)
    PUSH 0x838e40                       ; 0043caa4 | DAT_00838e40
    MOV EDI,dword ptr [0x006703ec]      ; 0043caa9 | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDI                            ; 0043caaf | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 0043cab0 | void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0043cab5
    PUSH 0x0                            ; 0043cab8
    PUSH 0x838e4c                       ; 0043caba | DAT_00838e4c
    MOV EAX,[0x006703ec]                ; 0043cabf | CDemonRenderer * g_CDemonRendererPtr
    PUSH EAX                            ; 0043cac4 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 0043cac5 | void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0043caca
    CMP dword ptr [ESP + 0x508],0x0     ; 0043cacd
    JZ 0x0043caec                       ; 0043cad5 | LAB_0043caec
        ;   XREF to: 0043caec (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0043cad7
    PUSH 0x1                            ; 0043cad9
    PUSH -0x1                           ; 0043cadb
    PUSH -0x1                           ; 0043cadd
    PUSH 0x838e58                       ; 0043cadf | CDeformableModelInstance g_CDeformableModelInstanceInstance
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150 ; 0043cae4 | void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
        ;   XREF to: 005a0150 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0043cae9
    CMP dword ptr [ESP + 0x504],0x0     ; 0043caec
        ;   Label: LAB_0043caec
    JZ 0x0043cb01                       ; 0043caf4 | LAB_0043cb01
        ;   XREF to: 0043cb01 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0043caf6
    PUSH ESI                            ; 0043caf8
    CALL core_cloth.cpp_FUN_0043bae0    ; 0043caf9 | undefined core_cloth.cpp_FUN_0043bae0()
        ;   XREF to: 0043bae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0043cafe
    PUSH 0x3e                           ; 0043cb01
        ;   Label: LAB_0043cb01
    MOV EAX,[0x0067cf44]                ; 0043cb03 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 0043cb08 | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 0043cb09 | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 0043cb0b
    ADD ESP,0x8                         ; 0043cb0e
    TEST EAX,EAX                        ; 0043cb11
    JZ 0x0043cb42                       ; 0043cb13 | LAB_0043cb42
        ;   XREF to: 0043cb42 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x0083b10c]      ; 0043cb15 | undefined4 DAT_0083b10c
    INC EBX                             ; 0043cb1b
    PUSH EBX                            ; 0043cb1c
    PUSH 0x618693                       ; 0043cb1d | = "noc%d.pcx" | s_noc_d_pcx_00618693 = noc%d.pcx
    PUSH 0x83b110                       ; 0043cb22 | DAT_0083b110
    MOV dword ptr [0x0083b10c],EBX      ; 0043cb27 | undefined4 DAT_0083b10c
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0043cb2d | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0043cb32
    PUSH 0x83b110                       ; 0043cb35 | DAT_0083b110
    CALL engine_pcx.c_saveScreenshotGeneral_FUN_005490c0 ; 0043cb3a | void engine_pcx.c_saveScreenshotGeneral_FUN_005490c0(char * filename)
        ;   XREF to: 005490c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0043cb3f
    CMP dword ptr [ESP + 0x510],0x0     ; 0043cb42
        ;   Label: LAB_0043cb42
    JZ 0x0043cc04                       ; 0043cb4a | LAB_0043cc04
        ;   XREF to: 0043cc04 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x00678a60]      ; 0043cb50 | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 0043cb56 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330 ; 0043cb57 | uchar shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(CEditorTools * this_ptr)
        ;   XREF to: 004a1330 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0043cb5c
    MOV [0x02d02570],EAX                ; 0043cb5f | int g_ActiveRenderColor
    XOR ECX,ECX                         ; 0043cb64
    MOV EBX,dword ptr [ESI + 0x3f028]   ; 0043cb66
    MOV dword ptr [ESP + 0x53c],ECX     ; 0043cb6c
    TEST EBX,EBX                        ; 0043cb73
    JLE 0x0043cc04                      ; 0043cb75 | LAB_0043cc04
        ;   XREF to: 0043cc04 (CONDITIONAL_JUMP)
    MOV EDI,ESI                         ; 0043cb7b
    IMUL EAX,dword ptr [EDI + 0x3f02c],0x11c ; 0043cb7d
        ;   Label: LAB_0043cb7d
    MOV ECX,dword ptr [ESP + 0x520]     ; 0043cb87
    LEA EBX,[ESP + 0x4e0]               ; 0043cb8e
    ADD EAX,ECX                         ; 0043cb95
    MOV EDX,dword ptr [0x006703ec]      ; 0043cb97 | CDemonRenderer * g_CDemonRendererPtr
    FLD float ptr [EAX]                 ; 0043cb9d
    FMUL float ptr [0x0065bb3c]         ; 0043cb9f | DAT_0065bb3c
    FISTP dword ptr [EBX]               ; 0043cba5
    FLD float ptr [EAX + 0x4]           ; 0043cba7
    FMUL float ptr [0x0065bb3c]         ; 0043cbaa | DAT_0065bb3c
    FISTP dword ptr [EBX + 0x4]         ; 0043cbb0
    FLD float ptr [EAX + 0x8]           ; 0043cbb3
    FMUL float ptr [0x0065bb3c]         ; 0043cbb6 | DAT_0065bb3c
    FISTP dword ptr [EBX + 0x8]         ; 0043cbbc
    LEA EAX,[ESP + 0x4e0]               ; 0043cbbf
    PUSH EAX                            ; 0043cbc6
    MOV EAX,dword ptr [EDX]             ; 0043cbc7 | CDemonRenderer g_CDemonRendererInstance
    ADD EAX,0xea5d0                     ; 0043cbc9
    PUSH EAX                            ; 0043cbce
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0043cbcf | void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0043cbd4
    PUSH 0x4e1f                         ; 0043cbd7
    CALL core_cloth.cpp_FUN_0043c6e0    ; 0043cbdc | undefined core_cloth.cpp_FUN_0043c6e0()
        ;   XREF to: 0043c6e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0043cbe1
    MOV EBX,dword ptr [ESP + 0x53c]     ; 0043cbe4
    ADD EDI,0x4                         ; 0043cbeb
    INC EBX                             ; 0043cbee
    MOV EDX,dword ptr [ESI + 0x3f028]   ; 0043cbef
    MOV dword ptr [ESP + 0x53c],EBX     ; 0043cbf5
    CMP EBX,EDX                         ; 0043cbfc
    JL 0x0043cb7d                       ; 0043cbfe | LAB_0043cb7d
        ;   XREF to: 0043cb7d (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x52c],0x0     ; 0043cc04
        ;   Label: LAB_0043cc04
    JLE 0x0043cc68                      ; 0043cc0c | LAB_0043cc68
        ;   XREF to: 0043cc68 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESI + 0x3ce8c]   ; 0043cc0e
    XOR EBX,EBX                         ; 0043cc14
    TEST EDI,EDI                        ; 0043cc16
    JLE 0x0043cc68                      ; 0043cc18 | LAB_0043cc68
        ;   XREF to: 0043cc68 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x52c],0x2     ; 0043cc1a
        ;   Label: LAB_0043cc1a
    JNZ 0x0043d526                      ; 0043cc22 | LAB_0043d526
        ;   XREF to: 0043d526 (CONDITIONAL_JUMP)
    CMP EBX,dword ptr [ESP + 0x530]     ; 0043cc28
    JNZ 0x0043d526                      ; 0043cc2f | LAB_0043d526
        ;   XREF to: 0043d526 (CONDITIONAL_JUMP)
    MOV EAX,[0x00678a60]                ; 0043cc35 | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 0043cc3a | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330 ; 0043cc3b | uchar shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(CEditorTools * this_ptr)
        ;   XREF to: 004a1330 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0043cc40
    PUSH EAX                            ; 0043cc43
    MOV EDX,dword ptr [0x006703ec]      ; 0043cc44 | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 0043cc4a | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960 ; 0043cc4b | void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(CDemonRenderer * this_ptr, int color)
        ;   XREF to: 0048c960 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0043cc50
    PUSH 0x1                            ; 0043cc53
    PUSH EBX                            ; 0043cc55
        ;   Label: LAB_0043cc55
    PUSH ESI                            ; 0043cc56
    CALL core_cloth.cpp_FUN_0043b7e0    ; 0043cc57 | undefined core_cloth.cpp_FUN_0043b7e0()
        ;   XREF to: 0043b7e0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0043cc5c
    INC EBX                             ; 0043cc5f
    CMP EBX,dword ptr [ESI + 0x3ce8c]   ; 0043cc60
    JL 0x0043cc1a                       ; 0043cc66 | LAB_0043cc1a
        ;   XREF to: 0043cc1a (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x006703ec]      ; 0043cc68 | CDemonRenderer * g_CDemonRendererPtr
        ;   Label: LAB_0043cc68
    PUSH ECX                            ; 0043cc6e | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 0043cc6f | void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)
    FLD float ptr [ESP + 0x500]         ; 0043d413
        ;   Label: LAB_0043d413
    MOV EDX,dword ptr [0x00838e60]      ; 0043d41a | g_CDeformableModelInstanceInstance.motion_controller.current_frame_number
    FMUL float ptr [EAX + 0x20]         ; 0043d420
    MOV dword ptr [ESP + 0x4ec],EDX     ; 0043d423
    FADD float ptr [ESP + 0x4ec]        ; 0043d42a
    FSTP float ptr [ESP + 0x540]        ; 0043d431
        ;   Label: LAB_0043d431
    MOV EAX,dword ptr [ESP + 0x534]     ; 0043d438
    FLD float ptr [ESP + 0x540]         ; 0043d43f
    FILD dword ptr [EAX + 0x64]         ; 0043d446
    FSTP float ptr [ESP + 0x538]        ; 0043d449
    FCOMP float ptr [ESP + 0x538]       ; 0043d450
    FNSTSW AX                           ; 0043d457
    SAHF                                ; 0043d459
    JBE 0x0043d46c                      ; 0043d45a | LAB_0043d46c
        ;   XREF to: 0043d46c (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x540]         ; 0043d45c
    FSUB float ptr [ESP + 0x538]        ; 0043d463
    JMP 0x0043d431                      ; 0043d46a | LAB_0043d431
        ;   XREF to: 0043d431 (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x534]     ; 0043d46c
        ;   Label: LAB_0043d46c
    PUSH dword ptr [ESP + 0x540]        ; 0043d473
    PUSH ECX                            ; 0043d47a
    PUSH 0x838e58                       ; 0043d47b | CDeformableModelInstance g_CDeformableModelInstanceInstance
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0 ; 0043d480 | void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0(CMotionController * this_ptr, char * motion_name, float frame_number)
        ;   XREF to: 0052ddb0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0043d485
    JMP 0x0043c9cc                      ; 0043d488 | LAB_0043c9cc
        ;   XREF to: 0043c9cc (UNCONDITIONAL_JUMP)
    PUSH 0x838e58                       ; 0043d48d | CDeformableModelInstance g_CDeformableModelInstanceInstance
        ;   Label: LAB_0043d48d
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 0043d492 | void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)
    JMP 0x0043c9e4                      ; 0043d497 | LAB_0043c9e4
        ;   XREF to: 0043c9e4 (UNCONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESI + 0x104]     ; 0043d49c
        ;   Label: LAB_0043d49c
    XOR EDX,EDX                         ; 0043d4a2
    TEST EBX,EBX                        ; 0043d4a4
    JLE 0x0043d4f7                      ; 0043d4a6 | LAB_0043d4f7
        ;   XREF to: 0043d4f7 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x4f8]     ; 0043d4a8
    XOR ECX,ECX                         ; 0043d4af
    ADD EDI,0xc0                        ; 0043d4b1
    MOV EBX,dword ptr [ESI + 0x10c]     ; 0043d4b7
        ;   Label: LAB_0043d4b7
    MOV EAX,EDI                         ; 0043d4bd
    ADD EBX,ECX                         ; 0043d4bf
    INC EDX                             ; 0043d4c1
    FLD float ptr [EAX]                 ; 0043d4c2
    FMUL float ptr [0x0065bb3c]         ; 0043d4c4 | DAT_0065bb3c
    FISTP dword ptr [EBX]               ; 0043d4ca
    FLD float ptr [EAX + 0x4]           ; 0043d4cc
    FMUL float ptr [0x0065bb3c]         ; 0043d4cf | DAT_0065bb3c
    FISTP dword ptr [EBX + 0x4]         ; 0043d4d5
    FLD float ptr [EAX + 0x8]           ; 0043d4d8
    FMUL float ptr [0x0065bb3c]         ; 0043d4db | DAT_0065bb3c
    FISTP dword ptr [EBX + 0x8]         ; 0043d4e1
    ADD EDI,0x11c                       ; 0043d4e4
    MOV EAX,dword ptr [ESI + 0x104]     ; 0043d4ea
    ADD ECX,0xc                         ; 0043d4f0
    CMP EDX,EAX                         ; 0043d4f3
    JL 0x0043d4b7                       ; 0043d4f5 | LAB_0043d4b7
        ;   XREF to: 0043d4b7 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESI + 0x3ce8c]   ; 0043d4f7
        ;   Label: LAB_0043d4f7
    XOR EBX,EBX                         ; 0043d4fd
    TEST EDX,EDX                        ; 0043d4ff
    JLE 0x0043ca5e                      ; 0043d501 | LAB_0043ca5e
        ;   XREF to: 0043ca5e (CONDITIONAL_JUMP)
    PUSH 0x838e58                       ; 0043d507 | CDeformableModelInstance g_CDeformableModelInstanceInstance
        ;   Label: LAB_0043d507
    PUSH EBX                            ; 0043d50c
    PUSH ESI                            ; 0043d50d
    CALL core_cloth.cpp_FUN_0043a2b0    ; 0043d50e | undefined core_cloth.cpp_FUN_0043a2b0()
        ;   XREF to: 0043a2b0 (UNCONDITIONAL_CALL)
    INC EBX                             ; 0043d513
    MOV ECX,dword ptr [ESI + 0x3ce8c]   ; 0043d514
    ADD ESP,0xc                         ; 0043d51a
    CMP EBX,ECX                         ; 0043d51d
    JL 0x0043d507                       ; 0043d51f | LAB_0043d507
        ;   XREF to: 0043d507 (CONDITIONAL_JUMP)
    JMP 0x0043ca5e                      ; 0043d521 | LAB_0043ca5e
        ;   XREF to: 0043ca5e (UNCONDITIONAL_JUMP)
    PUSH 0xff                           ; 0043d526
        ;   Label: LAB_0043d526
    MOV EDI,dword ptr [0x006703ec]      ; 0043d52b | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDI                            ; 0043d531 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960 ; 0043d532 | void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(CDemonRenderer * this_ptr, int color)
        ;   XREF to: 0048c960 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0043d537
    PUSH 0x0                            ; 0043d53a
    JMP 0x0043cc55                      ; 0043d53c | LAB_0043cc55
        ;   XREF to: 0043cc55 (UNCONDITIONAL_JUMP)

