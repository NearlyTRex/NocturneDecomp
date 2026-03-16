; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_water_cpp_CWater_render_FUN_005ea320(CWater *this_ptr,int render_mode)
;
; Parameters:
; CWater *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   render_mode
; Local Variables:
; CVector3f        Stack[-0x6c]:12  local_6c
; CVector3i        Stack[-0x60]:12  local_60
; CVector3i        Stack[-0x54]:12  local_54
; CVector3i        Stack[-0x48]:12  local_48
; CVector3i        Stack[-0x3c]:12  local_3c
; CVector3f        Stack[-0x30]:12  local_30
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 at 0056a3d0
;   core_set.cpp_CDemonSet_renderScene_FUN_0056c1a0 at 0056c5f1
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b481
;
; Referenced Globals:
;   double DOUBLE_00657227 = 3.14159265350000
;   double DOUBLE_0065722f = 0.5
;   double DOUBLE_00657237 = 2
;   double DOUBLE_0065723f = 0.25
;   float FLOAT_006652cc = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CGame* g_CGamePtr = 02d81a9c
;   CDemonSet* g_CDemonSetPtr = 03114278
;   int INT_006844f4 = 0x2000
;   SMRGLTextureBasic[16] g_WaterTextures
;   SMRGLTextureBasic* g_WaterTexturesEnd = 00000000
;   CDemonRenderer g_CDemonRendererInstance
;   int g_GlobalDeltaTimeInt
;   int g_UseExternalRenderer
;   float g_PerspectiveReciprocal
;   ... and 15 more
;
; Called Functions:
;   core_set.cpp_CDemonSet_computeVertexOmniLighting_FUN_0056e3e0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
;   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
;   engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
;   engine_drender.cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ea320
        ;   Label: core_water.cpp_CWater_render_FUN_005ea320
    PUSH ESI                            ; 005ea321
    PUSH EDI                            ; 005ea322
    PUSH EBP                            ; 005ea323
    MOV EBP,ESP                         ; 005ea324
    SUB ESP,0x60                        ; 005ea326
    AND ESP,0xfffffff8                  ; 005ea329
    MOV ESI,dword ptr [EBP + 0x14]      ; 005ea32c
    TEST dword ptr [ESI + 0x4],0x7fffffff ; 005ea32f
    JZ 0x005ea791                       ; 005ea336
        ;   XREF to: 005ea791 (CONDITIONAL_JUMP)  ; LAB_005ea791
    MOV ECX,dword ptr [0x03f875fc]      ; 005ea33c | g_WaterAnimationTimer
    ADD ECX,dword ptr [0x02cf6a80]      ; 005ea342 | g_GlobalDeltaTimeInt
    MOV EBX,dword ptr [0x006844f4]      ; 005ea348 | INT_006844f4
    MOV dword ptr [0x03f875fc],ECX      ; 005ea34e | g_WaterAnimationTimer
    CMP ECX,EBX                         ; 005ea354
    JLE 0x005ea37a                      ; 005ea356
        ;   XREF to: 005ea37a (CONDITIONAL_JUMP)  ; LAB_005ea37a
    MOV EDI,ECX                         ; 005ea358
    MOV EAX,[0x03f87600]                ; 005ea35a | g_WaterCurrentFrame
    SUB EDI,EBX                         ; 005ea35f
    INC EAX                             ; 005ea361
    MOV dword ptr [0x03f875fc],EDI      ; 005ea362 | g_WaterAnimationTimer
    MOV [0x03f87600],EAX                ; 005ea368 | g_WaterCurrentFrame
    CMP EAX,0x10                        ; 005ea36d
    JL 0x005ea37a                       ; 005ea370
        ;   XREF to: 005ea37a (CONDITIONAL_JUMP)  ; LAB_005ea37a
    XOR ECX,ECX                         ; 005ea372
    MOV dword ptr [0x03f87600],ECX      ; 005ea374 | g_WaterCurrentFrame
    MOV EDX,0xffff                      ; 005ea37a
        ;   Label: LAB_005ea37a
    MOV EBX,dword ptr [0x006844f4]      ; 005ea37f | INT_006844f4
    MOV EAX,[0x03f875fc]                ; 005ea385 | g_WaterAnimationTimer
    IMUL EDX                            ; 005ea38a
    IDIV EBX                            ; 005ea38c
    MOV [0x03f8f62c],EAX                ; 005ea38e | INT_03f8f62c
    CMP EAX,0xffff                      ; 005ea393
    JLE 0x005ea798                      ; 005ea398
        ;   XREF to: 005ea798 (CONDITIONAL_JUMP)  ; LAB_005ea798
    MOV dword ptr [0x03f8f62c],0xffff   ; 005ea39e | INT_03f8f62c
    MOV EDX,dword ptr [0x03f87600]      ; 005ea3a8 | g_WaterCurrentFrame
        ;   Label: LAB_005ea3a8
    LEA EAX,[EDX*0x4 + 0x0]             ; 005ea3ae
    SUB EAX,EDX                         ; 005ea3b5
    SHL EAX,0x3                         ; 005ea3b7
    ADD EAX,0x6844f8                    ; 005ea3ba | g_WaterTextures
    PUSH EAX                            ; 005ea3bf | g_WaterTextures
    MOV EAX,[0x006703ec]                ; 005ea3c0 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 005ea3c5 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 005ea3c6
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EAX,[0x0067b654]                ; 005ea3cb | g_CGameInstance | g_CGamePtr
    FLD float ptr [EAX + 0x264]         ; 005ea3d0 | g_CGameInstance.delta_time_float
    FMUL double ptr [0x00657227]        ; 005ea3d6 | DOUBLE_00657227
    FMUL double ptr [0x0065722f]        ; 005ea3dc | DOUBLE_0065722f
    FMUL double ptr [0x00657237]        ; 005ea3e2 | DOUBLE_00657237
    MOV EBX,dword ptr [0x03f87604]      ; 005ea3e8 | g_VisibleWaterTileCount
    XOR EDX,EDX                         ; 005ea3ee
    ADD ESP,0x8                         ; 005ea3f0
    MOV dword ptr [0x02d051f4],EDX      ; 005ea3f3 | g_PerspectiveReciprocal
    FLD float ptr [0x03f8f630]          ; 005ea3f9 | g_WaterAnimationPhase
    FXCH                                ; 005ea3ff
    FADD ST0,ST1                        ; 005ea401
    MOV dword ptr [ESP + 0x54],EDX      ; 005ea403
    FSTP ST1                            ; 005ea407
    FSTP float ptr [0x03f8f630]         ; 005ea409 | g_WaterAnimationPhase
    TEST EBX,EBX                        ; 005ea40f
    JLE 0x005ea791                      ; 005ea411
        ;   XREF to: 005ea791 (CONDITIONAL_JUMP)  ; LAB_005ea791
    MOV dword ptr [ESP + 0x58],EDX      ; 005ea417
    MOV EDI,dword ptr [ESP + 0x58]      ; 005ea41b
        ;   Label: LAB_005ea41b
    MOV EDI,dword ptr [EDI + 0x3f87608] ; 005ea41f | g_VisibleWaterTilesX | DAT_03f8760c
    MOV EAX,dword ptr [ESP + 0x58]      ; 005ea425
    MOV dword ptr [ESP + 0x5c],EDI      ; 005ea429
    MOV EAX,dword ptr [EAX + 0x3f8b608] ; 005ea42d | g_VisibleWaterTilesY | DAT_03f8b60c
    FILD dword ptr [ESP + 0x5c]         ; 005ea433
    FMUL float ptr [ESI + 0x8]          ; 005ea437
    MOV dword ptr [ESP],EAX             ; 005ea43a
    FSTP float ptr [ESP + 0x4]          ; 005ea43d
    MOV EAX,dword ptr [ESI + 0x4]       ; 005ea441
    MOV dword ptr [ESP + 0x8],EAX       ; 005ea444
    MOV EAX,dword ptr [ESP]             ; 005ea448
    MOV dword ptr [ESP + 0x5c],EAX      ; 005ea44b
    FILD dword ptr [ESP + 0x5c]         ; 005ea44f
    FMUL float ptr [ESI + 0x8]          ; 005ea453
    MOV EBX,dword ptr [0x006703ec]      ; 005ea456 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [ESP + 0x4]           ; 005ea45c
    FADD float ptr [0x03f875f0]         ; 005ea460 | FLOAT_03f875f0
    FLD float ptr [ESP + 0x8]           ; 005ea466
    LEA EAX,[ESP + 0x4]                 ; 005ea46a
    FADD float ptr [0x03f875f4]         ; 005ea46e | FLOAT_03f875f4
    PUSH EAX                            ; 005ea474
    FXCH ST2                            ; 005ea475
    FSTP float ptr [ESP + 0x10]         ; 005ea477
    FSTP float ptr [ESP + 0x8]          ; 005ea47b
    FSTP float ptr [ESP + 0xc]          ; 005ea47f
    FLD float ptr [ESP + 0x10]          ; 005ea483
    FADD float ptr [0x03f875f8]         ; 005ea487 | FLOAT_03f875f8
    PUSH EBX                            ; 005ea48d | g_CDemonRendererInstance
    FSTP float ptr [ESP + 0x14]         ; 005ea48e
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 005ea492
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 005ea497
    MOV EAX,dword ptr [ESP + 0x4]       ; 005ea49a
    MOV dword ptr [ESP + 0x40],EAX      ; 005ea49e
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ea4a2
    MOV dword ptr [ESP + 0x44],EAX      ; 005ea4a6
    MOV EAX,dword ptr [ESP + 0xc]       ; 005ea4aa
    MOV dword ptr [ESP + 0x48],EAX      ; 005ea4ae
    XOR EAX,EAX                         ; 005ea4b2
    MOV dword ptr [ESP + 0x4],EAX       ; 005ea4b4
    MOV dword ptr [ESP + 0x8],EAX       ; 005ea4b8
    MOV dword ptr [ESP + 0xc],EAX       ; 005ea4bc
    CMP dword ptr [ESI],0x0             ; 005ea4c0
    JZ 0x005ea4fc                       ; 005ea4c3
        ;   XREF to: 005ea4fc (CONDITIONAL_JUMP)  ; LAB_005ea4fc
    MOV EAX,dword ptr [ESP]             ; 005ea4c5
    MOV dword ptr [ESP + 0x5c],EAX      ; 005ea4c8
    FLD double ptr [0x00657227]         ; 005ea4cc | DOUBLE_00657227
    FILD dword ptr [ESP + 0x5c]         ; 005ea4d2
    FMUL ST1                            ; 005ea4d6
    FMUL double ptr [0x0065722f]        ; 005ea4d8 | DOUBLE_0065722f
    MOV dword ptr [ESP + 0x5c],EDI      ; 005ea4de
    FILD dword ptr [ESP + 0x5c]         ; 005ea4e2
    FMULP ST2                           ; 005ea4e6
    FADDP                               ; 005ea4e8
    FADD float ptr [0x03f8f630]         ; 005ea4ea | g_WaterAnimationPhase
    FSIN                                ; 005ea4f0
    FMUL double ptr [0x0065723f]        ; 005ea4f2 | DOUBLE_0065723f
    FSTP float ptr [ESP + 0x8]          ; 005ea4f8
    LEA EBX,[ESP + 0x10]                ; 005ea4fc
        ;   Label: LAB_005ea4fc
    LEA EAX,[ESP + 0x4]                 ; 005ea500
    MOV EDX,dword ptr [0x006703ec]      ; 005ea504 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 005ea50a
    FMUL float ptr [0x006652cc]         ; 005ea50c | FLOAT_006652cc
    FISTP dword ptr [EBX]               ; 005ea512
    FLD float ptr [EAX + 0x4]           ; 005ea514
    FMUL float ptr [0x006652cc]         ; 005ea517 | FLOAT_006652cc
    FISTP dword ptr [EBX + 0x4]         ; 005ea51d
    FLD float ptr [EAX + 0x8]           ; 005ea520
    FMUL float ptr [0x006652cc]         ; 005ea523 | FLOAT_006652cc
    FISTP dword ptr [EBX + 0x8]         ; 005ea529
    LEA EAX,[ESP + 0x10]                ; 005ea52c
    PUSH EAX                            ; 005ea530
    MOV EAX,dword ptr [EDX]             ; 005ea531 | g_CDemonRendererInstance
    PUSH EAX                            ; 005ea533
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005ea534
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005ea539
    PUSH 0x0                            ; 005ea53c
    LEA EAX,[ESP + 0x44]                ; 005ea53e
    PUSH EAX                            ; 005ea542
    LEA EAX,[ESP + 0xc]                 ; 005ea543
    PUSH EAX                            ; 005ea547
    MOV EAX,[0x006810c8]                ; 005ea548 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 005ea54d | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeVertexOmniLighting_FUN_0056e3e0 ; 005ea54e
        ;   XREF to: 0056e3e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeVertexOmniLighting_FUN_0056e3e0(CDemonSet * this_ptr, CVector3f * vertex_position, CVector3f * position_offset, int vertex_index)
    ADD ESP,0x10                        ; 005ea553
    MOV EAX,dword ptr [ESI + 0x8]       ; 005ea556
    MOV dword ptr [ESP + 0x4],EAX       ; 005ea559
    CMP dword ptr [ESI],0x0             ; 005ea55d
    JZ 0x005ea59c                       ; 005ea560
        ;   XREF to: 005ea59c (CONDITIONAL_JUMP)  ; LAB_005ea59c
    MOV EDX,dword ptr [ESP]             ; 005ea562
    MOV dword ptr [ESP + 0x5c],EDX      ; 005ea565
    FLD double ptr [0x00657227]         ; 005ea569 | DOUBLE_00657227
    FILD dword ptr [ESP + 0x5c]         ; 005ea56f
    FMUL ST1                            ; 005ea573
    LEA EAX,[EDI + 0x1]                 ; 005ea575
    FMUL double ptr [0x0065722f]        ; 005ea578 | DOUBLE_0065722f
    MOV dword ptr [ESP + 0x5c],EAX      ; 005ea57e
    FILD dword ptr [ESP + 0x5c]         ; 005ea582
    FMULP ST2                           ; 005ea586
    FADDP                               ; 005ea588
    FADD float ptr [0x03f8f630]         ; 005ea58a | g_WaterAnimationPhase
    FSIN                                ; 005ea590
    FMUL double ptr [0x0065723f]        ; 005ea592 | DOUBLE_0065723f
    FSTP float ptr [ESP + 0x8]          ; 005ea598
    LEA EBX,[ESP + 0x1c]                ; 005ea59c
        ;   Label: LAB_005ea59c
    LEA EAX,[ESP + 0x4]                 ; 005ea5a0
    MOV EDX,dword ptr [0x006703ec]      ; 005ea5a4 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 005ea5aa
    FMUL float ptr [0x006652cc]         ; 005ea5ac | FLOAT_006652cc
    FISTP dword ptr [EBX]               ; 005ea5b2
    FLD float ptr [EAX + 0x4]           ; 005ea5b4
    FMUL float ptr [0x006652cc]         ; 005ea5b7 | FLOAT_006652cc
    FISTP dword ptr [EBX + 0x4]         ; 005ea5bd
    FLD float ptr [EAX + 0x8]           ; 005ea5c0
    FMUL float ptr [0x006652cc]         ; 005ea5c3 | FLOAT_006652cc
    FISTP dword ptr [EBX + 0x8]         ; 005ea5c9
    LEA EAX,[ESP + 0x1c]                ; 005ea5cc
    PUSH EAX                            ; 005ea5d0
    MOV EAX,dword ptr [EDX]             ; 005ea5d1 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 005ea5d3
    PUSH EAX                            ; 005ea5d6
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005ea5d7
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005ea5dc
    PUSH 0x1                            ; 005ea5df
    LEA EAX,[ESP + 0x44]                ; 005ea5e1
    PUSH EAX                            ; 005ea5e5
    LEA EAX,[ESP + 0xc]                 ; 005ea5e6
    PUSH EAX                            ; 005ea5ea
    MOV ECX,dword ptr [0x006810c8]      ; 005ea5eb | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 005ea5f1 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeVertexOmniLighting_FUN_0056e3e0 ; 005ea5f2
        ;   XREF to: 0056e3e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeVertexOmniLighting_FUN_0056e3e0(CDemonSet * this_ptr, CVector3f * vertex_position, CVector3f * position_offset, int vertex_index)
    ADD ESP,0x10                        ; 005ea5f7
    MOV EAX,dword ptr [ESI + 0x8]       ; 005ea5fa
    MOV dword ptr [ESP + 0xc],EAX       ; 005ea5fd
    CMP dword ptr [ESI],0x0             ; 005ea601
    JZ 0x005ea641                       ; 005ea604
        ;   XREF to: 005ea641 (CONDITIONAL_JUMP)  ; LAB_005ea641
    MOV EBX,dword ptr [ESP]             ; 005ea606
    INC EBX                             ; 005ea609
    MOV dword ptr [ESP + 0x5c],EBX      ; 005ea60a
    FLD double ptr [0x00657227]         ; 005ea60e | DOUBLE_00657227
    FILD dword ptr [ESP + 0x5c]         ; 005ea614
    FMUL ST1                            ; 005ea618
    LEA EAX,[EDI + 0x1]                 ; 005ea61a
    FMUL double ptr [0x0065722f]        ; 005ea61d | DOUBLE_0065722f
    MOV dword ptr [ESP + 0x5c],EAX      ; 005ea623
    FILD dword ptr [ESP + 0x5c]         ; 005ea627
    FMULP ST2                           ; 005ea62b
    FADDP                               ; 005ea62d
    FADD float ptr [0x03f8f630]         ; 005ea62f | g_WaterAnimationPhase
    FSIN                                ; 005ea635
    FMUL double ptr [0x0065723f]        ; 005ea637 | DOUBLE_0065723f
    FSTP float ptr [ESP + 0x8]          ; 005ea63d
    LEA EBX,[ESP + 0x28]                ; 005ea641
        ;   Label: LAB_005ea641
    LEA EAX,[ESP + 0x4]                 ; 005ea645
    MOV EDX,dword ptr [0x006703ec]      ; 005ea649 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 005ea64f
    FMUL float ptr [0x006652cc]         ; 005ea651 | FLOAT_006652cc
    FISTP dword ptr [EBX]               ; 005ea657
    FLD float ptr [EAX + 0x4]           ; 005ea659
    FMUL float ptr [0x006652cc]         ; 005ea65c | FLOAT_006652cc
    FISTP dword ptr [EBX + 0x4]         ; 005ea662
    FLD float ptr [EAX + 0x8]           ; 005ea665
    FMUL float ptr [0x006652cc]         ; 005ea668 | FLOAT_006652cc
    FISTP dword ptr [EBX + 0x8]         ; 005ea66e
    LEA EAX,[ESP + 0x28]                ; 005ea671
    PUSH EAX                            ; 005ea675
    MOV EAX,dword ptr [EDX]             ; 005ea676 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 005ea678
    PUSH EAX                            ; 005ea67b
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005ea67c
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005ea681
    PUSH 0x2                            ; 005ea684
    LEA EAX,[ESP + 0x44]                ; 005ea686
    PUSH EAX                            ; 005ea68a
    LEA EAX,[ESP + 0xc]                 ; 005ea68b
    PUSH EAX                            ; 005ea68f
    MOV EAX,[0x006810c8]                ; 005ea690 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 005ea695 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeVertexOmniLighting_FUN_0056e3e0 ; 005ea696
        ;   XREF to: 0056e3e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeVertexOmniLighting_FUN_0056e3e0(CDemonSet * this_ptr, CVector3f * vertex_position, CVector3f * position_offset, int vertex_index)
    ADD ESP,0x10                        ; 005ea69b
    XOR EDX,EDX                         ; 005ea69e
    MOV dword ptr [ESP + 0x4],EDX       ; 005ea6a0
    CMP dword ptr [ESI],0x0             ; 005ea6a4
    JZ 0x005ea6e1                       ; 005ea6a7
        ;   XREF to: 005ea6e1 (CONDITIONAL_JUMP)  ; LAB_005ea6e1
    MOV EAX,dword ptr [ESP]             ; 005ea6a9
    INC EAX                             ; 005ea6ac
    MOV dword ptr [ESP + 0x5c],EAX      ; 005ea6ad
    FLD double ptr [0x00657227]         ; 005ea6b1 | DOUBLE_00657227
    FILD dword ptr [ESP + 0x5c]         ; 005ea6b7
    FMUL ST1                            ; 005ea6bb
    FMUL double ptr [0x0065722f]        ; 005ea6bd | DOUBLE_0065722f
    MOV dword ptr [ESP + 0x5c],EDI      ; 005ea6c3
    FILD dword ptr [ESP + 0x5c]         ; 005ea6c7
    FMULP ST2                           ; 005ea6cb
    FADDP                               ; 005ea6cd
    FADD float ptr [0x03f8f630]         ; 005ea6cf | g_WaterAnimationPhase
    FSIN                                ; 005ea6d5
    FMUL double ptr [0x0065723f]        ; 005ea6d7 | DOUBLE_0065723f
    FSTP float ptr [ESP + 0x8]          ; 005ea6dd
    LEA EBX,[ESP + 0x34]                ; 005ea6e1
        ;   Label: LAB_005ea6e1
    LEA EAX,[ESP + 0x4]                 ; 005ea6e5
    MOV EDI,dword ptr [0x006703ec]      ; 005ea6e9 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 005ea6ef
    FMUL float ptr [0x006652cc]         ; 005ea6f1 | FLOAT_006652cc
    FISTP dword ptr [EBX]               ; 005ea6f7
    FLD float ptr [EAX + 0x4]           ; 005ea6f9
    FMUL float ptr [0x006652cc]         ; 005ea6fc | FLOAT_006652cc
    FISTP dword ptr [EBX + 0x4]         ; 005ea702
    FLD float ptr [EAX + 0x8]           ; 005ea705
    FMUL float ptr [0x006652cc]         ; 005ea708 | FLOAT_006652cc
    FISTP dword ptr [EBX + 0x8]         ; 005ea70e
    LEA EAX,[ESP + 0x34]                ; 005ea711
    PUSH EAX                            ; 005ea715
    MOV EAX,dword ptr [EDI]             ; 005ea716 | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 005ea718
    PUSH EAX                            ; 005ea71d
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005ea71e
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005ea723
    PUSH 0x3                            ; 005ea726
    LEA EAX,[ESP + 0x44]                ; 005ea728
    PUSH EAX                            ; 005ea72c
    LEA EAX,[ESP + 0xc]                 ; 005ea72d
    PUSH EAX                            ; 005ea731
    MOV EBX,dword ptr [0x006810c8]      ; 005ea732 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBX                            ; 005ea738 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeVertexOmniLighting_FUN_0056e3e0 ; 005ea739
        ;   XREF to: 0056e3e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeVertexOmniLighting_FUN_0056e3e0(CDemonSet * this_ptr, CVector3f * vertex_position, CVector3f * position_offset, int vertex_index)
    MOV EDI,dword ptr [ESI]             ; 005ea73e
    ADD ESP,0x10                        ; 005ea740
    TEST EDI,EDI                        ; 005ea743
    JZ 0x005ea7ad                       ; 005ea745
        ;   XREF to: 005ea7ad (CONDITIONAL_JUMP)  ; LAB_005ea7ad
    PUSH 0xa000                         ; 005ea747
    MOV EDX,dword ptr [0x006703ec]      ; 005ea74c | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 005ea752 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 005ea753
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 005ea758
    PUSH 0x684678                       ; 005ea75b | g_WaterTexturesEnd
    MOV ECX,dword ptr [0x006703ec]      ; 005ea760 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 005ea766 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0 ; 005ea767
        ;   XREF to: 0048bdc0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 005ea76c
        ;   Label: LAB_005ea76c
    MOV EDI,dword ptr [ESP + 0x58]      ; 005ea76f
    MOV EAX,dword ptr [ESP + 0x54]      ; 005ea773
    MOV EDX,dword ptr [0x03f87604]      ; 005ea777 | g_VisibleWaterTileCount
    ADD EDI,0x4                         ; 005ea77d
    INC EAX                             ; 005ea780
    MOV dword ptr [ESP + 0x58],EDI      ; 005ea781
    MOV dword ptr [ESP + 0x54],EAX      ; 005ea785
    CMP EAX,EDX                         ; 005ea789
    JL 0x005ea41b                       ; 005ea78b
        ;   XREF to: 005ea41b (CONDITIONAL_JUMP)  ; LAB_005ea41b
    MOV ESP,EBP                         ; 005ea791
        ;   Label: LAB_005ea791
    POP EBP                             ; 005ea793
    POP EDI                             ; 005ea794
    POP ESI                             ; 005ea795
    POP EBX                             ; 005ea796
    RET                                 ; 005ea797
    TEST EAX,EAX                        ; 005ea798
        ;   Label: LAB_005ea798
    JGE 0x005ea3a8                      ; 005ea79a
        ;   XREF to: 005ea3a8 (CONDITIONAL_JUMP)  ; LAB_005ea3a8
    XOR EBX,EBX                         ; 005ea7a0
    MOV dword ptr [0x03f8f62c],EBX      ; 005ea7a2 | INT_03f8f62c
    JMP 0x005ea3a8                      ; 005ea7a8
        ;   XREF to: 005ea3a8 (UNCONDITIONAL_JUMP)  ; LAB_005ea3a8
    CMP dword ptr [0x02d03e94],0x0      ; 005ea7ad | g_UseExternalRenderer
        ;   Label: LAB_005ea7ad
    JNZ 0x005ea7cf                      ; 005ea7b4
        ;   XREF to: 005ea7cf (CONDITIONAL_JUMP)  ; LAB_005ea7cf
    CMP dword ptr [EBP + 0x18],0x0      ; 005ea7b6
    JZ 0x005ea7f5                       ; 005ea7ba
        ;   XREF to: 005ea7f5 (CONDITIONAL_JUMP)  ; LAB_005ea7f5
    PUSH 0x684678                       ; 005ea7bc | g_WaterTexturesEnd
    MOV EBX,dword ptr [0x006703ec]      ; 005ea7c1 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EBX                            ; 005ea7c7 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0 ; 005ea7c8
        ;   XREF to: 0048b1e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    JMP 0x005ea76c                      ; 005ea7cd
        ;   XREF to: 005ea76c (UNCONDITIONAL_JUMP)  ; LAB_005ea76c
    PUSH 0x1                            ; 005ea7cf
        ;   Label: LAB_005ea7cf
    MOV EDI,dword ptr [0x006703ec]      ; 005ea7d1 | g_CDemonRendererPtr2
    PUSH EDI                            ; 005ea7d7 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960 ; 005ea7d8
        ;   XREF to: 0048c960 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(CDemonRenderer * this_ptr, int color)
    ADD ESP,0x8                         ; 005ea7dd
    PUSH 0x684678                       ; 005ea7e0 | g_WaterTexturesEnd
    MOV EAX,[0x006703ec]                ; 005ea7e5 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 005ea7ea | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0 ; 005ea7eb
        ;   XREF to: 0048a8a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    JMP 0x005ea76c                      ; 005ea7f0
        ;   XREF to: 005ea76c (UNCONDITIONAL_JUMP)  ; LAB_005ea76c
    PUSH 0x684678                       ; 005ea7f5 | g_WaterTexturesEnd
        ;   Label: LAB_005ea7f5
    MOV ECX,dword ptr [0x006703ec]      ; 005ea7fa | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 005ea800 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420 ; 005ea801
        ;   XREF to: 0048b420 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    JMP 0x005ea76c                      ; 005ea806
        ;   XREF to: 005ea76c (UNCONDITIONAL_JUMP)  ; LAB_005ea76c

