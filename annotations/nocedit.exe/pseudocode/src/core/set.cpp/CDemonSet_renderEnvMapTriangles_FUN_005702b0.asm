; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderEnvMapTriangles_FUN_005702b0(CDemonSet *this_ptr,SInputFace *face_data,int count,int alpha)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SInputFace *     Stack[0x8]:4   face_data
; int              Stack[0xc]:4   count
; int              Stack[0x10]:4   alpha
; Local Variables:
; int[960]         Stack[-0x1020]:3840  aiStackY_1020
; SMRGLPrimitiveTriangle Stack[-0x118]:60  SStack_118
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  uStack_cc
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  uStack_8c
; CVector3i        Stack[-0x50]:12  local_50
; CVector3i        Stack[-0x44]:12  local_44
; CVector3i        Stack[-0x38]:12  local_38
; int              Stack[-0x2c]:4  local_2c
; int[6]           Stack[-0x28]:24  local_28
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderFaceListOrEnvMap_FUN_00570870 at 005708d3
;
; Referenced Globals:
;   float FLOAT_00662850 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   int g_CurrentAlphaValue = 0xff
;   CGame* g_CGamePtr = 02d81a9c
;   SMRGLTextureBasic g_EnvMapTexture
;   CDemonRenderer g_CDemonRendererInstance
;   int g_PerspectiveReciprocal
;   undefined4 g_CGameInstance.render_mode
;   CVector3f g_LightingReferencePosition
;   undefined4 g_LightingReferencePosition.y
;   undefined4 g_LightingReferencePosition.z
;   CVector3i[20000] g_TransformedVertexArray
;   undefined4 g_TransformedVertexArray[0].y
;   undefined4 g_TransformedVertexArray[0].z
;   CVector3f[20000] g_VertexNormalArray
;   ... and 2 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_0048c760
;   engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0048b1e0
;   engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0048b970
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;   engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0
;   engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005702b0
        ;   Label: core_set.cpp_CDemonSet_renderEnvMapTriangles_FUN_005702b0
    PUSH ESI                            ; 005702b1
    PUSH EDI                            ; 005702b2
    PUSH EBP                            ; 005702b3
    MOV EBP,ESP                         ; 005702b4
    SUB ESP,0x108                       ; 005702b6
    AND ESP,0xfffffff8                  ; 005702bc
    PUSH 0x6813e4                       ; 005702bf | g_EnvMapTexture
    MOV EDX,dword ptr [0x006703ec]      ; 005702c4 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 005702ca | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 005702cb
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EAX,[0x0067b654]                ; 005702d0 | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x1f4]     ; 005702d5 | g_CGameInstance.render_mode
    ADD ESP,0x8                         ; 005702db
    CMP ECX,0x2                         ; 005702de
    JNZ 0x00570672                      ; 005702e1
        ;   XREF to: 00570672 (CONDITIONAL_JUMP)  ; LAB_00570672
    MOV EAX,[0x006793b4]                ; 005702e7 | g_CurrentAlphaValue
    SHL EAX,0x8                         ; 005702ec
    MOV dword ptr [EBP + 0x20],EAX      ; 005702ef
    MOV EAX,[0x006703ec]                ; 005702f2 | g_CDemonRendererInstance | g_CDemonRendererPtr2
        ;   Label: LAB_005702f2
    PUSH EAX                            ; 005702f7 | g_CDemonRendererInstance
    LEA ESI,[ESP + 0xd8]                ; 005702f8
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_0048c760 ; 005702ff
        ;   XREF to: 0048c760 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_0048c760(CDemonRenderer * this_ptr, CVector3i * output)
    ADD ESP,0x4                         ; 00570304
    XOR EDX,EDX                         ; 00570307
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00570309
    MOV dword ptr [ESP + 0xf8],EDX      ; 0057030c
    TEST ECX,ECX                        ; 00570313
    JLE 0x0057066b                      ; 00570315
        ;   XREF to: 0057066b (CONDITIONAL_JUMP)  ; LAB_0057066b
    XOR EDX,EDX                         ; 0057031b
        ;   Label: LAB_0057031b
    MOV EAX,0x3                         ; 0057031d
    MOV dword ptr [ESP + 0x14],EDX      ; 00570322
    MOV dword ptr [ESP + 0x10],EDX      ; 00570326
    MOV dword ptr [ESP + 0xc],EDX       ; 0057032a
    MOV dword ptr [ESP + 0x8],EDX       ; 0057032e
    MOV EDX,dword ptr [EBP + 0x18]      ; 00570332
    MOV dword ptr [ESP + 0x4],EAX       ; 00570335
    XOR EAX,EAX                         ; 00570339
    MOV AX,word ptr [EDX]               ; 0057033b
    MOV dword ptr [ESP + 0x18],EAX      ; 0057033e
    XOR EAX,EAX                         ; 00570342
    MOV AX,word ptr [EDX + 0x2]         ; 00570344
    MOV dword ptr [ESP + 0x24],EAX      ; 00570348
    XOR EAX,EAX                         ; 0057034c
    MOV AX,word ptr [EDX + 0x4]         ; 0057034e
    MOV dword ptr [ESP + 0x30],EAX      ; 00570352
    XOR EAX,EAX                         ; 00570356
    MOV AX,word ptr [EDX + 0x6]         ; 00570358
    SHL EAX,0x8                         ; 0057035c
    MOV dword ptr [ESP + 0x1c],EAX      ; 0057035f
    XOR EAX,EAX                         ; 00570363
    MOV AX,word ptr [EDX + 0x8]         ; 00570365
    SHL EAX,0x8                         ; 00570369
    MOV dword ptr [ESP + 0x28],EAX      ; 0057036c
    XOR EAX,EAX                         ; 00570370
    MOV AX,word ptr [EDX + 0xa]         ; 00570372
    SHL EAX,0x8                         ; 00570376
    MOV dword ptr [ESP + 0x34],EAX      ; 00570379
    XOR EAX,EAX                         ; 0057037d
    MOV AX,word ptr [EDX + 0xc]         ; 0057037f
    SHL EAX,0x8                         ; 00570383
    MOV dword ptr [ESP + 0x20],EAX      ; 00570386
    XOR EAX,EAX                         ; 0057038a
    MOV AX,word ptr [EDX + 0xe]         ; 0057038c
    SHL EAX,0x8                         ; 00570390
    MOV dword ptr [ESP + 0x2c],EAX      ; 00570393
    XOR EAX,EAX                         ; 00570397
    MOV AX,word ptr [EDX + 0x10]        ; 00570399
    SHL EAX,0x8                         ; 0057039d
    MOV dword ptr [ESP + 0x38],EAX      ; 005703a0
    MOV EAX,dword ptr [EBP + 0x14]      ; 005703a4
    CMP dword ptr [EAX + 0x15ae84],0x0  ; 005703a7
    JNZ 0x005706ae                      ; 005703ae
        ;   XREF to: 005706ae (CONDITIONAL_JUMP)  ; LAB_005706ae
    XOR EAX,EAX                         ; 005703b4
        ;   Label: LAB_005703b4
    MOV EDX,dword ptr [ESP + 0x4]       ; 005703b6
    MOV dword ptr [ESP + 0x100],EAX     ; 005703ba
    TEST EDX,EDX                        ; 005703c1
    JLE 0x0057052f                      ; 005703c3
        ;   XREF to: 0057052f (CONDITIONAL_JUMP)  ; LAB_0057052f
    MOV dword ptr [ESP + 0xfc],EAX      ; 005703c9
    MOV dword ptr [ESP + 0x104],EAX     ; 005703d0
    MOV ECX,dword ptr [ESP + 0xfc]      ; 005703d7
        ;   Label: LAB_005703d7
    MOV ECX,dword ptr [ESP + ECX*0x1 + 0x18] ; 005703de
    IMUL ECX,ECX,0xc                    ; 005703e2
    MOV EAX,dword ptr [EBP + 0x14]      ; 005703e5
    MOV EDX,0x33081cc                   ; 005703e8 | g_VertexNormalArray
    MOV EBX,dword ptr [EAX + 0x15ae84]  ; 005703ed
    ADD EDX,ECX                         ; 005703f3
    TEST EBX,EBX                        ; 005703f5
    JZ 0x005706c3                       ; 005703f7
        ;   XREF to: 005706c3 (CONDITIONAL_JUMP)  ; LAB_005706c3
    FLD float ptr [EDX]                 ; 005703fd | g_VertexNormalArray
    FABS                                ; 005703ff
    FLD1                                ; 00570401
    FCOMPP                              ; 00570403
    FNSTSW AX                           ; 00570405
    SAHF                                ; 00570407
    JBE 0x005706c3                      ; 00570408
        ;   XREF to: 005706c3 (CONDITIONAL_JUMP)  ; LAB_005706c3
    FLD float ptr [EDX + 0x4]           ; 0057040e | g_VertexNormalArray[0].y
    FABS                                ; 00570411
    FLD1                                ; 00570413
    FCOMPP                              ; 00570415
    FNSTSW AX                           ; 00570417
    SAHF                                ; 00570419
    JBE 0x005706c3                      ; 0057041a
        ;   XREF to: 005706c3 (CONDITIONAL_JUMP)  ; LAB_005706c3
    FLD float ptr [EDX + 0x8]           ; 00570420 | g_VertexNormalArray[0].z
    FABS                                ; 00570423
    FLD1                                ; 00570425
    FCOMPP                              ; 00570427
    FNSTSW AX                           ; 00570429
    SAHF                                ; 0057042b
    JBE 0x005706c3                      ; 0057042c
        ;   XREF to: 005706c3 (CONDITIONAL_JUMP)  ; LAB_005706c3
    LEA EBX,[ESP + 0xc8]                ; 00570432
    MOV EAX,0x32c1c68                   ; 00570439 | g_LightingReferencePosition
    FLD float ptr [EAX]                 ; 0057043e | g_LightingReferencePosition
    FMUL float ptr [0x00662850]         ; 00570440 | FLOAT_00662850
    FISTP dword ptr [EBX]               ; 00570446
    FLD float ptr [EAX + 0x4]           ; 00570448 | g_LightingReferencePosition.y
    FMUL float ptr [0x00662850]         ; 0057044b | FLOAT_00662850
    FISTP dword ptr [EBX + 0x4]         ; 00570451
    FLD float ptr [EAX + 0x8]           ; 00570454 | g_LightingReferencePosition.z
    FMUL float ptr [0x00662850]         ; 00570457 | FLOAT_00662850
    FISTP dword ptr [EBX + 0x8]         ; 0057045d
    MOV ESI,dword ptr [ESP + 0xc8]      ; 00570460
    MOV EDI,dword ptr [ESP + 0xcc]      ; 00570467
    MOV EAX,dword ptr [ECX + 0x32cd84c] ; 0057046e | g_TransformedVertexArray
    MOV EDX,dword ptr [ESP + 0xd0]      ; 00570474
    SUB ESI,EAX                         ; 0057047b
    MOV EAX,dword ptr [ECX + 0x32cd850] ; 0057047d | g_TransformedVertexArray[0].y
    MOV dword ptr [ESP + 0xc8],ESI      ; 00570483
    SUB EDI,EAX                         ; 0057048a
    MOV EAX,dword ptr [ECX + 0x32cd854] ; 0057048c | g_TransformedVertexArray[0].z
    LEA ESI,[ESP + 0xe0]                ; 00570492
    SUB EDX,EAX                         ; 00570499
    LEA EAX,[ESP + 0xc8]                ; 0057049b
    MOV dword ptr [ESP + 0xcc],EDI      ; 005704a2
    PUSH EAX                            ; 005704a9
    LEA EDI,[ESP + 0xf0]                ; 005704aa
    MOV dword ptr [ESP + 0xd4],EDX      ; 005704b1
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0 ; 005704b8
        ;   XREF to: 0050d9f0 (UNCONDITIONAL_CALL)  ; CVector3i * engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0(CVector3i * input_vector, CVector3i * output_vector)
    LEA ESI,[ESP + 0xe4]                ; 005704bd
    JMP 0x0060c3fe                      ; 005704c4
        ;   XREF to: 0060c3fe (UNCONDITIONAL_JUMP)  ; LAB_0060c3fe
    MOV EAX,dword ptr [ESP + 0xf0]      ; 005704ca
        ;   Label: LAB_005704ca
    MOV EDX,dword ptr [ESP + 0xec]      ; 005704d1
    MOV ECX,dword ptr [ESP + 0x104]     ; 005704d8
    MOV ESI,dword ptr [ESP + 0x100]     ; 005704df
    MOV EDI,dword ptr [ESP + 0x4]       ; 005704e6
    NEG EAX                             ; 005704ea
    ADD EDX,0x8000                      ; 005704ec
    MOV EBX,ECX                         ; 005704f2
    INC ESI                             ; 005704f4
    ADD EAX,0x8000                      ; 005704f5
    ADD EBX,0x4                         ; 005704fa
    MOV dword ptr [ESP + ECX*0x1 + 0x48],EDX ; 005704fd
    MOV dword ptr [ESP + ECX*0x1 + 0x88],EAX ; 00570501
    MOV ECX,dword ptr [ESP + 0xfc]      ; 00570508
    MOV dword ptr [ESP + 0x100],ESI     ; 0057050f
    ADD ECX,0xc                         ; 00570516
    MOV dword ptr [ESP + 0x104],EBX     ; 00570519
    MOV dword ptr [ESP + 0xfc],ECX      ; 00570520
    CMP ESI,EDI                         ; 00570527
    JL 0x005703d7                       ; 00570529
        ;   XREF to: 005703d7 (CONDITIONAL_JUMP)  ; LAB_005703d7
    CMP dword ptr [ESP + 0x4],0x1       ; 0057052f
        ;   Label: LAB_0057052f
    JLE 0x005705d5                      ; 00570534
        ;   XREF to: 005705d5 (CONDITIONAL_JUMP)  ; LAB_005705d5
    MOV ECX,dword ptr [ESP + 0x4]       ; 0057053a
    MOV EAX,0x4                         ; 0057053e
    SHL ECX,0x2                         ; 00570543
    CMP dword ptr [ESP + 0x48],0x8000   ; 00570546
        ;   Label: LAB_00570546
    JLE 0x0057055f                      ; 0057054e
        ;   XREF to: 0057055f (CONDITIONAL_JUMP)  ; LAB_0057055f
    CMP dword ptr [ESP + EAX*0x1 + 0x48],0xffff8000 ; 00570550
    JGE 0x0057055f                      ; 00570558
        ;   XREF to: 0057055f (CONDITIONAL_JUMP)  ; LAB_0057055f
    INC word ptr [ESP + EAX*0x1 + 0x4a] ; 0057055a
    CMP dword ptr [ESP + 0x48],0xffff8000 ; 0057055f
        ;   Label: LAB_0057055f
    JGE 0x0057057f                      ; 00570567
        ;   XREF to: 0057057f (CONDITIONAL_JUMP)  ; LAB_0057057f
    MOV EBX,dword ptr [ESP + EAX*0x1 + 0x48] ; 00570569
    CMP EBX,0x8000                      ; 0057056d
    JLE 0x0057057f                      ; 00570573
        ;   XREF to: 0057057f (CONDITIONAL_JUMP)  ; LAB_0057057f
    LEA ESI,[EBX + 0xffff0000]          ; 00570575
    MOV dword ptr [ESP + EAX*0x1 + 0x48],ESI ; 0057057b
    CMP dword ptr [ESP + 0x88],0x8000   ; 0057057f
        ;   Label: LAB_0057057f
    JLE 0x005705a1                      ; 0057058a
        ;   XREF to: 005705a1 (CONDITIONAL_JUMP)  ; LAB_005705a1
    CMP dword ptr [ESP + EAX*0x1 + 0x88],0xffff8000 ; 0057058c
    JGE 0x005705a1                      ; 00570597
        ;   XREF to: 005705a1 (CONDITIONAL_JUMP)  ; LAB_005705a1
    INC word ptr [ESP + EAX*0x1 + 0x8a] ; 00570599
    CMP dword ptr [ESP + 0x88],0xffff8000 ; 005705a1
        ;   Label: LAB_005705a1
    JGE 0x005705ca                      ; 005705ac
        ;   XREF to: 005705ca (CONDITIONAL_JUMP)  ; LAB_005705ca
    MOV ESI,dword ptr [ESP + EAX*0x1 + 0x88] ; 005705ae
    CMP ESI,0x8000                      ; 005705b5
    JLE 0x005705ca                      ; 005705bb
        ;   XREF to: 005705ca (CONDITIONAL_JUMP)  ; LAB_005705ca
    LEA EDI,[ESI + 0xffff0000]          ; 005705bd
    MOV dword ptr [ESP + EAX*0x1 + 0x88],EDI ; 005705c3
    ADD EAX,0x4                         ; 005705ca
        ;   Label: LAB_005705ca
    CMP EAX,ECX                         ; 005705cd
    JL 0x00570546                       ; 005705cf
        ;   XREF to: 00570546 (CONDITIONAL_JUMP)  ; LAB_00570546
    MOV EBX,dword ptr [ESP + 0x4]       ; 005705d5
        ;   Label: LAB_005705d5
    XOR ECX,ECX                         ; 005705d9
    TEST EBX,EBX                        ; 005705db
    JLE 0x0057060b                      ; 005705dd
        ;   XREF to: 0057060b (CONDITIONAL_JUMP)  ; LAB_0057060b
    XOR EAX,EAX                         ; 005705df
    XOR EDX,EDX                         ; 005705e1
    MOV EBX,dword ptr [ESP + EAX*0x1 + 0x48] ; 005705e3
        ;   Label: LAB_005705e3
    SHL EBX,0x8                         ; 005705e7
    MOV dword ptr [ESP + EDX*0x1 + 0x1c],EBX ; 005705ea
    MOV EBX,dword ptr [ESP + EAX*0x1 + 0x88] ; 005705ee
    ADD EDX,0xc                         ; 005705f5
    SHL EBX,0x8                         ; 005705f8
    MOV dword ptr [ESP + EDX*0x1 + 0x14],EBX ; 005705fb
    INC ECX                             ; 005705ff
    MOV EBX,dword ptr [ESP + 0x4]       ; 00570600
    ADD EAX,0x4                         ; 00570604
    CMP ECX,EBX                         ; 00570607
    JL 0x005705e3                       ; 00570609
        ;   XREF to: 005705e3 (CONDITIONAL_JUMP)  ; LAB_005705e3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057060b
        ;   Label: LAB_0057060b
    CMP dword ptr [EAX + 0x15ae84],0x0  ; 0057060e
    JZ 0x00570629                       ; 00570615
        ;   XREF to: 00570629 (CONDITIONAL_JUMP)  ; LAB_00570629
    XOR EDI,EDI                         ; 00570617
    MOV dword ptr [ESP + 0x10],EDI      ; 00570619
    MOV dword ptr [ESP + 0xc],EDI       ; 0057061d
    MOV dword ptr [ESP + 0x8],EDI       ; 00570621
    MOV dword ptr [ESP + 0x14],EDI      ; 00570625
    CMP dword ptr [EBP + 0x20],0xfde8   ; 00570629
        ;   Label: LAB_00570629
    JLE 0x005706e1                      ; 00570630
        ;   XREF to: 005706e1 (CONDITIONAL_JUMP)  ; LAB_005706e1
    MOV EAX,ESP                         ; 00570636
    PUSH EAX                            ; 00570638
    MOV EDI,dword ptr [0x006703ec]      ; 00570639 | g_CDemonRendererPtr2
    PUSH EDI                            ; 0057063f | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0048b1e0 ; 00570640
        ;   XREF to: 0048b1e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0048b1e0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 00570645
        ;   Label: LAB_00570645
    MOV EBX,dword ptr [EBP + 0x18]      ; 00570648
    MOV ESI,dword ptr [ESP + 0xf8]      ; 0057064b
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00570652
    ADD EBX,0x12                        ; 00570655
    INC ESI                             ; 00570658
    MOV dword ptr [EBP + 0x18],EBX      ; 00570659
    MOV dword ptr [ESP + 0xf8],ESI      ; 0057065c
    CMP ESI,EDI                         ; 00570663
    JL 0x0057031b                       ; 00570665
        ;   XREF to: 0057031b (CONDITIONAL_JUMP)  ; LAB_0057031b
    MOV ESP,EBP                         ; 0057066b
        ;   Label: LAB_0057066b
    POP EBP                             ; 0057066d
    POP EDI                             ; 0057066e
    POP ESI                             ; 0057066f
    POP EBX                             ; 00570670
    RET                                 ; 00570671
    MOV EAX,0xffff                      ; 00570672
        ;   Label: LAB_00570672
    MOV EBX,dword ptr [0x02d051f4]      ; 00570677 | g_PerspectiveReciprocal
    MOV EDX,dword ptr [EBP + 0x20]      ; 0057067d
    SUB EAX,EBX                         ; 00570680
    IMUL EDX                            ; 00570682
    SHRD EAX,EDX,0x10                   ; 00570684
    PUSH EAX                            ; 00570688
    MOV ESI,dword ptr [0x006703ec]      ; 00570689 | g_CDemonRendererPtr2
    PUSH ESI                            ; 0057068f | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 00570690
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00570695
    PUSH 0x0                            ; 00570698
    MOV EDI,dword ptr [0x006703ec]      ; 0057069a | g_CDemonRendererPtr2
    PUSH EDI                            ; 005706a0 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 005706a1
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 005706a6
    JMP 0x005702f2                      ; 005706a9
        ;   XREF to: 005702f2 (UNCONDITIONAL_JUMP)  ; LAB_005702f2
    MOV EAX,ESP                         ; 005706ae
        ;   Label: LAB_005706ae
    PUSH EAX                            ; 005706b0
    PUSH 0x32cd84c                      ; 005706b1 | g_TransformedVertexArray
    CALL engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0 ; 005706b6
        ;   XREF to: 00501bc0 (UNCONDITIONAL_CALL)  ; void engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0(CVector3i * vertex_data, SMRGLPrimitiveTriangle * texture)
    ADD ESP,0x8                         ; 005706bb
    JMP 0x005703b4                      ; 005706be
        ;   XREF to: 005703b4 (UNCONDITIONAL_JUMP)  ; LAB_005703b4
    LEA EBX,[ESP + 0xec]                ; 005706c3
        ;   Label: LAB_005706c3
    MOV EAX,EDX                         ; 005706ca
    FLD float ptr [EAX]                 ; 005706cc | g_VertexNormalArray
    FISTP dword ptr [EBX]               ; 005706ce
    FLD float ptr [EAX + 0x4]           ; 005706d0 | g_VertexNormalArray[0].y
    FISTP dword ptr [EBX + 0x4]         ; 005706d3
    FLD float ptr [EAX + 0x8]           ; 005706d6 | g_VertexNormalArray[0].z
    FISTP dword ptr [EBX + 0x8]         ; 005706d9
    JMP 0x005704ca                      ; 005706dc
        ;   XREF to: 005704ca (UNCONDITIONAL_JUMP)  ; LAB_005704ca
    MOV EAX,ESP                         ; 005706e1
        ;   Label: LAB_005706e1
    PUSH EAX                            ; 005706e3
    MOV ESI,dword ptr [0x006703ec]      ; 005706e4 | g_CDemonRendererPtr2
    PUSH ESI                            ; 005706ea | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0048b970 ; 005706eb
        ;   XREF to: 0048b970 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0048b970(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    JMP 0x00570645                      ; 005706f0
        ;   XREF to: 00570645 (UNCONDITIONAL_JUMP)  ; LAB_00570645
    ADD ESP,0x4                         ; 0060c3fe
        ;   Label: LAB_0060c3fe
    MOV ECX,dword ptr [ESI]             ; 0060c401
    MOV dword ptr [EDI],ECX             ; 0060c403
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060c405
    MOV dword ptr [EDI + 0x4],ECX       ; 0060c408
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060c40b
    MOV dword ptr [EDI + 0x8],ECX       ; 0060c40e
    ADD ESI,0xc                         ; 0060c411
    ADD EDI,0xc                         ; 0060c414
    JMP 0x005704ca                      ; 0060c417
        ;   XREF to: 005704ca (UNCONDITIONAL_JUMP)  ; LAB_005704ca

