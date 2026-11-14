; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_water_cpp_CWater_render_FUN_005a9f10(CWater *this_ptr,int render_mode)
;
; Parameters:
; CWater *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   render_mode
; Local Variables:
; undefined4       Stack[-0x88]:4  local_88
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
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0 at 0054e600
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 at 0054f82c
;   core_set.cpp_FUN_00550580 at 005508fd
;
; Referenced Globals:
;   undefined4 DAT_005f9252
;   undefined4 DAT_005f925a
;   undefined4 DAT_005f9262
;   undefined4 DAT_005f926a
;   undefined4 DAT_00607bac
;   undefined4 DAT_00612560
;   CGame* g_CGamePtr = 01ccf390
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_00625c94
;   undefined4 DAT_00625c98
;   undefined4 DAT_00625c9c
;   undefined4 DAT_00625e1c
;   undefined4 DAT_00625e38
;   undefined4 DAT_00625e3c
;   undefined4 DAT_00625e44
;   ... and 28 more
;
; Called Functions:
;   core_set.cpp_FUN_00552d40
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_00482540
;   engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120
;   engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_00482780
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00483ce0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9f10
        ;   Label: core_water.cpp_CWater_render_FUN_005a9f10
    PUSH ESI                            ; 005a9f11
    PUSH EDI                            ; 005a9f12
    PUSH EBP                            ; 005a9f13
    SUB ESP,0x78                        ; 005a9f14
    MOV EBP,dword ptr [ESP + 0x8c]      ; 005a9f17
    TEST dword ptr [EBP + 0x4],0x7fffffff ; 005a9f1e
    JZ 0x005aa47d                       ; 005a9f25
        ;   XREF to: 005aa47d (CONDITIONAL_JUMP)  ; LAB_005aa47d
    MOV ECX,dword ptr [0x02c8afd4]      ; 005a9f2b | DAT_02c8afd4
    ADD ECX,dword ptr [0x01c43530]      ; 005a9f31 | DAT_01c43530
    MOV EBX,dword ptr [0x00625c98]      ; 005a9f37 | DAT_00625c98
    MOV dword ptr [0x02c8afd4],ECX      ; 005a9f3d | DAT_02c8afd4
    CMP ECX,EBX                         ; 005a9f43
    JG 0x005aa485                       ; 005a9f45
        ;   XREF to: 005aa485 (CONDITIONAL_JUMP)  ; LAB_005aa485
    MOV EAX,[0x0061d95c]                ; 005a9f4b | g_CGamePtr
        ;   Label: LAB_005a9f4b
    MOV EAX,dword ptr [EAX + 0x294]     ; 005a9f50 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP + 0x58],EAX      ; 005a9f56
    FLD float ptr [0x02c8afc0]          ; 005a9f5a | DAT_02c8afc0
    FMUL float ptr [ESP + 0x58]         ; 005a9f60
    FLD float ptr [0x02c8afc4]          ; 005a9f64 | DAT_02c8afc4
    FMUL float ptr [ESP + 0x58]         ; 005a9f6a
    FXCH                                ; 005a9f6e
    FLD double ptr [0x005f9252]         ; 005a9f70 | DAT_005f9252
    FXCH                                ; 005a9f76
    FMUL ST1                            ; 005a9f78
    FXCH ST2                            ; 005a9f7a
    FMULP                               ; 005a9f7c
    FILD dword ptr [0x02c9300c]         ; 005a9f7e | DAT_02c9300c
    FILD dword ptr [0x02c93010]         ; 005a9f84 | DAT_02c93010
    FXCH ST3                            ; 005a9f8a
    FADD ST0,ST1                        ; 005a9f8c
    FXCH ST2                            ; 005a9f8e
    FADD ST0,ST3                        ; 005a9f90
    FXCH ST2                            ; 005a9f92
    FSTP ST1                            ; 005a9f94
    FXCH                                ; 005a9f96
    FSTP ST2                            ; 005a9f98
    CALL crt_math.c_round_FUN_005c03a0  ; 005a9f9a
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 005a9f9f
    CALL crt_math.c_round_FUN_005c03a0  ; 005a9fa1
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 005a9fa6
    FISTP dword ptr [0x02c9300c]        ; 005a9fa8 | DAT_02c9300c
    MOV ECX,dword ptr [0x02c9300c]      ; 005a9fae | DAT_02c9300c
    FISTP dword ptr [0x02c93010]        ; 005a9fb4 | DAT_02c93010
    CMP ECX,0x1000000                   ; 005a9fba
    JL 0x005a9fce                       ; 005a9fc0
        ;   XREF to: 005a9fce (CONDITIONAL_JUMP)  ; LAB_005a9fce
    LEA EBX,[ECX + 0xff000000]          ; 005a9fc2
    MOV dword ptr [0x02c9300c],EBX      ; 005a9fc8 | DAT_02c9300c
    CMP dword ptr [0x02c9300c],0x0      ; 005a9fce | DAT_02c9300c
        ;   Label: LAB_005a9fce
    JL 0x005aa4b2                       ; 005a9fd5
        ;   XREF to: 005aa4b2 (CONDITIONAL_JUMP)  ; LAB_005aa4b2
    MOV EDI,dword ptr [0x02c93010]      ; 005a9fdb | DAT_02c93010
        ;   Label: LAB_005a9fdb
    CMP EDI,0x1000000                   ; 005a9fe1
    JL 0x005a9ff4                       ; 005a9fe7
        ;   XREF to: 005a9ff4 (CONDITIONAL_JUMP)  ; LAB_005a9ff4
    LEA EAX,[EDI + 0xff000000]          ; 005a9fe9
    MOV [0x02c93010],EAX                ; 005a9fef | DAT_02c93010
    CMP dword ptr [0x02c93010],0x0      ; 005a9ff4 | DAT_02c93010
        ;   Label: LAB_005a9ff4
    JL 0x005aa4bd                       ; 005a9ffb
        ;   XREF to: 005aa4bd (CONDITIONAL_JUMP)  ; LAB_005aa4bd
    MOV EAX,[0x02c9300c]                ; 005aa001 | DAT_02c9300c
        ;   Label: LAB_005aa001
    MOV [0x00625e38],EAX                ; 005aa006 | DAT_00625e38
    MOV EAX,[0x02c93010]                ; 005aa00b | DAT_02c93010
    MOV [0x00625e3c],EAX                ; 005aa010 | DAT_00625e3c
    MOV EAX,[0x02c9300c]                ; 005aa015 | DAT_02c9300c
    ADD EAX,0x1000000                   ; 005aa01a
    MOV [0x00625e44],EAX                ; 005aa01f | DAT_00625e44
    MOV EAX,[0x02c93010]                ; 005aa024 | DAT_02c93010
    MOV [0x00625e48],EAX                ; 005aa029 | DAT_00625e48
    MOV EAX,[0x00625e44]                ; 005aa02e | DAT_00625e44
    MOV [0x00625e50],EAX                ; 005aa033 | DAT_00625e50
    MOV EAX,[0x02c93010]                ; 005aa038 | DAT_02c93010
    ADD EAX,0x1000000                   ; 005aa03d
    MOV [0x00625e54],EAX                ; 005aa042 | DAT_00625e54
    MOV EAX,[0x02c9300c]                ; 005aa047 | DAT_02c9300c
    MOV EDX,0xffff                      ; 005aa04c
    MOV [0x00625e5c],EAX                ; 005aa051 | DAT_00625e5c
    MOV EAX,[0x00625e54]                ; 005aa056 | DAT_00625e54
    MOV EBX,dword ptr [0x00625c98]      ; 005aa05b | DAT_00625c98
    MOV [0x00625e60],EAX                ; 005aa061 | DAT_00625e60
    MOV EAX,[0x02c8afd4]                ; 005aa066 | DAT_02c8afd4
    IMUL EDX                            ; 005aa06b
    IDIV EBX                            ; 005aa06d
    MOV [0x02c93004],EAX                ; 005aa06f | DAT_02c93004
    CMP EAX,0xffff                      ; 005aa074
    JLE 0x005aa4c8                      ; 005aa079
        ;   XREF to: 005aa4c8 (CONDITIONAL_JUMP)  ; LAB_005aa4c8
    MOV dword ptr [0x02c93004],0xffff   ; 005aa07f | DAT_02c93004
    MOV EDX,dword ptr [0x02c8afd8]      ; 005aa089 | DAT_02c8afd8
        ;   Label: LAB_005aa089
    LEA EAX,[EDX*0x4 + 0x0]             ; 005aa08f
    SUB EAX,EDX                         ; 005aa096
    SHL EAX,0x3                         ; 005aa098
    ADD EAX,0x625c9c                    ; 005aa09b | DAT_00625c9c
    PUSH EAX                            ; 005aa0a0
    MOV ESI,dword ptr [0x00612560]      ; 005aa0a1 | DAT_00612560
    PUSH ESI                            ; 005aa0a7 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 005aa0a8
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EAX,[0x0061d95c]                ; 005aa0ad | g_CGamePtr | g_CGameInstance
    FLD float ptr [EAX + 0x294]         ; 005aa0b2 | g_CGameInstance.delta_time_float
    FMUL float ptr [0x005f925a]         ; 005aa0b8 | DAT_005f925a
    FMUL double ptr [0x005f9262]        ; 005aa0be | DAT_005f9262
    FMUL double ptr [0x005f926a]        ; 005aa0c4 | DAT_005f926a
    XOR EDI,EDI                         ; 005aa0ca
    MOV EDX,dword ptr [0x02c8afdc]      ; 005aa0cc | DAT_02c8afdc
    ADD ESP,0x8                         ; 005aa0d2
    MOV dword ptr [0x01c51cac],EDI      ; 005aa0d5 | DAT_01c51cac
    FLD float ptr [0x02c93008]          ; 005aa0db | DAT_02c93008
    FXCH                                ; 005aa0e1
    FADD ST0,ST1                        ; 005aa0e3
    MOV dword ptr [ESP + 0x64],EDI      ; 005aa0e5
    FSTP ST1                            ; 005aa0e9
    FSTP float ptr [0x02c93008]         ; 005aa0eb | DAT_02c93008
    TEST EDX,EDX                        ; 005aa0f1
    JLE 0x005aa47d                      ; 005aa0f3
        ;   XREF to: 005aa47d (CONDITIONAL_JUMP)  ; LAB_005aa47d
    MOV dword ptr [ESP + 0x68],EDI      ; 005aa0f9
    MOV EAX,dword ptr [ESP + 0x68]      ; 005aa0fd
        ;   Label: LAB_005aa0fd
    MOV EAX,dword ptr [EAX + 0x2c8afe0] ; 005aa101 | DAT_02c8afe0
    MOV dword ptr [ESP + 0x6c],EAX      ; 005aa107
    MOV EAX,dword ptr [ESP + 0x68]      ; 005aa10b
    MOV EAX,dword ptr [EAX + 0x2c8efe0] ; 005aa10f | DAT_02c8efe0
    MOV dword ptr [ESP + 0x70],EAX      ; 005aa115
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005aa119
    MOV dword ptr [ESP + 0x74],EAX      ; 005aa11d
    FILD dword ptr [ESP + 0x74]         ; 005aa121
    FST float ptr [ESP + 0x5c]          ; 005aa125
    FMUL float ptr [EBP + 0x8]          ; 005aa129
    FSTP float ptr [ESP + 0xc]          ; 005aa12c
    MOV EAX,dword ptr [EBP + 0x4]       ; 005aa130
    MOV dword ptr [ESP + 0x10],EAX      ; 005aa133
    MOV EAX,dword ptr [ESP + 0x70]      ; 005aa137
    MOV dword ptr [ESP + 0x74],EAX      ; 005aa13b
    FILD dword ptr [ESP + 0x74]         ; 005aa13f
    FST float ptr [ESP + 0x60]          ; 005aa143
    FMUL float ptr [EBP + 0x8]          ; 005aa147
    LEA EDI,[ESP + 0x3c]                ; 005aa14a
    LEA ESI,[ESP + 0xc]                 ; 005aa14e
    FLD float ptr [ESP + 0xc]           ; 005aa152
    FADD float ptr [0x02c8afc8]         ; 005aa156 | DAT_02c8afc8
    FLD float ptr [ESP + 0x10]          ; 005aa15c
    LEA EAX,[ESP + 0xc]                 ; 005aa160
    FADD float ptr [0x02c8afcc]         ; 005aa164 | DAT_02c8afcc
    PUSH EAX                            ; 005aa16a
    MOV EAX,[0x00612560]                ; 005aa16b | DAT_00612560
    FXCH ST2                            ; 005aa170
    FSTP float ptr [ESP + 0x18]         ; 005aa172
    FSTP float ptr [ESP + 0x10]         ; 005aa176
    FSTP float ptr [ESP + 0x14]         ; 005aa17a
    FLD float ptr [ESP + 0x18]          ; 005aa17e
    FADD float ptr [0x02c8afd0]         ; 005aa182 | DAT_02c8afd0
    PUSH EAX                            ; 005aa188 | DAT_01bc120c
    FSTP float ptr [ESP + 0x1c]         ; 005aa189
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 005aa18d
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 005aa192
    XOR EDX,EDX                         ; 005aa195
    MOVSD ES:EDI,ESI                    ; 005aa197
    MOVSD ES:EDI,ESI                    ; 005aa198
    MOVSD ES:EDI,ESI                    ; 005aa199
    MOV dword ptr [ESP + 0xc],EDX       ; 005aa19a
    MOV dword ptr [ESP + 0x10],EDX      ; 005aa19e
    MOV dword ptr [ESP + 0x14],EDX      ; 005aa1a2
    CMP dword ptr [EBP],0x0             ; 005aa1a6
    JZ 0x005aa1d8                       ; 005aa1aa
        ;   XREF to: 005aa1d8 (CONDITIONAL_JUMP)  ; LAB_005aa1d8
    FLD float ptr [0x005f925a]          ; 005aa1ac | DAT_005f925a
    FLD float ptr [ESP + 0x60]          ; 005aa1b2
    FMUL ST1                            ; 005aa1b6
    FMUL double ptr [0x005f9262]        ; 005aa1b8 | DAT_005f9262
    FLD float ptr [ESP + 0x5c]          ; 005aa1be
    FMULP ST2                           ; 005aa1c2
    FADDP                               ; 005aa1c4
    FADD float ptr [0x02c93008]         ; 005aa1c6 | DAT_02c93008
    FSIN                                ; 005aa1cc
    FMUL float ptr [0x00625c94]         ; 005aa1ce | DAT_00625c94
    FSTP float ptr [ESP + 0x10]         ; 005aa1d4
    LEA EBX,[ESP + 0x24]                ; 005aa1d8
        ;   Label: LAB_005aa1d8
    LEA EAX,[ESP + 0xc]                 ; 005aa1dc
    MOV EDX,dword ptr [0x00612560]      ; 005aa1e0 | DAT_00612560
    FLD float ptr [EAX]                 ; 005aa1e6
    FMUL float ptr [0x00607bac]         ; 005aa1e8 | DAT_00607bac
    FISTP dword ptr [EBX]               ; 005aa1ee
    FLD float ptr [EAX + 0x4]           ; 005aa1f0
    FMUL float ptr [0x00607bac]         ; 005aa1f3 | DAT_00607bac
    FISTP dword ptr [EBX + 0x4]         ; 005aa1f9
    FLD float ptr [EAX + 0x8]           ; 005aa1fc
    FMUL float ptr [0x00607bac]         ; 005aa1ff | DAT_00607bac
    FISTP dword ptr [EBX + 0x8]         ; 005aa205
    LEA EAX,[ESP + 0x24]                ; 005aa208
    PUSH EAX                            ; 005aa20c
    MOV EAX,dword ptr [EDX]             ; 005aa20d | DAT_01bc120c
    PUSH EAX                            ; 005aa20f
    CALL engine_special.cpp_FUN_00580173 ; 005aa210
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005aa215
    PUSH 0x0                            ; 005aa218
    LEA EAX,[ESP + 0x40]                ; 005aa21a
    PUSH EAX                            ; 005aa21e
    LEA EAX,[ESP + 0x14]                ; 005aa21f
    PUSH EAX                            ; 005aa223
    MOV EDI,dword ptr [0x00622c18]      ; 005aa224 | g_CDemonSetPtr
    PUSH EDI                            ; 005aa22a | g_CDemonSetInstance
    CALL core_set.cpp_FUN_00552d40      ; 005aa22b
        ;   XREF to: 00552d40 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_00552d40(CDemonSet * this_ptr, CVector3f * vertex_position, CVector3f * position_offset, int vertex_index)
    ADD ESP,0x10                        ; 005aa230
    MOV EAX,dword ptr [EBP + 0x8]       ; 005aa233
    MOV dword ptr [ESP + 0xc],EAX       ; 005aa236
    CMP dword ptr [EBP],0x0             ; 005aa23a
    JZ 0x005aa27d                       ; 005aa23e
        ;   XREF to: 005aa27d (CONDITIONAL_JUMP)  ; LAB_005aa27d
    MOV EDX,dword ptr [ESP + 0x70]      ; 005aa240
    MOV dword ptr [ESP + 0x74],EDX      ; 005aa244
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005aa248
    FLD float ptr [0x005f925a]          ; 005aa24c | DAT_005f925a
    FILD dword ptr [ESP + 0x74]         ; 005aa252
    FMUL ST1                            ; 005aa256
    INC EAX                             ; 005aa258
    FMUL double ptr [0x005f9262]        ; 005aa259 | DAT_005f9262
    MOV dword ptr [ESP + 0x74],EAX      ; 005aa25f
    FILD dword ptr [ESP + 0x74]         ; 005aa263
    FMULP ST2                           ; 005aa267
    FADDP                               ; 005aa269
    FADD float ptr [0x02c93008]         ; 005aa26b | DAT_02c93008
    FSIN                                ; 005aa271
    FMUL float ptr [0x00625c94]         ; 005aa273 | DAT_00625c94
    FSTP float ptr [ESP + 0x10]         ; 005aa279
    LEA EBX,[ESP + 0x18]                ; 005aa27d
        ;   Label: LAB_005aa27d
    LEA EAX,[ESP + 0xc]                 ; 005aa281
    MOV EDX,dword ptr [0x00612560]      ; 005aa285 | DAT_00612560
    FLD float ptr [EAX]                 ; 005aa28b
    FMUL float ptr [0x00607bac]         ; 005aa28d | DAT_00607bac
    FISTP dword ptr [EBX]               ; 005aa293
    FLD float ptr [EAX + 0x4]           ; 005aa295
    FMUL float ptr [0x00607bac]         ; 005aa298 | DAT_00607bac
    FISTP dword ptr [EBX + 0x4]         ; 005aa29e
    FLD float ptr [EAX + 0x8]           ; 005aa2a1
    FMUL float ptr [0x00607bac]         ; 005aa2a4 | DAT_00607bac
    FISTP dword ptr [EBX + 0x8]         ; 005aa2aa
    LEA EAX,[ESP + 0x18]                ; 005aa2ad
    PUSH EAX                            ; 005aa2b1
    MOV EAX,dword ptr [EDX]             ; 005aa2b2 | DAT_01bc120c
    ADD EAX,0x30                        ; 005aa2b4
    PUSH EAX                            ; 005aa2b7
    CALL engine_special.cpp_FUN_00580173 ; 005aa2b8
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005aa2bd
    PUSH 0x1                            ; 005aa2c0
    LEA EAX,[ESP + 0x40]                ; 005aa2c2
    PUSH EAX                            ; 005aa2c6
    LEA EAX,[ESP + 0x14]                ; 005aa2c7
    PUSH EAX                            ; 005aa2cb
    MOV EDX,dword ptr [0x00622c18]      ; 005aa2cc | g_CDemonSetPtr
    PUSH EDX                            ; 005aa2d2 | g_CDemonSetInstance
    CALL core_set.cpp_FUN_00552d40      ; 005aa2d3
        ;   XREF to: 00552d40 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_00552d40(CDemonSet * this_ptr, CVector3f * vertex_position, CVector3f * position_offset, int vertex_index)
    ADD ESP,0x10                        ; 005aa2d8
    MOV EAX,dword ptr [EBP + 0x8]       ; 005aa2db
    MOV dword ptr [ESP + 0x14],EAX      ; 005aa2de
    CMP dword ptr [EBP],0x0             ; 005aa2e2
    JZ 0x005aa326                       ; 005aa2e6
        ;   XREF to: 005aa326 (CONDITIONAL_JUMP)  ; LAB_005aa326
    MOV EAX,dword ptr [ESP + 0x70]      ; 005aa2e8
    INC EAX                             ; 005aa2ec
    MOV dword ptr [ESP + 0x74],EAX      ; 005aa2ed
    MOV EBX,dword ptr [ESP + 0x6c]      ; 005aa2f1
    FLD float ptr [0x005f925a]          ; 005aa2f5 | DAT_005f925a
    FILD dword ptr [ESP + 0x74]         ; 005aa2fb
    FMUL ST1                            ; 005aa2ff
    INC EBX                             ; 005aa301
    FMUL double ptr [0x005f9262]        ; 005aa302 | DAT_005f9262
    MOV dword ptr [ESP + 0x74],EBX      ; 005aa308
    FILD dword ptr [ESP + 0x74]         ; 005aa30c
    FMULP ST2                           ; 005aa310
    FADDP                               ; 005aa312
    FADD float ptr [0x02c93008]         ; 005aa314 | DAT_02c93008
    FSIN                                ; 005aa31a
    FMUL float ptr [0x00625c94]         ; 005aa31c | DAT_00625c94
    FSTP float ptr [ESP + 0x10]         ; 005aa322
    LEA EBX,[ESP + 0x30]                ; 005aa326
        ;   Label: LAB_005aa326
    LEA EAX,[ESP + 0xc]                 ; 005aa32a
    MOV EDX,dword ptr [0x00612560]      ; 005aa32e | DAT_00612560
    FLD float ptr [EAX]                 ; 005aa334
    FMUL float ptr [0x00607bac]         ; 005aa336 | DAT_00607bac
    FISTP dword ptr [EBX]               ; 005aa33c
    FLD float ptr [EAX + 0x4]           ; 005aa33e
    FMUL float ptr [0x00607bac]         ; 005aa341 | DAT_00607bac
    FISTP dword ptr [EBX + 0x4]         ; 005aa347
    FLD float ptr [EAX + 0x8]           ; 005aa34a
    FMUL float ptr [0x00607bac]         ; 005aa34d | DAT_00607bac
    FISTP dword ptr [EBX + 0x8]         ; 005aa353
    LEA EAX,[ESP + 0x30]                ; 005aa356
    PUSH EAX                            ; 005aa35a
    MOV EAX,dword ptr [EDX]             ; 005aa35b | DAT_01bc120c
    ADD EAX,0x60                        ; 005aa35d
    PUSH EAX                            ; 005aa360
    CALL engine_special.cpp_FUN_00580173 ; 005aa361
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005aa366
    PUSH 0x2                            ; 005aa369
    LEA EAX,[ESP + 0x40]                ; 005aa36b
    PUSH EAX                            ; 005aa36f
    LEA EAX,[ESP + 0x14]                ; 005aa370
    PUSH EAX                            ; 005aa374
    MOV EBX,dword ptr [0x00622c18]      ; 005aa375 | g_CDemonSetPtr
    PUSH EBX                            ; 005aa37b | g_CDemonSetInstance
    XOR ESI,ESI                         ; 005aa37c
    CALL core_set.cpp_FUN_00552d40      ; 005aa37e
        ;   XREF to: 00552d40 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_00552d40(CDemonSet * this_ptr, CVector3f * vertex_position, CVector3f * position_offset, int vertex_index)
    ADD ESP,0x10                        ; 005aa383
    MOV dword ptr [ESP + 0xc],ESI       ; 005aa386
    CMP dword ptr [EBP],0x0             ; 005aa38a
    JZ 0x005aa3cd                       ; 005aa38e
        ;   XREF to: 005aa3cd (CONDITIONAL_JUMP)  ; LAB_005aa3cd
    MOV EAX,dword ptr [ESP + 0x70]      ; 005aa390
    INC EAX                             ; 005aa394
    MOV dword ptr [ESP + 0x74],EAX      ; 005aa395
    FLD float ptr [0x005f925a]          ; 005aa399 | DAT_005f925a
    FILD dword ptr [ESP + 0x74]         ; 005aa39f
    FMUL ST1                            ; 005aa3a3
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005aa3a5
    FMUL double ptr [0x005f9262]        ; 005aa3a9 | DAT_005f9262
    MOV dword ptr [ESP + 0x74],EAX      ; 005aa3af
    FILD dword ptr [ESP + 0x74]         ; 005aa3b3
    FMULP ST2                           ; 005aa3b7
    FADDP                               ; 005aa3b9
    FADD float ptr [0x02c93008]         ; 005aa3bb | DAT_02c93008
    FSIN                                ; 005aa3c1
    FMUL float ptr [0x00625c94]         ; 005aa3c3 | DAT_00625c94
    FSTP float ptr [ESP + 0x10]         ; 005aa3c9
    MOV EBX,ESP                         ; 005aa3cd
        ;   Label: LAB_005aa3cd
    LEA EAX,[ESP + 0xc]                 ; 005aa3cf
    MOV EDX,dword ptr [0x00612560]      ; 005aa3d3 | DAT_00612560
    FLD float ptr [EAX]                 ; 005aa3d9
    FMUL float ptr [0x00607bac]         ; 005aa3db | DAT_00607bac
    FISTP dword ptr [EBX]               ; 005aa3e1
    FLD float ptr [EAX + 0x4]           ; 005aa3e3
    FMUL float ptr [0x00607bac]         ; 005aa3e6 | DAT_00607bac
    FISTP dword ptr [EBX + 0x4]         ; 005aa3ec
    FLD float ptr [EAX + 0x8]           ; 005aa3ef
    FMUL float ptr [0x00607bac]         ; 005aa3f2 | DAT_00607bac
    FISTP dword ptr [EBX + 0x8]         ; 005aa3f8
    MOV EAX,ESP                         ; 005aa3fb
    PUSH EAX                            ; 005aa3fd
    MOV EAX,dword ptr [EDX]             ; 005aa3fe | DAT_01bc120c
    ADD EAX,0x90                        ; 005aa400
    PUSH EAX                            ; 005aa405
    CALL engine_special.cpp_FUN_00580173 ; 005aa406
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005aa40b
    PUSH 0x3                            ; 005aa40e
    LEA EAX,[ESP + 0x40]                ; 005aa410
    PUSH EAX                            ; 005aa414
    LEA EAX,[ESP + 0x14]                ; 005aa415
    PUSH EAX                            ; 005aa419
    MOV EAX,[0x00622c18]                ; 005aa41a | g_CDemonSetPtr
    PUSH EAX                            ; 005aa41f | g_CDemonSetInstance
    CALL core_set.cpp_FUN_00552d40      ; 005aa420
        ;   XREF to: 00552d40 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_00552d40(CDemonSet * this_ptr, CVector3f * vertex_position, CVector3f * position_offset, int vertex_index)
    MOV EDX,dword ptr [EBP]             ; 005aa425
    ADD ESP,0x10                        ; 005aa428
    TEST EDX,EDX                        ; 005aa42b
    JZ 0x005aa4dd                       ; 005aa42d
        ;   XREF to: 005aa4dd (CONDITIONAL_JUMP)  ; LAB_005aa4dd
    PUSH 0xa000                         ; 005aa433
    MOV ECX,dword ptr [0x00612560]      ; 005aa438 | DAT_00612560
    PUSH ECX                            ; 005aa43e | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 005aa43f
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 005aa444
    PUSH 0x625e1c                       ; 005aa447 | DAT_00625e1c
    MOV EBX,dword ptr [0x00612560]      ; 005aa44c | DAT_00612560
    PUSH EBX                            ; 005aa452 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120 ; 005aa453
        ;   XREF to: 00483120 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 005aa458
        ;   Label: LAB_005aa458
    MOV ECX,dword ptr [ESP + 0x68]      ; 005aa45b
    MOV EBX,dword ptr [ESP + 0x64]      ; 005aa45f
    MOV ESI,dword ptr [0x02c8afdc]      ; 005aa463 | DAT_02c8afdc
    ADD ECX,0x4                         ; 005aa469
    INC EBX                             ; 005aa46c
    MOV dword ptr [ESP + 0x68],ECX      ; 005aa46d
    MOV dword ptr [ESP + 0x64],EBX      ; 005aa471
    CMP EBX,ESI                         ; 005aa475
    JL 0x005aa0fd                       ; 005aa477
        ;   XREF to: 005aa0fd (CONDITIONAL_JUMP)  ; LAB_005aa0fd
    ADD ESP,0x78                        ; 005aa47d
        ;   Label: LAB_005aa47d
    POP EBP                             ; 005aa480
    POP EDI                             ; 005aa481
    POP ESI                             ; 005aa482
    POP EBX                             ; 005aa483
    RET                                 ; 005aa484
    MOV ESI,ECX                         ; 005aa485
        ;   Label: LAB_005aa485
    MOV EDI,dword ptr [0x02c8afd8]      ; 005aa487 | DAT_02c8afd8
    SUB ESI,EBX                         ; 005aa48d
    INC EDI                             ; 005aa48f
    MOV dword ptr [0x02c8afd4],ESI      ; 005aa490 | DAT_02c8afd4
    MOV dword ptr [0x02c8afd8],EDI      ; 005aa496 | DAT_02c8afd8
    CMP EDI,0x10                        ; 005aa49c
    JL 0x005a9f4b                       ; 005aa49f
        ;   XREF to: 005a9f4b (CONDITIONAL_JUMP)  ; LAB_005a9f4b
    XOR EDX,EDX                         ; 005aa4a5
    MOV dword ptr [0x02c8afd8],EDX      ; 005aa4a7 | DAT_02c8afd8
    JMP 0x005a9f4b                      ; 005aa4ad
        ;   XREF to: 005a9f4b (UNCONDITIONAL_JUMP)  ; LAB_005a9f4b
    INC byte ptr [0x02c9300f]           ; 005aa4b2 | DAT_02c9300f
        ;   Label: LAB_005aa4b2
    JMP 0x005a9fdb                      ; 005aa4b8
        ;   XREF to: 005a9fdb (UNCONDITIONAL_JUMP)  ; LAB_005a9fdb
    INC byte ptr [0x02c93013]           ; 005aa4bd | DAT_02c93013
        ;   Label: LAB_005aa4bd
    JMP 0x005aa001                      ; 005aa4c3
        ;   XREF to: 005aa001 (UNCONDITIONAL_JUMP)  ; LAB_005aa001
    TEST EAX,EAX                        ; 005aa4c8
        ;   Label: LAB_005aa4c8
    JGE 0x005aa089                      ; 005aa4ca
        ;   XREF to: 005aa089 (CONDITIONAL_JUMP)  ; LAB_005aa089
    XOR ECX,ECX                         ; 005aa4d0
    MOV dword ptr [0x02c93004],ECX      ; 005aa4d2 | DAT_02c93004
    JMP 0x005aa089                      ; 005aa4d8
        ;   XREF to: 005aa089 (UNCONDITIONAL_JUMP)  ; LAB_005aa089
    CMP dword ptr [0x01c50948],0x0      ; 005aa4dd | DAT_01c50948
        ;   Label: LAB_005aa4dd
    JNZ 0x005aa506                      ; 005aa4e4
        ;   XREF to: 005aa506 (CONDITIONAL_JUMP)  ; LAB_005aa506
    CMP dword ptr [ESP + 0x90],0x0      ; 005aa4e6
    JZ 0x005aa52c                       ; 005aa4ee
        ;   XREF to: 005aa52c (CONDITIONAL_JUMP)  ; LAB_005aa52c
    PUSH 0x625e1c                       ; 005aa4f0 | DAT_00625e1c
    MOV EDI,dword ptr [0x00612560]      ; 005aa4f5 | DAT_00612560
    PUSH EDI                            ; 005aa4fb | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_00482540 ; 005aa4fc
        ;   XREF to: 00482540 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_00482540(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    JMP 0x005aa458                      ; 005aa501
        ;   XREF to: 005aa458 (UNCONDITIONAL_JUMP)  ; LAB_005aa458
    PUSH 0x1                            ; 005aa506
        ;   Label: LAB_005aa506
    MOV EAX,[0x00612560]                ; 005aa508 | DAT_00612560
    PUSH EAX                            ; 005aa50d | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00483ce0 ; 005aa50e
        ;   XREF to: 00483ce0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00483ce0(CDemonRenderer * this_ptr, int color)
    ADD ESP,0x8                         ; 005aa513
    PUSH 0x625e1c                       ; 005aa516 | DAT_00625e1c
    MOV EDX,dword ptr [0x00612560]      ; 005aa51b | DAT_00612560
    PUSH EDX                            ; 005aa521 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00 ; 005aa522
        ;   XREF to: 00481c00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    JMP 0x005aa458                      ; 005aa527
        ;   XREF to: 005aa458 (UNCONDITIONAL_JUMP)  ; LAB_005aa458
    PUSH 0x625e1c                       ; 005aa52c | DAT_00625e1c
        ;   Label: LAB_005aa52c
    MOV ESI,dword ptr [0x00612560]      ; 005aa531 | DAT_00612560
    PUSH ESI                            ; 005aa537 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_00482780 ; 005aa538
        ;   XREF to: 00482780 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_00482780(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    JMP 0x005aa458                      ; 005aa53d
        ;   XREF to: 005aa458 (UNCONDITIONAL_JUMP)  ; LAB_005aa458

