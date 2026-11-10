; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_renderPolygonSoftware_FUN_0053e120(SRenderVertex *vertices,int vertex_count)
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
;   engine_clipper.c_clipAndRasterize_FUN_0043cbf0 at 0043cc2f
;
; Referenced Globals:
;   void* switchdataD_0053e0f8 = 0053e230
;   undefined4 DAT_0061b4c0
;   undefined4 DAT_00622a84
;   undefined4 DAT_00713a74
;   undefined4 DAT_00713a7c
;   undefined4 DAT_01c4eff8
;   undefined4 DAT_01c4effc
;   undefined4 DAT_01c4f000
;   undefined4 DAT_01c4f004
;   undefined4 DAT_01c50948
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;   undefined4 DAT_01e7d5b8
;   undefined4 DAT_01e7d5bc
;   undefined4 DAT_01e7dabc
;   ... and 2 more
;
; Called Functions:
;   engine_prim.c_adjustNearPlaneTextureCoords_FUN_0053dcb0
;   engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60
;   engine_prim.c_findEdgeInBuffer_FUN_0053db80
;   engine_prim.c_normalizeTextureCoords_FUN_0053dc30
;   engine_prim.c_prepareDepthBuffer_FUN_0053dbc0
;   engine_prim.c_replaceWWithDepth_FUN_0053dd20
;   engine_special.cpp_drawPolygon_FUN_00582340
;   engine_special.cpp_FUN_00580127
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053e120
        ;   Label: engine_prim.c_renderPolygonSoftware_FUN_0053e120
    PUSH ESI                            ; 0053e121
    PUSH EDI                            ; 0053e122
    PUSH EBP                            ; 0053e123
    SUB ESP,0x14                        ; 0053e124
    CMP dword ptr [0x0061b4c0],0x0      ; 0053e127 | DAT_0061b4c0
    JZ 0x0053e197                       ; 0053e12e
        ;   XREF to: 0053e197 (CONDITIONAL_JUMP)  ; LAB_0053e197
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0053e130
    MOV ECX,dword ptr [ESP + 0x28]      ; 0053e134
    XOR ESI,ESI                         ; 0053e138
    TEST EBX,EBX                        ; 0053e13a
    JLE 0x0053e197                      ; 0053e13c
        ;   XREF to: 0053e197 (CONDITIONAL_JUMP)  ; LAB_0053e197
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0053e13e
    TEST byte ptr [ECX + 0x13],0x80     ; 0053e142
        ;   Label: LAB_0053e142
    JZ 0x0053e18f                       ; 0053e146
        ;   XREF to: 0053e18f (CONDITIONAL_JUMP)  ; LAB_0053e18f
    MOV EAX,0x7fffffff                  ; 0053e148
    MOV EDX,EAX                         ; 0053e14d
    MOV EBX,dword ptr [ECX + 0x8]       ; 0053e14f
    SAR EDX,0x1f                        ; 0053e152
    IDIV EBX                            ; 0053e155
    MOV dword ptr [ECX + 0xc],EAX       ; 0053e157
    MOV EDX,dword ptr [0x01c4eff8]      ; 0053e15a | DAT_01c4eff8
    MOV EBX,dword ptr [ECX + 0x8]       ; 0053e160
    MOV EAX,dword ptr [ECX]             ; 0053e163
    IMUL EDX                            ; 0053e165
    IDIV EBX                            ; 0053e167
    MOV EDX,dword ptr [0x01c4f000]      ; 0053e169 | DAT_01c4f000
    ADD EAX,EDX                         ; 0053e16f
    MOV EBX,dword ptr [ECX + 0x8]       ; 0053e171
    MOV dword ptr [ECX + 0x10],EAX      ; 0053e174
    MOV EDX,dword ptr [0x01c4effc]      ; 0053e177 | DAT_01c4effc
    MOV EAX,dword ptr [ECX + 0x4]       ; 0053e17d
    IMUL EDX                            ; 0053e180
    IDIV EBX                            ; 0053e182
    MOV EDX,dword ptr [0x01c4f004]      ; 0053e184 | DAT_01c4f004
    ADD EAX,EDX                         ; 0053e18a
    MOV dword ptr [ECX + 0x14],EAX      ; 0053e18c
    INC ESI                             ; 0053e18f
        ;   Label: LAB_0053e18f
    ADD ECX,0x30                        ; 0053e190
    CMP ESI,EDI                         ; 0053e193
    JL 0x0053e142                       ; 0053e195
        ;   XREF to: 0053e142 (CONDITIONAL_JUMP)  ; LAB_0053e142
    CMP dword ptr [0x00713a7c],0x0      ; 0053e197 | DAT_00713a7c
        ;   Label: LAB_0053e197
    JZ 0x0053e1fc                       ; 0053e19e
        ;   XREF to: 0053e1fc (CONDITIONAL_JUMP)  ; LAB_0053e1fc
    MOV EDI,dword ptr [ESP + 0x28]      ; 0053e1a0
    MOV EAX,dword ptr [ESP + 0x28]      ; 0053e1a4
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0053e1a8
    ADD EDI,0x30                        ; 0053e1ac
    ADD EAX,0x60                        ; 0053e1af
    CMP EDX,0x3                         ; 0053e1b2
    JLE 0x0053e2c9                      ; 0053e1b5
        ;   XREF to: 0053e2c9 (CONDITIONAL_JUMP)  ; LAB_0053e2c9
    SUB EDX,0x2                         ; 0053e1bb
    MOV ESI,EAX                         ; 0053e1be
    XOR EBX,EBX                         ; 0053e1c0
    XOR EBP,EBP                         ; 0053e1c2
    MOV dword ptr [ESP + 0x4],EDX       ; 0053e1c4
    TEST EDX,EDX                        ; 0053e1c8
    JLE 0x0053e1f2                      ; 0053e1ca
        ;   XREF to: 0053e1f2 (CONDITIONAL_JUMP)  ; LAB_0053e1f2
    PUSH ESI                            ; 0053e1cc
        ;   Label: LAB_0053e1cc
    PUSH EDI                            ; 0053e1cd
    MOV EAX,dword ptr [ESP + 0x30]      ; 0053e1ce
    PUSH EAX                            ; 0053e1d2
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60 ; 0053e1d3
        ;   XREF to: 0053dd60 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60()
    ADD ESP,0xc                         ; 0053e1d8
    TEST EAX,EAX                        ; 0053e1db
    JZ 0x0053e2c3                       ; 0053e1dd
        ;   XREF to: 0053e2c3 (CONDITIONAL_JUMP)  ; LAB_0053e2c3
    MOV EDX,dword ptr [ESP + 0x4]       ; 0053e1e3
        ;   Label: LAB_0053e1e3
    ADD EDI,0x30                        ; 0053e1e7
    INC EBX                             ; 0053e1ea
    ADD ESI,0x30                        ; 0053e1eb
    CMP EBX,EDX                         ; 0053e1ee
    JL 0x0053e1cc                       ; 0053e1f0
        ;   XREF to: 0053e1cc (CONDITIONAL_JUMP)  ; LAB_0053e1cc
    CMP EBP,dword ptr [ESP + 0x4]       ; 0053e1f2
        ;   Label: LAB_0053e1f2
    JZ 0x0053e2bb                       ; 0053e1f6
        ;   XREF to: 0053e2bb (CONDITIONAL_JUMP)  ; LAB_0053e2bb
    CMP dword ptr [0x01c50948],0x0      ; 0053e1fc | DAT_01c50948
        ;   Label: LAB_0053e1fc
    JZ 0x0053e212                       ; 0053e203
        ;   XREF to: 0053e212 (CONDITIONAL_JUMP)  ; LAB_0053e212
    CMP dword ptr [0x00713a74],0x0      ; 0053e205 | DAT_00713a74
    JZ 0x0053e2e8                       ; 0053e20c
        ;   XREF to: 0053e2e8 (CONDITIONAL_JUMP)  ; LAB_0053e2e8
    MOV EBX,dword ptr [0x01e7dac8]      ; 0053e212 | DAT_01e7dac8
        ;   Label: LAB_0053e212
    INC EBX                             ; 0053e218
    MOV EAX,[0x01c51d18]                ; 0053e219 | DAT_01c51d18
    MOV dword ptr [0x01e7dac8],EBX      ; 0053e21e | DAT_01e7dac8
    CMP EAX,0x6                         ; 0053e224
    JA 0x0053e230                       ; 0053e227
        ;   XREF to: 0053e230 (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EAX*0x4 + 0x53e0f8]  ; 0053e229 | caseD_4 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x4b0                       ; 0053e230
        ;   Label: caseD_0
    XOR EDX,EDX                         ; 0053e235
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0053e237
    MOV dword ptr [0x01e7dac0],EDX      ; 0053e23b | DAT_01e7dac0
    MOV dword ptr [0x01e7d5b8],EDX      ; 0053e241 | DAT_01e7d5b8
    MOV dword ptr [ESP + 0x8],EDX       ; 0053e247
    MOV [0x01e7dabc],EAX                ; 0053e24b | DAT_01e7dabc
    TEST ESI,ESI                        ; 0053e250
    JLE 0x0053e2a0                      ; 0053e252
        ;   XREF to: 0053e2a0 (CONDITIONAL_JUMP)  ; LAB_0053e2a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0053e254
        ;   Label: LAB_0053e254
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0053e258
    INC EAX                             ; 0053e25c
    CMP EAX,ECX                         ; 0053e25d
    JL 0x0053e263                       ; 0053e25f
        ;   XREF to: 0053e263 (CONDITIONAL_JUMP)  ; LAB_0053e263
    XOR EAX,EAX                         ; 0053e261
    IMUL EAX,EAX,0x30                   ; 0053e263
        ;   Label: LAB_0053e263
    MOV EBP,dword ptr [ESP + 0x28]      ; 0053e266
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053e26a
    ADD EBP,EAX                         ; 0053e26e
    IMUL EAX,EBX,0x30                   ; 0053e270
    ADD EAX,dword ptr [ESP + 0x28]      ; 0053e273
    MOV EDI,EBP                         ; 0053e277
    MOV ECX,dword ptr [EAX + 0x14]      ; 0053e279
    MOV ESI,dword ptr [EBP + 0x14]      ; 0053e27c
    SAR ECX,0x10                        ; 0053e27f
    SAR ESI,0x10                        ; 0053e282
    MOV EBX,EAX                         ; 0053e285
    CMP ECX,ESI                         ; 0053e287
    JNZ 0x0053e391                      ; 0053e289
        ;   XREF to: 0053e391 (CONDITIONAL_JUMP)  ; LAB_0053e391
    MOV ECX,dword ptr [ESP + 0x8]       ; 0053e28f
        ;   Label: LAB_0053e28f
    INC ECX                             ; 0053e293
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0053e294
    MOV dword ptr [ESP + 0x8],ECX       ; 0053e298
    CMP ECX,EBX                         ; 0053e29c
    JL 0x0053e254                       ; 0053e29e
        ;   XREF to: 0053e254 (CONDITIONAL_JUMP)  ; LAB_0053e254
    PUSH 0x0                            ; 0053e2a0
        ;   Label: LAB_0053e2a0
    MOV ESI,dword ptr [0x01e7dabc]      ; 0053e2a2 | DAT_01e7dabc
    PUSH ESI                            ; 0053e2a8
    CALL engine_prim.c_findEdgeInBuffer_FUN_0053db80 ; 0053e2a9
        ;   XREF to: 0053db80 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_findEdgeInBuffer_FUN_0053db80(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 0053e2ae
    MOV EBP,EAX                         ; 0053e2b1
    TEST EAX,EAX                        ; 0053e2b3
    JNZ 0x0053e508                      ; 0053e2b5
        ;   XREF to: 0053e508 (CONDITIONAL_JUMP)  ; LAB_0053e508
    ADD ESP,0x14                        ; 0053e2bb
        ;   Label: LAB_0053e2bb
    POP EBP                             ; 0053e2be
    POP EDI                             ; 0053e2bf
    POP ESI                             ; 0053e2c0
    POP EBX                             ; 0053e2c1
    RET                                 ; 0053e2c2
    INC EBP                             ; 0053e2c3
        ;   Label: LAB_0053e2c3
    JMP 0x0053e1e3                      ; 0053e2c4
        ;   XREF to: 0053e1e3 (UNCONDITIONAL_JUMP)  ; LAB_0053e1e3
    PUSH EAX                            ; 0053e2c9
        ;   Label: LAB_0053e2c9
    PUSH EDI                            ; 0053e2ca
    MOV ECX,dword ptr [ESP + 0x30]      ; 0053e2cb
    PUSH ECX                            ; 0053e2cf
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60 ; 0053e2d0
        ;   XREF to: 0053dd60 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60()
    ADD ESP,0xc                         ; 0053e2d5
    TEST EAX,EAX                        ; 0053e2d8
    JNZ 0x0053e1fc                      ; 0053e2da
        ;   XREF to: 0053e1fc (CONDITIONAL_JUMP)  ; LAB_0053e1fc
    ADD ESP,0x14                        ; 0053e2e0
    POP EBP                             ; 0053e2e3
    POP EDI                             ; 0053e2e4
    POP ESI                             ; 0053e2e5
    POP EBX                             ; 0053e2e6
    RET                                 ; 0053e2e7
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0053e2e8
        ;   Label: LAB_0053e2e8
    MOV EDI,dword ptr [0x01e7dac8]      ; 0053e2ec | DAT_01e7dac8
    MOV EBP,dword ptr [0x01c51d14]      ; 0053e2f2 | DAT_01c51d14
    SUB EAX,0x2                         ; 0053e2f8
    PUSH EBP                            ; 0053e2fb
    ADD EDI,EAX                         ; 0053e2fc
    MOV EAX,dword ptr [ESP + 0x30]      ; 0053e2fe
    PUSH EAX                            ; 0053e302
    MOV EDX,dword ptr [ESP + 0x30]      ; 0053e303
    PUSH EDX                            ; 0053e307
    MOV dword ptr [0x01e7dac8],EDI      ; 0053e308 | DAT_01e7dac8
    CALL engine_special.cpp_drawPolygon_FUN_00582340 ; 0053e30e
        ;   XREF to: 00582340 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_drawPolygon_FUN_00582340()
    ADD ESP,0xc                         ; 0053e313
    ADD ESP,0x14                        ; 0053e316
    POP EBP                             ; 0053e319
    POP EDI                             ; 0053e31a
    POP ESI                             ; 0053e31b
    POP EBX                             ; 0053e31c
    RET                                 ; 0053e31d
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0053e31e
        ;   Label: caseD_1
    PUSH EDI                            ; 0053e322
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0053e323
    PUSH EBP                            ; 0053e327
    CALL engine_prim.c_prepareDepthBuffer_FUN_0053dbc0 ; 0053e328
        ;   XREF to: 0053dbc0 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_prepareDepthBuffer_FUN_0053dbc0()
    ADD ESP,0x8                         ; 0053e32d
    JMP 0x0053e230                      ; 0053e330
        ;   XREF to: 0053e230 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0053e335
        ;   Label: caseD_2
    PUSH EBX                            ; 0053e339
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0053e33a
    PUSH ESI                            ; 0053e33e
    CALL engine_prim.c_normalizeTextureCoords_FUN_0053dc30 ; 0053e33f
        ;   XREF to: 0053dc30 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_normalizeTextureCoords_FUN_0053dc30()
    ADD ESP,0x8                         ; 0053e344
    JMP 0x0053e230                      ; 0053e347
        ;   XREF to: 0053e230 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0053e34c
        ;   Label: caseD_3
    PUSH EDX                            ; 0053e350
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0053e351
    PUSH ECX                            ; 0053e355
    CALL engine_prim.c_adjustNearPlaneTextureCoords_FUN_0053dcb0 ; 0053e356
        ;   XREF to: 0053dcb0 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_adjustNearPlaneTextureCoords_FUN_0053dcb0()
    ADD ESP,0x8                         ; 0053e35b
    JMP 0x0053e230                      ; 0053e35e
        ;   XREF to: 0053e230 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0053e363
        ;   Label: caseD_5
    PUSH EBP                            ; 0053e367
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0053e368
    PUSH EAX                            ; 0053e36c
    CALL engine_prim.c_normalizeTextureCoords_FUN_0053dc30 ; 0053e36d
        ;   XREF to: 0053dc30 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_normalizeTextureCoords_FUN_0053dc30()
    ADD ESP,0x8                         ; 0053e372
    JMP 0x0053e230                      ; 0053e375
        ;   XREF to: 0053e230 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0053e37a
        ;   Label: caseD_6
    PUSH ESI                            ; 0053e37e
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0053e37f
    PUSH EDI                            ; 0053e383
    CALL engine_prim.c_replaceWWithDepth_FUN_0053dd20 ; 0053e384
        ;   XREF to: 0053dd20 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_replaceWWithDepth_FUN_0053dd20()
    ADD ESP,0x8                         ; 0053e389
    JMP 0x0053e230                      ; 0053e38c
        ;   XREF to: 0053e230 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDX,dword ptr [EAX + 0x14]      ; 0053e391
        ;   Label: LAB_0053e391
    CMP EDX,dword ptr [EBP + 0x14]      ; 0053e394
    JLE 0x0053e3a3                      ; 0053e397
        ;   XREF to: 0053e3a3 (CONDITIONAL_JUMP)  ; LAB_0053e3a3
    MOV EDI,EAX                         ; 0053e399
    MOV EBX,EBP                         ; 0053e39b
    MOV EAX,ECX                         ; 0053e39d
    MOV ECX,ESI                         ; 0053e39f
    MOV ESI,EAX                         ; 0053e3a1
    IMUL EBP,dword ptr [0x01e7d5b8],0x50 ; 0053e3a3 | DAT_01e7d5b8
        ;   Label: LAB_0053e3a3
    ADD EBP,0x1e7d5bc                   ; 0053e3aa
    MOV dword ptr [EBP],ECX             ; 0053e3b0 | DAT_01e7d5bc
    MOV EDX,dword ptr [0x01e7dabc]      ; 0053e3b3 | DAT_01e7dabc
    MOV dword ptr [EBP + 0x4],ESI       ; 0053e3b9
    CMP ECX,EDX                         ; 0053e3bc
    JGE 0x0053e3c6                      ; 0053e3be
        ;   XREF to: 0053e3c6 (CONDITIONAL_JUMP)  ; LAB_0053e3c6
    MOV dword ptr [0x01e7dabc],ECX      ; 0053e3c0 | DAT_01e7dabc
    CMP ESI,dword ptr [0x01e7dac0]      ; 0053e3c6 | DAT_01e7dac0
        ;   Label: LAB_0053e3c6
    JLE 0x0053e3d4                      ; 0053e3cc
        ;   XREF to: 0053e3d4 (CONDITIONAL_JUMP)  ; LAB_0053e3d4
    MOV dword ptr [0x01e7dac0],ESI      ; 0053e3ce | DAT_01e7dac0
    MOV ESI,dword ptr [EBX + 0x14]      ; 0053e3d4
        ;   Label: LAB_0053e3d4
    MOV ECX,dword ptr [EDI + 0x14]      ; 0053e3d7
    SUB ECX,ESI                         ; 0053e3da
    CMP ECX,0x10000                     ; 0053e3dc
    JNC 0x0053e4f8                      ; 0053e3e2
        ;   XREF to: 0053e4f8 (CONDITIONAL_JUMP)  ; LAB_0053e4f8
    XOR ECX,ECX                         ; 0053e3e8
    MOV EAX,dword ptr [EDI + 0x10]      ; 0053e3ea
        ;   Label: LAB_0053e3ea
    MOV EDX,dword ptr [EBX + 0x10]      ; 0053e3ed
    MOV ESI,dword ptr [EBX + 0x14]      ; 0053e3f0
    SUB EAX,EDX                         ; 0053e3f3
    AND ESI,0xffff                      ; 0053e3f5
    MOV EDX,EAX                         ; 0053e3fb
    MOV EAX,ECX                         ; 0053e3fd
    XOR SI,0xffff                       ; 0053e3ff
    IMUL EDX                            ; 0053e403
    SHRD EAX,EDX,0x10                   ; 0053e405
    MOV EDX,EAX                         ; 0053e409
    MOV dword ptr [EBP + 0xc],EAX       ; 0053e40b
    MOV EAX,ESI                         ; 0053e40e
    IMUL EDX                            ; 0053e410
    SHRD EAX,EDX,0x10                   ; 0053e412
    MOV dword ptr [ESP],EAX             ; 0053e416
    MOV EDX,dword ptr [ESP]             ; 0053e419
    MOV EAX,dword ptr [EBX + 0x10]      ; 0053e41c
    ADD EAX,EDX                         ; 0053e41f
    MOV dword ptr [EBP + 0x8],EAX       ; 0053e421
    MOV EAX,dword ptr [EDI + 0x18]      ; 0053e424
    MOV EDX,dword ptr [EBX + 0x18]      ; 0053e427
    SUB EAX,EDX                         ; 0053e42a
    MOV EDX,EAX                         ; 0053e42c
    MOV EAX,ECX                         ; 0053e42e
    IMUL EDX                            ; 0053e430
    SHRD EAX,EDX,0x10                   ; 0053e432
    MOV EDX,EAX                         ; 0053e436
    MOV dword ptr [EBP + 0x1c],EAX      ; 0053e438
    MOV EAX,ESI                         ; 0053e43b
    IMUL EDX                            ; 0053e43d
    SHRD EAX,EDX,0x10                   ; 0053e43f
    MOV dword ptr [ESP],EAX             ; 0053e443
    MOV EDX,dword ptr [ESP]             ; 0053e446
    MOV EAX,dword ptr [EBX + 0x18]      ; 0053e449
    ADD EAX,EDX                         ; 0053e44c
    MOV dword ptr [EBP + 0x18],EAX      ; 0053e44e
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0053e451
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0053e454
    SUB EAX,EDX                         ; 0053e457
    MOV EDX,EAX                         ; 0053e459
    MOV EAX,ECX                         ; 0053e45b
    IMUL EDX                            ; 0053e45d
    SHRD EAX,EDX,0x10                   ; 0053e45f
    MOV EDX,EAX                         ; 0053e463
    MOV dword ptr [EBP + 0x24],EAX      ; 0053e465
    MOV EAX,ESI                         ; 0053e468
    IMUL EDX                            ; 0053e46a
    SHRD EAX,EDX,0x10                   ; 0053e46c
    MOV dword ptr [ESP],EAX             ; 0053e470
    MOV EDX,dword ptr [ESP]             ; 0053e473
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0053e476
    ADD EAX,EDX                         ; 0053e479
    MOV dword ptr [EBP + 0x20],EAX      ; 0053e47b
    MOV EAX,dword ptr [EDI + 0x20]      ; 0053e47e
    MOV EDX,dword ptr [EBX + 0x20]      ; 0053e481
    SUB EAX,EDX                         ; 0053e484
    MOV EDX,EAX                         ; 0053e486
    MOV EAX,ECX                         ; 0053e488
    IMUL EDX                            ; 0053e48a
    SHRD EAX,EDX,0x10                   ; 0053e48c
    MOV EDX,EAX                         ; 0053e490
    MOV dword ptr [EBP + 0x14],EAX      ; 0053e492
    MOV EAX,ESI                         ; 0053e495
    IMUL EDX                            ; 0053e497
    SHRD EAX,EDX,0x10                   ; 0053e499
    MOV EDX,dword ptr [EBX + 0x20]      ; 0053e49d
    ADD EDX,EAX                         ; 0053e4a0
    MOV dword ptr [EBP + 0x10],EDX      ; 0053e4a2
    MOV EDX,dword ptr [EDI + 0x2c]      ; 0053e4a5
    SUB EDX,dword ptr [EBX + 0x2c]      ; 0053e4a8
    MOV EAX,ECX                         ; 0053e4ab
    IMUL EDX                            ; 0053e4ad
    SHRD EAX,EDX,0x10                   ; 0053e4af
    MOV EDX,EAX                         ; 0053e4b3
    MOV dword ptr [EBP + 0x34],EAX      ; 0053e4b5
    MOV EAX,ESI                         ; 0053e4b8
    IMUL EDX                            ; 0053e4ba
    SHRD EAX,EDX,0x10                   ; 0053e4bc
    MOV EDX,dword ptr [EBX + 0x2c]      ; 0053e4c0
    ADD EDX,EAX                         ; 0053e4c3
    MOV dword ptr [EBP + 0x30],EDX      ; 0053e4c5
    MOV EDX,dword ptr [EDI + 0x8]       ; 0053e4c8
    MOV EDI,dword ptr [EBX + 0x8]       ; 0053e4cb
    MOV EAX,ECX                         ; 0053e4ce
    SUB EDX,EDI                         ; 0053e4d0
    IMUL EDX                            ; 0053e4d2
    SHRD EAX,EDX,0x10                   ; 0053e4d4
    MOV EDX,EAX                         ; 0053e4d8
    MOV dword ptr [EBP + 0x2c],EAX      ; 0053e4da
    MOV EAX,ESI                         ; 0053e4dd
    IMUL EDX                            ; 0053e4df
    SHRD EAX,EDX,0x10                   ; 0053e4e1
    MOV EDX,dword ptr [EBX + 0x8]       ; 0053e4e5
    ADD EDX,EAX                         ; 0053e4e8
    MOV dword ptr [EBP + 0x28],EDX      ; 0053e4ea
    INC dword ptr [0x01e7d5b8]          ; 0053e4ed | DAT_01e7d5b8
    JMP 0x0053e28f                      ; 0053e4f3
        ;   XREF to: 0053e28f (UNCONDITIONAL_JUMP)  ; LAB_0053e28f
    MOV EAX,0xffffffff                  ; 0053e4f8
        ;   Label: LAB_0053e4f8
    XOR EDX,EDX                         ; 0053e4fd
    DIV ECX                             ; 0053e4ff
    MOV ECX,EAX                         ; 0053e501
    JMP 0x0053e3ea                      ; 0053e503
        ;   XREF to: 0053e3ea (UNCONDITIONAL_JUMP)  ; LAB_0053e3ea
    PUSH EAX                            ; 0053e508
        ;   Label: LAB_0053e508
    MOV EDI,dword ptr [0x01e7dabc]      ; 0053e509 | DAT_01e7dabc
    PUSH EDI                            ; 0053e50f
    CALL engine_prim.c_findEdgeInBuffer_FUN_0053db80 ; 0053e510
        ;   XREF to: 0053db80 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_findEdgeInBuffer_FUN_0053db80(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 0053e515
    MOV dword ptr [ESP + 0x10],EAX      ; 0053e518
    TEST EAX,EAX                        ; 0053e51c
    JZ 0x0053e2bb                       ; 0053e51e
        ;   XREF to: 0053e2bb (CONDITIONAL_JUMP)  ; LAB_0053e2bb
    MOV EAX,[0x01e7dabc]                ; 0053e524 | DAT_01e7dabc
    MOV EDX,dword ptr [0x00622a84]      ; 0053e529 | DAT_00622a84
    MOV dword ptr [ESP + 0xc],EAX       ; 0053e52f
    CMP EAX,EDX                         ; 0053e533
    JGE 0x0053e2bb                      ; 0053e535
        ;   XREF to: 0053e2bb (CONDITIONAL_JUMP)  ; LAB_0053e2bb
        ;   Label: LAB_0053e535
    MOV EAX,dword ptr [ESP + 0xc]       ; 0053e53b
    CMP EAX,dword ptr [EBP + 0x4]       ; 0053e53f
    JGE 0x0053e61d                      ; 0053e542
        ;   XREF to: 0053e61d (CONDITIONAL_JUMP)  ; LAB_0053e61d
    MOV EDX,dword ptr [ESP + 0x10]      ; 0053e548
        ;   Label: LAB_0053e548
    MOV EAX,dword ptr [ESP + 0xc]       ; 0053e54c
    CMP EAX,dword ptr [EDX + 0x4]       ; 0053e550
    JL 0x0053e571                       ; 0053e553
        ;   XREF to: 0053e571 (CONDITIONAL_JUMP)  ; LAB_0053e571
    PUSH EBP                            ; 0053e555
    PUSH EAX                            ; 0053e556
    MOV dword ptr [EDX],0xffffffff      ; 0053e557
    CALL engine_prim.c_findEdgeInBuffer_FUN_0053db80 ; 0053e55d
        ;   XREF to: 0053db80 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_findEdgeInBuffer_FUN_0053db80(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 0053e562
    MOV dword ptr [ESP + 0x10],EAX      ; 0053e565
    TEST EAX,EAX                        ; 0053e569
    JZ 0x0053e2bb                       ; 0053e56b
        ;   XREF to: 0053e2bb (CONDITIONAL_JUMP)  ; LAB_0053e2bb
    MOV EDI,dword ptr [ESP + 0x10]      ; 0053e571
        ;   Label: LAB_0053e571
    MOV EBX,dword ptr [ESP + 0xc]       ; 0053e575
    MOV ESI,EBP                         ; 0053e579
    CALL engine_special.cpp_FUN_00580127 ; 0053e57b
        ;   XREF to: 00580127 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00580127()
    MOV EAX,dword ptr [EBP + 0xc]       ; 0053e580
    ADD dword ptr [EBP + 0x8],EAX       ; 0053e583
    MOV ECX,dword ptr [EBP + 0x18]      ; 0053e586
    MOV EBX,dword ptr [EBP + 0x20]      ; 0053e589
    MOV ESI,dword ptr [EBP + 0x10]      ; 0053e58c
    MOV EDI,dword ptr [EBP + 0x28]      ; 0053e58f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0053e592
    MOV EDX,dword ptr [EBP + 0x30]      ; 0053e595
    ADD ECX,EAX                         ; 0053e598
    MOV EAX,dword ptr [EBP + 0x24]      ; 0053e59a
    MOV dword ptr [EBP + 0x18],ECX      ; 0053e59d
    ADD EBX,EAX                         ; 0053e5a0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053e5a2
    MOV dword ptr [EBP + 0x20],EBX      ; 0053e5a5
    ADD ESI,EAX                         ; 0053e5a8
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0053e5aa
    MOV dword ptr [EBP + 0x10],ESI      ; 0053e5ad
    ADD EDI,EAX                         ; 0053e5b0
    MOV EAX,dword ptr [EBP + 0x34]      ; 0053e5b2
    MOV dword ptr [EBP + 0x28],EDI      ; 0053e5b5
    ADD EDX,EAX                         ; 0053e5b8
    MOV EAX,dword ptr [ESP + 0x10]      ; 0053e5ba
    MOV dword ptr [EBP + 0x30],EDX      ; 0053e5be
    MOV EDX,dword ptr [ESP + 0x10]      ; 0053e5c1
    MOV EAX,dword ptr [EAX + 0xc]       ; 0053e5c5
    MOV ECX,dword ptr [EDX + 0x8]       ; 0053e5c8
    MOV EBX,dword ptr [EDX + 0x18]      ; 0053e5cb
    ADD ECX,EAX                         ; 0053e5ce
    MOV EAX,dword ptr [EDX + 0x1c]      ; 0053e5d0
    MOV dword ptr [EDX + 0x8],ECX       ; 0053e5d3
    ADD EBX,EAX                         ; 0053e5d6
    MOV dword ptr [EDX + 0x18],EBX      ; 0053e5d8
    MOV ESI,dword ptr [EDX + 0x20]      ; 0053e5db
    MOV EDI,dword ptr [EDX + 0x10]      ; 0053e5de
    MOV ECX,dword ptr [EDX + 0x28]      ; 0053e5e1
    MOV EAX,dword ptr [EDX + 0x24]      ; 0053e5e4
    MOV EBX,dword ptr [EDX + 0x30]      ; 0053e5e7
    ADD ESI,EAX                         ; 0053e5ea
    MOV EAX,dword ptr [EDX + 0x14]      ; 0053e5ec
    MOV dword ptr [EDX + 0x20],ESI      ; 0053e5ef
    MOV ESI,dword ptr [ESP + 0xc]       ; 0053e5f2
    ADD EDI,EAX                         ; 0053e5f6
    INC ESI                             ; 0053e5f8
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0053e5f9
    MOV dword ptr [EDX + 0x10],EDI      ; 0053e5fc
    MOV EDI,dword ptr [0x00622a84]      ; 0053e5ff | DAT_00622a84
    ADD ECX,EAX                         ; 0053e605
    MOV EAX,dword ptr [EDX + 0x34]      ; 0053e607
    MOV dword ptr [EDX + 0x28],ECX      ; 0053e60a
    ADD EBX,EAX                         ; 0053e60d
    MOV dword ptr [ESP + 0xc],ESI       ; 0053e60f
    MOV dword ptr [EDX + 0x30],EBX      ; 0053e613
    CMP ESI,EDI                         ; 0053e616
    JMP 0x0053e535                      ; 0053e618
        ;   XREF to: 0053e535 (UNCONDITIONAL_JUMP)  ; LAB_0053e535
    MOV ECX,dword ptr [ESP + 0x10]      ; 0053e61d
        ;   Label: LAB_0053e61d
    PUSH ECX                            ; 0053e621
    PUSH EAX                            ; 0053e622
    MOV dword ptr [EBP],0xffffffff      ; 0053e623
    CALL engine_prim.c_findEdgeInBuffer_FUN_0053db80 ; 0053e62a
        ;   XREF to: 0053db80 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_findEdgeInBuffer_FUN_0053db80(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 0053e62f
    MOV EBP,EAX                         ; 0053e632
    TEST EAX,EAX                        ; 0053e634
    JZ 0x0053e2bb                       ; 0053e636
        ;   XREF to: 0053e2bb (CONDITIONAL_JUMP)  ; LAB_0053e2bb
    JMP 0x0053e548                      ; 0053e63c
        ;   XREF to: 0053e548 (UNCONDITIONAL_JUMP)  ; LAB_0053e548

