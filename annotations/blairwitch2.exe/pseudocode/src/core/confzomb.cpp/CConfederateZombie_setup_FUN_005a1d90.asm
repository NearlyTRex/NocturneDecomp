; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_confzomb_cpp_CConfederateZombie_setup_FUN_005a1d90(CConfederateZombie *this_ptr)
;
; Parameters:
; CConfederateZombie * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_L_Finger1_005efdbf
;   TerminatedCString s_Bip01_R_Finger1_005efdcf
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

    PUSH EBX                            ; 005a1d90
        ;   Label: core_confzomb.cpp_CConfederateZombie_setup_FUN_005a1d90
    PUSH ESI                            ; 005a1d91
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a1d92
    PUSH EBX                            ; 005a1d96
    CALL core_basicene.cpp_CBasicEnemy_setup_FUN_0059e6a0 ; 005a1d97
        ;   XREF to: 0059e6a0 (UNCONDITIONAL_CALL)  ; void core_basicene.cpp_CBasicEnemy_setup_FUN_0059e6a0(CBasicEnemy * this_ptr)
    ADD ESP,0x4                         ; 005a1d9c
    PUSH 0x1                            ; 005a1d9f
    PUSH 0x5efdbf                       ; 005a1da1 | = "Bip01 L Finger1"
    MOV EDX,dword ptr [EBX + 0x113b0]   ; 005a1da6
    PUSH EDX                            ; 005a1dac
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 005a1dad
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a1db2
    PUSH 0x1                            ; 005a1db5
    PUSH 0x5efdcf                       ; 005a1db7 | = "Bip01 R Finger1"
    MOV ECX,dword ptr [EBX + 0x113b0]   ; 005a1dbc
    PUSH ECX                            ; 005a1dc2
    MOV dword ptr [EBX + 0x11850],EAX   ; 005a1dc3
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 005a1dc9
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a1dce
    PUSH 0x100                          ; 005a1dd1
    LEA ESI,[EBX + 0x264]               ; 005a1dd6
    PUSH ESI                            ; 005a1ddc
    MOV dword ptr [EBX + 0x11854],EAX   ; 005a1ddd
    CALL unkaddr_005a7eb0.cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030 ; 005a1de3
        ;   XREF to: 005a8030 (UNCONDITIONAL_CALL)  ; void unkaddr_005a7eb0.cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030(CSimpleParticleSystem * this_ptr, undefined4 param_2)
    ADD ESP,0x8                         ; 005a1de8
    PUSH EBX                            ; 005a1deb
    PUSH ESI                            ; 005a1dec
    CALL unkaddr_005a7eb0.cpp_CSimpleParticleSystem_attach_FUN_005a8050 ; 005a1ded
        ;   XREF to: 005a8050 (UNCONDITIONAL_CALL)  ; void unkaddr_005a7eb0.cpp_CSimpleParticleSystem_attach_FUN_005a8050(CSimpleParticleSystem * this_ptr, undefined4 param_2)
    ADD ESP,0x8                         ; 005a1df2
    PUSH 0x0                            ; 005a1df5
    PUSH ESI                            ; 005a1df7
    CALL unkaddr_005a7eb0.cpp_CSimpleParticleSystem_start_FUN_005a80d0 ; 005a1df8
        ;   XREF to: 005a80d0 (UNCONDITIONAL_CALL)  ; void unkaddr_005a7eb0.cpp_CSimpleParticleSystem_start_FUN_005a80d0(CSimpleParticleSystem * this_ptr, int param_2)
    ADD ESP,0x8                         ; 005a1dfd
    POP ESI                             ; 005a1e00
    POP EBX                             ; 005a1e01
    RET                                 ; 005a1e02

