; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodParticle_setup_FUN_004c7460(CBloodParticle *this_ptr,CVector3f *position,CVector3f *velocity,EBloodType blood_type)
;
; Parameters:
; CBloodParticle * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   velocity
; EBloodType       Stack[0x10]:4   blood_type
;
; XREF[1]:
;   core_gore.cpp_CGore_spawnBloodParticles_FUN_004c9730 at 004c9777
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;   core_particle.cpp_CParticle_setup_FUN_00510e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c7460
        ;   Label: core_gore.cpp_CBloodParticle_setup_FUN_004c7460
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c7461
    PUSH 0xf                            ; 004c7465
    MOV EAX,dword ptr [ESP + 0x18]      ; 004c7467
    PUSH 0x0                            ; 004c746b
    MOV dword ptr [EBX + 0x40],EAX      ; 004c746d
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 004c7470
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004c7475
    MOV EDX,dword ptr [ESP + 0x10]      ; 004c7478
    PUSH EDX                            ; 004c747c
    MOV ECX,dword ptr [ESP + 0x10]      ; 004c747d
    PUSH ECX                            ; 004c7481
    PUSH EBX                            ; 004c7482
    MOV dword ptr [EBX + 0x44],EAX      ; 004c7483
    CALL core_particle.cpp_CParticle_setup_FUN_00510e00 ; 004c7486
        ;   XREF to: 00510e00 (UNCONDITIONAL_CALL)  ; void core_particle.cpp_CParticle_setup_FUN_00510e00(CParticle * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 004c748b
    POP EBX                             ; 004c748e
    RET                                 ; 004c748f

