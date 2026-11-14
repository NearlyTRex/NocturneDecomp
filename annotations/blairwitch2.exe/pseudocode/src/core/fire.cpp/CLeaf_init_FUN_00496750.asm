; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CLeaf_init_FUN_00496750(CLeaf *this_ptr,CVector3f *param_2,CVector3f *param_3,CKeyFramedModel *param_4,float param_5)
;
; Parameters:
; CLeaf *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   param_2
; CVector3f *      Stack[0xc]:4   param_3
; undefined4       Stack[0x10]:4   param_4
; float            Stack[0x14]:4   param_5
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createLeaf_FUN_0049d600 at 0049d644
;
; Called Functions:
;   core_particle.cpp_CParticle_setup_FUN_00510e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496750
        ;   Label: core_fire.cpp_CLeaf_init_FUN_00496750
    MOV EBX,dword ptr [ESP + 0x8]       ; 00496751
    MOV EDX,dword ptr [ESP + 0x10]      ; 00496755
    PUSH EDX                            ; 00496759
    MOV ECX,dword ptr [ESP + 0x10]      ; 0049675a
    PUSH ECX                            ; 0049675e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0049675f
    PUSH EBX                            ; 00496763
    MOV dword ptr [EBX + 0x50],EAX      ; 00496764
    CALL core_particle.cpp_CParticle_setup_FUN_00510e00 ; 00496767
        ;   XREF to: 00510e00 (UNCONDITIONAL_CALL)  ; void core_particle.cpp_CParticle_setup_FUN_00510e00(CParticle * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 0049676c
    MOV EAX,dword ptr [ESP + 0x18]      ; 0049676f
    MOV dword ptr [EBX + 0x40],EAX      ; 00496773
    POP EBX                             ; 00496776
    RET                                 ; 00496777

