; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_FUN_004aef90(CRock *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr)
;
; Parameters:
; CRock *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   velocity
; CKeyFramedModel * Stack[0x10]:4   model_ptr
;
; XREF[1]:
;   core_fire.cpp_FUN_004b5eb0 at 004b5ef0
;
; Called Functions:
;   core_particle.cpp_CParticle_setup_FUN_00532160
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004aef90
        ;   Label: core_fire.cpp_FUN_004aef90
    MOV EDX,dword ptr [ESP + 0x10]      ; 004aef94
    MOV dword ptr [EAX + 0x4c],EDX      ; 004aef98
    MOV EDX,dword ptr [ESP + 0xc]       ; 004aef9b
    PUSH EDX                            ; 004aef9f
    MOV ECX,dword ptr [ESP + 0xc]       ; 004aefa0
    PUSH ECX                            ; 004aefa4
    PUSH EAX                            ; 004aefa5
    CALL core_particle.cpp_CParticle_setup_FUN_00532160 ; 004aefa6
        ;   XREF to: 00532160 (UNCONDITIONAL_CALL)  ; void core_particle.cpp_CParticle_setup_FUN_00532160(CParticle * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 004aefab
    MOV EAX,EAX                         ; 004aefae

