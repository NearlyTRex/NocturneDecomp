; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_005481d0(CSkeleton *this_ptr,int start_bone_index,int target_bone_index)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   start_bone_index
; int              Stack[0xc]:4   target_bone_index
;
; XREF[7]:
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170 at 0054e1e2
;   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0054d8f0 at 0054d948
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90 at 0054cd34
;   core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0054d3f0 at 0054d48d
;   core_skeleton.cpp_CDeformableModelInstance_copyBoneRotations_FUN_0054d880 at 0054d8ae
;   core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_0054e340 at 0054e366
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0054c1b0 at 0054c244
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005481d0
        ;   Label: core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_005481d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005481d1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005481d5
    MOV ECX,dword ptr [ESP + 0x10]      ; 005481d9
    XOR EDX,EDX                         ; 005481dd
    CMP EAX,ECX                         ; 005481df
    JZ 0x005481f6                       ; 005481e1
        ;   XREF to: 005481f6 (CONDITIONAL_JUMP)  ; LAB_005481f6
    IMUL EAX,EAX,0x24                   ; 005481e3
        ;   Label: LAB_005481e3
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x1de9c] ; 005481e6
    INC EDX                             ; 005481ed
    TEST EAX,EAX                        ; 005481ee
    JL 0x005481fa                       ; 005481f0
        ;   XREF to: 005481fa (CONDITIONAL_JUMP)  ; LAB_005481fa
    CMP EAX,ECX                         ; 005481f2
    JNZ 0x005481e3                      ; 005481f4
        ;   XREF to: 005481e3 (CONDITIONAL_JUMP)  ; LAB_005481e3
    MOV EAX,EDX                         ; 005481f6
        ;   Label: LAB_005481f6
    POP EBX                             ; 005481f8
    RET                                 ; 005481f9
    TEST ECX,ECX                        ; 005481fa
        ;   Label: LAB_005481fa
    JL 0x005481f6                       ; 005481fc
        ;   XREF to: 005481f6 (CONDITIONAL_JUMP)  ; LAB_005481f6
    MOV EDX,0xffffffff                  ; 005481fe
    MOV EAX,EDX                         ; 00548203
    POP EBX                             ; 00548205
    RET                                 ; 00548206

