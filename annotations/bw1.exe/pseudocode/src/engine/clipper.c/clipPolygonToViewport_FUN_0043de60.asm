; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_clipPolygonToViewport_FUN_0043de60(int vertex_count,int *vertex_indices)
;
; Parameters:
; int              Stack[0x4]:4   vertex_count
; int *            Stack[0x8]:4   vertex_indices
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[10]:
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406d70 at 00406e52
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406c30 at 00406d0f
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004054e0 at 004055b4
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00405600 at 004056d7
;   engine_3d.c_renderPolygonBlendedLitOp63_FUN_00406ad0 at 00406b95
;   engine_3d.c_renderPolygonFogColorOp6_FUN_00403b70 at 00403c41
;   engine_3d.c_renderPolygonWithRenderFlagsUV_FUN_00407570 at 004076ad
;   engine_3d.c_renderPolygonWithRenderFlags_FUN_00407470 at 00407556
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 at 00481b34
;   engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_00484790 at 0048494e
;
; Referenced Globals:
;   void* switchdataD_0043de18 = 0043e0ec
;   void* PTR_caseD_3_0043de24 = 0043e116
;   void* PTR_caseD_1_0043de2c = 0043e3ff
;   void* PTR_caseD_3_0043de34 = 0043e1c5
;   void* switchdataD_0043de38 = 0043e245
;   void* PTR_caseD_3_0043de44 = 0043e26f
;   void* PTR_caseD_1_0043de4c = 0043e4fd
;   void* PTR_caseD_3_0043de54 = 0043e31f
;   uint g_VertexProcessingEnabled = 0x1
;   SRenderVertex[20000] g_SRenderVertex_ARRAY_00629014
;   undefined4 g_SRenderVertex_ARRAY_00629014[0].projected_vertex.transformed_y
;   undefined4 g_SRenderVertex_ARRAY_00629014[0].projected_vertex.screen_x
;   int g_CullingMode
;   int g_INT_007c7554
;   SRenderVertex[16] g_SRenderVertex_ARRAY_007c7558
;   ... and 39 more
;
; Called Functions:
;   engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043d000
;   engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043cda0
;   engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043cc70
;   engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ced0
;   engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_0053f720
;   engine_prim.c_renderScanlinePolygon_FUN_0053f080
;   engine_special.cpp_drawPolygon2_FUN_00582370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043de60
        ;   Label: engine_clipper.c_clipPolygonToViewport_FUN_0043de60
    PUSH ESI                            ; 0043de61
    PUSH EDI                            ; 0043de62
    PUSH EBP                            ; 0043de63
    SUB ESP,0x20                        ; 0043de64
    MOV EBX,dword ptr [ESP + 0x34]      ; 0043de67
    MOV EDX,dword ptr [ESP + 0x38]      ; 0043de6b
    CMP dword ptr [0x0061b4c0],0x0      ; 0043de6f | g_VertexProcessingEnabled
    JZ 0x0043df4c                       ; 0043de76
        ;   XREF to: 0043df4c (CONDITIONAL_JUMP)  ; LAB_0043df4c
    MOV ECX,0xffffffff                  ; 0043de7c
    MOV dword ptr [ESP + 0x4],EDX       ; 0043de81
    MOV EBP,EBX                         ; 0043de85
    XOR ESI,ESI                         ; 0043de87
    XOR EAX,EAX                         ; 0043de89
    TEST EBX,EBX                        ; 0043de8b
    JLE 0x0043deab                      ; 0043de8d
        ;   XREF to: 0043deab (CONDITIONAL_JUMP)  ; LAB_0043deab
    IMUL EBX,dword ptr [EDX],0x30       ; 0043de8f
        ;   Label: LAB_0043de8f
    MOV EBX,dword ptr [EBX + 0x629024]  ; 0043de92 | g_SRenderVertex_ARRAY_00629014[0].projected_vertex.screen_x
    TEST EBX,0x80000000                 ; 0043de98
    JZ 0x0043dea1                       ; 0043de9e
        ;   XREF to: 0043dea1 (CONDITIONAL_JUMP)  ; LAB_0043dea1
    INC ESI                             ; 0043dea0
    ADD EDX,0x4                         ; 0043dea1
        ;   Label: LAB_0043dea1
    INC EAX                             ; 0043dea4
    AND ECX,EBX                         ; 0043dea5
    CMP EAX,EBP                         ; 0043dea7
    JL 0x0043de8f                       ; 0043dea9
        ;   XREF to: 0043de8f (CONDITIONAL_JUMP)  ; LAB_0043de8f
    CMP ESI,EBP                         ; 0043deab
        ;   Label: LAB_0043deab
    JNZ 0x0043deb8                      ; 0043dead
        ;   XREF to: 0043deb8 (CONDITIONAL_JUMP)  ; LAB_0043deb8
    TEST CL,0xff                        ; 0043deaf
    JNZ 0x0043df58                      ; 0043deb2
        ;   XREF to: 0043df58 (CONDITIONAL_JUMP)  ; LAB_0043df58
    TEST ESI,ESI                        ; 0043deb8
        ;   Label: LAB_0043deb8
    JNZ 0x0043e025                      ; 0043deba
        ;   XREF to: 0043e025 (CONDITIONAL_JUMP)  ; LAB_0043e025
    CMP dword ptr [0x01c50948],0x0      ; 0043dec0 | g_INT_01c50948
    JZ 0x0043dfb4                       ; 0043dec7
        ;   XREF to: 0043dfb4 (CONDITIONAL_JUMP)  ; LAB_0043dfb4
    XOR EAX,EAX                         ; 0043decd
    TEST EBP,EBP                        ; 0043decf
    JLE 0x0043def0                      ; 0043ded1
        ;   XREF to: 0043def0 (CONDITIONAL_JUMP)  ; LAB_0043def0
    MOV EBX,dword ptr [ESP + 0x4]       ; 0043ded3
    IMUL ECX,dword ptr [EBX],0x30       ; 0043ded7
        ;   Label: LAB_0043ded7
    INC EAX                             ; 0043deda
    ADD ECX,0x629014                    ; 0043dedb | g_SRenderVertex_ARRAY_00629014
    ADD EBX,0x4                         ; 0043dee1
    MOV dword ptr [EAX*0x4 + 0x7c7b54],ECX ; 0043dee4 | g_ClipperCullingPointers | g_ClipperCullingPointers[1]
    CMP EAX,EBP                         ; 0043deeb
    JL 0x0043ded7                       ; 0043deed
        ;   XREF to: 0043ded7 (CONDITIONAL_JUMP)  ; LAB_0043ded7
    NOP                                 ; 0043deef
    CMP dword ptr [0x00713a7c],0x0      ; 0043def0 | g_CullingMode
        ;   Label: LAB_0043def0
    JZ 0x0043df86                       ; 0043def7
        ;   XREF to: 0043df86 (CONDITIONAL_JUMP)  ; LAB_0043df86
    CMP EBP,0x3                         ; 0043defd
    JLE 0x0043df65                      ; 0043df00
        ;   XREF to: 0043df65 (CONDITIONAL_JUMP)  ; LAB_0043df65
    LEA EAX,[EBP + -0x2]                ; 0043df02
    XOR EBX,EBX                         ; 0043df05
    MOV dword ptr [ESP],EAX             ; 0043df07
    LEA EDI,[EAX*0x4 + 0x0]             ; 0043df0a
    XOR ESI,ESI                         ; 0043df11
    TEST EDI,EDI                        ; 0043df13
    JLE 0x0043df3f                      ; 0043df15
        ;   XREF to: 0043df3f (CONDITIONAL_JUMP)  ; LAB_0043df3f
    MOV EAX,dword ptr [EBX + 0x7c7b60]  ; 0043df17 | g_ClipperCullingPointers[2] | g_ClipperCullingPointers[3]
        ;   Label: LAB_0043df17
    PUSH EAX                            ; 0043df1d
    MOV EDX,dword ptr [EBX + 0x7c7b5c]  ; 0043df1e | g_ClipperCullingPointers[1] | g_ClipperCullingPointers[2]
    PUSH EDX                            ; 0043df24
    MOV ECX,dword ptr [0x007c7b58]      ; 0043df25 | g_ClipperCullingPointers
    PUSH ECX                            ; 0043df2b
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60 ; 0043df2c
        ;   XREF to: 0053dd60 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 0043df31
    TEST EAX,EAX                        ; 0043df34
    JZ 0x0043df62                       ; 0043df36
        ;   XREF to: 0043df62 (CONDITIONAL_JUMP)  ; LAB_0043df62
    ADD EBX,0x4                         ; 0043df38
        ;   Label: LAB_0043df38
    CMP EBX,EDI                         ; 0043df3b
    JL 0x0043df17                       ; 0043df3d
        ;   XREF to: 0043df17 (CONDITIONAL_JUMP)  ; LAB_0043df17
    CMP ESI,dword ptr [ESP]             ; 0043df3f
        ;   Label: LAB_0043df3f
    JNZ 0x0043df86                      ; 0043df42
        ;   XREF to: 0043df86 (CONDITIONAL_JUMP)  ; LAB_0043df86
    ADD ESP,0x20                        ; 0043df44
        ;   Label: LAB_0043df44
    POP EBP                             ; 0043df47
    POP EDI                             ; 0043df48
    POP ESI                             ; 0043df49
    POP EBX                             ; 0043df4a
    RET                                 ; 0043df4b
    PUSH EBX                            ; 0043df4c
        ;   Label: LAB_0043df4c
    PUSH EDX                            ; 0043df4d
    CALL engine_prim.c_renderIndexedPolygonAdvanced_FUN_0053f720 ; 0043df4e
        ;   XREF to: 0053f720 (UNCONDITIONAL_CALL)  ; void engine_prim.c_renderIndexedPolygonAdvanced_FUN_0053f720(int * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 0043df53
    JMP 0x0043df44                      ; 0043df56
        ;   XREF to: 0043df44 (UNCONDITIONAL_JUMP)  ; LAB_0043df44
    XOR ESI,EBP                         ; 0043df58
        ;   Label: LAB_0043df58
    MOV dword ptr [0x007c7554],ESI      ; 0043df5a | g_INT_007c7554
    JMP 0x0043df44                      ; 0043df60
        ;   XREF to: 0043df44 (UNCONDITIONAL_JUMP)  ; LAB_0043df44
    INC ESI                             ; 0043df62
        ;   Label: LAB_0043df62
    JMP 0x0043df38                      ; 0043df63
        ;   XREF to: 0043df38 (UNCONDITIONAL_JUMP)  ; LAB_0043df38
    MOV EDX,dword ptr [0x007c7b60]      ; 0043df65 | g_ClipperCullingPointers[2]
        ;   Label: LAB_0043df65
    PUSH EDX                            ; 0043df6b
    MOV ECX,dword ptr [0x007c7b5c]      ; 0043df6c | g_ClipperCullingPointers[1]
    PUSH ECX                            ; 0043df72
    MOV EBX,dword ptr [0x007c7b58]      ; 0043df73 | g_ClipperCullingPointers
    PUSH EBX                            ; 0043df79
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60 ; 0043df7a
        ;   XREF to: 0053dd60 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 0043df7f
    TEST EAX,EAX                        ; 0043df82
    JZ 0x0043df44                       ; 0043df84
        ;   XREF to: 0043df44 (CONDITIONAL_JUMP)  ; LAB_0043df44
    MOV ESI,dword ptr [0x01c51d14]      ; 0043df86 | g_RenderStateFlags
        ;   Label: LAB_0043df86
    PUSH ESI                            ; 0043df8c
    LEA EAX,[EBP + -0x2]                ; 0043df8d
    MOV EBX,dword ptr [0x01e7dac8]      ; 0043df90 | g_RenderedTriangleCount
    PUSH EBP                            ; 0043df96
    ADD EBX,EAX                         ; 0043df97
    PUSH 0x7c7b58                       ; 0043df99 | g_ClipperCullingPointers
    MOV dword ptr [0x01e7dac8],EBX      ; 0043df9e | g_RenderedTriangleCount
    CALL engine_special.cpp_drawPolygon2_FUN_00582370 ; 0043dfa4
        ;   XREF to: 00582370 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolygon2_FUN_00582370(SRenderVertex * * vertex_array, int vertex_count, int render_flags)
    ADD ESP,0xc                         ; 0043dfa9
    ADD ESP,0x20                        ; 0043dfac
    POP EBP                             ; 0043dfaf
    POP EDI                             ; 0043dfb0
    POP ESI                             ; 0043dfb1
    POP EBX                             ; 0043dfb2
    RET                                 ; 0043dfb3
    MOV dword ptr [ESP + 0x8],ESI       ; 0043dfb4
        ;   Label: LAB_0043dfb4
    MOV dword ptr [0x007c7554],EBP      ; 0043dfb8 | g_INT_007c7554
    TEST EBP,EBP                        ; 0043dfbe
    JLE 0x0043e000                      ; 0043dfc0
        ;   XREF to: 0043e000 (CONDITIONAL_JUMP)  ; LAB_0043e000
    MOV EBX,dword ptr [ESP + 0x4]       ; 0043dfc2
    MOV EDX,0x7c7558                    ; 0043dfc6 | g_SRenderVertex_ARRAY_007c7558
    IMUL ESI,dword ptr [EBX],0x30       ; 0043dfcb
        ;   Label: LAB_0043dfcb
    MOV ECX,0x30                        ; 0043dfce
    ADD ESI,0x629014                    ; 0043dfd3 | g_SRenderVertex_ARRAY_00629014
    MOV EDI,EDX                         ; 0043dfd9
    PUSH EDI                            ; 0043dfdb | g_SRenderVertex_ARRAY_007c7558 | g_SRenderVertex_ARRAY_007c7558[1].projected_vertex.transformed_x
    MOV EAX,ECX                         ; 0043dfdc
    SHR ECX,0x2                         ; 0043dfde
    MOVSD.REP ES:EDI,ESI                ; 0043dfe1 | g_SRenderVertex_ARRAY_00629014 | g_SRenderVertex_ARRAY_007c7558 | g_SRenderVertex_ARRAY_00629014[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 0043dfe3
    AND CL,0x3                          ; 0043dfe5
    MOVSB.REP ES:EDI,ESI                ; 0043dfe8 | g_SRenderVertex_ARRAY_00629014[0].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_007c7558[0].projected_vertex.transformed_y
    POP EDI                             ; 0043dfea
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043dfeb
    ADD EBX,0x4                         ; 0043dfef
    INC EAX                             ; 0043dff2
    ADD EDX,0x30                        ; 0043dff3
    MOV dword ptr [ESP + 0x8],EAX       ; 0043dff6
    CMP EBP,EAX                         ; 0043dffa
    JG 0x0043dfcb                       ; 0043dffc
        ;   XREF to: 0043dfcb (CONDITIONAL_JUMP)  ; LAB_0043dfcb
    MOV EAX,EAX                         ; 0043dffe
    MOV EBX,dword ptr [0x007c7554]      ; 0043e000 | g_INT_007c7554
        ;   Label: LAB_0043e000
    CMP EBX,0x2                         ; 0043e006
    JLE 0x0043df44                      ; 0043e009
        ;   XREF to: 0043df44 (CONDITIONAL_JUMP)  ; LAB_0043df44
    PUSH EBX                            ; 0043e00f
    PUSH 0x7c7558                       ; 0043e010 | g_SRenderVertex_ARRAY_007c7558
    CALL engine_prim.c_renderScanlinePolygon_FUN_0053f080 ; 0043e015
        ;   XREF to: 0053f080 (UNCONDITIONAL_CALL)  ; void engine_prim.c_renderScanlinePolygon_FUN_0053f080(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 0043e01a
    ADD ESP,0x20                        ; 0043e01d
    POP EBP                             ; 0043e020
    POP EDI                             ; 0043e021
    POP ESI                             ; 0043e022
    POP EBX                             ; 0043e023
    RET                                 ; 0043e024
    XOR EBX,EBX                         ; 0043e025
        ;   Label: LAB_0043e025
    MOV dword ptr [0x007c8420],EBP      ; 0043e027 | g_InputVertexCount
    MOV dword ptr [0x007c8424],EBX      ; 0043e02d | g_OutputVertexCount
    MOV dword ptr [0x007c8428],EBX      ; 0043e033 | g_TempVertexCount
    MOV dword ptr [0x007c842c],EBX      ; 0043e039 | g_IntermediateVertexCount
    MOV dword ptr [0x007c7554],EBX      ; 0043e03f | g_INT_007c7554
    MOV dword ptr [ESP + 0xc],EBX       ; 0043e045
    TEST EBP,EBP                        ; 0043e049
    JLE 0x0043e090                      ; 0043e04b
        ;   XREF to: 0043e090 (CONDITIONAL_JUMP)  ; LAB_0043e090
    MOV EBX,dword ptr [ESP + 0x4]       ; 0043e04d
    MOV EDX,0x7c8a30                    ; 0043e051 | g_ClipperInputBuffer
    IMUL ESI,dword ptr [EBX],0x30       ; 0043e056
        ;   Label: LAB_0043e056
    MOV ECX,0x30                        ; 0043e059
    MOV EDI,EDX                         ; 0043e05e
    ADD ESI,0x629014                    ; 0043e060 | g_SRenderVertex_ARRAY_00629014
    PUSH EDI                            ; 0043e066 | g_ClipperInputBuffer | g_ClipperInputBuffer[1].projected_vertex.transformed_x
    MOV EAX,ECX                         ; 0043e067
    SHR ECX,0x2                         ; 0043e069
    MOVSD.REP ES:EDI,ESI                ; 0043e06c | g_SRenderVertex_ARRAY_00629014 | g_ClipperInputBuffer | g_SRenderVertex_ARRAY_00629014[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 0043e06e
    AND CL,0x3                          ; 0043e070
    MOVSB.REP ES:EDI,ESI                ; 0043e073 | g_SRenderVertex_ARRAY_00629014[0].projected_vertex.transformed_y | g_ClipperInputBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 0043e075
    MOV ECX,dword ptr [ESP + 0xc]       ; 0043e076
    ADD EBX,0x4                         ; 0043e07a
    INC ECX                             ; 0043e07d
    ADD EDX,0x30                        ; 0043e07e
    MOV dword ptr [ESP + 0xc],ECX       ; 0043e081
    CMP EBP,ECX                         ; 0043e085
    JG 0x0043e056                       ; 0043e087
        ;   XREF to: 0043e056 (CONDITIONAL_JUMP)  ; LAB_0043e056
    LEA EAX,[EAX]                       ; 0043e089
    NOP                                 ; 0043e08f
    XOR EDI,EDI                         ; 0043e090
        ;   Label: LAB_0043e090
    MOV EBP,dword ptr [0x007c8420]      ; 0043e092 | g_InputVertexCount
    MOV dword ptr [ESP + 0x10],EDI      ; 0043e098
    TEST EBP,EBP                        ; 0043e09c
    JLE 0x0043e130                      ; 0043e09e
        ;   XREF to: 0043e130 (CONDITIONAL_JUMP)  ; LAB_0043e130
    MOV EBX,0x7c8a30                    ; 0043e0a4 | g_ClipperInputBuffer
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043e0a9
        ;   Label: LAB_0043e0a9
    MOV EDI,dword ptr [0x007c8420]      ; 0043e0ad | g_InputVertexCount
    INC EAX                             ; 0043e0b3
    CMP EAX,EDI                         ; 0043e0b4
    JNZ 0x0043e0ba                      ; 0043e0b6
        ;   XREF to: 0043e0ba (CONDITIONAL_JUMP)  ; LAB_0043e0ba
    XOR EAX,EDI                         ; 0043e0b8
    IMUL EAX,EAX,0x30                   ; 0043e0ba
        ;   Label: LAB_0043e0ba
    MOV EBP,0x7c8a30                    ; 0043e0bd | g_ClipperInputBuffer
    MOV EDX,EBX                         ; 0043e0c2
    MOV ECX,dword ptr [EBX]             ; 0043e0c4 | g_ClipperInputBuffer | g_ClipperInputBuffer[1].projected_vertex.transformed_x
    MOV ESI,dword ptr [EBX + 0x8]       ; 0043e0c6 | g_ClipperInputBuffer[0].projected_vertex.transformed_z | g_ClipperInputBuffer[1].projected_vertex.transformed_z
    ADD EBP,EAX                         ; 0043e0c9
    XOR EAX,EAX                         ; 0043e0cb
    CMP ECX,ESI                         ; 0043e0cd
    JL 0x0043e0d6                       ; 0043e0cf
        ;   XREF to: 0043e0d6 (CONDITIONAL_JUMP)  ; LAB_0043e0d6
    MOV EAX,0x1                         ; 0043e0d1
    MOV EDI,dword ptr [EBP + 0x8]       ; 0043e0d6 | g_ClipperInputBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_0043e0d6
    CMP EDI,dword ptr [EBP]             ; 0043e0d9 | g_ClipperInputBuffer
    JG 0x0043e0e0                       ; 0043e0dc
        ;   XREF to: 0043e0e0 (CONDITIONAL_JUMP)  ; LAB_0043e0e0
    OR AL,0x2                           ; 0043e0de
    CMP EAX,0x3                         ; 0043e0e0
        ;   Label: LAB_0043e0e0
    JA 0x0043e116                       ; 0043e0e3
        ;   XREF to: 0043e116 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43de18]  ; 0043e0e5 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007c8424],0x30 ; 0043e0ec | g_OutputVertexCount
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043e0f3
    MOV ESI,EDX                         ; 0043e0f8
    ADD EDI,0x7c8430                    ; 0043e0fa | g_ClipperOutputBuffer
    PUSH EDI                            ; 0043e100 | g_ClipperOutputBuffer
    MOV EAX,ECX                         ; 0043e101
    SHR ECX,0x2                         ; 0043e103
    MOVSD.REP ES:EDI,ESI                ; 0043e106 | g_ClipperInputBuffer[1].projected_vertex.transformed_x | g_ClipperOutputBuffer | g_ClipperInputBuffer[1].projected_vertex.transformed_y
    MOV CL,AL                           ; 0043e108
    AND CL,0x3                          ; 0043e10a
    MOVSB.REP ES:EDI,ESI                ; 0043e10d | g_ClipperInputBuffer[1].projected_vertex.transformed_y | g_ClipperOutputBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 0043e10f
    INC dword ptr [0x007c8424]          ; 0043e110 | g_OutputVertexCount
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043e116
        ;   Label: caseD_3
    MOV EDX,dword ptr [0x007c8420]      ; 0043e11a | g_InputVertexCount
    INC EAX                             ; 0043e120
    ADD EBX,0x30                        ; 0043e121
    MOV dword ptr [ESP + 0x10],EAX      ; 0043e124
    CMP EAX,EDX                         ; 0043e128
    JL 0x0043e0a9                       ; 0043e12a
        ;   XREF to: 0043e0a9 (CONDITIONAL_JUMP)  ; LAB_0043e0a9
    MOV ECX,dword ptr [0x007c8424]      ; 0043e130 | g_OutputVertexCount
        ;   Label: LAB_0043e130
    CMP ECX,0x3                         ; 0043e136
    JL 0x0043e000                       ; 0043e139
        ;   XREF to: 0043e000 (CONDITIONAL_JUMP)  ; LAB_0043e000
    XOR EBX,EBX                         ; 0043e13f
    MOV dword ptr [ESP + 0x18],EBX      ; 0043e141
    TEST ECX,ECX                        ; 0043e145
    JLE 0x0043e1df                      ; 0043e147
        ;   XREF to: 0043e1df (CONDITIONAL_JUMP)  ; LAB_0043e1df
    MOV EBX,0x7c8430                    ; 0043e14d | g_ClipperOutputBuffer
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043e152
        ;   Label: LAB_0043e152
    MOV EBP,dword ptr [0x007c8424]      ; 0043e156 | g_OutputVertexCount
    INC EAX                             ; 0043e15c
    CMP EAX,EBP                         ; 0043e15d
    JNZ 0x0043e163                      ; 0043e15f
        ;   XREF to: 0043e163 (CONDITIONAL_JUMP)  ; LAB_0043e163
    XOR EAX,EBP                         ; 0043e161
    IMUL EAX,EAX,0x30                   ; 0043e163
        ;   Label: LAB_0043e163
    MOV EBP,0x7c8430                    ; 0043e166 | g_ClipperOutputBuffer
    MOV EDX,EBX                         ; 0043e16b
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043e16d | g_ClipperOutputBuffer[0].projected_vertex.transformed_z | g_ClipperOutputBuffer[1].projected_vertex.transformed_z
    MOV ESI,dword ptr [EBX]             ; 0043e170 | g_ClipperOutputBuffer | g_ClipperOutputBuffer[1].projected_vertex.transformed_x
    NEG ECX                             ; 0043e172
    ADD EBP,EAX                         ; 0043e174
    XOR EAX,EAX                         ; 0043e176
    CMP ECX,ESI                         ; 0043e178
    JL 0x0043e181                       ; 0043e17a
        ;   XREF to: 0043e181 (CONDITIONAL_JUMP)  ; LAB_0043e181
    MOV EAX,0x1                         ; 0043e17c
    MOV ECX,dword ptr [EBP + 0x8]       ; 0043e181 | g_ClipperOutputBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_0043e181
    MOV EDI,dword ptr [EBP]             ; 0043e184 | g_ClipperOutputBuffer
    NEG ECX                             ; 0043e187
    CMP ECX,EDI                         ; 0043e189
    JL 0x0043e18f                       ; 0043e18b
        ;   XREF to: 0043e18f (CONDITIONAL_JUMP)  ; LAB_0043e18f
    OR AL,0x2                           ; 0043e18d
    CMP EAX,0x3                         ; 0043e18f
        ;   Label: LAB_0043e18f
    JA 0x0043e1c5                       ; 0043e192
        ;   XREF to: 0043e1c5 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43de28]  ; 0043e194 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007c8428],0x30 ; 0043e19b | g_TempVertexCount
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043e1a2
    MOV ESI,EDX                         ; 0043e1a7
    ADD EDI,0x7c9030                    ; 0043e1a9 | g_ClipperWorkingBuffer
    PUSH EDI                            ; 0043e1af | g_ClipperWorkingBuffer
    MOV EAX,ECX                         ; 0043e1b0
    SHR ECX,0x2                         ; 0043e1b2
    MOVSD.REP ES:EDI,ESI                ; 0043e1b5 | g_ClipperOutputBuffer | g_ClipperWorkingBuffer | g_ClipperOutputBuffer[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 0043e1b7
    AND CL,0x3                          ; 0043e1b9
    MOVSB.REP ES:EDI,ESI                ; 0043e1bc | g_ClipperOutputBuffer[0].projected_vertex.transformed_y | g_ClipperWorkingBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 0043e1be
    INC dword ptr [0x007c8428]          ; 0043e1bf | g_TempVertexCount
    MOV EDX,dword ptr [ESP + 0x18]      ; 0043e1c5
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x007c8424]      ; 0043e1c9 | g_OutputVertexCount
    INC EDX                             ; 0043e1cf
    ADD EBX,0x30                        ; 0043e1d0
    MOV dword ptr [ESP + 0x18],EDX      ; 0043e1d3
    CMP EDX,ECX                         ; 0043e1d7
    JL 0x0043e152                       ; 0043e1d9
        ;   XREF to: 0043e152 (CONDITIONAL_JUMP)  ; LAB_0043e152
    MOV EBX,dword ptr [0x007c8428]      ; 0043e1df | g_TempVertexCount
        ;   Label: LAB_0043e1df
    CMP EBX,0x3                         ; 0043e1e5
    JL 0x0043e000                       ; 0043e1e8
        ;   XREF to: 0043e000 (CONDITIONAL_JUMP)  ; LAB_0043e000
    XOR ESI,ESI                         ; 0043e1ee
    MOV dword ptr [ESP + 0x1c],ESI      ; 0043e1f0
    TEST EBX,EBX                        ; 0043e1f4
    JLE 0x0043e289                      ; 0043e1f6
        ;   XREF to: 0043e289 (CONDITIONAL_JUMP)  ; LAB_0043e289
    MOV EBX,0x7c9030                    ; 0043e1fc | g_ClipperWorkingBuffer
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0043e201
        ;   Label: LAB_0043e201
    MOV EBP,dword ptr [0x007c8428]      ; 0043e205 | g_TempVertexCount
    INC EAX                             ; 0043e20b
    CMP EAX,EBP                         ; 0043e20c
    JNZ 0x0043e212                      ; 0043e20e
        ;   XREF to: 0043e212 (CONDITIONAL_JUMP)  ; LAB_0043e212
    XOR EAX,EBP                         ; 0043e210
    IMUL EAX,EAX,0x30                   ; 0043e212
        ;   Label: LAB_0043e212
    MOV EBP,0x7c9030                    ; 0043e215 | g_ClipperWorkingBuffer
    MOV EDX,EBX                         ; 0043e21a
    MOV ECX,dword ptr [EBX + 0x4]       ; 0043e21c | g_ClipperWorkingBuffer[0].projected_vertex.transformed_y | g_ClipperWorkingBuffer[1].projected_vertex.transformed_y
    MOV ESI,dword ptr [EBX + 0x8]       ; 0043e21f | g_ClipperWorkingBuffer[0].projected_vertex.transformed_z | g_ClipperWorkingBuffer[1].projected_vertex.transformed_z
    ADD EBP,EAX                         ; 0043e222
    XOR EAX,EAX                         ; 0043e224
    CMP ECX,ESI                         ; 0043e226
    JL 0x0043e22f                       ; 0043e228
        ;   XREF to: 0043e22f (CONDITIONAL_JUMP)  ; LAB_0043e22f
    MOV EAX,0x1                         ; 0043e22a
    MOV EDI,dword ptr [EBP + 0x8]       ; 0043e22f | g_ClipperWorkingBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_0043e22f
    CMP EDI,dword ptr [EBP + 0x4]       ; 0043e232 | g_ClipperWorkingBuffer[0].projected_vertex.transformed_y
    JG 0x0043e239                       ; 0043e235
        ;   XREF to: 0043e239 (CONDITIONAL_JUMP)  ; LAB_0043e239
    OR AL,0x2                           ; 0043e237
    CMP EAX,0x3                         ; 0043e239
        ;   Label: LAB_0043e239
    JA 0x0043e26f                       ; 0043e23c
        ;   XREF to: 0043e26f (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43de38]  ; 0043e23e | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007c842c],0x30 ; 0043e245 | g_IntermediateVertexCount
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043e24c
    MOV ESI,EDX                         ; 0043e251
    ADD EDI,0x7c9630                    ; 0043e253 | g_ClipperIntermediateBuffer
    PUSH EDI                            ; 0043e259 | g_ClipperIntermediateBuffer
    MOV EAX,ECX                         ; 0043e25a
    SHR ECX,0x2                         ; 0043e25c
    MOVSD.REP ES:EDI,ESI                ; 0043e25f | g_ClipperWorkingBuffer[1].projected_vertex.transformed_x | g_ClipperIntermediateBuffer | g_ClipperWorkingBuffer[1].projected_vertex.transformed_y
    MOV CL,AL                           ; 0043e261
    AND CL,0x3                          ; 0043e263
    MOVSB.REP ES:EDI,ESI                ; 0043e266 | g_ClipperWorkingBuffer[1].projected_vertex.transformed_y | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 0043e268
    INC dword ptr [0x007c842c]          ; 0043e269 | g_IntermediateVertexCount
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0043e26f
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x007c8428]      ; 0043e273 | g_TempVertexCount
    INC EDX                             ; 0043e279
    ADD EBX,0x30                        ; 0043e27a
    MOV dword ptr [ESP + 0x1c],EDX      ; 0043e27d
    CMP EDX,ECX                         ; 0043e281
    JL 0x0043e201                       ; 0043e283
        ;   XREF to: 0043e201 (CONDITIONAL_JUMP)  ; LAB_0043e201
    MOV EBX,dword ptr [0x007c842c]      ; 0043e289 | g_IntermediateVertexCount
        ;   Label: LAB_0043e289
    CMP EBX,0x3                         ; 0043e28f
    JL 0x0043e000                       ; 0043e292
        ;   XREF to: 0043e000 (CONDITIONAL_JUMP)  ; LAB_0043e000
    XOR ESI,ESI                         ; 0043e298
    MOV dword ptr [ESP + 0x14],ESI      ; 0043e29a
    TEST EBX,EBX                        ; 0043e29e
    JLE 0x0043e339                      ; 0043e2a0
        ;   XREF to: 0043e339 (CONDITIONAL_JUMP)  ; LAB_0043e339
    MOV EBX,0x7c9630                    ; 0043e2a6 | g_ClipperIntermediateBuffer
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043e2ab
        ;   Label: LAB_0043e2ab
    MOV EDI,dword ptr [0x007c842c]      ; 0043e2af | g_IntermediateVertexCount
    INC EAX                             ; 0043e2b5
    CMP EAX,EDI                         ; 0043e2b6
    JNZ 0x0043e2bc                      ; 0043e2b8
        ;   XREF to: 0043e2bc (CONDITIONAL_JUMP)  ; LAB_0043e2bc
    XOR EAX,EDI                         ; 0043e2ba
    IMUL EAX,EAX,0x30                   ; 0043e2bc
        ;   Label: LAB_0043e2bc
    MOV EBP,0x7c9630                    ; 0043e2bf | g_ClipperIntermediateBuffer
    MOV EDX,EBX                         ; 0043e2c4
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043e2c6 | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_z | g_ClipperIntermediateBuffer[1].projected_vertex.transformed_z
    MOV ESI,dword ptr [EBX + 0x4]       ; 0043e2c9 | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y | g_ClipperIntermediateBuffer[1].projected_vertex.transformed_y
    NEG ECX                             ; 0043e2cc
    ADD EBP,EAX                         ; 0043e2ce
    XOR EAX,EAX                         ; 0043e2d0
    CMP ECX,ESI                         ; 0043e2d2
    JL 0x0043e2db                       ; 0043e2d4
        ;   XREF to: 0043e2db (CONDITIONAL_JUMP)  ; LAB_0043e2db
    MOV EAX,0x1                         ; 0043e2d6
    MOV ECX,dword ptr [EBP + 0x8]       ; 0043e2db | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_0043e2db
    MOV EDI,dword ptr [EBP + 0x4]       ; 0043e2de | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y
    NEG ECX                             ; 0043e2e1
    CMP ECX,EDI                         ; 0043e2e3
    JL 0x0043e2e9                       ; 0043e2e5
        ;   XREF to: 0043e2e9 (CONDITIONAL_JUMP)  ; LAB_0043e2e9
    OR AL,0x2                           ; 0043e2e7
    CMP EAX,0x3                         ; 0043e2e9
        ;   Label: LAB_0043e2e9
    JA 0x0043e31f                       ; 0043e2ec
        ;   XREF to: 0043e31f (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43de48]  ; 0043e2ee | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007c7554],0x30 ; 0043e2f5 | g_INT_007c7554
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043e2fc
    MOV ESI,EDX                         ; 0043e301
    ADD EDI,0x7c7558                    ; 0043e303 | g_SRenderVertex_ARRAY_007c7558
    PUSH EDI                            ; 0043e309 | g_SRenderVertex_ARRAY_007c7558
    MOV EAX,ECX                         ; 0043e30a
    SHR ECX,0x2                         ; 0043e30c
    MOVSD.REP ES:EDI,ESI                ; 0043e30f | g_ClipperIntermediateBuffer | g_SRenderVertex_ARRAY_007c7558 | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 0043e311
    AND CL,0x3                          ; 0043e313
    MOVSB.REP ES:EDI,ESI                ; 0043e316 | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_007c7558[0].projected_vertex.transformed_y
    POP EDI                             ; 0043e318
    INC dword ptr [0x007c7554]          ; 0043e319 | g_INT_007c7554
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043e31f
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x007c842c]      ; 0043e323 | g_IntermediateVertexCount
    INC EDX                             ; 0043e329
    ADD EBX,0x30                        ; 0043e32a
    MOV dword ptr [ESP + 0x14],EDX      ; 0043e32d
    CMP EDX,ECX                         ; 0043e331
    JL 0x0043e2ab                       ; 0043e333
        ;   XREF to: 0043e2ab (CONDITIONAL_JUMP)  ; LAB_0043e2ab
    MOV EBX,dword ptr [0x007c7554]      ; 0043e339 | g_INT_007c7554
        ;   Label: LAB_0043e339
    CMP EBX,0x3                         ; 0043e33f
    JL 0x0043e000                       ; 0043e342
        ;   XREF to: 0043e000 (CONDITIONAL_JUMP)  ; LAB_0043e000
    MOV EAX,0x7c7558                    ; 0043e348 | g_SRenderVertex_ARRAY_007c7558
    XOR EBP,EBP                         ; 0043e34d
    TEST EBX,EBX                        ; 0043e34f
    JLE 0x0043e000                      ; 0043e351
        ;   XREF to: 0043e000 (CONDITIONAL_JUMP)  ; LAB_0043e000
    MOV ECX,dword ptr [EAX + 0x8]       ; 0043e357 | g_SRenderVertex_ARRAY_007c7558[0].projected_vertex.transformed_z | g_SRenderVertex_ARRAY_007c7558[1].projected_vertex.transformed_z
        ;   Label: LAB_0043e357
    TEST ECX,ECX                        ; 0043e35a
    JZ 0x0043e57c                       ; 0043e35c
        ;   XREF to: 0043e57c (CONDITIONAL_JUMP)  ; LAB_0043e57c
    CMP ECX,dword ptr [EAX]             ; 0043e362 | g_SRenderVertex_ARRAY_007c7558 | g_SRenderVertex_ARRAY_007c7558[1].projected_vertex.transformed_x
    JGE 0x0043e58d                      ; 0043e364
        ;   XREF to: 0043e58d (CONDITIONAL_JUMP)  ; LAB_0043e58d
    MOV dword ptr [EAX],ECX             ; 0043e36a | g_SRenderVertex_ARRAY_007c7558 | g_SRenderVertex_ARRAY_007c7558[1].projected_vertex.transformed_x
    MOV EDX,dword ptr [0x007c7554]      ; 0043e36c | g_INT_007c7554
        ;   Label: LAB_0043e36c
    INC EBP                             ; 0043e372
    ADD EAX,0x30                        ; 0043e373
    CMP EBP,EDX                         ; 0043e376
    JGE 0x0043e000                      ; 0043e378
        ;   XREF to: 0043e000 (CONDITIONAL_JUMP)  ; LAB_0043e000
    JMP 0x0043e357                      ; 0043e37e
        ;   XREF to: 0043e357 (UNCONDITIONAL_JUMP)  ; LAB_0043e357
    IMUL EAX,dword ptr [0x007c8424],0x30 ; 0043e380 | g_OutputVertexCount
        ;   Label: caseD_1
    ADD EAX,0x7c8430                    ; 0043e387 | g_ClipperOutputBuffer
    PUSH EAX                            ; 0043e38c | g_ClipperOutputBuffer
    PUSH EDX                            ; 0043e38d | g_ClipperInputBuffer[1].projected_vertex.transformed_x
    PUSH EBP                            ; 0043e38e
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043cc70 ; 0043e38f
        ;   XREF to: 0043cc70 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043cc70(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007c8424]      ; 0043e394 | g_OutputVertexCount
    INC ESI                             ; 0043e39a
    ADD ESP,0xc                         ; 0043e39b
    MOV dword ptr [0x007c8424],ESI      ; 0043e39e | g_OutputVertexCount
    JMP 0x0043e116                      ; 0043e3a4
        ;   XREF to: 0043e116 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007c8424],0x30 ; 0043e3a9 | g_OutputVertexCount
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043e3b0
    MOV ESI,EDX                         ; 0043e3b5
    ADD EDI,0x7c8430                    ; 0043e3b7 | g_ClipperOutputBuffer
    PUSH EDI                            ; 0043e3bd | g_ClipperOutputBuffer
    MOV EAX,ECX                         ; 0043e3be
    SHR ECX,0x2                         ; 0043e3c0
    MOVSD.REP ES:EDI,ESI                ; 0043e3c3 | g_ClipperInputBuffer[1].projected_vertex.transformed_x | g_ClipperOutputBuffer | g_ClipperInputBuffer[1].projected_vertex.transformed_y
    MOV CL,AL                           ; 0043e3c5
    AND CL,0x3                          ; 0043e3c7
    MOVSB.REP ES:EDI,ESI                ; 0043e3ca | g_ClipperInputBuffer[1].projected_vertex.transformed_y | g_ClipperOutputBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 0043e3cc
    MOV ECX,dword ptr [0x007c8424]      ; 0043e3cd | g_OutputVertexCount
    INC ECX                             ; 0043e3d3
    MOV dword ptr [0x007c8424],ECX      ; 0043e3d4 | g_OutputVertexCount
    IMUL EAX,ECX,0x30                   ; 0043e3da
    ADD EAX,0x7c8430                    ; 0043e3dd | g_ClipperOutputBuffer
    PUSH EAX                            ; 0043e3e2 | g_ClipperOutputBuffer[1].projected_vertex.transformed_x
    PUSH EBP                            ; 0043e3e3
    PUSH EDX                            ; 0043e3e4 | g_ClipperInputBuffer[1].projected_vertex.transformed_x
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043cc70 ; 0043e3e5
        ;   XREF to: 0043cc70 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043cc70(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007c8424]      ; 0043e3ea | g_OutputVertexCount
    INC EDI                             ; 0043e3f0
    ADD ESP,0xc                         ; 0043e3f1
    MOV dword ptr [0x007c8424],EDI      ; 0043e3f4 | g_OutputVertexCount
    JMP 0x0043e116                      ; 0043e3fa
        ;   XREF to: 0043e116 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x007c8428],0x30 ; 0043e3ff | g_TempVertexCount
        ;   Label: caseD_1
    ADD EAX,0x7c9030                    ; 0043e406 | g_ClipperWorkingBuffer
    PUSH EAX                            ; 0043e40b | g_ClipperWorkingBuffer
    PUSH EDX                            ; 0043e40c | g_ClipperOutputBuffer
    PUSH EBP                            ; 0043e40d
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043cda0 ; 0043e40e
        ;   XREF to: 0043cda0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043cda0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007c8428]      ; 0043e413 | g_TempVertexCount
    INC ESI                             ; 0043e419
    ADD ESP,0xc                         ; 0043e41a
    MOV dword ptr [0x007c8428],ESI      ; 0043e41d | g_TempVertexCount
    JMP 0x0043e1c5                      ; 0043e423
        ;   XREF to: 0043e1c5 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007c8428],0x30 ; 0043e428 | g_TempVertexCount
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043e42f
    MOV ESI,EDX                         ; 0043e434
    ADD EDI,0x7c9030                    ; 0043e436 | g_ClipperWorkingBuffer
    PUSH EDI                            ; 0043e43c | g_ClipperWorkingBuffer
    MOV EAX,ECX                         ; 0043e43d
    SHR ECX,0x2                         ; 0043e43f
    MOVSD.REP ES:EDI,ESI                ; 0043e442 | g_ClipperOutputBuffer | g_ClipperWorkingBuffer | g_ClipperOutputBuffer[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 0043e444
    AND CL,0x3                          ; 0043e446
    MOVSB.REP ES:EDI,ESI                ; 0043e449 | g_ClipperOutputBuffer[0].projected_vertex.transformed_y | g_ClipperWorkingBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 0043e44b
    MOV ECX,dword ptr [0x007c8428]      ; 0043e44c | g_TempVertexCount
    INC ECX                             ; 0043e452
    MOV dword ptr [0x007c8428],ECX      ; 0043e453 | g_TempVertexCount
    IMUL EAX,ECX,0x30                   ; 0043e459
    ADD EAX,0x7c9030                    ; 0043e45c | g_ClipperWorkingBuffer
    PUSH EAX                            ; 0043e461 | g_ClipperWorkingBuffer[1].projected_vertex.transformed_x
    PUSH EBP                            ; 0043e462
    PUSH EDX                            ; 0043e463 | g_ClipperOutputBuffer
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043cda0 ; 0043e464
        ;   XREF to: 0043cda0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043cda0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007c8428]      ; 0043e469 | g_TempVertexCount
    INC EDI                             ; 0043e46f
    ADD ESP,0xc                         ; 0043e470
    MOV dword ptr [0x007c8428],EDI      ; 0043e473 | g_TempVertexCount
    JMP 0x0043e1c5                      ; 0043e479
        ;   XREF to: 0043e1c5 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x007c842c],0x30 ; 0043e47e | g_IntermediateVertexCount
        ;   Label: caseD_1
    ADD EAX,0x7c9630                    ; 0043e485 | g_ClipperIntermediateBuffer
    PUSH EAX                            ; 0043e48a | g_ClipperIntermediateBuffer
    PUSH EDX                            ; 0043e48b | g_ClipperWorkingBuffer[1].projected_vertex.transformed_x
    PUSH EBP                            ; 0043e48c
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ced0 ; 0043e48d
        ;   XREF to: 0043ced0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ced0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007c842c]      ; 0043e492 | g_IntermediateVertexCount
    INC ESI                             ; 0043e498
    ADD ESP,0xc                         ; 0043e499
    MOV dword ptr [0x007c842c],ESI      ; 0043e49c | g_IntermediateVertexCount
    JMP 0x0043e26f                      ; 0043e4a2
        ;   XREF to: 0043e26f (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007c842c],0x30 ; 0043e4a7 | g_IntermediateVertexCount
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043e4ae
    MOV ESI,EDX                         ; 0043e4b3
    ADD EDI,0x7c9630                    ; 0043e4b5 | g_ClipperIntermediateBuffer
    PUSH EDI                            ; 0043e4bb | g_ClipperIntermediateBuffer
    MOV EAX,ECX                         ; 0043e4bc
    SHR ECX,0x2                         ; 0043e4be
    MOVSD.REP ES:EDI,ESI                ; 0043e4c1 | g_ClipperWorkingBuffer[1].projected_vertex.transformed_x | g_ClipperIntermediateBuffer | g_ClipperWorkingBuffer[1].projected_vertex.transformed_y
    MOV CL,AL                           ; 0043e4c3
    AND CL,0x3                          ; 0043e4c5
    MOVSB.REP ES:EDI,ESI                ; 0043e4c8 | g_ClipperWorkingBuffer[1].projected_vertex.transformed_y | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y
    POP EDI                             ; 0043e4ca
    MOV ECX,dword ptr [0x007c842c]      ; 0043e4cb | g_IntermediateVertexCount
    INC ECX                             ; 0043e4d1
    MOV dword ptr [0x007c842c],ECX      ; 0043e4d2 | g_IntermediateVertexCount
    IMUL EAX,ECX,0x30                   ; 0043e4d8
    ADD EAX,0x7c9630                    ; 0043e4db | g_ClipperIntermediateBuffer
    PUSH EAX                            ; 0043e4e0 | g_ClipperIntermediateBuffer[1].projected_vertex.transformed_x
    PUSH EBP                            ; 0043e4e1
    PUSH EDX                            ; 0043e4e2 | g_ClipperWorkingBuffer[1].projected_vertex.transformed_x
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ced0 ; 0043e4e3
        ;   XREF to: 0043ced0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ced0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007c842c]      ; 0043e4e8 | g_IntermediateVertexCount
    INC EDI                             ; 0043e4ee
    ADD ESP,0xc                         ; 0043e4ef
    MOV dword ptr [0x007c842c],EDI      ; 0043e4f2 | g_IntermediateVertexCount
    JMP 0x0043e26f                      ; 0043e4f8
        ;   XREF to: 0043e26f (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x007c7554],0x30 ; 0043e4fd | g_INT_007c7554
        ;   Label: caseD_1
    ADD EAX,0x7c7558                    ; 0043e504 | g_SRenderVertex_ARRAY_007c7558
    PUSH EAX                            ; 0043e509 | g_SRenderVertex_ARRAY_007c7558
    PUSH EDX                            ; 0043e50a | g_ClipperIntermediateBuffer
    PUSH EBP                            ; 0043e50b
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043d000 ; 0043e50c
        ;   XREF to: 0043d000 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043d000(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007c7554]      ; 0043e511 | g_INT_007c7554
    INC ESI                             ; 0043e517
    ADD ESP,0xc                         ; 0043e518
    MOV dword ptr [0x007c7554],ESI      ; 0043e51b | g_INT_007c7554
    JMP 0x0043e31f                      ; 0043e521
        ;   XREF to: 0043e31f (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007c7554],0x30 ; 0043e526 | g_INT_007c7554
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043e52d
    MOV ESI,EDX                         ; 0043e532
    ADD EDI,0x7c7558                    ; 0043e534 | g_SRenderVertex_ARRAY_007c7558
    PUSH EDI                            ; 0043e53a | g_SRenderVertex_ARRAY_007c7558
    MOV EAX,ECX                         ; 0043e53b
    SHR ECX,0x2                         ; 0043e53d
    MOVSD.REP ES:EDI,ESI                ; 0043e540 | g_ClipperIntermediateBuffer | g_SRenderVertex_ARRAY_007c7558 | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y
    MOV CL,AL                           ; 0043e542
    AND CL,0x3                          ; 0043e544
    MOVSB.REP ES:EDI,ESI                ; 0043e547 | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y | g_SRenderVertex_ARRAY_007c7558[0].projected_vertex.transformed_y
    POP EDI                             ; 0043e549
    MOV ECX,dword ptr [0x007c7554]      ; 0043e54a | g_INT_007c7554
    INC ECX                             ; 0043e550
    MOV dword ptr [0x007c7554],ECX      ; 0043e551 | g_INT_007c7554
    IMUL EAX,ECX,0x30                   ; 0043e557
    ADD EAX,0x7c7558                    ; 0043e55a | g_SRenderVertex_ARRAY_007c7558
    PUSH EAX                            ; 0043e55f | g_SRenderVertex_ARRAY_007c7558[1].projected_vertex.transformed_x
    PUSH EBP                            ; 0043e560
    PUSH EDX                            ; 0043e561 | g_ClipperIntermediateBuffer
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043d000 ; 0043e562
        ;   XREF to: 0043d000 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043d000(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007c7554]      ; 0043e567 | g_INT_007c7554
    INC EDI                             ; 0043e56d
    ADD ESP,0xc                         ; 0043e56e
    MOV dword ptr [0x007c7554],EDI      ; 0043e571 | g_INT_007c7554
    JMP 0x0043e31f                      ; 0043e577
        ;   XREF to: 0043e31f (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV dword ptr [EAX + 0x8],0x1       ; 0043e57c | g_SRenderVertex_ARRAY_007c7558[1].projected_vertex.transformed_z
        ;   Label: LAB_0043e57c
    MOV dword ptr [EAX],ECX             ; 0043e583 | g_SRenderVertex_ARRAY_007c7558[1].projected_vertex.transformed_x
    MOV dword ptr [EAX + 0x4],ECX       ; 0043e585 | g_SRenderVertex_ARRAY_007c7558[1].projected_vertex.transformed_y
    JMP 0x0043e36c                      ; 0043e588
        ;   XREF to: 0043e36c (UNCONDITIONAL_JUMP)  ; LAB_0043e36c
    MOV EDX,ECX                         ; 0043e58d
        ;   Label: LAB_0043e58d
    MOV ESI,dword ptr [EAX]             ; 0043e58f | g_SRenderVertex_ARRAY_007c7558[1].projected_vertex.transformed_x
    NEG EDX                             ; 0043e591
    CMP EDX,ESI                         ; 0043e593
    JLE 0x0043e59e                      ; 0043e595
        ;   XREF to: 0043e59e (CONDITIONAL_JUMP)  ; LAB_0043e59e
    MOV dword ptr [EAX],EDX             ; 0043e597 | g_SRenderVertex_ARRAY_007c7558[1].projected_vertex.transformed_x
    JMP 0x0043e36c                      ; 0043e599
        ;   XREF to: 0043e36c (UNCONDITIONAL_JUMP)  ; LAB_0043e36c
    MOV EDI,dword ptr [EAX + 0x8]       ; 0043e59e | g_SRenderVertex_ARRAY_007c7558[1].projected_vertex.transformed_z
        ;   Label: LAB_0043e59e
    MOV ECX,dword ptr [EAX + 0x4]       ; 0043e5a1 | g_SRenderVertex_ARRAY_007c7558[1].projected_vertex.transformed_y
    CMP ECX,EDI                         ; 0043e5a4
    JLE 0x0043e5b0                      ; 0043e5a6
        ;   XREF to: 0043e5b0 (CONDITIONAL_JUMP)  ; LAB_0043e5b0
    MOV dword ptr [EAX + 0x4],EDI       ; 0043e5a8 | g_SRenderVertex_ARRAY_007c7558[1].projected_vertex.transformed_y
    JMP 0x0043e36c                      ; 0043e5ab
        ;   XREF to: 0043e36c (UNCONDITIONAL_JUMP)  ; LAB_0043e36c
    CMP EDX,ECX                         ; 0043e5b0
        ;   Label: LAB_0043e5b0
    JLE 0x0043e36c                      ; 0043e5b2
        ;   XREF to: 0043e36c (CONDITIONAL_JUMP)  ; LAB_0043e36c
    MOV dword ptr [EAX + 0x4],EDX       ; 0043e5b8 | g_SRenderVertex_ARRAY_007c7558[1].projected_vertex.transformed_y
    JMP 0x0043e36c                      ; 0043e5bb
        ;   XREF to: 0043e36c (UNCONDITIONAL_JUMP)  ; LAB_0043e36c

