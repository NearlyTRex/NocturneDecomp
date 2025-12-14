; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_3d.c_setBlendMode_FUN_00406dd0(int blend_mode)
;
; Parameters:
; int              Stack[0x4]:4   blend_mode
;
; XREF[4]:
;   core_moon.cpp_CMoon_render_FUN_00529ed0 at 0052a252
;   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_004070c0 at 0040723b
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 at 0048ca55
;   support_newmsg.cpp_FUN_005445c0 at 005446b3
;
; Referenced Globals:
;   int g_BlendMode
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00406dd0
        ;   Label: engine_3d.c_setBlendMode_FUN_00406dd0
    MOV [0x02d05298],EAX                ; 00406dd4 | g_BlendMode
    RET                                 ; 00406dd9

