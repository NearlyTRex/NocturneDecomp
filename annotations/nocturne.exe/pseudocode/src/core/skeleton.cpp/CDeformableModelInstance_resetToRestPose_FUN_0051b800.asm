; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(int param_1)
;
;
; XREF[7]:
;   core_cloth.cpp_CCloth_setup_FUN_004359e0 at 00435dbc
;   core_mimic.cpp_FUN_004d4650 at 004d48a8
;   core_passngr.cpp_CPassenger_setup_FUN_004ef6d0 at 004ef6fa
;   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_00519be0 at 00519c71
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0051ad20 at 0051ade4
;   core_succubus.cpp_FUN_00540c20 at 00540e4a
;   core_vampboss.cpp_FUN_0054c3e0 at 0054c49d
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_xform.cpp_setIdentityQuaternion_FUN_0055d110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b800
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800
    PUSH ESI                            ; 0051b801
    PUSH EBP                            ; 0051b802
    MOV EDX,dword ptr [ESP + 0x10]      ; 0051b803
    PUSH EDX                            ; 0051b807
    XOR ESI,ESI                         ; 0051b808
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0051b80a
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 0051b80f
    MOV ECX,dword ptr [EAX + 0x28558]   ; 0051b812
    MOV EBP,EAX                         ; 0051b818
    TEST ECX,ECX                        ; 0051b81a
    JLE 0x0051b854                      ; 0051b81c
        ;   XREF to: 0051b854 (CONDITIONAL_JUMP)  ; LAB_0051b854
    PUSH EDI                            ; 0051b81e
    MOV EDI,dword ptr [ESP + 0x14]      ; 0051b81f
    MOV EBX,dword ptr [ESP + 0x14]      ; 0051b823
    ADD EDI,0x6b0                       ; 0051b827
    PUSH EDI                            ; 0051b82d
        ;   Label: LAB_0051b82d
    ADD EBX,0x4                         ; 0051b82e
    CALL core_xform.cpp_setIdentityQuaternion_FUN_0055d110 ; 0051b831
        ;   XREF to: 0055d110 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_setIdentityQuaternion_FUN_0055d110()
    INC ESI                             ; 0051b836
    FLD float ptr [EBX + 0x510]         ; 0051b837
    ADD ESP,0x4                         ; 0051b83d
    FSTP float ptr [EBX + 0xcec]        ; 0051b840
    MOV EAX,dword ptr [EBP + 0x28558]   ; 0051b846
    ADD EDI,0x10                        ; 0051b84c
    CMP ESI,EAX                         ; 0051b84f
    JL 0x0051b82d                       ; 0051b851
        ;   XREF to: 0051b82d (CONDITIONAL_JUMP)  ; LAB_0051b82d
    POP EDI                             ; 0051b853
    MOV EBX,dword ptr [ESP + 0x10]      ; 0051b854
        ;   Label: LAB_0051b854
    MOV dword ptr [EBX + 0x6ac],0x0     ; 0051b858
    MOV EAX,dword ptr [EBX + 0x6ac]     ; 0051b862
    MOV dword ptr [EBX + 0x6a8],EAX     ; 0051b868
    MOV EAX,dword ptr [EBX + 0x6a8]     ; 0051b86e
    MOV dword ptr [EBX + 0x6a4],EAX     ; 0051b874
    POP EBP                             ; 0051b87a
    POP ESI                             ; 0051b87b
    POP EBX                             ; 0051b87c
    RET                                 ; 0051b87d

