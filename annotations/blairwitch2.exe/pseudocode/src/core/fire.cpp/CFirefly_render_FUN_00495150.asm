; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFirefly_render_FUN_00495150(CFirefly *this_ptr)
;
; Parameters:
; CFirefly *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined1* switchdataD_00495140 = 004951d0
;   undefined4 DAT_005d53ca
;   undefined4 DAT_005f64e4
;   undefined4 DAT_0060b280
;   undefined4 DAT_0061516c
;   undefined4 DAT_00615184
;   undefined4 DAT_0061519c
;   undefined4 DAT_006151b4
;   undefined4 DAT_00622034
;   undefined4 DAT_00622038
;   undefined4 DAT_0062203c
;   undefined4 DAT_00622040
;   undefined4 DAT_00622064
;   undefined4 DAT_00622068
;   undefined4 DAT_0062206c
;   ... and 13 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046cad0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_matrix.c_pop_FUN_0046b4a0
;   engine_special.cpp_FUN_0055d723
;   engine_special.cpp_FUN_0055d9ec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00495150
        ;   Label: core_fire.cpp_CFirefly_render_FUN_00495150
    PUSH ESI                            ; 00495151
    PUSH EDI                            ; 00495152
    PUSH EBP                            ; 00495153
    MOV EBP,ESP                         ; 00495154
    SUB ESP,0xe8                        ; 00495156
    AND ESP,0xfffffff8                  ; 0049515c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049515f
    LEA EBX,[ESP + 0xbc]                ; 00495162
    MOV EAX,dword ptr [EAX + 0x50]      ; 00495169
    MOV ESI,dword ptr [0x0060b280]      ; 0049516c | DAT_0060b280
    MOV dword ptr [ESP + 0xd8],EAX      ; 00495172
    MOV EAX,dword ptr [EBP + 0x14]      ; 00495179
    MOV ESI,dword ptr [ESI]             ; 0049517c | DAT_01ba5c50
    FLD float ptr [EAX]                 ; 0049517e
    FMUL float ptr [0x005f64e4]         ; 00495180 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00495186
    FLD float ptr [EAX + 0x4]           ; 00495188
    FMUL float ptr [0x005f64e4]         ; 0049518b | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00495191
    FLD float ptr [EAX + 0x8]           ; 00495194
    FMUL float ptr [0x005f64e4]         ; 00495197 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049519d
    LEA EAX,[ESP + 0xbc]                ; 004951a0
    PUSH EAX                            ; 004951a7
    PUSH ESI                            ; 004951a8
    CALL engine_special.cpp_FUN_0055d9ec ; 004951a9
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004951ae
    PUSH ESI                            ; 004951b1
    MOV EDX,dword ptr [0x0060b280]      ; 004951b2 | DAT_0060b280
    PUSH EDX                            ; 004951b8 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046cad0 ; 004951b9
        ;   XREF to: 0046cad0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046cad0(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 004951be
    TEST EAX,EAX                        ; 004951c1
    JNZ 0x00495713                      ; 004951c3
        ;   XREF to: 00495713 (CONDITIONAL_JUMP)  ; LAB_00495713
    MOV ESP,EBP                         ; 004951c9
        ;   Label: LAB_004951c9
    POP EBP                             ; 004951cb
    POP EDI                             ; 004951cc
    POP ESI                             ; 004951cd
    POP EBX                             ; 004951ce
    RET                                 ; 004951cf
    PUSH 0x61516c                       ; 004951d0 | DAT_0061516c
        ;   Label: caseD_0
    MOV EAX,[0x0060b280]                ; 004951d5 | DAT_0060b280
    PUSH EAX                            ; 004951da | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 004951db
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   Label: LAB_004951db
    ADD ESP,0x8                         ; 004951e0
    PUSH 0x0                            ; 004951e3
        ;   Label: default
    MOV ECX,dword ptr [EBP + 0x14]      ; 004951e5
    MOV EAX,[0x007bda74]                ; 004951e8 | DAT_007bda74
    PUSH ECX                            ; 004951ed
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004951ee
    PUSH EAX                            ; 004951f1
    CALL dword ptr [EDX + 0x4]          ; 004951f2
    MOV EDX,0xffff                      ; 004951f5
    ADD ESP,0xc                         ; 004951fa
    MOV EBX,dword ptr [0x01c38aec]      ; 004951fd | DAT_01c38aec
    MOV EAX,dword ptr [EBP + 0x14]      ; 00495203
    SUB EDX,EBX                         ; 00495206
    MOV EAX,dword ptr [EAX + 0x40]      ; 00495208
    MOV ESI,0xffff                      ; 0049520b
    IMUL EDX                            ; 00495210
    SHRD EAX,EDX,0x10                   ; 00495212
    PUSH 0x1                            ; 00495216
    MOV [0x00622040],EAX                ; 00495218 | DAT_00622040
    MOV dword ptr [0x00622034],ESI      ; 0049521d | DAT_00622034
    MOV dword ptr [0x00622038],ESI      ; 00495223 | DAT_00622038
    MOV dword ptr [0x0062203c],ESI      ; 00495229 | DAT_0062203c
    MOV dword ptr [0x00622064],ESI      ; 0049522f | DAT_00622064
    MOV dword ptr [0x00622068],ESI      ; 00495235 | DAT_00622068
    MOV dword ptr [0x0062206c],ESI      ; 0049523b | DAT_0062206c
    MOV dword ptr [0x00622094],ESI      ; 00495241 | DAT_00622094
    MOV dword ptr [0x00622098],ESI      ; 00495247 | DAT_00622098
    MOV dword ptr [0x0062209c],ESI      ; 0049524d | DAT_0062209c
    MOV dword ptr [0x006220c4],ESI      ; 00495253 | DAT_006220c4
    MOV dword ptr [0x006220c8],ESI      ; 00495259 | DAT_006220c8
    MOV dword ptr [0x006220cc],ESI      ; 0049525f | DAT_006220cc
    MOV ESI,dword ptr [0x0060b280]      ; 00495265 | DAT_0060b280
    MOV [0x00622070],EAX                ; 0049526b | DAT_00622070
    PUSH ESI                            ; 00495270 | DAT_01ba5c50
    MOV [0x006220a0],EAX                ; 00495271 | DAT_006220a0
    MOV [0x006220d0],EAX                ; 00495276 | DAT_006220d0
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0049527b
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00495280
    PUSH 0x1c3ded0                      ; 00495283
    MOV EDI,dword ptr [0x0060b280]      ; 00495288 | DAT_0060b280
    PUSH EDI                            ; 0049528e | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930 ; 0049528f
        ;   XREF to: 0046a930 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00495294
    PUSH 0x0                            ; 00495297
    MOV EAX,[0x0060b280]                ; 00495299 | DAT_0060b280
    PUSH EAX                            ; 0049529e | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0049529f
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004952a4
    MOV EDX,dword ptr [0x0060b280]      ; 004952a7 | DAT_0060b280
    PUSH EDX                            ; 004952ad | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 004952ae
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 004952b3
    LEA EDI,[ESP + 0xa4]                ; 004952b6
    MOV ESI,dword ptr [EBP + 0x14]      ; 004952bd
    MOV EBX,0x3ccccccd                  ; 004952c0
    MOVSD ES:EDI,ESI                    ; 004952c5
    MOVSD ES:EDI,ESI                    ; 004952c6
    MOVSD ES:EDI,ESI                    ; 004952c7
    MOV ECX,0x3f800000                  ; 004952c8
    MOV ESI,dword ptr [EBP + 0x14]      ; 004952cd
    MOV EAX,dword ptr [EBP + 0x14]      ; 004952d0
    LEA EDI,[ESP + 0x20]                ; 004952d3
    LEA ESI,[ESI + 0xc]                 ; 004952d7
    MOV dword ptr [ESP],ECX             ; 004952da
    MOV dword ptr [ESP + 0x4],EBX       ; 004952dd
    MOVSD ES:EDI,ESI                    ; 004952e1
    MOVSD ES:EDI,ESI                    ; 004952e2
    MOVSD ES:EDI,ESI                    ; 004952e3
    ADD EAX,0x18                        ; 004952e4
    XOR ESI,ESI                         ; 004952e7
    MOV dword ptr [ESP + 0xe4],EAX      ; 004952e9
    MOV dword ptr [ESP + 0xe0],ESI      ; 004952f0
    FLD float ptr [ESP + 0x4]           ; 004952f7
        ;   Label: LAB_004952f7
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004952fb
    FLD ST0                             ; 00495302
    FLD double ptr [0x005d53ca]         ; 00495304 | DAT_005d53ca
    FXCH                                ; 0049530a
    FMUL ST1                            ; 0049530c
    FLD float ptr [EAX]                 ; 0049530e
    FXCH                                ; 00495310
    FSTP ST3                            ; 00495312
    FXCH ST2                            ; 00495314
    FSTP float ptr [ESP + 0x4]          ; 00495316
    FXCH                                ; 0049531a
    FMUL float ptr [ESP + 0x4]          ; 0049531c
    FLD float ptr [EAX + 0x4]           ; 00495320
    FMUL float ptr [ESP + 0x4]          ; 00495323
    FLD float ptr [EAX + 0x8]           ; 00495327
    FMUL float ptr [ESP + 0x4]          ; 0049532a
    FLD float ptr [ESP]                 ; 0049532e
    FLD float ptr [ESP + 0x20]          ; 00495331
    LEA EDI,[ESP + 0x8]                 ; 00495335
    LEA ESI,[ESP + 0xb0]                ; 00495339
    FXCH ST4                            ; 00495340
    FSTP float ptr [ESP + 0xb0]         ; 00495342
    FXCH ST2                            ; 00495349
    FSTP float ptr [ESP + 0xb4]         ; 0049534b
    FSTP float ptr [ESP + 0xb8]         ; 00495352
    MOVSD ES:EDI,ESI                    ; 00495359
    MOVSD ES:EDI,ESI                    ; 0049535a
    MOVSD ES:EDI,ESI                    ; 0049535b
    FLD ST0                             ; 0049535c
    FXCH ST2                            ; 0049535e
    FSUB float ptr [ESP + 0x8]          ; 00495360
    FXCH ST2                            ; 00495364
    FMULP ST3                           ; 00495366
    FXCH                                ; 00495368
    FST float ptr [ESP + 0x20]          ; 0049536a
    FMUL float ptr [ESP + 0x4]          ; 0049536e
    FLD float ptr [ESP + 0x28]          ; 00495372
    FLD float ptr [ESP + 0x24]          ; 00495376
    FSUB float ptr [ESP + 0xc]          ; 0049537a
    FXCH                                ; 0049537e
    FSUB float ptr [ESP + 0x10]         ; 00495380
    FXCH                                ; 00495384
    FST float ptr [ESP + 0x24]          ; 00495386
    FMUL float ptr [ESP + 0x4]          ; 0049538a
    FXCH                                ; 0049538e
    FST float ptr [ESP + 0x28]          ; 00495390
    FMUL float ptr [ESP + 0x4]          ; 00495394
    FLD float ptr [ESP + 0xa4]          ; 00495398
    FLD float ptr [ESP + 0xa8]          ; 0049539f
    LEA EAX,[ESP + 0xa4]                ; 004953a6
    FXCH ST6                            ; 004953ad
    FSTP ST5                            ; 004953af
    FLD float ptr [ESP + 0xac]          ; 004953b1
    PUSH EAX                            ; 004953b8
    LEA EDI,[ESP + 0x30]                ; 004953b9
    LEA ESI,[ESP + 0x90]                ; 004953bd
    FXCH ST4                            ; 004953c4
    FSTP float ptr [ESP + 0x90]         ; 004953c6
    FXCH ST2                            ; 004953cd
    FSTP float ptr [ESP + 0x94]         ; 004953cf
    FSTP float ptr [ESP + 0x98]         ; 004953d6
    MOVSD ES:EDI,ESI                    ; 004953dd
    MOVSD ES:EDI,ESI                    ; 004953de
    MOVSD ES:EDI,ESI                    ; 004953df
    FXCH ST2                            ; 004953e0
    FSTP float ptr [ESP + 0x4]          ; 004953e2
    MOV EDI,dword ptr [0x0060b280]      ; 004953e6 | DAT_0060b280
    FXCH                                ; 004953ec
    FSUB float ptr [ESP + 0x30]         ; 004953ee
    FXCH ST2                            ; 004953f2
    FSUB float ptr [ESP + 0x34]         ; 004953f4
    FXCH                                ; 004953f8
    FSUB float ptr [ESP + 0x38]         ; 004953fa
    FXCH ST2                            ; 004953fe
    FSTP float ptr [ESP + 0xa8]         ; 00495400
    FSTP float ptr [ESP + 0xac]         ; 00495407
    PUSH EDI                            ; 0049540e | DAT_01ba5c50
    FSTP float ptr [ESP + 0xb4]         ; 0049540f
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 00495416
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0049541b
    PUSH 0x0                            ; 0049541e
    PUSH 0x1c3deb8                      ; 00495420 | DAT_01c3deb8
    MOV EAX,[0x0060b280]                ; 00495425 | DAT_0060b280
    PUSH EAX                            ; 0049542a | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300 ; 0049542b
        ;   XREF to: 0046b300 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 00495430
    FLD float ptr [ESP + 0xd8]          ; 00495433
    FCHS                                ; 0049543a
    FMUL float ptr [ESP]                ; 0049543c
    LEA EBX,[ESP + 0x38]                ; 0049543f
    XOR EDX,EDX                         ; 00495443
    FSTP float ptr [ESP + 0x80]         ; 00495445
    MOV EAX,dword ptr [ESP + 0x80]      ; 0049544c
    MOV dword ptr [ESP + 0x88],EDX      ; 00495453
    MOV dword ptr [ESP + 0xdc],EAX      ; 0049545a
    MOV dword ptr [ESP + 0x84],EAX      ; 00495461
    LEA EAX,[ESP + 0x80]                ; 00495468
    MOV EDX,dword ptr [0x0060b280]      ; 0049546f | DAT_0060b280
    FLD float ptr [EAX]                 ; 00495475
    FMUL float ptr [0x005f64e4]         ; 00495477 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049547d
    FLD float ptr [EAX + 0x4]           ; 0049547f
    FMUL float ptr [0x005f64e4]         ; 00495482 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00495488
    FLD float ptr [EAX + 0x8]           ; 0049548b
    FMUL float ptr [0x005f64e4]         ; 0049548e | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00495494
    LEA EAX,[ESP + 0x38]                ; 00495497
    PUSH EAX                            ; 0049549b
    MOV EAX,dword ptr [EDX]             ; 0049549c | DAT_01ba5c50
    PUSH EAX                            ; 0049549e
    CALL engine_special.cpp_FUN_0055d723 ; 0049549f
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004954a4
    FLD float ptr [ESP + 0xd8]          ; 004954a7
    FMUL float ptr [ESP]                ; 004954ae
    LEA EBX,[ESP + 0x5c]                ; 004954b1
    FSTP float ptr [ESP + 0xd4]         ; 004954b5
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004954bc
    MOV EDX,dword ptr [0x0060b280]      ; 004954c3 | DAT_0060b280
    MOV dword ptr [ESP + 0x80],EAX      ; 004954c9
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004954d0
    XOR ECX,ECX                         ; 004954d7
    MOV dword ptr [ESP + 0x84],EAX      ; 004954d9
    LEA EAX,[ESP + 0x80]                ; 004954e0
    MOV dword ptr [ESP + 0x88],ECX      ; 004954e7
    FLD float ptr [EAX]                 ; 004954ee
    FMUL float ptr [0x005f64e4]         ; 004954f0 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 004954f6
    FLD float ptr [EAX + 0x4]           ; 004954f8
    FMUL float ptr [0x005f64e4]         ; 004954fb | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00495501
    FLD float ptr [EAX + 0x8]           ; 00495504
    FMUL float ptr [0x005f64e4]         ; 00495507 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049550d
    LEA EAX,[ESP + 0x5c]                ; 00495510
    PUSH EAX                            ; 00495514
    MOV EAX,dword ptr [EDX]             ; 00495515 | DAT_01ba5c50
    ADD EAX,0x30                        ; 00495517
    PUSH EAX                            ; 0049551a
    CALL engine_special.cpp_FUN_0055d723 ; 0049551b
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00495520
    XOR EBX,EBX                         ; 00495523
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00495525
    MOV dword ptr [ESP + 0x88],EBX      ; 0049552c
    LEA EBX,[ESP + 0x14]                ; 00495533
    MOV dword ptr [ESP + 0x80],EAX      ; 00495537
    MOV dword ptr [ESP + 0x84],EAX      ; 0049553e
    LEA EAX,[ESP + 0x80]                ; 00495545
    MOV EDX,dword ptr [0x0060b280]      ; 0049554c | DAT_0060b280
    FLD float ptr [EAX]                 ; 00495552
    FMUL float ptr [0x005f64e4]         ; 00495554 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049555a
    FLD float ptr [EAX + 0x4]           ; 0049555c
    FMUL float ptr [0x005f64e4]         ; 0049555f | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00495565
    FLD float ptr [EAX + 0x8]           ; 00495568
    FMUL float ptr [0x005f64e4]         ; 0049556b | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00495571
    LEA EAX,[ESP + 0x14]                ; 00495574
    PUSH EAX                            ; 00495578
    MOV EAX,dword ptr [EDX]             ; 00495579 | DAT_01ba5c50
    ADD EAX,0x60                        ; 0049557b
    PUSH EAX                            ; 0049557e
    CALL engine_special.cpp_FUN_0055d723 ; 0049557f
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00495584
    XOR ESI,ESI                         ; 00495587
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00495589
    MOV EDX,dword ptr [0x0060b280]      ; 00495590 | DAT_0060b280
    MOV dword ptr [ESP + 0x80],EAX      ; 00495596
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0049559d
    MOV dword ptr [ESP + 0x88],ESI      ; 004955a4
    MOV dword ptr [ESP + 0x84],EAX      ; 004955ab
    LEA EBX,[ESP + 0x74]                ; 004955b2
    LEA EAX,[ESP + 0x80]                ; 004955b6
    FLD float ptr [EAX]                 ; 004955bd
    FMUL float ptr [0x005f64e4]         ; 004955bf | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 004955c5
    FLD float ptr [EAX + 0x4]           ; 004955c7
    FMUL float ptr [0x005f64e4]         ; 004955ca | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 004955d0
    FLD float ptr [EAX + 0x8]           ; 004955d3
    FMUL float ptr [0x005f64e4]         ; 004955d6 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 004955dc
    LEA EAX,[ESP + 0x74]                ; 004955df
    PUSH EAX                            ; 004955e3
    MOV EAX,dword ptr [EDX]             ; 004955e4 | DAT_01ba5c50
    ADD EAX,0x90                        ; 004955e6
    PUSH EAX                            ; 004955eb
    CALL engine_special.cpp_FUN_0055d723 ; 004955ec
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004955f1
    PUSH ESI                            ; 004955f4
    MOV EDI,dword ptr [EBP + 0x14]      ; 004955f5
    MOV EAX,[0x007bda74]                ; 004955f8 | DAT_007bda74
    PUSH EDI                            ; 004955fd
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004955fe
    PUSH EAX                            ; 00495601
    CALL dword ptr [EDX + 0x4]          ; 00495602
    MOV EDX,0xffff                      ; 00495605
    MOV ECX,dword ptr [0x01c38aec]      ; 0049560a | DAT_01c38aec
    ADD ESP,0xc                         ; 00495610
    MOV EAX,dword ptr [EDI + 0x40]      ; 00495613
    SUB EDX,ECX                         ; 00495616
    MOV EBX,0xffff                      ; 00495618
    IMUL EDX                            ; 0049561d
    SHRD EAX,EDX,0x10                   ; 0049561f
    PUSH 0x1                            ; 00495623
    MOV [0x00622040],EAX                ; 00495625 | DAT_00622040
    MOV dword ptr [0x00622034],EBX      ; 0049562a | DAT_00622034
    MOV dword ptr [0x00622038],EBX      ; 00495630 | DAT_00622038
    MOV dword ptr [0x0062203c],EBX      ; 00495636 | DAT_0062203c
    MOV dword ptr [0x00622064],EBX      ; 0049563c | DAT_00622064
    MOV dword ptr [0x00622068],EBX      ; 00495642 | DAT_00622068
    MOV dword ptr [0x0062206c],EBX      ; 00495648 | DAT_0062206c
    MOV dword ptr [0x00622094],EBX      ; 0049564e | DAT_00622094
    MOV dword ptr [0x00622098],EBX      ; 00495654 | DAT_00622098
    MOV dword ptr [0x0062209c],EBX      ; 0049565a | DAT_0062209c
    MOV dword ptr [0x006220c4],EBX      ; 00495660 | DAT_006220c4
    MOV dword ptr [0x006220c8],EBX      ; 00495666 | DAT_006220c8
    MOV dword ptr [0x006220cc],EBX      ; 0049566c | DAT_006220cc
    MOV EBX,dword ptr [0x0060b280]      ; 00495672 | DAT_0060b280
    MOV [0x00622070],EAX                ; 00495678 | DAT_00622070
    PUSH EBX                            ; 0049567d | DAT_01ba5c50
    MOV [0x006220a0],EAX                ; 0049567e | DAT_006220a0
    MOV [0x006220d0],EAX                ; 00495683 | DAT_006220d0
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 00495688
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0049568d
    PUSH 0x1c3ded0                      ; 00495690
    MOV ESI,dword ptr [0x0060b280]      ; 00495695 | DAT_0060b280
    PUSH ESI                            ; 0049569b | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930 ; 0049569c
        ;   XREF to: 0046a930 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004956a1
    PUSH 0x0                            ; 004956a4
    MOV EDI,dword ptr [0x0060b280]      ; 004956a6 | DAT_0060b280
    PUSH EDI                            ; 004956ac | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 004956ad
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004956b2
    MOV EAX,[0x0060b280]                ; 004956b5 | DAT_0060b280
    PUSH EAX                            ; 004956ba | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 004956bb
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 004956c0
    MOV EDX,dword ptr [ESP + 0xe0]      ; 004956c3
    INC EDX                             ; 004956ca
    MOV dword ptr [ESP + 0xe0],EDX      ; 004956cb
    CMP EDX,0x3                         ; 004956d2
    JGE 0x004951c9                      ; 004956d5
        ;   XREF to: 004951c9 (CONDITIONAL_JUMP)  ; LAB_004951c9
    JMP 0x004952f7                      ; 004956db
        ;   XREF to: 004952f7 (UNCONDITIONAL_JUMP)  ; LAB_004952f7
    PUSH 0x615184                       ; 004956e0 | DAT_00615184
        ;   Label: caseD_1
    MOV EDI,dword ptr [0x0060b280]      ; 004956e5 | DAT_0060b280
    PUSH EDI                            ; 004956eb | DAT_01ba5c50
    JMP 0x004951db                      ; 004956ec
        ;   XREF to: 004951db (UNCONDITIONAL_JUMP)  ; LAB_004951db
    PUSH 0x61519c                       ; 004956f1 | DAT_0061519c
        ;   Label: caseD_2
    MOV ESI,dword ptr [0x0060b280]      ; 004956f6 | DAT_0060b280
    PUSH ESI                            ; 004956fc | DAT_01ba5c50
    JMP 0x004951db                      ; 004956fd
        ;   XREF to: 004951db (UNCONDITIONAL_JUMP)  ; LAB_004951db
    PUSH 0x6151b4                       ; 00495702 | DAT_006151b4
        ;   Label: caseD_3
    MOV EBX,dword ptr [0x0060b280]      ; 00495707 | DAT_0060b280
    PUSH EBX                            ; 0049570d | DAT_01ba5c50
    JMP 0x004951db                      ; 0049570e
        ;   XREF to: 004951db (UNCONDITIONAL_JUMP)  ; LAB_004951db
    MOV ECX,dword ptr [EBP + 0x14]      ; 00495713
        ;   Label: LAB_00495713
    PUSH ECX                            ; 00495716
    MOV EBX,dword ptr [0x0060b280]      ; 00495717 | DAT_0060b280
    PUSH EBX                            ; 0049571d | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 0049571e
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00495723
    PUSH 0x0                            ; 00495726
    PUSH 0x1c3deb8                      ; 00495728 | DAT_01c3deb8
    MOV ESI,dword ptr [0x0060b280]      ; 0049572d | DAT_0060b280
    PUSH ESI                            ; 00495733 | DAT_01ba5c50
    XOR EDI,EDI                         ; 00495734
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300 ; 00495736
        ;   XREF to: 0046b300 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 0049573b
    LEA EBX,[ESP + 0x50]                ; 0049573e
    FLD float ptr [ESP + 0xd8]          ; 00495742
    FCHS                                ; 00495749
    FSTP float ptr [ESP + 0x80]         ; 0049574b
    MOV EAX,dword ptr [ESP + 0x80]      ; 00495752
    MOV EDX,dword ptr [0x0060b280]      ; 00495759 | DAT_0060b280
    MOV dword ptr [ESP + 0xd4],EAX      ; 0049575f
    MOV dword ptr [ESP + 0x84],EAX      ; 00495766
    LEA EAX,[ESP + 0x80]                ; 0049576d
    MOV dword ptr [ESP + 0x88],EDI      ; 00495774
    FLD float ptr [EAX]                 ; 0049577b
    FMUL float ptr [0x005f64e4]         ; 0049577d | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00495783
    FLD float ptr [EAX + 0x4]           ; 00495785
    FMUL float ptr [0x005f64e4]         ; 00495788 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049578e
    FLD float ptr [EAX + 0x8]           ; 00495791
    FMUL float ptr [0x005f64e4]         ; 00495794 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049579a
    LEA EAX,[ESP + 0x50]                ; 0049579d
    PUSH EAX                            ; 004957a1
    MOV EAX,dword ptr [EDX]             ; 004957a2 | DAT_01ba5c50
    PUSH EAX                            ; 004957a4
    CALL engine_special.cpp_FUN_0055d723 ; 004957a5
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004957aa
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004957ad
    LEA EBX,[ESP + 0x44]                ; 004957b4
    MOV dword ptr [ESP + 0x80],EAX      ; 004957b8
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004957bf
    MOV EDX,dword ptr [0x0060b280]      ; 004957c6 | DAT_0060b280
    MOV dword ptr [ESP + 0x84],EAX      ; 004957cc
    LEA EAX,[ESP + 0x80]                ; 004957d3
    MOV dword ptr [ESP + 0x88],EDI      ; 004957da
    FLD float ptr [EAX]                 ; 004957e1
    FMUL float ptr [0x005f64e4]         ; 004957e3 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 004957e9
    FLD float ptr [EAX + 0x4]           ; 004957eb
    FMUL float ptr [0x005f64e4]         ; 004957ee | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 004957f4
    FLD float ptr [EAX + 0x8]           ; 004957f7
    FMUL float ptr [0x005f64e4]         ; 004957fa | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00495800
    LEA EAX,[ESP + 0x44]                ; 00495803
    PUSH EAX                            ; 00495807
    MOV EAX,dword ptr [EDX]             ; 00495808 | DAT_01ba5c50
    ADD EAX,0x30                        ; 0049580a
    PUSH EAX                            ; 0049580d
    CALL engine_special.cpp_FUN_0055d723 ; 0049580e
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00495813
    LEA EBX,[ESP + 0x68]                ; 00495816
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0049581a
    MOV EDX,dword ptr [0x0060b280]      ; 00495821 | DAT_0060b280
    MOV dword ptr [ESP + 0x80],EAX      ; 00495827
    MOV dword ptr [ESP + 0x84],EAX      ; 0049582e
    LEA EAX,[ESP + 0x80]                ; 00495835
    MOV dword ptr [ESP + 0x88],EDI      ; 0049583c
    FLD float ptr [EAX]                 ; 00495843
    FMUL float ptr [0x005f64e4]         ; 00495845 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049584b
    FLD float ptr [EAX + 0x4]           ; 0049584d
    FMUL float ptr [0x005f64e4]         ; 00495850 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00495856
    FLD float ptr [EAX + 0x8]           ; 00495859
    FMUL float ptr [0x005f64e4]         ; 0049585c | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00495862
    LEA EAX,[ESP + 0x68]                ; 00495865
    PUSH EAX                            ; 00495869
    MOV EAX,dword ptr [EDX]             ; 0049586a | DAT_01ba5c50
    ADD EAX,0x60                        ; 0049586c
    PUSH EAX                            ; 0049586f
    CALL engine_special.cpp_FUN_0055d723 ; 00495870
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00495875
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00495878
    LEA EBX,[ESP + 0x98]                ; 0049587f
    MOV dword ptr [ESP + 0x80],EAX      ; 00495886
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0049588d
    MOV EDX,dword ptr [0x0060b280]      ; 00495894 | DAT_0060b280
    MOV dword ptr [ESP + 0x84],EAX      ; 0049589a
    LEA EAX,[ESP + 0x80]                ; 004958a1
    MOV dword ptr [ESP + 0x88],EDI      ; 004958a8
    FLD float ptr [EAX]                 ; 004958af
    FMUL float ptr [0x005f64e4]         ; 004958b1 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 004958b7
    FLD float ptr [EAX + 0x4]           ; 004958b9
    FMUL float ptr [0x005f64e4]         ; 004958bc | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 004958c2
    FLD float ptr [EAX + 0x8]           ; 004958c5
    FMUL float ptr [0x005f64e4]         ; 004958c8 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 004958ce
    LEA EAX,[ESP + 0x98]                ; 004958d1
    PUSH EAX                            ; 004958d8
    MOV EAX,dword ptr [EDX]             ; 004958d9 | DAT_01ba5c50
    ADD EAX,0x90                        ; 004958db
    PUSH EAX                            ; 004958e0
    CALL engine_special.cpp_FUN_0055d723 ; 004958e1
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004958e6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004958e9
    MOV EAX,dword ptr [EAX + 0x54]      ; 004958ec
    CMP EAX,0x3                         ; 004958ef
    JA 0x004951e3                       ; 004958f2
        ;   XREF to: 004951e3 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x495140]  ; 004958f8 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD

