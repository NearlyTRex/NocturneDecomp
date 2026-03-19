; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_normalizeUVCoordinates_FUN_0046e340(void)
;
; Local Variables:
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_tileTextureMaps_FUN_0046a180 at 0046a232
;
; Referenced Globals:
;   double g_UvNormalizationFactor = 0.00390625
;   double g_UvOffsetMultiplier = 256
;   int g_PolygonCount
;   undefined4 g_ModelPolygonData[0].vertex_indices_count
;   undefined4 g_ModelPolygonData[0].uv_u[0]
;   undefined4 g_ModelPolygonData[0].uv_v[0]
;
; Called Functions:
;   crt_math.c_floor_FUN_005feb90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046e340
        ;   Label: shape_design.c_normalizeUVCoordinates_FUN_0046e340
    PUSH ESI                            ; 0046e341
    PUSH EDI                            ; 0046e342
    PUSH EBP                            ; 0046e343
    MOV EBP,ESP                         ; 0046e344
    SUB ESP,0x1c                        ; 0046e346
    MOV dword ptr [EBP + -0x8],0x0      ; 0046e34c
    JMP 0x0046e358                      ; 0046e353
        ;   XREF to: 0046e358 (UNCONDITIONAL_JUMP)  ; LAB_0046e358
    INC dword ptr [EBP + -0x8]          ; 0046e355
        ;   Label: LAB_0046e355
    MOV EAX,dword ptr [EBP + -0x8]      ; 0046e358
        ;   Label: LAB_0046e358
    CMP EAX,dword ptr [0x016e990c]      ; 0046e35b | g_PolygonCount
    JGE 0x0046e4c2                      ; 0046e361
        ;   XREF to: 0046e4c2 (CONDITIONAL_JUMP)  ; LAB_0046e4c2
    MOV dword ptr [EBP + -0x14],0x7149f2ca ; 0046e367
    MOV dword ptr [EBP + -0x10],0x7149f2ca ; 0046e36e
    MOV dword ptr [EBP + -0x4],0x0      ; 0046e375
    JMP 0x0046e381                      ; 0046e37c
        ;   XREF to: 0046e381 (UNCONDITIONAL_JUMP)  ; LAB_0046e381
    INC dword ptr [EBP + -0x4]          ; 0046e37e
        ;   Label: LAB_0046e37e
    IMUL EDX,dword ptr [EBP + -0x8],0x184 ; 0046e381
        ;   Label: LAB_0046e381
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e388
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 0046e38b | g_ModelPolygonData[0].vertex_indices_count
    JGE 0x0046e402                      ; 0046e391
        ;   XREF to: 0046e402 (CONDITIONAL_JUMP)  ; LAB_0046e402
    IMUL EDX,dword ptr [EBP + -0x8],0x184 ; 0046e393
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e39a
    SHL EAX,0x2                         ; 0046e39d
    ADD EAX,EDX                         ; 0046e3a0
    FLD float ptr [EAX + 0x16e9a08]     ; 0046e3a2 | g_ModelPolygonData[0].uv_u[0]
    FCOMP float ptr [EBP + -0x14]       ; 0046e3a8
    FNSTSW AX                           ; 0046e3ab
    SAHF                                ; 0046e3ad
    JNC 0x0046e3c8                      ; 0046e3ae
        ;   XREF to: 0046e3c8 (CONDITIONAL_JUMP)  ; LAB_0046e3c8
    IMUL EDX,dword ptr [EBP + -0x8],0x184 ; 0046e3b0
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e3b7
    SHL EAX,0x2                         ; 0046e3ba
    ADD EAX,EDX                         ; 0046e3bd
    MOV EAX,dword ptr [EAX + 0x16e9a08] ; 0046e3bf | g_ModelPolygonData[0].uv_u[0]
    MOV dword ptr [EBP + -0x14],EAX     ; 0046e3c5
    IMUL EDX,dword ptr [EBP + -0x8],0x184 ; 0046e3c8
        ;   Label: LAB_0046e3c8
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e3cf
    SHL EAX,0x2                         ; 0046e3d2
    ADD EAX,EDX                         ; 0046e3d5
    FLD float ptr [EAX + 0x16e9a48]     ; 0046e3d7 | g_ModelPolygonData[0].uv_v[0]
    FCOMP float ptr [EBP + -0x10]       ; 0046e3dd
    FNSTSW AX                           ; 0046e3e0
    SAHF                                ; 0046e3e2
    JNC 0x0046e3fd                      ; 0046e3e3
        ;   XREF to: 0046e3fd (CONDITIONAL_JUMP)  ; LAB_0046e3fd
    IMUL EDX,dword ptr [EBP + -0x8],0x184 ; 0046e3e5
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e3ec
    SHL EAX,0x2                         ; 0046e3ef
    ADD EAX,EDX                         ; 0046e3f2
    MOV EAX,dword ptr [EAX + 0x16e9a48] ; 0046e3f4 | g_ModelPolygonData[0].uv_v[0]
    MOV dword ptr [EBP + -0x10],EAX     ; 0046e3fa
    JMP 0x0046e37e                      ; 0046e3fd
        ;   XREF to: 0046e37e (UNCONDITIONAL_JUMP)  ; LAB_0046e37e
        ;   Label: LAB_0046e3fd
    MOV dword ptr [EBP + -0xc],0x40800000 ; 0046e402
        ;   Label: LAB_0046e402
    FLD float ptr [EBP + -0x14]         ; 0046e409
    FADD float ptr [EBP + -0xc]         ; 0046e40c
    FMUL double ptr [0x0061de66]        ; 0046e40f | g_UvNormalizationFactor
    SUB ESP,0x8                         ; 0046e415
    FSTP double ptr [ESP]               ; 0046e418
    CALL crt_math.c_floor_FUN_005feb90  ; 0046e41b
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [EBP + -0x1c],EAX     ; 0046e420
    MOV dword ptr [EBP + -0x18],EDX     ; 0046e423
    FLD double ptr [EBP + -0x1c]        ; 0046e426
    ADD ESP,0x8                         ; 0046e429
    FMUL double ptr [0x0061de6e]        ; 0046e42c | g_UvOffsetMultiplier
    FSTP float ptr [EBP + -0x14]        ; 0046e432
    FLD float ptr [EBP + -0x10]         ; 0046e435
    FADD float ptr [EBP + -0xc]         ; 0046e438
    FMUL double ptr [0x0061de66]        ; 0046e43b | g_UvNormalizationFactor
    SUB ESP,0x8                         ; 0046e441
    FSTP double ptr [ESP]               ; 0046e444
    CALL crt_math.c_floor_FUN_005feb90  ; 0046e447
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [EBP + -0x1c],EAX     ; 0046e44c
    MOV dword ptr [EBP + -0x18],EDX     ; 0046e44f
    FLD double ptr [EBP + -0x1c]        ; 0046e452
    ADD ESP,0x8                         ; 0046e455
    FMUL double ptr [0x0061de6e]        ; 0046e458 | g_UvOffsetMultiplier
    FSTP float ptr [EBP + -0x10]        ; 0046e45e
    MOV dword ptr [EBP + -0x4],0x0      ; 0046e461
    JMP 0x0046e46d                      ; 0046e468
        ;   XREF to: 0046e46d (UNCONDITIONAL_JUMP)  ; LAB_0046e46d
    INC dword ptr [EBP + -0x4]          ; 0046e46a
        ;   Label: LAB_0046e46a
    IMUL EDX,dword ptr [EBP + -0x8],0x184 ; 0046e46d
        ;   Label: LAB_0046e46d
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e474
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 0046e477 | g_ModelPolygonData[0].vertex_indices_count
    JGE 0x0046e4bd                      ; 0046e47d
        ;   XREF to: 0046e4bd (CONDITIONAL_JUMP)  ; LAB_0046e4bd
    IMUL EDX,dword ptr [EBP + -0x8],0x184 ; 0046e47f
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e486
    SHL EAX,0x2                         ; 0046e489
    ADD EAX,EDX                         ; 0046e48c
    FLD float ptr [EAX + 0x16e9a08]     ; 0046e48e | g_ModelPolygonData[0].uv_u[0]
    FSUB float ptr [EBP + -0x14]        ; 0046e494
    FSTP float ptr [EAX + 0x16e9a08]    ; 0046e497 | g_ModelPolygonData[0].uv_u[0]
    IMUL EAX,dword ptr [EBP + -0x8],0x184 ; 0046e49d
    MOV EDX,dword ptr [EBP + -0x4]      ; 0046e4a4
    SHL EDX,0x2                         ; 0046e4a7
    ADD EAX,EDX                         ; 0046e4aa
    FLD float ptr [EAX + 0x16e9a48]     ; 0046e4ac | g_ModelPolygonData[0].uv_v[0]
    FSUB float ptr [EBP + -0x10]        ; 0046e4b2
    FSTP float ptr [EAX + 0x16e9a48]    ; 0046e4b5 | g_ModelPolygonData[0].uv_v[0]
    JMP 0x0046e46a                      ; 0046e4bb
        ;   XREF to: 0046e46a (UNCONDITIONAL_JUMP)  ; LAB_0046e46a
    JMP 0x0046e355                      ; 0046e4bd
        ;   XREF to: 0046e355 (UNCONDITIONAL_JUMP)  ; LAB_0046e355
        ;   Label: LAB_0046e4bd
    MOV ESP,EBP                         ; 0046e4c2
        ;   Label: LAB_0046e4c2
    POP EBP                             ; 0046e4c4
    POP EDI                             ; 0046e4c5
    POP ESI                             ; 0046e4c6
    POP EBX                             ; 0046e4c7
    RET                                 ; 0046e4c8

