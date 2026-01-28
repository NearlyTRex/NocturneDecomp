; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint __cdecl shape_design_c_mergeTrianglesIntoQuad_FUN_00462190(int first_polygon_index,int second_polygon_index)
;
; Parameters:
; int              Stack[0x4]:4   first_polygon_index
; int              Stack[0x8]:4   second_polygon_index
; Local Variables:
; undefined8       Stack[-0x1fc]:8  local_1fc
; undefined4       Stack[-0x1f4]:4  local_1f4
; undefined8       Stack[-0x1f0]:8  local_1f0
; undefined1       Stack[-0x1e8]:1  local_1e8
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
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
; XREF[2]:
;   shape_design.c_configureSinglePassPolygonReduction_FUN_00465560 at 00465767
;   shape_design.c_optimizePolygonMesh_FUN_004658e0 at 00465a82
;
; Referenced Globals:
;   double g_MinPolygonAreaThreshold = 359.5
;   double g_FirstAngleThreshold = 170
;   double g_AngleForCosineCalc = 0.523598775600000
;   double DOUBLE_0061bfe6 = 170
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 DAT_016e9914
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e99b8
;   undefined4 DAT_016e99bc
;   undefined4 DAT_016e99c0
;   undefined4 DAT_016e99c8
;   undefined4 DAT_016e99cc
;   undefined4 DAT_016e99d0
;   undefined4 DAT_016e99d4
;   ... and 8 more
;
; Called Functions:
;   shape_design.c_calculatePolygonAngularArea_FUN_00461ee0
;   shape_design.c_calculatePolygonNormal_FUN_0045caa0
;   shape_design.c_calculateVertexAngle_FUN_00462050
;   shape_design.c_swapDWords_FUN_00462130
;   shape_design.c_swapFloats_FUN_00462160
;   shape_design.c_validatePolygonNormals_FUN_00461d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462190
        ;   Label: shape_design.c_mergeTrianglesIntoQuad_FUN_00462190
    PUSH ESI                            ; 00462191
    PUSH EDI                            ; 00462192
    PUSH EBP                            ; 00462193
    MOV EBP,ESP                         ; 00462194
    SUB ESP,0x1e4                       ; 00462196
    MOV dword ptr [EBP + -0x10],0x0     ; 0046219c
    MOV dword ptr [EBP + -0xc],0x0      ; 004621a3
    JMP 0x004621b2                      ; 004621aa
        ;   XREF to: 004621b2 (UNCONDITIONAL_JUMP)  ; LAB_004621b2
    MOV EAX,dword ptr [EBP + -0xc]      ; 004621ac
        ;   Label: LAB_004621ac
    INC dword ptr [EBP + -0xc]          ; 004621af
    CMP dword ptr [EBP + -0xc],0x3      ; 004621b2
        ;   Label: LAB_004621b2
    JGE 0x00462235                      ; 004621b6
        ;   XREF to: 00462235 (CONDITIONAL_JUMP)  ; LAB_00462235
    MOV dword ptr [EBP + -0x8],0x0      ; 004621bc
    JMP 0x004621cb                      ; 004621c3
        ;   XREF to: 004621cb (UNCONDITIONAL_JUMP)  ; LAB_004621cb
    MOV EAX,dword ptr [EBP + -0x8]      ; 004621c5
        ;   Label: LAB_004621c5
    INC dword ptr [EBP + -0x8]          ; 004621c8
    CMP dword ptr [EBP + -0x8],0x3      ; 004621cb
        ;   Label: LAB_004621cb
    JGE 0x00462230                      ; 004621cf
        ;   XREF to: 00462230 (CONDITIONAL_JUMP)  ; LAB_00462230
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 004621d1
    MOV EAX,dword ptr [EBP + -0xc]      ; 004621d8
    SHL EAX,0x2                         ; 004621db
    LEA ECX,[EDX + EAX*0x1]             ; 004621de
    IMUL EDX,dword ptr [EBP + 0x18],0x184 ; 004621e1
    MOV EAX,dword ptr [EBP + -0x8]      ; 004621e8
    SHL EAX,0x2                         ; 004621eb
    ADD EDX,EAX                         ; 004621ee
    MOV EAX,dword ptr [ECX + 0x16e99c8] ; 004621f0 | DAT_016e99c8
    CMP EAX,dword ptr [EDX + 0x16e99c8] ; 004621f6 | DAT_016e99c8
    JNZ 0x0046222e                      ; 004621fc
        ;   XREF to: 0046222e (CONDITIONAL_JUMP)  ; LAB_0046222e
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 004621fe
    MOV EAX,dword ptr [EBP + -0xc]      ; 00462205
    SHL EAX,0x2                         ; 00462208
    ADD EAX,EDX                         ; 0046220b
    MOV EDX,dword ptr [EBP + -0x10]     ; 0046220d
    SHL EDX,0x2                         ; 00462210
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 00462213 | DAT_016e99c8
    MOV dword ptr [EDX + EBP*0x1 + -0x18],EAX ; 00462219
    MOV EAX,dword ptr [EBP + -0x10]     ; 0046221d
    INC dword ptr [EBP + -0x10]         ; 00462220
    CMP dword ptr [EBP + -0x10],0x2     ; 00462223
    JLE 0x0046222e                      ; 00462227
        ;   XREF to: 0046222e (CONDITIONAL_JUMP)  ; LAB_0046222e
    JMP 0x00462b61                      ; 00462229
        ;   XREF to: 00462b61 (UNCONDITIONAL_JUMP)  ; LAB_00462b61
    JMP 0x004621c5                      ; 0046222e
        ;   XREF to: 004621c5 (UNCONDITIONAL_JUMP)  ; LAB_004621c5
        ;   Label: LAB_0046222e
    JMP 0x004621ac                      ; 00462230
        ;   XREF to: 004621ac (UNCONDITIONAL_JUMP)  ; LAB_004621ac
        ;   Label: LAB_00462230
    MOV dword ptr [EBP + -0xc],0x0      ; 00462235
        ;   Label: LAB_00462235
    JMP 0x00462244                      ; 0046223c
        ;   XREF to: 00462244 (UNCONDITIONAL_JUMP)  ; LAB_00462244
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046223e
        ;   Label: LAB_0046223e
    INC dword ptr [EBP + -0xc]          ; 00462241
    CMP dword ptr [EBP + -0xc],0x3      ; 00462244
        ;   Label: LAB_00462244
    JGE 0x004622a9                      ; 00462248
        ;   XREF to: 004622a9 (CONDITIONAL_JUMP)  ; LAB_004622a9
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 0046224a
    MOV EAX,dword ptr [EBP + -0xc]      ; 00462251
    SHL EAX,0x2                         ; 00462254
    ADD EAX,EDX                         ; 00462257
    MOV EDX,dword ptr [EBP + -0xc]      ; 00462259
    SHL EDX,0x2                         ; 0046225c
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 0046225f | DAT_016e99c8
    MOV dword ptr [EDX + EBP*0x1 + -0x2c],EAX ; 00462265
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462269
    MOV EAX,dword ptr [EBP + -0xc]      ; 00462270
    SHL EAX,0x2                         ; 00462273
    ADD EAX,EDX                         ; 00462276
    MOV EDX,dword ptr [EBP + -0xc]      ; 00462278
    SHL EDX,0x2                         ; 0046227b
    FLD float ptr [EAX + 0x16e9a08]     ; 0046227e | DAT_016e9a08
    FSTP float ptr [EDX + EBP*0x1 + -0x54] ; 00462284
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462288
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046228f
    SHL EAX,0x2                         ; 00462292
    ADD EAX,EDX                         ; 00462295
    MOV EDX,dword ptr [EBP + -0xc]      ; 00462297
    SHL EDX,0x2                         ; 0046229a
    FLD float ptr [EAX + 0x16e9a48]     ; 0046229d | DAT_016e9a48
    FSTP float ptr [EDX + EBP*0x1 + -0x40] ; 004622a3
    JMP 0x0046223e                      ; 004622a7
        ;   XREF to: 0046223e (UNCONDITIONAL_JUMP)  ; LAB_0046223e
    MOV dword ptr [EBP + -0xc],0x0      ; 004622a9
        ;   Label: LAB_004622a9
    JMP 0x004622b8                      ; 004622b0
        ;   XREF to: 004622b8 (UNCONDITIONAL_JUMP)  ; LAB_004622b8
    MOV EAX,dword ptr [EBP + -0xc]      ; 004622b2
        ;   Label: LAB_004622b2
    INC dword ptr [EBP + -0xc]          ; 004622b5
    CMP dword ptr [EBP + -0xc],0x3      ; 004622b8
        ;   Label: LAB_004622b8
    JGE 0x00462320                      ; 004622bc
        ;   XREF to: 00462320 (CONDITIONAL_JUMP)  ; LAB_00462320
    IMUL EDX,dword ptr [EBP + 0x18],0x184 ; 004622be
    MOV EAX,dword ptr [EBP + -0xc]      ; 004622c5
    SHL EAX,0x2                         ; 004622c8
    ADD EAX,EDX                         ; 004622cb
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 004622cd | DAT_016e99c8
    MOV dword ptr [EBP + -0x8],EAX      ; 004622d3
    MOV EAX,dword ptr [EBP + -0x8]      ; 004622d6
    CMP EAX,dword ptr [EBP + -0x18]     ; 004622d9
    JZ 0x004622e6                       ; 004622dc
        ;   XREF to: 004622e6 (CONDITIONAL_JUMP)  ; LAB_004622e6
    MOV EAX,dword ptr [EBP + -0x8]      ; 004622de
    CMP EAX,dword ptr [EBP + -0x14]     ; 004622e1
    JNZ 0x004622e8                      ; 004622e4
        ;   XREF to: 004622e8 (CONDITIONAL_JUMP)  ; LAB_004622e8
    JMP 0x0046231e                      ; 004622e6
        ;   XREF to: 0046231e (UNCONDITIONAL_JUMP)  ; LAB_0046231e
        ;   Label: LAB_004622e6
    MOV EAX,dword ptr [EBP + -0x8]      ; 004622e8
        ;   Label: LAB_004622e8
    MOV dword ptr [EBP + -0x20],EAX     ; 004622eb
    IMUL EDX,dword ptr [EBP + 0x18],0x184 ; 004622ee
    MOV EAX,dword ptr [EBP + -0xc]      ; 004622f5
    SHL EAX,0x2                         ; 004622f8
    ADD EAX,EDX                         ; 004622fb
    MOV EAX,dword ptr [EAX + 0x16e9a08] ; 004622fd | DAT_016e9a08
    MOV dword ptr [EBP + -0x48],EAX     ; 00462303
    IMUL EDX,dword ptr [EBP + 0x18],0x184 ; 00462306
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046230d
    SHL EAX,0x2                         ; 00462310
    ADD EAX,EDX                         ; 00462313
    MOV EAX,dword ptr [EAX + 0x16e9a48] ; 00462315 | DAT_016e9a48
    MOV dword ptr [EBP + -0x34],EAX     ; 0046231b
    JMP 0x004622b2                      ; 0046231e
        ;   XREF to: 004622b2 (UNCONDITIONAL_JUMP)  ; LAB_004622b2
        ;   Label: LAB_0046231e
    MOV dword ptr [EBP + -0xc],0x0      ; 00462320
        ;   Label: LAB_00462320
    JMP 0x0046232f                      ; 00462327
        ;   XREF to: 0046232f (UNCONDITIONAL_JUMP)  ; LAB_0046232f
    MOV EAX,dword ptr [EBP + -0xc]      ; 00462329
        ;   Label: LAB_00462329
    INC dword ptr [EBP + -0xc]          ; 0046232c
    CMP dword ptr [EBP + -0xc],0x4      ; 0046232f
        ;   Label: LAB_0046232f
    JGE 0x004623f2                      ; 00462333
        ;   XREF to: 004623f2 (CONDITIONAL_JUMP)  ; LAB_004623f2
    MOV EAX,dword ptr [EBP + -0xc]      ; 00462339
    INC EAX                             ; 0046233c
    AND EAX,0x3                         ; 0046233d
    MOV dword ptr [EBP + -0x8],EAX      ; 00462340
    MOV EAX,dword ptr [EBP + -0xc]      ; 00462343
    SHL EAX,0x2                         ; 00462346
    MOV EAX,dword ptr [EAX + EBP*0x1 + -0x2c] ; 00462349
    CMP EAX,dword ptr [EBP + -0x18]     ; 0046234d
    JNZ 0x00462361                      ; 00462350
        ;   XREF to: 00462361 (CONDITIONAL_JUMP)  ; LAB_00462361
    MOV EAX,dword ptr [EBP + -0x8]      ; 00462352
    SHL EAX,0x2                         ; 00462355
    MOV EAX,dword ptr [EAX + EBP*0x1 + -0x2c] ; 00462358
    CMP EAX,dword ptr [EBP + -0x14]     ; 0046235c
    JZ 0x00462381                       ; 0046235f
        ;   XREF to: 00462381 (CONDITIONAL_JUMP)  ; LAB_00462381
    MOV EAX,dword ptr [EBP + -0xc]      ; 00462361
        ;   Label: LAB_00462361
    SHL EAX,0x2                         ; 00462364
    MOV EAX,dword ptr [EAX + EBP*0x1 + -0x2c] ; 00462367
    CMP EAX,dword ptr [EBP + -0x14]     ; 0046236b
    JNZ 0x0046237f                      ; 0046236e
        ;   XREF to: 0046237f (CONDITIONAL_JUMP)  ; LAB_0046237f
    MOV EAX,dword ptr [EBP + -0x8]      ; 00462370
    SHL EAX,0x2                         ; 00462373
    MOV EAX,dword ptr [EAX + EBP*0x1 + -0x2c] ; 00462376
    CMP EAX,dword ptr [EBP + -0x18]     ; 0046237a
    JZ 0x00462381                       ; 0046237d
        ;   XREF to: 00462381 (CONDITIONAL_JUMP)  ; LAB_00462381
    JMP 0x004623ed                      ; 0046237f
        ;   XREF to: 004623ed (UNCONDITIONAL_JUMP)  ; LAB_004623ed
        ;   Label: LAB_0046237f
    MOV EAX,dword ptr [EBP + -0x8]      ; 00462381
        ;   Label: LAB_00462381
    INC EAX                             ; 00462384
    AND EAX,0x3                         ; 00462385
    MOV dword ptr [EBP + -0x4],EAX      ; 00462388
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046238b
    SHL EAX,0x2                         ; 0046238e
    LEA EDX,[EBP + -0x2c]               ; 00462391
    ADD EAX,EDX                         ; 00462394
    PUSH EAX                            ; 00462396
    MOV EAX,dword ptr [EBP + -0x8]      ; 00462397
    SHL EAX,0x2                         ; 0046239a
    LEA EDX,[EBP + -0x2c]               ; 0046239d
    ADD EAX,EDX                         ; 004623a0
    PUSH EAX                            ; 004623a2
    CALL shape_design.c_swapDWords_FUN_00462130 ; 004623a3
        ;   XREF to: 00462130 (UNCONDITIONAL_CALL)  ; void shape_design.c_swapDWords_FUN_00462130(uint * value1_ptr, uint * value2_ptr)
    ADD ESP,0x8                         ; 004623a8
    MOV EAX,dword ptr [EBP + -0x4]      ; 004623ab
    SHL EAX,0x2                         ; 004623ae
    LEA EDX,[EBP + -0x54]               ; 004623b1
    ADD EAX,EDX                         ; 004623b4
    PUSH EAX                            ; 004623b6
    MOV EAX,dword ptr [EBP + -0x8]      ; 004623b7
    SHL EAX,0x2                         ; 004623ba
    LEA EDX,[EBP + -0x54]               ; 004623bd
    ADD EAX,EDX                         ; 004623c0
    PUSH EAX                            ; 004623c2
    CALL shape_design.c_swapFloats_FUN_00462160 ; 004623c3
        ;   XREF to: 00462160 (UNCONDITIONAL_CALL)  ; void shape_design.c_swapFloats_FUN_00462160(float * value1_ptr, float * value2_ptr)
    ADD ESP,0x8                         ; 004623c8
    MOV EAX,dword ptr [EBP + -0x4]      ; 004623cb
    SHL EAX,0x2                         ; 004623ce
    LEA EDX,[EBP + -0x40]               ; 004623d1
    ADD EAX,EDX                         ; 004623d4
    PUSH EAX                            ; 004623d6
    MOV EAX,dword ptr [EBP + -0x8]      ; 004623d7
    SHL EAX,0x2                         ; 004623da
    LEA EDX,[EBP + -0x40]               ; 004623dd
    ADD EAX,EDX                         ; 004623e0
    PUSH EAX                            ; 004623e2
    CALL shape_design.c_swapFloats_FUN_00462160 ; 004623e3
        ;   XREF to: 00462160 (UNCONDITIONAL_CALL)  ; void shape_design.c_swapFloats_FUN_00462160(float * value1_ptr, float * value2_ptr)
    ADD ESP,0x8                         ; 004623e8
    JMP 0x004623f2                      ; 004623eb
        ;   XREF to: 004623f2 (UNCONDITIONAL_JUMP)  ; LAB_004623f2
    JMP 0x00462329                      ; 004623ed
        ;   XREF to: 00462329 (UNCONDITIONAL_JUMP)  ; LAB_00462329
        ;   Label: LAB_004623ed
    MOV dword ptr [EBP + 0xfffffecc],0x4 ; 004623f2
        ;   Label: LAB_004623f2
    MOV dword ptr [EBP + -0xc],0x0      ; 004623fc
    JMP 0x0046240b                      ; 00462403
        ;   XREF to: 0046240b (UNCONDITIONAL_JUMP)  ; LAB_0046240b
    MOV EAX,dword ptr [EBP + -0xc]      ; 00462405
        ;   Label: LAB_00462405
    INC dword ptr [EBP + -0xc]          ; 00462408
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046240b
        ;   Label: LAB_0046240b
    CMP EAX,dword ptr [EBP + 0xfffffecc] ; 0046240e
    JGE 0x0046242f                      ; 00462414
        ;   XREF to: 0046242f (CONDITIONAL_JUMP)  ; LAB_0046242f
    MOV EAX,dword ptr [EBP + -0xc]      ; 00462416
    SHL EAX,0x2                         ; 00462419
    MOV EDX,dword ptr [EBP + -0xc]      ; 0046241c
    SHL EDX,0x2                         ; 0046241f
    MOV EAX,dword ptr [EAX + EBP*0x1 + -0x2c] ; 00462422
    MOV dword ptr [EDX + EBP*0x1 + 0xfffffee0],EAX ; 00462426
    JMP 0x00462405                      ; 0046242d
        ;   XREF to: 00462405 (UNCONDITIONAL_JUMP)  ; LAB_00462405
    LEA EAX,[EBP + 0xfffffe28]          ; 0046242f
        ;   Label: LAB_0046242f
    PUSH EAX                            ; 00462435
    CALL shape_design.c_calculatePolygonAngularArea_FUN_00461ee0 ; 00462436
        ;   XREF to: 00461ee0 (UNCONDITIONAL_CALL)  ; double shape_design.c_calculatePolygonAngularArea_FUN_00461ee0(SShapeEditorPolygon * polygon_ptr)
    MOV dword ptr [EBP + 0xfffffe20],EAX ; 0046243b
    MOV dword ptr [EBP + 0xfffffe24],EDX ; 00462441
    FLD double ptr [EBP + 0xfffffe20]   ; 00462447
    ADD ESP,0x4                         ; 0046244d
    FCOMP double ptr [0x0061bfce]       ; 00462450 | g_MinPolygonAreaThreshold
    FNSTSW AX                           ; 00462456
    SAHF                                ; 00462458
    JNC 0x00462460                      ; 00462459
        ;   XREF to: 00462460 (CONDITIONAL_JUMP)  ; LAB_00462460
    JMP 0x00462b61                      ; 0046245b
        ;   XREF to: 00462b61 (UNCONDITIONAL_JUMP)  ; LAB_00462b61
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00462460
        ;   Label: LAB_00462460
    MOV EDX,0x16e9910                   ; 00462467 | g_ModelPolygonData
    ADD EAX,EDX                         ; 0046246c
    PUSH EAX                            ; 0046246e
    CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0 ; 0046246f
        ;   XREF to: 0045caa0 (UNCONDITIONAL_CALL)  ; void shape_design.c_calculatePolygonNormal_FUN_0045caa0(SShapeEditorPolygon * polygon)
    ADD ESP,0x4                         ; 00462474
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00462477
    MOV dword ptr [EAX + 0x16e99b4],0x4 ; 0046247e | DAT_016e99b4
    MOV dword ptr [EBP + -0xc],0x0      ; 00462488
    JMP 0x00462497                      ; 0046248f
        ;   XREF to: 00462497 (UNCONDITIONAL_JUMP)  ; LAB_00462497
    MOV EAX,dword ptr [EBP + -0xc]      ; 00462491
        ;   Label: LAB_00462491
    INC dword ptr [EBP + -0xc]          ; 00462494
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462497
        ;   Label: LAB_00462497
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046249e
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 004624a1 | DAT_016e99b4
    JGE 0x00462508                      ; 004624a7
        ;   XREF to: 00462508 (CONDITIONAL_JUMP)  ; LAB_00462508
    MOV ECX,dword ptr [EBP + -0xc]      ; 004624a9
    SHL ECX,0x2                         ; 004624ac
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 004624af
    MOV EAX,dword ptr [EBP + -0xc]      ; 004624b6
    SHL EAX,0x2                         ; 004624b9
    ADD EDX,EAX                         ; 004624bc
    MOV EAX,dword ptr [ECX + EBP*0x1 + -0x2c] ; 004624be
    MOV dword ptr [EDX + 0x16e99c8],EAX ; 004624c2 | DAT_016e99c8
    MOV ECX,dword ptr [EBP + -0xc]      ; 004624c8
    SHL ECX,0x2                         ; 004624cb
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 004624ce
    MOV EAX,dword ptr [EBP + -0xc]      ; 004624d5
    SHL EAX,0x2                         ; 004624d8
    ADD EAX,EDX                         ; 004624db
    FLD float ptr [ECX + EBP*0x1 + -0x54] ; 004624dd
    FSTP float ptr [EAX + 0x16e9a08]    ; 004624e1 | DAT_016e9a08
    MOV ECX,dword ptr [EBP + -0xc]      ; 004624e7
    SHL ECX,0x2                         ; 004624ea
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 004624ed
    MOV EAX,dword ptr [EBP + -0xc]      ; 004624f4
    SHL EAX,0x2                         ; 004624f7
    ADD EAX,EDX                         ; 004624fa
    FLD float ptr [ECX + EBP*0x1 + -0x40] ; 004624fc
    FSTP float ptr [EAX + 0x16e9a48]    ; 00462500 | DAT_016e9a48
    JMP 0x00462491                      ; 00462506
        ;   XREF to: 00462491 (UNCONDITIONAL_JUMP)  ; LAB_00462491
    LEA EAX,[EBP + 0xfffffe28]          ; 00462508
        ;   Label: LAB_00462508
    PUSH EAX                            ; 0046250e
    CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0 ; 0046250f
        ;   XREF to: 0045caa0 (UNCONDITIONAL_CALL)  ; void shape_design.c_calculatePolygonNormal_FUN_0045caa0(SShapeEditorPolygon * polygon)
    ADD ESP,0x4                         ; 00462514
    TEST dword ptr [EBP + 0xfffffed0],0x7fffffff ; 00462517
    JNZ 0x0046252f                      ; 00462521
        ;   XREF to: 0046252f (CONDITIONAL_JUMP)  ; LAB_0046252f
    TEST dword ptr [EBP + 0xfffffed4],0x7fffffff ; 00462523
    JZ 0x00462531                       ; 0046252d
        ;   XREF to: 00462531 (CONDITIONAL_JUMP)  ; LAB_00462531
    JMP 0x0046253d                      ; 0046252f
        ;   XREF to: 0046253d (UNCONDITIONAL_JUMP)  ; LAB_0046253d
        ;   Label: LAB_0046252f
    TEST dword ptr [EBP + 0xfffffed8],0x7fffffff ; 00462531
        ;   Label: LAB_00462531
    JZ 0x00462542                       ; 0046253b
        ;   XREF to: 00462542 (CONDITIONAL_JUMP)  ; LAB_00462542
    JMP 0x00462648                      ; 0046253d
        ;   XREF to: 00462648 (UNCONDITIONAL_JUMP)  ; LAB_00462648
        ;   Label: LAB_0046253d
    MOV EAX,dword ptr [EBP + -0x24]     ; 00462542
        ;   Label: LAB_00462542
    MOV dword ptr [EBP + -0x28],EAX     ; 00462545
    MOV EAX,dword ptr [EBP + -0x4c]     ; 00462548
    MOV dword ptr [EBP + -0x50],EAX     ; 0046254b
    MOV EAX,dword ptr [EBP + -0x38]     ; 0046254e
    MOV dword ptr [EBP + -0x3c],EAX     ; 00462551
    MOV EAX,dword ptr [EBP + -0x20]     ; 00462554
    MOV dword ptr [EBP + -0x24],EAX     ; 00462557
    MOV EAX,dword ptr [EBP + -0x48]     ; 0046255a
    MOV dword ptr [EBP + -0x4c],EAX     ; 0046255d
    MOV EAX,dword ptr [EBP + -0x34]     ; 00462560
    MOV dword ptr [EBP + -0x38],EAX     ; 00462563
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00462566
    MOV dword ptr [EAX + 0x16e99b4],0x3 ; 0046256d | DAT_016e99b4
    MOV dword ptr [EBP + -0xc],0x0      ; 00462577
    JMP 0x00462586                      ; 0046257e
        ;   XREF to: 00462586 (UNCONDITIONAL_JUMP)  ; LAB_00462586
    MOV EAX,dword ptr [EBP + -0xc]      ; 00462580
        ;   Label: LAB_00462580
    INC dword ptr [EBP + -0xc]          ; 00462583
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462586
        ;   Label: LAB_00462586
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046258d
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 00462590 | DAT_016e99b4
    JGE 0x004625f7                      ; 00462596
        ;   XREF to: 004625f7 (CONDITIONAL_JUMP)  ; LAB_004625f7
    MOV ECX,dword ptr [EBP + -0xc]      ; 00462598
    SHL ECX,0x2                         ; 0046259b
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 0046259e
    MOV EAX,dword ptr [EBP + -0xc]      ; 004625a5
    SHL EAX,0x2                         ; 004625a8
    ADD EDX,EAX                         ; 004625ab
    MOV EAX,dword ptr [ECX + EBP*0x1 + -0x2c] ; 004625ad
    MOV dword ptr [EDX + 0x16e99c8],EAX ; 004625b1 | DAT_016e99c8
    MOV ECX,dword ptr [EBP + -0xc]      ; 004625b7
    SHL ECX,0x2                         ; 004625ba
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 004625bd
    MOV EAX,dword ptr [EBP + -0xc]      ; 004625c4
    SHL EAX,0x2                         ; 004625c7
    ADD EAX,EDX                         ; 004625ca
    FLD float ptr [ECX + EBP*0x1 + -0x54] ; 004625cc
    FSTP float ptr [EAX + 0x16e9a08]    ; 004625d0 | DAT_016e9a08
    MOV ECX,dword ptr [EBP + -0xc]      ; 004625d6
    SHL ECX,0x2                         ; 004625d9
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 004625dc
    MOV EAX,dword ptr [EBP + -0xc]      ; 004625e3
    SHL EAX,0x2                         ; 004625e6
    ADD EAX,EDX                         ; 004625e9
    FLD float ptr [ECX + EBP*0x1 + -0x40] ; 004625eb
    FSTP float ptr [EAX + 0x16e9a48]    ; 004625ef | DAT_016e9a48
    JMP 0x00462580                      ; 004625f5
        ;   XREF to: 00462580 (UNCONDITIONAL_JUMP)  ; LAB_00462580
    MOV dword ptr [EBP + 0xfffffecc],0x3 ; 004625f7
        ;   Label: LAB_004625f7
    MOV dword ptr [EBP + -0xc],0x0      ; 00462601
    JMP 0x00462610                      ; 00462608
        ;   XREF to: 00462610 (UNCONDITIONAL_JUMP)  ; LAB_00462610
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046260a
        ;   Label: LAB_0046260a
    INC dword ptr [EBP + -0xc]          ; 0046260d
    MOV EAX,dword ptr [EBP + -0xc]      ; 00462610
        ;   Label: LAB_00462610
    CMP EAX,dword ptr [EBP + 0xfffffecc] ; 00462613
    JGE 0x00462634                      ; 00462619
        ;   XREF to: 00462634 (CONDITIONAL_JUMP)  ; LAB_00462634
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046261b
    SHL EAX,0x2                         ; 0046261e
    MOV EDX,dword ptr [EBP + -0xc]      ; 00462621
    SHL EDX,0x2                         ; 00462624
    MOV EAX,dword ptr [EAX + EBP*0x1 + -0x2c] ; 00462627
    MOV dword ptr [EDX + EBP*0x1 + 0xfffffee0],EAX ; 0046262b
    JMP 0x0046260a                      ; 00462632
        ;   XREF to: 0046260a (UNCONDITIONAL_JUMP)  ; LAB_0046260a
    LEA EAX,[EBP + 0xfffffe28]          ; 00462634
        ;   Label: LAB_00462634
    PUSH EAX                            ; 0046263a
    CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0 ; 0046263b
        ;   XREF to: 0045caa0 (UNCONDITIONAL_CALL)  ; void shape_design.c_calculatePolygonNormal_FUN_0045caa0(SShapeEditorPolygon * polygon)
    ADD ESP,0x4                         ; 00462640
    JMP 0x00462791                      ; 00462643
        ;   XREF to: 00462791 (UNCONDITIONAL_JUMP)  ; LAB_00462791
    MOV EAX,dword ptr [EBP + 0xfffffee8] ; 00462648
        ;   Label: LAB_00462648
    PUSH EAX                            ; 0046264e
    MOV EAX,dword ptr [EBP + 0xfffffee4] ; 0046264f
    PUSH EAX                            ; 00462655
    MOV EAX,dword ptr [EBP + 0xfffffee0] ; 00462656
    PUSH EAX                            ; 0046265c
    CALL shape_design.c_calculateVertexAngle_FUN_00462050 ; 0046265d
        ;   XREF to: 00462050 (UNCONDITIONAL_CALL)  ; double shape_design.c_calculateVertexAngle_FUN_00462050(int vertex1_index, int vertex2_index, int vertex3_index)
    MOV dword ptr [EBP + 0xfffffe20],EAX ; 00462662
    MOV dword ptr [EBP + 0xfffffe24],EDX ; 00462668
    FLD double ptr [EBP + 0xfffffe20]   ; 0046266e
    ADD ESP,0xc                         ; 00462674
    FCOMP double ptr [0x0061bfd6]       ; 00462677 | g_FirstAngleThreshold
    FNSTSW AX                           ; 0046267d
    SAHF                                ; 0046267f
    JBE 0x00462791                      ; 00462680
        ;   XREF to: 00462791 (CONDITIONAL_JUMP)  ; LAB_00462791
    MOV EAX,dword ptr [EBP + -0x2c]     ; 00462686
    MOV dword ptr [EBP + -0x1c],EAX     ; 00462689
    MOV EAX,dword ptr [EBP + -0x28]     ; 0046268c
    MOV dword ptr [EBP + 0xfffffee0],EAX ; 0046268f
    MOV EAX,dword ptr [EBP + -0x24]     ; 00462695
    MOV dword ptr [EBP + 0xfffffee4],EAX ; 00462698
    MOV EAX,dword ptr [EBP + -0x20]     ; 0046269e
    MOV dword ptr [EBP + 0xfffffee8],EAX ; 004626a1
    MOV EAX,dword ptr [EBP + -0x1c]     ; 004626a7
    MOV dword ptr [EBP + 0xfffffeec],EAX ; 004626aa
    LEA EAX,[EBP + 0xfffffe28]          ; 004626b0
    PUSH EAX                            ; 004626b6
    CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0 ; 004626b7
        ;   XREF to: 0045caa0 (UNCONDITIONAL_CALL)  ; void shape_design.c_calculatePolygonNormal_FUN_0045caa0(SShapeEditorPolygon * polygon)
    ADD ESP,0x4                         ; 004626bc
    MOV EAX,dword ptr [EBP + -0x2c]     ; 004626bf
    MOV dword ptr [EBP + -0x1c],EAX     ; 004626c2
    MOV EAX,dword ptr [EBP + -0x54]     ; 004626c5
    MOV dword ptr [EBP + -0x44],EAX     ; 004626c8
    MOV EAX,dword ptr [EBP + -0x40]     ; 004626cb
    MOV dword ptr [EBP + -0x30],EAX     ; 004626ce
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 004626d1
    MOV EAX,dword ptr [EBP + -0x28]     ; 004626d8
    MOV dword ptr [EDX + 0x16e99c8],EAX ; 004626db | DAT_016e99c8
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 004626e1
    MOV EAX,dword ptr [EBP + -0x50]     ; 004626e8
    MOV dword ptr [EDX + 0x16e9a08],EAX ; 004626eb | DAT_016e9a08
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 004626f1
    MOV EAX,dword ptr [EBP + -0x3c]     ; 004626f8
    MOV dword ptr [EDX + 0x16e9a48],EAX ; 004626fb | DAT_016e9a48
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462701
    MOV EAX,dword ptr [EBP + -0x24]     ; 00462708
    MOV dword ptr [EDX + 0x16e99cc],EAX ; 0046270b | DAT_016e99cc
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462711
    MOV EAX,dword ptr [EBP + -0x4c]     ; 00462718
    MOV dword ptr [EDX + 0x16e9a0c],EAX ; 0046271b | DAT_016e9a0c
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462721
    MOV EAX,dword ptr [EBP + -0x38]     ; 00462728
    MOV dword ptr [EDX + 0x16e9a4c],EAX ; 0046272b | DAT_016e9a4c
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462731
    MOV EAX,dword ptr [EBP + -0x20]     ; 00462738
    MOV dword ptr [EDX + 0x16e99d0],EAX ; 0046273b | DAT_016e99d0
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462741
    MOV EAX,dword ptr [EBP + -0x48]     ; 00462748
    MOV dword ptr [EDX + 0x16e9a10],EAX ; 0046274b | DAT_016e9a10
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462751
    MOV EAX,dword ptr [EBP + -0x34]     ; 00462758
    MOV dword ptr [EDX + 0x16e9a50],EAX ; 0046275b | DAT_016e9a50
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462761
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00462768
    MOV dword ptr [EDX + 0x16e99d4],EAX ; 0046276b | DAT_016e99d4
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462771
    MOV EAX,dword ptr [EBP + -0x44]     ; 00462778
    MOV dword ptr [EDX + 0x16e9a14],EAX ; 0046277b | DAT_016e9a14
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462781
    MOV EAX,dword ptr [EBP + -0x30]     ; 00462788
    MOV dword ptr [EDX + 0x16e9a54],EAX ; 0046278b | DAT_016e9a54
    FLD double ptr [0x0061bfde]         ; 00462791 | g_AngleForCosineCalc
        ;   Label: LAB_00462791
    FCOS                                ; 00462797
    SUB ESP,0x8                         ; 00462799
    FSTP double ptr [ESP]               ; 0046279c
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 0046279f
    MOV EAX,0x16e9910                   ; 004627a6 | g_ModelPolygonData
    ADD EAX,EDX                         ; 004627ab
    PUSH EAX                            ; 004627ad
    LEA EAX,[EBP + 0xfffffe28]          ; 004627ae
    PUSH EAX                            ; 004627b4
    CALL shape_design.c_validatePolygonNormals_FUN_00461d80 ; 004627b5
        ;   XREF to: 00461d80 (UNCONDITIONAL_CALL)  ; int shape_design.c_validatePolygonNormals_FUN_00461d80(SShapeEditorPolygon * polygon1, SShapeEditorPolygon * polygon2, double cos_tolerance)
    ADD ESP,0x10                        ; 004627ba
    TEST EAX,EAX                        ; 004627bd
    JNZ 0x00462b1c                      ; 004627bf
        ;   XREF to: 00462b1c (CONDITIONAL_JUMP)  ; LAB_00462b1c
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 004627c5
    MOV EAX,dword ptr [EAX + 0x16e99b4] ; 004627cc | DAT_016e99b4
    MOV dword ptr [EBP + 0xfffffe1c],EAX ; 004627d2
    MOV dword ptr [EBP + -0xc],0x0      ; 004627d8
    JMP 0x004627e7                      ; 004627df
        ;   XREF to: 004627e7 (UNCONDITIONAL_JUMP)  ; LAB_004627e7
    MOV EAX,dword ptr [EBP + -0xc]      ; 004627e1
        ;   Label: LAB_004627e1
    INC dword ptr [EBP + -0xc]          ; 004627e4
    MOV EAX,dword ptr [EBP + -0xc]      ; 004627e7
        ;   Label: LAB_004627e7
    CMP EAX,dword ptr [EBP + 0xfffffe1c] ; 004627ea
    JGE 0x00462879                      ; 004627f0
        ;   XREF to: 00462879 (CONDITIONAL_JUMP)  ; LAB_00462879
    MOV EAX,dword ptr [EBP + 0xfffffe1c] ; 004627f6
    DEC EAX                             ; 004627fc
    SUB EAX,dword ptr [EBP + -0xc]      ; 004627fd
    LEA ECX,[EAX*0x4 + 0x0]             ; 00462800
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462807
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046280e
    SHL EAX,0x2                         ; 00462811
    ADD EDX,EAX                         ; 00462814
    MOV EAX,dword ptr [ECX + EBP*0x1 + -0x2c] ; 00462816
    MOV dword ptr [EDX + 0x16e99c8],EAX ; 0046281a | DAT_016e99c8
    MOV EAX,dword ptr [EBP + 0xfffffe1c] ; 00462820
    DEC EAX                             ; 00462826
    SUB EAX,dword ptr [EBP + -0xc]      ; 00462827
    LEA ECX,[EAX*0x4 + 0x0]             ; 0046282a
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462831
    MOV EAX,dword ptr [EBP + -0xc]      ; 00462838
    SHL EAX,0x2                         ; 0046283b
    ADD EAX,EDX                         ; 0046283e
    FLD float ptr [ECX + EBP*0x1 + -0x54] ; 00462840
    FSTP float ptr [EAX + 0x16e9a08]    ; 00462844 | DAT_016e9a08
    MOV EAX,dword ptr [EBP + 0xfffffe1c] ; 0046284a
    DEC EAX                             ; 00462850
    SUB EAX,dword ptr [EBP + -0xc]      ; 00462851
    LEA ECX,[EAX*0x4 + 0x0]             ; 00462854
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 0046285b
    MOV EAX,dword ptr [EBP + -0xc]      ; 00462862
    SHL EAX,0x2                         ; 00462865
    ADD EAX,EDX                         ; 00462868
    FLD float ptr [ECX + EBP*0x1 + -0x40] ; 0046286a
    FSTP float ptr [EAX + 0x16e9a48]    ; 0046286e | DAT_016e9a48
    JMP 0x004627e1                      ; 00462874
        ;   XREF to: 004627e1 (UNCONDITIONAL_JUMP)  ; LAB_004627e1
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00462879
        ;   Label: LAB_00462879
    MOV EDX,0x16e9910                   ; 00462880 | g_ModelPolygonData
    ADD EAX,EDX                         ; 00462885
    PUSH EAX                            ; 00462887
    CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0 ; 00462888
        ;   XREF to: 0045caa0 (UNCONDITIONAL_CALL)  ; void shape_design.c_calculatePolygonNormal_FUN_0045caa0(SShapeEditorPolygon * polygon)
    ADD ESP,0x4                         ; 0046288d
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00462890
    TEST dword ptr [EAX + 0x16e99b8],0x7fffffff ; 00462897 | DAT_016e99b8
    JNZ 0x004628b6                      ; 004628a1
        ;   XREF to: 004628b6 (CONDITIONAL_JUMP)  ; LAB_004628b6
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 004628a3
    TEST dword ptr [EAX + 0x16e99bc],0x7fffffff ; 004628aa | DAT_016e99bc
    JZ 0x004628b8                       ; 004628b4
        ;   XREF to: 004628b8 (CONDITIONAL_JUMP)  ; LAB_004628b8
    JMP 0x004628cb                      ; 004628b6
        ;   XREF to: 004628cb (UNCONDITIONAL_JUMP)  ; LAB_004628cb
        ;   Label: LAB_004628b6
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 004628b8
        ;   Label: LAB_004628b8
    TEST dword ptr [EAX + 0x16e99c0],0x7fffffff ; 004628bf | DAT_016e99c0
    JZ 0x004628d0                       ; 004628c9
        ;   XREF to: 004628d0 (CONDITIONAL_JUMP)  ; LAB_004628d0
    JMP 0x00462982                      ; 004628cb
        ;   XREF to: 00462982 (UNCONDITIONAL_JUMP)  ; LAB_00462982
        ;   Label: LAB_004628cb
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 004628d0
        ;   Label: LAB_004628d0
    MOV dword ptr [EAX + 0x16e99b4],0x3 ; 004628d7 | DAT_016e99b4
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 004628e1
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 004628e8
    MOV EAX,dword ptr [EAX + 0x16e99d0] ; 004628ef | DAT_016e99d0
    MOV dword ptr [EDX + 0x16e99cc],EAX ; 004628f5 | DAT_016e99cc
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 004628fb
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462902
    FLD float ptr [EAX + 0x16e9a10]     ; 00462909 | DAT_016e9a10
    FSTP float ptr [EDX + 0x16e9a0c]    ; 0046290f | DAT_016e9a0c
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00462915
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 0046291c
    FLD float ptr [EAX + 0x16e9a50]     ; 00462923 | DAT_016e9a50
    FSTP float ptr [EDX + 0x16e9a4c]    ; 00462929 | DAT_016e9a4c
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0046292f
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462936
    MOV EAX,dword ptr [EAX + 0x16e99d4] ; 0046293d | DAT_016e99d4
    MOV dword ptr [EDX + 0x16e99d0],EAX ; 00462943 | DAT_016e99d0
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00462949
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462950
    FLD float ptr [EAX + 0x16e9a14]     ; 00462957 | DAT_016e9a14
    FSTP float ptr [EDX + 0x16e9a10]    ; 0046295d | DAT_016e9a10
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00462963
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 0046296a
    FLD float ptr [EAX + 0x16e9a54]     ; 00462971 | DAT_016e9a54
    FSTP float ptr [EDX + 0x16e9a50]    ; 00462977 | DAT_016e9a50
    JMP 0x00462b1c                      ; 0046297d
        ;   XREF to: 00462b1c (UNCONDITIONAL_JUMP)  ; LAB_00462b1c
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00462982
        ;   Label: LAB_00462982
    PUSH dword ptr [EAX + 0x16e99d0]    ; 00462989 | DAT_016e99d0
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0046298f
    PUSH dword ptr [EAX + 0x16e99cc]    ; 00462996 | DAT_016e99cc
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 0046299c
    PUSH dword ptr [EAX + 0x16e99c8]    ; 004629a3 | DAT_016e99c8
    CALL shape_design.c_calculateVertexAngle_FUN_00462050 ; 004629a9
        ;   XREF to: 00462050 (UNCONDITIONAL_CALL)  ; double shape_design.c_calculateVertexAngle_FUN_00462050(int vertex1_index, int vertex2_index, int vertex3_index)
    MOV dword ptr [EBP + 0xfffffe20],EAX ; 004629ae
    MOV dword ptr [EBP + 0xfffffe24],EDX ; 004629b4 | g_ModelPolygonData
    FLD double ptr [EBP + 0xfffffe20]   ; 004629ba
    ADD ESP,0xc                         ; 004629c0
    FCOMP double ptr [0x0061bfe6]       ; 004629c3 | DOUBLE_0061bfe6
    FNSTSW AX                           ; 004629c9
    SAHF                                ; 004629cb
    JBE 0x00462b1c                      ; 004629cc
        ;   XREF to: 00462b1c (CONDITIONAL_JUMP)  ; LAB_00462b1c
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 004629d2
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 004629d9 | DAT_016e99c8
    MOV dword ptr [EBP + -0x1c],EAX     ; 004629df
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 004629e2
    MOV EAX,dword ptr [EAX + 0x16e9a08] ; 004629e9 | DAT_016e9a08
    MOV dword ptr [EBP + -0x44],EAX     ; 004629ef
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 004629f2
    MOV EAX,dword ptr [EAX + 0x16e9a48] ; 004629f9 | DAT_016e9a48
    MOV dword ptr [EBP + -0x30],EAX     ; 004629ff
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00462a02
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462a09
    MOV EAX,dword ptr [EAX + 0x16e99cc] ; 00462a10 | DAT_016e99cc
    MOV dword ptr [EDX + 0x16e99c8],EAX ; 00462a16 | DAT_016e99c8
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00462a1c
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462a23
    FLD float ptr [EAX + 0x16e9a0c]     ; 00462a2a | DAT_016e9a0c
    FSTP float ptr [EDX + 0x16e9a08]    ; 00462a30 | DAT_016e9a08
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00462a36
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462a3d
    FLD float ptr [EAX + 0x16e9a4c]     ; 00462a44 | DAT_016e9a4c
    FSTP float ptr [EDX + 0x16e9a48]    ; 00462a4a | DAT_016e9a48
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00462a50
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462a57
    MOV EAX,dword ptr [EAX + 0x16e99d0] ; 00462a5e | DAT_016e99d0
    MOV dword ptr [EDX + 0x16e99cc],EAX ; 00462a64 | DAT_016e99cc
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00462a6a
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462a71
    FLD float ptr [EAX + 0x16e9a10]     ; 00462a78 | DAT_016e9a10
    FSTP float ptr [EDX + 0x16e9a0c]    ; 00462a7e | DAT_016e9a0c
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00462a84
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462a8b
    FLD float ptr [EAX + 0x16e9a50]     ; 00462a92 | DAT_016e9a50
    FSTP float ptr [EDX + 0x16e9a4c]    ; 00462a98 | DAT_016e9a4c
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00462a9e
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462aa5
    MOV EAX,dword ptr [EAX + 0x16e99d4] ; 00462aac | DAT_016e99d4
    MOV dword ptr [EDX + 0x16e99d0],EAX ; 00462ab2 | DAT_016e99d0
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00462ab8
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462abf
    FLD float ptr [EAX + 0x16e9a14]     ; 00462ac6 | DAT_016e9a14
    FSTP float ptr [EDX + 0x16e9a10]    ; 00462acc | DAT_016e9a10
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00462ad2
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462ad9
    FLD float ptr [EAX + 0x16e9a54]     ; 00462ae0 | DAT_016e9a54
    FSTP float ptr [EDX + 0x16e9a50]    ; 00462ae6 | DAT_016e9a50
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462aec
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00462af3
    MOV dword ptr [EDX + 0x16e99d4],EAX ; 00462af6 | DAT_016e99d4
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462afc
    MOV EAX,dword ptr [EBP + -0x44]     ; 00462b03
    MOV dword ptr [EDX + 0x16e9a14],EAX ; 00462b06 | DAT_016e9a14
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00462b0c
    MOV EAX,dword ptr [EBP + -0x30]     ; 00462b13
    MOV dword ptr [EDX + 0x16e9a54],EAX ; 00462b16 | DAT_016e9a54
    MOV EAX,dword ptr [EBP + 0x18]      ; 00462b1c
        ;   Label: LAB_00462b1c
    MOV dword ptr [EBP + -0xc],EAX      ; 00462b1f
    JMP 0x00462b2a                      ; 00462b22
        ;   XREF to: 00462b2a (UNCONDITIONAL_JUMP)  ; LAB_00462b2a
    MOV EAX,dword ptr [EBP + -0xc]      ; 00462b24
        ;   Label: LAB_00462b24
    INC dword ptr [EBP + -0xc]          ; 00462b27
    MOV EAX,[0x016e990c]                ; 00462b2a | g_PolygonCount
        ;   Label: LAB_00462b2a
    DEC EAX                             ; 00462b2f
    CMP EAX,dword ptr [EBP + -0xc]      ; 00462b30
    JLE 0x00462b5b                      ; 00462b33
        ;   XREF to: 00462b5b (CONDITIONAL_JUMP)  ; LAB_00462b5b
    MOV EAX,dword ptr [EBP + -0xc]      ; 00462b35
    INC EAX                             ; 00462b38
    IMUL EAX,EAX,0x184                  ; 00462b39
    IMUL ESI,dword ptr [EBP + -0xc],0x184 ; 00462b3f
    MOV ECX,0x61                        ; 00462b46
    LEA EDI,[ESI + 0x16e9910]           ; 00462b4b | g_ModelPolygonData
    LEA ESI,[EAX + 0x16e9910]           ; 00462b51 | g_ModelPolygonData
    MOVSD.REP ES:EDI,ESI                ; 00462b57 | g_ModelPolygonData | DAT_016e9914
    JMP 0x00462b24                      ; 00462b59
        ;   XREF to: 00462b24 (UNCONDITIONAL_JUMP)  ; LAB_00462b24
    DEC dword ptr [0x016e990c]          ; 00462b5b | g_PolygonCount
        ;   Label: LAB_00462b5b
    MOV ESP,EBP                         ; 00462b61
        ;   Label: LAB_00462b61
    POP EBP                             ; 00462b63
    POP EDI                             ; 00462b64
    POP ESI                             ; 00462b65
    POP EBX                             ; 00462b66
    RET                                 ; 00462b67

