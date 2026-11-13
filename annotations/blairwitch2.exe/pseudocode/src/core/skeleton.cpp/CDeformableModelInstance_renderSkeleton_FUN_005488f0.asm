; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderSkeleton_FUN_005488f0(CDeformableModelInstance *this_ptr,int color,int render_flags)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   color
; int              Stack[0xc]:4   render_flags
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_005424b0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005488f0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_renderSkeleton_FUN_005488f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005488f1
    MOV ECX,dword ptr [ESP + 0x10]      ; 005488f5
    PUSH ECX                            ; 005488f9
    LEA EAX,[EDX + 0xe80]               ; 005488fa
    PUSH EAX                            ; 00548900
    MOV EBX,dword ptr [ESP + 0x14]      ; 00548901
    PUSH EBX                            ; 00548905
    PUSH EDX                            ; 00548906
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 00548907
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054890c
    PUSH EAX                            ; 0054890f
    CALL core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_005424b0 ; 00548910
        ;   XREF to: 005424b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_005424b0(CDeformableModel * this_ptr, int color, CMatrix3x4f * bone_matrices, int render_flags)
    ADD ESP,0x10                        ; 00548915
    POP EBX                             ; 00548918
    RET                                 ; 00548919

