; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050(CSkeleton * this_ptr, int bone_index, int frame_index)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_index
; int              Stack[0xc]:4   frame_index
;
; XREF[2]:
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0 at 0059e6ad
;   core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070 at 0059a0e4
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059a050
        ;   Label: core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
    MOV EAX,dword ptr [ESP + 0xc]       ; 0059a054
    IMUL EAX,dword ptr [EDX + 0x28558]  ; 0059a058
    ADD EAX,dword ptr [ESP + 0x8]       ; 0059a05f
    MOV EDX,dword ptr [EDX + 0x29370]   ; 0059a063
    SHL EAX,0x4                         ; 0059a069
    ADD EAX,EDX                         ; 0059a06c
    RET                                 ; 0059a06e

