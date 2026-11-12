; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weaver_cpp_CRobin_setup_FUN_005a6030(CRobin *this_ptr)
;
; Parameters:
; CRobin *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005f065b
;   TerminatedCString s_Bip01_R_Hand_005f0666
;
; Called Functions:
;   core_basicnpc.cpp_CBasicNPC_setup_FUN_005a4870
;   core_bwspart.cpp_CSimpleParticleSystem_attach_FUN_005a8050
;   core_bwspart.cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a6030
        ;   Label: core_weaver.cpp_CRobin_setup_FUN_005a6030
    PUSH ESI                            ; 005a6031
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a6032
    PUSH EBX                            ; 005a6036
    CALL core_basicnpc.cpp_CBasicNPC_setup_FUN_005a4870 ; 005a6037
        ;   XREF to: 005a4870 (UNCONDITIONAL_CALL)  ; void core_basicnpc.cpp_CBasicNPC_setup_FUN_005a4870(CBasicNPC * this_ptr)
    ADD ESP,0x4                         ; 005a603c
    PUSH 0x1                            ; 005a603f
    PUSH 0x5f065b                       ; 005a6041 | = "Bip01 Head"
    MOV EDX,dword ptr [EBX + 0x113b0]   ; 005a6046
    PUSH EDX                            ; 005a604c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 005a604d
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a6052
    PUSH 0x1                            ; 005a6055
    PUSH 0x5f0666                       ; 005a6057 | = "Bip01 R Hand"
    MOV ECX,dword ptr [EBX + 0x113b0]   ; 005a605c
    MOV dword ptr [EBX + 0x11850],EAX   ; 005a6062
    PUSH ECX                            ; 005a6068
    MOV dword ptr [EBX + 0x10a24],EAX   ; 005a6069
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 005a606f
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005a6074
    PUSH 0x100                          ; 005a6077
    LEA ESI,[EBX + 0x154]               ; 005a607c
    MOV dword ptr [EBX + 0x11854],EAX   ; 005a6082
    PUSH ESI                            ; 005a6088
    MOV dword ptr [EBX + 0x2618],EAX    ; 005a6089
    CALL core_bwspart.cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030 ; 005a608f
        ;   XREF to: 005a8030 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030(CSimpleParticleSystem * this_ptr, undefined4 param_2)
    ADD ESP,0x8                         ; 005a6094
    PUSH EBX                            ; 005a6097
    PUSH ESI                            ; 005a6098
    CALL core_bwspart.cpp_CSimpleParticleSystem_attach_FUN_005a8050 ; 005a6099
        ;   XREF to: 005a8050 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_attach_FUN_005a8050(CSimpleParticleSystem * this_ptr, undefined4 param_2)
    ADD ESP,0x8                         ; 005a609e
    PUSH 0x100                          ; 005a60a1
    LEA ESI,[EBX + 0x198]               ; 005a60a6
    PUSH ESI                            ; 005a60ac
    CALL core_bwspart.cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030 ; 005a60ad
        ;   XREF to: 005a8030 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030(CSimpleParticleSystem * this_ptr, undefined4 param_2)
    ADD ESP,0x8                         ; 005a60b2
    PUSH EBX                            ; 005a60b5
    PUSH ESI                            ; 005a60b6
    CALL core_bwspart.cpp_CSimpleParticleSystem_attach_FUN_005a8050 ; 005a60b7
        ;   XREF to: 005a8050 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_attach_FUN_005a8050(CSimpleParticleSystem * this_ptr, undefined4 param_2)
    ADD ESP,0x8                         ; 005a60bc
    POP ESI                             ; 005a60bf
    POP EBX                             ; 005a60c0
    RET                                 ; 005a60c1

