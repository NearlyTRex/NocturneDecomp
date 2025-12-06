; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * engine_3d.c_renderPolygonUVVertexLit_FUN_00405aa0(SMRGLHeaderPrimitive * polygon_info)
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
;   int g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_rasterizePolygon_FUN_004d1340
;   engine_3d.c_setRenderAlpha_FUN_00406d80
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405aa0
        ;   Label: engine_3d.c_renderPolygonUVVertexLit_FUN_00405aa0
    PUSH ESI                            ; 00405aa1
    PUSH EDI                            ; 00405aa2
    PUSH EBP                            ; 00405aa3
    MOV ESI,dword ptr [ESP + 0x14]      ; 00405aa4
    MOV EDX,dword ptr [0x02d05248]      ; 00405aa8 | BOOL g_MMXSupported
    LEA EBX,[ESI + 0x18]                ; 00405aae
    TEST EDX,EDX                        ; 00405ab1
    JNZ 0x00405b14                      ; 00405ab3 | LAB_00405b14
        ;   XREF to: 00405b14 (CONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00405ab5 | int g_BitsPerPixel
    JNZ 0x00405b08                      ; 00405abc | LAB_00405b08
        ;   XREF to: 00405b08 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00405abe | RenderScanlineFunc * g_ScanlineRenderFunc
    MOV EDI,0x3                         ; 00405ac8
        ;   Label: LAB_00405ac8
    PUSH 0xffff                         ; 00405acd
    XOR EBP,EBP                         ; 00405ad2
    MOV dword ptr [0x02d052a0],EDI      ; 00405ad4 | int g_RenderStateFlags
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 00405ada | void engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00772a6c]                ; 00405adf | int g_BypassClipping
    ADD ESP,0x4                         ; 00405ae4
    MOV dword ptr [0x02d052a4],EBP      ; 00405ae7 | int g_RenderStateFlag2
    TEST EAX,EAX                        ; 00405aed
    JZ 0x00405b35                       ; 00405aef | LAB_00405b35
        ;   XREF to: 00405b35 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESI + 0x4]       ; 00405af1
    PUSH ECX                            ; 00405af4
    PUSH EBX                            ; 00405af5
    CALL engine_3d.c_rasterizePolygon_FUN_004d1340 ; 00405af6 | void engine_3d.c_rasterizePolygon_FUN_004d1340(SRenderVertex * * vertices, int vertex_count)
        ;   XREF to: 004d1340 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00405afb
    MOV EAX,0x772a84                    ; 00405afe | int g_RenderResult
    POP EBP                             ; 00405b03
    POP EDI                             ; 00405b04
    POP ESI                             ; 00405b05
    POP EBX                             ; 00405b06
    RET                                 ; 00405b07
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00405b08 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00405b08
    JMP 0x00405ac8                      ; 00405b12 | LAB_00405ac8
        ;   XREF to: 00405ac8 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00405b14 | int g_BitsPerPixel
        ;   Label: LAB_00405b14
    JNZ 0x00405b29                      ; 00405b1b | LAB_00405b29
        ;   XREF to: 00405b29 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00405b1d | RenderScanlineFunc * g_ScanlineRenderFunc
    JMP 0x00405ac8                      ; 00405b27 | LAB_00405ac8
        ;   XREF to: 00405ac8 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00405b29 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00405b29
    JMP 0x00405ac8                      ; 00405b33 | LAB_00405ac8
        ;   XREF to: 00405ac8 (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 00405b35
        ;   Label: LAB_00405b35
    MOV EDX,dword ptr [ESI + 0x4]       ; 00405b36
    PUSH EDX                            ; 00405b39
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00405b3a | void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00405b3f
    MOV EAX,0x772a84                    ; 00405b42 | int g_RenderResult
    POP EBP                             ; 00405b47
    POP EDI                             ; 00405b48
    POP ESI                             ; 00405b49
    POP EBX                             ; 00405b4a
    RET                                 ; 00405b4b

