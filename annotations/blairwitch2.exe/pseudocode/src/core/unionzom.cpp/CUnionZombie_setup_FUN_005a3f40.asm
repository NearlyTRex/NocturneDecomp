; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_unionzom_cpp_CUnionZombie_setup_FUN_005a3f40(CUnionZombie *this_ptr)
;
; Parameters:
; CUnionZombie *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_L_Finger1_005f0263
;   TerminatedCString s_Bip01_R_Finger1_005f0273
;
; Called Functions:
;   core_basicene.cpp_CBasicEnemy_setup_FUN_0059e6a0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;   unkaddr_005a7eb0.cpp_CSimpleParticleSystem_attach_FUN_005a8050
;   unkaddr_005a7eb0.cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030
;   unkaddr_005a7eb0.cpp_CSimpleParticleSystem_start_FUN_005a80d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3f40
        ;   Label: core_unionzom.cpp_CUnionZombie_setup_FUN_005a3f40
    PUSH ESI                            ; 005a3f41
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a3f42
    PUSH EBX                            ; 005a3f46
    CALL core_basicene.cpp_CBasicEnemy_setup_FUN_0059e6a0 ; 005a3f47
        ;   XREF to: 0059e6a0 (UNCONDITIONAL_CALL)  ; void core_basicene.cpp_CBasicEnemy_setup_FUN_0059e6a0(CBasicEnemy * this_ptr)
    ADD ESP,0x4                         ; 005a3f4c
    PUSH 0x1                            ; 005a3f4f
    PUSH 0x5f0263                       ; 005a3f51 | = "Bip01 L Finger1"
    MOV EDX,dword ptr [EBX + 0x113b0]   ; 005a3f56
    PUSH EDX                            ; 005a3f5c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 005a3f5d
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a3f62
    PUSH 0x1                            ; 005a3f65
    PUSH 0x5f0273                       ; 005a3f67 | = "Bip01 R Finger1"
    MOV ECX,dword ptr [EBX + 0x113b0]   ; 005a3f6c
    PUSH ECX                            ; 005a3f72
    MOV dword ptr [EBX + 0x11850],EAX   ; 005a3f73
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 005a3f79
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a3f7e
    PUSH 0x100                          ; 005a3f81
    LEA ESI,[EBX + 0x264]               ; 005a3f86
    PUSH ESI                            ; 005a3f8c
    MOV dword ptr [EBX + 0x11854],EAX   ; 005a3f8d
    CALL unkaddr_005a7eb0.cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030 ; 005a3f93
        ;   XREF to: 005a8030 (UNCONDITIONAL_CALL)  ; void unkaddr_005a7eb0.cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030(CSimpleParticleSystem * this_ptr, undefined4 param_2)
    ADD ESP,0x8                         ; 005a3f98
    PUSH EBX                            ; 005a3f9b
    PUSH ESI                            ; 005a3f9c
    CALL unkaddr_005a7eb0.cpp_CSimpleParticleSystem_attach_FUN_005a8050 ; 005a3f9d
        ;   XREF to: 005a8050 (UNCONDITIONAL_CALL)  ; void unkaddr_005a7eb0.cpp_CSimpleParticleSystem_attach_FUN_005a8050(CSimpleParticleSystem * this_ptr, undefined4 param_2)
    ADD ESP,0x8                         ; 005a3fa2
    PUSH 0x0                            ; 005a3fa5
    PUSH ESI                            ; 005a3fa7
    CALL unkaddr_005a7eb0.cpp_CSimpleParticleSystem_start_FUN_005a80d0 ; 005a3fa8
        ;   XREF to: 005a80d0 (UNCONDITIONAL_CALL)  ; void unkaddr_005a7eb0.cpp_CSimpleParticleSystem_start_FUN_005a80d0(CSimpleParticleSystem * this_ptr, int param_2)
    ADD ESP,0x8                         ; 005a3fad
    POP ESI                             ; 005a3fb0
    POP EBX                             ; 005a3fb1
    RET                                 ; 005a3fb2

