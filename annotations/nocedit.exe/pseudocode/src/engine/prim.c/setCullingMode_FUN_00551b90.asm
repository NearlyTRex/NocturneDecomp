; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_setCullingMode_FUN_00551b90(int culling_mode)
;
; Parameters:
; int              Stack[0x4]:4   culling_mode
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 at 0048ca15
;
; Referenced Globals:
;   int g_CullingMode
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00551b90
        ;   Label: engine_prim.c_setCullingMode_FUN_00551b90
    MOV [0x00772a7c],EAX                ; 00551b94 | g_CullingMode
    RET                                 ; 00551b99

