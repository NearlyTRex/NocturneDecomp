; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * engine_3d.c_renderPolygonEnginePlaneMaskedAdvanced_FUN_004057b0(SMRGLHeaderPrimitive * polygon_info)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_info
;
; XREF[1]:
;   engine_3d.c_renderPolygonSpecialEffectsAdvanced_FUN_00406f20 at 0040704f
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_AdvancedClippingEnabled
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   BOOL g_MMXSupported
;   int g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;   engine_clipper.c_clipPolygonToViewport_FUN_00438420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004057b0
        ;   Label: engine_3d.c_renderPolygonEnginePlaneMaskedAdvanced_FUN_004057b0
    PUSH ESI                            ; 004057b1
    PUSH EBP                            ; 004057b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004057b3
    LEA ESI,[EBX + 0x18]                ; 004057b7
    LEA EAX,[EBX + 0x8]                 ; 004057ba
    PUSH EAX                            ; 004057bd
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 004057be | int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004057c3
    TEST EAX,EAX                        ; 004057c6
    JZ 0x00405815                       ; 004057c8 | LAB_00405815
        ;   XREF to: 00405815 (CONDITIONAL_JUMP)
    CMP dword ptr [0x02d02578],0x0      ; 004057ca | int g_AdvancedClippingEnabled
    JZ 0x00405851                       ; 004057d1 | LAB_00405851
        ;   XREF to: 00405851 (CONDITIONAL_JUMP)
    CMP dword ptr [0x02d05248],0x0      ; 004057d7 | BOOL g_MMXSupported
    JNZ 0x00405830                      ; 004057de | LAB_00405830
        ;   XREF to: 00405830 (CONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 004057e0 | int g_BitsPerPixel
    JNZ 0x00405824                      ; 004057e7 | LAB_00405824
        ;   XREF to: 00405824 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b50ec ; 004057e9 | RenderScanlineFunc * g_ScanlineRenderFunc
    MOV EBP,0xd                         ; 004057f3
        ;   Label: LAB_004057f3
    PUSH ESI                            ; 004057f8
    MOV EDX,dword ptr [EBX + 0x4]       ; 004057f9
    MOV EAX,0x5                         ; 004057fc
    PUSH EDX                            ; 00405801
    MOV dword ptr [0x02d052a0],EBP      ; 00405802 | int g_RenderStateFlags
    MOV [0x02d052a4],EAX                ; 00405808 | int g_RenderStateFlag2
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 0040580d | void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00405812
    MOV ESI,dword ptr [EBX + 0x4]       ; 00405815
        ;   Label: LAB_00405815
    LEA EAX,[EBX + 0x18]                ; 00405818
    SHL ESI,0x2                         ; 0040581b
    ADD EAX,ESI                         ; 0040581e
    POP EBP                             ; 00405820
    POP ESI                             ; 00405821
    POP EBX                             ; 00405822
    RET                                 ; 00405823
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00405824 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00405824
    JMP 0x004057f3                      ; 0040582e | LAB_004057f3
        ;   XREF to: 004057f3 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00405830 | int g_BitsPerPixel
        ;   Label: LAB_00405830
    JNZ 0x00405845                      ; 00405837 | LAB_00405845
        ;   XREF to: 00405845 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00405839 | RenderScanlineFunc * g_ScanlineRenderFunc
    JMP 0x004057f3                      ; 00405843 | LAB_004057f3
        ;   XREF to: 004057f3 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00405845 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00405845
    JMP 0x004057f3                      ; 0040584f | LAB_004057f3
        ;   XREF to: 004057f3 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x02d05248],0x0      ; 00405851 | BOOL g_MMXSupported
        ;   Label: LAB_00405851
    JNZ 0x004058aa                      ; 00405858 | LAB_004058aa
        ;   XREF to: 004058aa (CONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 0040585a | int g_BitsPerPixel
    JNZ 0x0040589e                      ; 00405861 | LAB_0040589e
        ;   XREF to: 0040589e (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00405863 | RenderScanlineFunc * g_ScanlineRenderFunc
    MOV EBP,0x20d                       ; 0040586d
        ;   Label: LAB_0040586d
    PUSH ESI                            ; 00405872
    MOV EDX,dword ptr [EBX + 0x4]       ; 00405873
    MOV EAX,0x5                         ; 00405876
    PUSH EDX                            ; 0040587b
    MOV dword ptr [0x02d052a0],EBP      ; 0040587c | int g_RenderStateFlags
    MOV [0x02d052a4],EAX                ; 00405882 | int g_RenderStateFlag2
    CALL engine_clipper.c_clipPolygonToViewport_FUN_00438420 ; 00405887 | void engine_clipper.c_clipPolygonToViewport_FUN_00438420(int vertex_count, int * vertex_indices)
        ;   XREF to: 00438420 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040588c
    MOV ESI,dword ptr [EBX + 0x4]       ; 0040588f
    LEA EAX,[EBX + 0x18]                ; 00405892
    SHL ESI,0x2                         ; 00405895
    ADD EAX,ESI                         ; 00405898
    POP EBP                             ; 0040589a
    POP ESI                             ; 0040589b
    POP EBX                             ; 0040589c
    RET                                 ; 0040589d
    MOV dword ptr [0x02d0257c],0x5b5322 ; 0040589e | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_0040589e
    JMP 0x0040586d                      ; 004058a8 | LAB_0040586d
        ;   XREF to: 0040586d (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 004058aa | int g_BitsPerPixel
        ;   Label: LAB_004058aa
    JNZ 0x004058bf                      ; 004058b1 | LAB_004058bf
        ;   XREF to: 004058bf (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4031 ; 004058b3 | RenderScanlineFunc * g_ScanlineRenderFunc
    JMP 0x0040586d                      ; 004058bd | LAB_0040586d
        ;   XREF to: 0040586d (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4823 ; 004058bf | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_004058bf
    JMP 0x0040586d                      ; 004058c9 | LAB_0040586d
        ;   XREF to: 0040586d (UNCONDITIONAL_JUMP)

