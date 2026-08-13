; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_renderItemModel_FUN_004c0b40(CInventory *this_ptr,CDemonActor *item,int viewport_x,int viewport_y,int viewport_size,float rotation_y,int alpha)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   item
; int              Stack[0xc]:4   viewport_x
; int              Stack[0x10]:4   viewport_y
; int              Stack[0x14]:4   viewport_size
; float            Stack[0x18]:4   rotation_y
; int              Stack[0x1c]:4   alpha
; Local Variables:
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
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_inv.cpp_CInventory_renderSelectedItems_FUN_004c2150 at 004c22a9
;
; Referenced Globals:
;   TerminatedCString s_CGun_005871ad
;   TerminatedCString s_CKeyActor_005871b2
;   TerminatedCString s_CKeyActor_005871bc
;   TerminatedCString s_axe1_kfm_005871c6
;   TerminatedCString s_ax_kfm_005871cf
;   float FLOAT_005871d9 = 0.5
;   double DOUBLE_005871e1 = 2
;   float FLOAT_005871e9 = -0.5
;   float FLOAT_005871ed = 1.570796
;   float FLOAT_005871f1 = -1.570796
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 DAT_01b4d738
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;   core_inv.cpp_getItemModel_FUN_004beb40
;   crt_string.c__stricmp_FUN_00564520
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_popViewport_FUN_00460e70
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0
;   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00460e40
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0b40
        ;   Label: core_inv.cpp_CInventory_renderItemModel_FUN_004c0b40
    PUSH ESI                            ; 004c0b41
    PUSH EDI                            ; 004c0b42
    PUSH EBP                            ; 004c0b43
    MOV EBP,ESP                         ; 004c0b44
    SUB ESP,0x70                        ; 004c0b46
    MOV EBX,dword ptr [EBP + 0x18]      ; 004c0b49
    MOV EDI,dword ptr [EBP + 0x24]      ; 004c0b4c
    TEST EBX,EBX                        ; 004c0b4f
    JZ 0x004c0f4b                       ; 004c0b51
        ;   XREF to: 004c0f4b (CONDITIONAL_JUMP)  ; LAB_004c0f4b
    CMP dword ptr [0x005b761c],0x280    ; 004c0b57 | g_WindowWidth
    JLE 0x004c0bb4                      ; 004c0b61
        ;   XREF to: 004c0bb4 (CONDITIONAL_JUMP)  ; LAB_004c0bb4
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004c0b63
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c0b66
    ADD EDX,EAX                         ; 004c0b6d
    SHL EDX,0x7                         ; 004c0b6f
    MOV ECX,dword ptr [0x005b761c]      ; 004c0b72 | g_WindowWidth
    MOV EAX,EDX                         ; 004c0b78
    SAR EDX,0x1f                        ; 004c0b7a
    IDIV ECX                            ; 004c0b7d
    MOV dword ptr [EBP + 0x1c],EAX      ; 004c0b7f
    MOV EAX,dword ptr [EBP + 0x20]      ; 004c0b82
    SHL EAX,0x5                         ; 004c0b85
    MOV EDX,EAX                         ; 004c0b88
    SHL EAX,0x4                         ; 004c0b8a
    SUB EAX,EDX                         ; 004c0b8d
    MOV EDX,EAX                         ; 004c0b8f
    MOV ESI,dword ptr [0x005b7620]      ; 004c0b91 | g_WindowHeight
    SAR EDX,0x1f                        ; 004c0b97
    IDIV ESI                            ; 004c0b9a
    LEA EDX,[EDI*0x4 + 0x0]             ; 004c0b9c
    ADD EDX,EDI                         ; 004c0ba3
    SHL EDX,0x7                         ; 004c0ba5
    MOV dword ptr [EBP + 0x20],EAX      ; 004c0ba8
    MOV EAX,EDX                         ; 004c0bab
    SAR EDX,0x1f                        ; 004c0bad
    IDIV ECX                            ; 004c0bb0
    MOV EDI,EAX                         ; 004c0bb2
    MOV EAX,[0x005be368]                ; 004c0bb4 | g_CDemonSet_PTR_005be368
        ;   Label: LAB_004c0bb4
    MOV dword ptr [EAX + 0x15aa88],0x1  ; 004c0bb9 | g_CDemonSet_01e57284.rendering_mode
    MOV dword ptr [EAX + 0x15aa8c],0xffffb7d5 ; 004c0bc3 | g_CDemonSet_01e57284.light_direction.x
    MOV dword ptr [EAX + 0x15aa90],0xffffb7d5 ; 004c0bcd | g_CDemonSet_01e57284.light_direction.y
    MOV dword ptr [EAX + 0x15aa94],0x482b ; 004c0bd7 | g_CDemonSet_01e57284.light_direction.z
    MOV dword ptr [EAX + 0x15aa98],0x7d00 ; 004c0be1 | g_CDemonSet_01e57284.ambient_base_quick
    MOV EAX,[0x01bd1d80]                ; 004c0beb | DAT_01bd1d80
    MOV EDX,EAX                         ; 004c0bf0
    SAR EDX,0x1f                        ; 004c0bf2
    SHL EDX,0x2                         ; 004c0bf5
    SBB EAX,EDX                         ; 004c0bf8
    SAR EAX,0x2                         ; 004c0bfa
    MOV EDX,dword ptr [0x01cc30a4]      ; 004c0bfd | DAT_01cc30a4
    ADD EDX,EAX                         ; 004c0c03
    PUSH EDX                            ; 004c0c05
    MOV dword ptr [0x01cc30a4],EDX      ; 004c0c06 | DAT_01cc30a4
    CALL engine_matrix.c_interpolatedSin_FUN_004cca60 ; 004c0c0c
        ;   XREF to: 004cca60 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedSin_FUN_004cca60(int angle)
    ADD ESP,0x4                         ; 004c0c11
    MOV ESI,EAX                         ; 004c0c14
    MOV EAX,[0x01cc30a4]                ; 004c0c16 | DAT_01cc30a4
    PUSH EAX                            ; 004c0c1b
    CALL engine_matrix.c_interpolatedCos_FUN_004ccaa0 ; 004c0c1c
        ;   XREF to: 004ccaa0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedCos_FUN_004ccaa0(int angle)
    MOV EDX,0x482b                      ; 004c0c21
    ADD ESP,0x4                         ; 004c0c26
    MOV ECX,EAX                         ; 004c0c29
    MOV EAX,ESI                         ; 004c0c2b
    IMUL EDX                            ; 004c0c2d
    SHRD EAX,EDX,0x10                   ; 004c0c2f
    MOV EDX,dword ptr [0x005be368]      ; 004c0c33 | g_CDemonSet_PTR_005be368
    MOV dword ptr [EDX + 0x15aa8c],EAX  ; 004c0c39 | g_CDemonSet_01e57284.light_direction.x
    MOV EDX,0x482b                      ; 004c0c3f
    MOV EAX,ECX                         ; 004c0c44
    IMUL EDX                            ; 004c0c46
    SHRD EAX,EDX,0x10                   ; 004c0c48
    PUSH EDI                            ; 004c0c4c
    MOV EDX,dword ptr [0x005be368]      ; 004c0c4d | g_CDemonSet_PTR_005be368
    PUSH EDI                            ; 004c0c53
    MOV dword ptr [EDX + 0x15aa94],EAX  ; 004c0c54 | g_CDemonSet_01e57284.light_direction.z
    MOV EDX,dword ptr [EBP + 0x20]      ; 004c0c5a
    PUSH EDX                            ; 004c0c5d
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004c0c5e
    PUSH ECX                            ; 004c0c61
    MOV ESI,dword ptr [0x005ae704]      ; 004c0c62 | g_CDemonRenderer_PTR_005ae704
    PUSH ESI                            ; 004c0c68 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00460e40 ; 004c0c69
        ;   XREF to: 00460e40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00460e40(CDemonRenderer * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 004c0c6e
    PUSH EBX                            ; 004c0c71
    CALL core_inv.cpp_getItemModel_FUN_004beb40 ; 004c0c72
        ;   XREF to: 004beb40 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_inv.cpp_getItemModel_FUN_004beb40(CDemonActor * actor_ptr)
    ADD ESP,0x4                         ; 004c0c77
    PUSH EAX                            ; 004c0c7a
    MOV ESI,EAX                         ; 004c0c7b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004c0c7d
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x350]     ; 004c0c82
    MOV EAX,dword ptr [EDX]             ; 004c0c88
    MOV dword ptr [EBP + -0x70],EAX     ; 004c0c8a
    LEA EAX,[EDX + 0x4]                 ; 004c0c8d
    MOV EAX,dword ptr [EAX]             ; 004c0c90
    MOV dword ptr [EBP + -0x6c],EAX     ; 004c0c92
    LEA EAX,[EDX + 0x8]                 ; 004c0c95
    MOV EAX,dword ptr [EAX]             ; 004c0c98
    MOV dword ptr [EBP + -0x68],EAX     ; 004c0c9a
    MOV EAX,dword ptr [EDX + 0xc]       ; 004c0c9d
    ADD EDX,0xc                         ; 004c0ca0
    MOV dword ptr [EBP + -0x64],EAX     ; 004c0ca3
    LEA EAX,[EDX + 0x4]                 ; 004c0ca6
    MOV EAX,dword ptr [EAX]             ; 004c0ca9
    FLD float ptr [EBP + -0x64]         ; 004c0cab
    MOV dword ptr [EBP + -0x60],EAX     ; 004c0cae
    FSUB float ptr [EBP + -0x70]        ; 004c0cb1
    FLD float ptr [EBP + -0x60]         ; 004c0cb4
    LEA EAX,[EDX + 0x8]                 ; 004c0cb7
    FSUB float ptr [EBP + -0x6c]        ; 004c0cba
    MOV EAX,dword ptr [EAX]             ; 004c0cbd
    FXCH                                ; 004c0cbf
    FST float ptr [EBP + -0x58]         ; 004c0cc1
    FLD float ptr [0x005871d9]          ; 004c0cc4 | FLOAT_005871d9
    FXCH                                ; 004c0cca
    FMUL ST1                            ; 004c0ccc
    FXCH ST2                            ; 004c0cce
    FSTP float ptr [EBP + -0x54]        ; 004c0cd0
    MOV dword ptr [EBP + -0x5c],EAX     ; 004c0cd3
    FLD float ptr [EBP + -0x54]         ; 004c0cd6
    FLD float ptr [EBP + -0x5c]         ; 004c0cd9
    FSUB float ptr [EBP + -0x68]        ; 004c0cdc
    FXCH                                ; 004c0cdf
    FMUL ST2                            ; 004c0ce1
    FXCH                                ; 004c0ce3
    FST float ptr [EBP + -0x50]         ; 004c0ce5
    FMULP ST2                           ; 004c0ce8
    ADD ESP,0x4                         ; 004c0cea
    FXCH ST2                            ; 004c0ced
    FSTP float ptr [EBP + -0x1c]        ; 004c0cef
    FXCH                                ; 004c0cf2
    FSTP float ptr [EBP + -0x18]        ; 004c0cf4
    FLD float ptr [EBP + -0x1c]         ; 004c0cf7
    FXCH                                ; 004c0cfa
    FSTP float ptr [EBP + -0x14]        ; 004c0cfc
    FCOMP float ptr [EBP + -0x18]       ; 004c0cff
    FNSTSW AX                           ; 004c0d02
    SAHF                                ; 004c0d04
    JBE 0x004c0f52                      ; 004c0d05
        ;   XREF to: 004c0f52 (CONDITIONAL_JUMP)  ; LAB_004c0f52
    FLD float ptr [EBP + -0x1c]         ; 004c0d0b
    FCOMP float ptr [EBP + -0x14]       ; 004c0d0e
    FNSTSW AX                           ; 004c0d11
    SAHF                                ; 004c0d13
    JBE 0x004c0f52                      ; 004c0d14
        ;   XREF to: 004c0f52 (CONDITIONAL_JUMP)  ; LAB_004c0f52
    MOV EAX,dword ptr [EBP + -0x1c]     ; 004c0d1a
    MOV dword ptr [EBP + -0x4],EAX      ; 004c0d1d
        ;   Label: LAB_004c0d1d
    PUSH 0x5871ad                       ; 004c0d20 | = "CGun"
    PUSH EBX                            ; 004c0d25
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c0d26
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004c0d2b
    TEST EAX,EAX                        ; 004c0d2e
    JZ 0x004c0f6d                       ; 004c0d30
        ;   XREF to: 004c0f6d (CONDITIONAL_JUMP)  ; LAB_004c0f6d
    FLD float ptr [EBP + -0x4]          ; 004c0d36
        ;   Label: LAB_004c0d36
    FLD ST0                             ; 004c0d39
    FMUL double ptr [0x005871e1]        ; 004c0d3b | DOUBLE_005871e1
    FSTP ST1                            ; 004c0d41
    FSTP float ptr [EBP + -0x4]         ; 004c0d43
    FLD float ptr [EBP + -0x4]          ; 004c0d46
        ;   Label: LAB_004c0d46
    FCHS                                ; 004c0d49
    FMUL double ptr [0x005871e1]        ; 004c0d4b | DOUBLE_005871e1
    FSTP float ptr [EBP + -0x8]         ; 004c0d51
    MOV EAX,dword ptr [EBP + -0x8]      ; 004c0d54
    MOV dword ptr [EBP + -0x38],EAX     ; 004c0d57
    LEA EAX,[EBP + -0x40]               ; 004c0d5a
    PUSH EAX                            ; 004c0d5d
    MOV EDX,dword ptr [0x005ae704]      ; 004c0d5e | g_CDemonRenderer_PTR_005ae704
    XOR EDI,EDI                         ; 004c0d64
    PUSH EDX                            ; 004c0d66 | DAT_01b4d738
    MOV dword ptr [EBP + -0x40],EDI     ; 004c0d67
    MOV dword ptr [EBP + -0x3c],EDI     ; 004c0d6a
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700 ; 004c0d6d
        ;   XREF to: 00460700 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 004c0d72
    MOV ECX,dword ptr [0x005ae704]      ; 004c0d75 | g_CDemonRenderer_PTR_005ae704
    PUSH 0x42100000                     ; 004c0d7b
    PUSH ECX                            ; 004c0d80 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00 ; 004c0d81
        ;   XREF to: 00460c00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 004c0d86
    PUSH 0x2dd1184                      ; 004c0d89 | DAT_02dd1184
    MOV EDI,dword ptr [0x005ae704]      ; 004c0d8e | g_CDemonRenderer_PTR_005ae704
    PUSH EDI                            ; 004c0d94 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780 ; 004c0d95
        ;   XREF to: 00460780 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004c0d9a
    PUSH 0x2dd1184                      ; 004c0d9d | DAT_02dd1184
    MOV EAX,[0x005ae704]                ; 004c0da2 | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 004c0da7 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 004c0da8
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    FLD float ptr [EBP + -0x70]         ; 004c0dad
    FADD float ptr [EBP + -0x64]        ; 004c0db0
    FST float ptr [EBP + -0x34]         ; 004c0db3
    FLD float ptr [0x005871e9]          ; 004c0db6 | FLOAT_005871e9
    FXCH                                ; 004c0dbc
    FMUL ST1                            ; 004c0dbe
    FLD float ptr [EBP + -0x68]         ; 004c0dc0
    FLD float ptr [EBP + -0x6c]         ; 004c0dc3
    FADD float ptr [EBP + -0x60]        ; 004c0dc6
    FXCH                                ; 004c0dc9
    FADD float ptr [EBP + -0x5c]        ; 004c0dcb
    FXCH                                ; 004c0dce
    FST float ptr [EBP + -0x30]         ; 004c0dd0
    FMUL ST3                            ; 004c0dd3
    FXCH                                ; 004c0dd5
    FST float ptr [EBP + -0x2c]         ; 004c0dd7
    FMULP ST3                           ; 004c0dda
    ADD ESP,0x8                         ; 004c0ddc
    MOV EAX,dword ptr [EBP + 0x28]      ; 004c0ddf
    XOR EDX,EDX                         ; 004c0de2
    PUSH 0x5871bc                       ; 004c0de4 | = "CKeyActor"
    MOV dword ptr [0x01c038f4],EDX      ; 004c0de9 | DAT_01c038f4
    MOV dword ptr [EBP + -0x28],EDX     ; 004c0def
    MOV dword ptr [EBP + -0x20],EDX     ; 004c0df2
    MOV dword ptr [EBP + -0x24],EAX     ; 004c0df5
    PUSH EBX                            ; 004c0df8
    FXCH                                ; 004c0df9
    FSTP float ptr [EBP + -0x4c]        ; 004c0dfb
    FSTP float ptr [EBP + -0x48]        ; 004c0dfe
    FSTP float ptr [EBP + -0x44]        ; 004c0e01
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c0e04
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004c0e09
    TEST EAX,EAX                        ; 004c0e0c
    JZ 0x004c0e1c                       ; 004c0e0e
        ;   XREF to: 004c0e1c (CONDITIONAL_JUMP)  ; LAB_004c0e1c
    FLD float ptr [EBP + -0x28]         ; 004c0e10
    FADD float ptr [0x005871ed]         ; 004c0e13 | FLOAT_005871ed
    FSTP float ptr [EBP + -0x28]        ; 004c0e19
    MOV EAX,[0x01cc56dc]                ; 004c0e1c | g_CMeleeActorType_01cc56a4.name_hash
        ;   Label: LAB_004c0e1c
    PUSH EAX                            ; 004c0e21
    PUSH EBX                            ; 004c0e22
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c0e23
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004c0e28
    MOV EBX,EAX                         ; 004c0e2b
    TEST EAX,EAX                        ; 004c0e2d
    JZ 0x004c0e94                       ; 004c0e2f
        ;   XREF to: 004c0e94 (CONDITIONAL_JUMP)  ; LAB_004c0e94
    PUSH 0x5871c6                       ; 004c0e31 | = "axe1.kfm"
    ADD EAX,0x1c8                       ; 004c0e36
    PUSH EAX                            ; 004c0e3b
    CALL crt_string.c__stricmp_FUN_00564520 ; 004c0e3c
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004c0e41
    TEST EAX,EAX                        ; 004c0e44
    JNZ 0x004c0e62                      ; 004c0e46
        ;   XREF to: 004c0e62 (CONDITIONAL_JUMP)  ; LAB_004c0e62
    FLD float ptr [EBP + -0x20]         ; 004c0e48
    FLD float ptr [0x005871f1]          ; 004c0e4b | FLOAT_005871f1
    FLD float ptr [EBP + -0x28]         ; 004c0e51
    FADD ST0,ST1                        ; 004c0e54
    FXCH ST2                            ; 004c0e56
    FADDP                               ; 004c0e58
    FXCH                                ; 004c0e5a
    FSTP float ptr [EBP + -0x28]        ; 004c0e5c
    FSTP float ptr [EBP + -0x20]        ; 004c0e5f
    PUSH 0x5871cf                       ; 004c0e62 | = "ax.kfm"
        ;   Label: LAB_004c0e62
    LEA EAX,[EBX + 0x1c8]               ; 004c0e67
    PUSH EAX                            ; 004c0e6d
    CALL crt_string.c__stricmp_FUN_00564520 ; 004c0e6e
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004c0e73
    TEST EAX,EAX                        ; 004c0e76
    JNZ 0x004c0e94                      ; 004c0e78
        ;   XREF to: 004c0e94 (CONDITIONAL_JUMP)  ; LAB_004c0e94
    FLD float ptr [EBP + -0x20]         ; 004c0e7a
    FLD float ptr [0x005871f1]          ; 004c0e7d | FLOAT_005871f1
    FLD float ptr [EBP + -0x28]         ; 004c0e83
    FADD ST0,ST1                        ; 004c0e86
    FXCH ST2                            ; 004c0e88
    FADDP                               ; 004c0e8a
    FXCH                                ; 004c0e8c
    FSTP float ptr [EBP + -0x28]        ; 004c0e8e
    FSTP float ptr [EBP + -0x20]        ; 004c0e91
    PUSH 0x0                            ; 004c0e94
        ;   Label: LAB_004c0e94
    LEA EAX,[EBP + -0x28]               ; 004c0e96
    PUSH EAX                            ; 004c0e99
    MOV EDX,dword ptr [0x005ae704]      ; 004c0e9a | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 004c0ea0 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 004c0ea1
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 004c0ea6
    LEA EAX,[EBP + -0x4c]               ; 004c0ea9
    PUSH EAX                            ; 004c0eac
    PUSH 0x2dd1184                      ; 004c0ead | DAT_02dd1184
    MOV ECX,dword ptr [0x005ae704]      ; 004c0eb2 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 004c0eb8 | DAT_01b4d738
    MOV EBX,dword ptr [EBP + 0x2c]      ; 004c0eb9
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 004c0ebc
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 004c0ec1
    CMP EBX,0xfde8                      ; 004c0ec4
    JGE 0x004c0f88                      ; 004c0eca
        ;   XREF to: 004c0f88 (CONDITIONAL_JUMP)  ; LAB_004c0f88
    PUSH EBX                            ; 004c0ed0
    MOV EAX,[0x005ae704]                ; 004c0ed1 | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 004c0ed6 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 004c0ed7
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004c0edc
    PUSH 0x1                            ; 004c0edf
    MOV EDX,dword ptr [0x005ae704]      ; 004c0ee1 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 004c0ee7 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0 ; 004c0ee8
        ;   XREF to: 004619f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 004c0eed
    PUSH 0x2e7                          ; 004c0ef0
    PUSH 0x0                            ; 004c0ef5
    PUSH ESI                            ; 004c0ef7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 004c0ef8
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004c0efd
    MOV ECX,dword ptr [0x005ae704]      ; 004c0f00 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 004c0f06 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0 ; 004c0f07
        ;   XREF to: 00461db0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004c0f0c
    MOV EBX,dword ptr [0x005ae704]      ; 004c0f0f | g_CDemonRenderer_PTR_005ae704
        ;   Label: LAB_004c0f0f
    PUSH EBX                            ; 004c0f15 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 004c0f16
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004c0f1b
    MOV ESI,dword ptr [0x005ae704]      ; 004c0f1e | g_CDemonRenderer_PTR_005ae704
    PUSH ESI                            ; 004c0f24 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 004c0f25
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004c0f2a
    MOV EDI,dword ptr [0x005ae704]      ; 004c0f2d | g_CDemonRenderer_PTR_005ae704
    PUSH EDI                            ; 004c0f33 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_popViewport_FUN_00460e70 ; 004c0f34
        ;   XREF to: 00460e70 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_popViewport_FUN_00460e70(CDemonRenderer * this_ptr)
    MOV EAX,[0x005be368]                ; 004c0f39 | g_CDemonSet_PTR_005be368 | g_CDemonSet_01e57284
    ADD ESP,0x4                         ; 004c0f3e
    MOV dword ptr [EAX + 0x15aa88],0x0  ; 004c0f41 | g_CDemonSet_01e57284.rendering_mode
    MOV ESP,EBP                         ; 004c0f4b
        ;   Label: LAB_004c0f4b
    POP EBP                             ; 004c0f4d
    POP EDI                             ; 004c0f4e
    POP ESI                             ; 004c0f4f
    POP EBX                             ; 004c0f50
    RET                                 ; 004c0f51
    FLD float ptr [EBP + -0x18]         ; 004c0f52
        ;   Label: LAB_004c0f52
    FCOMP float ptr [EBP + -0x14]       ; 004c0f55
    FNSTSW AX                           ; 004c0f58
    SAHF                                ; 004c0f5a
    JBE 0x004c0f65                      ; 004c0f5b
        ;   XREF to: 004c0f65 (CONDITIONAL_JUMP)  ; LAB_004c0f65
    MOV EAX,dword ptr [EBP + -0x18]     ; 004c0f5d
    JMP 0x004c0d1d                      ; 004c0f60
        ;   XREF to: 004c0d1d (UNCONDITIONAL_JUMP)  ; LAB_004c0d1d
    MOV EAX,dword ptr [EBP + -0x14]     ; 004c0f65
        ;   Label: LAB_004c0f65
    JMP 0x004c0d1d                      ; 004c0f68
        ;   XREF to: 004c0d1d (UNCONDITIONAL_JUMP)  ; LAB_004c0d1d
    PUSH 0x5871b2                       ; 004c0f6d | = "CKeyActor"
        ;   Label: LAB_004c0f6d
    PUSH EBX                            ; 004c0f72
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c0f73
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004c0f78
    TEST EAX,EAX                        ; 004c0f7b
    JNZ 0x004c0d36                      ; 004c0f7d
        ;   XREF to: 004c0d36 (CONDITIONAL_JUMP)  ; LAB_004c0d36
    JMP 0x004c0d46                      ; 004c0f83
        ;   XREF to: 004c0d46 (UNCONDITIONAL_JUMP)  ; LAB_004c0d46
    PUSH -0x1                           ; 004c0f88
        ;   Label: LAB_004c0f88
    PUSH 0x0                            ; 004c0f8a
    PUSH ESI                            ; 004c0f8c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 004c0f8d
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004c0f92
    JMP 0x004c0f0f                      ; 004c0f95
        ;   XREF to: 004c0f0f (UNCONDITIONAL_JUMP)  ; LAB_004c0f0f

