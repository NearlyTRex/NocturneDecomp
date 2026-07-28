; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSmokeParticle_reset_FUN_00482770(CSmokeParticle *this_ptr)
;
; Parameters:
; CSmokeParticle * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_0048a150 at 0048a167
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00482770
        ;   Label: core_fire.cpp_CSmokeParticle_reset_FUN_00482770
    MOV dword ptr [EAX],0x0             ; 00482774
    RET                                 ; 0048277a

