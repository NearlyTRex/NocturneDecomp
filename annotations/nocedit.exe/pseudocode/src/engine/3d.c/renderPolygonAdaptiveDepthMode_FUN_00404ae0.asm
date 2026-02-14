; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptiveDepthMode_FUN_00404ae0(SMRGLHeaderPrimitive *polygon_info)
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
;   _BIT_INTEGER g_RenderStateFlags
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
    MOV ESI,dword ptr [0x02d0257c]      ; 00404ae4 | g_ScanlineRenderFunc
    MOV EBX,dword ptr [ESP + 0x14]      ; 00404aea
    LEA EDI,[EBX + 0x18]                ; 00404aee
    LEA EAX,[EBX + 0x8]                 ; 00404af1
    PUSH EAX                            ; 00404af4
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00404af5
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00404afa
    TEST EAX,EAX                        ; 00404afd
    JZ 0x00404b78                       ; 00404aff
        ;   XREF to: 00404b78 (CONDITIONAL_JUMP)  ; LAB_00404b78
    CMP dword ptr [0x00772a74],0x0      ; 00404b01 | g_TexturesDisabled
    JZ 0x00404baf                       ; 00404b08
        ;   XREF to: 00404baf (CONDITIONAL_JUMP)  ; LAB_00404baf
    CMP dword ptr [0x02d05248],0x0      ; 00404b0e | g_MMXSupported
    JNZ 0x00404b95                      ; 00404b15
        ;   XREF to: 00404b95 (CONDITIONAL_JUMP)  ; LAB_00404b95
    CMP dword ptr [0x0067939c],0x20     ; 00404b1b | g_BitsPerPixel
    JNZ 0x00404b8e                      ; 00404b22
        ;   XREF to: 00404b8e (CONDITIONAL_JUMP)  ; LAB_00404b8e
    MOV ESI,0x5b50ec                    ; 00404b24
    XOR EDX,EDX                         ; 00404b29
        ;   Label: LAB_00404b29
    MOV dword ptr [0x02d0257c],ESI      ; 00404b2b | g_ScanlineRenderFunc
    MOV dword ptr [0x02d052a4],EDX      ; 00404b31 | g_RenderStateFlag2
    MOV dword ptr [0x02d052a0],EDX      ; 00404b37 | g_RenderStateFlags
        ;   Label: LAB_00404b37
    MOV EBP,dword ptr [EBX + 0x10]      ; 00404b3d
    PUSH EBP                            ; 00404b40
    MOV EAX,dword ptr [EBX + 0xc]       ; 00404b41
    PUSH EAX                            ; 00404b44
    MOV EDX,dword ptr [EBX + 0x8]       ; 00404b45
    PUSH EDX                            ; 00404b48
    CALL engine_light.cpp_calculateLighting_FUN_00505780 ; 00404b49
        ;   XREF to: 00505780 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_00505780(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 00404b4e
    PUSH EAX                            ; 00404b51
    MOV ECX,dword ptr [0x00772a5c]      ; 00404b52 | g_CurrentPolygonColor
    PUSH ECX                            ; 00404b58
    MOV [0x02d02574],EAX                ; 00404b59 | g_CurrentLightingValue
    CALL engine_3d.c_makeGrayscaleColor_FUN_004039c0 ; 00404b5e
        ;   XREF to: 004039c0 (UNCONDITIONAL_CALL)  ; uint engine_3d.c_makeGrayscaleColor_FUN_004039c0(int intensity)
    ADD ESP,0x8                         ; 00404b63
    PUSH EDI                            ; 00404b66
    MOV EDI,dword ptr [EBX + 0x4]       ; 00404b67
    PUSH EDI                            ; 00404b6a
    MOV [0x02d02570],EAX                ; 00404b6b | g_ActiveRenderColor
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00404b70
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404b75
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404b78
        ;   Label: LAB_00404b78
    ADD EBX,0x18                        ; 00404b7b
    SHL EAX,0x2                         ; 00404b7e
    MOV ESI,dword ptr [0x02d0257c]      ; 00404b81 | g_ScanlineRenderFunc
    ADD EAX,EBX                         ; 00404b87
    POP EBP                             ; 00404b89
    POP EDI                             ; 00404b8a
    POP ESI                             ; 00404b8b
    POP EBX                             ; 00404b8c
    RET                                 ; 00404b8d
    MOV ESI,0x5b5322                    ; 00404b8e
        ;   Label: LAB_00404b8e
    JMP 0x00404b29                      ; 00404b93
        ;   XREF to: 00404b29 (UNCONDITIONAL_JUMP)  ; LAB_00404b29
    CMP dword ptr [0x0067939c],0x20     ; 00404b95 | g_BitsPerPixel
        ;   Label: LAB_00404b95
    JNZ 0x00404ba5                      ; 00404b9c
        ;   XREF to: 00404ba5 (CONDITIONAL_JUMP)  ; LAB_00404ba5
    MOV ESI,0x5b4031                    ; 00404b9e
    JMP 0x00404b29                      ; 00404ba3
        ;   XREF to: 00404b29 (UNCONDITIONAL_JUMP)  ; LAB_00404b29
    MOV ESI,0x5b4823                    ; 00404ba5
        ;   Label: LAB_00404ba5
    JMP 0x00404b29                      ; 00404baa
        ;   XREF to: 00404b29 (UNCONDITIONAL_JUMP)  ; LAB_00404b29
    CMP dword ptr [0x0066df80],0x0      ; 00404baf | INT_0066df80
        ;   Label: LAB_00404baf
    JZ 0x00404c08                       ; 00404bb6
        ;   XREF to: 00404c08 (CONDITIONAL_JUMP)  ; LAB_00404c08
    CMP dword ptr [0x02d05248],0x0      ; 00404bb8 | g_MMXSupported
    JNZ 0x00404bf1                      ; 00404bbf
        ;   XREF to: 00404bf1 (CONDITIONAL_JUMP)  ; LAB_00404bf1
    CMP dword ptr [0x0067939c],0x20     ; 00404bc1 | g_BitsPerPixel
    JNZ 0x00404bea                      ; 00404bc8
        ;   XREF to: 00404bea (CONDITIONAL_JUMP)  ; LAB_00404bea
    MOV ESI,0x5b50ec                    ; 00404bca
    MOV ECX,0x1                         ; 00404bcf
        ;   Label: LAB_00404bcf
    MOV EDX,0xd0                        ; 00404bd4
    MOV dword ptr [0x02d0257c],ESI      ; 00404bd9 | g_ScanlineRenderFunc
    MOV dword ptr [0x02d052a4],ECX      ; 00404bdf | g_RenderStateFlag2
    JMP 0x00404b37                      ; 00404be5
        ;   XREF to: 00404b37 (UNCONDITIONAL_JUMP)  ; LAB_00404b37
    MOV ESI,0x5b5322                    ; 00404bea
        ;   Label: LAB_00404bea
    JMP 0x00404bcf                      ; 00404bef
        ;   XREF to: 00404bcf (UNCONDITIONAL_JUMP)  ; LAB_00404bcf
    CMP dword ptr [0x0067939c],0x20     ; 00404bf1 | g_BitsPerPixel
        ;   Label: LAB_00404bf1
    JNZ 0x00404c01                      ; 00404bf8
        ;   XREF to: 00404c01 (CONDITIONAL_JUMP)  ; LAB_00404c01
    MOV ESI,0x5b4031                    ; 00404bfa
    JMP 0x00404bcf                      ; 00404bff
        ;   XREF to: 00404bcf (UNCONDITIONAL_JUMP)  ; LAB_00404bcf
    MOV ESI,0x5b4823                    ; 00404c01
        ;   Label: LAB_00404c01
    JMP 0x00404bcf                      ; 00404c06
        ;   XREF to: 00404bcf (UNCONDITIONAL_JUMP)  ; LAB_00404bcf
    CMP dword ptr [0x02d05248],0x0      ; 00404c08 | g_MMXSupported
        ;   Label: LAB_00404c08
    JNZ 0x00404c3e                      ; 00404c0f
        ;   XREF to: 00404c3e (CONDITIONAL_JUMP)  ; LAB_00404c3e
    CMP dword ptr [0x0067939c],0x20     ; 00404c11 | g_BitsPerPixel
    JNZ 0x00404c37                      ; 00404c18
        ;   XREF to: 00404c37 (CONDITIONAL_JUMP)  ; LAB_00404c37
    MOV ESI,0x5b50ec                    ; 00404c1a
    MOV EDX,0x10                        ; 00404c1f
        ;   Label: LAB_00404c1f
    XOR ECX,ECX                         ; 00404c24
    MOV dword ptr [0x02d0257c],ESI      ; 00404c26 | g_ScanlineRenderFunc
    MOV dword ptr [0x02d052a4],ECX      ; 00404c2c | g_RenderStateFlag2
    JMP 0x00404b37                      ; 00404c32
        ;   XREF to: 00404b37 (UNCONDITIONAL_JUMP)  ; LAB_00404b37
    MOV ESI,0x5b5322                    ; 00404c37
        ;   Label: LAB_00404c37
    JMP 0x00404c1f                      ; 00404c3c
        ;   XREF to: 00404c1f (UNCONDITIONAL_JUMP)  ; LAB_00404c1f
    CMP dword ptr [0x0067939c],0x20     ; 00404c3e | g_BitsPerPixel
        ;   Label: LAB_00404c3e
    JNZ 0x00404c4e                      ; 00404c45
        ;   XREF to: 00404c4e (CONDITIONAL_JUMP)  ; LAB_00404c4e
    MOV ESI,0x5b4031                    ; 00404c47
    JMP 0x00404c1f                      ; 00404c4c
        ;   XREF to: 00404c1f (UNCONDITIONAL_JUMP)  ; LAB_00404c1f
    MOV ESI,0x5b4823                    ; 00404c4e
        ;   Label: LAB_00404c4e
    JMP 0x00404c1f                      ; 00404c53
        ;   XREF to: 00404c1f (UNCONDITIONAL_JUMP)  ; LAB_00404c1f

