; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_keyframe_c_calculatePackedSurfaceNormal_FUN_004df430(CVector3i *vertex_data,SMRGLPrimitiveTriangleIndex *texture)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   vertex_data
; SMRGLPrimitiveTriangleIndex * Stack[0x8]:4   texture
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
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
;   engine_keyframe.c_interpolateCubicKeyframes_FUN_004df960 at 004dfd3b
;   engine_keyframe.c_recomputeKeyFrameNormals_FUN_004dfd50 at 004dfe29
;
; Referenced Globals:
;   undefined4 DAT_005dbbf6
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df430
        ;   Label: engine_keyframe.c_calculatePackedSurfaceNormal_FUN_004df430
    PUSH ESI                            ; 004df431
    PUSH EDI                            ; 004df432
    PUSH EBP                            ; 004df433
    SUB ESP,0x3c                        ; 004df434
    MOV EBX,dword ptr [ESP + 0x50]      ; 004df437
    MOV EDX,dword ptr [ESP + 0x54]      ; 004df43b
    MOV ECX,dword ptr [EDX + 0x1c]      ; 004df43f
    LEA EAX,[ECX*0x4 + 0x0]             ; 004df442
    SUB EAX,ECX                         ; 004df449
    SHL EAX,0x2                         ; 004df44b
    MOV ESI,dword ptr [EDX + 0x18]      ; 004df44e
    LEA ECX,[EAX + EBX*0x1]             ; 004df451
    LEA EAX,[ESI*0x4 + 0x0]             ; 004df454
    SUB EAX,ESI                         ; 004df45b
    MOV ESI,dword ptr [ECX]             ; 004df45d
    SUB ESI,dword ptr [EBX + EAX*0x4]   ; 004df45f
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x4] ; 004df462
    MOV dword ptr [ESP + 0x2c],ESI      ; 004df466
    MOV ESI,dword ptr [ECX + 0x4]       ; 004df46a
    SUB ESI,EBP                         ; 004df46d
    MOV dword ptr [ESP + 0x30],ESI      ; 004df46f
    MOV ESI,dword ptr [ECX + 0x8]       ; 004df473
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x8] ; 004df476
    MOV EAX,ESI                         ; 004df47a
    SUB EAX,EDI                         ; 004df47c
    MOV ESI,dword ptr [EDX + 0x20]      ; 004df47e
    MOV dword ptr [ESP + 0x34],EAX      ; 004df481
    LEA EAX,[ESI*0x4 + 0x0]             ; 004df485
    SUB EAX,ESI                         ; 004df48c
    MOV EBP,dword ptr [ECX]             ; 004df48e
    MOV ESI,dword ptr [EBX + EAX*0x4]   ; 004df490
    SUB ESI,EBP                         ; 004df493
    MOV dword ptr [ESP + 0x38],ESI      ; 004df495
    FILD dword ptr [ESP + 0x34]         ; 004df499
    FILD dword ptr [ESP + 0x38]         ; 004df49d
    FST float ptr [ESP + 0x8]           ; 004df4a1
    FXCH                                ; 004df4a5
    FSTP float ptr [ESP]                ; 004df4a7
    FMUL float ptr [ESP]                ; 004df4aa
    MOV EDI,dword ptr [ECX + 0x4]       ; 004df4ad
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x4] ; 004df4b0
    FILD dword ptr [ESP + 0x2c]         ; 004df4b4
    SUB ESI,EDI                         ; 004df4b8
    MOV EBP,dword ptr [ECX + 0x8]       ; 004df4ba
    MOV dword ptr [ESP + 0x38],ESI      ; 004df4bd
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x8] ; 004df4c1
    FLD ST0                             ; 004df4c5
    FILD dword ptr [ESP + 0x38]         ; 004df4c7
    FSTP float ptr [ESP + 0xc]          ; 004df4cb
    FMUL float ptr [ESP + 0xc]          ; 004df4cf
    SUB EAX,EBP                         ; 004df4d3
    FILD dword ptr [ESP + 0x30]         ; 004df4d5
    MOV dword ptr [ESP + 0x38],EAX      ; 004df4d9
    FLD ST0                             ; 004df4dd
    FILD dword ptr [ESP + 0x38]         ; 004df4df
    FXCH                                ; 004df4e3
    FMUL ST1                            ; 004df4e5
    FXCH ST4                            ; 004df4e7
    FMULP                               ; 004df4e9
    FLD float ptr [ESP + 0xc]           ; 004df4eb
    FMUL float ptr [ESP]                ; 004df4ef
    FLD float ptr [ESP + 0x8]           ; 004df4f2
    FMULP ST3                           ; 004df4f6
    FSUBP ST4,ST0                       ; 004df4f8
    FSUBP ST4,ST0                       ; 004df4fa
    FXCH ST2                            ; 004df4fc
    FST float ptr [ESP + 0x28]          ; 004df4fe
    FMUL float ptr [ESP + 0x28]         ; 004df502
    FXCH ST3                            ; 004df506
    FST float ptr [ESP + 0x24]          ; 004df508
    FMUL float ptr [ESP + 0x24]         ; 004df50c
    FXCH ST2                            ; 004df510
    FSUBP                               ; 004df512
    FXCH                                ; 004df514
    FADDP ST2,ST0                       ; 004df516
    FST float ptr [ESP + 0x20]          ; 004df518
    FMUL float ptr [ESP + 0x20]         ; 004df51c
    FADDP                               ; 004df520
    FSQRT                               ; 004df522
    FSTP float ptr [ESP + 0x1c]         ; 004df524
    TEST dword ptr [ESP + 0x1c],0x7fffffff ; 004df528
    JZ 0x004df5df                       ; 004df530
        ;   XREF to: 004df5df (CONDITIONAL_JUMP)  ; LAB_004df5df
    FLD1                                ; 004df536
        ;   Label: LAB_004df536
    FLD float ptr [ESP + 0x28]          ; 004df538
    FXCH                                ; 004df53c
    FDIV float ptr [ESP + 0x1c]         ; 004df53e
    FXCH                                ; 004df542
    FMUL ST1                            ; 004df544
    FLD float ptr [ESP + 0x24]          ; 004df546
    FMUL ST2                            ; 004df54a
    FLD float ptr [ESP + 0x20]          ; 004df54c
    MOV ECX,dword ptr [EDX + 0x18]      ; 004df550
    FMULP ST3                           ; 004df553
    LEA EAX,[ECX*0x4 + 0x0]             ; 004df555
    FXCH                                ; 004df55c
    FLD double ptr [0x005dbbf6]         ; 004df55e | DAT_005dbbf6
    FXCH                                ; 004df564
    FMUL ST1                            ; 004df566
    SUB EAX,ECX                         ; 004df568
    FXCH ST2                            ; 004df56a
    FMUL ST1                            ; 004df56c
    FILD dword ptr [EBX + EAX*0x4 + 0x4] ; 004df56e
    FXCH                                ; 004df572
    FSTP float ptr [ESP + 0x24]         ; 004df574
    FMUL float ptr [ESP + 0x24]         ; 004df578
    FXCH ST2                            ; 004df57c
    FSTP float ptr [ESP + 0x28]         ; 004df57e
    FILD dword ptr [EBX + EAX*0x4]      ; 004df582
    FMUL float ptr [ESP + 0x28]         ; 004df585
    FXCH ST3                            ; 004df589
    FMULP                               ; 004df58b
    FXCH ST2                            ; 004df58d
    FADDP                               ; 004df58f
    FXCH                                ; 004df591
    FSTP float ptr [ESP + 0x20]         ; 004df593
    FILD dword ptr [EBX + EAX*0x4 + 0x8] ; 004df597
    FMUL float ptr [ESP + 0x20]         ; 004df59b
    FLD float ptr [ESP + 0x28]          ; 004df59f
    FLD float ptr [ESP + 0x24]          ; 004df5a3
    FLD float ptr [ESP + 0x20]          ; 004df5a7
    FXCH ST2                            ; 004df5ab
    CALL crt_math.c_round_FUN_005b7ff0  ; 004df5ad
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 004df5b2
    CALL crt_math.c_round_FUN_005b7ff0  ; 004df5b4
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 004df5b9
    CALL crt_math.c_round_FUN_005b7ff0  ; 004df5bb
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 004df5c0
    FISTP dword ptr [EDX + 0x8]         ; 004df5c2
    FXCH                                ; 004df5c5
    FISTP dword ptr [EDX + 0xc]         ; 004df5c7
    FISTP dword ptr [EDX + 0x10]        ; 004df5ca
    FADDP                               ; 004df5cd
    CALL crt_math.c_round_FUN_005b7ff0  ; 004df5cf
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [EDX + 0x14]        ; 004df5d4
    ADD ESP,0x3c                        ; 004df5d7
    POP EBP                             ; 004df5da
    POP EDI                             ; 004df5db
    POP ESI                             ; 004df5dc
    POP EBX                             ; 004df5dd
    RET                                 ; 004df5de
    MOV dword ptr [ESP + 0x1c],0x477fff00 ; 004df5df
        ;   Label: LAB_004df5df
    JMP 0x004df536                      ; 004df5e7
        ;   XREF to: 004df536 (UNCONDITIONAL_JUMP)  ; LAB_004df536

