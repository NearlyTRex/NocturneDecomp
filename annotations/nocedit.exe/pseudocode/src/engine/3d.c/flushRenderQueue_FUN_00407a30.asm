; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_flushRenderQueue_FUN_00407a30(void)
;
;
; Referenced Globals:
;   SRenderVertex[20000] g_RenderVertexBuffer
;   int g_RenderFaceCount
;   SMRGLHeaderPrimitive*[2000] g_RenderFaceArray
;   undefined4 g_RenderFaceArray[1]
;   int g_UseExternalRenderer
;
; Called Functions:
;   engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50
;   wincore_windll.cpp_drawPolyList_FUN_005b7640
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00407a30
        ;   Label: engine_3d.c_flushRenderQueue_FUN_00407a30
    MOV EDX,dword ptr [0x00820070]      ; 00407a31 | g_RenderFaceCount
    TEST EDX,EDX                        ; 00407a37
    JZ 0x00407a76                       ; 00407a39
        ;   XREF to: 00407a76 (CONDITIONAL_JUMP)  ; LAB_00407a76
    PUSH ESI                            ; 00407a3b
    CMP dword ptr [0x02d03e94],0x0      ; 00407a3c | g_UseExternalRenderer
    JNZ 0x00407a78                      ; 00407a43
        ;   XREF to: 00407a78 (CONDITIONAL_JUMP)  ; LAB_00407a78
    XOR ESI,ESI                         ; 00407a45
    TEST EDX,EDX                        ; 00407a47
    JLE 0x00407a6e                      ; 00407a49
        ;   XREF to: 00407a6e (CONDITIONAL_JUMP)  ; LAB_00407a6e
    PUSH EDI                            ; 00407a4b
    PUSH EBX                            ; 00407a4c
    XOR EBX,EBX                         ; 00407a4d
    MOV EDI,dword ptr [EBX + 0x820074]  ; 00407a4f | g_RenderFaceArray | g_RenderFaceArray[1]
        ;   Label: LAB_00407a4f
    PUSH EDI                            ; 00407a55
    ADD EBX,0x4                         ; 00407a56
    INC ESI                             ; 00407a59
    CALL engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50 ; 00407a5a
        ;   XREF to: 00405b50 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50(SMRGLHeaderPrimitive * prim)
    MOV EBP,dword ptr [0x00820070]      ; 00407a5f | g_RenderFaceCount
    ADD ESP,0x4                         ; 00407a65
    CMP ESI,EBP                         ; 00407a68
    JL 0x00407a4f                       ; 00407a6a
        ;   XREF to: 00407a4f (CONDITIONAL_JUMP)  ; LAB_00407a4f
    POP EBX                             ; 00407a6c
    POP EDI                             ; 00407a6d
    XOR EAX,EAX                         ; 00407a6e
        ;   Label: LAB_00407a6e
    MOV [0x00820070],EAX                ; 00407a70 | g_RenderFaceCount
    POP ESI                             ; 00407a75
    POP EBP                             ; 00407a76
        ;   Label: LAB_00407a76
    RET                                 ; 00407a77
    PUSH 0xcd                           ; 00407a78
        ;   Label: LAB_00407a78
    PUSH EDX                            ; 00407a7d
    PUSH 0x820074                       ; 00407a7e | g_RenderFaceArray
    PUSH 0x688014                       ; 00407a83 | g_RenderVertexBuffer
    CALL wincore_windll.cpp_drawPolyList_FUN_005b7640 ; 00407a88
        ;   XREF to: 005b7640 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_drawPolyList_FUN_005b7640(SRenderVertex * vertex_buffer, SMRGLPrimitiveTriangle * * polygons, int polygon_count, int render_flags)
    ADD ESP,0x10                        ; 00407a8d
    XOR EAX,EAX                         ; 00407a90
    MOV [0x00820070],EAX                ; 00407a92 | g_RenderFaceCount
    POP ESI                             ; 00407a97
    POP EBP                             ; 00407a98
    RET                                 ; 00407a99

