; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70 (CDemonRenderer *this_ptr,float render_alpha)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   render_alpha
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[3]:
;   core_batman.cpp_CBatman_renderOpaque_FUN_004173b0 at 004174f5
;   core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_00485be0 at 00485d34
;   core_fire.cpp_CTrail_render_FUN_004c5e90 at 004c5f03
;
; Referenced Globals:
;   double g_RenderAlphaFixedScale = 65535
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_3d.c_setRenderAlpha_FUN_00406d80
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0048ca70
        ;   Label: engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70
    FLD float ptr [ESP + 0xc]           ; 0048ca73
    FMUL double ptr [0x00622085]        ; 0048ca77 | g_RenderAlphaFixedScale
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048ca7d
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP]               ; 0048ca82
    MOV EDX,dword ptr [ESP]             ; 0048ca85
    PUSH EDX                            ; 0048ca88
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 0048ca89
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    ADD ESP,0x4                         ; 0048ca8e
    ADD ESP,0x4                         ; 0048ca91
    RET                                 ; 0048ca94

