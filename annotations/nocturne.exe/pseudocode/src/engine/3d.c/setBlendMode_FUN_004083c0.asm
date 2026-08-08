; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_setBlendMode_FUN_004083c0(int blend_mode)
;
; Parameters:
; int              Stack[0x4]:4   blend_mode
;
; XREF[3]:
;   core_moon.cpp_CMoon_render_FUN_004dec50 at 004defd2
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 at 00461005
;   engine_ncursfx.cpp_CMouse_render_FUN_004ee740 at 004ee833
;
; Referenced Globals:
;   int g_BlendMode
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004083c0
        ;   Label: engine_3d.c_setBlendMode_FUN_004083c0
    MOV [0x01c03998],EAX                ; 004083c4 | g_BlendMode
    RET                                 ; 004083c9

