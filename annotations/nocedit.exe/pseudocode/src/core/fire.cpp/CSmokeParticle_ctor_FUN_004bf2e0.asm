; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_fire_cpp_CSmokeParticle_ctor_FUN_004bf2e0(CSmokeParticle *this_ptr)
;
; Parameters:
; CSmokeParticle * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_004c6c80 at 004c6c97
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004bf2e0
        ;   Label: core_fire.cpp_CSmokeParticle_ctor_FUN_004bf2e0
    MOV dword ptr [EAX],0x0             ; 004bf2e4
    RET                                 ; 004bf2ea

