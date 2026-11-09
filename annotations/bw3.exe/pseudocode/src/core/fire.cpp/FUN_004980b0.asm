; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004980b0(CVector3f *param_1)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00498090 = 00498145
;   undefined4 DAT_005c0528
;   undefined4 DAT_005df8e4
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fc9ac
;   undefined4 DAT_005fc9c4
;   undefined4 DAT_005fc9dc
;   undefined4 DAT_005fc9f4
;   undefined4 DAT_005fca0c
;   undefined4 DAT_005fca24
;   undefined4 DAT_0060b034
;   undefined4 DAT_0060b038
;   undefined4 DAT_0060b03c
;   undefined4 DAT_0060b040
;   undefined4 DAT_0060b064
;   ... and 15 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046e6b0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_matrix.c_pop_FUN_0046d080
;   engine_special.cpp_FUN_005632a3
;   engine_special.cpp_FUN_0056356c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004980b0
        ;   Label: core_fire.cpp_FUN_004980b0
    PUSH ESI                            ; 004980b1
    PUSH EDI                            ; 004980b2
    PUSH EBP                            ; 004980b3
    MOV EBP,ESP                         ; 004980b4
    SUB ESP,0xe8                        ; 004980b6
    AND ESP,0xfffffff8                  ; 004980bc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004980bf
    MOV EDX,0x3ecccccd                  ; 004980c2
    MOV ECX,dword ptr [EAX + 0x4c]      ; 004980c7
    MOV dword ptr [ESP + 0xd8],EDX      ; 004980ca
    CMP ECX,0x6                         ; 004980d1
    JNZ 0x004980e1                      ; 004980d4
        ;   XREF to: 004980e1 (CONDITIONAL_JUMP)  ; LAB_004980e1
    MOV dword ptr [ESP + 0xd8],0x3dcccccd ; 004980d6
    MOV ESI,dword ptr [0x005f2afc]      ; 004980e1 | DAT_005f2afc
        ;   Label: LAB_004980e1
    LEA EBX,[ESP + 0xbc]                ; 004980e7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004980ee
    MOV ESI,dword ptr [ESI]             ; 004980f1 | DAT_01bdd7e4
    FLD float ptr [EAX]                 ; 004980f3
    FMUL float ptr [0x005df8e4]         ; 004980f5 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 004980fb
    FLD float ptr [EAX + 0x4]           ; 004980fd
    FMUL float ptr [0x005df8e4]         ; 00498100 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 00498106
    FLD float ptr [EAX + 0x8]           ; 00498109
    FMUL float ptr [0x005df8e4]         ; 0049810c | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 00498112
    LEA EAX,[ESP + 0xbc]                ; 00498115
    PUSH EAX                            ; 0049811c
    PUSH ESI                            ; 0049811d
    CALL engine_special.cpp_FUN_0056356c ; 0049811e
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0056356c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00498123
    PUSH ESI                            ; 00498126
    MOV ESI,dword ptr [0x005f2afc]      ; 00498127 | DAT_005f2afc
    PUSH ESI                            ; 0049812d | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046e6b0 ; 0049812e
        ;   XREF to: 0046e6b0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046e6b0(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 00498133
    TEST EAX,EAX                        ; 00498136
    JNZ 0x004986aa                      ; 00498138
        ;   XREF to: 004986aa (CONDITIONAL_JUMP)  ; LAB_004986aa
    MOV ESP,EBP                         ; 0049813e
        ;   Label: LAB_0049813e
    POP EBP                             ; 00498140
    POP EDI                             ; 00498141
    POP ESI                             ; 00498142
    POP EBX                             ; 00498143
    RET                                 ; 00498144
    PUSH 0x5fc9ac                       ; 00498145 | DAT_005fc9ac
        ;   Label: caseD_0
    MOV EAX,[0x005f2afc]                ; 0049814a | DAT_005f2afc
    PUSH EAX                            ; 0049814f | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 00498150
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   Label: LAB_00498150
    ADD ESP,0x8                         ; 00498155
    PUSH 0x0                            ; 00498158
        ;   Label: default
    MOV ECX,dword ptr [EBP + 0x14]      ; 0049815a
    MOV EAX,[0x007e2a54]                ; 0049815d | DAT_007e2a54
    PUSH ECX                            ; 00498162
    MOV EDX,dword ptr [EAX + 0x3c]      ; 00498163
    PUSH EAX                            ; 00498166
    CALL dword ptr [EDX + 0x4]          ; 00498167
    MOV EDX,0xffff                      ; 0049816a
    ADD ESP,0xc                         ; 0049816f
    MOV EBX,dword ptr [0x01c6e24c]      ; 00498172 | DAT_01c6e24c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00498178
    SUB EDX,EBX                         ; 0049817b
    MOV EAX,dword ptr [EAX + 0x40]      ; 0049817d
    MOV ESI,0xffff                      ; 00498180
    IMUL EDX                            ; 00498185
    SHRD EAX,EDX,0x10                   ; 00498187
    PUSH 0x1                            ; 0049818b
    MOV [0x0060b040],EAX                ; 0049818d | DAT_0060b040
    MOV dword ptr [0x0060b034],ESI      ; 00498192 | DAT_0060b034
    MOV dword ptr [0x0060b038],ESI      ; 00498198 | DAT_0060b038
    MOV dword ptr [0x0060b03c],ESI      ; 0049819e | DAT_0060b03c
    MOV dword ptr [0x0060b064],ESI      ; 004981a4 | DAT_0060b064
    MOV dword ptr [0x0060b068],ESI      ; 004981aa | DAT_0060b068
    MOV dword ptr [0x0060b06c],ESI      ; 004981b0 | DAT_0060b06c
    MOV dword ptr [0x0060b094],ESI      ; 004981b6 | DAT_0060b094
    MOV dword ptr [0x0060b098],ESI      ; 004981bc | DAT_0060b098
    MOV dword ptr [0x0060b09c],ESI      ; 004981c2 | DAT_0060b09c
    MOV dword ptr [0x0060b0c4],ESI      ; 004981c8 | DAT_0060b0c4
    MOV dword ptr [0x0060b0c8],ESI      ; 004981ce | DAT_0060b0c8
    MOV dword ptr [0x0060b0cc],ESI      ; 004981d4 | DAT_0060b0cc
    MOV ESI,dword ptr [0x005f2afc]      ; 004981da | DAT_005f2afc
    MOV [0x0060b070],EAX                ; 004981e0 | DAT_0060b070
    PUSH ESI                            ; 004981e5 | DAT_01bdd7e4
    MOV [0x0060b0a0],EAX                ; 004981e6 | DAT_0060b0a0
    MOV [0x0060b0d0],EAX                ; 004981eb | DAT_0060b0d0
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 004981f0
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004981f5
    PUSH 0x1c73670                      ; 004981f8
    MOV EDI,dword ptr [0x005f2afc]      ; 004981fd | DAT_005f2afc
    PUSH EDI                            ; 00498203 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510 ; 00498204
        ;   XREF to: 0046c510 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00498209
    PUSH 0x0                            ; 0049820c
    MOV EAX,[0x005f2afc]                ; 0049820e | DAT_005f2afc
    PUSH EAX                            ; 00498213 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 00498214
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00498219
    MOV EDX,dword ptr [0x005f2afc]      ; 0049821c | DAT_005f2afc
    PUSH EDX                            ; 00498222 | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 00498223
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 00498228
    LEA EDI,[ESP + 0xa4]                ; 0049822b
    MOV ESI,dword ptr [EBP + 0x14]      ; 00498232
    MOV EBX,0x3ccccccd                  ; 00498235
    MOVSD ES:EDI,ESI                    ; 0049823a
    MOVSD ES:EDI,ESI                    ; 0049823b
    MOVSD ES:EDI,ESI                    ; 0049823c
    MOV ECX,0x3f800000                  ; 0049823d
    MOV ESI,dword ptr [EBP + 0x14]      ; 00498242
    MOV EAX,dword ptr [EBP + 0x14]      ; 00498245
    LEA EDI,[ESP + 0x20]                ; 00498248
    LEA ESI,[ESI + 0xc]                 ; 0049824c
    MOV dword ptr [ESP],ECX             ; 0049824f
    MOV dword ptr [ESP + 0x4],EBX       ; 00498252
    MOVSD ES:EDI,ESI                    ; 00498256
    MOVSD ES:EDI,ESI                    ; 00498257
    MOVSD ES:EDI,ESI                    ; 00498258
    ADD EAX,0x18                        ; 00498259
    XOR ESI,ESI                         ; 0049825c
    MOV dword ptr [ESP + 0xe4],EAX      ; 0049825e
    MOV dword ptr [ESP + 0xe0],ESI      ; 00498265
    FLD float ptr [ESP + 0x4]           ; 0049826c
        ;   Label: LAB_0049826c
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00498270
    FLD ST0                             ; 00498277
    FLD double ptr [0x005c0528]         ; 00498279 | DAT_005c0528
    FXCH                                ; 0049827f
    FMUL ST1                            ; 00498281
    FLD float ptr [EAX]                 ; 00498283
    FXCH                                ; 00498285
    FSTP ST3                            ; 00498287
    FXCH ST2                            ; 00498289
    FSTP float ptr [ESP + 0x4]          ; 0049828b
    FXCH                                ; 0049828f
    FMUL float ptr [ESP + 0x4]          ; 00498291
    FLD float ptr [EAX + 0x4]           ; 00498295
    FMUL float ptr [ESP + 0x4]          ; 00498298
    FLD float ptr [EAX + 0x8]           ; 0049829c
    FMUL float ptr [ESP + 0x4]          ; 0049829f
    FLD float ptr [ESP]                 ; 004982a3
    FLD float ptr [ESP + 0x20]          ; 004982a6
    LEA EDI,[ESP + 0x8]                 ; 004982aa
    LEA ESI,[ESP + 0xb0]                ; 004982ae
    FXCH ST4                            ; 004982b5
    FSTP float ptr [ESP + 0xb0]         ; 004982b7
    FXCH ST2                            ; 004982be
    FSTP float ptr [ESP + 0xb4]         ; 004982c0
    FSTP float ptr [ESP + 0xb8]         ; 004982c7
    MOVSD ES:EDI,ESI                    ; 004982ce
    MOVSD ES:EDI,ESI                    ; 004982cf
    MOVSD ES:EDI,ESI                    ; 004982d0
    FLD ST0                             ; 004982d1
    FXCH ST2                            ; 004982d3
    FSUB float ptr [ESP + 0x8]          ; 004982d5
    FXCH ST2                            ; 004982d9
    FMULP ST3                           ; 004982db
    FXCH                                ; 004982dd
    FST float ptr [ESP + 0x20]          ; 004982df
    FMUL float ptr [ESP + 0x4]          ; 004982e3
    FLD float ptr [ESP + 0x28]          ; 004982e7
    FLD float ptr [ESP + 0x24]          ; 004982eb
    FSUB float ptr [ESP + 0xc]          ; 004982ef
    FXCH                                ; 004982f3
    FSUB float ptr [ESP + 0x10]         ; 004982f5
    FXCH                                ; 004982f9
    FST float ptr [ESP + 0x24]          ; 004982fb
    FMUL float ptr [ESP + 0x4]          ; 004982ff
    FXCH                                ; 00498303
    FST float ptr [ESP + 0x28]          ; 00498305
    FMUL float ptr [ESP + 0x4]          ; 00498309
    FLD float ptr [ESP + 0xa4]          ; 0049830d
    FLD float ptr [ESP + 0xa8]          ; 00498314
    LEA EAX,[ESP + 0xa4]                ; 0049831b
    FXCH ST6                            ; 00498322
    FSTP ST5                            ; 00498324
    FLD float ptr [ESP + 0xac]          ; 00498326
    PUSH EAX                            ; 0049832d
    LEA EDI,[ESP + 0x30]                ; 0049832e
    LEA ESI,[ESP + 0x90]                ; 00498332
    FXCH ST4                            ; 00498339
    FSTP float ptr [ESP + 0x90]         ; 0049833b
    FXCH ST2                            ; 00498342
    FSTP float ptr [ESP + 0x94]         ; 00498344
    FSTP float ptr [ESP + 0x98]         ; 0049834b
    MOVSD ES:EDI,ESI                    ; 00498352
    MOVSD ES:EDI,ESI                    ; 00498353
    MOVSD ES:EDI,ESI                    ; 00498354
    FXCH ST2                            ; 00498355
    FSTP float ptr [ESP + 0x4]          ; 00498357
    MOV EDI,dword ptr [0x005f2afc]      ; 0049835b | DAT_005f2afc
    FXCH                                ; 00498361
    FSUB float ptr [ESP + 0x30]         ; 00498363
    FXCH ST2                            ; 00498367
    FSUB float ptr [ESP + 0x34]         ; 00498369
    FXCH                                ; 0049836d
    FSUB float ptr [ESP + 0x38]         ; 0049836f
    FXCH ST2                            ; 00498373
    FSTP float ptr [ESP + 0xa8]         ; 00498375
    FSTP float ptr [ESP + 0xac]         ; 0049837c
    PUSH EDI                            ; 00498383 | DAT_01bdd7e4
    FSTP float ptr [ESP + 0xb4]         ; 00498384
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0049838b
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00498390
    PUSH 0x0                            ; 00498393
    PUSH 0x1c73658                      ; 00498395 | DAT_01c73658
    MOV EAX,[0x005f2afc]                ; 0049839a | DAT_005f2afc
    PUSH EAX                            ; 0049839f | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0 ; 004983a0
        ;   XREF to: 0046cee0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004983a5
    FLD float ptr [ESP + 0xd8]          ; 004983a8
    FCHS                                ; 004983af
    FMUL float ptr [ESP]                ; 004983b1
    LEA EBX,[ESP + 0x38]                ; 004983b4
    XOR EDX,EDX                         ; 004983b8
    FSTP float ptr [ESP + 0x80]         ; 004983ba
    MOV EAX,dword ptr [ESP + 0x80]      ; 004983c1
    MOV dword ptr [ESP + 0x88],EDX      ; 004983c8
    MOV dword ptr [ESP + 0xdc],EAX      ; 004983cf
    MOV dword ptr [ESP + 0x84],EAX      ; 004983d6
    LEA EAX,[ESP + 0x80]                ; 004983dd
    MOV EDX,dword ptr [0x005f2afc]      ; 004983e4 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 004983ea
    FMUL float ptr [0x005df8e4]         ; 004983ec | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 004983f2
    FLD float ptr [EAX + 0x4]           ; 004983f4
    FMUL float ptr [0x005df8e4]         ; 004983f7 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 004983fd
    FLD float ptr [EAX + 0x8]           ; 00498400
    FMUL float ptr [0x005df8e4]         ; 00498403 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 00498409
    LEA EAX,[ESP + 0x38]                ; 0049840c
    PUSH EAX                            ; 00498410
    MOV EAX,dword ptr [EDX]             ; 00498411 | DAT_01bdd7e4
    PUSH EAX                            ; 00498413
    CALL engine_special.cpp_FUN_005632a3 ; 00498414
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00498419
    FLD float ptr [ESP + 0xd8]          ; 0049841c
    FMUL float ptr [ESP]                ; 00498423
    LEA EBX,[ESP + 0x5c]                ; 00498426
    FSTP float ptr [ESP + 0xd4]         ; 0049842a
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00498431
    MOV EDX,dword ptr [0x005f2afc]      ; 00498438 | DAT_005f2afc
    MOV dword ptr [ESP + 0x80],EAX      ; 0049843e
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00498445
    XOR ECX,ECX                         ; 0049844c
    MOV dword ptr [ESP + 0x84],EAX      ; 0049844e
    LEA EAX,[ESP + 0x80]                ; 00498455
    MOV dword ptr [ESP + 0x88],ECX      ; 0049845c
    FLD float ptr [EAX]                 ; 00498463
    FMUL float ptr [0x005df8e4]         ; 00498465 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049846b
    FLD float ptr [EAX + 0x4]           ; 0049846d
    FMUL float ptr [0x005df8e4]         ; 00498470 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 00498476
    FLD float ptr [EAX + 0x8]           ; 00498479
    FMUL float ptr [0x005df8e4]         ; 0049847c | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 00498482
    LEA EAX,[ESP + 0x5c]                ; 00498485
    PUSH EAX                            ; 00498489
    MOV EAX,dword ptr [EDX]             ; 0049848a | DAT_01bdd7e4
    ADD EAX,0x30                        ; 0049848c
    PUSH EAX                            ; 0049848f
    CALL engine_special.cpp_FUN_005632a3 ; 00498490
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00498495
    XOR EBX,EBX                         ; 00498498
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0049849a
    MOV dword ptr [ESP + 0x88],EBX      ; 004984a1
    LEA EBX,[ESP + 0x14]                ; 004984a8
    MOV dword ptr [ESP + 0x80],EAX      ; 004984ac
    MOV dword ptr [ESP + 0x84],EAX      ; 004984b3
    LEA EAX,[ESP + 0x80]                ; 004984ba
    MOV EDX,dword ptr [0x005f2afc]      ; 004984c1 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 004984c7
    FMUL float ptr [0x005df8e4]         ; 004984c9 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 004984cf
    FLD float ptr [EAX + 0x4]           ; 004984d1
    FMUL float ptr [0x005df8e4]         ; 004984d4 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 004984da
    FLD float ptr [EAX + 0x8]           ; 004984dd
    FMUL float ptr [0x005df8e4]         ; 004984e0 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 004984e6
    LEA EAX,[ESP + 0x14]                ; 004984e9
    PUSH EAX                            ; 004984ed
    MOV EAX,dword ptr [EDX]             ; 004984ee | DAT_01bdd7e4
    ADD EAX,0x60                        ; 004984f0
    PUSH EAX                            ; 004984f3
    CALL engine_special.cpp_FUN_005632a3 ; 004984f4
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004984f9
    XOR ESI,ESI                         ; 004984fc
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004984fe
    MOV EDX,dword ptr [0x005f2afc]      ; 00498505 | DAT_005f2afc
    MOV dword ptr [ESP + 0x80],EAX      ; 0049850b
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00498512
    MOV dword ptr [ESP + 0x88],ESI      ; 00498519
    MOV dword ptr [ESP + 0x84],EAX      ; 00498520
    LEA EBX,[ESP + 0x74]                ; 00498527
    LEA EAX,[ESP + 0x80]                ; 0049852b
    FLD float ptr [EAX]                 ; 00498532
    FMUL float ptr [0x005df8e4]         ; 00498534 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049853a
    FLD float ptr [EAX + 0x4]           ; 0049853c
    FMUL float ptr [0x005df8e4]         ; 0049853f | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 00498545
    FLD float ptr [EAX + 0x8]           ; 00498548
    FMUL float ptr [0x005df8e4]         ; 0049854b | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 00498551
    LEA EAX,[ESP + 0x74]                ; 00498554
    PUSH EAX                            ; 00498558
    MOV EAX,dword ptr [EDX]             ; 00498559 | DAT_01bdd7e4
    ADD EAX,0x90                        ; 0049855b
    PUSH EAX                            ; 00498560
    CALL engine_special.cpp_FUN_005632a3 ; 00498561
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00498566
    PUSH ESI                            ; 00498569
    MOV EDI,dword ptr [EBP + 0x14]      ; 0049856a
    MOV EAX,[0x007e2a54]                ; 0049856d | DAT_007e2a54
    PUSH EDI                            ; 00498572
    MOV EDX,dword ptr [EAX + 0x3c]      ; 00498573
    PUSH EAX                            ; 00498576
    CALL dword ptr [EDX + 0x4]          ; 00498577
    MOV EDX,0xffff                      ; 0049857a
    MOV ECX,dword ptr [0x01c6e24c]      ; 0049857f | DAT_01c6e24c
    ADD ESP,0xc                         ; 00498585
    MOV EAX,dword ptr [EDI + 0x40]      ; 00498588
    SUB EDX,ECX                         ; 0049858b
    MOV EBX,0xffff                      ; 0049858d
    IMUL EDX                            ; 00498592
    SHRD EAX,EDX,0x10                   ; 00498594
    PUSH 0x1                            ; 00498598
    MOV [0x0060b040],EAX                ; 0049859a | DAT_0060b040
    MOV dword ptr [0x0060b034],EBX      ; 0049859f | DAT_0060b034
    MOV dword ptr [0x0060b038],EBX      ; 004985a5 | DAT_0060b038
    MOV dword ptr [0x0060b03c],EBX      ; 004985ab | DAT_0060b03c
    MOV dword ptr [0x0060b064],EBX      ; 004985b1 | DAT_0060b064
    MOV dword ptr [0x0060b068],EBX      ; 004985b7 | DAT_0060b068
    MOV dword ptr [0x0060b06c],EBX      ; 004985bd | DAT_0060b06c
    MOV dword ptr [0x0060b094],EBX      ; 004985c3 | DAT_0060b094
    MOV dword ptr [0x0060b098],EBX      ; 004985c9 | DAT_0060b098
    MOV dword ptr [0x0060b09c],EBX      ; 004985cf | DAT_0060b09c
    MOV dword ptr [0x0060b0c4],EBX      ; 004985d5 | DAT_0060b0c4
    MOV dword ptr [0x0060b0c8],EBX      ; 004985db | DAT_0060b0c8
    MOV dword ptr [0x0060b0cc],EBX      ; 004985e1 | DAT_0060b0cc
    MOV EBX,dword ptr [0x005f2afc]      ; 004985e7 | DAT_005f2afc
    MOV [0x0060b070],EAX                ; 004985ed | DAT_0060b070
    PUSH EBX                            ; 004985f2 | DAT_01bdd7e4
    MOV [0x0060b0a0],EAX                ; 004985f3 | DAT_0060b0a0
    MOV [0x0060b0d0],EAX                ; 004985f8 | DAT_0060b0d0
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 004985fd
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00498602
    PUSH 0x1c73670                      ; 00498605
    MOV ESI,dword ptr [0x005f2afc]      ; 0049860a | DAT_005f2afc
    PUSH ESI                            ; 00498610 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510 ; 00498611
        ;   XREF to: 0046c510 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00498616
    PUSH 0x0                            ; 00498619
    MOV EDI,dword ptr [0x005f2afc]      ; 0049861b | DAT_005f2afc
    PUSH EDI                            ; 00498621 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 00498622
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00498627
    MOV EAX,[0x005f2afc]                ; 0049862a | DAT_005f2afc
    PUSH EAX                            ; 0049862f | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 00498630
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 00498635
    MOV EDX,dword ptr [ESP + 0xe0]      ; 00498638
    INC EDX                             ; 0049863f
    MOV dword ptr [ESP + 0xe0],EDX      ; 00498640
    CMP EDX,0x3                         ; 00498647
    JGE 0x0049813e                      ; 0049864a
        ;   XREF to: 0049813e (CONDITIONAL_JUMP)  ; LAB_0049813e
    JMP 0x0049826c                      ; 00498650
        ;   XREF to: 0049826c (UNCONDITIONAL_JUMP)  ; LAB_0049826c
    PUSH 0x5fc9c4                       ; 00498655 | DAT_005fc9c4
        ;   Label: caseD_1
    MOV EDI,dword ptr [0x005f2afc]      ; 0049865a | DAT_005f2afc
    PUSH EDI                            ; 00498660 | DAT_01bdd7e4
    JMP 0x00498150                      ; 00498661
        ;   XREF to: 00498150 (UNCONDITIONAL_JUMP)  ; LAB_00498150
    PUSH 0x5fc9dc                       ; 00498666 | DAT_005fc9dc
        ;   Label: caseD_2
    MOV ESI,dword ptr [0x005f2afc]      ; 0049866b | DAT_005f2afc
    PUSH ESI                            ; 00498671 | DAT_01bdd7e4
    JMP 0x00498150                      ; 00498672
        ;   XREF to: 00498150 (UNCONDITIONAL_JUMP)  ; LAB_00498150
    PUSH 0x5fc9f4                       ; 00498677 | DAT_005fc9f4
        ;   Label: caseD_3
    MOV EBX,dword ptr [0x005f2afc]      ; 0049867c | DAT_005f2afc
    PUSH EBX                            ; 00498682 | DAT_01bdd7e4
    JMP 0x00498150                      ; 00498683
        ;   XREF to: 00498150 (UNCONDITIONAL_JUMP)  ; LAB_00498150
    PUSH 0x5fca0c                       ; 00498688 | DAT_005fca0c
        ;   Label: caseD_4
    MOV ECX,dword ptr [0x005f2afc]      ; 0049868d | DAT_005f2afc
    PUSH ECX                            ; 00498693 | DAT_01bdd7e4
    JMP 0x00498150                      ; 00498694
        ;   XREF to: 00498150 (UNCONDITIONAL_JUMP)  ; LAB_00498150
    PUSH 0x5fca24                       ; 00498699 | DAT_005fca24
        ;   Label: caseD_5
    MOV EDX,dword ptr [0x005f2afc]      ; 0049869e | DAT_005f2afc
    PUSH EDX                            ; 004986a4 | DAT_01bdd7e4
    JMP 0x00498150                      ; 004986a5
        ;   XREF to: 00498150 (UNCONDITIONAL_JUMP)  ; LAB_00498150
    MOV EDI,dword ptr [EBP + 0x14]      ; 004986aa
        ;   Label: LAB_004986aa
    PUSH EDI                            ; 004986ad
    MOV EAX,[0x005f2afc]                ; 004986ae | DAT_005f2afc
    PUSH EAX                            ; 004986b3 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 004986b4
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004986b9
    PUSH 0x0                            ; 004986bc
    PUSH 0x1c73658                      ; 004986be | DAT_01c73658
    MOV EDX,dword ptr [0x005f2afc]      ; 004986c3 | DAT_005f2afc
    PUSH EDX                            ; 004986c9 | DAT_01bdd7e4
    LEA EBX,[ESP + 0x5c]                ; 004986ca
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0 ; 004986ce
        ;   XREF to: 0046cee0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004986d3
    MOV EDX,dword ptr [0x005f2afc]      ; 004986d6 | DAT_005f2afc
    FLD float ptr [ESP + 0xd8]          ; 004986dc
    FCHS                                ; 004986e3
    FSTP float ptr [ESP + 0x80]         ; 004986e5
    MOV EAX,dword ptr [ESP + 0x80]      ; 004986ec
    XOR ECX,ECX                         ; 004986f3
    MOV dword ptr [ESP + 0xd4],EAX      ; 004986f5
    MOV dword ptr [ESP + 0x84],EAX      ; 004986fc
    LEA EAX,[ESP + 0x80]                ; 00498703
    MOV dword ptr [ESP + 0x88],ECX      ; 0049870a
    FLD float ptr [EAX]                 ; 00498711
    FMUL float ptr [0x005df8e4]         ; 00498713 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 00498719
    FLD float ptr [EAX + 0x4]           ; 0049871b
    FMUL float ptr [0x005df8e4]         ; 0049871e | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 00498724
    FLD float ptr [EAX + 0x8]           ; 00498727
    FMUL float ptr [0x005df8e4]         ; 0049872a | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 00498730
    LEA EAX,[ESP + 0x50]                ; 00498733
    PUSH EAX                            ; 00498737
    MOV EAX,dword ptr [EDX]             ; 00498738 | DAT_01bdd7e4
    PUSH EAX                            ; 0049873a
    CALL engine_special.cpp_FUN_005632a3 ; 0049873b
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00498740
    XOR EBX,EBX                         ; 00498743
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00498745
    MOV dword ptr [ESP + 0x88],EBX      ; 0049874c
    MOV dword ptr [ESP + 0x80],EAX      ; 00498753
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0049875a
    LEA EBX,[ESP + 0x44]                ; 00498761
    MOV dword ptr [ESP + 0x84],EAX      ; 00498765
    LEA EAX,[ESP + 0x80]                ; 0049876c
    MOV EDX,dword ptr [0x005f2afc]      ; 00498773 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 00498779
    FMUL float ptr [0x005df8e4]         ; 0049877b | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 00498781
    FLD float ptr [EAX + 0x4]           ; 00498783
    FMUL float ptr [0x005df8e4]         ; 00498786 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049878c
    FLD float ptr [EAX + 0x8]           ; 0049878f
    FMUL float ptr [0x005df8e4]         ; 00498792 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 00498798
    LEA EAX,[ESP + 0x44]                ; 0049879b
    PUSH EAX                            ; 0049879f
    MOV EAX,dword ptr [EDX]             ; 004987a0 | DAT_01bdd7e4
    ADD EAX,0x30                        ; 004987a2
    PUSH EAX                            ; 004987a5
    XOR ESI,ESI                         ; 004987a6
    CALL engine_special.cpp_FUN_005632a3 ; 004987a8
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004987ad
    LEA EBX,[ESP + 0x68]                ; 004987b0
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004987b4
    MOV EDX,dword ptr [0x005f2afc]      ; 004987bb | DAT_005f2afc
    MOV dword ptr [ESP + 0x80],EAX      ; 004987c1
    MOV dword ptr [ESP + 0x84],EAX      ; 004987c8
    LEA EAX,[ESP + 0x80]                ; 004987cf
    MOV dword ptr [ESP + 0x88],ESI      ; 004987d6
    FLD float ptr [EAX]                 ; 004987dd
    FMUL float ptr [0x005df8e4]         ; 004987df | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 004987e5
    FLD float ptr [EAX + 0x4]           ; 004987e7
    FMUL float ptr [0x005df8e4]         ; 004987ea | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 004987f0
    FLD float ptr [EAX + 0x8]           ; 004987f3
    FMUL float ptr [0x005df8e4]         ; 004987f6 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 004987fc
    LEA EAX,[ESP + 0x68]                ; 004987ff
    PUSH EAX                            ; 00498803
    MOV EAX,dword ptr [EDX]             ; 00498804 | DAT_01bdd7e4
    ADD EAX,0x60                        ; 00498806
    PUSH EAX                            ; 00498809
    CALL engine_special.cpp_FUN_005632a3 ; 0049880a
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049880f
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00498812
    LEA EBX,[ESP + 0x98]                ; 00498819
    MOV dword ptr [ESP + 0x80],EAX      ; 00498820
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00498827
    MOV EDX,dword ptr [0x005f2afc]      ; 0049882e | DAT_005f2afc
    MOV dword ptr [ESP + 0x84],EAX      ; 00498834
    LEA EAX,[ESP + 0x80]                ; 0049883b
    MOV dword ptr [ESP + 0x88],ESI      ; 00498842
    FLD float ptr [EAX]                 ; 00498849
    FMUL float ptr [0x005df8e4]         ; 0049884b | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 00498851
    FLD float ptr [EAX + 0x4]           ; 00498853
    FMUL float ptr [0x005df8e4]         ; 00498856 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049885c
    FLD float ptr [EAX + 0x8]           ; 0049885f
    FMUL float ptr [0x005df8e4]         ; 00498862 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 00498868
    LEA EAX,[ESP + 0x98]                ; 0049886b
    PUSH EAX                            ; 00498872
    MOV EAX,dword ptr [EDX]             ; 00498873 | DAT_01bdd7e4
    ADD EAX,0x90                        ; 00498875
    PUSH EAX                            ; 0049887a
    CALL engine_special.cpp_FUN_005632a3 ; 0049887b
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EAX,dword ptr [EDI + 0x4c]      ; 00498880
    ADD ESP,0x8                         ; 00498883
    CMP EAX,0x6                         ; 00498886
    JA 0x00498158                       ; 00498889
        ;   XREF to: 00498158 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x498090]  ; 0049888f | caseD_6 | caseD_1 | caseD_2
        ;   Label: switchD

