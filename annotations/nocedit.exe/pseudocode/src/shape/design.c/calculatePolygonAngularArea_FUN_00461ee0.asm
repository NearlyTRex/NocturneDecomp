; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl shape_design_c_calculatePolygonAngularArea_FUN_00461ee0(SShapeEditorPolygon *polygon_ptr)
;
; Parameters:
; SShapeEditorPolygon * Stack[0x4]:4   polygon_ptr
; Local Variables:
; float[2020]      Stack[-0x2034]:8080  afStackY_2034
; undefined8       Stack[-0xa4]:8  local_a4
; undefined8       Stack[-0x9c]:8  local_9c
; double           Stack[-0x94]:8  local_94
; double           Stack[-0x8c]:8  local_8c
; double           Stack[-0x84]:8  local_84
; double           Stack[-0x7c]:8  local_7c
; double           Stack[-0x74]:8  local_74
; double           Stack[-0x6c]:8  local_6c
; float            Stack[-0x64]:4  local_64
; float[4]         Stack[-0x60]:16  local_60
; float            Stack[-0x50]:4  local_50
; float[4]         Stack[-0x4c]:16  local_4c
; float            Stack[-0x3c]:4  local_3c
; float[4]         Stack[-0x38]:16  local_38
; double           Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; int              Stack[-0x18]:4  local_18
; uint             Stack[-0x14]:4  local_14
;
; XREF[3]:
;   shape_design.c_complexPolygonReduction_FUN_00463b30 at 00464576
;   shape_design.c_mergeTrianglesIntoQuad_FUN_00462190 at 00462436
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 00460130
;
; Referenced Globals:
;   double g_RadiansToDegrees2 = 57.2957795130800
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

    PUSH EBX                            ; 00461ee0
        ;   Label: shape_design.c_calculatePolygonAngularArea_FUN_00461ee0
    PUSH ESI                            ; 00461ee1
    PUSH EDI                            ; 00461ee2
    PUSH EBP                            ; 00461ee3
    MOV EBP,ESP                         ; 00461ee4
    SUB ESP,0x8c                        ; 00461ee6
    MOV dword ptr [EBP + -0x18],0x0     ; 00461eec
    MOV dword ptr [EBP + -0x14],0x0     ; 00461ef3
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461efa
    MOV EAX,dword ptr [EAX + 0xa4]      ; 00461efd
    MOV dword ptr [EBP + -0x4],EAX      ; 00461f03
    MOV dword ptr [EBP + -0x8],0x0      ; 00461f06
    JMP 0x00461f15                      ; 00461f0d
        ;   XREF to: 00461f15 (UNCONDITIONAL_JUMP)  ; LAB_00461f15
    MOV EAX,dword ptr [EBP + -0x8]      ; 00461f0f
        ;   Label: LAB_00461f0f
    INC dword ptr [EBP + -0x8]          ; 00461f12
    MOV EAX,dword ptr [EBP + -0x8]      ; 00461f15
        ;   Label: LAB_00461f15
    CMP EAX,dword ptr [EBP + -0x4]      ; 00461f18
    JGE 0x00462030                      ; 00461f1b
        ;   XREF to: 00462030 (CONDITIONAL_JUMP)  ; LAB_00462030
    MOV EAX,dword ptr [EBP + -0x8]      ; 00461f21
    MOV EDX,dword ptr [EBP + -0x8]      ; 00461f24
    SAR EDX,0x1f                        ; 00461f27
    IDIV dword ptr [EBP + -0x4]         ; 00461f2a
    SHL EDX,0x2                         ; 00461f2d
    ADD EDX,dword ptr [EBP + 0x14]      ; 00461f30
    IMUL ESI,dword ptr [EDX + 0xb8],0x14 ; 00461f33
    LEA EDI,[EBP + -0x40]               ; 00461f3a
    LEA ESI,[ESI + 0x162640c]           ; 00461f3d | g_LoadedVertices
    MOVSD ES:EDI,ESI                    ; 00461f43 | g_LoadedVertices
    MOVSD ES:EDI,ESI                    ; 00461f44 | DAT_01626410
    MOVSD ES:EDI,ESI                    ; 00461f45 | g_LoadedVertices[0].vertex.z
    MOVSD ES:EDI,ESI                    ; 00461f46 | DAT_01626418
    MOVSD ES:EDI,ESI                    ; 00461f47 | DAT_0162641c
    MOV EDX,dword ptr [EBP + -0x8]      ; 00461f48
    INC EDX                             ; 00461f4b
    MOV EAX,EDX                         ; 00461f4c
    SAR EDX,0x1f                        ; 00461f4e
    IDIV dword ptr [EBP + -0x4]         ; 00461f51
    SHL EDX,0x2                         ; 00461f54
    ADD EDX,dword ptr [EBP + 0x14]      ; 00461f57
    IMUL ESI,dword ptr [EDX + 0xb8],0x14 ; 00461f5a
    LEA EDI,[EBP + -0x2c]               ; 00461f61
    LEA ESI,[ESI + 0x162640c]           ; 00461f64 | g_LoadedVertices
    MOVSD ES:EDI,ESI                    ; 00461f6a | g_LoadedVertices
    MOVSD ES:EDI,ESI                    ; 00461f6b | DAT_01626410
    MOVSD ES:EDI,ESI                    ; 00461f6c | g_LoadedVertices[0].vertex.z
    MOVSD ES:EDI,ESI                    ; 00461f6d | DAT_01626418
    MOVSD ES:EDI,ESI                    ; 00461f6e | DAT_0162641c
    MOV EDX,dword ptr [EBP + -0x8]      ; 00461f6f
    ADD EDX,0x2                         ; 00461f72
    MOV EAX,EDX                         ; 00461f75
    SAR EDX,0x1f                        ; 00461f77
    IDIV dword ptr [EBP + -0x4]         ; 00461f7a
    SHL EDX,0x2                         ; 00461f7d
    ADD EDX,dword ptr [EBP + 0x14]      ; 00461f80
    IMUL ESI,dword ptr [EDX + 0xb8],0x14 ; 00461f83
    LEA EDI,[EBP + -0x54]               ; 00461f8a
    LEA ESI,[ESI + 0x162640c]           ; 00461f8d | g_LoadedVertices
    MOVSD ES:EDI,ESI                    ; 00461f93 | g_LoadedVertices
    MOVSD ES:EDI,ESI                    ; 00461f94 | DAT_01626410
    MOVSD ES:EDI,ESI                    ; 00461f95 | g_LoadedVertices[0].vertex.z
    MOVSD ES:EDI,ESI                    ; 00461f96 | DAT_01626418
    MOVSD ES:EDI,ESI                    ; 00461f97 | DAT_0162641c
    FLD float ptr [EBP + -0x40]         ; 00461f98
    FSUB float ptr [EBP + -0x2c]        ; 00461f9b
    FSTP double ptr [EBP + 0xffffff7c]  ; 00461f9e
    FLD float ptr [EBP + -0x3c]         ; 00461fa4
    FSUB float ptr [EBP + -0x28]        ; 00461fa7
    FSTP double ptr [EBP + -0x7c]       ; 00461faa
    FLD float ptr [EBP + -0x38]         ; 00461fad
    FSUB float ptr [EBP + -0x24]        ; 00461fb0
    FSTP double ptr [EBP + -0x74]       ; 00461fb3
    FLD float ptr [EBP + -0x54]         ; 00461fb6
    FSUB float ptr [EBP + -0x2c]        ; 00461fb9
    FSTP double ptr [EBP + -0x6c]       ; 00461fbc
    FLD float ptr [EBP + -0x50]         ; 00461fbf
    FSUB float ptr [EBP + -0x28]        ; 00461fc2
    FSTP double ptr [EBP + -0x64]       ; 00461fc5
    FLD float ptr [EBP + -0x4c]         ; 00461fc8
    FSUB float ptr [EBP + -0x24]        ; 00461fcb
    FSTP double ptr [EBP + -0x5c]       ; 00461fce
    LEA EDX,[EBP + 0xffffff7c]          ; 00461fd1
    PUSH EDX                            ; 00461fd7
    CALL shape_design.c_normalizeVertex_FUN_00461e60 ; 00461fd8
        ;   XREF to: 00461e60 (UNCONDITIONAL_CALL)  ; void shape_design.c_normalizeVertex_FUN_00461e60(CVector3f * vertex)
    ADD ESP,0x4                         ; 00461fdd
    LEA EDX,[EBP + -0x6c]               ; 00461fe0
    PUSH EDX                            ; 00461fe3
    CALL shape_design.c_normalizeVertex_FUN_00461e60 ; 00461fe4
        ;   XREF to: 00461e60 (UNCONDITIONAL_CALL)  ; void shape_design.c_normalizeVertex_FUN_00461e60(CVector3f * vertex)
    ADD ESP,0x4                         ; 00461fe9
    FLD double ptr [EBP + -0x7c]        ; 00461fec
    FMUL double ptr [EBP + -0x64]       ; 00461fef
    FLD double ptr [EBP + 0xffffff7c]   ; 00461ff2
    FMUL double ptr [EBP + -0x6c]       ; 00461ff8
    FADDP                               ; 00461ffb
    FLD double ptr [EBP + -0x74]        ; 00461ffd
    FMUL double ptr [EBP + -0x5c]       ; 00462000
    FADDP                               ; 00462003
    SUB ESP,0x8                         ; 00462005
    FSTP double ptr [ESP]               ; 00462008
    CALL shape_design.c_clampedArccos_FUN_00461c50 ; 0046200b
        ;   XREF to: 00461c50 (UNCONDITIONAL_CALL)  ; double shape_design.c_clampedArccos_FUN_00461c50(double dot_product)
    MOV dword ptr [EBP + 0xffffff74],EAX ; 00462010
    MOV dword ptr [EBP + 0xffffff78],EDX ; 00462016
    FLD double ptr [EBP + 0xffffff74]   ; 0046201c
    ADD ESP,0x8                         ; 00462022
    FADD double ptr [EBP + -0x18]       ; 00462025
    FSTP double ptr [EBP + -0x18]       ; 00462028
    JMP 0x00461f0f                      ; 0046202b
        ;   XREF to: 00461f0f (UNCONDITIONAL_JUMP)  ; LAB_00461f0f
    FLD double ptr [EBP + -0x18]        ; 00462030
        ;   Label: LAB_00462030
    FMUL double ptr [0x0061bfbe]        ; 00462033 | g_RadiansToDegrees2
    FSTP double ptr [EBP + -0x10]       ; 00462039
    MOV EAX,dword ptr [EBP + -0x10]     ; 0046203c
    MOV EDX,dword ptr [EBP + -0xc]      ; 0046203f
    MOV ESP,EBP                         ; 00462042
    POP EBP                             ; 00462044
    POP EDI                             ; 00462045
    POP ESI                             ; 00462046
    POP EBX                             ; 00462047
    RET                                 ; 00462048

