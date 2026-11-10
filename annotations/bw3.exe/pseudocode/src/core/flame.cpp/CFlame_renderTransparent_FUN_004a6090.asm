; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_flame_cpp_CFlame_renderTransparent_FUN_004a6090(CFlame *this_ptr)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x120]:1  local_120
; undefined        Stack[-0x108]:1  local_108
;
; XREF[3]:
;   core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00414e90 at 00414f2d
;   core_flamecan.cpp_CFlameCan_renderTransparent_FUN_004a72d0 at 004a72ed
;   core_vessel.cpp_CCryptVessel_renderTransparent_FUN_00576e10 at 00576f71
;
; Referenced Globals:
;   undefined4 DAT_005c0bdc
;   undefined4 DAT_005c0be4
;   undefined4 DAT_005c0bec
;   undefined4 DAT_005dfe50
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fde70
;   undefined4 DAT_005fde88
;   undefined4 DAT_00600530
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;   undefined4 DAT_0060b034
;   undefined4 DAT_0060b038
;   undefined4 DAT_0060b03c
;   undefined4 DAT_0060b040
;   ... and 23 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_box.cpp_FUN_0041daf0
;   core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00537390
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_matrix.c_FUN_0046d230
;   engine_matrix.c_FUN_0046d250
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6090
        ;   Label: core_flame.cpp_CFlame_renderTransparent_FUN_004a6090
    PUSH ESI                            ; 004a6091
    PUSH EDI                            ; 004a6092
    PUSH EBP                            ; 004a6093
    MOV EBP,ESP                         ; 004a6094
    SUB ESP,0x15c                       ; 004a6096
    AND ESP,0xfffffff8                  ; 004a609c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a609f
    CMP dword ptr [EAX + 0x1b4],0x0     ; 004a60a2
    JNZ 0x004a60c2                      ; 004a60a9
        ;   XREF to: 004a60c2 (CONDITIONAL_JUMP)  ; LAB_004a60c2
    MOV EAX,[0x00600530]                ; 004a60ab | DAT_00600530
    CMP dword ptr [EAX + 0x1008],0x0    ; 004a60b0 | DAT_01d82088
    JNZ 0x004a60c2                      ; 004a60b7
        ;   XREF to: 004a60c2 (CONDITIONAL_JUMP)  ; LAB_004a60c2
    XOR EAX,EAX                         ; 004a60b9
        ;   Label: LAB_004a60b9
    MOV ESP,EBP                         ; 004a60bb
    POP EBP                             ; 004a60bd
    POP EDI                             ; 004a60be
    POP ESI                             ; 004a60bf
    POP EBX                             ; 004a60c0
    RET                                 ; 004a60c1
    MOV EBX,dword ptr [0x005f2afc]      ; 004a60c2 | DAT_005f2afc
        ;   Label: LAB_004a60c2
    PUSH EBX                            ; 004a60c8 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 004a60c9
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004a60ce
    TEST EAX,EAX                        ; 004a60d1
    JNZ 0x004a60b9                      ; 004a60d3
        ;   XREF to: 004a60b9 (CONDITIONAL_JUMP)  ; LAB_004a60b9
    MOV ESI,dword ptr [EBP + 0x14]      ; 004a60d5
    PUSH ESI                            ; 004a60d8
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 004a60d9
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    MOV EDI,dword ptr [ESI + 0x298]     ; 004a60de
    ADD ESP,0x4                         ; 004a60e4
    TEST EDI,EDI                        ; 004a60e7
    JZ 0x004a6123                       ; 004a60e9
        ;   XREF to: 004a6123 (CONDITIONAL_JUMP)  ; LAB_004a6123
    PUSH 0x0                            ; 004a60eb
    MOV EAX,dword ptr [ESI + 0x154]     ; 004a60ed
    PUSH ESI                            ; 004a60f3
    LEA ESI,[ESP + 0x58]                ; 004a60f4
    LEA EDI,[ESP + 0x70]                ; 004a60f8
    CALL dword ptr [EAX + 0x1c]         ; 004a60fc
    MOV ECX,0x6                         ; 004a60ff
    ADD ESP,0x4                         ; 004a6104
    LEA EAX,[ESP + 0x6c]                ; 004a6107
    LEA ESI,[ESP + 0x54]                ; 004a610b
    PUSH EAX                            ; 004a610f
    MOVSD.REP ES:EDI,ESI                ; 004a6110
    CALL core_box.cpp_FUN_0041daf0      ; 004a6112
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 004a6117
    MOV EDX,dword ptr [EBP + 0x14]      ; 004a611a
    MOV dword ptr [EDX + 0x290],EAX     ; 004a611d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a6123
        ;   Label: LAB_004a6123
    CMP dword ptr [EAX + 0x290],0x0     ; 004a6126
    JZ 0x004a6177                       ; 004a612d
        ;   XREF to: 004a6177 (CONDITIONAL_JUMP)  ; LAB_004a6177
    FLD float ptr [EAX + 0x15c]         ; 004a612f
    FMUL ST0                            ; 004a6135
    FLD float ptr [EAX + 0x158]         ; 004a6137
    FMUL ST0                            ; 004a613d
    FADDP                               ; 004a613f
    FLD float ptr [EAX + 0x160]         ; 004a6141
    FMUL ST0                            ; 004a6147
    FADDP                               ; 004a6149
    FSQRT                               ; 004a614b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a614d
    FMUL float ptr [EAX + 0x1ac]        ; 004a6150
    FLD1                                ; 004a6156
    FCOMPP                              ; 004a6158
    FNSTSW AX                           ; 004a615a
    SAHF                                ; 004a615c
    JNC 0x004a6177                      ; 004a615d
        ;   XREF to: 004a6177 (CONDITIONAL_JUMP)  ; LAB_004a6177
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a615f
    ADD EAX,0x168                       ; 004a6162
    PUSH EAX                            ; 004a6167
    MOV EBX,dword ptr [0x00603b28]      ; 004a6168 | g_CDemonSetPtr
    PUSH EBX                            ; 004a616e | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00537390 ; 004a616f
        ;   XREF to: 00537390 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00537390(CDemonSet * this_ptr, CDemonGlobe * globe)
    ADD ESP,0x8                         ; 004a6174
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a6177
        ;   Label: LAB_004a6177
    CMP dword ptr [EAX + 0x290],0x0     ; 004a617a
    JZ 0x004a6608                       ; 004a6181
        ;   XREF to: 004a6608 (CONDITIONAL_JUMP)  ; LAB_004a6608
    CMP dword ptr [EAX + 0x1a8],0x3     ; 004a6187
    JZ 0x004a6608                       ; 004a618e
        ;   XREF to: 004a6608 (CONDITIONAL_JUMP)  ; LAB_004a6608
    MOV EAX,[0x005f2afc]                ; 004a6194 | DAT_005f2afc
    PUSH EAX                            ; 004a6199 | DAT_01bdd7e4
    LEA ESI,[ESP + 0xe4]                ; 004a619a
    LEA EDI,[ESP + 0x114]               ; 004a61a1
    CALL engine_matrix.c_FUN_0046d230   ; 004a61a8
        ;   XREF to: 0046d230 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046d230()
    LEA ESI,[ESP + 0xe4]                ; 004a61ad
    LEA EAX,[ESP + 0x114]               ; 004a61b4
    ADD ESP,0x4                         ; 004a61bb
    XOR EDX,EDX                         ; 004a61be
    MOV EBX,dword ptr [0x005f2afc]      ; 004a61c0 | DAT_005f2afc
    PUSH EDX                            ; 004a61c6
    MOVSD ES:EDI,ESI                    ; 004a61c7
    MOVSD ES:EDI,ESI                    ; 004a61c8
    MOVSD ES:EDI,ESI                    ; 004a61c9
    PUSH EAX                            ; 004a61ca
    MOV ESI,0x1                         ; 004a61cb
    MOV dword ptr [ESP + 0x118],EDX     ; 004a61d0
    PUSH EBX                            ; 004a61d7 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x120],EDX     ; 004a61d8
    XOR EDI,EDI                         ; 004a61df
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0 ; 004a61e1
        ;   XREF to: 0046cee0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004a61e6
    MOV ECX,dword ptr [0x005f2afc]      ; 004a61e9 | DAT_005f2afc
    MOV dword ptr [ESP + 0x150],ESI     ; 004a61ef
    MOV dword ptr [ESP + 0xd4],EDI      ; 004a61f6
    MOV dword ptr [ESP + 0xd8],EDI      ; 004a61fd
    MOV dword ptr [ESP + 0xdc],EDI      ; 004a6204
    PUSH ECX                            ; 004a620b | DAT_01bdd7e4
    LEA ESI,[ESP + 0xa8]                ; 004a620c
    LEA EDI,[ESP + 0x114]               ; 004a6213
    CALL engine_matrix.c_FUN_0046d230   ; 004a621a
        ;   XREF to: 0046d230 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046d230()
    LEA ESI,[ESP + 0xa8]                ; 004a621f
    ADD ESP,0x4                         ; 004a6226
    MOVSD ES:EDI,ESI                    ; 004a6229
    MOVSD ES:EDI,ESI                    ; 004a622a
    MOVSD ES:EDI,ESI                    ; 004a622b
    MOV EBX,dword ptr [ESP + 0x110]     ; 004a622c
    CMP EBX,0x2000                      ; 004a6233
    JLE 0x004a69ed                      ; 004a6239
        ;   XREF to: 004a69ed (CONDITIONAL_JUMP)  ; LAB_004a69ed
    MOV dword ptr [ESP + 0x150],0x3     ; 004a623f
        ;   Label: LAB_004a623f
    MOV EAX,dword ptr [ESP + 0x150]     ; 004a624a
        ;   Label: LAB_004a624a
    XOR ESI,ESI                         ; 004a6251
    TEST EAX,EAX                        ; 004a6253
    JLE 0x004a65f9                      ; 004a6255
        ;   XREF to: 004a65f9 (CONDITIONAL_JUMP)  ; LAB_004a65f9
    MOV EDI,dword ptr [EBP + 0x14]      ; 004a625b
    ADD EDI,0x20                        ; 004a625e
    PUSH 0x0                            ; 004a6261
        ;   Label: LAB_004a6261
    LEA EAX,[ESP + 0xd8]                ; 004a6263
    PUSH EAX                            ; 004a626a
    MOV EAX,[0x005f2afc]                ; 004a626b | DAT_005f2afc
    PUSH EAX                            ; 004a6270 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0 ; 004a6271
        ;   XREF to: 0046cee0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004a6276
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a6279
    FLD float ptr [EAX + 0x158]         ; 004a627c
    FMUL float ptr [0x005c0bdc]         ; 004a6282 | DAT_005c0bdc
    LEA EBX,[ESP + 0x8c]                ; 004a6288
    XOR EDX,EDX                         ; 004a628f
    LEA EAX,[ESP + 0x128]               ; 004a6291
    MOV dword ptr [ESP + 0x12c],EDX     ; 004a6298
    MOV dword ptr [ESP + 0x130],EDX     ; 004a629f
    MOV EDX,dword ptr [0x005f2afc]      ; 004a62a6 | DAT_005f2afc
    FSTP float ptr [ESP + 0x128]        ; 004a62ac
    FLD float ptr [EAX]                 ; 004a62b3
    FMUL float ptr [0x005dfe50]         ; 004a62b5 | DAT_005dfe50
    FISTP dword ptr [EBX]               ; 004a62bb
    FLD float ptr [EAX + 0x4]           ; 004a62bd
    FMUL float ptr [0x005dfe50]         ; 004a62c0 | DAT_005dfe50
    FISTP dword ptr [EBX + 0x4]         ; 004a62c6
    FLD float ptr [EAX + 0x8]           ; 004a62c9
    FMUL float ptr [0x005dfe50]         ; 004a62cc | DAT_005dfe50
    FISTP dword ptr [EBX + 0x8]         ; 004a62d2
    LEA EAX,[ESP + 0x8c]                ; 004a62d5
    PUSH EAX                            ; 004a62dc
    MOV EAX,dword ptr [EDX]             ; 004a62dd | DAT_01bdd7e4
    PUSH EAX                            ; 004a62df
    CALL engine_special.cpp_FUN_005632a3 ; 004a62e0
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004a62e5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a62e8
    MOV EAX,dword ptr [EAX + 0x15c]     ; 004a62eb
    LEA EBX,[ESP + 0xb0]                ; 004a62f1
    MOV dword ptr [ESP + 0x12c],EAX     ; 004a62f8
    LEA EAX,[ESP + 0x128]               ; 004a62ff
    MOV EDX,dword ptr [0x005f2afc]      ; 004a6306 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 004a630c
    FMUL float ptr [0x005dfe50]         ; 004a630e | DAT_005dfe50
    FISTP dword ptr [EBX]               ; 004a6314
    FLD float ptr [EAX + 0x4]           ; 004a6316
    FMUL float ptr [0x005dfe50]         ; 004a6319 | DAT_005dfe50
    FISTP dword ptr [EBX + 0x4]         ; 004a631f
    FLD float ptr [EAX + 0x8]           ; 004a6322
    FMUL float ptr [0x005dfe50]         ; 004a6325 | DAT_005dfe50
    FISTP dword ptr [EBX + 0x8]         ; 004a632b
    LEA EAX,[ESP + 0xb0]                ; 004a632e
    PUSH EAX                            ; 004a6335
    MOV EAX,dword ptr [EDX]             ; 004a6336 | DAT_01bdd7e4
    ADD EAX,0x30                        ; 004a6338
    PUSH EAX                            ; 004a633b
    CALL engine_special.cpp_FUN_005632a3 ; 004a633c
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004a6341
    MOV AH,byte ptr [ESP + 0x12b]       ; 004a6344
    XOR AH,0x80                         ; 004a634b
    LEA EBX,[ESP + 0xc8]                ; 004a634e
    MOV byte ptr [ESP + 0x12b],AH       ; 004a6355
    LEA EAX,[ESP + 0x128]               ; 004a635c
    MOV EDX,dword ptr [0x005f2afc]      ; 004a6363 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 004a6369
    FMUL float ptr [0x005dfe50]         ; 004a636b | DAT_005dfe50
    FISTP dword ptr [EBX]               ; 004a6371
    FLD float ptr [EAX + 0x4]           ; 004a6373
    FMUL float ptr [0x005dfe50]         ; 004a6376 | DAT_005dfe50
    FISTP dword ptr [EBX + 0x4]         ; 004a637c
    FLD float ptr [EAX + 0x8]           ; 004a637f
    FMUL float ptr [0x005dfe50]         ; 004a6382 | DAT_005dfe50
    FISTP dword ptr [EBX + 0x8]         ; 004a6388
    LEA EAX,[ESP + 0xc8]                ; 004a638b
    PUSH EAX                            ; 004a6392
    MOV EAX,dword ptr [EDX]             ; 004a6393 | DAT_01bdd7e4
    ADD EAX,0x60                        ; 004a6395
    PUSH EAX                            ; 004a6398
    CALL engine_special.cpp_FUN_005632a3 ; 004a6399
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004a639e
    XOR EBX,EBX                         ; 004a63a1
    LEA EAX,[ESP + 0x128]               ; 004a63a3
    MOV dword ptr [ESP + 0x12c],EBX     ; 004a63aa
    LEA EBX,[ESP + 0xf8]                ; 004a63b1
    MOV EDX,dword ptr [0x005f2afc]      ; 004a63b8 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 004a63be
    FMUL float ptr [0x005dfe50]         ; 004a63c0 | DAT_005dfe50
    FISTP dword ptr [EBX]               ; 004a63c6
    FLD float ptr [EAX + 0x4]           ; 004a63c8
    FMUL float ptr [0x005dfe50]         ; 004a63cb | DAT_005dfe50
    FISTP dword ptr [EBX + 0x4]         ; 004a63d1
    FLD float ptr [EAX + 0x8]           ; 004a63d4
    FMUL float ptr [0x005dfe50]         ; 004a63d7 | DAT_005dfe50
    FISTP dword ptr [EBX + 0x8]         ; 004a63dd
    LEA EAX,[ESP + 0xf8]                ; 004a63e0
    PUSH EAX                            ; 004a63e7
    MOV EAX,dword ptr [EDX]             ; 004a63e8 | DAT_01bdd7e4
    ADD EAX,0x90                        ; 004a63ea
    PUSH EAX                            ; 004a63ef
    CALL engine_special.cpp_FUN_005632a3 ; 004a63f0
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004a63f5
    PUSH 0x0                            ; 004a63f8
    MOV EAX,[0x007e2a54]                ; 004a63fa | DAT_007e2a54
    PUSH EDI                            ; 004a63ff
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004a6400
    PUSH EAX                            ; 004a6403
    CALL dword ptr [EDX + 0x4]          ; 004a6404
    MOV EDX,0xffff                      ; 004a6407
    ADD ESP,0xc                         ; 004a640c
    MOV EAX,[0x01c6e24c]                ; 004a640f | DAT_01c6e24c
    MOV ECX,dword ptr [ESP + 0x150]     ; 004a6414
    SUB EDX,EAX                         ; 004a641b
    CMP ECX,0x3                         ; 004a641d
    JNZ 0x004a642d                      ; 004a6420
        ;   XREF to: 004a642d (CONDITIONAL_JUMP)  ; LAB_004a642d
    MOV EAX,EDX                         ; 004a6422
    SAR EDX,0x1f                        ; 004a6424
    SUB EAX,EDX                         ; 004a6427
    SAR EAX,0x1                         ; 004a6429
    MOV EDX,EAX                         ; 004a642b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a642d
        ;   Label: LAB_004a642d
    MOV EBX,dword ptr [EAX + 0x1a8]     ; 004a6430
    CMP EBX,0x4                         ; 004a6436
    JNZ 0x004a6444                      ; 004a6439
        ;   XREF to: 004a6444 (CONDITIONAL_JUMP)  ; LAB_004a6444
    MOV EAX,EDX                         ; 004a643b
    SAR EDX,0x1f                        ; 004a643d
    IDIV EBX                            ; 004a6440
    MOV EDX,EAX                         ; 004a6442
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a6444
        ;   Label: LAB_004a6444
    CMP dword ptr [EAX + 0x1a8],0x1     ; 004a6447
    JNZ 0x004a645b                      ; 004a644e
        ;   XREF to: 004a645b (CONDITIONAL_JUMP)  ; LAB_004a645b
    MOV EAX,EDX                         ; 004a6450
    SAR EDX,0x1f                        ; 004a6452
    SUB EAX,EDX                         ; 004a6455
    SAR EAX,0x1                         ; 004a6457
    MOV EDX,EAX                         ; 004a6459
    MOV EBX,0xffff                      ; 004a645b
        ;   Label: LAB_004a645b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a6460
    MOV dword ptr [0x0060b070],EDX      ; 004a6463 | DAT_0060b070
    MOV dword ptr [0x0060b0a0],EDX      ; 004a6469 | DAT_0060b0a0
    MOV dword ptr [0x0060b0d0],EDX      ; 004a646f | DAT_0060b0d0
    MOV dword ptr [0x0060b034],EBX      ; 004a6475 | DAT_0060b034
    MOV dword ptr [0x0060b038],EBX      ; 004a647b | DAT_0060b038
    MOV dword ptr [0x0060b03c],EBX      ; 004a6481 | DAT_0060b03c
    MOV dword ptr [0x0060b064],EBX      ; 004a6487 | DAT_0060b064
    MOV dword ptr [0x0060b068],EBX      ; 004a648d | DAT_0060b068
    MOV dword ptr [0x0060b06c],EBX      ; 004a6493 | DAT_0060b06c
    MOV dword ptr [0x0060b094],EBX      ; 004a6499 | DAT_0060b094
    MOV dword ptr [0x0060b098],EBX      ; 004a649f | DAT_0060b098
    MOV dword ptr [0x0060b09c],EBX      ; 004a64a5 | DAT_0060b09c
    MOV dword ptr [0x0060b0c4],EBX      ; 004a64ab | DAT_0060b0c4
    MOV dword ptr [0x0060b0c8],EBX      ; 004a64b1 | DAT_0060b0c8
    MOV dword ptr [0x0060b0cc],EBX      ; 004a64b7 | DAT_0060b0cc
    MOV EBX,dword ptr [EAX + 0x294]     ; 004a64bd
    MOV dword ptr [0x0060b040],EDX      ; 004a64c3 | DAT_0060b040
    TEST EBX,EBX                        ; 004a64c9
    JNZ 0x004a69fe                      ; 004a64cb
        ;   XREF to: 004a69fe (CONDITIONAL_JUMP)  ; LAB_004a69fe
    MOV EDX,0xf80000                    ; 004a64d1
    MOV EAX,0x80000                     ; 004a64d6
    MOV dword ptr [0x0060b030],EDX      ; 004a64db | DAT_0060b030
    MOV [0x0060b05c],EAX                ; 004a64e1 | DAT_0060b05c
    MOV [0x0060b060],EAX                ; 004a64e6 | DAT_0060b060
    MOV dword ptr [0x0060b08c],EDX      ; 004a64eb | DAT_0060b08c
    MOV [0x0060b090],EAX                ; 004a64f1 | DAT_0060b090
    MOV dword ptr [0x0060b0bc],EDX      ; 004a64f6 | DAT_0060b0bc
    MOV dword ptr [0x0060b0c0],EDX      ; 004a64fc | DAT_0060b0c0
    MOV [0x0060b02c],EAX                ; 004a6502 | DAT_0060b02c
        ;   Label: LAB_004a6502
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a6507
    FLD float ptr [EAX + 0x164]         ; 004a650a
    CALL crt_math.c_round_FUN_005a3120  ; 004a6510
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x158]       ; 004a6515
    MOV EAX,dword ptr [ESP + 0x158]     ; 004a651c
    MOV EDX,EAX                         ; 004a6523
    MOV ECX,0x8                         ; 004a6525
    SAR EDX,0x1f                        ; 004a652a
    IDIV ECX                            ; 004a652d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a652f
    IMUL EAX,dword ptr [EAX + 0x1a8],0xc0 ; 004a6532
    MOV ECX,0x5fde88                    ; 004a653c | DAT_005fde88
    ADD ECX,EAX                         ; 004a6541
    IMUL EAX,EDX,0x18                   ; 004a6543
    ADD EAX,ECX                         ; 004a6546
    PUSH EAX                            ; 004a6548
    MOV EBX,dword ptr [0x005f2afc]      ; 004a6549 | DAT_005f2afc
    PUSH EBX                            ; 004a654f | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004a6550
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004a6555
    PUSH 0x1                            ; 004a6558
    MOV EAX,[0x005f2afc]                ; 004a655a | DAT_005f2afc
    PUSH EAX                            ; 004a655f | DAT_01bdd7e4
    MOV EBX,0x1                         ; 004a6560
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 004a6565
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    MOV EDX,0x4                         ; 004a656a
    MOV EAX,0x2                         ; 004a656f
    ADD ESP,0x8                         ; 004a6574
    XOR ECX,ECX                         ; 004a6577
    MOV dword ptr [ESP + 0x2c],EDX      ; 004a6579
    MOV dword ptr [ESP + 0x3c],ECX      ; 004a657d
    MOV dword ptr [ESP + 0x38],ECX      ; 004a6581
    MOV dword ptr [ESP + 0x34],ECX      ; 004a6585
    MOV dword ptr [ESP + 0x30],ECX      ; 004a6589
    MOV dword ptr [ESP + 0x48],EAX      ; 004a658d
    LEA EAX,[ESP + 0x28]                ; 004a6591
    MOV dword ptr [ESP + 0x40],ECX      ; 004a6595
    PUSH EAX                            ; 004a6599
    MOV ECX,dword ptr [0x005f2afc]      ; 004a659a | DAT_005f2afc
    MOV EDX,0x3                         ; 004a65a0
    PUSH ECX                            ; 004a65a5 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x4c],EBX      ; 004a65a6
    MOV dword ptr [ESP + 0x54],EDX      ; 004a65aa
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510 ; 004a65ae
        ;   XREF to: 0046c510 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004a65b3
    PUSH 0x0                            ; 004a65b6
    MOV EBX,dword ptr [0x005f2afc]      ; 004a65b8 | DAT_005f2afc
    PUSH EBX                            ; 004a65be | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 004a65bf
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004a65c4
    MOV EAX,[0x005f2afc]                ; 004a65c7 | DAT_005f2afc
    PUSH EAX                            ; 004a65cc | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 004a65cd
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 004a65d2
    MOV EDX,dword ptr [ESP + 0xdc]      ; 004a65d5
    INC ESI                             ; 004a65dc
    ADD EDX,0x2aaa                      ; 004a65dd
    MOV ECX,dword ptr [ESP + 0x150]     ; 004a65e3
    MOV dword ptr [ESP + 0xdc],EDX      ; 004a65ea
    CMP ESI,ECX                         ; 004a65f1
    JL 0x004a6261                       ; 004a65f3
        ;   XREF to: 004a6261 (CONDITIONAL_JUMP)  ; LAB_004a6261
    MOV EBX,dword ptr [0x005f2afc]      ; 004a65f9 | DAT_005f2afc
        ;   Label: LAB_004a65f9
    PUSH EBX                            ; 004a65ff | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 004a6600
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 004a6605
    MOV ESI,dword ptr [EBP + 0x14]      ; 004a6608
        ;   Label: LAB_004a6608
    PUSH ESI                            ; 004a660b
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 004a660c
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    MOV EDI,dword ptr [ESI + 0x1a8]     ; 004a6611
    ADD ESP,0x4                         ; 004a6617
    CMP EDI,0x1                         ; 004a661a
    JNZ 0x004a69dd                      ; 004a661d
        ;   XREF to: 004a69dd (CONDITIONAL_JUMP)  ; LAB_004a69dd
    FLD float ptr [ESI + 0x15c]         ; 004a6623
    FMUL double ptr [0x005c0be4]        ; 004a6629 | DAT_005c0be4
    MOV EDX,dword ptr [ESI + 0x290]     ; 004a662f
    FSTP float ptr [ESP + 0x14c]        ; 004a6635
    TEST EDX,EDX                        ; 004a663c
    JZ 0x004a69dd                       ; 004a663e
        ;   XREF to: 004a69dd (CONDITIONAL_JUMP)  ; LAB_004a69dd
    MOV ECX,dword ptr [0x005f2afc]      ; 004a6644 | DAT_005f2afc
    PUSH ECX                            ; 004a664a | DAT_01bdd7e4
    LEA ESI,[ESP + 0x108]               ; 004a664b
    LEA EDI,[ESP + 0x144]               ; 004a6652
    CALL engine_matrix.c_FUN_0046d250   ; 004a6659
        ;   XREF to: 0046d250 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046d250()
    ADD ESP,0x4                         ; 004a665e
    LEA ESI,[ESP + 0x104]               ; 004a6661
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a6668
    MOVSD ES:EDI,ESI                    ; 004a666b
    MOVSD ES:EDI,ESI                    ; 004a666c
    MOVSD ES:EDI,ESI                    ; 004a666d
    FLD float ptr [EAX + 0x15c]         ; 004a666e
    FMUL double ptr [0x005c0bec]        ; 004a6674 | DAT_005c0bec
    FSTP float ptr [ESP + 0x158]        ; 004a667a
    MOV EAX,dword ptr [ESP + 0x158]     ; 004a6681
    MOV dword ptr [ESP + 0x9c],EAX      ; 004a6688
    LEA EAX,[ESP + 0x98]                ; 004a668f
    PUSH EAX                            ; 004a6696
    LEA EAX,[ESP + 0x144]               ; 004a6697
    PUSH EAX                            ; 004a669e
    MOV EDI,dword ptr [0x005f2afc]      ; 004a669f | DAT_005f2afc
    XOR EBX,EBX                         ; 004a66a5
    PUSH EDI                            ; 004a66a7 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0xa4],EBX      ; 004a66a8
    MOV dword ptr [ESP + 0xac],EBX      ; 004a66af
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 004a66b6
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004a66bb
    PUSH 0x3f828f5c                     ; 004a66be
    PUSH 0x3f7ae148                     ; 004a66c3
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004a66c8
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x160],EAX     ; 004a66cd
    FLD float ptr [ESP + 0x160]         ; 004a66d4
    ADD ESP,0x8                         ; 004a66db
    FMUL float ptr [ESP + 0x14c]        ; 004a66de
    MOV dword ptr [ESP + 0x88],EBX      ; 004a66e5
    FSTP float ptr [ESP + 0x80]         ; 004a66ec
    MOV EAX,dword ptr [ESP + 0x80]      ; 004a66f3
    LEA EBX,[ESP + 0x11c]               ; 004a66fa
    MOV dword ptr [ESP + 0x84],EAX      ; 004a6701
    LEA EAX,[ESP + 0x80]                ; 004a6708
    MOV EDX,dword ptr [0x005f2afc]      ; 004a670f | DAT_005f2afc
    FLD float ptr [EAX]                 ; 004a6715
    FMUL float ptr [0x005dfe50]         ; 004a6717 | DAT_005dfe50
    FISTP dword ptr [EBX]               ; 004a671d
    FLD float ptr [EAX + 0x4]           ; 004a671f
    FMUL float ptr [0x005dfe50]         ; 004a6722 | DAT_005dfe50
    FISTP dword ptr [EBX + 0x4]         ; 004a6728
    FLD float ptr [EAX + 0x8]           ; 004a672b
    FMUL float ptr [0x005dfe50]         ; 004a672e | DAT_005dfe50
    FISTP dword ptr [EBX + 0x8]         ; 004a6734
    LEA EAX,[ESP + 0x11c]               ; 004a6737
    PUSH EAX                            ; 004a673e
    MOV EAX,dword ptr [EDX]             ; 004a673f | DAT_01bdd7e4
    PUSH EAX                            ; 004a6741
    CALL engine_special.cpp_FUN_005632a3 ; 004a6742
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004a6747
    MOV DL,byte ptr [ESP + 0x83]        ; 004a674a
    LEA EBX,[ESP + 0x134]               ; 004a6751
    XOR DL,0x80                         ; 004a6758
    LEA EAX,[ESP + 0x80]                ; 004a675b
    MOV byte ptr [ESP + 0x83],DL        ; 004a6762
    MOV EDX,dword ptr [0x005f2afc]      ; 004a6769 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 004a676f
    FMUL float ptr [0x005dfe50]         ; 004a6771 | DAT_005dfe50
    FISTP dword ptr [EBX]               ; 004a6777
    FLD float ptr [EAX + 0x4]           ; 004a6779
    FMUL float ptr [0x005dfe50]         ; 004a677c | DAT_005dfe50
    FISTP dword ptr [EBX + 0x4]         ; 004a6782
    FLD float ptr [EAX + 0x8]           ; 004a6785
    FMUL float ptr [0x005dfe50]         ; 004a6788 | DAT_005dfe50
    FISTP dword ptr [EBX + 0x8]         ; 004a678e
    LEA EAX,[ESP + 0x134]               ; 004a6791
    PUSH EAX                            ; 004a6798
    MOV EAX,dword ptr [EDX]             ; 004a6799 | DAT_01bdd7e4
    ADD EAX,0x30                        ; 004a679b
    PUSH EAX                            ; 004a679e
    CALL engine_special.cpp_FUN_005632a3 ; 004a679f
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004a67a4
    MOV DH,byte ptr [ESP + 0x87]        ; 004a67a7
    LEA EBX,[ESP + 0xbc]                ; 004a67ae
    XOR DH,0x80                         ; 004a67b5
    LEA EAX,[ESP + 0x80]                ; 004a67b8
    MOV byte ptr [ESP + 0x87],DH        ; 004a67bf
    MOV EDX,dword ptr [0x005f2afc]      ; 004a67c6 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 004a67cc
    FMUL float ptr [0x005dfe50]         ; 004a67ce | DAT_005dfe50
    FISTP dword ptr [EBX]               ; 004a67d4
    FLD float ptr [EAX + 0x4]           ; 004a67d6
    FMUL float ptr [0x005dfe50]         ; 004a67d9 | DAT_005dfe50
    FISTP dword ptr [EBX + 0x4]         ; 004a67df
    FLD float ptr [EAX + 0x8]           ; 004a67e2
    FMUL float ptr [0x005dfe50]         ; 004a67e5 | DAT_005dfe50
    FISTP dword ptr [EBX + 0x8]         ; 004a67eb
    LEA EAX,[ESP + 0xbc]                ; 004a67ee
    PUSH EAX                            ; 004a67f5
    MOV EAX,dword ptr [EDX]             ; 004a67f6 | DAT_01bdd7e4
    ADD EAX,0x60                        ; 004a67f8
    PUSH EAX                            ; 004a67fb
    CALL engine_special.cpp_FUN_005632a3 ; 004a67fc
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004a6801
    MOV BL,byte ptr [ESP + 0x83]        ; 004a6804
    XOR BL,0x80                         ; 004a680b
    LEA EAX,[ESP + 0x80]                ; 004a680e
    MOV byte ptr [ESP + 0x83],BL        ; 004a6815
    LEA EBX,[ESP + 0xec]                ; 004a681c
    MOV EDX,dword ptr [0x005f2afc]      ; 004a6823 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 004a6829
    FMUL float ptr [0x005dfe50]         ; 004a682b | DAT_005dfe50
    FISTP dword ptr [EBX]               ; 004a6831
    FLD float ptr [EAX + 0x4]           ; 004a6833
    FMUL float ptr [0x005dfe50]         ; 004a6836 | DAT_005dfe50
    FISTP dword ptr [EBX + 0x4]         ; 004a683c
    FLD float ptr [EAX + 0x8]           ; 004a683f
    FMUL float ptr [0x005dfe50]         ; 004a6842 | DAT_005dfe50
    FISTP dword ptr [EBX + 0x8]         ; 004a6848
    LEA EAX,[ESP + 0xec]                ; 004a684b
    PUSH EAX                            ; 004a6852
    MOV EAX,dword ptr [EDX]             ; 004a6853 | DAT_01bdd7e4
    ADD EAX,0x90                        ; 004a6855
    PUSH EAX                            ; 004a685a
    CALL engine_special.cpp_FUN_005632a3 ; 004a685b
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004a6860
    XOR EDX,EDX                         ; 004a6863
    MOV dword ptr [ESP + 0x154],EDX     ; 004a6865
    MOV ECX,dword ptr [0x005f2afc]      ; 004a686c | DAT_005f2afc
        ;   Label: LAB_004a686c
    MOV EBX,dword ptr [ESP + 0x154]     ; 004a6872
    MOV ECX,dword ptr [ECX]             ; 004a6879 | DAT_01bdd7e4
    ADD ECX,EBX                         ; 004a687b
    MOV ESI,dword ptr [ECX + 0x8]       ; 004a687d
    CMP ESI,0x200                       ; 004a6880
    JLE 0x004a68b6                      ; 004a6886
        ;   XREF to: 004a68b6 (CONDITIONAL_JUMP)  ; LAB_004a68b6
    MOV EDI,ESI                         ; 004a6888
    MOV EAX,dword ptr [ECX]             ; 004a688a
    SUB ESI,0x100                       ; 004a688c
    MOV EBX,EDI                         ; 004a6892
    MOV EDX,ESI                         ; 004a6894
    IMUL EDX                            ; 004a6896
    IDIV EBX                            ; 004a6898
    MOV EBX,EDI                         ; 004a689a
    MOV dword ptr [ECX],EAX             ; 004a689c
    MOV EDX,ESI                         ; 004a689e
    MOV EAX,dword ptr [ECX + 0x4]       ; 004a68a0
    IMUL EDX                            ; 004a68a3
    IDIV EBX                            ; 004a68a5
    MOV dword ptr [ECX + 0x4],EAX       ; 004a68a7
    PUSH ECX                            ; 004a68aa
    MOV dword ptr [ECX + 0x8],ESI       ; 004a68ab
    CALL engine_matrix.c_projectTransformedPoint_FUN_004e5590 ; 004a68ae
        ;   XREF to: 004e5590 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_projectTransformedPoint_FUN_004e5590()
    ADD ESP,0x4                         ; 004a68b3
    MOV EDI,dword ptr [ESP + 0x154]     ; 004a68b6
        ;   Label: LAB_004a68b6
    ADD EDI,0x30                        ; 004a68bd
    MOV dword ptr [ESP + 0x154],EDI     ; 004a68c0
    CMP EDI,0xc0                        ; 004a68c7
    JNZ 0x004a686c                      ; 004a68cd
        ;   XREF to: 004a686c (CONDITIONAL_JUMP)  ; LAB_004a686c
    MOV EAX,[0x005f2afc]                ; 004a68cf | DAT_005f2afc
    MOV EDX,dword ptr [EAX]             ; 004a68d4 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x2c],0x4000   ; 004a68d6
    MOV EDX,dword ptr [EAX]             ; 004a68dd | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x5c],0x4000   ; 004a68df
    MOV EDX,dword ptr [EAX]             ; 004a68e6 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x8c],0x4000   ; 004a68e8
    MOV EDX,dword ptr [EAX]             ; 004a68f2 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0xbc],0x4000   ; 004a68f4
    MOV EDX,dword ptr [EAX]             ; 004a68fe | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x18],0x80000  ; 004a6900
    MOV EDX,dword ptr [EAX]             ; 004a6907 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x1c],0xf80000 ; 004a6909
    MOV EDX,dword ptr [EAX]             ; 004a6910 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x48],0xf80000 ; 004a6912
    MOV EDX,dword ptr [EAX]             ; 004a6919 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x4c],0xf80000 ; 004a691b
    MOV EDX,dword ptr [EAX]             ; 004a6922 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x78],0xf80000 ; 004a6924
    MOV EDX,dword ptr [EAX]             ; 004a692b | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x7c],0x80000  ; 004a692d
    MOV EDX,dword ptr [EAX]             ; 004a6934 | DAT_01bdd7e4
    MOV EBX,0x2                         ; 004a6936
    MOV ESI,0x3                         ; 004a693b
    MOV dword ptr [EDX + 0xa8],0x80000  ; 004a6940
    PUSH 0x5fde70                       ; 004a694a | DAT_005fde70
    MOV EDX,dword ptr [EAX]             ; 004a694f | DAT_01bdd7e4
    XOR ECX,ECX                         ; 004a6951
    PUSH EAX                            ; 004a6953 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0xac],0x80000  ; 004a6954
    MOV EDX,0x4                         ; 004a695e
    MOV dword ptr [ESP + 0x1c],ECX      ; 004a6963
    MOV dword ptr [ESP + 0x18],ECX      ; 004a6967
    MOV dword ptr [ESP + 0x14],ECX      ; 004a696b
    MOV dword ptr [ESP + 0x10],ECX      ; 004a696f
    MOV dword ptr [ESP + 0x20],ECX      ; 004a6973
    MOV dword ptr [ESP + 0x28],EBX      ; 004a6977
    MOV dword ptr [ESP + 0x2c],ESI      ; 004a697b
    MOV ECX,0x1                         ; 004a697f
    MOV dword ptr [ESP + 0xc],EDX       ; 004a6984
    MOV dword ptr [ESP + 0x24],ECX      ; 004a6988
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004a698c
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004a6991
    PUSH 0x1                            ; 004a6994
    MOV EDI,dword ptr [0x005f2afc]      ; 004a6996 | DAT_005f2afc
    PUSH EDI                            ; 004a699c | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 004a699d
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004a69a2
    PUSH 0x163                          ; 004a69a5
    LEA EAX,[ESP + 0x4]                 ; 004a69aa
    PUSH EAX                            ; 004a69ae
    MOV EAX,[0x005f2afc]                ; 004a69af | DAT_005f2afc
    PUSH EAX                            ; 004a69b4 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850 ; 004a69b5
        ;   XREF to: 0046b850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 004a69ba
    PUSH 0x0                            ; 004a69bd
    MOV EDX,dword ptr [0x005f2afc]      ; 004a69bf | DAT_005f2afc
    PUSH EDX                            ; 004a69c5 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 004a69c6
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004a69cb
    MOV ECX,dword ptr [0x005f2afc]      ; 004a69ce | DAT_005f2afc
    PUSH ECX                            ; 004a69d4 | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 004a69d5
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 004a69da
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a69dd
        ;   Label: LAB_004a69dd
    MOV EAX,dword ptr [EAX + 0x290]     ; 004a69e0
    MOV ESP,EBP                         ; 004a69e6
    POP EBP                             ; 004a69e8
    POP EDI                             ; 004a69e9
    POP ESI                             ; 004a69ea
    POP EBX                             ; 004a69eb
    RET                                 ; 004a69ec
    CMP EBX,0xffffe000                  ; 004a69ed
        ;   Label: LAB_004a69ed
    JL 0x004a623f                       ; 004a69f3
        ;   XREF to: 004a623f (CONDITIONAL_JUMP)  ; LAB_004a623f
    JMP 0x004a624a                      ; 004a69f9
        ;   XREF to: 004a624a (UNCONDITIONAL_JUMP)  ; LAB_004a624a
    MOV EAX,0xf80000                    ; 004a69fe
        ;   Label: LAB_004a69fe
    MOV EBX,0x80000                     ; 004a6a03
    MOV [0x0060b030],EAX                ; 004a6a08 | DAT_0060b030
    MOV [0x0060b05c],EAX                ; 004a6a0d | DAT_0060b05c
    MOV dword ptr [0x0060b060],EBX      ; 004a6a12 | DAT_0060b060
    MOV dword ptr [0x0060b08c],EBX      ; 004a6a18 | DAT_0060b08c
    MOV dword ptr [0x0060b090],EBX      ; 004a6a1e | DAT_0060b090
    MOV dword ptr [0x0060b0bc],EBX      ; 004a6a24 | DAT_0060b0bc
    MOV [0x0060b0c0],EAX                ; 004a6a2a | DAT_0060b0c0
    JMP 0x004a6502                      ; 004a6a2f
        ;   XREF to: 004a6502 (UNCONDITIONAL_JUMP)  ; LAB_004a6502

