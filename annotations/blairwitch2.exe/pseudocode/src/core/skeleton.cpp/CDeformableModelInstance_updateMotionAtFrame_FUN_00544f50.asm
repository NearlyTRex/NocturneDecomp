; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_00544f50(CDeformableModelInstance *this_ptr,int motion_index,float frame_number)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   motion_index
; float            Stack[0xc]:4   frame_number
;
; XREF[3]:
;   core_doc.cpp_CDoc_setup_FUN_00450620 at 0045085f
;   core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_00547620 at 0054765e
;   core_stranger.cpp_CStranger_setup_FUN_00562b90 at 00562dcb
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_00544f80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544f50
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_00544f50
    PUSH -0x1                           ; 00544f51
    MOV EDX,dword ptr [ESP + 0x10]      ; 00544f53
    PUSH dword ptr [ESP + 0x14]         ; 00544f57
    PUSH EDX                            ; 00544f5b
    MOV ECX,dword ptr [ESP + 0x14]      ; 00544f5c
    PUSH ECX                            ; 00544f60
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_00544f80 ; 00544f61
        ;   XREF to: 00544f80 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_00544f80(CDeformableModelInstance * this_ptr, int motion_index, float frame_number, int bone_index)
    ADD ESP,0x10                        ; 00544f66
    MOV EBX,dword ptr [ESP + 0x8]       ; 00544f69
    PUSH EBX                            ; 00544f6d
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0 ; 00544f6e
        ;   XREF to: 00546ae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00544f73
    POP EBX                             ; 00544f76
    RET                                 ; 00544f77

