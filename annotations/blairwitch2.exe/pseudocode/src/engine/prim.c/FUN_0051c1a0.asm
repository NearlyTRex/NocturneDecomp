; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_FUN_0051c1a0(int culling_mode)
;
; Parameters:
; int              Stack[0x4]:4   culling_mode
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 at 0046b895
;
; Referenced Globals:
;   undefined4 DAT_0070ca7c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0051c1a0
        ;   Label: engine_prim.c_FUN_0051c1a0
    MOV [0x0070ca7c],EAX                ; 0051c1a4 | DAT_0070ca7c
    RET                                 ; 0051c1a9

