; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedNormalizedUVLit_FUN_004055d0(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   int g_INT_006141c0 = 0x8
;   void* g_ScanlineRenderFunc
;   int g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00403a20
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;   engine_matrix.c_normalizeVector3DFixed_FUN_004e9a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004055d0
        ;   Label: engine_3d.c_renderPolygonTexturedNormalizedUVLit_FUN_004055d0
    PUSH ESI                            ; 004055d1
    PUSH EDI                            ; 004055d2
    PUSH EBP                            ; 004055d3
    SUB ESP,0x18                        ; 004055d4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004055d7
    MOV EAX,dword ptr [EBX + 0x8]       ; 004055db
    MOV dword ptr [ESP],EAX             ; 004055de
    MOV EAX,dword ptr [EBX + 0xc]       ; 004055e1
    MOV dword ptr [ESP + 0x4],EAX       ; 004055e4
    MOV EAX,dword ptr [EBX + 0x10]      ; 004055e8
    MOV dword ptr [ESP + 0x8],EAX       ; 004055eb
    MOV EAX,ESP                         ; 004055ef
    PUSH EAX                            ; 004055f1
    LEA ESI,[ESP + 0x10]                ; 004055f2
    LEA EDI,[ESP + 0x4]                 ; 004055f6
    CALL engine_matrix.c_normalizeVector3DFixed_FUN_004e9a60 ; 004055fa
        ;   XREF to: 004e9a60 (UNCONDITIONAL_CALL)  ; CVector3i * engine_matrix.c_normalizeVector3DFixed_FUN_004e9a60(CVector3i * input_vector, CVector3i * output_vector)
    LEA ESI,[ESP + 0x10]                ; 004055ff
    ADD ESP,0x4                         ; 00405603
    MOVSD ES:EDI,ESI                    ; 00405606
    MOVSD ES:EDI,ESI                    ; 00405607
    MOVSD ES:EDI,ESI                    ; 00405608
    LEA ESI,[EBX + 0x18]                ; 00405609
    LEA EAX,[EBX + 0x8]                 ; 0040560c
    PUSH EAX                            ; 0040560f
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00405610
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 00405615
    TEST EAX,EAX                        ; 00405618
    JZ 0x00405664                       ; 0040561a
        ;   XREF to: 00405664 (CONDITIONAL_JUMP)  ; LAB_00405664
    CMP dword ptr [0x01c38b40],0x0      ; 0040561c | g_MMXSupported
    JNZ 0x00405683                      ; 00405623
        ;   XREF to: 00405683 (CONDITIONAL_JUMP)  ; LAB_00405683
    CMP dword ptr [0x006141c0],0x20     ; 00405625 | g_INT_006141c0
    JNZ 0x00405677                      ; 0040562c
        ;   XREF to: 00405677 (CONDITIONAL_JUMP)  ; LAB_00405677
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 0040562e | g_ScanlineRenderFunc
    MOV EDI,0x1                         ; 00405638
        ;   Label: LAB_00405638
    MOV EBP,0x2                         ; 0040563d
    PUSH EBX                            ; 00405642
    MOV dword ptr [0x01c38b54],EDI      ; 00405643 | g_RenderStateFlags
    MOV dword ptr [0x01c38b58],EBP      ; 00405649 | g_VertexPreprocessMode
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a20 ; 0040564f
        ;   XREF to: 00403a20 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00403a20(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00405654
    PUSH ESI                            ; 00405657
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405658
    PUSH EAX                            ; 0040565b
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 0040565c
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405661
    MOV ESI,dword ptr [EBX + 0x4]       ; 00405664
        ;   Label: LAB_00405664
    LEA EAX,[EBX + 0x18]                ; 00405667
    SHL ESI,0x2                         ; 0040566a
    ADD EAX,ESI                         ; 0040566d
    ADD ESP,0x18                        ; 0040566f
    POP EBP                             ; 00405672
    POP EDI                             ; 00405673
    POP ESI                             ; 00405674
    POP EBX                             ; 00405675
    RET                                 ; 00405676
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00405677 | g_ScanlineRenderFunc
        ;   Label: LAB_00405677
    JMP 0x00405638                      ; 00405681
        ;   XREF to: 00405638 (UNCONDITIONAL_JUMP)  ; LAB_00405638
    CMP dword ptr [0x006141c0],0x20     ; 00405683 | g_INT_006141c0
        ;   Label: LAB_00405683
    JNZ 0x00405698                      ; 0040568a
        ;   XREF to: 00405698 (CONDITIONAL_JUMP)  ; LAB_00405698
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0040568c | g_ScanlineRenderFunc
    JMP 0x00405638                      ; 00405696
        ;   XREF to: 00405638 (UNCONDITIONAL_JUMP)  ; LAB_00405638
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00405698 | g_ScanlineRenderFunc
        ;   Label: LAB_00405698
    JMP 0x00405638                      ; 004056a2
        ;   XREF to: 00405638 (UNCONDITIONAL_JUMP)  ; LAB_00405638

