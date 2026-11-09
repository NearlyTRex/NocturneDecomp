; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CQuaternion4f * __cdecl core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00548120(CSkeleton *this_ptr,int bone_index,int frame_index)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_index
; int              Stack[0xc]:4   frame_index
;
; XREF[2]:
;   core_skeleton.cpp_FUN_00548140 at 00548179
;   core_skeleton.cpp_FUN_0054c1b0 at 0054c7f6
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00548120
        ;   Label: core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00548120
    MOV EAX,dword ptr [ESP + 0xc]       ; 00548124
    IMUL EAX,dword ptr [EDX + 0x1de78]  ; 00548128
    ADD EAX,dword ptr [ESP + 0x8]       ; 0054812f
    MOV EDX,dword ptr [EDX + 0x1ec90]   ; 00548133
    SHL EAX,0x4                         ; 00548139
    ADD EAX,EDX                         ; 0054813c
    RET                                 ; 0054813e

