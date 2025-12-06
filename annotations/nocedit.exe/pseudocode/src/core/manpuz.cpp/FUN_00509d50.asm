; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_manpuz.cpp_FUN_00509d50()
;
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
;   core_manpuz.cpp_FUN_005090d0 at 00509167
;
; Referenced Globals:
;   float FLOAT_0063570d = 256
;   double DOUBLE_00635715 = 0.0100000000000000
;   undefined4 DAT_00660d70
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 DAT_01000000
;   CDemonRenderer g_CDemonRendererInstance
;   CEditorTools g_CEditorToolsPtr
;   undefined4 DAT_02f0cb1c
;   undefined4 DAT_02f33744
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   core_set.cpp_CDemonSet_FUN_00570ca0
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
;   shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
;   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509d50
        ;   Label: core_manpuz.cpp_FUN_00509d50
    PUSH ESI                            ; 00509d51
    PUSH EDI                            ; 00509d52
    PUSH EBP                            ; 00509d53
    SUB ESP,0x98                        ; 00509d54
    MOV EDI,dword ptr [ESP + 0xac]      ; 00509d5a
    MOV EDX,dword ptr [ESP + 0xb0]      ; 00509d61
    LEA EAX,[EDX*0x4 + 0x0]             ; 00509d68
    SUB EAX,EDX                         ; 00509d6f
    SHL EAX,0x3                         ; 00509d71
    SUB EAX,EDX                         ; 00509d74
    LEA ESI,[EDI + 0xaa0]               ; 00509d76
    SHL EAX,0x3                         ; 00509d7c
    ADD ESI,EAX                         ; 00509d7f
    LEA EAX,[ESI + 0x24]                ; 00509d81
    PUSH EAX                            ; 00509d84
    LEA EAX,[ESI + 0x30]                ; 00509d85
    PUSH EAX                            ; 00509d88
    MOV EDX,dword ptr [0x006703ec]      ; 00509d89 | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 00509d8f | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 00509d90 | void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067d550]                ; 00509d95 | CDemonMission * g_CDemonMissionPtr
    MOV ECX,dword ptr [EAX + 0x4]       ; 00509d9a | DAT_02f33744
    ADD ESP,0xc                         ; 00509d9d
    TEST ECX,ECX                        ; 00509da0
    JZ 0x00509dea                       ; 00509da2 | LAB_00509dea
        ;   XREF to: 00509dea (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x006703ec]      ; 00509da4 | CDemonRenderer * g_CDemonRendererPtr
    PUSH EBX                            ; 00509daa | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 00509dab | int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00509db0
    TEST EAX,EAX                        ; 00509db3
    JNZ 0x00509dea                      ; 00509db5 | LAB_00509dea
        ;   XREF to: 00509dea (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [0x02f0cb1c]      ; 00509db7 | undefined4 DAT_02f0cb1c
    MOV EBX,0xfb                        ; 00509dbd
    CMP EBP,0x2                         ; 00509dc2
    JNZ 0x00509dd5                      ; 00509dc5 | LAB_00509dd5
        ;   XREF to: 00509dd5 (CONDITIONAL_JUMP)
    MOV EAX,[0x00678a60]                ; 00509dc7 | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 00509dcc | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330 ; 00509dcd | uchar shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(CEditorTools * this_ptr)
        ;   XREF to: 004a1330 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00509dd2
    PUSH EBX                            ; 00509dd5
        ;   Label: LAB_00509dd5
    MOV EDX,dword ptr [0x00678a60]      ; 00509dd6 | CEditorTools * g_CEditorToolsPtr
    PUSH 0x3f800000                     ; 00509ddc
    PUSH EDX                            ; 00509de1 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0 ; 00509de2 | void shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(CEditorTools * this_ptr, float scale_factor, int text_color)
        ;   XREF to: 004a1ca0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00509de7
    FLD float ptr [0x0063570d]          ; 00509dea | float FLOAT_0063570d
        ;   Label: LAB_00509dea
    FLD float ptr [ESI + 0x8]           ; 00509df0
    FMUL ST1                            ; 00509df3
    FLD float ptr [ESI + 0x4]           ; 00509df5
    FMUL ST2                            ; 00509df8
    FLD float ptr [ESI]                 ; 00509dfa
    FMULP ST3                           ; 00509dfc
    FXCH                                ; 00509dfe
    CALL crt_math.c_round_FUN_005fe6b0  ; 00509e00 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FXCH                                ; 00509e05
    CALL crt_math.c_round_FUN_005fe6b0  ; 00509e07 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FXCH                                ; 00509e0c
    FISTP dword ptr [ESP + 0x84]        ; 00509e0e
    FISTP dword ptr [ESP + 0x94]        ; 00509e15
    MOV ECX,dword ptr [ESP + 0x84]      ; 00509e1c
    MOV EBX,dword ptr [ESP + 0x94]      ; 00509e23
    PUSH ECX                            ; 00509e2a
    CALL crt_math.c_round_FUN_005fe6b0  ; 00509e2b | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    PUSH EBX                            ; 00509e30
    FISTP dword ptr [ESP + 0x9c]        ; 00509e31
    MOV EBP,dword ptr [ESP + 0x9c]      ; 00509e38
    PUSH EBP                            ; 00509e3f
    MOV EAX,[0x006810c8]                ; 00509e40 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH EAX                            ; 00509e45 | CDemonSet g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_00570ca0 ; 00509e46 | void core_set.cpp_CDemonSet_FUN_00570ca0(CDemonSet * this_ptr)
        ;   XREF to: 00570ca0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00509e4b
    PUSH -0x1                           ; 00509e4e
    LEA EAX,[EDI + 0x2d4]               ; 00509e50
    PUSH 0x0                            ; 00509e56
    PUSH EAX                            ; 00509e58
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 00509e59 | void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00509e5e
    PUSH 0x10000                        ; 00509e61
    PUSH 0x10000                        ; 00509e66
    PUSH 0x10000                        ; 00509e6b
    MOV EDX,dword ptr [0x006810c8]      ; 00509e70 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH EDX                            ; 00509e76 | CDemonSet g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_00570ca0 ; 00509e77 | void core_set.cpp_CDemonSet_FUN_00570ca0(CDemonSet * this_ptr)
        ;   XREF to: 00570ca0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00509e7c
    MOV ECX,dword ptr [0x006703ec]      ; 00509e7f | CDemonRenderer * g_CDemonRendererPtr
    PUSH ECX                            ; 00509e85 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 00509e86 | int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00509e8b
    TEST EAX,EAX                        ; 00509e8e
    JNZ 0x0050a1ad                      ; 00509e90 | LAB_0050a1ad
        ;   XREF to: 0050a1ad (CONDITIONAL_JUMP)
    FLD float ptr [ESI + 0xc]           ; 00509e96
    FCOMP double ptr [0x00635715]       ; 00509e99 | double DOUBLE_00635715
    FNSTSW AX                           ; 00509e9f
    SAHF                                ; 00509ea1
    JBE 0x0050a1c7                      ; 00509ea2 | LAB_0050a1c7
        ;   XREF to: 0050a1c7 (CONDITIONAL_JUMP)
    MOV EBX,0xbfb33333                  ; 00509ea8
        ;   Label: LAB_00509ea8
    MOV EBP,0x3e4ccccd                  ; 00509ead
    LEA EAX,[ESP + 0x60]                ; 00509eb2
    MOV EDX,dword ptr [0x006703ec]      ; 00509eb6 | CDemonRenderer * g_CDemonRendererPtr
    MOV dword ptr [ESP + 0x60],EBX      ; 00509ebc
    MOV dword ptr [ESP + 0x68],EBX      ; 00509ec0
    LEA EBX,[ESP + 0x54]                ; 00509ec4
    MOV dword ptr [ESP + 0x64],EBP      ; 00509ec8
    FLD float ptr [EAX]                 ; 00509ecc
    FMUL float ptr [0x00660d70]         ; 00509ece | DAT_00660d70
    FISTP dword ptr [EBX]               ; 00509ed4
    FLD float ptr [EAX + 0x4]           ; 00509ed6
    FMUL float ptr [0x00660d70]         ; 00509ed9 | DAT_00660d70
    FISTP dword ptr [EBX + 0x4]         ; 00509edf
    FLD float ptr [EAX + 0x8]           ; 00509ee2
    FMUL float ptr [0x00660d70]         ; 00509ee5 | DAT_00660d70
    FISTP dword ptr [EBX + 0x8]         ; 00509eeb
    LEA EAX,[ESP + 0x54]                ; 00509eee
    PUSH EAX                            ; 00509ef2
    MOV EAX,dword ptr [EDX]             ; 00509ef3 | CDemonRenderer g_CDemonRendererInstance
    PUSH EAX                            ; 00509ef5
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00509ef6 | void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00509efb
    MOV AH,byte ptr [ESP + 0x63]        ; 00509efe
    XOR AH,0x80                         ; 00509f02
    LEA EBX,[ESP + 0x48]                ; 00509f05
    MOV byte ptr [ESP + 0x63],AH        ; 00509f09
    LEA EAX,[ESP + 0x60]                ; 00509f0d
    MOV EDX,dword ptr [0x006703ec]      ; 00509f11 | CDemonRenderer * g_CDemonRendererPtr
    FLD float ptr [EAX]                 ; 00509f17
    FMUL float ptr [0x00660d70]         ; 00509f19 | DAT_00660d70
    FISTP dword ptr [EBX]               ; 00509f1f
    FLD float ptr [EAX + 0x4]           ; 00509f21
    FMUL float ptr [0x00660d70]         ; 00509f24 | DAT_00660d70
    FISTP dword ptr [EBX + 0x4]         ; 00509f2a
    FLD float ptr [EAX + 0x8]           ; 00509f2d
    FMUL float ptr [0x00660d70]         ; 00509f30 | DAT_00660d70
    FISTP dword ptr [EBX + 0x8]         ; 00509f36
    LEA EAX,[ESP + 0x48]                ; 00509f39
    PUSH EAX                            ; 00509f3d
    MOV EAX,dword ptr [EDX]             ; 00509f3e | CDemonRenderer g_CDemonRendererInstance
    ADD EAX,0x30                        ; 00509f40
    PUSH EAX                            ; 00509f43
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00509f44 | void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00509f49
    MOV DL,byte ptr [ESP + 0x6b]        ; 00509f4c
    LEA EBX,[ESP + 0x6c]                ; 00509f50
    XOR DL,0x80                         ; 00509f54
    LEA EAX,[ESP + 0x60]                ; 00509f57
    MOV byte ptr [ESP + 0x6b],DL        ; 00509f5b
    MOV EDX,dword ptr [0x006703ec]      ; 00509f5f | CDemonRenderer * g_CDemonRendererPtr
    FLD float ptr [EAX]                 ; 00509f65
    FMUL float ptr [0x00660d70]         ; 00509f67 | DAT_00660d70
    FISTP dword ptr [EBX]               ; 00509f6d
    FLD float ptr [EAX + 0x4]           ; 00509f6f
    FMUL float ptr [0x00660d70]         ; 00509f72 | DAT_00660d70
    FISTP dword ptr [EBX + 0x4]         ; 00509f78
    FLD float ptr [EAX + 0x8]           ; 00509f7b
    FMUL float ptr [0x00660d70]         ; 00509f7e | DAT_00660d70
    FISTP dword ptr [EBX + 0x8]         ; 00509f84
    LEA EAX,[ESP + 0x6c]                ; 00509f87
    PUSH EAX                            ; 00509f8b
    MOV EAX,dword ptr [EDX]             ; 00509f8c | CDemonRenderer g_CDemonRendererInstance
    ADD EAX,0x60                        ; 00509f8e
    PUSH EAX                            ; 00509f91
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00509f92 | void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00509f97
    MOV DH,byte ptr [ESP + 0x63]        ; 00509f9a
    LEA EBX,[ESP + 0x78]                ; 00509f9e
    XOR DH,0x80                         ; 00509fa2
    LEA EAX,[ESP + 0x60]                ; 00509fa5
    MOV byte ptr [ESP + 0x63],DH        ; 00509fa9
    MOV EDX,dword ptr [0x006703ec]      ; 00509fad | CDemonRenderer * g_CDemonRendererPtr
    FLD float ptr [EAX]                 ; 00509fb3
    FMUL float ptr [0x00660d70]         ; 00509fb5 | DAT_00660d70
    FISTP dword ptr [EBX]               ; 00509fbb
    FLD float ptr [EAX + 0x4]           ; 00509fbd
    FMUL float ptr [0x00660d70]         ; 00509fc0 | DAT_00660d70
    FISTP dword ptr [EBX + 0x4]         ; 00509fc6
    FLD float ptr [EAX + 0x8]           ; 00509fc9
    FMUL float ptr [0x00660d70]         ; 00509fcc | DAT_00660d70
    FISTP dword ptr [EBX + 0x8]         ; 00509fd2
    LEA EAX,[ESP + 0x78]                ; 00509fd5
    PUSH EAX                            ; 00509fd9
    MOV EAX,dword ptr [EDX]             ; 00509fda | CDemonRenderer g_CDemonRendererInstance
    ADD EAX,0x90                        ; 00509fdc
    PUSH EAX                            ; 00509fe1
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00509fe2 | void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00509fe7
    MOV EDX,0x4                         ; 00509fea
    MOV EAX,0x1                         ; 00509fef
    MOV EBX,0x2                         ; 00509ff4
    XOR ECX,ECX                         ; 00509ff9
    MOV dword ptr [ESP + 0x4],EDX       ; 00509ffb
    MOV dword ptr [ESP + 0x18],ECX      ; 00509fff
    MOV dword ptr [ESP + 0x1c],ECX      ; 0050a003
    MOV dword ptr [ESP + 0x20],ECX      ; 0050a007
    MOV dword ptr [ESP + 0x24],EAX      ; 0050a00b
    MOV dword ptr [ESP + 0x2c],ECX      ; 0050a00f
    MOV dword ptr [ESP + 0x30],EBX      ; 0050a013
    MOV EDX,0x1000000                   ; 0050a017 | DAT_01000000
    MOV dword ptr [ESP + 0x40],ECX      ; 0050a01c
    MOV dword ptr [ESP + 0x28],EDX      ; 0050a020 | DAT_01000000
    MOV EBP,EDX                         ; 0050a024
    MOV dword ptr [ESP + 0x34],EDX      ; 0050a026 | DAT_01000000
    MOV dword ptr [ESP + 0x38],EDX      ; 0050a02a | DAT_01000000
    MOV EDX,0x3                         ; 0050a02e
    MOV dword ptr [ESP + 0x44],EBP      ; 0050a033 | DAT_01000000
    MOV dword ptr [ESP + 0x3c],EDX      ; 0050a037
    FLD float ptr [0x0063570d]          ; 0050a03b | float FLOAT_0063570d
    FLD float ptr [ESI + 0xc]           ; 0050a041
    FMUL ST1                            ; 0050a044
    FLD float ptr [ESI + 0x10]          ; 0050a046
    FMUL ST2                            ; 0050a049
    FLD float ptr [ESI + 0x14]          ; 0050a04b
    MOV EDX,dword ptr [0x006703ec]      ; 0050a04e | CDemonRenderer * g_CDemonRendererPtr
    FMULP ST3                           ; 0050a054
    MOV EBX,dword ptr [EDX]             ; 0050a056 | CDemonRenderer g_CDemonRendererInstance
    FXCH                                ; 0050a058
    CALL crt_math.c_round_FUN_005fe6b0  ; 0050a05a | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x88]        ; 0050a05f
    MOV EAX,dword ptr [ESP + 0x88]      ; 0050a066
    MOV dword ptr [EBX + 0x20],EAX      ; 0050a06d
    CALL crt_math.c_round_FUN_005fe6b0  ; 0050a070 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    MOV EBX,dword ptr [EDX]             ; 0050a075 | CDemonRenderer g_CDemonRendererInstance
    FISTP dword ptr [ESP + 0x8c]        ; 0050a077
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0050a07e
    MOV dword ptr [EBX + 0x24],EAX      ; 0050a085
    CALL crt_math.c_round_FUN_005fe6b0  ; 0050a088 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    MOV EBX,dword ptr [EDX]             ; 0050a08d | CDemonRenderer g_CDemonRendererInstance
    FISTP dword ptr [ESP + 0x90]        ; 0050a08f
    MOV EAX,dword ptr [ESP + 0x90]      ; 0050a096
    MOV dword ptr [EBX + 0x28],EAX      ; 0050a09d
    MOV EAX,dword ptr [EDX]             ; 0050a0a0 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x2c],0xffff   ; 0050a0a2
    MOV EBX,dword ptr [EDX]             ; 0050a0a9 | CDemonRenderer g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0x88]      ; 0050a0ab
    MOV dword ptr [EBX + 0x50],EAX      ; 0050a0b2
    MOV EBX,dword ptr [EDX]             ; 0050a0b5 | CDemonRenderer g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0050a0b7
    MOV dword ptr [EBX + 0x54],EAX      ; 0050a0be
    MOV EBX,dword ptr [EDX]             ; 0050a0c1 | CDemonRenderer g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0x90]      ; 0050a0c3
    MOV dword ptr [EBX + 0x58],EAX      ; 0050a0ca
    MOV EAX,dword ptr [EDX]             ; 0050a0cd | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x5c],0xffff   ; 0050a0cf
    MOV EBX,dword ptr [EDX]             ; 0050a0d6 | CDemonRenderer g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0x88]      ; 0050a0d8
    MOV dword ptr [EBX + 0x80],EAX      ; 0050a0df
    MOV EBX,dword ptr [EDX]             ; 0050a0e5 | CDemonRenderer g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0050a0e7
    MOV dword ptr [EBX + 0x84],EAX      ; 0050a0ee
    MOV EBX,dword ptr [EDX]             ; 0050a0f4 | CDemonRenderer g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0x90]      ; 0050a0f6
    MOV dword ptr [EBX + 0x88],EAX      ; 0050a0fd
    MOV EAX,dword ptr [EDX]             ; 0050a103 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x8c],0xffff   ; 0050a105
    MOV EBX,dword ptr [EDX]             ; 0050a10f | CDemonRenderer g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0x88]      ; 0050a111
    MOV dword ptr [EBX + 0xb0],EAX      ; 0050a118
    MOV EBX,dword ptr [EDX]             ; 0050a11e | CDemonRenderer g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0050a120
    MOV dword ptr [EBX + 0xb4],EAX      ; 0050a127
    MOV EBX,dword ptr [EDX]             ; 0050a12d | CDemonRenderer g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0x90]      ; 0050a12f
    MOV dword ptr [EBX + 0xb8],EAX      ; 0050a136
    MOV EAX,dword ptr [EDX]             ; 0050a13c | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EAX + 0xbc],0xffff   ; 0050a13e
    LEA EAX,[EDI + 0x14c0]              ; 0050a148
    PUSH EAX                            ; 0050a14e
    PUSH EDX                            ; 0050a14f | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 0050a150 | void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050a155
    PUSH 0x0                            ; 0050a158
    MOV ESI,dword ptr [0x006703ec]      ; 0050a15a | CDemonRenderer * g_CDemonRendererPtr
    PUSH ESI                            ; 0050a160 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0 ; 0050a161 | void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(CDemonRenderer * this_ptr, int enabled)
        ;   XREF to: 0048c9f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050a166
    PUSH 0x1                            ; 0050a169
    MOV EDI,dword ptr [0x006703ec]      ; 0050a16b | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDI                            ; 0050a171 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 0050a172 | void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050a177
    MOV EAX,ESP                         ; 0050a17a
    PUSH EAX                            ; 0050a17c
    MOV EBP,dword ptr [0x006703ec]      ; 0050a17d | CDemonRenderer * g_CDemonRendererPtr
    PUSH EBP                            ; 0050a183 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0 ; 0050a184 | void engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 0048bba0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050a189
    PUSH 0x1                            ; 0050a18c
    MOV EAX,[0x006703ec]                ; 0050a18e | CDemonRenderer * g_CDemonRendererPtr
    PUSH EAX                            ; 0050a193 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0 ; 0050a194 | void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(CDemonRenderer * this_ptr, int enabled)
        ;   XREF to: 0048c9f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050a199
    PUSH 0x0                            ; 0050a19c
    MOV EDX,dword ptr [0x006703ec]      ; 0050a19e | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 0050a1a4 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 0050a1a5 | void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050a1aa
    MOV ECX,dword ptr [0x006703ec]      ; 0050a1ad | CDemonRenderer * g_CDemonRendererPtr
        ;   Label: LAB_0050a1ad
    PUSH ECX                            ; 0050a1b3 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 0050a1b4 | void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)
    FLD float ptr [ESI + 0x10]          ; 0050a1c7
        ;   Label: LAB_0050a1c7
    FCOMP double ptr [0x00635715]       ; 0050a1ca | double DOUBLE_00635715
    FNSTSW AX                           ; 0050a1d0
    SAHF                                ; 0050a1d2
    JA 0x00509ea8                       ; 0050a1d3 | LAB_00509ea8
        ;   XREF to: 00509ea8 (CONDITIONAL_JUMP)
    FLD float ptr [ESI + 0x14]          ; 0050a1d9
    FCOMP double ptr [0x00635715]       ; 0050a1dc | double DOUBLE_00635715
    FNSTSW AX                           ; 0050a1e2
    SAHF                                ; 0050a1e4
    JA 0x00509ea8                       ; 0050a1e5 | LAB_00509ea8
        ;   XREF to: 00509ea8 (CONDITIONAL_JUMP)
    JMP 0x0050a1ad                      ; 0050a1eb | LAB_0050a1ad
        ;   XREF to: 0050a1ad (UNCONDITIONAL_JUMP)

