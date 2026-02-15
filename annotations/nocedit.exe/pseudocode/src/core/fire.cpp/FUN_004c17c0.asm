; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_FUN_004c17c0(void)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_FUN_004c7e60 at 004c7ea0
;
; Called Functions:
;   core_particle.cpp_CParticle_setup_FUN_00545680
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c17c0
        ;   Label: core_fire.cpp_FUN_004c17c0
    MOV EDX,dword ptr [ESP + 0x10]      ; 004c17c4
    MOV dword ptr [EAX + 0x44],EDX      ; 004c17c8
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c17cb
    PUSH EDX                            ; 004c17cf
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c17d0
    PUSH ECX                            ; 004c17d4
    PUSH EAX                            ; 004c17d5
    CALL core_particle.cpp_CParticle_setup_FUN_00545680 ; 004c17d6
        ;   XREF to: 00545680 (UNCONDITIONAL_CALL)  ; void core_particle.cpp_CParticle_setup_FUN_00545680(CParticle * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 004c17db
    MOV EAX,EAX                         ; 004c17de

