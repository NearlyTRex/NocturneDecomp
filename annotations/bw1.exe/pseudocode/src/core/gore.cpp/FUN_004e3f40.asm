; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gore_cpp_FUN_004e3f40(CVector3f *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e401d
;   undefined4 DAT_005e4025
;   undefined4 DAT_005e402d
;   undefined4 DAT_006016a8
;   undefined4 DAT_00612560
;   undefined4 DAT_0061dcb4
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_0062902c
;   undefined4 DAT_00629030
;   undefined4 DAT_00629034
;   undefined4 DAT_00629038
;   undefined4 DAT_0062903c
;   undefined4 DAT_0062905c
;   undefined4 DAT_00629060
;   undefined4 DAT_00629064
;   ... and 12 more
;
; Called Functions:
;   core_set.cpp_CDemonSet_computeLighting_FUN_00552a70
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;   engine_drender.cpp_pop_FUN_004839a0
;   engine_special.cpp_FUN_00580173
;   engine_special.cpp_FUN_0058043c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e3f40
        ;   Label: core_gore.cpp_FUN_004e3f40
    PUSH ESI                            ; 004e3f41
    PUSH EDI                            ; 004e3f42
    PUSH EBP                            ; 004e3f43
    MOV EBP,ESP                         ; 004e3f44
    SUB ESP,0x108                       ; 004e3f46
    AND ESP,0xfffffff8                  ; 004e3f4c
    MOV ESI,dword ptr [0x00612560]      ; 004e3f4f | DAT_00612560
    LEA EBX,[ESP + 0x10]                ; 004e3f55
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e3f59
    MOV ESI,dword ptr [ESI]             ; 004e3f5c | DAT_01bc120c
    FLD float ptr [EAX]                 ; 004e3f5e
    FMUL float ptr [0x006016a8]         ; 004e3f60 | DAT_006016a8
    FISTP dword ptr [EBX]               ; 004e3f66
    FLD float ptr [EAX + 0x4]           ; 004e3f68
    FMUL float ptr [0x006016a8]         ; 004e3f6b | DAT_006016a8
    FISTP dword ptr [EBX + 0x4]         ; 004e3f71
    FLD float ptr [EAX + 0x8]           ; 004e3f74
    FMUL float ptr [0x006016a8]         ; 004e3f77 | DAT_006016a8
    FISTP dword ptr [EBX + 0x8]         ; 004e3f7d
    LEA EAX,[ESP + 0x10]                ; 004e3f80
    PUSH EAX                            ; 004e3f84
    PUSH ESI                            ; 004e3f85
    CALL engine_special.cpp_FUN_0058043c ; 004e3f86
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    MOV AH,byte ptr [ESI + 0x13]        ; 004e3f8b
    ADD ESP,0x8                         ; 004e3f8e
    TEST AH,0x80                        ; 004e3f91
    JZ 0x004e3f9d                       ; 004e3f94
        ;   XREF to: 004e3f9d (CONDITIONAL_JUMP)  ; LAB_004e3f9d
    MOV ESP,EBP                         ; 004e3f96
        ;   Label: LAB_004e3f96
    POP EBP                             ; 004e3f98
    POP EDI                             ; 004e3f99
    POP ESI                             ; 004e3f9a
    POP EBX                             ; 004e3f9b
    RET                                 ; 004e3f9c
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e3f9d
        ;   Label: LAB_004e3f9d
    PUSH EDX                            ; 004e3fa0
    MOV ECX,dword ptr [0x00612560]      ; 004e3fa1 | DAT_00612560
    PUSH ECX                            ; 004e3fa7 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004e3fa8
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004e3fad
    PUSH 0x0                            ; 004e3fb0
    PUSH 0x1cd0e68                      ; 004e3fb2 | DAT_01cd0e68
    MOV EBX,dword ptr [0x00612560]      ; 004e3fb7 | DAT_00612560
    PUSH EBX                            ; 004e3fbd | DAT_01bc120c
    MOV ESI,0xbdcccccd                  ; 004e3fbe
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800 ; 004e3fc3
        ;   XREF to: 00483800 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    LEA EBX,[ESP + 0xac]                ; 004e3fc8
    MOV EDX,dword ptr [0x00612560]      ; 004e3fcf | DAT_00612560
    ADD ESP,0xc                         ; 004e3fd5
    XOR EAX,EAX                         ; 004e3fd8
    MOV dword ptr [ESP + 0x40],ESI      ; 004e3fda
    MOV dword ptr [ESP + 0x48],EAX      ; 004e3fde
    LEA EAX,[ESP + 0x40]                ; 004e3fe2
    MOV dword ptr [ESP + 0x44],ESI      ; 004e3fe6
    FLD float ptr [EAX]                 ; 004e3fea
    FMUL float ptr [0x006016a8]         ; 004e3fec | DAT_006016a8
    FISTP dword ptr [EBX]               ; 004e3ff2
    FLD float ptr [EAX + 0x4]           ; 004e3ff4
    FMUL float ptr [0x006016a8]         ; 004e3ff7 | DAT_006016a8
    FISTP dword ptr [EBX + 0x4]         ; 004e3ffd
    FLD float ptr [EAX + 0x8]           ; 004e4000
    FMUL float ptr [0x006016a8]         ; 004e4003 | DAT_006016a8
    FISTP dword ptr [EBX + 0x8]         ; 004e4009
    LEA EAX,[ESP + 0xa0]                ; 004e400c
    PUSH EAX                            ; 004e4013
    MOV EAX,dword ptr [EDX]             ; 004e4014 | DAT_01bc120c
    PUSH EAX                            ; 004e4016
    CALL engine_special.cpp_FUN_00580173 ; 004e4017
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EDX,0x3dcccccd                  ; 004e401c
    LEA EAX,[ESP + 0x48]                ; 004e4021
    ADD ESP,0x8                         ; 004e4025
    XOR EBX,EBX                         ; 004e4028
    MOV dword ptr [ESP + 0x40],EDX      ; 004e402a
    MOV dword ptr [ESP + 0x44],ESI      ; 004e402e
    MOV dword ptr [ESP + 0x48],EBX      ; 004e4032
    LEA EBX,[ESP + 0x88]                ; 004e4036
    MOV EDX,dword ptr [0x00612560]      ; 004e403d | DAT_00612560
    FLD float ptr [EAX]                 ; 004e4043
    FMUL float ptr [0x006016a8]         ; 004e4045 | DAT_006016a8
    FISTP dword ptr [EBX]               ; 004e404b
    FLD float ptr [EAX + 0x4]           ; 004e404d
    FMUL float ptr [0x006016a8]         ; 004e4050 | DAT_006016a8
    FISTP dword ptr [EBX + 0x4]         ; 004e4056
    FLD float ptr [EAX + 0x8]           ; 004e4059
    FMUL float ptr [0x006016a8]         ; 004e405c | DAT_006016a8
    FISTP dword ptr [EBX + 0x8]         ; 004e4062
    LEA EAX,[ESP + 0x88]                ; 004e4065
    PUSH EAX                            ; 004e406c
    MOV EAX,dword ptr [EDX]             ; 004e406d | DAT_01bc120c
    ADD EAX,0x30                        ; 004e406f
    PUSH EAX                            ; 004e4072
    MOV ESI,0x3dcccccd                  ; 004e4073
    CALL engine_special.cpp_FUN_00580173 ; 004e4078
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0xcc]                ; 004e407d
    MOV EDX,dword ptr [0x00612560]      ; 004e4084 | DAT_00612560
    ADD ESP,0x8                         ; 004e408a
    XOR EAX,EAX                         ; 004e408d
    MOV dword ptr [ESP + 0x40],ESI      ; 004e408f
    MOV dword ptr [ESP + 0x48],EAX      ; 004e4093
    LEA EAX,[ESP + 0x40]                ; 004e4097
    MOV dword ptr [ESP + 0x44],ESI      ; 004e409b
    FLD float ptr [EAX]                 ; 004e409f
    FMUL float ptr [0x006016a8]         ; 004e40a1 | DAT_006016a8
    FISTP dword ptr [EBX]               ; 004e40a7
    FLD float ptr [EAX + 0x4]           ; 004e40a9
    FMUL float ptr [0x006016a8]         ; 004e40ac | DAT_006016a8
    FISTP dword ptr [EBX + 0x4]         ; 004e40b2
    FLD float ptr [EAX + 0x8]           ; 004e40b5
    FMUL float ptr [0x006016a8]         ; 004e40b8 | DAT_006016a8
    FISTP dword ptr [EBX + 0x8]         ; 004e40be
    LEA EAX,[ESP + 0xc4]                ; 004e40c1
    PUSH EAX                            ; 004e40c8
    MOV EAX,dword ptr [EDX]             ; 004e40c9 | DAT_01bc120c
    ADD EAX,0x60                        ; 004e40cb
    PUSH EAX                            ; 004e40ce
    CALL engine_special.cpp_FUN_00580173 ; 004e40cf
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EDX,0xbdcccccd                  ; 004e40d4
    LEA EAX,[ESP + 0x48]                ; 004e40d9
    ADD ESP,0x8                         ; 004e40dd
    XOR EBX,EBX                         ; 004e40e0
    MOV dword ptr [ESP + 0x40],EDX      ; 004e40e2
    MOV dword ptr [ESP + 0x44],ESI      ; 004e40e6
    MOV dword ptr [ESP + 0x48],EBX      ; 004e40ea
    LEA EBX,[ESP + 0x28]                ; 004e40ee
    MOV EDX,dword ptr [0x00612560]      ; 004e40f2 | DAT_00612560
    FLD float ptr [EAX]                 ; 004e40f8
    FMUL float ptr [0x006016a8]         ; 004e40fa | DAT_006016a8
    FISTP dword ptr [EBX]               ; 004e4100
    FLD float ptr [EAX + 0x4]           ; 004e4102
    FMUL float ptr [0x006016a8]         ; 004e4105 | DAT_006016a8
    FISTP dword ptr [EBX + 0x4]         ; 004e410b
    FLD float ptr [EAX + 0x8]           ; 004e410e
    FMUL float ptr [0x006016a8]         ; 004e4111 | DAT_006016a8
    FISTP dword ptr [EBX + 0x8]         ; 004e4117
    LEA EAX,[ESP + 0x28]                ; 004e411a
    PUSH EAX                            ; 004e411e
    MOV EAX,dword ptr [EDX]             ; 004e411f | DAT_01bc120c
    ADD EAX,0x90                        ; 004e4121
    PUSH EAX                            ; 004e4126
    CALL engine_special.cpp_FUN_00580173 ; 004e4127
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004e412c
    PUSH 0x61dcb4                       ; 004e412f | DAT_0061dcb4
    MOV ESI,dword ptr [0x00612560]      ; 004e4134 | DAT_00612560
    PUSH ESI                            ; 004e413a | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004e413b
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004e4140
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e4143
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e4146
    LEA EBX,[ESP + 0x70]                ; 004e4149
    MOV EDX,dword ptr [EDX + 0x44]      ; 004e414d
    MOV EAX,dword ptr [EAX + 0x44]      ; 004e4150
    SAR EDX,0x2                         ; 004e4153
    AND EAX,0x3                         ; 004e4156
    AND EDX,0x3                         ; 004e4159
    SHL EAX,0x16                        ; 004e415c
    SHL EDX,0x16                        ; 004e415f
    ADD EAX,0x80000                     ; 004e4162
    ADD EDX,0x80000                     ; 004e4167
    MOV [0x0062902c],EAX                ; 004e416d | DAT_0062902c
    MOV dword ptr [0x00629030],EDX      ; 004e4172 | DAT_00629030
    LEA ECX,[EAX + 0x300000]            ; 004e4178
    MOV dword ptr [0x00629060],EDX      ; 004e417e | DAT_00629060
    MOV dword ptr [0x0062905c],ECX      ; 004e4184 | DAT_0062905c
    MOV dword ptr [0x0062908c],ECX      ; 004e418a | DAT_0062908c
    ADD EDX,0x300000                    ; 004e4190
    MOV [0x006290bc],EAX                ; 004e4196 | DAT_006290bc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e419b
    MOV dword ptr [0x00629090],EDX      ; 004e419e | DAT_00629090
    MOV dword ptr [0x006290c0],EDX      ; 004e41a4 | DAT_006290c0
    FLD float ptr [EAX]                 ; 004e41aa
    FMUL float ptr [0x006016a8]         ; 004e41ac | DAT_006016a8
    FISTP dword ptr [EBX]               ; 004e41b2
    FLD float ptr [EAX + 0x4]           ; 004e41b4
    FMUL float ptr [0x006016a8]         ; 004e41b7 | DAT_006016a8
    FISTP dword ptr [EBX + 0x4]         ; 004e41bd
    FLD float ptr [EAX + 0x8]           ; 004e41c0
    FMUL float ptr [0x006016a8]         ; 004e41c3 | DAT_006016a8
    FISTP dword ptr [EBX + 0x8]         ; 004e41c9
    PUSH 0x4                            ; 004e41cc
    PUSH 0x0                            ; 004e41ce
    PUSH 0x1cd0e74                      ; 004e41d0 | DAT_01cd0e74
    LEA EAX,[ESP + 0x7c]                ; 004e41d5
    PUSH EAX                            ; 004e41d9
    MOV EDI,dword ptr [0x00622c18]      ; 004e41da | g_CDemonSetPtr
    PUSH EDI                            ; 004e41e0 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_00552a70 ; 004e41e1
        ;   XREF to: 00552a70 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_00552a70(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 004e41e6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e41e9
    LEA EBX,[ESP + 0xf0]                ; 004e41ec
    LEA ECX,[ESP + 0xf4]                ; 004e41f3
    MOV EAX,dword ptr [EAX + 0x40]      ; 004e41fa
    LEA EDX,[ESP + 0xec]                ; 004e41fd
    CMP EAX,0x1                         ; 004e4204
    JNC 0x004e4721                      ; 004e4207
        ;   XREF to: 004e4721 (CONDITIONAL_JUMP)  ; LAB_004e4721
    MOV dword ptr [ECX],0x2000          ; 004e420d
        ;   Label: LAB_004e420d
    MOV dword ptr [EBX],0x0             ; 004e4213
    MOV dword ptr [EDX],0x0             ; 004e4219
    XOR ECX,ECX                         ; 004e421f
        ;   Label: LAB_004e421f
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004e4221
        ;   Label: LAB_004e4221
    MOV EDX,dword ptr [ECX + 0x629034]  ; 004e4228 | DAT_00629034 | DAT_00629064
    IMUL EDX                            ; 004e422e
    SHRD EAX,EDX,0x10                   ; 004e4230
    MOV EDX,dword ptr [ECX + 0x629038]  ; 004e4234 | DAT_00629038 | DAT_00629068
    MOV dword ptr [ECX + 0x629034],EAX  ; 004e423a | DAT_00629034 | DAT_00629064
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004e4240
    IMUL EDX                            ; 004e4247
    SHRD EAX,EDX,0x10                   ; 004e4249
    MOV EDX,dword ptr [ECX + 0x62903c]  ; 004e424d | DAT_0062903c | DAT_0062906c
    MOV dword ptr [ECX + 0x629038],EAX  ; 004e4253 | DAT_00629038 | DAT_00629068
    MOV EAX,dword ptr [ESP + 0xec]      ; 004e4259
    ADD ECX,0x30                        ; 004e4260
    IMUL EDX                            ; 004e4263
    SHRD EAX,EDX,0x10                   ; 004e4265
    MOV dword ptr [ECX + 0x62900c],EAX  ; 004e4269 | DAT_0062903c | DAT_0062906c
    CMP ECX,0xc0                        ; 004e426f
    JNZ 0x004e4221                      ; 004e4275
        ;   XREF to: 004e4221 (CONDITIONAL_JUMP)  ; LAB_004e4221
    PUSH 0x0                            ; 004e4277
    MOV ECX,dword ptr [EBP + 0x14]      ; 004e4279
    MOV EAX,[0x007c6120]                ; 004e427c | DAT_007c6120
    PUSH ECX                            ; 004e4281
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004e4282
    PUSH EAX                            ; 004e4285
    CALL dword ptr [EDX + 0x4]          ; 004e4286
    MOV EAX,0xffff                      ; 004e4289
    MOV EBX,dword ptr [0x01c51cac]      ; 004e428e | DAT_01c51cac
    ADD ESP,0xc                         ; 004e4294
    SUB EAX,EBX                         ; 004e4297
    PUSH EAX                            ; 004e4299
    MOV ESI,dword ptr [0x00612560]      ; 004e429a | DAT_00612560
    PUSH ESI                            ; 004e42a0 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 004e42a1
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004e42a6
    PUSH 0x1cd0e40                      ; 004e42a9
    MOV EDI,dword ptr [0x00612560]      ; 004e42ae | DAT_00612560
    PUSH EDI                            ; 004e42b4 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050 ; 004e42b5
        ;   XREF to: 00483050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004e42ba
    MOV EAX,[0x00612560]                ; 004e42bd | DAT_00612560
    PUSH EAX                            ; 004e42c2 | DAT_01bc120c
    XOR EBX,EBX                         ; 004e42c3
    LEA EDI,[ESP + 0x50]                ; 004e42c5
    CALL engine_drender.cpp_pop_FUN_004839a0 ; 004e42c9
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_004839a0()
    MOV EDX,0x3f800000                  ; 004e42ce
    ADD ESP,0x4                         ; 004e42d3
    MOV ECX,0x3ccccccd                  ; 004e42d6
    MOV ESI,dword ptr [EBP + 0x14]      ; 004e42db
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e42de
    MOV dword ptr [ESP + 0xc],EDX       ; 004e42e1
    MOVSD ES:EDI,ESI                    ; 004e42e5
    MOVSD ES:EDI,ESI                    ; 004e42e6
    MOVSD ES:EDI,ESI                    ; 004e42e7
    MOV dword ptr [ESP + 0x8],ECX       ; 004e42e8
    MOV ESI,dword ptr [EBP + 0x14]      ; 004e42ec
    ADD EAX,0x18                        ; 004e42ef
    LEA EDI,[ESP + 0x34]                ; 004e42f2
    LEA ESI,[ESI + 0xc]                 ; 004e42f6
    MOV dword ptr [ESP + 0x104],EBX     ; 004e42f9
    MOV dword ptr [ESP + 0x100],EAX     ; 004e4300
    MOVSD ES:EDI,ESI                    ; 004e4307
    MOVSD ES:EDI,ESI                    ; 004e4308
    MOVSD ES:EDI,ESI                    ; 004e4309
    FLD float ptr [ESP + 0x8]           ; 004e430a
        ;   Label: LAB_004e430a
    MOV EAX,dword ptr [ESP + 0x100]     ; 004e430e
    FLD ST0                             ; 004e4315
    FLD double ptr [0x005e401d]         ; 004e4317 | DAT_005e401d
    FXCH                                ; 004e431d
    FMUL ST1                            ; 004e431f
    FLD float ptr [EAX]                 ; 004e4321
    FXCH                                ; 004e4323
    FSTP ST3                            ; 004e4325
    FXCH ST2                            ; 004e4327
    FSTP float ptr [ESP + 0x8]          ; 004e4329
    FXCH                                ; 004e432d
    FMUL float ptr [ESP + 0x8]          ; 004e432f
    FLD float ptr [EAX + 0x4]           ; 004e4333
    FMUL float ptr [ESP + 0x8]          ; 004e4336
    FLD float ptr [EAX + 0x8]           ; 004e433a
    FMUL float ptr [ESP + 0x8]          ; 004e433d
    FLD float ptr [ESP + 0xc]           ; 004e4341
    FLD float ptr [ESP + 0x34]          ; 004e4345
    LEA EDI,[ESP + 0x7c]                ; 004e4349
    LEA ESI,[ESP + 0x94]                ; 004e434d
    FXCH ST4                            ; 004e4354
    FSTP float ptr [ESP + 0x94]         ; 004e4356
    FXCH ST2                            ; 004e435d
    FSTP float ptr [ESP + 0x98]         ; 004e435f
    FSTP float ptr [ESP + 0x9c]         ; 004e4366
    MOVSD ES:EDI,ESI                    ; 004e436d
    MOVSD ES:EDI,ESI                    ; 004e436e
    MOVSD ES:EDI,ESI                    ; 004e436f
    FLD ST0                             ; 004e4370
    FXCH ST2                            ; 004e4372
    FSUB float ptr [ESP + 0x7c]         ; 004e4374
    FXCH ST2                            ; 004e4378
    FMULP ST3                           ; 004e437a
    FXCH                                ; 004e437c
    FST float ptr [ESP + 0x34]          ; 004e437e
    FMUL float ptr [ESP + 0x8]          ; 004e4382
    FLD float ptr [ESP + 0x3c]          ; 004e4386
    FLD float ptr [ESP + 0x38]          ; 004e438a
    FSUB float ptr [ESP + 0x80]         ; 004e438e
    FXCH                                ; 004e4395
    FSUB float ptr [ESP + 0x84]         ; 004e4397
    FXCH                                ; 004e439e
    FST float ptr [ESP + 0x38]          ; 004e43a0
    FMUL float ptr [ESP + 0x8]          ; 004e43a4
    FXCH                                ; 004e43a8
    FST float ptr [ESP + 0x3c]          ; 004e43aa
    FMUL float ptr [ESP + 0x8]          ; 004e43ae
    FLD float ptr [ESP + 0x4c]          ; 004e43b2
    FLD float ptr [ESP + 0x50]          ; 004e43b6
    LEA EAX,[ESP + 0x4c]                ; 004e43ba
    FXCH ST6                            ; 004e43be
    FSTP ST5                            ; 004e43c0
    FLD float ptr [ESP + 0x54]          ; 004e43c2
    PUSH EAX                            ; 004e43c6
    LEA EDI,[ESP + 0xb0]                ; 004e43c7
    LEA ESI,[ESP + 0x5c]                ; 004e43ce
    FXCH ST4                            ; 004e43d2
    FSTP float ptr [ESP + 0x5c]         ; 004e43d4
    FXCH ST2                            ; 004e43d8
    FSTP float ptr [ESP + 0x60]         ; 004e43da
    FSTP float ptr [ESP + 0x64]         ; 004e43de
    MOVSD ES:EDI,ESI                    ; 004e43e2
    MOVSD ES:EDI,ESI                    ; 004e43e3
    MOVSD ES:EDI,ESI                    ; 004e43e4
    FXCH ST2                            ; 004e43e5
    FSTP float ptr [ESP + 0x10]         ; 004e43e7
    MOV ESI,dword ptr [0x00612560]      ; 004e43eb | DAT_00612560
    FXCH                                ; 004e43f1
    FSUB float ptr [ESP + 0xb0]         ; 004e43f3
    FXCH ST2                            ; 004e43fa
    FSUB float ptr [ESP + 0xb4]         ; 004e43fc
    FXCH                                ; 004e4403
    FSUB float ptr [ESP + 0xb8]         ; 004e4405
    FXCH ST2                            ; 004e440c
    FSTP float ptr [ESP + 0x50]         ; 004e440e
    FSTP float ptr [ESP + 0x54]         ; 004e4412
    PUSH ESI                            ; 004e4416 | DAT_01bc120c
    FSTP float ptr [ESP + 0x5c]         ; 004e4417
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004e441b
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004e4420
    PUSH 0x0                            ; 004e4423
    PUSH 0x1cd0e68                      ; 004e4425 | DAT_01cd0e68
    MOV EDI,dword ptr [0x00612560]      ; 004e442a | DAT_00612560
    PUSH EDI                            ; 004e4430 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800 ; 004e4431
        ;   XREF to: 00483800 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004e4436
    FLD float ptr [ESP + 0xc]           ; 004e4439
    FST double ptr [ESP]                ; 004e443d
    FMUL double ptr [0x005e4025]        ; 004e4440 | DAT_005e4025
    FSTP float ptr [ESP + 0x40]         ; 004e4446
    MOV EAX,dword ptr [ESP + 0x40]      ; 004e444a
    MOV dword ptr [ESP + 0xfc],EAX      ; 004e444e
    MOV dword ptr [ESP + 0x44],EAX      ; 004e4455
    XOR EAX,EAX                         ; 004e4459
    MOV EDX,dword ptr [0x00612560]      ; 004e445b | DAT_00612560
    MOV dword ptr [ESP + 0x48],EAX      ; 004e4461
    LEA EBX,[ESP + 0xd0]                ; 004e4465
    LEA EAX,[ESP + 0x40]                ; 004e446c
    FLD float ptr [EAX]                 ; 004e4470
    FMUL float ptr [0x006016a8]         ; 004e4472 | DAT_006016a8
    FISTP dword ptr [EBX]               ; 004e4478
    FLD float ptr [EAX + 0x4]           ; 004e447a
    FMUL float ptr [0x006016a8]         ; 004e447d | DAT_006016a8
    FISTP dword ptr [EBX + 0x4]         ; 004e4483
    FLD float ptr [EAX + 0x8]           ; 004e4486
    FMUL float ptr [0x006016a8]         ; 004e4489 | DAT_006016a8
    FISTP dword ptr [EBX + 0x8]         ; 004e448f
    LEA EAX,[ESP + 0xd0]                ; 004e4492
    PUSH EAX                            ; 004e4499
    MOV EAX,dword ptr [EDX]             ; 004e449a | DAT_01bc120c
    PUSH EAX                            ; 004e449c
    CALL engine_special.cpp_FUN_00580173 ; 004e449d
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004e44a2
    FLD double ptr [ESP]                ; 004e44a5
    FMUL double ptr [0x005e402d]        ; 004e44a8 | DAT_005e402d
    LEA EBX,[ESP + 0xb8]                ; 004e44ae
    FSTP float ptr [ESP + 0xf8]         ; 004e44b5
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004e44bc
    XOR EDX,EDX                         ; 004e44c3
    MOV dword ptr [ESP + 0x40],EAX      ; 004e44c5
    MOV EAX,dword ptr [ESP + 0xfc]      ; 004e44c9
    MOV dword ptr [ESP + 0x48],EDX      ; 004e44d0
    MOV dword ptr [ESP + 0x44],EAX      ; 004e44d4
    LEA EAX,[ESP + 0x40]                ; 004e44d8
    MOV EDX,dword ptr [0x00612560]      ; 004e44dc | DAT_00612560
    FLD float ptr [EAX]                 ; 004e44e2
    FMUL float ptr [0x006016a8]         ; 004e44e4 | DAT_006016a8
    FISTP dword ptr [EBX]               ; 004e44ea
    FLD float ptr [EAX + 0x4]           ; 004e44ec
    FMUL float ptr [0x006016a8]         ; 004e44ef | DAT_006016a8
    FISTP dword ptr [EBX + 0x4]         ; 004e44f5
    FLD float ptr [EAX + 0x8]           ; 004e44f8
    FMUL float ptr [0x006016a8]         ; 004e44fb | DAT_006016a8
    FISTP dword ptr [EBX + 0x8]         ; 004e4501
    LEA EAX,[ESP + 0xb8]                ; 004e4504
    PUSH EAX                            ; 004e450b
    MOV EAX,dword ptr [EDX]             ; 004e450c | DAT_01bc120c
    ADD EAX,0x30                        ; 004e450e
    PUSH EAX                            ; 004e4511
    CALL engine_special.cpp_FUN_00580173 ; 004e4512
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x24]                ; 004e4517
    ADD ESP,0x8                         ; 004e451b
    MOV EDX,dword ptr [0x00612560]      ; 004e451e | DAT_00612560
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004e4524
    XOR ECX,ECX                         ; 004e452b
    MOV dword ptr [ESP + 0x40],EAX      ; 004e452d
    MOV dword ptr [ESP + 0x44],EAX      ; 004e4531
    LEA EAX,[ESP + 0x40]                ; 004e4535
    MOV dword ptr [ESP + 0x48],ECX      ; 004e4539
    FLD float ptr [EAX]                 ; 004e453d
    FMUL float ptr [0x006016a8]         ; 004e453f | DAT_006016a8
    FISTP dword ptr [EBX]               ; 004e4545
    FLD float ptr [EAX + 0x4]           ; 004e4547
    FMUL float ptr [0x006016a8]         ; 004e454a | DAT_006016a8
    FISTP dword ptr [EBX + 0x4]         ; 004e4550
    FLD float ptr [EAX + 0x8]           ; 004e4553
    FMUL float ptr [0x006016a8]         ; 004e4556 | DAT_006016a8
    FISTP dword ptr [EBX + 0x8]         ; 004e455c
    LEA EAX,[ESP + 0x1c]                ; 004e455f
    PUSH EAX                            ; 004e4563
    MOV EAX,dword ptr [EDX]             ; 004e4564 | DAT_01bc120c
    ADD EAX,0x60                        ; 004e4566
    PUSH EAX                            ; 004e4569
    CALL engine_special.cpp_FUN_00580173 ; 004e456a
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004e456f
    XOR EBX,EBX                         ; 004e4572
    MOV EAX,dword ptr [ESP + 0xfc]      ; 004e4574
    MOV dword ptr [ESP + 0x48],EBX      ; 004e457b
    MOV dword ptr [ESP + 0x40],EAX      ; 004e457f
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004e4583
    LEA EBX,[ESP + 0x64]                ; 004e458a
    MOV dword ptr [ESP + 0x44],EAX      ; 004e458e
    LEA EAX,[ESP + 0x40]                ; 004e4592
    MOV EDX,dword ptr [0x00612560]      ; 004e4596 | DAT_00612560
    FLD float ptr [EAX]                 ; 004e459c
    FMUL float ptr [0x006016a8]         ; 004e459e | DAT_006016a8
    FISTP dword ptr [EBX]               ; 004e45a4
    FLD float ptr [EAX + 0x4]           ; 004e45a6
    FMUL float ptr [0x006016a8]         ; 004e45a9 | DAT_006016a8
    FISTP dword ptr [EBX + 0x4]         ; 004e45af
    FLD float ptr [EAX + 0x8]           ; 004e45b2
    FMUL float ptr [0x006016a8]         ; 004e45b5 | DAT_006016a8
    FISTP dword ptr [EBX + 0x8]         ; 004e45bb
    LEA EAX,[ESP + 0x64]                ; 004e45be
    PUSH EAX                            ; 004e45c2
    MOV EAX,dword ptr [EDX]             ; 004e45c3 | DAT_01bc120c
    ADD EAX,0x90                        ; 004e45c5
    PUSH EAX                            ; 004e45ca
    CALL engine_special.cpp_FUN_00580173 ; 004e45cb
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004e45d0
    LEA EBX,[ESP + 0x70]                ; 004e45d3
    LEA EAX,[ESP + 0x4c]                ; 004e45d7
    FLD float ptr [EAX]                 ; 004e45db
    FMUL float ptr [0x006016a8]         ; 004e45dd | DAT_006016a8
    FISTP dword ptr [EBX]               ; 004e45e3
    FLD float ptr [EAX + 0x4]           ; 004e45e5
    FMUL float ptr [0x006016a8]         ; 004e45e8 | DAT_006016a8
    FISTP dword ptr [EBX + 0x4]         ; 004e45ee
    FLD float ptr [EAX + 0x8]           ; 004e45f1
    FMUL float ptr [0x006016a8]         ; 004e45f4 | DAT_006016a8
    FISTP dword ptr [EBX + 0x8]         ; 004e45fa
    PUSH 0x4                            ; 004e45fd
    PUSH 0x0                            ; 004e45ff
    PUSH 0x1cd0e74                      ; 004e4601 | DAT_01cd0e74
    LEA EAX,[ESP + 0x7c]                ; 004e4606
    PUSH EAX                            ; 004e460a
    MOV ESI,dword ptr [0x00622c18]      ; 004e460b | g_CDemonSetPtr
    PUSH ESI                            ; 004e4611 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_00552a70 ; 004e4612
        ;   XREF to: 00552a70 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_00552a70(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 004e4617
    XOR ECX,ECX                         ; 004e461a
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004e461c
        ;   Label: LAB_004e461c
    MOV EDX,dword ptr [ECX + 0x629034]  ; 004e4623 | DAT_00629034 | DAT_00629064
    IMUL EDX                            ; 004e4629
    SHRD EAX,EDX,0x10                   ; 004e462b
    MOV EDX,dword ptr [ECX + 0x629038]  ; 004e462f | DAT_00629038 | DAT_00629068
    MOV dword ptr [ECX + 0x629034],EAX  ; 004e4635 | DAT_00629034 | DAT_00629064
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004e463b
    IMUL EDX                            ; 004e4642
    SHRD EAX,EDX,0x10                   ; 004e4644
    MOV EDX,dword ptr [ECX + 0x62903c]  ; 004e4648 | DAT_0062903c | DAT_0062906c
    MOV dword ptr [ECX + 0x629038],EAX  ; 004e464e | DAT_00629038 | DAT_00629068
    MOV EAX,dword ptr [ESP + 0xec]      ; 004e4654
    ADD ECX,0x30                        ; 004e465b
    IMUL EDX                            ; 004e465e
    SHRD EAX,EDX,0x10                   ; 004e4660
    MOV dword ptr [ECX + 0x62900c],EAX  ; 004e4664 | DAT_0062903c | DAT_0062906c
    CMP ECX,0xc0                        ; 004e466a
    JNZ 0x004e461c                      ; 004e4670
        ;   XREF to: 004e461c (CONDITIONAL_JUMP)  ; LAB_004e461c
    PUSH 0x0                            ; 004e4672
    MOV EDI,dword ptr [EBP + 0x14]      ; 004e4674
    MOV EAX,[0x007c6120]                ; 004e4677 | DAT_007c6120
    PUSH EDI                            ; 004e467c
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004e467d
    PUSH EAX                            ; 004e4680
    CALL dword ptr [EDX + 0x4]          ; 004e4681
    MOV EAX,0xffff                      ; 004e4684
    MOV EDX,dword ptr [0x01c51cac]      ; 004e4689 | DAT_01c51cac
    ADD ESP,0xc                         ; 004e468f
    SUB EAX,EDX                         ; 004e4692
    PUSH EAX                            ; 004e4694
    MOV ECX,dword ptr [0x00612560]      ; 004e4695 | DAT_00612560
    PUSH ECX                            ; 004e469b | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 004e469c
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004e46a1
    PUSH 0x1cd0e40                      ; 004e46a4
    MOV EBX,dword ptr [0x00612560]      ; 004e46a9 | DAT_00612560
    PUSH EBX                            ; 004e46af | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050 ; 004e46b0
        ;   XREF to: 00483050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004e46b5
    MOV ESI,dword ptr [0x00612560]      ; 004e46b8 | DAT_00612560
    PUSH ESI                            ; 004e46be | DAT_01bc120c
    CALL engine_drender.cpp_pop_FUN_004839a0 ; 004e46bf
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004e46c4
    MOV EDI,dword ptr [ESP + 0x104]     ; 004e46c7
    INC EDI                             ; 004e46ce
    MOV dword ptr [ESP + 0x104],EDI     ; 004e46cf
    CMP EDI,0x3                         ; 004e46d6
    JGE 0x004e3f96                      ; 004e46d9
        ;   XREF to: 004e3f96 (CONDITIONAL_JUMP)  ; LAB_004e3f96
    JMP 0x004e430a                      ; 004e46df
        ;   XREF to: 004e430a (UNCONDITIONAL_JUMP)  ; LAB_004e430a
    MOV ESI,0x7f80                      ; 004e46e4
        ;   Label: LAB_004e46e4
    XOR EBX,EBX                         ; 004e46e9
    MOV dword ptr [ESP + 0xf0],ESI      ; 004e46eb
    MOV dword ptr [ESP + 0xec],EBX      ; 004e46f2
    MOV dword ptr [ESP + 0xf4],EBX      ; 004e46f9
    JMP 0x004e421f                      ; 004e4700
        ;   XREF to: 004e421f (UNCONDITIONAL_JUMP)  ; LAB_004e421f
    XOR EAX,EAX                         ; 004e4705
        ;   Label: LAB_004e4705
    MOV dword ptr [ESP + 0xf0],EAX      ; 004e4707
    MOV dword ptr [ESP + 0xec],EAX      ; 004e470e
    MOV dword ptr [ESP + 0xf4],EAX      ; 004e4715
    JMP 0x004e421f                      ; 004e471c
        ;   XREF to: 004e421f (UNCONDITIONAL_JUMP)  ; LAB_004e421f
    JBE 0x004e46e4                      ; 004e4721
        ;   XREF to: 004e46e4 (CONDITIONAL_JUMP)  ; LAB_004e46e4
        ;   Label: LAB_004e4721
    CMP EAX,0x2                         ; 004e4723
    JZ 0x004e4705                       ; 004e4726
        ;   XREF to: 004e4705 (CONDITIONAL_JUMP)  ; LAB_004e4705
    JMP 0x004e420d                      ; 004e4728
        ;   XREF to: 004e420d (UNCONDITIONAL_JUMP)  ; LAB_004e420d

