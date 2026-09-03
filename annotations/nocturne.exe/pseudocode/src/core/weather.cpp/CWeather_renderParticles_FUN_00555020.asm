; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weather_cpp_CWeather_renderParticles_FUN_00555020(CWeather *this_ptr)
;
; Parameters:
; CWeather *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0xf0]:1  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
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
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderScene_FUN_00509a80 at 00509e47
;
; Referenced Globals:
;   undefined4 DAT_005a4290
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 DAT_005c15bc
;   undefined4 DAT_005c15d4
;   undefined4 DAT_005c15ec
;   undefined4 DAT_00780000
;   undefined4 DAT_01b4d738
;   CDemonSet g_CDemonSet_01e57284
;   CVector3f[200] g_CVector3f_ARRAY_02ddfa28
;   undefined4 g_CVector3f_ARRAY_02ddfa28[0].y
;   undefined4 g_CVector3f_ARRAY_02ddfa28[0].z
;   undefined4 g_CVector3f_ARRAY_02ddfa28[1].x
;   undefined4 g_CVector3f_ARRAY_02ddfa28[1].y
;   undefined4 g_CVector3f_ARRAY_02ddfa28[1].z
;
; Called Functions:
;   core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_00461f80
;   engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;   engine_special.cpp_transformPoint_FUN_00530a25
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00555020
        ;   Label: core_weather.cpp_CWeather_renderParticles_FUN_00555020
    PUSH EDI                            ; 00555021
    PUSH EBP                            ; 00555022
    SUB ESP,0xe4                        ; 00555023
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00555029
    CMP dword ptr [EAX],0x0             ; 00555030
    JNZ 0x0055503f                      ; 00555033
        ;   XREF to: 0055503f (CONDITIONAL_JUMP)  ; LAB_0055503f
    ADD ESP,0xe4                        ; 00555035
    POP EBP                             ; 0055503b
    POP EDI                             ; 0055503c
    POP ESI                             ; 0055503d
    RET                                 ; 0055503e
    LEA EAX,[ESP + 0x40]                ; 0055503f
        ;   Label: LAB_0055503f
    PUSH EAX                            ; 00555043
    MOV ECX,dword ptr [0x005ae704]      ; 00555044 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 0055504a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0 ; 0055504b
        ;   XREF to: 00460db0 (UNCONDITIONAL_CALL)  ; CVector3f * engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0(CDemonRenderer * this_ptr, CVector3f * output)
    ADD ESP,0x8                         ; 00555050
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00555053
    CMP dword ptr [EAX],0x1             ; 0055505a
    JNZ 0x00555065                      ; 0055505d
        ;   XREF to: 00555065 (CONDITIONAL_JUMP)  ; LAB_00555065
    XOR ESI,ESI                         ; 0055505f
    MOV dword ptr [ESP + 0x40],ESI      ; 00555061
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00555065
        ;   Label: LAB_00555065
    CMP dword ptr [EAX],0x1             ; 0055506c
    JNZ 0x0055554b                      ; 0055506f
        ;   XREF to: 0055554b (CONDITIONAL_JUMP)  ; LAB_0055554b
    PUSH 0x5c15bc                       ; 00555075 | DAT_005c15bc
    MOV EAX,[0x005ae704]                ; 0055507a | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 0055507f | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00555080
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EAX,[0x005ae704]                ; 00555085 | g_CDemonRenderer_PTR_005ae704
    MOV EDX,dword ptr [EAX]             ; 0055508a | DAT_01b4d738
    MOV dword ptr [EDX + 0x18],0x80000  ; 0055508c
    MOV EDX,dword ptr [EAX]             ; 00555093 | DAT_01b4d738
    MOV dword ptr [EDX + 0x1c],0x80000  ; 00555095
    MOV EDX,dword ptr [EAX]             ; 0055509c | DAT_01b4d738
    MOV dword ptr [EDX + 0x48],0x780000 ; 0055509e | DAT_00780000
    MOV EDX,dword ptr [EAX]             ; 005550a5 | DAT_01b4d738
    MOV dword ptr [EDX + 0x4c],0x80000  ; 005550a7
    MOV EDX,dword ptr [EAX]             ; 005550ae | DAT_01b4d738
    MOV dword ptr [EDX + 0x78],0x780000 ; 005550b0 | DAT_00780000
    MOV EDX,dword ptr [EAX]             ; 005550b7 | DAT_01b4d738
    MOV dword ptr [EDX + 0x7c],0xf80000 ; 005550b9
    MOV EDX,dword ptr [EAX]             ; 005550c0 | DAT_01b4d738
    MOV dword ptr [EDX + 0xa8],0x80000  ; 005550c2
    MOV EAX,dword ptr [EAX]             ; 005550cc | DAT_01b4d738
    ADD ESP,0x8                         ; 005550ce
    MOV dword ptr [EAX + 0xac],0xf80000 ; 005550d1
    PUSH 0x0                            ; 005550db
        ;   Label: LAB_005550db
    PUSH 0x0                            ; 005550dd
    PUSH 0x0                            ; 005550df
    PUSH 0x0                            ; 005550e1
    PUSH 0x0                            ; 005550e3
    MOV EDX,dword ptr [0x005be368]      ; 005550e5 | g_CDemonSet_PTR_005be368
    PUSH EDX                            ; 005550eb | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0 ; 005550ec
        ;   XREF to: 0050adc0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 005550f1
    MOV ECX,0x3dcccccd                  ; 005550f4
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005550f9
    MOV dword ptr [ESP + 0xdc],ECX      ; 00555100
    MOV ESI,dword ptr [EAX]             ; 00555107
    MOV dword ptr [ESP + 0xe0],ECX      ; 00555109
    CMP ESI,0x1                         ; 00555110
    JZ 0x00555564                       ; 00555113
        ;   XREF to: 00555564 (CONDITIONAL_JUMP)  ; LAB_00555564
    PUSH EBX                            ; 00555119
        ;   Label: LAB_00555119
    MOV EAX,0x4                         ; 0055511a
    MOV EBP,0x1                         ; 0055511f
    MOV ECX,dword ptr [0x005ae704]      ; 00555124 | g_CDemonRenderer_PTR_005ae704
    XOR EDX,EDX                         ; 0055512a
    MOV dword ptr [ESP + 0x8],EAX       ; 0055512c
    MOV dword ptr [ESP + 0x18],EDX      ; 00555130
    MOV dword ptr [ESP + 0x14],EDX      ; 00555134
    MOV dword ptr [ESP + 0x10],EDX      ; 00555138
    MOV dword ptr [ESP + 0xc],EDX       ; 0055513c
    MOV dword ptr [ESP + 0x1c],EDX      ; 00555140
    MOV dword ptr [ESP + 0x20],EBP      ; 00555144
    PUSH EBP                            ; 00555148
    MOV EAX,0x2                         ; 00555149
    MOV EDX,0x3                         ; 0055514e
    PUSH ECX                            ; 00555153 | DAT_01b4d738
    MOV dword ptr [ESP + 0x2c],EAX      ; 00555154
    MOV dword ptr [ESP + 0x30],EDX      ; 00555158
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 0055515c
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00555161
    PUSH 0x8000                         ; 00555164
    MOV EBX,dword ptr [0x005ae704]      ; 00555169 | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 0055516f | DAT_01b4d738
    MOV ESI,0x2ddfa28                   ; 00555170
    XOR EDI,EDI                         ; 00555175
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 00555177
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0055517c
    MOV EBP,dword ptr [0x005ae704]      ; 0055517f | g_CDemonRenderer_PTR_005ae704
        ;   Label: LAB_0055517f
    LEA EBX,[ESP + 0xa4]                ; 00555185
    MOV EAX,ESI                         ; 0055518c
    MOV EBP,dword ptr [EBP]             ; 0055518e | DAT_01b4d738
    FLD float ptr [EAX]                 ; 00555191 | g_CVector3f_ARRAY_02ddfa28 | g_CVector3f_ARRAY_02ddfa28[1].x
    FMUL float ptr [0x005a4290]         ; 00555193 | DAT_005a4290
    FISTP dword ptr [EBX]               ; 00555199
    FLD float ptr [EAX + 0x4]           ; 0055519b | g_CVector3f_ARRAY_02ddfa28[0].y | g_CVector3f_ARRAY_02ddfa28[1].y
    FMUL float ptr [0x005a4290]         ; 0055519e | DAT_005a4290
    FISTP dword ptr [EBX + 0x4]         ; 005551a4
    FLD float ptr [EAX + 0x8]           ; 005551a7 | g_CVector3f_ARRAY_02ddfa28[0].z | g_CVector3f_ARRAY_02ddfa28[1].z
    FMUL float ptr [0x005a4290]         ; 005551aa | DAT_005a4290
    FISTP dword ptr [EBX + 0x8]         ; 005551b0
    LEA EAX,[ESP + 0xa4]                ; 005551b3
    PUSH EAX                            ; 005551ba
    PUSH EBP                            ; 005551bb
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 005551bc
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005551c1
    PUSH EBP                            ; 005551c4
    MOV EBP,dword ptr [0x005ae704]      ; 005551c5 | g_CDemonRenderer_PTR_005ae704
    PUSH EBP                            ; 005551cb | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_00461f80 ; 005551cc
        ;   XREF to: 00461f80 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_00461f80(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 005551d1
    TEST EAX,EAX                        ; 005551d4
    JZ 0x00555484                       ; 005551d6
        ;   XREF to: 00555484 (CONDITIONAL_JUMP)  ; LAB_00555484
    PUSH ESI                            ; 005551dc | g_CVector3f_ARRAY_02ddfa28
    MOV EAX,[0x005ae704]                ; 005551dd | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 005551e2 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 005551e3
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 005551e8
    PUSH 0x0                            ; 005551eb
    LEA EAX,[ESP + 0x48]                ; 005551ed
    PUSH EAX                            ; 005551f1
    MOV EDX,dword ptr [0x005ae704]      ; 005551f2 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 005551f8 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 005551f9
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 005551fe
    LEA EBX,[ESP + 0x74]                ; 00555201
    MOV EAX,ESI                         ; 00555205
    FLD float ptr [EAX]                 ; 00555207 | g_CVector3f_ARRAY_02ddfa28
    FMUL float ptr [0x005a4290]         ; 00555209 | DAT_005a4290
    FISTP dword ptr [EBX]               ; 0055520f
    FLD float ptr [EAX + 0x4]           ; 00555211 | g_CVector3f_ARRAY_02ddfa28[0].y
    FMUL float ptr [0x005a4290]         ; 00555214 | DAT_005a4290
    FISTP dword ptr [EBX + 0x4]         ; 0055521a
    FLD float ptr [EAX + 0x8]           ; 0055521d | g_CVector3f_ARRAY_02ddfa28[0].z
    FMUL float ptr [0x005a4290]         ; 00555220 | DAT_005a4290
    FISTP dword ptr [EBX + 0x8]         ; 00555226
    PUSH 0x4                            ; 00555229
    PUSH 0x0                            ; 0055522b
    PUSH 0x0                            ; 0055522d
    LEA EAX,[ESP + 0x80]                ; 0055522f
    PUSH EAX                            ; 00555236
    MOV ECX,dword ptr [0x005be368]      ; 00555237 | g_CDemonSet_PTR_005be368
    PUSH ECX                            ; 0055523d | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50 ; 0055523e
        ;   XREF to: 0050bb50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 00555243
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00555246
    CMP dword ptr [EAX],0x2             ; 0055524d
    JNZ 0x005552e5                      ; 00555250
        ;   XREF to: 005552e5 (CONDITIONAL_JUMP)  ; LAB_005552e5
    MOV EAX,EDI                         ; 00555256
    AND EAX,0x3                         ; 00555258
    SHL EAX,0x16                        ; 0055525b
    MOV EBP,EDI                         ; 0055525e
    MOV dword ptr [ESP + 0xd4],EAX      ; 00555260
    AND EBP,0xc                         ; 00555267
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0055526a
    MOV EAX,[0x005ae704]                ; 00555271 | g_CDemonRenderer_PTR_005ae704
    SAR EBP,0x2                         ; 00555276
    ADD EDX,0x80000                     ; 00555279
    MOV EBX,dword ptr [EAX]             ; 0055527f | DAT_01b4d738
    SHL EBP,0x16                        ; 00555281
    MOV dword ptr [EBX + 0x18],EDX      ; 00555284
    LEA ECX,[EBP + 0x80000]             ; 00555287
    MOV EBX,dword ptr [EAX]             ; 0055528d | DAT_01b4d738
    MOV dword ptr [ESP + 0xdc],ECX      ; 0055528f
    MOV dword ptr [EBX + 0x1c],ECX      ; 00555296
    MOV ECX,dword ptr [ESP + 0xd4]      ; 00555299
    MOV EBX,dword ptr [EAX]             ; 005552a0 | DAT_01b4d738
    ADD ECX,0x380000                    ; 005552a2
    MOV dword ptr [EBX + 0x48],ECX      ; 005552a8
    MOV EBX,dword ptr [EAX]             ; 005552ab | DAT_01b4d738
    MOV dword ptr [ESP + 0xd8],ECX      ; 005552ad
    MOV ECX,dword ptr [ESP + 0xdc]      ; 005552b4
    MOV dword ptr [EBX + 0x4c],ECX      ; 005552bb
    MOV EBX,dword ptr [EAX]             ; 005552be | DAT_01b4d738
    MOV ECX,dword ptr [ESP + 0xd8]      ; 005552c0
    MOV dword ptr [EBX + 0x78],ECX      ; 005552c7
    MOV EBX,dword ptr [EAX]             ; 005552ca | DAT_01b4d738
    ADD EBP,0x380000                    ; 005552cc
    MOV dword ptr [EBX + 0x7c],EBP      ; 005552d2
    MOV EBX,dword ptr [EAX]             ; 005552d5 | DAT_01b4d738
    MOV dword ptr [EBX + 0xa8],EDX      ; 005552d7
    MOV EAX,dword ptr [EAX]             ; 005552dd | DAT_01b4d738
    MOV dword ptr [EAX + 0xac],EBP      ; 005552df
    FLD float ptr [ESP + 0xe4]          ; 005552e5
        ;   Label: LAB_005552e5
    MOV EAX,dword ptr [ESP + 0xe0]      ; 005552ec
    LEA EBX,[ESP + 0x68]                ; 005552f3
    MOV EDX,dword ptr [0x005ae704]      ; 005552f7 | g_CDemonRenderer_PTR_005ae704
    FCHS                                ; 005552fd
    XOR EBP,EBP                         ; 005552ff
    FSTP float ptr [ESP + 0xc0]         ; 00555301
    MOV dword ptr [ESP + 0xbc],EAX      ; 00555308
    LEA EAX,[ESP + 0xbc]                ; 0055530f
    MOV dword ptr [ESP + 0xc4],EBP      ; 00555316
    FLD float ptr [EAX]                 ; 0055531d
    FMUL float ptr [0x005a4290]         ; 0055531f | DAT_005a4290
    FISTP dword ptr [EBX]               ; 00555325
    FLD float ptr [EAX + 0x4]           ; 00555327
    FMUL float ptr [0x005a4290]         ; 0055532a | DAT_005a4290
    FISTP dword ptr [EBX + 0x4]         ; 00555330
    FLD float ptr [EAX + 0x8]           ; 00555333
    FMUL float ptr [0x005a4290]         ; 00555336 | DAT_005a4290
    FISTP dword ptr [EBX + 0x8]         ; 0055533c
    LEA EAX,[ESP + 0x68]                ; 0055533f
    PUSH EAX                            ; 00555343
    MOV EAX,dword ptr [EDX]             ; 00555344 | DAT_01b4d738
    PUSH EAX                            ; 00555346
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00555347
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0055534c
    MOV AH,byte ptr [ESP + 0xbf]        ; 0055534f
    XOR AH,0x80                         ; 00555356
    LEA EBX,[ESP + 0x8c]                ; 00555359
    MOV byte ptr [ESP + 0xbf],AH        ; 00555360
    LEA EAX,[ESP + 0xbc]                ; 00555367
    MOV EDX,dword ptr [0x005ae704]      ; 0055536e | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 00555374
    FMUL float ptr [0x005a4290]         ; 00555376 | DAT_005a4290
    FISTP dword ptr [EBX]               ; 0055537c
    FLD float ptr [EAX + 0x4]           ; 0055537e
    FMUL float ptr [0x005a4290]         ; 00555381 | DAT_005a4290
    FISTP dword ptr [EBX + 0x4]         ; 00555387
    FLD float ptr [EAX + 0x8]           ; 0055538a
    FMUL float ptr [0x005a4290]         ; 0055538d | DAT_005a4290
    FISTP dword ptr [EBX + 0x8]         ; 00555393
    LEA EAX,[ESP + 0x8c]                ; 00555396
    PUSH EAX                            ; 0055539d
    MOV EAX,dword ptr [EDX]             ; 0055539e | DAT_01b4d738
    ADD EAX,0x30                        ; 005553a0
    PUSH EAX                            ; 005553a3
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 005553a4
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005553a9
    MOV DL,byte ptr [ESP + 0xc3]        ; 005553ac
    LEA EBX,[ESP + 0x98]                ; 005553b3
    XOR DL,0x80                         ; 005553ba
    LEA EAX,[ESP + 0xbc]                ; 005553bd
    MOV byte ptr [ESP + 0xc3],DL        ; 005553c4
    MOV EDX,dword ptr [0x005ae704]      ; 005553cb | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 005553d1
    FMUL float ptr [0x005a4290]         ; 005553d3 | DAT_005a4290
    FISTP dword ptr [EBX]               ; 005553d9
    FLD float ptr [EAX + 0x4]           ; 005553db
    FMUL float ptr [0x005a4290]         ; 005553de | DAT_005a4290
    FISTP dword ptr [EBX + 0x4]         ; 005553e4
    FLD float ptr [EAX + 0x8]           ; 005553e7
    FMUL float ptr [0x005a4290]         ; 005553ea | DAT_005a4290
    FISTP dword ptr [EBX + 0x8]         ; 005553f0
    LEA EAX,[ESP + 0x98]                ; 005553f3
    PUSH EAX                            ; 005553fa
    MOV EAX,dword ptr [EDX]             ; 005553fb | DAT_01b4d738
    ADD EAX,0x60                        ; 005553fd
    PUSH EAX                            ; 00555400
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00555401
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00555406
    MOV DH,byte ptr [ESP + 0xbf]        ; 00555409
    LEA EBX,[ESP + 0x5c]                ; 00555410
    XOR DH,0x80                         ; 00555414
    LEA EAX,[ESP + 0xbc]                ; 00555417
    MOV byte ptr [ESP + 0xbf],DH        ; 0055541e
    MOV EDX,dword ptr [0x005ae704]      ; 00555425 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 0055542b
    FMUL float ptr [0x005a4290]         ; 0055542d | DAT_005a4290
    FISTP dword ptr [EBX]               ; 00555433
    FLD float ptr [EAX + 0x4]           ; 00555435
    FMUL float ptr [0x005a4290]         ; 00555438 | DAT_005a4290
    FISTP dword ptr [EBX + 0x4]         ; 0055543e
    FLD float ptr [EAX + 0x8]           ; 00555441
    FMUL float ptr [0x005a4290]         ; 00555444 | DAT_005a4290
    FISTP dword ptr [EBX + 0x8]         ; 0055544a
    LEA EAX,[ESP + 0x5c]                ; 0055544d
    PUSH EAX                            ; 00555451
    MOV EAX,dword ptr [EDX]             ; 00555452 | DAT_01b4d738
    ADD EAX,0x90                        ; 00555454
    PUSH EAX                            ; 00555459
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0055545a
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0055545f
    LEA EAX,[ESP + 0x4]                 ; 00555462
    PUSH EAX                            ; 00555466
    MOV EAX,[0x005ae704]                ; 00555467 | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 0055546c | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0 ; 0055546d
        ;   XREF to: 004602a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00555472
    MOV EDX,dword ptr [0x005ae704]      ; 00555475 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 0055547b | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 0055547c
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00555481
    INC EDI                             ; 00555484
        ;   Label: LAB_00555484
    ADD ESI,0xc                         ; 00555485
    CMP EDI,0xc8                        ; 00555488
    JL 0x0055517f                       ; 0055548e
        ;   XREF to: 0055517f (CONDITIONAL_JUMP)  ; LAB_0055517f
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00555494
    CMP dword ptr [EAX],0x1             ; 0055549b
    JNZ 0x0055552f                      ; 0055549e
        ;   XREF to: 0055552f (CONDITIONAL_JUMP)  ; LAB_0055552f
    PUSH 0x5c15d4                       ; 005554a4 | DAT_005c15d4
    MOV EBX,dword ptr [0x005ae704]      ; 005554a9 | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 005554af | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 005554b0
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EAX,[0x005ae704]                ; 005554b5 | g_CDemonRenderer_PTR_005ae704
    MOV EDX,dword ptr [EAX]             ; 005554ba | DAT_01b4d738
    MOV dword ptr [EDX + 0x18],0x80000  ; 005554bc
    MOV EDX,dword ptr [EAX]             ; 005554c3 | DAT_01b4d738
    MOV dword ptr [EDX + 0x1c],0x80000  ; 005554c5
    MOV EDX,dword ptr [EAX]             ; 005554cc | DAT_01b4d738
    MOV dword ptr [EDX + 0x48],0x780000 ; 005554ce | DAT_00780000
    MOV EDX,dword ptr [EAX]             ; 005554d5 | DAT_01b4d738
    MOV dword ptr [EDX + 0x4c],0x80000  ; 005554d7
    MOV EDX,dword ptr [EAX]             ; 005554de | DAT_01b4d738
    MOV dword ptr [EDX + 0x78],0x780000 ; 005554e0 | DAT_00780000
    MOV EDX,dword ptr [EAX]             ; 005554e7 | DAT_01b4d738
    MOV dword ptr [EDX + 0x7c],0xf80000 ; 005554e9
    MOV EDX,dword ptr [EAX]             ; 005554f0 | DAT_01b4d738
    MOV EDI,0x2ddfa28                   ; 005554f2
    XOR ESI,ESI                         ; 005554f7
    MOV dword ptr [EDX + 0xa8],0x80000  ; 005554f9
    XOR EBP,EBP                         ; 00555503
    MOV EAX,dword ptr [EAX]             ; 00555505 | DAT_01b4d738
    ADD EDI,0x4                         ; 00555507
    ADD ESP,0x8                         ; 0055550a
    MOV dword ptr [EAX + 0xac],0xf80000 ; 0055550d
    CMP byte ptr [ESI + 0x2de06a8],0x0  ; 00555517
        ;   Label: LAB_00555517
    JNZ 0x00555581                      ; 0055551e
        ;   XREF to: 00555581 (CONDITIONAL_JUMP)  ; LAB_00555581
    ADD EDI,0xc                         ; 00555520
        ;   Label: LAB_00555520
    INC ESI                             ; 00555523
    ADD EBP,0x4                         ; 00555524
    CMP ESI,0xc8                        ; 00555527
    JL 0x00555517                       ; 0055552d
        ;   XREF to: 00555517 (CONDITIONAL_JUMP)  ; LAB_00555517
    PUSH 0x0                            ; 0055552f
        ;   Label: LAB_0055552f
    MOV ESI,dword ptr [0x005ae704]      ; 00555531 | g_CDemonRenderer_PTR_005ae704
    PUSH ESI                            ; 00555537 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00555538
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0055553d
    POP EBX                             ; 00555540
    ADD ESP,0xe4                        ; 00555541
    POP EBP                             ; 00555547
    POP EDI                             ; 00555548
    POP ESI                             ; 00555549
    RET                                 ; 0055554a
    PUSH 0x5c15ec                       ; 0055554b | DAT_005c15ec
        ;   Label: LAB_0055554b
    MOV EBP,dword ptr [0x005ae704]      ; 00555550 | g_CDemonRenderer_PTR_005ae704
    PUSH EBP                            ; 00555556 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00555557
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0055555c
    JMP 0x005550db                      ; 0055555f
        ;   XREF to: 005550db (UNCONDITIONAL_JUMP)  ; LAB_005550db
    MOV EBP,0xbecccccd                  ; 00555564
        ;   Label: LAB_00555564
    MOV EDI,0x3d4ccccd                  ; 00555569
    MOV dword ptr [ESP + 0xe0],EBP      ; 0055556e
    MOV dword ptr [ESP + 0xdc],EDI      ; 00555575
    JMP 0x00555119                      ; 0055557c
        ;   XREF to: 00555119 (UNCONDITIONAL_JUMP)  ; LAB_00555119
    IMUL EAX,ESI,0xc                    ; 00555581
        ;   Label: LAB_00555581
    ADD EAX,0x2ddfa28                   ; 00555584
    MOV EAX,dword ptr [EAX]             ; 00555589 | g_CVector3f_ARRAY_02ddfa28[1].x
    MOV dword ptr [ESP + 0xc8],EAX      ; 0055558b
    MOV EAX,dword ptr [EDI]             ; 00555592 | g_CVector3f_ARRAY_02ddfa28[1].y
    MOV dword ptr [ESP + 0xcc],EAX      ; 00555594
    MOV EAX,dword ptr [EDI + 0x4]       ; 0055559b | g_CVector3f_ARRAY_02ddfa28[1].z
    MOV dword ptr [ESP + 0xd0],EAX      ; 0055559e
    MOV EAX,dword ptr [EBP + 0x2de0388] ; 005555a5
    MOV dword ptr [ESP + 0xcc],EAX      ; 005555ab
    LEA EAX,[ESP + 0xc8]                ; 005555b2
    PUSH EAX                            ; 005555b9
    MOV EAX,[0x005ae704]                ; 005555ba | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 005555bf | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 005555c0
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 005555c5
    PUSH 0x0                            ; 005555c8
    LEA EAX,[ESP + 0x48]                ; 005555ca
    PUSH EAX                            ; 005555ce
    MOV EDX,dword ptr [0x005ae704]      ; 005555cf | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 005555d5 | DAT_01b4d738
    XOR EBX,EBX                         ; 005555d6
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 005555d8
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    MOV ECX,0x3e4ccccd                  ; 005555dd
    LEA EAX,[ESP + 0x44]                ; 005555e2
    ADD ESP,0xc                         ; 005555e6
    MOV EDX,dword ptr [0x005ae704]      ; 005555e9 | g_CDemonRenderer_PTR_005ae704
    MOV dword ptr [ESP + 0x3c],EBX      ; 005555ef
    MOV dword ptr [ESP + 0x40],EBX      ; 005555f3
    LEA EBX,[ESP + 0x80]                ; 005555f7
    MOV dword ptr [ESP + 0x38],ECX      ; 005555fe
    FLD float ptr [EAX]                 ; 00555602
    FMUL float ptr [0x005a4290]         ; 00555604 | DAT_005a4290
    FISTP dword ptr [EBX]               ; 0055560a
    FLD float ptr [EAX + 0x4]           ; 0055560c
    FMUL float ptr [0x005a4290]         ; 0055560f | DAT_005a4290
    FISTP dword ptr [EBX + 0x4]         ; 00555615
    FLD float ptr [EAX + 0x8]           ; 00555618
    FMUL float ptr [0x005a4290]         ; 0055561b | DAT_005a4290
    FISTP dword ptr [EBX + 0x8]         ; 00555621
    LEA EAX,[ESP + 0x80]                ; 00555624
    PUSH EAX                            ; 0055562b
    MOV EAX,dword ptr [EDX]             ; 0055562c | DAT_01b4d738
    PUSH EAX                            ; 0055562e
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0055562f
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00555634
    MOV BH,byte ptr [ESP + 0x3b]        ; 00555637
    XOR BH,0x80                         ; 0055563b
    LEA EAX,[ESP + 0x38]                ; 0055563e
    MOV byte ptr [ESP + 0x3b],BH        ; 00555642
    LEA EBX,[ESP + 0x50]                ; 00555646
    MOV EDX,dword ptr [0x005ae704]      ; 0055564a | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 00555650
    FMUL float ptr [0x005a4290]         ; 00555652 | DAT_005a4290
    FISTP dword ptr [EBX]               ; 00555658
    FLD float ptr [EAX + 0x4]           ; 0055565a
    FMUL float ptr [0x005a4290]         ; 0055565d | DAT_005a4290
    FISTP dword ptr [EBX + 0x4]         ; 00555663
    FLD float ptr [EAX + 0x8]           ; 00555666
    FMUL float ptr [0x005a4290]         ; 00555669 | DAT_005a4290
    FISTP dword ptr [EBX + 0x8]         ; 0055566f
    LEA EAX,[ESP + 0x50]                ; 00555672
    PUSH EAX                            ; 00555676
    MOV EAX,dword ptr [EDX]             ; 00555677 | DAT_01b4d738
    ADD EAX,0x30                        ; 00555679
    PUSH EAX                            ; 0055567c
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0055567d
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EDX,0x3ecccccd                  ; 00555682
    LEA EBX,[ESP + 0x34]                ; 00555687
    ADD ESP,0x8                         ; 0055568b
    LEA EAX,[ESP + 0x38]                ; 0055568e
    MOV dword ptr [ESP + 0x3c],EDX      ; 00555692
    MOV EDX,dword ptr [0x005ae704]      ; 00555696 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 0055569c
    FMUL float ptr [0x005a4290]         ; 0055569e | DAT_005a4290
    FISTP dword ptr [EBX]               ; 005556a4
    FLD float ptr [EAX + 0x4]           ; 005556a6
    FMUL float ptr [0x005a4290]         ; 005556a9 | DAT_005a4290
    FISTP dword ptr [EBX + 0x4]         ; 005556af
    FLD float ptr [EAX + 0x8]           ; 005556b2
    FMUL float ptr [0x005a4290]         ; 005556b5 | DAT_005a4290
    FISTP dword ptr [EBX + 0x8]         ; 005556bb
    LEA EAX,[ESP + 0x2c]                ; 005556be
    PUSH EAX                            ; 005556c2
    MOV EAX,dword ptr [EDX]             ; 005556c3 | DAT_01b4d738
    ADD EAX,0x60                        ; 005556c5
    PUSH EAX                            ; 005556c8
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 005556c9
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005556ce
    LEA EBX,[ESP + 0xb0]                ; 005556d1
    MOV CL,byte ptr [ESP + 0x3b]        ; 005556d8
    LEA EAX,[ESP + 0x38]                ; 005556dc
    XOR CL,0x80                         ; 005556e0
    MOV EDX,dword ptr [0x005ae704]      ; 005556e3 | g_CDemonRenderer_PTR_005ae704
    MOV byte ptr [ESP + 0x3b],CL        ; 005556e9
    FLD float ptr [EAX]                 ; 005556ed
    FMUL float ptr [0x005a4290]         ; 005556ef | DAT_005a4290
    FISTP dword ptr [EBX]               ; 005556f5
    FLD float ptr [EAX + 0x4]           ; 005556f7
    FMUL float ptr [0x005a4290]         ; 005556fa | DAT_005a4290
    FISTP dword ptr [EBX + 0x4]         ; 00555700
    FLD float ptr [EAX + 0x8]           ; 00555703
    FMUL float ptr [0x005a4290]         ; 00555706 | DAT_005a4290
    FISTP dword ptr [EBX + 0x8]         ; 0055570c
    LEA EAX,[ESP + 0xb0]                ; 0055570f
    PUSH EAX                            ; 00555716
    MOV EAX,dword ptr [EDX]             ; 00555717 | DAT_01b4d738
    ADD EAX,0x90                        ; 00555719
    PUSH EAX                            ; 0055571e
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0055571f
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00555724
    LEA EAX,[ESP + 0x4]                 ; 00555727
    PUSH EAX                            ; 0055572b
    MOV ECX,dword ptr [0x005ae704]      ; 0055572c | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 00555732 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0 ; 00555733
        ;   XREF to: 004602a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00555738
    MOV EBX,dword ptr [0x005ae704]      ; 0055573b | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 00555741 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00555742
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00555747
    JMP 0x00555520                      ; 0055574a
        ;   XREF to: 00555520 (UNCONDITIONAL_JUMP)  ; LAB_00555520

