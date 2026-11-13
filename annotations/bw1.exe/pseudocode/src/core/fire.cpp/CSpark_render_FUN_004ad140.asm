; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSpark_render_FUN_004ad140(CSpark *this_ptr)
;
; Parameters:
; CSpark *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined1* switchdataD_004ad130 = 004ad1b9
;   undefined4 DAT_005df1ec
;   undefined4 DAT_005fff94
;   undefined4 DAT_00612560
;   undefined4 DAT_0061c3ec
;   undefined4 DAT_0061c404
;   undefined4 DAT_0061c41c
;   undefined4 DAT_0061c434
;   undefined4 DAT_00629034
;   undefined4 DAT_00629038
;   undefined4 DAT_0062903c
;   undefined4 DAT_00629040
;   undefined4 DAT_00629064
;   undefined4 DAT_00629068
;   undefined4 DAT_0062906c
;   ... and 13 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_00484fd0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_drender.cpp_pop_FUN_004839a0
;   engine_special.cpp_FUN_00580173
;   engine_special.cpp_FUN_0058043c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ad140
        ;   Label: core_fire.cpp_CSpark_render_FUN_004ad140
    PUSH ESI                            ; 004ad141
    PUSH EDI                            ; 004ad142
    PUSH EBP                            ; 004ad143
    MOV EBP,ESP                         ; 004ad144
    SUB ESP,0xe8                        ; 004ad146
    AND ESP,0xfffffff8                  ; 004ad14c
    MOV ESI,dword ptr [0x00612560]      ; 004ad14f | DAT_00612560
    LEA EBX,[ESP + 0x44]                ; 004ad155
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ad159
    MOV ESI,dword ptr [ESI]             ; 004ad15c | DAT_01bc120c
    FLD float ptr [EAX]                 ; 004ad15e
    FMUL float ptr [0x005fff94]         ; 004ad160 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ad166
    FLD float ptr [EAX + 0x4]           ; 004ad168
    FMUL float ptr [0x005fff94]         ; 004ad16b | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ad171
    FLD float ptr [EAX + 0x8]           ; 004ad174
    FMUL float ptr [0x005fff94]         ; 004ad177 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ad17d
    LEA EAX,[ESP + 0x44]                ; 004ad180
    PUSH EAX                            ; 004ad184
    MOV EDX,0x3ecccccd                  ; 004ad185
    PUSH ESI                            ; 004ad18a
    MOV dword ptr [ESP + 0xdc],EDX      ; 004ad18b
    CALL engine_special.cpp_FUN_0058043c ; 004ad192
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ad197
    PUSH ESI                            ; 004ad19a
    MOV ECX,dword ptr [0x00612560]      ; 004ad19b | DAT_00612560
    PUSH ECX                            ; 004ad1a1 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_00484fd0 ; 004ad1a2
        ;   XREF to: 00484fd0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_00484fd0(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 004ad1a7
    TEST EAX,EAX                        ; 004ad1aa
    JNZ 0x004ad6a3                      ; 004ad1ac
        ;   XREF to: 004ad6a3 (CONDITIONAL_JUMP)  ; LAB_004ad6a3
    MOV ESP,EBP                         ; 004ad1b2
        ;   Label: LAB_004ad1b2
    POP EBP                             ; 004ad1b4
    POP EDI                             ; 004ad1b5
    POP ESI                             ; 004ad1b6
    POP EBX                             ; 004ad1b7
    RET                                 ; 004ad1b8
    PUSH 0x61c3ec                       ; 004ad1b9 | DAT_0061c3ec
        ;   Label: caseD_0
    MOV EBX,dword ptr [0x00612560]      ; 004ad1be | DAT_00612560
    PUSH EBX                            ; 004ad1c4 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004ad1c5
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   Label: LAB_004ad1c5
    ADD ESP,0x8                         ; 004ad1ca
    PUSH 0x0                            ; 004ad1cd
        ;   Label: default
    MOV ESI,dword ptr [EBP + 0x14]      ; 004ad1cf
    MOV EAX,[0x007c6120]                ; 004ad1d2 | DAT_007c6120
    PUSH ESI                            ; 004ad1d7
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004ad1d8
    PUSH EAX                            ; 004ad1db
    CALL dword ptr [EDX + 0x4]          ; 004ad1dc
    MOV EDX,0xffff                      ; 004ad1df
    MOV EDI,dword ptr [0x01c51cac]      ; 004ad1e4 | DAT_01c51cac
    ADD ESP,0xc                         ; 004ad1ea
    MOV EAX,dword ptr [ESI + 0x40]      ; 004ad1ed
    SUB EDX,EDI                         ; 004ad1f0
    IMUL EDX                            ; 004ad1f2
    SHRD EAX,EDX,0x10                   ; 004ad1f4
    MOV [0x00629040],EAX                ; 004ad1f8 | DAT_00629040
    MOV [0x00629070],EAX                ; 004ad1fd | DAT_00629070
    MOV [0x006290a0],EAX                ; 004ad202 | DAT_006290a0
    MOV [0x006290d0],EAX                ; 004ad207 | DAT_006290d0
    MOV EAX,0xffff                      ; 004ad20c
    PUSH 0x1                            ; 004ad211
    MOV [0x00629034],EAX                ; 004ad213 | DAT_00629034
    MOV [0x00629038],EAX                ; 004ad218 | DAT_00629038
    MOV [0x0062903c],EAX                ; 004ad21d | DAT_0062903c
    MOV [0x00629064],EAX                ; 004ad222 | DAT_00629064
    MOV [0x00629068],EAX                ; 004ad227 | DAT_00629068
    MOV [0x0062906c],EAX                ; 004ad22c | DAT_0062906c
    MOV [0x00629094],EAX                ; 004ad231 | DAT_00629094
    MOV [0x00629098],EAX                ; 004ad236 | DAT_00629098
    MOV [0x0062909c],EAX                ; 004ad23b | DAT_0062909c
    MOV [0x006290c4],EAX                ; 004ad240 | DAT_006290c4
    MOV [0x006290c8],EAX                ; 004ad245 | DAT_006290c8
    MOV [0x006290cc],EAX                ; 004ad24a | DAT_006290cc
    MOV EAX,[0x00612560]                ; 004ad24f | DAT_00612560
    PUSH EAX                            ; 004ad254 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004ad255
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004ad25a
    PUSH 0x1c57090                      ; 004ad25d
    MOV EDX,dword ptr [0x00612560]      ; 004ad262 | DAT_00612560
    PUSH EDX                            ; 004ad268 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30 ; 004ad269
        ;   XREF to: 00482e30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004ad26e
    PUSH 0x0                            ; 004ad271
    MOV ECX,dword ptr [0x00612560]      ; 004ad273 | DAT_00612560
    PUSH ECX                            ; 004ad279 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004ad27a
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004ad27f
    MOV EBX,dword ptr [0x00612560]      ; 004ad282 | DAT_00612560
    PUSH EBX                            ; 004ad288 | DAT_01bc120c
    LEA EDI,[ESP + 0x18]                ; 004ad289
    CALL engine_drender.cpp_pop_FUN_004839a0 ; 004ad28d
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004ad292
    XOR EAX,EAX                         ; 004ad295
    MOVSD ES:EDI,ESI                    ; 004ad297
    MOVSD ES:EDI,ESI                    ; 004ad298
    MOVSD ES:EDI,ESI                    ; 004ad299
    MOV dword ptr [ESP + 0xe0],EAX      ; 004ad29a
    MOV ESI,dword ptr [EBP + 0x14]      ; 004ad2a1
    LEA EDI,[ESP + 0x80]                ; 004ad2a4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ad2ab
    LEA ESI,[ESI + 0xc]                 ; 004ad2ae
    ADD EAX,0x18                        ; 004ad2b1
    MOVSD ES:EDI,ESI                    ; 004ad2b4
    MOVSD ES:EDI,ESI                    ; 004ad2b5
    MOVSD ES:EDI,ESI                    ; 004ad2b6
    MOV dword ptr [ESP + 0xdc],EAX      ; 004ad2b7
    MOV ESI,0x3f800000                  ; 004ad2be
    MOV EDI,0x3ccccccd                  ; 004ad2c3
    MOV dword ptr [ESP + 0x4],ESI       ; 004ad2c8
    MOV dword ptr [ESP],EDI             ; 004ad2cc
    FLD float ptr [ESP]                 ; 004ad2cf
        ;   Label: LAB_004ad2cf
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004ad2d2
    FLD ST0                             ; 004ad2d9
    FLD double ptr [0x005df1ec]         ; 004ad2db | DAT_005df1ec
    FXCH                                ; 004ad2e1
    FMUL ST1                            ; 004ad2e3
    FLD float ptr [EAX]                 ; 004ad2e5
    FXCH                                ; 004ad2e7
    FSTP ST3                            ; 004ad2e9
    FXCH ST2                            ; 004ad2eb
    FSTP float ptr [ESP]                ; 004ad2ed
    FXCH                                ; 004ad2f0
    FMUL float ptr [ESP]                ; 004ad2f2
    FLD float ptr [EAX + 0x4]           ; 004ad2f5
    FMUL float ptr [ESP]                ; 004ad2f8
    FLD float ptr [EAX + 0x8]           ; 004ad2fb
    FMUL float ptr [ESP]                ; 004ad2fe
    FLD float ptr [ESP + 0x4]           ; 004ad301
    FLD float ptr [ESP + 0x80]          ; 004ad305
    LEA EDI,[ESP + 0x5c]                ; 004ad30c
    LEA ESI,[ESP + 0x2c]                ; 004ad310
    FXCH ST4                            ; 004ad314
    FSTP float ptr [ESP + 0x2c]         ; 004ad316
    FXCH ST2                            ; 004ad31a
    FSTP float ptr [ESP + 0x30]         ; 004ad31c
    FSTP float ptr [ESP + 0x34]         ; 004ad320
    MOVSD ES:EDI,ESI                    ; 004ad324
    MOVSD ES:EDI,ESI                    ; 004ad325
    MOVSD ES:EDI,ESI                    ; 004ad326
    FLD ST0                             ; 004ad327
    FXCH ST2                            ; 004ad329
    FSUB float ptr [ESP + 0x5c]         ; 004ad32b
    FXCH ST2                            ; 004ad32f
    FMULP ST3                           ; 004ad331
    FXCH                                ; 004ad333
    FST float ptr [ESP + 0x80]          ; 004ad335
    FMUL float ptr [ESP]                ; 004ad33c
    FLD float ptr [ESP + 0x88]          ; 004ad33f
    FLD float ptr [ESP + 0x84]          ; 004ad346
    FSUB float ptr [ESP + 0x60]         ; 004ad34d
    FXCH                                ; 004ad351
    FSUB float ptr [ESP + 0x64]         ; 004ad353
    FXCH                                ; 004ad357
    FST float ptr [ESP + 0x84]          ; 004ad359
    FMUL float ptr [ESP]                ; 004ad360
    FXCH                                ; 004ad363
    FST float ptr [ESP + 0x88]          ; 004ad365
    FMUL float ptr [ESP]                ; 004ad36c
    FLD float ptr [ESP + 0x14]          ; 004ad36f
    FLD float ptr [ESP + 0x18]          ; 004ad373
    FXCH ST6                            ; 004ad377
    FSTP ST5                            ; 004ad379
    FXCH ST4                            ; 004ad37b
    FSTP float ptr [ESP + 0x4]          ; 004ad37d
    FLD float ptr [ESP + 0x1c]          ; 004ad381
    LEA EAX,[ESP + 0x14]                ; 004ad385
    MOV EDX,dword ptr [0x00612560]      ; 004ad389 | DAT_00612560
    PUSH EAX                            ; 004ad38f
    LEA EDI,[ESP + 0x6c]                ; 004ad390
    LEA ESI,[ESP + 0xc]                 ; 004ad394
    FXCH ST3                            ; 004ad398
    FSTP float ptr [ESP + 0xc]          ; 004ad39a
    FXCH                                ; 004ad39e
    FSTP float ptr [ESP + 0x10]         ; 004ad3a0
    FSTP float ptr [ESP + 0x14]         ; 004ad3a4
    MOVSD ES:EDI,ESI                    ; 004ad3a8
    MOVSD ES:EDI,ESI                    ; 004ad3a9
    MOVSD ES:EDI,ESI                    ; 004ad3aa
    PUSH EDX                            ; 004ad3ab | DAT_01bc120c
    FXCH                                ; 004ad3ac
    FSUB float ptr [ESP + 0x70]         ; 004ad3ae
    FXCH ST2                            ; 004ad3b2
    FSUB float ptr [ESP + 0x74]         ; 004ad3b4
    FXCH                                ; 004ad3b8
    FSUB float ptr [ESP + 0x78]         ; 004ad3ba
    FXCH ST2                            ; 004ad3be
    FSTP float ptr [ESP + 0x1c]         ; 004ad3c0
    FSTP float ptr [ESP + 0x20]         ; 004ad3c4
    FSTP float ptr [ESP + 0x24]         ; 004ad3c8
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004ad3cc
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004ad3d1
    PUSH 0x0                            ; 004ad3d4
    PUSH 0x1c57078                      ; 004ad3d6 | DAT_01c57078
    MOV ECX,dword ptr [0x00612560]      ; 004ad3db | DAT_00612560
    PUSH ECX                            ; 004ad3e1 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800 ; 004ad3e2
        ;   XREF to: 00483800 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004ad3e7
    XOR EBX,EBX                         ; 004ad3ea
    FLD float ptr [ESP + 0xd4]          ; 004ad3ec
    FCHS                                ; 004ad3f3
    FMUL float ptr [ESP + 0x4]          ; 004ad3f5
    MOV dword ptr [ESP + 0x28],EBX      ; 004ad3f9
    FSTP float ptr [ESP + 0x20]         ; 004ad3fd
    MOV EAX,dword ptr [ESP + 0x20]      ; 004ad401
    LEA EBX,[ESP + 0x38]                ; 004ad405
    MOV dword ptr [ESP + 0xd8],EAX      ; 004ad409
    MOV dword ptr [ESP + 0x24],EAX      ; 004ad410
    LEA EAX,[ESP + 0x20]                ; 004ad414
    MOV EDX,dword ptr [0x00612560]      ; 004ad418 | DAT_00612560
    FLD float ptr [EAX]                 ; 004ad41e
    FMUL float ptr [0x005fff94]         ; 004ad420 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ad426
    FLD float ptr [EAX + 0x4]           ; 004ad428
    FMUL float ptr [0x005fff94]         ; 004ad42b | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ad431
    FLD float ptr [EAX + 0x8]           ; 004ad434
    FMUL float ptr [0x005fff94]         ; 004ad437 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ad43d
    LEA EAX,[ESP + 0x38]                ; 004ad440
    PUSH EAX                            ; 004ad444
    MOV EAX,dword ptr [EDX]             ; 004ad445 | DAT_01bc120c
    PUSH EAX                            ; 004ad447
    CALL engine_special.cpp_FUN_00580173 ; 004ad448
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ad44d
    FLD float ptr [ESP + 0xd4]          ; 004ad450
    FMUL float ptr [ESP + 0x4]          ; 004ad457
    XOR ESI,ESI                         ; 004ad45b
    FSTP float ptr [ESP + 0xd0]         ; 004ad45d
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004ad464
    LEA EBX,[ESP + 0x74]                ; 004ad46b
    MOV dword ptr [ESP + 0x20],EAX      ; 004ad46f
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004ad473
    MOV EDX,dword ptr [0x00612560]      ; 004ad47a | DAT_00612560
    MOV dword ptr [ESP + 0x24],EAX      ; 004ad480
    LEA EAX,[ESP + 0x20]                ; 004ad484
    MOV dword ptr [ESP + 0x28],ESI      ; 004ad488
    FLD float ptr [EAX]                 ; 004ad48c
    FMUL float ptr [0x005fff94]         ; 004ad48e | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ad494
    FLD float ptr [EAX + 0x4]           ; 004ad496
    FMUL float ptr [0x005fff94]         ; 004ad499 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ad49f
    FLD float ptr [EAX + 0x8]           ; 004ad4a2
    FMUL float ptr [0x005fff94]         ; 004ad4a5 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ad4ab
    LEA EAX,[ESP + 0x74]                ; 004ad4ae
    PUSH EAX                            ; 004ad4b2
    MOV EAX,dword ptr [EDX]             ; 004ad4b3 | DAT_01bc120c
    ADD EAX,0x30                        ; 004ad4b5
    PUSH EAX                            ; 004ad4b8
    CALL engine_special.cpp_FUN_00580173 ; 004ad4b9
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ad4be
    LEA EBX,[ESP + 0xa4]                ; 004ad4c1
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004ad4c8
    MOV EDX,dword ptr [0x00612560]      ; 004ad4cf | DAT_00612560
    MOV dword ptr [ESP + 0x20],EAX      ; 004ad4d5
    MOV dword ptr [ESP + 0x24],EAX      ; 004ad4d9
    LEA EAX,[ESP + 0x20]                ; 004ad4dd
    MOV dword ptr [ESP + 0x28],ESI      ; 004ad4e1
    FLD float ptr [EAX]                 ; 004ad4e5
    FMUL float ptr [0x005fff94]         ; 004ad4e7 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ad4ed
    FLD float ptr [EAX + 0x4]           ; 004ad4ef
    FMUL float ptr [0x005fff94]         ; 004ad4f2 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ad4f8
    FLD float ptr [EAX + 0x8]           ; 004ad4fb
    FMUL float ptr [0x005fff94]         ; 004ad4fe | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ad504
    LEA EAX,[ESP + 0xa4]                ; 004ad507
    PUSH EAX                            ; 004ad50e
    MOV EAX,dword ptr [EDX]             ; 004ad50f | DAT_01bc120c
    ADD EAX,0x60                        ; 004ad511
    PUSH EAX                            ; 004ad514
    CALL engine_special.cpp_FUN_00580173 ; 004ad515
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ad51a
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004ad51d
    MOV EDX,dword ptr [0x00612560]      ; 004ad524 | DAT_00612560
    MOV dword ptr [ESP + 0x20],EAX      ; 004ad52a
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004ad52e
    MOV dword ptr [ESP + 0x28],ESI      ; 004ad535
    MOV dword ptr [ESP + 0x24],EAX      ; 004ad539
    LEA EBX,[ESP + 0x98]                ; 004ad53d
    LEA EAX,[ESP + 0x20]                ; 004ad544
    FLD float ptr [EAX]                 ; 004ad548
    FMUL float ptr [0x005fff94]         ; 004ad54a | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ad550
    FLD float ptr [EAX + 0x4]           ; 004ad552
    FMUL float ptr [0x005fff94]         ; 004ad555 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ad55b
    FLD float ptr [EAX + 0x8]           ; 004ad55e
    FMUL float ptr [0x005fff94]         ; 004ad561 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ad567
    LEA EAX,[ESP + 0x98]                ; 004ad56a
    PUSH EAX                            ; 004ad571
    MOV EAX,dword ptr [EDX]             ; 004ad572 | DAT_01bc120c
    ADD EAX,0x90                        ; 004ad574
    PUSH EAX                            ; 004ad579
    CALL engine_special.cpp_FUN_00580173 ; 004ad57a
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ad57f
    PUSH ESI                            ; 004ad582
    MOV ECX,dword ptr [EBP + 0x14]      ; 004ad583
    MOV EAX,[0x007c6120]                ; 004ad586 | DAT_007c6120
    PUSH ECX                            ; 004ad58b
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004ad58c
    PUSH EAX                            ; 004ad58f
    CALL dword ptr [EDX + 0x4]          ; 004ad590
    MOV EDX,0xffff                      ; 004ad593
    ADD ESP,0xc                         ; 004ad598
    MOV EBX,dword ptr [0x01c51cac]      ; 004ad59b | DAT_01c51cac
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ad5a1
    SUB EDX,EBX                         ; 004ad5a4
    MOV EAX,dword ptr [EAX + 0x40]      ; 004ad5a6
    MOV ESI,0xffff                      ; 004ad5a9
    IMUL EDX                            ; 004ad5ae
    SHRD EAX,EDX,0x10                   ; 004ad5b0
    PUSH 0x1                            ; 004ad5b4
    MOV [0x00629040],EAX                ; 004ad5b6 | DAT_00629040
    MOV dword ptr [0x00629034],ESI      ; 004ad5bb | DAT_00629034
    MOV dword ptr [0x00629038],ESI      ; 004ad5c1 | DAT_00629038
    MOV dword ptr [0x0062903c],ESI      ; 004ad5c7 | DAT_0062903c
    MOV dword ptr [0x00629064],ESI      ; 004ad5cd | DAT_00629064
    MOV dword ptr [0x00629068],ESI      ; 004ad5d3 | DAT_00629068
    MOV dword ptr [0x0062906c],ESI      ; 004ad5d9 | DAT_0062906c
    MOV dword ptr [0x00629094],ESI      ; 004ad5df | DAT_00629094
    MOV dword ptr [0x00629098],ESI      ; 004ad5e5 | DAT_00629098
    MOV dword ptr [0x0062909c],ESI      ; 004ad5eb | DAT_0062909c
    MOV dword ptr [0x006290c4],ESI      ; 004ad5f1 | DAT_006290c4
    MOV dword ptr [0x006290c8],ESI      ; 004ad5f7 | DAT_006290c8
    MOV dword ptr [0x006290cc],ESI      ; 004ad5fd | DAT_006290cc
    MOV ESI,dword ptr [0x00612560]      ; 004ad603 | DAT_00612560
    MOV [0x00629070],EAX                ; 004ad609 | DAT_00629070
    PUSH ESI                            ; 004ad60e | DAT_01bc120c
    MOV [0x006290a0],EAX                ; 004ad60f | DAT_006290a0
    MOV [0x006290d0],EAX                ; 004ad614 | DAT_006290d0
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004ad619
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004ad61e
    PUSH 0x1c57090                      ; 004ad621
    MOV EDI,dword ptr [0x00612560]      ; 004ad626 | DAT_00612560
    PUSH EDI                            ; 004ad62c | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30 ; 004ad62d
        ;   XREF to: 00482e30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004ad632
    PUSH 0x0                            ; 004ad635
    MOV EAX,[0x00612560]                ; 004ad637 | DAT_00612560
    PUSH EAX                            ; 004ad63c | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004ad63d
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004ad642
    MOV EDX,dword ptr [0x00612560]      ; 004ad645 | DAT_00612560
    PUSH EDX                            ; 004ad64b | DAT_01bc120c
    CALL engine_drender.cpp_pop_FUN_004839a0 ; 004ad64c
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004ad651
    MOV ECX,dword ptr [ESP + 0xe0]      ; 004ad654
    INC ECX                             ; 004ad65b
    MOV dword ptr [ESP + 0xe0],ECX      ; 004ad65c
    CMP ECX,0x3                         ; 004ad663
    JGE 0x004ad1b2                      ; 004ad666
        ;   XREF to: 004ad1b2 (CONDITIONAL_JUMP)  ; LAB_004ad1b2
    JMP 0x004ad2cf                      ; 004ad66c
        ;   XREF to: 004ad2cf (UNCONDITIONAL_JUMP)  ; LAB_004ad2cf
    PUSH 0x61c404                       ; 004ad671 | DAT_0061c404
        ;   Label: caseD_1
    MOV ECX,dword ptr [0x00612560]      ; 004ad676 | DAT_00612560
    PUSH ECX                            ; 004ad67c | DAT_01bc120c
    JMP 0x004ad1c5                      ; 004ad67d
        ;   XREF to: 004ad1c5 (UNCONDITIONAL_JUMP)  ; LAB_004ad1c5
    PUSH 0x61c41c                       ; 004ad682 | DAT_0061c41c
        ;   Label: caseD_2
    MOV EDX,dword ptr [0x00612560]      ; 004ad687 | DAT_00612560
    PUSH EDX                            ; 004ad68d | DAT_01bc120c
    JMP 0x004ad1c5                      ; 004ad68e
        ;   XREF to: 004ad1c5 (UNCONDITIONAL_JUMP)  ; LAB_004ad1c5
    PUSH 0x61c434                       ; 004ad693 | DAT_0061c434
        ;   Label: caseD_3
    MOV EAX,[0x00612560]                ; 004ad698 | DAT_00612560
    PUSH EAX                            ; 004ad69d | DAT_01bc120c
    JMP 0x004ad1c5                      ; 004ad69e
        ;   XREF to: 004ad1c5 (UNCONDITIONAL_JUMP)  ; LAB_004ad1c5
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ad6a3
        ;   Label: LAB_004ad6a3
    PUSH EBX                            ; 004ad6a6
    MOV ESI,dword ptr [0x00612560]      ; 004ad6a7 | DAT_00612560
    PUSH ESI                            ; 004ad6ad | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004ad6ae
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004ad6b3
    PUSH 0x0                            ; 004ad6b6
    PUSH 0x1c57078                      ; 004ad6b8 | DAT_01c57078
    MOV EDI,dword ptr [0x00612560]      ; 004ad6bd | DAT_00612560
    PUSH EDI                            ; 004ad6c3 | DAT_01bc120c
    LEA EBX,[ESP + 0x5c]                ; 004ad6c4
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800 ; 004ad6c8
        ;   XREF to: 00483800 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    MOV EAX,0xbecccccd                  ; 004ad6cd
    MOV EDX,dword ptr [0x00612560]      ; 004ad6d2 | DAT_00612560
    ADD ESP,0xc                         ; 004ad6d8
    XOR ECX,ECX                         ; 004ad6db
    MOV dword ptr [ESP + 0x20],EAX      ; 004ad6dd
    MOV dword ptr [ESP + 0x24],EAX      ; 004ad6e1
    LEA EAX,[ESP + 0x20]                ; 004ad6e5
    MOV dword ptr [ESP + 0x28],ECX      ; 004ad6e9
    FLD float ptr [EAX]                 ; 004ad6ed
    FMUL float ptr [0x005fff94]         ; 004ad6ef | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ad6f5
    FLD float ptr [EAX + 0x4]           ; 004ad6f7
    FMUL float ptr [0x005fff94]         ; 004ad6fa | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ad700
    FLD float ptr [EAX + 0x8]           ; 004ad703
    FMUL float ptr [0x005fff94]         ; 004ad706 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ad70c
    LEA EAX,[ESP + 0x50]                ; 004ad70f
    PUSH EAX                            ; 004ad713
    MOV EAX,dword ptr [EDX]             ; 004ad714 | DAT_01bc120c
    PUSH EAX                            ; 004ad716
    MOV ESI,0xbecccccd                  ; 004ad717
    XOR EDI,EDI                         ; 004ad71c
    CALL engine_special.cpp_FUN_00580173 ; 004ad71e
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EBX,0x3ecccccd                  ; 004ad723
    LEA EAX,[ESP + 0x28]                ; 004ad728
    ADD ESP,0x8                         ; 004ad72c
    MOV EDX,dword ptr [0x00612560]      ; 004ad72f | DAT_00612560
    MOV dword ptr [ESP + 0x20],EBX      ; 004ad735
    MOV dword ptr [ESP + 0x24],ESI      ; 004ad739
    LEA EBX,[ESP + 0xb0]                ; 004ad73d
    MOV dword ptr [ESP + 0x28],EDI      ; 004ad744
    FLD float ptr [EAX]                 ; 004ad748
    FMUL float ptr [0x005fff94]         ; 004ad74a | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ad750
    FLD float ptr [EAX + 0x4]           ; 004ad752
    FMUL float ptr [0x005fff94]         ; 004ad755 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ad75b
    FLD float ptr [EAX + 0x8]           ; 004ad75e
    FMUL float ptr [0x005fff94]         ; 004ad761 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ad767
    LEA EAX,[ESP + 0xb0]                ; 004ad76a
    PUSH EAX                            ; 004ad771
    MOV EAX,dword ptr [EDX]             ; 004ad772 | DAT_01bc120c
    ADD EAX,0x30                        ; 004ad774
    PUSH EAX                            ; 004ad777
    CALL engine_special.cpp_FUN_00580173 ; 004ad778
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0x3ecccccd                  ; 004ad77d
    LEA EBX,[ESP + 0xc4]                ; 004ad782
    ADD ESP,0x8                         ; 004ad789
    MOV EDX,dword ptr [0x00612560]      ; 004ad78c | DAT_00612560
    MOV dword ptr [ESP + 0x20],EAX      ; 004ad792
    MOV dword ptr [ESP + 0x24],EAX      ; 004ad796
    LEA EAX,[ESP + 0x20]                ; 004ad79a
    MOV dword ptr [ESP + 0x28],EDI      ; 004ad79e
    FLD float ptr [EAX]                 ; 004ad7a2
    FMUL float ptr [0x005fff94]         ; 004ad7a4 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ad7aa
    FLD float ptr [EAX + 0x4]           ; 004ad7ac
    FMUL float ptr [0x005fff94]         ; 004ad7af | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ad7b5
    FLD float ptr [EAX + 0x8]           ; 004ad7b8
    FMUL float ptr [0x005fff94]         ; 004ad7bb | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ad7c1
    LEA EAX,[ESP + 0xbc]                ; 004ad7c4
    PUSH EAX                            ; 004ad7cb
    MOV EAX,dword ptr [EDX]             ; 004ad7cc | DAT_01bc120c
    ADD EAX,0x60                        ; 004ad7ce
    PUSH EAX                            ; 004ad7d1
    CALL engine_special.cpp_FUN_00580173 ; 004ad7d2
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x94]                ; 004ad7d7
    LEA EAX,[ESP + 0x28]                ; 004ad7de
    ADD ESP,0x8                         ; 004ad7e2
    MOV EDX,dword ptr [0x00612560]      ; 004ad7e5 | DAT_00612560
    MOV dword ptr [ESP + 0x20],ESI      ; 004ad7eb
    MOV ESI,0x3ecccccd                  ; 004ad7ef
    MOV dword ptr [ESP + 0x28],EDI      ; 004ad7f4
    MOV dword ptr [ESP + 0x24],ESI      ; 004ad7f8
    FLD float ptr [EAX]                 ; 004ad7fc
    FMUL float ptr [0x005fff94]         ; 004ad7fe | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ad804
    FLD float ptr [EAX + 0x4]           ; 004ad806
    FMUL float ptr [0x005fff94]         ; 004ad809 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ad80f
    FLD float ptr [EAX + 0x8]           ; 004ad812
    FMUL float ptr [0x005fff94]         ; 004ad815 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ad81b
    LEA EAX,[ESP + 0x8c]                ; 004ad81e
    PUSH EAX                            ; 004ad825
    MOV EAX,dword ptr [EDX]             ; 004ad826 | DAT_01bc120c
    ADD EAX,0x90                        ; 004ad828
    PUSH EAX                            ; 004ad82d
    CALL engine_special.cpp_FUN_00580173 ; 004ad82e
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ad833
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ad836
    MOV EAX,dword ptr [EAX + 0x4c]      ; 004ad839
    CMP EAX,0x3                         ; 004ad83c
    JA 0x004ad1cd                       ; 004ad83f
        ;   XREF to: 004ad1cd (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4ad130]  ; 004ad845 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD

