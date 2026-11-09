; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_FUN_0053d7a0(int culling_mode)
;
; Parameters:
; int              Stack[0x4]:4   culling_mode
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 at 00483d95
;
; Referenced Globals:
;   undefined4 DAT_00713a7c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0053d7a0
        ;   Label: engine_prim.c_FUN_0053d7a0
    MOV [0x00713a7c],EAX                ; 0053d7a4 | DAT_00713a7c
    RET                                 ; 0053d7a9

