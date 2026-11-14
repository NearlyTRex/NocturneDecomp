; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_0046b8f0(CDemonRenderer *this_ptr,float render_alpha)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   render_alpha
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[3]:
;   core_batman.cpp_CBatman_renderOpaque_FUN_00413c70 at 00413dc8
;   core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_00464ac0 at 00464c27
;   core_fire.cpp_CTrail_render_FUN_0049b380 at 0049b3f6
;
; Referenced Globals:
;   undefined4 DAT_005d15f3
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   engine_3d.c_setRenderAlpha_FUN_00406da0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0046b8f0
        ;   Label: engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_0046b8f0
    FLD float ptr [ESP + 0xc]           ; 0046b8f3
    FMUL double ptr [0x005d15f3]        ; 0046b8f7 | DAT_005d15f3
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b8fd
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP]               ; 0046b902
    MOV EDX,dword ptr [ESP]             ; 0046b905
    PUSH EDX                            ; 0046b908
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 0046b909
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    ADD ESP,0x4                         ; 0046b90e
    ADD ESP,0x4                         ; 0046b911
    RET                                 ; 0046b914

