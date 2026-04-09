; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CLightningBolt_render_FUN_004c5720(CLightningBolt *this_ptr)
;
; Parameters:
; CLightningBolt * Stack[0x4]:4   this_ptr
; Local Variables:
; SMRGLPrimitiveQuadIndex Stack[-0xdc]:40  local_dc
; float            Stack[-0xb4]:4  local_b4
; float            Stack[-0xb0]:4  local_b0
; float            Stack[-0xac]:4  local_ac
; CVector3i        Stack[-0xa8]:12  local_a8
; CVector3i        Stack[-0x9c]:12  local_9c
; CVector3i        Stack[-0x90]:12  local_90
; CVector3i        Stack[-0x84]:12  local_84
; CVector3i        Stack[-0x78]:12  local_78
; CVector3i        Stack[-0x6c]:12  local_6c
; CVector3i        Stack[-0x60]:12  local_60
; CVector3i        Stack[-0x54]:12  local_54
; CVector3i        Stack[-0x48]:12  local_48
; CVector3i        Stack[-0x3c]:12  local_3c
; CVector3i        Stack[-0x30]:12  local_30
; CVector3i        Stack[-0x24]:12  local_24
; CVector3i        Stack[-0x18]:12  local_18
; int              Stack[-0xc]:4  local_c
; int              Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_004c7180 at 004c7402
;
; Referenced Globals:
;   double DOUBLE_00629fbb = 256
;   double DOUBLE_00629fc3 = 0.25
;   float FLOAT_0065dca8 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   SMRGLTextureBasic[6] g_FireEffectLightningBoltTextures
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   undefined4 g_RenderVertexBuffer[0].r
;   undefined4 g_RenderVertexBuffer[0].g
;   undefined4 g_RenderVertexBuffer[0].b
;   undefined4 g_RenderVertexBuffer[1].u
;   undefined4 g_RenderVertexBuffer[1].v
;   undefined4 g_RenderVertexBuffer[1].r
;   undefined4 g_RenderVertexBuffer[1].g
;   undefined4 g_RenderVertexBuffer[1].b
;   ... and 12 more
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdlib.c_rand_FUN_005feb5c
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;   wincore_windll.cpp_transformPoint_FUN_005b5a25
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004c5720
        ;   Label: core_fire.cpp_CLightningBolt_render_FUN_004c5720
    SUB ESP,0xd8                        ; 004c5721
    MOV EBP,dword ptr [ESP + 0xe0]      ; 004c5727
    FLD float ptr [EBP + 0x14]          ; 004c572e
    FLDZ                                ; 004c5731
    FCOMPP                              ; 004c5733
    FNSTSW AX                           ; 004c5735
    SAHF                                ; 004c5737
    JC 0x004c5742                       ; 004c5738
        ;   XREF to: 004c5742 (CONDITIONAL_JUMP)  ; LAB_004c5742
    ADD ESP,0xd8                        ; 004c573a
    POP EBP                             ; 004c5740
    RET                                 ; 004c5741
    PUSH EDI                            ; 004c5742
        ;   Label: LAB_004c5742
    PUSH ESI                            ; 004c5743
    PUSH EBX                            ; 004c5744
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 004c5745
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    MOV EDX,EAX                         ; 004c574a
    MOV EBX,0x6                         ; 004c574c
    SAR EDX,0x1f                        ; 004c5751
    IDIV EBX                            ; 004c5754
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c5756
    SUB EAX,EDX                         ; 004c575d
    SHL EAX,0x3                         ; 004c575f
    ADD EAX,0x67adf4                    ; 004c5762 | g_FireEffectLightningBoltTextures
    PUSH EAX                            ; 004c5767
    MOV EDX,dword ptr [0x006703ec]      ; 004c5768 | g_CDemonRendererPtr2
    PUSH EDX                            ; 004c576e | g_CDemonRendererInstance
    MOV ESI,0x3                         ; 004c576f
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004c5774
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV ECX,0x4                         ; 004c5779
    ADD ESP,0x8                         ; 004c577e
    XOR EBX,EBX                         ; 004c5781
    MOV dword ptr [ESP + 0x10],ECX      ; 004c5783
    MOV dword ptr [ESP + 0x20],EBX      ; 004c5787
    MOV dword ptr [ESP + 0x1c],EBX      ; 004c578b
    MOV dword ptr [ESP + 0x18],EBX      ; 004c578f
    MOV dword ptr [ESP + 0x14],EBX      ; 004c5793
    MOV dword ptr [ESP + 0x24],EBX      ; 004c5797
    MOV dword ptr [ESP + 0x30],ESI      ; 004c579b
    MOV ECX,0x1                         ; 004c579f
    MOV EBX,0x2                         ; 004c57a4
    MOV dword ptr [ESP + 0x28],ECX      ; 004c57a9
    MOV dword ptr [ESP + 0x2c],EBX      ; 004c57ad
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 004c57b1
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    TEST AL,0x1                         ; 004c57b6
    JZ 0x004c5a66                       ; 004c57b8
        ;   XREF to: 004c5a66 (CONDITIONAL_JUMP)  ; LAB_004c5a66
    MOV EDX,0x80000                     ; 004c57be
    MOV EBX,0xf80000                    ; 004c57c3 | g_LightBufferPool[11][183800]
    MOV dword ptr [0x00688030],EDX      ; 004c57c8 | g_RenderVertexBuffer[0].v
    MOV dword ptr [0x0068805c],EBX      ; 004c57ce | g_RenderVertexBuffer[1].u
    MOV dword ptr [0x00688060],EDX      ; 004c57d4 | g_RenderVertexBuffer[1].v
    MOV dword ptr [0x0068808c],EBX      ; 004c57da | g_RenderVertexBuffer[2].u
    MOV dword ptr [0x00688090],EBX      ; 004c57e0 | g_RenderVertexBuffer[2].v
    MOV dword ptr [0x006880bc],EDX      ; 004c57e6 | g_RenderVertexBuffer[3].u
    MOV dword ptr [0x006880c0],EBX      ; 004c57ec | g_RenderVertexBuffer[3].v
    MOV dword ptr [0x0068802c],EDX      ; 004c57f2 | g_RenderVertexBuffer[0].u
    MOV EBX,0xffff                      ; 004c57f8
        ;   Label: LAB_004c57f8
    MOV dword ptr [0x00688034],EBX      ; 004c57fd | g_RenderVertexBuffer[0].r
    MOV dword ptr [0x00688038],EBX      ; 004c5803 | g_RenderVertexBuffer[0].g
    MOV dword ptr [0x0068803c],EBX      ; 004c5809 | g_RenderVertexBuffer[0].b
    MOV dword ptr [0x00688064],EBX      ; 004c580f | g_RenderVertexBuffer[1].r
    MOV dword ptr [0x00688068],EBX      ; 004c5815 | g_RenderVertexBuffer[1].g
    MOV dword ptr [0x0068806c],EBX      ; 004c581b | g_RenderVertexBuffer[1].b
    MOV dword ptr [0x00688094],EBX      ; 004c5821 | g_RenderVertexBuffer[2].r
    MOV dword ptr [0x00688098],EBX      ; 004c5827 | g_RenderVertexBuffer[2].g
    MOV dword ptr [0x0068809c],EBX      ; 004c582d | g_RenderVertexBuffer[2].b
    MOV dword ptr [0x006880c4],EBX      ; 004c5833 | g_RenderVertexBuffer[3].r
    MOV dword ptr [0x006880c8],EBX      ; 004c5839 | g_RenderVertexBuffer[3].g
    PUSH EBX                            ; 004c583f
    MOV dword ptr [0x006880cc],EBX      ; 004c5840 | g_RenderVertexBuffer[3].b
    MOV EBX,dword ptr [0x006703ec]      ; 004c5846 | g_CDemonRendererPtr2
    PUSH EBX                            ; 004c584c | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 004c584d
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004c5852
    PUSH 0x1                            ; 004c5855
    MOV ESI,dword ptr [0x006703ec]      ; 004c5857 | g_CDemonRendererPtr2
    PUSH ESI                            ; 004c585d | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c585e
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c5863
    MOV EDI,dword ptr [EBP]             ; 004c5866
    LEA ESI,[EBP + 0x4]                 ; 004c5869
    TEST EDI,EDI                        ; 004c586c
    JNZ 0x004c5aad                      ; 004c586e
        ;   XREF to: 004c5aad (CONDITIONAL_JUMP)  ; LAB_004c5aad
    PUSH ESI                            ; 004c5874
    MOV EBX,dword ptr [0x006703ec]      ; 004c5875 | g_CDemonRendererPtr2
    PUSH EBX                            ; 004c587b | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004c587c
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004c5881
    LEA EAX,[ESP + 0xc4]                ; 004c5884
    PUSH EAX                            ; 004c588b
    MOV ESI,dword ptr [0x006703ec]      ; 004c588c | g_CDemonRendererPtr2
    PUSH ESI                            ; 004c5892 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800 ; 004c5893
        ;   XREF to: 0048c800 (UNCONDITIONAL_CALL)  ; float * engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800(CDemonRenderer * this_ptr, float * output)
    ADD ESP,0x8                         ; 004c5898
    PUSH EDI                            ; 004c589b
    LEA EAX,[ESP + 0xc8]                ; 004c589c
    PUSH EAX                            ; 004c58a3
    MOV EAX,[0x006703ec]                ; 004c58a4 | g_CDemonRendererPtr2
    PUSH EAX                            ; 004c58a9 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0xd0],EDI      ; 004c58aa
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004c58b1
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004c58b6
    MOV dword ptr [ESP + 0x34],EDI      ; 004c58b9
    MOV dword ptr [ESP + 0x38],EDI      ; 004c58bd
    MOV dword ptr [ESP + 0x3c],EDI      ; 004c58c1
    FLD float ptr [EBP + 0x18]          ; 004c58c5
    FLDZ                                ; 004c58c8
    FCOMPP                              ; 004c58ca
    FNSTSW AX                           ; 004c58cc
    SAHF                                ; 004c58ce
    JC 0x004c5aa1                       ; 004c58cf
        ;   XREF to: 004c5aa1 (CONDITIONAL_JUMP)  ; LAB_004c5aa1
    FLD float ptr [EBP + 0x10]          ; 004c58d5
    FMUL double ptr [0x00629fc3]        ; 004c58d8 | DOUBLE_00629fc3
    FSTP float ptr [ESP + 0x34]         ; 004c58de
    MOV EAX,dword ptr [EBP + 0x10]      ; 004c58e2
        ;   Label: LAB_004c58e2
    LEA EBX,[ESP + 0x88]                ; 004c58e5
    MOV dword ptr [ESP + 0x38],EAX      ; 004c58ec
    LEA EAX,[ESP + 0x34]                ; 004c58f0
    MOV EDX,dword ptr [0x006703ec]      ; 004c58f4 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c58fa
    FMUL float ptr [0x0065dca8]         ; 004c58fc | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c5902
    FLD float ptr [EAX + 0x4]           ; 004c5904
    FMUL float ptr [0x0065dca8]         ; 004c5907 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c590d
    FLD float ptr [EAX + 0x8]           ; 004c5910
    FMUL float ptr [0x0065dca8]         ; 004c5913 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c5919
    LEA EAX,[ESP + 0x88]                ; 004c591c
    PUSH EAX                            ; 004c5923
    MOV EAX,dword ptr [EDX]             ; 004c5924 | g_CDemonRendererInstance
    PUSH EAX                            ; 004c5926
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c5927
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c592c
    MOV AH,byte ptr [ESP + 0x37]        ; 004c592f
    XOR AH,0x80                         ; 004c5933
    LEA EBX,[ESP + 0xa0]                ; 004c5936
    MOV byte ptr [ESP + 0x37],AH        ; 004c593d
    LEA EAX,[ESP + 0x34]                ; 004c5941
    MOV EDX,dword ptr [0x006703ec]      ; 004c5945 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c594b
    FMUL float ptr [0x0065dca8]         ; 004c594d | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c5953
    FLD float ptr [EAX + 0x4]           ; 004c5955
    FMUL float ptr [0x0065dca8]         ; 004c5958 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c595e
    FLD float ptr [EAX + 0x8]           ; 004c5961
    FMUL float ptr [0x0065dca8]         ; 004c5964 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c596a
    LEA EAX,[ESP + 0xa0]                ; 004c596d
    PUSH EAX                            ; 004c5974
    MOV EAX,dword ptr [EDX]             ; 004c5975 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004c5977
    PUSH EAX                            ; 004c597a
    XOR ESI,ESI                         ; 004c597b
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c597d
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0xc0]                ; 004c5982
    LEA EAX,[ESP + 0x3c]                ; 004c5989
    ADD ESP,0x8                         ; 004c598d
    MOV EDX,dword ptr [0x006703ec]      ; 004c5990 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x38],ESI      ; 004c5996
    FLD float ptr [EAX]                 ; 004c599a
    FMUL float ptr [0x0065dca8]         ; 004c599c | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c59a2
    FLD float ptr [EAX + 0x4]           ; 004c59a4
    FMUL float ptr [0x0065dca8]         ; 004c59a7 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c59ad
    FLD float ptr [EAX + 0x8]           ; 004c59b0
    FMUL float ptr [0x0065dca8]         ; 004c59b3 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c59b9
    LEA EAX,[ESP + 0xb8]                ; 004c59bc
    PUSH EAX                            ; 004c59c3
    MOV EAX,dword ptr [EDX]             ; 004c59c4 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 004c59c6
    PUSH EAX                            ; 004c59c9
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c59ca
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c59cf
    MOV DL,byte ptr [ESP + 0x37]        ; 004c59d2
    LEA EBX,[ESP + 0xd0]                ; 004c59d6
    XOR DL,0x80                         ; 004c59dd
    LEA EAX,[ESP + 0x34]                ; 004c59e0
    MOV byte ptr [ESP + 0x37],DL        ; 004c59e4
    MOV EDX,dword ptr [0x006703ec]      ; 004c59e8 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c59ee
    FMUL float ptr [0x0065dca8]         ; 004c59f0 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c59f6
    FLD float ptr [EAX + 0x4]           ; 004c59f8
    FMUL float ptr [0x0065dca8]         ; 004c59fb | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c5a01
    FLD float ptr [EAX + 0x8]           ; 004c5a04
    FMUL float ptr [0x0065dca8]         ; 004c5a07 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c5a0d
    LEA EAX,[ESP + 0xd0]                ; 004c5a10
    PUSH EAX                            ; 004c5a17
    MOV EAX,dword ptr [EDX]             ; 004c5a18 | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 004c5a1a
    PUSH EAX                            ; 004c5a1f
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c5a20
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c5a25
    LEA EAX,[ESP + 0xc]                 ; 004c5a28
    PUSH EAX                            ; 004c5a2c
    MOV EDI,dword ptr [0x006703ec]      ; 004c5a2d | g_CDemonRendererPtr2
    PUSH EDI                            ; 004c5a33 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0 ; 004c5a34
        ;   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004c5a39
    MOV EBP,dword ptr [0x006703ec]      ; 004c5a3c | g_CDemonRendererPtr2
    PUSH EBP                            ; 004c5a42 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 004c5a43
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004c5a48
    PUSH 0x0                            ; 004c5a4b
        ;   Label: LAB_004c5a4b
    MOV EAX,[0x006703ec]                ; 004c5a4d | g_CDemonRendererPtr2
    PUSH EAX                            ; 004c5a52 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c5a53
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c5a58
    POP EBX                             ; 004c5a5b
    POP ESI                             ; 004c5a5c
    POP EDI                             ; 004c5a5d
    ADD ESP,0xd8                        ; 004c5a5e
    POP EBP                             ; 004c5a64
    RET                                 ; 004c5a65
    MOV EAX,0x80000                     ; 004c5a66
        ;   Label: LAB_004c5a66
    MOV EDI,0xf80000                    ; 004c5a6b | g_LightBufferPool[11][183800]
    MOV [0x00688030],EAX                ; 004c5a70 | g_RenderVertexBuffer[0].v
    MOV [0x0068805c],EAX                ; 004c5a75 | g_RenderVertexBuffer[1].u
    MOV [0x00688060],EAX                ; 004c5a7a | g_RenderVertexBuffer[1].v
    MOV [0x0068808c],EAX                ; 004c5a7f | g_RenderVertexBuffer[2].u
    MOV dword ptr [0x00688090],EDI      ; 004c5a84 | g_RenderVertexBuffer[2].v
    MOV dword ptr [0x006880bc],EDI      ; 004c5a8a | g_RenderVertexBuffer[3].u
    MOV dword ptr [0x006880c0],EDI      ; 004c5a90 | g_RenderVertexBuffer[3].v
    MOV dword ptr [0x0068802c],EDI      ; 004c5a96 | g_RenderVertexBuffer[0].u
    JMP 0x004c57f8                      ; 004c5a9c
        ;   XREF to: 004c57f8 (UNCONDITIONAL_JUMP)  ; LAB_004c57f8
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c5aa1
        ;   Label: LAB_004c5aa1
    MOV dword ptr [ESP + 0x34],EAX      ; 004c5aa4
    JMP 0x004c58e2                      ; 004c5aa8
        ;   XREF to: 004c58e2 (UNCONDITIONAL_JUMP)  ; LAB_004c58e2
    MOV EAX,[0x006703ec]                ; 004c5aad | g_CDemonRendererPtr2
        ;   Label: LAB_004c5aad
    LEA EBX,[ESP + 0x4c]                ; 004c5ab2
    MOV EDX,dword ptr [EAX]             ; 004c5ab6 | g_CDemonRendererInstance
    MOV EAX,ESI                         ; 004c5ab8
    FLD float ptr [EAX]                 ; 004c5aba
    FMUL float ptr [0x0065dca8]         ; 004c5abc | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c5ac2
    FLD float ptr [EAX + 0x4]           ; 004c5ac4
    FMUL float ptr [0x0065dca8]         ; 004c5ac7 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c5acd
    FLD float ptr [EAX + 0x8]           ; 004c5ad0
    FMUL float ptr [0x0065dca8]         ; 004c5ad3 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c5ad9
    LEA EAX,[ESP + 0x4c]                ; 004c5adc
    PUSH EAX                            ; 004c5ae0
    PUSH EDX                            ; 004c5ae1
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 004c5ae2
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 004c5ae7 | g_CDemonRendererPtr2
    MOV EAX,dword ptr [EAX]             ; 004c5aec | g_CDemonRendererInstance
    ADD ESP,0x8                         ; 004c5aee
    LEA EDX,[EAX + 0x30]                ; 004c5af1
    LEA EBX,[ESP + 0x7c]                ; 004c5af4
    MOV EAX,ESI                         ; 004c5af8
    FLD float ptr [EAX]                 ; 004c5afa
    FMUL float ptr [0x0065dca8]         ; 004c5afc | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c5b02
    FLD float ptr [EAX + 0x4]           ; 004c5b04
    FMUL float ptr [0x0065dca8]         ; 004c5b07 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c5b0d
    FLD float ptr [EAX + 0x8]           ; 004c5b10
    FMUL float ptr [0x0065dca8]         ; 004c5b13 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c5b19
    LEA EAX,[ESP + 0x7c]                ; 004c5b1c
    PUSH EAX                            ; 004c5b20
    PUSH EDX                            ; 004c5b21
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 004c5b22
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 004c5b27 | g_CDemonRendererPtr2
    LEA EDI,[EBP + 0x1c]                ; 004c5b2c
    MOV EAX,dword ptr [EAX]             ; 004c5b2f | g_CDemonRendererInstance
    ADD ESP,0x8                         ; 004c5b31
    LEA EDX,[EAX + 0x60]                ; 004c5b34
    LEA EBX,[ESP + 0xac]                ; 004c5b37
    MOV EAX,EDI                         ; 004c5b3e
    FLD float ptr [EAX]                 ; 004c5b40
    FMUL float ptr [0x0065dca8]         ; 004c5b42 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c5b48
    FLD float ptr [EAX + 0x4]           ; 004c5b4a
    FMUL float ptr [0x0065dca8]         ; 004c5b4d | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c5b53
    FLD float ptr [EAX + 0x8]           ; 004c5b56
    FMUL float ptr [0x0065dca8]         ; 004c5b59 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c5b5f
    LEA EAX,[ESP + 0xac]                ; 004c5b62
    PUSH EAX                            ; 004c5b69
    PUSH EDX                            ; 004c5b6a
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 004c5b6b
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 004c5b70 | g_CDemonRendererPtr2
    MOV EAX,dword ptr [EAX]             ; 004c5b75 | g_CDemonRendererInstance
    ADD ESP,0x8                         ; 004c5b77
    LEA EDX,[EAX + 0x90]                ; 004c5b7a
    LEA EBX,[ESP + 0x58]                ; 004c5b80
    MOV EAX,EDI                         ; 004c5b84
    FLD float ptr [EAX]                 ; 004c5b86
    FMUL float ptr [0x0065dca8]         ; 004c5b88 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c5b8e
    FLD float ptr [EAX + 0x4]           ; 004c5b90
    FMUL float ptr [0x0065dca8]         ; 004c5b93 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c5b99
    FLD float ptr [EAX + 0x8]           ; 004c5b9c
    FMUL float ptr [0x0065dca8]         ; 004c5b9f | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c5ba5
    LEA EAX,[ESP + 0x58]                ; 004c5ba8
    PUSH EAX                            ; 004c5bac
    PUSH EDX                            ; 004c5bad
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 004c5bae
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [EBP + 0x18]          ; 004c5bb3
    MOV EDX,dword ptr [0x006703ec]      ; 004c5bb6 | g_CDemonRendererPtr2
    FLD double ptr [0x00629fbb]         ; 004c5bbc | DOUBLE_00629fbb
    FXCH                                ; 004c5bc2
    FMUL ST1                            ; 004c5bc4
    MOV EAX,dword ptr [EDX]             ; 004c5bc6 | g_CDemonRendererInstance
    FLD float ptr [EBP + 0x28]          ; 004c5bc8
    ADD ESP,0x8                         ; 004c5bcb
    MOV dword ptr [EAX + 0x10],0x80000000 ; 004c5bce
    FXCH                                ; 004c5bd5
    CALL crt_math.c_round_FUN_005fe6b0  ; 004c5bd7
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV EBX,dword ptr [EDX]             ; 004c5bdc | g_CDemonRendererInstance
    FISTP dword ptr [ESP + 0xdc]        ; 004c5bde
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004c5be5
    SUB dword ptr [EBX + 0x4],EAX       ; 004c5bec
    MOV EAX,dword ptr [EDX]             ; 004c5bef | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x40],0x80000000 ; 004c5bf1
    MOV EBX,dword ptr [EDX]             ; 004c5bf8 | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004c5bfa
    ADD dword ptr [EBX + 0x34],EAX      ; 004c5c01
    MOV EAX,dword ptr [EDX]             ; 004c5c04 | g_CDemonRendererInstance
    FMULP                               ; 004c5c06
    MOV dword ptr [EAX + 0x70],0x80000000 ; 004c5c08
    CALL crt_math.c_round_FUN_005fe6b0  ; 004c5c0f
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV EBX,dword ptr [EDX]             ; 004c5c14 | g_CDemonRendererInstance
    FISTP dword ptr [ESP + 0xe0]        ; 004c5c16
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004c5c1d
    ADD dword ptr [EBX + 0x64],EAX      ; 004c5c24
    MOV EAX,dword ptr [EDX]             ; 004c5c27 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0xa0],0x80000000 ; 004c5c29
    MOV EBX,dword ptr [EDX]             ; 004c5c33 | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004c5c35
    MOV ECX,dword ptr [EBX + 0x94]      ; 004c5c3c
    SUB ECX,EAX                         ; 004c5c42
    LEA EAX,[ESP + 0xc]                 ; 004c5c44
    PUSH EAX                            ; 004c5c48
    PUSH EDX                            ; 004c5c49 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x94],ECX      ; 004c5c4a
    LEA EBX,[ESP + 0x9c]                ; 004c5c50
    CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0 ; 004c5c57
        ;   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EDX,dword ptr [0x006703ec]      ; 004c5c5c | g_CDemonRendererPtr2
    ADD ESP,0x8                         ; 004c5c62
    MOV EAX,ESI                         ; 004c5c65
    MOV EDX,dword ptr [EDX]             ; 004c5c67 | g_CDemonRendererInstance
    FLD float ptr [EAX]                 ; 004c5c69
    FMUL float ptr [0x0065dca8]         ; 004c5c6b | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c5c71
    FLD float ptr [EAX + 0x4]           ; 004c5c73
    FMUL float ptr [0x0065dca8]         ; 004c5c76 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c5c7c
    FLD float ptr [EAX + 0x8]           ; 004c5c7f
    FMUL float ptr [0x0065dca8]         ; 004c5c82 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c5c88
    LEA EAX,[ESP + 0x94]                ; 004c5c8b
    PUSH EAX                            ; 004c5c92
    PUSH EDX                            ; 004c5c93
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 004c5c94
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 004c5c99 | g_CDemonRendererPtr2
    LEA EBX,[ESP + 0x78]                ; 004c5c9e
    ADD ESP,0x8                         ; 004c5ca2
    MOV EDX,dword ptr [EAX]             ; 004c5ca5 | g_CDemonRendererInstance
    MOV EAX,ESI                         ; 004c5ca7
    FLD float ptr [EAX]                 ; 004c5ca9
    FMUL float ptr [0x0065dca8]         ; 004c5cab | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c5cb1
    FLD float ptr [EAX + 0x4]           ; 004c5cb3
    FMUL float ptr [0x0065dca8]         ; 004c5cb6 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c5cbc
    FLD float ptr [EAX + 0x8]           ; 004c5cbf
    FMUL float ptr [0x0065dca8]         ; 004c5cc2 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c5cc8
    LEA EAX,[ESP + 0x70]                ; 004c5ccb
    PUSH EAX                            ; 004c5ccf
    ADD EDX,0x30                        ; 004c5cd0
    PUSH EDX                            ; 004c5cd3
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 004c5cd4
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 004c5cd9 | g_CDemonRendererPtr2
    LEA EBX,[ESP + 0x48]                ; 004c5cde
    ADD ESP,0x8                         ; 004c5ce2
    MOV EDX,dword ptr [EAX]             ; 004c5ce5 | g_CDemonRendererInstance
    MOV EAX,EDI                         ; 004c5ce7
    FLD float ptr [EAX]                 ; 004c5ce9
    FMUL float ptr [0x0065dca8]         ; 004c5ceb | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c5cf1
    FLD float ptr [EAX + 0x4]           ; 004c5cf3
    FMUL float ptr [0x0065dca8]         ; 004c5cf6 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c5cfc
    FLD float ptr [EAX + 0x8]           ; 004c5cff
    FMUL float ptr [0x0065dca8]         ; 004c5d02 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c5d08
    LEA EAX,[ESP + 0x40]                ; 004c5d0b
    PUSH EAX                            ; 004c5d0f
    ADD EDX,0x60                        ; 004c5d10
    PUSH EDX                            ; 004c5d13
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 004c5d14
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 004c5d19 | g_CDemonRendererPtr2
    MOV EAX,dword ptr [EAX]             ; 004c5d1e | g_CDemonRendererInstance
    ADD ESP,0x8                         ; 004c5d20
    LEA EDX,[EAX + 0x90]                ; 004c5d23
    LEA EBX,[ESP + 0x64]                ; 004c5d29
    MOV EAX,EDI                         ; 004c5d2d
    FLD float ptr [EAX]                 ; 004c5d2f
    FMUL float ptr [0x0065dca8]         ; 004c5d31 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c5d37
    FLD float ptr [EAX + 0x4]           ; 004c5d39
    FMUL float ptr [0x0065dca8]         ; 004c5d3c | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c5d42
    FLD float ptr [EAX + 0x8]           ; 004c5d45
    FMUL float ptr [0x0065dca8]         ; 004c5d48 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c5d4e
    LEA EAX,[ESP + 0x64]                ; 004c5d51
    PUSH EAX                            ; 004c5d55
    PUSH EDX                            ; 004c5d56
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 004c5d57
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c5d5c
    MOV ESI,dword ptr [0x006703ec]      ; 004c5d5f | g_CDemonRendererPtr2
    MOV EAX,dword ptr [ESI]             ; 004c5d65 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x10],0x80000000 ; 004c5d67
    MOV EDX,dword ptr [ESI]             ; 004c5d6e | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004c5d70
    SUB dword ptr [EDX],EAX             ; 004c5d77
    MOV EAX,dword ptr [ESI]             ; 004c5d79 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x40],0x80000000 ; 004c5d7b
    MOV EDX,dword ptr [ESI]             ; 004c5d82 | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004c5d84
    ADD dword ptr [EDX + 0x30],EAX      ; 004c5d8b
    MOV EAX,dword ptr [ESI]             ; 004c5d8e | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x70],0x80000000 ; 004c5d90
    MOV EDX,dword ptr [ESI]             ; 004c5d97 | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004c5d99
    ADD dword ptr [EDX + 0x60],EAX      ; 004c5da0
    MOV EAX,dword ptr [ESI]             ; 004c5da3 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0xa0],0x80000000 ; 004c5da5
    MOV EDX,dword ptr [ESI]             ; 004c5daf | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004c5db1
    MOV ECX,dword ptr [EDX + 0x90]      ; 004c5db8
    SUB ECX,EAX                         ; 004c5dbe
    LEA EAX,[ESP + 0xc]                 ; 004c5dc0
    PUSH EAX                            ; 004c5dc4
    PUSH ESI                            ; 004c5dc5 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x90],ECX      ; 004c5dc6
    CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0 ; 004c5dcc
        ;   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004c5dd1
    JMP 0x004c5a4b                      ; 004c5dd4
        ;   XREF to: 004c5a4b (UNCONDITIONAL_JUMP)  ; LAB_004c5a4b

