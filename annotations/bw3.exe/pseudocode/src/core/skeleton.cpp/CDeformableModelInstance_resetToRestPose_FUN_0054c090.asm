; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[12]:
;   core_asgaya.cpp_CAsgaya_setup_FUN_005a0b00 at 005a0bb3
;   core_cloth.cpp_FUN_0043cb00 at 0043cf3f
;   core_darkwolf.cpp_CDarkwolf_setup_FUN_00598800 at 00598930
;   core_passngr.cpp_CPassenger_setup_FUN_0050a610 at 0050a63a
;   core_pryemorp.cpp_CPryeMorph_setup_FUN_005275c0 at 005276cf
;   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0054a3c0 at 0054a457
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0054b5b0 at 0054b67d
;   core_spirbear.cpp_CSpiritBear_setup_FUN_0059aba0 at 0059ad35
;   core_spireagl.cpp_CSpiritEagle_setup_FUN_005992f0 at 00599471
;   core_spirindi.cpp_CSpiritIndian_setup_FUN_0059a060 at 0059a1f5
;   ... and 2 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_xform.cpp_setIdentityQuaternion_FUN_00585970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054c090
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090
    PUSH ESI                            ; 0054c091
    PUSH EBP                            ; 0054c092
    MOV EDX,dword ptr [ESP + 0x10]      ; 0054c093
    PUSH EDX                            ; 0054c097
    XOR ESI,ESI                         ; 0054c098
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0054c09a
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054c09f
    MOV ECX,dword ptr [EAX + 0x1de78]   ; 0054c0a2
    MOV EBP,EAX                         ; 0054c0a8
    TEST ECX,ECX                        ; 0054c0aa
    JLE 0x0054c0e4                      ; 0054c0ac
        ;   XREF to: 0054c0e4 (CONDITIONAL_JUMP)  ; LAB_0054c0e4
    PUSH EDI                            ; 0054c0ae
    MOV EDI,dword ptr [ESP + 0x14]      ; 0054c0af
    MOV EBX,dword ptr [ESP + 0x14]      ; 0054c0b3
    ADD EDI,0x6b0                       ; 0054c0b7
    PUSH EDI                            ; 0054c0bd
        ;   Label: LAB_0054c0bd
    ADD EBX,0x4                         ; 0054c0be
    CALL core_xform.cpp_setIdentityQuaternion_FUN_00585970 ; 0054c0c1
        ;   XREF to: 00585970 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_setIdentityQuaternion_FUN_00585970(CQuaternion4f * quaternion)
    INC ESI                             ; 0054c0c6
    FLD float ptr [EBX + 0x510]         ; 0054c0c7
    ADD ESP,0x4                         ; 0054c0cd
    FSTP float ptr [EBX + 0xcec]        ; 0054c0d0
    MOV EAX,dword ptr [EBP + 0x1de78]   ; 0054c0d6
    ADD EDI,0x10                        ; 0054c0dc
    CMP ESI,EAX                         ; 0054c0df
    JL 0x0054c0bd                       ; 0054c0e1
        ;   XREF to: 0054c0bd (CONDITIONAL_JUMP)  ; LAB_0054c0bd
    POP EDI                             ; 0054c0e3
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054c0e4
        ;   Label: LAB_0054c0e4
    MOV dword ptr [EBX + 0x6ac],0x0     ; 0054c0e8
    MOV EAX,dword ptr [EBX + 0x6ac]     ; 0054c0f2
    MOV dword ptr [EBX + 0x6a8],EAX     ; 0054c0f8
    MOV EAX,dword ptr [EBX + 0x6a8]     ; 0054c0fe
    MOV dword ptr [EBX + 0x6a4],EAX     ; 0054c104
    POP EBP                             ; 0054c10a
    POP ESI                             ; 0054c10b
    POP EBX                             ; 0054c10c
    RET                                 ; 0054c10d

