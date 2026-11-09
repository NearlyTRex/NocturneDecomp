; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_FUN_004965f0(CRock *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr)
;
; Parameters:
; CRock *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   velocity
; CKeyFramedModel * Stack[0x10]:4   model_ptr
;
; XREF[1]:
;   core_fire.cpp_FUN_0049d5b0 at 0049d5f0
;
; Called Functions:
;   core_particle.cpp_CParticle_setup_FUN_00510e00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004965f0
        ;   Label: core_fire.cpp_FUN_004965f0
    MOV EDX,dword ptr [ESP + 0x10]      ; 004965f4
    MOV dword ptr [EAX + 0x4c],EDX      ; 004965f8
    MOV EDX,dword ptr [ESP + 0xc]       ; 004965fb
    PUSH EDX                            ; 004965ff
    MOV ECX,dword ptr [ESP + 0xc]       ; 00496600
    PUSH ECX                            ; 00496604
    PUSH EAX                            ; 00496605
    CALL core_particle.cpp_CParticle_setup_FUN_00510e00 ; 00496606
        ;   XREF to: 00510e00 (UNCONDITIONAL_CALL)  ; void core_particle.cpp_CParticle_setup_FUN_00510e00(CParticle * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 0049660b
    MOV EAX,EAX                         ; 0049660e

