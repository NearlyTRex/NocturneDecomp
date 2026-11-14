; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CSkeleton_calculateFrameDataSize_FUN_00541000(CSkeleton *this_ptr)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_skeleton.cpp_getMemoryStats_FUN_005490d0 at 005490ed
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00541000
        ;   Label: core_skeleton.cpp_CSkeleton_calculateFrameDataSize_FUN_00541000
    MOV EAX,dword ptr [EDX + 0x1d1f8]   ; 00541004
    SHL EAX,0x4                         ; 0054100a
    MOV ECX,dword ptr [EDX + 0x1e00c]   ; 0054100d
    ADD EAX,0x18                        ; 00541013
    IMUL EAX,ECX                        ; 00541016
    RET                                 ; 00541019

