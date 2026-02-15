; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_setActiveRenderColor_FUN_00404540(void)
;
;
; XREF[3]:
;   engine_3d.c_drawLineStrip2D_FUN_00404570 at 00404577
;   engine_3d.c_drawLineStrip3D_FUN_00404600 at 00404607
;   shape_design.c_renderPolygonWireframe_FUN_0045d300 at 0045d32c
;
; Referenced Globals:
;   int[16] g_ColorLookupTable
;   int g_CurrentPolygonColor
;   int g_ActiveRenderColor
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x00772a5c]      ; 00404540 | g_CurrentPolygonColor
        ;   Label: engine_3d.c_setActiveRenderColor_FUN_00404540
    TEST EDX,EDX                        ; 00404546
    JL 0x0040455e                       ; 00404548
        ;   XREF to: 0040455e (CONDITIONAL_JUMP)  ; LAB_0040455e
    MOV ECX,dword ptr [EDX*0x4 + 0x66e094] ; 0040454a | g_ColorLookupTable
    MOV dword ptr [0x02d02570],ECX      ; 00404551 | g_ActiveRenderColor
    MOV dword ptr [0x00772a5c],EDX      ; 00404557 | g_CurrentPolygonColor
    RET                                 ; 0040455d
    MOV ECX,EDX                         ; 0040455e
        ;   Label: LAB_0040455e
    NEG ECX                             ; 00404560
    MOV dword ptr [0x02d02570],ECX      ; 00404562 | g_ActiveRenderColor
    MOV dword ptr [0x00772a5c],EDX      ; 00404568 | g_CurrentPolygonColor
    RET                                 ; 0040456e

