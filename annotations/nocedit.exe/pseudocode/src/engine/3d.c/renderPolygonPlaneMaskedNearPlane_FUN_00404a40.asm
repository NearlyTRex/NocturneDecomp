; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonPlaneMaskedNearPlane_FUN_00404a40(SMRGLHeaderPrimitive *polygon_info)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_info
;
; XREF[1]:
;   shape_design.c_renderSinglePolygon_FUN_0045ce20 at 0045d0ea
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
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

    PUSH EBX                            ; 00404a40
        ;   Label: engine_3d.c_renderPolygonPlaneMaskedNearPlane_FUN_00404a40
    PUSH ESI                            ; 00404a41
    PUSH EBP                            ; 00404a42
    MOV EBX,dword ptr [ESP + 0x10]      ; 00404a43
    LEA ESI,[EBX + 0x18]                ; 00404a47
    LEA EAX,[EBX + 0x8]                 ; 00404a4a
    PUSH EAX                            ; 00404a4d
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00404a4e
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00404a53
    TEST EAX,EAX                        ; 00404a56
    JZ 0x00404aa4                       ; 00404a58
        ;   XREF to: 00404aa4 (CONDITIONAL_JUMP)  ; LAB_00404aa4
    CMP dword ptr [0x02d05248],0x0      ; 00404a5a | g_MMXSupported
    JNZ 0x00404abf                      ; 00404a61
        ;   XREF to: 00404abf (CONDITIONAL_JUMP)  ; LAB_00404abf
    CMP dword ptr [0x0067939c],0x20     ; 00404a63 | g_BitsPerPixel
    JNZ 0x00404ab3                      ; 00404a6a
        ;   XREF to: 00404ab3 (CONDITIONAL_JUMP)  ; LAB_00404ab3
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00404a6c | g_ScanlineRenderFunc
    PUSH EDI                            ; 00404a76
        ;   Label: LAB_00404a76
    MOV EDI,0xd1                        ; 00404a77
    MOV EBP,0x3                         ; 00404a7c
    PUSH EBX                            ; 00404a81
    MOV dword ptr [0x02d052a0],EDI      ; 00404a82 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 00404a88 | g_RenderStateFlag2
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00 ; 00404a8e
        ;   XREF to: 00403a00 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive * polygon_info)
    ADD ESP,0x4                         ; 00404a93
    PUSH ESI                            ; 00404a96
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404a97
    PUSH EAX                            ; 00404a9a
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00404a9b
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404aa0
    POP EDI                             ; 00404aa3
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404aa4
        ;   Label: LAB_00404aa4
    ADD EBX,0x18                        ; 00404aa7
    SHL EAX,0x2                         ; 00404aaa
    ADD EAX,EBX                         ; 00404aad
    POP EBP                             ; 00404aaf
    POP ESI                             ; 00404ab0
    POP EBX                             ; 00404ab1
    RET                                 ; 00404ab2
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00404ab3 | g_ScanlineRenderFunc
        ;   Label: LAB_00404ab3
    JMP 0x00404a76                      ; 00404abd
        ;   XREF to: 00404a76 (UNCONDITIONAL_JUMP)  ; LAB_00404a76
    CMP dword ptr [0x0067939c],0x20     ; 00404abf | g_BitsPerPixel
        ;   Label: LAB_00404abf
    JNZ 0x00404ad4                      ; 00404ac6
        ;   XREF to: 00404ad4 (CONDITIONAL_JUMP)  ; LAB_00404ad4
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00404ac8 | g_ScanlineRenderFunc
    JMP 0x00404a76                      ; 00404ad2
        ;   XREF to: 00404a76 (UNCONDITIONAL_JUMP)  ; LAB_00404a76
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00404ad4 | g_ScanlineRenderFunc
        ;   Label: LAB_00404ad4
    JMP 0x00404a76                      ; 00404ade
        ;   XREF to: 00404a76 (UNCONDITIONAL_JUMP)  ; LAB_00404a76

