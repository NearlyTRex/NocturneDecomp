; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CQuaternion4f * __cdecl core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00563580(CSkeleton *this_ptr,int bone_index,int frame_index)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_index
; int              Stack[0xc]:4   frame_index
;
; XREF[2]:
;   core_skeleton.cpp_FUN_005635a0 at 005635d9
;   core_skeleton.cpp_FUN_00567620 at 00567c66
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00563580
        ;   Label: core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00563580
    MOV EAX,dword ptr [ESP + 0xc]       ; 00563584
    IMUL EAX,dword ptr [EDX + 0x1de78]  ; 00563588
    ADD EAX,dword ptr [ESP + 0x8]       ; 0056358f
    MOV EDX,dword ptr [EDX + 0x1ec90]   ; 00563593
    SHL EAX,0x4                         ; 00563599
    ADD EAX,EDX                         ; 0056359c
    RET                                 ; 0056359e

