; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_0059c1f0(CDeformableModel * this_ptr, CSkeleton * skeleton_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; CSkeleton *      Stack[0x8]:4   skeleton_ptr
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_captureTextures_FUN_0059a780 at 0059a79e
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0059d9e0
;   core_skeleton.cpp_CDeformableModel_computeFarthestChildBones_FUN_0059dbe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c1f0
        ;   Label: core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_0059c1f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059c1f1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0059c1f5
    PUSH EBX                            ; 0059c1f9
    MOV dword ptr [EBX + 0x8fac],EAX    ; 0059c1fa
    CALL core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0059d9e0 ; 0059c200
        ;   XREF to: 0059d9e0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0059d9e0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0059c205
    PUSH EBX                            ; 0059c208
    CALL core_skeleton.cpp_CDeformableModel_computeFarthestChildBones_FUN_0059dbe0 ; 0059c209
        ;   XREF to: 0059dbe0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_computeFarthestChildBones_FUN_0059dbe0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0059c20e
    POP EBX                             ; 0059c211
    RET                                 ; 0059c212

