; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0051b8f0(CDeformableModelInstance *this_ptr,int motion_index,float frame_number)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   motion_index
; float            Stack[0xc]:4   frame_number
;
; XREF[2]:
;   core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_0051de60 at 0051de9e
;   core_stranger.cpp_CStranger_setup_FUN_00535450 at 0053568a
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0051b920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b8f0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0051b8f0
    PUSH -0x1                           ; 0051b8f1
    MOV EDX,dword ptr [ESP + 0x10]      ; 0051b8f3
    PUSH dword ptr [ESP + 0x14]         ; 0051b8f7
    PUSH EDX                            ; 0051b8fb
    MOV ECX,dword ptr [ESP + 0x14]      ; 0051b8fc
    PUSH ECX                            ; 0051b900
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0051b920 ; 0051b901
        ;   XREF to: 0051b920 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0051b920(CDeformableModelInstance * this_ptr, int motion_index, float frame_number, int bone_index)
    ADD ESP,0x10                        ; 0051b906
    MOV EBX,dword ptr [ESP + 0x8]       ; 0051b909
    PUSH EBX                            ; 0051b90d
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0 ; 0051b90e
        ;   XREF to: 0051d3c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051b913
    POP EBX                             ; 0051b916
    RET                                 ; 0051b917

