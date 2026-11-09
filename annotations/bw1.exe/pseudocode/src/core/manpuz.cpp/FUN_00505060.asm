; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_FUN_00505060(CMansionPuzzleCircle *this_ptr,int gem_index)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   gem_index
;
; XREF[1]:
;   core_manpuz.cpp_FUN_005042e0 at 0050438f
;
; Referenced Globals:
;   undefined4 DAT_005e7475
;   undefined4 DAT_005e747d
;   undefined4 DAT_00603420
;   undefined4 DAT_00612560
;   CDemonSet* g_CDemonSetPtr = 01e82168
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;   core_set.cpp_FUN_00555770
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00482f00
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70
;   engine_matrix.c_pop_FUN_004839a0
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505060
        ;   Label: core_manpuz.cpp_FUN_00505060
    PUSH ESI                            ; 00505061
    PUSH EDI                            ; 00505062
    PUSH EBP                            ; 00505063
    SUB ESP,0x98                        ; 00505064
    MOV EDI,dword ptr [ESP + 0xac]      ; 0050506a
    MOV EDX,dword ptr [ESP + 0xb0]      ; 00505071
    LEA EAX,[EDX*0x4 + 0x0]             ; 00505078
    SUB EAX,EDX                         ; 0050507f
    SHL EAX,0x3                         ; 00505081
    SUB EAX,EDX                         ; 00505084
    LEA ESI,[EDI + 0xaa0]               ; 00505086
    SHL EAX,0x3                         ; 0050508c
    ADD ESI,EAX                         ; 0050508f
    LEA EAX,[ESI + 0x24]                ; 00505091
    PUSH EAX                            ; 00505094
    LEA EAX,[ESI + 0x30]                ; 00505095
    PUSH EAX                            ; 00505098
    MOV EDX,dword ptr [0x00612560]      ; 00505099 | DAT_00612560
    PUSH EDX                            ; 0050509f
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 005050a0
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    FLD float ptr [0x005e7475]          ; 005050a5 | DAT_005e7475
    FLD float ptr [ESI + 0x8]           ; 005050ab
    FMUL ST1                            ; 005050ae
    FLD float ptr [ESI + 0x4]           ; 005050b0
    FMUL ST2                            ; 005050b3
    FLD float ptr [ESI]                 ; 005050b5
    FMULP ST3                           ; 005050b7
    ADD ESP,0xc                         ; 005050b9
    FXCH                                ; 005050bc
    CALL crt_math.c_round_FUN_005c03a0  ; 005050be
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 005050c3
    CALL crt_math.c_round_FUN_005c03a0  ; 005050c5
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 005050ca
    FISTP dword ptr [ESP + 0x84]        ; 005050cc
    FISTP dword ptr [ESP + 0x94]        ; 005050d3
    MOV ECX,dword ptr [ESP + 0x84]      ; 005050da
    MOV EBX,dword ptr [ESP + 0x94]      ; 005050e1
    PUSH ECX                            ; 005050e8
    CALL crt_math.c_round_FUN_005c03a0  ; 005050e9
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH EBX                            ; 005050ee
    FISTP dword ptr [ESP + 0x9c]        ; 005050ef
    MOV EBP,dword ptr [ESP + 0x9c]      ; 005050f6
    PUSH EBP                            ; 005050fd
    MOV EAX,[0x00622c18]                ; 005050fe | g_CDemonSetPtr
    PUSH EAX                            ; 00505103
    CALL core_set.cpp_FUN_00555770      ; 00505104
        ;   XREF to: 00555770 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_00555770(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 00505109
    PUSH -0x1                           ; 0050510c
    LEA EAX,[EDI + 0x2d4]               ; 0050510e
    PUSH 0x0                            ; 00505114
    PUSH EAX                            ; 00505116
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 00505117
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0050511c
    PUSH 0x10000                        ; 0050511f
    PUSH 0x10000                        ; 00505124
    PUSH 0x10000                        ; 00505129
    MOV EDX,dword ptr [0x00622c18]      ; 0050512e | g_CDemonSetPtr
    PUSH EDX                            ; 00505134
    CALL core_set.cpp_FUN_00555770      ; 00505135
        ;   XREF to: 00555770 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_00555770(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 0050513a
    MOV ECX,dword ptr [0x00612560]      ; 0050513d | DAT_00612560
    PUSH ECX                            ; 00505143
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 00505144
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00505149
    TEST EAX,EAX                        ; 0050514c
    JNZ 0x00505474                      ; 0050514e
        ;   XREF to: 00505474 (CONDITIONAL_JUMP)  ; LAB_00505474
    FLD float ptr [ESI + 0xc]           ; 00505154
    FCOMP double ptr [0x005e747d]       ; 00505157 | DAT_005e747d
    FNSTSW AX                           ; 0050515d
    SAHF                                ; 0050515f
    JBE 0x0050548e                      ; 00505160
        ;   XREF to: 0050548e (CONDITIONAL_JUMP)  ; LAB_0050548e
    MOV EBX,0xbfb33333                  ; 00505166
        ;   Label: LAB_00505166
    MOV EBP,0x3e4ccccd                  ; 0050516b
    LEA EAX,[ESP + 0x78]                ; 00505170
    MOV EDX,dword ptr [0x00612560]      ; 00505174 | DAT_00612560
    MOV dword ptr [ESP + 0x78],EBX      ; 0050517a
    MOV dword ptr [ESP + 0x80],EBX      ; 0050517e
    LEA EBX,[ESP + 0x60]                ; 00505185
    MOV dword ptr [ESP + 0x7c],EBP      ; 00505189
    FLD float ptr [EAX]                 ; 0050518d
    FMUL float ptr [0x00603420]         ; 0050518f | DAT_00603420
    FISTP dword ptr [EBX]               ; 00505195
    FLD float ptr [EAX + 0x4]           ; 00505197
    FMUL float ptr [0x00603420]         ; 0050519a | DAT_00603420
    FISTP dword ptr [EBX + 0x4]         ; 005051a0
    FLD float ptr [EAX + 0x8]           ; 005051a3
    FMUL float ptr [0x00603420]         ; 005051a6 | DAT_00603420
    FISTP dword ptr [EBX + 0x8]         ; 005051ac
    LEA EAX,[ESP + 0x60]                ; 005051af
    PUSH EAX                            ; 005051b3
    MOV EAX,dword ptr [EDX]             ; 005051b4
    PUSH EAX                            ; 005051b6
    CALL engine_special.cpp_FUN_00580173 ; 005051b7
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005051bc
    MOV AH,byte ptr [ESP + 0x7b]        ; 005051bf
    XOR AH,0x80                         ; 005051c3
    LEA EBX,[ESP + 0x48]                ; 005051c6
    MOV byte ptr [ESP + 0x7b],AH        ; 005051ca
    LEA EAX,[ESP + 0x78]                ; 005051ce
    MOV EDX,dword ptr [0x00612560]      ; 005051d2 | DAT_00612560
    FLD float ptr [EAX]                 ; 005051d8
    FMUL float ptr [0x00603420]         ; 005051da | DAT_00603420
    FISTP dword ptr [EBX]               ; 005051e0
    FLD float ptr [EAX + 0x4]           ; 005051e2
    FMUL float ptr [0x00603420]         ; 005051e5 | DAT_00603420
    FISTP dword ptr [EBX + 0x4]         ; 005051eb
    FLD float ptr [EAX + 0x8]           ; 005051ee
    FMUL float ptr [0x00603420]         ; 005051f1 | DAT_00603420
    FISTP dword ptr [EBX + 0x8]         ; 005051f7
    LEA EAX,[ESP + 0x48]                ; 005051fa
    PUSH EAX                            ; 005051fe
    MOV EAX,dword ptr [EDX]             ; 005051ff
    ADD EAX,0x30                        ; 00505201
    PUSH EAX                            ; 00505204
    CALL engine_special.cpp_FUN_00580173 ; 00505205
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0050520a
    MOV DL,byte ptr [ESP + 0x83]        ; 0050520d
    LEA EBX,[ESP + 0x54]                ; 00505214
    XOR DL,0x80                         ; 00505218
    LEA EAX,[ESP + 0x78]                ; 0050521b
    MOV byte ptr [ESP + 0x83],DL        ; 0050521f
    MOV EDX,dword ptr [0x00612560]      ; 00505226 | DAT_00612560
    FLD float ptr [EAX]                 ; 0050522c
    FMUL float ptr [0x00603420]         ; 0050522e | DAT_00603420
    FISTP dword ptr [EBX]               ; 00505234
    FLD float ptr [EAX + 0x4]           ; 00505236
    FMUL float ptr [0x00603420]         ; 00505239 | DAT_00603420
    FISTP dword ptr [EBX + 0x4]         ; 0050523f
    FLD float ptr [EAX + 0x8]           ; 00505242
    FMUL float ptr [0x00603420]         ; 00505245 | DAT_00603420
    FISTP dword ptr [EBX + 0x8]         ; 0050524b
    LEA EAX,[ESP + 0x54]                ; 0050524e
    PUSH EAX                            ; 00505252
    MOV EAX,dword ptr [EDX]             ; 00505253
    ADD EAX,0x60                        ; 00505255
    PUSH EAX                            ; 00505258
    CALL engine_special.cpp_FUN_00580173 ; 00505259
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0050525e
    MOV DH,byte ptr [ESP + 0x7b]        ; 00505261
    LEA EBX,[ESP + 0x6c]                ; 00505265
    XOR DH,0x80                         ; 00505269
    LEA EAX,[ESP + 0x78]                ; 0050526c
    MOV byte ptr [ESP + 0x7b],DH        ; 00505270
    MOV EDX,dword ptr [0x00612560]      ; 00505274 | DAT_00612560
    FLD float ptr [EAX]                 ; 0050527a
    FMUL float ptr [0x00603420]         ; 0050527c | DAT_00603420
    FISTP dword ptr [EBX]               ; 00505282
    FLD float ptr [EAX + 0x4]           ; 00505284
    FMUL float ptr [0x00603420]         ; 00505287 | DAT_00603420
    FISTP dword ptr [EBX + 0x4]         ; 0050528d
    FLD float ptr [EAX + 0x8]           ; 00505290
    FMUL float ptr [0x00603420]         ; 00505293 | DAT_00603420
    FISTP dword ptr [EBX + 0x8]         ; 00505299
    LEA EAX,[ESP + 0x6c]                ; 0050529c
    PUSH EAX                            ; 005052a0
    MOV EAX,dword ptr [EDX]             ; 005052a1
    ADD EAX,0x90                        ; 005052a3
    PUSH EAX                            ; 005052a8
    CALL engine_special.cpp_FUN_00580173 ; 005052a9
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005052ae
    MOV EDX,0x4                         ; 005052b1
    MOV EAX,0x1                         ; 005052b6
    MOV EBX,0x2                         ; 005052bb
    XOR ECX,ECX                         ; 005052c0
    MOV dword ptr [ESP + 0x4],EDX       ; 005052c2
    MOV dword ptr [ESP + 0x18],ECX      ; 005052c6
    MOV dword ptr [ESP + 0x1c],ECX      ; 005052ca
    MOV dword ptr [ESP + 0x20],ECX      ; 005052ce
    MOV dword ptr [ESP + 0x24],EAX      ; 005052d2
    MOV dword ptr [ESP + 0x2c],ECX      ; 005052d6
    MOV dword ptr [ESP + 0x30],EBX      ; 005052da
    MOV EDX,0x1000000                   ; 005052de
    MOV dword ptr [ESP + 0x40],ECX      ; 005052e3
    MOV dword ptr [ESP + 0x28],EDX      ; 005052e7
    MOV EBP,EDX                         ; 005052eb
    MOV dword ptr [ESP + 0x34],EDX      ; 005052ed
    MOV dword ptr [ESP + 0x38],EDX      ; 005052f1
    MOV EDX,0x3                         ; 005052f5
    MOV dword ptr [ESP + 0x44],EBP      ; 005052fa
    MOV dword ptr [ESP + 0x3c],EDX      ; 005052fe
    FLD float ptr [0x005e7475]          ; 00505302 | DAT_005e7475
    FLD float ptr [ESI + 0xc]           ; 00505308
    FMUL ST1                            ; 0050530b
    FLD float ptr [ESI + 0x10]          ; 0050530d
    FMUL ST2                            ; 00505310
    FLD float ptr [ESI + 0x14]          ; 00505312
    MOV EDX,dword ptr [0x00612560]      ; 00505315 | DAT_00612560
    FMULP ST3                           ; 0050531b
    MOV EBX,dword ptr [EDX]             ; 0050531d
    FXCH                                ; 0050531f
    CALL crt_math.c_round_FUN_005c03a0  ; 00505321
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x88]        ; 00505326
    MOV EAX,dword ptr [ESP + 0x88]      ; 0050532d
    MOV dword ptr [EBX + 0x20],EAX      ; 00505334
    CALL crt_math.c_round_FUN_005c03a0  ; 00505337
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    MOV EBX,dword ptr [EDX]             ; 0050533c
    FISTP dword ptr [ESP + 0x8c]        ; 0050533e
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00505345
    MOV dword ptr [EBX + 0x24],EAX      ; 0050534c
    CALL crt_math.c_round_FUN_005c03a0  ; 0050534f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    MOV EBX,dword ptr [EDX]             ; 00505354
    FISTP dword ptr [ESP + 0x90]        ; 00505356
    MOV EAX,dword ptr [ESP + 0x90]      ; 0050535d
    MOV dword ptr [EBX + 0x28],EAX      ; 00505364
    MOV EAX,dword ptr [EDX]             ; 00505367
    MOV dword ptr [EAX + 0x2c],0xffff   ; 00505369
    MOV EBX,dword ptr [EDX]             ; 00505370
    MOV EAX,dword ptr [ESP + 0x88]      ; 00505372
    MOV dword ptr [EBX + 0x50],EAX      ; 00505379
    MOV EBX,dword ptr [EDX]             ; 0050537c
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0050537e
    MOV dword ptr [EBX + 0x54],EAX      ; 00505385
    MOV EBX,dword ptr [EDX]             ; 00505388
    MOV EAX,dword ptr [ESP + 0x90]      ; 0050538a
    MOV dword ptr [EBX + 0x58],EAX      ; 00505391
    MOV EAX,dword ptr [EDX]             ; 00505394
    MOV dword ptr [EAX + 0x5c],0xffff   ; 00505396
    MOV EBX,dword ptr [EDX]             ; 0050539d
    MOV EAX,dword ptr [ESP + 0x88]      ; 0050539f
    MOV dword ptr [EBX + 0x80],EAX      ; 005053a6
    MOV EBX,dword ptr [EDX]             ; 005053ac
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005053ae
    MOV dword ptr [EBX + 0x84],EAX      ; 005053b5
    MOV EBX,dword ptr [EDX]             ; 005053bb
    MOV EAX,dword ptr [ESP + 0x90]      ; 005053bd
    MOV dword ptr [EBX + 0x88],EAX      ; 005053c4
    MOV EAX,dword ptr [EDX]             ; 005053ca
    MOV dword ptr [EAX + 0x8c],0xffff   ; 005053cc
    MOV EBX,dword ptr [EDX]             ; 005053d6
    MOV EAX,dword ptr [ESP + 0x88]      ; 005053d8
    MOV dword ptr [EBX + 0xb0],EAX      ; 005053df
    MOV EBX,dword ptr [EDX]             ; 005053e5
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005053e7
    MOV dword ptr [EBX + 0xb4],EAX      ; 005053ee
    MOV EBX,dword ptr [EDX]             ; 005053f4
    MOV EAX,dword ptr [ESP + 0x90]      ; 005053f6
    MOV dword ptr [EBX + 0xb8],EAX      ; 005053fd
    MOV EAX,dword ptr [EDX]             ; 00505403
    MOV dword ptr [EAX + 0xbc],0xffff   ; 00505405
    LEA EAX,[EDI + 0x14c0]              ; 0050540f
    PUSH EAX                            ; 00505415
    PUSH EDX                            ; 00505416
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 00505417
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0050541c
    PUSH 0x0                            ; 0050541f
    MOV ESI,dword ptr [0x00612560]      ; 00505421 | DAT_00612560
    PUSH ESI                            ; 00505427
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70 ; 00505428
        ;   XREF to: 00483d70 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0050542d
    PUSH 0x1                            ; 00505430
    MOV EDI,dword ptr [0x00612560]      ; 00505432 | DAT_00612560
    PUSH EDI                            ; 00505438
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 00505439
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0050543e
    MOV EAX,ESP                         ; 00505441
    PUSH EAX                            ; 00505443
    MOV EBP,dword ptr [0x00612560]      ; 00505444 | DAT_00612560
    PUSH EBP                            ; 0050544a
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00482f00 ; 0050544b
        ;   XREF to: 00482f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00482f00(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 00505450
    PUSH 0x1                            ; 00505453
    MOV EAX,[0x00612560]                ; 00505455 | DAT_00612560
    PUSH EAX                            ; 0050545a
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70 ; 0050545b
        ;   XREF to: 00483d70 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00505460
    PUSH 0x0                            ; 00505463
    MOV EDX,dword ptr [0x00612560]      ; 00505465 | DAT_00612560
    PUSH EDX                            ; 0050546b
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 0050546c
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00505471
    MOV ECX,dword ptr [0x00612560]      ; 00505474 | DAT_00612560
        ;   Label: LAB_00505474
    PUSH ECX                            ; 0050547a
    CALL engine_matrix.c_pop_FUN_004839a0 ; 0050547b
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 00505480
    ADD ESP,0x98                        ; 00505483
    POP EBP                             ; 00505489
    POP EDI                             ; 0050548a
    POP ESI                             ; 0050548b
    POP EBX                             ; 0050548c
    RET                                 ; 0050548d
    FLD float ptr [ESI + 0x10]          ; 0050548e
        ;   Label: LAB_0050548e
    FCOMP double ptr [0x005e747d]       ; 00505491 | DAT_005e747d
    FNSTSW AX                           ; 00505497
    SAHF                                ; 00505499
    JA 0x00505166                       ; 0050549a
        ;   XREF to: 00505166 (CONDITIONAL_JUMP)  ; LAB_00505166
    FLD float ptr [ESI + 0x14]          ; 005054a0
    FCOMP double ptr [0x005e747d]       ; 005054a3 | DAT_005e747d
    FNSTSW AX                           ; 005054a9
    SAHF                                ; 005054ab
    JA 0x00505166                       ; 005054ac
        ;   XREF to: 00505166 (CONDITIONAL_JUMP)  ; LAB_00505166
    JMP 0x00505474                      ; 005054b2
        ;   XREF to: 00505474 (UNCONDITIONAL_JUMP)  ; LAB_00505474

