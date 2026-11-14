; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CQuaternion4f * __cdecl core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00540f10(CSkeleton *this_ptr,int bone_index,int frame_index)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_index
; int              Stack[0xc]:4   frame_index
;
; XREF[2]:
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_00544f80 at 005455c8
;   core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00540f30 at 00540f69
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00540f10
        ;   Label: core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00540f10
    MOV EAX,dword ptr [ESP + 0xc]       ; 00540f14
    IMUL EAX,dword ptr [EDX + 0x1d1f8]  ; 00540f18
    ADD EAX,dword ptr [ESP + 0x8]       ; 00540f1f
    MOV EDX,dword ptr [EDX + 0x1e010]   ; 00540f23
    SHL EAX,0x4                         ; 00540f29
    ADD EAX,EDX                         ; 00540f2c
    RET                                 ; 00540f2e

