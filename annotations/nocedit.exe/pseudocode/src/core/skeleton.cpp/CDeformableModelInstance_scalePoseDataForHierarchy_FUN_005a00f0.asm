; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_005a00f0(CDeformableModelInstance * this_ptr, float scale_factor, int target_bone_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   scale_factor
; int              Stack[0xc]:4   target_bone_index
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_FUN_0042af60 at 0042b023
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a00f0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_005a00f0
    PUSH ESI                            ; 005a00f1
    PUSH EDI                            ; 005a00f2
    PUSH EBP                            ; 005a00f3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005a00f4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005a00f8
    PUSH ESI                            ; 005a00fc
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 005a00fd | CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)
    XOR EBX,EBX                         ; 005a0102
    ADD ESP,0x4                         ; 005a0104
    MOV EDX,dword ptr [EAX + 0x28558]   ; 005a0107
    MOV EDI,EAX                         ; 005a010d
    TEST EDX,EDX                        ; 005a010f
    JLE 0x005a0140                      ; 005a0111 | LAB_005a0140
        ;   XREF to: 005a0140 (CONDITIONAL_JUMP)
    PUSH EBP                            ; 005a0113
        ;   Label: LAB_005a0113
    PUSH EBX                            ; 005a0114
    PUSH EDI                            ; 005a0115
    CALL core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100 ; 005a0116 | int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
        ;   XREF to: 0059a100 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005a011b
    TEST EAX,EAX                        ; 005a011e
    JL 0x005a0132                       ; 005a0120 | LAB_005a0132
        ;   XREF to: 005a0132 (CONDITIONAL_JUMP)
    FLD float ptr [ESI + 0xcf0]         ; 005a0122
    FMUL float ptr [ESP + 0x18]         ; 005a0128
    FSTP float ptr [ESI + 0xcf0]        ; 005a012c
    INC EBX                             ; 005a0132
        ;   Label: LAB_005a0132
    MOV ECX,dword ptr [EDI + 0x28558]   ; 005a0133
    ADD ESI,0x4                         ; 005a0139
    CMP EBX,ECX                         ; 005a013c
    JL 0x005a0113                       ; 005a013e | LAB_005a0113
        ;   XREF to: 005a0113 (CONDITIONAL_JUMP)
    POP EBP                             ; 005a0140
        ;   Label: LAB_005a0140
    POP EDI                             ; 005a0141
    POP ESI                             ; 005a0142
    POP EBX                             ; 005a0143
    RET                                 ; 005a0144

