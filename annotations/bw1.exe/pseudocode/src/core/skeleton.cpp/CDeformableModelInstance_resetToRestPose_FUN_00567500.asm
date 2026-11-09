; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_cloth.cpp_FUN_0043eea0 at 0043f2df
;   core_mimic.cpp_FUN_0050f290 at 0050f4e8
;   core_passngr.cpp_FUN_00532930 at 0053295a
;   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_00565830 at 005658c7
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_00566a20 at 00566aed
;   core_succubus.cpp_FUN_00591ff0 at 0059221a
;   core_vampboss.cpp_FUN_005a52a0 at 005a535d
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_xform.cpp_setIdentityQuaternion_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567500
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500
    PUSH ESI                            ; 00567501
    PUSH EBP                            ; 00567502
    MOV EDX,dword ptr [ESP + 0x10]      ; 00567503
    PUSH EDX                            ; 00567507
    XOR ESI,ESI                         ; 00567508
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0056750a
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0056750f
    MOV ECX,dword ptr [EAX + 0x1de78]   ; 00567512
    MOV EBP,EAX                         ; 00567518
    TEST ECX,ECX                        ; 0056751a
    JLE 0x00567554                      ; 0056751c
        ;   XREF to: 00567554 (CONDITIONAL_JUMP)  ; LAB_00567554
    PUSH EDI                            ; 0056751e
    MOV EDI,dword ptr [ESP + 0x14]      ; 0056751f
    MOV EBX,dword ptr [ESP + 0x14]      ; 00567523
    ADD EDI,0x6b0                       ; 00567527
    PUSH EDI                            ; 0056752d
        ;   Label: LAB_0056752d
    ADD EBX,0x4                         ; 0056752e
    CALL core_xform.cpp_setIdentityQuaternion_FUN_005b7790 ; 00567531
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_setIdentityQuaternion_FUN_005b7790()
    INC ESI                             ; 00567536
    FLD float ptr [EBX + 0x510]         ; 00567537
    ADD ESP,0x4                         ; 0056753d
    FSTP float ptr [EBX + 0xcec]        ; 00567540
    MOV EAX,dword ptr [EBP + 0x1de78]   ; 00567546
    ADD EDI,0x10                        ; 0056754c
    CMP ESI,EAX                         ; 0056754f
    JL 0x0056752d                       ; 00567551
        ;   XREF to: 0056752d (CONDITIONAL_JUMP)  ; LAB_0056752d
    POP EDI                             ; 00567553
    MOV EBX,dword ptr [ESP + 0x10]      ; 00567554
        ;   Label: LAB_00567554
    MOV dword ptr [EBX + 0x6ac],0x0     ; 00567558
    MOV EAX,dword ptr [EBX + 0x6ac]     ; 00567562
    MOV dword ptr [EBX + 0x6a8],EAX     ; 00567568
    MOV EAX,dword ptr [EBX + 0x6a8]     ; 0056756e
    MOV dword ptr [EBX + 0x6a4],EAX     ; 00567574
    POP EBP                             ; 0056757a
    POP ESI                             ; 0056757b
    POP EBX                             ; 0056757c
    RET                                 ; 0056757d

