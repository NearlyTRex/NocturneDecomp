; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dpart_cpp_CDemonPart_importTriangleMesh_FUN_00482a10(CDemonPart *this_ptr,int triangle_count,int enable_alloc,int source_triangle_count,CDemonTriangle *triangle_data)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   triangle_count
; int              Stack[0xc]:4   enable_alloc
; int              Stack[0x10]:4   source_triangle_count
; CDemonTriangle * Stack[0x14]:4   triangle_data
; Local Variables:
; undefined        Stack[-0x134]:1  local_134
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
; Referenced Globals:
;   TerminatedCString s_Too_many_d_d_0062180e
;   TerminatedCString s_core_dpart_cpp_0062181f
;   double g_FloatToFixedPoint256 = 256
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 g_LoadedVertices[0].vertex.y
;   undefined4 g_LoadedVertices[0].vertex.z
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 g_ModelPolygonData[0].texture_name[0]
;   undefined4 g_ModelPolygonData[0].lightmap_name[0]
;   undefined4 g_ModelPolygonData[0].vertex_indices_count
;   undefined4 g_ModelPolygonData[0].vertex_indices[0]
;   undefined4 g_ModelPolygonData[0].vertex_indices[1]
;   undefined4 g_ModelPolygonData[0].vertex_indices[2]
;   ... and 9 more
;
; Called Functions:
;   core_dpart.cpp_CDemonPart_alloc_FUN_00482180
;   core_dpart.cpp_CDemonPart_processAndFinalize_FUN_00482e40
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482a10
        ;   Label: core_dpart.cpp_CDemonPart_importTriangleMesh_FUN_00482a10
    PUSH ESI                            ; 00482a11
    PUSH EDI                            ; 00482a12
    PUSH EBP                            ; 00482a13
    SUB ESP,0x124                       ; 00482a14
    MOV EBX,dword ptr [ESP + 0x138]     ; 00482a1a
    MOV EDX,dword ptr [ESP + 0x13c]     ; 00482a21
    LEA EAX,[EDX*0x4 + 0x0]             ; 00482a28
    SUB EAX,EDX                         ; 00482a2f
    MOV dword ptr [EBX + 0x24],EDX      ; 00482a31
    MOV dword ptr [EBX + 0x20],EAX      ; 00482a34
    MOV EDX,dword ptr [EBX + 0x20]      ; 00482a37
    MOV dword ptr [EBX + 0x28],0x1      ; 00482a3a
    CMP EDX,0x4e20                      ; 00482a41
    JG 0x00482a52                       ; 00482a47
        ;   XREF to: 00482a52 (CONDITIONAL_JUMP)  ; LAB_00482a52
    CMP dword ptr [EBX + 0x24],0x4e20   ; 00482a49
    JLE 0x00482a8c                      ; 00482a50
        ;   XREF to: 00482a8c (CONDITIONAL_JUMP)  ; LAB_00482a8c
    MOV ESI,dword ptr [EBX + 0x24]      ; 00482a52
        ;   Label: LAB_00482a52
    PUSH ESI                            ; 00482a55
    MOV EDI,dword ptr [EBX + 0x20]      ; 00482a56
    PUSH EDI                            ; 00482a59
    PUSH 0x62180e                       ; 00482a5a | = "Too many! %d, %d"
    LEA EAX,[ESP + 0xc]                 ; 00482a5f
    PUSH EAX                            ; 00482a63
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00482a64
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,0x267                       ; 00482a69
    ADD ESP,0x10                        ; 00482a6e
    MOV [0x02f0ca4c],EAX                ; 00482a71 | g_CurrentLineNumber
    MOV EAX,ESP                         ; 00482a76
    MOV EBP,0x62181f                    ; 00482a78 | = "..\\core\\dpart.cpp"
    PUSH EAX                            ; 00482a7d
    MOV dword ptr [0x02f0ca48],EBP      ; 00482a7e | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00482a84
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00482a89
    MOV EAX,dword ptr [EBX + 0x20]      ; 00482a8c
        ;   Label: LAB_00482a8c
    MOV [0x01626408],EAX                ; 00482a8f | g_VertexCount
    MOV EAX,dword ptr [EBX + 0x24]      ; 00482a94
    MOV EDX,dword ptr [ESP + 0x13c]     ; 00482a97
    MOV [0x016e990c],EAX                ; 00482a9e | g_PolygonCount
    TEST EDX,EDX                        ; 00482aa3
    JZ 0x00482e30                       ; 00482aa5
        ;   XREF to: 00482e30 (CONDITIONAL_JUMP)  ; LAB_00482e30
    PUSH EBX                            ; 00482aab
    CALL core_dpart.cpp_CDemonPart_alloc_FUN_00482180 ; 00482aac
        ;   XREF to: 00482180 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_CDemonPart_alloc_FUN_00482180(CDemonPart * this_ptr)
    ADD ESP,0x4                         ; 00482ab1
    XOR ECX,ECX                         ; 00482ab4
    MOV ESI,dword ptr [ESP + 0x13c]     ; 00482ab6
    MOV dword ptr [ESP + 0x11c],ECX     ; 00482abd
    TEST ESI,ESI                        ; 00482ac4
    JLE 0x00482e0a                      ; 00482ac6
        ;   XREF to: 00482e0a (CONDITIONAL_JUMP)  ; LAB_00482e0a
    MOV EBP,0xc                         ; 00482acc
    MOV ECX,dword ptr [ESP + 0x140]     ; 00482ad1
    XOR EAX,EAX                         ; 00482ad8
    XOR EDX,EDX                         ; 00482ada
    XOR EDI,EDI                         ; 00482adc
    MOV dword ptr [ESP + 0x118],EBP     ; 00482ade
    MOV dword ptr [ESP + 0x110],EAX     ; 00482ae5
    MOV dword ptr [ESP + 0x114],EAX     ; 00482aec
    ADD ECX,EBP                         ; 00482af3
    IMUL ESI,dword ptr [ESP + 0x11c],0x38 ; 00482af5
        ;   Label: LAB_00482af5
    ADD ESI,dword ptr [ESP + 0x140]     ; 00482afd
    MOV EBP,dword ptr [ESP + 0x110]     ; 00482b04
    FLD float ptr [ESI]                 ; 00482b0b
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00482b0d
    FLD double ptr [0x00621836]         ; 00482b10 | g_FloatToFixedPoint256
    FXCH                                ; 00482b16
    FMUL ST1                            ; 00482b18
    ADD EBP,EAX                         ; 00482b1a
    CALL crt_math.c_round_FUN_005fe6b0  ; 00482b1c
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x120]       ; 00482b21
    MOV EAX,dword ptr [ESP + 0x120]     ; 00482b28
    MOV dword ptr [EBP],EAX             ; 00482b2f
    FLD float ptr [ESI + 0x4]           ; 00482b32
    MOV EBP,dword ptr [ESP + 0x110]     ; 00482b35
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00482b3c
    FMUL ST1                            ; 00482b3f
    ADD EBP,EAX                         ; 00482b41
    CALL crt_math.c_round_FUN_005fe6b0  ; 00482b43
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x120]       ; 00482b48
    MOV EAX,dword ptr [ESP + 0x120]     ; 00482b4f
    MOV dword ptr [EBP + 0x4],EAX       ; 00482b56
    FLD float ptr [ESI + 0x8]           ; 00482b59
    MOV EAX,dword ptr [ESP + 0x110]     ; 00482b5c
    MOV EBP,dword ptr [EBX + 0x2c]      ; 00482b63
    FMUL ST1                            ; 00482b66
    ADD EBP,EAX                         ; 00482b68
    CALL crt_math.c_round_FUN_005fe6b0  ; 00482b6a
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x100]       ; 00482b6f
    MOV EAX,dword ptr [ESP + 0x100]     ; 00482b76
    MOV dword ptr [EBP + 0x8],EAX       ; 00482b7d
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00482b80
    FLD float ptr [ECX]                 ; 00482b87
    LEA EAX,[EAX + EAX*0x2]             ; 00482b89
    FMUL ST1                            ; 00482b8c
    MOV dword ptr [ESP + 0x10c],EAX     ; 00482b8e
    INC EAX                             ; 00482b95
    MOV EBP,dword ptr [ESP + 0x118]     ; 00482b96
    MOV dword ptr [ESP + 0x104],EAX     ; 00482b9d
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00482ba4
    CALL crt_math.c_round_FUN_005fe6b0  ; 00482ba7
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    ADD EBP,EAX                         ; 00482bac
    FISTP dword ptr [ESP + 0x100]       ; 00482bae
    MOV EAX,dword ptr [ESP + 0x100]     ; 00482bb5
    MOV dword ptr [EBP],EAX             ; 00482bbc
    FLD float ptr [ECX + 0x4]           ; 00482bbf
    MOV EBP,dword ptr [ESP + 0x118]     ; 00482bc2
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00482bc9
    FMUL ST1                            ; 00482bcc
    ADD EBP,EAX                         ; 00482bce
    CALL crt_math.c_round_FUN_005fe6b0  ; 00482bd0
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x100]       ; 00482bd5
    MOV EAX,dword ptr [ESP + 0x100]     ; 00482bdc
    MOV dword ptr [EBP + 0x4],EAX       ; 00482be3
    FLD float ptr [ECX + 0x8]           ; 00482be6
    MOV EAX,dword ptr [ESP + 0x118]     ; 00482be9
    MOV EBP,dword ptr [EBX + 0x2c]      ; 00482bf0
    FMULP                               ; 00482bf3
    ADD EBP,EAX                         ; 00482bf5
    CALL crt_math.c_round_FUN_005fe6b0  ; 00482bf7
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x100]       ; 00482bfc
    MOV EAX,dword ptr [ESP + 0x100]     ; 00482c03
    MOV dword ptr [EBP + 0x8],EAX       ; 00482c0a
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00482c0d
    ADD EAX,0x2                         ; 00482c14
    MOV dword ptr [ESP + 0x108],EAX     ; 00482c17
    IMUL EAX,EAX,0xc                    ; 00482c1e
    FLD double ptr [0x00621836]         ; 00482c21 | g_FloatToFixedPoint256
    FLD float ptr [ECX + 0xc]           ; 00482c27
    FMUL ST1                            ; 00482c2a
    MOV dword ptr [ESP + 0x100],EAX     ; 00482c2c
    MOV EBP,dword ptr [ESP + 0x100]     ; 00482c33
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00482c3a
    CALL crt_math.c_round_FUN_005fe6b0  ; 00482c3d
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    ADD EBP,EAX                         ; 00482c42
    FISTP dword ptr [ESP + 0x120]       ; 00482c44
    MOV EAX,dword ptr [ESP + 0x120]     ; 00482c4b
    MOV dword ptr [EBP],EAX             ; 00482c52
    FLD float ptr [ECX + 0x10]          ; 00482c55
    MOV EBP,dword ptr [ESP + 0x100]     ; 00482c58
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00482c5f
    FMUL ST1                            ; 00482c62
    ADD EBP,EAX                         ; 00482c64
    CALL crt_math.c_round_FUN_005fe6b0  ; 00482c66
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x120]       ; 00482c6b
    MOV EAX,dword ptr [ESP + 0x120]     ; 00482c72
    MOV dword ptr [EBP + 0x4],EAX       ; 00482c79
    FLD float ptr [ECX + 0x14]          ; 00482c7c
    MOV EAX,dword ptr [ESP + 0x100]     ; 00482c7f
    MOV EBP,dword ptr [EBX + 0x2c]      ; 00482c86
    FMULP                               ; 00482c89
    ADD EBP,EAX                         ; 00482c8b
    CALL crt_math.c_round_FUN_005fe6b0  ; 00482c8d
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x120]       ; 00482c92
    MOV EAX,dword ptr [ESP + 0x120]     ; 00482c99
    MOV dword ptr [EBP + 0x8],EAX       ; 00482ca0
    MOV EAX,dword ptr [EBX + 0x34]      ; 00482ca3
    MOV dword ptr [EDI + EAX*0x1 + 0x1c],0xffffffff ; 00482ca6
    MOV EAX,dword ptr [EBX + 0x34]      ; 00482cae
    MOV EBP,dword ptr [ESP + 0x10c]     ; 00482cb1
    MOV dword ptr [EDI + EAX*0x1 + 0x10],EBP ; 00482cb8
    MOV EAX,dword ptr [EBX + 0x34]      ; 00482cbc
    MOV EBP,dword ptr [ESP + 0x104]     ; 00482cbf
    MOV dword ptr [EDI + EAX*0x1 + 0x14],EBP ; 00482cc6
    MOV EAX,dword ptr [EBX + 0x34]      ; 00482cca
    MOV EBP,dword ptr [ESP + 0x108]     ; 00482ccd
    MOV dword ptr [EDI + EAX*0x1 + 0x18],EBP ; 00482cd4
    MOV EAX,dword ptr [ESP + 0x114]     ; 00482cd8
    FLD float ptr [ESI]                 ; 00482cdf
    FSTP float ptr [EAX + 0x162640c]    ; 00482ce1 | g_LoadedVertices
    FLD float ptr [ESI + 0x4]           ; 00482ce7
    FSTP float ptr [EAX + 0x1626410]    ; 00482cea | g_LoadedVertices[0].vertex.y
    FLD float ptr [ESI + 0x8]           ; 00482cf0
    MOV ESI,dword ptr [ESP + 0x104]     ; 00482cf3
    FSTP float ptr [EAX + 0x1626414]    ; 00482cfa | g_LoadedVertices[0].vertex.z
    IMUL EAX,ESI,0x14                   ; 00482d00
    MOV ESI,dword ptr [ECX]             ; 00482d03
    MOV dword ptr [EAX + 0x162640c],ESI ; 00482d05 | g_LoadedVertices
    MOV ESI,dword ptr [ECX + 0x4]       ; 00482d0b
    MOV dword ptr [EAX + 0x1626410],ESI ; 00482d0e | g_LoadedVertices[0].vertex.y
    MOV ESI,dword ptr [ECX + 0x8]       ; 00482d14
    MOV dword ptr [EAX + 0x1626414],ESI ; 00482d17 | g_LoadedVertices[0].vertex.z
    IMUL EAX,EBP,0x14                   ; 00482d1d
    ADD EDX,0x184                       ; 00482d20
    MOV ESI,0x1                         ; 00482d26
    FLD float ptr [ECX + 0xc]           ; 00482d2b
    FSTP float ptr [EAX + 0x162640c]    ; 00482d2e | g_LoadedVertices
    FLD float ptr [ECX + 0x10]          ; 00482d34
    FSTP float ptr [EAX + 0x1626410]    ; 00482d37 | g_LoadedVertices[0].vertex.y
    FLD float ptr [ECX + 0x14]          ; 00482d3d
    MOV dword ptr [EDX + 0x16e978c],ESI ; 00482d40 | g_ModelPolygonData
    FSTP float ptr [EAX + 0x1626414]    ; 00482d46 | g_LoadedVertices[0].vertex.z
    MOV dword ptr [EDX + 0x16e984c],EBP ; 00482d4c | g_ModelPolygonData[0].vertex_indices[2]
    MOV EAX,0x3                         ; 00482d52
    XOR EBP,EBP                         ; 00482d57
    MOV dword ptr [EDX + 0x16e9830],EAX ; 00482d59 | g_ModelPolygonData[0].vertex_indices_count
    MOV dword ptr [EDX + 0x16e9884],EBP ; 00482d5f | g_ModelPolygonData[0].uv_u[0]
    MOV dword ptr [EDX + 0x16e98c4],EBP ; 00482d65 | g_ModelPolygonData[0].uv_v[0]
    MOV dword ptr [EDX + 0x16e9888],EBP ; 00482d6b | g_ModelPolygonData[0].uv_u[1]
    MOV dword ptr [EDX + 0x16e98c8],EBP ; 00482d71 | g_ModelPolygonData[0].uv_v[1]
    MOV dword ptr [EDX + 0x16e988c],EBP ; 00482d77 | g_ModelPolygonData[0].uv_u[2]
    MOV dword ptr [EDX + 0x16e98cc],EBP ; 00482d7d | g_ModelPolygonData[0].uv_v[2]
    ADD ECX,0x38                        ; 00482d83
    MOV dword ptr [EDX + 0x16e9904],EBP ; 00482d86 | g_ModelPolygonData[0].part_assignment
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00482d8c
    ADD EDI,0x20                        ; 00482d93
    MOV dword ptr [EDX + 0x16e9844],EAX ; 00482d96 | g_ModelPolygonData[0].vertex_indices[0]
    MOV EAX,dword ptr [ESP + 0x104]     ; 00482d9c
    MOV ESI,dword ptr [ESP + 0x110]     ; 00482da3
    MOV dword ptr [EDX + 0x16e9848],EAX ; 00482daa | g_ModelPolygonData[0].vertex_indices[1]
    XOR AH,AH                           ; 00482db0
    ADD ESI,0x24                        ; 00482db2
    MOV byte ptr [EDX + 0x16e9790],AH   ; 00482db5 | g_ModelPolygonData[0].texture_name[0]
    XOR AL,AL                           ; 00482dbb
    MOV EBP,dword ptr [ESP + 0x114]     ; 00482dbd
    MOV byte ptr [EDX + 0x16e97e0],AL   ; 00482dc4 | g_ModelPolygonData[0].lightmap_name[0]
    MOV EAX,dword ptr [ESP + 0x118]     ; 00482dca
    MOV dword ptr [ESP + 0x110],ESI     ; 00482dd1
    ADD EAX,0x24                        ; 00482dd8
    MOV ESI,dword ptr [ESP + 0x13c]     ; 00482ddb
    MOV dword ptr [ESP + 0x118],EAX     ; 00482de2
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00482de9
    ADD EBP,0x3c                        ; 00482df0
    INC EAX                             ; 00482df3
    MOV dword ptr [ESP + 0x114],EBP     ; 00482df4
    MOV dword ptr [ESP + 0x11c],EAX     ; 00482dfb
    CMP EAX,ESI                         ; 00482e02
    JL 0x00482af5                       ; 00482e04
        ;   XREF to: 00482af5 (CONDITIONAL_JUMP)  ; LAB_00482af5
    PUSH 0x1                            ; 00482e0a
        ;   Label: LAB_00482e0a
    PUSH 0x1                            ; 00482e0c
    PUSH EBX                            ; 00482e0e
    CALL core_dpart.cpp_CDemonPart_processAndFinalize_FUN_00482e40 ; 00482e0f
        ;   XREF to: 00482e40 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_CDemonPart_processAndFinalize_FUN_00482e40(CDemonPart * this_ptr, int enable_vertex_reduction, int enable_polygon_optimize)
    ADD ESP,0xc                         ; 00482e14
    MOV EDI,dword ptr [EBX + 0x24]      ; 00482e17
    XOR EAX,EAX                         ; 00482e1a
    TEST EDI,EDI                        ; 00482e1c
    JLE 0x00482e30                      ; 00482e1e
        ;   XREF to: 00482e30 (CONDITIONAL_JUMP)  ; LAB_00482e30
    INC EAX                             ; 00482e20
        ;   Label: LAB_00482e20
    CMP EAX,dword ptr [EBX + 0x24]      ; 00482e21
    JL 0x00482e20                       ; 00482e24
        ;   XREF to: 00482e20 (CONDITIONAL_JUMP)  ; LAB_00482e20
    LEA EAX,[EAX]                       ; 00482e26
    LEA EDX,[EDX]                       ; 00482e2c
    ADD ESP,0x124                       ; 00482e30
        ;   Label: LAB_00482e30
    POP EBP                             ; 00482e36
    POP EDI                             ; 00482e37
    POP ESI                             ; 00482e38
    POP EBX                             ; 00482e39
    RET                                 ; 00482e3a

