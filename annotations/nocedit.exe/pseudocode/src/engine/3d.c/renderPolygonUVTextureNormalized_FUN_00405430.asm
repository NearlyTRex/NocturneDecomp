; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonUVTextureNormalized_FUN_00405430(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
; Local Variables:
; int[1016]        Stack[-0x1010]:4064  aiStackY_1010
; CVector3i        Stack[-0x28]:12  local_28
; CVector3i        Stack[-0x1c]:12  local_1c
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   int g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00403a00
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;   engine_matrix.c_normalizeVector3DFixed_FUN_0050d970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405430
        ;   Label: engine_3d.c_renderPolygonUVTextureNormalized_FUN_00405430
    PUSH ESI                            ; 00405431
    PUSH EDI                            ; 00405432
    PUSH EBP                            ; 00405433
    SUB ESP,0x18                        ; 00405434
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00405437
    MOV EAX,dword ptr [EBX + 0x8]       ; 0040543b
    MOV dword ptr [ESP],EAX             ; 0040543e
    MOV EAX,dword ptr [EBX + 0xc]       ; 00405441
    MOV dword ptr [ESP + 0x4],EAX       ; 00405444
    MOV EAX,dword ptr [EBX + 0x10]      ; 00405448
    MOV dword ptr [ESP + 0x8],EAX       ; 0040544b
    MOV EAX,ESP                         ; 0040544f
    PUSH EAX                            ; 00405451
    LEA ESI,[ESP + 0x10]                ; 00405452
    LEA EDI,[ESP + 0x4]                 ; 00405456
    CALL engine_matrix.c_normalizeVector3DFixed_FUN_0050d970 ; 0040545a
        ;   XREF to: 0050d970 (UNCONDITIONAL_CALL)  ; CVector3i * engine_matrix.c_normalizeVector3DFixed_FUN_0050d970(CVector3i * input_vector, CVector3i * output_vector)
    LEA ESI,[ESP + 0x10]                ; 0040545f
    ADD ESP,0x4                         ; 00405463
    JMP 0x00608cc2                      ; 00405466
        ;   XREF to: 00608cc2 (UNCONDITIONAL_JUMP)  ; LAB_00608cc2
    LEA EAX,[EBX + 0x8]                 ; 0040546c
        ;   Label: LAB_0040546c
    PUSH EAX                            ; 0040546f
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00405470
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00405475
    TEST EAX,EAX                        ; 00405478
    JZ 0x004054c4                       ; 0040547a
        ;   XREF to: 004054c4 (CONDITIONAL_JUMP)  ; LAB_004054c4
    CMP dword ptr [0x02d05248],0x0      ; 0040547c | g_MMXSupported
    JNZ 0x004054e3                      ; 00405483
        ;   XREF to: 004054e3 (CONDITIONAL_JUMP)  ; LAB_004054e3
    CMP dword ptr [0x0067939c],0x20     ; 00405485 | g_BitsPerPixel
    JNZ 0x004054d7                      ; 0040548c
        ;   XREF to: 004054d7 (CONDITIONAL_JUMP)  ; LAB_004054d7
    MOV dword ptr [0x02d0257c],0x5b50ec ; 0040548e | g_ScanlineRenderFunc
    MOV EDI,0x1                         ; 00405498
        ;   Label: LAB_00405498
    MOV EBP,0x2                         ; 0040549d
    PUSH EBX                            ; 004054a2
    MOV dword ptr [0x02d052a0],EDI      ; 004054a3 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 004054a9 | g_RenderStateFlag2
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00 ; 004054af
        ;   XREF to: 00403a00 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 004054b4
    PUSH ESI                            ; 004054b7
    MOV EAX,dword ptr [EBX + 0x4]       ; 004054b8
    PUSH EAX                            ; 004054bb
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 004054bc
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004054c1
    MOV ESI,dword ptr [EBX + 0x4]       ; 004054c4
        ;   Label: LAB_004054c4
    LEA EAX,[EBX + 0x18]                ; 004054c7
    SHL ESI,0x2                         ; 004054ca
    ADD EAX,ESI                         ; 004054cd
    ADD ESP,0x18                        ; 004054cf
    POP EBP                             ; 004054d2
    POP EDI                             ; 004054d3
    POP ESI                             ; 004054d4
    POP EBX                             ; 004054d5
    RET                                 ; 004054d6
    MOV dword ptr [0x02d0257c],0x5b5322 ; 004054d7 | g_ScanlineRenderFunc
        ;   Label: LAB_004054d7
    JMP 0x00405498                      ; 004054e1
        ;   XREF to: 00405498 (UNCONDITIONAL_JUMP)  ; LAB_00405498
    CMP dword ptr [0x0067939c],0x20     ; 004054e3 | g_BitsPerPixel
        ;   Label: LAB_004054e3
    JNZ 0x004054f8                      ; 004054ea
        ;   XREF to: 004054f8 (CONDITIONAL_JUMP)  ; LAB_004054f8
    MOV dword ptr [0x02d0257c],0x5b4031 ; 004054ec | g_ScanlineRenderFunc
    JMP 0x00405498                      ; 004054f6
        ;   XREF to: 00405498 (UNCONDITIONAL_JUMP)  ; LAB_00405498
    MOV dword ptr [0x02d0257c],0x5b4823 ; 004054f8 | g_ScanlineRenderFunc
        ;   Label: LAB_004054f8
    JMP 0x00405498                      ; 00405502
        ;   XREF to: 00405498 (UNCONDITIONAL_JUMP)  ; LAB_00405498
    MOV ECX,dword ptr [ESI]             ; 00608cc2
        ;   Label: LAB_00608cc2
    MOV dword ptr [EDI],ECX             ; 00608cc4
    MOV ECX,dword ptr [ESI + 0x4]       ; 00608cc6
    MOV dword ptr [EDI + 0x4],ECX       ; 00608cc9
    MOV ECX,dword ptr [ESI + 0x8]       ; 00608ccc
    MOV dword ptr [EDI + 0x8],ECX       ; 00608ccf
    ADD ESI,0xc                         ; 00608cd2
    ADD EDI,0xc                         ; 00608cd5
    LEA ESI,[EBX + 0x18]                ; 00608cd8
    JMP 0x0040546c                      ; 00608cdb
        ;   XREF to: 0040546c (UNCONDITIONAL_JUMP)  ; LAB_0040546c

