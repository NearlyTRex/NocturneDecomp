; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00517b10(int param_1,int param_2,int param_3)
;
;
; XREF[7]:
;   FUN_0051cf60 at 0051cf8e
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0 at 0051d812
;   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0 at 0051d028
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0 at 0051c474
;   core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0051cae0 at 0051cb78
;   core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_0051d970 at 0051d996
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0051b920 at 0051b9b4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517b10
        ;   Label: core_skeleton.cpp_CSkeleton_getHierarchyDistance_FUN_00517b10
    MOV EBX,dword ptr [ESP + 0x8]       ; 00517b11
    MOV EAX,dword ptr [ESP + 0xc]       ; 00517b15
    MOV ECX,dword ptr [ESP + 0x10]      ; 00517b19
    XOR EDX,EDX                         ; 00517b1d
    CMP EAX,ECX                         ; 00517b1f
    JZ 0x00517b36                       ; 00517b21
        ;   XREF to: 00517b36 (CONDITIONAL_JUMP)  ; LAB_00517b36
    IMUL EAX,EAX,0x24                   ; 00517b23
        ;   Label: LAB_00517b23
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x2857c] ; 00517b26
    INC EDX                             ; 00517b2d
    TEST EAX,EAX                        ; 00517b2e
    JL 0x00517b3a                       ; 00517b30
        ;   XREF to: 00517b3a (CONDITIONAL_JUMP)  ; LAB_00517b3a
    CMP EAX,ECX                         ; 00517b32
    JNZ 0x00517b23                      ; 00517b34
        ;   XREF to: 00517b23 (CONDITIONAL_JUMP)  ; LAB_00517b23
    MOV EAX,EDX                         ; 00517b36
        ;   Label: LAB_00517b36
    POP EBX                             ; 00517b38
    RET                                 ; 00517b39
    TEST ECX,ECX                        ; 00517b3a
        ;   Label: LAB_00517b3a
    JL 0x00517b36                       ; 00517b3c
        ;   XREF to: 00517b36 (CONDITIONAL_JUMP)  ; LAB_00517b36
    MOV EDX,0xffffffff                  ; 00517b3e
    MOV EAX,EDX                         ; 00517b43
    POP EBX                             ; 00517b45
    RET                                 ; 00517b46

