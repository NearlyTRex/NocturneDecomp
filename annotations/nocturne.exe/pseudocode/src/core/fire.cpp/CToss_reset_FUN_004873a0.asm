; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CToss_reset_FUN_004873a0(int param_1)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_0048a150 at 0048a288
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004873a0
        ;   Label: core_fire.cpp_CToss_reset_FUN_004873a0
    MOV dword ptr [EAX + 0x3dc],0x0     ; 004873a4
    RET                                 ; 004873ae

