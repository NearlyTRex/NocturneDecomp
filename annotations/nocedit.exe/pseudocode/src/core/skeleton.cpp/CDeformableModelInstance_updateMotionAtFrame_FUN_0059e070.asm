; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070(CDeformableModelInstance *this_ptr,int motion_index,float frame_number)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   motion_index
; float            Stack[0xc]:4   frame_number
;
; XREF[4]:
;   core_skeledit.cpp_CDeformableModel_calcRootOffsetScale_FUN_0058e690 at 0058e76b
;   core_skeledit.cpp_CDeformableModel_groundBias_FUN_0058e4e0 at 0058e551
;   core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_005a05e0 at 005a061e
;   core_stranger.cpp_CStranger_setup_FUN_005bb4b0 at 005bb6ea
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059e070
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070
    PUSH -0x1                           ; 0059e071
    MOV EDX,dword ptr [ESP + 0x10]      ; 0059e073
    PUSH dword ptr [ESP + 0x14]         ; 0059e077
    PUSH EDX                            ; 0059e07b
    MOV ECX,dword ptr [ESP + 0x14]      ; 0059e07c
    PUSH ECX                            ; 0059e080
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0 ; 0059e081
        ;   XREF to: 0059e0a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0(CDeformableModelInstance * this_ptr, int motion_index, float frame_number, int bone_index)
    ADD ESP,0x10                        ; 0059e086
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059e089
    PUSH EBX                            ; 0059e08d
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 ; 0059e08e
        ;   XREF to: 0059fb40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059e093
    POP EBX                             ; 0059e096
    RET                                 ; 0059e097

