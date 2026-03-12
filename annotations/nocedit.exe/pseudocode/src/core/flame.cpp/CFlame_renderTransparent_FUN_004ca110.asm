; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_flame_cpp_CFlame_renderTransparent_FUN_004ca110(CFlame *this_ptr)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4[973]  Stack[-0x1088]:3892  auStackY_1088
; SMRGLHeaderPrimitive Stack[-0x144]:24  SStack_144
; SMRGLHeaderPrimitive Stack[-0x11c]:24  SStack_11c
; CBoundingBox3D   Stack[-0xf4]:24  local_f4
; CVector3i        Stack[-0xdc]:12  CStack_dc
; CVector3i        Stack[-0xd0]:12  CStack_d0
; CVector3i        Stack[-0xc4]:12  CStack_c4
; CVector3i        Stack[-0xb8]:12  CStack_b8
; CVector3i        Stack[-0xac]:12  CStack_ac
; CVector3i        Stack[-0xa0]:12  CStack_a0
; CVector3i        Stack[-0x94]:12  CStack_94
; CVector3i        Stack[-0x88]:12  CStack_88
; float            Stack[-0x7c]:4  fStack_7c
; float            Stack[-0x78]:4  fStack_78
; float            Stack[-0x74]:4  fStack_74
; CVector3i        Stack[-0x70]:12  CStack_70
; CVector3i        Stack[-0x64]:12  CStack_64
; CVector3i        Stack[-0x58]:12  CStack_58
; float            Stack[-0x4c]:4  fStack_4c
; float            Stack[-0x48]:4  fStack_48
; float            Stack[-0x44]:4  fStack_44
; CVector3i        Stack[-0x40]:12  CStack_40
; CVector3i        Stack[-0x34]:12  CStack_34
; CVector3i        Stack[-0x28]:12  CStack_28
; float            Stack[-0x1c]:4  fStack_1c
; int              Stack[-0x18]:4  iStack_18
; int              Stack[-0x14]:4  iStack_14
; float            Stack[-0x10]:4  fStack_10
;
; XREF[4]:
;   core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00419740 at 004197dd
;   core_crossbow.cpp_CCrossbow_renderTransparent_FUN_00448e80 at 00448e96
;   core_flamecan.cpp_CFlameCan_renderTransparent_FUN_004cb550 at 004cb56d
;   core_vessel.cpp_CCryptVessel_renderTransparent_FUN_005e98b0 at 005e9a11
;
; Referenced Globals:
;   float FLOAT_0062a126 = 0.5
;   double DOUBLE_0062a12e = 2
;   double DOUBLE_0062a136 = 0.5
;   float FLOAT_0065e010 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   SMRGLTextureBasic[40] SMRGLTextureBasic_ARRAY_0067b100
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   undefined4 g_RenderVertexBuffer[0].r
;   undefined4 g_RenderVertexBuffer[0].g
;   undefined4 g_RenderVertexBuffer[0].b
;   undefined4 g_RenderVertexBuffer[0].a
;   undefined4 g_RenderVertexBuffer[1].u
;   ... and 24 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0
;   core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_0056d140
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
;   engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ca110
        ;   Label: core_flame.cpp_CFlame_renderTransparent_FUN_004ca110
    PUSH EDI                            ; 004ca111
    PUSH EBP                            ; 004ca112
    SUB ESP,0x138                       ; 004ca113
    MOV EBP,dword ptr [ESP + 0x148]     ; 004ca119
    CMP dword ptr [EBP + 0x1b4],0x0     ; 004ca120
    JNZ 0x004ca140                      ; 004ca127
        ;   XREF to: 004ca140 (CONDITIONAL_JUMP)  ; LAB_004ca140
    MOV EAX,[0x0067d550]                ; 004ca129 | g_CDemonMissionPtr
    CMP dword ptr [EAX + 0x4],0x0       ; 004ca12e | DAT_02f33744
    JNZ 0x004ca140                      ; 004ca132
        ;   XREF to: 004ca140 (CONDITIONAL_JUMP)  ; LAB_004ca140
    XOR EAX,EAX                         ; 004ca134
        ;   Label: LAB_004ca134
    ADD ESP,0x138                       ; 004ca136
    POP EBP                             ; 004ca13c
    POP EDI                             ; 004ca13d
    POP EBX                             ; 004ca13e
    RET                                 ; 004ca13f
    MOV EBX,dword ptr [0x006703ec]      ; 004ca140 | g_CDemonRendererPtr2 | g_CDemonRendererInstance
        ;   Label: LAB_004ca140
    PUSH EBX                            ; 004ca146 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 004ca147
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004ca14c
    TEST EAX,EAX                        ; 004ca14f
    JNZ 0x004ca134                      ; 004ca151
        ;   XREF to: 004ca134 (CONDITIONAL_JUMP)  ; LAB_004ca134
    MOV EAX,[0x0067d550]                ; 004ca153 | g_CDemonMissionPtr
    CMP dword ptr [EAX + 0x4],0x0       ; 004ca158 | DAT_02f33744
    JZ 0x004ca174                       ; 004ca15c
        ;   XREF to: 004ca174 (CONDITIONAL_JUMP)  ; LAB_004ca174
    MOV EDI,dword ptr [EAX + 0x28]      ; 004ca15e | DAT_02f33768
    CMP EBP,EDI                         ; 004ca161
    JNZ 0x004ca174                      ; 004ca163
        ;   XREF to: 004ca174 (CONDITIONAL_JUMP)  ; LAB_004ca174
    LEA EAX,[EDI + 0x168]               ; 004ca165
    PUSH EAX                            ; 004ca16b
    CALL core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0 ; 004ca16c
        ;   XREF to: 004715e0 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0(CDemonGlobe * this_ptr)
    ADD ESP,0x4                         ; 004ca171
    PUSH EBP                            ; 004ca174
        ;   Label: LAB_004ca174
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 004ca175
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    MOV EAX,dword ptr [EBP + 0x298]     ; 004ca17a
    ADD ESP,0x4                         ; 004ca180
    TEST EAX,EAX                        ; 004ca183
    JZ 0x004ca1a8                       ; 004ca185
        ;   XREF to: 004ca1a8 (CONDITIONAL_JUMP)  ; LAB_004ca1a8
    LEA EAX,[ESP + 0x50]                ; 004ca187
    PUSH EAX                            ; 004ca18b
    MOV EDX,dword ptr [EBP + 0x154]     ; 004ca18c
    PUSH EBP                            ; 004ca192
    CALL dword ptr [EDX + 0x14]         ; 004ca193
    ADD ESP,0x8                         ; 004ca196
    PUSH EAX                            ; 004ca199
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 004ca19a
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 004ca19f
    MOV dword ptr [EBP + 0x290],EAX     ; 004ca1a2
    CMP dword ptr [EBP + 0x290],0x0     ; 004ca1a8
        ;   Label: LAB_004ca1a8
    JZ 0x004ca1f0                       ; 004ca1af
        ;   XREF to: 004ca1f0 (CONDITIONAL_JUMP)  ; LAB_004ca1f0
    LEA EAX,[EBP + 0x158]               ; 004ca1b1
    FLD float ptr [EAX + 0x4]           ; 004ca1b7
    FMUL ST0                            ; 004ca1ba
    FLD float ptr [EAX]                 ; 004ca1bc
    FMUL ST0                            ; 004ca1be
    FADDP                               ; 004ca1c0
    FLD float ptr [EAX + 0x8]           ; 004ca1c2
    FMUL ST0                            ; 004ca1c5
    FADDP                               ; 004ca1c7
    FSQRT                               ; 004ca1c9
    FMUL float ptr [EBP + 0x1ac]        ; 004ca1cb
    FLD1                                ; 004ca1d1
    FCOMPP                              ; 004ca1d3
    FNSTSW AX                           ; 004ca1d5
    SAHF                                ; 004ca1d7
    JNC 0x004ca1f0                      ; 004ca1d8
        ;   XREF to: 004ca1f0 (CONDITIONAL_JUMP)  ; LAB_004ca1f0
    LEA EAX,[EBP + 0x168]               ; 004ca1da
    PUSH EAX                            ; 004ca1e0
    MOV ECX,dword ptr [0x006810c8]      ; 004ca1e1 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 004ca1e7 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_0056d140 ; 004ca1e8
        ;   XREF to: 0056d140 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_0056d140(CDemonSet * this_ptr, CDemonGlobe * globe)
    ADD ESP,0x8                         ; 004ca1ed
    PUSH ESI                            ; 004ca1f0
        ;   Label: LAB_004ca1f0
    CMP dword ptr [EBP + 0x290],0x0     ; 004ca1f1
    JZ 0x004ca65d                       ; 004ca1f8
        ;   XREF to: 004ca65d (CONDITIONAL_JUMP)  ; LAB_004ca65d
    CMP dword ptr [EBP + 0x1a8],0x3     ; 004ca1fe
    JZ 0x004ca65d                       ; 004ca205
        ;   XREF to: 004ca65d (CONDITIONAL_JUMP)  ; LAB_004ca65d
    MOV EDI,dword ptr [0x006703ec]      ; 004ca20b | g_CDemonRendererPtr2
    PUSH EDI                            ; 004ca211 | g_CDemonRendererInstance
    LEA ESI,[ESP + 0xe8]                ; 004ca212
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0 ; 004ca219
        ;   XREF to: 0048c7e0 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0(CDemonRenderer * this_ptr, CVector3i * output)
    LEA EDI,[ESP + 0xf4]                ; 004ca21e
    LEA ESI,[ESP + 0xe8]                ; 004ca225
    ADD ESP,0x4                         ; 004ca22c
    XOR EAX,EAX                         ; 004ca22f
    MOVSD ES:EDI,ESI                    ; 004ca231
    MOVSD ES:EDI,ESI                    ; 004ca232
    MOVSD ES:EDI,ESI                    ; 004ca233
    PUSH EAX                            ; 004ca234
    MOV dword ptr [ESP + 0xf4],EAX      ; 004ca235
    MOV dword ptr [ESP + 0xf8],EAX      ; 004ca23c
    LEA EAX,[ESP + 0xf4]                ; 004ca243
    PUSH EAX                            ; 004ca24a
    MOV ECX,dword ptr [0x006703ec]      ; 004ca24b | g_CDemonRendererPtr2
    PUSH ECX                            ; 004ca251 | g_CDemonRendererInstance
    MOV EBX,0x1                         ; 004ca252
    XOR ESI,ESI                         ; 004ca257
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0 ; 004ca259
        ;   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004ca25e
    MOV EDX,dword ptr [0x006703ec]      ; 004ca261 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x9c],ESI      ; 004ca267
    MOV dword ptr [ESP + 0xa0],ESI      ; 004ca26e
    MOV dword ptr [ESP + 0xa4],ESI      ; 004ca275
    PUSH EDX                            ; 004ca27c | g_CDemonRendererInstance
    LEA ESI,[ESP + 0xac]                ; 004ca27d
    LEA EDI,[ESP + 0xf4]                ; 004ca284
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0 ; 004ca28b
        ;   XREF to: 0048c7e0 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0xac]                ; 004ca290
    MOV dword ptr [ESP + 0x134],EBX     ; 004ca297
    ADD ESP,0x4                         ; 004ca29e
    MOVSD ES:EDI,ESI                    ; 004ca2a1
    MOVSD ES:EDI,ESI                    ; 004ca2a2
    MOVSD ES:EDI,ESI                    ; 004ca2a3
    MOV ECX,dword ptr [ESP + 0xf0]      ; 004ca2a4
    CMP ECX,0x2000                      ; 004ca2ab
    JLE 0x004caa26                      ; 004ca2b1
        ;   XREF to: 004caa26 (CONDITIONAL_JUMP)  ; LAB_004caa26
    MOV dword ptr [ESP + 0x130],0x3     ; 004ca2b7
        ;   Label: LAB_004ca2b7
    MOV EDI,dword ptr [ESP + 0x130]     ; 004ca2c2
        ;   Label: LAB_004ca2c2
    XOR ESI,ESI                         ; 004ca2c9
    TEST EDI,EDI                        ; 004ca2cb
    JLE 0x004ca64e                      ; 004ca2cd
        ;   XREF to: 004ca64e (CONDITIONAL_JUMP)  ; LAB_004ca64e
    LEA EDI,[EBP + 0x20]                ; 004ca2d3
    PUSH 0x0                            ; 004ca2d6
        ;   Label: LAB_004ca2d6
    LEA EAX,[ESP + 0xa0]                ; 004ca2d8
    PUSH EAX                            ; 004ca2df
    MOV EAX,[0x006703ec]                ; 004ca2e0 | g_CDemonRendererPtr2
    PUSH EAX                            ; 004ca2e5 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0 ; 004ca2e6
        ;   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    FLD float ptr [EBP + 0x158]         ; 004ca2eb
    FMUL float ptr [0x0062a126]         ; 004ca2f1 | FLOAT_0062a126
    LEA EBX,[ESP + 0x78]                ; 004ca2f7
    ADD ESP,0xc                         ; 004ca2fb
    XOR EDX,EDX                         ; 004ca2fe
    LEA EAX,[ESP + 0xcc]                ; 004ca300
    MOV dword ptr [ESP + 0xd0],EDX      ; 004ca307
    MOV dword ptr [ESP + 0xd4],EDX      ; 004ca30e
    FSTP float ptr [ESP + 0xcc]         ; 004ca315
    MOV EDX,dword ptr [0x006703ec]      ; 004ca31c | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004ca322
    FMUL float ptr [0x0065e010]         ; 004ca324 | FLOAT_0065e010
    FISTP dword ptr [EBX]               ; 004ca32a
    FLD float ptr [EAX + 0x4]           ; 004ca32c
    FMUL float ptr [0x0065e010]         ; 004ca32f | FLOAT_0065e010
    FISTP dword ptr [EBX + 0x4]         ; 004ca335
    FLD float ptr [EAX + 0x8]           ; 004ca338
    FMUL float ptr [0x0065e010]         ; 004ca33b | FLOAT_0065e010
    FISTP dword ptr [EBX + 0x8]         ; 004ca341
    LEA EAX,[ESP + 0x6c]                ; 004ca344
    PUSH EAX                            ; 004ca348
    MOV EAX,dword ptr [EDX]             ; 004ca349 | g_CDemonRendererInstance
    PUSH EAX                            ; 004ca34b
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004ca34c
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ca351
    MOV EAX,dword ptr [EBP + 0x15c]     ; 004ca354
    LEA EBX,[ESP + 0x78]                ; 004ca35a
    MOV dword ptr [ESP + 0xd0],EAX      ; 004ca35e
    LEA EAX,[ESP + 0xcc]                ; 004ca365
    MOV EDX,dword ptr [0x006703ec]      ; 004ca36c | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004ca372
    FMUL float ptr [0x0065e010]         ; 004ca374 | FLOAT_0065e010
    FISTP dword ptr [EBX]               ; 004ca37a
    FLD float ptr [EAX + 0x4]           ; 004ca37c
    FMUL float ptr [0x0065e010]         ; 004ca37f | FLOAT_0065e010
    FISTP dword ptr [EBX + 0x4]         ; 004ca385
    FLD float ptr [EAX + 0x8]           ; 004ca388
    FMUL float ptr [0x0065e010]         ; 004ca38b | FLOAT_0065e010
    FISTP dword ptr [EBX + 0x8]         ; 004ca391
    LEA EAX,[ESP + 0x78]                ; 004ca394
    PUSH EAX                            ; 004ca398
    MOV EAX,dword ptr [EDX]             ; 004ca399 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004ca39b
    PUSH EAX                            ; 004ca39e
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004ca39f
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ca3a4
    MOV AH,byte ptr [ESP + 0xcf]        ; 004ca3a7
    XOR AH,0x80                         ; 004ca3ae
    LEA EBX,[ESP + 0x90]                ; 004ca3b1
    MOV byte ptr [ESP + 0xcf],AH        ; 004ca3b8
    LEA EAX,[ESP + 0xcc]                ; 004ca3bf
    MOV EDX,dword ptr [0x006703ec]      ; 004ca3c6 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004ca3cc
    FMUL float ptr [0x0065e010]         ; 004ca3ce | FLOAT_0065e010
    FISTP dword ptr [EBX]               ; 004ca3d4
    FLD float ptr [EAX + 0x4]           ; 004ca3d6
    FMUL float ptr [0x0065e010]         ; 004ca3d9 | FLOAT_0065e010
    FISTP dword ptr [EBX + 0x4]         ; 004ca3df
    FLD float ptr [EAX + 0x8]           ; 004ca3e2
    FMUL float ptr [0x0065e010]         ; 004ca3e5 | FLOAT_0065e010
    FISTP dword ptr [EBX + 0x8]         ; 004ca3eb
    LEA EAX,[ESP + 0x90]                ; 004ca3ee
    PUSH EAX                            ; 004ca3f5
    MOV EAX,dword ptr [EDX]             ; 004ca3f6 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 004ca3f8
    PUSH EAX                            ; 004ca3fb
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004ca3fc
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ca401
    XOR EBX,EBX                         ; 004ca404
    LEA EAX,[ESP + 0xcc]                ; 004ca406
    MOV dword ptr [ESP + 0xd0],EBX      ; 004ca40d
    LEA EBX,[ESP + 0x114]               ; 004ca414
    MOV EDX,dword ptr [0x006703ec]      ; 004ca41b | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004ca421
    FMUL float ptr [0x0065e010]         ; 004ca423 | FLOAT_0065e010
    FISTP dword ptr [EBX]               ; 004ca429
    FLD float ptr [EAX + 0x4]           ; 004ca42b
    FMUL float ptr [0x0065e010]         ; 004ca42e | FLOAT_0065e010
    FISTP dword ptr [EBX + 0x4]         ; 004ca434
    FLD float ptr [EAX + 0x8]           ; 004ca437
    FMUL float ptr [0x0065e010]         ; 004ca43a | FLOAT_0065e010
    FISTP dword ptr [EBX + 0x8]         ; 004ca440
    LEA EAX,[ESP + 0x114]               ; 004ca443
    PUSH EAX                            ; 004ca44a
    MOV EAX,dword ptr [EDX]             ; 004ca44b | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 004ca44d
    PUSH EAX                            ; 004ca452
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004ca453
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ca458
    PUSH 0x0                            ; 004ca45b
    MOV EAX,[0x00823a74]                ; 004ca45d | g_CurrentSceneCamera
    PUSH EDI                            ; 004ca462
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004ca463
    PUSH EAX                            ; 004ca466
    CALL dword ptr [EDX + 0x4]          ; 004ca467
    MOV EDX,0xffff                      ; 004ca46a
    ADD ESP,0xc                         ; 004ca46f
    MOV EAX,[0x02d051f4]                ; 004ca472 | g_PerspectiveReciprocal
    MOV ECX,dword ptr [ESP + 0x130]     ; 004ca477
    SUB EDX,EAX                         ; 004ca47e
    CMP ECX,0x3                         ; 004ca480
    JNZ 0x004ca490                      ; 004ca483
        ;   XREF to: 004ca490 (CONDITIONAL_JUMP)  ; LAB_004ca490
    MOV EAX,EDX                         ; 004ca485
    SAR EDX,0x1f                        ; 004ca487
    SUB EAX,EDX                         ; 004ca48a
    SAR EAX,0x1                         ; 004ca48c
    MOV EDX,EAX                         ; 004ca48e
    MOV EBX,dword ptr [EBP + 0x1a8]     ; 004ca490
        ;   Label: LAB_004ca490
    CMP EBX,0x4                         ; 004ca496
    JNZ 0x004ca4a4                      ; 004ca499
        ;   XREF to: 004ca4a4 (CONDITIONAL_JUMP)  ; LAB_004ca4a4
    MOV EAX,EDX                         ; 004ca49b
    SAR EDX,0x1f                        ; 004ca49d
    IDIV EBX                            ; 004ca4a0
    MOV EDX,EAX                         ; 004ca4a2
    CMP dword ptr [EBP + 0x1a8],0x1     ; 004ca4a4
        ;   Label: LAB_004ca4a4
    JNZ 0x004ca4b8                      ; 004ca4ab
        ;   XREF to: 004ca4b8 (CONDITIONAL_JUMP)  ; LAB_004ca4b8
    MOV EAX,EDX                         ; 004ca4ad
    SAR EDX,0x1f                        ; 004ca4af
    SUB EAX,EDX                         ; 004ca4b2
    SAR EAX,0x1                         ; 004ca4b4
    MOV EDX,EAX                         ; 004ca4b6
    MOV dword ptr [0x00688070],EDX      ; 004ca4b8 | g_RenderVertexBuffer[1].a
        ;   Label: LAB_004ca4b8
    MOV dword ptr [0x006880a0],EDX      ; 004ca4be | g_RenderVertexBuffer[2].a
    MOV dword ptr [0x006880d0],EDX      ; 004ca4c4 | g_RenderVertexBuffer[3].a
    MOV dword ptr [0x00688040],EDX      ; 004ca4ca | g_RenderVertexBuffer[0].a
    MOV EDX,0xffff                      ; 004ca4d0
    MOV dword ptr [0x00688034],EDX      ; 004ca4d5 | g_RenderVertexBuffer[0].r
    MOV dword ptr [0x00688038],EDX      ; 004ca4db | g_RenderVertexBuffer[0].g
    MOV dword ptr [0x0068803c],EDX      ; 004ca4e1 | g_RenderVertexBuffer[0].b
    MOV dword ptr [0x00688064],EDX      ; 004ca4e7 | g_RenderVertexBuffer[1].r
    MOV dword ptr [0x00688068],EDX      ; 004ca4ed | g_RenderVertexBuffer[1].g
    MOV dword ptr [0x0068806c],EDX      ; 004ca4f3 | g_RenderVertexBuffer[1].b
    MOV dword ptr [0x00688094],EDX      ; 004ca4f9 | g_RenderVertexBuffer[2].r
    MOV dword ptr [0x00688098],EDX      ; 004ca4ff | g_RenderVertexBuffer[2].g
    MOV dword ptr [0x0068809c],EDX      ; 004ca505 | g_RenderVertexBuffer[2].b
    MOV dword ptr [0x006880c4],EDX      ; 004ca50b | g_RenderVertexBuffer[3].r
    MOV dword ptr [0x006880c8],EDX      ; 004ca511 | g_RenderVertexBuffer[3].g
    MOV dword ptr [0x006880cc],EDX      ; 004ca517 | g_RenderVertexBuffer[3].b
    CMP dword ptr [EBP + 0x294],0x0     ; 004ca51d
    JNZ 0x004caa37                      ; 004ca524
        ;   XREF to: 004caa37 (CONDITIONAL_JUMP)  ; LAB_004caa37
    MOV EBX,0xf80000                    ; 004ca52a | DAT_00f80000
    MOV ECX,0x80000                     ; 004ca52f
    MOV dword ptr [0x00688030],EBX      ; 004ca534 | g_RenderVertexBuffer[0].v
    MOV dword ptr [0x0068805c],ECX      ; 004ca53a | g_RenderVertexBuffer[1].u
    MOV dword ptr [0x00688060],ECX      ; 004ca540 | g_RenderVertexBuffer[1].v
    MOV dword ptr [0x0068808c],EBX      ; 004ca546 | g_RenderVertexBuffer[2].u
    MOV dword ptr [0x00688090],ECX      ; 004ca54c | g_RenderVertexBuffer[2].v
    MOV dword ptr [0x006880bc],EBX      ; 004ca552 | g_RenderVertexBuffer[3].u
    MOV dword ptr [0x006880c0],EBX      ; 004ca558 | g_RenderVertexBuffer[3].v
    MOV dword ptr [0x0068802c],ECX      ; 004ca55e | g_RenderVertexBuffer[0].u
        ;   Label: LAB_004ca55e
    FLD float ptr [EBP + 0x164]         ; 004ca564
    CALL crt_math.c_round_FUN_005fe6b0  ; 004ca56a
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x138]       ; 004ca56f
    MOV EAX,dword ptr [ESP + 0x138]     ; 004ca576
    MOV EDX,EAX                         ; 004ca57d
    MOV ECX,0x8                         ; 004ca57f
    SAR EDX,0x1f                        ; 004ca584
    IDIV ECX                            ; 004ca587
    IMUL EDX,EDX,0x18                   ; 004ca589
    IMUL EAX,dword ptr [EBP + 0x1a8],0xc0 ; 004ca58c
    ADD EAX,0x67b100                    ; 004ca596 | SMRGLTextureBasic_ARRAY_0067b100
    ADD EDX,EAX                         ; 004ca59b
    PUSH EDX                            ; 004ca59d
    MOV EBX,dword ptr [0x006703ec]      ; 004ca59e | g_CDemonRendererPtr2
    PUSH EBX                            ; 004ca5a4 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004ca5a5
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004ca5aa
    PUSH 0x1                            ; 004ca5ad
    MOV EAX,[0x006703ec]                ; 004ca5af | g_CDemonRendererPtr2
    PUSH EAX                            ; 004ca5b4 | g_CDemonRendererInstance
    MOV EBX,0x1                         ; 004ca5b5
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004ca5ba
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    MOV EDX,0x4                         ; 004ca5bf
    MOV EAX,0x2                         ; 004ca5c4
    ADD ESP,0x8                         ; 004ca5c9
    XOR ECX,ECX                         ; 004ca5cc
    MOV dword ptr [ESP + 0x30],EDX      ; 004ca5ce
    MOV dword ptr [ESP + 0x40],ECX      ; 004ca5d2
    MOV dword ptr [ESP + 0x3c],ECX      ; 004ca5d6
    MOV dword ptr [ESP + 0x38],ECX      ; 004ca5da
    MOV dword ptr [ESP + 0x34],ECX      ; 004ca5de
    MOV dword ptr [ESP + 0x4c],EAX      ; 004ca5e2
    LEA EAX,[ESP + 0x2c]                ; 004ca5e6
    MOV dword ptr [ESP + 0x44],ECX      ; 004ca5ea
    PUSH EAX                            ; 004ca5ee
    MOV ECX,dword ptr [0x006703ec]      ; 004ca5ef | g_CDemonRendererPtr2
    MOV EDX,0x3                         ; 004ca5f5
    PUSH ECX                            ; 004ca5fa | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x50],EBX      ; 004ca5fb
    MOV dword ptr [ESP + 0x58],EDX      ; 004ca5ff
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 ; 004ca603
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004ca608
    PUSH 0x0                            ; 004ca60b
    MOV EBX,dword ptr [0x006703ec]      ; 004ca60d | g_CDemonRendererPtr2
    PUSH EBX                            ; 004ca613 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004ca614
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004ca619
    MOV EAX,[0x006703ec]                ; 004ca61c | g_CDemonRendererPtr2
    PUSH EAX                            ; 004ca621 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 004ca622
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    MOV EBX,dword ptr [0x006703ec]      ; 004ca64e | g_CDemonRendererPtr2
        ;   Label: LAB_004ca64e
    PUSH EBX                            ; 004ca654 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 004ca655
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    PUSH EBP                            ; 004ca65d
        ;   Label: LAB_004ca65d
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 004ca65e
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    MOV ECX,dword ptr [EBP + 0x1a8]     ; 004ca663
    ADD ESP,0x4                         ; 004ca669
    CMP ECX,0x1                         ; 004ca66c
    JNZ 0x004caa15                      ; 004ca66f
        ;   XREF to: 004caa15 (CONDITIONAL_JUMP)  ; LAB_004caa15
    FLD float ptr [EBP + 0x15c]         ; 004ca675
    FMUL double ptr [0x0062a12e]        ; 004ca67b | DOUBLE_0062a12e
    MOV EBX,dword ptr [EBP + 0x290]     ; 004ca681
    FSTP float ptr [ESP + 0x12c]        ; 004ca687
    TEST EBX,EBX                        ; 004ca68e
    JZ 0x004caa15                       ; 004ca690
        ;   XREF to: 004caa15 (CONDITIONAL_JUMP)  ; LAB_004caa15
    LEA EAX,[ESP + 0xc0]                ; 004ca696
    PUSH EAX                            ; 004ca69d
    MOV ESI,dword ptr [0x006703ec]      ; 004ca69e | g_CDemonRendererPtr2
    PUSH ESI                            ; 004ca6a4 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800 ; 004ca6a5
        ;   XREF to: 0048c800 (UNCONDITIONAL_CALL)  ; float * engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800(CDemonRenderer * this_ptr, float * output)
    FLD float ptr [EBP + 0x15c]         ; 004ca6aa
    FMUL double ptr [0x0062a136]        ; 004ca6b0 | DOUBLE_0062a136
    ADD ESP,0x8                         ; 004ca6b6
    FSTP float ptr [ESP + 0x138]        ; 004ca6b9
    MOV EAX,dword ptr [ESP + 0x138]     ; 004ca6c0
    MOV dword ptr [ESP + 0x124],EAX     ; 004ca6c7
    LEA EAX,[ESP + 0x120]               ; 004ca6ce
    PUSH EAX                            ; 004ca6d5
    LEA EAX,[ESP + 0xc4]                ; 004ca6d6
    PUSH EAX                            ; 004ca6dd
    MOV EDX,dword ptr [0x006703ec]      ; 004ca6de | g_CDemonRendererPtr2
    XOR EDI,EDI                         ; 004ca6e4
    PUSH EDX                            ; 004ca6e6 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x12c],EDI     ; 004ca6e7
    MOV dword ptr [ESP + 0x134],EDI     ; 004ca6ee
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004ca6f5
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004ca6fa
    PUSH 0x3f828f5c                     ; 004ca6fd
    PUSH 0x3f7ae148                     ; 004ca702
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004ca707
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV EAX,dword ptr [EBP + 0x290]     ; 004caa15
        ;   Label: LAB_004caa15
    POP ESI                             ; 004caa1b
    ADD ESP,0x138                       ; 004caa1c
    POP EBP                             ; 004caa22
    POP EDI                             ; 004caa23
    POP EBX                             ; 004caa24
    RET                                 ; 004caa25
    CMP ECX,0xffffe000                  ; 004caa26
        ;   Label: LAB_004caa26
    JL 0x004ca2b7                       ; 004caa2c
        ;   XREF to: 004ca2b7 (CONDITIONAL_JUMP)  ; LAB_004ca2b7
    JMP 0x004ca2c2                      ; 004caa32
        ;   XREF to: 004ca2c2 (UNCONDITIONAL_JUMP)  ; LAB_004ca2c2
    MOV ECX,0xf80000                    ; 004caa37 | DAT_00f80000
        ;   Label: LAB_004caa37
    MOV EDX,0x80000                     ; 004caa3c
    MOV dword ptr [0x00688030],ECX      ; 004caa41 | g_RenderVertexBuffer[0].v
    MOV dword ptr [0x0068805c],ECX      ; 004caa47 | g_RenderVertexBuffer[1].u
    MOV dword ptr [0x00688060],EDX      ; 004caa4d | g_RenderVertexBuffer[1].v
    MOV dword ptr [0x0068808c],EDX      ; 004caa53 | g_RenderVertexBuffer[2].u
    MOV dword ptr [0x00688090],EDX      ; 004caa59 | g_RenderVertexBuffer[2].v
    MOV dword ptr [0x006880bc],EDX      ; 004caa5f | g_RenderVertexBuffer[3].u
    MOV dword ptr [0x006880c0],ECX      ; 004caa65 | g_RenderVertexBuffer[3].v
    JMP 0x004ca55e                      ; 004caa6b
        ;   XREF to: 004ca55e (UNCONDITIONAL_JUMP)  ; LAB_004ca55e

