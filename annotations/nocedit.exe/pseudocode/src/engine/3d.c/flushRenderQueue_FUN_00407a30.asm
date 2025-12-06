; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_3d.c_flushRenderQueue_FUN_00407a30(void)
;
;
; Referenced Globals:
;   SRenderVertex[16] g_RenderVertexBuffer
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
    MOV EDX,dword ptr [0x00820070]      ; 00407a31 | int g_RenderFaceCount
    TEST EDX,EDX                        ; 00407a37
    JZ 0x00407a76                       ; 00407a39 | LAB_00407a76
        ;   XREF to: 00407a76 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 00407a3b
    CMP dword ptr [0x02d03e94],0x0      ; 00407a3c | int g_UseExternalRenderer
    JNZ 0x00407a78                      ; 00407a43 | LAB_00407a78
        ;   XREF to: 00407a78 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 00407a45
    TEST EDX,EDX                        ; 00407a47
    JLE 0x00407a6e                      ; 00407a49 | LAB_00407a6e
        ;   XREF to: 00407a6e (CONDITIONAL_JUMP)
    PUSH EDI                            ; 00407a4b
    PUSH EBX                            ; 00407a4c
    XOR EBX,EBX                         ; 00407a4d
    MOV EDI,dword ptr [EBX + 0x820074]  ; 00407a4f | SMRGLHeaderPrimitive *[2000] g_RenderFaceArray
        ;   Label: LAB_00407a4f
    PUSH EDI                            ; 00407a55
    ADD EBX,0x4                         ; 00407a56
    INC ESI                             ; 00407a59
    CALL engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50 ; 00407a5a | SMRGLHeaderExtended * engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50(SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 00405b50 (UNCONDITIONAL_CALL)
    MOV EBP,dword ptr [0x00820070]      ; 00407a5f | int g_RenderFaceCount
    ADD ESP,0x4                         ; 00407a65
    CMP ESI,EBP                         ; 00407a68
    JL 0x00407a4f                       ; 00407a6a | LAB_00407a4f
        ;   XREF to: 00407a4f (CONDITIONAL_JUMP)
    POP EBX                             ; 00407a6c
    POP EDI                             ; 00407a6d
    XOR EAX,EAX                         ; 00407a6e
        ;   Label: LAB_00407a6e
    MOV [0x00820070],EAX                ; 00407a70 | int g_RenderFaceCount
    POP ESI                             ; 00407a75
    POP EBP                             ; 00407a76
        ;   Label: LAB_00407a76
    RET                                 ; 00407a77
    PUSH 0xcd                           ; 00407a78
        ;   Label: LAB_00407a78
    PUSH EDX                            ; 00407a7d
    PUSH 0x820074                       ; 00407a7e | SMRGLHeaderPrimitive *[2000] g_RenderFaceArray
    PUSH 0x688014                       ; 00407a83 | SRenderVertex[16] g_RenderVertexBuffer
    CALL wincore_windll.cpp_drawPolyList_FUN_005b7640 ; 00407a88 | int wincore_windll.cpp_drawPolyList_FUN_005b7640(void * vertex_buffer, void * * polygons, int polygon_count, int render_flags)
        ;   XREF to: 005b7640 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00407a8d
    XOR EAX,EAX                         ; 00407a90
    MOV [0x00820070],EAX                ; 00407a92 | int g_RenderFaceCount
    POP ESI                             ; 00407a97
    POP EBP                             ; 00407a98
    RET                                 ; 00407a99

