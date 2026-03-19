; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_addQuadPolygon_FUN_004687c0(int vertex_index_0,int vertex_index_1,int vertex_index_2,int vertex_index_3)
;
; Parameters:
; int              Stack[0x4]:4   vertex_index_0
; int              Stack[0x8]:4   vertex_index_1
; int              Stack[0xc]:4   vertex_index_2
; int              Stack[0x10]:4   vertex_index_3
;
; XREF[1]:
;   shape_design.c_generateGlobe_FUN_00468910 at 00468c23
;
; Referenced Globals:
;   TerminatedCString s_rustplat_raw_0061cdde
;   double g_TextureScale = 256
;   undefined4 g_LoadedVertices[0].u
;   undefined4 g_LoadedVertices[0].v
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 g_ModelPolygonData[0].vertex_indices_count
;   undefined4 g_ModelPolygonData[0].vertex_indices[0]
;   undefined4 g_ModelPolygonData[0].vertex_indices[1]
;   undefined4 g_ModelPolygonData[0].vertex_indices[2]
;   undefined4 g_ModelPolygonData[0].vertex_indices[3]
;   undefined4 g_ModelPolygonData[0].uv_u[0]
;   undefined4 g_ModelPolygonData[0].uv_u[1]
;   undefined4 g_ModelPolygonData[0].uv_u[2]
;   undefined4 g_ModelPolygonData[0].uv_u[3]
;   ... and 4 more
;
; Called Functions:
;   crt_stdio.c__sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004687c0
        ;   Label: shape_design.c_addQuadPolygon_FUN_004687c0
    PUSH ESI                            ; 004687c1
    PUSH EDI                            ; 004687c2
    PUSH EBP                            ; 004687c3
    MOV EBP,ESP                         ; 004687c4
    SUB ESP,0x8                         ; 004687c6
    IMUL EAX,dword ptr [0x016e990c],0x184 ; 004687cc | g_PolygonCount
    MOV EDX,0x16e9910                   ; 004687d6 | g_ModelPolygonData
    ADD EDX,EAX                         ; 004687db
    MOV dword ptr [EBP + -0x4],EDX      ; 004687dd
    INC dword ptr [0x016e990c]          ; 004687e0 | g_PolygonCount
    MOV EAX,dword ptr [EBP + -0x4]      ; 004687e6
    MOV dword ptr [EAX],0x2             ; 004687e9 | g_ModelPolygonData
    MOV EAX,0x61cdde                    ; 004687ef | = "rustplat.raw"
    PUSH EAX                            ; 004687f4 | = "rustplat.raw"
    MOV EAX,dword ptr [EBP + -0x4]      ; 004687f5
    ADD EAX,0x4                         ; 004687f8
    PUSH EAX                            ; 004687fb
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004687fc
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 00468801
    MOV EAX,dword ptr [EBP + -0x4]      ; 00468804
    MOV dword ptr [EAX + 0xa4],0x4      ; 00468807 | g_ModelPolygonData[0].vertex_indices_count
    MOV EAX,dword ptr [EBP + 0x14]      ; 00468811
    MOV EDX,dword ptr [EBP + -0x4]      ; 00468814
    MOV dword ptr [EDX + 0xb8],EAX      ; 00468817 | g_ModelPolygonData[0].vertex_indices[0]
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046881d
    MOV EDX,dword ptr [EBP + -0x4]      ; 00468820
    MOV dword ptr [EDX + 0xbc],EAX      ; 00468823 | g_ModelPolygonData[0].vertex_indices[1]
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00468829
    MOV EDX,dword ptr [EBP + -0x4]      ; 0046882c
    MOV dword ptr [EDX + 0xc0],EAX      ; 0046882f | g_ModelPolygonData[0].vertex_indices[2]
    MOV EAX,dword ptr [EBP + 0x20]      ; 00468835
    MOV EDX,dword ptr [EBP + -0x4]      ; 00468838
    MOV dword ptr [EDX + 0xc4],EAX      ; 0046883b | g_ModelPolygonData[0].vertex_indices[3]
    IMUL EAX,dword ptr [EBP + 0x14],0x14 ; 00468841
    FLD float ptr [EAX + 0x1626418]     ; 00468845 | g_LoadedVertices[0].u
    FMUL double ptr [0x0061cdee]        ; 0046884b | g_TextureScale
    MOV EAX,dword ptr [EBP + -0x4]      ; 00468851
    FSTP float ptr [EAX + 0xf8]         ; 00468854 | g_ModelPolygonData[0].uv_u[0]
    IMUL EAX,dword ptr [EBP + 0x14],0x14 ; 0046885a
    FLD float ptr [EAX + 0x162641c]     ; 0046885e | g_LoadedVertices[0].v
    FMUL double ptr [0x0061cdee]        ; 00468864 | g_TextureScale
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046886a
    FSTP float ptr [EAX + 0x138]        ; 0046886d | g_ModelPolygonData[0].uv_v[0]
    IMUL EAX,dword ptr [EBP + 0x18],0x14 ; 00468873
    FLD float ptr [EAX + 0x1626418]     ; 00468877 | g_LoadedVertices[0].u
    FMUL double ptr [0x0061cdee]        ; 0046887d | g_TextureScale
    MOV EAX,dword ptr [EBP + -0x4]      ; 00468883
    FSTP float ptr [EAX + 0xfc]         ; 00468886 | g_ModelPolygonData[0].uv_u[1]
    IMUL EAX,dword ptr [EBP + 0x18],0x14 ; 0046888c
    FLD float ptr [EAX + 0x162641c]     ; 00468890 | g_LoadedVertices[0].v
    FMUL double ptr [0x0061cdee]        ; 00468896 | g_TextureScale
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046889c
    FSTP float ptr [EAX + 0x13c]        ; 0046889f | g_ModelPolygonData[0].uv_v[1]
    IMUL EAX,dword ptr [EBP + 0x1c],0x14 ; 004688a5
    FLD float ptr [EAX + 0x1626418]     ; 004688a9 | g_LoadedVertices[0].u
    FMUL double ptr [0x0061cdee]        ; 004688af | g_TextureScale
    MOV EAX,dword ptr [EBP + -0x4]      ; 004688b5
    FSTP float ptr [EAX + 0x100]        ; 004688b8 | g_ModelPolygonData[0].uv_u[2]
    IMUL EAX,dword ptr [EBP + 0x1c],0x14 ; 004688be
    FLD float ptr [EAX + 0x162641c]     ; 004688c2 | g_LoadedVertices[0].v
    FMUL double ptr [0x0061cdee]        ; 004688c8 | g_TextureScale
    MOV EAX,dword ptr [EBP + -0x4]      ; 004688ce
    FSTP float ptr [EAX + 0x140]        ; 004688d1 | g_ModelPolygonData[0].uv_v[2]
    IMUL EAX,dword ptr [EBP + 0x20],0x14 ; 004688d7
    FLD float ptr [EAX + 0x1626418]     ; 004688db | g_LoadedVertices[0].u
    FMUL double ptr [0x0061cdee]        ; 004688e1 | g_TextureScale
    MOV EAX,dword ptr [EBP + -0x4]      ; 004688e7
    FSTP float ptr [EAX + 0x104]        ; 004688ea | g_ModelPolygonData[0].uv_u[3]
    IMUL EAX,dword ptr [EBP + 0x20],0x14 ; 004688f0
    FLD float ptr [EAX + 0x162641c]     ; 004688f4 | g_LoadedVertices[0].v
    FMUL double ptr [0x0061cdee]        ; 004688fa | g_TextureScale
    MOV EAX,dword ptr [EBP + -0x4]      ; 00468900
    FSTP float ptr [EAX + 0x144]        ; 00468903 | g_ModelPolygonData[0].uv_v[3]
    MOV ESP,EBP                         ; 00468909
    POP EBP                             ; 0046890b
    POP EDI                             ; 0046890c
    POP ESI                             ; 0046890d
    POP EBX                             ; 0046890e
    RET                                 ; 0046890f

