; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CLeaf_init_FUN_004af0f0(CLeaf *this_ptr,CVector3f *param_2,CVector3f *param_3,CKeyFramedModel *param_4,float param_5)
;
; Parameters:
; CLeaf *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   param_2
; CVector3f *      Stack[0xc]:4   param_3
; undefined4       Stack[0x10]:4   param_4
; float            Stack[0x14]:4   param_5
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createLeaf_FUN_004b5f00 at 004b5f44
;
; Called Functions:
;   core_particle.cpp_CParticle_setup_FUN_00532160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af0f0
        ;   Label: core_fire.cpp_CLeaf_init_FUN_004af0f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004af0f1
    MOV EDX,dword ptr [ESP + 0x10]      ; 004af0f5
    PUSH EDX                            ; 004af0f9
    MOV ECX,dword ptr [ESP + 0x10]      ; 004af0fa
    PUSH ECX                            ; 004af0fe
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004af0ff
    PUSH EBX                            ; 004af103
    MOV dword ptr [EBX + 0x50],EAX      ; 004af104
    CALL core_particle.cpp_CParticle_setup_FUN_00532160 ; 004af107
        ;   XREF to: 00532160 (UNCONDITIONAL_CALL)  ; void core_particle.cpp_CParticle_setup_FUN_00532160(CParticle * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 004af10c
    MOV EAX,dword ptr [ESP + 0x18]      ; 004af10f
    MOV dword ptr [EBX + 0x40],EAX      ; 004af113
    POP EBX                             ; 004af116
    RET                                 ; 004af117

