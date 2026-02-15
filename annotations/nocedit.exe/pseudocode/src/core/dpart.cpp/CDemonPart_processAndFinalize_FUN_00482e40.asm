; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dpart_cpp_CDemonPart_processAndFinalize_FUN_00482e40(CDemonPart *this_ptr,int enable_vertex_reduction,int enable_polygon_optimize)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   enable_vertex_reduction
; int              Stack[0xc]:4   enable_polygon_optimize
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dpart.cpp_CDemonPart_importTriangleMesh_FUN_00482a10 at 00482e0f
;
; Referenced Globals:
;   double g_FloatToFixedPoint256v2 = 256
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;   undefined4 DAT_01626420
;   int g_PolygonCount
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e99c8
;   undefined4 DAT_016e99cc
;   undefined4 DAT_016e99d0
;   undefined4 DAT_016e99d4
;   undefined4 DAT_016e9b38
;   undefined4 DAT_016e9b4c
;   undefined4 DAT_016e9b50
;   ... and 2 more
;
; Called Functions:
;   core_dpart.cpp_CDemonPart_alloc_FUN_00482180
;   core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_004824f0
;   core_dpart.cpp_CDemonPart_free_FUN_004822b0
;   crt_math.c_round_FUN_005fe6b0
;   shape_design.c_calculateVertexNormals_FUN_0045be40
;   shape_design.c_optimizePolygonMesh_FUN_004658e0
;   shape_design.c_vertexReducer_FUN_00467850
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482e40
        ;   Label: core_dpart.cpp_CDemonPart_processAndFinalize_FUN_00482e40
    PUSH ESI                            ; 00482e41
    PUSH EDI                            ; 00482e42
    PUSH EBP                            ; 00482e43
    SUB ESP,0x4                         ; 00482e44
    MOV EBX,dword ptr [ESP + 0x18]      ; 00482e47
    CALL shape_design.c_calculateVertexNormals_FUN_0045be40 ; 00482e4b
        ;   XREF to: 0045be40 (UNCONDITIONAL_CALL)  ; void shape_design.c_calculateVertexNormals_FUN_0045be40()
    CMP dword ptr [ESP + 0x1c],0x0      ; 00482e50
    JNZ 0x00482f7e                      ; 00482e55
        ;   XREF to: 00482f7e (CONDITIONAL_JUMP)  ; LAB_00482f7e
    CMP dword ptr [ESP + 0x20],0x0      ; 00482e5b
        ;   Label: LAB_00482e5b
    JZ 0x00482e73                       ; 00482e60
        ;   XREF to: 00482e73 (CONDITIONAL_JUMP)  ; LAB_00482e73
    PUSH -0x1                           ; 00482e62
    PUSH 0x0                            ; 00482e64
    PUSH 0x3f800000                     ; 00482e66
    CALL shape_design.c_optimizePolygonMesh_FUN_004658e0 ; 00482e6b
        ;   XREF to: 004658e0 (UNCONDITIONAL_CALL)  ; void shape_design.c_optimizePolygonMesh_FUN_004658e0(float angle_tolerance, int strict_mode, int display_progress)
    ADD ESP,0xc                         ; 00482e70
    CALL shape_design.c_calculateVertexNormals_FUN_0045be40 ; 00482e73
        ;   XREF to: 0045be40 (UNCONDITIONAL_CALL)  ; void shape_design.c_calculateVertexNormals_FUN_0045be40()
        ;   Label: LAB_00482e73
    PUSH EBX                            ; 00482e78
    CALL core_dpart.cpp_CDemonPart_free_FUN_004822b0 ; 00482e79
        ;   XREF to: 004822b0 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_CDemonPart_free_FUN_004822b0(CDemonPart * this_ptr)
    ADD ESP,0x4                         ; 00482e7e
    MOV EAX,[0x01626408]                ; 00482e81 | g_VertexCount
    PUSH EBX                            ; 00482e86
    MOV dword ptr [EBX + 0x20],EAX      ; 00482e87
    MOV EAX,[0x016e990c]                ; 00482e8a | g_PolygonCount
    XOR ESI,ESI                         ; 00482e8f
    MOV dword ptr [EBX + 0x24],EAX      ; 00482e91
    CALL core_dpart.cpp_CDemonPart_alloc_FUN_00482180 ; 00482e94
        ;   XREF to: 00482180 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_CDemonPart_alloc_FUN_00482180(CDemonPart * this_ptr)
    MOV EDI,dword ptr [EBX + 0x20]      ; 00482e99
    ADD ESP,0x4                         ; 00482e9c
    TEST EDI,EDI                        ; 00482e9f
    JLE 0x00482f10                      ; 00482ea1
        ;   XREF to: 00482f10 (CONDITIONAL_JUMP)  ; LAB_00482f10
    FLD double ptr [0x0062183e]         ; 00482ea3 | g_FloatToFixedPoint256v2
    XOR ECX,ECX                         ; 00482ea9
    XOR EDX,EDX                         ; 00482eab
    FLD float ptr [ECX + 0x162640c]     ; 00482ead | g_LoadedVertices | DAT_01626420
        ;   Label: LAB_00482ead
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00482eb3
    FMUL ST1                            ; 00482eb6
    LEA EDI,[EAX + EDX*0x1]             ; 00482eb8
    CALL crt_math.c_round_FUN_005fe6b0  ; 00482ebb
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP]               ; 00482ec0
    MOV EAX,dword ptr [ESP]             ; 00482ec3
    MOV dword ptr [EDI],EAX             ; 00482ec6
    FLD float ptr [ECX + 0x1626410]     ; 00482ec8 | DAT_01626410
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00482ece
    FMUL ST1                            ; 00482ed1
    LEA EDI,[EAX + EDX*0x1]             ; 00482ed3
    CALL crt_math.c_round_FUN_005fe6b0  ; 00482ed6
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP]               ; 00482edb
    MOV EAX,dword ptr [ESP]             ; 00482ede
    MOV dword ptr [EDI + 0x4],EAX       ; 00482ee1
    FLD float ptr [ECX + 0x1626414]     ; 00482ee4 | g_LoadedVertices[0].vertex.z
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00482eea
    FMUL ST1                            ; 00482eed
    LEA EDI,[EAX + EDX*0x1]             ; 00482eef
    CALL crt_math.c_round_FUN_005fe6b0  ; 00482ef2
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP]               ; 00482ef7
    MOV EAX,dword ptr [ESP]             ; 00482efa
    ADD ECX,0x14                        ; 00482efd
    MOV dword ptr [EDI + 0x8],EAX       ; 00482f00
    INC ESI                             ; 00482f03
    MOV EBP,dword ptr [EBX + 0x20]      ; 00482f04
    ADD EDX,0xc                         ; 00482f07
    CMP ESI,EBP                         ; 00482f0a
    JL 0x00482ead                       ; 00482f0c
        ;   XREF to: 00482ead (CONDITIONAL_JUMP)  ; LAB_00482ead
    FSTP ST0                            ; 00482f0e
    MOV EAX,dword ptr [EBX + 0x24]      ; 00482f10
        ;   Label: LAB_00482f10
    XOR ECX,ECX                         ; 00482f13
    TEST EAX,EAX                        ; 00482f15
    JLE 0x00482f6d                      ; 00482f17
        ;   XREF to: 00482f6d (CONDITIONAL_JUMP)  ; LAB_00482f6d
    XOR EDX,EDX                         ; 00482f19
    XOR EAX,EAX                         ; 00482f1b
    MOV ESI,dword ptr [EBX + 0x34]      ; 00482f1d
        ;   Label: LAB_00482f1d
    MOV EDI,dword ptr [EDX + 0x16e99c8] ; 00482f20 | DAT_016e99c8 | DAT_016e9b4c
    MOV dword ptr [ESI + EAX*0x1 + 0x10],EDI ; 00482f26
    MOV ESI,dword ptr [EBX + 0x34]      ; 00482f2a
    LEA EDI,[ESI + EAX*0x1]             ; 00482f2d
    MOV ESI,dword ptr [EDX + 0x16e99cc] ; 00482f30 | DAT_016e99cc | DAT_016e9b50
    MOV dword ptr [EDI + 0x14],ESI      ; 00482f36
    MOV EDI,dword ptr [EBX + 0x34]      ; 00482f39
    MOV ESI,dword ptr [EDX + 0x16e99d0] ; 00482f3c | DAT_016e99d0 | DAT_016e9b54
    MOV dword ptr [EDI + EAX*0x1 + 0x18],ESI ; 00482f42
    CMP dword ptr [EDX + 0x16e99b4],0x4 ; 00482f46 | DAT_016e99b4 | DAT_016e9b38
    JNZ 0x00482f97                      ; 00482f4d
        ;   XREF to: 00482f97 (CONDITIONAL_JUMP)  ; LAB_00482f97
    MOV ESI,dword ptr [EBX + 0x34]      ; 00482f4f
    MOV EDI,dword ptr [EDX + 0x16e99d4] ; 00482f52 | DAT_016e99d4 | g_ModelPolygonData[1].vertex_indices[3]
    MOV dword ptr [ESI + EAX*0x1 + 0x1c],EDI ; 00482f58
    ADD EAX,0x20                        ; 00482f5c
        ;   Label: LAB_00482f5c
    INC ECX                             ; 00482f5f
    MOV ESI,dword ptr [EBX + 0x24]      ; 00482f60
    ADD EDX,0x184                       ; 00482f63
    CMP ECX,ESI                         ; 00482f69
    JL 0x00482f1d                       ; 00482f6b
        ;   XREF to: 00482f1d (CONDITIONAL_JUMP)  ; LAB_00482f1d
    PUSH EBX                            ; 00482f6d
        ;   Label: LAB_00482f6d
    CALL core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_004824f0 ; 00482f6e
        ;   XREF to: 004824f0 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_004824f0(CDemonPart * this_ptr)
    ADD ESP,0x4                         ; 00482f73
    ADD ESP,0x4                         ; 00482f76
    POP EBP                             ; 00482f79
    POP EDI                             ; 00482f7a
    POP ESI                             ; 00482f7b
    POP EBX                             ; 00482f7c
    RET                                 ; 00482f7d
    PUSH -0x1                           ; 00482f7e
        ;   Label: LAB_00482f7e
    PUSH 0xbf800000                     ; 00482f80
    PUSH 0x3c23d70a                     ; 00482f85
    CALL shape_design.c_vertexReducer_FUN_00467850 ; 00482f8a
        ;   XREF to: 00467850 (UNCONDITIONAL_CALL)  ; void shape_design.c_vertexReducer_FUN_00467850(float tolerance, float angle_tolerance, int display_progress)
    ADD ESP,0xc                         ; 00482f8f
    JMP 0x00482e5b                      ; 00482f92
        ;   XREF to: 00482e5b (UNCONDITIONAL_JUMP)  ; LAB_00482e5b
    MOV ESI,dword ptr [EBX + 0x34]      ; 00482f97
        ;   Label: LAB_00482f97
    MOV dword ptr [ESI + EAX*0x1 + 0x1c],0xffffffff ; 00482f9a
    JMP 0x00482f5c                      ; 00482fa2
        ;   XREF to: 00482f5c (UNCONDITIONAL_JUMP)  ; LAB_00482f5c

