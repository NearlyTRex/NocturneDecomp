; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, RenderScanlineFunc * scanline_renderer)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
; RenderScanlineFunc * Stack[0xc]:4   scanline_renderer
;
; XREF[4]:
;   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400 at 0047158d
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0 at 0047395b
;   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0 at 00475f50
;   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770 at 0057080b
;
; Referenced Globals:
;   int g_ClippedVertexCount
;   SRenderVertex[16] g_ClippedVertexBuffer
;   int g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   core_xform.cpp_transformAndClipGeometry_FUN_005f8550
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_3d.c_rasterizePolygon_FUN_005fd4e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c8d0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
    PUSH ESI                            ; 0048c8d1
    PUSH EDI                            ; 0048c8d2
    PUSH EBP                            ; 0048c8d3
    MOV EBX,dword ptr [ESP + 0x18]      ; 0048c8d4
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048c8d8
    CMP dword ptr [EAX + 0xc],0x0       ; 0048c8dc
    JNZ 0x0048c8f1                      ; 0048c8e0 | LAB_0048c8f1
        ;   XREF to: 0048c8f1 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048c8e2
    CMP dword ptr [EAX + 0x4],0x0       ; 0048c8e6
    JZ 0x0048c910                       ; 0048c8ea | LAB_0048c910
        ;   XREF to: 0048c910 (CONDITIONAL_JUMP)
    POP EBP                             ; 0048c8ec
        ;   Label: LAB_0048c8ec
    POP EDI                             ; 0048c8ed
    POP ESI                             ; 0048c8ee
    POP EBX                             ; 0048c8ef
    RET                                 ; 0048c8f0
    LEA EAX,[EBX + 0x8]                 ; 0048c8f1
        ;   Label: LAB_0048c8f1
    PUSH EAX                            ; 0048c8f4
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0048c8f5 | int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0048c8fa
    TEST EAX,EAX                        ; 0048c8fd
    JZ 0x0048c8ec                       ; 0048c8ff | LAB_0048c8ec
        ;   XREF to: 0048c8ec (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048c901
    CMP dword ptr [EAX + 0x4],0x0       ; 0048c905
    JZ 0x0048c910                       ; 0048c909 | LAB_0048c910
        ;   XREF to: 0048c910 (CONDITIONAL_JUMP)
    POP EBP                             ; 0048c90b
    POP EDI                             ; 0048c90c
    POP ESI                             ; 0048c90d
    POP EBX                             ; 0048c90e
    RET                                 ; 0048c90f
    LEA EAX,[EBX + 0x18]                ; 0048c910
        ;   Label: LAB_0048c910
    MOV ESI,0xc4                        ; 0048c913
    PUSH EAX                            ; 0048c918
    MOV EBP,dword ptr [EBX + 0x4]       ; 0048c919
    MOV EDI,0x6                         ; 0048c91c
    PUSH EBP                            ; 0048c921
    MOV dword ptr [0x02d052a0],ESI      ; 0048c922 | int g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EDI      ; 0048c928 | int g_RenderStateFlag2
    CALL core_xform.cpp_transformAndClipGeometry_FUN_005f8550 ; 0048c92e | SRenderVertex * core_xform.cpp_transformAndClipGeometry_FUN_005f8550(int vertex_count, int * vertex_indices)
        ;   XREF to: 005f8550 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00824e24]                ; 0048c933 | int g_ClippedVertexCount
    ADD ESP,0x8                         ; 0048c938
    CMP EAX,0x2                         ; 0048c93b
    JLE 0x0048c8ec                      ; 0048c93e | LAB_0048c8ec
        ;   XREF to: 0048c8ec (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0048c940
    PUSH EDX                            ; 0048c944
    PUSH EAX                            ; 0048c945
    PUSH 0x824e28                       ; 0048c946 | SRenderVertex[16] g_ClippedVertexBuffer
    CALL engine_3d.c_rasterizePolygon_FUN_005fd4e0 ; 0048c94b | void engine_3d.c_rasterizePolygon_FUN_005fd4e0(SRenderVertex * vertex_buffer, int vertex_count, RenderScanlineFunc * scanline_renderer)
        ;   XREF to: 005fd4e0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0048c950
    POP EBP                             ; 0048c953
    POP EDI                             ; 0048c954
    POP ESI                             ; 0048c955
    POP EBX                             ; 0048c956
    RET                                 ; 0048c957

