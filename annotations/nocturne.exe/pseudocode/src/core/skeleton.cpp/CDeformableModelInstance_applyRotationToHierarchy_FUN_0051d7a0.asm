; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0(int param_1,undefined4 param_2,float param_3,int param_4,code *param_5)
;
; Local Variables:
; undefined4       Stack[-0xf0]:4  local_f0
; undefined        Stack[-0xe4]:1  local_e4
; undefined        Stack[-0xb4]:1  local_b4
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[6]:
;   FUN_00497900 at 00498003
;   FUN_004ba740 at 004ba856
;   FUN_005384d0 at 005386fa
;   FUN_005396d0 at 00539780
;   core_mobster.cpp_CMobster_aimTommyGun_FUN_004db6f0 at 004db98b
;   core_stranger.cpp_CStranger_makeDrawDecision_FUN_00539b10 at 00539fe0
;
; Referenced Globals:
;   undefined4 DAT_00591bcb
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10
;   core_xform.cpp_multiplyQuaternion_FUN_0055d130
;   core_xform.cpp_quaternionToAxisAngle_FUN_0055d220
;   core_xform.cpp_quaternionToMatrix3x4_FUN_0055ced0
;   core_xform.cpp_transformVector3x4InPlace_FUN_0055a910
;   FUN_0055d560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051d7a0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
    PUSH ESI                            ; 0051d7a1
    PUSH EDI                            ; 0051d7a2
    PUSH EBP                            ; 0051d7a3
    MOV EBP,ESP                         ; 0051d7a4
    SUB ESP,0xd4                        ; 0051d7a6
    AND ESP,0xfffffff8                  ; 0051d7ac
    MOV EDX,dword ptr [EBP + 0x14]      ; 0051d7af
    PUSH EDX                            ; 0051d7b2
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0051d7b3
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 0051d7b8
    MOV ESI,EAX                         ; 0051d7bb
    MOV dword ptr [ESP + 0xc4],EAX      ; 0051d7bd
    LEA EAX,[ESP + 0xb4]                ; 0051d7c4
    PUSH EAX                            ; 0051d7cb
    LEA EAX,[ESP + 0xc4]                ; 0051d7cc
    PUSH EAX                            ; 0051d7d3
    MOV ECX,dword ptr [EBP + 0x18]      ; 0051d7d4
    PUSH ECX                            ; 0051d7d7
    XOR EBX,EBX                         ; 0051d7d8
    CALL core_xform.cpp_quaternionToAxisAngle_FUN_0055d220 ; 0051d7da
        ;   XREF to: 0055d220 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionToAxisAngle_FUN_0055d220()
    MOV EDI,dword ptr [ESI + 0x28558]   ; 0051d7df
    ADD ESP,0xc                         ; 0051d7e5
    TEST EDI,EDI                        ; 0051d7e8
    JLE 0x0051d852                      ; 0051d7ea
        ;   XREF to: 0051d852 (CONDITIONAL_JUMP)  ; LAB_0051d852
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051d7ec
    MOV ESI,dword ptr [EBP + 0x14]      ; 0051d7ef
    ADD EAX,0x6b0                       ; 0051d7f2
    MOV dword ptr [ESP + 0xc8],ESI      ; 0051d7f7
    MOV dword ptr [ESP + 0xcc],EAX      ; 0051d7fe
    MOV ESI,dword ptr [EBP + 0x20]      ; 0051d805
        ;   Label: LAB_0051d805
    PUSH ESI                            ; 0051d808
    PUSH EBX                            ; 0051d809
    MOV EDI,dword ptr [ESP + 0xcc]      ; 0051d80a
    PUSH EDI                            ; 0051d811
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10 ; 0051d812
        ;   XREF to: 00517b10 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10()
    ADD ESP,0xc                         ; 0051d817
    TEST EAX,EAX                        ; 0051d81a
    JGE 0x0051d863                      ; 0051d81c
        ;   XREF to: 0051d863 (CONDITIONAL_JUMP)  ; LAB_0051d863
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0051d81e
        ;   Label: LAB_0051d81e
    ADD EAX,0x10                        ; 0051d825
    MOV EDX,dword ptr [ESP + 0xcc]      ; 0051d828
    MOV dword ptr [ESP + 0xc8],EAX      ; 0051d82f
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0051d836
    INC EBX                             ; 0051d83d
    ADD EDX,0x10                        ; 0051d83e
    MOV ECX,dword ptr [EAX + 0x28558]   ; 0051d841
    MOV dword ptr [ESP + 0xcc],EDX      ; 0051d847
    CMP EBX,ECX                         ; 0051d84e
    JL 0x0051d805                       ; 0051d850
        ;   XREF to: 0051d805 (CONDITIONAL_JUMP)  ; LAB_0051d805
    CMP dword ptr [EBP + 0x20],0x0      ; 0051d852
        ;   Label: LAB_0051d852
    JL 0x0051d8fb                       ; 0051d856
        ;   XREF to: 0051d8fb (CONDITIONAL_JUMP)  ; LAB_0051d8fb
    MOV ESP,EBP                         ; 0051d85c
    POP EBP                             ; 0051d85e
    POP EDI                             ; 0051d85f
    POP ESI                             ; 0051d860
    POP EBX                             ; 0051d861
    RET                                 ; 0051d862
    MOV EDX,dword ptr [EBP + 0x14]      ; 0051d863
        ;   Label: LAB_0051d863
    PUSH EDX                            ; 0051d866
    PUSH EAX                            ; 0051d867
    PUSH dword ptr [EBP + 0x1c]         ; 0051d868
    PUSH ESI                            ; 0051d86b
    PUSH EBX                            ; 0051d86c
    CALL dword ptr [EBP + 0x24]         ; 0051d86d
    MOV dword ptr [ESP + 0xe4],EAX      ; 0051d870
    FLD float ptr [ESP + 0xe4]          ; 0051d877
    ADD ESP,0x14                        ; 0051d87e
    FMUL float ptr [ESP + 0xc0]         ; 0051d881
    FST float ptr [ESP]                 ; 0051d888
    FABS                                ; 0051d88b
    FCOMP double ptr [0x00591bcb]       ; 0051d88d | DAT_00591bcb
    FNSTSW AX                           ; 0051d893
    SAHF                                ; 0051d895
    JBE 0x0051d81e                      ; 0051d896
        ;   XREF to: 0051d81e (CONDITIONAL_JUMP)  ; LAB_0051d81e
    LEA EAX,[ESP + 0xb4]                ; 0051d898
    PUSH EAX                            ; 0051d89f
    LEA ESI,[ESP + 0xa8]                ; 0051d8a0
    PUSH dword ptr [ESP + 0x4]          ; 0051d8a7
    LEA EDI,[ESP + 0x8c]                ; 0051d8ab
    CALL FUN_0055d560                   ; 0051d8b2
        ;   XREF to: 0055d560 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d560()
    LEA ESI,[ESP + 0xac]                ; 0051d8b7
    ADD ESP,0x8                         ; 0051d8be
    LEA EAX,[ESP + 0x84]                ; 0051d8c1
    MOVSD ES:EDI,ESI                    ; 0051d8c8
    MOVSD ES:EDI,ESI                    ; 0051d8c9
    MOVSD ES:EDI,ESI                    ; 0051d8ca
    MOVSD ES:EDI,ESI                    ; 0051d8cb
    PUSH EAX                            ; 0051d8cc
    MOV ESI,dword ptr [ESP + 0xd0]      ; 0051d8cd
    PUSH ESI                            ; 0051d8d4
    LEA ESI,[ESP + 0x6c]                ; 0051d8d5
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 0051d8d9
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_0055d130()
    ADD ESP,0x8                         ; 0051d8de
    MOV EDI,dword ptr [ESP + 0xc8]      ; 0051d8e1
    LEA ESI,[ESP + 0x64]                ; 0051d8e8
    LEA EDI,[EDI + 0x6b0]               ; 0051d8ec
    MOVSD ES:EDI,ESI                    ; 0051d8f2
    MOVSD ES:EDI,ESI                    ; 0051d8f3
    MOVSD ES:EDI,ESI                    ; 0051d8f4
    MOVSD ES:EDI,ESI                    ; 0051d8f5
    JMP 0x0051d81e                      ; 0051d8f6
        ;   XREF to: 0051d81e (UNCONDITIONAL_JUMP)  ; LAB_0051d81e
    FLD float ptr [ESP + 0xc0]          ; 0051d8fb
        ;   Label: LAB_0051d8fb
    LEA EAX,[ESP + 0xb4]                ; 0051d902
    FMUL float ptr [EBP + 0x1c]         ; 0051d909
    PUSH EAX                            ; 0051d90c
    LEA ESI,[ESP + 0x78]                ; 0051d90d
    SUB ESP,0x4                         ; 0051d911
    LEA EDI,[ESP + 0x9c]                ; 0051d914
    FSTP float ptr [ESP]                ; 0051d91b
    CALL FUN_0055d560                   ; 0051d91e
        ;   XREF to: 0055d560 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d560()
    LEA ESI,[ESP + 0x7c]                ; 0051d923
    ADD ESP,0x8                         ; 0051d927
    LEA EAX,[ESP + 0x94]                ; 0051d92a
    MOVSD ES:EDI,ESI                    ; 0051d931
    MOVSD ES:EDI,ESI                    ; 0051d932
    MOVSD ES:EDI,ESI                    ; 0051d933
    MOVSD ES:EDI,ESI                    ; 0051d934
    PUSH EAX                            ; 0051d935
    LEA ESI,[ESP + 0x38]                ; 0051d936
    CALL core_xform.cpp_quaternionToMatrix3x4_FUN_0055ced0 ; 0051d93a
        ;   XREF to: 0055ced0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionToMatrix3x4_FUN_0055ced0()
    ADD ESP,0x4                         ; 0051d93f
    LEA EAX,[ESP + 0x4]                 ; 0051d942
    LEA EDI,[ESP + 0x4]                 ; 0051d946
    PUSH EAX                            ; 0051d94a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051d94b
    MOV ECX,0xc                         ; 0051d94e
    ADD EAX,0x6a4                       ; 0051d953
    LEA ESI,[ESP + 0x38]                ; 0051d958
    PUSH EAX                            ; 0051d95c
    MOVSD.REP ES:EDI,ESI                ; 0051d95d
    CALL core_xform.cpp_transformVector3x4InPlace_FUN_0055a910 ; 0051d95f
        ;   XREF to: 0055a910 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4InPlace_FUN_0055a910()
    ADD ESP,0x8                         ; 0051d964
    MOV ESP,EBP                         ; 0051d967
    POP EBP                             ; 0051d969
    POP EDI                             ; 0051d96a
    POP ESI                             ; 0051d96b
    POP EBX                             ; 0051d96c
    RET                                 ; 0051d96d

