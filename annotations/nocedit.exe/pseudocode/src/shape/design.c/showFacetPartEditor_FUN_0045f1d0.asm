; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_showFacetPartEditor_FUN_0045f1d0(void)
;
; Local Variables:
; char[80]         Stack[-0xb8]:80  local_b8
; CQuaternion4f    Stack[-0x68]:16  local_68
; int              Stack[-0x58]:4  local_58
; int              Stack[-0x54]:4  local_54
; uint             Stack[-0x50]:4  local_50
; int              Stack[-0x4c]:4  local_4c
; float            Stack[-0x48]:4  local_48
; int              Stack[-0x44]:4  local_44
; int              Stack[-0x40]:4  local_40
; int              Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f687
;
; Referenced Globals:
;   double g_FacetPi = 3.14159265350000
;   double g_FacetDegreesToRadiansScale = 0.00555555555555555
;   double g_FacetHalfScale = 0.5
;   double g_FacetFixedPointScale = 65536
;   TerminatedCString s_Detail_04x_05d_0061b72e
;   TerminatedCString s_Renderer_s_0061b743
;   TerminatedCString s_Gouraud_on_0061b751
;   TerminatedCString s_Gouraud_off_0061b75e
;   TerminatedCString s_Gouraud_off_0061b76c
;   TerminatedCString s_Z_buffer_on_0061b77d
;   TerminatedCString s_Z_buffer_off_0061b78b
;   char s_EmptyChar_0061b79a = \x00
;   TerminatedCString s_Current_part_s_0061b79b
;   TerminatedCString s_Polygons_0061b7ad
;   TerminatedCString s_Points_0061b7b6
;   ... and 128 more
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawTextColor_FUN_00402430
;   engine_2d.c_fillRectColor_FUN_00403170
;   engine_2d.c_getStringWidth_FUN_004018a0
;   engine_2d.c_getTextColor_FUN_00402830
;   engine_2d.c_plotPixel_FUN_00401140
;   engine_2d.c_reinitializeGraphicsSystem_FUN_00402a80
;   engine_2d.c_resetGraphicsSystem_FUN_00402a70
;   engine_2d.c_setTextColor_FUN_00402840
;   engine_3d.c_processCameraRelativePoint_FUN_004037e0
;   engine_light.cpp_setAmbientLightLevel_FUN_00505490
;   engine_light.cpp_setDirectionalLightVector_FUN_005054d0
;   engine_matrix.c_matrixPushAndTransform_FUN_0050cee0
;   ... and 45 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045f1d0
        ;   Label: shape_design.c_showFacetPartEditor_FUN_0045f1d0
    PUSH ESI                            ; 0045f1d1
    PUSH EDI                            ; 0045f1d2
    PUSH EBP                            ; 0045f1d3
    MOV EBP,ESP                         ; 0045f1d4
    SUB ESP,0xd8                        ; 0045f1d6
    MOV dword ptr [EBP + -0x44],0x1     ; 0045f1dc
    MOV dword ptr [EBP + -0x20],0x1     ; 0045f1e3
    MOV dword ptr [EBP + -0x1c],0x42700000 ; 0045f1ea
    FLD float ptr [EBP + -0x1c]         ; 0045f1f1
    FMUL double ptr [0x0061b70e]        ; 0045f1f4 | g_FacetPi
    FMUL double ptr [0x0061b716]        ; 0045f1fa | g_FacetDegreesToRadiansScale
    FMUL double ptr [0x0061b71e]        ; 0045f200 | g_FacetHalfScale
    FPTAN                               ; 0045f206
    FSTP ST0                            ; 0045f208
    FILD dword ptr [0x00679394]         ; 0045f20a | g_WindowWidth
    FMUL double ptr [0x0061b71e]        ; 0045f210 | g_FacetHalfScale
    FDIVRP                              ; 0045f216
    FSTP float ptr [EBP + -0x18]        ; 0045f218
    FLD float ptr [EBP + -0x1c]         ; 0045f21b
    FMUL double ptr [0x0061b70e]        ; 0045f21e | g_FacetPi
    FMUL double ptr [0x0061b716]        ; 0045f224 | g_FacetDegreesToRadiansScale
    FMUL double ptr [0x0061b71e]        ; 0045f22a | g_FacetHalfScale
    FPTAN                               ; 0045f230
    FSTP ST0                            ; 0045f232
    FILD dword ptr [0x00679398]         ; 0045f234 | g_WindowHeight
    FMUL double ptr [0x0061b71e]        ; 0045f23a | g_FacetHalfScale
    FDIVRP                              ; 0045f240
    FSTP float ptr [EBP + -0x4]         ; 0045f242
    FILD dword ptr [0x00679394]         ; 0045f245 | g_WindowWidth
    FMUL double ptr [0x0061b71e]        ; 0045f24b | g_FacetHalfScale
    FLD float ptr [EBP + -0x18]         ; 0045f251
    FDIVRP                              ; 0045f254
    FMUL double ptr [0x0061b726]        ; 0045f256 | g_FacetFixedPointScale
    FSTP float ptr [EBP + -0x10]        ; 0045f25c
    FILD dword ptr [0x00679398]         ; 0045f25f | g_WindowHeight
    FMUL double ptr [0x0061b71e]        ; 0045f265 | g_FacetHalfScale
    FLD float ptr [EBP + -0x4]          ; 0045f26b
    FDIVRP                              ; 0045f26e
    FMUL double ptr [0x0061b726]        ; 0045f270 | g_FacetFixedPointScale
    FSTP float ptr [EBP + -0x38]        ; 0045f276
    CALL shape_design.c_checkVertexCountLimit_FUN_00460a10 ; 0045f279
        ;   XREF to: 00460a10 (UNCONDITIONAL_CALL)  ; int shape_design.c_checkVertexCountLimit_FUN_00460a10()
    TEST EAX,EAX                        ; 0045f27e
    JZ 0x0045f287                       ; 0045f280
        ;   XREF to: 0045f287 (CONDITIONAL_JUMP)  ; LAB_0045f287
    JMP 0x00460a08                      ; 0045f282
        ;   XREF to: 00460a08 (UNCONDITIONAL_JUMP)  ; LAB_00460a08
    MOV dword ptr [EBP + -0x48],0x0     ; 0045f287
        ;   Label: LAB_0045f287
    MOV dword ptr [EBP + -0x2c],0x0     ; 0045f28e
    MOV dword ptr [EBP + -0x28],0x0     ; 0045f295
    MOV dword ptr [EBP + -0x3c],0x0     ; 0045f29c
    MOV dword ptr [EBP + -0xc],0x0      ; 0045f2a3
    MOV dword ptr [EBP + -0x30],0xffff0000 ; 0045f2aa
    MOV EAX,[0x006793c0]                ; 0045f2b1 | g_ProjectionScale
    MOV dword ptr [EBP + -0x14],EAX     ; 0045f2b6
    MOV dword ptr [0x006793c0],0x10000  ; 0045f2b9 | g_ProjectionScale
    CALL engine_2d.c_getTextColor_FUN_00402830 ; 0045f2c3
        ;   XREF to: 00402830 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getTextColor_FUN_00402830()
    MOV dword ptr [EBP + -0x24],EAX     ; 0045f2c8
    MOV EAX,[0x01626404]                ; 0045f2cb | g_CurrentModelIndex
    SHL EAX,0x2                         ; 0045f2d0
    PUSH dword ptr [EAX + 0x16263e0]    ; 0045f2d3 | g_EditorColorIndices
    CALL engine_2d.c_setTextColor_FUN_00402840 ; 0045f2d9
        ;   XREF to: 00402840 (UNCONDITIONAL_CALL)  ; void engine_2d.c_setTextColor_FUN_00402840(int color)
    ADD ESP,0x4                         ; 0045f2de
    MOV dword ptr [0x01e6614c],0xffffffff ; 0045f2e1 | g_CurrentPartIndex
    MOV dword ptr [0x01e528b8],0xffffffff ; 0045f2eb | g_SelectedPolygonIndex
    MOV dword ptr [0x01e528bc],0xffffffff ; 0045f2f5 | g_SecondaryPolygonIndex
    CALL shape_design.c_calculateVertexNormals_FUN_0045be40 ; 0045f2ff
        ;   XREF to: 0045be40 (UNCONDITIONAL_CALL)  ; void shape_design.c_calculateVertexNormals_FUN_0045be40()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0045f304
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL engine_2d.c_resetGraphicsSystem_FUN_00402a70 ; 0045f309
        ;   XREF to: 00402a70 (UNCONDITIONAL_CALL)  ; void engine_2d.c_resetGraphicsSystem_FUN_00402a70()
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0045f30e
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0045f313
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0045f318
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV dword ptr [EBP + -0x8],EAX      ; 0045f31d
    CALL wincore_winrun.cpp_clearKeypresses_FUN_005f2e70 ; 0045f320
        ;   XREF to: 005f2e70 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearKeypresses_FUN_005f2e70()
        ;   Label: LAB_0045f320
    CALL wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580 ; 0045f325
        ;   XREF to: 005ed580 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580()
    CALL wincore_windll.cpp_beginScene_FUN_005b7280 ; 0045f32a
        ;   XREF to: 005b7280 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_beginScene_FUN_005b7280()
    CMP dword ptr [0x02d03e94],0x0      ; 0045f32f | g_UseExternalRenderer
    JNZ 0x0045f33f                      ; 0045f336
        ;   XREF to: 0045f33f (CONDITIONAL_JUMP)  ; LAB_0045f33f
    CALL wincore_windll.cpp_clearZBufferNative_FUN_005b3ed4 ; 0045f338
        ;   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearZBufferNative_FUN_005b3ed4()
    JMP 0x0045f344                      ; 0045f33d
        ;   XREF to: 0045f344 (UNCONDITIONAL_JUMP)  ; LAB_0045f344
    CALL wincore_windll.cpp_clearZBuffer_FUN_005b7be0 ; 0045f33f
        ;   XREF to: 005b7be0 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_clearZBuffer_FUN_005b7be0()
        ;   Label: LAB_0045f33f
    CMP dword ptr [0x02d03e94],0x0      ; 0045f344 | g_UseExternalRenderer
        ;   Label: LAB_0045f344
    JNZ 0x0045f37a                      ; 0045f34b
        ;   XREF to: 0045f37a (CONDITIONAL_JUMP)  ; LAB_0045f37a
    MOV EAX,[0x01626404]                ; 0045f34d | g_CurrentModelIndex
    SHL EAX,0x2                         ; 0045f352
    PUSH dword ptr [EAX + 0x16263c0]    ; 0045f355 | g_EditorBackgroundColors
    MOV EAX,[0x00679398]                ; 0045f35b | g_WindowHeight
    DEC EAX                             ; 0045f360
    PUSH EAX                            ; 0045f361
    MOV EAX,[0x00679394]                ; 0045f362 | g_WindowWidth
    DEC EAX                             ; 0045f367
    PUSH EAX                            ; 0045f368
    PUSH 0x0                            ; 0045f369
    PUSH 0x0                            ; 0045f36b
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 0045f36d
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 0045f372
    JMP 0x0045f412                      ; 0045f375
        ;   XREF to: 0045f412 (UNCONDITIONAL_JUMP)  ; LAB_0045f412
    MOV EAX,[0x02d02558]                ; 0045f37a | g_ClipLeft
        ;   Label: LAB_0045f37a
    MOV dword ptr [EBP + 0xffffff48],EAX ; 0045f37f
    MOV dword ptr [0x02d02558],0x0      ; 0045f385 | g_ClipLeft
    MOV EAX,[0x02d0255c]                ; 0045f38f | g_ClipTop
    MOV dword ptr [EBP + 0xffffff4c],EAX ; 0045f394
    MOV dword ptr [0x02d0255c],0x0      ; 0045f39a | g_ClipTop
    MOV EAX,[0x02d02560]                ; 0045f3a4 | g_ClipRight
    MOV dword ptr [EBP + 0xffffff50],EAX ; 0045f3a9
    MOV EAX,[0x00679394]                ; 0045f3af | g_WindowWidth
    DEC EAX                             ; 0045f3b4
    MOV [0x02d02560],EAX                ; 0045f3b5 | g_ClipRight
    MOV EAX,[0x02d02564]                ; 0045f3ba | g_ClipBottom
    MOV dword ptr [EBP + 0xffffff54],EAX ; 0045f3bf
    MOV EAX,[0x00679398]                ; 0045f3c5 | g_WindowHeight
    DEC EAX                             ; 0045f3ca
    MOV [0x02d02564],EAX                ; 0045f3cb | g_ClipBottom
    MOV EAX,[0x01626404]                ; 0045f3d0 | g_CurrentModelIndex
    SHL EAX,0x2                         ; 0045f3d5
    PUSH dword ptr [EAX + 0x16263c0]    ; 0045f3d8 | g_EditorBackgroundColors
    CALL wincore_windll.cpp_drawFullScreenQuad_FUN_005b7a50 ; 0045f3de
        ;   XREF to: 005b7a50 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_drawFullScreenQuad_FUN_005b7a50(int color)
    ADD ESP,0x4                         ; 0045f3e3
    MOV EAX,dword ptr [EBP + 0xffffff48] ; 0045f3e6
    MOV [0x02d02558],EAX                ; 0045f3ec | g_ClipLeft
    MOV EAX,dword ptr [EBP + 0xffffff4c] ; 0045f3f1
    MOV [0x02d0255c],EAX                ; 0045f3f7 | g_ClipTop
    MOV EAX,dword ptr [EBP + 0xffffff50] ; 0045f3fc
    MOV [0x02d02560],EAX                ; 0045f402 | g_ClipRight
    MOV EAX,dword ptr [EBP + 0xffffff54] ; 0045f407
    MOV [0x02d02564],EAX                ; 0045f40d | g_ClipBottom
    PUSH 0xb4fd                         ; 0045f412
        ;   Label: LAB_0045f412
    PUSH 0xffff4b03                     ; 0045f417
    PUSH 0x0                            ; 0045f41c
    CALL engine_light.cpp_setDirectionalLightVector_FUN_005054d0 ; 0045f41e
        ;   XREF to: 005054d0 (UNCONDITIONAL_CALL)  ; void engine_light.cpp_setDirectionalLightVector_FUN_005054d0(int dir_x, int dir_y, int dir_z)
    ADD ESP,0xc                         ; 0045f423
    PUSH 0x7d00                         ; 0045f426
    CALL engine_light.cpp_setAmbientLightLevel_FUN_00505490 ; 0045f42b
        ;   XREF to: 00505490 (UNCONDITIONAL_CALL)  ; void engine_light.cpp_setAmbientLightLevel_FUN_00505490(int light_level)
    ADD ESP,0x4                         ; 0045f430
    PUSH 0x0                            ; 0045f433
    PUSH 0x0                            ; 0045f435
    PUSH 0x0                            ; 0045f437
    CALL engine_matrix.c_setCameraRotation_FUN_0050e290 ; 0045f439
        ;   XREF to: 0050e290 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_setCameraRotation_FUN_0050e290(int pitch, int yaw, int roll)
    ADD ESP,0xc                         ; 0045f43e
    MOV EAX,dword ptr [EBP + -0x30]     ; 0045f441
    PUSH EAX                            ; 0045f444
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045f445
    PUSH EAX                            ; 0045f448
    MOV EAX,dword ptr [EBP + -0x3c]     ; 0045f449
    PUSH EAX                            ; 0045f44c
    CALL engine_matrix.c_setCameraOrigin_FUN_0050e270 ; 0045f44d
        ;   XREF to: 0050e270 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_setCameraOrigin_FUN_0050e270(int x, int y, int z)
    ADD ESP,0xc                         ; 0045f452
    MOV dword ptr [EBP + -0x54],0x0     ; 0045f455
    MOV dword ptr [EBP + -0x50],0x0     ; 0045f45c
    MOV dword ptr [EBP + -0x4c],0x0     ; 0045f463
    LEA EAX,[EBP + -0x58]               ; 0045f46a
    PUSH EAX                            ; 0045f46d
    CALL engine_3d.c_processCameraRelativePoint_FUN_004037e0 ; 0045f46e
        ;   XREF to: 004037e0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_processCameraRelativePoint_FUN_004037e0(CQuaternion4f * input_point)
    ADD ESP,0x4                         ; 0045f473
    PUSH 0x0                            ; 0045f476
    PUSH 0x0                            ; 0045f478
    PUSH 0x0                            ; 0045f47a
    MOV EAX,dword ptr [EBP + -0x28]     ; 0045f47c
    PUSH EAX                            ; 0045f47f
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0045f480
    PUSH EAX                            ; 0045f483
    MOV EAX,dword ptr [EBP + -0x48]     ; 0045f484
    PUSH EAX                            ; 0045f487
    CALL engine_matrix.c_matrixPushAndTransform_FUN_0050cee0 ; 0045f488
        ;   XREF to: 0050cee0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPushAndTransform_FUN_0050cee0(int rot_x, int rot_y, int rot_z, int translate_x, ...)
    ADD ESP,0x18                        ; 0045f48d
    CMP dword ptr [0x015c4834],0x0      ; 0045f490 | g_FacetWireframeMode
    JZ 0x0045f543                       ; 0045f497
        ;   XREF to: 0045f543 (CONDITIONAL_JUMP)  ; LAB_0045f543
    FLD float ptr [EBP + -0x10]         ; 0045f49d
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045f4a0
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0xffffff40]  ; 0045f4a5
    FLD float ptr [EBP + -0x38]         ; 0045f4ab
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045f4ae
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0xffffff44]  ; 0045f4b3
    MOV EAX,dword ptr [EBP + 0xffffff40] ; 0045f4b9
    MOV EDX,dword ptr [0x02d052e8]      ; 0045f4bf | g_TransformMatrix
    IMUL EDX                            ; 0045f4c5
    SHRD EAX,EDX,0x10                   ; 0045f4c7
    MOV [0x02d052e8],EAX                ; 0045f4cb | g_TransformMatrix
    MOV EAX,dword ptr [EBP + 0xffffff40] ; 0045f4d0
    MOV EDX,dword ptr [0x02d052f4]      ; 0045f4d6 | g_TransformMatrix[1][0]
    IMUL EDX                            ; 0045f4dc
    SHRD EAX,EDX,0x10                   ; 0045f4de
    MOV [0x02d052f4],EAX                ; 0045f4e2 | g_TransformMatrix[1][0]
    MOV EAX,dword ptr [EBP + 0xffffff40] ; 0045f4e7
    MOV EDX,dword ptr [0x02d05300]      ; 0045f4ed | g_TransformMatrix[2][0]
    IMUL EDX                            ; 0045f4f3
    SHRD EAX,EDX,0x10                   ; 0045f4f5
    MOV [0x02d05300],EAX                ; 0045f4f9 | g_TransformMatrix[2][0]
    MOV EAX,dword ptr [EBP + 0xffffff44] ; 0045f4fe
    MOV EDX,dword ptr [0x02d052ec]      ; 0045f504 | g_TransformMatrix[0][1]
    IMUL EDX                            ; 0045f50a
    SHRD EAX,EDX,0x10                   ; 0045f50c
    MOV [0x02d052ec],EAX                ; 0045f510 | g_TransformMatrix[0][1]
    MOV EAX,dword ptr [EBP + 0xffffff44] ; 0045f515
    MOV EDX,dword ptr [0x02d052f8]      ; 0045f51b | g_TransformMatrix[1][1]
    IMUL EDX                            ; 0045f521
    SHRD EAX,EDX,0x10                   ; 0045f523
    MOV [0x02d052f8],EAX                ; 0045f527 | g_TransformMatrix[1][1]
    MOV EAX,dword ptr [EBP + 0xffffff44] ; 0045f52c
    MOV EDX,dword ptr [0x02d05304]      ; 0045f532 | g_TransformMatrix[2][1]
    IMUL EDX                            ; 0045f538
    SHRD EAX,EDX,0x10                   ; 0045f53a
    MOV [0x02d05304],EAX                ; 0045f53e | g_TransformMatrix[2][1]
    CALL shape_design.c_processVerticesAndRenderPolygons_FUN_0045d5d0 ; 0045f543
        ;   XREF to: 0045d5d0 (UNCONDITIONAL_CALL)  ; void shape_design.c_processVerticesAndRenderPolygons_FUN_0045d5d0()
        ;   Label: LAB_0045f543
    CALL wincore_windll.cpp_endScene_FUN_005b72a0 ; 0045f548
        ;   XREF to: 005b72a0 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_endScene_FUN_005b72a0()
    CALL wincore_windll.cpp_lockFrame_FUN_005b7210 ; 0045f54d
        ;   XREF to: 005b7210 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_lockFrame_FUN_005b7210()
    CALL shape_design.c_renderEditorBackgroundOverlay_FUN_0045d920 ; 0045f552
        ;   XREF to: 0045d920 (UNCONDITIONAL_CALL)  ; void shape_design.c_renderEditorBackgroundOverlay_FUN_0045d920()
    CALL shape_design.c_renderVertexPointsWithLabels_FUN_0045bff0 ; 0045f557
        ;   XREF to: 0045bff0 (UNCONDITIONAL_CALL)  ; void shape_design.c_renderVertexPointsWithLabels_FUN_0045bff0()
    PUSH dword ptr [0x01e528b8]         ; 0045f55c | g_SelectedPolygonIndex
    CALL shape_design.c_renderPolygonVerticesWithLabels_FUN_0045c2f0 ; 0045f562
        ;   XREF to: 0045c2f0 (UNCONDITIONAL_CALL)  ; void shape_design.c_renderPolygonVerticesWithLabels_FUN_0045c2f0(int polygon_index)
    ADD ESP,0x4                         ; 0045f567
    MOV EAX,0x1                         ; 0045f56a
    SUB EAX,dword ptr [0x01e528ac]      ; 0045f56f | g_SelectionBlinkTimer
    MOV [0x01e528ac],EAX                ; 0045f575 | g_SelectionBlinkTimer
    CMP byte ptr [0x02d03ea5],0x0       ; 0045f57a | CHAR_ARRAY_02d03ea5
    JZ 0x0045f5aa                       ; 0045f581
        ;   XREF to: 0045f5aa (CONDITIONAL_JUMP)  ; LAB_0045f5aa
    MOV byte ptr [0x02d03ea5],0x0       ; 0045f583 | CHAR_ARRAY_02d03ea5
    SUB dword ptr [0x006793c0],0x1000   ; 0045f58a | g_ProjectionScale
    CMP dword ptr [0x006793c0],0x1000   ; 0045f594 | g_ProjectionScale
    JGE 0x0045f5aa                      ; 0045f59e
        ;   XREF to: 0045f5aa (CONDITIONAL_JUMP)  ; LAB_0045f5aa
    MOV dword ptr [0x006793c0],0x1000   ; 0045f5a0 | g_ProjectionScale
    CMP byte ptr [0x02d03ea4],0x0       ; 0045f5aa | CHAR_ARRAY_02d03ea4
        ;   Label: LAB_0045f5aa
    JZ 0x0045f5da                       ; 0045f5b1
        ;   XREF to: 0045f5da (CONDITIONAL_JUMP)  ; LAB_0045f5da
    MOV byte ptr [0x02d03ea4],0x0       ; 0045f5b3 | CHAR_ARRAY_02d03ea4
    ADD dword ptr [0x006793c0],0x1000   ; 0045f5ba | g_ProjectionScale
    CMP dword ptr [0x006793c0],0x1000000 ; 0045f5c4 | g_ProjectionScale | g_LightBufferPool[13][93688]
    JLE 0x0045f5da                      ; 0045f5ce
        ;   XREF to: 0045f5da (CONDITIONAL_JUMP)  ; LAB_0045f5da
    MOV dword ptr [0x006793c0],0x1000000 ; 0045f5d0 | g_ProjectionScale | g_LightBufferPool[13][93688]
    CMP byte ptr [0x02d03ed0],0x0       ; 0045f5da | CHAR_ARRAY_02d03ed0
        ;   Label: LAB_0045f5da
    JZ 0x0045f5f3                       ; 0045f5e1
        ;   XREF to: 0045f5f3 (CONDITIONAL_JUMP)  ; LAB_0045f5f3
    MOV dword ptr [EBP + -0x44],0x20    ; 0045f5e3
    MOV dword ptr [EBP + -0x20],0x10    ; 0045f5ea
    JMP 0x0045f601                      ; 0045f5f1
        ;   XREF to: 0045f601 (UNCONDITIONAL_JUMP)  ; LAB_0045f601
    MOV dword ptr [EBP + -0x44],0x2     ; 0045f5f3
        ;   Label: LAB_0045f5f3
    MOV dword ptr [EBP + -0x20],0x2     ; 0045f5fa
    CMP byte ptr [0x02d03ec2],0x0       ; 0045f601 | CHAR_ARRAY_02d03ec2
        ;   Label: LAB_0045f601
    JNZ 0x0045f6cc                      ; 0045f608
        ;   XREF to: 0045f6cc (CONDITIONAL_JUMP)  ; LAB_0045f6cc
    CMP byte ptr [0x02d03ee3],0x0       ; 0045f60e | g_KeyboardState+0x4b
    JZ 0x0045f62b                       ; 0045f615
        ;   XREF to: 0045f62b (CONDITIONAL_JUMP)  ; LAB_0045f62b
    MOV EAX,[0x02cf6a80]                ; 0045f617 | g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x02cf6a80]      ; 0045f61c | g_GlobalDeltaTimeInt
    SAR EDX,0x1f                        ; 0045f622
    IDIV dword ptr [EBP + -0x44]        ; 0045f625
    SUB dword ptr [EBP + -0x3c],EAX     ; 0045f628
    CMP byte ptr [0x02d03ee5],0x0       ; 0045f62b | CHAR_ARRAY_02d03ee5
        ;   Label: LAB_0045f62b
    JZ 0x0045f648                       ; 0045f632
        ;   XREF to: 0045f648 (CONDITIONAL_JUMP)  ; LAB_0045f648
    MOV EAX,[0x02cf6a80]                ; 0045f634 | g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x02cf6a80]      ; 0045f639 | g_GlobalDeltaTimeInt
    SAR EDX,0x1f                        ; 0045f63f
    IDIV dword ptr [EBP + -0x44]        ; 0045f642
    ADD dword ptr [EBP + -0x3c],EAX     ; 0045f645
    CMP byte ptr [0x02d03ee0],0x0       ; 0045f648 | CHAR_ARRAY_02d03ee0
        ;   Label: LAB_0045f648
    JZ 0x0045f665                       ; 0045f64f
        ;   XREF to: 0045f665 (CONDITIONAL_JUMP)  ; LAB_0045f665
    MOV EAX,[0x02cf6a80]                ; 0045f651 | g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x02cf6a80]      ; 0045f656 | g_GlobalDeltaTimeInt
    SAR EDX,0x1f                        ; 0045f65c
    IDIV dword ptr [EBP + -0x44]        ; 0045f65f
    ADD dword ptr [EBP + -0x30],EAX     ; 0045f662
    CMP byte ptr [0x02d03ee8],0x0       ; 0045f665 | CHAR_ARRAY_02d03ee8
        ;   Label: LAB_0045f665
    JZ 0x0045f682                       ; 0045f66c
        ;   XREF to: 0045f682 (CONDITIONAL_JUMP)  ; LAB_0045f682
    MOV EAX,[0x02cf6a80]                ; 0045f66e | g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x02cf6a80]      ; 0045f673 | g_GlobalDeltaTimeInt
    SAR EDX,0x1f                        ; 0045f679
    IDIV dword ptr [EBP + -0x44]        ; 0045f67c
    SUB dword ptr [EBP + -0x30],EAX     ; 0045f67f
    CMP byte ptr [0x02d03ea8],0x0       ; 0045f682 | CHAR_ARRAY_02d03ea8
        ;   Label: LAB_0045f682
    JZ 0x0045f69f                       ; 0045f689
        ;   XREF to: 0045f69f (CONDITIONAL_JUMP)  ; LAB_0045f69f
    MOV EAX,[0x02cf6a80]                ; 0045f68b | g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x02cf6a80]      ; 0045f690 | g_GlobalDeltaTimeInt
    SAR EDX,0x1f                        ; 0045f696
    IDIV dword ptr [EBP + -0x44]        ; 0045f699
    ADD dword ptr [EBP + -0xc],EAX      ; 0045f69c
    CMP byte ptr [0x02d03eb6],0x0       ; 0045f69f | CHAR_ARRAY_02d03eb6
        ;   Label: LAB_0045f69f
    JZ 0x0045f6b1                       ; 0045f6a6
        ;   XREF to: 0045f6b1 (CONDITIONAL_JUMP)  ; LAB_0045f6b1
    CMP byte ptr [0x02d03eb5],0x0       ; 0045f6a8 | CHAR_ARRAY_02d03eb5
    JZ 0x0045f6b3                       ; 0045f6af
        ;   XREF to: 0045f6b3 (CONDITIONAL_JUMP)  ; LAB_0045f6b3
    JMP 0x0045f6c7                      ; 0045f6b1
        ;   XREF to: 0045f6c7 (UNCONDITIONAL_JUMP)  ; LAB_0045f6c7
        ;   Label: LAB_0045f6b1
    MOV EAX,[0x02cf6a80]                ; 0045f6b3 | g_GlobalDeltaTimeInt
        ;   Label: LAB_0045f6b3
    MOV EDX,dword ptr [0x02cf6a80]      ; 0045f6b8 | g_GlobalDeltaTimeInt
    SAR EDX,0x1f                        ; 0045f6be
    IDIV dword ptr [EBP + -0x44]        ; 0045f6c1
    SUB dword ptr [EBP + -0xc],EAX      ; 0045f6c4
    JMP 0x0045f77a                      ; 0045f6c7
        ;   XREF to: 0045f77a (UNCONDITIONAL_JUMP)  ; LAB_0045f77a
        ;   Label: LAB_0045f6c7
    CMP byte ptr [0x02d03ee0],0x0       ; 0045f6cc | CHAR_ARRAY_02d03ee0
        ;   Label: LAB_0045f6cc
    JZ 0x0045f6e9                       ; 0045f6d3
        ;   XREF to: 0045f6e9 (CONDITIONAL_JUMP)  ; LAB_0045f6e9
    MOV EAX,[0x02cf6a80]                ; 0045f6d5 | g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x02cf6a80]      ; 0045f6da | g_GlobalDeltaTimeInt
    SAR EDX,0x1f                        ; 0045f6e0
    IDIV dword ptr [EBP + -0x20]        ; 0045f6e3
    ADD dword ptr [EBP + -0x48],EAX     ; 0045f6e6
    CMP byte ptr [0x02d03ee8],0x0       ; 0045f6e9 | CHAR_ARRAY_02d03ee8
        ;   Label: LAB_0045f6e9
    JZ 0x0045f706                       ; 0045f6f0
        ;   XREF to: 0045f706 (CONDITIONAL_JUMP)  ; LAB_0045f706
    MOV EAX,[0x02cf6a80]                ; 0045f6f2 | g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x02cf6a80]      ; 0045f6f7 | g_GlobalDeltaTimeInt
    SAR EDX,0x1f                        ; 0045f6fd
    IDIV dword ptr [EBP + -0x20]        ; 0045f700
    SUB dword ptr [EBP + -0x48],EAX     ; 0045f703
    CMP byte ptr [0x02d03ee3],0x0       ; 0045f706 | g_KeyboardState+0x4b
        ;   Label: LAB_0045f706
    JZ 0x0045f723                       ; 0045f70d
        ;   XREF to: 0045f723 (CONDITIONAL_JUMP)  ; LAB_0045f723
    MOV EAX,[0x02cf6a80]                ; 0045f70f | g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x02cf6a80]      ; 0045f714 | g_GlobalDeltaTimeInt
    SAR EDX,0x1f                        ; 0045f71a
    IDIV dword ptr [EBP + -0x20]        ; 0045f71d
    SUB dword ptr [EBP + -0x28],EAX     ; 0045f720
    CMP byte ptr [0x02d03ee5],0x0       ; 0045f723 | CHAR_ARRAY_02d03ee5
        ;   Label: LAB_0045f723
    JZ 0x0045f740                       ; 0045f72a
        ;   XREF to: 0045f740 (CONDITIONAL_JUMP)  ; LAB_0045f740
    MOV EAX,[0x02cf6a80]                ; 0045f72c | g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x02cf6a80]      ; 0045f731 | g_GlobalDeltaTimeInt
    SAR EDX,0x1f                        ; 0045f737
    IDIV dword ptr [EBP + -0x20]        ; 0045f73a
    ADD dword ptr [EBP + -0x28],EAX     ; 0045f73d
    CMP byte ptr [0x02d03edf],0x0       ; 0045f740 | CHAR_ARRAY_02d03edf
        ;   Label: LAB_0045f740
    JZ 0x0045f75d                       ; 0045f747
        ;   XREF to: 0045f75d (CONDITIONAL_JUMP)  ; LAB_0045f75d
    MOV EAX,[0x02cf6a80]                ; 0045f749 | g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x02cf6a80]      ; 0045f74e | g_GlobalDeltaTimeInt
    SAR EDX,0x1f                        ; 0045f754
    IDIV dword ptr [EBP + -0x20]        ; 0045f757
    ADD dword ptr [EBP + -0x2c],EAX     ; 0045f75a
    CMP byte ptr [0x02d03ee1],0x0       ; 0045f75d | CHAR_ARRAY_02d03ee1
        ;   Label: LAB_0045f75d
    JZ 0x0045f77a                       ; 0045f764
        ;   XREF to: 0045f77a (CONDITIONAL_JUMP)  ; LAB_0045f77a
    MOV EAX,[0x02cf6a80]                ; 0045f766 | g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x02cf6a80]      ; 0045f76b | g_GlobalDeltaTimeInt
    SAR EDX,0x1f                        ; 0045f771
    IDIV dword ptr [EBP + -0x20]        ; 0045f774
    SUB dword ptr [EBP + -0x2c],EAX     ; 0045f777
    CMP byte ptr [0x02d03eb6],0x0       ; 0045f77a | CHAR_ARRAY_02d03eb6
        ;   Label: LAB_0045f77a
    JZ 0x0045f78c                       ; 0045f781
        ;   XREF to: 0045f78c (CONDITIONAL_JUMP)  ; LAB_0045f78c
    CMP byte ptr [0x02d03eb5],0x0       ; 0045f783 | CHAR_ARRAY_02d03eb5
    JNZ 0x0045f78e                      ; 0045f78a
        ;   XREF to: 0045f78e (CONDITIONAL_JUMP)  ; LAB_0045f78e
    JMP 0x0045f79a                      ; 0045f78c
        ;   XREF to: 0045f79a (UNCONDITIONAL_JUMP)  ; LAB_0045f79a
        ;   Label: LAB_0045f78c
    MOV byte ptr [0x02d03eb6],0x0       ; 0045f78e | CHAR_ARRAY_02d03eb6
        ;   Label: LAB_0045f78e
    CALL shape_design.c_clampAndTransformUVCoordinates_FUN_0045f080 ; 0045f795
        ;   XREF to: 0045f080 (UNCONDITIONAL_CALL)  ; void shape_design.c_clampAndTransformUVCoordinates_FUN_0045f080()
    CMP byte ptr [0x02d03ee6],0x0       ; 0045f79a | CHAR_ARRAY_02d03ee6
        ;   Label: LAB_0045f79a
    JZ 0x0045f7d8                       ; 0045f7a1
        ;   XREF to: 0045f7d8 (CONDITIONAL_JUMP)  ; LAB_0045f7d8
    ADD dword ptr [0x0066eda0],0x800    ; 0045f7a3 | g_EditorDetailLevel
    CMP dword ptr [0x0066eda0],0xffff   ; 0045f7ad | g_EditorDetailLevel
    JLE 0x0045f7c3                      ; 0045f7b7
        ;   XREF to: 0045f7c3 (CONDITIONAL_JUMP)  ; LAB_0045f7c3
    MOV dword ptr [0x0066eda0],0xffff   ; 0045f7b9 | g_EditorDetailLevel
    PUSH dword ptr [0x0066eda0]         ; 0045f7c3 | g_EditorDetailLevel
        ;   Label: LAB_0045f7c3
    CALL engine_texture.cpp_doNothing_FUN_005dd8f0 ; 0045f7c9
        ;   XREF to: 005dd8f0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_doNothing_FUN_005dd8f0(int detail_level)
    ADD ESP,0x4                         ; 0045f7ce
    MOV byte ptr [0x02d03ee6],0x0       ; 0045f7d1 | CHAR_ARRAY_02d03ee6
    CMP byte ptr [0x02d03ee2],0x0       ; 0045f7d8 | CHAR_ARRAY_02d03ee2
        ;   Label: LAB_0045f7d8
    JZ 0x0045f813                       ; 0045f7df
        ;   XREF to: 0045f813 (CONDITIONAL_JUMP)  ; LAB_0045f813
    SUB dword ptr [0x0066eda0],0x800    ; 0045f7e1 | g_EditorDetailLevel
    CMP dword ptr [0x0066eda0],0x0      ; 0045f7eb | g_EditorDetailLevel
    JGE 0x0045f7fe                      ; 0045f7f2
        ;   XREF to: 0045f7fe (CONDITIONAL_JUMP)  ; LAB_0045f7fe
    MOV dword ptr [0x0066eda0],0x0      ; 0045f7f4 | g_EditorDetailLevel
    PUSH dword ptr [0x0066eda0]         ; 0045f7fe | g_EditorDetailLevel
        ;   Label: LAB_0045f7fe
    CALL engine_texture.cpp_doNothing_FUN_005dd8f0 ; 0045f804
        ;   XREF to: 005dd8f0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_doNothing_FUN_005dd8f0(int detail_level)
    ADD ESP,0x4                         ; 0045f809
    MOV byte ptr [0x02d03ee2],0x0       ; 0045f80c | CHAR_ARRAY_02d03ee2
    CMP dword ptr [0x0066eda0],0xffff   ; 0045f813 | g_EditorDetailLevel
        ;   Label: LAB_0045f813
    JGE 0x0045f872                      ; 0045f81d
        ;   XREF to: 0045f872 (CONDITIONAL_JUMP)  ; LAB_0045f872
    PUSH dword ptr [0x0066eda0]         ; 0045f81f | g_EditorDetailLevel
    PUSH dword ptr [0x0066eda0]         ; 0045f825 | g_EditorDetailLevel
    MOV EAX,0x61b72e                    ; 0045f82b | = "Detail : %04x / %05d"
    PUSH EAX                            ; 0045f830 | = "Detail : %04x / %05d"
    LEA EAX,[EBP + 0xffffff58]          ; 0045f831
    PUSH EAX                            ; 0045f837
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045f838
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0045f83d
    MOV EAX,[0x00679398]                ; 0045f840 | g_WindowHeight
    SUB EAX,0x2c                        ; 0045f845
    PUSH EAX                            ; 0045f848
    MOV EAX,[0x00679394]                ; 0045f849 | g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045f84e | g_WindowWidth
    SAR EDX,0x1f                        ; 0045f854
    SHL EDX,0x2                         ; 0045f857
    SBB EAX,EDX                         ; 0045f85a
    SAR EAX,0x2                         ; 0045f85c
    ADD EAX,0x19                        ; 0045f85f
    PUSH EAX                            ; 0045f862
    LEA EAX,[EBP + 0xffffff58]          ; 0045f863
    PUSH EAX                            ; 0045f869
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045f86a
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045f86f
    MOV EAX,[0x01e528c8]                ; 0045f872 | g_EditorTextureMode
        ;   Label: LAB_0045f872
    SHL EAX,0x5                         ; 0045f877
    MOV EDX,0x66ee08                    ; 0045f87a | g_EditorTextureModeNames
    ADD EAX,EDX                         ; 0045f87f
    PUSH EAX                            ; 0045f881
    MOV EAX,0x61b743                    ; 0045f882 | = "Renderer : %s"
    PUSH EAX                            ; 0045f887 | = "Renderer : %s"
    LEA EAX,[EBP + 0xffffff58]          ; 0045f888
    PUSH EAX                            ; 0045f88e
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045f88f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0045f894
    MOV EAX,[0x00679398]                ; 0045f897 | g_WindowHeight
    SUB EAX,0x21                        ; 0045f89c
    PUSH EAX                            ; 0045f89f
    MOV EAX,[0x00679394]                ; 0045f8a0 | g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045f8a5 | g_WindowWidth
    SAR EDX,0x1f                        ; 0045f8ab
    SHL EDX,0x2                         ; 0045f8ae
    SBB EAX,EDX                         ; 0045f8b1
    SAR EAX,0x2                         ; 0045f8b3
    ADD EAX,0x19                        ; 0045f8b6
    PUSH EAX                            ; 0045f8b9
    LEA EAX,[EBP + 0xffffff58]          ; 0045f8ba
    PUSH EAX                            ; 0045f8c0
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045f8c1
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045f8c6
    CMP dword ptr [0x01e528c0],0x1      ; 0045f8c9 | g_GouraudShadingEnabled
    JNZ 0x0045f905                      ; 0045f8d0
        ;   XREF to: 0045f905 (CONDITIONAL_JUMP)  ; LAB_0045f905
    MOV EAX,[0x00679398]                ; 0045f8d2 | g_WindowHeight
    SUB EAX,0x16                        ; 0045f8d7
    PUSH EAX                            ; 0045f8da
    MOV EAX,[0x00679394]                ; 0045f8db | g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045f8e0 | g_WindowWidth
    SAR EDX,0x1f                        ; 0045f8e6
    SHL EDX,0x2                         ; 0045f8e9
    SBB EAX,EDX                         ; 0045f8ec
    SAR EAX,0x2                         ; 0045f8ee
    ADD EAX,0x19                        ; 0045f8f1
    PUSH EAX                            ; 0045f8f4
    MOV EAX,0x61b751                    ; 0045f8f5 | = "Gouraud : on"
    PUSH EAX                            ; 0045f8fa | = "Gouraud : on"
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045f8fb
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045f900
    JMP 0x0045f936                      ; 0045f903
        ;   XREF to: 0045f936 (UNCONDITIONAL_JUMP)  ; LAB_0045f936
    MOV EAX,[0x00679398]                ; 0045f905 | g_WindowHeight
        ;   Label: LAB_0045f905
    SUB EAX,0x16                        ; 0045f90a
    PUSH EAX                            ; 0045f90d
    MOV EAX,[0x00679394]                ; 0045f90e | g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045f913 | g_WindowWidth
    SAR EDX,0x1f                        ; 0045f919
    SHL EDX,0x2                         ; 0045f91c
    SBB EAX,EDX                         ; 0045f91f
    SAR EAX,0x2                         ; 0045f921
    ADD EAX,0x19                        ; 0045f924
    PUSH EAX                            ; 0045f927
    MOV EAX,0x61b75e                    ; 0045f928 | = "Gouraud : off"
    PUSH EAX                            ; 0045f92d | = "Gouraud : off"
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045f92e
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045f933
    MOV EAX,0x61b76c                    ; 0045f936 | = "Gouraud : off   "
        ;   Label: LAB_0045f936
    PUSH EAX                            ; 0045f93b | = "Gouraud : off   "
    CALL engine_2d.c_getStringWidth_FUN_004018a0 ; 0045f93c
        ;   XREF to: 004018a0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_004018a0(char * text)
    ADD ESP,0x4                         ; 0045f941
    MOV dword ptr [EBP + -0x34],EAX     ; 0045f944
    CMP dword ptr [0x0066ee00],0x1      ; 0045f947 | g_ZBufferEnabled
    JNZ 0x0045f986                      ; 0045f94e
        ;   XREF to: 0045f986 (CONDITIONAL_JUMP)  ; LAB_0045f986
    MOV EAX,[0x00679398]                ; 0045f950 | g_WindowHeight
    SUB EAX,0x16                        ; 0045f955
    PUSH EAX                            ; 0045f958
    MOV EAX,[0x00679394]                ; 0045f959 | g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045f95e | g_WindowWidth
    SAR EDX,0x1f                        ; 0045f964
    SHL EDX,0x2                         ; 0045f967
    SBB EAX,EDX                         ; 0045f96a
    SAR EAX,0x2                         ; 0045f96c
    ADD EAX,0x19                        ; 0045f96f
    ADD EAX,dword ptr [EBP + -0x34]     ; 0045f972
    PUSH EAX                            ; 0045f975
    MOV EAX,0x61b77d                    ; 0045f976 | = "Z-buffer : on"
    PUSH EAX                            ; 0045f97b | = "Z-buffer : on"
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045f97c
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045f981
    JMP 0x0045f9ba                      ; 0045f984
        ;   XREF to: 0045f9ba (UNCONDITIONAL_JUMP)  ; LAB_0045f9ba
    MOV EAX,[0x00679398]                ; 0045f986 | g_WindowHeight
        ;   Label: LAB_0045f986
    SUB EAX,0x16                        ; 0045f98b
    PUSH EAX                            ; 0045f98e
    MOV EAX,[0x00679394]                ; 0045f98f | g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045f994 | g_WindowWidth
    SAR EDX,0x1f                        ; 0045f99a
    SHL EDX,0x2                         ; 0045f99d
    SBB EAX,EDX                         ; 0045f9a0
    SAR EAX,0x2                         ; 0045f9a2
    ADD EAX,0x19                        ; 0045f9a5
    ADD EAX,dword ptr [EBP + -0x34]     ; 0045f9a8
    PUSH EAX                            ; 0045f9ab
    MOV EAX,0x61b78b                    ; 0045f9ac | = "Z-buffer : off"
    PUSH EAX                            ; 0045f9b1 | = "Z-buffer : off"
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045f9b2
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045f9b7
    CMP dword ptr [0x01e6614c],-0x1     ; 0045f9ba | g_CurrentPartIndex
        ;   Label: LAB_0045f9ba
    JNZ 0x0045f9da                      ; 0045f9c1
        ;   XREF to: 0045f9da (CONDITIONAL_JUMP)  ; LAB_0045f9da
    MOV EAX,0x61b79a                    ; 0045f9c3 | s_EmptyChar_0061b79a
    PUSH EAX                            ; 0045f9c8 | s_EmptyChar_0061b79a
    LEA EAX,[EBP + 0xffffff58]          ; 0045f9c9
    PUSH EAX                            ; 0045f9cf
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045f9d0
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0045f9d5
    JMP 0x0045f9fe                      ; 0045f9d8
        ;   XREF to: 0045f9fe (UNCONDITIONAL_JUMP)  ; LAB_0045f9fe
    IMUL EAX,dword ptr [0x01e6614c],0x14 ; 0045f9da | g_CurrentPartIndex
        ;   Label: LAB_0045f9da
    MOV EDX,0x1e50190                   ; 0045f9e1 | g_ModelPartNames
    ADD EAX,EDX                         ; 0045f9e6
    PUSH EAX                            ; 0045f9e8 | g_ModelPolygonData[19999].uv_v[14]
    MOV EAX,0x61b79b                    ; 0045f9e9 | = "Current part : %s"
    PUSH EAX                            ; 0045f9ee | = "Current part : %s"
    LEA EAX,[EBP + 0xffffff58]          ; 0045f9ef
    PUSH EAX                            ; 0045f9f5
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045f9f6
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0045f9fb
    PUSH 0x0                            ; 0045f9fe
        ;   Label: LAB_0045f9fe
    PUSH 0x0                            ; 0045fa00
    LEA EAX,[EBP + 0xffffff58]          ; 0045fa02
    PUSH EAX                            ; 0045fa08
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045fa09
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045fa0e
    MOV EAX,0x61b7ad                    ; 0045fa11 | = "Polygons"
    PUSH EAX                            ; 0045fa16 | = "Polygons"
    CALL engine_2d.c_getStringWidth_FUN_004018a0 ; 0045fa17
        ;   XREF to: 004018a0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_004018a0(char * text)
    ADD ESP,0x4                         ; 0045fa1c
    MOV dword ptr [EBP + -0x34],EAX     ; 0045fa1f
    MOV EAX,0x61b7b6                    ; 0045fa22 | = "Points"
    PUSH EAX                            ; 0045fa27 | = "Points"
    LEA EAX,[EBP + 0xffffff58]          ; 0045fa28
    PUSH EAX                            ; 0045fa2e
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045fa2f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0045fa34
    PUSH 0x0                            ; 0045fa37
    MOV EAX,[0x00679394]                ; 0045fa39 | g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045fa3e | g_WindowWidth
    SAR EDX,0x1f                        ; 0045fa44
    SUB EAX,EDX                         ; 0045fa47
    SAR EAX,0x1                         ; 0045fa49
    ADD EAX,0xa                         ; 0045fa4b
    PUSH EAX                            ; 0045fa4e
    LEA EAX,[EBP + 0xffffff58]          ; 0045fa4f
    PUSH EAX                            ; 0045fa55
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045fa56
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045fa5b
    PUSH dword ptr [0x01626408]         ; 0045fa5e | g_VertexCount
    MOV EAX,0x61b7bd                    ; 0045fa64 | = " : %d"
    PUSH EAX                            ; 0045fa69 | = " : %d"
    LEA EAX,[EBP + 0xffffff58]          ; 0045fa6a
    PUSH EAX                            ; 0045fa70
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045fa71
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0045fa76
    PUSH 0x0                            ; 0045fa79
    MOV EAX,[0x00679394]                ; 0045fa7b | g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045fa80 | g_WindowWidth
    SAR EDX,0x1f                        ; 0045fa86
    SUB EAX,EDX                         ; 0045fa89
    SAR EAX,0x1                         ; 0045fa8b
    ADD EAX,0xa                         ; 0045fa8d
    ADD EAX,dword ptr [EBP + -0x34]     ; 0045fa90
    PUSH EAX                            ; 0045fa93
    LEA EAX,[EBP + 0xffffff58]          ; 0045fa94
    PUSH EAX                            ; 0045fa9a
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045fa9b
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045faa0
    MOV EAX,0x61b7c3                    ; 0045faa3 | = "Polygons"
    PUSH EAX                            ; 0045faa8 | = "Polygons"
    LEA EAX,[EBP + 0xffffff58]          ; 0045faa9
    PUSH EAX                            ; 0045faaf
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045fab0
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0045fab5
    PUSH 0xb                            ; 0045fab8
    MOV EAX,[0x00679394]                ; 0045faba | g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045fabf | g_WindowWidth
    SAR EDX,0x1f                        ; 0045fac5
    SUB EAX,EDX                         ; 0045fac8
    SAR EAX,0x1                         ; 0045faca
    ADD EAX,0xa                         ; 0045facc
    PUSH EAX                            ; 0045facf
    LEA EAX,[EBP + 0xffffff58]          ; 0045fad0
    PUSH EAX                            ; 0045fad6
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045fad7
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045fadc
    PUSH dword ptr [0x016e990c]         ; 0045fadf | g_PolygonCount
    MOV EAX,0x61b7cc                    ; 0045fae5 | = " : %d"
    PUSH EAX                            ; 0045faea | = " : %d"
    LEA EAX,[EBP + 0xffffff58]          ; 0045faeb
    PUSH EAX                            ; 0045faf1
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045faf2
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0045faf7
    PUSH 0xb                            ; 0045fafa
    MOV EAX,[0x00679394]                ; 0045fafc | g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045fb01 | g_WindowWidth
    SAR EDX,0x1f                        ; 0045fb07
    SUB EAX,EDX                         ; 0045fb0a
    SAR EAX,0x1                         ; 0045fb0c
    ADD EAX,0xa                         ; 0045fb0e
    ADD EAX,dword ptr [EBP + -0x34]     ; 0045fb11
    PUSH EAX                            ; 0045fb14
    LEA EAX,[EBP + 0xffffff58]          ; 0045fb15
    PUSH EAX                            ; 0045fb1b
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045fb1c
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045fb21
    MOV EAX,0x61b7d2                    ; 0045fb24 | = "Parts"
    PUSH EAX                            ; 0045fb29 | = "Parts"
    LEA EAX,[EBP + 0xffffff58]          ; 0045fb2a
    PUSH EAX                            ; 0045fb30
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045fb31
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0045fb36
    PUSH 0x16                           ; 0045fb39
    MOV EAX,[0x00679394]                ; 0045fb3b | g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045fb40 | g_WindowWidth
    SAR EDX,0x1f                        ; 0045fb46
    SUB EAX,EDX                         ; 0045fb49
    SAR EAX,0x1                         ; 0045fb4b
    ADD EAX,0xa                         ; 0045fb4d
    PUSH EAX                            ; 0045fb50
    LEA EAX,[EBP + 0xffffff58]          ; 0045fb51
    PUSH EAX                            ; 0045fb57
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045fb58
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045fb5d
    PUSH dword ptr [0x01e528a0]         ; 0045fb60 | g_PartsCount
    MOV EAX,0x61b7d8                    ; 0045fb66 | = " : %d"
    PUSH EAX                            ; 0045fb6b | = " : %d"
    LEA EAX,[EBP + 0xffffff58]          ; 0045fb6c
    PUSH EAX                            ; 0045fb72
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045fb73
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0045fb78
    PUSH 0x16                           ; 0045fb7b
    MOV EAX,[0x00679394]                ; 0045fb7d | g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045fb82 | g_WindowWidth
    SAR EDX,0x1f                        ; 0045fb88
    SUB EAX,EDX                         ; 0045fb8b
    SAR EAX,0x1                         ; 0045fb8d
    ADD EAX,0xa                         ; 0045fb8f
    ADD EAX,dword ptr [EBP + -0x34]     ; 0045fb92
    PUSH EAX                            ; 0045fb95
    LEA EAX,[EBP + 0xffffff58]          ; 0045fb96
    PUSH EAX                            ; 0045fb9c
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045fb9d
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045fba2
    CMP dword ptr [0x015c4834],0x0      ; 0045fba5 | g_FacetWireframeMode
    JZ 0x0045fbb9                       ; 0045fbac
        ;   XREF to: 0045fbb9 (CONDITIONAL_JUMP)  ; LAB_0045fbb9
    FLD float ptr [EBP + -0x1c]         ; 0045fbae
    FSTP double ptr [EBP + 0xffffff38]  ; 0045fbb1
    JMP 0x0045fbcd                      ; 0045fbb7
        ;   XREF to: 0045fbcd (UNCONDITIONAL_JUMP)  ; LAB_0045fbcd
    MOV dword ptr [EBP + 0xffffff38],0x0 ; 0045fbb9
        ;   Label: LAB_0045fbb9
    MOV dword ptr [EBP + 0xffffff3c],0x40568000 ; 0045fbc3
    PUSH dword ptr [EBP + 0xffffff3c]   ; 0045fbcd
        ;   Label: LAB_0045fbcd
    PUSH dword ptr [EBP + 0xffffff38]   ; 0045fbd3
    FILD dword ptr [0x006793c0]         ; 0045fbd9 | g_ProjectionScale
    FDIVR double ptr [0x0061b7fe]       ; 0045fbdf | DOUBLE_0061b7fe
    SUB ESP,0x8                         ; 0045fbe5
    FSTP double ptr [ESP]               ; 0045fbe8
    MOV EAX,0x61b7de                    ; 0045fbeb | = "Zoom : %4.2f  FOV : %4.1f"
    PUSH EAX                            ; 0045fbf0 | = "Zoom : %4.2f  FOV : %4.1f"
    LEA EAX,[EBP + 0xffffff58]          ; 0045fbf1
    PUSH EAX                            ; 0045fbf7
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045fbf8
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x18                        ; 0045fbfd
    PUSH 0x2c                           ; 0045fc00
    MOV EAX,[0x00679394]                ; 0045fc02 | g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045fc07 | g_WindowWidth
    SAR EDX,0x1f                        ; 0045fc0d
    SUB EAX,EDX                         ; 0045fc10
    SAR EAX,0x1                         ; 0045fc12
    ADD EAX,0xa                         ; 0045fc14
    PUSH EAX                            ; 0045fc17
    LEA EAX,[EBP + 0xffffff58]          ; 0045fc18
    PUSH EAX                            ; 0045fc1e
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045fc1f
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045fc24
    CMP byte ptr [0x02d03eab],0x0       ; 0045fc27 | CHAR_ARRAY_02d03eab
    JZ 0x0045fc39                       ; 0045fc2e
        ;   XREF to: 0045fc39 (CONDITIONAL_JUMP)  ; LAB_0045fc39
    CMP byte ptr [0x02d03eb5],0x0       ; 0045fc30 | CHAR_ARRAY_02d03eb5
    JNZ 0x0045fc3b                      ; 0045fc37
        ;   XREF to: 0045fc3b (CONDITIONAL_JUMP)  ; LAB_0045fc3b
    JMP 0x0045fc5b                      ; 0045fc39
        ;   XREF to: 0045fc5b (UNCONDITIONAL_JUMP)  ; LAB_0045fc5b
        ;   Label: LAB_0045fc39
    MOV byte ptr [0x02d03eab],0x0       ; 0045fc3b | CHAR_ARRAY_02d03eab
        ;   Label: LAB_0045fc3b
    INC dword ptr [0x01e528c8]          ; 0045fc42 | g_EditorTextureMode
    CMP dword ptr [0x01e528c8],0x4      ; 0045fc48 | g_EditorTextureMode
    JLE 0x0045fc5b                      ; 0045fc4f
        ;   XREF to: 0045fc5b (CONDITIONAL_JUMP)  ; LAB_0045fc5b
    MOV dword ptr [0x01e528c8],0x0      ; 0045fc51 | g_EditorTextureMode
    CMP byte ptr [0x02d03eab],0x0       ; 0045fc5b | CHAR_ARRAY_02d03eab
        ;   Label: LAB_0045fc5b
    JZ 0x0045fc9f                       ; 0045fc62
        ;   XREF to: 0045fc9f (CONDITIONAL_JUMP)  ; LAB_0045fc9f
    MOV byte ptr [0x02d03eab],0x0       ; 0045fc64 | CHAR_ARRAY_02d03eab
    MOV dword ptr [EBP + -0x48],0x0     ; 0045fc6b
    MOV dword ptr [EBP + -0x2c],0x0     ; 0045fc72
    MOV dword ptr [EBP + -0x28],0x0     ; 0045fc79
    MOV dword ptr [EBP + -0x3c],0x0     ; 0045fc80
    MOV dword ptr [EBP + -0xc],0x0      ; 0045fc87
    MOV dword ptr [EBP + -0x30],0xffff0000 ; 0045fc8e
    MOV dword ptr [0x006793c0],0x10000  ; 0045fc95 | g_ProjectionScale
    CMP byte ptr [0x02d03ec6],0x0       ; 0045fc9f | CHAR_ARRAY_02d03ec6
        ;   Label: LAB_0045fc9f
    JZ 0x0045fcb1                       ; 0045fca6
        ;   XREF to: 0045fcb1 (CONDITIONAL_JUMP)  ; LAB_0045fcb1
    CMP byte ptr [0x02d03eb5],0x0       ; 0045fca8 | CHAR_ARRAY_02d03eb5
    JNZ 0x0045fcb3                      ; 0045fcaf
        ;   XREF to: 0045fcb3 (CONDITIONAL_JUMP)  ; LAB_0045fcb3
    JMP 0x0045fceb                      ; 0045fcb1
        ;   XREF to: 0045fceb (UNCONDITIONAL_JUMP)  ; LAB_0045fceb
        ;   Label: LAB_0045fcb1
    MOV byte ptr [0x02d03ec6],0x0       ; 0045fcb3 | CHAR_ARRAY_02d03ec6
        ;   Label: LAB_0045fcb3
    MOV EDX,dword ptr [0x01626404]      ; 0045fcba | g_CurrentModelIndex
    INC EDX                             ; 0045fcc0
    MOV ECX,dword ptr [0x01626400]      ; 0045fcc1 | g_ModelCount
    MOV EAX,EDX                         ; 0045fcc7
    SAR EDX,0x1f                        ; 0045fcc9
    IDIV ECX                            ; 0045fccc
    MOV dword ptr [0x01626404],EDX      ; 0045fcce | g_CurrentModelIndex
    MOV EDX,dword ptr [0x01626404]      ; 0045fcd4 | g_CurrentModelIndex
    SHL EDX,0x2                         ; 0045fcda
    PUSH dword ptr [EDX + 0x16263e0]    ; 0045fcdd | g_EditorColorIndices
    CALL engine_2d.c_setTextColor_FUN_00402840 ; 0045fce3
        ;   XREF to: 00402840 (UNCONDITIONAL_CALL)  ; void engine_2d.c_setTextColor_FUN_00402840(int color)
    ADD ESP,0x4                         ; 0045fce8
    CMP byte ptr [0x02d03ec6],0x0       ; 0045fceb | CHAR_ARRAY_02d03ec6
        ;   Label: LAB_0045fceb
    JZ 0x0045fd14                       ; 0045fcf2
        ;   XREF to: 0045fd14 (CONDITIONAL_JUMP)  ; LAB_0045fd14
    MOV byte ptr [0x02d03ec6],0x0       ; 0045fcf4 | CHAR_ARRAY_02d03ec6
    INC dword ptr [0x01626368]          ; 0045fcfb | g_EditorColorIndex
    CMP dword ptr [0x01626368],0x10     ; 0045fd01 | g_EditorColorIndex
    JL 0x0045fd14                       ; 0045fd08
        ;   XREF to: 0045fd14 (CONDITIONAL_JUMP)  ; LAB_0045fd14
    MOV dword ptr [0x01626368],0x0      ; 0045fd0a | g_EditorColorIndex
    MOV EAX,[0x01626368]                ; 0045fd14 | g_EditorColorIndex
        ;   Label: LAB_0045fd14
    SHL EAX,0x2                         ; 0045fd19
    MOV EAX,dword ptr [EAX + 0x66e094]  ; 0045fd1c | g_ColorLookupTable
    MOV [0x02d02570],EAX                ; 0045fd22 | g_ActiveRenderColor
    MOV EAX,[0x00679394]                ; 0045fd27 | g_WindowWidth
    SUB EAX,0xa                         ; 0045fd2c
    MOV dword ptr [EBP + -0x34],EAX     ; 0045fd2f
    JMP 0x0045fd3a                      ; 0045fd32
        ;   XREF to: 0045fd3a (UNCONDITIONAL_JUMP)  ; LAB_0045fd3a
    MOV EAX,dword ptr [EBP + -0x34]     ; 0045fd34
        ;   Label: LAB_0045fd34
    INC dword ptr [EBP + -0x34]         ; 0045fd37
    MOV EAX,dword ptr [EBP + -0x34]     ; 0045fd3a
        ;   Label: LAB_0045fd3a
    CMP EAX,dword ptr [0x00679394]      ; 0045fd3d | g_WindowWidth
    JGE 0x0045fd77                      ; 0045fd43
        ;   XREF to: 0045fd77 (CONDITIONAL_JUMP)  ; LAB_0045fd77
    MOV EAX,[0x00679398]                ; 0045fd45 | g_WindowHeight
    SUB EAX,0xa                         ; 0045fd4a
    MOV dword ptr [EBP + -0x40],EAX     ; 0045fd4d
    JMP 0x0045fd58                      ; 0045fd50
        ;   XREF to: 0045fd58 (UNCONDITIONAL_JUMP)  ; LAB_0045fd58
    MOV EAX,dword ptr [EBP + -0x40]     ; 0045fd52
        ;   Label: LAB_0045fd52
    INC dword ptr [EBP + -0x40]         ; 0045fd55
    MOV EAX,dword ptr [EBP + -0x40]     ; 0045fd58
        ;   Label: LAB_0045fd58
    CMP EAX,dword ptr [0x00679398]      ; 0045fd5b | g_WindowHeight
    JGE 0x0045fd75                      ; 0045fd61
        ;   XREF to: 0045fd75 (CONDITIONAL_JUMP)  ; LAB_0045fd75
    MOV EAX,dword ptr [EBP + -0x40]     ; 0045fd63
    PUSH EAX                            ; 0045fd66
    MOV EAX,dword ptr [EBP + -0x34]     ; 0045fd67
    PUSH EAX                            ; 0045fd6a
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 0045fd6b
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 0045fd70
    JMP 0x0045fd52                      ; 0045fd73
        ;   XREF to: 0045fd52 (UNCONDITIONAL_JUMP)  ; LAB_0045fd52
    JMP 0x0045fd34                      ; 0045fd75
        ;   XREF to: 0045fd34 (UNCONDITIONAL_JUMP)  ; LAB_0045fd34
        ;   Label: LAB_0045fd75
    CMP byte ptr [0x02d03eac],0x0       ; 0045fd77 | CHAR_ARRAY_02d03eac
        ;   Label: LAB_0045fd77
    JZ 0x0045fd89                       ; 0045fd7e
        ;   XREF to: 0045fd89 (CONDITIONAL_JUMP)  ; LAB_0045fd89
    CMP byte ptr [0x02d03eb5],0x0       ; 0045fd80 | CHAR_ARRAY_02d03eb5
    JNZ 0x0045fd8b                      ; 0045fd87
        ;   XREF to: 0045fd8b (CONDITIONAL_JUMP)  ; LAB_0045fd8b
    JMP 0x0045fdab                      ; 0045fd89
        ;   XREF to: 0045fdab (UNCONDITIONAL_JUMP)  ; LAB_0045fdab
        ;   Label: LAB_0045fd89
    MOV byte ptr [0x02d03eac],0x0       ; 0045fd8b | CHAR_ARRAY_02d03eac
        ;   Label: LAB_0045fd8b
    INC dword ptr [0x0066edf8]          ; 0045fd92 | g_EditorColorMode
    CMP dword ptr [0x0066edf8],0x10     ; 0045fd98 | g_EditorColorMode
    JL 0x0045fdab                       ; 0045fd9f
        ;   XREF to: 0045fdab (CONDITIONAL_JUMP)  ; LAB_0045fdab
    MOV dword ptr [0x0066edf8],0x0      ; 0045fda1 | g_EditorColorMode
    CMP byte ptr [0x02d03eb0],0x0       ; 0045fdab | CHAR_ARRAY_02d03eb0
        ;   Label: LAB_0045fdab
    JZ 0x0045fdbd                       ; 0045fdb2
        ;   XREF to: 0045fdbd (CONDITIONAL_JUMP)  ; LAB_0045fdbd
    CMP byte ptr [0x02d03eb5],0x0       ; 0045fdb4 | CHAR_ARRAY_02d03eb5
    JNZ 0x0045fdbf                      ; 0045fdbb
        ;   XREF to: 0045fdbf (CONDITIONAL_JUMP)  ; LAB_0045fdbf
    JMP 0x0045fde0                      ; 0045fdbd
        ;   XREF to: 0045fde0 (UNCONDITIONAL_JUMP)  ; LAB_0045fde0
        ;   Label: LAB_0045fdbd
    MOV byte ptr [0x02d03eb0],0x0       ; 0045fdbf | CHAR_ARRAY_02d03eb0
        ;   Label: LAB_0045fdbf
    MOV EDX,dword ptr [0x0066edfc]      ; 0045fdc6 | g_EditorCurrentTexture
    INC EDX                             ; 0045fdcc
    MOV ECX,dword ptr [0x01626400]      ; 0045fdcd | g_ModelCount
    MOV EAX,EDX                         ; 0045fdd3
    SAR EDX,0x1f                        ; 0045fdd5
    IDIV ECX                            ; 0045fdd8
    MOV dword ptr [0x0066edfc],EDX      ; 0045fdda | g_EditorCurrentTexture
    CMP byte ptr [0x02d03eb9],0x0       ; 0045fde0 | CHAR_ARRAY_02d03eb9
        ;   Label: LAB_0045fde0
    JZ 0x0045fdf2                       ; 0045fde7
        ;   XREF to: 0045fdf2 (CONDITIONAL_JUMP)  ; LAB_0045fdf2
    CMP byte ptr [0x02d03ec2],0x0       ; 0045fde9 | CHAR_ARRAY_02d03ec2
    JNZ 0x0045fdf4                      ; 0045fdf0
        ;   XREF to: 0045fdf4 (CONDITIONAL_JUMP)  ; LAB_0045fdf4
    JMP 0x0045fe0b                      ; 0045fdf2
        ;   XREF to: 0045fe0b (UNCONDITIONAL_JUMP)  ; LAB_0045fe0b
        ;   Label: LAB_0045fdf2
    MOV byte ptr [0x02d03eb9],0x0       ; 0045fdf4 | CHAR_ARRAY_02d03eb9
        ;   Label: LAB_0045fdf4
    MOV EAX,0x1                         ; 0045fdfb
    SUB EAX,dword ptr [0x015c4834]      ; 0045fe00 | g_FacetWireframeMode
    MOV [0x015c4834],EAX                ; 0045fe06 | g_FacetWireframeMode
    CMP byte ptr [0x02d03ecc],0x0       ; 0045fe0b | CHAR_ARRAY_02d03ecc
        ;   Label: LAB_0045fe0b
    JZ 0x0045fe5d                       ; 0045fe12
        ;   XREF to: 0045fe5d (CONDITIONAL_JUMP)  ; LAB_0045fe5d
    MOV byte ptr [0x02d03ecc],0x0       ; 0045fe14 | CHAR_ARRAY_02d03ecc
    CMP byte ptr [0x02d03eb5],0x0       ; 0045fe1b | CHAR_ARRAY_02d03eb5
    JNZ 0x0045fe43                      ; 0045fe22
        ;   XREF to: 0045fe43 (CONDITIONAL_JUMP)  ; LAB_0045fe43
    INC dword ptr [0x01e528b8]          ; 0045fe24 | g_SelectedPolygonIndex
    MOV EAX,[0x01e528b8]                ; 0045fe2a | g_SelectedPolygonIndex
    CMP EAX,dword ptr [0x016e990c]      ; 0045fe2f | g_PolygonCount
    JL 0x0045fe41                       ; 0045fe35
        ;   XREF to: 0045fe41 (CONDITIONAL_JUMP)  ; LAB_0045fe41
    MOV dword ptr [0x01e528b8],0xffffffff ; 0045fe37 | g_SelectedPolygonIndex
    JMP 0x0045fe5d                      ; 0045fe41
        ;   XREF to: 0045fe5d (UNCONDITIONAL_JUMP)  ; LAB_0045fe5d
        ;   Label: LAB_0045fe41
    DEC dword ptr [0x01e528b8]          ; 0045fe43 | g_SelectedPolygonIndex
        ;   Label: LAB_0045fe43
    CMP dword ptr [0x01e528b8],0x0      ; 0045fe49 | g_SelectedPolygonIndex
    JGE 0x0045fe5d                      ; 0045fe50
        ;   XREF to: 0045fe5d (CONDITIONAL_JUMP)  ; LAB_0045fe5d
    MOV EAX,[0x016e990c]                ; 0045fe52 | g_PolygonCount
    DEC EAX                             ; 0045fe57
    MOV [0x01e528b8],EAX                ; 0045fe58 | g_SelectedPolygonIndex
    CMP byte ptr [0x0066eda8],0x0       ; 0045fe5d | g_LoadedModelName
        ;   Label: LAB_0045fe5d
    JNZ 0x0045fe7d                      ; 0045fe64
        ;   XREF to: 0045fe7d (CONDITIONAL_JUMP)  ; LAB_0045fe7d
    MOV EAX,0x61b806                    ; 0045fe66 | = "No model loaded"
    PUSH EAX                            ; 0045fe6b | = "No model loaded"
    LEA EAX,[EBP + 0xffffff58]          ; 0045fe6c
    PUSH EAX                            ; 0045fe72
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045fe73
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0045fe78
    JMP 0x0045fe98                      ; 0045fe7b
        ;   XREF to: 0045fe98 (UNCONDITIONAL_JUMP)  ; LAB_0045fe98
    MOV EAX,0x66eda8                    ; 0045fe7d | g_LoadedModelName
        ;   Label: LAB_0045fe7d
    PUSH EAX                            ; 0045fe82 | g_LoadedModelName
    MOV EAX,0x61b816                    ; 0045fe83 | = "%s"
    PUSH EAX                            ; 0045fe88 | = "%s"
    LEA EAX,[EBP + 0xffffff58]          ; 0045fe89
    PUSH EAX                            ; 0045fe8f
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045fe90
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0045fe95
    MOV EAX,[0x00679398]                ; 0045fe98 | g_WindowHeight
        ;   Label: LAB_0045fe98
    SUB EAX,0x21                        ; 0045fe9d
    PUSH EAX                            ; 0045fea0
    PUSH 0x0                            ; 0045fea1
    LEA EAX,[EBP + 0xffffff58]          ; 0045fea3
    PUSH EAX                            ; 0045fea9
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045feaa
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045feaf
    FILD dword ptr [EBP + -0x30]        ; 0045feb2
    FMUL double ptr [0x0061b846]        ; 0045feb5 | g_CoordinateDisplayScale
    SUB ESP,0x8                         ; 0045febb
    FSTP double ptr [ESP]               ; 0045febe
    FILD dword ptr [EBP + -0xc]         ; 0045fec1
    FMUL double ptr [0x0061b846]        ; 0045fec4 | g_CoordinateDisplayScale
    SUB ESP,0x8                         ; 0045feca
    FSTP double ptr [ESP]               ; 0045fecd
    FILD dword ptr [EBP + -0x3c]        ; 0045fed0
    FMUL double ptr [0x0061b846]        ; 0045fed3 | g_CoordinateDisplayScale
    SUB ESP,0x8                         ; 0045fed9
    FSTP double ptr [ESP]               ; 0045fedc
    MOV EAX,0x61b819                    ; 0045fedf | = "X: %0.4f Y: %0.4f Z: %0.4f"
    PUSH EAX                            ; 0045fee4 | = "X: %0.4f Y: %0.4f Z: %0.4f"
    LEA EAX,[EBP + 0xffffff58]          ; 0045fee5
    PUSH EAX                            ; 0045feeb
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045feec
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x20                        ; 0045fef1
    MOV EAX,[0x00679398]                ; 0045fef4 | g_WindowHeight
    SUB EAX,0xb                         ; 0045fef9
    PUSH EAX                            ; 0045fefc
    MOV EAX,[0x00679394]                ; 0045fefd | g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045ff02 | g_WindowWidth
    SAR EDX,0x1f                        ; 0045ff08
    SHL EDX,0x2                         ; 0045ff0b
    SBB EAX,EDX                         ; 0045ff0e
    SAR EAX,0x2                         ; 0045ff10
    ADD EAX,0x19                        ; 0045ff13
    PUSH EAX                            ; 0045ff16
    LEA EAX,[EBP + 0xffffff58]          ; 0045ff17
    PUSH EAX                            ; 0045ff1d
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045ff1e
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045ff23
    MOV EAX,dword ptr [EBP + -0x28]     ; 0045ff26
    AND EAX,0xffff                      ; 0045ff29
    PUSH EAX                            ; 0045ff2e
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0045ff2f
    AND EAX,0xffff                      ; 0045ff32
    PUSH EAX                            ; 0045ff37
    MOV EAX,dword ptr [EBP + -0x48]     ; 0045ff38
    AND EAX,0xffff                      ; 0045ff3b
    PUSH EAX                            ; 0045ff40
    MOV EAX,0x61b834                    ; 0045ff41 | = "P: %x B: %x H: %x"
    PUSH EAX                            ; 0045ff46 | = "P: %x B: %x H: %x"
    LEA EAX,[EBP + 0xffffff58]          ; 0045ff47
    PUSH EAX                            ; 0045ff4d
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045ff4e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 0045ff53
    MOV EAX,[0x00679398]                ; 0045ff56 | g_WindowHeight
    SUB EAX,0xb                         ; 0045ff5b
    PUSH EAX                            ; 0045ff5e
    PUSH 0x0                            ; 0045ff5f
    LEA EAX,[EBP + 0xffffff58]          ; 0045ff61
    PUSH EAX                            ; 0045ff67
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045ff68
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045ff6d
    CMP dword ptr [0x01e528b8],-0x1     ; 0045ff70 | g_SelectedPolygonIndex
    JNZ 0x0045ff90                      ; 0045ff77
        ;   XREF to: 0045ff90 (CONDITIONAL_JUMP)  ; LAB_0045ff90
    MOV EAX,0x61b84e                    ; 0045ff79 | = "No polygon selected"
    PUSH EAX                            ; 0045ff7e | = "No polygon selected"
    LEA EAX,[EBP + 0xffffff58]          ; 0045ff7f
    PUSH EAX                            ; 0045ff85
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045ff86
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0045ff8b
    JMP 0x0045ffab                      ; 0045ff8e
        ;   XREF to: 0045ffab (UNCONDITIONAL_JUMP)  ; LAB_0045ffab
    PUSH dword ptr [0x01e528b8]         ; 0045ff90 | g_SelectedPolygonIndex
        ;   Label: LAB_0045ff90
    MOV EAX,0x61b862                    ; 0045ff96 | = "Selected polygon : %d"
    PUSH EAX                            ; 0045ff9b | = "Selected polygon : %d"
    LEA EAX,[EBP + 0xffffff58]          ; 0045ff9c
    PUSH EAX                            ; 0045ffa2
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045ffa3
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0045ffa8
    MOV EAX,[0x00679398]                ; 0045ffab | g_WindowHeight
        ;   Label: LAB_0045ffab
    SUB EAX,0x16                        ; 0045ffb0
    PUSH EAX                            ; 0045ffb3
    PUSH 0x0                            ; 0045ffb4
    LEA EAX,[EBP + 0xffffff58]          ; 0045ffb6
    PUSH EAX                            ; 0045ffbc
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045ffbd
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045ffc2
    CMP dword ptr [0x01e528b8],-0x1     ; 0045ffc5 | g_SelectedPolygonIndex
    JZ 0x0046059b                       ; 0045ffcc
        ;   XREF to: 0046059b (CONDITIONAL_JUMP)  ; LAB_0046059b
    CMP byte ptr [0x02d03eae],0x0       ; 0045ffd2 | CHAR_ARRAY_02d03eae
    JZ 0x0045ffe4                       ; 0045ffd9
        ;   XREF to: 0045ffe4 (CONDITIONAL_JUMP)  ; LAB_0045ffe4
    CMP byte ptr [0x02d03ec2],0x0       ; 0045ffdb | CHAR_ARRAY_02d03ec2
    JNZ 0x0045ffe6                      ; 0045ffe2
        ;   XREF to: 0045ffe6 (CONDITIONAL_JUMP)  ; LAB_0045ffe6
    JMP 0x0045fff4                      ; 0045ffe4
        ;   XREF to: 0045fff4 (UNCONDITIONAL_JUMP)  ; LAB_0045fff4
        ;   Label: LAB_0045ffe4
    MOV byte ptr [0x02d03eae],0x0       ; 0045ffe6 | CHAR_ARRAY_02d03eae
        ;   Label: LAB_0045ffe6
    XOR byte ptr [0x015c4838],0x1       ; 0045ffed | g_ShowUVCoordinates
    CMP byte ptr [0x02d03eaf],0x0       ; 0045fff4 | CHAR_ARRAY_02d03eaf
        ;   Label: LAB_0045fff4
    JZ 0x00460006                       ; 0045fffb
        ;   XREF to: 00460006 (CONDITIONAL_JUMP)  ; LAB_00460006
    CMP byte ptr [0x02d03ec2],0x0       ; 0045fffd | CHAR_ARRAY_02d03ec2
    JNZ 0x00460008                      ; 00460004
        ;   XREF to: 00460008 (CONDITIONAL_JUMP)  ; LAB_00460008
    JMP 0x00460016                      ; 00460006
        ;   XREF to: 00460016 (UNCONDITIONAL_JUMP)  ; LAB_00460016
        ;   Label: LAB_00460006
    MOV byte ptr [0x02d03eaf],0x0       ; 00460008 | CHAR_ARRAY_02d03eaf
        ;   Label: LAB_00460008
    XOR byte ptr [0x015c483c],0x1       ; 0046000f | g_ShowVertexCoordinates
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 00460016 | g_SelectedPolygonIndex
        ;   Label: LAB_00460016
    PUSH dword ptr [EAX + 0x16e99b4]    ; 00460020 | g_VertexNormals[19989].vertex.x
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 00460026 | g_SelectedPolygonIndex
    PUSH dword ptr [EAX + 0x16e99d0]    ; 00460030 | g_VertexNormals[19990].vertex.z
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 00460036 | g_SelectedPolygonIndex
    PUSH dword ptr [EAX + 0x16e99cc]    ; 00460040 | g_VertexNormals[19990].vertex.y
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 00460046 | g_SelectedPolygonIndex
    PUSH dword ptr [EAX + 0x16e99c8]    ; 00460050 | g_VertexNormals[19990].vertex.x
    MOV EAX,0x61b878                    ; 00460056 | = "V order : %3d %3d %3d   N : %d"
    PUSH EAX                            ; 0046005b | = "V order : %3d %3d %3d   N : %d"
    LEA EAX,[EBP + 0xffffff58]          ; 0046005c
    PUSH EAX                            ; 00460062
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00460063
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x18                        ; 00460068
    MOV EAX,[0x00679398]                ; 0046006b | g_WindowHeight
    SUB EAX,0x16                        ; 00460070
    PUSH EAX                            ; 00460073
    MOV EAX,[0x00679394]                ; 00460074 | g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 00460079 | g_WindowWidth
    SAR EDX,0x1f                        ; 0046007f
    SUB EAX,EDX                         ; 00460082
    SAR EAX,0x1                         ; 00460084
    ADD EAX,0xa                         ; 00460086
    PUSH EAX                            ; 00460089
    LEA EAX,[EBP + 0xffffff58]          ; 0046008a
    PUSH EAX                            ; 00460090
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 00460091
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460096
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 00460099 | g_SelectedPolygonIndex
    FLD float ptr [EAX + 0x16e99c0]     ; 004600a3 | g_VertexNormals[19989].u
    SUB ESP,0x8                         ; 004600a9
    FSTP double ptr [ESP]               ; 004600ac
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 004600af | g_SelectedPolygonIndex
    FLD float ptr [EAX + 0x16e99bc]     ; 004600b9 | g_VertexNormals[19989].vertex.z
    SUB ESP,0x8                         ; 004600bf
    FSTP double ptr [ESP]               ; 004600c2
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 004600c5 | g_SelectedPolygonIndex
    FLD float ptr [EAX + 0x16e99b8]     ; 004600cf | g_VertexNormals[19989].vertex.y
    SUB ESP,0x8                         ; 004600d5
    FSTP double ptr [ESP]               ; 004600d8
    MOV EAX,0x61b897                    ; 004600db | = "Normal : %6.2f %6.2f %6.2f"
    PUSH EAX                            ; 004600e0 | = "Normal : %6.2f %6.2f %6.2f"
    LEA EAX,[EBP + 0xffffff58]          ; 004600e1
    PUSH EAX                            ; 004600e7
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004600e8
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x20                        ; 004600ed
    MOV EAX,[0x00679398]                ; 004600f0 | g_WindowHeight
    SUB EAX,0xb                         ; 004600f5
    PUSH EAX                            ; 004600f8
    MOV EAX,[0x00679394]                ; 004600f9 | g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 004600fe | g_WindowWidth
    SAR EDX,0x1f                        ; 00460104
    SUB EAX,EDX                         ; 00460107
    SAR EAX,0x1                         ; 00460109
    ADD EAX,0xa                         ; 0046010b
    PUSH EAX                            ; 0046010e
    LEA EAX,[EBP + 0xffffff58]          ; 0046010f
    PUSH EAX                            ; 00460115
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 00460116
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046011b
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 0046011e | g_SelectedPolygonIndex
    MOV EDX,0x16e9910                   ; 00460128 | g_ModelPolygonData
    ADD EAX,EDX                         ; 0046012d
    PUSH EAX                            ; 0046012f | g_VertexNormals[19980].v
    CALL shape_design.c_calculatePolygonAngularArea_FUN_00461ee0 ; 00460130
        ;   XREF to: 00461ee0 (UNCONDITIONAL_CALL)  ; double shape_design.c_calculatePolygonAngularArea_FUN_00461ee0(SShapeEditorPolygon * polygon_ptr)
    MOV dword ptr [EBP + 0xffffff2c],EAX ; 00460135
    MOV dword ptr [EBP + 0xffffff30],EDX ; 0046013b
    FLD double ptr [EBP + 0xffffff2c]   ; 00460141
    ADD ESP,0x4                         ; 00460147
    SUB ESP,0x8                         ; 0046014a
    FSTP double ptr [ESP]               ; 0046014d
    MOV EAX,0x61b8b2                    ; 00460150 | = "Angle sum : %10.6lf"
    PUSH EAX                            ; 00460155 | = "Angle sum : %10.6lf"
    LEA EAX,[EBP + 0xffffff58]          ; 00460156
    PUSH EAX                            ; 0046015c
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0046015d
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00460162
    MOV EAX,[0x00679398]                ; 00460165 | g_WindowHeight
    SUB EAX,0x21                        ; 0046016a
    PUSH EAX                            ; 0046016d
    MOV EAX,[0x00679394]                ; 0046016e | g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 00460173 | g_WindowWidth
    SAR EDX,0x1f                        ; 00460179
    SUB EAX,EDX                         ; 0046017c
    SAR EAX,0x1                         ; 0046017e
    ADD EAX,0xa                         ; 00460180
    PUSH EAX                            ; 00460183
    LEA EAX,[EBP + 0xffffff58]          ; 00460184
    PUSH EAX                            ; 0046018a
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0046018b
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460190
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 00460193 | g_SelectedPolygonIndex
    IMUL EAX,dword ptr [EAX + 0x16e9a88],0x14 ; 0046019d | g_VertexNormals[19999].u
    CMP byte ptr [EAX + 0x1e50190],0x0  ; 004601a4 | g_ModelPartNames
    JZ 0x004601cd                       ; 004601ab
        ;   XREF to: 004601cd (CONDITIONAL_JUMP)  ; LAB_004601cd
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 004601ad | g_SelectedPolygonIndex
    IMUL EAX,dword ptr [EAX + 0x16e9a88],0x14 ; 004601b7 | g_VertexNormals[19999].u
    MOV EDX,0x1e50190                   ; 004601be | g_ModelPartNames
    ADD EDX,EAX                         ; 004601c3
    MOV dword ptr [EBP + 0xffffff34],EDX ; 004601c5
    JMP 0x004601d7                      ; 004601cb
        ;   XREF to: 004601d7 (UNCONDITIONAL_JUMP)  ; LAB_004601d7
    MOV dword ptr [EBP + 0xffffff34],0x61b8c6 ; 004601cd | = "no name"
        ;   Label: LAB_004601cd
    PUSH dword ptr [EBP + 0xffffff34]   ; 004601d7 | = "no name"
        ;   Label: LAB_004601d7
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 004601dd | g_SelectedPolygonIndex
    PUSH dword ptr [EAX + 0x16e9a88]    ; 004601e7 | g_VertexNormals[19999].u
    MOV EAX,0x61b8ce                    ; 004601ed | = "Part number : %d (%s)"
    PUSH EAX                            ; 004601f2 | = "Part number : %d (%s)"
    LEA EAX,[EBP + 0xffffff58]          ; 004601f3
    PUSH EAX                            ; 004601f9
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004601fa
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004601ff
    MOV EAX,[0x00679398]                ; 00460202 | g_WindowHeight
    SUB EAX,0x37                        ; 00460207
    PUSH EAX                            ; 0046020a
    MOV EAX,[0x00679394]                ; 0046020b | g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 00460210 | g_WindowWidth
    SAR EDX,0x1f                        ; 00460216
    SUB EAX,EDX                         ; 00460219
    SAR EAX,0x1                         ; 0046021b
    ADD EAX,0xa                         ; 0046021d
    PUSH EAX                            ; 00460220
    LEA EAX,[EBP + 0xffffff58]          ; 00460221
    PUSH EAX                            ; 00460227
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 00460228
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046022d
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 00460230 | g_SelectedPolygonIndex
    CMP byte ptr [EAX + 0x16e9964],0x0  ; 0046023a | g_VertexNormals[19985].vertex.x
    JZ 0x00460284                       ; 00460241
        ;   XREF to: 00460284 (CONDITIONAL_JUMP)  ; LAB_00460284
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 00460243 | g_SelectedPolygonIndex
    MOV EDX,0x16e9910                   ; 0046024d | g_ModelPolygonData
    ADD EAX,EDX                         ; 00460252
    ADD EAX,0x4                         ; 00460254
    PUSH EAX                            ; 00460257 | g_VertexNormals[19981].vertex.x
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 00460258 | g_SelectedPolygonIndex
    MOV EDX,0x16e9910                   ; 00460262 | g_ModelPolygonData
    ADD EAX,EDX                         ; 00460267
    ADD EAX,0x54                        ; 00460269
    PUSH EAX                            ; 0046026c | g_VertexNormals[19985].vertex.x
    MOV EAX,0x61b8e4                    ; 0046026d | = "Texture : %s (%s)"
    PUSH EAX                            ; 00460272 | = "Texture : %s (%s)"
    LEA EAX,[EBP + 0xffffff58]          ; 00460273
    PUSH EAX                            ; 00460279
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0046027a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0046027f
    JMP 0x004602d8                      ; 00460282
        ;   XREF to: 004602d8 (UNCONDITIONAL_JUMP)  ; LAB_004602d8
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 00460284 | g_SelectedPolygonIndex
        ;   Label: LAB_00460284
    CMP byte ptr [EAX + 0x16e9914],0x0  ; 0046028e | g_VertexNormals[19981].vertex.x
    JZ 0x004602b3                       ; 00460295
        ;   XREF to: 004602b3 (CONDITIONAL_JUMP)  ; LAB_004602b3
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 00460297 | g_SelectedPolygonIndex
    MOV EDX,0x16e9910                   ; 004602a1 | g_ModelPolygonData
    ADD EAX,EDX                         ; 004602a6
    ADD EAX,0x4                         ; 004602a8
    MOV dword ptr [EBP + 0xffffff28],EAX ; 004602ab | g_VertexNormals[19981].vertex.x
    JMP 0x004602bd                      ; 004602b1
        ;   XREF to: 004602bd (UNCONDITIONAL_JUMP)  ; LAB_004602bd
    MOV dword ptr [EBP + 0xffffff28],0x61b8f6 ; 004602b3 | = "none"
        ;   Label: LAB_004602b3
    PUSH dword ptr [EBP + 0xffffff28]   ; 004602bd | g_VertexNormals[19981].vertex.x | = "none"
        ;   Label: LAB_004602bd
    MOV EAX,0x61b8fb                    ; 004602c3 | = "Texture : %s"
    PUSH EAX                            ; 004602c8 | = "Texture : %s"
    LEA EAX,[EBP + 0xffffff58]          ; 004602c9
    PUSH EAX                            ; 004602cf
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004602d0
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004602d5
    MOV EAX,[0x00679398]                ; 004602d8 | g_WindowHeight
        ;   Label: LAB_004602d8
    SUB EAX,0x42                        ; 004602dd
    PUSH EAX                            ; 004602e0
    MOV EAX,[0x00679394]                ; 004602e1 | g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 004602e6 | g_WindowWidth
    SAR EDX,0x1f                        ; 004602ec
    SUB EAX,EDX                         ; 004602ef
    SAR EAX,0x1                         ; 004602f1
    ADD EAX,0xa                         ; 004602f3
    PUSH EAX                            ; 004602f6
    LEA EAX,[EBP + 0xffffff58]          ; 004602f7
    PUSH EAX                            ; 004602fd
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 004602fe
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460303
    CMP dword ptr [0x015c4838],0x0      ; 00460306 | g_ShowUVCoordinates
    JZ 0x0046045b                       ; 0046030d
        ;   XREF to: 0046045b (CONDITIONAL_JUMP)  ; LAB_0046045b
    MOV EAX,[0x00679398]                ; 00460313 | g_WindowHeight
    SUB EAX,0x84                        ; 00460318
    PUSH EAX                            ; 0046031d
    MOV EAX,[0x00679394]                ; 0046031e | g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 00460323 | g_WindowWidth
    SAR EDX,0x1f                        ; 00460329
    SUB EAX,EDX                         ; 0046032c
    SAR EAX,0x1                         ; 0046032e
    ADD EAX,0xa                         ; 00460330
    PUSH EAX                            ; 00460333
    MOV EAX,0x61b908                    ; 00460334 | = "UVs :"
    PUSH EAX                            ; 00460339 | = "UVs :"
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0046033a
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046033f
    MOV dword ptr [EBP + -0x34],0x0     ; 00460342
    JMP 0x00460351                      ; 00460349
        ;   XREF to: 00460351 (UNCONDITIONAL_JUMP)  ; LAB_00460351
    MOV EAX,dword ptr [EBP + -0x34]     ; 0046034b
        ;   Label: LAB_0046034b
    INC dword ptr [EBP + -0x34]         ; 0046034e
    IMUL EDX,dword ptr [0x01e528b8],0x184 ; 00460351 | g_SelectedPolygonIndex
        ;   Label: LAB_00460351
    MOV EAX,dword ptr [EBP + -0x34]     ; 0046035b
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 0046035e | g_VertexNormals[19989].vertex.x
    JGE 0x0046045b                      ; 00460364
        ;   XREF to: 0046045b (CONDITIONAL_JUMP)  ; LAB_0046045b
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 0046036a | g_SelectedPolygonIndex
    MOV EDX,dword ptr [EBP + -0x34]     ; 00460374
    SHL EDX,0x2                         ; 00460377
    ADD EAX,EDX                         ; 0046037a
    FLD float ptr [EAX + 0x16e9a48]     ; 0046037c | g_VertexNormals[19996].vertex.z
    FMUL double ptr [0x0061b936]        ; 00460382 | DOUBLE_0061b936
    SUB ESP,0x8                         ; 00460388
    FSTP double ptr [ESP]               ; 0046038b
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 0046038e | g_SelectedPolygonIndex
    MOV EDX,dword ptr [EBP + -0x34]     ; 00460398
    SHL EDX,0x2                         ; 0046039b
    ADD EAX,EDX                         ; 0046039e
    FLD float ptr [EAX + 0x16e9a08]     ; 004603a0 | g_VertexNormals[19993].vertex.y
    FMUL double ptr [0x0061b936]        ; 004603a6 | DOUBLE_0061b936
    SUB ESP,0x8                         ; 004603ac
    FSTP double ptr [ESP]               ; 004603af
    IMUL EDX,dword ptr [0x01e528b8],0x184 ; 004603b2 | g_SelectedPolygonIndex
    MOV EAX,dword ptr [EBP + -0x34]     ; 004603bc
    SHL EAX,0x2                         ; 004603bf
    ADD EAX,EDX                         ; 004603c2
    FLD float ptr [EAX + 0x16e9a48]     ; 004603c4 | g_VertexNormals[19996].vertex.z
    SUB ESP,0x8                         ; 004603ca
    FSTP double ptr [ESP]               ; 004603cd
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 004603d0 | g_SelectedPolygonIndex
    MOV EDX,dword ptr [EBP + -0x34]     ; 004603da
    SHL EDX,0x2                         ; 004603dd
    ADD EAX,EDX                         ; 004603e0
    FLD float ptr [EAX + 0x16e9a08]     ; 004603e2 | g_VertexNormals[19993].vertex.y
    SUB ESP,0x8                         ; 004603e8
    FSTP double ptr [ESP]               ; 004603eb
    IMUL EDX,dword ptr [0x01e528b8],0x184 ; 004603ee | g_SelectedPolygonIndex
    MOV EAX,dword ptr [EBP + -0x34]     ; 004603f8
    SHL EAX,0x2                         ; 004603fb
    ADD EAX,EDX                         ; 004603fe
    PUSH dword ptr [EAX + 0x16e99c8]    ; 00460400 | g_VertexNormals[19990].vertex.x
    MOV EAX,0x61b90e                    ; 00460406 | = "%03d : %010.6f %010.6f / %08.6f %08.6f"
    PUSH EAX                            ; 0046040b | = "%03d : %010.6f %010.6f / %08.6f %08.6f"
    LEA EAX,[EBP + 0xffffff58]          ; 0046040c
    PUSH EAX                            ; 00460412
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00460413
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x2c                        ; 00460418
    MOV EAX,0xb                         ; 0046041b
    SUB EAX,dword ptr [EBP + -0x34]     ; 00460420
    IMUL EAX,EAX,0xb                    ; 00460423
    MOV EDX,dword ptr [0x00679398]      ; 00460426 | g_WindowHeight
    SUB EDX,EAX                         ; 0046042c
    MOV EAX,EDX                         ; 0046042e
    PUSH EAX                            ; 00460430
    MOV EAX,[0x00679394]                ; 00460431 | g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 00460436 | g_WindowWidth
    SAR EDX,0x1f                        ; 0046043c
    SUB EAX,EDX                         ; 0046043f
    SAR EAX,0x1                         ; 00460441
    ADD EAX,0xa                         ; 00460443
    PUSH EAX                            ; 00460446
    LEA EAX,[EBP + 0xffffff58]          ; 00460447
    PUSH EAX                            ; 0046044d
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0046044e
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460453
    JMP 0x0046034b                      ; 00460456
        ;   XREF to: 0046034b (UNCONDITIONAL_JUMP)  ; LAB_0046034b
    CMP dword ptr [0x015c483c],0x0      ; 0046045b | g_ShowVertexCoordinates
        ;   Label: LAB_0046045b
    JZ 0x0046059b                       ; 00460462
        ;   XREF to: 0046059b (CONDITIONAL_JUMP)  ; LAB_0046059b
    MOV EAX,[0x00679398]                ; 00460468 | g_WindowHeight
    SUB EAX,0x84                        ; 0046046d
    PUSH EAX                            ; 00460472
    MOV EAX,[0x00679394]                ; 00460473 | g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 00460478 | g_WindowWidth
    SAR EDX,0x1f                        ; 0046047e
    SUB EAX,EDX                         ; 00460481
    SAR EAX,0x1                         ; 00460483
    ADD EAX,0xa                         ; 00460485
    PUSH EAX                            ; 00460488
    MOV EAX,0x61b93e                    ; 00460489 | = "Vertices :"
    PUSH EAX                            ; 0046048e | = "Vertices :"
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0046048f
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460494
    MOV dword ptr [EBP + -0x34],0x0     ; 00460497
    JMP 0x004604a6                      ; 0046049e
        ;   XREF to: 004604a6 (UNCONDITIONAL_JUMP)  ; LAB_004604a6
    MOV EAX,dword ptr [EBP + -0x34]     ; 004604a0
        ;   Label: LAB_004604a0
    INC dword ptr [EBP + -0x34]         ; 004604a3
    IMUL EDX,dword ptr [0x01e528b8],0x184 ; 004604a6 | g_SelectedPolygonIndex
        ;   Label: LAB_004604a6
    MOV EAX,dword ptr [EBP + -0x34]     ; 004604b0
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 004604b3 | g_VertexNormals[19989].vertex.x
    JGE 0x0046059b                      ; 004604b9
        ;   XREF to: 0046059b (CONDITIONAL_JUMP)  ; LAB_0046059b
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 004604bf | g_SelectedPolygonIndex
    MOV EDX,dword ptr [EBP + -0x34]     ; 004604c9
    SHL EDX,0x2                         ; 004604cc
    ADD EAX,EDX                         ; 004604cf
    IMUL EAX,dword ptr [EAX + 0x16e99c8],0x14 ; 004604d1 | g_VertexNormals[19990].vertex.x | g_ModelPolygonData[0].vertex_indices[0]
    FLD float ptr [EAX + 0x1626414]     ; 004604d8 | g_LoadedVertices[0].vertex.z
    SUB ESP,0x8                         ; 004604de
    FSTP double ptr [ESP]               ; 004604e1
    IMUL EDX,dword ptr [0x01e528b8],0x184 ; 004604e4 | g_SelectedPolygonIndex
    MOV EAX,dword ptr [EBP + -0x34]     ; 004604ee
    SHL EAX,0x2                         ; 004604f1
    ADD EAX,EDX                         ; 004604f4
    IMUL EAX,dword ptr [EAX + 0x16e99c8],0x14 ; 004604f6 | g_VertexNormals[19990].vertex.x | g_ModelPolygonData[0].vertex_indices[0]
    FLD float ptr [EAX + 0x1626410]     ; 004604fd | g_LoadedVertices[0].vertex.y
    SUB ESP,0x8                         ; 00460503
    FSTP double ptr [ESP]               ; 00460506
    IMUL EDX,dword ptr [0x01e528b8],0x184 ; 00460509 | g_SelectedPolygonIndex
    MOV EAX,dword ptr [EBP + -0x34]     ; 00460513
    SHL EAX,0x2                         ; 00460516
    ADD EAX,EDX                         ; 00460519
    IMUL EAX,dword ptr [EAX + 0x16e99c8],0x14 ; 0046051b | g_VertexNormals[19990].vertex.x | g_ModelPolygonData[0].vertex_indices[0]
    FLD float ptr [EAX + 0x162640c]     ; 00460522 | g_LoadedVertices
    SUB ESP,0x8                         ; 00460528
    FSTP double ptr [ESP]               ; 0046052b
    IMUL EDX,dword ptr [0x01e528b8],0x184 ; 0046052e | g_SelectedPolygonIndex
    MOV EAX,dword ptr [EBP + -0x34]     ; 00460538
    SHL EAX,0x2                         ; 0046053b
    ADD EAX,EDX                         ; 0046053e
    PUSH dword ptr [EAX + 0x16e99c8]    ; 00460540 | g_VertexNormals[19990].vertex.x
    MOV EAX,0x61b949                    ; 00460546 | = "%03d : %+011.6f %+011.6f %+011.6f"
    PUSH EAX                            ; 0046054b | = "%03d : %+011.6f %+011.6f %+011.6f"
    LEA EAX,[EBP + 0xffffff58]          ; 0046054c
    PUSH EAX                            ; 00460552
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00460553
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x24                        ; 00460558
    MOV EAX,0xb                         ; 0046055b
    SUB EAX,dword ptr [EBP + -0x34]     ; 00460560
    IMUL EAX,EAX,0xb                    ; 00460563
    MOV EDX,dword ptr [0x00679398]      ; 00460566 | g_WindowHeight
    SUB EDX,EAX                         ; 0046056c
    MOV EAX,EDX                         ; 0046056e
    PUSH EAX                            ; 00460570
    MOV EAX,[0x00679394]                ; 00460571 | g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 00460576 | g_WindowWidth
    SAR EDX,0x1f                        ; 0046057c
    SUB EAX,EDX                         ; 0046057f
    SAR EAX,0x1                         ; 00460581
    ADD EAX,0xa                         ; 00460583
    PUSH EAX                            ; 00460586
    LEA EAX,[EBP + 0xffffff58]          ; 00460587
    PUSH EAX                            ; 0046058d
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0046058e
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 00460593
    JMP 0x004604a0                      ; 00460596
        ;   XREF to: 004604a0 (UNCONDITIONAL_JUMP)  ; LAB_004604a0
    CMP byte ptr [0x02d03eae],0x0       ; 0046059b | CHAR_ARRAY_02d03eae
        ;   Label: LAB_0046059b
    JZ 0x004605ad                       ; 004605a2
        ;   XREF to: 004605ad (CONDITIONAL_JUMP)  ; LAB_004605ad
    CMP dword ptr [0x01e6614c],-0x1     ; 004605a4 | g_CurrentPartIndex
    JNZ 0x004605af                      ; 004605ab
        ;   XREF to: 004605af (CONDITIONAL_JUMP)  ; LAB_004605af
    JMP 0x004605e0                      ; 004605ad
        ;   XREF to: 004605e0 (UNCONDITIONAL_JUMP)  ; LAB_004605e0
        ;   Label: LAB_004605ad
    MOV byte ptr [0x02d03eae],0x0       ; 004605af | CHAR_ARRAY_02d03eae
        ;   Label: LAB_004605af
    IMUL EDX,dword ptr [0x01e528b8],0x184 ; 004605b6 | g_SelectedPolygonIndex
    MOV EAX,[0x01626368]                ; 004605c0 | g_EditorColorIndex
    MOV dword ptr [EDX + 0x16e9a8c],EAX ; 004605c5 | g_VertexNormals[19999].v
    IMUL EDX,dword ptr [0x01e528b8],0x184 ; 004605cb | g_SelectedPolygonIndex
    MOV EAX,[0x01e6614c]                ; 004605d5 | g_CurrentPartIndex
    MOV dword ptr [EDX + 0x16e9a88],EAX ; 004605da | g_VertexNormals[19999].u
    CMP byte ptr [0x02d03ec9],0x0       ; 004605e0 | CHAR_ARRAY_02d03ec9
        ;   Label: LAB_004605e0
    JZ 0x004605f2                       ; 004605e7
        ;   XREF to: 004605f2 (CONDITIONAL_JUMP)  ; LAB_004605f2
    CMP dword ptr [0x01e528b8],-0x1     ; 004605e9 | g_SelectedPolygonIndex
    JNZ 0x004605f7                      ; 004605f0
        ;   XREF to: 004605f7 (CONDITIONAL_JUMP)  ; LAB_004605f7
    JMP 0x004606fa                      ; 004605f2
        ;   XREF to: 004606fa (UNCONDITIONAL_JUMP)  ; LAB_004606fa
        ;   Label: LAB_004605f2
    MOV byte ptr [0x02d03ec9],0x0       ; 004605f7 | CHAR_ARRAY_02d03ec9
        ;   Label: LAB_004605f7
    IMUL ESI,dword ptr [0x01e528b8],0x184 ; 004605fe | g_SelectedPolygonIndex
    IMUL EDI,dword ptr [0x016e990c],0x184 ; 00460608 | g_PolygonCount
    MOV ECX,0x61                        ; 00460612
    LEA EDI,[EDI + 0x16e9910]           ; 00460617 | g_ModelPolygonData
    LEA ESI,[ESI + 0x16e9910]           ; 0046061d | g_VertexNormals[19980].v
    MOVSD.REP ES:EDI,ESI                ; 00460623 | g_VertexNormals[19980].v | g_ModelPolygonData | g_VertexNormals[19981].vertex.x
    IMUL EAX,dword ptr [0x016e990c],0x184 ; 00460625 | g_PolygonCount
    MOV EAX,dword ptr [EAX + 0x16e99b4] ; 0046062f | g_ModelPolygonData[0].vertex_indices_count
    MOV dword ptr [EBP + -0x40],EAX     ; 00460635
    MOV dword ptr [EBP + -0x34],0x0     ; 00460638
    JMP 0x00460647                      ; 0046063f
        ;   XREF to: 00460647 (UNCONDITIONAL_JUMP)  ; LAB_00460647
    MOV EAX,dword ptr [EBP + -0x34]     ; 00460641
        ;   Label: LAB_00460641
    INC dword ptr [EBP + -0x34]         ; 00460644
    MOV EAX,dword ptr [EBP + -0x34]     ; 00460647
        ;   Label: LAB_00460647
    CMP EAX,dword ptr [EBP + -0x40]     ; 0046064a
    JGE 0x004606f4                      ; 0046064d
        ;   XREF to: 004606f4 (CONDITIONAL_JUMP)  ; LAB_004606f4
    MOV EAX,dword ptr [EBP + -0x40]     ; 00460653
    SUB EAX,dword ptr [EBP + -0x34]     ; 00460656
    SHL EAX,0x2                         ; 00460659
    IMUL EDX,dword ptr [0x01e528b8],0x184 ; 0046065c | g_SelectedPolygonIndex
    LEA ECX,[EDX + EAX*0x1]             ; 00460666
    IMUL EDX,dword ptr [0x016e990c],0x184 ; 00460669 | g_PolygonCount
    MOV EAX,dword ptr [EBP + -0x34]     ; 00460673
    SHL EAX,0x2                         ; 00460676
    ADD EDX,EAX                         ; 00460679
    MOV EAX,dword ptr [ECX + 0x16e99c4] ; 0046067b | g_VertexNormals[19989].v
    MOV dword ptr [EDX + 0x16e99c8],EAX ; 00460681 | g_ModelPolygonData[0].vertex_indices[0]
    MOV EAX,dword ptr [EBP + -0x40]     ; 00460687
    SUB EAX,dword ptr [EBP + -0x34]     ; 0046068a
    SHL EAX,0x2                         ; 0046068d
    IMUL EDX,dword ptr [0x01e528b8],0x184 ; 00460690 | g_SelectedPolygonIndex
    LEA ECX,[EDX + EAX*0x1]             ; 0046069a
    IMUL EDX,dword ptr [0x016e990c],0x184 ; 0046069d | g_PolygonCount
    MOV EAX,dword ptr [EBP + -0x34]     ; 004606a7
    SHL EAX,0x2                         ; 004606aa
    ADD EAX,EDX                         ; 004606ad
    FLD float ptr [ECX + 0x16e9a04]     ; 004606af | g_VertexNormals[19993].vertex.x
    FSTP float ptr [EAX + 0x16e9a08]    ; 004606b5 | g_ModelPolygonData[0].uv_u[0]
    MOV EAX,dword ptr [EBP + -0x40]     ; 004606bb
    SUB EAX,dword ptr [EBP + -0x34]     ; 004606be
    SHL EAX,0x2                         ; 004606c1
    IMUL EDX,dword ptr [0x01e528b8],0x184 ; 004606c4 | g_SelectedPolygonIndex
    LEA ECX,[EDX + EAX*0x1]             ; 004606ce
    IMUL EDX,dword ptr [0x016e990c],0x184 ; 004606d1 | g_PolygonCount
    MOV EAX,dword ptr [EBP + -0x34]     ; 004606db
    SHL EAX,0x2                         ; 004606de
    ADD EAX,EDX                         ; 004606e1
    FLD float ptr [ECX + 0x16e9a44]     ; 004606e3 | g_VertexNormals[19996].vertex.y
    FSTP float ptr [EAX + 0x16e9a48]    ; 004606e9 | g_ModelPolygonData[0].uv_v[0]
    JMP 0x00460641                      ; 004606ef
        ;   XREF to: 00460641 (UNCONDITIONAL_JUMP)  ; LAB_00460641
    INC dword ptr [0x016e990c]          ; 004606f4 | g_PolygonCount
        ;   Label: LAB_004606f4
    PUSH dword ptr [0x01e528b8]         ; 004606fa | g_SelectedPolygonIndex
        ;   Label: LAB_004606fa
    CALL shape_design.c_polygonToolModeManager_FUN_00464c90 ; 00460700
        ;   XREF to: 00464c90 (UNCONDITIONAL_CALL)  ; int shape_design.c_polygonToolModeManager_FUN_00464c90(int input_parameter)
    ADD ESP,0x4                         ; 00460705
    MOV [0x01e528b8],EAX                ; 00460708 | g_SelectedPolygonIndex
    PUSH dword ptr [0x01e528b8]         ; 0046070d | g_SelectedPolygonIndex
    CALL shape_design.c_mouseWheelPolygonReducer_FUN_004648e0 ; 00460713
        ;   XREF to: 004648e0 (UNCONDITIONAL_CALL)  ; int shape_design.c_mouseWheelPolygonReducer_FUN_004648e0(int selected_polygon_index)
    ADD ESP,0x4                         ; 00460718
    MOV [0x01e528b8],EAX                ; 0046071b | g_SelectedPolygonIndex
    CALL engine_matrix.c_pop_FUN_0050d720 ; 00460720
        ;   XREF to: 0050d720 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0050d720()
    CALL wincore_winrun.cpp_doNothing1_FUN_005f2f80 ; 00460725
        ;   XREF to: 005f2f80 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_doNothing1_FUN_005f2f80()
    CALL wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0 ; 0046072a
        ;   XREF to: 005f2fd0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0()
    PUSH 0x0                            ; 0046072f
    CALL wincore_windll.cpp_unlockFrame_FUN_005b7250 ; 00460731
        ;   XREF to: 005b7250 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_unlockFrame_FUN_005b7250(int clear_lock_flag)
    ADD ESP,0x4                         ; 00460736
    CALL wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630 ; 00460739
        ;   XREF to: 005ed630 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046073e
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL shape_design.c_handleEditorHotkeys_FUN_0045b990 ; 00460743
        ;   XREF to: 0045b990 (UNCONDITIONAL_CALL)  ; void shape_design.c_handleEditorHotkeys_FUN_0045b990()
    CALL shape_design.c_checkVertexCountLimit_FUN_00460a10 ; 00460748
        ;   XREF to: 00460a10 (UNCONDITIONAL_CALL)  ; int shape_design.c_checkVertexCountLimit_FUN_00460a10()
    TEST EAX,EAX                        ; 0046074d
    JZ 0x00460756                       ; 0046074f
        ;   XREF to: 00460756 (CONDITIONAL_JUMP)  ; LAB_00460756
    JMP 0x004609ea                      ; 00460751
        ;   XREF to: 004609ea (UNCONDITIONAL_JUMP)  ; LAB_004609ea
    CMP byte ptr [0x02d03eb1],0x0       ; 00460756 | CHAR_ARRAY_02d03eb1
        ;   Label: LAB_00460756
    JZ 0x00460768                       ; 0046075d
        ;   XREF to: 00460768 (CONDITIONAL_JUMP)  ; LAB_00460768
    CMP byte ptr [0x02d03eb5],0x0       ; 0046075f | CHAR_ARRAY_02d03eb5
    JNZ 0x0046076a                      ; 00460766
        ;   XREF to: 0046076a (CONDITIONAL_JUMP)  ; LAB_0046076a
    JMP 0x00460776                      ; 00460768
        ;   XREF to: 00460776 (UNCONDITIONAL_JUMP)  ; LAB_00460776
        ;   Label: LAB_00460768
    MOV byte ptr [0x02d03eb1],0x0       ; 0046076a | CHAR_ARRAY_02d03eb1
        ;   Label: LAB_0046076a
    CALL shape_design.c_loadPalette_FUN_0046e810 ; 00460771
        ;   XREF to: 0046e810 (UNCONDITIONAL_CALL)  ; void shape_design.c_loadPalette_FUN_0046e810()
    CMP byte ptr [0x02d03eb1],0x0       ; 00460776 | CHAR_ARRAY_02d03eb1
        ;   Label: LAB_00460776
    JZ 0x00460788                       ; 0046077d
        ;   XREF to: 00460788 (CONDITIONAL_JUMP)  ; LAB_00460788
    CMP byte ptr [0x02d03ec2],0x0       ; 0046077f | CHAR_ARRAY_02d03ec2
    JNZ 0x0046078a                      ; 00460786
        ;   XREF to: 0046078a (CONDITIONAL_JUMP)  ; LAB_0046078a
    JMP 0x004607a7                      ; 00460788
        ;   XREF to: 004607a7 (UNCONDITIONAL_JUMP)  ; LAB_004607a7
        ;   Label: LAB_00460788
    MOV byte ptr [0x02d03eb1],0x0       ; 0046078a | CHAR_ARRAY_02d03eb1
        ;   Label: LAB_0046078a
    MOV EAX,[0x01626404]                ; 00460791 | g_CurrentModelIndex
    SHL EAX,0x2                         ; 00460796
    PUSH dword ptr [EAX + 0x16263c0]    ; 00460799 | g_EditorBackgroundColors
    CALL shape_design.c_displayPalette_FUN_00461560 ; 0046079f
        ;   XREF to: 00461560 (UNCONDITIONAL_CALL)  ; void shape_design.c_displayPalette_FUN_00461560()
    ADD ESP,0x4                         ; 004607a4
    CMP byte ptr [0x02d03eb1],0x0       ; 004607a7 | CHAR_ARRAY_02d03eb1
        ;   Label: LAB_004607a7
    JZ 0x004607bc                       ; 004607ae
        ;   XREF to: 004607bc (CONDITIONAL_JUMP)  ; LAB_004607bc
    MOV byte ptr [0x02d03eb1],0x0       ; 004607b0 | CHAR_ARRAY_02d03eb1
    CALL shape_design.c_selectModelPart_FUN_0045de80 ; 004607b7
        ;   XREF to: 0045de80 (UNCONDITIONAL_CALL)  ; void shape_design.c_selectModelPart_FUN_0045de80()
    CMP byte ptr [0x02d03ebe],0x0       ; 004607bc | CHAR_ARRAY_02d03ebe
        ;   Label: LAB_004607bc
    JZ 0x004607ce                       ; 004607c3
        ;   XREF to: 004607ce (CONDITIONAL_JUMP)  ; LAB_004607ce
    CMP byte ptr [0x02d03ec2],0x0       ; 004607c5 | CHAR_ARRAY_02d03ec2
    JNZ 0x004607d0                      ; 004607cc
        ;   XREF to: 004607d0 (CONDITIONAL_JUMP)  ; LAB_004607d0
    JMP 0x004607dc                      ; 004607ce
        ;   XREF to: 004607dc (UNCONDITIONAL_JUMP)  ; LAB_004607dc
        ;   Label: LAB_004607ce
    MOV byte ptr [0x02d03ebe],0x0       ; 004607d0 | CHAR_ARRAY_02d03ebe
        ;   Label: LAB_004607d0
    CALL shape_design.c_showModelPartsList_FUN_0045dbe0 ; 004607d7
        ;   XREF to: 0045dbe0 (UNCONDITIONAL_CALL)  ; void shape_design.c_showModelPartsList_FUN_0045dbe0()
    CMP byte ptr [0x02d03ebe],0x0       ; 004607dc | CHAR_ARRAY_02d03ebe
        ;   Label: LAB_004607dc
    JZ 0x004607ee                       ; 004607e3
        ;   XREF to: 004607ee (CONDITIONAL_JUMP)  ; LAB_004607ee
    CMP byte ptr [0x02d03ec2],0x0       ; 004607e5 | CHAR_ARRAY_02d03ec2
    JZ 0x004607f0                       ; 004607ec
        ;   XREF to: 004607f0 (CONDITIONAL_JUMP)  ; LAB_004607f0
    JMP 0x004607fc                      ; 004607ee
        ;   XREF to: 004607fc (UNCONDITIONAL_JUMP)  ; LAB_004607fc
        ;   Label: LAB_004607ee
    MOV byte ptr [0x02d03ebe],0x0       ; 004607f0 | CHAR_ARRAY_02d03ebe
        ;   Label: LAB_004607f0
    CALL shape_design.c_showPolygonDetailsList_FUN_0045d9c0 ; 004607f7
        ;   XREF to: 0045d9c0 (UNCONDITIONAL_CALL)  ; void shape_design.c_showPolygonDetailsList_FUN_0045d9c0()
    CMP byte ptr [0x02d03eb7],0x0       ; 004607fc | CHAR_ARRAY_02d03eb7
        ;   Label: LAB_004607fc
    JZ 0x0046080e                       ; 00460803
        ;   XREF to: 0046080e (CONDITIONAL_JUMP)  ; LAB_0046080e
    CMP byte ptr [0x02d03eb5],0x0       ; 00460805 | CHAR_ARRAY_02d03eb5
    JZ 0x00460810                       ; 0046080c
        ;   XREF to: 00460810 (CONDITIONAL_JUMP)  ; LAB_00460810
    JMP 0x00460825                      ; 0046080e
        ;   XREF to: 00460825 (UNCONDITIONAL_JUMP)  ; LAB_00460825
        ;   Label: LAB_0046080e
    MOV byte ptr [0x02d03eb7],0x0       ; 00460810 | CHAR_ARRAY_02d03eb7
        ;   Label: LAB_00460810
    CMP dword ptr [0x01e6614c],-0x1     ; 00460817 | g_CurrentPartIndex
    JZ 0x00460825                       ; 0046081e
        ;   XREF to: 00460825 (CONDITIONAL_JUMP)  ; LAB_00460825
    CALL shape_design.c_createRotationalSweepGeometry_FUN_0045e070 ; 00460820
        ;   XREF to: 0045e070 (UNCONDITIONAL_CALL)  ; void shape_design.c_createRotationalSweepGeometry_FUN_0045e070()
    CMP byte ptr [0x02d03eb8],0x0       ; 00460825 | CHAR_ARRAY_02d03eb8
        ;   Label: LAB_00460825
    JZ 0x00460837                       ; 0046082c
        ;   XREF to: 00460837 (CONDITIONAL_JUMP)  ; LAB_00460837
    CMP byte ptr [0x02d03eb5],0x0       ; 0046082e | CHAR_ARRAY_02d03eb5
    JNZ 0x00460839                      ; 00460835
        ;   XREF to: 00460839 (CONDITIONAL_JUMP)  ; LAB_00460839
    JMP 0x00460842                      ; 00460837
        ;   XREF to: 00460842 (UNCONDITIONAL_JUMP)  ; LAB_00460842
        ;   Label: LAB_00460837
    CMP dword ptr [0x016e990c],0x0      ; 00460839 | g_PolygonCount
        ;   Label: LAB_00460839
    JG 0x00460844                       ; 00460840
        ;   XREF to: 00460844 (CONDITIONAL_JUMP)  ; LAB_00460844
    JMP 0x00460850                      ; 00460842
        ;   XREF to: 00460850 (UNCONDITIONAL_JUMP)  ; LAB_00460850
        ;   Label: LAB_00460842
    MOV byte ptr [0x02d03eb8],0x0       ; 00460844 | CHAR_ARRAY_02d03eb8
        ;   Label: LAB_00460844
    CALL shape_design.c_deletePolygonRange_FUN_0045dd70 ; 0046084b
        ;   XREF to: 0045dd70 (UNCONDITIONAL_CALL)  ; void shape_design.c_deletePolygonRange_FUN_0045dd70()
    CMP byte ptr [0x02d03eb8],0x0       ; 00460850 | CHAR_ARRAY_02d03eb8
        ;   Label: LAB_00460850
    JZ 0x00460862                       ; 00460857
        ;   XREF to: 00460862 (CONDITIONAL_JUMP)  ; LAB_00460862
    CMP dword ptr [0x016e990c],0x0      ; 00460859 | g_PolygonCount
    JG 0x00460864                       ; 00460860
        ;   XREF to: 00460864 (CONDITIONAL_JUMP)  ; LAB_00460864
    JMP 0x004608c2                      ; 00460862
        ;   XREF to: 004608c2 (UNCONDITIONAL_JUMP)  ; LAB_004608c2
        ;   Label: LAB_00460862
    MOV byte ptr [0x02d03eb8],0x0       ; 00460864 | CHAR_ARRAY_02d03eb8
        ;   Label: LAB_00460864
    CMP dword ptr [0x01e528b8],-0x1     ; 0046086b | g_SelectedPolygonIndex
    JNZ 0x0046087b                      ; 00460872
        ;   XREF to: 0046087b (CONDITIONAL_JUMP)  ; LAB_0046087b
    CALL shape_design.c_deleteSinglePolygon_FUN_0045dcc0 ; 00460874
        ;   XREF to: 0045dcc0 (UNCONDITIONAL_CALL)  ; void shape_design.c_deleteSinglePolygon_FUN_0045dcc0()
    JMP 0x004608c2                      ; 00460879
        ;   XREF to: 004608c2 (UNCONDITIONAL_JUMP)  ; LAB_004608c2
    MOV EAX,[0x01e528b8]                ; 0046087b | g_SelectedPolygonIndex
        ;   Label: LAB_0046087b
    MOV dword ptr [EBP + -0x34],EAX     ; 00460880
    JMP 0x0046088b                      ; 00460883
        ;   XREF to: 0046088b (UNCONDITIONAL_JUMP)  ; LAB_0046088b
    MOV EAX,dword ptr [EBP + -0x34]     ; 00460885
        ;   Label: LAB_00460885
    INC dword ptr [EBP + -0x34]         ; 00460888
    MOV EAX,[0x016e990c]                ; 0046088b | g_PolygonCount
        ;   Label: LAB_0046088b
    DEC EAX                             ; 00460890
    CMP EAX,dword ptr [EBP + -0x34]     ; 00460891
    JLE 0x004608bc                      ; 00460894
        ;   XREF to: 004608bc (CONDITIONAL_JUMP)  ; LAB_004608bc
    MOV EAX,dword ptr [EBP + -0x34]     ; 00460896
    INC EAX                             ; 00460899
    IMUL EAX,EAX,0x184                  ; 0046089a
    IMUL ESI,dword ptr [EBP + -0x34],0x184 ; 004608a0
    MOV ECX,0x61                        ; 004608a7
    LEA EDI,[ESI + 0x16e9910]           ; 004608ac | g_ModelPolygonData
    LEA ESI,[EAX + 0x16e9910]           ; 004608b2 | g_ModelPolygonData
    MOVSD.REP ES:EDI,ESI                ; 004608b8 | g_ModelPolygonData | g_ModelPolygonData[0].texture_name[0]
    JMP 0x00460885                      ; 004608ba
        ;   XREF to: 00460885 (UNCONDITIONAL_JUMP)  ; LAB_00460885
    DEC dword ptr [0x016e990c]          ; 004608bc | g_PolygonCount
        ;   Label: LAB_004608bc
    CMP byte ptr [0x02d03eb9],0x0       ; 004608c2 | CHAR_ARRAY_02d03eb9
        ;   Label: LAB_004608c2
    JZ 0x004608d4                       ; 004608c9
        ;   XREF to: 004608d4 (CONDITIONAL_JUMP)  ; LAB_004608d4
    CMP byte ptr [0x02d03ec2],0x0       ; 004608cb | CHAR_ARRAY_02d03ec2
    JZ 0x004608d6                       ; 004608d2
        ;   XREF to: 004608d6 (CONDITIONAL_JUMP)  ; LAB_004608d6
    JMP 0x004608eb                      ; 004608d4
        ;   XREF to: 004608eb (UNCONDITIONAL_JUMP)  ; LAB_004608eb
        ;   Label: LAB_004608d4
    MOV byte ptr [0x02d03eb9],0x0       ; 004608d6 | CHAR_ARRAY_02d03eb9
        ;   Label: LAB_004608d6
    CMP dword ptr [0x01e6614c],-0x1     ; 004608dd | g_CurrentPartIndex
    JZ 0x004608eb                       ; 004608e4
        ;   XREF to: 004608eb (CONDITIONAL_JUMP)  ; LAB_004608eb
    CALL shape_design.c_createPolygonFromVertexList_FUN_0045cc80 ; 004608e6
        ;   XREF to: 0045cc80 (UNCONDITIONAL_CALL)  ; void shape_design.c_createPolygonFromVertexList_FUN_0045cc80()
    CMP byte ptr [0x02d03eac],0x0       ; 004608eb | CHAR_ARRAY_02d03eac
        ;   Label: LAB_004608eb
    JZ 0x004608fd                       ; 004608f2
        ;   XREF to: 004608fd (CONDITIONAL_JUMP)  ; LAB_004608fd
    CMP byte ptr [0x02d03ec2],0x0       ; 004608f4 | CHAR_ARRAY_02d03ec2
    JNZ 0x004608ff                      ; 004608fb
        ;   XREF to: 004608ff (CONDITIONAL_JUMP)  ; LAB_004608ff
    JMP 0x0046090b                      ; 004608fd
        ;   XREF to: 0046090b (UNCONDITIONAL_JUMP)  ; LAB_0046090b
        ;   Label: LAB_004608fd
    MOV byte ptr [0x02d03eac],0x0       ; 004608ff | CHAR_ARRAY_02d03eac
        ;   Label: LAB_004608ff
    CALL shape_design.c_translateAllVerticesAlongAxis_FUN_0045ec90 ; 00460906
        ;   XREF to: 0045ec90 (UNCONDITIONAL_CALL)  ; void shape_design.c_translateAllVerticesAlongAxis_FUN_0045ec90()
    CMP byte ptr [0x02d03eac],0x0       ; 0046090b | CHAR_ARRAY_02d03eac
        ;   Label: LAB_0046090b
    JZ 0x00460920                       ; 00460912
        ;   XREF to: 00460920 (CONDITIONAL_JUMP)  ; LAB_00460920
    MOV byte ptr [0x02d03eac],0x0       ; 00460914 | CHAR_ARRAY_02d03eac
    CALL shape_design.c_doNothing3_FUN_0045ce00 ; 0046091b
        ;   XREF to: 0045ce00 (UNCONDITIONAL_CALL)  ; void shape_design.c_doNothing3_FUN_0045ce00()
    CMP byte ptr [0x02d03ebb],0x0       ; 00460920 | CHAR_ARRAY_02d03ebb
        ;   Label: LAB_00460920
    JZ 0x00460935                       ; 00460927
        ;   XREF to: 00460935 (CONDITIONAL_JUMP)  ; LAB_00460935
    MOV byte ptr [0x02d03ebb],0x0       ; 00460929 | CHAR_ARRAY_02d03ebb
    CALL shape_design.c_showFacetPartEditorHelp_FUN_00460ac0 ; 00460930
        ;   XREF to: 00460ac0 (UNCONDITIONAL_CALL)  ; void shape_design.c_showFacetPartEditorHelp_FUN_00460ac0()
    CMP byte ptr [0x02d03ec8],0x0       ; 00460935 | CHAR_ARRAY_02d03ec8
        ;   Label: LAB_00460935
    JZ 0x00460947                       ; 0046093c
        ;   XREF to: 00460947 (CONDITIONAL_JUMP)  ; LAB_00460947
    CMP byte ptr [0x02d03ec2],0x0       ; 0046093e | CHAR_ARRAY_02d03ec2
    JNZ 0x00460949                      ; 00460945
        ;   XREF to: 00460949 (CONDITIONAL_JUMP)  ; LAB_00460949
    JMP 0x00460955                      ; 00460947
        ;   XREF to: 00460955 (UNCONDITIONAL_JUMP)  ; LAB_00460955
        ;   Label: LAB_00460947
    MOV byte ptr [0x02d03ec8],0x0       ; 00460949 | CHAR_ARRAY_02d03ec8
        ;   Label: LAB_00460949
    CALL shape_design.c_centerVerticesAroundPoint_FUN_0045ea90 ; 00460950
        ;   XREF to: 0045ea90 (UNCONDITIONAL_CALL)  ; void shape_design.c_centerVerticesAroundPoint_FUN_0045ea90()
    CMP byte ptr [0x02d03ec8],0x0       ; 00460955 | CHAR_ARRAY_02d03ec8
        ;   Label: LAB_00460955
    JZ 0x00460967                       ; 0046095c
        ;   XREF to: 00460967 (CONDITIONAL_JUMP)  ; LAB_00460967
    CMP dword ptr [0x01e6614c],-0x1     ; 0046095e | g_CurrentPartIndex
    JNZ 0x00460969                      ; 00460965
        ;   XREF to: 00460969 (CONDITIONAL_JUMP)  ; LAB_00460969
    JMP 0x00460972                      ; 00460967
        ;   XREF to: 00460972 (UNCONDITIONAL_JUMP)  ; LAB_00460972
        ;   Label: LAB_00460967
    CMP byte ptr [0x02d03ec2],0x0       ; 00460969 | CHAR_ARRAY_02d03ec2
        ;   Label: LAB_00460969
    JZ 0x00460974                       ; 00460970
        ;   XREF to: 00460974 (CONDITIONAL_JUMP)  ; LAB_00460974
    JMP 0x00460980                      ; 00460972
        ;   XREF to: 00460980 (UNCONDITIONAL_JUMP)  ; LAB_00460980
        ;   Label: LAB_00460972
    MOV byte ptr [0x02d03ec8],0x0       ; 00460974 | CHAR_ARRAY_02d03ec8
        ;   Label: LAB_00460974
    CALL shape_design.c_createBoxPrimitive_FUN_0045e520 ; 0046097b
        ;   XREF to: 0045e520 (UNCONDITIONAL_CALL)  ; void shape_design.c_createBoxPrimitive_FUN_0045e520()
    CMP byte ptr [0x02d03ec5],0x0       ; 00460980 | CHAR_ARRAY_02d03ec5
        ;   Label: LAB_00460980
    JZ 0x004609b7                       ; 00460987
        ;   XREF to: 004609b7 (CONDITIONAL_JUMP)  ; LAB_004609b7
    MOV byte ptr [0x02d03ec5],0x0       ; 00460989 | CHAR_ARRAY_02d03ec5
    MOV EAX,dword ptr [EBP + -0x28]     ; 00460990
    PUSH EAX                            ; 00460993
    MOV EAX,dword ptr [EBP + -0x2c]     ; 00460994
    PUSH EAX                            ; 00460997
    MOV EAX,dword ptr [EBP + -0x48]     ; 00460998
    PUSH EAX                            ; 0046099b
    CALL shape_design.c_realignObject_FUN_0045ee70 ; 0046099c
        ;   XREF to: 0045ee70 (UNCONDITIONAL_CALL)  ; void shape_design.c_realignObject_FUN_0045ee70(int rotation_x, int rotation_y, int rotation_z)
    ADD ESP,0xc                         ; 004609a1
    MOV dword ptr [EBP + -0x28],0x0     ; 004609a4
    MOV EAX,dword ptr [EBP + -0x28]     ; 004609ab
    MOV dword ptr [EBP + -0x2c],EAX     ; 004609ae
    MOV EAX,dword ptr [EBP + -0x2c]     ; 004609b1
    MOV dword ptr [EBP + -0x48],EAX     ; 004609b4
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004609b7
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   Label: LAB_004609b7
    MOV dword ptr [EBP + -0x34],EAX     ; 004609bc
    MOV EDX,dword ptr [EBP + -0x34]     ; 004609bf
    SUB EDX,dword ptr [EBP + -0x8]      ; 004609c2
    MOV ECX,0x12                        ; 004609c5
    MOV EAX,EDX                         ; 004609ca
    SAR EDX,0x1f                        ; 004609cc
    IDIV ECX                            ; 004609cf
    MOV [0x02cf6a80],EAX                ; 004609d1 | g_GlobalDeltaTimeInt
    MOV EAX,dword ptr [EBP + -0x34]     ; 004609d6
    MOV dword ptr [EBP + -0x8],EAX      ; 004609d9
    CMP byte ptr [0x02d03e99],0x0       ; 004609dc | CHAR_ARRAY_02d03e99
    JNZ 0x004609ea                      ; 004609e3
        ;   XREF to: 004609ea (CONDITIONAL_JUMP)  ; LAB_004609ea
    JMP 0x0045f320                      ; 004609e5
        ;   XREF to: 0045f320 (UNCONDITIONAL_JUMP)  ; LAB_0045f320
    CALL engine_2d.c_reinitializeGraphicsSystem_FUN_00402a80 ; 004609ea
        ;   XREF to: 00402a80 (UNCONDITIONAL_CALL)  ; void engine_2d.c_reinitializeGraphicsSystem_FUN_00402a80()
        ;   Label: LAB_004609ea
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004609ef
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV EAX,dword ptr [EBP + -0x14]     ; 004609f4
    MOV [0x006793c0],EAX                ; 004609f7 | g_ProjectionScale
    MOV EAX,dword ptr [EBP + -0x24]     ; 004609fc
    PUSH EAX                            ; 004609ff
    CALL engine_2d.c_setTextColor_FUN_00402840 ; 00460a00
        ;   XREF to: 00402840 (UNCONDITIONAL_CALL)  ; void engine_2d.c_setTextColor_FUN_00402840(int color)
    ADD ESP,0x4                         ; 00460a05
    MOV ESP,EBP                         ; 00460a08
        ;   Label: LAB_00460a08
    POP EBP                             ; 00460a0a
    POP EDI                             ; 00460a0b
    POP ESI                             ; 00460a0c
    POP EBX                             ; 00460a0d
    RET                                 ; 00460a0e

