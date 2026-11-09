; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_FUN_0053f080(SRenderVertex *vertices,int vertex_count)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_clipper.c_clipPolygonToViewport_FUN_0043de60 at 0043e015
;
; Referenced Globals:
;   void* switchdataD_0053f058 = 0053f190
;   undefined4 DAT_0061b4c0
;   undefined4 DAT_00713a74
;   undefined4 DAT_00713a7c
;   undefined4 DAT_01c4eff8
;   undefined4 DAT_01c4effc
;   undefined4 DAT_01c4f000
;   undefined4 DAT_01c4f004
;   undefined4 DAT_01c50948
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;   undefined4 DAT_01e7dac8
;   undefined4 DAT_01e7dacc
;   undefined4 DAT_01e7dad0
;   undefined4 DAT_01e7db20
;   ... and 2 more
;
; Called Functions:
;   engine_prim.c_adjustNearPlaneTextureCoords_FUN_0053dcb0
;   engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60
;   engine_prim.c_normalizeTextureCoords_FUN_0053dc30
;   engine_prim.c_prepareDepthBuffer_FUN_0053dbc0
;   engine_prim.c_replaceWWithDepth_FUN_0053dd20
;   engine_special.cpp_drawPolygon_FUN_00582340
;   engine_special.cpp_FUN_00580127
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053f080
        ;   Label: engine_prim.c_FUN_0053f080
    PUSH ESI                            ; 0053f081
    PUSH EDI                            ; 0053f082
    PUSH EBP                            ; 0053f083
    SUB ESP,0x14                        ; 0053f084
    CMP dword ptr [0x0061b4c0],0x0      ; 0053f087 | DAT_0061b4c0
    JZ 0x0053f0f7                       ; 0053f08e
        ;   XREF to: 0053f0f7 (CONDITIONAL_JUMP)  ; LAB_0053f0f7
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0053f090
    MOV ECX,dword ptr [ESP + 0x28]      ; 0053f094
    XOR ESI,ESI                         ; 0053f098
    TEST EBX,EBX                        ; 0053f09a
    JLE 0x0053f0f7                      ; 0053f09c
        ;   XREF to: 0053f0f7 (CONDITIONAL_JUMP)  ; LAB_0053f0f7
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0053f09e
    TEST byte ptr [ECX + 0x13],0x80     ; 0053f0a2
        ;   Label: LAB_0053f0a2
    JZ 0x0053f0ef                       ; 0053f0a6
        ;   XREF to: 0053f0ef (CONDITIONAL_JUMP)  ; LAB_0053f0ef
    MOV EAX,0x7fffffff                  ; 0053f0a8
    MOV EDX,EAX                         ; 0053f0ad
    MOV EBX,dword ptr [ECX + 0x8]       ; 0053f0af
    SAR EDX,0x1f                        ; 0053f0b2
    IDIV EBX                            ; 0053f0b5
    MOV dword ptr [ECX + 0xc],EAX       ; 0053f0b7
    MOV EDX,dword ptr [0x01c4eff8]      ; 0053f0ba | DAT_01c4eff8
    MOV EBX,dword ptr [ECX + 0x8]       ; 0053f0c0
    MOV EAX,dword ptr [ECX]             ; 0053f0c3
    IMUL EDX                            ; 0053f0c5
    IDIV EBX                            ; 0053f0c7
    MOV EDX,dword ptr [0x01c4f000]      ; 0053f0c9 | DAT_01c4f000
    ADD EAX,EDX                         ; 0053f0cf
    MOV EBX,dword ptr [ECX + 0x8]       ; 0053f0d1
    MOV dword ptr [ECX + 0x10],EAX      ; 0053f0d4
    MOV EDX,dword ptr [0x01c4effc]      ; 0053f0d7 | DAT_01c4effc
    MOV EAX,dword ptr [ECX + 0x4]       ; 0053f0dd
    IMUL EDX                            ; 0053f0e0
    IDIV EBX                            ; 0053f0e2
    MOV EDX,dword ptr [0x01c4f004]      ; 0053f0e4 | DAT_01c4f004
    ADD EAX,EDX                         ; 0053f0ea
    MOV dword ptr [ECX + 0x14],EAX      ; 0053f0ec
    INC ESI                             ; 0053f0ef
        ;   Label: LAB_0053f0ef
    ADD ECX,0x30                        ; 0053f0f0
    CMP ESI,EDI                         ; 0053f0f3
    JL 0x0053f0a2                       ; 0053f0f5
        ;   XREF to: 0053f0a2 (CONDITIONAL_JUMP)  ; LAB_0053f0a2
    CMP dword ptr [0x00713a7c],0x0      ; 0053f0f7 | DAT_00713a7c
        ;   Label: LAB_0053f0f7
    JZ 0x0053f15c                       ; 0053f0fe
        ;   XREF to: 0053f15c (CONDITIONAL_JUMP)  ; LAB_0053f15c
    MOV EAX,dword ptr [ESP + 0x28]      ; 0053f100
    MOV EBX,dword ptr [ESP + 0x28]      ; 0053f104
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0053f108
    ADD EAX,0x30                        ; 0053f10c
    ADD EBX,0x60                        ; 0053f10f
    CMP EDX,0x3                         ; 0053f112
    JLE 0x0053f328                      ; 0053f115
        ;   XREF to: 0053f328 (CONDITIONAL_JUMP)  ; LAB_0053f328
    SUB EDX,0x2                         ; 0053f11b
    MOV EDI,EAX                         ; 0053f11e
    XOR ESI,ESI                         ; 0053f120
    XOR EBP,EBP                         ; 0053f122
    MOV dword ptr [ESP + 0x4],EDX       ; 0053f124
    TEST EDX,EDX                        ; 0053f128
    JLE 0x0053f152                      ; 0053f12a
        ;   XREF to: 0053f152 (CONDITIONAL_JUMP)  ; LAB_0053f152
    PUSH EBX                            ; 0053f12c
        ;   Label: LAB_0053f12c
    PUSH EDI                            ; 0053f12d
    MOV EAX,dword ptr [ESP + 0x30]      ; 0053f12e
    PUSH EAX                            ; 0053f132
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60 ; 0053f133
        ;   XREF to: 0053dd60 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60()
    ADD ESP,0xc                         ; 0053f138
    TEST EAX,EAX                        ; 0053f13b
    JZ 0x0053f322                       ; 0053f13d
        ;   XREF to: 0053f322 (CONDITIONAL_JUMP)  ; LAB_0053f322
    MOV EDX,dword ptr [ESP + 0x4]       ; 0053f143
        ;   Label: LAB_0053f143
    ADD EDI,0x30                        ; 0053f147
    INC ESI                             ; 0053f14a
    ADD EBX,0x30                        ; 0053f14b
    CMP ESI,EDX                         ; 0053f14e
    JL 0x0053f12c                       ; 0053f150
        ;   XREF to: 0053f12c (CONDITIONAL_JUMP)  ; LAB_0053f12c
    CMP EBP,dword ptr [ESP + 0x4]       ; 0053f152
        ;   Label: LAB_0053f152
    JZ 0x0053f31a                       ; 0053f156
        ;   XREF to: 0053f31a (CONDITIONAL_JUMP)  ; LAB_0053f31a
    CMP dword ptr [0x01c50948],0x0      ; 0053f15c | DAT_01c50948
        ;   Label: LAB_0053f15c
    JZ 0x0053f172                       ; 0053f163
        ;   XREF to: 0053f172 (CONDITIONAL_JUMP)  ; LAB_0053f172
    CMP dword ptr [0x00713a74],0x0      ; 0053f165 | DAT_00713a74
    JZ 0x0053f347                       ; 0053f16c
        ;   XREF to: 0053f347 (CONDITIONAL_JUMP)  ; LAB_0053f347
    MOV EBX,dword ptr [0x01e7dac8]      ; 0053f172 | DAT_01e7dac8
        ;   Label: LAB_0053f172
    INC EBX                             ; 0053f178
    MOV EAX,[0x01c51d18]                ; 0053f179 | DAT_01c51d18
    MOV dword ptr [0x01e7dac8],EBX      ; 0053f17e | DAT_01e7dac8
    CMP EAX,0x6                         ; 0053f184
    JA 0x0053f190                       ; 0053f187
        ;   XREF to: 0053f190 (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EAX*0x4 + 0x53f058]  ; 0053f189 | caseD_4 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x4b0                       ; 0053f190
        ;   Label: caseD_0
    XOR EDX,EDX                         ; 0053f195
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0053f197
    MOV dword ptr [0x01e7dfd4],EDX      ; 0053f19b | DAT_01e7dfd4
    MOV dword ptr [0x01e7dacc],EDX      ; 0053f1a1 | DAT_01e7dacc
    MOV dword ptr [ESP + 0x8],EDX       ; 0053f1a7
    MOV [0x01e7dfd0],EAX                ; 0053f1ab | DAT_01e7dfd0
    TEST ESI,ESI                        ; 0053f1b0
    JLE 0x0053f1fe                      ; 0053f1b2
        ;   XREF to: 0053f1fe (CONDITIONAL_JUMP)  ; LAB_0053f1fe
    MOV EAX,dword ptr [ESP + 0x8]       ; 0053f1b4
        ;   Label: LAB_0053f1b4
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0053f1b8
    INC EAX                             ; 0053f1bc
    CMP EAX,EDI                         ; 0053f1bd
    JL 0x0053f1c3                       ; 0053f1bf
        ;   XREF to: 0053f1c3 (CONDITIONAL_JUMP)  ; LAB_0053f1c3
    XOR EAX,EAX                         ; 0053f1c1
    IMUL EAX,EAX,0x30                   ; 0053f1c3
        ;   Label: LAB_0053f1c3
    IMUL ESI,dword ptr [ESP + 0x8],0x30 ; 0053f1c6
    MOV ECX,dword ptr [ESP + 0x28]      ; 0053f1cb
    ADD ECX,EAX                         ; 0053f1cf
    ADD ESI,dword ptr [ESP + 0x28]      ; 0053f1d1
    MOV EDI,ECX                         ; 0053f1d5
    MOV EDX,dword ptr [ESI + 0x14]      ; 0053f1d7
    MOV EAX,dword ptr [ECX + 0x14]      ; 0053f1da
    SAR EDX,0x10                        ; 0053f1dd
    SAR EAX,0x10                        ; 0053f1e0
    MOV EBX,ESI                         ; 0053f1e3
    CMP EDX,EAX                         ; 0053f1e5
    JNZ 0x0053f3ec                      ; 0053f1e7
        ;   XREF to: 0053f3ec (CONDITIONAL_JUMP)  ; LAB_0053f3ec
    MOV ECX,dword ptr [ESP + 0x8]       ; 0053f1ed
        ;   Label: LAB_0053f1ed
    INC ECX                             ; 0053f1f1
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0053f1f2
    MOV dword ptr [ESP + 0x8],ECX       ; 0053f1f6
    CMP ECX,EBX                         ; 0053f1fa
    JL 0x0053f1b4                       ; 0053f1fc
        ;   XREF to: 0053f1b4 (CONDITIONAL_JUMP)  ; LAB_0053f1b4
    MOV EAX,0x1e7dad0                   ; 0053f1fe
        ;   Label: LAB_0053f1fe
    MOV ESI,dword ptr [0x01e7dacc]      ; 0053f203 | DAT_01e7dacc
    MOV EBX,dword ptr [0x01e7dfd0]      ; 0053f209 | DAT_01e7dfd0
    XOR ECX,ECX                         ; 0053f20f
    TEST ESI,ESI                        ; 0053f211
    JLE 0x0053f5da                      ; 0053f213
        ;   XREF to: 0053f5da (CONDITIONAL_JUMP)  ; LAB_0053f5da
    MOV EDX,dword ptr [0x01e7dacc]      ; 0053f219 | DAT_01e7dacc
    CMP EBX,dword ptr [EAX]             ; 0053f21f | DAT_01e7dad0 | DAT_01e7db20
        ;   Label: LAB_0053f21f
    JNZ 0x0053f5ce                      ; 0053f221
        ;   XREF to: 0053f5ce (CONDITIONAL_JUMP)  ; LAB_0053f5ce
    TEST EAX,EAX                        ; 0053f227
    JZ 0x0053f5ce                       ; 0053f229
        ;   XREF to: 0053f5ce (CONDITIONAL_JUMP)  ; LAB_0053f5ce
    MOV EBP,EAX                         ; 0053f22f
        ;   Label: LAB_0053f22f
    TEST EAX,EAX                        ; 0053f231
    JZ 0x0053f31a                       ; 0053f233
        ;   XREF to: 0053f31a (CONDITIONAL_JUMP)  ; LAB_0053f31a
    MOV EDI,dword ptr [0x01e7dacc]      ; 0053f239 | DAT_01e7dacc
    MOV EBX,dword ptr [0x01e7dfd0]      ; 0053f23f | DAT_01e7dfd0
    MOV ECX,EAX                         ; 0053f245
    XOR EDX,EDX                         ; 0053f247
    MOV EAX,0x1e7dad0                   ; 0053f249
    TEST EDI,EDI                        ; 0053f24e
    JLE 0x0053f5ed                      ; 0053f250
        ;   XREF to: 0053f5ed (CONDITIONAL_JUMP)  ; LAB_0053f5ed
    MOV ESI,dword ptr [0x01e7dacc]      ; 0053f256 | DAT_01e7dacc
    CMP EBX,dword ptr [EAX]             ; 0053f25c | DAT_01e7dad0 | DAT_01e7db20
        ;   Label: LAB_0053f25c
    JNZ 0x0053f5e1                      ; 0053f25e
        ;   XREF to: 0053f5e1 (CONDITIONAL_JUMP)  ; LAB_0053f5e1
    CMP EAX,ECX                         ; 0053f264
    JZ 0x0053f5e1                       ; 0053f266
        ;   XREF to: 0053f5e1 (CONDITIONAL_JUMP)  ; LAB_0053f5e1
    MOV dword ptr [ESP + 0x10],EAX      ; 0053f26c | DAT_01e7dad0 | DAT_01e7db20
        ;   Label: LAB_0053f26c
    TEST EAX,EAX                        ; 0053f270
    JZ 0x0053f31a                       ; 0053f272
        ;   XREF to: 0053f31a (CONDITIONAL_JUMP)  ; LAB_0053f31a
    MOV EAX,[0x01e7dfd0]                ; 0053f278 | DAT_01e7dfd0
    MOV dword ptr [ESP + 0xc],EAX       ; 0053f27d
    MOV EAX,dword ptr [ESP + 0xc]       ; 0053f281
        ;   Label: LAB_0053f281
    CMP EAX,dword ptr [EBP + 0x4]       ; 0053f285
    JL 0x0053f2c8                       ; 0053f288
        ;   XREF to: 0053f2c8 (CONDITIONAL_JUMP)  ; LAB_0053f2c8
    MOV EBX,dword ptr [ESP + 0x10]      ; 0053f28a
    MOV ESI,dword ptr [0x01e7dacc]      ; 0053f28e | DAT_01e7dacc
    MOV ECX,EAX                         ; 0053f294
    MOV dword ptr [EBP],0xffffffff      ; 0053f296
    XOR EDX,EDX                         ; 0053f29d
    MOV EAX,0x1e7dad0                   ; 0053f29f
    TEST ESI,ESI                        ; 0053f2a4
    JLE 0x0053f600                      ; 0053f2a6
        ;   XREF to: 0053f600 (CONDITIONAL_JUMP)  ; LAB_0053f600
    MOV EDI,dword ptr [0x01e7dacc]      ; 0053f2ac | DAT_01e7dacc
    CMP ECX,dword ptr [EAX]             ; 0053f2b2 | DAT_01e7dad0 | DAT_01e7db20
        ;   Label: LAB_0053f2b2
    JNZ 0x0053f5f4                      ; 0053f2b4
        ;   XREF to: 0053f5f4 (CONDITIONAL_JUMP)  ; LAB_0053f5f4
    CMP EAX,EBX                         ; 0053f2ba
    JZ 0x0053f5f4                       ; 0053f2bc
        ;   XREF to: 0053f5f4 (CONDITIONAL_JUMP)  ; LAB_0053f5f4
    MOV EBP,EAX                         ; 0053f2c2
        ;   Label: LAB_0053f2c2
    TEST EAX,EAX                        ; 0053f2c4
    JZ 0x0053f31a                       ; 0053f2c6
        ;   XREF to: 0053f31a (CONDITIONAL_JUMP)  ; LAB_0053f31a
    MOV EDX,dword ptr [ESP + 0x10]      ; 0053f2c8
        ;   Label: LAB_0053f2c8
    MOV EAX,dword ptr [ESP + 0xc]       ; 0053f2cc
    CMP EAX,dword ptr [EDX + 0x4]       ; 0053f2d0
    JL 0x0053f625                       ; 0053f2d3
        ;   XREF to: 0053f625 (CONDITIONAL_JUMP)  ; LAB_0053f625
    MOV ESI,dword ptr [0x01e7dacc]      ; 0053f2d9 | DAT_01e7dacc
    MOV EBX,EAX                         ; 0053f2df
    MOV ECX,EBP                         ; 0053f2e1
    MOV dword ptr [EDX],0xffffffff      ; 0053f2e3
    MOV EAX,0x1e7dad0                   ; 0053f2e9
    XOR EDX,EDX                         ; 0053f2ee
    TEST ESI,ESI                        ; 0053f2f0
    JLE 0x0053f613                      ; 0053f2f2
        ;   XREF to: 0053f613 (CONDITIONAL_JUMP)  ; LAB_0053f613
    MOV EDI,dword ptr [0x01e7dacc]      ; 0053f2f8 | DAT_01e7dacc
    CMP EBX,dword ptr [EAX]             ; 0053f2fe | DAT_01e7dad0 | DAT_01e7db20
        ;   Label: LAB_0053f2fe
    JNZ 0x0053f607                      ; 0053f300
        ;   XREF to: 0053f607 (CONDITIONAL_JUMP)  ; LAB_0053f607
    CMP EAX,ECX                         ; 0053f306
    JZ 0x0053f607                       ; 0053f308
        ;   XREF to: 0053f607 (CONDITIONAL_JUMP)  ; LAB_0053f607
    MOV dword ptr [ESP + 0x10],EAX      ; 0053f30e | DAT_01e7db20 | DAT_01e7dad0
    TEST EAX,EAX                        ; 0053f312
    JNZ 0x0053f625                      ; 0053f314
        ;   XREF to: 0053f625 (CONDITIONAL_JUMP)  ; LAB_0053f625
    ADD ESP,0x14                        ; 0053f31a
        ;   Label: LAB_0053f31a
    POP EBP                             ; 0053f31d
    POP EDI                             ; 0053f31e
    POP ESI                             ; 0053f31f
    POP EBX                             ; 0053f320
    RET                                 ; 0053f321
    INC EBP                             ; 0053f322
        ;   Label: LAB_0053f322
    JMP 0x0053f143                      ; 0053f323
        ;   XREF to: 0053f143 (UNCONDITIONAL_JUMP)  ; LAB_0053f143
    PUSH EBX                            ; 0053f328
        ;   Label: LAB_0053f328
    PUSH EAX                            ; 0053f329
    MOV ECX,dword ptr [ESP + 0x30]      ; 0053f32a
    PUSH ECX                            ; 0053f32e
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60 ; 0053f32f
        ;   XREF to: 0053dd60 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60()
    ADD ESP,0xc                         ; 0053f334
    TEST EAX,EAX                        ; 0053f337
    JNZ 0x0053f15c                      ; 0053f339
        ;   XREF to: 0053f15c (CONDITIONAL_JUMP)  ; LAB_0053f15c
    ADD ESP,0x14                        ; 0053f33f
    POP EBP                             ; 0053f342
    POP EDI                             ; 0053f343
    POP ESI                             ; 0053f344
    POP EBX                             ; 0053f345
    RET                                 ; 0053f346
    MOV EDI,dword ptr [0x01c51d14]      ; 0053f347 | DAT_01c51d14
        ;   Label: LAB_0053f347
    PUSH EDI                            ; 0053f34d
    MOV EBP,dword ptr [ESP + 0x30]      ; 0053f34e
    PUSH EBP                            ; 0053f352
    MOV EAX,dword ptr [ESP + 0x30]      ; 0053f353
    PUSH EAX                            ; 0053f357
    CALL engine_special.cpp_drawPolygon_FUN_00582340 ; 0053f358
        ;   XREF to: 00582340 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_drawPolygon_FUN_00582340()
    MOV EDX,dword ptr [0x01e7dac8]      ; 0053f35d | DAT_01e7dac8
    LEA EAX,[EBP + -0x2]                ; 0053f363
    ADD EDX,EAX                         ; 0053f366
    ADD ESP,0xc                         ; 0053f368
    MOV dword ptr [0x01e7dac8],EDX      ; 0053f36b | DAT_01e7dac8
    ADD ESP,0x14                        ; 0053f371
    POP EBP                             ; 0053f374
    POP EDI                             ; 0053f375
    POP ESI                             ; 0053f376
    POP EBX                             ; 0053f377
    RET                                 ; 0053f378
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0053f379
        ;   Label: caseD_1
    PUSH EDI                            ; 0053f37d
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0053f37e
    PUSH EBP                            ; 0053f382
    CALL engine_prim.c_prepareDepthBuffer_FUN_0053dbc0 ; 0053f383
        ;   XREF to: 0053dbc0 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_prepareDepthBuffer_FUN_0053dbc0()
    ADD ESP,0x8                         ; 0053f388
    JMP 0x0053f190                      ; 0053f38b
        ;   XREF to: 0053f190 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0053f390
        ;   Label: caseD_2
    PUSH EBX                            ; 0053f394
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0053f395
    PUSH ESI                            ; 0053f399
    CALL engine_prim.c_normalizeTextureCoords_FUN_0053dc30 ; 0053f39a
        ;   XREF to: 0053dc30 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_normalizeTextureCoords_FUN_0053dc30()
    ADD ESP,0x8                         ; 0053f39f
    JMP 0x0053f190                      ; 0053f3a2
        ;   XREF to: 0053f190 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0053f3a7
        ;   Label: caseD_3
    PUSH EDX                            ; 0053f3ab
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0053f3ac
    PUSH ECX                            ; 0053f3b0
    CALL engine_prim.c_adjustNearPlaneTextureCoords_FUN_0053dcb0 ; 0053f3b1
        ;   XREF to: 0053dcb0 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_adjustNearPlaneTextureCoords_FUN_0053dcb0()
    ADD ESP,0x8                         ; 0053f3b6
    JMP 0x0053f190                      ; 0053f3b9
        ;   XREF to: 0053f190 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0053f3be
        ;   Label: caseD_5
    PUSH EBP                            ; 0053f3c2
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0053f3c3
    PUSH EAX                            ; 0053f3c7
    CALL engine_prim.c_normalizeTextureCoords_FUN_0053dc30 ; 0053f3c8
        ;   XREF to: 0053dc30 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_normalizeTextureCoords_FUN_0053dc30()
    ADD ESP,0x8                         ; 0053f3cd
    JMP 0x0053f190                      ; 0053f3d0
        ;   XREF to: 0053f190 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0053f3d5
        ;   Label: caseD_6
    PUSH ESI                            ; 0053f3d9
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0053f3da
    PUSH EDI                            ; 0053f3de
    CALL engine_prim.c_replaceWWithDepth_FUN_0053dd20 ; 0053f3df
        ;   XREF to: 0053dd20 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_replaceWWithDepth_FUN_0053dd20()
    ADD ESP,0x8                         ; 0053f3e4
    JMP 0x0053f190                      ; 0053f3e7
        ;   XREF to: 0053f190 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBP,dword ptr [ESI + 0x14]      ; 0053f3ec
        ;   Label: LAB_0053f3ec
    CMP EBP,dword ptr [ECX + 0x14]      ; 0053f3ef
    JLE 0x0053f3fe                      ; 0053f3f2
        ;   XREF to: 0053f3fe (CONDITIONAL_JUMP)  ; LAB_0053f3fe
    MOV EBX,ECX                         ; 0053f3f4
    MOV EDI,ESI                         ; 0053f3f6
    MOV ECX,EDX                         ; 0053f3f8
    MOV EDX,EAX                         ; 0053f3fa
    MOV EAX,ECX                         ; 0053f3fc
    IMUL EBP,dword ptr [0x01e7dacc],0x50 ; 0053f3fe | DAT_01e7dacc
        ;   Label: LAB_0053f3fe
    ADD EBP,0x1e7dad0                   ; 0053f405
    MOV dword ptr [EBP],EDX             ; 0053f40b | DAT_01e7dad0
    MOV ESI,dword ptr [0x01e7dfd0]      ; 0053f40e | DAT_01e7dfd0
    MOV dword ptr [EBP + 0x4],EAX       ; 0053f414
    CMP EDX,ESI                         ; 0053f417
    JGE 0x0053f421                      ; 0053f419
        ;   XREF to: 0053f421 (CONDITIONAL_JUMP)  ; LAB_0053f421
    MOV dword ptr [0x01e7dfd0],EDX      ; 0053f41b | DAT_01e7dfd0
    CMP EAX,dword ptr [0x01e7dfd4]      ; 0053f421 | DAT_01e7dfd4
        ;   Label: LAB_0053f421
    JLE 0x0053f42e                      ; 0053f427
        ;   XREF to: 0053f42e (CONDITIONAL_JUMP)  ; LAB_0053f42e
    MOV [0x01e7dfd4],EAX                ; 0053f429 | DAT_01e7dfd4
    MOV ESI,dword ptr [EBX + 0x14]      ; 0053f42e
        ;   Label: LAB_0053f42e
    MOV ECX,dword ptr [EDI + 0x14]      ; 0053f431
    SUB ECX,ESI                         ; 0053f434
    CMP ECX,0x10000                     ; 0053f436
    JNC 0x0053f5be                      ; 0053f43c
        ;   XREF to: 0053f5be (CONDITIONAL_JUMP)  ; LAB_0053f5be
    XOR ECX,ECX                         ; 0053f442
    MOV EAX,dword ptr [EDI + 0x10]      ; 0053f444
        ;   Label: LAB_0053f444
    MOV EDX,dword ptr [EBX + 0x10]      ; 0053f447
    MOV ESI,dword ptr [EBX + 0x14]      ; 0053f44a
    SUB EAX,EDX                         ; 0053f44d
    AND ESI,0xffff                      ; 0053f44f
    MOV EDX,EAX                         ; 0053f455
    MOV EAX,ECX                         ; 0053f457
    XOR SI,0xffff                       ; 0053f459
    IMUL EDX                            ; 0053f45d
    SHRD EAX,EDX,0x10                   ; 0053f45f
    MOV EDX,EAX                         ; 0053f463
    MOV dword ptr [EBP + 0xc],EAX       ; 0053f465
    MOV EAX,ESI                         ; 0053f468
    IMUL EDX                            ; 0053f46a
    SHRD EAX,EDX,0x10                   ; 0053f46c
    MOV dword ptr [ESP],EAX             ; 0053f470
    MOV EDX,dword ptr [ESP]             ; 0053f473
    MOV EAX,dword ptr [EBX + 0x10]      ; 0053f476
    ADD EAX,EDX                         ; 0053f479
    MOV dword ptr [EBP + 0x8],EAX       ; 0053f47b
    MOV EAX,dword ptr [EDI + 0x18]      ; 0053f47e
    MOV EDX,dword ptr [EBX + 0x18]      ; 0053f481
    SUB EAX,EDX                         ; 0053f484
    MOV EDX,EAX                         ; 0053f486
    MOV EAX,ECX                         ; 0053f488
    IMUL EDX                            ; 0053f48a
    SHRD EAX,EDX,0x10                   ; 0053f48c
    MOV EDX,EAX                         ; 0053f490
    MOV dword ptr [EBP + 0x1c],EAX      ; 0053f492
    MOV EAX,ESI                         ; 0053f495
    IMUL EDX                            ; 0053f497
    SHRD EAX,EDX,0x10                   ; 0053f499
    MOV dword ptr [ESP],EAX             ; 0053f49d
    MOV EDX,dword ptr [ESP]             ; 0053f4a0
    MOV EAX,dword ptr [EBX + 0x18]      ; 0053f4a3
    ADD EAX,EDX                         ; 0053f4a6
    MOV dword ptr [EBP + 0x18],EAX      ; 0053f4a8
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0053f4ab
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0053f4ae
    SUB EAX,EDX                         ; 0053f4b1
    MOV EDX,EAX                         ; 0053f4b3
    MOV EAX,ECX                         ; 0053f4b5
    IMUL EDX                            ; 0053f4b7
    SHRD EAX,EDX,0x10                   ; 0053f4b9
    MOV EDX,EAX                         ; 0053f4bd
    MOV dword ptr [EBP + 0x24],EAX      ; 0053f4bf
    MOV EAX,ESI                         ; 0053f4c2
    IMUL EDX                            ; 0053f4c4
    SHRD EAX,EDX,0x10                   ; 0053f4c6
    MOV dword ptr [ESP],EAX             ; 0053f4ca
    MOV EDX,dword ptr [ESP]             ; 0053f4cd
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0053f4d0
    ADD EAX,EDX                         ; 0053f4d3
    MOV dword ptr [EBP + 0x20],EAX      ; 0053f4d5
    MOV EAX,dword ptr [EDI + 0x20]      ; 0053f4d8
    MOV EDX,dword ptr [EBX + 0x20]      ; 0053f4db
    SUB EAX,EDX                         ; 0053f4de
    MOV EDX,EAX                         ; 0053f4e0
    MOV EAX,ECX                         ; 0053f4e2
    IMUL EDX                            ; 0053f4e4
    SHRD EAX,EDX,0x10                   ; 0053f4e6
    MOV EDX,EAX                         ; 0053f4ea
    MOV dword ptr [EBP + 0x14],EAX      ; 0053f4ec
    MOV EAX,ESI                         ; 0053f4ef
    IMUL EDX                            ; 0053f4f1
    SHRD EAX,EDX,0x10                   ; 0053f4f3
    MOV dword ptr [ESP],EAX             ; 0053f4f7
    MOV EDX,dword ptr [ESP]             ; 0053f4fa
    MOV EAX,dword ptr [EBX + 0x20]      ; 0053f4fd
    ADD EAX,EDX                         ; 0053f500
    MOV dword ptr [EBP + 0x10],EAX      ; 0053f502
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0053f505
    MOV EDX,dword ptr [EBX + 0x2c]      ; 0053f508
    SUB EAX,EDX                         ; 0053f50b
    MOV EDX,EAX                         ; 0053f50d
    MOV EAX,ECX                         ; 0053f50f
    IMUL EDX                            ; 0053f511
    SHRD EAX,EDX,0x10                   ; 0053f513
    MOV EDX,EAX                         ; 0053f517
    MOV dword ptr [EBP + 0x34],EAX      ; 0053f519
    MOV EAX,ESI                         ; 0053f51c
    IMUL EDX                            ; 0053f51e
    SHRD EAX,EDX,0x10                   ; 0053f520
    MOV dword ptr [ESP],EAX             ; 0053f524
    MOV EDX,dword ptr [ESP]             ; 0053f527
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0053f52a
    ADD EAX,EDX                         ; 0053f52d
    MOV dword ptr [EBP + 0x30],EAX      ; 0053f52f
    MOV EAX,dword ptr [EDI + 0x8]       ; 0053f532
    MOV EDX,dword ptr [EBX + 0x8]       ; 0053f535
    SUB EAX,EDX                         ; 0053f538
    MOV EDX,EAX                         ; 0053f53a
    MOV EAX,ECX                         ; 0053f53c
    IMUL EDX                            ; 0053f53e
    SHRD EAX,EDX,0x10                   ; 0053f540
    MOV EDX,EAX                         ; 0053f544
    MOV dword ptr [EBP + 0x2c],EAX      ; 0053f546
    MOV EAX,ESI                         ; 0053f549
    IMUL EDX                            ; 0053f54b
    SHRD EAX,EDX,0x10                   ; 0053f54d
    MOV dword ptr [ESP],EAX             ; 0053f551
    MOV EDX,dword ptr [ESP]             ; 0053f554
    MOV EAX,dword ptr [EBX + 0x8]       ; 0053f557
    ADD EAX,EDX                         ; 0053f55a
    MOV dword ptr [EBP + 0x28],EAX      ; 0053f55c
    MOV EAX,dword ptr [EDI + 0x24]      ; 0053f55f
    MOV EDX,dword ptr [EBX + 0x24]      ; 0053f562
    SUB EAX,EDX                         ; 0053f565
    MOV EDX,EAX                         ; 0053f567
    MOV EAX,ECX                         ; 0053f569
    IMUL EDX                            ; 0053f56b
    SHRD EAX,EDX,0x10                   ; 0053f56d
    MOV EDX,EAX                         ; 0053f571
    MOV dword ptr [EBP + 0x3c],EAX      ; 0053f573
    MOV EAX,ESI                         ; 0053f576
    IMUL EDX                            ; 0053f578
    SHRD EAX,EDX,0x10                   ; 0053f57a
    MOV dword ptr [ESP],EAX             ; 0053f57e
    MOV EDX,dword ptr [ESP]             ; 0053f581
    MOV EAX,dword ptr [EBX + 0x24]      ; 0053f584
    ADD EAX,EDX                         ; 0053f587
    MOV dword ptr [EBP + 0x38],EAX      ; 0053f589
    MOV EDX,dword ptr [EDI + 0x28]      ; 0053f58c
    MOV EDI,dword ptr [EBX + 0x28]      ; 0053f58f
    MOV EAX,ECX                         ; 0053f592
    SUB EDX,EDI                         ; 0053f594
    IMUL EDX                            ; 0053f596
    SHRD EAX,EDX,0x10                   ; 0053f598
    MOV EDX,EAX                         ; 0053f59c
    MOV dword ptr [EBP + 0x44],EAX      ; 0053f59e
    MOV EAX,ESI                         ; 0053f5a1
    IMUL EDX                            ; 0053f5a3
    SHRD EAX,EDX,0x10                   ; 0053f5a5
    MOV EDX,EAX                         ; 0053f5a9
    MOV EAX,dword ptr [EBX + 0x28]      ; 0053f5ab
    ADD EAX,EDX                         ; 0053f5ae
    MOV dword ptr [EBP + 0x40],EAX      ; 0053f5b0
    INC dword ptr [0x01e7dacc]          ; 0053f5b3 | DAT_01e7dacc
    JMP 0x0053f1ed                      ; 0053f5b9
        ;   XREF to: 0053f1ed (UNCONDITIONAL_JUMP)  ; LAB_0053f1ed
    MOV EAX,0xffffffff                  ; 0053f5be
        ;   Label: LAB_0053f5be
    XOR EDX,EDX                         ; 0053f5c3
    DIV ECX                             ; 0053f5c5
    MOV ECX,EAX                         ; 0053f5c7
    JMP 0x0053f444                      ; 0053f5c9
        ;   XREF to: 0053f444 (UNCONDITIONAL_JUMP)  ; LAB_0053f444
    INC ECX                             ; 0053f5ce
        ;   Label: LAB_0053f5ce
    ADD EAX,0x50                        ; 0053f5cf
    CMP ECX,EDX                         ; 0053f5d2
    JL 0x0053f21f                       ; 0053f5d4
        ;   XREF to: 0053f21f (CONDITIONAL_JUMP)  ; LAB_0053f21f
    XOR EAX,EAX                         ; 0053f5da
        ;   Label: LAB_0053f5da
    JMP 0x0053f22f                      ; 0053f5dc
        ;   XREF to: 0053f22f (UNCONDITIONAL_JUMP)  ; LAB_0053f22f
    INC EDX                             ; 0053f5e1
        ;   Label: LAB_0053f5e1
    ADD EAX,0x50                        ; 0053f5e2
    CMP EDX,ESI                         ; 0053f5e5
    JL 0x0053f25c                       ; 0053f5e7
        ;   XREF to: 0053f25c (CONDITIONAL_JUMP)  ; LAB_0053f25c
    XOR EAX,EAX                         ; 0053f5ed
        ;   Label: LAB_0053f5ed
    JMP 0x0053f26c                      ; 0053f5ef
        ;   XREF to: 0053f26c (UNCONDITIONAL_JUMP)  ; LAB_0053f26c
    INC EDX                             ; 0053f5f4
        ;   Label: LAB_0053f5f4
    ADD EAX,0x50                        ; 0053f5f5
    CMP EDX,EDI                         ; 0053f5f8
    JL 0x0053f2b2                       ; 0053f5fa
        ;   XREF to: 0053f2b2 (CONDITIONAL_JUMP)  ; LAB_0053f2b2
    XOR EAX,EAX                         ; 0053f600
        ;   Label: LAB_0053f600
    JMP 0x0053f2c2                      ; 0053f602
        ;   XREF to: 0053f2c2 (UNCONDITIONAL_JUMP)  ; LAB_0053f2c2
    INC EDX                             ; 0053f607
        ;   Label: LAB_0053f607
    ADD EAX,0x50                        ; 0053f608 | DAT_01e7db20
    CMP EDX,EDI                         ; 0053f60b
    JL 0x0053f2fe                       ; 0053f60d
        ;   XREF to: 0053f2fe (CONDITIONAL_JUMP)  ; LAB_0053f2fe
    XOR EAX,EAX                         ; 0053f613
        ;   Label: LAB_0053f613
    MOV dword ptr [ESP + 0x10],EAX      ; 0053f615
    TEST EAX,EAX                        ; 0053f619
    JNZ 0x0053f625                      ; 0053f61b
        ;   XREF to: 0053f625 (CONDITIONAL_JUMP)  ; LAB_0053f625
    ADD ESP,0x14                        ; 0053f61d
    POP EBP                             ; 0053f620
    POP EDI                             ; 0053f621
    POP ESI                             ; 0053f622
    POP EBX                             ; 0053f623
    RET                                 ; 0053f624
    MOV EDI,dword ptr [ESP + 0x10]      ; 0053f625
        ;   Label: LAB_0053f625
    MOV EBX,dword ptr [ESP + 0xc]       ; 0053f629
    MOV ESI,EBP                         ; 0053f62d
    CALL engine_special.cpp_FUN_00580127 ; 0053f62f
        ;   XREF to: 00580127 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00580127()
    MOV EAX,dword ptr [EBP + 0xc]       ; 0053f634
    MOV EDI,dword ptr [EBP + 0x8]       ; 0053f637
    MOV EDX,dword ptr [EBP + 0x18]      ; 0053f63a
    MOV ECX,dword ptr [EBP + 0x20]      ; 0053f63d
    ADD EDI,EAX                         ; 0053f640
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0053f642
    MOV dword ptr [EBP + 0x8],EDI       ; 0053f645
    ADD EDX,EAX                         ; 0053f648
    MOV EAX,dword ptr [EBP + 0x24]      ; 0053f64a
    MOV dword ptr [EBP + 0x18],EDX      ; 0053f64d
    ADD ECX,EAX                         ; 0053f650
    MOV dword ptr [EBP + 0x20],ECX      ; 0053f652
    MOV EBX,dword ptr [EBP + 0x28]      ; 0053f655
    MOV ESI,dword ptr [EBP + 0x10]      ; 0053f658
    MOV EDI,dword ptr [EBP + 0x38]      ; 0053f65b
    MOV EDX,dword ptr [EBP + 0x40]      ; 0053f65e
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0053f661
    MOV ECX,dword ptr [EBP + 0x30]      ; 0053f664
    ADD EBX,EAX                         ; 0053f667
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053f669
    MOV dword ptr [EBP + 0x28],EBX      ; 0053f66c
    ADD ESI,EAX                         ; 0053f66f
    MOV EAX,dword ptr [EBP + 0x3c]      ; 0053f671
    MOV dword ptr [EBP + 0x10],ESI      ; 0053f674
    ADD EDI,EAX                         ; 0053f677
    MOV EAX,dword ptr [EBP + 0x44]      ; 0053f679
    MOV dword ptr [EBP + 0x38],EDI      ; 0053f67c
    ADD EDX,EAX                         ; 0053f67f
    MOV EAX,dword ptr [EBP + 0x34]      ; 0053f681
    MOV dword ptr [EBP + 0x40],EDX      ; 0053f684
    ADD ECX,EAX                         ; 0053f687
    MOV EAX,dword ptr [ESP + 0x10]      ; 0053f689
    MOV dword ptr [EBP + 0x30],ECX      ; 0053f68d
    MOV EDX,dword ptr [ESP + 0x10]      ; 0053f690
    MOV EAX,dword ptr [EAX + 0xc]       ; 0053f694
    MOV EBX,dword ptr [EDX + 0x8]       ; 0053f697
    MOV ESI,dword ptr [EDX + 0x18]      ; 0053f69a
    MOV EDI,dword ptr [EDX + 0x20]      ; 0053f69d
    MOV ECX,dword ptr [EDX + 0x28]      ; 0053f6a0
    ADD EBX,EAX                         ; 0053f6a3
    MOV EAX,dword ptr [EDX + 0x1c]      ; 0053f6a5
    MOV dword ptr [EDX + 0x8],EBX       ; 0053f6a8
    ADD ESI,EAX                         ; 0053f6ab
    MOV EAX,dword ptr [EDX + 0x24]      ; 0053f6ad
    MOV dword ptr [EDX + 0x18],ESI      ; 0053f6b0
    ADD EDI,EAX                         ; 0053f6b3
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0053f6b5
    MOV dword ptr [EDX + 0x20],EDI      ; 0053f6b8
    ADD ECX,EAX                         ; 0053f6bb
    MOV dword ptr [EDX + 0x28],ECX      ; 0053f6bd
    MOV EBX,dword ptr [EDX + 0x10]      ; 0053f6c0
    MOV ESI,dword ptr [EDX + 0x38]      ; 0053f6c3
    MOV EDI,dword ptr [EDX + 0x40]      ; 0053f6c6
    MOV EAX,dword ptr [EDX + 0x14]      ; 0053f6c9
    MOV ECX,dword ptr [EDX + 0x30]      ; 0053f6cc
    ADD EBX,EAX                         ; 0053f6cf
    MOV EAX,dword ptr [EDX + 0x3c]      ; 0053f6d1
    MOV dword ptr [EDX + 0x10],EBX      ; 0053f6d4
    MOV EBX,dword ptr [ESP + 0xc]       ; 0053f6d7
    ADD ESI,EAX                         ; 0053f6db
    INC EBX                             ; 0053f6dd
    MOV EAX,dword ptr [EDX + 0x44]      ; 0053f6de
    MOV dword ptr [EDX + 0x38],ESI      ; 0053f6e1
    ADD EDI,EAX                         ; 0053f6e4
    MOV EAX,dword ptr [EDX + 0x34]      ; 0053f6e6
    MOV dword ptr [EDX + 0x40],EDI      ; 0053f6e9
    ADD ECX,EAX                         ; 0053f6ec
    MOV dword ptr [ESP + 0xc],EBX       ; 0053f6ee
    MOV dword ptr [EDX + 0x30],ECX      ; 0053f6f2
    JMP 0x0053f281                      ; 0053f6f5
        ;   XREF to: 0053f281 (UNCONDITIONAL_JUMP)  ; LAB_0053f281

