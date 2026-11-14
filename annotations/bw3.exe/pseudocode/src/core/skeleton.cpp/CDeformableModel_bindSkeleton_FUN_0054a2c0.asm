; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_bindSkeleton_FUN_0054a2c0(CDeformableModel *this_ptr,CSkeleton *skeleton_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; CSkeleton *      Stack[0x8]:4   skeleton_ptr
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_captureTextures_FUN_00548750 at 0054876e
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0054bb60
;   core_skeleton.cpp_CDeformableModel_computeFarthestChildBones_FUN_0054bd10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054a2c0
        ;   Label: core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_0054a2c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054a2c1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0054a2c5
    PUSH EBX                            ; 0054a2c9
    MOV dword ptr [EBX + 0x35ac],EAX    ; 0054a2ca
    CALL core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0054bb60 ; 0054a2d0
        ;   XREF to: 0054bb60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0054bb60(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0054a2d5
    PUSH EBX                            ; 0054a2d8
    CALL core_skeleton.cpp_CDeformableModel_computeFarthestChildBones_FUN_0054bd10 ; 0054a2d9
        ;   XREF to: 0054bd10 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_computeFarthestChildBones_FUN_0054bd10(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0054a2de
    POP EBX                             ; 0054a2e1
    RET                                 ; 0054a2e2

