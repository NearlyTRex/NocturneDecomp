; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051d650(undefined4 param_1,float *param_2,float param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; Referenced Globals:
;   undefined4 DAT_00591bc3
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   core_xform.cpp_FUN_0055d4a0
;   core_xform.cpp_FUN_0055d4e0
;   core_xform.cpp_multiplyQuaternion_FUN_0055d130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051d650
        ;   Label: FUN_0051d650
    PUSH ESI                            ; 0051d651
    SUB ESP,0xa4                        ; 0051d652
    MOV EBX,dword ptr [ESP + 0xb0]      ; 0051d658
    MOV ESI,dword ptr [ESP + 0xb4]      ; 0051d65f
    FLD float ptr [ESP + 0xb8]          ; 0051d666
    FCOMP double ptr [0x00591bc3]       ; 0051d66d | DAT_00591bc3
    FNSTSW AX                           ; 0051d673
    SAHF                                ; 0051d675
    JA 0x0051d681                       ; 0051d676
        ;   XREF to: 0051d681 (CONDITIONAL_JUMP)  ; LAB_0051d681
    ADD ESP,0xa4                        ; 0051d678
    POP ESI                             ; 0051d67e
    POP EBX                             ; 0051d67f
    RET                                 ; 0051d680
    PUSH EDI                            ; 0051d681
        ;   Label: LAB_0051d681
    PUSH EBX                            ; 0051d682
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0051d683
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 0051d688
    MOV EDX,dword ptr [ESP + 0xc0]      ; 0051d68b
    PUSH EDX                            ; 0051d692
    LEA EAX,[ESP + 0xa0]                ; 0051d693
    PUSH EAX                            ; 0051d69a
    PUSH EBX                            ; 0051d69b
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 0051d69c
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0()
    FLD float ptr [ESI]                 ; 0051d6a1
    FSUB float ptr [EAX]                ; 0051d6a3
    ADD ESP,0xc                         ; 0051d6a5
    FSTP float ptr [ESP + 0x84]         ; 0051d6a8
    FLD float ptr [ESI + 0x4]           ; 0051d6af
    FSUB float ptr [EAX + 0x4]          ; 0051d6b2
    FSTP float ptr [ESP + 0x88]         ; 0051d6b5
    FLD float ptr [ESI + 0x8]           ; 0051d6bc
    FSUB float ptr [EAX + 0x8]          ; 0051d6bf
    LEA EAX,[ESP + 0x84]                ; 0051d6c2
    PUSH EAX                            ; 0051d6c9
    LEA EAX,[ESP + 0x94]                ; 0051d6ca
    PUSH EAX                            ; 0051d6d1
    FSTP float ptr [ESP + 0x94]         ; 0051d6d2
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 0051d6d9
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 0051d6de
    LEA ESI,[ESP + 0x74]                ; 0051d6e1
    PUSH dword ptr [ESP + 0x90]         ; 0051d6e5
    LEA EDI,[ESP + 0x8]                 ; 0051d6ec
    CALL core_xform.cpp_FUN_0055d4a0    ; 0051d6f0
        ;   XREF to: 0055d4a0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_0055d4a0()
    ADD ESP,0x4                         ; 0051d6f5
    LEA EAX,[ESP + 0x4]                 ; 0051d6f8
    LEA ESI,[ESP + 0x74]                ; 0051d6fc
    PUSH EAX                            ; 0051d700
    MOVSD ES:EDI,ESI                    ; 0051d701
    MOVSD ES:EDI,ESI                    ; 0051d702
    MOVSD ES:EDI,ESI                    ; 0051d703
    MOVSD ES:EDI,ESI                    ; 0051d704
    PUSH dword ptr [ESP + 0x98]         ; 0051d705
    LEA ESI,[ESP + 0x4c]                ; 0051d70c
    LEA EDI,[ESP + 0x2c]                ; 0051d710
    CALL core_xform.cpp_FUN_0055d4e0    ; 0051d714
        ;   XREF to: 0055d4e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_0055d4e0()
    LEA ESI,[ESP + 0x4c]                ; 0051d719
    ADD ESP,0x4                         ; 0051d71d
    LEA EAX,[ESP + 0x28]                ; 0051d720
    MOV ECX,dword ptr [ESP + 0xc8]      ; 0051d724
    PUSH EAX                            ; 0051d72b
    MOVSD ES:EDI,ESI                    ; 0051d72c
    MOVSD ES:EDI,ESI                    ; 0051d72d
    MOVSD ES:EDI,ESI                    ; 0051d72e
    MOVSD ES:EDI,ESI                    ; 0051d72f
    PUSH ECX                            ; 0051d730
    LEA ESI,[ESP + 0x60]                ; 0051d731
    LEA EDI,[ESP + 0x40]                ; 0051d735
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 0051d739
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_0055d130()
    LEA ESI,[ESP + 0x60]                ; 0051d73e
    ADD ESP,0x8                         ; 0051d742
    LEA EAX,[ESP + 0x38]                ; 0051d745
    MOVSD ES:EDI,ESI                    ; 0051d749
    MOVSD ES:EDI,ESI                    ; 0051d74a
    MOVSD ES:EDI,ESI                    ; 0051d74b
    MOVSD ES:EDI,ESI                    ; 0051d74c
    PUSH EAX                            ; 0051d74d
    LEA ESI,[ESP + 0x6c]                ; 0051d74e
    LEA EDI,[ESP + 0x1c]                ; 0051d752
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 0051d756
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_0055d130()
    LEA ESI,[ESP + 0x6c]                ; 0051d75b
    ADD ESP,0x8                         ; 0051d75f
    MOVSD ES:EDI,ESI                    ; 0051d762
    MOVSD ES:EDI,ESI                    ; 0051d763
    MOVSD ES:EDI,ESI                    ; 0051d764
    MOVSD ES:EDI,ESI                    ; 0051d765
    MOV ESI,dword ptr [ESP + 0xc8]      ; 0051d766
    PUSH ESI                            ; 0051d76d
    MOV EDI,dword ptr [ESP + 0xc4]      ; 0051d76e
    PUSH EDI                            ; 0051d775
    LEA EAX,[ESP + 0x1c]                ; 0051d776
    PUSH dword ptr [ESP + 0xc4]         ; 0051d77a
    PUSH EAX                            ; 0051d781
    PUSH EBX                            ; 0051d782
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0 ; 0051d783
        ;   XREF to: 0051cfd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0()
    ADD ESP,0x14                        ; 0051d788
    POP EDI                             ; 0051d78b
    ADD ESP,0xa4                        ; 0051d78c
    POP ESI                             ; 0051d792
    POP EBX                             ; 0051d793
    RET                                 ; 0051d794

