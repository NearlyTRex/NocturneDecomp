; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * engine_3d.c_renderPolygonUVTextureEnable_FUN_00405170(SMRGLHeaderPrimitive * polygon_info)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_info
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   int[24] g_ProcessedVertexIndices
;   undefined4 DAT_00772a9c
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   BOOL g_MMXSupported
;   int g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00403a00
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00405170
        ;   Label: engine_3d.c_renderPolygonUVTextureEnable_FUN_00405170
    PUSH EBP                            ; 00405171
    MOV EBP,dword ptr [ESP + 0xc]       ; 00405172
    LEA ESI,[EBP + 0x18]                ; 00405176
    LEA EAX,[EBP + 0x8]                 ; 00405179
    PUSH EAX                            ; 0040517c
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0040517d | int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00405182
    TEST EAX,EAX                        ; 00405185
    JZ 0x00405249                       ; 00405187 | LAB_00405249
        ;   XREF to: 00405249 (CONDITIONAL_JUMP)
    CMP dword ptr [0x02d05248],0x0      ; 0040518d | BOOL g_MMXSupported
    JNZ 0x00405215                      ; 00405194 | LAB_00405215
        ;   XREF to: 00405215 (CONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 0040519a | int g_BitsPerPixel
    JNZ 0x00405209                      ; 004051a1 | LAB_00405209
        ;   XREF to: 00405209 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b50ec ; 004051a3 | RenderScanlineFunc * g_ScanlineRenderFunc
    PUSH EDI                            ; 004051ad
        ;   Label: LAB_004051ad
    PUSH EBX                            ; 004051ae
    MOV EBX,0x1                         ; 004051af
    PUSH EBP                            ; 004051b4
    XOR EDI,EDI                         ; 004051b5
    MOV dword ptr [0x02d052a0],EBX      ; 004051b7 | int g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EDI      ; 004051bd | int g_RenderStateFlag2
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00 ; 004051c3 | void engine_3d.c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 00403a00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004051c8
    MOV EAX,ESI                         ; 004051cb
    XOR EBX,EBX                         ; 004051cd
    XOR EDX,EDX                         ; 004051cf
    XOR ECX,ECX                         ; 004051d1
    MOV ESI,dword ptr [EBP + 0x4]       ; 004051d3
        ;   Label: LAB_004051d3
    LEA ESI,[ESI + ESI*0x2]             ; 004051d6
    CMP EDX,ESI                         ; 004051d9
    JGE 0x00405239                      ; 004051db | LAB_00405239
        ;   XREF to: 00405239 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EAX]             ; 004051dd
    MOV dword ptr [ECX + 0x772a98],ESI  ; 004051df | int[24] g_ProcessedVertexIndices
    IMUL EDI,ESI,0x30                   ; 004051e5
    MOV ESI,dword ptr [EAX + 0x4]       ; 004051e8
    MOV dword ptr [EDI + 0x68802c],ESI  ; 004051eb | g_RenderVertexBuffer[0].u
    IMUL EDI,dword ptr [EAX],0x30       ; 004051f1
    ADD EAX,0xc                         ; 004051f4
    ADD ECX,0x4                         ; 004051f7
    INC EBX                             ; 004051fa
    MOV ESI,dword ptr [EAX + -0x4]      ; 004051fb
    ADD EDX,0x3                         ; 004051fe
    MOV dword ptr [EDI + 0x688030],ESI  ; 00405201 | g_RenderVertexBuffer[0].v
    JMP 0x004051d3                      ; 00405207 | LAB_004051d3
        ;   XREF to: 004051d3 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00405209 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00405209
    JMP 0x004051ad                      ; 00405213 | LAB_004051ad
        ;   XREF to: 004051ad (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00405215 | int g_BitsPerPixel
        ;   Label: LAB_00405215
    JNZ 0x0040522a                      ; 0040521c | LAB_0040522a
        ;   XREF to: 0040522a (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0040521e | RenderScanlineFunc * g_ScanlineRenderFunc
    JMP 0x004051ad                      ; 00405228 | LAB_004051ad
        ;   XREF to: 004051ad (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0040522a | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_0040522a
    JMP 0x004051ad                      ; 00405234 | LAB_004051ad
        ;   XREF to: 004051ad (UNCONDITIONAL_JUMP)
    PUSH 0x772a98                       ; 00405239 | int[24] g_ProcessedVertexIndices
        ;   Label: LAB_00405239
    PUSH EBX                            ; 0040523e
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 0040523f | void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00405244
    POP EBX                             ; 00405247
    POP EDI                             ; 00405248
    MOV EDX,dword ptr [EBP + 0x4]       ; 00405249
        ;   Label: LAB_00405249
    LEA EAX,[EDX*0x4 + 0x0]             ; 0040524c
    SUB EAX,EDX                         ; 00405253
    LEA EDX,[EAX*0x4 + 0x0]             ; 00405255
    LEA EAX,[EBP + 0x18]                ; 0040525c
    ADD EAX,EDX                         ; 0040525f
    POP EBP                             ; 00405261
    POP ESI                             ; 00405262
    RET                                 ; 00405263

