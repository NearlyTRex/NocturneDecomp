; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_level_cpp_CLevelLoader_update_FUN_004c59e0(CLevelLoader *this_ptr,char *text,int clear_screen)
;
; Parameters:
; CLevelLoader *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   clear_screen
; Local Variables:
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
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
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[5]:
;   core_mission.cpp_CDemonMission_load_FUN_004d7ee0 at 004d7f17
;   core_mission.cpp_CDemonMission_prepareAllActors_FUN_004d8db0 at 004d8dcf
;   core_mission.cpp_CDemonMission_startMission_FUN_004d9780 at 004d9821
;   core_set.cpp_CDemonSet_initScene_FUN_005084c0 at 005084e2
;   core_set.cpp_CDemonSet_load_FUN_00506f10 at 00506f3f
;
; Referenced Globals:
;   undefined4 DAT_0059fbfc
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   undefined4 DAT_005baca4
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   CBitFont* g_CBitFont_PTR_014b9900
;   undefined4 DAT_01b4d738
;   CDemonSet g_CDemonSet_01e57284
;   undefined4 g_CDemonSet_01e57284.rendering_mode
;   undefined4 g_CDemonSet_01e57284.light_direction.x
;   undefined4 g_CDemonSet_01e57284.light_direction.y
;   undefined4 g_CDemonSet_01e57284.light_direction.z
;   undefined4 g_CDemonSet_01e57284.ambient_base_quick
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040
;   core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340
;   engine_2d.c_fillRectColor_FUN_00403e60
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_popViewport_FUN_00460e70
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00460e40
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780
;   engine_font.cpp_CBitFont_drawText_FUN_00490980
;   engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
;   engine_matrix.c_interpolatedCos_FUN_004ccaa0
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004c59e0
        ;   Label: core_level.cpp_CLevelLoader_update_FUN_004c59e0
    PUSH EDI                            ; 004c59e1
    PUSH EBP                            ; 004c59e2
    SUB ESP,0x7c                        ; 004c59e3
    MOV ESI,dword ptr [ESP + 0x8c]      ; 004c59e6
    CMP dword ptr [ESI + 0xc],0x0       ; 004c59ed
    JZ 0x004c5f6e                       ; 004c59f1
        ;   XREF to: 004c5f6e (CONDITIONAL_JUMP)  ; LAB_004c5f6e
    CMP dword ptr [ESP + 0x94],0x0      ; 004c59f7
    JNZ 0x004c5f75                      ; 004c59ff
        ;   XREF to: 004c5f75 (CONDITIONAL_JUMP)  ; LAB_004c5f75
    CMP dword ptr [ESI + 0x110],0x0     ; 004c5a05
        ;   Label: LAB_004c5a05
    JZ 0x004c5a39                       ; 004c5a0c
        ;   XREF to: 004c5a39 (CONDITIONAL_JUMP)  ; LAB_004c5a39
    MOV EDI,dword ptr [ESI + 0x120]     ; 004c5a0e
    PUSH EDI                            ; 004c5a14
    MOV EBP,dword ptr [ESI + 0x11c]     ; 004c5a15
    PUSH EBP                            ; 004c5a1b
    MOV EAX,dword ptr [ESI + 0x118]     ; 004c5a1c
    PUSH EAX                            ; 004c5a22
    MOV EDX,dword ptr [ESI + 0x114]     ; 004c5a23
    PUSH EDX                            ; 004c5a29
    MOV ECX,dword ptr [0x005ae704]      ; 004c5a2a | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 004c5a30 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00460e40 ; 004c5a31
        ;   XREF to: 00460e40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00460e40(CDemonRenderer * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 004c5a36
    PUSH EBX                            ; 004c5a39
        ;   Label: LAB_004c5a39
    PUSH 0x2dd1184                      ; 004c5a3a | DAT_02dd1184
    MOV EBX,dword ptr [0x005ae704]      ; 004c5a3f | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 004c5a45 | DAT_01b4d738
    MOV EDI,0x42600000                  ; 004c5a46
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700 ; 004c5a4b
        ;   XREF to: 00460700 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 004c5a50
    MOV EBP,dword ptr [ESI + 0x110]     ; 004c5a53
    MOV dword ptr [ESP + 0x74],EDI      ; 004c5a59
    TEST EBP,EBP                        ; 004c5a5d
    JZ 0x004c5a69                       ; 004c5a5f
        ;   XREF to: 004c5a69 (CONDITIONAL_JUMP)  ; LAB_004c5a69
    MOV dword ptr [ESP + 0x74],0x42a80000 ; 004c5a61
    MOV EDX,dword ptr [0x005ae704]      ; 004c5a69 | g_CDemonRenderer_PTR_005ae704
        ;   Label: LAB_004c5a69
    PUSH dword ptr [ESP + 0x74]         ; 004c5a6f
    PUSH EDX                            ; 004c5a73 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00 ; 004c5a74
        ;   XREF to: 00460c00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 004c5a79
    PUSH 0x2dd1184                      ; 004c5a7c | DAT_02dd1184
    MOV ECX,dword ptr [0x005ae704]      ; 004c5a81 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 004c5a87 | DAT_01b4d738
    MOV EBP,0x42100000                  ; 004c5a88
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780 ; 004c5a8d
        ;   XREF to: 00460780 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004c5a92
    LEA EAX,[ESP + 0x68]                ; 004c5a95
    XOR EBX,EBX                         ; 004c5a99
    PUSH EAX                            ; 004c5a9b
    MOV EAX,[0x005ae704]                ; 004c5a9c | g_CDemonRenderer_PTR_005ae704
    MOV dword ptr [ESP + 0x6c],EBX      ; 004c5aa1
    PUSH EAX                            ; 004c5aa5 | DAT_01b4d738
    MOV dword ptr [ESP + 0x74],EBX      ; 004c5aa6
    MOV dword ptr [ESP + 0x78],EBP      ; 004c5aaa
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 004c5aae
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    MOV EAX,[0x005be368]                ; 004c5ab3 | g_CDemonSet_PTR_005be368
    MOV dword ptr [EAX + 0x15aa88],0x1  ; 004c5ab8 | g_CDemonSet_01e57284.rendering_mode
    MOV EDX,dword ptr [ESI]             ; 004c5ac2
    SHL EDX,0xf                         ; 004c5ac4
    MOV ECX,dword ptr [ESI + 0x4]       ; 004c5ac7
    MOV EAX,EDX                         ; 004c5aca
    SAR EDX,0x1f                        ; 004c5acc
    IDIV ECX                            ; 004c5acf
    MOV EBX,0x8000                      ; 004c5ad1
    ADD ESP,0x8                         ; 004c5ad6
    SUB EBX,EAX                         ; 004c5ad9
    PUSH EBX                            ; 004c5adb
    CALL engine_matrix.c_interpolatedSin_FUN_004cca60 ; 004c5adc
        ;   XREF to: 004cca60 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedSin_FUN_004cca60(int angle)
    ADD ESP,0x4                         ; 004c5ae1
    MOV EDX,EAX                         ; 004c5ae4
    MOV EAX,0x9088                      ; 004c5ae6
    IMUL EDX                            ; 004c5aeb
    SHRD EAX,EDX,0x10                   ; 004c5aed
    MOV EDX,EAX                         ; 004c5af1
    MOV EAX,[0x005be368]                ; 004c5af3 | g_CDemonSet_PTR_005be368
    MOV dword ptr [EAX + 0x15aa90],0xffff6f78 ; 004c5af8 | g_CDemonSet_01e57284.light_direction.y
    PUSH EBX                            ; 004c5b02
    MOV dword ptr [EAX + 0x15aa8c],EDX  ; 004c5b03 | g_CDemonSet_01e57284.light_direction.x
    CALL engine_matrix.c_interpolatedCos_FUN_004ccaa0 ; 004c5b09
        ;   XREF to: 004ccaa0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedCos_FUN_004ccaa0(int angle)
    ADD ESP,0x4                         ; 004c5b0e
    MOV EDX,EAX                         ; 004c5b11
    MOV EAX,0x9088                      ; 004c5b13
    IMUL EDX                            ; 004c5b18
    SHRD EAX,EDX,0x10                   ; 004c5b1a
    MOV EDX,EAX                         ; 004c5b1e
    MOV EAX,[0x005be368]                ; 004c5b20 | g_CDemonSet_PTR_005be368
    MOV dword ptr [EAX + 0x15aa98],0x280 ; 004c5b25 | g_CDemonSet_01e57284.ambient_base_quick
    MOV dword ptr [EAX + 0x15aa94],EDX  ; 004c5b2f | g_CDemonSet_01e57284.light_direction.z
    MOV EDX,dword ptr [ESI + 0x12c]     ; 004c5b35
    SHL EDX,0x8                         ; 004c5b3b
    PUSH EDX                            ; 004c5b3e
    MOV EDX,dword ptr [ESI + 0x128]     ; 004c5b3f
    SHL EDX,0x8                         ; 004c5b45
    PUSH EDX                            ; 004c5b48
    MOV EDX,dword ptr [ESI + 0x124]     ; 004c5b49
    SHL EDX,0x8                         ; 004c5b4f
    PUSH EDX                            ; 004c5b52
    PUSH EAX                            ; 004c5b53 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340 ; 004c5b54
        ;   XREF to: 0050e340 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 004c5b59
    MOV EBX,0x40e80000                  ; 004c5b5c
    LEA EAX,[ESP + 0x5c]                ; 004c5b61
    MOV EDX,dword ptr [0x005ae704]      ; 004c5b65 | g_CDemonRenderer_PTR_005ae704
    XOR EBP,EBP                         ; 004c5b6b
    MOV dword ptr [ESP + 0x5c],EBX      ; 004c5b6d
    MOV dword ptr [ESP + 0x60],EBX      ; 004c5b71
    LEA EBX,[ESP + 0x2c]                ; 004c5b75
    MOV dword ptr [ESP + 0x64],EBP      ; 004c5b79
    FLD float ptr [EAX]                 ; 004c5b7d
    FMUL float ptr [0x0059fbfc]         ; 004c5b7f | DAT_0059fbfc
    FISTP dword ptr [EBX]               ; 004c5b85
    FLD float ptr [EAX + 0x4]           ; 004c5b87
    FMUL float ptr [0x0059fbfc]         ; 004c5b8a | DAT_0059fbfc
    FISTP dword ptr [EBX + 0x4]         ; 004c5b90
    FLD float ptr [EAX + 0x8]           ; 004c5b93
    FMUL float ptr [0x0059fbfc]         ; 004c5b96 | DAT_0059fbfc
    FISTP dword ptr [EBX + 0x8]         ; 004c5b9c
    LEA EAX,[ESP + 0x2c]                ; 004c5b9f
    PUSH EAX                            ; 004c5ba3
    MOV EAX,dword ptr [EDX]             ; 004c5ba4 | DAT_01b4d738
    PUSH EAX                            ; 004c5ba6
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004c5ba7
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c5bac
    MOV AH,byte ptr [ESP + 0x5f]        ; 004c5baf
    XOR AH,0x80                         ; 004c5bb3
    LEA EBX,[ESP + 0x38]                ; 004c5bb6
    MOV byte ptr [ESP + 0x5f],AH        ; 004c5bba
    LEA EAX,[ESP + 0x5c]                ; 004c5bbe
    MOV EDX,dword ptr [0x005ae704]      ; 004c5bc2 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 004c5bc8
    FMUL float ptr [0x0059fbfc]         ; 004c5bca | DAT_0059fbfc
    FISTP dword ptr [EBX]               ; 004c5bd0
    FLD float ptr [EAX + 0x4]           ; 004c5bd2
    FMUL float ptr [0x0059fbfc]         ; 004c5bd5 | DAT_0059fbfc
    FISTP dword ptr [EBX + 0x4]         ; 004c5bdb
    FLD float ptr [EAX + 0x8]           ; 004c5bde
    FMUL float ptr [0x0059fbfc]         ; 004c5be1 | DAT_0059fbfc
    FISTP dword ptr [EBX + 0x8]         ; 004c5be7
    LEA EAX,[ESP + 0x38]                ; 004c5bea
    PUSH EAX                            ; 004c5bee
    MOV EAX,dword ptr [EDX]             ; 004c5bef | DAT_01b4d738
    ADD EAX,0x30                        ; 004c5bf1
    PUSH EAX                            ; 004c5bf4
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004c5bf5
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c5bfa
    MOV DL,byte ptr [ESP + 0x63]        ; 004c5bfd
    LEA EBX,[ESP + 0x50]                ; 004c5c01
    XOR DL,0x80                         ; 004c5c05
    LEA EAX,[ESP + 0x5c]                ; 004c5c08
    MOV byte ptr [ESP + 0x63],DL        ; 004c5c0c
    MOV EDX,dword ptr [0x005ae704]      ; 004c5c10 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 004c5c16
    FMUL float ptr [0x0059fbfc]         ; 004c5c18 | DAT_0059fbfc
    FISTP dword ptr [EBX]               ; 004c5c1e
    FLD float ptr [EAX + 0x4]           ; 004c5c20
    FMUL float ptr [0x0059fbfc]         ; 004c5c23 | DAT_0059fbfc
    FISTP dword ptr [EBX + 0x4]         ; 004c5c29
    FLD float ptr [EAX + 0x8]           ; 004c5c2c
    FMUL float ptr [0x0059fbfc]         ; 004c5c2f | DAT_0059fbfc
    FISTP dword ptr [EBX + 0x8]         ; 004c5c35
    LEA EAX,[ESP + 0x50]                ; 004c5c38
    PUSH EAX                            ; 004c5c3c
    MOV EAX,dword ptr [EDX]             ; 004c5c3d | DAT_01b4d738
    ADD EAX,0x60                        ; 004c5c3f
    PUSH EAX                            ; 004c5c42
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004c5c43
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c5c48
    MOV DH,byte ptr [ESP + 0x5f]        ; 004c5c4b
    LEA EBX,[ESP + 0x44]                ; 004c5c4f
    XOR DH,0x80                         ; 004c5c53
    LEA EAX,[ESP + 0x5c]                ; 004c5c56
    MOV byte ptr [ESP + 0x5f],DH        ; 004c5c5a
    MOV EDX,dword ptr [0x005ae704]      ; 004c5c5e | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 004c5c64
    FMUL float ptr [0x0059fbfc]         ; 004c5c66 | DAT_0059fbfc
    FISTP dword ptr [EBX]               ; 004c5c6c
    FLD float ptr [EAX + 0x4]           ; 004c5c6e
    FMUL float ptr [0x0059fbfc]         ; 004c5c71 | DAT_0059fbfc
    FISTP dword ptr [EBX + 0x4]         ; 004c5c77
    FLD float ptr [EAX + 0x8]           ; 004c5c7a
    FMUL float ptr [0x0059fbfc]         ; 004c5c7d | DAT_0059fbfc
    FISTP dword ptr [EBX + 0x8]         ; 004c5c83
    LEA EAX,[ESP + 0x44]                ; 004c5c86
    PUSH EAX                            ; 004c5c8a
    MOV EAX,dword ptr [EDX]             ; 004c5c8b | DAT_01b4d738
    ADD EAX,0x90                        ; 004c5c8d
    PUSH EAX                            ; 004c5c92
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004c5c93
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005ae704]                ; 004c5c98 | g_CDemonRenderer_PTR_005ae704
    MOV EDX,dword ptr [EAX]             ; 004c5c9d | DAT_01b4d738
    MOV dword ptr [EDX + 0x18],0x1000000 ; 004c5c9f
    MOV EDX,dword ptr [EAX]             ; 004c5ca6 | DAT_01b4d738
    MOV dword ptr [EDX + 0x1c],EBP      ; 004c5ca8
    MOV EDX,dword ptr [EAX]             ; 004c5cab | DAT_01b4d738
    MOV dword ptr [EDX + 0x48],EBP      ; 004c5cad
    MOV EDX,dword ptr [EAX]             ; 004c5cb0 | DAT_01b4d738
    MOV dword ptr [EDX + 0x4c],EBP      ; 004c5cb2
    MOV EDX,dword ptr [EAX]             ; 004c5cb5 | DAT_01b4d738
    MOV dword ptr [EDX + 0x78],EBP      ; 004c5cb7
    MOV EDX,dword ptr [EAX]             ; 004c5cba | DAT_01b4d738
    MOV dword ptr [EDX + 0x7c],0x1000000 ; 004c5cbc
    MOV EDX,dword ptr [EAX]             ; 004c5cc3 | DAT_01b4d738
    MOV dword ptr [EDX + 0xa8],0x1000000 ; 004c5cc5
    MOV EAX,dword ptr [EAX]             ; 004c5ccf | DAT_01b4d738
    MOV dword ptr [EAX + 0xac],0x1000000 ; 004c5cd1
    MOV EDX,dword ptr [ESI]             ; 004c5cdb
    MOV EAX,EDX                         ; 004c5cdd
    SHL EAX,0x8                         ; 004c5cdf
    ADD EAX,EDX                         ; 004c5ce2
    MOV EDX,EAX                         ; 004c5ce4
    SHL EAX,0x8                         ; 004c5ce6
    SUB EAX,EDX                         ; 004c5ce9
    MOV EDX,EAX                         ; 004c5ceb
    MOV ECX,dword ptr [ESI + 0x4]       ; 004c5ced
    SAR EDX,0x1f                        ; 004c5cf0
    IDIV ECX                            ; 004c5cf3
    ADD ESP,0x8                         ; 004c5cf5
    MOV EDX,EAX                         ; 004c5cf8
    CMP EAX,0xffff                      ; 004c5cfa
    JG 0x004c5f96                       ; 004c5cff
        ;   XREF to: 004c5f96 (CONDITIONAL_JUMP)  ; LAB_004c5f96
    MOV EAX,[0x005ae704]                ; 004c5d05 | g_CDemonRenderer_PTR_005ae704
        ;   Label: LAB_004c5d05
    MOV ECX,dword ptr [EAX]             ; 004c5d0a | DAT_01b4d738
    MOV dword ptr [ECX + 0x2c],0x0      ; 004c5d0c
    MOV ECX,dword ptr [EAX]             ; 004c5d13 | DAT_01b4d738
    MOV dword ptr [ECX + 0x5c],EDX      ; 004c5d15
    MOV EDX,dword ptr [EAX]             ; 004c5d18 | DAT_01b4d738
    MOV dword ptr [EDX + 0x8c],0x0      ; 004c5d1a
    MOV EAX,dword ptr [EAX]             ; 004c5d24 | DAT_01b4d738
    MOV dword ptr [EAX + 0xbc],0x0      ; 004c5d26
    XOR EAX,EAX                         ; 004c5d30
    MOV EDX,dword ptr [0x005ae704]      ; 004c5d32 | g_CDemonRenderer_PTR_005ae704
        ;   Label: LAB_004c5d32
    MOV EBX,dword ptr [ESI + 0x124]     ; 004c5d38
    MOV ECX,dword ptr [EDX]             ; 004c5d3e | DAT_01b4d738
    SHL EBX,0x8                         ; 004c5d40
    MOV dword ptr [ECX + EAX*0x1 + 0x20],EBX ; 004c5d43
    MOV ECX,dword ptr [ESI + 0x128]     ; 004c5d47
    MOV EBX,dword ptr [EDX]             ; 004c5d4d | DAT_01b4d738
    SHL ECX,0x8                         ; 004c5d4f
    MOV dword ptr [EBX + EAX*0x1 + 0x24],ECX ; 004c5d52
    ADD EAX,0x30                        ; 004c5d56
    MOV EBX,dword ptr [ESI + 0x12c]     ; 004c5d59
    MOV ECX,dword ptr [EDX]             ; 004c5d5f | DAT_01b4d738
    SHL EBX,0x8                         ; 004c5d61
    MOV dword ptr [ECX + EAX*0x1 + -0x8],EBX ; 004c5d64
    CMP EAX,0xc0                        ; 004c5d68
    JNZ 0x004c5d32                      ; 004c5d6d
        ;   XREF to: 004c5d32 (CONDITIONAL_JUMP)  ; LAB_004c5d32
    MOV EBX,0x4                         ; 004c5d6f
    XOR EDI,EDI                         ; 004c5d74
    MOV EBP,0x2                         ; 004c5d76
    MOV dword ptr [ESP + 0x18],EDI      ; 004c5d7b
    MOV dword ptr [ESP + 0x14],EDI      ; 004c5d7f
    MOV dword ptr [ESP + 0x10],EDI      ; 004c5d83
    MOV dword ptr [ESP + 0xc],EDI       ; 004c5d87
    MOV dword ptr [ESP + 0x1c],EDI      ; 004c5d8b
    MOV EDI,0x1                         ; 004c5d8f
    MOV EAX,0x3                         ; 004c5d94
    PUSH EDI                            ; 004c5d99
    MOV dword ptr [ESP + 0xc],EBX       ; 004c5d9a
    MOV dword ptr [ESP + 0x28],EBP      ; 004c5d9e
    PUSH EDX                            ; 004c5da2 | DAT_01b4d738
    MOV dword ptr [ESP + 0x30],EAX      ; 004c5da3
    MOV dword ptr [ESP + 0x28],EDI      ; 004c5da7
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 004c5dab
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c5db0
    PUSH 0x5baca4                       ; 004c5db3 | DAT_005baca4
    MOV EDX,dword ptr [0x005ae704]      ; 004c5db8 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 004c5dbe | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004c5dbf
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004c5dc4
    PUSH 0x327                          ; 004c5dc7
    LEA EAX,[ESP + 0x8]                 ; 004c5dcc
    PUSH EAX                            ; 004c5dd0
    MOV ECX,dword ptr [0x005ae704]      ; 004c5dd1 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 004c5dd7 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0 ; 004c5dd8
        ;   XREF to: 0045f3c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 004c5ddd
    XOR EBX,EBX                         ; 004c5de0
    PUSH EBX                            ; 004c5de2
    MOV EBX,dword ptr [0x005ae704]      ; 004c5de3 | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 004c5de9 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 004c5dea
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c5def
    PUSH 0x205                          ; 004c5df2
    PUSH 0x0                            ; 004c5df7
    PUSH 0x0                            ; 004c5df9
    PUSH 0x1cc3290                      ; 004c5dfb
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040 ; 004c5e00
        ;   XREF to: 00453040 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040(CKeyFramedModel * this_ptr, int frame_index, CKeyFramedModelInstance * instance, int render_flags)
    MOV EDI,dword ptr [ESI + 0x110]     ; 004c5e05
    ADD ESP,0x10                        ; 004c5e0b
    TEST EDI,EDI                        ; 004c5e0e
    JZ 0x004c5e21                       ; 004c5e10
        ;   XREF to: 004c5e21 (CONDITIONAL_JUMP)  ; LAB_004c5e21
    MOV EBP,dword ptr [0x005ae704]      ; 004c5e12 | g_CDemonRenderer_PTR_005ae704
    PUSH EBP                            ; 004c5e18 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_popViewport_FUN_00460e70 ; 004c5e19
        ;   XREF to: 00460e70 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_popViewport_FUN_00460e70(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004c5e1e
    MOV EAX,[0x005be368]                ; 004c5e21 | g_CDemonSet_PTR_005be368
        ;   Label: LAB_004c5e21
    MOV dword ptr [EAX + 0x15aa88],0x0  ; 004c5e26 | g_CDemonSet_01e57284.rendering_mode
    MOV EAX,[0x014b9900]                ; 004c5e30 | g_CBitFont_PTR_014b9900
    MOV EDX,dword ptr [0x005b761c]      ; 004c5e35 | g_WindowWidth
    MOV dword ptr [ESP + 0x7c],EAX      ; 004c5e3b
    LEA EAX,[EDX*0x8 + 0x0]             ; 004c5e3f
    ADD EDX,EAX                         ; 004c5e46
    SHL EDX,0x6                         ; 004c5e48
    MOV ECX,0x280                       ; 004c5e4b
    MOV EAX,EDX                         ; 004c5e50
    SAR EDX,0x1f                        ; 004c5e52
    IDIV ECX                            ; 004c5e55
    MOV EDX,dword ptr [0x005b7620]      ; 004c5e57 | g_WindowHeight
    MOV EDI,EAX                         ; 004c5e5d
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c5e5f
    SUB EAX,EDX                         ; 004c5e66
    LEA EDX,[EAX*0x8 + 0x0]             ; 004c5e68
    MOV ECX,0x1e0                       ; 004c5e6f
    MOV EAX,EDX                         ; 004c5e74
    SAR EDX,0x1f                        ; 004c5e76
    IDIV ECX                            ; 004c5e79
    MOV EDX,dword ptr [0x005b761c]      ; 004c5e7b | g_WindowWidth
    MOV ECX,0x280                       ; 004c5e81
    SHL EDX,0x5                         ; 004c5e86
    MOV EBX,EAX                         ; 004c5e89
    MOV EAX,EDX                         ; 004c5e8b
    SAR EDX,0x1f                        ; 004c5e8d
    IDIV ECX                            ; 004c5e90
    MOV EBP,EAX                         ; 004c5e92
    MOV EAX,[0x005b7620]                ; 004c5e94 | g_WindowHeight
    SHL EAX,0x6                         ; 004c5e99
    MOV EDX,EAX                         ; 004c5e9c
    SHL EAX,0x3                         ; 004c5e9e
    SUB EAX,EDX                         ; 004c5ea1
    MOV EDX,EAX                         ; 004c5ea3
    MOV ECX,0x1e0                       ; 004c5ea5
    SAR EDX,0x1f                        ; 004c5eaa
    IDIV ECX                            ; 004c5ead
    MOV dword ptr [ESP + 0x78],EAX      ; 004c5eaf
    MOV EAX,dword ptr [ESI]             ; 004c5eb3
    INC EAX                             ; 004c5eb5
    MOV EDX,dword ptr [ESI + 0x4]       ; 004c5eb6
    MOV dword ptr [ESI],EAX             ; 004c5eb9
    CMP EAX,EDX                         ; 004c5ebb
    JLE 0x004c5ec1                      ; 004c5ebd
        ;   XREF to: 004c5ec1 (CONDITIONAL_JUMP)  ; LAB_004c5ec1
    MOV dword ptr [ESI],EDX             ; 004c5ebf
    MOV ECX,dword ptr [ESI + 0x110]     ; 004c5ec1
        ;   Label: LAB_004c5ec1
    TEST ECX,ECX                        ; 004c5ec7
    JNZ 0x004c5f68                      ; 004c5ec9
        ;   XREF to: 004c5f68 (CONDITIONAL_JUMP)  ; LAB_004c5f68
    MOV EAX,dword ptr [ESP + 0x78]      ; 004c5ecf
    ADD EAX,EBX                         ; 004c5ed3
    PUSH ECX                            ; 004c5ed5
    INC EAX                             ; 004c5ed6
    PUSH EAX                            ; 004c5ed7
    LEA EAX,[EDI + EBP*0x1 + 0x1]       ; 004c5ed8
    PUSH EAX                            ; 004c5edc
    MOV EAX,dword ptr [ESP + 0x84]      ; 004c5edd
    DEC EAX                             ; 004c5ee4
    PUSH EAX                            ; 004c5ee5
    LEA EAX,[EBP + -0x1]                ; 004c5ee6
    PUSH EAX                            ; 004c5ee9
    CALL engine_2d.c_fillRectColor_FUN_00403e60 ; 004c5eea
        ;   XREF to: 00403e60 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403e60(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004c5eef
    MOV ESI,dword ptr [ESP + 0x94]      ; 004c5ef2
    TEST ESI,ESI                        ; 004c5ef9
    JZ 0x004c5f68                       ; 004c5efb
        ;   XREF to: 004c5f68 (CONDITIONAL_JUMP)  ; LAB_004c5f68
    MOV EDX,EDI                         ; 004c5efd
    MOV EAX,EDI                         ; 004c5eff
    SAR EDX,0x1f                        ; 004c5f01
    SUB EAX,EDX                         ; 004c5f04
    SAR EAX,0x1                         ; 004c5f06
    PUSH ESI                            ; 004c5f08
    ADD EBP,EAX                         ; 004c5f09
    MOV EAX,dword ptr [ESP + 0x80]      ; 004c5f0b
    PUSH EAX                            ; 004c5f12
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 004c5f13
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0(CBitFont * this_ptr, char * text)
    MOV EDX,EAX                         ; 004c5f18
    SAR EDX,0x1f                        ; 004c5f1a
    SUB EAX,EDX                         ; 004c5f1d
    SAR EAX,0x1                         ; 004c5f1f
    MOV ECX,EBP                         ; 004c5f21
    MOV EDX,EBX                         ; 004c5f23
    SUB ECX,EAX                         ; 004c5f25
    MOV EAX,EBX                         ; 004c5f27
    SAR EDX,0x1f                        ; 004c5f29
    SUB EAX,EDX                         ; 004c5f2c
    SAR EAX,0x1                         ; 004c5f2e
    ADD ESP,0x8                         ; 004c5f30
    MOV EDX,dword ptr [ESP + 0x7c]      ; 004c5f33
    MOV EBX,dword ptr [ESP + 0x78]      ; 004c5f37
    MOV EDX,dword ptr [EDX + 0x316c]    ; 004c5f3b
    ADD EBX,EAX                         ; 004c5f41
    MOV EAX,EDX                         ; 004c5f43
    SAR EDX,0x1f                        ; 004c5f45
    SUB EAX,EDX                         ; 004c5f48
    SAR EAX,0x1                         ; 004c5f4a
    PUSH -0x1                           ; 004c5f4c
    PUSH 0xf8                           ; 004c5f4e
    SUB EBX,EAX                         ; 004c5f53
    PUSH EBX                            ; 004c5f55
    PUSH ECX                            ; 004c5f56
    PUSH ESI                            ; 004c5f57
    MOV ECX,dword ptr [ESP + 0x90]      ; 004c5f58
    PUSH ECX                            ; 004c5f5f
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004c5f60
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004c5f65
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004c5f68
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
        ;   Label: LAB_004c5f68
    POP EBX                             ; 004c5f6d
    ADD ESP,0x7c                        ; 004c5f6e
        ;   Label: LAB_004c5f6e
    POP EBP                             ; 004c5f71
    POP EDI                             ; 004c5f72
    POP ESI                             ; 004c5f73
    RET                                 ; 004c5f74
    MOV EAX,[0x005b7620]                ; 004c5f75 | g_WindowHeight
        ;   Label: LAB_004c5f75
    PUSH 0x0                            ; 004c5f7a
    DEC EAX                             ; 004c5f7c
    PUSH EAX                            ; 004c5f7d
    MOV EAX,[0x005b761c]                ; 004c5f7e | g_WindowWidth
    DEC EAX                             ; 004c5f83
    PUSH EAX                            ; 004c5f84
    PUSH 0x0                            ; 004c5f85
    PUSH 0x0                            ; 004c5f87
    CALL engine_2d.c_fillRectColor_FUN_00403e60 ; 004c5f89
        ;   XREF to: 00403e60 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403e60(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004c5f8e
    JMP 0x004c5a05                      ; 004c5f91
        ;   XREF to: 004c5a05 (UNCONDITIONAL_JUMP)  ; LAB_004c5a05
    MOV EDX,0xffff                      ; 004c5f96
        ;   Label: LAB_004c5f96
    JMP 0x004c5d05                      ; 004c5f9b
        ;   XREF to: 004c5d05 (UNCONDITIONAL_JUMP)  ; LAB_004c5d05

