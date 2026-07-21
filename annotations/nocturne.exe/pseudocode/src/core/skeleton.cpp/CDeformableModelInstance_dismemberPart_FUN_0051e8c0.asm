; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_0051e8c0(int param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0 at 00427f0c
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_dismember_FUN_00519ec0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051e8c0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_0051e8c0
    PUSH EDI                            ; 0051e8c1
    PUSH EBP                            ; 0051e8c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0051e8c3
    MOV EDI,dword ptr [ESP + 0x18]      ; 0051e8c7
    CMP dword ptr [ESP + 0x14],0x0      ; 0051e8cb
    JNZ 0x0051e8e1                      ; 0051e8d0
        ;   XREF to: 0051e8e1 (CONDITIONAL_JUMP)  ; LAB_0051e8e1
    MOV dword ptr [EBX + EDI*0x4 + 0x2140],0x0 ; 0051e8d2
    POP EBP                             ; 0051e8dd
    POP EDI                             ; 0051e8de
    POP EBX                             ; 0051e8df
    RET                                 ; 0051e8e0
    PUSH ESI                            ; 0051e8e1
        ;   Label: LAB_0051e8e1
    PUSH EBX                            ; 0051e8e2
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 0051e8e3
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020()
    MOV EDX,EAX                         ; 0051e8e8
    ADD ESP,0x4                         ; 0051e8ea
    MOV ESI,EAX                         ; 0051e8ed
    MOV ECX,dword ptr [EDX]             ; 0051e8ef
    MOV EAX,0x1                         ; 0051e8f1
    CMP ECX,0x2                         ; 0051e8f6
    JL 0x0051e915                       ; 0051e8f9
        ;   XREF to: 0051e915 (CONDITIONAL_JUMP)  ; LAB_0051e915
    LEA EDX,[EAX*0x8 + 0x0]             ; 0051e8fb
        ;   Label: LAB_0051e8fb
    ADD EDX,ESI                         ; 0051e902
    XOR ECX,ECX                         ; 0051e904
    TEST EAX,EAX                        ; 0051e906
        ;   Label: LAB_0051e906
    JLE 0x0051e919                      ; 0051e908
        ;   XREF to: 0051e919 (CONDITIONAL_JUMP)  ; LAB_0051e919
    CMP ECX,dword ptr [EDX + 0x8]       ; 0051e90a
    JZ 0x0051e919                       ; 0051e90d
        ;   XREF to: 0051e919 (CONDITIONAL_JUMP)  ; LAB_0051e919
    DEC EAX                             ; 0051e90f
    SUB EDX,0x8                         ; 0051e910
    JMP 0x0051e906                      ; 0051e913
        ;   XREF to: 0051e906 (UNCONDITIONAL_JUMP)  ; LAB_0051e906
    XOR EAX,EAX                         ; 0051e915
        ;   Label: LAB_0051e915
    JMP 0x0051e8fb                      ; 0051e917
        ;   XREF to: 0051e8fb (UNCONDITIONAL_JUMP)  ; LAB_0051e8fb
    CMP EAX,dword ptr [EBX + 0x2230]    ; 0051e919
        ;   Label: LAB_0051e919
    JZ 0x0051e92b                       ; 0051e91f
        ;   XREF to: 0051e92b (CONDITIONAL_JUMP)  ; LAB_0051e92b
    PUSH EAX                            ; 0051e921
    PUSH EBX                            ; 0051e922
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50 ; 0051e923
        ;   XREF to: 0051da50 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50()
    ADD ESP,0x8                         ; 0051e928
    MOV ECX,dword ptr [EBX + EDI*0x4 + 0x21b8] ; 0051e92b
        ;   Label: LAB_0051e92b
    PUSH ECX                            ; 0051e932
    MOV EBP,dword ptr [EBX + 0x2234]    ; 0051e933
    PUSH EBP                            ; 0051e939
    PUSH EDI                            ; 0051e93a
    MOV EAX,dword ptr [ESP + 0x24]      ; 0051e93b
    PUSH EAX                            ; 0051e93f
    MOV EDX,dword ptr [EBX + 0x2230]    ; 0051e940
    PUSH EDX                            ; 0051e946
    PUSH ESI                            ; 0051e947
    CALL core_skeleton.cpp_CDeformableModel_dismember_FUN_00519ec0 ; 0051e948
        ;   XREF to: 00519ec0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_dismember_FUN_00519ec0()
    ADD ESP,0x18                        ; 0051e94d
    POP ESI                             ; 0051e950
    MOV dword ptr [EBX + EDI*0x4 + 0x2140],0x0 ; 0051e951
    POP EBP                             ; 0051e95c
    POP EDI                             ; 0051e95d
    POP EBX                             ; 0051e95e
    RET                                 ; 0051e95f

