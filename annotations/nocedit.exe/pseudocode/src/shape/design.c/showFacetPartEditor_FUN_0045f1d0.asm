; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_showFacetPartEditor_FUN_0045f1d0(void)
;
; Local Variables:
; undefined8       Stack[-0x108]:8  local_108
; undefined8       Stack[-0x100]:8  local_100
; undefined8       Stack[-0xf8]:8  local_f8
; undefined8       Stack[-0xf0]:8  local_f0
; undefined4       Stack[-0xe8]:4  local_e8
; undefined8       Stack[-0xe4]:8  local_e4
; undefined4       Stack[-0xdc]:4  local_dc
; undefined8       Stack[-0xd8]:8  local_d8
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined1       Stack[-0xb8]:1  local_b8
; undefined1       Stack[-0x68]:1  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
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
;   ... and 120 more
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
;   engine_2d.c_resetGraphicsSystem_FUN_005ed2a0
;   engine_2d.c_setTextColor_FUN_00402840
;   engine_3d.c_processCameraRelativePoint_FUN_004037e0
;   engine_light.cpp_setAmbientLightLevel_FUN_00505490
;   engine_light.cpp_setDirectionalLightVector_FUN_005054d0
;   engine_matrix.c_matrixPushAndTransform_FUN_0050cee0
;   engine_matrix.c_pop_FUN_0050d720
;   ... and 24 more
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
    FMUL double ptr [0x0061b70e]        ; 0045f1f4 | double g_FacetPi
    FMUL double ptr [0x0061b716]        ; 0045f1fa | double g_FacetDegreesToRadiansScale
    FMUL double ptr [0x0061b71e]        ; 0045f200 | double g_FacetHalfScale
    FPTAN                               ; 0045f206
    FSTP ST0                            ; 0045f208
    FILD dword ptr [0x00679394]         ; 0045f20a | int g_WindowWidth
    FMUL double ptr [0x0061b71e]        ; 0045f210 | double g_FacetHalfScale
    FDIVRP                              ; 0045f216
    FSTP float ptr [EBP + -0x18]        ; 0045f218
    FLD float ptr [EBP + -0x1c]         ; 0045f21b
    FMUL double ptr [0x0061b70e]        ; 0045f21e | double g_FacetPi
    FMUL double ptr [0x0061b716]        ; 0045f224 | double g_FacetDegreesToRadiansScale
    FMUL double ptr [0x0061b71e]        ; 0045f22a | double g_FacetHalfScale
    FPTAN                               ; 0045f230
    FSTP ST0                            ; 0045f232
    FILD dword ptr [0x00679398]         ; 0045f234 | int g_WindowHeight
    FMUL double ptr [0x0061b71e]        ; 0045f23a | double g_FacetHalfScale
    FDIVRP                              ; 0045f240
    FSTP float ptr [EBP + -0x4]         ; 0045f242
    FILD dword ptr [0x00679394]         ; 0045f245 | int g_WindowWidth
    FMUL double ptr [0x0061b71e]        ; 0045f24b | double g_FacetHalfScale
    FLD float ptr [EBP + -0x18]         ; 0045f251
    FDIVRP                              ; 0045f254
    FMUL double ptr [0x0061b726]        ; 0045f256 | double g_FacetFixedPointScale
    FSTP float ptr [EBP + -0x10]        ; 0045f25c
    FILD dword ptr [0x00679398]         ; 0045f25f | int g_WindowHeight
    FMUL double ptr [0x0061b71e]        ; 0045f265 | double g_FacetHalfScale
    FLD float ptr [EBP + -0x4]          ; 0045f26b
    FDIVRP                              ; 0045f26e
    FMUL double ptr [0x0061b726]        ; 0045f270 | double g_FacetFixedPointScale
    FSTP float ptr [EBP + -0x38]        ; 0045f276
    CALL shape_design.c_checkVertexCountLimit_FUN_00460a10 ; 0045f279 | int shape_design.c_checkVertexCountLimit_FUN_00460a10()
        ;   XREF to: 00460a10 (UNCONDITIONAL_CALL)
    TEST EAX,EAX                        ; 0045f27e
    JZ 0x0045f287                       ; 0045f280 | LAB_0045f287
        ;   XREF to: 0045f287 (CONDITIONAL_JUMP)
    JMP 0x00460a08                      ; 0045f282 | LAB_00460a08
        ;   XREF to: 00460a08 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x48],0x0     ; 0045f287
        ;   Label: LAB_0045f287
    MOV dword ptr [EBP + -0x2c],0x0     ; 0045f28e
    MOV dword ptr [EBP + -0x28],0x0     ; 0045f295
    MOV dword ptr [EBP + -0x3c],0x0     ; 0045f29c
    MOV dword ptr [EBP + -0xc],0x0      ; 0045f2a3
    MOV dword ptr [EBP + -0x30],0xffff0000 ; 0045f2aa
    MOV EAX,[0x006793c0]                ; 0045f2b1 | int g_ProjectionScale
    MOV dword ptr [EBP + -0x14],EAX     ; 0045f2b6
    MOV dword ptr [0x006793c0],0x10000  ; 0045f2b9 | int g_ProjectionScale
    CALL engine_2d.c_getTextColor_FUN_00402830 ; 0045f2c3 | int engine_2d.c_getTextColor_FUN_00402830()
        ;   XREF to: 00402830 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + -0x24],EAX     ; 0045f2c8
    MOV EAX,[0x01626404]                ; 0045f2cb | int g_CurrentModelIndex
    SHL EAX,0x2                         ; 0045f2d0
    PUSH dword ptr [EAX + 0x16263e0]    ; 0045f2d3 | int * g_EditorColorIndices
    CALL engine_2d.c_setTextColor_FUN_00402840 ; 0045f2d9 | void engine_2d.c_setTextColor_FUN_00402840(int color)
        ;   XREF to: 00402840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045f2de
    MOV dword ptr [0x01e6614c],0xffffffff ; 0045f2e1 | int g_CurrentPartIndex
    MOV dword ptr [0x01e528b8],0xffffffff ; 0045f2eb | int g_SelectedPolygonIndex
    MOV dword ptr [0x01e528bc],0xffffffff ; 0045f2f5 | int g_SecondaryPolygonIndex
    CALL shape_design.c_calculateVertexNormals_FUN_0045be40 ; 0045f2ff | void shape_design.c_calculateVertexNormals_FUN_0045be40()
        ;   XREF to: 0045be40 (UNCONDITIONAL_CALL)
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0045f304 | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    CALL engine_2d.c_resetGraphicsSystem_FUN_005ed2a0 ; 0045f309 | void engine_2d.c_resetGraphicsSystem_FUN_005ed2a0()
        ;   XREF to: 00402a70 (UNCONDITIONAL_CALL)
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0045f30e | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0045f313 | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0045f318 | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + -0x8],EAX      ; 0045f31d
    CALL wincore_winrun.cpp_clearKeypresses_FUN_005f2e70 ; 0045f320 | void wincore_winrun.cpp_clearKeypresses_FUN_005f2e70()
        ;   Label: LAB_0045f320
        ;   XREF to: 005f2e70 (UNCONDITIONAL_CALL)
    CALL wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580 ; 0045f325 | void wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580()
        ;   XREF to: 005ed580 (UNCONDITIONAL_CALL)
    CALL wincore_windll.cpp_beginScene_FUN_005b7280 ; 0045f32a | int wincore_windll.cpp_beginScene_FUN_005b7280()
        ;   XREF to: 005b7280 (UNCONDITIONAL_CALL)
    CMP dword ptr [0x02d03e94],0x0      ; 0045f32f | int g_UseExternalRenderer
    JNZ 0x0045f33f                      ; 0045f336 | LAB_0045f33f
        ;   XREF to: 0045f33f (CONDITIONAL_JUMP)
    CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4 ; 0045f338 | void wincore_windll.cpp_clearZBuffer_FUN_005b3ed4()
        ;   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)
    JMP 0x0045f344                      ; 0045f33d | LAB_0045f344
        ;   XREF to: 0045f344 (UNCONDITIONAL_JUMP)
    CALL wincore_windll.cpp_clearZBuffer_FUN_005b7be0 ; 0045f33f | int wincore_windll.cpp_clearZBuffer_FUN_005b7be0()
        ;   Label: LAB_0045f33f
        ;   XREF to: 005b7be0 (UNCONDITIONAL_CALL)
    CMP dword ptr [0x02d03e94],0x0      ; 0045f344 | int g_UseExternalRenderer
        ;   Label: LAB_0045f344
    JNZ 0x0045f37a                      ; 0045f34b | LAB_0045f37a
        ;   XREF to: 0045f37a (CONDITIONAL_JUMP)
    MOV EAX,[0x01626404]                ; 0045f34d | int g_CurrentModelIndex
    SHL EAX,0x2                         ; 0045f352
    PUSH dword ptr [EAX + 0x16263c0]    ; 0045f355 | int * g_EditorBackgroundColors
    MOV EAX,[0x00679398]                ; 0045f35b | int g_WindowHeight
    DEC EAX                             ; 0045f360
    PUSH EAX                            ; 0045f361
    MOV EAX,[0x00679394]                ; 0045f362 | int g_WindowWidth
    DEC EAX                             ; 0045f367
    PUSH EAX                            ; 0045f368
    PUSH 0x0                            ; 0045f369
    PUSH 0x0                            ; 0045f36b
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 0045f36d | void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0045f372
    JMP 0x0045f412                      ; 0045f375 | LAB_0045f412
        ;   XREF to: 0045f412 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x02d02558]                ; 0045f37a | int g_ClipLeft
        ;   Label: LAB_0045f37a
    MOV dword ptr [EBP + 0xffffff48],EAX ; 0045f37f
    MOV dword ptr [0x02d02558],0x0      ; 0045f385 | int g_ClipLeft
    MOV EAX,[0x02d0255c]                ; 0045f38f | int g_ClipTop
    MOV dword ptr [EBP + 0xffffff4c],EAX ; 0045f394
    MOV dword ptr [0x02d0255c],0x0      ; 0045f39a | int g_ClipTop
    MOV EAX,[0x02d02560]                ; 0045f3a4 | int g_ClipRight
    MOV dword ptr [EBP + 0xffffff50],EAX ; 0045f3a9
    MOV EAX,[0x00679394]                ; 0045f3af | int g_WindowWidth
    DEC EAX                             ; 0045f3b4
    MOV [0x02d02560],EAX                ; 0045f3b5 | int g_ClipRight
    MOV EAX,[0x02d02564]                ; 0045f3ba | int g_ClipBottom
    MOV dword ptr [EBP + 0xffffff54],EAX ; 0045f3bf
    MOV EAX,[0x00679398]                ; 0045f3c5 | int g_WindowHeight
    DEC EAX                             ; 0045f3ca
    MOV [0x02d02564],EAX                ; 0045f3cb | int g_ClipBottom
    MOV EAX,[0x01626404]                ; 0045f3d0 | int g_CurrentModelIndex
    SHL EAX,0x2                         ; 0045f3d5
    PUSH dword ptr [EAX + 0x16263c0]    ; 0045f3d8 | int * g_EditorBackgroundColors
    CALL wincore_windll.cpp_drawFullScreenQuad_FUN_005b7a50 ; 0045f3de | int wincore_windll.cpp_drawFullScreenQuad_FUN_005b7a50(int color)
        ;   XREF to: 005b7a50 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045f3e3
    MOV EAX,dword ptr [EBP + 0xffffff48] ; 0045f3e6
    MOV [0x02d02558],EAX                ; 0045f3ec | int g_ClipLeft
    MOV EAX,dword ptr [EBP + 0xffffff4c] ; 0045f3f1
    MOV [0x02d0255c],EAX                ; 0045f3f7 | int g_ClipTop
    MOV EAX,dword ptr [EBP + 0xffffff50] ; 0045f3fc
    MOV [0x02d02560],EAX                ; 0045f402 | int g_ClipRight
    MOV EAX,dword ptr [EBP + 0xffffff54] ; 0045f407
    MOV [0x02d02564],EAX                ; 0045f40d | int g_ClipBottom
    PUSH 0xb4fd                         ; 0045f412
        ;   Label: LAB_0045f412
    PUSH 0xffff4b03                     ; 0045f417
    PUSH 0x0                            ; 0045f41c
    CALL engine_light.cpp_setDirectionalLightVector_FUN_005054d0 ; 0045f41e | void engine_light.cpp_setDirectionalLightVector_FUN_005054d0(int dir_x, int dir_y, int dir_z)
        ;   XREF to: 005054d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045f423
    PUSH 0x7d00                         ; 0045f426
    CALL engine_light.cpp_setAmbientLightLevel_FUN_00505490 ; 0045f42b | void engine_light.cpp_setAmbientLightLevel_FUN_00505490(int light_level)
        ;   XREF to: 00505490 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045f430
    PUSH 0x0                            ; 0045f433
    PUSH 0x0                            ; 0045f435
    PUSH 0x0                            ; 0045f437
    CALL engine_matrix.c_setCameraRotation_FUN_0050e290 ; 0045f439 | void engine_matrix.c_setCameraRotation_FUN_0050e290(ushort pitch, ushort yaw, ushort roll)
        ;   XREF to: 0050e290 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045f43e
    MOV EAX,dword ptr [EBP + -0x30]     ; 0045f441
    PUSH EAX                            ; 0045f444
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045f445
    PUSH EAX                            ; 0045f448
    MOV EAX,dword ptr [EBP + -0x3c]     ; 0045f449
    PUSH EAX                            ; 0045f44c
    CALL engine_matrix.c_setCameraOrigin_FUN_0050e270 ; 0045f44d | void engine_matrix.c_setCameraOrigin_FUN_0050e270(int x, int y, int z)
        ;   XREF to: 0050e270 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045f452
    MOV dword ptr [EBP + -0x54],0x0     ; 0045f455
    MOV dword ptr [EBP + -0x50],0x0     ; 0045f45c
    MOV dword ptr [EBP + -0x4c],0x0     ; 0045f463
    LEA EAX,[EBP + -0x58]               ; 0045f46a
    PUSH EAX                            ; 0045f46d
    CALL engine_3d.c_processCameraRelativePoint_FUN_004037e0 ; 0045f46e | SMRGLHeaderExtended * engine_3d.c_processCameraRelativePoint_FUN_004037e0(CQuaternion4f * input_point)
        ;   XREF to: 004037e0 (UNCONDITIONAL_CALL)
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
    CALL engine_matrix.c_matrixPushAndTransform_FUN_0050cee0 ; 0045f488 | void engine_matrix.c_matrixPushAndTransform_FUN_0050cee0(ushort rotX, ushort rotY, ushort rotZ, int translateX, ...)
        ;   XREF to: 0050cee0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 0045f48d
    CMP dword ptr [0x015c4834],0x0      ; 0045f490 | int g_WireframeMode
    JZ 0x0045f543                       ; 0045f497 | LAB_0045f543
        ;   XREF to: 0045f543 (CONDITIONAL_JUMP)
    FLD float ptr [EBP + -0x10]         ; 0045f49d
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045f4a0 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + 0xffffff40]  ; 0045f4a5
    FLD float ptr [EBP + -0x38]         ; 0045f4ab
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045f4ae | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + 0xffffff44]  ; 0045f4b3
    MOV EAX,dword ptr [EBP + 0xffffff40] ; 0045f4b9
    MOV EDX,dword ptr [0x02d052e8]      ; 0045f4bf | CMatrix3x3i g_TransformMatrix
    IMUL EDX                            ; 0045f4c5
    SHRD EAX,EDX,0x10                   ; 0045f4c7
    MOV [0x02d052e8],EAX                ; 0045f4cb | CMatrix3x3i g_TransformMatrix
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
    CALL shape_design.c_processVerticesAndRenderPolygons_FUN_0045d5d0 ; 0045f543 | void shape_design.c_processVerticesAndRenderPolygons_FUN_0045d5d0()
        ;   Label: LAB_0045f543
        ;   XREF to: 0045d5d0 (UNCONDITIONAL_CALL)
    CALL wincore_windll.cpp_endScene_FUN_005b72a0 ; 0045f548 | int wincore_windll.cpp_endScene_FUN_005b72a0()
        ;   XREF to: 005b72a0 (UNCONDITIONAL_CALL)
    CALL wincore_windll.cpp_lockFrame_FUN_005b7210 ; 0045f54d | int wincore_windll.cpp_lockFrame_FUN_005b7210()
        ;   XREF to: 005b7210 (UNCONDITIONAL_CALL)
    CALL shape_design.c_renderEditorBackgroundOverlay_FUN_0045d920 ; 0045f552 | void shape_design.c_renderEditorBackgroundOverlay_FUN_0045d920()
        ;   XREF to: 0045d920 (UNCONDITIONAL_CALL)
    CALL shape_design.c_renderVertexPointsWithLabels_FUN_0045bff0 ; 0045f557 | void shape_design.c_renderVertexPointsWithLabels_FUN_0045bff0()
        ;   XREF to: 0045bff0 (UNCONDITIONAL_CALL)
    PUSH dword ptr [0x01e528b8]         ; 0045f55c | int g_SelectedPolygonIndex
    CALL shape_design.c_renderPolygonVerticesWithLabels_FUN_0045c2f0 ; 0045f562 | void shape_design.c_renderPolygonVerticesWithLabels_FUN_0045c2f0(int polygon_index)
        ;   XREF to: 0045c2f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045f567
    MOV EAX,0x1                         ; 0045f56a
    SUB EAX,dword ptr [0x01e528ac]      ; 0045f56f | int g_SelectionBlinkTimer
    MOV [0x01e528ac],EAX                ; 0045f575 | int g_SelectionBlinkTimer
    CMP byte ptr [0x02d03ea5],0x0       ; 0045f57a | CHAR_ARRAY_02d03ea5
    JZ 0x0045f5aa                       ; 0045f581 | LAB_0045f5aa
        ;   XREF to: 0045f5aa (CONDITIONAL_JUMP)
    MOV byte ptr [0x02d03ea5],0x0       ; 0045f583 | CHAR_ARRAY_02d03ea5
    SUB dword ptr [0x006793c0],0x1000   ; 0045f58a | int g_ProjectionScale
    CMP dword ptr [0x006793c0],0x1000   ; 0045f594 | int g_ProjectionScale
    JGE 0x0045f5aa                      ; 0045f59e | LAB_0045f5aa
        ;   XREF to: 0045f5aa (CONDITIONAL_JUMP)
    MOV dword ptr [0x006793c0],0x1000   ; 0045f5a0 | int g_ProjectionScale
    CMP byte ptr [0x02d03ea4],0x0       ; 0045f5aa | CHAR_ARRAY_02d03ea4
        ;   Label: LAB_0045f5aa
    JZ 0x0045f5da                       ; 0045f5b1 | LAB_0045f5da
        ;   XREF to: 0045f5da (CONDITIONAL_JUMP)
    MOV byte ptr [0x02d03ea4],0x0       ; 0045f5b3 | CHAR_ARRAY_02d03ea4
    ADD dword ptr [0x006793c0],0x1000   ; 0045f5ba | int g_ProjectionScale
    CMP dword ptr [0x006793c0],0x1000000 ; 0045f5c4 | int g_ProjectionScale | DAT_01000000
    JLE 0x0045f5da                      ; 0045f5ce | LAB_0045f5da
        ;   XREF to: 0045f5da (CONDITIONAL_JUMP)
    MOV dword ptr [0x006793c0],0x1000000 ; 0045f5d0 | int g_ProjectionScale | DAT_01000000
    CMP byte ptr [0x02d03ed0],0x0       ; 0045f5da | CHAR_ARRAY_02d03ed0
        ;   Label: LAB_0045f5da
    JZ 0x0045f5f3                       ; 0045f5e1 | LAB_0045f5f3
        ;   XREF to: 0045f5f3 (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x44],0x20    ; 0045f5e3
    MOV dword ptr [EBP + -0x20],0x10    ; 0045f5ea
    JMP 0x0045f601                      ; 0045f5f1 | LAB_0045f601
        ;   XREF to: 0045f601 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x44],0x2     ; 0045f5f3
        ;   Label: LAB_0045f5f3
    MOV dword ptr [EBP + -0x20],0x2     ; 0045f5fa
    CMP byte ptr [0x02d03ec2],0x0       ; 0045f601 | CHAR_ARRAY_02d03ec2
        ;   Label: LAB_0045f601
    JNZ 0x0045f6cc                      ; 0045f608 | LAB_0045f6cc
        ;   XREF to: 0045f6cc (CONDITIONAL_JUMP)
    CMP byte ptr [0x02d03ee3],0x0       ; 0045f60e | DAT_02d03ee3
    JZ 0x0045f62b                       ; 0045f615 | LAB_0045f62b
        ;   XREF to: 0045f62b (CONDITIONAL_JUMP)
    MOV EAX,[0x02cf6a80]                ; 0045f617 | int g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x02cf6a80]      ; 0045f61c | int g_GlobalDeltaTimeInt
    SAR EDX,0x1f                        ; 0045f622
    IDIV dword ptr [EBP + -0x44]        ; 0045f625
    SUB dword ptr [EBP + -0x3c],EAX     ; 0045f628
    CMP byte ptr [0x02d03ee5],0x0       ; 0045f62b | CHAR_ARRAY_02d03ee5
        ;   Label: LAB_0045f62b
    JZ 0x0045f648                       ; 0045f632 | LAB_0045f648
        ;   XREF to: 0045f648 (CONDITIONAL_JUMP)
    MOV EAX,[0x02cf6a80]                ; 0045f634 | int g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x02cf6a80]      ; 0045f639 | int g_GlobalDeltaTimeInt
    SAR EDX,0x1f                        ; 0045f63f
    IDIV dword ptr [EBP + -0x44]        ; 0045f642
    ADD dword ptr [EBP + -0x3c],EAX     ; 0045f645
    CMP byte ptr [0x02d03ee0],0x0       ; 0045f648 | CHAR_ARRAY_02d03ee0
        ;   Label: LAB_0045f648
    JZ 0x0045f665                       ; 0045f64f | LAB_0045f665
        ;   XREF to: 0045f665 (CONDITIONAL_JUMP)
    MOV EAX,[0x02cf6a80]                ; 0045f651 | int g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x02cf6a80]      ; 0045f656 | int g_GlobalDeltaTimeInt
    SAR EDX,0x1f                        ; 0045f65c
    IDIV dword ptr [EBP + -0x44]        ; 0045f65f
    ADD dword ptr [EBP + -0x30],EAX     ; 0045f662
    CMP byte ptr [0x02d03ee8],0x0       ; 0045f665 | CHAR_ARRAY_02d03ee8
        ;   Label: LAB_0045f665
    JZ 0x0045f682                       ; 0045f66c | LAB_0045f682
        ;   XREF to: 0045f682 (CONDITIONAL_JUMP)
    MOV EAX,[0x02cf6a80]                ; 0045f66e | int g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x02cf6a80]      ; 0045f673 | int g_GlobalDeltaTimeInt
    SAR EDX,0x1f                        ; 0045f679
    IDIV dword ptr [EBP + -0x44]        ; 0045f67c
    SUB dword ptr [EBP + -0x30],EAX     ; 0045f67f
    CMP byte ptr [0x02d03ea8],0x0       ; 0045f682 | CHAR_ARRAY_02d03ea8
        ;   Label: LAB_0045f682
    JZ 0x0045f69f                       ; 0045f689 | LAB_0045f69f
        ;   XREF to: 0045f69f (CONDITIONAL_JUMP)
    MOV EAX,[0x02cf6a80]                ; 0045f68b | int g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x02cf6a80]      ; 0045f690 | int g_GlobalDeltaTimeInt
    SAR EDX,0x1f                        ; 0045f696
    IDIV dword ptr [EBP + -0x44]        ; 0045f699
    ADD dword ptr [EBP + -0xc],EAX      ; 0045f69c
    CMP byte ptr [0x02d03eb6],0x0       ; 0045f69f | CHAR_ARRAY_02d03eb6
        ;   Label: LAB_0045f69f
    JZ 0x0045f6b1                       ; 0045f6a6 | LAB_0045f6b1
        ;   XREF to: 0045f6b1 (CONDITIONAL_JUMP)
    CMP byte ptr [0x02d03eb5],0x0       ; 0045f6a8 | CHAR_ARRAY_02d03eb5
    JZ 0x0045f6b3                       ; 0045f6af | LAB_0045f6b3
        ;   XREF to: 0045f6b3 (CONDITIONAL_JUMP)
    JMP 0x0045f6c7                      ; 0045f6b1 | LAB_0045f6c7
        ;   Label: LAB_0045f6b1
        ;   XREF to: 0045f6c7 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x02cf6a80]                ; 0045f6b3 | int g_GlobalDeltaTimeInt
        ;   Label: LAB_0045f6b3
    MOV EDX,dword ptr [0x02cf6a80]      ; 0045f6b8 | int g_GlobalDeltaTimeInt
    SAR EDX,0x1f                        ; 0045f6be
    IDIV dword ptr [EBP + -0x44]        ; 0045f6c1
    SUB dword ptr [EBP + -0xc],EAX      ; 0045f6c4
    JMP 0x0045f77a                      ; 0045f6c7 | LAB_0045f77a
        ;   Label: LAB_0045f6c7
        ;   XREF to: 0045f77a (UNCONDITIONAL_JUMP)
    CMP byte ptr [0x02d03ee0],0x0       ; 0045f6cc | CHAR_ARRAY_02d03ee0
        ;   Label: LAB_0045f6cc
    JZ 0x0045f6e9                       ; 0045f6d3 | LAB_0045f6e9
        ;   XREF to: 0045f6e9 (CONDITIONAL_JUMP)
    MOV EAX,[0x02cf6a80]                ; 0045f6d5 | int g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x02cf6a80]      ; 0045f6da | int g_GlobalDeltaTimeInt
    SAR EDX,0x1f                        ; 0045f6e0
    IDIV dword ptr [EBP + -0x20]        ; 0045f6e3
    ADD dword ptr [EBP + -0x48],EAX     ; 0045f6e6
    CMP byte ptr [0x02d03ee8],0x0       ; 0045f6e9 | CHAR_ARRAY_02d03ee8
        ;   Label: LAB_0045f6e9
    JZ 0x0045f706                       ; 0045f6f0 | LAB_0045f706
        ;   XREF to: 0045f706 (CONDITIONAL_JUMP)
    MOV EAX,[0x02cf6a80]                ; 0045f6f2 | int g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x02cf6a80]      ; 0045f6f7 | int g_GlobalDeltaTimeInt
    SAR EDX,0x1f                        ; 0045f6fd
    IDIV dword ptr [EBP + -0x20]        ; 0045f700
    SUB dword ptr [EBP + -0x48],EAX     ; 0045f703
    CMP byte ptr [0x02d03ee3],0x0       ; 0045f706 | DAT_02d03ee3
        ;   Label: LAB_0045f706
    JZ 0x0045f723                       ; 0045f70d | LAB_0045f723
        ;   XREF to: 0045f723 (CONDITIONAL_JUMP)
    MOV EAX,[0x02cf6a80]                ; 0045f70f | int g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x02cf6a80]      ; 0045f714 | int g_GlobalDeltaTimeInt
    SAR EDX,0x1f                        ; 0045f71a
    IDIV dword ptr [EBP + -0x20]        ; 0045f71d
    SUB dword ptr [EBP + -0x28],EAX     ; 0045f720
    CMP byte ptr [0x02d03ee5],0x0       ; 0045f723 | CHAR_ARRAY_02d03ee5
        ;   Label: LAB_0045f723
    JZ 0x0045f740                       ; 0045f72a | LAB_0045f740
        ;   XREF to: 0045f740 (CONDITIONAL_JUMP)
    MOV EAX,[0x02cf6a80]                ; 0045f72c | int g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x02cf6a80]      ; 0045f731 | int g_GlobalDeltaTimeInt
    SAR EDX,0x1f                        ; 0045f737
    IDIV dword ptr [EBP + -0x20]        ; 0045f73a
    ADD dword ptr [EBP + -0x28],EAX     ; 0045f73d
    CMP byte ptr [0x02d03edf],0x0       ; 0045f740 | CHAR_ARRAY_02d03edf
        ;   Label: LAB_0045f740
    JZ 0x0045f75d                       ; 0045f747 | LAB_0045f75d
        ;   XREF to: 0045f75d (CONDITIONAL_JUMP)
    MOV EAX,[0x02cf6a80]                ; 0045f749 | int g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x02cf6a80]      ; 0045f74e | int g_GlobalDeltaTimeInt
    SAR EDX,0x1f                        ; 0045f754
    IDIV dword ptr [EBP + -0x20]        ; 0045f757
    ADD dword ptr [EBP + -0x2c],EAX     ; 0045f75a
    CMP byte ptr [0x02d03ee1],0x0       ; 0045f75d | CHAR_ARRAY_02d03ee1
        ;   Label: LAB_0045f75d
    JZ 0x0045f77a                       ; 0045f764 | LAB_0045f77a
        ;   XREF to: 0045f77a (CONDITIONAL_JUMP)
    MOV EAX,[0x02cf6a80]                ; 0045f766 | int g_GlobalDeltaTimeInt
    MOV EDX,dword ptr [0x02cf6a80]      ; 0045f76b | int g_GlobalDeltaTimeInt
    SAR EDX,0x1f                        ; 0045f771
    IDIV dword ptr [EBP + -0x20]        ; 0045f774
    SUB dword ptr [EBP + -0x2c],EAX     ; 0045f777
    CMP byte ptr [0x02d03eb6],0x0       ; 0045f77a | CHAR_ARRAY_02d03eb6
        ;   Label: LAB_0045f77a
    JZ 0x0045f78c                       ; 0045f781 | LAB_0045f78c
        ;   XREF to: 0045f78c (CONDITIONAL_JUMP)
    CMP byte ptr [0x02d03eb5],0x0       ; 0045f783 | CHAR_ARRAY_02d03eb5
    JNZ 0x0045f78e                      ; 0045f78a | LAB_0045f78e
        ;   XREF to: 0045f78e (CONDITIONAL_JUMP)
    JMP 0x0045f79a                      ; 0045f78c | LAB_0045f79a
        ;   Label: LAB_0045f78c
        ;   XREF to: 0045f79a (UNCONDITIONAL_JUMP)
    MOV byte ptr [0x02d03eb6],0x0       ; 0045f78e | CHAR_ARRAY_02d03eb6
        ;   Label: LAB_0045f78e
    CALL shape_design.c_clampAndTransformUVCoordinates_FUN_0045f080 ; 0045f795 | void shape_design.c_clampAndTransformUVCoordinates_FUN_0045f080()
        ;   XREF to: 0045f080 (UNCONDITIONAL_CALL)
    CMP byte ptr [0x02d03ee6],0x0       ; 0045f79a | CHAR_ARRAY_02d03ee6
        ;   Label: LAB_0045f79a
    JZ 0x0045f7d8                       ; 0045f7a1 | LAB_0045f7d8
        ;   XREF to: 0045f7d8 (CONDITIONAL_JUMP)
    ADD dword ptr [0x0066eda0],0x800    ; 0045f7a3 | int g_EditorDetailLevel
    CMP dword ptr [0x0066eda0],0xffff   ; 0045f7ad | int g_EditorDetailLevel
    JLE 0x0045f7c3                      ; 0045f7b7 | LAB_0045f7c3
        ;   XREF to: 0045f7c3 (CONDITIONAL_JUMP)
    MOV dword ptr [0x0066eda0],0xffff   ; 0045f7b9 | int g_EditorDetailLevel
    PUSH dword ptr [0x0066eda0]         ; 0045f7c3 | int g_EditorDetailLevel
        ;   Label: LAB_0045f7c3
    CALL engine_texture.cpp_doNothing_FUN_005dd8f0 ; 0045f7c9 | void engine_texture.cpp_doNothing_FUN_005dd8f0()
        ;   XREF to: 005dd8f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045f7ce
    MOV byte ptr [0x02d03ee6],0x0       ; 0045f7d1 | CHAR_ARRAY_02d03ee6
    CMP byte ptr [0x02d03ee2],0x0       ; 0045f7d8 | CHAR_ARRAY_02d03ee2
        ;   Label: LAB_0045f7d8
    JZ 0x0045f813                       ; 0045f7df | LAB_0045f813
        ;   XREF to: 0045f813 (CONDITIONAL_JUMP)
    SUB dword ptr [0x0066eda0],0x800    ; 0045f7e1 | int g_EditorDetailLevel
    CMP dword ptr [0x0066eda0],0x0      ; 0045f7eb | int g_EditorDetailLevel
    JGE 0x0045f7fe                      ; 0045f7f2 | LAB_0045f7fe
        ;   XREF to: 0045f7fe (CONDITIONAL_JUMP)
    MOV dword ptr [0x0066eda0],0x0      ; 0045f7f4 | int g_EditorDetailLevel
    PUSH dword ptr [0x0066eda0]         ; 0045f7fe | int g_EditorDetailLevel
        ;   Label: LAB_0045f7fe
    CALL engine_texture.cpp_doNothing_FUN_005dd8f0 ; 0045f804 | void engine_texture.cpp_doNothing_FUN_005dd8f0()
        ;   XREF to: 005dd8f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045f809
    MOV byte ptr [0x02d03ee2],0x0       ; 0045f80c | CHAR_ARRAY_02d03ee2
    CMP dword ptr [0x0066eda0],0xffff   ; 0045f813 | int g_EditorDetailLevel
        ;   Label: LAB_0045f813
    JGE 0x0045f872                      ; 0045f81d | LAB_0045f872
        ;   XREF to: 0045f872 (CONDITIONAL_JUMP)
    PUSH dword ptr [0x0066eda0]         ; 0045f81f | int g_EditorDetailLevel
    PUSH dword ptr [0x0066eda0]         ; 0045f825 | int g_EditorDetailLevel
    MOV EAX,0x61b72e                    ; 0045f82b | = "Detail : %04x / %05d" | s_Detail_04x_05d_0061b72e = Detail : %04x / %05d
    PUSH EAX                            ; 0045f830 | = "Detail : %04x / %05d" | s_Detail_04x_05d_0061b72e = Detail : %04x / %05d
    LEA EAX,[EBP + 0xffffff58]          ; 0045f831
    PUSH EAX                            ; 0045f837
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045f838 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0045f83d
    MOV EAX,[0x00679398]                ; 0045f840 | int g_WindowHeight
    SUB EAX,0x2c                        ; 0045f845
    PUSH EAX                            ; 0045f848
    MOV EAX,[0x00679394]                ; 0045f849 | int g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045f84e | int g_WindowWidth
    SAR EDX,0x1f                        ; 0045f854
    SHL EDX,0x2                         ; 0045f857
    SBB EAX,EDX                         ; 0045f85a
    SAR EAX,0x2                         ; 0045f85c
    ADD EAX,0x19                        ; 0045f85f
    PUSH EAX                            ; 0045f862
    LEA EAX,[EBP + 0xffffff58]          ; 0045f863
    PUSH EAX                            ; 0045f869
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045f86a | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045f86f
    MOV EAX,[0x01e528c8]                ; 0045f872 | int g_EditorTextureMode
        ;   Label: LAB_0045f872
    SHL EAX,0x5                         ; 0045f877
    MOV EDX,0x66ee08                    ; 0045f87a | = "Texture map" | s_Texture_map_0066ee08 = Texture map
    ADD EAX,EDX                         ; 0045f87f
    PUSH EAX                            ; 0045f881
    MOV EAX,0x61b743                    ; 0045f882 | = "Renderer : %s" | s_Renderer_s_0061b743 = Renderer : %s
    PUSH EAX                            ; 0045f887 | = "Renderer : %s" | s_Renderer_s_0061b743 = Renderer : %s
    LEA EAX,[EBP + 0xffffff58]          ; 0045f888
    PUSH EAX                            ; 0045f88e
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045f88f | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045f894
    MOV EAX,[0x00679398]                ; 0045f897 | int g_WindowHeight
    SUB EAX,0x21                        ; 0045f89c
    PUSH EAX                            ; 0045f89f
    MOV EAX,[0x00679394]                ; 0045f8a0 | int g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045f8a5 | int g_WindowWidth
    SAR EDX,0x1f                        ; 0045f8ab
    SHL EDX,0x2                         ; 0045f8ae
    SBB EAX,EDX                         ; 0045f8b1
    SAR EAX,0x2                         ; 0045f8b3
    ADD EAX,0x19                        ; 0045f8b6
    PUSH EAX                            ; 0045f8b9
    LEA EAX,[EBP + 0xffffff58]          ; 0045f8ba
    PUSH EAX                            ; 0045f8c0
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045f8c1 | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045f8c6
    CMP dword ptr [0x01e528c0],0x1      ; 0045f8c9 | int g_GouraudShadingEnabled
    JNZ 0x0045f905                      ; 0045f8d0 | LAB_0045f905
        ;   XREF to: 0045f905 (CONDITIONAL_JUMP)
    MOV EAX,[0x00679398]                ; 0045f8d2 | int g_WindowHeight
    SUB EAX,0x16                        ; 0045f8d7
    PUSH EAX                            ; 0045f8da
    MOV EAX,[0x00679394]                ; 0045f8db | int g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045f8e0 | int g_WindowWidth
    SAR EDX,0x1f                        ; 0045f8e6
    SHL EDX,0x2                         ; 0045f8e9
    SBB EAX,EDX                         ; 0045f8ec
    SAR EAX,0x2                         ; 0045f8ee
    ADD EAX,0x19                        ; 0045f8f1
    PUSH EAX                            ; 0045f8f4
    MOV EAX,0x61b751                    ; 0045f8f5 | = "Gouraud : on" | s_Gouraud_on_0061b751 = Gouraud : on
    PUSH EAX                            ; 0045f8fa | = "Gouraud : on" | s_Gouraud_on_0061b751 = Gouraud : on
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045f8fb | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045f900
    JMP 0x0045f936                      ; 0045f903 | LAB_0045f936
        ;   XREF to: 0045f936 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x00679398]                ; 0045f905 | int g_WindowHeight
        ;   Label: LAB_0045f905
    SUB EAX,0x16                        ; 0045f90a
    PUSH EAX                            ; 0045f90d
    MOV EAX,[0x00679394]                ; 0045f90e | int g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045f913 | int g_WindowWidth
    SAR EDX,0x1f                        ; 0045f919
    SHL EDX,0x2                         ; 0045f91c
    SBB EAX,EDX                         ; 0045f91f
    SAR EAX,0x2                         ; 0045f921
    ADD EAX,0x19                        ; 0045f924
    PUSH EAX                            ; 0045f927
    MOV EAX,0x61b75e                    ; 0045f928 | = "Gouraud : off" | s_Gouraud_off_0061b75e = Gouraud : off
    PUSH EAX                            ; 0045f92d | = "Gouraud : off" | s_Gouraud_off_0061b75e = Gouraud : off
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045f92e | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045f933
    MOV EAX,0x61b76c                    ; 0045f936 | = "Gouraud : off   " | s_Gouraud_off_0061b76c = Gouraud : off
        ;   Label: LAB_0045f936
    PUSH EAX                            ; 0045f93b | = "Gouraud : off   " | s_Gouraud_off_0061b76c = Gouraud : off
    CALL engine_2d.c_getStringWidth_FUN_004018a0 ; 0045f93c | int engine_2d.c_getStringWidth_FUN_004018a0(char * text)
        ;   XREF to: 004018a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045f941
    MOV dword ptr [EBP + -0x34],EAX     ; 0045f944
    CMP dword ptr [0x0066ee00],0x1      ; 0045f947 | int g_ZBufferEnabled
    JNZ 0x0045f986                      ; 0045f94e | LAB_0045f986
        ;   XREF to: 0045f986 (CONDITIONAL_JUMP)
    MOV EAX,[0x00679398]                ; 0045f950 | int g_WindowHeight
    SUB EAX,0x16                        ; 0045f955
    PUSH EAX                            ; 0045f958
    MOV EAX,[0x00679394]                ; 0045f959 | int g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045f95e | int g_WindowWidth
    SAR EDX,0x1f                        ; 0045f964
    SHL EDX,0x2                         ; 0045f967
    SBB EAX,EDX                         ; 0045f96a
    SAR EAX,0x2                         ; 0045f96c
    ADD EAX,0x19                        ; 0045f96f
    ADD EAX,dword ptr [EBP + -0x34]     ; 0045f972
    PUSH EAX                            ; 0045f975
    MOV EAX,0x61b77d                    ; 0045f976 | = "Z-buffer : on" | s_Z_buffer_on_0061b77d = Z-buffer : on
    PUSH EAX                            ; 0045f97b | = "Z-buffer : on" | s_Z_buffer_on_0061b77d = Z-buffer : on
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045f97c | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045f981
    JMP 0x0045f9ba                      ; 0045f984 | LAB_0045f9ba
        ;   XREF to: 0045f9ba (UNCONDITIONAL_JUMP)
    MOV EAX,[0x00679398]                ; 0045f986 | int g_WindowHeight
        ;   Label: LAB_0045f986
    SUB EAX,0x16                        ; 0045f98b
    PUSH EAX                            ; 0045f98e
    MOV EAX,[0x00679394]                ; 0045f98f | int g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045f994 | int g_WindowWidth
    SAR EDX,0x1f                        ; 0045f99a
    SHL EDX,0x2                         ; 0045f99d
    SBB EAX,EDX                         ; 0045f9a0
    SAR EAX,0x2                         ; 0045f9a2
    ADD EAX,0x19                        ; 0045f9a5
    ADD EAX,dword ptr [EBP + -0x34]     ; 0045f9a8
    PUSH EAX                            ; 0045f9ab
    MOV EAX,0x61b78b                    ; 0045f9ac | = "Z-buffer : off" | s_Z_buffer_off_0061b78b = Z-buffer : off
    PUSH EAX                            ; 0045f9b1 | = "Z-buffer : off" | s_Z_buffer_off_0061b78b = Z-buffer : off
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045f9b2 | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045f9b7
    CMP dword ptr [0x01e6614c],-0x1     ; 0045f9ba | int g_CurrentPartIndex
        ;   Label: LAB_0045f9ba
    JNZ 0x0045f9da                      ; 0045f9c1 | LAB_0045f9da
        ;   XREF to: 0045f9da (CONDITIONAL_JUMP)
    MOV EAX,0x61b79a                    ; 0045f9c3 | char s_EmptyChar_0061b79a
    PUSH EAX                            ; 0045f9c8 | char s_EmptyChar_0061b79a
    LEA EAX,[EBP + 0xffffff58]          ; 0045f9c9
    PUSH EAX                            ; 0045f9cf
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045f9d0 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045f9d5
    JMP 0x0045f9fe                      ; 0045f9d8 | LAB_0045f9fe
        ;   XREF to: 0045f9fe (UNCONDITIONAL_JUMP)
    IMUL EAX,dword ptr [0x01e6614c],0x14 ; 0045f9da | int g_CurrentPartIndex
        ;   Label: LAB_0045f9da
    MOV EDX,0x1e50190                   ; 0045f9e1 | SModelPartName[500] g_ModelPartNames
    ADD EAX,EDX                         ; 0045f9e6
    PUSH EAX                            ; 0045f9e8 | DAT_01e5017c
    MOV EAX,0x61b79b                    ; 0045f9e9 | = "Current part : %s" | s_Current_part_s_0061b79b = Current part : %s
    PUSH EAX                            ; 0045f9ee | = "Current part : %s" | s_Current_part_s_0061b79b = Current part : %s
    LEA EAX,[EBP + 0xffffff58]          ; 0045f9ef
    PUSH EAX                            ; 0045f9f5
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045f9f6 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045f9fb
    PUSH 0x0                            ; 0045f9fe
        ;   Label: LAB_0045f9fe
    PUSH 0x0                            ; 0045fa00
    LEA EAX,[EBP + 0xffffff58]          ; 0045fa02
    PUSH EAX                            ; 0045fa08
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045fa09 | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045fa0e
    MOV EAX,0x61b7ad                    ; 0045fa11 | = "Polygons" | s_Polygons_0061b7ad = Polygons
    PUSH EAX                            ; 0045fa16 | = "Polygons" | s_Polygons_0061b7ad = Polygons
    CALL engine_2d.c_getStringWidth_FUN_004018a0 ; 0045fa17 | int engine_2d.c_getStringWidth_FUN_004018a0(char * text)
        ;   XREF to: 004018a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045fa1c
    MOV dword ptr [EBP + -0x34],EAX     ; 0045fa1f
    MOV EAX,0x61b7b6                    ; 0045fa22 | = "Points" | s_Points_0061b7b6 = Points
    PUSH EAX                            ; 0045fa27 | = "Points" | s_Points_0061b7b6 = Points
    LEA EAX,[EBP + 0xffffff58]          ; 0045fa28
    PUSH EAX                            ; 0045fa2e
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045fa2f | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045fa34
    PUSH 0x0                            ; 0045fa37
    MOV EAX,[0x00679394]                ; 0045fa39 | int g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045fa3e | int g_WindowWidth
    SAR EDX,0x1f                        ; 0045fa44
    SUB EAX,EDX                         ; 0045fa47
    SAR EAX,0x1                         ; 0045fa49
    ADD EAX,0xa                         ; 0045fa4b
    PUSH EAX                            ; 0045fa4e
    LEA EAX,[EBP + 0xffffff58]          ; 0045fa4f
    PUSH EAX                            ; 0045fa55
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045fa56 | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045fa5b
    PUSH dword ptr [0x01626408]         ; 0045fa5e | int g_VertexCount
    MOV EAX,0x61b7bd                    ; 0045fa64 | = " : %d" | s_d_0061b7bd =  : %d
    PUSH EAX                            ; 0045fa69 | = " : %d" | s_d_0061b7bd =  : %d
    LEA EAX,[EBP + 0xffffff58]          ; 0045fa6a
    PUSH EAX                            ; 0045fa70
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045fa71 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045fa76
    PUSH 0x0                            ; 0045fa79
    MOV EAX,[0x00679394]                ; 0045fa7b | int g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045fa80 | int g_WindowWidth
    SAR EDX,0x1f                        ; 0045fa86
    SUB EAX,EDX                         ; 0045fa89
    SAR EAX,0x1                         ; 0045fa8b
    ADD EAX,0xa                         ; 0045fa8d
    ADD EAX,dword ptr [EBP + -0x34]     ; 0045fa90
    PUSH EAX                            ; 0045fa93
    LEA EAX,[EBP + 0xffffff58]          ; 0045fa94
    PUSH EAX                            ; 0045fa9a
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045fa9b | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045faa0
    MOV EAX,0x61b7c3                    ; 0045faa3 | = "Polygons" | s_Polygons_0061b7c3 = Polygons
    PUSH EAX                            ; 0045faa8 | = "Polygons" | s_Polygons_0061b7c3 = Polygons
    LEA EAX,[EBP + 0xffffff58]          ; 0045faa9
    PUSH EAX                            ; 0045faaf
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045fab0 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045fab5
    PUSH 0xb                            ; 0045fab8
    MOV EAX,[0x00679394]                ; 0045faba | int g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045fabf | int g_WindowWidth
    SAR EDX,0x1f                        ; 0045fac5
    SUB EAX,EDX                         ; 0045fac8
    SAR EAX,0x1                         ; 0045faca
    ADD EAX,0xa                         ; 0045facc
    PUSH EAX                            ; 0045facf
    LEA EAX,[EBP + 0xffffff58]          ; 0045fad0
    PUSH EAX                            ; 0045fad6
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045fad7 | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045fadc
    PUSH dword ptr [0x016e990c]         ; 0045fadf | int g_PolygonCount
    MOV EAX,0x61b7cc                    ; 0045fae5 | = " : %d" | s_d_0061b7cc =  : %d
    PUSH EAX                            ; 0045faea | = " : %d" | s_d_0061b7cc =  : %d
    LEA EAX,[EBP + 0xffffff58]          ; 0045faeb
    PUSH EAX                            ; 0045faf1
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045faf2 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045faf7
    PUSH 0xb                            ; 0045fafa
    MOV EAX,[0x00679394]                ; 0045fafc | int g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045fb01 | int g_WindowWidth
    SAR EDX,0x1f                        ; 0045fb07
    SUB EAX,EDX                         ; 0045fb0a
    SAR EAX,0x1                         ; 0045fb0c
    ADD EAX,0xa                         ; 0045fb0e
    ADD EAX,dword ptr [EBP + -0x34]     ; 0045fb11
    PUSH EAX                            ; 0045fb14
    LEA EAX,[EBP + 0xffffff58]          ; 0045fb15
    PUSH EAX                            ; 0045fb1b
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045fb1c | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045fb21
    MOV EAX,0x61b7d2                    ; 0045fb24 | = "Parts" | s_Parts_0061b7d2 = Parts
    PUSH EAX                            ; 0045fb29 | = "Parts" | s_Parts_0061b7d2 = Parts
    LEA EAX,[EBP + 0xffffff58]          ; 0045fb2a
    PUSH EAX                            ; 0045fb30
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045fb31 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045fb36
    PUSH 0x16                           ; 0045fb39
    MOV EAX,[0x00679394]                ; 0045fb3b | int g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045fb40 | int g_WindowWidth
    SAR EDX,0x1f                        ; 0045fb46
    SUB EAX,EDX                         ; 0045fb49
    SAR EAX,0x1                         ; 0045fb4b
    ADD EAX,0xa                         ; 0045fb4d
    PUSH EAX                            ; 0045fb50
    LEA EAX,[EBP + 0xffffff58]          ; 0045fb51
    PUSH EAX                            ; 0045fb57
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045fb58 | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045fb5d
    PUSH dword ptr [0x01e528a0]         ; 0045fb60 | int g_PartsCount
    MOV EAX,0x61b7d8                    ; 0045fb66 | = " : %d" | s_d_0061b7d8 =  : %d
    PUSH EAX                            ; 0045fb6b | = " : %d" | s_d_0061b7d8 =  : %d
    LEA EAX,[EBP + 0xffffff58]          ; 0045fb6c
    PUSH EAX                            ; 0045fb72
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045fb73 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045fb78
    PUSH 0x16                           ; 0045fb7b
    MOV EAX,[0x00679394]                ; 0045fb7d | int g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045fb82 | int g_WindowWidth
    SAR EDX,0x1f                        ; 0045fb88
    SUB EAX,EDX                         ; 0045fb8b
    SAR EAX,0x1                         ; 0045fb8d
    ADD EAX,0xa                         ; 0045fb8f
    ADD EAX,dword ptr [EBP + -0x34]     ; 0045fb92
    PUSH EAX                            ; 0045fb95
    LEA EAX,[EBP + 0xffffff58]          ; 0045fb96
    PUSH EAX                            ; 0045fb9c
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045fb9d | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045fba2
    CMP dword ptr [0x015c4834],0x0      ; 0045fba5 | int g_WireframeMode
    JZ 0x0045fbb9                       ; 0045fbac | LAB_0045fbb9
        ;   XREF to: 0045fbb9 (CONDITIONAL_JUMP)
    FLD float ptr [EBP + -0x1c]         ; 0045fbae
    FSTP double ptr [EBP + 0xffffff38]  ; 0045fbb1
    JMP 0x0045fbcd                      ; 0045fbb7 | LAB_0045fbcd
        ;   XREF to: 0045fbcd (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + 0xffffff38],0x0 ; 0045fbb9
        ;   Label: LAB_0045fbb9
    MOV dword ptr [EBP + 0xffffff3c],0x40568000 ; 0045fbc3
    PUSH dword ptr [EBP + 0xffffff3c]   ; 0045fbcd
        ;   Label: LAB_0045fbcd
    PUSH dword ptr [EBP + 0xffffff38]   ; 0045fbd3
    FILD dword ptr [0x006793c0]         ; 0045fbd9 | int g_ProjectionScale
    FDIVR double ptr [0x0061b7fe]       ; 0045fbdf | double DOUBLE_0061b7fe
    SUB ESP,0x8                         ; 0045fbe5
    FSTP double ptr [ESP]               ; 0045fbe8
    MOV EAX,0x61b7de                    ; 0045fbeb | = "Zoom : %4.2f  FOV : %4.1f" | s_Zoom_4_2f_FOV_4_1f_0061b7de = Zoom : %4.2f  FOV : %4.1f
    PUSH EAX                            ; 0045fbf0 | = "Zoom : %4.2f  FOV : %4.1f" | s_Zoom_4_2f_FOV_4_1f_0061b7de = Zoom : %4.2f  FOV : %4.1f
    LEA EAX,[EBP + 0xffffff58]          ; 0045fbf1
    PUSH EAX                            ; 0045fbf7
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045fbf8 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 0045fbfd
    PUSH 0x2c                           ; 0045fc00
    MOV EAX,[0x00679394]                ; 0045fc02 | int g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045fc07 | int g_WindowWidth
    SAR EDX,0x1f                        ; 0045fc0d
    SUB EAX,EDX                         ; 0045fc10
    SAR EAX,0x1                         ; 0045fc12
    ADD EAX,0xa                         ; 0045fc14
    PUSH EAX                            ; 0045fc17
    LEA EAX,[EBP + 0xffffff58]          ; 0045fc18
    PUSH EAX                            ; 0045fc1e
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045fc1f | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045fc24
    CMP byte ptr [0x02d03eab],0x0       ; 0045fc27 | CHAR_ARRAY_02d03eab
    JZ 0x0045fc39                       ; 0045fc2e | LAB_0045fc39
        ;   XREF to: 0045fc39 (CONDITIONAL_JUMP)
    CMP byte ptr [0x02d03eb5],0x0       ; 0045fc30 | CHAR_ARRAY_02d03eb5
    JNZ 0x0045fc3b                      ; 0045fc37 | LAB_0045fc3b
        ;   XREF to: 0045fc3b (CONDITIONAL_JUMP)
    JMP 0x0045fc5b                      ; 0045fc39 | LAB_0045fc5b
        ;   Label: LAB_0045fc39
        ;   XREF to: 0045fc5b (UNCONDITIONAL_JUMP)
    MOV byte ptr [0x02d03eab],0x0       ; 0045fc3b | CHAR_ARRAY_02d03eab
        ;   Label: LAB_0045fc3b
    INC dword ptr [0x01e528c8]          ; 0045fc42 | int g_EditorTextureMode
    CMP dword ptr [0x01e528c8],0x4      ; 0045fc48 | int g_EditorTextureMode
    JLE 0x0045fc5b                      ; 0045fc4f | LAB_0045fc5b
        ;   XREF to: 0045fc5b (CONDITIONAL_JUMP)
    MOV dword ptr [0x01e528c8],0x0      ; 0045fc51 | int g_EditorTextureMode
    CMP byte ptr [0x02d03eab],0x0       ; 0045fc5b | CHAR_ARRAY_02d03eab
        ;   Label: LAB_0045fc5b
    JZ 0x0045fc9f                       ; 0045fc62 | LAB_0045fc9f
        ;   XREF to: 0045fc9f (CONDITIONAL_JUMP)
    MOV byte ptr [0x02d03eab],0x0       ; 0045fc64 | CHAR_ARRAY_02d03eab
    MOV dword ptr [EBP + -0x48],0x0     ; 0045fc6b
    MOV dword ptr [EBP + -0x2c],0x0     ; 0045fc72
    MOV dword ptr [EBP + -0x28],0x0     ; 0045fc79
    MOV dword ptr [EBP + -0x3c],0x0     ; 0045fc80
    MOV dword ptr [EBP + -0xc],0x0      ; 0045fc87
    MOV dword ptr [EBP + -0x30],0xffff0000 ; 0045fc8e
    MOV dword ptr [0x006793c0],0x10000  ; 0045fc95 | int g_ProjectionScale
    CMP byte ptr [0x02d03ec6],0x0       ; 0045fc9f | CHAR_ARRAY_02d03ec6
        ;   Label: LAB_0045fc9f
    JZ 0x0045fcb1                       ; 0045fca6 | LAB_0045fcb1
        ;   XREF to: 0045fcb1 (CONDITIONAL_JUMP)
    CMP byte ptr [0x02d03eb5],0x0       ; 0045fca8 | CHAR_ARRAY_02d03eb5
    JNZ 0x0045fcb3                      ; 0045fcaf | LAB_0045fcb3
        ;   XREF to: 0045fcb3 (CONDITIONAL_JUMP)
    JMP 0x0045fceb                      ; 0045fcb1 | LAB_0045fceb
        ;   Label: LAB_0045fcb1
        ;   XREF to: 0045fceb (UNCONDITIONAL_JUMP)
    MOV byte ptr [0x02d03ec6],0x0       ; 0045fcb3 | CHAR_ARRAY_02d03ec6
        ;   Label: LAB_0045fcb3
    MOV EDX,dword ptr [0x01626404]      ; 0045fcba | int g_CurrentModelIndex
    INC EDX                             ; 0045fcc0
    MOV ECX,dword ptr [0x01626400]      ; 0045fcc1 | int g_ModelCount
    MOV EAX,EDX                         ; 0045fcc7
    SAR EDX,0x1f                        ; 0045fcc9
    IDIV ECX                            ; 0045fccc
    MOV dword ptr [0x01626404],EDX      ; 0045fcce | int g_CurrentModelIndex
    MOV EDX,dword ptr [0x01626404]      ; 0045fcd4 | int g_CurrentModelIndex
    SHL EDX,0x2                         ; 0045fcda
    PUSH dword ptr [EDX + 0x16263e0]    ; 0045fcdd | int * g_EditorColorIndices
    CALL engine_2d.c_setTextColor_FUN_00402840 ; 0045fce3 | void engine_2d.c_setTextColor_FUN_00402840(int color)
        ;   XREF to: 00402840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045fce8
    CMP byte ptr [0x02d03ec6],0x0       ; 0045fceb | CHAR_ARRAY_02d03ec6
        ;   Label: LAB_0045fceb
    JZ 0x0045fd14                       ; 0045fcf2 | LAB_0045fd14
        ;   XREF to: 0045fd14 (CONDITIONAL_JUMP)
    MOV byte ptr [0x02d03ec6],0x0       ; 0045fcf4 | CHAR_ARRAY_02d03ec6
    INC dword ptr [0x01626368]          ; 0045fcfb | int g_EditorColorIndex
    CMP dword ptr [0x01626368],0x10     ; 0045fd01 | int g_EditorColorIndex
    JL 0x0045fd14                       ; 0045fd08 | LAB_0045fd14
        ;   XREF to: 0045fd14 (CONDITIONAL_JUMP)
    MOV dword ptr [0x01626368],0x0      ; 0045fd0a | int g_EditorColorIndex
    MOV EAX,[0x01626368]                ; 0045fd14 | int g_EditorColorIndex
        ;   Label: LAB_0045fd14
    SHL EAX,0x2                         ; 0045fd19
    MOV EAX,dword ptr [EAX + 0x66e094]  ; 0045fd1c | int[16] g_ColorLookupTable
    MOV [0x02d02570],EAX                ; 0045fd22 | int g_ActiveRenderColor
    MOV EAX,[0x00679394]                ; 0045fd27 | int g_WindowWidth
    SUB EAX,0xa                         ; 0045fd2c
    MOV dword ptr [EBP + -0x34],EAX     ; 0045fd2f
    JMP 0x0045fd3a                      ; 0045fd32 | LAB_0045fd3a
        ;   XREF to: 0045fd3a (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x34]     ; 0045fd34
        ;   Label: LAB_0045fd34
    INC dword ptr [EBP + -0x34]         ; 0045fd37
    MOV EAX,dword ptr [EBP + -0x34]     ; 0045fd3a
        ;   Label: LAB_0045fd3a
    CMP EAX,dword ptr [0x00679394]      ; 0045fd3d | int g_WindowWidth
    JGE 0x0045fd77                      ; 0045fd43 | LAB_0045fd77
        ;   XREF to: 0045fd77 (CONDITIONAL_JUMP)
    MOV EAX,[0x00679398]                ; 0045fd45 | int g_WindowHeight
    SUB EAX,0xa                         ; 0045fd4a
    MOV dword ptr [EBP + -0x40],EAX     ; 0045fd4d
    JMP 0x0045fd58                      ; 0045fd50 | LAB_0045fd58
        ;   XREF to: 0045fd58 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x40]     ; 0045fd52
        ;   Label: LAB_0045fd52
    INC dword ptr [EBP + -0x40]         ; 0045fd55
    MOV EAX,dword ptr [EBP + -0x40]     ; 0045fd58
        ;   Label: LAB_0045fd58
    CMP EAX,dword ptr [0x00679398]      ; 0045fd5b | int g_WindowHeight
    JGE 0x0045fd75                      ; 0045fd61 | LAB_0045fd75
        ;   XREF to: 0045fd75 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x40]     ; 0045fd63
    PUSH EAX                            ; 0045fd66
    MOV EAX,dword ptr [EBP + -0x34]     ; 0045fd67
    PUSH EAX                            ; 0045fd6a
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 0045fd6b | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045fd70
    JMP 0x0045fd52                      ; 0045fd73 | LAB_0045fd52
        ;   XREF to: 0045fd52 (UNCONDITIONAL_JUMP)
    JMP 0x0045fd34                      ; 0045fd75 | LAB_0045fd34
        ;   Label: LAB_0045fd75
        ;   XREF to: 0045fd34 (UNCONDITIONAL_JUMP)
    CMP byte ptr [0x02d03eac],0x0       ; 0045fd77 | CHAR_ARRAY_02d03eac
        ;   Label: LAB_0045fd77
    JZ 0x0045fd89                       ; 0045fd7e | LAB_0045fd89
        ;   XREF to: 0045fd89 (CONDITIONAL_JUMP)
    CMP byte ptr [0x02d03eb5],0x0       ; 0045fd80 | CHAR_ARRAY_02d03eb5
    JNZ 0x0045fd8b                      ; 0045fd87 | LAB_0045fd8b
        ;   XREF to: 0045fd8b (CONDITIONAL_JUMP)
    JMP 0x0045fdab                      ; 0045fd89 | LAB_0045fdab
        ;   Label: LAB_0045fd89
        ;   XREF to: 0045fdab (UNCONDITIONAL_JUMP)
    MOV byte ptr [0x02d03eac],0x0       ; 0045fd8b | CHAR_ARRAY_02d03eac
        ;   Label: LAB_0045fd8b
    INC dword ptr [0x0066edf8]          ; 0045fd92 | int g_EditorColorMode
    CMP dword ptr [0x0066edf8],0x10     ; 0045fd98 | int g_EditorColorMode
    JL 0x0045fdab                       ; 0045fd9f | LAB_0045fdab
        ;   XREF to: 0045fdab (CONDITIONAL_JUMP)
    MOV dword ptr [0x0066edf8],0x0      ; 0045fda1 | int g_EditorColorMode
    CMP byte ptr [0x02d03eb0],0x0       ; 0045fdab | CHAR_ARRAY_02d03eb0
        ;   Label: LAB_0045fdab
    JZ 0x0045fdbd                       ; 0045fdb2 | LAB_0045fdbd
        ;   XREF to: 0045fdbd (CONDITIONAL_JUMP)
    CMP byte ptr [0x02d03eb5],0x0       ; 0045fdb4 | CHAR_ARRAY_02d03eb5
    JNZ 0x0045fdbf                      ; 0045fdbb | LAB_0045fdbf
        ;   XREF to: 0045fdbf (CONDITIONAL_JUMP)
    JMP 0x0045fde0                      ; 0045fdbd | LAB_0045fde0
        ;   Label: LAB_0045fdbd
        ;   XREF to: 0045fde0 (UNCONDITIONAL_JUMP)
    MOV byte ptr [0x02d03eb0],0x0       ; 0045fdbf | CHAR_ARRAY_02d03eb0
        ;   Label: LAB_0045fdbf
    MOV EDX,dword ptr [0x0066edfc]      ; 0045fdc6 | int g_EditorCurrentTexture
    INC EDX                             ; 0045fdcc
    MOV ECX,dword ptr [0x01626400]      ; 0045fdcd | int g_ModelCount
    MOV EAX,EDX                         ; 0045fdd3
    SAR EDX,0x1f                        ; 0045fdd5
    IDIV ECX                            ; 0045fdd8
    MOV dword ptr [0x0066edfc],EDX      ; 0045fdda | int g_EditorCurrentTexture
    CMP byte ptr [0x02d03eb9],0x0       ; 0045fde0 | CHAR_ARRAY_02d03eb9
        ;   Label: LAB_0045fde0
    JZ 0x0045fdf2                       ; 0045fde7 | LAB_0045fdf2
        ;   XREF to: 0045fdf2 (CONDITIONAL_JUMP)
    CMP byte ptr [0x02d03ec2],0x0       ; 0045fde9 | CHAR_ARRAY_02d03ec2
    JNZ 0x0045fdf4                      ; 0045fdf0 | LAB_0045fdf4
        ;   XREF to: 0045fdf4 (CONDITIONAL_JUMP)
    JMP 0x0045fe0b                      ; 0045fdf2 | LAB_0045fe0b
        ;   Label: LAB_0045fdf2
        ;   XREF to: 0045fe0b (UNCONDITIONAL_JUMP)
    MOV byte ptr [0x02d03eb9],0x0       ; 0045fdf4 | CHAR_ARRAY_02d03eb9
        ;   Label: LAB_0045fdf4
    MOV EAX,0x1                         ; 0045fdfb
    SUB EAX,dword ptr [0x015c4834]      ; 0045fe00 | int g_WireframeMode
    MOV [0x015c4834],EAX                ; 0045fe06 | int g_WireframeMode
    CMP byte ptr [0x02d03ecc],0x0       ; 0045fe0b | CHAR_ARRAY_02d03ecc
        ;   Label: LAB_0045fe0b
    JZ 0x0045fe5d                       ; 0045fe12 | LAB_0045fe5d
        ;   XREF to: 0045fe5d (CONDITIONAL_JUMP)
    MOV byte ptr [0x02d03ecc],0x0       ; 0045fe14 | CHAR_ARRAY_02d03ecc
    CMP byte ptr [0x02d03eb5],0x0       ; 0045fe1b | CHAR_ARRAY_02d03eb5
    JNZ 0x0045fe43                      ; 0045fe22 | LAB_0045fe43
        ;   XREF to: 0045fe43 (CONDITIONAL_JUMP)
    INC dword ptr [0x01e528b8]          ; 0045fe24 | int g_SelectedPolygonIndex
    MOV EAX,[0x01e528b8]                ; 0045fe2a | int g_SelectedPolygonIndex
    CMP EAX,dword ptr [0x016e990c]      ; 0045fe2f | int g_PolygonCount
    JL 0x0045fe41                       ; 0045fe35 | LAB_0045fe41
        ;   XREF to: 0045fe41 (CONDITIONAL_JUMP)
    MOV dword ptr [0x01e528b8],0xffffffff ; 0045fe37 | int g_SelectedPolygonIndex
    JMP 0x0045fe5d                      ; 0045fe41 | LAB_0045fe5d
        ;   Label: LAB_0045fe41
        ;   XREF to: 0045fe5d (UNCONDITIONAL_JUMP)
    DEC dword ptr [0x01e528b8]          ; 0045fe43 | int g_SelectedPolygonIndex
        ;   Label: LAB_0045fe43
    CMP dword ptr [0x01e528b8],0x0      ; 0045fe49 | int g_SelectedPolygonIndex
    JGE 0x0045fe5d                      ; 0045fe50 | LAB_0045fe5d
        ;   XREF to: 0045fe5d (CONDITIONAL_JUMP)
    MOV EAX,[0x016e990c]                ; 0045fe52 | int g_PolygonCount
    DEC EAX                             ; 0045fe57
    MOV [0x01e528b8],EAX                ; 0045fe58 | int g_SelectedPolygonIndex
    CMP byte ptr [0x0066eda8],0x0       ; 0045fe5d | char[80] g_LoadedModelName
        ;   Label: LAB_0045fe5d
    JNZ 0x0045fe7d                      ; 0045fe64 | LAB_0045fe7d
        ;   XREF to: 0045fe7d (CONDITIONAL_JUMP)
    MOV EAX,0x61b806                    ; 0045fe66 | = "No model loaded" | s_No_model_loaded_0061b806 = No model loaded
    PUSH EAX                            ; 0045fe6b | = "No model loaded" | s_No_model_loaded_0061b806 = No model loaded
    LEA EAX,[EBP + 0xffffff58]          ; 0045fe6c
    PUSH EAX                            ; 0045fe72
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045fe73 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045fe78
    JMP 0x0045fe98                      ; 0045fe7b | LAB_0045fe98
        ;   XREF to: 0045fe98 (UNCONDITIONAL_JUMP)
    MOV EAX,0x66eda8                    ; 0045fe7d | char[80] g_LoadedModelName
        ;   Label: LAB_0045fe7d
    PUSH EAX                            ; 0045fe82 | char[80] g_LoadedModelName
    MOV EAX,0x61b816                    ; 0045fe83 | = "%s" | s_s_0061b816 = %s
    PUSH EAX                            ; 0045fe88 | = "%s" | s_s_0061b816 = %s
    LEA EAX,[EBP + 0xffffff58]          ; 0045fe89
    PUSH EAX                            ; 0045fe8f
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045fe90 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045fe95
    MOV EAX,[0x00679398]                ; 0045fe98 | int g_WindowHeight
        ;   Label: LAB_0045fe98
    SUB EAX,0x21                        ; 0045fe9d
    PUSH EAX                            ; 0045fea0
    PUSH 0x0                            ; 0045fea1
    LEA EAX,[EBP + 0xffffff58]          ; 0045fea3
    PUSH EAX                            ; 0045fea9
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045feaa | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045feaf
    FILD dword ptr [EBP + -0x30]        ; 0045feb2
    FMUL double ptr [0x0061b846]        ; 0045feb5 | double g_CoordinateDisplayScale
    SUB ESP,0x8                         ; 0045febb
    FSTP double ptr [ESP]               ; 0045febe
    FILD dword ptr [EBP + -0xc]         ; 0045fec1
    FMUL double ptr [0x0061b846]        ; 0045fec4 | double g_CoordinateDisplayScale
    SUB ESP,0x8                         ; 0045feca
    FSTP double ptr [ESP]               ; 0045fecd
    FILD dword ptr [EBP + -0x3c]        ; 0045fed0
    FMUL double ptr [0x0061b846]        ; 0045fed3 | double g_CoordinateDisplayScale
    SUB ESP,0x8                         ; 0045fed9
    FSTP double ptr [ESP]               ; 0045fedc
    MOV EAX,0x61b819                    ; 0045fedf | = "X: %0.4f Y: %0.4f Z: %0.4f" | s_X_0_4f_Y_0_4f_Z_0_4f_0061b819 = X: %0.4f Y: %0.4f Z: %0.4f
    PUSH EAX                            ; 0045fee4 | = "X: %0.4f Y: %0.4f Z: %0.4f" | s_X_0_4f_Y_0_4f_Z_0_4f_0061b819 = X: %0.4f Y: %0.4f Z: %0.4f
    LEA EAX,[EBP + 0xffffff58]          ; 0045fee5
    PUSH EAX                            ; 0045feeb
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045feec | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x20                        ; 0045fef1
    MOV EAX,[0x00679398]                ; 0045fef4 | int g_WindowHeight
    SUB EAX,0xb                         ; 0045fef9
    PUSH EAX                            ; 0045fefc
    MOV EAX,[0x00679394]                ; 0045fefd | int g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045ff02 | int g_WindowWidth
    SAR EDX,0x1f                        ; 0045ff08
    SHL EDX,0x2                         ; 0045ff0b
    SBB EAX,EDX                         ; 0045ff0e
    SAR EAX,0x2                         ; 0045ff10
    ADD EAX,0x19                        ; 0045ff13
    PUSH EAX                            ; 0045ff16
    LEA EAX,[EBP + 0xffffff58]          ; 0045ff17
    PUSH EAX                            ; 0045ff1d
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045ff1e | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
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
    MOV EAX,0x61b834                    ; 0045ff41 | = "P: %x B: %x H: %x" | s_P_x_B_x_H_x_0061b834 = P: %x B: %x H: %x
    PUSH EAX                            ; 0045ff46 | = "P: %x B: %x H: %x" | s_P_x_B_x_H_x_0061b834 = P: %x B: %x H: %x
    LEA EAX,[EBP + 0xffffff58]          ; 0045ff47
    PUSH EAX                            ; 0045ff4d
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045ff4e | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0045ff53
    MOV EAX,[0x00679398]                ; 0045ff56 | int g_WindowHeight
    SUB EAX,0xb                         ; 0045ff5b
    PUSH EAX                            ; 0045ff5e
    PUSH 0x0                            ; 0045ff5f
    LEA EAX,[EBP + 0xffffff58]          ; 0045ff61
    PUSH EAX                            ; 0045ff67
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045ff68 | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045ff6d
    CMP dword ptr [0x01e528b8],-0x1     ; 0045ff70 | int g_SelectedPolygonIndex
    JNZ 0x0045ff90                      ; 0045ff77 | LAB_0045ff90
        ;   XREF to: 0045ff90 (CONDITIONAL_JUMP)
    MOV EAX,0x61b84e                    ; 0045ff79 | = "No polygon selected" | s_No_polygon_selected_0061b84e = No polygon selected
    PUSH EAX                            ; 0045ff7e | = "No polygon selected" | s_No_polygon_selected_0061b84e = No polygon selected
    LEA EAX,[EBP + 0xffffff58]          ; 0045ff7f
    PUSH EAX                            ; 0045ff85
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045ff86 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045ff8b
    JMP 0x0045ffab                      ; 0045ff8e | LAB_0045ffab
        ;   XREF to: 0045ffab (UNCONDITIONAL_JUMP)
    PUSH dword ptr [0x01e528b8]         ; 0045ff90 | int g_SelectedPolygonIndex
        ;   Label: LAB_0045ff90
    MOV EAX,0x61b862                    ; 0045ff96 | = "Selected polygon : %d" | s_Selected_polygon_d_0061b862 = Selected polygon : %d
    PUSH EAX                            ; 0045ff9b | = "Selected polygon : %d" | s_Selected_polygon_d_0061b862 = Selected polygon : %d
    LEA EAX,[EBP + 0xffffff58]          ; 0045ff9c
    PUSH EAX                            ; 0045ffa2
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045ffa3 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045ffa8
    MOV EAX,[0x00679398]                ; 0045ffab | int g_WindowHeight
        ;   Label: LAB_0045ffab
    SUB EAX,0x16                        ; 0045ffb0
    PUSH EAX                            ; 0045ffb3
    PUSH 0x0                            ; 0045ffb4
    LEA EAX,[EBP + 0xffffff58]          ; 0045ffb6
    PUSH EAX                            ; 0045ffbc
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045ffbd | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045ffc2
    CMP dword ptr [0x01e528b8],-0x1     ; 0045ffc5 | int g_SelectedPolygonIndex
    JZ 0x0046059b                       ; 0045ffcc | LAB_0046059b
        ;   XREF to: 0046059b (CONDITIONAL_JUMP)
    CMP byte ptr [0x02d03eae],0x0       ; 0045ffd2 | CHAR_ARRAY_02d03eae
    JZ 0x0045ffe4                       ; 0045ffd9 | LAB_0045ffe4
        ;   XREF to: 0045ffe4 (CONDITIONAL_JUMP)
    CMP byte ptr [0x02d03ec2],0x0       ; 0045ffdb | CHAR_ARRAY_02d03ec2
    JNZ 0x0045ffe6                      ; 0045ffe2 | LAB_0045ffe6
        ;   XREF to: 0045ffe6 (CONDITIONAL_JUMP)
    JMP 0x0045fff4                      ; 0045ffe4 | LAB_0045fff4
        ;   Label: LAB_0045ffe4
        ;   XREF to: 0045fff4 (UNCONDITIONAL_JUMP)
    MOV byte ptr [0x02d03eae],0x0       ; 0045ffe6 | CHAR_ARRAY_02d03eae
        ;   Label: LAB_0045ffe6
    XOR byte ptr [0x015c4838],0x1       ; 0045ffed | int g_ShowUVCoordinates
    CMP byte ptr [0x02d03eaf],0x0       ; 0045fff4 | CHAR_ARRAY_02d03eaf
        ;   Label: LAB_0045fff4
    JZ 0x00460006                       ; 0045fffb | LAB_00460006
        ;   XREF to: 00460006 (CONDITIONAL_JUMP)
    CMP byte ptr [0x02d03ec2],0x0       ; 0045fffd | CHAR_ARRAY_02d03ec2
    JNZ 0x00460008                      ; 00460004 | LAB_00460008
        ;   XREF to: 00460008 (CONDITIONAL_JUMP)
    JMP 0x00460016                      ; 00460006 | LAB_00460016
        ;   Label: LAB_00460006
        ;   XREF to: 00460016 (UNCONDITIONAL_JUMP)
    MOV byte ptr [0x02d03eaf],0x0       ; 00460008 | CHAR_ARRAY_02d03eaf
        ;   Label: LAB_00460008
    XOR byte ptr [0x015c483c],0x1       ; 0046000f | int g_ShowVertexCoordinates
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 00460016 | int g_SelectedPolygonIndex
        ;   Label: LAB_00460016
    PUSH dword ptr [EAX + 0x16e99b4]    ; 00460020 | DAT_016e9830
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 00460026 | int g_SelectedPolygonIndex
    PUSH dword ptr [EAX + 0x16e99d0]    ; 00460030 | DAT_016e984c
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 00460036 | int g_SelectedPolygonIndex
    PUSH dword ptr [EAX + 0x16e99cc]    ; 00460040 | DAT_016e9848
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 00460046 | int g_SelectedPolygonIndex
    PUSH dword ptr [EAX + 0x16e99c8]    ; 00460050 | DAT_016e9844
    MOV EAX,0x61b878                    ; 00460056 | = "V order : %3d %3d %3d   N : %d" | s_V_order_3d_3d_3d_N_d_0061b878 = V order : %3d %3d %3d   N : %d
    PUSH EAX                            ; 0046005b | = "V order : %3d %3d %3d   N : %d" | s_V_order_3d_3d_3d_N_d_0061b878 = V order : %3d %3d %3d   N : %d
    LEA EAX,[EBP + 0xffffff58]          ; 0046005c
    PUSH EAX                            ; 00460062
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00460063 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 00460068
    MOV EAX,[0x00679398]                ; 0046006b | int g_WindowHeight
    SUB EAX,0x16                        ; 00460070
    PUSH EAX                            ; 00460073
    MOV EAX,[0x00679394]                ; 00460074 | int g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 00460079 | int g_WindowWidth
    SAR EDX,0x1f                        ; 0046007f
    SUB EAX,EDX                         ; 00460082
    SAR EAX,0x1                         ; 00460084
    ADD EAX,0xa                         ; 00460086
    PUSH EAX                            ; 00460089
    LEA EAX,[EBP + 0xffffff58]          ; 0046008a
    PUSH EAX                            ; 00460090
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 00460091 | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00460096
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 00460099 | int g_SelectedPolygonIndex
    FLD float ptr [EAX + 0x16e99c0]     ; 004600a3 | DAT_016e983c
    SUB ESP,0x8                         ; 004600a9
    FSTP double ptr [ESP]               ; 004600ac
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 004600af | int g_SelectedPolygonIndex
    FLD float ptr [EAX + 0x16e99bc]     ; 004600b9 | DAT_016e9838
    SUB ESP,0x8                         ; 004600bf
    FSTP double ptr [ESP]               ; 004600c2
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 004600c5 | int g_SelectedPolygonIndex
    FLD float ptr [EAX + 0x16e99b8]     ; 004600cf | DAT_016e9834
    SUB ESP,0x8                         ; 004600d5
    FSTP double ptr [ESP]               ; 004600d8
    MOV EAX,0x61b897                    ; 004600db | = "Normal : %6.2f %6.2f %6.2f" | s_Normal_6_2f_6_2f_6_2f_0061b897 = Normal : %6.2f %6.2f %6.2f
    PUSH EAX                            ; 004600e0 | = "Normal : %6.2f %6.2f %6.2f" | s_Normal_6_2f_6_2f_6_2f_0061b897 = Normal : %6.2f %6.2f %6.2f
    LEA EAX,[EBP + 0xffffff58]          ; 004600e1
    PUSH EAX                            ; 004600e7
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004600e8 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x20                        ; 004600ed
    MOV EAX,[0x00679398]                ; 004600f0 | int g_WindowHeight
    SUB EAX,0xb                         ; 004600f5
    PUSH EAX                            ; 004600f8
    MOV EAX,[0x00679394]                ; 004600f9 | int g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 004600fe | int g_WindowWidth
    SAR EDX,0x1f                        ; 00460104
    SUB EAX,EDX                         ; 00460107
    SAR EAX,0x1                         ; 00460109
    ADD EAX,0xa                         ; 0046010b
    PUSH EAX                            ; 0046010e
    LEA EAX,[EBP + 0xffffff58]          ; 0046010f
    PUSH EAX                            ; 00460115
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 00460116 | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0046011b
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 0046011e | int g_SelectedPolygonIndex
    MOV EDX,0x16e9910                   ; 00460128 | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 0046012d
    PUSH EAX                            ; 0046012f | DAT_016e978c
    CALL shape_design.c_calculatePolygonAngularArea_FUN_00461ee0 ; 00460130 | double shape_design.c_calculatePolygonAngularArea_FUN_00461ee0(SShapeEditorPolygon * polygon_ptr)
        ;   XREF to: 00461ee0 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + 0xffffff2c],EAX ; 00460135
    MOV dword ptr [EBP + 0xffffff30],EDX ; 0046013b
    FLD double ptr [EBP + 0xffffff2c]   ; 00460141
    ADD ESP,0x4                         ; 00460147
    SUB ESP,0x8                         ; 0046014a
    FSTP double ptr [ESP]               ; 0046014d
    MOV EAX,0x61b8b2                    ; 00460150 | = "Angle sum : %10.6lf" | s_Angle_sum_10_6lf_0061b8b2 = Angle sum : %10.6lf
    PUSH EAX                            ; 00460155 | = "Angle sum : %10.6lf" | s_Angle_sum_10_6lf_0061b8b2 = Angle sum : %10.6lf
    LEA EAX,[EBP + 0xffffff58]          ; 00460156
    PUSH EAX                            ; 0046015c
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0046015d | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00460162
    MOV EAX,[0x00679398]                ; 00460165 | int g_WindowHeight
    SUB EAX,0x21                        ; 0046016a
    PUSH EAX                            ; 0046016d
    MOV EAX,[0x00679394]                ; 0046016e | int g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 00460173 | int g_WindowWidth
    SAR EDX,0x1f                        ; 00460179
    SUB EAX,EDX                         ; 0046017c
    SAR EAX,0x1                         ; 0046017e
    ADD EAX,0xa                         ; 00460180
    PUSH EAX                            ; 00460183
    LEA EAX,[EBP + 0xffffff58]          ; 00460184
    PUSH EAX                            ; 0046018a
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0046018b | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00460190
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 00460193 | int g_SelectedPolygonIndex
    IMUL EAX,dword ptr [EAX + 0x16e9a88],0x14 ; 0046019d | DAT_016e9904
    CMP byte ptr [EAX + 0x1e50190],0x0  ; 004601a4 | SModelPartName[500] g_ModelPartNames
    JZ 0x004601cd                       ; 004601ab | LAB_004601cd
        ;   XREF to: 004601cd (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 004601ad | int g_SelectedPolygonIndex
    IMUL EAX,dword ptr [EAX + 0x16e9a88],0x14 ; 004601b7 | DAT_016e9904
    MOV EDX,0x1e50190                   ; 004601be | SModelPartName[500] g_ModelPartNames
    ADD EDX,EAX                         ; 004601c3
    MOV dword ptr [EBP + 0xffffff34],EDX ; 004601c5
    JMP 0x004601d7                      ; 004601cb | LAB_004601d7
        ;   XREF to: 004601d7 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + 0xffffff34],0x61b8c6 ; 004601cd | = "no name" | s_no_name_0061b8c6 = no name
        ;   Label: LAB_004601cd
    PUSH dword ptr [EBP + 0xffffff34]   ; 004601d7 | = "no name" | s_no_name_0061b8c6 = no name
        ;   Label: LAB_004601d7
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 004601dd | int g_SelectedPolygonIndex
    PUSH dword ptr [EAX + 0x16e9a88]    ; 004601e7 | DAT_016e9904
    MOV EAX,0x61b8ce                    ; 004601ed | = "Part number : %d (%s)" | s_Part_number_d_s_0061b8ce = Part number : %d (%s)
    PUSH EAX                            ; 004601f2 | = "Part number : %d (%s)" | s_Part_number_d_s_0061b8ce = Part number : %d (%s)
    LEA EAX,[EBP + 0xffffff58]          ; 004601f3
    PUSH EAX                            ; 004601f9
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004601fa | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004601ff
    MOV EAX,[0x00679398]                ; 00460202 | int g_WindowHeight
    SUB EAX,0x37                        ; 00460207
    PUSH EAX                            ; 0046020a
    MOV EAX,[0x00679394]                ; 0046020b | int g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 00460210 | int g_WindowWidth
    SAR EDX,0x1f                        ; 00460216
    SUB EAX,EDX                         ; 00460219
    SAR EAX,0x1                         ; 0046021b
    ADD EAX,0xa                         ; 0046021d
    PUSH EAX                            ; 00460220
    LEA EAX,[EBP + 0xffffff58]          ; 00460221
    PUSH EAX                            ; 00460227
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 00460228 | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0046022d
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 00460230 | int g_SelectedPolygonIndex
    CMP byte ptr [EAX + 0x16e9964],0x0  ; 0046023a | DAT_016e97e0
    JZ 0x00460284                       ; 00460241 | LAB_00460284
        ;   XREF to: 00460284 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 00460243 | int g_SelectedPolygonIndex
    MOV EDX,0x16e9910                   ; 0046024d | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 00460252
    ADD EAX,0x4                         ; 00460254
    PUSH EAX                            ; 00460257 | DAT_016e9790
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 00460258 | int g_SelectedPolygonIndex
    MOV EDX,0x16e9910                   ; 00460262 | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 00460267
    ADD EAX,0x54                        ; 00460269
    PUSH EAX                            ; 0046026c | DAT_016e97e0
    MOV EAX,0x61b8e4                    ; 0046026d | = "Texture : %s (%s)" | s_Texture_s_s_0061b8e4 = Texture : %s (%s)
    PUSH EAX                            ; 00460272 | = "Texture : %s (%s)" | s_Texture_s_s_0061b8e4 = Texture : %s (%s)
    LEA EAX,[EBP + 0xffffff58]          ; 00460273
    PUSH EAX                            ; 00460279
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0046027a | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0046027f
    JMP 0x004602d8                      ; 00460282 | LAB_004602d8
        ;   XREF to: 004602d8 (UNCONDITIONAL_JUMP)
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 00460284 | int g_SelectedPolygonIndex
        ;   Label: LAB_00460284
    CMP byte ptr [EAX + 0x16e9914],0x0  ; 0046028e | DAT_016e9790
    JZ 0x004602b3                       ; 00460295 | LAB_004602b3
        ;   XREF to: 004602b3 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 00460297 | int g_SelectedPolygonIndex
    MOV EDX,0x16e9910                   ; 004602a1 | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 004602a6
    ADD EAX,0x4                         ; 004602a8
    MOV dword ptr [EBP + 0xffffff28],EAX ; 004602ab | DAT_016e9790
    JMP 0x004602bd                      ; 004602b1 | LAB_004602bd
        ;   XREF to: 004602bd (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + 0xffffff28],0x61b8f6 ; 004602b3 | = "none" | s_none_0061b8f6 = none
        ;   Label: LAB_004602b3
    PUSH dword ptr [EBP + 0xffffff28]   ; 004602bd | DAT_016e9790 | = "none"
        ;   Label: LAB_004602bd
    MOV EAX,0x61b8fb                    ; 004602c3 | = "Texture : %s" | s_Texture_s_0061b8fb = Texture : %s
    PUSH EAX                            ; 004602c8 | = "Texture : %s" | s_Texture_s_0061b8fb = Texture : %s
    LEA EAX,[EBP + 0xffffff58]          ; 004602c9
    PUSH EAX                            ; 004602cf
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004602d0 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004602d5
    MOV EAX,[0x00679398]                ; 004602d8 | int g_WindowHeight
        ;   Label: LAB_004602d8
    SUB EAX,0x42                        ; 004602dd
    PUSH EAX                            ; 004602e0
    MOV EAX,[0x00679394]                ; 004602e1 | int g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 004602e6 | int g_WindowWidth
    SAR EDX,0x1f                        ; 004602ec
    SUB EAX,EDX                         ; 004602ef
    SAR EAX,0x1                         ; 004602f1
    ADD EAX,0xa                         ; 004602f3
    PUSH EAX                            ; 004602f6
    LEA EAX,[EBP + 0xffffff58]          ; 004602f7
    PUSH EAX                            ; 004602fd
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 004602fe | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00460303
    CMP dword ptr [0x015c4838],0x0      ; 00460306 | int g_ShowUVCoordinates
    JZ 0x0046045b                       ; 0046030d | LAB_0046045b
        ;   XREF to: 0046045b (CONDITIONAL_JUMP)
    MOV EAX,[0x00679398]                ; 00460313 | int g_WindowHeight
    SUB EAX,0x84                        ; 00460318
    PUSH EAX                            ; 0046031d
    MOV EAX,[0x00679394]                ; 0046031e | int g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 00460323 | int g_WindowWidth
    SAR EDX,0x1f                        ; 00460329
    SUB EAX,EDX                         ; 0046032c
    SAR EAX,0x1                         ; 0046032e
    ADD EAX,0xa                         ; 00460330
    PUSH EAX                            ; 00460333
    MOV EAX,0x61b908                    ; 00460334 | = "UVs :" | s_UVs_0061b908 = UVs :
    PUSH EAX                            ; 00460339 | = "UVs :" | s_UVs_0061b908 = UVs :
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0046033a | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0046033f
    MOV dword ptr [EBP + -0x34],0x0     ; 00460342
    JMP 0x00460351                      ; 00460349 | LAB_00460351
        ;   XREF to: 00460351 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x34]     ; 0046034b
        ;   Label: LAB_0046034b
    INC dword ptr [EBP + -0x34]         ; 0046034e
    IMUL EDX,dword ptr [0x01e528b8],0x184 ; 00460351 | int g_SelectedPolygonIndex
        ;   Label: LAB_00460351
    MOV EAX,dword ptr [EBP + -0x34]     ; 0046035b
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 0046035e | DAT_016e9830
    JGE 0x0046045b                      ; 00460364 | LAB_0046045b
        ;   XREF to: 0046045b (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 0046036a | int g_SelectedPolygonIndex
    MOV EDX,dword ptr [EBP + -0x34]     ; 00460374
    SHL EDX,0x2                         ; 00460377
    ADD EAX,EDX                         ; 0046037a
    FLD float ptr [EAX + 0x16e9a48]     ; 0046037c | DAT_016e98c4
    FMUL double ptr [0x0061b936]        ; 00460382 | double DOUBLE_0061b936
    SUB ESP,0x8                         ; 00460388
    FSTP double ptr [ESP]               ; 0046038b
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 0046038e | int g_SelectedPolygonIndex
    MOV EDX,dword ptr [EBP + -0x34]     ; 00460398
    SHL EDX,0x2                         ; 0046039b
    ADD EAX,EDX                         ; 0046039e
    FLD float ptr [EAX + 0x16e9a08]     ; 004603a0 | DAT_016e9884
    FMUL double ptr [0x0061b936]        ; 004603a6 | double DOUBLE_0061b936
    SUB ESP,0x8                         ; 004603ac
    FSTP double ptr [ESP]               ; 004603af
    IMUL EDX,dword ptr [0x01e528b8],0x184 ; 004603b2 | int g_SelectedPolygonIndex
    MOV EAX,dword ptr [EBP + -0x34]     ; 004603bc
    SHL EAX,0x2                         ; 004603bf
    ADD EAX,EDX                         ; 004603c2
    FLD float ptr [EAX + 0x16e9a48]     ; 004603c4 | DAT_016e98c4
    SUB ESP,0x8                         ; 004603ca
    FSTP double ptr [ESP]               ; 004603cd
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 004603d0 | int g_SelectedPolygonIndex
    MOV EDX,dword ptr [EBP + -0x34]     ; 004603da
    SHL EDX,0x2                         ; 004603dd
    ADD EAX,EDX                         ; 004603e0
    FLD float ptr [EAX + 0x16e9a08]     ; 004603e2 | DAT_016e9884
    SUB ESP,0x8                         ; 004603e8
    FSTP double ptr [ESP]               ; 004603eb
    IMUL EDX,dword ptr [0x01e528b8],0x184 ; 004603ee | int g_SelectedPolygonIndex
    MOV EAX,dword ptr [EBP + -0x34]     ; 004603f8
    SHL EAX,0x2                         ; 004603fb
    ADD EAX,EDX                         ; 004603fe
    PUSH dword ptr [EAX + 0x16e99c8]    ; 00460400 | DAT_016e9844
    MOV EAX,0x61b90e                    ; 00460406 | = "%03d : %010.6f %010.6f / %08.6f %08.6f" | s_s_03d_010_6f_010_6f_08_6_0061b90e = %03d : %010.6f %010.6f / %08.6f %08.6f
    PUSH EAX                            ; 0046040b | = "%03d : %010.6f %010.6f / %08.6f %08.6f" | s_s_03d_010_6f_010_6f_08_6_0061b90e = %03d : %010.6f %010.6f / %08.6f %08.6f
    LEA EAX,[EBP + 0xffffff58]          ; 0046040c
    PUSH EAX                            ; 00460412
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00460413 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x2c                        ; 00460418
    MOV EAX,0xb                         ; 0046041b
    SUB EAX,dword ptr [EBP + -0x34]     ; 00460420
    IMUL EAX,EAX,0xb                    ; 00460423
    MOV EDX,dword ptr [0x00679398]      ; 00460426 | int g_WindowHeight
    SUB EDX,EAX                         ; 0046042c
    MOV EAX,EDX                         ; 0046042e
    PUSH EAX                            ; 00460430
    MOV EAX,[0x00679394]                ; 00460431 | int g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 00460436 | int g_WindowWidth
    SAR EDX,0x1f                        ; 0046043c
    SUB EAX,EDX                         ; 0046043f
    SAR EAX,0x1                         ; 00460441
    ADD EAX,0xa                         ; 00460443
    PUSH EAX                            ; 00460446
    LEA EAX,[EBP + 0xffffff58]          ; 00460447
    PUSH EAX                            ; 0046044d
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0046044e | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00460453
    JMP 0x0046034b                      ; 00460456 | LAB_0046034b
        ;   XREF to: 0046034b (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x015c483c],0x0      ; 0046045b | int g_ShowVertexCoordinates
        ;   Label: LAB_0046045b
    JZ 0x0046059b                       ; 00460462 | LAB_0046059b
        ;   XREF to: 0046059b (CONDITIONAL_JUMP)
    MOV EAX,[0x00679398]                ; 00460468 | int g_WindowHeight
    SUB EAX,0x84                        ; 0046046d
    PUSH EAX                            ; 00460472
    MOV EAX,[0x00679394]                ; 00460473 | int g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 00460478 | int g_WindowWidth
    SAR EDX,0x1f                        ; 0046047e
    SUB EAX,EDX                         ; 00460481
    SAR EAX,0x1                         ; 00460483
    ADD EAX,0xa                         ; 00460485
    PUSH EAX                            ; 00460488
    MOV EAX,0x61b93e                    ; 00460489 | = "Vertices :" | s_Vertices_0061b93e = Vertices :
    PUSH EAX                            ; 0046048e | = "Vertices :" | s_Vertices_0061b93e = Vertices :
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0046048f | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00460494
    MOV dword ptr [EBP + -0x34],0x0     ; 00460497
    JMP 0x004604a6                      ; 0046049e | LAB_004604a6
        ;   XREF to: 004604a6 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x34]     ; 004604a0
        ;   Label: LAB_004604a0
    INC dword ptr [EBP + -0x34]         ; 004604a3
    IMUL EDX,dword ptr [0x01e528b8],0x184 ; 004604a6 | int g_SelectedPolygonIndex
        ;   Label: LAB_004604a6
    MOV EAX,dword ptr [EBP + -0x34]     ; 004604b0
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 004604b3 | DAT_016e9830
    JGE 0x0046059b                      ; 004604b9 | LAB_0046059b
        ;   XREF to: 0046059b (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [0x01e528b8],0x184 ; 004604bf | int g_SelectedPolygonIndex
    MOV EDX,dword ptr [EBP + -0x34]     ; 004604c9
    SHL EDX,0x2                         ; 004604cc
    ADD EAX,EDX                         ; 004604cf
    IMUL EAX,dword ptr [EAX + 0x16e99c8],0x14 ; 004604d1 | DAT_016e99c8 | DAT_016e9844
    FLD float ptr [EAX + 0x1626414]     ; 004604d8 | g_LoadedVertices[0].vertex.z
    SUB ESP,0x8                         ; 004604de
    FSTP double ptr [ESP]               ; 004604e1
    IMUL EDX,dword ptr [0x01e528b8],0x184 ; 004604e4 | int g_SelectedPolygonIndex
    MOV EAX,dword ptr [EBP + -0x34]     ; 004604ee
    SHL EAX,0x2                         ; 004604f1
    ADD EAX,EDX                         ; 004604f4
    IMUL EAX,dword ptr [EAX + 0x16e99c8],0x14 ; 004604f6 | DAT_016e99c8 | DAT_016e9844
    FLD float ptr [EAX + 0x1626410]     ; 004604fd | DAT_01626410
    SUB ESP,0x8                         ; 00460503
    FSTP double ptr [ESP]               ; 00460506
    IMUL EDX,dword ptr [0x01e528b8],0x184 ; 00460509 | int g_SelectedPolygonIndex
    MOV EAX,dword ptr [EBP + -0x34]     ; 00460513
    SHL EAX,0x2                         ; 00460516
    ADD EAX,EDX                         ; 00460519
    IMUL EAX,dword ptr [EAX + 0x16e99c8],0x14 ; 0046051b | DAT_016e99c8 | DAT_016e9844
    FLD float ptr [EAX + 0x162640c]     ; 00460522 | SVertexData[20000] g_LoadedVertices
    SUB ESP,0x8                         ; 00460528
    FSTP double ptr [ESP]               ; 0046052b
    IMUL EDX,dword ptr [0x01e528b8],0x184 ; 0046052e | int g_SelectedPolygonIndex
    MOV EAX,dword ptr [EBP + -0x34]     ; 00460538
    SHL EAX,0x2                         ; 0046053b
    ADD EAX,EDX                         ; 0046053e
    PUSH dword ptr [EAX + 0x16e99c8]    ; 00460540 | DAT_016e9844
    MOV EAX,0x61b949                    ; 00460546 | = "%03d : %+011.6f %+011.6f %+011.6f" | s_s_03d_011_6f_011_6f_011__0061b949 = %03d : %+011.6f %+011.6f %+011.6f
    PUSH EAX                            ; 0046054b | = "%03d : %+011.6f %+011.6f %+011.6f" | s_s_03d_011_6f_011_6f_011__0061b949 = %03d : %+011.6f %+011.6f %+011.6f
    LEA EAX,[EBP + 0xffffff58]          ; 0046054c
    PUSH EAX                            ; 00460552
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00460553 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x24                        ; 00460558
    MOV EAX,0xb                         ; 0046055b
    SUB EAX,dword ptr [EBP + -0x34]     ; 00460560
    IMUL EAX,EAX,0xb                    ; 00460563
    MOV EDX,dword ptr [0x00679398]      ; 00460566 | int g_WindowHeight
    SUB EDX,EAX                         ; 0046056c
    MOV EAX,EDX                         ; 0046056e
    PUSH EAX                            ; 00460570
    MOV EAX,[0x00679394]                ; 00460571 | int g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 00460576 | int g_WindowWidth
    SAR EDX,0x1f                        ; 0046057c
    SUB EAX,EDX                         ; 0046057f
    SAR EAX,0x1                         ; 00460581
    ADD EAX,0xa                         ; 00460583
    PUSH EAX                            ; 00460586
    LEA EAX,[EBP + 0xffffff58]          ; 00460587
    PUSH EAX                            ; 0046058d
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0046058e | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00460593
    JMP 0x004604a0                      ; 00460596 | LAB_004604a0
        ;   XREF to: 004604a0 (UNCONDITIONAL_JUMP)
    CMP byte ptr [0x02d03eae],0x0       ; 0046059b | CHAR_ARRAY_02d03eae
        ;   Label: LAB_0046059b
    JZ 0x004605ad                       ; 004605a2 | LAB_004605ad
        ;   XREF to: 004605ad (CONDITIONAL_JUMP)
    CMP dword ptr [0x01e6614c],-0x1     ; 004605a4 | int g_CurrentPartIndex
    JNZ 0x004605af                      ; 004605ab | LAB_004605af
        ;   XREF to: 004605af (CONDITIONAL_JUMP)
    JMP 0x004605e0                      ; 004605ad | LAB_004605e0
        ;   Label: LAB_004605ad
        ;   XREF to: 004605e0 (UNCONDITIONAL_JUMP)
    MOV byte ptr [0x02d03eae],0x0       ; 004605af | CHAR_ARRAY_02d03eae
        ;   Label: LAB_004605af
    IMUL EDX,dword ptr [0x01e528b8],0x184 ; 004605b6 | int g_SelectedPolygonIndex
    MOV EAX,[0x01626368]                ; 004605c0 | int g_EditorColorIndex
    MOV dword ptr [EDX + 0x16e9a8c],EAX ; 004605c5 | DAT_016e9908
    IMUL EDX,dword ptr [0x01e528b8],0x184 ; 004605cb | int g_SelectedPolygonIndex
    MOV EAX,[0x01e6614c]                ; 004605d5 | int g_CurrentPartIndex
    MOV dword ptr [EDX + 0x16e9a88],EAX ; 004605da | DAT_016e9904
    CMP byte ptr [0x02d03ec9],0x0       ; 004605e0 | CHAR_ARRAY_02d03ec9
        ;   Label: LAB_004605e0
    JZ 0x004605f2                       ; 004605e7 | LAB_004605f2
        ;   XREF to: 004605f2 (CONDITIONAL_JUMP)
    CMP dword ptr [0x01e528b8],-0x1     ; 004605e9 | int g_SelectedPolygonIndex
    JNZ 0x004605f7                      ; 004605f0 | LAB_004605f7
        ;   XREF to: 004605f7 (CONDITIONAL_JUMP)
    JMP 0x004606fa                      ; 004605f2 | LAB_004606fa
        ;   Label: LAB_004605f2
        ;   XREF to: 004606fa (UNCONDITIONAL_JUMP)
    MOV byte ptr [0x02d03ec9],0x0       ; 004605f7 | CHAR_ARRAY_02d03ec9
        ;   Label: LAB_004605f7
    IMUL ESI,dword ptr [0x01e528b8],0x184 ; 004605fe | int g_SelectedPolygonIndex
    IMUL EDI,dword ptr [0x016e990c],0x184 ; 00460608 | int g_PolygonCount
    MOV ECX,0x61                        ; 00460612
    LEA EDI,[EDI + 0x16e9910]           ; 00460617 | SShapeEditorPolygon[20000] g_ModelPolygonData
    LEA ESI,[ESI + 0x16e9910]           ; 0046061d | DAT_016e978c
    MOVSD.REP ES:EDI,ESI                ; 00460623 | DAT_016e978c | g_ModelPolygonData
    IMUL EAX,dword ptr [0x016e990c],0x184 ; 00460625 | int g_PolygonCount
    MOV EAX,dword ptr [EAX + 0x16e99b4] ; 0046062f | DAT_016e99b4
    MOV dword ptr [EBP + -0x40],EAX     ; 00460635
    MOV dword ptr [EBP + -0x34],0x0     ; 00460638
    JMP 0x00460647                      ; 0046063f | LAB_00460647
        ;   XREF to: 00460647 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x34]     ; 00460641
        ;   Label: LAB_00460641
    INC dword ptr [EBP + -0x34]         ; 00460644
    MOV EAX,dword ptr [EBP + -0x34]     ; 00460647
        ;   Label: LAB_00460647
    CMP EAX,dword ptr [EBP + -0x40]     ; 0046064a
    JGE 0x004606f4                      ; 0046064d | LAB_004606f4
        ;   XREF to: 004606f4 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x40]     ; 00460653
    SUB EAX,dword ptr [EBP + -0x34]     ; 00460656
    SHL EAX,0x2                         ; 00460659
    IMUL EDX,dword ptr [0x01e528b8],0x184 ; 0046065c | int g_SelectedPolygonIndex
    LEA ECX,[EDX + EAX*0x1]             ; 00460666
    IMUL EDX,dword ptr [0x016e990c],0x184 ; 00460669 | int g_PolygonCount
    MOV EAX,dword ptr [EBP + -0x34]     ; 00460673
    SHL EAX,0x2                         ; 00460676
    ADD EDX,EAX                         ; 00460679
    MOV EAX,dword ptr [ECX + 0x16e99c4] ; 0046067b | DAT_016e9840
    MOV dword ptr [EDX + 0x16e99c8],EAX ; 00460681 | DAT_016e99c8
    MOV EAX,dword ptr [EBP + -0x40]     ; 00460687
    SUB EAX,dword ptr [EBP + -0x34]     ; 0046068a
    SHL EAX,0x2                         ; 0046068d
    IMUL EDX,dword ptr [0x01e528b8],0x184 ; 00460690 | int g_SelectedPolygonIndex
    LEA ECX,[EDX + EAX*0x1]             ; 0046069a
    IMUL EDX,dword ptr [0x016e990c],0x184 ; 0046069d | int g_PolygonCount
    MOV EAX,dword ptr [EBP + -0x34]     ; 004606a7
    SHL EAX,0x2                         ; 004606aa
    ADD EAX,EDX                         ; 004606ad
    FLD float ptr [ECX + 0x16e9a04]     ; 004606af | DAT_016e9880
    FSTP float ptr [EAX + 0x16e9a08]    ; 004606b5 | DAT_016e9a08
    MOV EAX,dword ptr [EBP + -0x40]     ; 004606bb
    SUB EAX,dword ptr [EBP + -0x34]     ; 004606be
    SHL EAX,0x2                         ; 004606c1
    IMUL EDX,dword ptr [0x01e528b8],0x184 ; 004606c4 | int g_SelectedPolygonIndex
    LEA ECX,[EDX + EAX*0x1]             ; 004606ce
    IMUL EDX,dword ptr [0x016e990c],0x184 ; 004606d1 | int g_PolygonCount
    MOV EAX,dword ptr [EBP + -0x34]     ; 004606db
    SHL EAX,0x2                         ; 004606de
    ADD EAX,EDX                         ; 004606e1
    FLD float ptr [ECX + 0x16e9a44]     ; 004606e3 | DAT_016e98c0
    FSTP float ptr [EAX + 0x16e9a48]    ; 004606e9 | DAT_016e9a48
    JMP 0x00460641                      ; 004606ef | LAB_00460641
        ;   XREF to: 00460641 (UNCONDITIONAL_JUMP)
    INC dword ptr [0x016e990c]          ; 004606f4 | int g_PolygonCount
        ;   Label: LAB_004606f4
    PUSH dword ptr [0x01e528b8]         ; 004606fa | int g_SelectedPolygonIndex
        ;   Label: LAB_004606fa
    CALL shape_design.c_polygonToolModeManager_FUN_00464c90 ; 00460700 | int shape_design.c_polygonToolModeManager_FUN_00464c90(int input_parameter)
        ;   XREF to: 00464c90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00460705
    MOV [0x01e528b8],EAX                ; 00460708 | int g_SelectedPolygonIndex
    PUSH dword ptr [0x01e528b8]         ; 0046070d | int g_SelectedPolygonIndex
    CALL shape_design.c_mouseWheelPolygonReducer_FUN_004648e0 ; 00460713 | int shape_design.c_mouseWheelPolygonReducer_FUN_004648e0(int selected_polygon_index)
        ;   XREF to: 004648e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00460718
    MOV [0x01e528b8],EAX                ; 0046071b | int g_SelectedPolygonIndex
    CALL engine_matrix.c_pop_FUN_0050d720 ; 00460720 | void engine_matrix.c_pop_FUN_0050d720()
        ;   XREF to: 0050d720 (UNCONDITIONAL_CALL)
    MOV ESP,EBP                         ; 00460a08
        ;   Label: LAB_00460a08
    POP EBP                             ; 00460a0a
    POP EDI                             ; 00460a0b
    POP ESI                             ; 00460a0c
    POP EBX                             ; 00460a0d
    RET                                 ; 00460a0e

