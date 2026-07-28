; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_CDeformableModelInstance_renderSkeleton_FUN_0051f030(void)
;
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_00518f60
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051f030
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_renderSkeleton_FUN_0051f030
    MOV EDX,dword ptr [ESP + 0x8]       ; 0051f031
    MOV ECX,dword ptr [ESP + 0x10]      ; 0051f035
    PUSH ECX                            ; 0051f039
    LEA EAX,[EDX + 0xe80]               ; 0051f03a
    PUSH EAX                            ; 0051f040
    MOV EBX,dword ptr [ESP + 0x14]      ; 0051f041
    PUSH EBX                            ; 0051f045
    PUSH EDX                            ; 0051f046
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 0051f047
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051f04c
    PUSH EAX                            ; 0051f04f
    CALL core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_00518f60 ; 0051f050
        ;   XREF to: 00518f60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_00518f60(CDeformableModel * this_ptr, int color, CMatrix3x4f * bone_matrices, int render_flags)
    ADD ESP,0x10                        ; 0051f055
    POP EBX                             ; 0051f058
    RET                                 ; 0051f059

