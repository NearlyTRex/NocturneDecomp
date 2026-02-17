; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonUVTextureEnable_FUN_00405a00(SMRGLHeaderPrimitive *polygon_info)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_info
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_BypassClipping
;   int g_RenderResult
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   BOOL g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_rasterizePolygon_FUN_004d1340
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00405a00
        ;   Label: engine_3d.c_renderPolygonUVTextureEnable_FUN_00405a00
    PUSH EDI                            ; 00405a01
    PUSH EBP                            ; 00405a02
    MOV EDX,dword ptr [ESP + 0x10]      ; 00405a03
    MOV ECX,dword ptr [0x02d05248]      ; 00405a07 | g_MMXSupported
    LEA EAX,[EDX + 0x18]                ; 00405a0d
    TEST ECX,ECX                        ; 00405a10
    JNZ 0x00405a66                      ; 00405a12
        ;   XREF to: 00405a66 (CONDITIONAL_JUMP)  ; LAB_00405a66
    CMP dword ptr [0x0067939c],0x20     ; 00405a14 | g_BitsPerPixel
    JNZ 0x00405a5a                      ; 00405a1b
        ;   XREF to: 00405a5a (CONDITIONAL_JUMP)  ; LAB_00405a5a
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00405a1d | g_ScanlineRenderFunc
    MOV ESI,0x1                         ; 00405a27
        ;   Label: LAB_00405a27
    XOR EDI,EDI                         ; 00405a2c
    MOV EBP,dword ptr [0x00772a6c]      ; 00405a2e | g_BypassClipping
    MOV dword ptr [0x02d052a4],EDI      ; 00405a34 | g_RenderStateFlag2
    MOV dword ptr [0x02d052a0],ESI      ; 00405a3a | g_RenderStateFlags
    TEST EBP,EBP                        ; 00405a40
    JZ 0x00405a87                       ; 00405a42
        ;   XREF to: 00405a87 (CONDITIONAL_JUMP)  ; LAB_00405a87
    MOV ECX,dword ptr [EDX + 0x4]       ; 00405a44
    PUSH ECX                            ; 00405a47
    PUSH EAX                            ; 00405a48
    CALL engine_3d.c_rasterizePolygon_FUN_004d1340 ; 00405a49
        ;   XREF to: 004d1340 (UNCONDITIONAL_CALL)  ; void engine_3d.c_rasterizePolygon_FUN_004d1340(SRenderVertex * * vertices, int vertex_count)
    ADD ESP,0x8                         ; 00405a4e
    MOV EAX,0x772a84                    ; 00405a51 | g_RenderResult
    POP EBP                             ; 00405a56
    POP EDI                             ; 00405a57
    POP ESI                             ; 00405a58
    RET                                 ; 00405a59
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00405a5a | g_ScanlineRenderFunc
        ;   Label: LAB_00405a5a
    JMP 0x00405a27                      ; 00405a64
        ;   XREF to: 00405a27 (UNCONDITIONAL_JUMP)  ; LAB_00405a27
    CMP dword ptr [0x0067939c],0x20     ; 00405a66 | g_BitsPerPixel
        ;   Label: LAB_00405a66
    JNZ 0x00405a7b                      ; 00405a6d
        ;   XREF to: 00405a7b (CONDITIONAL_JUMP)  ; LAB_00405a7b
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00405a6f | g_ScanlineRenderFunc
    JMP 0x00405a27                      ; 00405a79
        ;   XREF to: 00405a27 (UNCONDITIONAL_JUMP)  ; LAB_00405a27
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00405a7b | g_ScanlineRenderFunc
        ;   Label: LAB_00405a7b
    JMP 0x00405a27                      ; 00405a85
        ;   XREF to: 00405a27 (UNCONDITIONAL_JUMP)  ; LAB_00405a27
    PUSH EAX                            ; 00405a87
        ;   Label: LAB_00405a87
    MOV EAX,dword ptr [EDX + 0x4]       ; 00405a88
    PUSH EAX                            ; 00405a8b
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00405a8c
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405a91
    MOV EAX,0x772a84                    ; 00405a94 | g_RenderResult
    POP EBP                             ; 00405a99
    POP EDI                             ; 00405a9a
    POP ESI                             ; 00405a9b
    RET                                 ; 00405a9c

