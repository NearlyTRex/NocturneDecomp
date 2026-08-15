; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSmokeParticle_deactivate_FUN_0048c940(CSmokeParticle *this_ptr)
;
; Parameters:
; CSmokeParticle * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0048c940
        ;   Label: core_fire.cpp_CSmokeParticle_deactivate_FUN_0048c940
    MOV dword ptr [EAX],0x0             ; 0048c944
    RET                                 ; 0048c94a

