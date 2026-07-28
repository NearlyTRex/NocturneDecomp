; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CRock_setup_FUN_00484c90(CRock *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr)
;
; Parameters:
; CRock *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   velocity
; CKeyFramedModel * Stack[0x10]:4   model_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createRock_FUN_0048b320 at 0048b360
;
; Called Functions:
;   core_particle.cpp_CParticle_setup_FUN_004ef040
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00484c90
        ;   Label: core_fire.cpp_CRock_setup_FUN_00484c90
    MOV EDX,dword ptr [ESP + 0x10]      ; 00484c94
    MOV dword ptr [EAX + 0x44],EDX      ; 00484c98
    MOV EDX,dword ptr [ESP + 0xc]       ; 00484c9b
    PUSH EDX                            ; 00484c9f
    MOV ECX,dword ptr [ESP + 0xc]       ; 00484ca0
    PUSH ECX                            ; 00484ca4
    PUSH EAX                            ; 00484ca5
    CALL core_particle.cpp_CParticle_setup_FUN_004ef040 ; 00484ca6
        ;   XREF to: 004ef040 (UNCONDITIONAL_CALL)  ; void core_particle.cpp_CParticle_setup_FUN_004ef040(CParticle * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 00484cab
    MOV EAX,EAX                         ; 00484cae

