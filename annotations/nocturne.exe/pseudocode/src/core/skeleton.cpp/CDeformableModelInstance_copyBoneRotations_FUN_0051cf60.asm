; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_copyBoneRotations_FUN_0051cf60(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,int bone_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CQuaternion4f *  Stack[0x8]:4   source_quaternions
; int              Stack[0xc]:4   bone_index
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051cf60
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_copyBoneRotations_FUN_0051cf60
    PUSH ESI                            ; 0051cf61
    PUSH EDI                            ; 0051cf62
    PUSH EBP                            ; 0051cf63
    SUB ESP,0x4                         ; 0051cf64
    MOV EBP,dword ptr [ESP + 0x18]      ; 0051cf67
    PUSH EBP                            ; 0051cf6b
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0051cf6c
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    XOR EBX,EBX                         ; 0051cf71
    ADD ESP,0x4                         ; 0051cf73
    MOV EDX,dword ptr [EAX + 0x28558]   ; 0051cf76
    MOV dword ptr [ESP],EAX             ; 0051cf7c
    TEST EDX,EDX                        ; 0051cf7f
    JLE 0x0051cfb9                      ; 0051cf81
        ;   XREF to: 0051cfb9 (CONDITIONAL_JUMP)  ; LAB_0051cfb9
    MOV ESI,dword ptr [ESP + 0x20]      ; 0051cf83
        ;   Label: LAB_0051cf83
    PUSH ESI                            ; 0051cf87
    PUSH EBX                            ; 0051cf88
    MOV EDI,dword ptr [ESP + 0x8]       ; 0051cf89
    PUSH EDI                            ; 0051cf8d
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10 ; 0051cf8e
        ;   XREF to: 00517b10 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 0051cf93
    TEST EAX,EAX                        ; 0051cf96
    JL 0x0051cfa8                       ; 0051cf98
        ;   XREF to: 0051cfa8 (CONDITIONAL_JUMP)  ; LAB_0051cfa8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0051cf9a
    LEA EDI,[EBP + 0x6b0]               ; 0051cf9e
    MOVSD ES:EDI,ESI                    ; 0051cfa4
    MOVSD ES:EDI,ESI                    ; 0051cfa5
    MOVSD ES:EDI,ESI                    ; 0051cfa6
    MOVSD ES:EDI,ESI                    ; 0051cfa7
    MOV EAX,dword ptr [ESP]             ; 0051cfa8
        ;   Label: LAB_0051cfa8
    INC EBX                             ; 0051cfab
    MOV ECX,dword ptr [EAX + 0x28558]   ; 0051cfac
    ADD EBP,0x10                        ; 0051cfb2
    CMP EBX,ECX                         ; 0051cfb5
    JL 0x0051cf83                       ; 0051cfb7
        ;   XREF to: 0051cf83 (CONDITIONAL_JUMP)  ; LAB_0051cf83
    ADD ESP,0x4                         ; 0051cfb9
        ;   Label: LAB_0051cfb9
    POP EBP                             ; 0051cfbc
    POP EDI                             ; 0051cfbd
    POP ESI                             ; 0051cfbe
    POP EBX                             ; 0051cfbf
    RET                                 ; 0051cfc0

