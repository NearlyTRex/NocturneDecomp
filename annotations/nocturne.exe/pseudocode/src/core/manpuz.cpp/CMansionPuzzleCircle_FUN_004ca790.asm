; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_004ca790(CMansionPuzzleCircle *this_ptr,int gem_index)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   gem_index
; Local Variables:
; undefined4       Stack[-0xa4]:4  local_a4
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
;   core_manpuz.cpp_CMansionPuzzleCircle_renderOpaque_FUN_004c9be0 at 004c9c7b
;
; Referenced Globals:
;   float FLOAT_00587f62 = 256
;   double DOUBLE_00587f6a = 0.0100000000000000
;   undefined4 DAT_005a0020
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 DAT_01b4d738
;   CDemonSet g_CDemonSet_01e57284
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;   core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00460150
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ca790
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_FUN_004ca790
    PUSH ESI                            ; 004ca791
    PUSH EDI                            ; 004ca792
    PUSH EBP                            ; 004ca793
    SUB ESP,0x98                        ; 004ca794
    MOV EDI,dword ptr [ESP + 0xac]      ; 004ca79a
    MOV EDX,dword ptr [ESP + 0xb0]      ; 004ca7a1
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ca7a8
    SUB EAX,EDX                         ; 004ca7af
    SHL EAX,0x3                         ; 004ca7b1
    SUB EAX,EDX                         ; 004ca7b4
    LEA ESI,[EDI + 0xa98]               ; 004ca7b6
    SHL EAX,0x3                         ; 004ca7bc
    ADD ESI,EAX                         ; 004ca7bf
    LEA EAX,[ESI + 0x24]                ; 004ca7c1
    PUSH EAX                            ; 004ca7c4
    LEA EAX,[ESI + 0x30]                ; 004ca7c5
    PUSH EAX                            ; 004ca7c8
    MOV EDX,dword ptr [0x005ae704]      ; 004ca7c9 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 004ca7cf | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 004ca7d0
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    FLD float ptr [0x00587f62]          ; 004ca7d5 | FLOAT_00587f62
    FLD float ptr [ESI + 0x8]           ; 004ca7db
    FMUL ST1                            ; 004ca7de
    FLD float ptr [ESI + 0x4]           ; 004ca7e0
    FMUL ST2                            ; 004ca7e3
    FLD float ptr [ESI]                 ; 004ca7e5
    FMULP ST3                           ; 004ca7e7
    ADD ESP,0xc                         ; 004ca7e9
    FXCH                                ; 004ca7ec
    CALL crt_math.c_round_FUN_00563a30  ; 004ca7ee
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 004ca7f3
    CALL crt_math.c_round_FUN_00563a30  ; 004ca7f5
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 004ca7fa
    FISTP dword ptr [ESP + 0x84]        ; 004ca7fc
    FISTP dword ptr [ESP + 0x94]        ; 004ca803
    MOV ECX,dword ptr [ESP + 0x84]      ; 004ca80a
    MOV EBX,dword ptr [ESP + 0x94]      ; 004ca811
    PUSH ECX                            ; 004ca818
    CALL crt_math.c_round_FUN_00563a30  ; 004ca819
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    PUSH EBX                            ; 004ca81e
    FISTP dword ptr [ESP + 0x9c]        ; 004ca81f
    MOV EBP,dword ptr [ESP + 0x9c]      ; 004ca826
    PUSH EBP                            ; 004ca82d
    MOV EAX,[0x005be368]                ; 004ca82e | g_CDemonSet_PTR_005be368
    PUSH EAX                            ; 004ca833 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340 ; 004ca834
        ;   XREF to: 0050e340 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 004ca839
    PUSH -0x1                           ; 004ca83c
    LEA EAX,[EDI + 0x2cc]               ; 004ca83e
    PUSH 0x0                            ; 004ca844
    PUSH EAX                            ; 004ca846
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 004ca847
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004ca84c
    PUSH 0x10000                        ; 004ca84f
    PUSH 0x10000                        ; 004ca854
    PUSH 0x10000                        ; 004ca859
    MOV EDX,dword ptr [0x005be368]      ; 004ca85e | g_CDemonSet_PTR_005be368
    PUSH EDX                            ; 004ca864 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340 ; 004ca865
        ;   XREF to: 0050e340 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_0050e340(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 004ca86a
    MOV ECX,dword ptr [0x005ae704]      ; 004ca86d | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 004ca873 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 004ca874
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004ca879
    TEST EAX,EAX                        ; 004ca87c
    JNZ 0x004caba4                      ; 004ca87e
        ;   XREF to: 004caba4 (CONDITIONAL_JUMP)  ; LAB_004caba4
    FLD float ptr [ESI + 0xc]           ; 004ca884
    FCOMP double ptr [0x00587f6a]       ; 004ca887 | DOUBLE_00587f6a
    FNSTSW AX                           ; 004ca88d
    SAHF                                ; 004ca88f
    JBE 0x004cabbe                      ; 004ca890
        ;   XREF to: 004cabbe (CONDITIONAL_JUMP)  ; LAB_004cabbe
    MOV EBX,0xbfb33333                  ; 004ca896
        ;   Label: LAB_004ca896
    MOV EBP,0x3e4ccccd                  ; 004ca89b
    LEA EAX,[ESP + 0x78]                ; 004ca8a0
    MOV EDX,dword ptr [0x005ae704]      ; 004ca8a4 | g_CDemonRenderer_PTR_005ae704
    MOV dword ptr [ESP + 0x78],EBX      ; 004ca8aa
    MOV dword ptr [ESP + 0x80],EBX      ; 004ca8ae
    LEA EBX,[ESP + 0x60]                ; 004ca8b5
    MOV dword ptr [ESP + 0x7c],EBP      ; 004ca8b9
    FLD float ptr [EAX]                 ; 004ca8bd
    FMUL float ptr [0x005a0020]         ; 004ca8bf | DAT_005a0020
    FISTP dword ptr [EBX]               ; 004ca8c5
    FLD float ptr [EAX + 0x4]           ; 004ca8c7
    FMUL float ptr [0x005a0020]         ; 004ca8ca | DAT_005a0020
    FISTP dword ptr [EBX + 0x4]         ; 004ca8d0
    FLD float ptr [EAX + 0x8]           ; 004ca8d3
    FMUL float ptr [0x005a0020]         ; 004ca8d6 | DAT_005a0020
    FISTP dword ptr [EBX + 0x8]         ; 004ca8dc
    LEA EAX,[ESP + 0x60]                ; 004ca8df
    PUSH EAX                            ; 004ca8e3
    MOV EAX,dword ptr [EDX]             ; 004ca8e4 | DAT_01b4d738
    PUSH EAX                            ; 004ca8e6
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004ca8e7
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ca8ec
    MOV AH,byte ptr [ESP + 0x7b]        ; 004ca8ef
    XOR AH,0x80                         ; 004ca8f3
    LEA EBX,[ESP + 0x48]                ; 004ca8f6
    MOV byte ptr [ESP + 0x7b],AH        ; 004ca8fa
    LEA EAX,[ESP + 0x78]                ; 004ca8fe
    MOV EDX,dword ptr [0x005ae704]      ; 004ca902 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 004ca908
    FMUL float ptr [0x005a0020]         ; 004ca90a | DAT_005a0020
    FISTP dword ptr [EBX]               ; 004ca910
    FLD float ptr [EAX + 0x4]           ; 004ca912
    FMUL float ptr [0x005a0020]         ; 004ca915 | DAT_005a0020
    FISTP dword ptr [EBX + 0x4]         ; 004ca91b
    FLD float ptr [EAX + 0x8]           ; 004ca91e
    FMUL float ptr [0x005a0020]         ; 004ca921 | DAT_005a0020
    FISTP dword ptr [EBX + 0x8]         ; 004ca927
    LEA EAX,[ESP + 0x48]                ; 004ca92a
    PUSH EAX                            ; 004ca92e
    MOV EAX,dword ptr [EDX]             ; 004ca92f | DAT_01b4d738
    ADD EAX,0x30                        ; 004ca931
    PUSH EAX                            ; 004ca934
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004ca935
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ca93a
    MOV DL,byte ptr [ESP + 0x83]        ; 004ca93d
    LEA EBX,[ESP + 0x54]                ; 004ca944
    XOR DL,0x80                         ; 004ca948
    LEA EAX,[ESP + 0x78]                ; 004ca94b
    MOV byte ptr [ESP + 0x83],DL        ; 004ca94f
    MOV EDX,dword ptr [0x005ae704]      ; 004ca956 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 004ca95c
    FMUL float ptr [0x005a0020]         ; 004ca95e | DAT_005a0020
    FISTP dword ptr [EBX]               ; 004ca964
    FLD float ptr [EAX + 0x4]           ; 004ca966
    FMUL float ptr [0x005a0020]         ; 004ca969 | DAT_005a0020
    FISTP dword ptr [EBX + 0x4]         ; 004ca96f
    FLD float ptr [EAX + 0x8]           ; 004ca972
    FMUL float ptr [0x005a0020]         ; 004ca975 | DAT_005a0020
    FISTP dword ptr [EBX + 0x8]         ; 004ca97b
    LEA EAX,[ESP + 0x54]                ; 004ca97e
    PUSH EAX                            ; 004ca982
    MOV EAX,dword ptr [EDX]             ; 004ca983 | DAT_01b4d738
    ADD EAX,0x60                        ; 004ca985
    PUSH EAX                            ; 004ca988
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004ca989
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ca98e
    MOV DH,byte ptr [ESP + 0x7b]        ; 004ca991
    LEA EBX,[ESP + 0x6c]                ; 004ca995
    XOR DH,0x80                         ; 004ca999
    LEA EAX,[ESP + 0x78]                ; 004ca99c
    MOV byte ptr [ESP + 0x7b],DH        ; 004ca9a0
    MOV EDX,dword ptr [0x005ae704]      ; 004ca9a4 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 004ca9aa
    FMUL float ptr [0x005a0020]         ; 004ca9ac | DAT_005a0020
    FISTP dword ptr [EBX]               ; 004ca9b2
    FLD float ptr [EAX + 0x4]           ; 004ca9b4
    FMUL float ptr [0x005a0020]         ; 004ca9b7 | DAT_005a0020
    FISTP dword ptr [EBX + 0x4]         ; 004ca9bd
    FLD float ptr [EAX + 0x8]           ; 004ca9c0
    FMUL float ptr [0x005a0020]         ; 004ca9c3 | DAT_005a0020
    FISTP dword ptr [EBX + 0x8]         ; 004ca9c9
    LEA EAX,[ESP + 0x6c]                ; 004ca9cc
    PUSH EAX                            ; 004ca9d0
    MOV EAX,dword ptr [EDX]             ; 004ca9d1 | DAT_01b4d738
    ADD EAX,0x90                        ; 004ca9d3
    PUSH EAX                            ; 004ca9d8
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004ca9d9
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ca9de
    MOV EDX,0x4                         ; 004ca9e1
    MOV EAX,0x1                         ; 004ca9e6
    MOV EBX,0x2                         ; 004ca9eb
    XOR ECX,ECX                         ; 004ca9f0
    MOV dword ptr [ESP + 0x4],EDX       ; 004ca9f2
    MOV dword ptr [ESP + 0x18],ECX      ; 004ca9f6
    MOV dword ptr [ESP + 0x1c],ECX      ; 004ca9fa
    MOV dword ptr [ESP + 0x20],ECX      ; 004ca9fe
    MOV dword ptr [ESP + 0x24],EAX      ; 004caa02
    MOV dword ptr [ESP + 0x2c],ECX      ; 004caa06
    MOV dword ptr [ESP + 0x30],EBX      ; 004caa0a
    MOV EDX,0x1000000                   ; 004caa0e
    MOV dword ptr [ESP + 0x40],ECX      ; 004caa13
    MOV dword ptr [ESP + 0x28],EDX      ; 004caa17
    MOV EBP,EDX                         ; 004caa1b
    MOV dword ptr [ESP + 0x34],EDX      ; 004caa1d
    MOV dword ptr [ESP + 0x38],EDX      ; 004caa21
    MOV EDX,0x3                         ; 004caa25
    MOV dword ptr [ESP + 0x44],EBP      ; 004caa2a
    MOV dword ptr [ESP + 0x3c],EDX      ; 004caa2e
    FLD float ptr [0x00587f62]          ; 004caa32 | FLOAT_00587f62
    FLD float ptr [ESI + 0xc]           ; 004caa38
    FMUL ST1                            ; 004caa3b
    FLD float ptr [ESI + 0x10]          ; 004caa3d
    FMUL ST2                            ; 004caa40
    FLD float ptr [ESI + 0x14]          ; 004caa42
    MOV EDX,dword ptr [0x005ae704]      ; 004caa45 | g_CDemonRenderer_PTR_005ae704
    FMULP ST3                           ; 004caa4b
    MOV EBX,dword ptr [EDX]             ; 004caa4d | DAT_01b4d738
    FXCH                                ; 004caa4f
    CALL crt_math.c_round_FUN_00563a30  ; 004caa51
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x88]        ; 004caa56
    MOV EAX,dword ptr [ESP + 0x88]      ; 004caa5d
    MOV dword ptr [EBX + 0x20],EAX      ; 004caa64
    CALL crt_math.c_round_FUN_00563a30  ; 004caa67
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    MOV EBX,dword ptr [EDX]             ; 004caa6c
    FISTP dword ptr [ESP + 0x8c]        ; 004caa6e
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004caa75
    MOV dword ptr [EBX + 0x24],EAX      ; 004caa7c
    CALL crt_math.c_round_FUN_00563a30  ; 004caa7f
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    MOV EBX,dword ptr [EDX]             ; 004caa84
    FISTP dword ptr [ESP + 0x90]        ; 004caa86
    MOV EAX,dword ptr [ESP + 0x90]      ; 004caa8d
    MOV dword ptr [EBX + 0x28],EAX      ; 004caa94
    MOV EAX,dword ptr [EDX]             ; 004caa97
    MOV dword ptr [EAX + 0x2c],0xffff   ; 004caa99
    MOV EBX,dword ptr [EDX]             ; 004caaa0
    MOV EAX,dword ptr [ESP + 0x88]      ; 004caaa2
    MOV dword ptr [EBX + 0x50],EAX      ; 004caaa9
    MOV EBX,dword ptr [EDX]             ; 004caaac
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004caaae
    MOV dword ptr [EBX + 0x54],EAX      ; 004caab5
    MOV EBX,dword ptr [EDX]             ; 004caab8
    MOV EAX,dword ptr [ESP + 0x90]      ; 004caaba
    MOV dword ptr [EBX + 0x58],EAX      ; 004caac1
    MOV EAX,dword ptr [EDX]             ; 004caac4
    MOV dword ptr [EAX + 0x5c],0xffff   ; 004caac6
    MOV EBX,dword ptr [EDX]             ; 004caacd
    MOV EAX,dword ptr [ESP + 0x88]      ; 004caacf
    MOV dword ptr [EBX + 0x80],EAX      ; 004caad6
    MOV EBX,dword ptr [EDX]             ; 004caadc
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004caade
    MOV dword ptr [EBX + 0x84],EAX      ; 004caae5
    MOV EBX,dword ptr [EDX]             ; 004caaeb
    MOV EAX,dword ptr [ESP + 0x90]      ; 004caaed
    MOV dword ptr [EBX + 0x88],EAX      ; 004caaf4
    MOV EAX,dword ptr [EDX]             ; 004caafa
    MOV dword ptr [EAX + 0x8c],0xffff   ; 004caafc
    MOV EBX,dword ptr [EDX]             ; 004cab06
    MOV EAX,dword ptr [ESP + 0x88]      ; 004cab08
    MOV dword ptr [EBX + 0xb0],EAX      ; 004cab0f
    MOV EBX,dword ptr [EDX]             ; 004cab15
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004cab17
    MOV dword ptr [EBX + 0xb4],EAX      ; 004cab1e
    MOV EBX,dword ptr [EDX]             ; 004cab24
    MOV EAX,dword ptr [ESP + 0x90]      ; 004cab26
    MOV dword ptr [EBX + 0xb8],EAX      ; 004cab2d
    MOV EAX,dword ptr [EDX]             ; 004cab33
    MOV dword ptr [EAX + 0xbc],0xffff   ; 004cab35
    LEA EAX,[EDI + 0x14b8]              ; 004cab3f
    PUSH EAX                            ; 004cab45
    PUSH EDX                            ; 004cab46
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004cab47
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004cab4c
    PUSH 0x0                            ; 004cab4f
    MOV ESI,dword ptr [0x005ae704]      ; 004cab51 | g_CDemonRenderer_PTR_005ae704
    PUSH ESI                            ; 004cab57 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0 ; 004cab58
        ;   XREF to: 00460fa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 004cab5d
    PUSH 0x1                            ; 004cab60
    MOV EDI,dword ptr [0x005ae704]      ; 004cab62 | g_CDemonRenderer_PTR_005ae704
    PUSH EDI                            ; 004cab68 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 004cab69
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004cab6e
    MOV EAX,ESP                         ; 004cab71
    PUSH EAX                            ; 004cab73
    MOV EBP,dword ptr [0x005ae704]      ; 004cab74 | g_CDemonRenderer_PTR_005ae704
    PUSH EBP                            ; 004cab7a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00460150 ; 004cab7b
        ;   XREF to: 00460150 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00460150(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 004cab80
    PUSH 0x1                            ; 004cab83
    MOV EAX,[0x005ae704]                ; 004cab85 | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 004cab8a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0 ; 004cab8b
        ;   XREF to: 00460fa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 004cab90
    PUSH 0x0                            ; 004cab93
    MOV EDX,dword ptr [0x005ae704]      ; 004cab95 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 004cab9b | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 004cab9c
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004caba1
    MOV ECX,dword ptr [0x005ae704]      ; 004caba4 | g_CDemonRenderer_PTR_005ae704
        ;   Label: LAB_004caba4
    PUSH ECX                            ; 004cabaa | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 004cabab
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 004cabb0
    ADD ESP,0x98                        ; 004cabb3
    POP EBP                             ; 004cabb9
    POP EDI                             ; 004cabba
    POP ESI                             ; 004cabbb
    POP EBX                             ; 004cabbc
    RET                                 ; 004cabbd
    FLD float ptr [ESI + 0x10]          ; 004cabbe
        ;   Label: LAB_004cabbe
    FCOMP double ptr [0x00587f6a]       ; 004cabc1 | DOUBLE_00587f6a
    FNSTSW AX                           ; 004cabc7
    SAHF                                ; 004cabc9
    JA 0x004ca896                       ; 004cabca
        ;   XREF to: 004ca896 (CONDITIONAL_JUMP)  ; LAB_004ca896
    FLD float ptr [ESI + 0x14]          ; 004cabd0
    FCOMP double ptr [0x00587f6a]       ; 004cabd3 | DOUBLE_00587f6a
    FNSTSW AX                           ; 004cabd9
    SAHF                                ; 004cabdb
    JA 0x004ca896                       ; 004cabdc
        ;   XREF to: 004ca896 (CONDITIONAL_JUMP)  ; LAB_004ca896
    JMP 0x004caba4                      ; 004cabe2
        ;   XREF to: 004caba4 (UNCONDITIONAL_JUMP)  ; LAB_004caba4

