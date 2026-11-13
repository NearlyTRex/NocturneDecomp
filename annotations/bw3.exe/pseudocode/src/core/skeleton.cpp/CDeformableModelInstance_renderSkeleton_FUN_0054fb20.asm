; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderSkeleton_FUN_0054fb20(CDeformableModelInstance *this_ptr,int color,int render_flags)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   color
; int              Stack[0xc]:4   render_flags
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_005496c0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054fb20
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_renderSkeleton_FUN_0054fb20
    MOV EDX,dword ptr [ESP + 0x8]       ; 0054fb21
    MOV ECX,dword ptr [ESP + 0x10]      ; 0054fb25
    PUSH ECX                            ; 0054fb29
    LEA EAX,[EDX + 0xe80]               ; 0054fb2a
    PUSH EAX                            ; 0054fb30
    MOV EBX,dword ptr [ESP + 0x14]      ; 0054fb31
    PUSH EBX                            ; 0054fb35
    PUSH EDX                            ; 0054fb36
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0054fb37
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054fb3c
    PUSH EAX                            ; 0054fb3f
    CALL core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_005496c0 ; 0054fb40
        ;   XREF to: 005496c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_005496c0(CDeformableModel * this_ptr, int color, CMatrix3x4f * bone_matrices, int render_flags)
    ADD ESP,0x10                        ; 0054fb45
    POP EBX                             ; 0054fb48
    RET                                 ; 0054fb49

