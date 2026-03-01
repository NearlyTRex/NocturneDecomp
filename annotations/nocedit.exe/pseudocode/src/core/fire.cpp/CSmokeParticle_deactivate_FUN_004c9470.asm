; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSmokeParticle_deactivate_FUN_004c9470(CSmokeParticle *this_ptr)
;
; Parameters:
; CSmokeParticle * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c9470
        ;   Label: core_fire.cpp_CSmokeParticle_deactivate_FUN_004c9470
    MOV dword ptr [EAX],0x0             ; 004c9474
    RET                                 ; 004c947a

