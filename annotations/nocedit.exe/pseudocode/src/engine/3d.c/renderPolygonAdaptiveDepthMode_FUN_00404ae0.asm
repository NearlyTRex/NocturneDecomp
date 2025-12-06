; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0(SMRGLHeaderPrimitive * polygon_info)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_info
;
; XREF[1]:
;   shape_design.c_renderSinglePolygon_FUN_0045ce20 at 0045d124
;
; Referenced Globals:
;   int INT_0066df80 = 0x1
;   int g_BitsPerPixel = 0x8
;   int g_CurrentPolygonColor
;   int g_TexturesDisabled
;   int g_ActiveRenderColor
;   int g_CurrentLightingValue
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   BOOL g_MMXSupported
;   int g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_3d.c_makeGrayscaleColor_FUN_004039c0
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;   engine_light.cpp_calculateLighting_FUN_00505780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404ae0
        ;   Label: engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0
    PUSH ESI                            ; 00404ae1
    PUSH EDI                            ; 00404ae2
    PUSH EBP                            ; 00404ae3
    MOV ESI,dword ptr [0x02d0257c]      ; 00404ae4 | RenderScanlineFunc * g_ScanlineRenderFunc
    MOV EBX,dword ptr [ESP + 0x14]      ; 00404aea
    LEA EDI,[EBX + 0x18]                ; 00404aee
    LEA EAX,[EBX + 0x8]                 ; 00404af1
    PUSH EAX                            ; 00404af4
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00404af5 | int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00404afa
    TEST EAX,EAX                        ; 00404afd
    JZ 0x00404b78                       ; 00404aff | LAB_00404b78
        ;   XREF to: 00404b78 (CONDITIONAL_JUMP)
    CMP dword ptr [0x00772a74],0x0      ; 00404b01 | int g_TexturesDisabled
    JZ 0x00404baf                       ; 00404b08 | LAB_00404baf
        ;   XREF to: 00404baf (CONDITIONAL_JUMP)
    CMP dword ptr [0x02d05248],0x0      ; 00404b0e | BOOL g_MMXSupported
    JNZ 0x00404b95                      ; 00404b15 | LAB_00404b95
        ;   XREF to: 00404b95 (CONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00404b1b | int g_BitsPerPixel
    JNZ 0x00404b8e                      ; 00404b22 | LAB_00404b8e
        ;   XREF to: 00404b8e (CONDITIONAL_JUMP)
    MOV ESI,0x5b50ec                    ; 00404b24
    XOR EDX,EDX                         ; 00404b29
        ;   Label: LAB_00404b29
    MOV dword ptr [0x02d0257c],ESI      ; 00404b2b | RenderScanlineFunc * g_ScanlineRenderFunc
    MOV dword ptr [0x02d052a4],EDX      ; 00404b31 | int g_RenderStateFlag2
    MOV dword ptr [0x02d052a0],EDX      ; 00404b37 | int g_RenderStateFlags
        ;   Label: LAB_00404b37
    MOV EBP,dword ptr [EBX + 0x10]      ; 00404b3d
    PUSH EBP                            ; 00404b40
    MOV EAX,dword ptr [EBX + 0xc]       ; 00404b41
    PUSH EAX                            ; 00404b44
    MOV EDX,dword ptr [EBX + 0x8]       ; 00404b45
    PUSH EDX                            ; 00404b48
    CALL engine_light.cpp_calculateLighting_FUN_00505780 ; 00404b49 | int engine_light.cpp_calculateLighting_FUN_00505780(int normal_x, int normal_y, int normal_z)
        ;   XREF to: 00505780 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00404b4e
    PUSH EAX                            ; 00404b51
    MOV ECX,dword ptr [0x00772a5c]      ; 00404b52 | int g_CurrentPolygonColor
    PUSH ECX                            ; 00404b58
    MOV [0x02d02574],EAX                ; 00404b59 | int g_CurrentLightingValue
    CALL engine_3d.c_makeGrayscaleColor_FUN_004039c0 ; 00404b5e | uint engine_3d.c_makeGrayscaleColor_FUN_004039c0(int intensity)
        ;   XREF to: 004039c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00404b63
    PUSH EDI                            ; 00404b66
    MOV EDI,dword ptr [EBX + 0x4]       ; 00404b67
    PUSH EDI                            ; 00404b6a
    MOV [0x02d02570],EAX                ; 00404b6b | int g_ActiveRenderColor
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00404b70 | void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00404b75
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404b78
        ;   Label: LAB_00404b78
    ADD EBX,0x18                        ; 00404b7b
    SHL EAX,0x2                         ; 00404b7e
    MOV ESI,dword ptr [0x02d0257c]      ; 00404b81 | RenderScanlineFunc * g_ScanlineRenderFunc
    ADD EAX,EBX                         ; 00404b87
    POP EBP                             ; 00404b89
    POP EDI                             ; 00404b8a
    POP ESI                             ; 00404b8b
    POP EBX                             ; 00404b8c
    RET                                 ; 00404b8d
    MOV ESI,0x5b5322                    ; 00404b8e
        ;   Label: LAB_00404b8e
    JMP 0x00404b29                      ; 00404b93 | LAB_00404b29
        ;   XREF to: 00404b29 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00404b95 | int g_BitsPerPixel
        ;   Label: LAB_00404b95
    JNZ 0x00404ba5                      ; 00404b9c | LAB_00404ba5
        ;   XREF to: 00404ba5 (CONDITIONAL_JUMP)
    MOV ESI,0x5b4031                    ; 00404b9e
    JMP 0x00404b29                      ; 00404ba3 | LAB_00404b29
        ;   XREF to: 00404b29 (UNCONDITIONAL_JUMP)
    MOV ESI,0x5b4823                    ; 00404ba5
        ;   Label: LAB_00404ba5
    JMP 0x00404b29                      ; 00404baa | LAB_00404b29
        ;   XREF to: 00404b29 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0066df80],0x0      ; 00404baf | int INT_0066df80
        ;   Label: LAB_00404baf
    JZ 0x00404c08                       ; 00404bb6 | LAB_00404c08
        ;   XREF to: 00404c08 (CONDITIONAL_JUMP)
    CMP dword ptr [0x02d05248],0x0      ; 00404bb8 | BOOL g_MMXSupported
    JNZ 0x00404bf1                      ; 00404bbf | LAB_00404bf1
        ;   XREF to: 00404bf1 (CONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00404bc1 | int g_BitsPerPixel
    JNZ 0x00404bea                      ; 00404bc8 | LAB_00404bea
        ;   XREF to: 00404bea (CONDITIONAL_JUMP)
    MOV ESI,0x5b50ec                    ; 00404bca
    MOV ECX,0x1                         ; 00404bcf
        ;   Label: LAB_00404bcf
    MOV EDX,0xd0                        ; 00404bd4
    MOV dword ptr [0x02d0257c],ESI      ; 00404bd9 | RenderScanlineFunc * g_ScanlineRenderFunc
    MOV dword ptr [0x02d052a4],ECX      ; 00404bdf | int g_RenderStateFlag2
    JMP 0x00404b37                      ; 00404be5 | LAB_00404b37
        ;   XREF to: 00404b37 (UNCONDITIONAL_JUMP)
    MOV ESI,0x5b5322                    ; 00404bea
        ;   Label: LAB_00404bea
    JMP 0x00404bcf                      ; 00404bef | LAB_00404bcf
        ;   XREF to: 00404bcf (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00404bf1 | int g_BitsPerPixel
        ;   Label: LAB_00404bf1
    JNZ 0x00404c01                      ; 00404bf8 | LAB_00404c01
        ;   XREF to: 00404c01 (CONDITIONAL_JUMP)
    MOV ESI,0x5b4031                    ; 00404bfa
    JMP 0x00404bcf                      ; 00404bff | LAB_00404bcf
        ;   XREF to: 00404bcf (UNCONDITIONAL_JUMP)
    MOV ESI,0x5b4823                    ; 00404c01
        ;   Label: LAB_00404c01
    JMP 0x00404bcf                      ; 00404c06 | LAB_00404bcf
        ;   XREF to: 00404bcf (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x02d05248],0x0      ; 00404c08 | BOOL g_MMXSupported
        ;   Label: LAB_00404c08
    JNZ 0x00404c3e                      ; 00404c0f | LAB_00404c3e
        ;   XREF to: 00404c3e (CONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00404c11 | int g_BitsPerPixel
    JNZ 0x00404c37                      ; 00404c18 | LAB_00404c37
        ;   XREF to: 00404c37 (CONDITIONAL_JUMP)
    MOV ESI,0x5b50ec                    ; 00404c1a
    MOV EDX,0x10                        ; 00404c1f
        ;   Label: LAB_00404c1f
    XOR ECX,ECX                         ; 00404c24
    MOV dword ptr [0x02d0257c],ESI      ; 00404c26 | RenderScanlineFunc * g_ScanlineRenderFunc
    MOV dword ptr [0x02d052a4],ECX      ; 00404c2c | int g_RenderStateFlag2
    JMP 0x00404b37                      ; 00404c32 | LAB_00404b37
        ;   XREF to: 00404b37 (UNCONDITIONAL_JUMP)
    MOV ESI,0x5b5322                    ; 00404c37
        ;   Label: LAB_00404c37
    JMP 0x00404c1f                      ; 00404c3c | LAB_00404c1f
        ;   XREF to: 00404c1f (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00404c3e | int g_BitsPerPixel
        ;   Label: LAB_00404c3e
    JNZ 0x00404c4e                      ; 00404c45 | LAB_00404c4e
        ;   XREF to: 00404c4e (CONDITIONAL_JUMP)
    MOV ESI,0x5b4031                    ; 00404c47
    JMP 0x00404c1f                      ; 00404c4c | LAB_00404c1f
        ;   XREF to: 00404c1f (UNCONDITIONAL_JUMP)
    MOV ESI,0x5b4823                    ; 00404c4e
        ;   Label: LAB_00404c4e
    JMP 0x00404c1f                      ; 00404c53 | LAB_00404c1f
        ;   XREF to: 00404c1f (UNCONDITIONAL_JUMP)

