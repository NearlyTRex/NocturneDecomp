; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_FUN_004e3e20(CBloodParticle *this_ptr,CVector3f *position,CVector3f *velocity,EBloodType blood_type)
;
; Parameters:
; CBloodParticle * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   velocity
; EBloodType       Stack[0x10]:4   blood_type
;
; XREF[1]:
;   core_gore.cpp_CGore_spawnBloodParticles_FUN_004e5f40 at 004e5f87
;
; Called Functions:
;   core_actor.cpp_FUN_0040cc60
;   core_particle.cpp_CParticle_setup_FUN_00532160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e3e20
        ;   Label: core_gore.cpp_FUN_004e3e20
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e3e21
    PUSH 0xf                            ; 004e3e25
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e3e27
    PUSH 0x0                            ; 004e3e2b
    MOV dword ptr [EBX + 0x40],EAX      ; 004e3e2d
    CALL core_actor.cpp_FUN_0040cc60    ; 004e3e30
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 004e3e35
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e3e38
    PUSH EDX                            ; 004e3e3c
    MOV ECX,dword ptr [ESP + 0x10]      ; 004e3e3d
    PUSH ECX                            ; 004e3e41
    PUSH EBX                            ; 004e3e42
    MOV dword ptr [EBX + 0x44],EAX      ; 004e3e43
    CALL core_particle.cpp_CParticle_setup_FUN_00532160 ; 004e3e46
        ;   XREF to: 00532160 (UNCONDITIONAL_CALL)  ; void core_particle.cpp_CParticle_setup_FUN_00532160(CParticle * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 004e3e4b
    POP EBX                             ; 004e3e4e
    RET                                 ; 004e3e4f

