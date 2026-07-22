; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_0051d970(int param_1,float param_2,undefined4 param_3)
;
;
; XREF[1]:
;   core_charactr.cpp_FUN_004270e0 at 004271a3
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051d970
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_0051d970
    PUSH ESI                            ; 0051d971
    PUSH EDI                            ; 0051d972
    PUSH EBP                            ; 0051d973
    MOV ESI,dword ptr [ESP + 0x14]      ; 0051d974
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0051d978
    PUSH ESI                            ; 0051d97c
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0051d97d
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    XOR EBX,EBX                         ; 0051d982
    ADD ESP,0x4                         ; 0051d984
    MOV EDX,dword ptr [EAX + 0x28558]   ; 0051d987
    MOV EDI,EAX                         ; 0051d98d
    TEST EDX,EDX                        ; 0051d98f
    JLE 0x0051d9c0                      ; 0051d991
        ;   XREF to: 0051d9c0 (CONDITIONAL_JUMP)  ; LAB_0051d9c0
    PUSH EBP                            ; 0051d993
        ;   Label: LAB_0051d993
    PUSH EBX                            ; 0051d994
    PUSH EDI                            ; 0051d995
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10 ; 0051d996
        ;   XREF to: 00517b10 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10()
    ADD ESP,0xc                         ; 0051d99b
    TEST EAX,EAX                        ; 0051d99e
    JL 0x0051d9b2                       ; 0051d9a0
        ;   XREF to: 0051d9b2 (CONDITIONAL_JUMP)  ; LAB_0051d9b2
    FLD float ptr [ESI + 0xcf0]         ; 0051d9a2
    FMUL float ptr [ESP + 0x18]         ; 0051d9a8
    FSTP float ptr [ESI + 0xcf0]        ; 0051d9ac
    INC EBX                             ; 0051d9b2
        ;   Label: LAB_0051d9b2
    MOV ECX,dword ptr [EDI + 0x28558]   ; 0051d9b3
    ADD ESI,0x4                         ; 0051d9b9
    CMP EBX,ECX                         ; 0051d9bc
    JL 0x0051d993                       ; 0051d9be
        ;   XREF to: 0051d993 (CONDITIONAL_JUMP)  ; LAB_0051d993
    POP EBP                             ; 0051d9c0
        ;   Label: LAB_0051d9c0
    POP EDI                             ; 0051d9c1
    POP ESI                             ; 0051d9c2
    POP EBX                             ; 0051d9c3
    RET                                 ; 0051d9c4

