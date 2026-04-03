; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_render3DCharacter_FUN_004ce2d0(CBitFont *this_ptr,int character_code,int x,int y,int right_x,int bottom_y,int color_mode)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   character_code
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
; int              Stack[0x14]:4   right_x
; int              Stack[0x18]:4   bottom_y
; int              Stack[0x1c]:4   color_mode
; Local Variables:
; SMRGLPrimitiveTriangleIndex Stack[-0x54]:36  SStack_54
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0 at 004cea64
;
; Referenced Globals:
;   SMRGLTextureBasic g_FontTextureInfo
;   undefined4 g_TempFilenameBuffer
;   undefined4 g_FontTextureInfo.texture_name[1]
;   undefined4 g_FontTextureInfo.texture_name[2]
;   undefined4 g_FontTextureInfo.texture_name[3]
;   SRenderVertex g_QuadVertex0
;   undefined4 g_QuadVertex0_Y
;   undefined4 g_QuadVertex0_U
;   undefined4 g_QuadVertex0_V
;   undefined4 g_QuadVertex0.u
;   undefined4 g_QuadVertex0.v
;   undefined4 g_CurrentRenderColorRed
;   undefined4 g_CurrentRenderColorGreen
;   undefined4 g_CurrentRenderColorBlue
;   SRenderVertex g_QuadVertex1
;   ... and 23 more
;
; Called Functions:
;   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620
;   engine_3d.c_setRenderAlpha_FUN_00406d80
;   engine_matrix.c_projectCachedPoint_FUN_0050cda0
;   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ce2d0
        ;   Label: engine_font.cpp_CBitFont_render3DCharacter_FUN_004ce2d0
    PUSH ESI                            ; 004ce2d1
    PUSH EDI                            ; 004ce2d2
    PUSH EBP                            ; 004ce2d3
    SUB ESP,0x44                        ; 004ce2d4
    MOV EBX,dword ptr [ESP + 0x70]      ; 004ce2d7
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004ce2db
    MOV EDX,dword ptr [ESP + 0x58]      ; 004ce2df
    SHL EAX,0x2                         ; 004ce2e3
    ADD EAX,EDX                         ; 004ce2e6
    MOV EAX,dword ptr [EAX + 0x2168]    ; 004ce2e8
    LEA ECX,[EAX*0x4 + 0x0]             ; 004ce2ee
    ADD ECX,EAX                         ; 004ce2f5
    LEA ESI,[EDX + 0x4]                 ; 004ce2f7
    SHL ECX,0x4                         ; 004ce2fa
    MOV EDI,0x67b558                    ; 004ce2fd | g_TempFilenameBuffer
    ADD ESI,ECX                         ; 004ce302
    PUSH EDI                            ; 004ce304 | g_TempFilenameBuffer
    MOV AL,byte ptr [ESI]               ; 004ce305
        ;   Label: LAB_004ce305
    MOV byte ptr [EDI],AL               ; 004ce307 | g_TempFilenameBuffer | g_FontTextureInfo.texture_name[2]
    CMP AL,0x0                          ; 004ce309
    JZ 0x004ce31d                       ; 004ce30b
        ;   XREF to: 004ce31d (CONDITIONAL_JUMP)  ; LAB_004ce31d
    MOV AL,byte ptr [ESI + 0x1]         ; 004ce30d
    ADD ESI,0x2                         ; 004ce310
    MOV byte ptr [EDI + 0x1],AL         ; 004ce313 | g_FontTextureInfo.texture_name[1] | g_FontTextureInfo.texture_name[3]
    ADD EDI,0x2                         ; 004ce316
    CMP AL,0x0                          ; 004ce319
    JNZ 0x004ce305                      ; 004ce31b
        ;   XREF to: 004ce305 (CONDITIONAL_JUMP)  ; LAB_004ce305
    POP EDI                             ; 004ce31d
        ;   Label: LAB_004ce31d
    PUSH 0x67b550                       ; 004ce31e | g_FontTextureInfo
    MOV EBP,0x4e1e                      ; 004ce323
    MOV ESI,0x4e1d                      ; 004ce328
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800 ; 004ce32d
        ;   XREF to: 005dd800 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_texture.cpp_ensureTextureLoaded_FUN_005dd800(SMRGLTextureBasic * texture)
    MOV ECX,0x4e1c                      ; 004ce332
    ADD ESP,0x4                         ; 004ce337
    MOV EDI,0x4e1f                      ; 004ce33a
    MOV dword ptr [ESP + 0x3c],ECX      ; 004ce33f
    MOV dword ptr [ESP + 0x40],ESI      ; 004ce343
    MOV dword ptr [ESP + 0x38],EDI      ; 004ce347
    CMP EBX,-0x2                        ; 004ce34b
    JZ 0x004ce746                       ; 004ce34e
        ;   XREF to: 004ce746 (CONDITIONAL_JUMP)  ; LAB_004ce746
    TEST EBX,EBX                        ; 004ce354
    JL 0x004ce76a                       ; 004ce356
        ;   XREF to: 004ce76a (CONDITIONAL_JUMP)  ; LAB_004ce76a
    MOV EAX,EBX                         ; 004ce35c
    LEA ECX,[EBX*0x4 + 0x0]             ; 004ce35e
    SUB ECX,EBX                         ; 004ce365
    XOR EAX,EBX                         ; 004ce367
    MOV AL,byte ptr [ECX + 0x2d01f48]   ; 004ce369 | g_SourcePaletteData
    SHL EAX,0x8                         ; 004ce36f
    MOV [0x00772574],EAX                ; 004ce372 | g_CurrentRenderColorRed
    XOR EAX,EAX                         ; 004ce377
    MOV AL,byte ptr [ECX + 0x2d01f49]   ; 004ce379 | CHAR_ARRAY_02d01f49
    SHL EAX,0x8                         ; 004ce37f
    MOV [0x00772578],EAX                ; 004ce382 | g_CurrentRenderColorGreen
    XOR EAX,EAX                         ; 004ce387
    MOV AL,byte ptr [ECX + 0x2d01f4a]   ; 004ce389 | CHAR_ARRAY_02d01f4a
    SHL EAX,0x8                         ; 004ce38f
        ;   Label: LAB_004ce38f
    MOV [0x0077257c],EAX                ; 004ce392 | g_CurrentRenderColorBlue
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004ce397
        ;   Label: LAB_004ce397
    LEA ECX,[EAX*0x4 + 0x0]             ; 004ce39b
    MOV EBX,0x10000                     ; 004ce3a2
    SUB ECX,EAX                         ; 004ce3a7
    MOV EDX,dword ptr [ESP + 0x40]      ; 004ce3a9
    MOV EAX,ECX                         ; 004ce3ad
    LEA ESI,[EDX*0x4 + 0x0]             ; 004ce3af
    SHL EAX,0x4                         ; 004ce3b6
    SUB ESI,EDX                         ; 004ce3b9
    MOV dword ptr [EAX + 0x68801c],EBX  ; 004ce3bb | g_QuadVertex0_U
    SHL ESI,0x4                         ; 004ce3c1
    MOV dword ptr [EAX + 0x688020],EBX  ; 004ce3c4 | g_QuadVertex0_V
    JMP 0x03fc3535                      ; 004ce3ca
        ;   XREF to: 03fc3535 (UNCONDITIONAL_JUMP)  ; LAB_03fc3535
    LEA ESI,[EBP*0x4 + 0x0]             ; 004ce3dd
        ;   Label: LAB_004ce3dd
    SUB ESI,EBP                         ; 004ce3e4
    SHL ESI,0x4                         ; 004ce3e6
    JMP 0x03fc3599                      ; 004ce3e9
        ;   XREF to: 03fc3599 (UNCONDITIONAL_JUMP)  ; LAB_03fc3599
    LEA ESI,[EDX*0x4 + 0x0]             ; 004ce400
        ;   Label: LAB_004ce400
    JMP 0x03fc3601                      ; 004ce407
        ;   XREF to: 03fc3601 (UNCONDITIONAL_JUMP)  ; LAB_03fc3601
    MOV EAX,dword ptr [ESP + 0x60]      ; 004ce428
        ;   Label: LAB_004ce428
    MOV EDI,dword ptr [ESP + 0x68]      ; 004ce42c
    MOV ECX,dword ptr [0x02d03e94]      ; 004ce430 | g_UseExternalRenderer
    SHL EAX,0x10                        ; 004ce436
    INC EDI                             ; 004ce439
    SUB EAX,0x1000                      ; 004ce43a
    MOV dword ptr [ESP + 0x68],EDI      ; 004ce43f
    MOV dword ptr [ESP + 0x34],EAX      ; 004ce443
    MOV ESI,EDI                         ; 004ce447
    MOV EAX,dword ptr [ESP + 0x64]      ; 004ce449
    SHL ESI,0x10                        ; 004ce44d
    MOV EDI,EDX                         ; 004ce450
    SHL EAX,0x10                        ; 004ce452
    ADD ESI,0x1000                      ; 004ce455
    SHL EDI,0x10                        ; 004ce45b
    SUB EAX,0x1000                      ; 004ce45e
    ADD EDI,0x1000                      ; 004ce463
    MOV dword ptr [ESP + 0x30],EAX      ; 004ce469
    TEST ECX,ECX                        ; 004ce46d
    JZ 0x004ce783                       ; 004ce46f
        ;   XREF to: 004ce783 (CONDITIONAL_JUMP)  ; LAB_004ce783
    MOV EAX,dword ptr [ESP + 0x34]      ; 004ce475
        ;   Label: LAB_004ce475
    MOV EDX,dword ptr [0x02d02550]      ; 004ce479 | g_ViewportRightFixed
    MOV EBX,dword ptr [0x02d02548]      ; 004ce47f | g_ViewportCenterXFixed
    SUB EAX,EDX                         ; 004ce485
    MOV EDX,0x10000                     ; 004ce487
    IMUL EDX                            ; 004ce48c
    IDIV EBX                            ; 004ce48e
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004ce490
    LEA ECX,[EDX*0x4 + 0x0]             ; 004ce494
    SUB ECX,EDX                         ; 004ce49b
    SHL ECX,0x4                         ; 004ce49d
    MOV EDX,dword ptr [0x02d02554]      ; 004ce4a0 | g_ViewportBottomFixed
    MOV dword ptr [ECX + 0x688014],EAX  ; 004ce4a6 | g_QuadVertex0
    MOV EAX,dword ptr [ESP + 0x30]      ; 004ce4ac
    MOV EBX,dword ptr [0x02d0254c]      ; 004ce4b0 | g_ViewportCenterYFixed
    SUB EAX,EDX                         ; 004ce4b6
    MOV EDX,0x10000                     ; 004ce4b8
    IMUL EDX                            ; 004ce4bd
    IDIV EBX                            ; 004ce4bf
    MOV EDX,0x10000                     ; 004ce4c1
    MOV dword ptr [ECX + 0x688018],EAX  ; 004ce4c6 | g_QuadVertex0_Y
    MOV ECX,dword ptr [0x02d02550]      ; 004ce4cc | g_ViewportRightFixed
    MOV EAX,ESI                         ; 004ce4d2
    MOV EBX,dword ptr [0x02d02548]      ; 004ce4d4 | g_ViewportCenterXFixed
    SUB EAX,ECX                         ; 004ce4da
    IMUL EDX                            ; 004ce4dc
    IDIV EBX                            ; 004ce4de
    MOV EDX,EAX                         ; 004ce4e0
    MOV EAX,dword ptr [ESP + 0x40]      ; 004ce4e2
    LEA ECX,[EAX*0x4 + 0x0]             ; 004ce4e6
    SUB ECX,EAX                         ; 004ce4ed
    SHL ECX,0x4                         ; 004ce4ef
    MOV EAX,dword ptr [ESP + 0x30]      ; 004ce4f2
    MOV dword ptr [ECX + 0x688014],EDX  ; 004ce4f6 | g_QuadVertex1
    MOV EDX,dword ptr [0x02d02554]      ; 004ce4fc | g_ViewportBottomFixed
    MOV EBX,dword ptr [0x02d0254c]      ; 004ce502 | g_ViewportCenterYFixed
    SUB EAX,EDX                         ; 004ce508
    MOV EDX,0x10000                     ; 004ce50a
    IMUL EDX                            ; 004ce50f
    IDIV EBX                            ; 004ce511
    MOV dword ptr [ECX + 0x688018],EAX  ; 004ce513 | g_QuadVertex1_Y
    MOV ECX,dword ptr [0x02d02550]      ; 004ce519 | g_ViewportRightFixed
    MOV EAX,ESI                         ; 004ce51f
    MOV EDX,0x10000                     ; 004ce521
    SUB EAX,ECX                         ; 004ce526
    LEA ECX,[EBP*0x4 + 0x0]             ; 004ce528
    MOV EBX,dword ptr [0x02d02548]      ; 004ce52f | g_ViewportCenterXFixed
    SUB ECX,EBP                         ; 004ce535
    IMUL EDX                            ; 004ce537
    IDIV EBX                            ; 004ce539
    SHL ECX,0x4                         ; 004ce53b
    MOV EDX,dword ptr [0x02d02554]      ; 004ce53e | g_ViewportBottomFixed
    MOV dword ptr [ECX + 0x688014],EAX  ; 004ce544 | g_QuadVertex2
    MOV EAX,EDI                         ; 004ce54a
    MOV EBX,dword ptr [0x02d0254c]      ; 004ce54c | g_ViewportCenterYFixed
    SUB EAX,EDX                         ; 004ce552
    MOV EDX,0x10000                     ; 004ce554
    IMUL EDX                            ; 004ce559
    IDIV EBX                            ; 004ce55b
    MOV EDX,0x10000                     ; 004ce55d
    MOV dword ptr [ECX + 0x688018],EAX  ; 004ce562 | g_QuadVertex2_Y
    MOV EAX,dword ptr [ESP + 0x34]      ; 004ce568
    MOV ECX,dword ptr [0x02d02550]      ; 004ce56c | g_ViewportRightFixed
    MOV EBX,dword ptr [0x02d02548]      ; 004ce572 | g_ViewportCenterXFixed
    SUB EAX,ECX                         ; 004ce578
    IMUL EDX                            ; 004ce57a
    IDIV EBX                            ; 004ce57c
    MOV EDX,dword ptr [ESP + 0x38]      ; 004ce57e
    LEA ECX,[EDX*0x4 + 0x0]             ; 004ce582
    SUB ECX,EDX                         ; 004ce589
    SHL ECX,0x4                         ; 004ce58b
    MOV dword ptr [ECX + 0x688014],EAX  ; 004ce58e | g_QuadVertex3
    MOV EDX,dword ptr [0x02d02554]      ; 004ce594 | g_ViewportBottomFixed
    MOV EAX,EDI                         ; 004ce59a
    MOV EBX,dword ptr [0x02d0254c]      ; 004ce59c | g_ViewportCenterYFixed
    SUB EAX,EDX                         ; 004ce5a2
    MOV EDX,0x10000                     ; 004ce5a4
    IMUL EDX                            ; 004ce5a9
    IDIV EBX                            ; 004ce5ab
    MOV dword ptr [ECX + 0x688018],EAX  ; 004ce5ad | g_QuadVertex3_Y
    MOV ECX,dword ptr [ESP + 0x3c]      ; 004ce5b3
    PUSH ECX                            ; 004ce5b7
    CALL engine_matrix.c_projectCachedPoint_FUN_0050cda0 ; 004ce5b8
        ;   XREF to: 0050cda0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPoint_FUN_0050cda0(int cacheIndex)
    ADD ESP,0x4                         ; 004ce5bd
    MOV EBX,dword ptr [ESP + 0x40]      ; 004ce5c0
    PUSH EBX                            ; 004ce5c4
    CALL engine_matrix.c_projectCachedPoint_FUN_0050cda0 ; 004ce5c5
        ;   XREF to: 0050cda0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPoint_FUN_0050cda0(int cacheIndex)
    ADD ESP,0x4                         ; 004ce5ca
    PUSH EBP                            ; 004ce5cd
    CALL engine_matrix.c_projectCachedPoint_FUN_0050cda0 ; 004ce5ce
        ;   XREF to: 0050cda0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPoint_FUN_0050cda0(int cacheIndex)
    ADD ESP,0x4                         ; 004ce5d3
    MOV EAX,dword ptr [ESP + 0x38]      ; 004ce5d6
    PUSH EAX                            ; 004ce5da
    CALL engine_matrix.c_projectCachedPoint_FUN_0050cda0 ; 004ce5db
        ;   XREF to: 0050cda0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPoint_FUN_0050cda0(int cacheIndex)
    ADD ESP,0x4                         ; 004ce5e0
    MOV ECX,dword ptr [ESP + 0x5c]      ; 004ce5e3
    MOV EDX,dword ptr [ESP + 0x58]      ; 004ce5e7
    SHL ECX,0x2                         ; 004ce5eb
    ADD ECX,EDX                         ; 004ce5ee
    MOV EAX,dword ptr [ECX + 0x2168]    ; 004ce5f0
    SHL EAX,0x2                         ; 004ce5f6
    ADD EAX,EDX                         ; 004ce5f9
    MOV ECX,dword ptr [ECX + 0x1d68]    ; 004ce5fb
    MOV EDX,dword ptr [EAX + 0x144]     ; 004ce601
    MOV EAX,dword ptr [EAX + 0x154]     ; 004ce607
    SUB ECX,EDX                         ; 004ce60d
    MOV dword ptr [ESP + 0x28],EAX      ; 004ce60f
    MOV EDX,ECX                         ; 004ce613
    MOV EBX,dword ptr [ESP + 0x28]      ; 004ce615
    MOV EAX,ECX                         ; 004ce619
    SAR EDX,0x1f                        ; 004ce61b
    IDIV EBX                            ; 004ce61e
    SHL EDX,0x10                        ; 004ce620
    LEA EBX,[EDX + 0xfffff000]          ; 004ce623
    MOV EAX,ECX                         ; 004ce629
    MOV EDX,ECX                         ; 004ce62b
    MOV ECX,dword ptr [ESP + 0x28]      ; 004ce62d
    SAR EDX,0x1f                        ; 004ce631
    IDIV ECX                            ; 004ce634
    SHL EAX,0x10                        ; 004ce636
    LEA EDX,[EAX + 0xfffff000]          ; 004ce639
    LEA EAX,[EBX + ESI*0x1]             ; 004ce63f
    SUB EAX,dword ptr [ESP + 0x34]      ; 004ce642
    LEA ESI,[EDX + EDI*0x1]             ; 004ce646
    MOV EDI,dword ptr [ESP + 0x30]      ; 004ce649
    MOV ECX,dword ptr [0x02d03e94]      ; 004ce64d | g_UseExternalRenderer
    SUB ESI,EDI                         ; 004ce653
    TEST ECX,ECX                        ; 004ce655
    JNZ 0x004ce664                      ; 004ce657
        ;   XREF to: 004ce664 (CONDITIONAL_JUMP)  ; LAB_004ce664
    ADD ESI,0x8000                      ; 004ce659
    ADD EAX,0x8000                      ; 004ce65f
    MOV ECX,dword ptr [ESP + 0x3c]      ; 004ce664
        ;   Label: LAB_004ce664
    MOV dword ptr [ESP + 0x2c],ECX      ; 004ce668
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004ce66c
    SHL ECX,0x2                         ; 004ce670
    SUB ECX,EDI                         ; 004ce673
    SHL ECX,0x4                         ; 004ce675
    MOV dword ptr [ECX + 0x68802c],EBX  ; 004ce678 | g_QuadVertex0.u
    MOV dword ptr [ECX + 0x688030],EDX  ; 004ce67e | g_QuadVertex0.v
    MOV ECX,dword ptr [ESP + 0x40]      ; 004ce684
    MOV dword ptr [ESP + 0x2c],ECX      ; 004ce688
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004ce68c
    SHL ECX,0x2                         ; 004ce690
    SUB ECX,EDI                         ; 004ce693
    SHL ECX,0x4                         ; 004ce695
    MOV dword ptr [ECX + 0x68802c],EAX  ; 004ce698 | g_QuadVertex1.u
    MOV dword ptr [ECX + 0x688030],EDX  ; 004ce69e | g_QuadVertex1.v
    MOV EDX,EBP                         ; 004ce6a4
    LEA ECX,[EBP*0x4 + 0x0]             ; 004ce6a6
    SUB ECX,EBP                         ; 004ce6ad
    PUSH 0xffff                         ; 004ce6af
    SHL ECX,0x4                         ; 004ce6b4
    MOV dword ptr [ESP + 0x24],EBP      ; 004ce6b7
    MOV dword ptr [ECX + 0x68802c],EAX  ; 004ce6bb | g_TempTextureU
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004ce6c1
    MOV dword ptr [ECX + 0x688030],ESI  ; 004ce6c5 | g_TempTextureV
    LEA ECX,[EAX*0x4 + 0x0]             ; 004ce6cb
    XOR EDX,EBP                         ; 004ce6d2
    SUB ECX,EAX                         ; 004ce6d4
    MOV dword ptr [ESP + 0x18],EDX      ; 004ce6d6
    SHL ECX,0x4                         ; 004ce6da
    MOV EAX,0x4                         ; 004ce6dd
    MOV dword ptr [ECX + 0x68802c],EBX  ; 004ce6e2 | g_QuadVertex3.u
    MOV dword ptr [ESP + 0x8],EAX       ; 004ce6e8
    MOV dword ptr [ECX + 0x688030],ESI  ; 004ce6ec | g_QuadVertex3.v
    XOR ECX,ECX                         ; 004ce6f2
    MOV EAX,dword ptr [ESP + 0x40]      ; 004ce6f4
    MOV dword ptr [ESP + 0x14],ECX      ; 004ce6f8
    MOV dword ptr [ESP + 0x1c],EAX      ; 004ce6fc
    MOV EAX,dword ptr [ESP + 0x44]      ; 004ce700
    MOV dword ptr [ESP + 0x10],ECX      ; 004ce704
    MOV dword ptr [ESP + 0x20],EAX      ; 004ce708
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004ce70c
    MOV dword ptr [ESP + 0xc],ECX       ; 004ce710
    MOV dword ptr [ESP + 0x28],EAX      ; 004ce714
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 004ce718
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    MOV EDI,dword ptr [0x02d03e84]      ; 004ce71d | g_CurrentTextureOpacityData
    ADD ESP,0x4                         ; 004ce723
    TEST EDI,EDI                        ; 004ce726
    JZ 0x004ce794                       ; 004ce728
        ;   XREF to: 004ce794 (CONDITIONAL_JUMP)  ; LAB_004ce794
    PUSH 0x0                            ; 004ce72a
    PUSH 0x227                          ; 004ce72c
    LEA EAX,[ESP + 0x8]                 ; 004ce731
        ;   Label: LAB_004ce731
    PUSH EAX                            ; 004ce735
    CALL engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620 ; 004ce736
        ;   XREF to: 00407620 (UNCONDITIONAL_CALL)  ; void engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620(SMRGLHeaderPrimitive * primitive, int render_flags, int render_state_flags)
    ADD ESP,0xc                         ; 004ce73b
    ADD ESP,0x44                        ; 004ce73e
    POP EBP                             ; 004ce741
    POP EDI                             ; 004ce742
    POP ESI                             ; 004ce743
    POP EBX                             ; 004ce744
    RET                                 ; 004ce745
    MOV EAX,[0x02d7b418]                ; 004ce746 | g_ShadowColorRed
        ;   Label: LAB_004ce746
    SHL EAX,0x8                         ; 004ce74b
    MOV [0x00772574],EAX                ; 004ce74e | g_CurrentRenderColorRed
    MOV EAX,[0x02d7b41c]                ; 004ce753 | g_ShadowColorGreen
    SHL EAX,0x8                         ; 004ce758
    MOV [0x00772578],EAX                ; 004ce75b | g_CurrentRenderColorGreen
    MOV EAX,[0x02d7b420]                ; 004ce760 | g_ShadowColorBlue
    JMP 0x004ce38f                      ; 004ce765
        ;   XREF to: 004ce38f (UNCONDITIONAL_JUMP)  ; LAB_004ce38f
    MOV EAX,0xffff                      ; 004ce76a
        ;   Label: LAB_004ce76a
    MOV [0x00772578],EAX                ; 004ce76f | g_CurrentRenderColorGreen
    MOV [0x0077257c],EAX                ; 004ce774 | g_CurrentRenderColorBlue
    MOV [0x00772574],EAX                ; 004ce779 | g_CurrentRenderColorRed
    JMP 0x004ce397                      ; 004ce77e
        ;   XREF to: 004ce397 (UNCONDITIONAL_JUMP)  ; LAB_004ce397
    ADD EDI,0x8000                      ; 004ce783
        ;   Label: LAB_004ce783
    ADD ESI,0x8000                      ; 004ce789
    JMP 0x004ce475                      ; 004ce78f
        ;   XREF to: 004ce475 (UNCONDITIONAL_JUMP)  ; LAB_004ce475
    PUSH EDI                            ; 004ce794
        ;   Label: LAB_004ce794
    PUSH 0x207                          ; 004ce795
    JMP 0x004ce731                      ; 004ce79a
        ;   XREF to: 004ce731 (UNCONDITIONAL_JUMP)  ; LAB_004ce731
    MOV ECX,0xc                         ; 03fc3535
        ;   Label: LAB_03fc3535
    LEA EDI,[ESI + 0x688014]            ; 03fc353a
    LEA ESI,[EAX + 0x688014]            ; 03fc3540
    MOV ECX,dword ptr [ESI]             ; 03fc3546
    MOV dword ptr [EDI],ECX             ; 03fc3548
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc354a
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc354d
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc3550
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc3553
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc3556
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc3559
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc355c
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc355f
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc3562
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc3565
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc3568
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc356b
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc356e
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc3571
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc3574
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc3577
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc357a
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc357d
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc3580
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc3583
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc3586
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc3589
    ADD ESI,0x30                        ; 03fc358c
    ADD EDI,0x30                        ; 03fc358f
    XOR ECX,ECX                         ; 03fc3592
    JMP 0x004ce3dd                      ; 03fc3594
        ;   XREF to: 004ce3dd (UNCONDITIONAL_JUMP)  ; LAB_004ce3dd
    MOV ECX,0xc                         ; 03fc3599
        ;   Label: LAB_03fc3599
    LEA EDI,[ESI + 0x688014]            ; 03fc359e
    LEA ESI,[EAX + 0x688014]            ; 03fc35a4
    MOV EDX,dword ptr [ESP + 0x38]      ; 03fc35aa
    MOV ECX,dword ptr [ESI]             ; 03fc35ae
    MOV dword ptr [EDI],ECX             ; 03fc35b0
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc35b2
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc35b5
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc35b8
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc35bb
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc35be
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc35c1
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc35c4
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc35c7
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc35ca
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc35cd
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc35d0
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc35d3
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc35d6
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc35d9
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc35dc
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc35df
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc35e2
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc35e5
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc35e8
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc35eb
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc35ee
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc35f1
    ADD ESI,0x30                        ; 03fc35f4
    ADD EDI,0x30                        ; 03fc35f7
    XOR ECX,ECX                         ; 03fc35fa
    JMP 0x004ce400                      ; 03fc35fc
        ;   XREF to: 004ce400 (UNCONDITIONAL_JUMP)  ; LAB_004ce400
    MOV ECX,0xc                         ; 03fc3601
        ;   Label: LAB_03fc3601
    SUB ESI,EDX                         ; 03fc3606
    MOV EDX,dword ptr [ESP + 0x6c]      ; 03fc3608
    SHL ESI,0x4                         ; 03fc360c
    INC EDX                             ; 03fc360f
    LEA EDI,[ESI + 0x688014]            ; 03fc3610
    LEA ESI,[EAX + 0x688014]            ; 03fc3616
    MOV dword ptr [ESP + 0x6c],EDX      ; 03fc361c
    MOV ECX,dword ptr [ESI]             ; 03fc3620
    MOV dword ptr [EDI],ECX             ; 03fc3622
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc3624
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc3627
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc362a
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc362d
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc3630
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc3633
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc3636
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc3639
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc363c
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc363f
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc3642
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc3645
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc3648
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc364b
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc364e
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc3651
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc3654
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc3657
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc365a
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc365d
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc3660
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc3663
    ADD ESI,0x30                        ; 03fc3666
    ADD EDI,0x30                        ; 03fc3669
    XOR ECX,ECX                         ; 03fc366c
    JMP 0x004ce428                      ; 03fc366e
        ;   XREF to: 004ce428 (UNCONDITIONAL_JUMP)  ; LAB_004ce428

