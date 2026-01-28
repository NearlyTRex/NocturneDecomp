; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_water_cpp_CWater_calculateVisibleTiles_FUN_005e9e70(CWater *this_ptr)
;
; Parameters:
; CWater *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0xbc]:8  local_bc
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
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
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 at 0056a3b6
;
; Referenced Globals:
;   TerminatedCString s_core_water_cpp_006571c7
;   TerminatedCString s_Too_many_visible_water_t_006571d9
;   TerminatedCString s_Vis_water_tiles_d_SqFt_f_006571f7
;   double DOUBLE_00657217 = 0.5
;   double DOUBLE_0065721f = 1.10000000000000
;   float FLOAT_006652cc = 256
;   CConsole* g_CConsolePtr = 0083b1a4
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   int g_RenderPixelBudget = 0x1
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
;   undefined4 g_RenderVertexBuffer[1].projected_vertex.screen_x
;   undefined4 g_RenderVertexBuffer[2].projected_vertex.screen_x
;   undefined4 g_RenderVertexBuffer[3].projected_vertex.screen_x
;   CConsole g_ConsolePtr
;   CDemonRenderer g_CDemonRendererInstance
;   ... and 13 more
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70
;   core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;   engine_console.cpp_CConsole_printf_FUN_00441890
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e9e70
        ;   Label: core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70
    PUSH ESI                            ; 005e9e71
    PUSH EDI                            ; 005e9e72
    PUSH EBP                            ; 005e9e73
    SUB ESP,0xa4                        ; 005e9e74
    MOV EDI,dword ptr [ESP + 0xb8]      ; 005e9e7a
    XOR EDX,EDX                         ; 005e9e81
    XOR EBX,EBX                         ; 005e9e83
    XOR EAX,EAX                         ; 005e9e85
    INC EAX                             ; 005e9e87
        ;   Label: LAB_005e9e87
    LEA ESI,[EBX + EDX*0x1]             ; 005e9e88
    ADD EDX,0x20                        ; 005e9e8b
    MOV CL,byte ptr [ESI + EAX*0x1 + 0x2cf901f] ; 005e9e8e | g_ColorCubeLookup | UCHAR_ARRAY_02cf9441
    ADD EBX,0x400                       ; 005e9e95
    MOV byte ptr [EAX + 0x3f8f607],CL   ; 005e9e9b | DAT_03f8f608 | DAT_03f8f609
    CMP EAX,0x20                        ; 005e9ea1
    JL 0x005e9e87                       ; 005e9ea4
        ;   XREF to: 005e9e87 (CONDITIONAL_JUMP)  ; LAB_005e9e87
    MOV EDX,dword ptr [EDI + 0x4]       ; 005e9ea6
    MOV dword ptr [EDI + 0xc],0x0       ; 005e9ea9
    TEST EDX,0x7fffffff                 ; 005e9eb0
    JNZ 0x005e9ed1                      ; 005e9eb6
        ;   XREF to: 005e9ed1 (CONDITIONAL_JUMP)  ; LAB_005e9ed1
    ADD ESP,0xa4                        ; 005e9eb8
    POP EBP                             ; 005e9ebe
    POP EDI                             ; 005e9ebf
    POP ESI                             ; 005e9ec0
    POP EBX                             ; 005e9ec1
    LEA EAX,[ESP + 0x70]                ; 005e9ed1
        ;   Label: LAB_005e9ed1
    PUSH EAX                            ; 005e9ed5
    PUSH 0x3277d14                      ; 005e9ed6 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40 ; 005e9edb
        ;   XREF to: 00499b40 (UNCONDITIONAL_CALL)  ; CVector3f * core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40(CDemonRaytrace * this_ptr, CVector3f * output_vector)
    ADD ESP,0x8                         ; 005e9ee0
    LEA EAX,[ESP + 0x28]                ; 005e9ee3
    PUSH EAX                            ; 005e9ee7
    PUSH 0x3277d14                      ; 005e9ee8 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70 ; 005e9eed
        ;   XREF to: 00499b70 (UNCONDITIONAL_CALL)  ; CVector3f * core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70(CDemonRaytrace * this_ptr, CVector3f * output_vector)
    ADD ESP,0x8                         ; 005e9ef2
    FLD float ptr [ESP + 0x70]          ; 005e9ef5
    FADD float ptr [ESP + 0x28]         ; 005e9ef9
    FLD double ptr [0x00657217]         ; 005e9efd | DOUBLE_00657217
    FXCH                                ; 005e9f03
    FMUL ST1                            ; 005e9f05
    FLD float ptr [ESP + 0x78]          ; 005e9f07
    FLD float ptr [ESP + 0x28]          ; 005e9f0b
    FSUB float ptr [ESP + 0x70]         ; 005e9f0f
    FXCH                                ; 005e9f13
    FADD float ptr [ESP + 0x30]         ; 005e9f15
    FXCH                                ; 005e9f19
    FMUL ST3                            ; 005e9f1b
    FXCH                                ; 005e9f1d
    FMULP ST3                           ; 005e9f1f
    FMUL double ptr [0x0065721f]        ; 005e9f21 | DOUBLE_0065721f
    XOR ECX,ECX                         ; 005e9f27
    FLDZ                                ; 005e9f29
    MOV dword ptr [0x03f875f4],ECX      ; 005e9f2b | FLOAT_03f875f4
    MOV dword ptr [ESP + 0x94],ECX      ; 005e9f31
    FXCH ST2                            ; 005e9f38
    FSTP float ptr [0x03f875f0]         ; 005e9f3a | FLOAT_03f875f0
    FXCH ST2                            ; 005e9f40
    FSTP float ptr [0x03f875f8]         ; 005e9f42 | FLOAT_03f875f8
    FXCH                                ; 005e9f48
    FSTP float ptr [ESP + 0x8c]         ; 005e9f4a
    FCOMP float ptr [ESP + 0x8c]        ; 005e9f51
    FNSTSW AX                           ; 005e9f58
    SAHF                                ; 005e9f5a
    JNC 0x005e9f6b                      ; 005e9f5b
        ;   XREF to: 005e9f6b (CONDITIONAL_JUMP)  ; LAB_005e9f6b
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005e9f5d
    MOV dword ptr [ESP + 0x94],EAX      ; 005e9f64
    FLD float ptr [ESP + 0x2c]          ; 005e9f6b
        ;   Label: LAB_005e9f6b
    FSUB float ptr [ESP + 0x74]         ; 005e9f6f
    FST float ptr [ESP + 0x90]          ; 005e9f73
    FCOMP float ptr [ESP + 0x94]        ; 005e9f7a
    FNSTSW AX                           ; 005e9f81
    SAHF                                ; 005e9f83
    JBE 0x005e9f94                      ; 005e9f84
        ;   XREF to: 005e9f94 (CONDITIONAL_JUMP)  ; LAB_005e9f94
    MOV EAX,dword ptr [ESP + 0x90]      ; 005e9f86
    MOV dword ptr [ESP + 0x94],EAX      ; 005e9f8d
    FLD float ptr [ESP + 0x30]          ; 005e9f94
        ;   Label: LAB_005e9f94
    FSUB float ptr [ESP + 0x78]         ; 005e9f98
    FMUL double ptr [0x00657217]        ; 005e9f9c | DOUBLE_00657217
    FMUL double ptr [0x0065721f]        ; 005e9fa2 | DOUBLE_0065721f
    FST float ptr [ESP + 0x88]          ; 005e9fa8
    FCOMP float ptr [ESP + 0x94]        ; 005e9faf
    FNSTSW AX                           ; 005e9fb6
    SAHF                                ; 005e9fb8
    JBE 0x005e9fc9                      ; 005e9fb9
        ;   XREF to: 005e9fc9 (CONDITIONAL_JUMP)  ; LAB_005e9fc9
    MOV EAX,dword ptr [ESP + 0x88]      ; 005e9fbb
    MOV dword ptr [ESP + 0x94],EAX      ; 005e9fc2
    FLD float ptr [ESP + 0x94]          ; 005e9fc9
        ;   Label: LAB_005e9fc9
    FDIV float ptr [EDI + 0x8]          ; 005e9fd0
    FLD1                                ; 005e9fd3
    FADDP                               ; 005e9fd5
    CALL crt_math.c_round_FUN_005fe6b0  ; 005e9fd7
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x9c]        ; 005e9fdc
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005e9fe3
    XOR ESI,ESI                         ; 005e9fea
    MOV EBP,EAX                         ; 005e9fec
    MOV dword ptr [0x03f87604],ESI      ; 005e9fee | g_VisibleWaterTileCount
    NEG EBP                             ; 005e9ff4
    MOV dword ptr [ESP + 0x98],EAX      ; 005e9ff6
    CMP EBP,EAX                         ; 005e9ffd
    JGE 0x005ea22f                      ; 005e9fff
        ;   XREF to: 005ea22f (CONDITIONAL_JUMP)  ; LAB_005ea22f
    MOV ESI,dword ptr [ESP + 0x9c]      ; 005ea005
        ;   Label: LAB_005ea005
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005ea00c
    NEG ESI                             ; 005ea013
    CMP ESI,EAX                         ; 005ea015
    JGE 0x005ea21f                      ; 005ea017
        ;   XREF to: 005ea21f (CONDITIONAL_JUMP)  ; LAB_005ea21f
    MOV dword ptr [ESP + 0xa0],EBP      ; 005ea01d
        ;   Label: LAB_005ea01d
    FILD dword ptr [ESP + 0xa0]         ; 005ea024
    FMUL float ptr [EDI + 0x8]          ; 005ea02b
    FSTP float ptr [ESP + 0x64]         ; 005ea02e
    MOV EAX,dword ptr [EDI + 0x4]       ; 005ea032
    MOV dword ptr [ESP + 0xa0],ESI      ; 005ea035
    MOV dword ptr [ESP + 0x68],EAX      ; 005ea03c
    FILD dword ptr [ESP + 0xa0]         ; 005ea040
    FMUL float ptr [EDI + 0x8]          ; 005ea047
    MOV ECX,dword ptr [0x006703ec]      ; 005ea04a | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [ESP + 0x64]          ; 005ea050
    FADD float ptr [0x03f875f0]         ; 005ea054 | FLOAT_03f875f0
    FLD float ptr [ESP + 0x68]          ; 005ea05a
    LEA EAX,[ESP + 0x64]                ; 005ea05e
    FXCH ST2                            ; 005ea062
    FSTP float ptr [ESP + 0x6c]         ; 005ea064
    FSTP float ptr [ESP + 0x64]         ; 005ea068
    PUSH EAX                            ; 005ea06c
    FADD float ptr [0x03f875f4]         ; 005ea06d | FLOAT_03f875f4
    FLD float ptr [ESP + 0x70]          ; 005ea073
    FXCH                                ; 005ea077
    FSTP float ptr [ESP + 0x6c]         ; 005ea079
    FADD float ptr [0x03f875f8]         ; 005ea07d | FLOAT_03f875f8
    PUSH ECX                            ; 005ea083 | g_CDemonRendererInstance
    FSTP float ptr [ESP + 0x74]         ; 005ea084
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 005ea088
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 005ea08d
    LEA EBX,[ESP + 0x40]                ; 005ea090
    LEA EAX,[ESP + 0x64]                ; 005ea094
    FLD float ptr [EAX]                 ; 005ea098
    FMUL float ptr [0x006652cc]         ; 005ea09a | FLOAT_006652cc
    FISTP dword ptr [EBX]               ; 005ea0a0
    FLD float ptr [EAX + 0x4]           ; 005ea0a2
    FMUL float ptr [0x006652cc]         ; 005ea0a5 | FLOAT_006652cc
    FISTP dword ptr [EBX + 0x4]         ; 005ea0ab
    FLD float ptr [EAX + 0x8]           ; 005ea0ae
    FMUL float ptr [0x006652cc]         ; 005ea0b1 | FLOAT_006652cc
    FISTP dword ptr [EBX + 0x8]         ; 005ea0b7
    XOR EBX,EBX                         ; 005ea0ba
    LEA EAX,[ESP + 0x64]                ; 005ea0bc
    MOV dword ptr [ESP + 0x64],EBX      ; 005ea0c0
    MOV dword ptr [ESP + 0x68],EBX      ; 005ea0c4
    MOV dword ptr [ESP + 0x6c],EBX      ; 005ea0c8
    LEA EBX,[ESP + 0x58]                ; 005ea0cc
    MOV EDX,dword ptr [0x006703ec]      ; 005ea0d0 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 005ea0d6
    FMUL float ptr [0x006652cc]         ; 005ea0d8 | FLOAT_006652cc
    FISTP dword ptr [EBX]               ; 005ea0de
    FLD float ptr [EAX + 0x4]           ; 005ea0e0
    FMUL float ptr [0x006652cc]         ; 005ea0e3 | FLOAT_006652cc
    FISTP dword ptr [EBX + 0x4]         ; 005ea0e9
    FLD float ptr [EAX + 0x8]           ; 005ea0ec
    FMUL float ptr [0x006652cc]         ; 005ea0ef | FLOAT_006652cc
    FISTP dword ptr [EBX + 0x8]         ; 005ea0f5
    LEA EAX,[ESP + 0x58]                ; 005ea0f8
    PUSH EAX                            ; 005ea0fc
    MOV EAX,dword ptr [EDX]             ; 005ea0fd | g_CDemonRendererInstance
    PUSH EAX                            ; 005ea0ff
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005ea100
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005ea105
    MOV EAX,dword ptr [EDI + 0x8]       ; 005ea108
    LEA EBX,[ESP + 0x34]                ; 005ea10b
    MOV dword ptr [ESP + 0x64],EAX      ; 005ea10f
    LEA EAX,[ESP + 0x64]                ; 005ea113
    MOV EDX,dword ptr [0x006703ec]      ; 005ea117 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 005ea11d
    FMUL float ptr [0x006652cc]         ; 005ea11f | FLOAT_006652cc
    FISTP dword ptr [EBX]               ; 005ea125
    FLD float ptr [EAX + 0x4]           ; 005ea127
    FMUL float ptr [0x006652cc]         ; 005ea12a | FLOAT_006652cc
    FISTP dword ptr [EBX + 0x4]         ; 005ea130
    FLD float ptr [EAX + 0x8]           ; 005ea133
    FMUL float ptr [0x006652cc]         ; 005ea136 | FLOAT_006652cc
    FISTP dword ptr [EBX + 0x8]         ; 005ea13c
    LEA EAX,[ESP + 0x34]                ; 005ea13f
    PUSH EAX                            ; 005ea143
    MOV EAX,dword ptr [EDX]             ; 005ea144 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 005ea146
    PUSH EAX                            ; 005ea149
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005ea14a
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005ea14f
    MOV EAX,dword ptr [EDI + 0x8]       ; 005ea152
    LEA EBX,[ESP + 0x7c]                ; 005ea155
    MOV dword ptr [ESP + 0x6c],EAX      ; 005ea159
    LEA EAX,[ESP + 0x64]                ; 005ea15d
    MOV EDX,dword ptr [0x006703ec]      ; 005ea161 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 005ea167
    FMUL float ptr [0x006652cc]         ; 005ea169 | FLOAT_006652cc
    FISTP dword ptr [EBX]               ; 005ea16f
    FLD float ptr [EAX + 0x4]           ; 005ea171
    FMUL float ptr [0x006652cc]         ; 005ea174 | FLOAT_006652cc
    FISTP dword ptr [EBX + 0x4]         ; 005ea17a
    FLD float ptr [EAX + 0x8]           ; 005ea17d
    FMUL float ptr [0x006652cc]         ; 005ea180 | FLOAT_006652cc
    FISTP dword ptr [EBX + 0x8]         ; 005ea186
    LEA EAX,[ESP + 0x7c]                ; 005ea189
    PUSH EAX                            ; 005ea18d
    MOV EAX,dword ptr [EDX]             ; 005ea18e | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 005ea190
    PUSH EAX                            ; 005ea193
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005ea194
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x54]                ; 005ea199
    LEA EAX,[ESP + 0x6c]                ; 005ea19d
    ADD ESP,0x8                         ; 005ea1a1
    XOR ECX,ECX                         ; 005ea1a4
    MOV EDX,dword ptr [0x006703ec]      ; 005ea1a6 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x64],ECX      ; 005ea1ac
    FLD float ptr [EAX]                 ; 005ea1b0
    FMUL float ptr [0x006652cc]         ; 005ea1b2 | FLOAT_006652cc
    FISTP dword ptr [EBX]               ; 005ea1b8
    FLD float ptr [EAX + 0x4]           ; 005ea1ba
    FMUL float ptr [0x006652cc]         ; 005ea1bd | FLOAT_006652cc
    FISTP dword ptr [EBX + 0x4]         ; 005ea1c3
    FLD float ptr [EAX + 0x8]           ; 005ea1c6
    FMUL float ptr [0x006652cc]         ; 005ea1c9 | FLOAT_006652cc
    FISTP dword ptr [EBX + 0x8]         ; 005ea1cf
    LEA EAX,[ESP + 0x4c]                ; 005ea1d2
    PUSH EAX                            ; 005ea1d6
    MOV EAX,dword ptr [EDX]             ; 005ea1d7 | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 005ea1d9
    PUSH EAX                            ; 005ea1de
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005ea1df
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00688024]                ; 005ea1e4 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    MOV EBX,dword ptr [0x00688054]      ; 005ea1e9 | g_RenderVertexBuffer[1].projected_vertex.screen_x
    MOV EDX,dword ptr [0x00688084]      ; 005ea1ef | g_RenderVertexBuffer[2].projected_vertex.screen_x
    AND EAX,EBX                         ; 005ea1f5
    MOV ECX,dword ptr [0x006880b4]      ; 005ea1f7 | g_RenderVertexBuffer[3].projected_vertex.screen_x
    AND EAX,EDX                         ; 005ea1fd
    AND EAX,ECX                         ; 005ea1ff
    ADD ESP,0x8                         ; 005ea201
    TEST EAX,0x80000000                 ; 005ea204
    JZ 0x005ea26a                       ; 005ea209
        ;   XREF to: 005ea26a (CONDITIONAL_JUMP)  ; LAB_005ea26a
    TEST AL,0xff                        ; 005ea20b
    JZ 0x005ea26a                       ; 005ea20d
        ;   XREF to: 005ea26a (CONDITIONAL_JUMP)  ; LAB_005ea26a
    MOV EDX,dword ptr [ESP + 0x9c]      ; 005ea20f
        ;   Label: LAB_005ea20f
    INC ESI                             ; 005ea216
    CMP ESI,EDX                         ; 005ea217
    JL 0x005ea01d                       ; 005ea219
        ;   XREF to: 005ea01d (CONDITIONAL_JUMP)  ; LAB_005ea01d
    MOV EDX,dword ptr [ESP + 0x98]      ; 005ea21f
        ;   Label: LAB_005ea21f
    INC EBP                             ; 005ea226
    CMP EBP,EDX                         ; 005ea227
    JL 0x005ea005                       ; 005ea229
        ;   XREF to: 005ea005 (CONDITIONAL_JUMP)  ; LAB_005ea005
    FILD dword ptr [0x03f87604]         ; 005ea22f | g_VisibleWaterTileCount
        ;   Label: LAB_005ea22f
    FMUL float ptr [EDI + 0x8]          ; 005ea235
    FMUL float ptr [EDI + 0x8]          ; 005ea238
    SUB ESP,0x8                         ; 005ea23b
    MOV ECX,dword ptr [0x03f87604]      ; 005ea23e | g_VisibleWaterTileCount
    FST float ptr [EDI + 0xc]           ; 005ea244
    FSTP double ptr [ESP]               ; 005ea247
    PUSH ECX                            ; 005ea24a
    PUSH 0x6571f7                       ; 005ea24b | = "Vis water tiles : %d, SqFt : %f"
    MOV EBX,dword ptr [0x0066e8e0]      ; 005ea250 | g_ConsolePtr | g_CConsolePtr
    PUSH EBX                            ; 005ea256 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005ea257
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x14                        ; 005ea25c
    ADD ESP,0xa4                        ; 005ea25f
    POP EBP                             ; 005ea265
    POP EDI                             ; 005ea266
    POP ESI                             ; 005ea267
    POP EBX                             ; 005ea268
    RET                                 ; 005ea269
    MOV EBX,0x4                         ; 005ea26a
        ;   Label: LAB_005ea26a
    MOV EDX,0x1                         ; 005ea26f
    XOR EAX,EAX                         ; 005ea274
    MOV dword ptr [ESP + 0x4],EBX       ; 005ea276
    MOV dword ptr [ESP + 0x14],EAX      ; 005ea27a
    MOV dword ptr [ESP + 0x10],EAX      ; 005ea27e
    MOV dword ptr [ESP + 0xc],EAX       ; 005ea282
    MOV dword ptr [ESP + 0x8],EAX       ; 005ea286
    MOV dword ptr [ESP + 0x18],EAX      ; 005ea28a
    MOV EBX,0x3                         ; 005ea28e
    MOV EAX,0x10                        ; 005ea293
    MOV dword ptr [ESP + 0x24],EBX      ; 005ea298
    MOV EBX,dword ptr [0x006703f0]      ; 005ea29c | g_RenderPixelBudget
    MOV [0x006703f0],EAX                ; 005ea2a2 | g_RenderPixelBudget
    MOV EAX,ESP                         ; 005ea2a7
    MOV dword ptr [ESP + 0x1c],EDX      ; 005ea2a9
    PUSH EAX                            ; 005ea2ad
    MOV EDX,dword ptr [0x006703ec]      ; 005ea2ae | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV ECX,0x2                         ; 005ea2b4
    PUSH EDX                            ; 005ea2b9 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x28],ECX      ; 005ea2ba
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50 ; 005ea2be
        ;   XREF to: 0048ab50 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 005ea2c3
    TEST EAX,EAX                        ; 005ea2c6
    JZ 0x005ea314                       ; 005ea2c8
        ;   XREF to: 005ea314 (CONDITIONAL_JUMP)  ; LAB_005ea314
    CMP dword ptr [0x03f87604],0x1000   ; 005ea2ca | g_VisibleWaterTileCount
    JL 0x005ea2f8                       ; 005ea2d4
        ;   XREF to: 005ea2f8 (CONDITIONAL_JUMP)  ; LAB_005ea2f8
    MOV EAX,0x6571c7                    ; 005ea2d6 | = "..\\core\\water.cpp"
    MOV EDX,0x136                       ; 005ea2db
    PUSH 0x6571d9                       ; 005ea2e0 | = "Too many visible water tiles!"
    MOV [0x02f0ca48],EAX                ; 005ea2e5 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005ea2ea | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ea2f0
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005ea2f5
    MOV EAX,[0x03f87604]                ; 005ea2f8 | g_VisibleWaterTileCount
        ;   Label: LAB_005ea2f8
    LEA ECX,[EAX + 0x1]                 ; 005ea2fd
    MOV dword ptr [EAX*0x4 + 0x3f87608],EBP ; 005ea300 | g_VisibleWaterTilesX
    MOV dword ptr [EAX*0x4 + 0x3f8b608],ESI ; 005ea307 | g_VisibleWaterTilesY
    MOV dword ptr [0x03f87604],ECX      ; 005ea30e | g_VisibleWaterTileCount
    MOV dword ptr [0x006703f0],EBX      ; 005ea314 | g_RenderPixelBudget
        ;   Label: LAB_005ea314
    JMP 0x005ea20f                      ; 005ea31a
        ;   XREF to: 005ea20f (UNCONDITIONAL_JUMP)  ; LAB_005ea20f

