; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl shape_design_c_calculateVertexAngle_FUN_00462050(int vertex1_index,int vertex2_index,int vertex3_index)
;
; Parameters:
; int              Stack[0x4]:4   vertex1_index
; int              Stack[0x8]:4   vertex2_index
; int              Stack[0xc]:4   vertex3_index
; Local Variables:
; double           Stack[-0x84]:8  local_84
; double           Stack[-0x7c]:8  local_7c
; double           Stack[-0x74]:8  local_74
; double           Stack[-0x6c]:8  local_6c
; double           Stack[-0x64]:8  local_64
; double           Stack[-0x5c]:8  local_5c
; float            Stack[-0x54]:4  local_54
; float            Stack[-0x50]:4  local_50
; float            Stack[-0x4c]:4  local_4c
; float            Stack[-0x48]:4  fStack_48
; float            Stack[-0x44]:4  fStack_44
; float            Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; float            Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  fStack_34
; float            Stack[-0x30]:4  fStack_30
; float            Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  fStack_20
; float            Stack[-0x1c]:4  fStack_1c
;
; XREF[2]:
;   shape_design.c_mergeAdjacentPolygons_FUN_00462b70 at 004633c0
;   shape_design.c_mergeTrianglesIntoQuad_FUN_00462190 at 004629a9
;
; Referenced Globals:
;   double g_RadiansToDegrees3 = 57.2957795130800
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;   undefined4 DAT_01626418
;   undefined4 DAT_0162641c
;
; Called Functions:
;   shape_design.c_clampedArccos_FUN_00461c50
;   shape_design.c_normalizeVertex_FUN_00461e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462050
        ;   Label: shape_design.c_calculateVertexAngle_FUN_00462050
    PUSH ESI                            ; 00462051
    PUSH EDI                            ; 00462052
    PUSH EBP                            ; 00462053
    MOV EBP,ESP                         ; 00462054
    SUB ESP,0x7c                        ; 00462056
    IMUL ESI,dword ptr [EBP + 0x14],0x14 ; 0046205c
    LEA EDI,[EBP + -0x1c]               ; 00462060
    LEA ESI,[ESI + 0x162640c]           ; 00462063 | g_LoadedVertices
    MOVSD ES:EDI,ESI                    ; 00462069 | g_LoadedVertices
    MOVSD ES:EDI,ESI                    ; 0046206a | DAT_01626410
    MOVSD ES:EDI,ESI                    ; 0046206b | g_LoadedVertices[0].vertex.z
    MOVSD ES:EDI,ESI                    ; 0046206c | DAT_01626418
    MOVSD ES:EDI,ESI                    ; 0046206d | DAT_0162641c
    IMUL ESI,dword ptr [EBP + 0x18],0x14 ; 0046206e
    LEA EDI,[EBP + -0x44]               ; 00462072
    LEA ESI,[ESI + 0x162640c]           ; 00462075 | g_LoadedVertices
    MOVSD ES:EDI,ESI                    ; 0046207b | g_LoadedVertices
    MOVSD ES:EDI,ESI                    ; 0046207c | DAT_01626410
    MOVSD ES:EDI,ESI                    ; 0046207d | g_LoadedVertices[0].vertex.z
    MOVSD ES:EDI,ESI                    ; 0046207e | DAT_01626418
    MOVSD ES:EDI,ESI                    ; 0046207f | DAT_0162641c
    IMUL ESI,dword ptr [EBP + 0x1c],0x14 ; 00462080
    LEA EDI,[EBP + -0x30]               ; 00462084
    LEA ESI,[ESI + 0x162640c]           ; 00462087 | g_LoadedVertices
    MOVSD ES:EDI,ESI                    ; 0046208d | g_LoadedVertices
    MOVSD ES:EDI,ESI                    ; 0046208e | DAT_01626410
    MOVSD ES:EDI,ESI                    ; 0046208f | g_LoadedVertices[0].vertex.z
    MOVSD ES:EDI,ESI                    ; 00462090 | DAT_01626418
    MOVSD ES:EDI,ESI                    ; 00462091 | DAT_0162641c
    FLD float ptr [EBP + -0x1c]         ; 00462092
    FSUB float ptr [EBP + -0x44]        ; 00462095
    FSTP double ptr [EBP + -0x74]       ; 00462098
    FLD float ptr [EBP + -0x18]         ; 0046209b
    FSUB float ptr [EBP + -0x40]        ; 0046209e
    FSTP double ptr [EBP + -0x6c]       ; 004620a1
    FLD float ptr [EBP + -0x14]         ; 004620a4
    FSUB float ptr [EBP + -0x3c]        ; 004620a7
    FSTP double ptr [EBP + -0x64]       ; 004620aa
    FLD float ptr [EBP + -0x30]         ; 004620ad
    FSUB float ptr [EBP + -0x44]        ; 004620b0
    FSTP double ptr [EBP + -0x5c]       ; 004620b3
    FLD float ptr [EBP + -0x2c]         ; 004620b6
    FSUB float ptr [EBP + -0x40]        ; 004620b9
    FSTP double ptr [EBP + -0x54]       ; 004620bc
    FLD float ptr [EBP + -0x28]         ; 004620bf
    FSUB float ptr [EBP + -0x3c]        ; 004620c2
    FSTP double ptr [EBP + -0x4c]       ; 004620c5
    LEA ESI,[EBP + -0x74]               ; 004620c8
    PUSH ESI                            ; 004620cb
    CALL shape_design.c_normalizeVertex_FUN_00461e60 ; 004620cc
        ;   XREF to: 00461e60 (UNCONDITIONAL_CALL)  ; void shape_design.c_normalizeVertex_FUN_00461e60(CVector3f * vertex)
    ADD ESP,0x4                         ; 004620d1
    LEA ESI,[EBP + -0x5c]               ; 004620d4
    PUSH ESI                            ; 004620d7
    CALL shape_design.c_normalizeVertex_FUN_00461e60 ; 004620d8
        ;   XREF to: 00461e60 (UNCONDITIONAL_CALL)  ; void shape_design.c_normalizeVertex_FUN_00461e60(CVector3f * vertex)
    ADD ESP,0x4                         ; 004620dd
    FLD double ptr [EBP + -0x6c]        ; 004620e0
    FMUL double ptr [EBP + -0x54]       ; 004620e3
    FLD double ptr [EBP + -0x74]        ; 004620e6
    FMUL double ptr [EBP + -0x5c]       ; 004620e9
    FADDP                               ; 004620ec
    FLD double ptr [EBP + -0x64]        ; 004620ee
    FMUL double ptr [EBP + -0x4c]       ; 004620f1
    FADDP                               ; 004620f4
    SUB ESP,0x8                         ; 004620f6
    FSTP double ptr [ESP]               ; 004620f9
    CALL shape_design.c_clampedArccos_FUN_00461c50 ; 004620fc
        ;   XREF to: 00461c50 (UNCONDITIONAL_CALL)  ; double shape_design.c_clampedArccos_FUN_00461c50(double dot_product)
    MOV dword ptr [EBP + -0x7c],EAX     ; 00462101
    MOV dword ptr [EBP + -0x78],EDX     ; 00462104
    FLD double ptr [EBP + -0x7c]        ; 00462107
    ADD ESP,0x8                         ; 0046210a
    FMUL double ptr [0x0061bfc6]        ; 0046210d | g_RadiansToDegrees3
    FSTP double ptr [EBP + -0x8]        ; 00462113
    MOV EAX,dword ptr [EBP + -0x8]      ; 00462116
    MOV EDX,dword ptr [EBP + -0x4]      ; 00462119
    MOV ESP,EBP                         ; 0046211c
    POP EBP                             ; 0046211e
    POP EDI                             ; 0046211f
    POP ESI                             ; 00462120
    POP EBX                             ; 00462121
    RET                                 ; 00462122

