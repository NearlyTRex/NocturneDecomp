; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_FUN_00493500(CSmokeParticle *this_ptr)
;
; Parameters:
; CSmokeParticle * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_0049c190 at 0049c1a7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00493500
        ;   Label: core_fire.cpp_FUN_00493500
    MOV dword ptr [EAX],0x0             ; 00493504
    RET                                 ; 0049350a

