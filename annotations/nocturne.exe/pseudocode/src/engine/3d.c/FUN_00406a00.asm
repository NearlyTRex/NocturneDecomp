; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * engine_3d_c_FUN_00406a00(SMRGLHeaderPrimitive *param_1)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined        Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   MainScanlineFunc* g_ScanlineRenderFunc
;   int g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00404710
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_clipper.c_clipAndRasterize_FUN_00432cd0
;   engine_matrix.c_normalizeVector3DFixed_FUN_004cde10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406a00
        ;   Label: engine_3d.c_FUN_00406a00
    PUSH ESI                            ; 00406a01
    PUSH EDI                            ; 00406a02
    PUSH EBP                            ; 00406a03
    SUB ESP,0x18                        ; 00406a04
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00406a07
    MOV EAX,dword ptr [EBX + 0x8]       ; 00406a0b
    MOV dword ptr [ESP],EAX             ; 00406a0e
    MOV EAX,dword ptr [EBX + 0xc]       ; 00406a11
    MOV dword ptr [ESP + 0x4],EAX       ; 00406a14
    MOV EAX,dword ptr [EBX + 0x10]      ; 00406a18
    MOV dword ptr [ESP + 0x8],EAX       ; 00406a1b
    MOV EAX,ESP                         ; 00406a1f
    PUSH EAX                            ; 00406a21
    LEA ESI,[ESP + 0x10]                ; 00406a22
    LEA EDI,[ESP + 0x4]                 ; 00406a26
    CALL engine_matrix.c_normalizeVector3DFixed_FUN_004cde10 ; 00406a2a
        ;   XREF to: 004cde10 (UNCONDITIONAL_CALL)  ; CVector3i * engine_matrix.c_normalizeVector3DFixed_FUN_004cde10(CVector3i * input_vector, CVector3i * output_vector)
    LEA ESI,[ESP + 0x10]                ; 00406a2f
    ADD ESP,0x4                         ; 00406a33
    MOVSD ES:EDI,ESI                    ; 00406a36
    MOVSD ES:EDI,ESI                    ; 00406a37
    MOVSD ES:EDI,ESI                    ; 00406a38
    LEA ESI,[EBX + 0x18]                ; 00406a39
    LEA EAX,[EBX + 0x8]                 ; 00406a3c
    PUSH EAX                            ; 00406a3f
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00406a40
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 00406a45
    TEST EAX,EAX                        ; 00406a48
    JZ 0x00406a94                       ; 00406a4a
        ;   XREF to: 00406a94 (CONDITIONAL_JUMP)  ; LAB_00406a94
    CMP dword ptr [0x01c03948],0x0      ; 00406a4c | g_MMXSupported
    JNZ 0x00406ab3                      ; 00406a53
        ;   XREF to: 00406ab3 (CONDITIONAL_JUMP)  ; LAB_00406ab3
    CMP dword ptr [0x005b7624],0x20     ; 00406a55 | g_BitsPerPixel
    JNZ 0x00406aa7                      ; 00406a5c
        ;   XREF to: 00406aa7 (CONDITIONAL_JUMP)  ; LAB_00406aa7
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00406a5e | g_ScanlineRenderFunc
    MOV EDI,0x1                         ; 00406a68
        ;   Label: LAB_00406a68
    MOV EBP,0x2                         ; 00406a6d
    PUSH EBX                            ; 00406a72
    MOV dword ptr [0x01c039a0],EDI      ; 00406a73 | g_RenderStateFlags
    MOV dword ptr [0x01c039a4],EBP      ; 00406a79 | g_VertexPreprocessMode
    CALL engine_3d.c_calculatePolygonLighting_FUN_00404710 ; 00406a7f
        ;   XREF to: 00404710 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00404710(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00406a84
    PUSH ESI                            ; 00406a87
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406a88
    PUSH EAX                            ; 00406a8b
    CALL engine_clipper.c_clipAndRasterize_FUN_00432cd0 ; 00406a8c
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00432cd0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00406a91
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406a94
        ;   Label: LAB_00406a94
    LEA EAX,[EBX + 0x18]                ; 00406a97
    SHL ESI,0x2                         ; 00406a9a
    ADD EAX,ESI                         ; 00406a9d
    ADD ESP,0x18                        ; 00406a9f
    POP EBP                             ; 00406aa2
    POP EDI                             ; 00406aa3
    POP ESI                             ; 00406aa4
    POP EBX                             ; 00406aa5
    RET                                 ; 00406aa6
    MOV dword ptr [0x01c00c7c],0x530322 ; 00406aa7 | g_ScanlineRenderFunc
        ;   Label: LAB_00406aa7
    JMP 0x00406a68                      ; 00406ab1
        ;   XREF to: 00406a68 (UNCONDITIONAL_JUMP)  ; LAB_00406a68
    CMP dword ptr [0x005b7624],0x20     ; 00406ab3 | g_BitsPerPixel
        ;   Label: LAB_00406ab3
    JNZ 0x00406ac8                      ; 00406aba
        ;   XREF to: 00406ac8 (CONDITIONAL_JUMP)  ; LAB_00406ac8
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00406abc | g_ScanlineRenderFunc
    JMP 0x00406a68                      ; 00406ac6
        ;   XREF to: 00406a68 (UNCONDITIONAL_JUMP)  ; LAB_00406a68
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00406ac8 | g_ScanlineRenderFunc
        ;   Label: LAB_00406ac8
    JMP 0x00406a68                      ; 00406ad2
        ;   XREF to: 00406a68 (UNCONDITIONAL_JUMP)  ; LAB_00406a68

