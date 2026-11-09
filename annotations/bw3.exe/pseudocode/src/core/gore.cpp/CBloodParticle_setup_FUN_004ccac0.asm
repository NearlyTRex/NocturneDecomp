; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodParticle_setup_FUN_004ccac0(CBloodParticle *this_ptr,CVector3f *position,CVector3f *velocity,EBloodType blood_type)
;
; Parameters:
; CBloodParticle * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   velocity
; EBloodType       Stack[0x10]:4   blood_type
;
; XREF[1]:
;   core_gore.cpp_CGore_spawnBloodParticles_FUN_004ce8a0 at 004ce8e7
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_particle.cpp_CParticle_setup_FUN_00509e40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ccac0
        ;   Label: core_gore.cpp_CBloodParticle_setup_FUN_004ccac0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ccac1
    PUSH 0xf                            ; 004ccac5
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ccac7
    PUSH 0x0                            ; 004ccacb
    MOV dword ptr [EBX + 0x40],EAX      ; 004ccacd
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 004ccad0
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004ccad5
    MOV EDX,dword ptr [ESP + 0x10]      ; 004ccad8
    PUSH EDX                            ; 004ccadc
    MOV ECX,dword ptr [ESP + 0x10]      ; 004ccadd
    PUSH ECX                            ; 004ccae1
    PUSH EBX                            ; 004ccae2
    MOV dword ptr [EBX + 0x44],EAX      ; 004ccae3
    CALL core_particle.cpp_CParticle_setup_FUN_00509e40 ; 004ccae6
        ;   XREF to: 00509e40 (UNCONDITIONAL_CALL)  ; void core_particle.cpp_CParticle_setup_FUN_00509e40(CParticle * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 004ccaeb
    POP EBX                             ; 004ccaee
    RET                                 ; 004ccaef

