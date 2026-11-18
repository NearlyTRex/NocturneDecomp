; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_setCameraOrigin_FUN_00509000(int x,int y,int z)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   z
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0 at 004834fa
;   engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_00483490 at 004834a0
;
; Referenced Globals:
;   int g_CameraOriginX
;   int g_CameraOriginY
;   int g_CameraOriginZ
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00509000
        ;   Label: engine_matrix.c_setCameraOrigin_FUN_00509000
    MOV [0x01c51d38],EAX                ; 00509004 | g_CameraOriginX
    MOV EAX,dword ptr [ESP + 0x8]       ; 00509009
    MOV [0x01c51d3c],EAX                ; 0050900d | g_CameraOriginY
    MOV EAX,dword ptr [ESP + 0xc]       ; 00509012
    MOV [0x01c51d40],EAX                ; 00509016 | g_CameraOriginZ
    RET                                 ; 0050901b

