; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0(CSkeleton *this_ptr,int start_bone_index,int target_bone_index)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   start_bone_index
; int              Stack[0xc]:4   target_bone_index
;
; XREF[7]:
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40 at 00546fb2
;   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_005466c0 at 00546718
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00545a60 at 00545b04
;   core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_005461c0 at 0054625d
;   core_skeleton.cpp_CDeformableModelInstance_copyBoneRotations_FUN_00546650 at 0054667e
;   core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_00547110 at 00547136
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_00544f80 at 00545014
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540fc0
        ;   Label: core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00540fc1
    MOV EAX,dword ptr [ESP + 0xc]       ; 00540fc5
    MOV ECX,dword ptr [ESP + 0x10]      ; 00540fc9
    XOR EDX,EDX                         ; 00540fcd
    CMP EAX,ECX                         ; 00540fcf
    JZ 0x00540fe6                       ; 00540fd1
        ;   XREF to: 00540fe6 (CONDITIONAL_JUMP)  ; LAB_00540fe6
    IMUL EAX,EAX,0x24                   ; 00540fd3
        ;   Label: LAB_00540fd3
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x1d21c] ; 00540fd6
    INC EDX                             ; 00540fdd
    TEST EAX,EAX                        ; 00540fde
    JL 0x00540fea                       ; 00540fe0
        ;   XREF to: 00540fea (CONDITIONAL_JUMP)  ; LAB_00540fea
    CMP EAX,ECX                         ; 00540fe2
    JNZ 0x00540fd3                      ; 00540fe4
        ;   XREF to: 00540fd3 (CONDITIONAL_JUMP)  ; LAB_00540fd3
    MOV EAX,EDX                         ; 00540fe6
        ;   Label: LAB_00540fe6
    POP EBX                             ; 00540fe8
    RET                                 ; 00540fe9
    TEST ECX,ECX                        ; 00540fea
        ;   Label: LAB_00540fea
    JL 0x00540fe6                       ; 00540fec
        ;   XREF to: 00540fe6 (CONDITIONAL_JUMP)  ; LAB_00540fe6
    MOV EDX,0xffffffff                  ; 00540fee
    MOV EAX,EDX                         ; 00540ff3
    POP EBX                             ; 00540ff5
    RET                                 ; 00540ff6

