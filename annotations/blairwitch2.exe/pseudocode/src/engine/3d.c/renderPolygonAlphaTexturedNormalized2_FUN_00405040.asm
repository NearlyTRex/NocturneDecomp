; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl engine_3d_c_renderPolygonAlphaTexturedNormalized2_FUN_00405040(SMRGLHeaderPrimitive *prim)
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
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405040
        ;   Label: engine_3d.c_renderPolygonAlphaTexturedNormalized2_FUN_00405040
    PUSH ESI                            ; 00405041
    PUSH EBP                            ; 00405042
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405043
    LEA ESI,[EBX + 0x18]                ; 00405047
    LEA EAX,[EBX + 0x8]                 ; 0040504a
    PUSH EAX                            ; 0040504d
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0040504e
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 00405053
    TEST EAX,EAX                        ; 00405056
    JZ 0x0040509b                       ; 00405058
        ;   XREF to: 0040509b (CONDITIONAL_JUMP)  ; LAB_0040509b
    CMP dword ptr [0x01c38b40],0x0      ; 0040505a | g_MMXSupported
    JNZ 0x004050b6                      ; 00405061
        ;   XREF to: 004050b6 (CONDITIONAL_JUMP)  ; LAB_004050b6
    CMP dword ptr [0x006141c0],0x20     ; 00405063 | g_INT_006141c0
    JNZ 0x004050aa                      ; 0040506a
        ;   XREF to: 004050aa (CONDITIONAL_JUMP)  ; LAB_004050aa
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 0040506c | g_ScanlineRenderFunc
    PUSH EDI                            ; 00405076
        ;   Label: LAB_00405076
    MOV EDI,0x9                         ; 00405077
    PUSH ESI                            ; 0040507c
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040507d
    MOV EBP,0x2                         ; 00405080
    PUSH EAX                            ; 00405085
    MOV dword ptr [0x01c38b54],EDI      ; 00405086 | g_RenderStateFlags
    MOV dword ptr [0x01c38b58],EBP      ; 0040508c | g_VertexPreprocessMode
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00405092
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405097
    POP EDI                             ; 0040509a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040509b
        ;   Label: LAB_0040509b
    ADD EBX,0x18                        ; 0040509e
    SHL EAX,0x2                         ; 004050a1
    ADD EAX,EBX                         ; 004050a4
    POP EBP                             ; 004050a6
    POP ESI                             ; 004050a7
    POP EBX                             ; 004050a8
    RET                                 ; 004050a9
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 004050aa | g_ScanlineRenderFunc
        ;   Label: LAB_004050aa
    JMP 0x00405076                      ; 004050b4
        ;   XREF to: 00405076 (UNCONDITIONAL_JUMP)  ; LAB_00405076
    CMP dword ptr [0x006141c0],0x20     ; 004050b6 | g_INT_006141c0
        ;   Label: LAB_004050b6
    JNZ 0x004050cb                      ; 004050bd
        ;   XREF to: 004050cb (CONDITIONAL_JUMP)  ; LAB_004050cb
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 004050bf | g_ScanlineRenderFunc
    JMP 0x00405076                      ; 004050c9
        ;   XREF to: 00405076 (UNCONDITIONAL_JUMP)  ; LAB_00405076
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 004050cb | g_ScanlineRenderFunc
        ;   Label: LAB_004050cb
    JMP 0x00405076                      ; 004050d5
        ;   XREF to: 00405076 (UNCONDITIONAL_JUMP)  ; LAB_00405076

