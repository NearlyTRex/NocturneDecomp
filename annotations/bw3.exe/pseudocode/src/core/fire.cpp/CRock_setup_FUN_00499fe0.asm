; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CRock_setup_FUN_00499fe0(CRock *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr)
;
; Parameters:
; CRock *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   velocity
; CKeyFramedModel * Stack[0x10]:4   model_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createRock_FUN_004a28e0 at 004a2920
;
; Called Functions:
;   core_particle.cpp_CParticle_setup_FUN_00509e40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00499fe0
        ;   Label: core_fire.cpp_CRock_setup_FUN_00499fe0
    MOV EDX,dword ptr [ESP + 0x10]      ; 00499fe4
    MOV dword ptr [EAX + 0x4c],EDX      ; 00499fe8
    MOV EDX,dword ptr [ESP + 0xc]       ; 00499feb
    PUSH EDX                            ; 00499fef
    MOV ECX,dword ptr [ESP + 0xc]       ; 00499ff0
    PUSH ECX                            ; 00499ff4
    PUSH EAX                            ; 00499ff5
    CALL core_particle.cpp_CParticle_setup_FUN_00509e40 ; 00499ff6
        ;   XREF to: 00509e40 (UNCONDITIONAL_CALL)  ; void core_particle.cpp_CParticle_setup_FUN_00509e40(CParticle * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 00499ffb
    MOV EAX,EAX                         ; 00499ffe

