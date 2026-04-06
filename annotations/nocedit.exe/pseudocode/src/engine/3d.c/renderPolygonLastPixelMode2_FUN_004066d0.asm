; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLastPixelMode2_FUN_004066d0(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_CurrentPolygonColor
;   int g_ActiveRenderColor
;   int g_CurrentLightingValue
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   int g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
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

    PUSH EBX                            ; 004066d0
        ;   Label: engine_3d.c_renderPolygonLastPixelMode2_FUN_004066d0
    PUSH ESI                            ; 004066d1
    PUSH EBP                            ; 004066d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004066d3
    LEA ESI,[EBX + 0x18]                ; 004066d7
    LEA EAX,[EBX + 0x8]                 ; 004066da
    PUSH EAX                            ; 004066dd
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 004066de
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 004066e3
    TEST EAX,EAX                        ; 004066e6
    JZ 0x0040675a                       ; 004066e8
        ;   XREF to: 0040675a (CONDITIONAL_JUMP)  ; LAB_0040675a
    CMP dword ptr [0x02d05248],0x0      ; 004066ea | g_MMXSupported
    JNZ 0x00406775                      ; 004066f1
        ;   XREF to: 00406775 (CONDITIONAL_JUMP)  ; LAB_00406775
    CMP dword ptr [0x0067939c],0x20     ; 004066f7 | g_BitsPerPixel
    JNZ 0x00406769                      ; 004066fe
        ;   XREF to: 00406769 (CONDITIONAL_JUMP)  ; LAB_00406769
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00406700 | g_ScanlineRenderFunc
    PUSH EDI                            ; 0040670a
        ;   Label: LAB_0040670a
    MOV EAX,dword ptr [EBX + 0x10]      ; 0040670b
    PUSH EAX                            ; 0040670e
    MOV EDX,dword ptr [EBX + 0xc]       ; 0040670f
    MOV EDI,0x10                        ; 00406712
    PUSH EDX                            ; 00406717
    MOV ECX,dword ptr [EBX + 0x8]       ; 00406718
    XOR EBP,EBP                         ; 0040671b
    PUSH ECX                            ; 0040671d
    MOV dword ptr [0x02d052a0],EDI      ; 0040671e | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 00406724 | g_RenderStateFlag2
    CALL engine_light.cpp_calculateLighting_FUN_00505780 ; 0040672a
        ;   XREF to: 00505780 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_00505780(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 0040672f
    PUSH EAX                            ; 00406732
    MOV EDI,dword ptr [0x00772a5c]      ; 00406733 | g_CurrentPolygonColor
    PUSH EDI                            ; 00406739
    MOV [0x02d02574],EAX                ; 0040673a | g_CurrentLightingValue
    CALL engine_3d.c_makeGrayscaleColor_FUN_004039c0 ; 0040673f
        ;   XREF to: 004039c0 (UNCONDITIONAL_CALL)  ; uint engine_3d.c_makeGrayscaleColor_FUN_004039c0(int color_value, int lighting_value)
    ADD ESP,0x8                         ; 00406744
    PUSH ESI                            ; 00406747
    MOV EBP,dword ptr [EBX + 0x4]       ; 00406748
    PUSH EBP                            ; 0040674b
    MOV [0x02d02570],EAX                ; 0040674c | g_ActiveRenderColor
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00406751
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00406756
    POP EDI                             ; 00406759
    MOV ESI,dword ptr [EBX + 0x4]       ; 0040675a
        ;   Label: LAB_0040675a
    LEA EAX,[EBX + 0x18]                ; 0040675d
    SHL ESI,0x2                         ; 00406760
    ADD EAX,ESI                         ; 00406763
    POP EBP                             ; 00406765
    POP ESI                             ; 00406766
    POP EBX                             ; 00406767
    RET                                 ; 00406768
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00406769 | g_ScanlineRenderFunc
        ;   Label: LAB_00406769
    JMP 0x0040670a                      ; 00406773
        ;   XREF to: 0040670a (UNCONDITIONAL_JUMP)  ; LAB_0040670a
    CMP dword ptr [0x0067939c],0x20     ; 00406775 | g_BitsPerPixel
        ;   Label: LAB_00406775
    JNZ 0x0040678a                      ; 0040677c
        ;   XREF to: 0040678a (CONDITIONAL_JUMP)  ; LAB_0040678a
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0040677e | g_ScanlineRenderFunc
    JMP 0x0040670a                      ; 00406788
        ;   XREF to: 0040670a (UNCONDITIONAL_JUMP)  ; LAB_0040670a
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0040678a | g_ScanlineRenderFunc
        ;   Label: LAB_0040678a
    JMP 0x0040670a                      ; 00406794
        ;   XREF to: 0040670a (UNCONDITIONAL_JUMP)  ; LAB_0040670a

