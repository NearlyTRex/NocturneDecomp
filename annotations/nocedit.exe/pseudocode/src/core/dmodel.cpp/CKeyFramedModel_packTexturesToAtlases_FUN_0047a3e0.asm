; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0(CKeyFramedModel *model_ptr,char *atlas_filename,int quality_parameter,int pack_parameter)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   model_ptr
; char *           Stack[0x8]:4   atlas_filename
; int              Stack[0xc]:4   quality_parameter
; int              Stack[0x10]:4   pack_parameter
; Local Variables:
; float            Stack[-0xc0]:4  fStack_c0
; float            Stack[-0xbc]:4  fStack_bc
; SCram            Stack[-0xb8]:116  local_b8
; int              Stack[-0x44]:4  iStack_44
; SMRGLTextureLod * Stack[-0x40]:4  pSStack_40
; char *           Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  iStack_38
; char *           Stack[-0x34]:4  pcStack_34
; int              Stack[-0x30]:4  iStack_30
; int              Stack[-0x2c]:4  iStack_2c
; int              Stack[-0x28]:4  iStack_28
; int              Stack[-0x24]:4  local_24
; int *            Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047dc9d
;
; Referenced Globals:
;   double g_TextureScaleFactor = 65536
;   double g_FixedPointToFloat_0062022b = 0.0000152587890625
;   double g_MaxTextureCoordinate = 255.999000000000
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820
;   crt_math.c_round_FUN_005fe6b0
;   engine_texture.cpp_clearTextureCache_FUN_005dd8e0
;   shape_design.c_cramTextureList_FUN_0046bb80
;   shape_design.c_cramTextures_FUN_0046a970
;   shape_design.c_findTextureByFilename_FUN_0046dfc0
;   shape_design.c_fixupCramUV_FUN_0046e090
;   shape_design.c_getAtlasMapIndex_FUN_0046e030
;   shape_design.c_getLastTextureProcessIndex_FUN_0046a860
;   shape_design.c_getTextureName_FUN_0046e060
;   shape_design.c_initializeCram_FUN_0046b6e0
;   shape_design.c_initializeTextureManager_FUN_0046a880
;   shape_design.c_setTextureQualityParameter_FUN_0046a8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a3e0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0
    PUSH ESI                            ; 0047a3e1
    PUSH EDI                            ; 0047a3e2
    PUSH EBP                            ; 0047a3e3
    MOV EBP,ESP                         ; 0047a3e4
    SUB ESP,0xb0                        ; 0047a3e6
    AND ESP,0xfffffff8                  ; 0047a3ec
    PUSH 0x1                            ; 0047a3ef
    CALL shape_design.c_initializeTextureManager_FUN_0046a880 ; 0047a3f1
        ;   XREF to: 0046a880 (UNCONDITIONAL_CALL)  ; void shape_design.c_initializeTextureManager_FUN_0046a880(int initialization_mode)
    ADD ESP,0x4                         ; 0047a3f6
    PUSH 0x40                           ; 0047a3f9
    CALL shape_design.c_setTextureQualityParameter_FUN_0046a8e0 ; 0047a3fb
        ;   XREF to: 0046a8e0 (UNCONDITIONAL_CALL)  ; void shape_design.c_setTextureQualityParameter_FUN_0046a8e0(int texture_quality_param)
    ADD ESP,0x4                         ; 0047a400
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047a403
    XOR EDX,EDX                         ; 0047a406
    MOV ECX,dword ptr [EAX + 0x120]     ; 0047a408
    MOV dword ptr [ESP + 0x9c],EDX      ; 0047a40e
    TEST ECX,ECX                        ; 0047a415
    JLE 0x0047a554                      ; 0047a417
        ;   XREF to: 0047a554 (CONDITIONAL_JUMP)  ; LAB_0047a554
    ADD EAX,0x12c                       ; 0047a41d
    MOV dword ptr [ESP + 0x84],EAX      ; 0047a422
    MOV ESI,0x7fffffff                  ; 0047a429
        ;   Label: LAB_0047a429
    MOV EDI,0x80000001                  ; 0047a42e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047a433
    XOR EBX,EBX                         ; 0047a436
    MOV ECX,ESI                         ; 0047a438
    MOV dword ptr [ESP + 0xa8],EBX      ; 0047a43a
    MOV EBX,dword ptr [EAX + 0x110]     ; 0047a441
    MOV EDX,EDI                         ; 0047a447
    TEST EBX,EBX                        ; 0047a449
    JLE 0x0047a50b                      ; 0047a44b
        ;   XREF to: 0047a50b (CONDITIONAL_JUMP)  ; LAB_0047a50b
    MOV EAX,dword ptr [EAX + 0x118]     ; 0047a451
    MOV dword ptr [ESP + 0xa0],EAX      ; 0047a457
    XOR EAX,EAX                         ; 0047a45e
    MOV dword ptr [ESP + 0xa4],EAX      ; 0047a460
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0047a467
        ;   Label: LAB_0047a467
    MOV EBX,dword ptr [ESP + 0x9c]      ; 0047a46e
    CMP EBX,dword ptr [EAX]             ; 0047a475
    JNZ 0x0047a4c9                      ; 0047a477
        ;   XREF to: 0047a4c9 (CONDITIONAL_JUMP)  ; LAB_0047a4c9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047a479
    MOV EBX,dword ptr [ESP + 0xa4]      ; 0047a47c
    MOV EAX,dword ptr [EAX + 0x114]     ; 0047a483
    ADD EBX,EAX                         ; 0047a489
    MOV EAX,EBX                         ; 0047a48b
    ADD EBX,0x24                        ; 0047a48d
    MOV dword ptr [ESP + 0xac],EBX      ; 0047a490
    MOV EBX,dword ptr [EAX + 0x1c]      ; 0047a497
        ;   Label: LAB_0047a497
    CMP ESI,EBX                         ; 0047a49a
    JLE 0x0047a4a0                      ; 0047a49c
        ;   XREF to: 0047a4a0 (CONDITIONAL_JUMP)  ; LAB_0047a4a0
    MOV ESI,EBX                         ; 0047a49e
    MOV EBX,dword ptr [EAX + 0x1c]      ; 0047a4a0
        ;   Label: LAB_0047a4a0
    CMP EDI,EBX                         ; 0047a4a3
    JGE 0x0047a4a9                      ; 0047a4a5
        ;   XREF to: 0047a4a9 (CONDITIONAL_JUMP)  ; LAB_0047a4a9
    MOV EDI,EBX                         ; 0047a4a7
    MOV EBX,dword ptr [EAX + 0x20]      ; 0047a4a9
        ;   Label: LAB_0047a4a9
    CMP ECX,EBX                         ; 0047a4ac
    JLE 0x0047a4b2                      ; 0047a4ae
        ;   XREF to: 0047a4b2 (CONDITIONAL_JUMP)  ; LAB_0047a4b2
    MOV ECX,EBX                         ; 0047a4b0
    MOV EBX,dword ptr [EAX + 0x20]      ; 0047a4b2
        ;   Label: LAB_0047a4b2
    CMP EDX,EBX                         ; 0047a4b5
    JGE 0x0047a4bb                      ; 0047a4b7
        ;   XREF to: 0047a4bb (CONDITIONAL_JUMP)  ; LAB_0047a4bb
    MOV EDX,EBX                         ; 0047a4b9
    MOV EBX,dword ptr [ESP + 0xac]      ; 0047a4bb
        ;   Label: LAB_0047a4bb
    ADD EAX,0xc                         ; 0047a4c2
    CMP EAX,EBX                         ; 0047a4c5
    JNZ 0x0047a497                      ; 0047a4c7
        ;   XREF to: 0047a497 (CONDITIONAL_JUMP)  ; LAB_0047a497
    MOV EBX,dword ptr [ESP + 0xa0]      ; 0047a4c9
        ;   Label: LAB_0047a4c9
    ADD EBX,0x4                         ; 0047a4d0
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0047a4d3
    MOV dword ptr [ESP + 0xa0],EBX      ; 0047a4da
    MOV EBX,dword ptr [ESP + 0xa8]      ; 0047a4e1
    ADD EAX,0x48                        ; 0047a4e8
    INC EBX                             ; 0047a4eb
    MOV dword ptr [ESP + 0xa4],EAX      ; 0047a4ec
    MOV dword ptr [ESP + 0xa8],EBX      ; 0047a4f3
    MOV EAX,EBX                         ; 0047a4fa
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047a4fc
    CMP EAX,dword ptr [EBX + 0x110]     ; 0047a4ff
    JL 0x0047a467                       ; 0047a505
        ;   XREF to: 0047a467 (CONDITIONAL_JUMP)  ; LAB_0047a467
    CMP ESI,EDI                         ; 0047a50b
        ;   Label: LAB_0047a50b
    JG 0x0047a523                       ; 0047a50d
        ;   XREF to: 0047a523 (CONDITIONAL_JUMP)  ; LAB_0047a523
    PUSH EDX                            ; 0047a50f
    PUSH EDI                            ; 0047a510
    PUSH ECX                            ; 0047a511
    PUSH ESI                            ; 0047a512
    MOV ESI,dword ptr [ESP + 0x94]      ; 0047a513
    PUSH ESI                            ; 0047a51a
    CALL shape_design.c_cramTextures_FUN_0046a970 ; 0047a51b
        ;   XREF to: 0046a970 (UNCONDITIONAL_CALL)  ; void shape_design.c_cramTextures_FUN_0046a970(char * texture_filename, int min_u, int min_v, int max_u, ...)
    ADD ESP,0x14                        ; 0047a520
    MOV EBX,dword ptr [ESP + 0x84]      ; 0047a523
        ;   Label: LAB_0047a523
    MOV ESI,dword ptr [ESP + 0x9c]      ; 0047a52a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0047a531
    ADD EBX,0x48                        ; 0047a534
    INC ESI                             ; 0047a537
    MOV EDI,dword ptr [EDX + 0x120]     ; 0047a538
    MOV dword ptr [ESP + 0x84],EBX      ; 0047a53e
    MOV dword ptr [ESP + 0x9c],ESI      ; 0047a545
    CMP ESI,EDI                         ; 0047a54c
    JL 0x0047a429                       ; 0047a54e
        ;   XREF to: 0047a429 (CONDITIONAL_JUMP)  ; LAB_0047a429
    LEA EAX,[ESP + 0x8]                 ; 0047a554
        ;   Label: LAB_0047a554
    PUSH EAX                            ; 0047a558
    CALL shape_design.c_initializeCram_FUN_0046b6e0 ; 0047a559
        ;   XREF to: 0046b6e0 (UNCONDITIONAL_CALL)  ; void shape_design.c_initializeCram_FUN_0046b6e0(SCram * cram)
    ADD ESP,0x4                         ; 0047a55e
    LEA EDI,[ESP + 0x8]                 ; 0047a561
    MOV ESI,dword ptr [EBP + 0x18]      ; 0047a565
    MOV EDX,0x1                         ; 0047a568
    PUSH EDI                            ; 0047a56d
    MOV AL,byte ptr [ESI]               ; 0047a56e
        ;   Label: LAB_0047a56e
    MOV byte ptr [EDI],AL               ; 0047a570
    CMP AL,0x0                          ; 0047a572
    JZ 0x0047a586                       ; 0047a574
        ;   XREF to: 0047a586 (CONDITIONAL_JUMP)  ; LAB_0047a586
    MOV AL,byte ptr [ESI + 0x1]         ; 0047a576
    ADD ESI,0x2                         ; 0047a579
    MOV byte ptr [EDI + 0x1],AL         ; 0047a57c
    ADD EDI,0x2                         ; 0047a57f
    CMP AL,0x0                          ; 0047a582
    JNZ 0x0047a56e                      ; 0047a584
        ;   XREF to: 0047a56e (CONDITIONAL_JUMP)  ; LAB_0047a56e
    POP EDI                             ; 0047a586
        ;   Label: LAB_0047a586
    MOV EAX,dword ptr [EBP + 0x20]      ; 0047a587
    MOV ECX,0x2                         ; 0047a58a
    MOV dword ptr [ESP + 0x58],EAX      ; 0047a58f
    MOV EAX,0x5f                        ; 0047a593
    MOV dword ptr [ESP + 0x64],EDX      ; 0047a598
    MOV dword ptr [ESP + 0x60],EAX      ; 0047a59c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0047a5a0
    MOV dword ptr [ESP + 0x5c],ECX      ; 0047a5a3
    MOV dword ptr [ESP + 0x68],EAX      ; 0047a5a7
    LEA EAX,[ESP + 0x8]                 ; 0047a5ab
    MOV dword ptr [ESP + 0x74],EDX      ; 0047a5af
    PUSH EAX                            ; 0047a5b3
    MOV dword ptr [ESP + 0x70],EDX      ; 0047a5b4
    MOV dword ptr [ESP + 0x74],EDX      ; 0047a5b8
    CALL shape_design.c_cramTextureList_FUN_0046bb80 ; 0047a5bc
        ;   XREF to: 0046bb80 (UNCONDITIONAL_CALL)  ; int shape_design.c_cramTextureList_FUN_0046bb80(SCram * cram)
    ADD ESP,0x4                         ; 0047a5c1
    XOR EAX,EAX                         ; 0047a5c4
    MOV dword ptr [ESP + 0x90],EAX      ; 0047a5c6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047a5cd
    CMP dword ptr [EAX + 0x110],0x0     ; 0047a5d0
    JLE 0x0047a784                      ; 0047a5d7
        ;   XREF to: 0047a784 (CONDITIONAL_JUMP)  ; LAB_0047a784
    ADD EAX,0x124                       ; 0047a5dd
    XOR EDI,EDI                         ; 0047a5e2
    MOV dword ptr [ESP + 0x80],EAX      ; 0047a5e4
    MOV dword ptr [ESP + 0x88],EDI      ; 0047a5eb
    MOV dword ptr [ESP + 0x94],EDI      ; 0047a5f2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047a5f9
        ;   Label: LAB_0047a5f9
    MOV EDX,dword ptr [ESP + 0x94]      ; 0047a5fc
    MOV EAX,dword ptr [EAX + 0x118]     ; 0047a603
    ADD EAX,EDX                         ; 0047a609
    CMP dword ptr [EAX],0x0             ; 0047a60b
    JL 0x0047a808                       ; 0047a60e
        ;   XREF to: 0047a808 (CONDITIONAL_JUMP)  ; LAB_0047a808
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047a614
        ;   Label: LAB_0047a614
    MOV EBX,dword ptr [ESP + 0x94]      ; 0047a617
    MOV EAX,dword ptr [EAX + 0x118]     ; 0047a61e
    ADD EAX,EBX                         ; 0047a624
    IMUL EAX,dword ptr [EAX],0x48       ; 0047a626
    ADD EAX,dword ptr [ESP + 0x80]      ; 0047a629
    ADD EAX,0x8                         ; 0047a630
    PUSH EAX                            ; 0047a633
    CALL shape_design.c_findTextureByFilename_FUN_0046dfc0 ; 0047a634
        ;   XREF to: 0046dfc0 (UNCONDITIONAL_CALL)  ; int shape_design.c_findTextureByFilename_FUN_0046dfc0(char * filename)
    ADD ESP,0x4                         ; 0047a639
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047a63c
    MOV dword ptr [ESP + 0x98],EAX      ; 0047a63f
    MOV EAX,dword ptr [ESP + 0x88]      ; 0047a646
    MOV EBX,dword ptr [EBX + 0x114]     ; 0047a64d
    ADD EBX,EAX                         ; 0047a653
    MOV EDX,dword ptr [EBX + 0x4]       ; 0047a655
    XOR EDI,EDI                         ; 0047a658
    TEST EDX,EDX                        ; 0047a65a
    JLE 0x0047a725                      ; 0047a65c
        ;   XREF to: 0047a725 (CONDITIONAL_JUMP)  ; LAB_0047a725
    MOV ESI,EBX                         ; 0047a662
    FLD double ptr [0x0062022b]         ; 0047a664 | g_FixedPointToFloat_0062022b
        ;   Label: LAB_0047a664
    FILD dword ptr [ESI + 0x1c]         ; 0047a66a
    FMUL ST1                            ; 0047a66d
    FSTP float ptr [ESP + 0x4]          ; 0047a66f
    FILD dword ptr [ESI + 0x20]         ; 0047a673
    FMULP                               ; 0047a676
    FLD float ptr [ESP + 0x4]           ; 0047a678
    FLDZ                                ; 0047a67c
    FXCH ST2                            ; 0047a67e
    FSTP float ptr [ESP]                ; 0047a680
    FXCH                                ; 0047a683
    FCOMPP                              ; 0047a685
    FNSTSW AX                           ; 0047a687
    SAHF                                ; 0047a689
    JBE 0x0047a692                      ; 0047a68a
        ;   XREF to: 0047a692 (CONDITIONAL_JUMP)  ; LAB_0047a692
    XOR ECX,ECX                         ; 0047a68c
    MOV dword ptr [ESP + 0x4],ECX       ; 0047a68e
    FLD float ptr [ESP + 0x4]           ; 0047a692
        ;   Label: LAB_0047a692
    FCOMP double ptr [0x00620233]       ; 0047a696 | g_MaxTextureCoordinate
    FNSTSW AX                           ; 0047a69c
    SAHF                                ; 0047a69e
    JBE 0x0047a6a9                      ; 0047a69f
        ;   XREF to: 0047a6a9 (CONDITIONAL_JUMP)  ; LAB_0047a6a9
    MOV dword ptr [ESP + 0x4],0x437fffbe ; 0047a6a1
    FLD float ptr [ESP]                 ; 0047a6a9
        ;   Label: LAB_0047a6a9
    FLDZ                                ; 0047a6ac
    FCOMPP                              ; 0047a6ae
    FNSTSW AX                           ; 0047a6b0
    SAHF                                ; 0047a6b2
    JBE 0x0047a6ba                      ; 0047a6b3
        ;   XREF to: 0047a6ba (CONDITIONAL_JUMP)  ; LAB_0047a6ba
    XOR EDX,EDX                         ; 0047a6b5
    MOV dword ptr [ESP],EDX             ; 0047a6b7
    FLD float ptr [ESP]                 ; 0047a6ba
        ;   Label: LAB_0047a6ba
    FCOMP double ptr [0x00620233]       ; 0047a6bd | g_MaxTextureCoordinate
    FNSTSW AX                           ; 0047a6c3
    SAHF                                ; 0047a6c5
    JBE 0x0047a6cf                      ; 0047a6c6
        ;   XREF to: 0047a6cf (CONDITIONAL_JUMP)  ; LAB_0047a6cf
    MOV dword ptr [ESP],0x437fffbe      ; 0047a6c8
    MOV EAX,ESP                         ; 0047a6cf
        ;   Label: LAB_0047a6cf
    PUSH EAX                            ; 0047a6d1
    LEA EAX,[ESP + 0x8]                 ; 0047a6d2
    PUSH EAX                            ; 0047a6d6
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0047a6d7
    PUSH EAX                            ; 0047a6de
    CALL shape_design.c_fixupCramUV_FUN_0046e090 ; 0047a6df
        ;   XREF to: 0046e090 (UNCONDITIONAL_CALL)  ; void shape_design.c_fixupCramUV_FUN_0046e090(int atlas_texture_index, float * u_coord, float * v_coord)
    ADD ESP,0xc                         ; 0047a6e4
    FLD double ptr [0x00620223]         ; 0047a6e7 | g_TextureScaleFactor
    FLD float ptr [ESP + 0x4]           ; 0047a6ed
    FMUL ST1                            ; 0047a6f1
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047a6f3
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x7c]        ; 0047a6f8
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0047a6fc
    MOV dword ptr [ESI + 0x1c],EAX      ; 0047a700
    FMUL float ptr [ESP]                ; 0047a703
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047a706
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x7c]        ; 0047a70b
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0047a70f
    MOV dword ptr [ESI + 0x20],EAX      ; 0047a713
    INC EDI                             ; 0047a716
    MOV EDX,dword ptr [EBX + 0x4]       ; 0047a717
    ADD ESI,0xc                         ; 0047a71a
    CMP EDI,EDX                         ; 0047a71d
    JL 0x0047a664                       ; 0047a71f
        ;   XREF to: 0047a664 (CONDITIONAL_JUMP)  ; LAB_0047a664
    MOV ESI,dword ptr [ESP + 0x98]      ; 0047a725
        ;   Label: LAB_0047a725
    PUSH ESI                            ; 0047a72c
    CALL shape_design.c_getAtlasMapIndex_FUN_0046e030 ; 0047a72d
        ;   XREF to: 0046e030 (UNCONDITIONAL_CALL)  ; int shape_design.c_getAtlasMapIndex_FUN_0046e030(int texture_entry_index)
    ADD ESP,0x4                         ; 0047a732
    MOV EDX,dword ptr [EBP + 0x14]      ; 0047a735
    MOV EDI,dword ptr [ESP + 0x94]      ; 0047a738
    MOV EDX,dword ptr [EDX + 0x118]     ; 0047a73f
    MOV ECX,dword ptr [ESP + 0x90]      ; 0047a745
    ADD EDX,EDI                         ; 0047a74c
    INC ECX                             ; 0047a74e
    MOV dword ptr [EDX],EAX             ; 0047a74f
    LEA EDX,[EDI + 0x4]                 ; 0047a751
    MOV EAX,dword ptr [ESP + 0x88]      ; 0047a754
    MOV dword ptr [ESP + 0x94],EDX      ; 0047a75b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0047a762
    MOV dword ptr [ESP + 0x90],ECX      ; 0047a765
    ADD EAX,0x48                        ; 0047a76c
    MOV EBX,dword ptr [EDX + 0x110]     ; 0047a76f
    MOV dword ptr [ESP + 0x88],EAX      ; 0047a775
    CMP ECX,EBX                         ; 0047a77c
    JL 0x0047a5f9                       ; 0047a77e
        ;   XREF to: 0047a5f9 (CONDITIONAL_JUMP)  ; LAB_0047a5f9
    CALL shape_design.c_getLastTextureProcessIndex_FUN_0046a860 ; 0047a784
        ;   XREF to: 0046a860 (UNCONDITIONAL_CALL)  ; int shape_design.c_getLastTextureProcessIndex_FUN_0046a860()
        ;   Label: LAB_0047a784
    MOV EDX,dword ptr [EBP + 0x14]      ; 0047a789
    XOR EBX,EBX                         ; 0047a78c
    MOV dword ptr [EDX + 0x120],EAX     ; 0047a78e
    TEST EAX,EAX                        ; 0047a794
    JLE 0x0047a7f0                      ; 0047a796
        ;   XREF to: 0047a7f0 (CONDITIONAL_JUMP)  ; LAB_0047a7f0
    LEA EAX,[EDX + 0x12c]               ; 0047a798
    MOV dword ptr [ESP + 0x8c],EAX      ; 0047a79e
    PUSH EBX                            ; 0047a7a5
        ;   Label: LAB_0047a7a5
    CALL shape_design.c_getTextureName_FUN_0046e060 ; 0047a7a6
        ;   XREF to: 0046e060 (UNCONDITIONAL_CALL)  ; char * shape_design.c_getTextureName_FUN_0046e060(int texture_index)
    ADD ESP,0x4                         ; 0047a7ab
    MOV ESI,EAX                         ; 0047a7ae
    MOV EDI,dword ptr [ESP + 0x8c]      ; 0047a7b0
    PUSH EDI                            ; 0047a7b7
    MOV AL,byte ptr [ESI]               ; 0047a7b8
        ;   Label: LAB_0047a7b8
    MOV byte ptr [EDI],AL               ; 0047a7ba
    CMP AL,0x0                          ; 0047a7bc
    JZ 0x0047a7d0                       ; 0047a7be
        ;   XREF to: 0047a7d0 (CONDITIONAL_JUMP)  ; LAB_0047a7d0
    MOV AL,byte ptr [ESI + 0x1]         ; 0047a7c0
    ADD ESI,0x2                         ; 0047a7c3
    MOV byte ptr [EDI + 0x1],AL         ; 0047a7c6
    ADD EDI,0x2                         ; 0047a7c9
    CMP AL,0x0                          ; 0047a7cc
    JNZ 0x0047a7b8                      ; 0047a7ce
        ;   XREF to: 0047a7b8 (CONDITIONAL_JUMP)  ; LAB_0047a7b8
    POP EDI                             ; 0047a7d0
        ;   Label: LAB_0047a7d0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047a7d1
    INC EBX                             ; 0047a7d4
    LEA ECX,[EDI + 0x48]                ; 0047a7d5
    MOV ESI,dword ptr [EAX + 0x120]     ; 0047a7d8
    MOV dword ptr [ESP + 0x8c],ECX      ; 0047a7de
    CMP EBX,ESI                         ; 0047a7e5
    JL 0x0047a7a5                       ; 0047a7e7
        ;   XREF to: 0047a7a5 (CONDITIONAL_JUMP)  ; LAB_0047a7a5
    LEA EAX,[EAX]                       ; 0047a7e9
    NOP                                 ; 0047a7ef
    MOV ESI,dword ptr [EBP + 0x14]      ; 0047a7f0
        ;   Label: LAB_0047a7f0
    PUSH ESI                            ; 0047a7f3
    CALL core_dmodel.cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820 ; 0047a7f4
        ;   XREF to: 0047a820 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_sortPolygonsByTexture_FUN_0047a820(CKeyFramedModel * model_ptr)
    ADD ESP,0x4                         ; 0047a7f9
    CALL engine_texture.cpp_clearTextureCache_FUN_005dd8e0 ; 0047a7fc
        ;   XREF to: 005dd8e0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_clearTextureCache_FUN_005dd8e0()
    MOV ESP,EBP                         ; 0047a801
    POP EBP                             ; 0047a803
    POP EDI                             ; 0047a804
    POP ESI                             ; 0047a805
    POP EBX                             ; 0047a806
    RET                                 ; 0047a807
    MOV dword ptr [EAX],0x0             ; 0047a808
        ;   Label: LAB_0047a808
    JMP 0x0047a614                      ; 0047a80e
        ;   XREF to: 0047a614 (UNCONDITIONAL_JUMP)  ; LAB_0047a614

