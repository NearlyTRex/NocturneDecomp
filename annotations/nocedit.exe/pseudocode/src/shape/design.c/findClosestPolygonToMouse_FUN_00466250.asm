; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_design.c_findClosestPolygonToMouse_FUN_00466250(void)
;
; Local Variables:
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined1       Stack[-0xa0]:1  local_a0
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_design.c_mouseWheelPolygonReducer_FUN_004648e0 at 00464b4f
;   shape_design.c_polygonToolModeManager_FUN_00464c90 at 00464db4
;
; Referenced Globals:
;   float g_MouseWorldToScreenScale = 256
;   float g_MouseNormalToFixedPoint = 65535
;   float g_MousePlaneDistanceScale = 256
;   TerminatedCString s_mX_d_mY_d_0061c716
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
;   undefined4 DAT_00688024+3
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_y
;   SPolygonScreenData[20000] g_PolygonScreenCache
;   undefined4 DAT_015c48c8
;   undefined4 DAT_015c48cc
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   ... and 10 more
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_drawTextColor_FUN_00402430
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_matrix.c_transformToCache_FUN_0050cd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00466250
        ;   Label: shape_design.c_findClosestPolygonToMouse_FUN_00466250
    PUSH ESI                            ; 00466251
    PUSH EDI                            ; 00466252
    PUSH EBP                            ; 00466253
    MOV EBP,ESP                         ; 00466254
    SUB ESP,0xf4                        ; 00466256
    CMP dword ptr [0x016e990c],0x0      ; 0046625c | g_PolygonCount
    JNZ 0x00466271                      ; 00466263
        ;   XREF to: 00466271 (CONDITIONAL_JUMP)  ; LAB_00466271
    MOV dword ptr [EBP + -0x40],0xffffffff ; 00466265
    JMP 0x00466603                      ; 0046626c
        ;   XREF to: 00466603 (UNCONDITIONAL_JUMP)  ; LAB_00466603
    MOV dword ptr [EBP + -0x3c],0x0     ; 00466271
        ;   Label: LAB_00466271
    JMP 0x00466280                      ; 00466278
        ;   XREF to: 00466280 (UNCONDITIONAL_JUMP)  ; LAB_00466280
    MOV EAX,dword ptr [EBP + -0x3c]     ; 0046627a
        ;   Label: LAB_0046627a
    INC dword ptr [EBP + -0x3c]         ; 0046627d
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00466280
        ;   Label: LAB_00466280
    CMP EAX,dword ptr [0x01626408]      ; 00466283 | g_VertexCount
    JGE 0x004662f1                      ; 00466289
        ;   XREF to: 004662f1 (CONDITIONAL_JUMP)  ; LAB_004662f1
    IMUL EAX,dword ptr [EBP + -0x3c],0x14 ; 0046628b
    FLD float ptr [EAX + 0x162640c]     ; 0046628f | g_LoadedVertices
    FMUL float ptr [0x0061c70a]         ; 00466295 | g_MouseWorldToScreenScale
    CALL crt_math.c_round_FUN_005fe6b0  ; 0046629b
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0xffffff0c]  ; 004662a0
    IMUL EAX,dword ptr [EBP + -0x3c],0x14 ; 004662a6
    FLD float ptr [EAX + 0x1626410]     ; 004662aa | DAT_01626410
    FMUL float ptr [0x0061c70a]         ; 004662b0 | g_MouseWorldToScreenScale
    CALL crt_math.c_round_FUN_005fe6b0  ; 004662b6
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0xffffff10]  ; 004662bb
    IMUL EAX,dword ptr [EBP + -0x3c],0x14 ; 004662c1
    FLD float ptr [EAX + 0x1626414]     ; 004662c5 | g_LoadedVertices[0].vertex.z
    FMUL float ptr [0x0061c70a]         ; 004662cb | g_MouseWorldToScreenScale
    CALL crt_math.c_round_FUN_005fe6b0  ; 004662d1
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0xffffff14]  ; 004662d6
    LEA EAX,[EBP + 0xffffff0c]          ; 004662dc
    PUSH EAX                            ; 004662e2
    MOV EAX,dword ptr [EBP + -0x3c]     ; 004662e3
    PUSH EAX                            ; 004662e6
    CALL engine_matrix.c_transformToCache_FUN_0050cd70 ; 004662e7
        ;   XREF to: 0050cd70 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_0050cd70(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 004662ec
    JMP 0x0046627a                      ; 004662ef
        ;   XREF to: 0046627a (UNCONDITIONAL_JUMP)  ; LAB_0046627a
    MOV dword ptr [EBP + -0x3c],0x0     ; 004662f1
        ;   Label: LAB_004662f1
    JMP 0x00466300                      ; 004662f8
        ;   XREF to: 00466300 (UNCONDITIONAL_JUMP)  ; LAB_00466300
    MOV EAX,dword ptr [EBP + -0x3c]     ; 004662fa
        ;   Label: LAB_004662fa
    INC dword ptr [EBP + -0x3c]         ; 004662fd
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00466300
        ;   Label: LAB_00466300
    CMP EAX,dword ptr [0x016e990c]      ; 00466303 | g_PolygonCount
    JGE 0x0046646f                      ; 00466309
        ;   XREF to: 0046646f (CONDITIONAL_JUMP)  ; LAB_0046646f
    MOV EAX,dword ptr [EBP + -0x3c]     ; 0046630f
    MOV dword ptr [EBP + -0x28],EAX     ; 00466312
    MOV dword ptr [EBP + -0x38],0x0     ; 00466315
    MOV dword ptr [EBP + -0x2c],0x0     ; 0046631c
    JMP 0x0046632b                      ; 00466323
        ;   XREF to: 0046632b (UNCONDITIONAL_JUMP)  ; LAB_0046632b
    MOV EAX,dword ptr [EBP + -0x2c]     ; 00466325
        ;   Label: LAB_00466325
    INC dword ptr [EBP + -0x2c]         ; 00466328
    IMUL EDX,dword ptr [EBP + -0x28],0x184 ; 0046632b
        ;   Label: LAB_0046632b
    MOV EAX,dword ptr [EBP + -0x2c]     ; 00466332
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 00466335 | DAT_016e99b4
    JGE 0x00466365                      ; 0046633b
        ;   XREF to: 00466365 (CONDITIONAL_JUMP)  ; LAB_00466365
    IMUL EDX,dword ptr [EBP + -0x28],0x184 ; 0046633d
    MOV EAX,dword ptr [EBP + -0x2c]     ; 00466344
    SHL EAX,0x2                         ; 00466347
    ADD EAX,EDX                         ; 0046634a
    IMUL EAX,dword ptr [EAX + 0x16e99c8],0x30 ; 0046634c | DAT_016e99c8
    TEST byte ptr [EAX + 0x688027],0x80 ; 00466353 | DAT_00688024+3
    JZ 0x00466363                       ; 0046635a
        ;   XREF to: 00466363 (CONDITIONAL_JUMP)  ; LAB_00466363
    MOV dword ptr [EBP + -0x38],0x1     ; 0046635c
    JMP 0x00466325                      ; 00466363
        ;   XREF to: 00466325 (UNCONDITIONAL_JUMP)  ; LAB_00466325
        ;   Label: LAB_00466363
    CMP dword ptr [EBP + -0x38],0x0     ; 00466365
        ;   Label: LAB_00466365
    JZ 0x00466392                       ; 00466369
        ;   XREF to: 00466392 (CONDITIONAL_JUMP)  ; LAB_00466392
    MOV EAX,[0x00679394]                ; 0046636b | g_WindowWidth
    ADD EAX,EAX                         ; 00466370
    IMUL EDX,dword ptr [EBP + -0x3c],0x14 ; 00466372
    MOV dword ptr [EDX + 0x15c48c4],EAX ; 00466376 | g_PolygonScreenCache
    MOV EAX,[0x00679398]                ; 0046637c | g_WindowHeight
    ADD EAX,EAX                         ; 00466381
    IMUL EDX,dword ptr [EBP + -0x3c],0x14 ; 00466383
    MOV dword ptr [EDX + 0x15c48c8],EAX ; 00466387 | DAT_015c48c8
    JMP 0x0046646a                      ; 0046638d
        ;   XREF to: 0046646a (UNCONDITIONAL_JUMP)  ; LAB_0046646a
    MOV dword ptr [EBP + -0x20],0x0     ; 00466392
        ;   Label: LAB_00466392
    MOV dword ptr [EBP + -0x2c],0x0     ; 00466399
    JMP 0x004663a8                      ; 004663a0
        ;   XREF to: 004663a8 (UNCONDITIONAL_JUMP)  ; LAB_004663a8
    MOV EAX,dword ptr [EBP + -0x2c]     ; 004663a2
        ;   Label: LAB_004663a2
    INC dword ptr [EBP + -0x2c]         ; 004663a5
    IMUL EDX,dword ptr [EBP + -0x28],0x184 ; 004663a8
        ;   Label: LAB_004663a8
    MOV EAX,dword ptr [EBP + -0x2c]     ; 004663af
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 004663b2 | DAT_016e99b4
    JGE 0x004663de                      ; 004663b8
        ;   XREF to: 004663de (CONDITIONAL_JUMP)  ; LAB_004663de
    IMUL EDX,dword ptr [EBP + -0x28],0x184 ; 004663ba
    MOV EAX,dword ptr [EBP + -0x2c]     ; 004663c1
    SHL EAX,0x2                         ; 004663c4
    ADD EAX,EDX                         ; 004663c7
    IMUL EAX,dword ptr [EAX + 0x16e99c8],0x30 ; 004663c9 | DAT_016e99c8
    MOV EAX,dword ptr [EAX + 0x688024]  ; 004663d0 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    SAR EAX,0x10                        ; 004663d6
    ADD dword ptr [EBP + -0x20],EAX     ; 004663d9
    JMP 0x004663a2                      ; 004663dc
        ;   XREF to: 004663a2 (UNCONDITIONAL_JUMP)  ; LAB_004663a2
    IMUL ECX,dword ptr [EBP + -0x28],0x184 ; 004663de
        ;   Label: LAB_004663de
    MOV EAX,dword ptr [EBP + -0x20]     ; 004663e5
    MOV EDX,dword ptr [EBP + -0x20]     ; 004663e8
    SAR EDX,0x1f                        ; 004663eb
    IDIV dword ptr [ECX + 0x16e99b4]    ; 004663ee | DAT_016e99b4
    IMUL ECX,dword ptr [EBP + -0x3c],0x14 ; 004663f4
    MOV dword ptr [ECX + 0x15c48c4],EAX ; 004663f8 | g_PolygonScreenCache
    MOV dword ptr [EBP + -0x20],0x0     ; 004663fe
    MOV dword ptr [EBP + -0x2c],0x0     ; 00466405
    JMP 0x00466414                      ; 0046640c
        ;   XREF to: 00466414 (UNCONDITIONAL_JUMP)  ; LAB_00466414
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0046640e
        ;   Label: LAB_0046640e
    INC dword ptr [EBP + -0x2c]         ; 00466411
    IMUL EDX,dword ptr [EBP + -0x28],0x184 ; 00466414
        ;   Label: LAB_00466414
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0046641b
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 0046641e | DAT_016e99b4
    JGE 0x0046644a                      ; 00466424
        ;   XREF to: 0046644a (CONDITIONAL_JUMP)  ; LAB_0046644a
    IMUL EDX,dword ptr [EBP + -0x28],0x184 ; 00466426
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0046642d
    SHL EAX,0x2                         ; 00466430
    ADD EAX,EDX                         ; 00466433
    IMUL EAX,dword ptr [EAX + 0x16e99c8],0x30 ; 00466435 | DAT_016e99c8
    MOV EAX,dword ptr [EAX + 0x688028]  ; 0046643c | g_RenderVertexBuffer[0].projected_vertex.screen_y
    SAR EAX,0x10                        ; 00466442
    ADD dword ptr [EBP + -0x20],EAX     ; 00466445
    JMP 0x0046640e                      ; 00466448
        ;   XREF to: 0046640e (UNCONDITIONAL_JUMP)  ; LAB_0046640e
    IMUL ECX,dword ptr [EBP + -0x28],0x184 ; 0046644a
        ;   Label: LAB_0046644a
    MOV EAX,dword ptr [EBP + -0x20]     ; 00466451
    MOV EDX,dword ptr [EBP + -0x20]     ; 00466454
    SAR EDX,0x1f                        ; 00466457
    IDIV dword ptr [ECX + 0x16e99b4]    ; 0046645a | DAT_016e99b4
    IMUL ECX,dword ptr [EBP + -0x3c],0x14 ; 00466460
    MOV dword ptr [ECX + 0x15c48c8],EAX ; 00466464 | DAT_015c48c8
    JMP 0x004662fa                      ; 0046646a
        ;   XREF to: 004662fa (UNCONDITIONAL_JUMP)  ; LAB_004662fa
        ;   Label: LAB_0046646a
    MOV dword ptr [EBP + -0x4],0x40000000 ; 0046646f
        ;   Label: LAB_0046646f
    MOV dword ptr [EBP + -0x24],0xffffffff ; 00466476
    MOV EAX,dword ptr [EBP + -0x24]     ; 0046647d
    MOV dword ptr [EBP + -0x18],EAX     ; 00466480
    MOV EAX,dword ptr [EBP + -0x18]     ; 00466483
    MOV dword ptr [EBP + -0x14],EAX     ; 00466486
    MOV EAX,dword ptr [EBP + -0x14]     ; 00466489
    MOV dword ptr [EBP + -0x10],EAX     ; 0046648c
    MOV dword ptr [EBP + -0x3c],0x0     ; 0046648f
    JMP 0x0046649e                      ; 00466496
        ;   XREF to: 0046649e (UNCONDITIONAL_JUMP)  ; LAB_0046649e
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00466498
        ;   Label: LAB_00466498
    INC dword ptr [EBP + -0x3c]         ; 0046649b
    MOV EAX,dword ptr [EBP + -0x3c]     ; 0046649e
        ;   Label: LAB_0046649e
    CMP EAX,dword ptr [0x016e990c]      ; 004664a1 | g_PolygonCount
    JGE 0x004665af                      ; 004664a7
        ;   XREF to: 004665af (CONDITIONAL_JUMP)  ; LAB_004665af
    MOV EAX,dword ptr [EBP + -0x3c]     ; 004664ad
    MOV dword ptr [EBP + -0x28],EAX     ; 004664b0
    IMUL EDX,dword ptr [EBP + -0x3c],0x14 ; 004664b3
    MOV EAX,[0x02cf6a8c]                ; 004664b7 | g_MouseX
    SUB EAX,dword ptr [EDX + 0x15c48c4] ; 004664bc | g_PolygonScreenCache
    MOV dword ptr [EBP + -0x34],EAX     ; 004664c2
    IMUL EDX,dword ptr [EBP + -0x3c],0x14 ; 004664c5
    MOV EAX,[0x02cf6a90]                ; 004664c9 | g_MouseY
    SUB EAX,dword ptr [EDX + 0x15c48c8] ; 004664ce | DAT_015c48c8
    MOV dword ptr [EBP + -0x30],EAX     ; 004664d4
    MOV EDX,dword ptr [EBP + -0x34]     ; 004664d7
    IMUL EDX,dword ptr [EBP + -0x34]    ; 004664da
    MOV EAX,dword ptr [EBP + -0x30]     ; 004664de
    IMUL EAX,dword ptr [EBP + -0x30]    ; 004664e1
    ADD EDX,EAX                         ; 004664e5
    MOV dword ptr [EBP + -0x8],EDX      ; 004664e7
    IMUL EAX,dword ptr [EBP + -0x28],0x184 ; 004664ea
    FLD float ptr [EAX + 0x16e99b8]     ; 004664f1 | DAT_016e99b8
    FMUL float ptr [0x0061c70e]         ; 004664f7 | g_MouseNormalToFixedPoint
    CALL crt_math.c_round_FUN_005fe6b0  ; 004664fd
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0xffffff20]  ; 00466502
    IMUL EAX,dword ptr [EBP + -0x28],0x184 ; 00466508
    FLD float ptr [EAX + 0x16e99bc]     ; 0046650f | DAT_016e99bc
    FMUL float ptr [0x0061c70e]         ; 00466515 | g_MouseNormalToFixedPoint
    CALL crt_math.c_round_FUN_005fe6b0  ; 0046651b
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0xffffff24]  ; 00466520
    IMUL EAX,dword ptr [EBP + -0x28],0x184 ; 00466526
    FLD float ptr [EAX + 0x16e99c0]     ; 0046652d | DAT_016e99c0
    FMUL float ptr [0x0061c70e]         ; 00466533 | g_MouseNormalToFixedPoint
    CALL crt_math.c_round_FUN_005fe6b0  ; 00466539
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0xffffff28]  ; 0046653e
    IMUL EAX,dword ptr [EBP + -0x28],0x184 ; 00466544
    FLD float ptr [EAX + 0x16e99c4]     ; 0046654b | DAT_016e99c4
    FMUL float ptr [0x0061c70e]         ; 00466551 | g_MouseNormalToFixedPoint
    FMUL float ptr [0x0061c712]         ; 00466557 | g_MousePlaneDistanceScale
    CALL crt_math.c_round_FUN_005fe6b0  ; 0046655d
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0xffffff2c]  ; 00466562
    MOV EAX,dword ptr [EBP + -0x8]      ; 00466568
    CMP EAX,dword ptr [EBP + -0x4]      ; 0046656b
    JGE 0x00466583                      ; 0046656e
        ;   XREF to: 00466583 (CONDITIONAL_JUMP)  ; LAB_00466583
    LEA EAX,[EBP + 0xffffff20]          ; 00466570
    PUSH EAX                            ; 00466576
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00466577
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0046657c
    TEST EAX,EAX                        ; 0046657f
    JNZ 0x00466585                      ; 00466581
        ;   XREF to: 00466585 (CONDITIONAL_JUMP)  ; LAB_00466585
    JMP 0x004665aa                      ; 00466583
        ;   XREF to: 004665aa (UNCONDITIONAL_JUMP)  ; LAB_004665aa
        ;   Label: LAB_00466583
    MOV EAX,dword ptr [EBP + -0x8]      ; 00466585
        ;   Label: LAB_00466585
    MOV dword ptr [EBP + -0x4],EAX      ; 00466588
    IMUL EDX,dword ptr [EBP + -0x3c],0x14 ; 0046658b
    MOV EAX,dword ptr [EBP + -0x8]      ; 0046658f
    MOV dword ptr [EDX + 0x15c48cc],EAX ; 00466592 | DAT_015c48cc
    MOV EAX,dword ptr [EBP + -0x14]     ; 00466598
    MOV dword ptr [EBP + -0x10],EAX     ; 0046659b
    MOV EAX,dword ptr [EBP + -0x18]     ; 0046659e
    MOV dword ptr [EBP + -0x14],EAX     ; 004665a1
    MOV EAX,dword ptr [EBP + -0x3c]     ; 004665a4
    MOV dword ptr [EBP + -0x18],EAX     ; 004665a7
    JMP 0x00466498                      ; 004665aa
        ;   XREF to: 00466498 (UNCONDITIONAL_JUMP)  ; LAB_00466498
        ;   Label: LAB_004665aa
    MOV EAX,dword ptr [EBP + -0x18]     ; 004665af
        ;   Label: LAB_004665af
    MOV dword ptr [EBP + -0x24],EAX     ; 004665b2
    MOV dword ptr [EBP + -0xc],0x1      ; 004665b5
    MOV EAX,dword ptr [EBP + -0x18]     ; 004665bc
    MOV dword ptr [EBP + -0x2c],EAX     ; 004665bf
    PUSH dword ptr [0x02cf6a90]         ; 004665c2 | g_MouseY
    PUSH dword ptr [0x02cf6a8c]         ; 004665c8 | g_MouseX
    MOV EAX,0x61c716                    ; 004665ce | = "mX: %d  mY: %d"
    PUSH EAX                            ; 004665d3 | = "mX: %d  mY: %d"
    LEA EAX,[EBP + 0xffffff70]          ; 004665d4
    PUSH EAX                            ; 004665da
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004665db
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004665e0
    MOV EAX,[0x00679398]                ; 004665e3 | g_WindowHeight
    SUB EAX,0x37                        ; 004665e8
    PUSH EAX                            ; 004665eb
    PUSH 0x0                            ; 004665ec
    LEA EAX,[EBP + 0xffffff70]          ; 004665ee
    PUSH EAX                            ; 004665f4
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 004665f5
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004665fa
    MOV EAX,dword ptr [EBP + -0x24]     ; 004665fd
    MOV dword ptr [EBP + -0x40],EAX     ; 00466600
    MOV EAX,dword ptr [EBP + -0x40]     ; 00466603
        ;   Label: LAB_00466603
    MOV ESP,EBP                         ; 00466606
    POP EBP                             ; 00466608
    POP EDI                             ; 00466609
    POP ESI                             ; 0046660a
    POP EBX                             ; 0046660b
    RET                                 ; 0046660c

