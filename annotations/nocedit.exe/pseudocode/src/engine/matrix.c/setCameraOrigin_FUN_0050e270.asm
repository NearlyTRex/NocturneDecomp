; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_matrix.c_setCameraOrigin_FUN_0050e270(int x, int y, int z)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   z
;
; XREF[3]:
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150 at 0048c19a
;   engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_0048c130 at 0048c140
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 0045f44d
;
; Referenced Globals:
;   int g_CameraOriginX
;   int g_CameraOriginY
;   int g_CameraOriginZ
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0050e270
        ;   Label: engine_matrix.c_setCameraOrigin_FUN_0050e270
    MOV [0x02d052c4],EAX                ; 0050e274 | g_CameraOriginX
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050e279
    MOV [0x02d052c8],EAX                ; 0050e27d | g_CameraOriginY
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050e282
    MOV [0x02d052cc],EAX                ; 0050e286 | g_CameraOriginZ
    RET                                 ; 0050e28b

