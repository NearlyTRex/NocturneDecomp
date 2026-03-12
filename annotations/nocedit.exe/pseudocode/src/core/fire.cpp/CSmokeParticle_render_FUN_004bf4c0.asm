; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSmokeParticle_render_FUN_004bf4c0(CSmokeParticle *this_ptr)
;
; Parameters:
; CSmokeParticle * Stack[0x4]:4   this_ptr
; Local Variables:
; CVector3i        Stack[-0x70]:12  local_70
; CVector3i        Stack[-0x64]:12  local_64
; float            Stack[-0x58]:4  local_58
; float            Stack[-0x54]:4  local_54
; CVector3i        Stack[-0x4c]:12  local_4c
; CVector3i        Stack[-0x40]:12  local_40
; CVector3i        Stack[-0x34]:12  local_34
; CVector3i        Stack[-0x28]:12  local_28
; float            Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_004c7180 at 004c72bc
;
; Referenced Globals:
;   TerminatedCString s_core_fire_cpp_00629c0f
;   TerminatedCString s_CSmokeParticle_render_Fr_00629c20
;   float FLOAT_0065dca8 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   SMRGLTextureBasic[40] g_FireEffectSmokeParticleTextures
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   undefined4 g_RenderVertexBuffer[1].u
;   undefined4 g_RenderVertexBuffer[1].v
;   undefined4 g_RenderVertexBuffer[2].u
;   undefined4 g_RenderVertexBuffer[2].v
;   undefined4 g_RenderVertexBuffer[3].u
;   undefined4 g_RenderVertexBuffer[3].v
;   CDemonCamera* g_CurrentSceneCamera
;   ... and 9 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_set.cpp_CDemonSet_computeLighting_FUN_0056e110
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;   wincore_windll.cpp_transformPoint_FUN_005b5a25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bf4c0
        ;   Label: core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0
    PUSH ESI                            ; 004bf4c1
    PUSH EDI                            ; 004bf4c2
    PUSH EBP                            ; 004bf4c3
    SUB ESP,0x60                        ; 004bf4c4
    MOV EDI,dword ptr [ESP + 0x74]      ; 004bf4c7
    MOV ESI,dword ptr [0x006703ec]      ; 004bf4cb | g_CDemonRendererPtr2
    LEA EBX,[ESP + 0xc]                 ; 004bf4d1
    LEA EAX,[EDI + 0x4]                 ; 004bf4d5
    MOV ESI,dword ptr [ESI]             ; 004bf4d8 | g_CDemonRendererInstance
    FLD float ptr [EAX]                 ; 004bf4da
    FMUL float ptr [0x0065dca8]         ; 004bf4dc | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004bf4e2
    FLD float ptr [EAX + 0x4]           ; 004bf4e4
    FMUL float ptr [0x0065dca8]         ; 004bf4e7 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004bf4ed
    FLD float ptr [EAX + 0x8]           ; 004bf4f0
    FMUL float ptr [0x0065dca8]         ; 004bf4f3 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004bf4f9
    LEA EAX,[ESP + 0xc]                 ; 004bf4fc
    PUSH EAX                            ; 004bf500
    PUSH ESI                            ; 004bf501
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 004bf502
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004bf507
    PUSH ESI                            ; 004bf50a
    MOV EDX,dword ptr [0x006703ec]      ; 004bf50b | g_CDemonRendererPtr2
    PUSH EDX                            ; 004bf511 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50 ; 004bf512
        ;   XREF to: 0048dc50 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 004bf517
    TEST EAX,EAX                        ; 004bf51a
    JZ 0x004bf7e6                       ; 004bf51c
        ;   XREF to: 004bf7e6 (CONDITIONAL_JUMP)  ; LAB_004bf7e6
    FLD float ptr [EDI + 0x18]          ; 004bf522
    CALL crt_math.c_round_FUN_005fe6b0  ; 004bf525
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x58]        ; 004bf52a
    MOV ECX,dword ptr [ESP + 0x58]      ; 004bf52e
    TEST ECX,ECX                        ; 004bf532
    JL 0x004bf53b                       ; 004bf534
        ;   XREF to: 004bf53b (CONDITIONAL_JUMP)  ; LAB_004bf53b
    CMP ECX,0x28                        ; 004bf536
    JL 0x004bf55e                       ; 004bf539
        ;   XREF to: 004bf55e (CONDITIONAL_JUMP)  ; LAB_004bf55e
    MOV ESI,0x629c0f                    ; 004bf53b | = "..\\core\\fire.cpp"
        ;   Label: LAB_004bf53b
    MOV EBP,0x11c                       ; 004bf540
    PUSH 0x629c20                       ; 004bf545 | = "CSmokeParticle::render - Frame out of..."
    MOV dword ptr [0x02f0ca48],ESI      ; 004bf54a | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 004bf550 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004bf556
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004bf55b
    MOV EBX,dword ptr [ESP + 0x58]      ; 004bf55e
        ;   Label: LAB_004bf55e
    LEA EAX,[EBX*0x4 + 0x0]             ; 004bf562
    SUB EAX,EBX                         ; 004bf569
    SHL EAX,0x3                         ; 004bf56b
    ADD EAX,0x67a3d4                    ; 004bf56e | g_FireEffectSmokeParticleTextures
    PUSH EAX                            ; 004bf573
    MOV EAX,[0x006703ec]                ; 004bf574 | g_CDemonRendererPtr2
    PUSH EAX                            ; 004bf579 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004bf57a
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004bf57f
    LEA ESI,[EDI + 0x4]                 ; 004bf582
    PUSH ESI                            ; 004bf585
    MOV EDX,dword ptr [0x006703ec]      ; 004bf586 | g_CDemonRendererPtr2
    PUSH EDX                            ; 004bf58c | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004bf58d
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004bf592
    PUSH 0x0                            ; 004bf595
    PUSH 0x2d12db4                      ; 004bf597 | g_BillboardCameraRight
    MOV ECX,dword ptr [0x006703ec]      ; 004bf59c | g_CDemonRendererPtr2
    PUSH ECX                            ; 004bf5a2 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0 ; 004bf5a3
        ;   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004bf5a8
    MOV EAX,dword ptr [EDI + 0x14]      ; 004bf5ab
    XOR EBX,EBX                         ; 004bf5ae
    MOV dword ptr [ESP + 0x5c],EAX      ; 004bf5b0
    MOV dword ptr [ESP + 0x20],EBX      ; 004bf5b4
    FLD float ptr [ESP + 0x5c]          ; 004bf5b8
    FCHS                                ; 004bf5bc
    FSTP float ptr [ESP + 0x18]         ; 004bf5be
    MOV EAX,dword ptr [ESP + 0x18]      ; 004bf5c2
    LEA EBX,[ESP + 0x48]                ; 004bf5c6
    MOV dword ptr [ESP + 0x54],EAX      ; 004bf5ca
    MOV dword ptr [ESP + 0x1c],EAX      ; 004bf5ce
    LEA EAX,[ESP + 0x18]                ; 004bf5d2
    MOV EDX,dword ptr [0x006703ec]      ; 004bf5d6 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004bf5dc
    FMUL float ptr [0x0065dca8]         ; 004bf5de | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004bf5e4
    FLD float ptr [EAX + 0x4]           ; 004bf5e6
    FMUL float ptr [0x0065dca8]         ; 004bf5e9 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004bf5ef
    FLD float ptr [EAX + 0x8]           ; 004bf5f2
    FMUL float ptr [0x0065dca8]         ; 004bf5f5 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004bf5fb
    LEA EAX,[ESP + 0x48]                ; 004bf5fe
    PUSH EAX                            ; 004bf602
    MOV EAX,dword ptr [EDX]             ; 004bf603 | g_CDemonRendererInstance
    PUSH EAX                            ; 004bf605
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004bf606
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004bf60b
    XOR EBP,EBP                         ; 004bf60e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004bf610
    MOV EBX,ESP                         ; 004bf614
    MOV dword ptr [ESP + 0x18],EAX      ; 004bf616
    MOV EAX,dword ptr [ESP + 0x54]      ; 004bf61a
    MOV EDX,dword ptr [0x006703ec]      ; 004bf61e | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x1c],EAX      ; 004bf624
    LEA EAX,[ESP + 0x18]                ; 004bf628
    MOV dword ptr [ESP + 0x20],EBP      ; 004bf62c
    FLD float ptr [EAX]                 ; 004bf630
    FMUL float ptr [0x0065dca8]         ; 004bf632 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004bf638
    FLD float ptr [EAX + 0x4]           ; 004bf63a
    FMUL float ptr [0x0065dca8]         ; 004bf63d | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004bf643
    FLD float ptr [EAX + 0x8]           ; 004bf646
    FMUL float ptr [0x0065dca8]         ; 004bf649 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004bf64f
    MOV EAX,ESP                         ; 004bf652
    PUSH EAX                            ; 004bf654
    MOV EAX,dword ptr [EDX]             ; 004bf655 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004bf657
    PUSH EAX                            ; 004bf65a
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004bf65b
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004bf660
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004bf663
    MOV dword ptr [ESP + 0x20],EBP      ; 004bf667
    MOV dword ptr [ESP + 0x18],EAX      ; 004bf66b
    MOV dword ptr [ESP + 0x1c],EAX      ; 004bf66f
    LEA EBX,[ESP + 0x3c]                ; 004bf673
    LEA EAX,[ESP + 0x18]                ; 004bf677
    MOV EDX,dword ptr [0x006703ec]      ; 004bf67b | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004bf681
    FMUL float ptr [0x0065dca8]         ; 004bf683 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004bf689
    FLD float ptr [EAX + 0x4]           ; 004bf68b
    FMUL float ptr [0x0065dca8]         ; 004bf68e | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004bf694
    FLD float ptr [EAX + 0x8]           ; 004bf697
    FMUL float ptr [0x0065dca8]         ; 004bf69a | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004bf6a0
    LEA EAX,[ESP + 0x3c]                ; 004bf6a3
    PUSH EAX                            ; 004bf6a7
    MOV EAX,dword ptr [EDX]             ; 004bf6a8 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 004bf6aa
    PUSH EAX                            ; 004bf6ad
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004bf6ae
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004bf6b3
    MOV EAX,dword ptr [ESP + 0x54]      ; 004bf6b6
    LEA EBX,[ESP + 0x24]                ; 004bf6ba
    MOV dword ptr [ESP + 0x18],EAX      ; 004bf6be
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004bf6c2
    MOV EDX,dword ptr [0x006703ec]      ; 004bf6c6 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x1c],EAX      ; 004bf6cc
    LEA EAX,[ESP + 0x18]                ; 004bf6d0
    MOV dword ptr [ESP + 0x20],EBP      ; 004bf6d4
    FLD float ptr [EAX]                 ; 004bf6d8
    FMUL float ptr [0x0065dca8]         ; 004bf6da | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004bf6e0
    FLD float ptr [EAX + 0x4]           ; 004bf6e2
    FMUL float ptr [0x0065dca8]         ; 004bf6e5 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004bf6eb
    FLD float ptr [EAX + 0x8]           ; 004bf6ee
    FMUL float ptr [0x0065dca8]         ; 004bf6f1 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004bf6f7
    LEA EAX,[ESP + 0x24]                ; 004bf6fa
    PUSH EAX                            ; 004bf6fe
    MOV EAX,dword ptr [EDX]             ; 004bf6ff | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 004bf701
    PUSH EAX                            ; 004bf706
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004bf707
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0x80000                     ; 004bf70c
    MOV EBX,0xf80000                    ; 004bf711 | DAT_00f80000
    ADD ESP,0x8                         ; 004bf716
    MOV EAX,ESI                         ; 004bf719
    MOV dword ptr [0x0068802c],ECX      ; 004bf71b | g_RenderVertexBuffer[0].u
    MOV dword ptr [0x00688030],EBX      ; 004bf721 | g_RenderVertexBuffer[0].v
    MOV dword ptr [0x0068805c],EBX      ; 004bf727 | g_RenderVertexBuffer[1].u
    MOV dword ptr [0x00688060],EBX      ; 004bf72d | g_RenderVertexBuffer[1].v
    MOV dword ptr [0x0068808c],EBX      ; 004bf733 | g_RenderVertexBuffer[2].u
    MOV dword ptr [0x00688090],ECX      ; 004bf739 | g_RenderVertexBuffer[2].v
    MOV dword ptr [0x006880bc],ECX      ; 004bf73f | g_RenderVertexBuffer[3].u
    LEA EBX,[ESP + 0x30]                ; 004bf745
    MOV dword ptr [0x006880c0],ECX      ; 004bf749 | g_RenderVertexBuffer[3].v
    FLD float ptr [EAX]                 ; 004bf74f
    FMUL float ptr [0x0065dca8]         ; 004bf751 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004bf757
    FLD float ptr [EAX + 0x4]           ; 004bf759
    FMUL float ptr [0x0065dca8]         ; 004bf75c | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004bf762
    FLD float ptr [EAX + 0x8]           ; 004bf765
    FMUL float ptr [0x0065dca8]         ; 004bf768 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004bf76e
    PUSH 0x4                            ; 004bf771
    PUSH EBP                            ; 004bf773
    PUSH 0x2d12dc0                      ; 004bf774 | g_BillboardCameraUp
    LEA EAX,[ESP + 0x3c]                ; 004bf779
    PUSH EAX                            ; 004bf77d
    MOV EAX,[0x006810c8]                ; 004bf77e | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EAX                            ; 004bf783 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_0056e110 ; 004bf784
        ;   XREF to: 0056e110 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_computeLighting_FUN_0056e110(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 004bf789
    PUSH EBP                            ; 004bf78c
    MOV EAX,[0x00823a74]                ; 004bf78d | g_CurrentSceneCamera
    PUSH ESI                            ; 004bf792
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004bf793
    PUSH EAX                            ; 004bf796
    CALL dword ptr [EDX + 0x4]          ; 004bf797
    MOV EAX,0xffff                      ; 004bf79a
    MOV EDX,dword ptr [0x02d051f4]      ; 004bf79f | g_PerspectiveReciprocal
    ADD ESP,0xc                         ; 004bf7a5
    SUB EAX,EDX                         ; 004bf7a8
    MOV EDX,dword ptr [EDI + 0x28]      ; 004bf7aa
    IMUL EDX                            ; 004bf7ad
    SHRD EAX,EDX,0x10                   ; 004bf7af
    PUSH EAX                            ; 004bf7b3
    MOV ECX,dword ptr [0x006703ec]      ; 004bf7b4 | g_CDemonRendererPtr2
    PUSH ECX                            ; 004bf7ba | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 004bf7bb
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004bf7c0
    PUSH 0x2d12dcc                      ; 004bf7c3 | g_BillboardPrimitive
    MOV EBX,dword ptr [0x006703ec]      ; 004bf7c8 | g_CDemonRendererPtr2
    PUSH EBX                            ; 004bf7ce | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0 ; 004bf7cf
        ;   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004bf7d4
    MOV ESI,dword ptr [0x006703ec]      ; 004bf7d7 | g_CDemonRendererPtr2
    PUSH ESI                            ; 004bf7dd | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 004bf7de
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    ADD ESP,0x60                        ; 004bf7e6
        ;   Label: LAB_004bf7e6
    POP EBP                             ; 004bf7e9
    POP EDI                             ; 004bf7ea
    POP ESI                             ; 004bf7eb
    POP EBX                             ; 004bf7ec
    RET                                 ; 004bf7ed

