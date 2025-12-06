; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_trigger.cpp_CTrigger_FUN_005e00d0(CTrigger * this_ptr)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0xa4]:1  local_a4
;
; Referenced Globals:
;   void* switchdataD_005e00a4 = 005e0159
;   double DOUBLE_0065563c = 0.100000000000000
;   double DOUBLE_00655644 = 12
;   double DOUBLE_0065564c = 0.5
;   float FLOAT_00655654 = 256
;   double DOUBLE_0065565c = 2
;   double DOUBLE_00655664 = 3.14159265350000
;   undefined4 DAT_00664a00
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   SMRGLTextureBasic DAT_0068434c
;   undefined4 DAT_00800000
;   CDemonRenderer g_CDemonRendererInstance
;   CDemonMission g_CDemonMissionInstance
;   undefined4 DAT_02f33744
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_FUN_0040dec0
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e00d0
        ;   Label: core_trigger.cpp_CTrigger_FUN_005e00d0
    PUSH ESI                            ; 005e00d1
    PUSH EDI                            ; 005e00d2
    PUSH EBP                            ; 005e00d3
    MOV EBP,ESP                         ; 005e00d4
    SUB ESP,0xc4                        ; 005e00d6
    AND ESP,0xfffffff8                  ; 005e00dc
    MOV EAX,[0x0067d550]                ; 005e00df | CDemonMission g_CDemonMissionInstance | CDemonMission * g_CDemonMissionPtr
    CMP dword ptr [EAX + 0x4],0x0       ; 005e00e4 | DAT_02f33744
    JNZ 0x005e00f3                      ; 005e00e8 | LAB_005e00f3
        ;   XREF to: 005e00f3 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005e00ea
        ;   Label: LAB_005e00ea
    MOV ESP,EBP                         ; 005e00ec
    POP EBP                             ; 005e00ee
    POP EDI                             ; 005e00ef
    POP ESI                             ; 005e00f0
    POP EBX                             ; 005e00f1
    RET                                 ; 005e00f2
    MOV ECX,dword ptr [0x006703ec]      ; 005e00f3 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
        ;   Label: LAB_005e00f3
    PUSH ECX                            ; 005e00f9 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 005e00fa | int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e00ff
    TEST EAX,EAX                        ; 005e0102
    JNZ 0x005e00ea                      ; 005e0104 | LAB_005e00ea
        ;   XREF to: 005e00ea (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [EBP + 0x14]      ; 005e0106
    PUSH EBX                            ; 005e0109
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 005e010a | void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e010f
    LEA EDX,[ESP + 0x34]                ; 005e0112
    PUSH EDX                            ; 005e0116
    MOV EAX,dword ptr [EBX + 0x154]     ; 005e0117
    PUSH EBX                            ; 005e011d
    CALL dword ptr [EAX + 0x14]         ; 005e011e
    ADD ESP,0x8                         ; 005e0121
    PUSH EAX                            ; 005e0124
    MOV ESI,EBX                         ; 005e0125
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 005e0127 | int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e012c
    MOV EDI,ESI                         ; 005e012f
    PUSH EDI                            ; 005e0131
    MOV EBX,EAX                         ; 005e0132
    MOV dword ptr [ESP + 0xb8],EAX      ; 005e0134
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 005e013b | void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e0140
    TEST EBX,EBX                        ; 005e0143
    JZ 0x005e00ea                       ; 005e0145 | LAB_005e00ea
        ;   XREF to: 005e00ea (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI + 0x174]     ; 005e0147
    CMP EAX,0x8                         ; 005e014d
    JA 0x005e0159                       ; 005e0150 | caseD_0
        ;   XREF to: 005e0159 (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x5e00a4]  ; 005e0152 | void * switchdataD_005e00a4
        ;   Label: switchD
    MOV ESI,0xff                        ; 005e0159
        ;   Label: caseD_0
    XOR EBX,EBX                         ; 005e015e
    XOR EAX,EAX                         ; 005e0160
        ;   Label: LAB_005e0160
    MOV EDX,dword ptr [0x0067d550]      ; 005e0162 | CDemonMission * g_CDemonMissionPtr
        ;   Label: LAB_005e0162
    MOV ECX,dword ptr [EBP + 0x14]      ; 005e0168
    CMP ECX,dword ptr [EDX + 0x28]      ; 005e016b | DAT_02f33768
    JNZ 0x005e05ff                      ; 005e016e | LAB_005e05ff
        ;   XREF to: 005e05ff (CONDITIONAL_JUMP)
    MOV EDI,0x80                        ; 005e0174
    MOV EDX,dword ptr [EBP + 0x14]      ; 005e0179
        ;   Label: LAB_005e0179
    CMP dword ptr [EDX + 0x170],0x1     ; 005e017c
    JNZ 0x005e0609                      ; 005e0183 | LAB_005e0609
        ;   XREF to: 005e0609 (CONDITIONAL_JUMP)
    PUSH EDX                            ; 005e0189
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 005e018a | void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e018f
    MOV EAX,dword ptr [EBP + 0x14]      ; 005e0192
    FLD float ptr [EAX + 0x160]         ; 005e0195
    FMUL double ptr [0x0065563c]        ; 005e019b | double DOUBLE_0065563c
    FADD double ptr [0x00655644]        ; 005e01a1 | double DOUBLE_00655644
    CALL crt_math.c_round_FUN_005fe6b0  ; 005e01a7 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x8]         ; 005e01ac
    CMP dword ptr [ESP + 0x8],0x28      ; 005e01b0
    JLE 0x005e01bf                      ; 005e01b5 | LAB_005e01bf
        ;   XREF to: 005e01bf (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x8],0x28      ; 005e01b7
    LEA EDX,[ESP + 0x4c]                ; 005e01bf
        ;   Label: LAB_005e01bf
    MOV EAX,dword ptr [EBP + 0x14]      ; 005e01c3
    PUSH EDX                            ; 005e01c6
    MOV EDX,dword ptr [EBP + 0x14]      ; 005e01c7
    MOV EAX,dword ptr [EAX + 0x154]     ; 005e01ca
    PUSH EDX                            ; 005e01d0
    CALL dword ptr [EAX + 0x14]         ; 005e01d1
    ADD ESP,0x8                         ; 005e01d4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005e01d7
    FLD float ptr [EAX + 0x160]         ; 005e01da
    FMUL double ptr [0x0065564c]        ; 005e01e0 | double DOUBLE_0065564c
    MOV EDX,dword ptr [0x006703ec]      ; 005e01e6 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    XOR ECX,ECX                         ; 005e01ec
    MOV EAX,dword ptr [ESP + 0x50]      ; 005e01ee
    MOV dword ptr [ESP + 0x70],ECX      ; 005e01f2
    MOV dword ptr [ESP + 0x78],ECX      ; 005e01f6
    FSTP float ptr [ESP + 0x4]          ; 005e01fa
    MOV dword ptr [ESP + 0x74],EAX      ; 005e01fe
    FLD float ptr [ESP + 0x4]           ; 005e0202
    FMUL float ptr [0x00655654]         ; 005e0206 | float FLOAT_00655654
    MOV ECX,dword ptr [EDX]             ; 005e020c | CDemonRenderer g_CDemonRendererInstance
    CALL crt_math.c_round_FUN_005fe6b0  ; 005e020e | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0xb0]        ; 005e0213
    MOV EAX,dword ptr [ESP + 0xb0]      ; 005e021a
    MOV dword ptr [ECX + 0x20],EAX      ; 005e0221
    MOV EAX,dword ptr [EDX]             ; 005e0224 | CDemonRenderer g_CDemonRendererInstance
    SHL ESI,0x8                         ; 005e0226
    MOV dword ptr [EAX + 0x24],ESI      ; 005e0229
    MOV EAX,dword ptr [EDX]             ; 005e022c | CDemonRenderer g_CDemonRendererInstance
    SHL EBX,0x8                         ; 005e022e
    MOV dword ptr [EAX + 0x28],EBX      ; 005e0231
    MOV EAX,dword ptr [EDX]             ; 005e0234 | CDemonRenderer g_CDemonRendererInstance
    SHL EDI,0x8                         ; 005e0236
    MOV dword ptr [EAX + 0x2c],EDI      ; 005e0239
    MOV EAX,dword ptr [EDX]             ; 005e023c | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x18],0x800000 ; 005e023e | DAT_00800000
    PUSH 0x68434c                       ; 005e0245 | SMRGLTextureBasic DAT_0068434c
    MOV EAX,dword ptr [EDX]             ; 005e024a | CDemonRenderer g_CDemonRendererInstance
    PUSH EDX                            ; 005e024c | CDemonRenderer g_CDemonRendererInstance
    LEA EBX,[ESP + 0x90]                ; 005e024d
    MOV dword ptr [EAX + 0x1c],0x800000 ; 005e0254 | DAT_00800000
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 005e025b | void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e0260
    LEA EAX,[ESP + 0x70]                ; 005e0263
    MOV EDX,dword ptr [0x006703ec]      ; 005e0267 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    FLD float ptr [EAX]                 ; 005e026d
    FMUL float ptr [0x00664a00]         ; 005e026f | DAT_00664a00
    FISTP dword ptr [EBX]               ; 005e0275
    FLD float ptr [EAX + 0x4]           ; 005e0277
    FMUL float ptr [0x00664a00]         ; 005e027a | DAT_00664a00
    FISTP dword ptr [EBX + 0x4]         ; 005e0280
    FLD float ptr [EAX + 0x8]           ; 005e0283
    FMUL float ptr [0x00664a00]         ; 005e0286 | DAT_00664a00
    FISTP dword ptr [EBX + 0x8]         ; 005e028c
    LEA EAX,[ESP + 0x88]                ; 005e028f
    PUSH EAX                            ; 005e0296
    MOV EAX,dword ptr [EDX]             ; 005e0297 | CDemonRenderer g_CDemonRendererInstance
    PUSH EAX                            ; 005e0299
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005e029a | void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e029f
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005e02a2
    MOV EDX,dword ptr [0x006703ec]      ; 005e02a6 | CDemonRenderer * g_CDemonRendererPtr
    MOV dword ptr [ESP + 0x74],EAX      ; 005e02ac
    MOV ESI,dword ptr [EDX]             ; 005e02b0 | CDemonRenderer g_CDemonRendererInstance
    MOV ECX,0xc                         ; 005e02b2
    LEA EDI,[ESI + 0x30]                ; 005e02b7
    LEA EBX,[ESP + 0x64]                ; 005e02ba
    LEA EAX,[ESP + 0x70]                ; 005e02be
    MOVSD.REP ES:EDI,ESI                ; 005e02c2
    FLD float ptr [EAX]                 ; 005e02c4
    FMUL float ptr [0x00664a00]         ; 005e02c6 | DAT_00664a00
    FISTP dword ptr [EBX]               ; 005e02cc
    FLD float ptr [EAX + 0x4]           ; 005e02ce
    FMUL float ptr [0x00664a00]         ; 005e02d1 | DAT_00664a00
    FISTP dword ptr [EBX + 0x4]         ; 005e02d7
    FLD float ptr [EAX + 0x8]           ; 005e02da
    FMUL float ptr [0x00664a00]         ; 005e02dd | DAT_00664a00
    FISTP dword ptr [EBX + 0x8]         ; 005e02e3
    LEA EAX,[ESP + 0x64]                ; 005e02e6
    PUSH EAX                            ; 005e02ea
    MOV EAX,dword ptr [EDX]             ; 005e02eb | CDemonRenderer g_CDemonRendererInstance
    ADD EAX,0x30                        ; 005e02ed
    PUSH EAX                            ; 005e02f0
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005e02f1 | void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e02f6
    XOR EDX,EDX                         ; 005e02f9
    MOV ECX,dword ptr [ESP + 0x8]       ; 005e02fb
    MOV dword ptr [ESP],EDX             ; 005e02ff
    TEST ECX,ECX                        ; 005e0302
    JL 0x005e0470                       ; 005e0304 | LAB_005e0470
        ;   XREF to: 005e0470 (CONDITIONAL_JUMP)
    MOV EAX,0x60                        ; 005e030a
    MOV EDI,0x90                        ; 005e030f
    MOV dword ptr [ESP + 0xb8],EAX      ; 005e0314
    MOV dword ptr [ESP + 0xbc],EDI      ; 005e031b
    MOV EAX,dword ptr [ESP]             ; 005e0322
        ;   Label: LAB_005e0322
    MOV dword ptr [ESP + 0xc0],EAX      ; 005e0325
    FILD dword ptr [ESP + 0xc0]         ; 005e032c
    FMUL double ptr [0x0065565c]        ; 005e0333 | double DOUBLE_0065565c
    MOV EAX,dword ptr [ESP + 0x8]       ; 005e0339
    FMUL double ptr [0x00655664]        ; 005e033d | double DOUBLE_00655664
    MOV dword ptr [ESP + 0xc0],EAX      ; 005e0343
    FILD dword ptr [ESP + 0xc0]         ; 005e034a
    FDIVP                               ; 005e0351
    FLD ST0                             ; 005e0353
    FSIN                                ; 005e0355
    FXCH                                ; 005e0357
    FCOS                                ; 005e0359
    FLD float ptr [ESP + 0x4]           ; 005e035b
    FXCH ST2                            ; 005e035f
    FMUL ST2                            ; 005e0361
    FXCH                                ; 005e0363
    FMULP ST2                           ; 005e0365
    MOV EDI,dword ptr [ESP + 0xb8]      ; 005e0367
    MOV EAX,dword ptr [ESP + 0x50]      ; 005e036e
    MOV EDX,dword ptr [0x006703ec]      ; 005e0372 | CDemonRenderer * g_CDemonRendererPtr
    MOV dword ptr [ESP + 0x74],EAX      ; 005e0378
    FSTP float ptr [ESP + 0x70]         ; 005e037c
    FSTP float ptr [ESP + 0x78]         ; 005e0380
    MOV ESI,dword ptr [EDX]             ; 005e0384 | CDemonRenderer g_CDemonRendererInstance
    MOV ECX,0xc                         ; 005e0386
    ADD EDI,ESI                         ; 005e038b
    LEA EBX,[ESP + 0x7c]                ; 005e038d
    LEA EAX,[ESP + 0x70]                ; 005e0391
    MOVSD.REP ES:EDI,ESI                ; 005e0395
    FLD float ptr [EAX]                 ; 005e0397
    FMUL float ptr [0x00664a00]         ; 005e0399 | DAT_00664a00
    FISTP dword ptr [EBX]               ; 005e039f
    FLD float ptr [EAX + 0x4]           ; 005e03a1
    FMUL float ptr [0x00664a00]         ; 005e03a4 | DAT_00664a00
    FISTP dword ptr [EBX + 0x4]         ; 005e03aa
    FLD float ptr [EAX + 0x8]           ; 005e03ad
    FMUL float ptr [0x00664a00]         ; 005e03b0 | DAT_00664a00
    FISTP dword ptr [EBX + 0x8]         ; 005e03b6
    LEA EAX,[ESP + 0x7c]                ; 005e03b9
    MOV EBX,dword ptr [ESP + 0xb8]      ; 005e03bd
    PUSH EAX                            ; 005e03c4
    MOV EAX,dword ptr [EDX]             ; 005e03c5 | CDemonRenderer g_CDemonRendererInstance
    ADD EAX,EBX                         ; 005e03c7
    PUSH EAX                            ; 005e03c9
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005e03ca | void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e03cf
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005e03d2
    MOV EDX,dword ptr [0x006703ec]      ; 005e03d6 | CDemonRenderer * g_CDemonRendererPtr
    MOV dword ptr [ESP + 0x74],EAX      ; 005e03dc
    MOV EDI,dword ptr [ESP + 0xbc]      ; 005e03e0
    MOV ESI,dword ptr [EDX]             ; 005e03e7 | CDemonRenderer g_CDemonRendererInstance
    MOV ECX,0xc                         ; 005e03e9
    ADD EDI,ESI                         ; 005e03ee
    LEA EBX,[ESP + 0x94]                ; 005e03f0
    LEA EAX,[ESP + 0x70]                ; 005e03f7
    MOVSD.REP ES:EDI,ESI                ; 005e03fb
    FLD float ptr [EAX]                 ; 005e03fd
    FMUL float ptr [0x00664a00]         ; 005e03ff | DAT_00664a00
    FISTP dword ptr [EBX]               ; 005e0405
    FLD float ptr [EAX + 0x4]           ; 005e0407
    FMUL float ptr [0x00664a00]         ; 005e040a | DAT_00664a00
    FISTP dword ptr [EBX + 0x4]         ; 005e0410
    FLD float ptr [EAX + 0x8]           ; 005e0413
    FMUL float ptr [0x00664a00]         ; 005e0416 | DAT_00664a00
    FISTP dword ptr [EBX + 0x8]         ; 005e041c
    LEA EAX,[ESP + 0x94]                ; 005e041f
    MOV ESI,dword ptr [ESP + 0xbc]      ; 005e0426
    PUSH EAX                            ; 005e042d
    MOV EAX,dword ptr [EDX]             ; 005e042e | CDemonRenderer g_CDemonRendererInstance
    ADD EAX,ESI                         ; 005e0430
    PUSH EAX                            ; 005e0432
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005e0433 | void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e0438
    LEA EDI,[ESI + 0x60]                ; 005e043b
    MOV EAX,dword ptr [ESP + 0xb8]      ; 005e043e
    MOV EDX,dword ptr [ESP]             ; 005e0445
    MOV ECX,dword ptr [ESP + 0x8]       ; 005e0448
    MOV dword ptr [ESP + 0xbc],EDI      ; 005e044c
    ADD EAX,0x60                        ; 005e0453
    INC EDX                             ; 005e0456
    MOV dword ptr [ESP + 0xb8],EAX      ; 005e0457
    MOV dword ptr [ESP],EDX             ; 005e045e
    CMP EDX,ECX                         ; 005e0461
    JLE 0x005e0322                      ; 005e0463 | LAB_005e0322
        ;   XREF to: 005e0322 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 005e0469
    NOP                                 ; 005e046f
    PUSH 0x0                            ; 005e0470
        ;   Label: LAB_005e0470
    MOV EBX,dword ptr [0x006703ec]      ; 005e0472 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EBX                            ; 005e0478 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0 ; 005e0479 | void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(CDemonRenderer * this_ptr, int enabled)
        ;   XREF to: 0048c9f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e047e
    MOV ESI,dword ptr [ESP + 0x8]       ; 005e0481
    XOR EBX,EBX                         ; 005e0485
    TEST ESI,ESI                        ; 005e0487
    JLE 0x005e0560                      ; 005e0489 | LAB_005e0560
        ;   XREF to: 005e0560 (CONDITIONAL_JUMP)
    MOV EDX,0x4                         ; 005e048f
        ;   Label: LAB_005e048f
    LEA EAX,[EBX + EBX*0x1]             ; 005e0494
    LEA ESI,[EAX + EDX*0x1]             ; 005e0497
    LEA EDI,[EAX + 0x5]                 ; 005e049a
    MOV dword ptr [ESP + 0x10],EDX      ; 005e049d
    LEA EDX,[EAX + 0x3]                 ; 005e04a1
    ADD EAX,0x2                         ; 005e04a4
    PUSH 0x367                          ; 005e04a7
    MOV dword ptr [ESP + 0xc4],EAX      ; 005e04ac
    MOV dword ptr [ESP + 0x34],EAX      ; 005e04b3
    LEA EAX,[ESP + 0x10]                ; 005e04b7
    MOV ECX,dword ptr [0x006703ec]      ; 005e04bb | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EAX                            ; 005e04c1
    MOV dword ptr [ESP + 0x2c],ESI      ; 005e04c2
    MOV dword ptr [ESP + 0x30],EDI      ; 005e04c6
    PUSH ECX                            ; 005e04ca | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [ESP + 0xbc],EDX      ; 005e04cb
    MOV dword ptr [ESP + 0x38],EDX      ; 005e04d2
    CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10 ; 005e04d6 | void engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info, int render_flags)
        ;   XREF to: 0048ae10 (UNCONDITIONAL_CALL)
    MOV EAX,0x3                         ; 005e04db
    ADD ESP,0xc                         ; 005e04e0
    MOV dword ptr [ESP + 0x10],EAX      ; 005e04e3
    MOV EAX,dword ptr [ESP + 0xc0]      ; 005e04e7
    PUSH 0x367                          ; 005e04ee
    MOV dword ptr [ESP + 0x2c],EAX      ; 005e04f3
    LEA EAX,[ESP + 0x10]                ; 005e04f7
    PUSH EAX                            ; 005e04fb
    MOV ECX,dword ptr [0x006703ec]      ; 005e04fc | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    XOR EDX,EDX                         ; 005e0502
    PUSH ECX                            ; 005e0504 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x30],ESI      ; 005e0505
    MOV dword ptr [ESP + 0x38],EDX      ; 005e0509
    CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10 ; 005e050d | void engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info, int render_flags)
        ;   XREF to: 0048ae10 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005e0512
    MOV EAX,dword ptr [ESP + 0xb0]      ; 005e0515
    PUSH 0x367                          ; 005e051c
    MOV dword ptr [ESP + 0x28],EAX      ; 005e0521
    LEA EAX,[ESP + 0x10]                ; 005e0525
    MOV dword ptr [ESP + 0x2c],EDI      ; 005e0529
    PUSH EAX                            ; 005e052d
    MOV EDI,dword ptr [0x006703ec]      ; 005e052e | CDemonRenderer * g_CDemonRendererPtr
    MOV ESI,0x1                         ; 005e0534
    PUSH EDI                            ; 005e0539 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x38],ESI      ; 005e053a
    CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10 ; 005e053e | void engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info, int render_flags)
        ;   XREF to: 0048ae10 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005e0543
    ADD EBX,ESI                         ; 005e0546
    CMP EBX,dword ptr [ESP + 0x8]       ; 005e0548
    JL 0x005e048f                       ; 005e054c | LAB_005e048f
        ;   XREF to: 005e048f (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 005e0552
    LEA EDX,[EDX]                       ; 005e0558
    MOV EAX,EAX                         ; 005e055e
    PUSH 0x1                            ; 005e0560
        ;   Label: LAB_005e0560
    MOV EDX,dword ptr [0x006703ec]      ; 005e0562 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 005e0568 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0 ; 005e0569 | void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(CDemonRenderer * this_ptr, int enabled)
        ;   XREF to: 0048c9f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e056e
    MOV ECX,dword ptr [EBP + 0x14]      ; 005e0571
    PUSH ECX                            ; 005e0574
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 005e0575 | void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e057a
    MOV EAX,dword ptr [ESP + 0xb4]      ; 005e057d
    MOV ESP,EBP                         ; 005e0584
    POP EBP                             ; 005e0586
    POP EDI                             ; 005e0587
    POP ESI                             ; 005e0588
    POP EBX                             ; 005e0589
    RET                                 ; 005e058a
    MOV EAX,0xff                        ; 005e058b
        ;   Label: caseD_1
    XOR ESI,ESI                         ; 005e0590
    MOV EBX,EAX                         ; 005e0592
    JMP 0x005e0162                      ; 005e0594 | LAB_005e0162
        ;   XREF to: 005e0162 (UNCONDITIONAL_JUMP)
    MOV EAX,0xff                        ; 005e0599
        ;   Label: caseD_2
    MOV ESI,EAX                         ; 005e059e
    MOV EBX,EAX                         ; 005e05a0
    JMP 0x005e0162                      ; 005e05a2 | LAB_005e0162
        ;   XREF to: 005e0162 (UNCONDITIONAL_JUMP)
    MOV EBX,0xff                        ; 005e05a7
        ;   Label: caseD_3
    XOR ESI,ESI                         ; 005e05ac
    JMP 0x005e0160                      ; 005e05ae | LAB_005e0160
        ;   XREF to: 005e0160 (UNCONDITIONAL_JUMP)
    MOV EAX,0xff                        ; 005e05b3
        ;   Label: caseD_4
    XOR EBX,EBX                         ; 005e05b8
    MOV ESI,EAX                         ; 005e05ba
    JMP 0x005e0162                      ; 005e05bc | LAB_005e0162
        ;   XREF to: 005e0162 (UNCONDITIONAL_JUMP)
    MOV ESI,0xff                        ; 005e05c1
        ;   Label: caseD_5
    XOR EAX,EAX                         ; 005e05c6
    MOV EBX,ESI                         ; 005e05c8
    JMP 0x005e0162                      ; 005e05ca | LAB_005e0162
        ;   XREF to: 005e0162 (UNCONDITIONAL_JUMP)
    MOV ESI,0x80                        ; 005e05cf
        ;   Label: caseD_6
    MOV EAX,0xff                        ; 005e05d4
    XOR EBX,EBX                         ; 005e05d9
    JMP 0x005e0162                      ; 005e05db | LAB_005e0162
        ;   XREF to: 005e0162 (UNCONDITIONAL_JUMP)
    MOV EAX,0xff                        ; 005e05e0
        ;   Label: caseD_7
    XOR ESI,ESI                         ; 005e05e5
    XOR EBX,EBX                         ; 005e05e7
    JMP 0x005e0162                      ; 005e05e9 | LAB_005e0162
        ;   XREF to: 005e0162 (UNCONDITIONAL_JUMP)
    MOV EBX,0x100                       ; 005e05ee
        ;   Label: caseD_8
    MOV EAX,0x80                        ; 005e05f3
    XOR ESI,ESI                         ; 005e05f8
    JMP 0x005e0162                      ; 005e05fa | LAB_005e0162
        ;   XREF to: 005e0162 (UNCONDITIONAL_JUMP)
    MOV EDI,0x40                        ; 005e05ff
        ;   Label: LAB_005e05ff
    JMP 0x005e0179                      ; 005e0604 | LAB_005e0179
        ;   XREF to: 005e0179 (UNCONDITIONAL_JUMP)
    PUSH EDI                            ; 005e0609
        ;   Label: LAB_005e0609
    PUSH EBX                            ; 005e060a
    PUSH ESI                            ; 005e060b
    PUSH EAX                            ; 005e060c
    PUSH EDX                            ; 005e060d
    CALL core_actor.cpp_CDemonActor_FUN_0040dec0 ; 005e060e | void core_actor.cpp_CDemonActor_FUN_0040dec0(CDemonActor * this_ptr)
        ;   XREF to: 0040dec0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005e0613
    MOV EAX,dword ptr [ESP + 0xb4]      ; 005e0616
    MOV ESP,EBP                         ; 005e061d
    POP EBP                             ; 005e061f
    POP EDI                             ; 005e0620
    POP ESI                             ; 005e0621
    POP EBX                             ; 005e0622
    RET                                 ; 005e0623

