; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dskybox_cpp_renderSkyDome_FUN_004901f0(SMRGLTextureBasic *sky_texture,char *texture_name,int brightness_factor)
;
; Parameters:
; SMRGLTextureBasic * Stack[0x4]:4   sky_texture
; char *           Stack[0x8]:4   texture_name
; int              Stack[0xc]:4   brightness_factor
; Local Variables:
; SMRGLHeaderPrimitive Stack[-0xb4]:24  local_b4
; int              Stack[-0x9c]:4  local_9c
; uint             Stack[-0x98]:4  local_98
; uint             Stack[-0x94]:4  local_94
; int              Stack[-0x90]:4  local_90
; uint             Stack[-0x8c]:4  local_8c
; uint             Stack[-0x88]:4  local_88
; int              Stack[-0x84]:4  local_84
; int              Stack[-0x80]:4  local_80
; uint             Stack[-0x7c]:4  local_7c
; int              Stack[-0x78]:4  local_78
; int              Stack[-0x74]:4  local_74
; uint             Stack[-0x70]:4  local_70
; CVector3i        Stack[-0x6c]:12  local_6c
; CVector3f        Stack[-0x60]:12  local_60
; CVector3f        Stack[-0x54]:12  local_54
; int              Stack[-0x40]:4  local_40
; int              Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  local_34
; float            Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; uint             Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 at 0056a3a3
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b6ff
;
; Referenced Globals:
;   IMAGE_DOS_HEADER IMAGE_DOS_HEADER_00400000
;   double DOUBLE_0062256a = 0.5
;   double DOUBLE_00622572 = 1.41400000000000
;   double DOUBLE_0062257a = 0.589048622531250
;   double DOUBLE_00622582 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   float g_SkyDomeVertexScale = 5
;   undefined4 g_LightBufferPool[13][93688]
;   CDemonRenderer g_CDemonRendererInstance
;   CVector3i CVector3i_02ca0388
;   undefined4 CVector3i_02ca0388.y
;   undefined4 CVector3i_02ca0388.z
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dskybox.cpp_generateSkyDomeVertex_FUN_004900b0
;   core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70
;   core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004901f0
        ;   Label: core_dskybox.cpp_renderSkyDome_FUN_004901f0
    PUSH ESI                            ; 004901f1
    PUSH EDI                            ; 004901f2
    PUSH EBP                            ; 004901f3
    SUB ESP,0xa4                        ; 004901f4
    MOV EBP,dword ptr [ESP + 0xb8]      ; 004901fa
    MOV ESI,dword ptr [ESP + 0xbc]      ; 00490201
    LEA EDI,[EBP + 0xc]                 ; 00490208
    PUSH EDI                            ; 0049020b
    MOV AL,byte ptr [ESI]               ; 0049020c
        ;   Label: LAB_0049020c
    MOV byte ptr [EDI],AL               ; 0049020e
    CMP AL,0x0                          ; 00490210
    JZ 0x00490224                       ; 00490212
        ;   XREF to: 00490224 (CONDITIONAL_JUMP)  ; LAB_00490224
    MOV AL,byte ptr [ESI + 0x1]         ; 00490214
    ADD ESI,0x2                         ; 00490217
    MOV byte ptr [EDI + 0x1],AL         ; 0049021a
    ADD EDI,0x2                         ; 0049021d
    CMP AL,0x0                          ; 00490220
    JNZ 0x0049020c                      ; 00490222
        ;   XREF to: 0049020c (CONDITIONAL_JUMP)  ; LAB_0049020c
    POP EDI                             ; 00490224
        ;   Label: LAB_00490224
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00490225
    MOV dword ptr [EBP],EAX             ; 0049022c
    LEA EAX,[ESP + 0x54]                ; 0049022f
    PUSH EAX                            ; 00490233
    PUSH 0x3277d14                      ; 00490234 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40 ; 00490239
        ;   XREF to: 00499b40 (UNCONDITIONAL_CALL)  ; CVector3f * core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40(CDemonRaytrace * this_ptr, CVector3f * output_vector)
    ADD ESP,0x8                         ; 0049023e
    LEA EAX,[ESP + 0x60]                ; 00490241
    PUSH EAX                            ; 00490245
    PUSH 0x3277d14                      ; 00490246 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70 ; 0049024b
        ;   XREF to: 00499b70 (UNCONDITIONAL_CALL)  ; CVector3f * core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70(CDemonRaytrace * this_ptr, CVector3f * output_vector)
    ADD ESP,0x8                         ; 00490250
    FLD float ptr [ESP + 0x54]          ; 00490253
    FADD float ptr [ESP + 0x60]         ; 00490257
    FLD double ptr [0x0062256a]         ; 0049025b | DOUBLE_0062256a
    FXCH                                ; 00490261
    FMUL ST1                            ; 00490263
    FLD float ptr [ESP + 0x5c]          ; 00490265
    FLD float ptr [ESP + 0x60]          ; 00490269
    FSUB float ptr [ESP + 0x54]         ; 0049026d
    FXCH                                ; 00490271
    FADD float ptr [ESP + 0x68]         ; 00490273
    FXCH                                ; 00490277
    FMUL ST3                            ; 00490279
    FXCH                                ; 0049027b
    FMULP ST3                           ; 0049027d
    FMUL double ptr [0x00622572]        ; 0049027f | DOUBLE_00622572
    FLDZ                                ; 00490285
    XOR EDX,EDX                         ; 00490287
    MOV EAX,dword ptr [ESP + 0x58]      ; 00490289
    MOV dword ptr [0x00672360],EDX      ; 0049028d | g_SkyDomeVertexScale
    MOV [0x02ca038c],EAX                ; 00490293 | CVector3i_02ca0388.y
    FXCH ST2                            ; 00490298
    FSTP float ptr [0x02ca0388]         ; 0049029a | CVector3i_02ca0388
    FXCH ST2                            ; 004902a0
    FSTP float ptr [0x02ca0390]         ; 004902a2 | CVector3i_02ca0388.z
    FXCH                                ; 004902a8
    FSTP float ptr [ESP + 0x80]         ; 004902aa
    FCOMP float ptr [ESP + 0x80]        ; 004902b1
    FNSTSW AX                           ; 004902b8
    SAHF                                ; 004902ba
    JC 0x00490693                       ; 004902bb
        ;   XREF to: 00490693 (CONDITIONAL_JUMP)  ; LAB_00490693
    FLD float ptr [ESP + 0x64]          ; 004902c1
        ;   Label: LAB_004902c1
    FSUB float ptr [ESP + 0x58]         ; 004902c5
    FMUL double ptr [0x00622572]        ; 004902c9 | DOUBLE_00622572
    FST float ptr [ESP + 0x88]          ; 004902cf
    FCOMP float ptr [0x00672360]        ; 004902d6 | g_SkyDomeVertexScale
    FNSTSW AX                           ; 004902dc
    SAHF                                ; 004902de
    JBE 0x004902ed                      ; 004902df
        ;   XREF to: 004902ed (CONDITIONAL_JUMP)  ; LAB_004902ed
    MOV EAX,dword ptr [ESP + 0x88]      ; 004902e1
    MOV [0x00672360],EAX                ; 004902e8 | g_SkyDomeVertexScale
    FLD float ptr [ESP + 0x68]          ; 004902ed
        ;   Label: LAB_004902ed
    FSUB float ptr [ESP + 0x5c]         ; 004902f1
    FMUL double ptr [0x0062256a]        ; 004902f5 | DOUBLE_0062256a
    FMUL double ptr [0x00622572]        ; 004902fb | DOUBLE_00622572
    FST float ptr [ESP + 0x84]          ; 00490301
    FCOMP float ptr [0x00672360]        ; 00490308 | g_SkyDomeVertexScale
    FNSTSW AX                           ; 0049030e
    SAHF                                ; 00490310
    JBE 0x0049031f                      ; 00490311
        ;   XREF to: 0049031f (CONDITIONAL_JUMP)  ; LAB_0049031f
    MOV EAX,dword ptr [ESP + 0x84]      ; 00490313
    MOV [0x00672360],EAX                ; 0049031a | g_SkyDomeVertexScale
    PUSH 0x2ca0388                      ; 0049031f | CVector3i_02ca0388
        ;   Label: LAB_0049031f
    MOV ECX,dword ptr [0x006703ec]      ; 00490324 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 0049032a | g_CDemonRendererInstance
    MOV EBX,0x4                         ; 0049032b
    XOR ESI,ESI                         ; 00490330
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 00490332
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    MOV ECX,dword ptr [0x006703ec]      ; 00490337 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    ADD ESP,0x8                         ; 0049033d
    LEA EAX,[EBX + EBP*0x1]             ; 00490340
    MOV dword ptr [ESP + 0x4],EBX       ; 00490343
    PUSH EAX                            ; 00490347
    MOV dword ptr [ESP + 0x18],ESI      ; 00490348
    MOV dword ptr [ESP + 0x14],ESI      ; 0049034c
    PUSH ECX                            ; 00490350 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x14],ESI      ; 00490351
    MOV dword ptr [ESP + 0x10],ESI      ; 00490355
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 00490359
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    FLD double ptr [0x0062257a]         ; 0049035e | DOUBLE_0062257a
    FSIN                                ; 00490364
    ADD ESP,0x8                         ; 00490366
    FLD float ptr [0x00672360]          ; 00490369 | g_SkyDomeVertexScale
    FXCH                                ; 0049036f
    FMUL ST1                            ; 00490371
    FLD double ptr [0x00622582]         ; 00490373 | DOUBLE_00622582
    FXCH                                ; 00490379
    FMUL ST1                            ; 0049037b
    FXCH ST2                            ; 0049037d
    FMULP                               ; 0049037f
    FXCH                                ; 00490381
    CALL crt_math.c_round_FUN_005fe6b0  ; 00490383
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x48]        ; 00490388
    MOV EAX,dword ptr [ESP + 0x48]      ; 0049038c
    MOV ECX,dword ptr [0x006703ec]      ; 00490390 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x50],EAX      ; 00490396
    LEA EAX,[ESP + 0x48]                ; 0049039a
    CALL crt_math.c_round_FUN_005fe6b0  ; 0049039e
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH EAX                            ; 004903a3
    FISTP dword ptr [ESP + 0x50]        ; 004903a4
    MOV EAX,dword ptr [ECX]             ; 004903a8 | g_CDemonRendererInstance
    PUSH EAX                            ; 004903aa
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004903ab
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004903b0
    MOV EBX,dword ptr [ESP + 0x48]      ; 004903b3
    LEA EAX,[ESP + 0x48]                ; 004903b7
    NEG EBX                             ; 004903bb
    MOV ECX,dword ptr [0x006703ec]      ; 004903bd | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x48],EBX      ; 004903c3
    PUSH EAX                            ; 004903c7
    MOV EAX,dword ptr [ECX]             ; 004903c8 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004903ca
    PUSH EAX                            ; 004903cd
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004903ce
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004903d3
    MOV ESI,dword ptr [ESP + 0x50]      ; 004903d6
    LEA EAX,[ESP + 0x48]                ; 004903da
    NEG ESI                             ; 004903de
    MOV ECX,dword ptr [0x006703ec]      ; 004903e0 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x50],ESI      ; 004903e6
    PUSH EAX                            ; 004903ea
    MOV EAX,dword ptr [ECX]             ; 004903eb | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 004903ed
    PUSH EAX                            ; 004903f0
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004903f1
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004903f6
    MOV EDI,dword ptr [ESP + 0x48]      ; 004903f9
    NEG EDI                             ; 004903fd
    MOV EAX,[0x006703ec]                ; 004903ff | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x48],EDI      ; 00490404
    LEA ECX,[ESP + 0x48]                ; 00490408
    MOV EAX,dword ptr [EAX]             ; 0049040c | g_CDemonRendererInstance
    PUSH ECX                            ; 0049040e
    ADD EAX,0x90                        ; 0049040f
    PUSH EAX                            ; 00490414
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00490415
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049041a
    MOV EAX,[0x006703ec]                ; 0049041d | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV EBX,dword ptr [EAX]             ; 00490422 | g_CDemonRendererInstance
    MOV ECX,dword ptr [EBP]             ; 00490424
    MOV dword ptr [EBX + 0x20],ECX      ; 00490427
    MOV EBX,dword ptr [EAX]             ; 0049042a | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x24],ECX      ; 0049042c
    MOV EBX,dword ptr [EAX]             ; 0049042f | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x28],ECX      ; 00490431
    MOV ECX,dword ptr [EAX]             ; 00490434 | g_CDemonRendererInstance
    MOV dword ptr [ECX + 0x2c],0x0      ; 00490436
    MOV ECX,dword ptr [EAX]             ; 0049043d | g_CDemonRendererInstance
    MOV EBX,dword ptr [EBP]             ; 0049043f
    MOV dword ptr [ECX + 0x50],EBX      ; 00490442
    MOV ECX,dword ptr [EAX]             ; 00490445 | g_CDemonRendererInstance
    MOV dword ptr [ECX + 0x54],EBX      ; 00490447
    MOV EBX,dword ptr [EAX]             ; 0049044a | g_CDemonRendererInstance
    MOV ECX,dword ptr [EBP]             ; 0049044c
    MOV dword ptr [EBX + 0x58],ECX      ; 0049044f
    MOV ECX,dword ptr [EAX]             ; 00490452 | g_CDemonRendererInstance
    MOV dword ptr [ECX + 0x5c],0x0      ; 00490454
    MOV EBX,dword ptr [EAX]             ; 0049045b | g_CDemonRendererInstance
    MOV ECX,dword ptr [EBP]             ; 0049045d
    MOV dword ptr [EBX + 0x80],ECX      ; 00490460
    MOV EBX,dword ptr [EAX]             ; 00490466 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x84],ECX      ; 00490468
    MOV EBX,dword ptr [EAX]             ; 0049046e | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x88],ECX      ; 00490470
    MOV ECX,dword ptr [EAX]             ; 00490476 | g_CDemonRendererInstance
    MOV dword ptr [ECX + 0x8c],0x0      ; 00490478
    MOV EBX,dword ptr [EAX]             ; 00490482 | g_CDemonRendererInstance
    MOV ECX,dword ptr [EBP]             ; 00490484
    MOV dword ptr [EBX + 0xb0],ECX      ; 00490487
    MOV EBX,dword ptr [EAX]             ; 0049048d | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0xb4],ECX      ; 0049048f
    MOV EBX,dword ptr [EAX]             ; 00490495 | g_CDemonRendererInstance
    MOV ESI,0x1                         ; 00490497
    MOV dword ptr [EBX + 0xb8],ECX      ; 0049049c
    MOV EDI,0x3                         ; 004904a2
    MOV ECX,dword ptr [EAX]             ; 004904a7 | g_CDemonRendererInstance
    PUSH 0x2c5                          ; 004904a9
    XOR EDX,EDX                         ; 004904ae
    MOV dword ptr [ECX + 0xbc],0x0      ; 004904b0
    MOV ECX,0x80000                     ; 004904ba
    MOV dword ptr [ESP + 0x1c],EDX      ; 004904bf
    MOV dword ptr [ESP + 0x28],ESI      ; 004904c3
    MOV dword ptr [ESP + 0x20],ECX      ; 004904c7
    MOV EBX,ECX                         ; 004904cb
    MOV dword ptr [ESP + 0x24],ECX      ; 004904cd
    MOV dword ptr [ESP + 0x2c],ECX      ; 004904d1
    MOV dword ptr [ESP + 0x30],ECX      ; 004904d5
    MOV ECX,0x2                         ; 004904d9
    MOV dword ptr [ESP + 0x40],EDI      ; 004904de
    MOV dword ptr [ESP + 0x34],ECX      ; 004904e2
    LEA ECX,[ESP + 0x4]                 ; 004904e6
    XOR EDI,EDI                         ; 004904ea
    PUSH ECX                            ; 004904ec
    MOV dword ptr [ESP + 0x3c],EBX      ; 004904ed
    MOV dword ptr [ESP + 0x40],EBX      ; 004904f1
    PUSH EAX                            ; 004904f5 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x4c],EBX      ; 004904f6
    MOV dword ptr [ESP + 0x50],EBX      ; 004904fa
    CALL engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0 ; 004904fe
        ;   XREF to: 0048aeb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 00490503
    MOV dword ptr [ESP + 0x90],EDI      ; 00490506
    MOV ESI,dword ptr [ESP + 0x90]      ; 0049050d
        ;   Label: LAB_0049050d
    XOR EBX,EBX                         ; 00490514
    PUSH ESI                            ; 00490516
        ;   Label: LAB_00490516
    PUSH EBX                            ; 00490517
    PUSH EDI                            ; 00490518
    PUSH EBP                            ; 00490519
    INC ESI                             ; 0049051a
    INC EBX                             ; 0049051b
    CALL core_dskybox.cpp_generateSkyDomeVertex_FUN_004900b0 ; 0049051c
        ;   XREF to: 004900b0 (UNCONDITIONAL_CALL)  ; void core_dskybox.cpp_generateSkyDomeVertex_FUN_004900b0(SMRGLTextureBasic * sky_texture, int u_coord, int v_coord, int vertex_index)
    ADD ESP,0x10                        ; 00490521
    CMP EBX,0x4                         ; 00490524
    JL 0x00490516                       ; 00490527
        ;   XREF to: 00490516 (CONDITIONAL_JUMP)  ; LAB_00490516
    MOV ESI,dword ptr [ESP + 0x90]      ; 00490529
    ADD ESI,0x4                         ; 00490530
    INC EDI                             ; 00490533
    MOV dword ptr [ESP + 0x90],ESI      ; 00490534
    CMP EDI,0x10                        ; 0049053b
    JLE 0x0049050d                      ; 0049053e
        ;   XREF to: 0049050d (CONDITIONAL_JUMP)  ; LAB_0049050d
    XOR EDI,EDI                         ; 00490540
    MOV dword ptr [ESP + 0x94],EDI      ; 00490542
    MOV dword ptr [ESP + 0x8c],EDI      ; 00490549
    MOV EAX,dword ptr [ESP + 0x94]      ; 00490550
        ;   Label: LAB_00490550
    MOV dword ptr [ESP + 0x98],EAX      ; 00490557
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0049055e
    MOV EDX,EAX                         ; 00490565
    SAR EDX,0x1f                        ; 00490567
    SHL EDX,0x2                         ; 0049056a
    SBB EAX,EDX                         ; 0049056d
    SAR EAX,0x2                         ; 0049056f
    MOV ESI,0x1000000                   ; 00490572 | g_LightBufferPool[13][93688]
    AND EAX,0xffffff                    ; 00490577
    XOR EBX,EBX                         ; 0049057c
    MOV dword ptr [ESP + 0xa0],EAX      ; 0049057e
    ADD EAX,0x400000                    ; 00490585 | IMAGE_DOS_HEADER_00400000
    XOR EDI,EDI                         ; 0049058a
    MOV dword ptr [ESP + 0x9c],EAX      ; 0049058c
    MOV ECX,dword ptr [ESP + 0x98]      ; 00490593
        ;   Label: LAB_00490593
    ADD ECX,EDI                         ; 0049059a
    LEA EAX,[ECX + 0x1]                 ; 0049059c
    MOV dword ptr [ESP + 0x74],EAX      ; 0049059f
    LEA EAX,[ECX + 0x5]                 ; 004905a3
    MOV EDX,EBX                         ; 004905a6
    MOV dword ptr [ESP + 0x78],EAX      ; 004905a8
    LEA EAX,[ECX + 0x4]                 ; 004905ac
    SAR EDX,0x1f                        ; 004905af
    MOV dword ptr [ESP + 0x7c],EAX      ; 004905b2
    MOV EAX,EBX                         ; 004905b6
    SHL EDX,0x2                         ; 004905b8
    SBB EAX,EDX                         ; 004905bb
    SAR EAX,0x2                         ; 004905bd
    MOV EBP,EAX                         ; 004905c0
    MOV EDX,ESI                         ; 004905c2
    MOV EAX,ESI                         ; 004905c4
    SAR EDX,0x1f                        ; 004905c6
    SHL EDX,0x2                         ; 004905c9
    SBB EAX,EDX                         ; 004905cc
    SAR EAX,0x2                         ; 004905ce
    MOV dword ptr [ESP + 0x18],ECX      ; 004905d1
    MOV ECX,dword ptr [ESP + 0xa0]      ; 004905d5
    MOV dword ptr [ESP + 0x1c],ECX      ; 004905dc
    MOV ECX,dword ptr [ESP + 0x74]      ; 004905e0
    PUSH 0x2c5                          ; 004905e4
    MOV dword ptr [ESP + 0x28],ECX      ; 004905e9
    MOV ECX,dword ptr [ESP + 0xa4]      ; 004905ed
    INC EDI                             ; 004905f4
    MOV dword ptr [ESP + 0x2c],ECX      ; 004905f5
    MOV ECX,dword ptr [ESP + 0x7c]      ; 004905f9
    ADD EBX,0x1000000                   ; 004905fd | g_LightBufferPool[13][93688]
    MOV dword ptr [ESP + 0x34],ECX      ; 00490603
    MOV ECX,dword ptr [ESP + 0xa0]      ; 00490607
    XOR EAX,0xffffff                    ; 0049060e
    MOV dword ptr [ESP + 0x38],ECX      ; 00490613
    MOV dword ptr [ESP + 0x30],EAX      ; 00490617
    MOV dword ptr [ESP + 0x3c],EAX      ; 0049061b
    MOV EAX,dword ptr [ESP + 0x80]      ; 0049061f
    MOV dword ptr [ESP + 0x44],ECX      ; 00490626
    MOV dword ptr [ESP + 0x40],EAX      ; 0049062a
    LEA EAX,[ESP + 0x4]                 ; 0049062e
    XOR EBP,0xffffff                    ; 00490632
    PUSH EAX                            ; 00490638
    MOV EAX,[0x006703ec]                ; 00490639 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x28],EBP      ; 0049063e
    PUSH EAX                            ; 00490642 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x50],EBP      ; 00490643
    ADD ESI,0x1000000                   ; 00490647 | g_LightBufferPool[13][93688]
    CALL engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0 ; 0049064d
        ;   XREF to: 0048aeb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 00490652
    CMP EDI,0x3                         ; 00490655
    JL 0x00490593                       ; 00490658
        ;   XREF to: 00490593 (CONDITIONAL_JUMP)  ; LAB_00490593
    MOV EDX,dword ptr [ESP + 0x94]      ; 0049065e
    MOV AH,byte ptr [ESP + 0x8f]        ; 00490665
    ADD EDX,0x4                         ; 0049066c
    INC AH                              ; 0049066f
    MOV dword ptr [ESP + 0x94],EDX      ; 00490671
    MOV byte ptr [ESP + 0x8f],AH        ; 00490678
    CMP EDX,0x40                        ; 0049067f
    JNZ 0x00490550                      ; 00490682
        ;   XREF to: 00490550 (CONDITIONAL_JUMP)  ; LAB_00490550
    ADD ESP,0xa4                        ; 00490688
    POP EBP                             ; 0049068e
    POP EDI                             ; 0049068f
    POP ESI                             ; 00490690
    POP EBX                             ; 00490691
    RET                                 ; 00490692
    MOV EAX,dword ptr [ESP + 0x80]      ; 00490693
        ;   Label: LAB_00490693
    MOV [0x00672360],EAX                ; 0049069a | g_SkyDomeVertexScale
    JMP 0x004902c1                      ; 0049069f
        ;   XREF to: 004902c1 (UNCONDITIONAL_JUMP)  ; LAB_004902c1

