; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(CDeformableModelInstance * this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[10]:
;   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 at 0043c9df
;   core_cloth.cpp_FUN_00439710 at 00439aec
;   core_mimic.cpp_CMimic_setup_FUN_0051f3e0 at 0051f6ec
;   core_morph.cpp_FUN_0052bcb0 at 0052c44d
;   core_passngr.cpp_FUN_00545d30 at 00545d5a
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 00596c67
;   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0 at 0059c38b
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0059d460 at 0059d52e
;   core_succubus.cpp_CSuccubus_FUN_005c6b60 at 005c6d8a
;   core_vampboss.cpp_CVampireBoss_FUN_005e56c0 at 005e578f
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_xform.cpp_setIdentityQuaternion_FUN_005f7620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059df80
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
    PUSH ESI                            ; 0059df81
    PUSH EBP                            ; 0059df82
    MOV EDX,dword ptr [ESP + 0x10]      ; 0059df83
    PUSH EDX                            ; 0059df87
    XOR ESI,ESI                         ; 0059df88
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0059df8a
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059df8f
    MOV ECX,dword ptr [EAX + 0x28558]   ; 0059df92
    MOV EBP,EAX                         ; 0059df98
    TEST ECX,ECX                        ; 0059df9a
    JLE 0x0059dfd4                      ; 0059df9c
        ;   XREF to: 0059dfd4 (CONDITIONAL_JUMP)  ; LAB_0059dfd4
    PUSH EDI                            ; 0059df9e
    MOV EDI,dword ptr [ESP + 0x14]      ; 0059df9f
    MOV EBX,dword ptr [ESP + 0x14]      ; 0059dfa3
    ADD EDI,0x6b0                       ; 0059dfa7
    PUSH EDI                            ; 0059dfad
        ;   Label: LAB_0059dfad
    ADD EBX,0x4                         ; 0059dfae
    CALL core_xform.cpp_setIdentityQuaternion_FUN_005f7620 ; 0059dfb1
        ;   XREF to: 005f7620 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_setIdentityQuaternion_FUN_005f7620(CQuaternion4f * quaternion)
    INC ESI                             ; 0059dfb6
    FLD float ptr [EBX + 0x510]         ; 0059dfb7
    ADD ESP,0x4                         ; 0059dfbd
    FSTP float ptr [EBX + 0xcec]        ; 0059dfc0
    MOV EAX,dword ptr [EBP + 0x28558]   ; 0059dfc6
    ADD EDI,0x10                        ; 0059dfcc
    CMP ESI,EAX                         ; 0059dfcf
    JL 0x0059dfad                       ; 0059dfd1
        ;   XREF to: 0059dfad (CONDITIONAL_JUMP)  ; LAB_0059dfad
    POP EDI                             ; 0059dfd3
    MOV EBX,dword ptr [ESP + 0x10]      ; 0059dfd4
        ;   Label: LAB_0059dfd4
    MOV dword ptr [EBX + 0x6ac],0x0     ; 0059dfd8
    MOV EAX,dword ptr [EBX + 0x6ac]     ; 0059dfe2
    MOV dword ptr [EBX + 0x6a8],EAX     ; 0059dfe8
    MOV EAX,dword ptr [EBX + 0x6a8]     ; 0059dfee
    MOV dword ptr [EBX + 0x6a4],EAX     ; 0059dff4
    POP EBP                             ; 0059dffa
    POP ESI                             ; 0059dffb
    POP EBX                             ; 0059dffc
    RET                                 ; 0059dffd

