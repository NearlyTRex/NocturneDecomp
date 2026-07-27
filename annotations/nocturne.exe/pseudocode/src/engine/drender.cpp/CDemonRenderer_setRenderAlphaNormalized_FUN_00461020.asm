; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00461020(undefined4 param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[3]:
;   core_batman.cpp_FUN_00414340 at 00414486
;   core_dracbrid.cpp_FUN_0045a260 at 0045a3b5
;   core_fire.cpp_CTrail_render_FUN_00489360 at 004893d3
;
; Referenced Globals:
;   double DOUBLE_0057dc95 = 65535
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   engine_3d.c_setRenderAlpha_FUN_00408370
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00461020
        ;   Label: engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00461020
    FLD float ptr [ESP + 0xc]           ; 00461023
    FMUL double ptr [0x0057dc95]        ; 00461027 | DOUBLE_0057dc95
    CALL crt_math.c_round_FUN_00563a30  ; 0046102d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP]               ; 00461032
    MOV EDX,dword ptr [ESP]             ; 00461035
    PUSH EDX                            ; 00461038
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 00461039
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_setRenderAlpha_FUN_00408370()
    ADD ESP,0x4                         ; 0046103e
    ADD ESP,0x4                         ; 00461041
    RET                                 ; 00461044

