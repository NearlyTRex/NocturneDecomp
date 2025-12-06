; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_processVerticesAndRenderPolygons_FUN_0045d5d0(void)
;
; Local Variables:
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 0045f543
;   shape_design.c_showPointEditor_FUN_0045c6c0 at 0045ca49
;
; Referenced Globals:
;   float g_VertexScaleFactor = 256
;   double g_LightingScaleFactor = 65535
;   int g_ZBufferEnabled = 0x1
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_z
;   undefined4 g_RenderVertexBuffer[0].light
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;   SVertexData[20000] g_VertexNormals
;   undefined4 DAT_01687e90
;   undefined4 DAT_01687e94
;   int g_PolygonCount
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e99c8
;   ... and 12 more
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_light.cpp_calculatePhongLighting_FUN_00505530
;   engine_matrix.c_transformToCache_FUN_0050cd70
;   shape_design.c_calculateVertexNormals_FUN_0045be40
;   shape_design.c_renderSinglePolygon_FUN_0045ce20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d5d0
        ;   Label: shape_design.c_processVerticesAndRenderPolygons_FUN_0045d5d0
    PUSH ESI                            ; 0045d5d1
    PUSH EDI                            ; 0045d5d2
    PUSH EBP                            ; 0045d5d3
    MOV EBP,ESP                         ; 0045d5d4
    SUB ESP,0x7c                        ; 0045d5d6
    MOV dword ptr [EBP + -0xc],0x0      ; 0045d5dc
    JMP 0x0045d5eb                      ; 0045d5e3 | LAB_0045d5eb
        ;   XREF to: 0045d5eb (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045d5e5
        ;   Label: LAB_0045d5e5
    INC dword ptr [EBP + -0xc]          ; 0045d5e8
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045d5eb
        ;   Label: LAB_0045d5eb
    CMP EAX,dword ptr [0x01626408]      ; 0045d5ee | int g_VertexCount
    JGE 0x0045d650                      ; 0045d5f4 | LAB_0045d650
        ;   XREF to: 0045d650 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 0045d5f6
    FLD float ptr [EAX + 0x162640c]     ; 0045d5fa | SVertexData[20000] g_LoadedVertices
    FMUL float ptr [0x0061b406]         ; 0045d600 | float g_VertexScaleFactor
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045d606 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x18]       ; 0045d60b
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 0045d60e
    FLD float ptr [EAX + 0x1626410]     ; 0045d612 | DAT_01626410
    FMUL float ptr [0x0061b406]         ; 0045d618 | float g_VertexScaleFactor
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045d61e | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x14]       ; 0045d623
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 0045d626
    FLD float ptr [EAX + 0x1626414]     ; 0045d62a | g_LoadedVertices[0].vertex.z
    FMUL float ptr [0x0061b406]         ; 0045d630 | float g_VertexScaleFactor
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045d636 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x10]       ; 0045d63b
    LEA EAX,[EBP + -0x18]               ; 0045d63e
    PUSH EAX                            ; 0045d641
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045d642
    PUSH EAX                            ; 0045d645
    CALL engine_matrix.c_transformToCache_FUN_0050cd70 ; 0045d646 | void engine_matrix.c_transformToCache_FUN_0050cd70(int cacheIndex, CVector3i * inputPoint)
        ;   XREF to: 0050cd70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045d64b
    JMP 0x0045d5e5                      ; 0045d64e | LAB_0045d5e5
        ;   XREF to: 0045d5e5 (UNCONDITIONAL_JUMP)
    CMP byte ptr [0x02d03eba],0x0       ; 0045d650 | CHAR_ARRAY_02d03eba
        ;   Label: LAB_0045d650
    JZ 0x0045d675                       ; 0045d657 | LAB_0045d675
        ;   XREF to: 0045d675 (CONDITIONAL_JUMP)
    MOV byte ptr [0x02d03eba],0x0       ; 0045d659 | CHAR_ARRAY_02d03eba
    MOV EAX,0x1                         ; 0045d660
    SUB EAX,dword ptr [0x01e528c0]      ; 0045d665 | int g_GouraudShadingEnabled
    MOV [0x01e528c0],EAX                ; 0045d66b | int g_GouraudShadingEnabled
    CALL shape_design.c_calculateVertexNormals_FUN_0045be40 ; 0045d670 | void shape_design.c_calculateVertexNormals_FUN_0045be40()
        ;   XREF to: 0045be40 (UNCONDITIONAL_CALL)
    CMP byte ptr [0x02d03ec4],0x0       ; 0045d675 | CHAR_ARRAY_02d03ec4
        ;   Label: LAB_0045d675
    JZ 0x0045d695                       ; 0045d67c | LAB_0045d695
        ;   XREF to: 0045d695 (CONDITIONAL_JUMP)
    MOV byte ptr [0x02d03ec4],0x0       ; 0045d67e | CHAR_ARRAY_02d03ec4
    MOV EAX,0x1                         ; 0045d685
    SUB EAX,dword ptr [0x0066ee00]      ; 0045d68a | int g_ZBufferEnabled
    MOV [0x0066ee00],EAX                ; 0045d690 | int g_ZBufferEnabled
    CMP byte ptr [0x02d03eb6],0x0       ; 0045d695 | CHAR_ARRAY_02d03eb6
        ;   Label: LAB_0045d695
    JZ 0x0045d6a7                       ; 0045d69c | LAB_0045d6a7
        ;   XREF to: 0045d6a7 (CONDITIONAL_JUMP)
    CMP byte ptr [0x02d03ec2],0x0       ; 0045d69e | CHAR_ARRAY_02d03ec2
    JNZ 0x0045d6a9                      ; 0045d6a5 | LAB_0045d6a9
        ;   XREF to: 0045d6a9 (CONDITIONAL_JUMP)
    JMP 0x0045d6c0                      ; 0045d6a7 | LAB_0045d6c0
        ;   Label: LAB_0045d6a7
        ;   XREF to: 0045d6c0 (UNCONDITIONAL_JUMP)
    MOV byte ptr [0x02d03eb6],0x0       ; 0045d6a9 | CHAR_ARRAY_02d03eb6
        ;   Label: LAB_0045d6a9
    MOV EAX,0x1                         ; 0045d6b0
    SUB EAX,dword ptr [0x01e528c4]      ; 0045d6b5 | int g_AntiAliasingEnabled
    MOV [0x01e528c4],EAX                ; 0045d6bb | int g_AntiAliasingEnabled
    CMP byte ptr [0x02d03edc],0x0       ; 0045d6c0 | CHAR_ARRAY_02d03edc
        ;   Label: LAB_0045d6c0
    JZ 0x0045d6e0                       ; 0045d6c7 | LAB_0045d6e0
        ;   XREF to: 0045d6e0 (CONDITIONAL_JUMP)
    MOV byte ptr [0x02d03edc],0x0       ; 0045d6c9 | CHAR_ARRAY_02d03edc
    MOV EAX,0x1                         ; 0045d6d0
    SUB EAX,dword ptr [0x01e66158]      ; 0045d6d5 | int g_WireframeMode
    MOV [0x01e66158],EAX                ; 0045d6db | int g_WireframeMode
    MOV dword ptr [EBP + -0xc],0x0      ; 0045d6e0
        ;   Label: LAB_0045d6e0
    JMP 0x0045d6ef                      ; 0045d6e7 | LAB_0045d6ef
        ;   XREF to: 0045d6ef (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045d6e9
        ;   Label: LAB_0045d6e9
    INC dword ptr [EBP + -0xc]          ; 0045d6ec
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045d6ef
        ;   Label: LAB_0045d6ef
    CMP EAX,dword ptr [0x01626408]      ; 0045d6f2 | int g_VertexCount
    JGE 0x0045d762                      ; 0045d6f8 | LAB_0045d762
        ;   XREF to: 0045d762 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 0045d6fa
    FLD float ptr [EAX + 0x1687e8c]     ; 0045d6fe | SVertexData[20000] g_VertexNormals
    FMUL double ptr [0x0061b40e]        ; 0045d704 | double g_LightingScaleFactor
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045d70a | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x74]       ; 0045d70f
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 0045d712
    FLD float ptr [EAX + 0x1687e90]     ; 0045d716 | DAT_01687e90
    FMUL double ptr [0x0061b40e]        ; 0045d71c | double g_LightingScaleFactor
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045d722 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x70]       ; 0045d727
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 0045d72a
    FLD float ptr [EAX + 0x1687e94]     ; 0045d72e | DAT_01687e94
    FMUL double ptr [0x0061b40e]        ; 0045d734 | double g_LightingScaleFactor
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045d73a | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [EBP + -0x6c]       ; 0045d73f
    MOV EAX,dword ptr [EBP + -0x6c]     ; 0045d742
    PUSH EAX                            ; 0045d745
    MOV EAX,dword ptr [EBP + -0x70]     ; 0045d746
    PUSH EAX                            ; 0045d749
    MOV EAX,dword ptr [EBP + -0x74]     ; 0045d74a
    PUSH EAX                            ; 0045d74d
    CALL engine_light.cpp_calculatePhongLighting_FUN_00505530 ; 0045d74e | int engine_light.cpp_calculatePhongLighting_FUN_00505530(int world_x, int world_y, int world_z)
        ;   XREF to: 00505530 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045d753
    IMUL EDX,dword ptr [EBP + -0xc],0x30 ; 0045d756
    MOV dword ptr [EDX + 0x688034],EAX  ; 0045d75a | g_RenderVertexBuffer[0].light
    JMP 0x0045d6e9                      ; 0045d760 | LAB_0045d6e9
        ;   XREF to: 0045d6e9 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0xc],0x0      ; 0045d762
        ;   Label: LAB_0045d762
    JMP 0x0045d771                      ; 0045d769 | LAB_0045d771
        ;   XREF to: 0045d771 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045d76b
        ;   Label: LAB_0045d76b
    INC dword ptr [EBP + -0xc]          ; 0045d76e
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045d771
        ;   Label: LAB_0045d771
    CMP EAX,dword ptr [0x016e990c]      ; 0045d774 | int g_PolygonCount
    JGE 0x0045d816                      ; 0045d77a | LAB_0045d816
        ;   XREF to: 0045d816 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBP + -0xc]      ; 0045d780
    SHL EDX,0x2                         ; 0045d783
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045d786
    MOV dword ptr [EDX + 0x1e6615c],EAX ; 0045d789 | int[20000] g_PolygonIndices
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 0045d78f
    IMUL EAX,dword ptr [EAX + 0x16e99c8],0x30 ; 0045d796 | DAT_016e99c8
    MOV EDX,dword ptr [EBP + -0xc]      ; 0045d79d
    SHL EDX,0x2                         ; 0045d7a0
    MOV EAX,dword ptr [EAX + 0x68801c]  ; 0045d7a3 | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    MOV dword ptr [EDX + 0x1e799dc],EAX ; 0045d7a9 | int[20000] g_PolygonDepths
    MOV dword ptr [EBP + -0x8],0x1      ; 0045d7af
    JMP 0x0045d7be                      ; 0045d7b6 | LAB_0045d7be
        ;   XREF to: 0045d7be (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045d7b8
        ;   Label: LAB_0045d7b8
    INC dword ptr [EBP + -0x8]          ; 0045d7bb
    IMUL EDX,dword ptr [EBP + -0xc],0x184 ; 0045d7be
        ;   Label: LAB_0045d7be
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045d7c5
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 0045d7c8 | DAT_016e99b4
    JGE 0x0045d811                      ; 0045d7ce | LAB_0045d811
        ;   XREF to: 0045d811 (CONDITIONAL_JUMP)
    IMUL EDX,dword ptr [EBP + -0xc],0x184 ; 0045d7d0
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045d7d7
    SHL EAX,0x2                         ; 0045d7da
    ADD EAX,EDX                         ; 0045d7dd
    IMUL EAX,dword ptr [EAX + 0x16e99c8],0x30 ; 0045d7df | DAT_016e99c8 | DAT_016e99cc
    MOV EAX,dword ptr [EAX + 0x68801c]  ; 0045d7e6 | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    MOV dword ptr [EBP + -0x4],EAX      ; 0045d7ec
    MOV EDX,dword ptr [EBP + -0xc]      ; 0045d7ef
    SHL EDX,0x2                         ; 0045d7f2
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045d7f5
    CMP EAX,dword ptr [EDX + 0x1e799dc] ; 0045d7f8 | int[20000] g_PolygonDepths
    JGE 0x0045d80f                      ; 0045d7fe | LAB_0045d80f
        ;   XREF to: 0045d80f (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBP + -0xc]      ; 0045d800
    SHL EDX,0x2                         ; 0045d803
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045d806
    MOV dword ptr [EDX + 0x1e799dc],EAX ; 0045d809 | int[20000] g_PolygonDepths
    JMP 0x0045d7b8                      ; 0045d80f | LAB_0045d7b8
        ;   Label: LAB_0045d80f
        ;   XREF to: 0045d7b8 (UNCONDITIONAL_JUMP)
    JMP 0x0045d76b                      ; 0045d811 | LAB_0045d76b
        ;   Label: LAB_0045d811
        ;   XREF to: 0045d76b (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0xc],0x0      ; 0045d816
        ;   Label: LAB_0045d816
    JMP 0x0045d825                      ; 0045d81d | LAB_0045d825
        ;   XREF to: 0045d825 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045d81f
        ;   Label: LAB_0045d81f
    INC dword ptr [EBP + -0xc]          ; 0045d822
    MOV EAX,[0x016e990c]                ; 0045d825 | int g_PolygonCount
        ;   Label: LAB_0045d825
    DEC EAX                             ; 0045d82a
    CMP EAX,dword ptr [EBP + -0xc]      ; 0045d82b
    JLE 0x0045d8e2                      ; 0045d82e | LAB_0045d8e2
        ;   XREF to: 0045d8e2 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045d834
    INC EAX                             ; 0045d837
    MOV dword ptr [EBP + -0x8],EAX      ; 0045d838
    JMP 0x0045d843                      ; 0045d83b | LAB_0045d843
        ;   XREF to: 0045d843 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045d83d
        ;   Label: LAB_0045d83d
    INC dword ptr [EBP + -0x8]          ; 0045d840
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045d843
        ;   Label: LAB_0045d843
    CMP EAX,dword ptr [0x016e990c]      ; 0045d846 | int g_PolygonCount
    JGE 0x0045d8dd                      ; 0045d84c | LAB_0045d8dd
        ;   XREF to: 0045d8dd (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045d852
    SHL EAX,0x2                         ; 0045d855
    MOV EDX,dword ptr [EBP + -0x8]      ; 0045d858
    SHL EDX,0x2                         ; 0045d85b
    MOV EAX,dword ptr [EAX + 0x1e799dc] ; 0045d85e | int[20000] g_PolygonDepths
    CMP EAX,dword ptr [EDX + 0x1e799dc] ; 0045d864 | int[20000] g_PolygonDepths
    JGE 0x0045d8d8                      ; 0045d86a | LAB_0045d8d8
        ;   XREF to: 0045d8d8 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045d86c
    SHL EAX,0x2                         ; 0045d86f
    MOV EAX,dword ptr [EAX + 0x1e6615c] ; 0045d872 | int[20000] g_PolygonIndices
    MOV dword ptr [EBP + -0x7c],EAX     ; 0045d878
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045d87b
    SHL EAX,0x2                         ; 0045d87e
    MOV EDX,dword ptr [EBP + -0xc]      ; 0045d881
    SHL EDX,0x2                         ; 0045d884
    MOV EAX,dword ptr [EAX + 0x1e6615c] ; 0045d887 | int[20000] g_PolygonIndices
    MOV dword ptr [EDX + 0x1e6615c],EAX ; 0045d88d | int[20000] g_PolygonIndices
    MOV EDX,dword ptr [EBP + -0x8]      ; 0045d893
    SHL EDX,0x2                         ; 0045d896
    MOV EAX,dword ptr [EBP + -0x7c]     ; 0045d899
    MOV dword ptr [EDX + 0x1e6615c],EAX ; 0045d89c | int[20000] g_PolygonIndices
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045d8a2
    SHL EAX,0x2                         ; 0045d8a5
    MOV EAX,dword ptr [EAX + 0x1e799dc] ; 0045d8a8 | int[20000] g_PolygonDepths
    MOV dword ptr [EBP + -0x7c],EAX     ; 0045d8ae
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045d8b1
    SHL EAX,0x2                         ; 0045d8b4
    MOV EDX,dword ptr [EBP + -0xc]      ; 0045d8b7
    SHL EDX,0x2                         ; 0045d8ba
    MOV EAX,dword ptr [EAX + 0x1e799dc] ; 0045d8bd | int[20000] g_PolygonDepths
    MOV dword ptr [EDX + 0x1e799dc],EAX ; 0045d8c3 | int[20000] g_PolygonDepths
    MOV EDX,dword ptr [EBP + -0x8]      ; 0045d8c9
    SHL EDX,0x2                         ; 0045d8cc
    MOV EAX,dword ptr [EBP + -0x7c]     ; 0045d8cf
    MOV dword ptr [EDX + 0x1e799dc],EAX ; 0045d8d2 | int[20000] g_PolygonDepths
    JMP 0x0045d83d                      ; 0045d8d8 | LAB_0045d83d
        ;   Label: LAB_0045d8d8
        ;   XREF to: 0045d83d (UNCONDITIONAL_JUMP)
    JMP 0x0045d81f                      ; 0045d8dd | LAB_0045d81f
        ;   Label: LAB_0045d8dd
        ;   XREF to: 0045d81f (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0xc],0x0      ; 0045d8e2
        ;   Label: LAB_0045d8e2
    JMP 0x0045d8f1                      ; 0045d8e9 | LAB_0045d8f1
        ;   XREF to: 0045d8f1 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045d8eb
        ;   Label: LAB_0045d8eb
    INC dword ptr [EBP + -0xc]          ; 0045d8ee
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045d8f1
        ;   Label: LAB_0045d8f1
    CMP EAX,dword ptr [0x016e990c]      ; 0045d8f4 | int g_PolygonCount
    JGE 0x0045d912                      ; 0045d8fa | LAB_0045d912
        ;   XREF to: 0045d912 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045d8fc
    SHL EAX,0x2                         ; 0045d8ff
    PUSH dword ptr [EAX + 0x1e6615c]    ; 0045d902 | int[20000] g_PolygonIndices
    CALL shape_design.c_renderSinglePolygon_FUN_0045ce20 ; 0045d908 | void shape_design.c_renderSinglePolygon_FUN_0045ce20(int polygon_index)
        ;   XREF to: 0045ce20 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0045d90d
    JMP 0x0045d8eb                      ; 0045d910 | LAB_0045d8eb
        ;   XREF to: 0045d8eb (UNCONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 0045d912
        ;   Label: LAB_0045d912
    POP EBP                             ; 0045d914
    POP EDI                             ; 0045d915
    POP ESI                             ; 0045d916
    POP EBX                             ; 0045d917
    RET                                 ; 0045d918

