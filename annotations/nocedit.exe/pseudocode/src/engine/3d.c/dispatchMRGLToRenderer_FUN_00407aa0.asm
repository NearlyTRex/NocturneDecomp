; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0(SVertexBatch * cmd)
;
; Parameters:
; SVertexBatch *   Stack[0x4]:4   cmd
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
;
; Referenced Globals:
;   TerminatedCString s_engine_3d_c_006134f3
;   TerminatedCString s_renderFaceList_too_many__00613502
;   TerminatedCString s_Unknown_primitive_d_00613522
;   TerminatedCString s_engine_3d_c_00613539
;   uint g_VertexProcessingEnabled = 0x1
;   SRenderVertex[16] g_RenderVertexBuffer
;   int g_RenderFaceCount
;   SMRGLHeaderPrimitive*[2000] g_RenderFaceArray
;   undefined4 g_RenderFaceArray[1]
;   int g_UseExternalRenderer
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_3d.c_dispatchMRGLBlockChain_FUN_00407890
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_3d.c_processVertexLighting_FUN_00403a20
;   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290
;   engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50
;   engine_3d.c_renderPrimitivePlaneMaskedComplex_FUN_004046c0
;   engine_3d.c_transformAndBufferVertices_FUN_00403840
;   engine_model.c_getMRGLSize_FUN_00528700
;   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
;   wincore_windll.cpp_drawPolyList_FUN_005b7640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407aa0
        ;   Label: engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0
    PUSH ESI                            ; 00407aa1
    PUSH EDI                            ; 00407aa2
    PUSH EBP                            ; 00407aa3
    SUB ESP,0x100                       ; 00407aa4
    MOV EDI,dword ptr [ESP + 0x114]     ; 00407aaa
    XOR EDX,EDX                         ; 00407ab1
    MOV AH,byte ptr [EDI]               ; 00407ab3
    MOV dword ptr [0x00820070],EDX      ; 00407ab5 | int g_RenderFaceCount
    TEST AH,AH                          ; 00407abb
    JZ 0x00407b00                       ; 00407abd | LAB_00407b00
        ;   XREF to: 00407b00 (CONDITIONAL_JUMP)
    MOV BL,byte ptr [EDI]               ; 00407abf
        ;   Label: LAB_00407abf
    CMP BL,0x14                         ; 00407ac1
    JNC 0x00407c54                      ; 00407ac4 | LAB_00407c54
        ;   XREF to: 00407c54 (CONDITIONAL_JUMP)
    CMP BL,0x3                          ; 00407aca
    JNC 0x00407c73                      ; 00407acd | LAB_00407c73
        ;   XREF to: 00407c73 (CONDITIONAL_JUMP)
    CMP BL,0x2                          ; 00407ad3
    JNZ 0x00407c82                      ; 00407ad6 | LAB_00407c82
        ;   XREF to: 00407c82 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 00407adc
    CALL engine_3d.c_transformAndBufferVertices_FUN_00403840 ; 00407add | SMRGLHeaderExtended * engine_3d.c_transformAndBufferVertices_FUN_00403840(SVertexBatch * vertex_source, SVertexBatch * processing_params)
        ;   XREF to: 00403840 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [0x006793bc]      ; 00407ae2 | uint g_VertexProcessingEnabled
    ADD ESP,0x4                         ; 00407ae8
    TEST ESI,ESI                        ; 00407aeb
    JNZ 0x00407b4d                      ; 00407aed | LAB_00407b4d
        ;   XREF to: 00407b4d (CONDITIONAL_JUMP)
    PUSH EDI                            ; 00407aef
        ;   Label: LAB_00407aef
    CALL engine_model.c_getMRGLSize_FUN_00528700 ; 00407af0 | int engine_model.c_getMRGLSize_FUN_00528700(SMRGLHeaderExtended * header)
        ;   XREF to: 00528700 (UNCONDITIONAL_CALL)
    ADD EDI,EAX                         ; 00407af5
    MOV DL,byte ptr [EDI]               ; 00407af7
    ADD ESP,0x4                         ; 00407af9
    TEST DL,DL                          ; 00407afc
    JNZ 0x00407abf                      ; 00407afe | LAB_00407abf
        ;   XREF to: 00407abf (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x00820070]      ; 00407b00 | int g_RenderFaceCount
        ;   Label: LAB_00407b00
    TEST ECX,ECX                        ; 00407b06
    JZ 0x00407b38                       ; 00407b08 | LAB_00407b38
        ;   XREF to: 00407b38 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x02d03e94]      ; 00407b0a | int g_UseExternalRenderer
    TEST EBX,EBX                        ; 00407b10
    JZ 0x00407cbf                       ; 00407b12 | LAB_00407cbf
        ;   XREF to: 00407cbf (CONDITIONAL_JUMP)
    PUSH 0xcd                           ; 00407b18
    PUSH ECX                            ; 00407b1d
    PUSH 0x820074                       ; 00407b1e | SMRGLHeaderPrimitive *[2000] g_RenderFaceArray
    PUSH 0x688014                       ; 00407b23 | SRenderVertex[16] g_RenderVertexBuffer
    CALL wincore_windll.cpp_drawPolyList_FUN_005b7640 ; 00407b28 | int wincore_windll.cpp_drawPolyList_FUN_005b7640(void * vertex_buffer, void * * polygons, int polygon_count, int render_flags)
        ;   XREF to: 005b7640 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00407b2d
    XOR EDX,EDX                         ; 00407b30
        ;   Label: LAB_00407b30
    MOV dword ptr [0x00820070],EDX      ; 00407b32 | int g_RenderFaceCount
    MOV dword ptr [0x006793bc],0x1      ; 00407b38 | uint g_VertexProcessingEnabled
        ;   Label: LAB_00407b38
    ADD ESP,0x100                       ; 00407b42
    POP EBP                             ; 00407b48
    POP EDI                             ; 00407b49
    POP ESI                             ; 00407b4a
    POP EBX                             ; 00407b4b
    RET                                 ; 00407b4c
    PUSH EDI                            ; 00407b4d
        ;   Label: LAB_00407b4d
    CALL engine_3d.c_dispatchMRGLBlockChain_FUN_00407890 ; 00407b4e | void engine_3d.c_dispatchMRGLBlockChain_FUN_00407890(SMRGLHeaderExtended * chain)
        ;   XREF to: 00407890 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00407b53
    ADD ESP,0x100                       ; 00407b56
    POP EBP                             ; 00407b5c
    POP EDI                             ; 00407b5d
    POP ESI                             ; 00407b5e
    POP EBX                             ; 00407b5f
    RET                                 ; 00407b60
    PUSH EDI                            ; 00407b61
        ;   Label: LAB_00407b61
    CALL engine_3d.c_processVertexLighting_FUN_00403a20 ; 00407b62 | SMRGLHeaderExtended * engine_3d.c_processVertexLighting_FUN_00403a20(SVertexBatch * vertex_batch)
        ;   XREF to: 00403a20 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00407b67
    JMP 0x00407aef                      ; 00407b6a | LAB_00407aef
        ;   XREF to: 00407aef (UNCONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x00820070]      ; 00407b6c | int g_RenderFaceCount
        ;   Label: LAB_00407b6c
    TEST EBX,EBX                        ; 00407b72
    JZ 0x00407ba1                       ; 00407b74 | LAB_00407ba1
        ;   XREF to: 00407ba1 (CONDITIONAL_JUMP)
    JZ 0x00407ba1                       ; 00407b76 | LAB_00407ba1
        ;   XREF to: 00407ba1 (CONDITIONAL_JUMP)
    CMP dword ptr [0x02d03e94],0x0      ; 00407b78 | int g_UseExternalRenderer
    JZ 0x00407baf                       ; 00407b7f | LAB_00407baf
        ;   XREF to: 00407baf (CONDITIONAL_JUMP)
    PUSH 0xcd                           ; 00407b81
    PUSH EBX                            ; 00407b86
    PUSH 0x820074                       ; 00407b87 | SMRGLHeaderPrimitive *[2000] g_RenderFaceArray
    PUSH 0x688014                       ; 00407b8c | SRenderVertex[16] g_RenderVertexBuffer
    CALL wincore_windll.cpp_drawPolyList_FUN_005b7640 ; 00407b91 | int wincore_windll.cpp_drawPolyList_FUN_005b7640(void * vertex_buffer, void * * polygons, int polygon_count, int render_flags)
        ;   XREF to: 005b7640 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00407b96
    XOR EDX,EDX                         ; 00407b99
        ;   Label: LAB_00407b99
    MOV dword ptr [0x00820070],EDX      ; 00407b9b | int g_RenderFaceCount
    PUSH EDI                            ; 00407ba1
        ;   Label: LAB_00407ba1
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800 ; 00407ba2 | SMRGLHeaderExtended * engine_texture.cpp_ensureTextureLoaded_FUN_005dd800(SMRGLTextureBasic * texture)
        ;   XREF to: 005dd800 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00407ba7
    JMP 0x00407aef                      ; 00407baa | LAB_00407aef
        ;   XREF to: 00407aef (UNCONDITIONAL_JUMP)
    MOV EAX,[0x00820070]                ; 00407baf | int g_RenderFaceCount
        ;   Label: LAB_00407baf
    XOR EBX,EBX                         ; 00407bb4
    TEST EAX,EAX                        ; 00407bb6
    JLE 0x00407b99                      ; 00407bb8 | LAB_00407b99
        ;   XREF to: 00407b99 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 00407bba
    MOV EBP,dword ptr [ESI + 0x820074]  ; 00407bbc | SMRGLHeaderPrimitive *[2000] g_RenderFaceArray
        ;   Label: LAB_00407bbc
    PUSH EBP                            ; 00407bc2
    ADD ESI,0x4                         ; 00407bc3
    INC EBX                             ; 00407bc6
    CALL engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50 ; 00407bc7 | SMRGLHeaderExtended * engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50(SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 00405b50 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00820070]                ; 00407bcc | int g_RenderFaceCount
    ADD ESP,0x4                         ; 00407bd1
    CMP EBX,EAX                         ; 00407bd4
    JL 0x00407bbc                       ; 00407bd6 | LAB_00407bbc
        ;   XREF to: 00407bbc (CONDITIONAL_JUMP)
    JMP 0x00407b99                      ; 00407bd8 | LAB_00407b99
        ;   XREF to: 00407b99 (UNCONDITIONAL_JUMP)
    MOV EBX,EDI                         ; 00407bda
        ;   Label: LAB_00407bda
    LEA EAX,[EDI + 0x8]                 ; 00407bdc
    PUSH EAX                            ; 00407bdf
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00407be0 | int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00407be5
    TEST EAX,EAX                        ; 00407be8
    JZ 0x00407aef                       ; 00407bea | LAB_00407aef
        ;   XREF to: 00407aef (CONDITIONAL_JUMP)
    CMP dword ptr [0x00820070],0x7d0    ; 00407bf0 | int g_RenderFaceCount
    JL 0x00407c1e                       ; 00407bfa | LAB_00407c1e
        ;   XREF to: 00407c1e (CONDITIONAL_JUMP)
    MOV EAX,0x6134f3                    ; 00407bfc | = "..\\engine\\3d.c" | s_engine_3d_c_006134f3 = ..\engine\3d.c
    MOV EDX,0xca7                       ; 00407c01
    PUSH 0x613502                       ; 00407c06 | = "renderFaceList - too many faces" | s_renderFaceList_too_many__00613502 = renderFaceList - too many faces
    MOV [0x02f0ca48],EAX                ; 00407c0b | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00407c10 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00407c16 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00407c1b
    MOV EAX,[0x00820070]                ; 00407c1e | int g_RenderFaceCount
        ;   Label: LAB_00407c1e
    LEA ECX,[EAX + 0x1]                 ; 00407c23
    MOV dword ptr [EAX*0x4 + 0x820074],EBX ; 00407c26 | SMRGLHeaderPrimitive *[2000] g_RenderFaceArray
    MOV dword ptr [0x00820070],ECX      ; 00407c2d | int g_RenderFaceCount
    JMP 0x00407aef                      ; 00407c33 | LAB_00407aef
        ;   XREF to: 00407aef (UNCONDITIONAL_JUMP)
    PUSH EDI                            ; 00407c38
        ;   Label: LAB_00407c38
    CALL engine_3d.c_renderPrimitivePlaneMaskedComplex_FUN_004046c0 ; 00407c39 | SMRGLHeaderExtended * engine_3d.c_renderPrimitivePlaneMaskedComplex_FUN_004046c0(SMRGLHeaderPrimitive * primitive)
        ;   XREF to: 004046c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00407c3e
    JMP 0x00407aef                      ; 00407c41 | LAB_00407aef
        ;   XREF to: 00407aef (UNCONDITIONAL_JUMP)
    PUSH EDI                            ; 00407c46
        ;   Label: LAB_00407c46
    CALL engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290 ; 00407c47 | SMRGLHeaderExtended * engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290(SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 00407290 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00407c4c
    JMP 0x00407aef                      ; 00407c4f | LAB_00407aef
        ;   XREF to: 00407aef (UNCONDITIONAL_JUMP)
    JBE 0x00407aef                      ; 00407c54 | LAB_00407aef
        ;   Label: LAB_00407c54
        ;   XREF to: 00407aef (CONDITIONAL_JUMP)
    CMP BL,0x29                         ; 00407c5a
    JNC 0x00407c66                      ; 00407c5d | LAB_00407c66
        ;   XREF to: 00407c66 (CONDITIONAL_JUMP)
    CMP BL,0x18                         ; 00407c5f
    JZ 0x00407c38                       ; 00407c62 | LAB_00407c38
        ;   XREF to: 00407c38 (CONDITIONAL_JUMP)
    JMP 0x00407c82                      ; 00407c64 | LAB_00407c82
        ;   XREF to: 00407c82 (UNCONDITIONAL_JUMP)
    JBE 0x00407bda                      ; 00407c66 | LAB_00407bda
        ;   Label: LAB_00407c66
        ;   XREF to: 00407bda (CONDITIONAL_JUMP)
    CMP BL,0x41                         ; 00407c6c
    JZ 0x00407c46                       ; 00407c6f | LAB_00407c46
        ;   XREF to: 00407c46 (CONDITIONAL_JUMP)
    JMP 0x00407c82                      ; 00407c71 | LAB_00407c82
        ;   XREF to: 00407c82 (UNCONDITIONAL_JUMP)
    JBE 0x00407b61                      ; 00407c73 | LAB_00407b61
        ;   Label: LAB_00407c73
        ;   XREF to: 00407b61 (CONDITIONAL_JUMP)
    CMP BL,0xd                          ; 00407c79
    JZ 0x00407b6c                       ; 00407c7c | LAB_00407b6c
        ;   XREF to: 00407b6c (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00407c82
        ;   Label: LAB_00407c82
    MOV AL,byte ptr [EDI]               ; 00407c84
    PUSH EAX                            ; 00407c86
    PUSH 0x613522                       ; 00407c87 | = "Unknown primitive : %d" | s_Unknown_primitive_d_00613522 = Unknown primitive : %d
    LEA EAX,[ESP + 0x8]                 ; 00407c8c
    PUSH EAX                            ; 00407c90
    MOV EBX,0xcf1                       ; 00407c91
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00407c96 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00407c9b
    MOV EAX,ESP                         ; 00407c9e
    MOV ECX,0x613539                    ; 00407ca0 | = "..\\engine\\3d.c" | s_engine_3d_c_00613539 = ..\engine\3d.c
    PUSH EAX                            ; 00407ca5
    MOV dword ptr [0x02f0ca4c],EBX      ; 00407ca6 | int g_CurrentLineNumber
    MOV dword ptr [0x02f0ca48],ECX      ; 00407cac | char * g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00407cb2 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00407cb7
    JMP 0x00407aef                      ; 00407cba | LAB_00407aef
        ;   XREF to: 00407aef (UNCONDITIONAL_JUMP)
    XOR EDI,EDI                         ; 00407cbf
        ;   Label: LAB_00407cbf
    TEST ECX,ECX                        ; 00407cc1
    JLE 0x00407b30                      ; 00407cc3 | LAB_00407b30
        ;   XREF to: 00407b30 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [EBX + 0x820074]  ; 00407cc9 | SMRGLHeaderPrimitive *[2000] g_RenderFaceArray
        ;   Label: LAB_00407cc9
    PUSH EBP                            ; 00407ccf
    ADD EBX,0x4                         ; 00407cd0
    INC EDI                             ; 00407cd3
    CALL engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50 ; 00407cd4 | SMRGLHeaderExtended * engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50(SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 00405b50 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00820070]                ; 00407cd9 | int g_RenderFaceCount
    ADD ESP,0x4                         ; 00407cde
    CMP EDI,EAX                         ; 00407ce1
    JL 0x00407cc9                       ; 00407ce3 | LAB_00407cc9
        ;   XREF to: 00407cc9 (CONDITIONAL_JUMP)
    JMP 0x00407b30                      ; 00407ce5 | LAB_00407b30
        ;   XREF to: 00407b30 (UNCONDITIONAL_JUMP)

