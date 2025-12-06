; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeleton.cpp_CDeformableModelInstance_copyBoneRotations_FUN_0059f6e0(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, int bone_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CQuaternion4f *  Stack[0x8]:4   source_quaternions
; int              Stack[0xc]:4   bone_index
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059f6e0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_copyBoneRotations_FUN_0059f6e0
    PUSH ESI                            ; 0059f6e1
    PUSH EDI                            ; 0059f6e2
    PUSH EBP                            ; 0059f6e3
    SUB ESP,0x4                         ; 0059f6e4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0059f6e7
    PUSH EBP                            ; 0059f6eb
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0059f6ec | CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)
    XOR EBX,EBX                         ; 0059f6f1
    ADD ESP,0x4                         ; 0059f6f3
    MOV EDX,dword ptr [EAX + 0x28558]   ; 0059f6f6
    MOV dword ptr [ESP],EAX             ; 0059f6fc
    TEST EDX,EDX                        ; 0059f6ff
    JLE 0x0059f739                      ; 0059f701 | LAB_0059f739
        ;   XREF to: 0059f739 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x20]      ; 0059f703
        ;   Label: LAB_0059f703
    PUSH ESI                            ; 0059f707
    PUSH EBX                            ; 0059f708
    MOV EDI,dword ptr [ESP + 0x8]       ; 0059f709
    PUSH EDI                            ; 0059f70d
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100 ; 0059f70e | int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
        ;   XREF to: 0059a100 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0059f713
    TEST EAX,EAX                        ; 0059f716
    JL 0x0059f728                       ; 0059f718 | LAB_0059f728
        ;   XREF to: 0059f728 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0059f71a
    LEA EDI,[EBP + 0x6b0]               ; 0059f71e
    MOVSD ES:EDI,ESI                    ; 0059f724
    MOVSD ES:EDI,ESI                    ; 0059f725
    MOVSD ES:EDI,ESI                    ; 0059f726
    MOVSD ES:EDI,ESI                    ; 0059f727
    MOV EAX,dword ptr [ESP]             ; 0059f728
        ;   Label: LAB_0059f728
    INC EBX                             ; 0059f72b
    MOV ECX,dword ptr [EAX + 0x28558]   ; 0059f72c
    ADD EBP,0x10                        ; 0059f732
    CMP EBX,ECX                         ; 0059f735
    JL 0x0059f703                       ; 0059f737 | LAB_0059f703
        ;   XREF to: 0059f703 (CONDITIONAL_JUMP)
    ADD ESP,0x4                         ; 0059f739
        ;   Label: LAB_0059f739
    POP EBP                             ; 0059f73c
    POP EDI                             ; 0059f73d
    POP ESI                             ; 0059f73e
    POP EBX                             ; 0059f73f
    RET                                 ; 0059f740

