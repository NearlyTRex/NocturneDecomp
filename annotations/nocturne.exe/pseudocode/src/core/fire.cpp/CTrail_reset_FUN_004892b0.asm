; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CTrail_reset_FUN_004892b0(int param_1)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_0048a150 at 0048a317
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004892b0
        ;   Label: core_fire.cpp_CTrail_reset_FUN_004892b0
    MOV dword ptr [EAX + 0x10],0x0      ; 004892b4
    RET                                 ; 004892bb

