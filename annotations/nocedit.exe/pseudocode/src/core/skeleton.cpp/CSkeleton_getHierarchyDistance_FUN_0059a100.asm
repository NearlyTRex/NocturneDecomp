; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   start_bone_index
; int              Stack[0xc]:4   target_bone_index
;
; XREF[7]:
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 at 0059ff92
;   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750 at 0059f7a8
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 at 0059ef33
;   core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260 at 0059f582
;   core_skeleton.cpp_CDeformableModelInstance_copyBoneRotations_FUN_0059f6e0 at 0059f70e
;   core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_005a00f0 at 005a0116
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0 at 0059e682
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059a100
        ;   Label: core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059a101
    MOV EAX,dword ptr [ESP + 0xc]       ; 0059a105
    MOV ECX,dword ptr [ESP + 0x10]      ; 0059a109
    XOR EDX,EDX                         ; 0059a10d
    CMP EAX,ECX                         ; 0059a10f
    JZ 0x0059a126                       ; 0059a111 | LAB_0059a126
        ;   XREF to: 0059a126 (CONDITIONAL_JUMP)
    IMUL EAX,EAX,0x24                   ; 0059a113
        ;   Label: LAB_0059a113
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x2857c] ; 0059a116
    INC EDX                             ; 0059a11d
    TEST EAX,EAX                        ; 0059a11e
    JL 0x0059a12a                       ; 0059a120 | LAB_0059a12a
        ;   XREF to: 0059a12a (CONDITIONAL_JUMP)
    CMP EAX,ECX                         ; 0059a122
    JNZ 0x0059a113                      ; 0059a124 | LAB_0059a113
        ;   XREF to: 0059a113 (CONDITIONAL_JUMP)
    MOV EAX,EDX                         ; 0059a126
        ;   Label: LAB_0059a126
    POP EBX                             ; 0059a128
    RET                                 ; 0059a129
    TEST ECX,ECX                        ; 0059a12a
        ;   Label: LAB_0059a12a
    JL 0x0059a126                       ; 0059a12c | LAB_0059a126
        ;   XREF to: 0059a126 (CONDITIONAL_JUMP)
    MOV EDX,0xffffffff                  ; 0059a12e
    MOV EAX,EDX                         ; 0059a133
    POP EBX                             ; 0059a135
    RET                                 ; 0059a136

