; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00483df0(CDemonRenderer *this_ptr,float render_alpha)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   render_alpha
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[3]:
;   core_batman.cpp_CBatman_renderOpaque_FUN_00413970 at 00413ac8
;   core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_0047cfe0 at 0047d147
;   core_fire.cpp_CTrail_render_FUN_004b3d20 at 004b3d96
;
; Referenced Globals:
;   undefined4 DAT_005db3ec
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_3d.c_setRenderAlpha_FUN_00406bd0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00483df0
        ;   Label: engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00483df0
    FLD float ptr [ESP + 0xc]           ; 00483df3
    FMUL double ptr [0x005db3ec]        ; 00483df7 | DAT_005db3ec
    CALL crt_math.c_round_FUN_005c03a0  ; 00483dfd
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP]               ; 00483e02
    MOV EDX,dword ptr [ESP]             ; 00483e05
    PUSH EDX                            ; 00483e08
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 00483e09
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    ADD ESP,0x4                         ; 00483e0e
    ADD ESP,0x4                         ; 00483e11
    RET                                 ; 00483e14

