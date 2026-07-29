; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderBones_FUN_0051f060(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_renderBones_FUN_00519120
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0051f060
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_renderBones_FUN_0051f060
    LEA EAX,[EDX + 0xe80]               ; 0051f064
    PUSH EAX                            ; 0051f06a
    PUSH EDX                            ; 0051f06b
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 0051f06c
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051f071
    PUSH EAX                            ; 0051f074
    CALL core_skeleton.cpp_CDeformableModel_renderBones_FUN_00519120 ; 0051f075
        ;   XREF to: 00519120 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_renderBones_FUN_00519120(CDeformableModel * this_ptr, CMatrix3x4f * bone_matrices)
    ADD ESP,0x8                         ; 0051f07a
    RET                                 ; 0051f07d

