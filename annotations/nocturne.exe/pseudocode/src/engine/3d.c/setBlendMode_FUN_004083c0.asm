; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_setBlendMode_FUN_004083c0(undefined4 param_1)
;
;
; XREF[2]:
;   core_moon.cpp_CMoon_render_FUN_004dec50 at 004defd2
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 at 00461005
;
; Referenced Globals:
;   undefined4 DAT_01c03998
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004083c0
        ;   Label: engine_3d.c_setBlendMode_FUN_004083c0
    MOV [0x01c03998],EAX                ; 004083c4 | DAT_01c03998
    RET                                 ; 004083c9

