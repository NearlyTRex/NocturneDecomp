; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_renderTriangleSimple_FUN_00458080(CVector3i *vertex_indices,int vertex_count)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   vertex_indices
; int              Stack[0x8]:4   vertex_count
; Local Variables:
; undefined        Stack[-0x74]:1  local_74
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 at 0045edb6
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_00461720 at 0046193a
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_004614b0 at 0046155d
;
; Referenced Globals:
;   undefined4 DAT_005c5014
;   undefined4 DAT_005c501c
;   undefined4 DAT_005c5024
;   undefined4 DAT_005c5028
;   undefined4 DAT_006b0278
;   undefined4 DAT_006b0280
;   undefined4 DAT_01b4cd30
;   undefined4 DAT_01b4cd34
;   undefined4 DAT_01b4cd7c
;   undefined4 DAT_01b4d1b4
;   undefined4 DAT_01b4d1b8
;   undefined4 DAT_01b4d1fc
;   undefined4 DAT_01b4d768
;   int g_UseExternalRenderer
;   _BIT_INTEGER32 g_RenderStateFlags
;   ... and 2 more
;
; Called Functions:
;   engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10
;   engine_prim.c_prepareDepthBuffer_FUN_004f9870
;   engine_prim.c_replaceWWithDepth_FUN_004f99d0
;   engine_special.cpp_drawPolygon2_FUN_00532650
;   engine_special.cpp_renderScanline_FUN_00530710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00458080
        ;   Label: engine_drender.cpp_renderTriangleSimple_FUN_00458080
    PUSH ESI                            ; 00458081
    PUSH EDI                            ; 00458082
    PUSH EBP                            ; 00458083
    SUB ESP,0x64                        ; 00458084
    MOV EBP,dword ptr [0x01b4cd30]      ; 00458087 | DAT_01b4cd30
    MOV EDI,dword ptr [ESP + 0x7c]      ; 0045808d
    CMP dword ptr [0x006b0280],0x0      ; 00458091 | DAT_006b0280
    JNZ 0x00458113                      ; 00458098
        ;   XREF to: 00458113 (CONDITIONAL_JUMP)  ; LAB_00458113
    MOV ECX,dword ptr [0x01e52ef8]      ; 0045809e | g_RenderedTriangleCount
        ;   Label: LAB_0045809e
    MOV EBX,dword ptr [0x01c02594]      ; 004580a4 | g_UseExternalRenderer
    INC ECX                             ; 004580aa
    MOV EBP,dword ptr [0x01b4cd30]      ; 004580ab | DAT_01b4cd30
    MOV dword ptr [0x01e52ef8],ECX      ; 004580b1 | g_RenderedTriangleCount
    TEST EBX,EBX                        ; 004580b7
    JZ 0x00458408                       ; 004580b9
        ;   XREF to: 00458408 (CONDITIONAL_JUMP)  ; LAB_00458408
    MOV ESI,dword ptr [0x006b0278]      ; 004580bf | DAT_006b0278
    TEST ESI,ESI                        ; 004580c5
    JNZ 0x00458408                      ; 004580c7
        ;   XREF to: 00458408 (CONDITIONAL_JUMP)  ; LAB_00458408
    TEST EDI,EDI                        ; 004580cd
    JLE 0x004580f0                      ; 004580cf
        ;   XREF to: 004580f0 (CONDITIONAL_JUMP)  ; LAB_004580f0
    MOV EAX,dword ptr [ESP + 0x78]      ; 004580d1
    IMUL EDX,dword ptr [EAX],0x30       ; 004580d5
        ;   Label: LAB_004580d5
    INC ESI                             ; 004580d8
    ADD EDX,0x5c5014                    ; 004580d9 | DAT_005c5014
    ADD EAX,0x4                         ; 004580df
    MOV dword ptr [ESP + ESI*0x4 + -0x4],EDX ; 004580e2
    CMP ESI,EDI                         ; 004580e6
    JL 0x004580d5                       ; 004580e8
        ;   XREF to: 004580d5 (CONDITIONAL_JUMP)  ; LAB_004580d5
    LEA EAX,[EAX]                       ; 004580ea
    MOV EBX,dword ptr [0x01c039a0]      ; 004580f0 | g_RenderStateFlags
        ;   Label: LAB_004580f0
    PUSH EBX                            ; 004580f6
    PUSH EDI                            ; 004580f7
    LEA EAX,[ESP + 0x8]                 ; 004580f8
    PUSH EAX                            ; 004580fc
    CALL engine_special.cpp_drawPolygon2_FUN_00532650 ; 004580fd
        ;   XREF to: 00532650 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolygon2_FUN_00532650(SRenderVertex * * vertex_array, int vertex_count, int render_flags)
    ADD ESP,0xc                         ; 00458102
    MOV EBP,dword ptr [0x01b4cd30]      ; 00458105 | DAT_01b4cd30
        ;   Label: LAB_00458105
    ADD ESP,0x64                        ; 0045810b
    POP EBP                             ; 0045810e
    POP EDI                             ; 0045810f
    POP ESI                             ; 00458110
    POP EBX                             ; 00458111
    RET                                 ; 00458112
    MOV EDX,dword ptr [ESP + 0x78]      ; 00458113
        ;   Label: LAB_00458113
    MOV EDX,dword ptr [EDX + 0x8]       ; 00458117
    LEA EAX,[EDX*0x4 + 0x0]             ; 0045811a
    SUB EAX,EDX                         ; 00458121
    SHL EAX,0x4                         ; 00458123
    MOV EDX,dword ptr [ESP + 0x78]      ; 00458126
    ADD EAX,0x5c5014                    ; 0045812a | DAT_005c5014
    MOV EDX,dword ptr [EDX + 0x4]       ; 0045812f
    PUSH EAX                            ; 00458132
    LEA EAX,[EDX*0x4 + 0x0]             ; 00458133
    SUB EAX,EDX                         ; 0045813a
    SHL EAX,0x4                         ; 0045813c
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0045813f
    ADD EAX,0x5c5014                    ; 00458143 | DAT_005c5014
    MOV EDX,dword ptr [EDX]             ; 00458148
    PUSH EAX                            ; 0045814a
    LEA EAX,[EDX*0x4 + 0x0]             ; 0045814b
    SUB EAX,EDX                         ; 00458152
    SHL EAX,0x4                         ; 00458154
    ADD EAX,0x5c5014                    ; 00458157 | DAT_005c5014
    PUSH EAX                            ; 0045815c
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10 ; 0045815d
        ;   XREF to: 004f9a10 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 00458162
    TEST EAX,EAX                        ; 00458165
    JNZ 0x0045809e                      ; 00458167
        ;   XREF to: 0045809e (CONDITIONAL_JUMP)  ; LAB_0045809e
    MOV EBP,dword ptr [0x01b4cd30]      ; 0045816d | DAT_01b4cd30
    ADD ESP,0x64                        ; 00458173
    POP EBP                             ; 00458176
    POP EDI                             ; 00458177
    POP ESI                             ; 00458178
    POP EBX                             ; 00458179
    RET                                 ; 0045817a
    XOR ESI,ESI                         ; 0045817b
        ;   Label: LAB_0045817b
    TEST EDI,EDI                        ; 0045817d
    JLE 0x004581b0                      ; 0045817f
        ;   XREF to: 004581b0 (CONDITIONAL_JUMP)  ; LAB_004581b0
    MOV EBX,dword ptr [ESP + 0x78]      ; 00458181
    MOV dword ptr [0x01b4cd30],EBP      ; 00458185 | DAT_01b4cd30
    IMUL EAX,dword ptr [EBX],0x30       ; 0045818b
        ;   Label: LAB_0045818b
    PUSH 0x1                            ; 0045818e
    ADD EAX,0x5c5014                    ; 00458190 | DAT_005c5014
    PUSH EAX                            ; 00458195
    ADD EBX,0x4                         ; 00458196
    INC ESI                             ; 00458199
    CALL engine_prim.c_prepareDepthBuffer_FUN_004f9870 ; 0045819a
        ;   XREF to: 004f9870 (UNCONDITIONAL_CALL)  ; void engine_prim.c_prepareDepthBuffer_FUN_004f9870(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 0045819f
    CMP ESI,EDI                         ; 004581a2
    JL 0x0045818b                       ; 004581a4
        ;   XREF to: 0045818b (CONDITIONAL_JUMP)  ; LAB_0045818b
    LEA EAX,[EAX]                       ; 004581a6
    LEA EDX,[EDX]                       ; 004581ac
    MOV EBX,0x4b0                       ; 004581b0
        ;   Label: LAB_004581b0
    XOR ESI,ESI                         ; 004581b5
    XOR EBP,EBP                         ; 004581b7
    MOV dword ptr [0x01b4d1b8],ESI      ; 004581b9 | DAT_01b4d1b8
    MOV dword ptr [ESP + 0x48],ESI      ; 004581bf
    MOV dword ptr [0x01b4d1b4],EBX      ; 004581c3 | DAT_01b4d1b4
    TEST EDI,EDI                        ; 004581c9
    JLE 0x00458247                      ; 004581cb
        ;   XREF to: 00458247 (CONDITIONAL_JUMP)  ; LAB_00458247
    MOV EAX,dword ptr [ESP + 0x78]      ; 004581d1
    MOV dword ptr [ESP + 0x44],EAX      ; 004581d5
    MOV EAX,dword ptr [ESP + 0x48]      ; 004581d9
        ;   Label: LAB_004581d9
    INC EAX                             ; 004581dd
    CMP EAX,EDI                         ; 004581de
    JL 0x004581e4                       ; 004581e0
        ;   XREF to: 004581e4 (CONDITIONAL_JUMP)  ; LAB_004581e4
    XOR EAX,EAX                         ; 004581e2
    MOV EDX,dword ptr [ESP + 0x78]      ; 004581e4
        ;   Label: LAB_004581e4
    SHL EAX,0x2                         ; 004581e8
    ADD EAX,EDX                         ; 004581eb
    IMUL EAX,dword ptr [EAX],0x30       ; 004581ed
    MOV EDX,0x5c5014                    ; 004581f0 | DAT_005c5014
    ADD EDX,EAX                         ; 004581f5
    MOV EAX,dword ptr [ESP + 0x44]      ; 004581f7
    IMUL EAX,dword ptr [EAX],0x30       ; 004581fb
    MOV dword ptr [ESP + 0x54],EDX      ; 004581fe
    MOV EDX,0x5c5014                    ; 00458202 | DAT_005c5014
    ADD EDX,EAX                         ; 00458207
    MOV EAX,dword ptr [ESP + 0x54]      ; 00458209
    MOV dword ptr [ESP + 0x50],EDX      ; 0045820d
    MOV ESI,EDX                         ; 00458211
    MOV dword ptr [ESP + 0x4c],EAX      ; 00458213
    MOV EAX,dword ptr [EDX + 0x14]      ; 00458217 | DAT_005c5028
    MOV EDX,dword ptr [ESP + 0x54]      ; 0045821a
    MOV EDX,dword ptr [EDX + 0x14]      ; 0045821e | DAT_005c5028
    SAR EAX,0x10                        ; 00458221
    SAR EDX,0x10                        ; 00458224
    CMP EAX,EDX                         ; 00458227
    JNZ 0x00458426                      ; 00458229
        ;   XREF to: 00458426 (CONDITIONAL_JUMP)  ; LAB_00458426
    MOV EDX,dword ptr [ESP + 0x44]      ; 0045822f
        ;   Label: LAB_0045822f
    MOV ECX,dword ptr [ESP + 0x48]      ; 00458233
    ADD EDX,0x4                         ; 00458237
    INC ECX                             ; 0045823a
    MOV dword ptr [ESP + 0x44],EDX      ; 0045823b
    MOV dword ptr [ESP + 0x48],ECX      ; 0045823f
    CMP EDI,ECX                         ; 00458243
    JG 0x004581d9                       ; 00458245
        ;   XREF to: 004581d9 (CONDITIONAL_JUMP)  ; LAB_004581d9
    MOV EDI,dword ptr [0x01b4d1b4]      ; 00458247 | DAT_01b4d1b4
        ;   Label: LAB_00458247
    XOR ESI,ESI                         ; 0045824d
    XOR EAX,EAX                         ; 0045824f
    MOV dword ptr [0x01b4d768],ESI      ; 00458251 | DAT_01b4d768
    MOV ESI,0x1b4cd34                   ; 00458257
    TEST EBP,EBP                        ; 0045825c
    JLE 0x00458531                      ; 0045825e
        ;   XREF to: 00458531 (CONDITIONAL_JUMP)  ; LAB_00458531
    CMP EDI,dword ptr [ESI]             ; 00458264 | DAT_01b4cd34 | DAT_01b4cd7c
        ;   Label: LAB_00458264
    JNZ 0x00458525                      ; 00458266
        ;   XREF to: 00458525 (CONDITIONAL_JUMP)  ; LAB_00458525
    TEST ESI,ESI                        ; 0045826c
    JZ 0x00458525                       ; 0045826e
        ;   XREF to: 00458525 (CONDITIONAL_JUMP)  ; LAB_00458525
    MOV dword ptr [ESP + 0x60],ESI      ; 00458274 | DAT_01b4cd34 | DAT_01b4cd7c
        ;   Label: LAB_00458274
    MOV dword ptr [0x01b4cd30],EBP      ; 00458278 | DAT_01b4cd30
    TEST ESI,ESI                        ; 0045827e
    JZ 0x00458105                       ; 00458280
        ;   XREF to: 00458105 (CONDITIONAL_JUMP)  ; LAB_00458105
    MOV EAX,0x1b4cd34                   ; 00458286
    MOV EBX,dword ptr [0x01b4d1b4]      ; 0045828b | DAT_01b4d1b4
    MOV ECX,ESI                         ; 00458291
    XOR EDX,EDX                         ; 00458293
    TEST EBP,EBP                        ; 00458295
    JLE 0x00458544                      ; 00458297
        ;   XREF to: 00458544 (CONDITIONAL_JUMP)  ; LAB_00458544
    CMP EBX,dword ptr [EAX]             ; 0045829d | DAT_01b4cd34 | DAT_01b4cd7c
        ;   Label: LAB_0045829d
    JNZ 0x00458538                      ; 0045829f
        ;   XREF to: 00458538 (CONDITIONAL_JUMP)  ; LAB_00458538
    CMP EAX,ECX                         ; 004582a5
    JZ 0x00458538                       ; 004582a7
        ;   XREF to: 00458538 (CONDITIONAL_JUMP)  ; LAB_00458538
    MOV dword ptr [ESP + 0x5c],EAX      ; 004582ad | DAT_01b4cd34 | DAT_01b4cd7c
        ;   Label: LAB_004582ad
    MOV dword ptr [0x01b4cd30],EBP      ; 004582b1 | DAT_01b4cd30
    TEST EAX,EAX                        ; 004582b7
    JZ 0x00458105                       ; 004582b9
        ;   XREF to: 00458105 (CONDITIONAL_JUMP)  ; LAB_00458105
    MOV EAX,[0x01b4d1b4]                ; 004582bf | DAT_01b4d1b4
    MOV dword ptr [ESP + 0x58],EAX      ; 004582c4
        ;   Label: LAB_004582c4
    MOV EDX,dword ptr [ESP + 0x60]      ; 004582c8
    MOV EAX,dword ptr [ESP + 0x58]      ; 004582cc
    MOV ESI,dword ptr [EDX + 0x4]       ; 004582d0
    MOV dword ptr [0x01b4cd30],EBP      ; 004582d3 | DAT_01b4cd30
    CMP EAX,ESI                         ; 004582d9
    JL 0x0045831a                       ; 004582db
        ;   XREF to: 0045831a (CONDITIONAL_JUMP)  ; LAB_0045831a
    MOV ECX,dword ptr [ESP + 0x5c]      ; 004582dd
    MOV EBX,EAX                         ; 004582e1
    MOV dword ptr [EDX],0xffffffff      ; 004582e3
    MOV EAX,0x1b4cd34                   ; 004582e9
    XOR EDX,EDX                         ; 004582ee
    TEST EBP,EBP                        ; 004582f0
    JLE 0x00458557                      ; 004582f2
        ;   XREF to: 00458557 (CONDITIONAL_JUMP)  ; LAB_00458557
    CMP EBX,dword ptr [EAX]             ; 004582f8 | DAT_01b4cd34 | DAT_01b4cd7c
        ;   Label: LAB_004582f8
    JNZ 0x0045854b                      ; 004582fa
        ;   XREF to: 0045854b (CONDITIONAL_JUMP)  ; LAB_0045854b
    CMP EAX,ECX                         ; 00458300
    JZ 0x0045854b                       ; 00458302
        ;   XREF to: 0045854b (CONDITIONAL_JUMP)  ; LAB_0045854b
    MOV dword ptr [ESP + 0x60],EAX      ; 00458308 | DAT_01b4cd34 | DAT_01b4cd7c
        ;   Label: LAB_00458308
    MOV dword ptr [0x01b4cd30],EBP      ; 0045830c | DAT_01b4cd30
    TEST EAX,EAX                        ; 00458312
    JZ 0x00458105                       ; 00458314
        ;   XREF to: 00458105 (CONDITIONAL_JUMP)  ; LAB_00458105
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0045831a
        ;   Label: LAB_0045831a
    MOV EAX,dword ptr [ESP + 0x58]      ; 0045831e
    CMP EAX,dword ptr [EDX + 0x4]       ; 00458322
    JL 0x0045836a                       ; 00458325
        ;   XREF to: 0045836a (CONDITIONAL_JUMP)  ; LAB_0045836a
    MOV EBX,dword ptr [ESP + 0x60]      ; 00458327
    MOV EBP,dword ptr [0x01b4cd30]      ; 0045832b | DAT_01b4cd30
    MOV ECX,EAX                         ; 00458331
    MOV dword ptr [EDX],0xffffffff      ; 00458333
    MOV EAX,0x1b4cd34                   ; 00458339
    XOR EDX,EDX                         ; 0045833e
    TEST EBP,EBP                        ; 00458340
    JLE 0x0045856a                      ; 00458342
        ;   XREF to: 0045856a (CONDITIONAL_JUMP)  ; LAB_0045856a
    CMP ECX,dword ptr [EAX]             ; 00458348 | DAT_01b4cd34 | DAT_01b4cd7c
        ;   Label: LAB_00458348
    JNZ 0x0045855e                      ; 0045834a
        ;   XREF to: 0045855e (CONDITIONAL_JUMP)  ; LAB_0045855e
    CMP EAX,EBX                         ; 00458350
    JZ 0x0045855e                       ; 00458352
        ;   XREF to: 0045855e (CONDITIONAL_JUMP)  ; LAB_0045855e
    MOV dword ptr [ESP + 0x5c],EAX      ; 00458358 | DAT_01b4cd7c | DAT_01b4cd34
        ;   Label: LAB_00458358
    MOV dword ptr [0x01b4cd30],EBP      ; 0045835c | DAT_01b4cd30
    TEST EAX,EAX                        ; 00458362
    JZ 0x00458105                       ; 00458364
        ;   XREF to: 00458105 (CONDITIONAL_JUMP)  ; LAB_00458105
    MOV EDI,dword ptr [ESP + 0x5c]      ; 0045836a
        ;   Label: LAB_0045836a
    MOV ESI,dword ptr [ESP + 0x60]      ; 0045836e
    MOV EBX,dword ptr [ESP + 0x58]      ; 00458372
    CALL engine_special.cpp_renderScanline_FUN_00530710 ; 00458376
        ;   XREF to: 00530710 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderScanline_FUN_00530710(SSoftwareEdge * left, SSoftwareEdge * right, int scanline_y)
    CMP dword ptr [0x01b4d768],0x0      ; 0045837b | DAT_01b4d768
    JNZ 0x00458105                      ; 00458382
        ;   XREF to: 00458105 (CONDITIONAL_JUMP)  ; LAB_00458105
    MOV EDX,dword ptr [ESP + 0x60]      ; 00458388
    MOV EAX,dword ptr [ESP + 0x60]      ; 0045838c
    MOV ECX,dword ptr [EDX + 0x8]       ; 00458390
    MOV EAX,dword ptr [EAX + 0xc]       ; 00458393
    MOV EBX,dword ptr [EDX + 0x28]      ; 00458396
    ADD ECX,EAX                         ; 00458399
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0045839b
    MOV dword ptr [EDX + 0x8],ECX       ; 0045839e
    ADD EBX,EAX                         ; 004583a1
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004583a3
    MOV dword ptr [EDX + 0x28],EBX      ; 004583a7
    MOV EDX,dword ptr [ESP + 0x5c]      ; 004583aa
    MOV EAX,dword ptr [EAX + 0xc]       ; 004583ae
    MOV ESI,dword ptr [EDX + 0x8]       ; 004583b1
    MOV EDI,dword ptr [EDX + 0x28]      ; 004583b4
    ADD ESI,EAX                         ; 004583b7
    MOV EAX,dword ptr [EDX + 0x2c]      ; 004583b9
    MOV EBP,dword ptr [0x01b4cd30]      ; 004583bc | DAT_01b4cd30
    ADD EDI,EAX                         ; 004583c2
    MOV EAX,dword ptr [ESP + 0x58]      ; 004583c4
    MOV dword ptr [EDX + 0x8],ESI       ; 004583c8
    INC EAX                             ; 004583cb
    MOV dword ptr [EDX + 0x28],EDI      ; 004583cc
    JMP 0x004582c4                      ; 004583cf
        ;   XREF to: 004582c4 (UNCONDITIONAL_JUMP)  ; LAB_004582c4
    XOR ESI,ESI                         ; 004583d4
        ;   Label: LAB_004583d4
    TEST EDI,EDI                        ; 004583d6
    JLE 0x004581b0                      ; 004583d8
        ;   XREF to: 004581b0 (CONDITIONAL_JUMP)  ; LAB_004581b0
    MOV EBX,dword ptr [ESP + 0x78]      ; 004583de
    MOV dword ptr [0x01b4cd30],EBP      ; 004583e2 | DAT_01b4cd30
    IMUL EAX,dword ptr [EBX],0x30       ; 004583e8
        ;   Label: LAB_004583e8
    PUSH 0x1                            ; 004583eb
    ADD EAX,0x5c5014                    ; 004583ed | DAT_005c5014
    PUSH EAX                            ; 004583f2
    ADD EBX,0x4                         ; 004583f3
    INC ESI                             ; 004583f6
    CALL engine_prim.c_replaceWWithDepth_FUN_004f99d0 ; 004583f7
        ;   XREF to: 004f99d0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_replaceWWithDepth_FUN_004f99d0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 004583fc
    CMP ESI,EDI                         ; 004583ff
    JL 0x004583e8                       ; 00458401
        ;   XREF to: 004583e8 (CONDITIONAL_JUMP)  ; LAB_004583e8
    JMP 0x004581b0                      ; 00458403
        ;   XREF to: 004581b0 (UNCONDITIONAL_JUMP)  ; LAB_004581b0
    MOV EAX,[0x01c039a4]                ; 00458408 | g_VertexPreprocessMode
        ;   Label: LAB_00458408
    CMP EAX,0x1                         ; 0045840d
    JC 0x004581b0                       ; 00458410
        ;   XREF to: 004581b0 (CONDITIONAL_JUMP)  ; LAB_004581b0
    JBE 0x0045817b                      ; 00458416
        ;   XREF to: 0045817b (CONDITIONAL_JUMP)  ; LAB_0045817b
    CMP EAX,0x6                         ; 0045841c
    JZ 0x004583d4                       ; 0045841f
        ;   XREF to: 004583d4 (CONDITIONAL_JUMP)  ; LAB_004583d4
    JMP 0x004581b0                      ; 00458421
        ;   XREF to: 004581b0 (UNCONDITIONAL_JUMP)  ; LAB_004581b0
    MOV ECX,ESI                         ; 00458426
        ;   Label: LAB_00458426
    MOV ECX,dword ptr [ECX + 0x14]      ; 00458428 | DAT_005c5028
    MOV EBX,dword ptr [ESP + 0x54]      ; 0045842b
    CMP ECX,dword ptr [EBX + 0x14]      ; 0045842f | DAT_005c5028
    JLE 0x00458444                      ; 00458432
        ;   XREF to: 00458444 (CONDITIONAL_JUMP)  ; LAB_00458444
    MOV ECX,dword ptr [ESP + 0x50]      ; 00458434
    MOV ESI,EBX                         ; 00458438
    MOV dword ptr [ESP + 0x4c],ECX      ; 0045843a
    MOV ECX,EAX                         ; 0045843e
    MOV EAX,EDX                         ; 00458440
    MOV EDX,ECX                         ; 00458442
    IMUL EBX,EBP,0x48                   ; 00458444
        ;   Label: LAB_00458444
    ADD EBX,0x1b4cd34                   ; 00458447
    MOV dword ptr [EBX],EAX             ; 0045844d | DAT_01b4cd34
    MOV ECX,dword ptr [0x01b4d1b4]      ; 0045844f | DAT_01b4d1b4
    MOV dword ptr [EBX + 0x4],EDX       ; 00458455
    CMP EAX,ECX                         ; 00458458
    JGE 0x00458461                      ; 0045845a
        ;   XREF to: 00458461 (CONDITIONAL_JUMP)  ; LAB_00458461
    MOV [0x01b4d1b4],EAX                ; 0045845c | DAT_01b4d1b4
    CMP EDX,dword ptr [0x01b4d1b8]      ; 00458461 | DAT_01b4d1b8
        ;   Label: LAB_00458461
    JLE 0x0045846f                      ; 00458467
        ;   XREF to: 0045846f (CONDITIONAL_JUMP)  ; LAB_0045846f
    MOV dword ptr [0x01b4d1b8],EDX      ; 00458469 | DAT_01b4d1b8
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0045846f
        ;   Label: LAB_0045846f
    MOV EDX,dword ptr [ESI + 0x14]      ; 00458473 | DAT_005c5028
    MOV ECX,dword ptr [ECX + 0x14]      ; 00458476 | DAT_005c5028
    SUB ECX,EDX                         ; 00458479
    CMP ECX,0x10000                     ; 0045847b
    JNC 0x00458515                      ; 00458481
        ;   XREF to: 00458515 (CONDITIONAL_JUMP)  ; LAB_00458515
    XOR ECX,ECX                         ; 00458487
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00458489
        ;   Label: LAB_00458489
    MOV EDX,dword ptr [ESI + 0x10]      ; 0045848d | DAT_005c5024
    MOV EAX,dword ptr [EAX + 0x10]      ; 00458490 | DAT_005c5024
    SUB EAX,EDX                         ; 00458493
    MOV EDX,EAX                         ; 00458495
    MOV EAX,ECX                         ; 00458497
    MOV dword ptr [0x01b4cd30],EBP      ; 00458499 | DAT_01b4cd30
    IMUL EDX                            ; 0045849f
    SHRD EAX,EDX,0x10                   ; 004584a1
    MOV dword ptr [EBX + 0xc],EAX       ; 004584a5
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004584a8
    MOV EDX,dword ptr [ESI + 0x8]       ; 004584ac | DAT_005c501c
    MOV EAX,dword ptr [EAX + 0x8]       ; 004584af | DAT_005c501c
    SUB EAX,EDX                         ; 004584b2
    MOV EDX,EAX                         ; 004584b4
    SHL EDX,0x8                         ; 004584b6
    MOV EAX,ECX                         ; 004584b9
    IMUL EDX                            ; 004584bb
    SHRD EAX,EDX,0x10                   ; 004584bd
    MOV dword ptr [EBX + 0x2c],EAX      ; 004584c1
    MOV ECX,dword ptr [ESI + 0x14]      ; 004584c4 | DAT_005c5028
    AND ECX,0xffff                      ; 004584c7
    XOR CX,0xffff                       ; 004584cd
    MOV EDX,dword ptr [EBX + 0xc]       ; 004584d1
    MOV EAX,ECX                         ; 004584d4
    IMUL EDX                            ; 004584d6
    SHRD EAX,EDX,0x10                   ; 004584d8
    MOV dword ptr [ESP + 0x40],EAX      ; 004584dc
    MOV EDX,dword ptr [ESP + 0x40]      ; 004584e0
    MOV EAX,dword ptr [ESI + 0x10]      ; 004584e4 | DAT_005c5024
    ADD EAX,EDX                         ; 004584e7
    MOV dword ptr [EBX + 0x8],EAX       ; 004584e9
    MOV ESI,dword ptr [ESI + 0x8]       ; 004584ec | DAT_005c501c
    MOV EAX,[0x01b4d1fc]                ; 004584ef | DAT_01b4d1fc
    SHL ESI,0x8                         ; 004584f4
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004584f7
    SUB ESI,EAX                         ; 004584fa
    MOV EAX,ECX                         ; 004584fc
    IMUL EDX                            ; 004584fe
    SHRD EAX,EDX,0x10                   ; 00458500
    MOV EBP,dword ptr [0x01b4cd30]      ; 00458504 | DAT_01b4cd30
    ADD ESI,EAX                         ; 0045850a
    INC EBP                             ; 0045850c
    MOV dword ptr [EBX + 0x28],ESI      ; 0045850d
    JMP 0x0045822f                      ; 00458510
        ;   XREF to: 0045822f (UNCONDITIONAL_JUMP)  ; LAB_0045822f
    MOV EAX,0xffffffff                  ; 00458515
        ;   Label: LAB_00458515
    XOR EDX,EDX                         ; 0045851a
    DIV ECX                             ; 0045851c
    MOV ECX,EAX                         ; 0045851e
    JMP 0x00458489                      ; 00458520
        ;   XREF to: 00458489 (UNCONDITIONAL_JUMP)  ; LAB_00458489
    INC EAX                             ; 00458525
        ;   Label: LAB_00458525
    ADD ESI,0x48                        ; 00458526
    CMP EAX,EBP                         ; 00458529
    JL 0x00458264                       ; 0045852b
        ;   XREF to: 00458264 (CONDITIONAL_JUMP)  ; LAB_00458264
    XOR ESI,ESI                         ; 00458531
        ;   Label: LAB_00458531
    JMP 0x00458274                      ; 00458533
        ;   XREF to: 00458274 (UNCONDITIONAL_JUMP)  ; LAB_00458274
    INC EDX                             ; 00458538
        ;   Label: LAB_00458538
    ADD EAX,0x48                        ; 00458539
    CMP EDX,EBP                         ; 0045853c
    JL 0x0045829d                       ; 0045853e
        ;   XREF to: 0045829d (CONDITIONAL_JUMP)  ; LAB_0045829d
    XOR EAX,EAX                         ; 00458544
        ;   Label: LAB_00458544
    JMP 0x004582ad                      ; 00458546
        ;   XREF to: 004582ad (UNCONDITIONAL_JUMP)  ; LAB_004582ad
    INC EDX                             ; 0045854b
        ;   Label: LAB_0045854b
    ADD EAX,0x48                        ; 0045854c
    CMP EDX,EBP                         ; 0045854f
    JL 0x004582f8                       ; 00458551
        ;   XREF to: 004582f8 (CONDITIONAL_JUMP)  ; LAB_004582f8
    XOR EAX,EAX                         ; 00458557
        ;   Label: LAB_00458557
    JMP 0x00458308                      ; 00458559
        ;   XREF to: 00458308 (UNCONDITIONAL_JUMP)  ; LAB_00458308
    INC EDX                             ; 0045855e
        ;   Label: LAB_0045855e
    ADD EAX,0x48                        ; 0045855f
    CMP EDX,EBP                         ; 00458562
    JL 0x00458348                       ; 00458564
        ;   XREF to: 00458348 (CONDITIONAL_JUMP)  ; LAB_00458348
    XOR EAX,EAX                         ; 0045856a
        ;   Label: LAB_0045856a
    JMP 0x00458358                      ; 0045856c
        ;   XREF to: 00458358 (UNCONDITIONAL_JUMP)  ; LAB_00458358

