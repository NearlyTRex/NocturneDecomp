; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_setCullingMode_FUN_004f9450(int culling_mode)
;
; Parameters:
; int              Stack[0x4]:4   culling_mode
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 at 00460fc5
;
; Referenced Globals:
;   undefined4 DAT_006b0280
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f9450
        ;   Label: engine_prim.c_setCullingMode_FUN_004f9450
    MOV [0x006b0280],EAX                ; 004f9454 | DAT_006b0280
    RET                                 ; 004f9459

