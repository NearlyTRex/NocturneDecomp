; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSpark_render_FUN_004c0420(CSpark *this_ptr)
;
; Parameters:
; CSpark *         Stack[0x4]:4   this_ptr
; Local Variables:
; float            Stack[-0xd4]:4  fStack_d4
; CVector3i        Stack[-0xd0]:12  local_d0
; CVector3i        Stack[-0xc4]:12  CStack_c4
; float            Stack[-0xb8]:4  local_b8
; float            Stack[-0xb4]:4  local_b4
; float            Stack[-0xac]:4  fStack_ac
; float            Stack[-0xa8]:4  fStack_a8
; float            Stack[-0xa4]:4  fStack_a4
; CVector3i        Stack[-0xa0]:12  local_a0
; CVector3i        Stack[-0x94]:12  CStack_94
; CVector3f        Stack[-0x88]:12  CStack_88
; float            Stack[-0x7c]:4  fStack_7c
; float            Stack[-0x78]:4  fStack_78
; float            Stack[-0x74]:4  fStack_74
; CVector3i        Stack[-0x70]:12  local_70
; CVector3i        Stack[-0x64]:12  local_64
; CVector3i        Stack[-0x58]:12  CStack_58
; CVector3i        Stack[-0x4c]:12  local_4c
; CVector3i[2]     Stack[-0x40]:24  aCStack_40
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  fStack_1c
; float            Stack[-0x18]:4  fStack_18
;
; Referenced Globals:
;   double DOUBLE_00629c73 = 0.700000000000000
;   float FLOAT_0065dca8 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   SMRGLTextureBasic g_FireEffectSparkTexture
;   SMRGLTextureBasic g_FireEffectBlueSparkTexture
;   SMRGLTextureBasic g_FireEffectGreenSparkTexture
;   undefined4 g_RenderVertexBuffer[0].r
;   undefined4 g_RenderVertexBuffer[0].g
;   undefined4 g_RenderVertexBuffer[0].b
;   undefined4 g_RenderVertexBuffer[0].a
;   undefined4 g_RenderVertexBuffer[1].r
;   undefined4 g_RenderVertexBuffer[1].g
;   undefined4 g_RenderVertexBuffer[1].b
;   undefined4 g_RenderVertexBuffer[1].a
;   undefined4 g_RenderVertexBuffer[2].r
;   ... and 12 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   engine_special.cpp_transformAndProjectPoint_FUN_005b575c
;   engine_special.cpp_transformPoint_FUN_005b5a25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0420
        ;   Label: core_fire.cpp_CSpark_render_FUN_004c0420
    PUSH ESI                            ; 004c0421
    PUSH EDI                            ; 004c0422
    PUSH EBP                            ; 004c0423
    MOV EBP,ESP                         ; 004c0424
    SUB ESP,0xc4                        ; 004c0426
    AND ESP,0xfffffff8                  ; 004c042c
    MOV ESI,dword ptr [EBP + 0x14]      ; 004c042f
    MOV EDI,dword ptr [0x006703ec]      ; 004c0432 | g_CDemonRendererPtr2
    LEA EBX,[ESP + 0x74]                ; 004c0438
    MOV EAX,ESI                         ; 004c043c
    MOV EDI,dword ptr [EDI]             ; 004c043e | g_CDemonRendererInstance
    FLD float ptr [EAX]                 ; 004c0440
    FMUL float ptr [0x0065dca8]         ; 004c0442 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c0448
    FLD float ptr [EAX + 0x4]           ; 004c044a
    FMUL float ptr [0x0065dca8]         ; 004c044d | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c0453
    FLD float ptr [EAX + 0x8]           ; 004c0456
    FMUL float ptr [0x0065dca8]         ; 004c0459 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c045f
    LEA EAX,[ESP + 0x74]                ; 004c0462
    PUSH EAX                            ; 004c0466
    MOV EDX,0x3ecccccd                  ; 004c0467
    PUSH EDI                            ; 004c046c
    MOV dword ptr [ESP + 0xc0],EDX      ; 004c046d
    CALL engine_special.cpp_transformPoint_FUN_005b5a25 ; 004c0474
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c0479
    PUSH EDI                            ; 004c047c
    MOV ECX,dword ptr [0x006703ec]      ; 004c047d | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c0483 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50 ; 004c0484
        ;   XREF to: 0048dc50 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 004c0489
    TEST EAX,EAX                        ; 004c048c
    JNZ 0x004c0905                      ; 004c048e
        ;   XREF to: 004c0905 (CONDITIONAL_JUMP)  ; LAB_004c0905
    MOV ESP,EBP                         ; 004c0494
        ;   Label: LAB_004c0494
    POP EBP                             ; 004c0496
    POP EDI                             ; 004c0497
    POP ESI                             ; 004c0498
    POP EBX                             ; 004c0499
    RET                                 ; 004c049a
    PUSH 0x67a7ac                       ; 004c049b | g_FireEffectSparkTexture
        ;   Label: LAB_004c049b
    MOV EDI,dword ptr [0x006703ec]      ; 004c04a0 | g_CDemonRendererPtr2
    PUSH EDI                            ; 004c04a6 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004c04a7
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   Label: LAB_004c04a7
    ADD ESP,0x8                         ; 004c04ac
    PUSH 0x0                            ; 004c04af
        ;   Label: LAB_004c04af
    MOV EAX,[0x00823a74]                ; 004c04b1 | g_CurrentSceneCamera
    PUSH ESI                            ; 004c04b6
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004c04b7
    PUSH EAX                            ; 004c04ba
    CALL dword ptr [EDX + 0x4]          ; 004c04bb
    MOV EDX,0xffff                      ; 004c04be
    MOV ECX,dword ptr [0x02d051f4]      ; 004c04c3 | g_PerspectiveReciprocal
    ADD ESP,0xc                         ; 004c04c9
    MOV EAX,dword ptr [ESI + 0x38]      ; 004c04cc
    SUB EDX,ECX                         ; 004c04cf
    MOV EBX,0xffff                      ; 004c04d1
    IMUL EDX                            ; 004c04d6
    SHRD EAX,EDX,0x10                   ; 004c04d8
    PUSH 0x1                            ; 004c04dc
    MOV [0x00688040],EAX                ; 004c04de | g_RenderVertexBuffer[0].a
    MOV [0x00688070],EAX                ; 004c04e3 | g_RenderVertexBuffer[1].a
    MOV [0x006880a0],EAX                ; 004c04e8 | g_RenderVertexBuffer[2].a
    MOV [0x006880d0],EAX                ; 004c04ed | g_RenderVertexBuffer[3].a
    MOV dword ptr [0x00688034],EBX      ; 004c04f2 | g_RenderVertexBuffer[0].r
    MOV dword ptr [0x00688038],EBX      ; 004c04f8 | g_RenderVertexBuffer[0].g
    MOV dword ptr [0x0068803c],EBX      ; 004c04fe | g_RenderVertexBuffer[0].b
    MOV dword ptr [0x00688064],EBX      ; 004c0504 | g_RenderVertexBuffer[1].r
    MOV dword ptr [0x00688068],EBX      ; 004c050a | g_RenderVertexBuffer[1].g
    MOV dword ptr [0x0068806c],EBX      ; 004c0510 | g_RenderVertexBuffer[1].b
    MOV dword ptr [0x00688094],EBX      ; 004c0516 | g_RenderVertexBuffer[2].r
    MOV dword ptr [0x00688098],EBX      ; 004c051c | g_RenderVertexBuffer[2].g
    MOV dword ptr [0x0068809c],EBX      ; 004c0522 | g_RenderVertexBuffer[2].b
    MOV EAX,[0x006703ec]                ; 004c0528 | g_CDemonRendererPtr2
    MOV dword ptr [0x006880c4],EBX      ; 004c052d | g_RenderVertexBuffer[3].r
    PUSH EAX                            ; 004c0533 | g_CDemonRendererInstance
    MOV dword ptr [0x006880c8],EBX      ; 004c0534 | g_RenderVertexBuffer[3].g
    MOV dword ptr [0x006880cc],EBX      ; 004c053a | g_RenderVertexBuffer[3].b
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c0540
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c0545
    PUSH 0x2d12dcc                      ; 004c0548 | g_BillboardPrimitive
    MOV EDX,dword ptr [0x006703ec]      ; 004c054d | g_CDemonRendererPtr2
    PUSH EDX                            ; 004c0553 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0 ; 004c0554
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004c0559
    PUSH 0x0                            ; 004c055c
    MOV ECX,dword ptr [0x006703ec]      ; 004c055e | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c0564 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c0565
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c056a
    MOV EBX,dword ptr [0x006703ec]      ; 004c056d | g_CDemonRendererPtr2
    PUSH EBX                            ; 004c0573 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 004c0574
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004c0579
    MOV EAX,dword ptr [ESI]             ; 004c057c
    MOV dword ptr [ESP + 0x50],EAX      ; 004c057e
    LEA EAX,[ESI + 0x4]                 ; 004c0582
    MOV EAX,dword ptr [EAX]             ; 004c0585
    MOV dword ptr [ESP + 0x54],EAX      ; 004c0587
    LEA EAX,[ESI + 0x8]                 ; 004c058b
    MOV EAX,dword ptr [EAX]             ; 004c058e
    LEA EDX,[ESI + 0xc]                 ; 004c0590
    MOV dword ptr [ESP + 0x58],EAX      ; 004c0593
    MOV EAX,dword ptr [EDX]             ; 004c0597
    MOV dword ptr [ESP + 0x5c],EAX      ; 004c0599
    LEA EAX,[EDX + 0x4]                 ; 004c059d
    MOV EAX,dword ptr [EAX]             ; 004c05a0
    MOV dword ptr [ESP + 0x60],EAX      ; 004c05a2
    LEA EAX,[EDX + 0x8]                 ; 004c05a6
    MOV EDI,0x3f800000                  ; 004c05a9
    MOV EAX,dword ptr [EAX]             ; 004c05ae
    MOV dword ptr [ESP + 0x4],EDI       ; 004c05b0
    MOV dword ptr [ESP + 0x64],EAX      ; 004c05b4
    MOV EAX,0x3ccccccd                  ; 004c05b8
    XOR EDI,EDI                         ; 004c05bd
    MOV dword ptr [ESP],EAX             ; 004c05bf
    FLD float ptr [ESP]                 ; 004c05c2
        ;   Label: LAB_004c05c2
    FLD ST0                             ; 004c05c5
    FLD double ptr [0x00629c73]         ; 004c05c7 | DOUBLE_00629c73
    FXCH                                ; 004c05cd
    FMUL ST1                            ; 004c05cf
    FLD float ptr [ESP + 0x4]           ; 004c05d1
    FMUL ST2                            ; 004c05d5
    FLD float ptr [ESP + 0x5c]          ; 004c05d7
    FXCH ST2                            ; 004c05db
    FSTP ST4                            ; 004c05dd
    FXCH ST3                            ; 004c05df
    FSTP float ptr [ESP]                ; 004c05e1
    FMUL float ptr [ESP]                ; 004c05e4
    FLD float ptr [ESP]                 ; 004c05e7
    FMUL float ptr [ESI + 0x1c]         ; 004c05ea
    FLD float ptr [ESP + 0x64]          ; 004c05ed
    FXCH                                ; 004c05f1
    FSUBR float ptr [ESP + 0x60]        ; 004c05f3
    FXCH                                ; 004c05f7
    FMUL float ptr [ESP]                ; 004c05f9
    FXCH                                ; 004c05fc
    FST float ptr [ESP + 0x60]          ; 004c05fe
    FMUL float ptr [ESP]                ; 004c0602
    FLD float ptr [ESP + 0x50]          ; 004c0605
    FLD float ptr [ESP + 0x54]          ; 004c0609
    LEA EAX,[ESP + 0x50]                ; 004c060d
    MOV EDX,dword ptr [0x006703ec]      ; 004c0611 | g_CDemonRendererPtr2
    PUSH EAX                            ; 004c0617
    FXCH ST5                            ; 004c0618
    FSTP ST6                            ; 004c061a
    FXCH ST5                            ; 004c061c
    FSTP float ptr [ESP + 0x8]          ; 004c061e
    FLD float ptr [ESP + 0x5c]          ; 004c0622
    PUSH EDX                            ; 004c0626 | g_CDemonRendererInstance
    FXCH ST3                            ; 004c0627
    FSTP float ptr [ESP + 0x34]         ; 004c0629
    FXCH                                ; 004c062d
    FSTP float ptr [ESP + 0x3c]         ; 004c062f
    FXCH ST3                            ; 004c0633
    FSUB float ptr [ESP + 0x34]         ; 004c0635
    FXCH                                ; 004c0639
    FSUB float ptr [ESP + 0x3c]         ; 004c063b
    FXCH                                ; 004c063f
    FSTP float ptr [ESP + 0x58]         ; 004c0641
    FXCH ST2                            ; 004c0645
    FSTP float ptr [ESP + 0x38]         ; 004c0647
    FSUB float ptr [ESP + 0x38]         ; 004c064b
    FXCH                                ; 004c064f
    FSTP float ptr [ESP + 0x60]         ; 004c0651
    FSTP float ptr [ESP + 0x5c]         ; 004c0655
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004c0659
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004c065e
    PUSH 0x0                            ; 004c0661
    PUSH 0x2d12db4                      ; 004c0663 | g_BillboardCameraRight
    MOV ECX,dword ptr [0x006703ec]      ; 004c0668 | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c066e | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0 ; 004c066f
        ;   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004c0674
    XOR EBX,EBX                         ; 004c0677
    FLD float ptr [ESP + 0xb8]          ; 004c0679
    FCHS                                ; 004c0680
    FMUL float ptr [ESP + 0x4]          ; 004c0682
    MOV dword ptr [ESP + 0x28],EBX      ; 004c0686
    FSTP float ptr [ESP + 0x20]         ; 004c068a
    MOV EAX,dword ptr [ESP + 0x20]      ; 004c068e
    LEA EBX,[ESP + 0x80]                ; 004c0692
    MOV dword ptr [ESP + 0xbc],EAX      ; 004c0699
    MOV dword ptr [ESP + 0x24],EAX      ; 004c06a0
    LEA EAX,[ESP + 0x20]                ; 004c06a4
    MOV EDX,dword ptr [0x006703ec]      ; 004c06a8 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c06ae
    FMUL float ptr [0x0065dca8]         ; 004c06b0 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c06b6
    FLD float ptr [EAX + 0x4]           ; 004c06b8
    FMUL float ptr [0x0065dca8]         ; 004c06bb | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c06c1
    FLD float ptr [EAX + 0x8]           ; 004c06c4
    FMUL float ptr [0x0065dca8]         ; 004c06c7 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c06cd
    LEA EAX,[ESP + 0x80]                ; 004c06d0
    PUSH EAX                            ; 004c06d7
    MOV EAX,dword ptr [EDX]             ; 004c06d8 | g_CDemonRendererInstance
    PUSH EAX                            ; 004c06da
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004c06db
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c06e0
    FLD float ptr [ESP + 0xb8]          ; 004c06e3
    FMUL float ptr [ESP + 0x4]          ; 004c06ea
    FSTP float ptr [ESP + 0xc0]         ; 004c06ee
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004c06f5
    MOV dword ptr [ESP + 0x20],EAX      ; 004c06fc
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004c0700
    MOV dword ptr [ESP + 0x24],EAX      ; 004c0707
    XOR EAX,EAX                         ; 004c070b
    MOV EDX,dword ptr [0x006703ec]      ; 004c070d | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x28],EAX      ; 004c0713
    LEA EBX,[ESP + 0x98]                ; 004c0717
    LEA EAX,[ESP + 0x20]                ; 004c071e
    FLD float ptr [EAX]                 ; 004c0722
    FMUL float ptr [0x0065dca8]         ; 004c0724 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c072a
    FLD float ptr [EAX + 0x4]           ; 004c072c
    FMUL float ptr [0x0065dca8]         ; 004c072f | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c0735
    FLD float ptr [EAX + 0x8]           ; 004c0738
    FMUL float ptr [0x0065dca8]         ; 004c073b | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c0741
    LEA EAX,[ESP + 0x98]                ; 004c0744
    PUSH EAX                            ; 004c074b
    MOV EAX,dword ptr [EDX]             ; 004c074c | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004c074e
    PUSH EAX                            ; 004c0751
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004c0752
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x1c]                ; 004c0757
    ADD ESP,0x8                         ; 004c075b
    XOR EDX,EDX                         ; 004c075e
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004c0760
    MOV dword ptr [ESP + 0x28],EDX      ; 004c0767
    MOV dword ptr [ESP + 0x20],EAX      ; 004c076b
    MOV dword ptr [ESP + 0x24],EAX      ; 004c076f
    LEA EAX,[ESP + 0x20]                ; 004c0773
    MOV EDX,dword ptr [0x006703ec]      ; 004c0777 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c077d
    FMUL float ptr [0x0065dca8]         ; 004c077f | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c0785
    FLD float ptr [EAX + 0x4]           ; 004c0787
    FMUL float ptr [0x0065dca8]         ; 004c078a | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c0790
    FLD float ptr [EAX + 0x8]           ; 004c0793
    FMUL float ptr [0x0065dca8]         ; 004c0796 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c079c
    LEA EAX,[ESP + 0x14]                ; 004c079f
    PUSH EAX                            ; 004c07a3
    MOV EAX,dword ptr [EDX]             ; 004c07a4 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 004c07a6
    PUSH EAX                            ; 004c07a9
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004c07aa
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c07af
    LEA EBX,[ESP + 0x44]                ; 004c07b2
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004c07b6
    MOV EDX,dword ptr [0x006703ec]      ; 004c07bd | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x20],EAX      ; 004c07c3
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004c07c7
    XOR ECX,ECX                         ; 004c07ce
    MOV dword ptr [ESP + 0x24],EAX      ; 004c07d0
    LEA EAX,[ESP + 0x20]                ; 004c07d4
    MOV dword ptr [ESP + 0x28],ECX      ; 004c07d8
    FLD float ptr [EAX]                 ; 004c07dc
    FMUL float ptr [0x0065dca8]         ; 004c07de | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c07e4
    FLD float ptr [EAX + 0x4]           ; 004c07e6
    FMUL float ptr [0x0065dca8]         ; 004c07e9 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c07ef
    FLD float ptr [EAX + 0x8]           ; 004c07f2
    FMUL float ptr [0x0065dca8]         ; 004c07f5 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c07fb
    LEA EAX,[ESP + 0x44]                ; 004c07fe
    PUSH EAX                            ; 004c0802
    MOV EAX,dword ptr [EDX]             ; 004c0803 | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 004c0805
    PUSH EAX                            ; 004c080a
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004c080b
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c0810
    PUSH 0x0                            ; 004c0813
    MOV EAX,[0x00823a74]                ; 004c0815 | g_CurrentSceneCamera
    PUSH ESI                            ; 004c081a
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004c081b
    PUSH EAX                            ; 004c081e
    CALL dword ptr [EDX + 0x4]          ; 004c081f
    MOV EDX,0xffff                      ; 004c0822
    MOV EBX,dword ptr [0x02d051f4]      ; 004c0827 | g_PerspectiveReciprocal
    ADD ESP,0xc                         ; 004c082d
    MOV EAX,dword ptr [ESI + 0x38]      ; 004c0830
    SUB EDX,EBX                         ; 004c0833
    IMUL EDX                            ; 004c0835
    SHRD EAX,EDX,0x10                   ; 004c0837
    MOV [0x00688040],EAX                ; 004c083b | g_RenderVertexBuffer[0].a
    MOV [0x00688070],EAX                ; 004c0840 | g_RenderVertexBuffer[1].a
    MOV [0x006880a0],EAX                ; 004c0845 | g_RenderVertexBuffer[2].a
    MOV [0x006880d0],EAX                ; 004c084a | g_RenderVertexBuffer[3].a
    MOV EAX,0xffff                      ; 004c084f
    PUSH 0x1                            ; 004c0854
    MOV [0x00688034],EAX                ; 004c0856 | g_RenderVertexBuffer[0].r
    MOV [0x00688038],EAX                ; 004c085b | g_RenderVertexBuffer[0].g
    MOV [0x0068803c],EAX                ; 004c0860 | g_RenderVertexBuffer[0].b
    MOV [0x00688064],EAX                ; 004c0865 | g_RenderVertexBuffer[1].r
    MOV [0x00688068],EAX                ; 004c086a | g_RenderVertexBuffer[1].g
    MOV [0x0068806c],EAX                ; 004c086f | g_RenderVertexBuffer[1].b
    MOV [0x00688094],EAX                ; 004c0874 | g_RenderVertexBuffer[2].r
    MOV [0x00688098],EAX                ; 004c0879 | g_RenderVertexBuffer[2].g
    MOV [0x0068809c],EAX                ; 004c087e | g_RenderVertexBuffer[2].b
    MOV [0x006880c4],EAX                ; 004c0883 | g_RenderVertexBuffer[3].r
    MOV [0x006880c8],EAX                ; 004c0888 | g_RenderVertexBuffer[3].g
    MOV [0x006880cc],EAX                ; 004c088d | g_RenderVertexBuffer[3].b
    MOV EAX,[0x006703ec]                ; 004c0892 | g_CDemonRendererPtr2
    PUSH EAX                            ; 004c0897 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c0898
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c089d
    PUSH 0x2d12dcc                      ; 004c08a0 | g_BillboardPrimitive
    MOV EDX,dword ptr [0x006703ec]      ; 004c08a5 | g_CDemonRendererPtr2
    PUSH EDX                            ; 004c08ab | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0 ; 004c08ac
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004c08b1
    PUSH 0x0                            ; 004c08b4
    MOV ECX,dword ptr [0x006703ec]      ; 004c08b6 | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c08bc | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c08bd
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c08c2
    MOV EBX,dword ptr [0x006703ec]      ; 004c08c5 | g_CDemonRendererPtr2
    PUSH EBX                            ; 004c08cb | g_CDemonRendererInstance
    INC EDI                             ; 004c08cc
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 004c08cd
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004c08d2
    CMP EDI,0x3                         ; 004c08d5
    JGE 0x004c0494                      ; 004c08d8
        ;   XREF to: 004c0494 (CONDITIONAL_JUMP)  ; LAB_004c0494
    JMP 0x004c05c2                      ; 004c08de
        ;   XREF to: 004c05c2 (UNCONDITIONAL_JUMP)  ; LAB_004c05c2
    PUSH 0x67a7c4                       ; 004c08e3 | g_FireEffectBlueSparkTexture
        ;   Label: LAB_004c08e3
    MOV EBX,dword ptr [0x006703ec]      ; 004c08e8 | g_CDemonRendererPtr2
    PUSH EBX                            ; 004c08ee | g_CDemonRendererInstance
    JMP 0x004c04a7                      ; 004c08ef
        ;   XREF to: 004c04a7 (UNCONDITIONAL_JUMP)  ; LAB_004c04a7
    PUSH 0x67a7dc                       ; 004c08f4 | g_FireEffectGreenSparkTexture
        ;   Label: LAB_004c08f4
    MOV ECX,dword ptr [0x006703ec]      ; 004c08f9 | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c08ff | g_CDemonRendererInstance
    JMP 0x004c04a7                      ; 004c0900
        ;   XREF to: 004c04a7 (UNCONDITIONAL_JUMP)  ; LAB_004c04a7
    PUSH ESI                            ; 004c0905
        ;   Label: LAB_004c0905
    MOV EBX,dword ptr [0x006703ec]      ; 004c0906 | g_CDemonRendererPtr2
    PUSH EBX                            ; 004c090c | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004c090d
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004c0912
    PUSH 0x0                            ; 004c0915
    PUSH 0x2d12db4                      ; 004c0917 | g_BillboardCameraRight
    MOV EDI,dword ptr [0x006703ec]      ; 004c091c | g_CDemonRendererPtr2
    PUSH EDI                            ; 004c0922 | g_CDemonRendererInstance
    LEA EBX,[ESP + 0x14]                ; 004c0923
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0 ; 004c0927
        ;   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    MOV EAX,0xbecccccd                  ; 004c092c
    MOV EDX,dword ptr [0x006703ec]      ; 004c0931 | g_CDemonRendererPtr2
    ADD ESP,0xc                         ; 004c0937
    XOR ECX,ECX                         ; 004c093a
    MOV dword ptr [ESP + 0x20],EAX      ; 004c093c
    MOV dword ptr [ESP + 0x24],EAX      ; 004c0940
    LEA EAX,[ESP + 0x20]                ; 004c0944
    MOV dword ptr [ESP + 0x28],ECX      ; 004c0948
    FLD float ptr [EAX]                 ; 004c094c
    FMUL float ptr [0x0065dca8]         ; 004c094e | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c0954
    FLD float ptr [EAX + 0x4]           ; 004c0956
    FMUL float ptr [0x0065dca8]         ; 004c0959 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c095f
    FLD float ptr [EAX + 0x8]           ; 004c0962
    FMUL float ptr [0x0065dca8]         ; 004c0965 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c096b
    LEA EAX,[ESP + 0x8]                 ; 004c096e
    PUSH EAX                            ; 004c0972
    MOV EAX,dword ptr [EDX]             ; 004c0973 | g_CDemonRendererInstance
    PUSH EAX                            ; 004c0975
    MOV EDI,0xbecccccd                  ; 004c0976
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004c097b
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EBX,0x3ecccccd                  ; 004c0980
    MOV EDX,dword ptr [0x006703ec]      ; 004c0985 | g_CDemonRendererPtr2
    ADD ESP,0x8                         ; 004c098b
    XOR EAX,EAX                         ; 004c098e
    MOV dword ptr [ESP + 0x20],EBX      ; 004c0990
    MOV dword ptr [ESP + 0x28],EAX      ; 004c0994
    LEA EBX,[ESP + 0x8c]                ; 004c0998
    LEA EAX,[ESP + 0x20]                ; 004c099f
    MOV dword ptr [ESP + 0x24],EDI      ; 004c09a3
    FLD float ptr [EAX]                 ; 004c09a7
    FMUL float ptr [0x0065dca8]         ; 004c09a9 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c09af
    FLD float ptr [EAX + 0x4]           ; 004c09b1
    FMUL float ptr [0x0065dca8]         ; 004c09b4 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c09ba
    FLD float ptr [EAX + 0x8]           ; 004c09bd
    FMUL float ptr [0x0065dca8]         ; 004c09c0 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c09c6
    LEA EAX,[ESP + 0x8c]                ; 004c09c9
    PUSH EAX                            ; 004c09d0
    MOV EAX,dword ptr [EDX]             ; 004c09d1 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004c09d3
    PUSH EAX                            ; 004c09d6
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004c09d7
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EDX,0x3ecccccd                  ; 004c09dc
    LEA EAX,[ESP + 0x28]                ; 004c09e1
    ADD ESP,0x8                         ; 004c09e5
    XOR EBX,EBX                         ; 004c09e8
    MOV dword ptr [ESP + 0x20],EDX      ; 004c09ea
    MOV dword ptr [ESP + 0x24],EDX      ; 004c09ee
    MOV dword ptr [ESP + 0x28],EBX      ; 004c09f2
    LEA EBX,[ESP + 0x38]                ; 004c09f6
    MOV EDX,dword ptr [0x006703ec]      ; 004c09fa | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c0a00
    FMUL float ptr [0x0065dca8]         ; 004c0a02 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c0a08
    FLD float ptr [EAX + 0x4]           ; 004c0a0a
    FMUL float ptr [0x0065dca8]         ; 004c0a0d | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c0a13
    FLD float ptr [EAX + 0x8]           ; 004c0a16
    FMUL float ptr [0x0065dca8]         ; 004c0a19 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c0a1f
    LEA EAX,[ESP + 0x38]                ; 004c0a22
    PUSH EAX                            ; 004c0a26
    MOV EAX,dword ptr [EDX]             ; 004c0a27 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 004c0a29
    PUSH EAX                            ; 004c0a2c
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004c0a2d
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0x3ecccccd                  ; 004c0a32
    LEA EBX,[ESP + 0x70]                ; 004c0a37
    ADD ESP,0x8                         ; 004c0a3b
    XOR EDX,EDX                         ; 004c0a3e
    MOV dword ptr [ESP + 0x20],EDI      ; 004c0a40
    MOV dword ptr [ESP + 0x24],EAX      ; 004c0a44
    MOV dword ptr [ESP + 0x28],EDX      ; 004c0a48
    LEA EAX,[ESP + 0x20]                ; 004c0a4c
    MOV EDX,dword ptr [0x006703ec]      ; 004c0a50 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c0a56
    FMUL float ptr [0x0065dca8]         ; 004c0a58 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c0a5e
    FLD float ptr [EAX + 0x4]           ; 004c0a60
    FMUL float ptr [0x0065dca8]         ; 004c0a63 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c0a69
    FLD float ptr [EAX + 0x8]           ; 004c0a6c
    FMUL float ptr [0x0065dca8]         ; 004c0a6f | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c0a75
    LEA EAX,[ESP + 0x68]                ; 004c0a78
    PUSH EAX                            ; 004c0a7c
    MOV EAX,dword ptr [EDX]             ; 004c0a7d | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 004c0a7f
    PUSH EAX                            ; 004c0a84
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004c0a85
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,dword ptr [ESI + 0x44]      ; 004c0a8a
    ADD ESP,0x8                         ; 004c0a8d
    CMP EAX,0x1                         ; 004c0a90
    JNC 0x004c0aa2                      ; 004c0a93
        ;   XREF to: 004c0aa2 (CONDITIONAL_JUMP)  ; LAB_004c0aa2
    TEST EAX,EAX                        ; 004c0a95
    JZ 0x004c049b                       ; 004c0a97
        ;   XREF to: 004c049b (CONDITIONAL_JUMP)  ; LAB_004c049b
    JMP 0x004c04af                      ; 004c0a9d
        ;   XREF to: 004c04af (UNCONDITIONAL_JUMP)  ; LAB_004c04af
    JBE 0x004c08e3                      ; 004c0aa2
        ;   XREF to: 004c08e3 (CONDITIONAL_JUMP)  ; LAB_004c08e3
        ;   Label: LAB_004c0aa2
    CMP EAX,0x2                         ; 004c0aa8
    JZ 0x004c08f4                       ; 004c0aab
        ;   XREF to: 004c08f4 (CONDITIONAL_JUMP)  ; LAB_004c08f4
    JMP 0x004c04af                      ; 004c0ab1
        ;   XREF to: 004c04af (UNCONDITIONAL_JUMP)  ; LAB_004c04af

