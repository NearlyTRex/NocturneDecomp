; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050(CEditorTools *this_ptr,CVector3f *corner1,CVector3f *corner2,int color_value)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   corner1
; CVector3f *      Stack[0xc]:4   corner2
; int              Stack[0x10]:4   color_value
; Local Variables:
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
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
;   core_setedit.cpp_CDemonSet_showRoomEditor_FUN_00581aa0 at 00581da5
;   core_setedit.cpp_CDemonSet_showVdirBoxEditor_FUN_00583170 at 00583571
;   shape_edittool.cpp_CEditorTools_drawCenteredWireframeCube_FUN_004a2510 at 004a256e
;
; Referenced Globals:
;   float g_CubeEdgeScale1 = 0.2000000
;   float g_CubeEdgeScale2 = 0.8000000
;   WatcomTypeInfo g_CVectorTypeInfo
;   float g_WorldToScreenScale2 = 256
;   SRenderVertex[16] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
;   undefined4 DAT_00688044
;   undefined4 DAT_00688048
;   int g_ActiveRenderColor
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005fe667
;   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
;   engine_matrix.c_transformToCache_FUN_0050cd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2050
        ;   Label: shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
    PUSH ESI                            ; 004a2051
    PUSH EDI                            ; 004a2052
    PUSH EBP                            ; 004a2053
    SUB ESP,0x100                       ; 004a2054
    MOV EBX,dword ptr [ESP + 0x118]     ; 004a205a
    MOV ESI,dword ptr [ESP + 0x11c]     ; 004a2061
    PUSH 0x6598c0                       ; 004a2068 | g_CVectorTypeInfo
    PUSH 0x8                            ; 004a206d
    LEA EAX,[ESP + 0x8]                 ; 004a206f
    PUSH EAX                            ; 004a2073
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004a2074
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004a2079
    XOR EAX,EAX                         ; 004a207c
    MOV EDX,dword ptr [ESI]             ; 004a207e
        ;   Label: LAB_004a207e
    MOV dword ptr [ESP + 0xf4],EDX      ; 004a2080
    IMUL EDX,EAX,0xc                    ; 004a2087
    MOV EDI,dword ptr [ESP + 0xf4]      ; 004a208a
        ;   Label: LAB_004a208a
    MOV dword ptr [ESP + EDX*0x1],EDI   ; 004a2091
    TEST AL,0x2                         ; 004a2094
    JNZ 0x004a24fb                      ; 004a2096
        ;   XREF to: 004a24fb (CONDITIONAL_JUMP)  ; LAB_004a24fb
    MOV EDI,dword ptr [ESI + 0x4]       ; 004a209c
    MOV dword ptr [ESP + 0xfc],EDI      ; 004a209f
        ;   Label: LAB_004a209f
    MOV EDI,dword ptr [ESP + 0xfc]      ; 004a20a6
    MOV dword ptr [ESP + EDX*0x1 + 0x4],EDI ; 004a20ad
    TEST AL,0x4                         ; 004a20b1
    JZ 0x004a2503                       ; 004a20b3
        ;   XREF to: 004a2503 (CONDITIONAL_JUMP)  ; LAB_004a2503
    MOV EDI,dword ptr [EBX + 0x8]       ; 004a20b9
    MOV dword ptr [ESP + 0xf8],EDI      ; 004a20bc
        ;   Label: LAB_004a20bc
    ADD EDX,0xc                         ; 004a20c3
    MOV EDI,dword ptr [ESP + 0xf8]      ; 004a20c6
    INC EAX                             ; 004a20cd
    MOV dword ptr [ESP + EDX*0x1 + -0x4],EDI ; 004a20ce
    CMP EAX,0x8                         ; 004a20d2
    JL 0x004a24e5                       ; 004a20d5
        ;   XREF to: 004a24e5 (CONDITIONAL_JUMP)  ; LAB_004a24e5
    MOV EAX,dword ptr [ESP + 0x120]     ; 004a20db
    XOR EDX,EDX                         ; 004a20e2
    MOV EBP,ESP                         ; 004a20e4
    MOV dword ptr [ESP + 0xf0],EDX      ; 004a20e6
    MOV [0x02d02570],EAX                ; 004a20ed | g_ActiveRenderColor
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004a20f2
        ;   Label: LAB_004a20f2
    XOR AL,0x1                          ; 004a20f9
    IMUL EAX,EAX,0xc                    ; 004a20fb
    MOV ESI,ESP                         ; 004a20fe
    LEA EBX,[ESP + 0x84]                ; 004a2100
    ADD ESI,EAX                         ; 004a2107
    MOV EAX,EBP                         ; 004a2109
    FLD float ptr [EAX]                 ; 004a210b
    FMUL float ptr [0x0065d44c]         ; 004a210d | g_WorldToScreenScale2
    FISTP dword ptr [EBX]               ; 004a2113
    FLD float ptr [EAX + 0x4]           ; 004a2115
    FMUL float ptr [0x0065d44c]         ; 004a2118 | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x4]         ; 004a211e
    FLD float ptr [EAX + 0x8]           ; 004a2121
    FMUL float ptr [0x0065d44c]         ; 004a2124 | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x8]         ; 004a212a
    LEA EAX,[ESP + 0x84]                ; 004a212d
    PUSH EAX                            ; 004a2134
    PUSH 0x0                            ; 004a2135
    CALL engine_matrix.c_transformToCache_FUN_0050cd70 ; 004a2137
        ;   XREF to: 0050cd70 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_0050cd70(int cacheIndex, CVector3i * inputPoint)
    FLD float ptr [ESI]                 ; 004a213c
    FMUL float ptr [0x006235c6]         ; 004a213e | g_CubeEdgeScale1
    ADD ESP,0x8                         ; 004a2144
    FSTP float ptr [ESP + 0xa8]         ; 004a2147
    FLD float ptr [ESI + 0x4]           ; 004a214e
    FMUL float ptr [0x006235c6]         ; 004a2151 | g_CubeEdgeScale1
    FSTP float ptr [ESP + 0xac]         ; 004a2157
    FLD float ptr [ESI + 0x8]           ; 004a215e
    FMUL float ptr [0x006235c6]         ; 004a2161 | g_CubeEdgeScale1
    FSTP float ptr [ESP + 0xb0]         ; 004a2167
    FLD float ptr [EBP]                 ; 004a216e
    FMUL float ptr [0x006235ca]         ; 004a2171 | g_CubeEdgeScale2
    FSTP float ptr [ESP + 0xd8]         ; 004a2177
    FLD float ptr [EBP + 0x4]           ; 004a217e
    FMUL float ptr [0x006235ca]         ; 004a2181 | g_CubeEdgeScale2
    FSTP float ptr [ESP + 0xdc]         ; 004a2187
    FLD float ptr [EBP + 0x8]           ; 004a218e
    FMUL float ptr [0x006235ca]         ; 004a2191 | g_CubeEdgeScale2
    LEA EBX,[ESP + 0x84]                ; 004a2197
    LEA EAX,[ESP + 0xcc]                ; 004a219e
    FLD float ptr [ESP + 0xd8]          ; 004a21a5
    FADD float ptr [ESP + 0xa8]         ; 004a21ac
    FLD float ptr [ESP + 0xdc]          ; 004a21b3
    FXCH                                ; 004a21ba
    FSTP float ptr [ESP + 0xcc]         ; 004a21bc
    FADD float ptr [ESP + 0xac]         ; 004a21c3
    FXCH                                ; 004a21ca
    FST float ptr [ESP + 0xe0]          ; 004a21cc
    FADD float ptr [ESP + 0xb0]         ; 004a21d3
    FXCH                                ; 004a21da
    FSTP float ptr [ESP + 0xd0]         ; 004a21dc
    FSTP float ptr [ESP + 0xd4]         ; 004a21e3
    FLD float ptr [EAX]                 ; 004a21ea
    FMUL float ptr [0x0065d44c]         ; 004a21ec | g_WorldToScreenScale2
    FISTP dword ptr [EBX]               ; 004a21f2
    FLD float ptr [EAX + 0x4]           ; 004a21f4
    FMUL float ptr [0x0065d44c]         ; 004a21f7 | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x4]         ; 004a21fd
    FLD float ptr [EAX + 0x8]           ; 004a2200
    FMUL float ptr [0x0065d44c]         ; 004a2203 | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x8]         ; 004a2209
    LEA EAX,[ESP + 0x84]                ; 004a220c
    PUSH EAX                            ; 004a2213
    PUSH 0x1                            ; 004a2214
    CALL engine_matrix.c_transformToCache_FUN_0050cd70 ; 004a2216
        ;   XREF to: 0050cd70 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_0050cd70(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 004a221b
    MOV ESI,0x688044                    ; 004a221e | DAT_00688044
    SUB ESP,0x30                        ; 004a2223
    MOV ECX,0xc                         ; 004a2226
    MOV EDI,ESP                         ; 004a222b
    MOVSD.REP ES:EDI,ESI                ; 004a222d | DAT_00688044 | DAT_00688048
    SUB ESP,0x30                        ; 004a222f
    MOV ECX,0xc                         ; 004a2232
    MOV ESI,0x688014                    ; 004a2237 | g_RenderVertexBuffer
    MOV EDI,ESP                         ; 004a223c
    MOVSD.REP ES:EDI,ESI                ; 004a223e | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 004a2240
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 004a2245
    MOV ESI,dword ptr [ESP + 0xf0]      ; 004a2248
    XOR SI,0x2                          ; 004a224f
    IMUL ESI,ESI,0xc                    ; 004a2253
    MOV EAX,ESP                         ; 004a2256
    LEA EBX,[ESP + 0x60]                ; 004a2258
    ADD ESI,EAX                         ; 004a225c
    MOV EAX,EBP                         ; 004a225e
    FLD float ptr [EAX]                 ; 004a2260
    FMUL float ptr [0x0065d44c]         ; 004a2262 | g_WorldToScreenScale2
    FISTP dword ptr [EBX]               ; 004a2268
    FLD float ptr [EAX + 0x4]           ; 004a226a
    FMUL float ptr [0x0065d44c]         ; 004a226d | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x4]         ; 004a2273
    FLD float ptr [EAX + 0x8]           ; 004a2276
    FMUL float ptr [0x0065d44c]         ; 004a2279 | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x8]         ; 004a227f
    LEA EAX,[ESP + 0x60]                ; 004a2282
    PUSH EAX                            ; 004a2286
    PUSH 0x0                            ; 004a2287
    CALL engine_matrix.c_transformToCache_FUN_0050cd70 ; 004a2289
        ;   XREF to: 0050cd70 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_0050cd70(int cacheIndex, CVector3i * inputPoint)
    FLD float ptr [ESI]                 ; 004a228e
    FMUL float ptr [0x006235c6]         ; 004a2290 | g_CubeEdgeScale1
    ADD ESP,0x8                         ; 004a2296
    FSTP float ptr [ESP + 0x78]         ; 004a2299
    FLD float ptr [ESI + 0x4]           ; 004a229d
    FMUL float ptr [0x006235c6]         ; 004a22a0 | g_CubeEdgeScale1
    FSTP float ptr [ESP + 0x7c]         ; 004a22a6
    FLD float ptr [ESI + 0x8]           ; 004a22aa
    FMUL float ptr [0x006235c6]         ; 004a22ad | g_CubeEdgeScale1
    FSTP float ptr [ESP + 0x80]         ; 004a22b3
    FLD float ptr [EBP]                 ; 004a22ba
    FMUL float ptr [0x006235ca]         ; 004a22bd | g_CubeEdgeScale2
    FSTP float ptr [ESP + 0x9c]         ; 004a22c3
    FLD float ptr [EBP + 0x4]           ; 004a22ca
    FMUL float ptr [0x006235ca]         ; 004a22cd | g_CubeEdgeScale2
    FSTP float ptr [ESP + 0xa0]         ; 004a22d3
    FLD float ptr [EBP + 0x8]           ; 004a22da
    FMUL float ptr [0x006235ca]         ; 004a22dd | g_CubeEdgeScale2
    FLD float ptr [ESP + 0x9c]          ; 004a22e3
    FADD float ptr [ESP + 0x78]         ; 004a22ea
    FLD float ptr [ESP + 0xa0]          ; 004a22ee
    FXCH                                ; 004a22f5
    FSTP float ptr [ESP + 0xe4]         ; 004a22f7
    FADD float ptr [ESP + 0x7c]         ; 004a22fe
    FXCH                                ; 004a2302
    FST float ptr [ESP + 0xa4]          ; 004a2304
    FADD float ptr [ESP + 0x80]         ; 004a230b
    FXCH                                ; 004a2312
    FSTP float ptr [ESP + 0xe8]         ; 004a2314
    FSTP float ptr [ESP + 0xec]         ; 004a231b
    LEA EBX,[ESP + 0x60]                ; 004a2322
    LEA EAX,[ESP + 0xe4]                ; 004a2326
    FLD float ptr [EAX]                 ; 004a232d
    FMUL float ptr [0x0065d44c]         ; 004a232f | g_WorldToScreenScale2
    FISTP dword ptr [EBX]               ; 004a2335
    FLD float ptr [EAX + 0x4]           ; 004a2337
    FMUL float ptr [0x0065d44c]         ; 004a233a | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x4]         ; 004a2340
    FLD float ptr [EAX + 0x8]           ; 004a2343
    FMUL float ptr [0x0065d44c]         ; 004a2346 | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x8]         ; 004a234c
    LEA EAX,[ESP + 0x60]                ; 004a234f
    PUSH EAX                            ; 004a2353
    PUSH 0x1                            ; 004a2354
    CALL engine_matrix.c_transformToCache_FUN_0050cd70 ; 004a2356
        ;   XREF to: 0050cd70 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_0050cd70(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 004a235b
    MOV ESI,0x688044                    ; 004a235e | DAT_00688044
    SUB ESP,0x30                        ; 004a2363
    MOV ECX,0xc                         ; 004a2366
    MOV EDI,ESP                         ; 004a236b
    MOVSD.REP ES:EDI,ESI                ; 004a236d | DAT_00688044 | DAT_00688048
    SUB ESP,0x30                        ; 004a236f
    MOV ECX,0xc                         ; 004a2372
    MOV ESI,0x688014                    ; 004a2377 | g_RenderVertexBuffer
    MOV EDI,ESP                         ; 004a237c
    MOVSD.REP ES:EDI,ESI                ; 004a237e | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 004a2380
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 004a2385
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004a2388
    XOR AL,0x4                          ; 004a238f
    IMUL EAX,EAX,0xc                    ; 004a2391
    MOV ESI,ESP                         ; 004a2394
    LEA EBX,[ESP + 0xc0]                ; 004a2396
    ADD ESI,EAX                         ; 004a239d
    MOV EAX,EBP                         ; 004a239f
    FLD float ptr [EAX]                 ; 004a23a1
    FMUL float ptr [0x0065d44c]         ; 004a23a3 | g_WorldToScreenScale2
    FISTP dword ptr [EBX]               ; 004a23a9
    FLD float ptr [EAX + 0x4]           ; 004a23ab
    FMUL float ptr [0x0065d44c]         ; 004a23ae | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x4]         ; 004a23b4
    FLD float ptr [EAX + 0x8]           ; 004a23b7
    FMUL float ptr [0x0065d44c]         ; 004a23ba | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x8]         ; 004a23c0
    LEA EAX,[ESP + 0xc0]                ; 004a23c3
    PUSH EAX                            ; 004a23ca
    PUSH 0x0                            ; 004a23cb
    CALL engine_matrix.c_transformToCache_FUN_0050cd70 ; 004a23cd
        ;   XREF to: 0050cd70 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_0050cd70(int cacheIndex, CVector3i * inputPoint)
    FLD float ptr [0x006235c6]          ; 004a23d2 | g_CubeEdgeScale1
    FLD float ptr [ESI]                 ; 004a23d8
    FMUL ST1                            ; 004a23da
    ADD ESP,0x8                         ; 004a23dc
    FSTP float ptr [ESP + 0x90]         ; 004a23df
    FLD float ptr [ESI + 0x4]           ; 004a23e6
    FMUL ST1                            ; 004a23e9
    FSTP float ptr [ESP + 0x94]         ; 004a23eb
    FMUL float ptr [ESI + 0x8]          ; 004a23f2
    FSTP float ptr [ESP + 0x98]         ; 004a23f5
    FLD float ptr [0x006235ca]          ; 004a23fc | g_CubeEdgeScale2
    FLD float ptr [EBP]                 ; 004a2402
    FMUL ST1                            ; 004a2405
    FSTP float ptr [ESP + 0x6c]         ; 004a2407
    FLD float ptr [EBP + 0x4]           ; 004a240b
    FMUL ST1                            ; 004a240e
    FSTP float ptr [ESP + 0x70]         ; 004a2410
    FMUL float ptr [EBP + 0x8]          ; 004a2414
    LEA EBX,[ESP + 0xc0]                ; 004a2417
    LEA EAX,[ESP + 0xb4]                ; 004a241e
    FLD float ptr [ESP + 0x6c]          ; 004a2425
    FADD float ptr [ESP + 0x90]         ; 004a2429
    FLD float ptr [ESP + 0x70]          ; 004a2430
    FXCH                                ; 004a2434
    FSTP float ptr [ESP + 0xb4]         ; 004a2436
    FADD float ptr [ESP + 0x94]         ; 004a243d
    FXCH                                ; 004a2444
    FST float ptr [ESP + 0x74]          ; 004a2446
    FADD float ptr [ESP + 0x98]         ; 004a244a
    FXCH                                ; 004a2451
    FSTP float ptr [ESP + 0xb8]         ; 004a2453
    FSTP float ptr [ESP + 0xbc]         ; 004a245a
    FLD float ptr [EAX]                 ; 004a2461
    FMUL float ptr [0x0065d44c]         ; 004a2463 | g_WorldToScreenScale2
    FISTP dword ptr [EBX]               ; 004a2469
    FLD float ptr [EAX + 0x4]           ; 004a246b
    FMUL float ptr [0x0065d44c]         ; 004a246e | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x4]         ; 004a2474
    FLD float ptr [EAX + 0x8]           ; 004a2477
    FMUL float ptr [0x0065d44c]         ; 004a247a | g_WorldToScreenScale2
    FISTP dword ptr [EBX + 0x8]         ; 004a2480
    LEA EAX,[ESP + 0xc0]                ; 004a2483
    PUSH EAX                            ; 004a248a
    PUSH 0x1                            ; 004a248b
    CALL engine_matrix.c_transformToCache_FUN_0050cd70 ; 004a248d
        ;   XREF to: 0050cd70 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_0050cd70(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 004a2492
    MOV ESI,0x688044                    ; 004a2495 | DAT_00688044
    SUB ESP,0x30                        ; 004a249a
    MOV ECX,0xc                         ; 004a249d
    MOV EDI,ESP                         ; 004a24a2
    MOVSD.REP ES:EDI,ESI                ; 004a24a4 | DAT_00688044 | DAT_00688048
    SUB ESP,0x30                        ; 004a24a6
    MOV ECX,0xc                         ; 004a24a9
    MOV ESI,0x688014                    ; 004a24ae | g_RenderVertexBuffer
    MOV EDI,ESP                         ; 004a24b3
    MOVSD.REP ES:EDI,ESI                ; 004a24b5 | g_RenderVertexBuffer | g_RenderVertexBuffer[0].projected_vertex.transformed_y
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 004a24b7
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 004a24bc
    MOV ECX,dword ptr [ESP + 0xf0]      ; 004a24bf
    INC ECX                             ; 004a24c6
    ADD EBP,0xc                         ; 004a24c7
    MOV dword ptr [ESP + 0xf0],ECX      ; 004a24ca
    CMP ECX,0x8                         ; 004a24d1
    JL 0x004a20f2                       ; 004a24d4
        ;   XREF to: 004a20f2 (CONDITIONAL_JUMP)  ; LAB_004a20f2
    ADD ESP,0x100                       ; 004a24da
    POP EBP                             ; 004a24e0
    POP EDI                             ; 004a24e1
    POP ESI                             ; 004a24e2
    POP EBX                             ; 004a24e3
    RET                                 ; 004a24e4
    TEST AL,0x1                         ; 004a24e5
        ;   Label: LAB_004a24e5
    JZ 0x004a207e                       ; 004a24e7
        ;   XREF to: 004a207e (CONDITIONAL_JUMP)  ; LAB_004a207e
    MOV EDI,dword ptr [EBX]             ; 004a24ed
    MOV dword ptr [ESP + 0xf4],EDI      ; 004a24ef
    JMP 0x004a208a                      ; 004a24f6
        ;   XREF to: 004a208a (UNCONDITIONAL_JUMP)  ; LAB_004a208a
    MOV EDI,dword ptr [EBX + 0x4]       ; 004a24fb
        ;   Label: LAB_004a24fb
    JMP 0x004a209f                      ; 004a24fe
        ;   XREF to: 004a209f (UNCONDITIONAL_JUMP)  ; LAB_004a209f
    MOV EDI,dword ptr [ESI + 0x8]       ; 004a2503
        ;   Label: LAB_004a2503
    JMP 0x004a20bc                      ; 004a2506
        ;   XREF to: 004a20bc (UNCONDITIONAL_JUMP)  ; LAB_004a20bc

