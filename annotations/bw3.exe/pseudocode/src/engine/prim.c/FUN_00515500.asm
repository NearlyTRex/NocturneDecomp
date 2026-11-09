; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_FUN_00515500(int culling_mode)
;
; Parameters:
; int              Stack[0x4]:4   culling_mode
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 at 0046d475
;
; Referenced Globals:
;   undefined4 DAT_007303fc
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00515500
        ;   Label: engine_prim.c_FUN_00515500
    MOV [0x007303fc],EAX                ; 00515504 | DAT_007303fc
    RET                                 ; 00515509

