; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CSkeleton_calculateFrameDataSize_FUN_00563670(CSkeleton *this_ptr)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_skeleton.cpp_getMemoryStats_FUN_0056b780 at 0056b79d
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00563670
        ;   Label: core_skeleton.cpp_CSkeleton_calculateFrameDataSize_FUN_00563670
    MOV EAX,dword ptr [EDX + 0x1de78]   ; 00563674
    SHL EAX,0x4                         ; 0056367a
    MOV ECX,dword ptr [EDX + 0x1ec8c]   ; 0056367d
    ADD EAX,0x18                        ; 00563683
    IMUL EAX,ECX                        ; 00563686
    RET                                 ; 00563689

