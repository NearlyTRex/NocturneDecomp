; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_00483c50(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,CustomScanlineFunc *scanline_renderer)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
; CustomScanlineFunc * Stack[0xc]:4   scanline_renderer
;
; XREF[4]:
;   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0045ea60 at 0045ec0b
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_00463460 at 0046374f
;   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00465060 at 0046570b
;   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_005551f0 at 0055528b
;
; Referenced Globals:
;   undefined4 DAT_007c7554
;   undefined4 DAT_007c7558
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   core_xform.cpp_transformAndClipGeometry_FUN_005b9fc0
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_zraster.c_rasterizePolygonCustom_FUN_005bf640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483c50
        ;   Label: engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00483c50
    PUSH ESI                            ; 00483c51
    PUSH EDI                            ; 00483c52
    PUSH EBP                            ; 00483c53
    MOV EBX,dword ptr [ESP + 0x18]      ; 00483c54
    MOV EAX,dword ptr [ESP + 0x14]      ; 00483c58
    CMP dword ptr [EAX + 0xc],0x0       ; 00483c5c
    JNZ 0x00483c71                      ; 00483c60
        ;   XREF to: 00483c71 (CONDITIONAL_JUMP)  ; LAB_00483c71
    MOV EAX,dword ptr [ESP + 0x14]      ; 00483c62
    CMP dword ptr [EAX + 0x4],0x0       ; 00483c66
    JZ 0x00483c90                       ; 00483c6a
        ;   XREF to: 00483c90 (CONDITIONAL_JUMP)  ; LAB_00483c90
    POP EBP                             ; 00483c6c
        ;   Label: LAB_00483c6c
    POP EDI                             ; 00483c6d
    POP ESI                             ; 00483c6e
    POP EBX                             ; 00483c6f
    RET                                 ; 00483c70
    LEA EAX,[EBX + 0x8]                 ; 00483c71
        ;   Label: LAB_00483c71
    PUSH EAX                            ; 00483c74
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00483c75
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00483c7a
    TEST EAX,EAX                        ; 00483c7d
    JZ 0x00483c6c                       ; 00483c7f
        ;   XREF to: 00483c6c (CONDITIONAL_JUMP)  ; LAB_00483c6c
    MOV EAX,dword ptr [ESP + 0x14]      ; 00483c81
    CMP dword ptr [EAX + 0x4],0x0       ; 00483c85
    JZ 0x00483c90                       ; 00483c89
        ;   XREF to: 00483c90 (CONDITIONAL_JUMP)  ; LAB_00483c90
    POP EBP                             ; 00483c8b
    POP EDI                             ; 00483c8c
    POP ESI                             ; 00483c8d
    POP EBX                             ; 00483c8e
    RET                                 ; 00483c8f
    LEA EAX,[EBX + 0x18]                ; 00483c90
        ;   Label: LAB_00483c90
    MOV ESI,0xc4                        ; 00483c93
    PUSH EAX                            ; 00483c98
    MOV EBP,dword ptr [EBX + 0x4]       ; 00483c99
    MOV EDI,0x6                         ; 00483c9c
    PUSH EBP                            ; 00483ca1
    MOV dword ptr [0x01c51d14],ESI      ; 00483ca2 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EDI      ; 00483ca8 | DAT_01c51d18
    CALL core_xform.cpp_transformAndClipGeometry_FUN_005b9fc0 ; 00483cae
        ;   XREF to: 005b9fc0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_transformAndClipGeometry_FUN_005b9fc0(int vertex_count, int * vertex_indices)
    MOV EAX,[0x007c7554]                ; 00483cb3 | DAT_007c7554
    ADD ESP,0x8                         ; 00483cb8
    CMP EAX,0x2                         ; 00483cbb
    JLE 0x00483c6c                      ; 00483cbe
        ;   XREF to: 00483c6c (CONDITIONAL_JUMP)  ; LAB_00483c6c
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00483cc0
    PUSH EDX                            ; 00483cc4
    PUSH EAX                            ; 00483cc5
    PUSH 0x7c7558                       ; 00483cc6 | DAT_007c7558
    CALL engine_zraster.c_rasterizePolygonCustom_FUN_005bf640 ; 00483ccb
        ;   XREF to: 005bf640 (UNCONDITIONAL_CALL)  ; void engine_zraster.c_rasterizePolygonCustom_FUN_005bf640(SRenderVertex * vertex_buffer, int vertex_count, CustomScanlineFunc * scanline_renderer)
    ADD ESP,0xc                         ; 00483cd0
    POP EBP                             ; 00483cd3
    POP EDI                             ; 00483cd4
    POP ESI                             ; 00483cd5
    POP EBX                             ; 00483cd6
    RET                                 ; 00483cd7

