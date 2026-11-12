; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_confedrt_cpp_CConfederate_setup_FUN_005a0a90(CConfederate *this_ptr)
;
; Parameters:
; CConfederate *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_gun1_005efbf2
;   TerminatedCString s_Bip01_gun12_005efbfd
;   TerminatedCString s_Bip01_Spine_005efc09
;
; Called Functions:
;   core_basicene.cpp_CBasicEnemy_setup_FUN_0059e6a0
;   core_bwspart.cpp_CSimpleParticleSystem_attach_FUN_005a8050
;   core_bwspart.cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0a90
        ;   Label: core_confedrt.cpp_CConfederate_setup_FUN_005a0a90
    PUSH ESI                            ; 005a0a91
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a0a92
    PUSH EBX                            ; 005a0a96
    CALL core_basicene.cpp_CBasicEnemy_setup_FUN_0059e6a0 ; 005a0a97
        ;   XREF to: 0059e6a0 (UNCONDITIONAL_CALL)  ; void core_basicene.cpp_CBasicEnemy_setup_FUN_0059e6a0(CBasicEnemy * this_ptr)
    ADD ESP,0x4                         ; 005a0a9c
    LEA EAX,[EBX + 0x2b4]               ; 005a0a9f
    PUSH EAX                            ; 005a0aa5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 005a0aa6
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a0aab
    PUSH 0x1                            ; 005a0aae
    PUSH 0x5efbf2                       ; 005a0ab0 | = "Bip01 gun1"
    PUSH EAX                            ; 005a0ab5
    MOV ESI,EAX                         ; 005a0ab6
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 005a0ab8
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a0abd
    PUSH 0x1                            ; 005a0ac0
    PUSH 0x5efbfd                       ; 005a0ac2 | = "Bip01 gun12"
    PUSH ESI                            ; 005a0ac7
    MOV dword ptr [EBX + 0x11858],EAX   ; 005a0ac8
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 005a0ace
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a0ad3
    PUSH 0x1                            ; 005a0ad6
    PUSH 0x5efc09                       ; 005a0ad8 | = "Bip01 Spine"
    MOV EDX,dword ptr [EBX + 0x113b0]   ; 005a0add
    PUSH EDX                            ; 005a0ae3
    MOV dword ptr [EBX + 0x1185c],EAX   ; 005a0ae4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 005a0aea
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a0aef
    PUSH 0x100                          ; 005a0af2
    LEA ESI,[EBX + 0x154]               ; 005a0af7
    PUSH ESI                            ; 005a0afd
    MOV dword ptr [EBX + 0x11860],EAX   ; 005a0afe
    CALL core_bwspart.cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030 ; 005a0b04
        ;   XREF to: 005a8030 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030(CSimpleParticleSystem * this_ptr, undefined4 param_2)
    ADD ESP,0x8                         ; 005a0b09
    PUSH EBX                            ; 005a0b0c
    PUSH ESI                            ; 005a0b0d
    CALL core_bwspart.cpp_CSimpleParticleSystem_attach_FUN_005a8050 ; 005a0b0e
        ;   XREF to: 005a8050 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_attach_FUN_005a8050(CSimpleParticleSystem * this_ptr, undefined4 param_2)
    ADD ESP,0x8                         ; 005a0b13
    POP ESI                             ; 005a0b16
    POP EBX                             ; 005a0b17
    RET                                 ; 005a0b18

