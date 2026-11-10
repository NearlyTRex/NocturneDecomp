; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_cloth.cpp_FUN_005ae680 at 005aeabf
;   core_mimic.cpp_CMimic_setup_FUN_004f04f0 at 004f0749
;   core_passngr.cpp_CPassenger_setup_FUN_005115e0 at 0051160a
;   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_005431b0 at 00543247
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_00544380 at 0054444d
;   core_succubus.cpp_CSuccubus_setup_FUN_0056f3a0 at 0056f5ca
;   core_vampboss.cpp_CVampireBoss_setup_FUN_00581660 at 0058171d
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_xform.cpp_setIdentityQuaternion_FUN_00593c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544e60
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60
    PUSH ESI                            ; 00544e61
    PUSH EBP                            ; 00544e62
    MOV EDX,dword ptr [ESP + 0x10]      ; 00544e63
    PUSH EDX                            ; 00544e67
    XOR ESI,ESI                         ; 00544e68
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00544e6a
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00544e6f
    MOV ECX,dword ptr [EAX + 0x1d1f8]   ; 00544e72
    MOV EBP,EAX                         ; 00544e78
    TEST ECX,ECX                        ; 00544e7a
    JLE 0x00544eb4                      ; 00544e7c
        ;   XREF to: 00544eb4 (CONDITIONAL_JUMP)  ; LAB_00544eb4
    PUSH EDI                            ; 00544e7e
    MOV EDI,dword ptr [ESP + 0x14]      ; 00544e7f
    MOV EBX,dword ptr [ESP + 0x14]      ; 00544e83
    ADD EDI,0x6b0                       ; 00544e87
    PUSH EDI                            ; 00544e8d
        ;   Label: LAB_00544e8d
    ADD EBX,0x4                         ; 00544e8e
    CALL core_xform.cpp_setIdentityQuaternion_FUN_00593c40 ; 00544e91
        ;   XREF to: 00593c40 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_setIdentityQuaternion_FUN_00593c40()
    INC ESI                             ; 00544e96
    FLD float ptr [EBX + 0x510]         ; 00544e97
    ADD ESP,0x4                         ; 00544e9d
    FSTP float ptr [EBX + 0xcec]        ; 00544ea0
    MOV EAX,dword ptr [EBP + 0x1d1f8]   ; 00544ea6
    ADD EDI,0x10                        ; 00544eac
    CMP ESI,EAX                         ; 00544eaf
    JL 0x00544e8d                       ; 00544eb1
        ;   XREF to: 00544e8d (CONDITIONAL_JUMP)  ; LAB_00544e8d
    POP EDI                             ; 00544eb3
    MOV EBX,dword ptr [ESP + 0x10]      ; 00544eb4
        ;   Label: LAB_00544eb4
    MOV dword ptr [EBX + 0x6ac],0x0     ; 00544eb8
    MOV EAX,dword ptr [EBX + 0x6ac]     ; 00544ec2
    MOV dword ptr [EBX + 0x6a8],EAX     ; 00544ec8
    MOV EAX,dword ptr [EBX + 0x6a8]     ; 00544ece
    MOV dword ptr [EBX + 0x6a4],EAX     ; 00544ed4
    POP EBP                             ; 00544eda
    POP ESI                             ; 00544edb
    POP EBX                             ; 00544edc
    RET                                 ; 00544edd

