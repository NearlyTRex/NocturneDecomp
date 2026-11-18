; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_setActiveRenderColor_FUN_00404410(void)
;
;
; XREF[2]:
;   engine_3d.c_drawLineStrip2D_FUN_00404440 at 00404447
;   engine_3d.c_drawLineStrip3D_FUN_004044d0 at 004044d7
;
; Referenced Globals:
;   int[16] g_ColorLookupTable
;   int g_CurrentPolygonColor
;   int g_INT_01c4f020
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x00713a5c]      ; 00404410 | g_CurrentPolygonColor
        ;   Label: engine_3d.c_setActiveRenderColor_FUN_00404410
    TEST EDX,EDX                        ; 00404416
    JL 0x0040442e                       ; 00404418
        ;   XREF to: 0040442e (CONDITIONAL_JUMP)  ; LAB_0040442e
    MOV ECX,dword ptr [EDX*0x4 + 0x610600] ; 0040441a | g_ColorLookupTable
    MOV dword ptr [0x01c4f020],ECX      ; 00404421 | g_INT_01c4f020
    MOV dword ptr [0x00713a5c],EDX      ; 00404427 | g_CurrentPolygonColor
    RET                                 ; 0040442d
    MOV ECX,EDX                         ; 0040442e
        ;   Label: LAB_0040442e
    NEG ECX                             ; 00404430
    MOV dword ptr [0x01c4f020],ECX      ; 00404432 | g_INT_01c4f020
    MOV dword ptr [0x00713a5c],EDX      ; 00404438 | g_CurrentPolygonColor
    RET                                 ; 0040443e

