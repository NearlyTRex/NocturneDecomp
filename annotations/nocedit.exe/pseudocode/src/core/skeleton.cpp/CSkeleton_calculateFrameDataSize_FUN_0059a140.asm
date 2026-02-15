; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CSkeleton_calculateFrameDataSize_FUN_0059a140(CSkeleton *this_ptr)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_skeleton.cpp_getMemoryStats_FUN_005a1ed0 at 005a1ee8
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059a140
        ;   Label: core_skeleton.cpp_CSkeleton_calculateFrameDataSize_FUN_0059a140
    MOV EAX,dword ptr [EDX + 0x28558]   ; 0059a144
    SHL EAX,0x4                         ; 0059a14a
    MOV ECX,dword ptr [EDX + 0x2936c]   ; 0059a14d
    ADD EAX,0x18                        ; 0059a153
    IMUL EAX,ECX                        ; 0059a156
    RET                                 ; 0059a159

