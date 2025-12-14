; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CSpark_render_FUN_004c0420(CSpark * this_ptr)
;
; Parameters:
; CSpark *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x20]:4  local_20
;
; Referenced Globals:
;   float FLOAT_0065dca8 = 256
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   SMRGLTextureBasic g_FireEffectSparkTexture
;   SMRGLTextureBasic g_FireEffectBlueSparkTexture
;   SMRGLTextureBasic g_FireEffectGreenSparkTexture
;   undefined4 g_RenderVertexBuffer[0].light
;   undefined4 g_RenderVertexBuffer[0].color
;   undefined4 g_RenderVertexBuffer[0].fog
;   undefined4 g_RenderVertexBuffer[0].w_recip
;   undefined4 g_RenderVertexBuffer[1].light
;   undefined4 g_RenderVertexBuffer[1].color
;   undefined4 g_RenderVertexBuffer[1].fog
;   undefined4 g_RenderVertexBuffer[1].w_recip
;   undefined4 g_RenderVertexBuffer[2].light
;   undefined4 g_RenderVertexBuffer[2].color
;   ... and 11 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;   wincore_windll.cpp_transformPoint_FUN_005b5a25
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
    MOV EDI,dword ptr [0x006703ec]      ; 004c0432 | g_CDemonRendererPtr
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
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 004c0474
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c0479
    PUSH EDI                            ; 004c047c
    MOV ECX,dword ptr [0x006703ec]      ; 004c047d | g_CDemonRendererPtr
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
    MOV EDI,dword ptr [0x006703ec]      ; 004c04a0 | g_CDemonRendererPtr
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
    MOV [0x00688040],EAX                ; 004c04de | g_RenderVertexBuffer[0].w_recip
    MOV [0x00688070],EAX                ; 004c04e3 | g_RenderVertexBuffer[1].w_recip
    MOV [0x006880a0],EAX                ; 004c04e8 | g_RenderVertexBuffer[2].w_recip
    MOV [0x006880d0],EAX                ; 004c04ed | g_RenderVertexBuffer[3].w_recip
    MOV dword ptr [0x00688034],EBX      ; 004c04f2 | g_RenderVertexBuffer[0].light
    MOV dword ptr [0x00688038],EBX      ; 004c04f8 | g_RenderVertexBuffer[0].color
    MOV dword ptr [0x0068803c],EBX      ; 004c04fe | g_RenderVertexBuffer[0].fog
    MOV dword ptr [0x00688064],EBX      ; 004c0504 | g_RenderVertexBuffer[1].light
    MOV dword ptr [0x00688068],EBX      ; 004c050a | g_RenderVertexBuffer[1].color
    MOV dword ptr [0x0068806c],EBX      ; 004c0510 | g_RenderVertexBuffer[1].fog
    MOV dword ptr [0x00688094],EBX      ; 004c0516 | g_RenderVertexBuffer[2].light
    MOV dword ptr [0x00688098],EBX      ; 004c051c | g_RenderVertexBuffer[2].color
    MOV dword ptr [0x0068809c],EBX      ; 004c0522 | g_RenderVertexBuffer[2].fog
    MOV EAX,[0x006703ec]                ; 004c0528 | g_CDemonRendererPtr
    MOV dword ptr [0x006880c4],EBX      ; 004c052d | g_RenderVertexBuffer[3].light
    PUSH EAX                            ; 004c0533 | g_CDemonRendererInstance
    MOV dword ptr [0x006880c8],EBX      ; 004c0534 | g_RenderVertexBuffer[3].color
    MOV dword ptr [0x006880cc],EBX      ; 004c053a | g_RenderVertexBuffer[3].fog
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c0540
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c0545
    PUSH 0x2d12dcc                      ; 004c0548 | g_BillboardPrimitive
    MOV EDX,dword ptr [0x006703ec]      ; 004c054d | g_CDemonRendererPtr
    PUSH EDX                            ; 004c0553 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 ; 004c0554
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    ADD ESP,0x8                         ; 004c0559
    PUSH 0x0                            ; 004c055c
    MOV ECX,dword ptr [0x006703ec]      ; 004c055e | g_CDemonRendererPtr
    PUSH ECX                            ; 004c0564 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c0565
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c056a
    MOV EBX,dword ptr [0x006703ec]      ; 004c056d | g_CDemonRendererPtr
    PUSH EBX                            ; 004c0573 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 004c0574
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    PUSH 0x67a7c4                       ; 004c08e3 | g_FireEffectBlueSparkTexture
        ;   Label: LAB_004c08e3
    MOV EBX,dword ptr [0x006703ec]      ; 004c08e8 | g_CDemonRendererPtr
    PUSH EBX                            ; 004c08ee | g_CDemonRendererInstance
    JMP 0x004c04a7                      ; 004c08ef
        ;   XREF to: 004c04a7 (UNCONDITIONAL_JUMP)  ; LAB_004c04a7
    PUSH 0x67a7dc                       ; 004c08f4 | g_FireEffectGreenSparkTexture
        ;   Label: LAB_004c08f4
    MOV ECX,dword ptr [0x006703ec]      ; 004c08f9 | g_CDemonRendererPtr
    PUSH ECX                            ; 004c08ff | g_CDemonRendererInstance
    JMP 0x004c04a7                      ; 004c0900
        ;   XREF to: 004c04a7 (UNCONDITIONAL_JUMP)  ; LAB_004c04a7
    PUSH ESI                            ; 004c0905
        ;   Label: LAB_004c0905
    MOV EBX,dword ptr [0x006703ec]      ; 004c0906 | g_CDemonRendererPtr
    PUSH EBX                            ; 004c090c | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004c090d
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004c0912
    PUSH 0x0                            ; 004c0915
    PUSH 0x2d12db4                      ; 004c0917 | g_BillboardCameraRight
    MOV EDI,dword ptr [0x006703ec]      ; 004c091c | g_CDemonRendererPtr
    PUSH EDI                            ; 004c0922 | g_CDemonRendererInstance
    LEA EBX,[ESP + 0x14]                ; 004c0923
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0 ; 004c0927
        ;   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    MOV EAX,0xbecccccd                  ; 004c092c
    MOV EDX,dword ptr [0x006703ec]      ; 004c0931 | g_CDemonRendererPtr
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
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c097b
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EBX,0x3ecccccd                  ; 004c0980
    MOV EDX,dword ptr [0x006703ec]      ; 004c0985 | g_CDemonRendererPtr
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
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c09d7
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EDX,0x3ecccccd                  ; 004c09dc
    LEA EAX,[ESP + 0x28]                ; 004c09e1
    ADD ESP,0x8                         ; 004c09e5
    XOR EBX,EBX                         ; 004c09e8
    MOV dword ptr [ESP + 0x20],EDX      ; 004c09ea
    MOV dword ptr [ESP + 0x24],EDX      ; 004c09ee
    MOV dword ptr [ESP + 0x28],EBX      ; 004c09f2
    LEA EBX,[ESP + 0x38]                ; 004c09f6
    MOV EDX,dword ptr [0x006703ec]      ; 004c09fa | g_CDemonRendererPtr
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
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c0a2d
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0x3ecccccd                  ; 004c0a32
    LEA EBX,[ESP + 0x70]                ; 004c0a37
    ADD ESP,0x8                         ; 004c0a3b
    XOR EDX,EDX                         ; 004c0a3e
    MOV dword ptr [ESP + 0x20],EDI      ; 004c0a40
    MOV dword ptr [ESP + 0x24],EAX      ; 004c0a44
    MOV dword ptr [ESP + 0x28],EDX      ; 004c0a48
    LEA EAX,[ESP + 0x20]                ; 004c0a4c
    MOV EDX,dword ptr [0x006703ec]      ; 004c0a50 | g_CDemonRendererPtr
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
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c0a85
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
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

