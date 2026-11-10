; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSmokeParticle_reset_FUN_00496d50(CSmokeParticle *this_ptr)
;
; Parameters:
; CSmokeParticle * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_FUN_004a1480 at 004a1497
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00496d50
        ;   Label: core_fire.cpp_CSmokeParticle_reset_FUN_00496d50
    MOV dword ptr [EAX],0x0             ; 00496d54
    RET                                 ; 00496d5a

