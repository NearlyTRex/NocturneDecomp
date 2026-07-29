; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,CustomScanlineFunc *scanline_renderer)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
; CustomScanlineFunc * Stack[0xc]:4   scanline_renderer
;
; XREF[4]:
;   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0044ce80 at 0044d00d
;   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00451350 at 004519e9
;   core_dlight.cpp_FUN_0044f0b0 at 0044f364
;   core_set.cpp_FUN_0050ddd0 at 0050de6b
;
; Referenced Globals:
;   undefined4 DAT_00766c70
;   undefined4 DAT_00766c74
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   core_xform.cpp_transformAndClipGeometry_FUN_0055e040
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_3d.c_rasterizePolygonCustom_FUN_00562de0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460e80
        ;   Label: engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80
    PUSH ESI                            ; 00460e81
    PUSH EDI                            ; 00460e82
    PUSH EBP                            ; 00460e83
    MOV EBX,dword ptr [ESP + 0x18]      ; 00460e84
    MOV EAX,dword ptr [ESP + 0x14]      ; 00460e88
    CMP dword ptr [EAX + 0xc],0x0       ; 00460e8c
    JNZ 0x00460ea1                      ; 00460e90
        ;   XREF to: 00460ea1 (CONDITIONAL_JUMP)  ; LAB_00460ea1
    MOV EAX,dword ptr [ESP + 0x14]      ; 00460e92
    CMP dword ptr [EAX + 0x4],0x0       ; 00460e96
    JZ 0x00460ec0                       ; 00460e9a
        ;   XREF to: 00460ec0 (CONDITIONAL_JUMP)  ; LAB_00460ec0
    POP EBP                             ; 00460e9c
        ;   Label: LAB_00460e9c
    POP EDI                             ; 00460e9d
    POP ESI                             ; 00460e9e
    POP EBX                             ; 00460e9f
    RET                                 ; 00460ea0
    LEA EAX,[EBX + 0x8]                 ; 00460ea1
        ;   Label: LAB_00460ea1
    PUSH EAX                            ; 00460ea4
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00460ea5
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 00460eaa
    TEST EAX,EAX                        ; 00460ead
    JZ 0x00460e9c                       ; 00460eaf
        ;   XREF to: 00460e9c (CONDITIONAL_JUMP)  ; LAB_00460e9c
    MOV EAX,dword ptr [ESP + 0x14]      ; 00460eb1
    CMP dword ptr [EAX + 0x4],0x0       ; 00460eb5
    JZ 0x00460ec0                       ; 00460eb9
        ;   XREF to: 00460ec0 (CONDITIONAL_JUMP)  ; LAB_00460ec0
    POP EBP                             ; 00460ebb
    POP EDI                             ; 00460ebc
    POP ESI                             ; 00460ebd
    POP EBX                             ; 00460ebe
    RET                                 ; 00460ebf
    LEA EAX,[EBX + 0x18]                ; 00460ec0
        ;   Label: LAB_00460ec0
    MOV ESI,0xc4                        ; 00460ec3
    PUSH EAX                            ; 00460ec8
    MOV EBP,dword ptr [EBX + 0x4]       ; 00460ec9
    MOV EDI,0x6                         ; 00460ecc
    PUSH EBP                            ; 00460ed1
    MOV dword ptr [0x01c039a0],ESI      ; 00460ed2 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EDI      ; 00460ed8 | DAT_01c039a4
    CALL core_xform.cpp_transformAndClipGeometry_FUN_0055e040 ; 00460ede
        ;   XREF to: 0055e040 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_transformAndClipGeometry_FUN_0055e040(int vertex_count, int * vertex_indices)
    MOV EAX,[0x00766c70]                ; 00460ee3 | DAT_00766c70
    ADD ESP,0x8                         ; 00460ee8
    CMP EAX,0x2                         ; 00460eeb
    JLE 0x00460e9c                      ; 00460eee
        ;   XREF to: 00460e9c (CONDITIONAL_JUMP)  ; LAB_00460e9c
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00460ef0
    PUSH EDX                            ; 00460ef4
    PUSH EAX                            ; 00460ef5
    PUSH 0x766c74                       ; 00460ef6 | DAT_00766c74
    CALL engine_3d.c_rasterizePolygonCustom_FUN_00562de0 ; 00460efb
        ;   XREF to: 00562de0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_rasterizePolygonCustom_FUN_00562de0(SRenderVertex * vertex_buffer, int vertex_count, CustomScanlineFunc * scanline_renderer)
    ADD ESP,0xc                         ; 00460f00
    POP EBP                             ; 00460f03
    POP EDI                             ; 00460f04
    POP ESI                             ; 00460f05
    POP EBX                             ; 00460f06
    RET                                 ; 00460f07

