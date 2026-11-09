; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_flies_cpp_FUN_004c0080(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e0762
;   undefined4 DAT_005e076a
;   undefined4 DAT_005e0772
;   undefined4 DAT_00600aa0
;   undefined4 DAT_00612560
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_01c50948
;   undefined4 DAT_01c51cac
;   undefined4 DAT_01cc8084
;   undefined4 DAT_01cc80c4
;   undefined4 DAT_01cc80c8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_flies.cpp_drawFlyPixel_FUN_004bffb0
;   core_spline.cpp_FUN_00583d60
;   core_spline.cpp_FUN_00583f90
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;   engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210
;   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00483cf0
;   engine_prim.c_replaceWWithDepth_FUN_0053dd20
;   engine_special.cpp_FUN_00580173
;   engine_texture.cpp_FUN_00597a20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0080
        ;   Label: core_flies.cpp_FUN_004c0080
    PUSH ESI                            ; 004c0081
    PUSH EDI                            ; 004c0082
    PUSH EBP                            ; 004c0083
    MOV EBP,ESP                         ; 004c0084
    SUB ESP,0xb0                        ; 004c0086
    AND ESP,0xfffffff8                  ; 004c008c
    MOV EDX,dword ptr [0x00612560]      ; 004c008f | DAT_00612560
    PUSH EDX                            ; 004c0095
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 004c0096
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004c009b
    TEST EAX,EAX                        ; 004c009e
    JZ 0x004c00ab                       ; 004c00a0
        ;   XREF to: 004c00ab (CONDITIONAL_JUMP)  ; LAB_004c00ab
    XOR EAX,EAX                         ; 004c00a2
    MOV ESP,EBP                         ; 004c00a4
    POP EBP                             ; 004c00a6
    POP EDI                             ; 004c00a7
    POP ESI                             ; 004c00a8
    POP EBX                             ; 004c00a9
    RET                                 ; 004c00aa
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c00ab
        ;   Label: LAB_004c00ab
    PUSH EAX                            ; 004c00ae
    MOV dword ptr [EAX + 0x2a1c],0x0    ; 004c00af
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 004c00b9
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c00be
    PUSH 0x0                            ; 004c00c1
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c00c3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c00c6
    PUSH EBX                            ; 004c00c9
    MOV EAX,dword ptr [EAX + 0x154]     ; 004c00ca
    LEA ESI,[ESP + 0x50]                ; 004c00d0
    LEA EDI,[ESP + 0x68]                ; 004c00d4
    CALL dword ptr [EAX + 0x1c]         ; 004c00d8
    MOV ECX,0x6                         ; 004c00db
    ADD ESP,0x4                         ; 004c00e0
    LEA EAX,[ESP + 0x64]                ; 004c00e3
    LEA ESI,[ESP + 0x4c]                ; 004c00e7
    PUSH EAX                            ; 004c00eb
    MOVSD.REP ES:EDI,ESI                ; 004c00ec
    CALL core_box.cpp_FUN_004207b0      ; 004c00ee
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 004c00f3
    MOV dword ptr [ESP + 0x9c],EAX      ; 004c00f6
    TEST EAX,EAX                        ; 004c00fd
    JZ 0x004c0370                       ; 004c00ff
        ;   XREF to: 004c0370 (CONDITIONAL_JUMP)  ; LAB_004c0370
    MOV ESI,dword ptr [0x01cc8084]      ; 004c0105 | DAT_01cc8084
    MOV dword ptr [EBX + 0x2a1c],0x1    ; 004c010b
    TEST ESI,ESI                        ; 004c0115
    JNZ 0x004c015e                      ; 004c0117
        ;   XREF to: 004c015e (CONDITIONAL_JUMP)  ; LAB_004c015e
    MOV ESI,0x1cc80cc                   ; 004c0119
    XOR EBX,EBX                         ; 004c011e
    MOV dword ptr [ESP + 0xac],EBX      ; 004c0120
        ;   Label: LAB_004c0120
    FILD dword ptr [ESP + 0xac]         ; 004c0127
    FADD double ptr [0x005e0772]        ; 004c012e | DAT_005e0772
    FMUL double ptr [0x005e0762]        ; 004c0134 | DAT_005e0762
    PUSH 0x0                            ; 004c013a
    SUB ESP,0x4                         ; 004c013c
    FSTP float ptr [ESP]                ; 004c013f
    PUSH ESI                            ; 004c0142
    INC EBX                             ; 004c0143
    CALL core_spline.cpp_FUN_00583d60   ; 004c0144
        ;   XREF to: 00583d60 (UNCONDITIONAL_CALL)  ; void core_spline.cpp_FUN_00583d60(float * out_basis, float t, float tension)
    ADD ESP,0xc                         ; 004c0149
    ADD ESI,0x20                        ; 004c014c
    CMP EBX,0x40                        ; 004c014f
    JL 0x004c0120                       ; 004c0152
        ;   XREF to: 004c0120 (CONDITIONAL_JUMP)  ; LAB_004c0120
    MOV dword ptr [0x01cc8084],0x1      ; 004c0154 | DAT_01cc8084
    MOV EAX,[0x01c50948]                ; 004c015e | DAT_01c50948
        ;   Label: LAB_004c015e
    TEST EAX,EAX                        ; 004c0163
    JZ 0x004c038a                       ; 004c0165
        ;   XREF to: 004c038a (CONDITIONAL_JUMP)  ; LAB_004c038a
    MOV ECX,0x3                         ; 004c016b
    MOV ESI,0x800000                    ; 004c0170
    MOV EAX,[0x00612560]                ; 004c0175 | DAT_00612560
    XOR EBX,EBX                         ; 004c017a
    MOV dword ptr [ESP + 0x4],ECX       ; 004c017c
    MOV dword ptr [ESP + 0x14],EBX      ; 004c0180
    MOV dword ptr [ESP + 0x10],EBX      ; 004c0184
    MOV dword ptr [ESP + 0xc],EBX       ; 004c0188
    MOV dword ptr [ESP + 0x8],EBX       ; 004c018c
    MOV dword ptr [ESP + 0x18],EBX      ; 004c0190
    MOV dword ptr [ESP + 0x1c],ESI      ; 004c0194
    MOV dword ptr [ESP + 0x20],ESI      ; 004c0198
    MOV dword ptr [ESP + 0x28],ESI      ; 004c019c
    MOV dword ptr [ESP + 0x2c],ESI      ; 004c01a0
    MOV dword ptr [ESP + 0x34],ESI      ; 004c01a4
    MOV dword ptr [ESP + 0x38],ESI      ; 004c01a8
    MOV ECX,0x1                         ; 004c01ac
    MOV EBX,0x2                         ; 004c01b1
    MOV dword ptr [ESP + 0x24],ECX      ; 004c01b6
    MOV dword ptr [ESP + 0x30],EBX      ; 004c01ba
    MOV EDX,dword ptr [EAX]             ; 004c01be
    MOV dword ptr [EDX + 0x20],0x0      ; 004c01c0
    MOV EDX,dword ptr [EAX]             ; 004c01c7
    MOV dword ptr [EDX + 0x24],0x0      ; 004c01c9
    MOV EDX,dword ptr [EAX]             ; 004c01d0
    MOV dword ptr [EDX + 0x28],0x0      ; 004c01d2
    MOV EDX,dword ptr [EAX]             ; 004c01d9
    MOV dword ptr [EDX + 0x50],0x0      ; 004c01db
    MOV EDX,dword ptr [EAX]             ; 004c01e2
    MOV dword ptr [EDX + 0x54],0x0      ; 004c01e4
    MOV EDX,dword ptr [EAX]             ; 004c01eb
    MOV dword ptr [EDX + 0x58],0x0      ; 004c01ed
    MOV EDX,dword ptr [EAX]             ; 004c01f4
    MOV dword ptr [EDX + 0x80],0x0      ; 004c01f6
    MOV EDX,dword ptr [EAX]             ; 004c0200
    MOV dword ptr [EDX + 0x84],0x0      ; 004c0202
    MOV EDX,dword ptr [EAX]             ; 004c020c
    MOV ESI,dword ptr [0x01c51cac]      ; 004c020e | DAT_01c51cac
    MOV dword ptr [EDX + 0x88],0x0      ; 004c0214
    MOV EDX,0xffff                      ; 004c021e
    MOV EBX,dword ptr [EAX]             ; 004c0223
    SUB EDX,ESI                         ; 004c0225
    MOV dword ptr [EBX + 0x2c],EDX      ; 004c0227
    MOV EBX,dword ptr [EAX]             ; 004c022a
    MOV dword ptr [EBX + 0x5c],EDX      ; 004c022c
    MOV EAX,dword ptr [EAX]             ; 004c022f
    PUSH 0x61d828                       ; 004c0231
    MOV dword ptr [EAX + 0x8c],EDX      ; 004c0236
    CALL engine_texture.cpp_FUN_00597a20 ; 004c023c
        ;   XREF to: 00597a20 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00597a20()
    ADD ESP,0x4                         ; 004c0241
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c0244
        ;   Label: LAB_004c0244
    XOR EDI,EDI                         ; 004c0247
    MOV EDX,dword ptr [EAX + 0x164]     ; 004c0249
    MOV dword ptr [ESP + 0xa0],EDI      ; 004c024f
    TEST EDX,EDX                        ; 004c0256
    JLE 0x004c0370                      ; 004c0258
        ;   XREF to: 004c0370 (CONDITIONAL_JUMP)  ; LAB_004c0370
    ADD EAX,0x168                       ; 004c025e
    MOV dword ptr [ESP + 0xa4],EAX      ; 004c0263
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004c026a
        ;   Label: LAB_004c026a
    FLD float ptr [EAX]                 ; 004c0271
    FMUL float ptr [0x005e076a]         ; 004c0273 | DAT_005e076a
    CALL crt_math.c_round_FUN_005c03a0  ; 004c0279
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0xa8]        ; 004c027e
    MOV EDI,dword ptr [ESP + 0xa8]      ; 004c0285
    TEST EDI,EDI                        ; 004c028c
    JL 0x004c03d5                       ; 004c028e
        ;   XREF to: 004c03d5 (CONDITIONAL_JUMP)  ; LAB_004c03d5
    CMP EDI,0x40                        ; 004c0294
    JL 0x004c02a4                       ; 004c0297
        ;   XREF to: 004c02a4 (CONDITIONAL_JUMP)  ; LAB_004c02a4
    MOV dword ptr [ESP + 0xa8],0x3f     ; 004c0299
    MOV EDX,dword ptr [ESP + 0xa8]      ; 004c02a4
        ;   Label: LAB_004c02a4
    MOV EDI,0x1cc80cc                   ; 004c02ab
    LEA ESI,[EAX + 0x4]                 ; 004c02b0
    SHL EDX,0x5                         ; 004c02b3
    LEA EBX,[EAX + 0x10]                ; 004c02b6
    ADD EDI,EDX                         ; 004c02b9
    LEA EDX,[EAX + 0x1c]                ; 004c02bb
    ADD EAX,0x28                        ; 004c02be
    PUSH EAX                            ; 004c02c1
    PUSH EDX                            ; 004c02c2
    PUSH EBX                            ; 004c02c3
    PUSH ESI                            ; 004c02c4
    PUSH EDI                            ; 004c02c5
    LEA ESI,[ESP + 0xa4]                ; 004c02c6
    LEA EBX,[ESP + 0x8c]                ; 004c02cd
    CALL core_spline.cpp_FUN_00583f90   ; 004c02d4
        ;   XREF to: 00583f90 (UNCONDITIONAL_CALL)  ; undefined core_spline.cpp_FUN_00583f90()
    LEA EDI,[ESP + 0x98]                ; 004c02d9
    LEA ESI,[ESP + 0xa4]                ; 004c02e0
    LEA EAX,[ESP + 0x98]                ; 004c02e7
    ADD ESP,0x14                        ; 004c02ee
    MOV EDX,dword ptr [0x00612560]      ; 004c02f1 | DAT_00612560
    MOVSD ES:EDI,ESI                    ; 004c02f7
    MOVSD ES:EDI,ESI                    ; 004c02f8
    MOVSD ES:EDI,ESI                    ; 004c02f9
    FLD float ptr [EAX]                 ; 004c02fa
    FMUL float ptr [0x00600aa0]         ; 004c02fc | DAT_00600aa0
    FISTP dword ptr [EBX]               ; 004c0302
    FLD float ptr [EAX + 0x4]           ; 004c0304
    FMUL float ptr [0x00600aa0]         ; 004c0307 | DAT_00600aa0
    FISTP dword ptr [EBX + 0x4]         ; 004c030d
    FLD float ptr [EAX + 0x8]           ; 004c0310
    FMUL float ptr [0x00600aa0]         ; 004c0313 | DAT_00600aa0
    FISTP dword ptr [EBX + 0x8]         ; 004c0319
    LEA EAX,[ESP + 0x78]                ; 004c031c
    PUSH EAX                            ; 004c0320
    MOV EAX,dword ptr [EDX]             ; 004c0321
    PUSH EAX                            ; 004c0323
    CALL engine_special.cpp_FUN_00580173 ; 004c0324
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 004c0329 | DAT_00612560
    MOV EBX,dword ptr [EAX]             ; 004c032e
    MOV DL,byte ptr [EBX + 0x13]        ; 004c0330
    ADD ESP,0x8                         ; 004c0333
    TEST DL,0x80                        ; 004c0336
    JZ 0x004c03e3                       ; 004c0339
        ;   XREF to: 004c03e3 (CONDITIONAL_JUMP)  ; LAB_004c03e3
    MOV ECX,dword ptr [ESP + 0xa4]      ; 004c033f
        ;   Label: LAB_004c033f
    MOV EBX,dword ptr [ESP + 0xa0]      ; 004c0346
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c034d
    ADD ECX,0x34                        ; 004c0350
    INC EBX                             ; 004c0353
    MOV ESI,dword ptr [EDX + 0x164]     ; 004c0354
    MOV dword ptr [ESP + 0xa4],ECX      ; 004c035a
    MOV dword ptr [ESP + 0xa0],EBX      ; 004c0361
    CMP EBX,ESI                         ; 004c0368
    JL 0x004c026a                       ; 004c036a
        ;   XREF to: 004c026a (CONDITIONAL_JUMP)  ; LAB_004c026a
    MOV ESI,dword ptr [EBP + 0x14]      ; 004c0370
        ;   Label: LAB_004c0370
    PUSH ESI                            ; 004c0373
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 004c0374
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c0379
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004c037c
    MOV ESP,EBP                         ; 004c0383
    POP EBP                             ; 004c0385
    POP EDI                             ; 004c0386
    POP ESI                             ; 004c0387
    POP EBX                             ; 004c0388
    RET                                 ; 004c0389
    PUSH EAX                            ; 004c038a
        ;   Label: LAB_004c038a
    PUSH EAX                            ; 004c038b
    PUSH EAX                            ; 004c038c
    MOV EDX,dword ptr [0x00612560]      ; 004c038d | DAT_00612560
    PUSH EDX                            ; 004c0393
    CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00483cf0 ; 004c0394
        ;   XREF to: 00483cf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00483cf0(CDemonRenderer * this_ptr, int red_component, int green_component, int blue_component)
    MOV EAX,[0x01c51cac]                ; 004c0399 | DAT_01c51cac
    SAR EAX,0x8                         ; 004c039e
    MOV [0x01cc80c4],EAX                ; 004c03a1 | DAT_01cc80c4
    MOV EDX,dword ptr [0x01cc80c4]      ; 004c03a6 | DAT_01cc80c4
    SHL EAX,0x8                         ; 004c03ac
    OR EDX,EAX                          ; 004c03af
    MOV EAX,[0x01cc80c4]                ; 004c03b1 | DAT_01cc80c4
    SHL EAX,0x10                        ; 004c03b6
    OR EDX,EAX                          ; 004c03b9
    MOV EAX,EDX                         ; 004c03bb
    ADD ESP,0x10                        ; 004c03bd
    XOR EAX,0xffffff                    ; 004c03c0
    MOV dword ptr [0x01cc80c4],EDX      ; 004c03c5 | DAT_01cc80c4
    MOV [0x01cc80c8],EAX                ; 004c03cb | DAT_01cc80c8
    JMP 0x004c0244                      ; 004c03d0
        ;   XREF to: 004c0244 (UNCONDITIONAL_JUMP)  ; LAB_004c0244
    XOR EBX,EBX                         ; 004c03d5
        ;   Label: LAB_004c03d5
    MOV dword ptr [ESP + 0xa8],EBX      ; 004c03d7
    JMP 0x004c02a4                      ; 004c03de
        ;   XREF to: 004c02a4 (UNCONDITIONAL_JUMP)  ; LAB_004c02a4
    MOV EDX,dword ptr [0x01c50948]      ; 004c03e3 | DAT_01c50948
        ;   Label: LAB_004c03e3
    MOV EDI,dword ptr [EBX + 0x14]      ; 004c03e9
    MOV ESI,dword ptr [EBX + 0x10]      ; 004c03ec
    SAR EDI,0x10                        ; 004c03ef
    SAR ESI,0x10                        ; 004c03f2
    TEST EDX,EDX                        ; 004c03f5
    JZ 0x004c0468                       ; 004c03f7
        ;   XREF to: 004c0468 (CONDITIONAL_JUMP)  ; LAB_004c0468
    MOV EDX,dword ptr [0x0061b498]      ; 004c03f9 | DAT_0061b498
    DEC EDX                             ; 004c03ff
    CMP ESI,EDX                         ; 004c0400
    JGE 0x004c033f                      ; 004c0402
        ;   XREF to: 004c033f (CONDITIONAL_JUMP)  ; LAB_004c033f
    MOV ESI,dword ptr [0x0061b49c]      ; 004c0408 | DAT_0061b49c
    DEC ESI                             ; 004c040e
    CMP EDI,ESI                         ; 004c040f
    JGE 0x004c033f                      ; 004c0411
        ;   XREF to: 004c033f (CONDITIONAL_JUMP)  ; LAB_004c033f
    MOV word ptr [EBX + 0x10],0x0       ; 004c0417
    MOV word ptr [EBX + 0x14],0x0       ; 004c041d
    MOV ESI,dword ptr [EAX]             ; 004c0423
    MOV ECX,0xc                         ; 004c0425
    LEA EDI,[ESI + 0x30]                ; 004c042a
    MOV ESI,EBX                         ; 004c042d
    MOVSD.REP ES:EDI,ESI                ; 004c042f
    MOV ESI,dword ptr [EAX]             ; 004c0431
    MOV ECX,0xc                         ; 004c0433
    LEA EDI,[ESI + 0x60]                ; 004c0438
    MOV ESI,EBX                         ; 004c043b
    MOVSD.REP ES:EDI,ESI                ; 004c043d
    MOV EBX,dword ptr [EAX]             ; 004c043f
    INC word ptr [EBX + 0x42]           ; 004c0441
    MOV EBX,dword ptr [EAX]             ; 004c0445
    PUSH 0x3e7                          ; 004c0447
    LEA EDX,[ESP + 0x4]                 ; 004c044c
    MOV CX,word ptr [EBX + 0x76]        ; 004c0450
    PUSH EDX                            ; 004c0454
    INC ECX                             ; 004c0455
    PUSH EAX                            ; 004c0456
    MOV word ptr [EBX + 0x76],CX        ; 004c0457
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210 ; 004c045b
        ;   XREF to: 00482210 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly, int render_flags)
    ADD ESP,0xc                         ; 004c0460
    JMP 0x004c033f                      ; 004c0463
        ;   XREF to: 004c033f (UNCONDITIONAL_JUMP)  ; LAB_004c033f
    PUSH 0x1                            ; 004c0468
        ;   Label: LAB_004c0468
    PUSH EBX                            ; 004c046a
    CALL engine_prim.c_replaceWWithDepth_FUN_0053dd20 ; 004c046b
        ;   XREF to: 0053dd20 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_replaceWWithDepth_FUN_0053dd20()
    ADD ESP,0x8                         ; 004c0470
    MOV EAX,dword ptr [EBX + 0x8]       ; 004c0473
    TEST ESI,ESI                        ; 004c0476
    JL 0x004c033f                       ; 004c0478
        ;   XREF to: 004c033f (CONDITIONAL_JUMP)  ; LAB_004c033f
    CMP ESI,dword ptr [0x0061b498]      ; 004c047e | DAT_0061b498
    JGE 0x004c033f                      ; 004c0484
        ;   XREF to: 004c033f (CONDITIONAL_JUMP)  ; LAB_004c033f
    TEST EDI,EDI                        ; 004c048a
    JL 0x004c033f                       ; 004c048c
        ;   XREF to: 004c033f (CONDITIONAL_JUMP)  ; LAB_004c033f
    CMP EDI,dword ptr [0x0061b49c]      ; 004c0492 | DAT_0061b49c
    JGE 0x004c033f                      ; 004c0498
        ;   XREF to: 004c033f (CONDITIONAL_JUMP)  ; LAB_004c033f
    PUSH EAX                            ; 004c049e
    PUSH EDI                            ; 004c049f
    PUSH ESI                            ; 004c04a0
    CALL core_flies.cpp_drawFlyPixel_FUN_004bffb0 ; 004c04a1
        ;   XREF to: 004bffb0 (UNCONDITIONAL_CALL)  ; void core_flies.cpp_drawFlyPixel_FUN_004bffb0(int screen_x, int screen_y, int z_depth)
    ADD ESP,0xc                         ; 004c04a6
    JMP 0x004c033f                      ; 004c04a9
        ;   XREF to: 004c033f (UNCONDITIONAL_JUMP)  ; LAB_004c033f

