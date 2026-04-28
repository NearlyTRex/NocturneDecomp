; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620(SMRGLHeaderPrimitive *primitive,int render_flags,int render_state_flags)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   primitive
; int              Stack[0x8]:4   render_flags
; int              Stack[0xc]:4   render_state_flags
;
; XREF[1]:
;   engine_font.cpp_CBitFont_render3DCharacter_FUN_004ce2d0 at 004ce736
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_CurrentLightingValue
;   int g_AdvancedClippingEnabled
;   MainScanlineFunc* g_ScanlineRenderFunc
;   int g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;   engine_clipper.c_clipPolygonToViewport_FUN_00438420
;   engine_light.cpp_calculateLighting_FUN_00505780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407620
        ;   Label: engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620
    PUSH ESI                            ; 00407621
    PUSH EDI                            ; 00407622
    PUSH EBP                            ; 00407623
    MOV EBX,dword ptr [ESP + 0x14]      ; 00407624
    LEA EAX,[EBX + 0x8]                 ; 00407628
    PUSH EAX                            ; 0040762b
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0040762c
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00407631
    TEST EAX,EAX                        ; 00407634
    JZ 0x004076b1                       ; 00407636
        ;   XREF to: 004076b1 (CONDITIONAL_JUMP)  ; LAB_004076b1
    CMP dword ptr [0x02d05248],0x0      ; 0040763c | g_MMXSupported
    JNZ 0x004076c2                      ; 00407643
        ;   XREF to: 004076c2 (CONDITIONAL_JUMP)  ; LAB_004076c2
    CMP dword ptr [0x0067939c],0x20     ; 00407649 | g_BitsPerPixel
    JNZ 0x004076b6                      ; 00407650
        ;   XREF to: 004076b6 (CONDITIONAL_JUMP)  ; LAB_004076b6
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00407652 | g_ScanlineRenderFunc
    MOV EAX,dword ptr [ESP + 0x18]      ; 0040765c
        ;   Label: LAB_0040765c
    MOV [0x02d052a0],EAX                ; 00407660 | g_RenderStateFlags
    TEST byte ptr [ESP + 0x18],0x10     ; 00407665
    JZ 0x00407685                       ; 0040766a
        ;   XREF to: 00407685 (CONDITIONAL_JUMP)  ; LAB_00407685
    MOV ECX,dword ptr [EBX + 0x10]      ; 0040766c
    PUSH ECX                            ; 0040766f
    MOV ESI,dword ptr [EBX + 0xc]       ; 00407670
    PUSH ESI                            ; 00407673
    MOV EDI,dword ptr [EBX + 0x8]       ; 00407674
    PUSH EDI                            ; 00407677
    CALL engine_light.cpp_calculateLighting_FUN_00505780 ; 00407678
        ;   XREF to: 00505780 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_00505780(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 0040767d
    MOV [0x02d02574],EAX                ; 00407680 | g_CurrentLightingValue
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00407685
        ;   Label: LAB_00407685
    TEST EBP,EBP                        ; 00407689
    JZ 0x004076e6                       ; 0040768b
        ;   XREF to: 004076e6 (CONDITIONAL_JUMP)  ; LAB_004076e6
    MOV dword ptr [0x02d052a4],0x5      ; 0040768d | g_VertexPreprocessMode
    MOV ESI,dword ptr [0x02d02578]      ; 00407697 | g_AdvancedClippingEnabled
        ;   Label: LAB_00407697
    LEA EAX,[EBX + 0x18]                ; 0040769d
    TEST ESI,ESI                        ; 004076a0
    JZ 0x00407701                       ; 004076a2
        ;   XREF to: 00407701 (CONDITIONAL_JUMP)  ; LAB_00407701
    PUSH EAX                            ; 004076a4
    MOV EBP,dword ptr [EBX + 0x4]       ; 004076a5
    PUSH EBP                            ; 004076a8
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 004076a9
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004076ae
    POP EBP                             ; 004076b1
        ;   Label: LAB_004076b1
    POP EDI                             ; 004076b2
    POP ESI                             ; 004076b3
    POP EBX                             ; 004076b4
    RET                                 ; 004076b5
    MOV dword ptr [0x02d0257c],0x5b5322 ; 004076b6 | g_ScanlineRenderFunc
        ;   Label: LAB_004076b6
    JMP 0x0040765c                      ; 004076c0
        ;   XREF to: 0040765c (UNCONDITIONAL_JUMP)  ; LAB_0040765c
    CMP dword ptr [0x0067939c],0x20     ; 004076c2 | g_BitsPerPixel
        ;   Label: LAB_004076c2
    JNZ 0x004076d7                      ; 004076c9
        ;   XREF to: 004076d7 (CONDITIONAL_JUMP)  ; LAB_004076d7
    MOV dword ptr [0x02d0257c],0x5b4031 ; 004076cb | g_ScanlineRenderFunc
    JMP 0x0040765c                      ; 004076d5
        ;   XREF to: 0040765c (UNCONDITIONAL_JUMP)  ; LAB_0040765c
    MOV dword ptr [0x02d0257c],0x5b4823 ; 004076d7 | g_ScanlineRenderFunc
        ;   Label: LAB_004076d7
    JMP 0x0040765c                      ; 004076e1
        ;   XREF to: 0040765c (UNCONDITIONAL_JUMP)  ; LAB_0040765c
    TEST byte ptr [ESP + 0x18],0xc0     ; 004076e6
        ;   Label: LAB_004076e6
    JZ 0x004076f9                       ; 004076eb
        ;   XREF to: 004076f9 (CONDITIONAL_JUMP)  ; LAB_004076f9
    MOV dword ptr [0x02d052a4],0x1      ; 004076ed | g_VertexPreprocessMode
    JMP 0x00407697                      ; 004076f7
        ;   XREF to: 00407697 (UNCONDITIONAL_JUMP)  ; LAB_00407697
    MOV dword ptr [0x02d052a4],EBP      ; 004076f9 | g_VertexPreprocessMode
        ;   Label: LAB_004076f9
    JMP 0x00407697                      ; 004076ff
        ;   XREF to: 00407697 (UNCONDITIONAL_JUMP)  ; LAB_00407697
    PUSH EAX                            ; 00407701
        ;   Label: LAB_00407701
    MOV EDI,dword ptr [EBX + 0x4]       ; 00407702
    PUSH EDI                            ; 00407705
    CALL engine_clipper.c_clipPolygonToViewport_FUN_00438420 ; 00407706
        ;   XREF to: 00438420 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipPolygonToViewport_FUN_00438420(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 0040770b
    POP EBP                             ; 0040770e
    POP EDI                             ; 0040770f
    POP ESI                             ; 00407710
    POP EBX                             ; 00407711
    RET                                 ; 00407712

