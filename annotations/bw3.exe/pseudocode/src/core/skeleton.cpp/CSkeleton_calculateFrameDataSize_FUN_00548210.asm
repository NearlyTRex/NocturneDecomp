; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CSkeleton_calculateFrameDataSize_FUN_00548210(CSkeleton *this_ptr)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_skeleton.cpp_getMemoryStats_FUN_00550310 at 0055032d
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00548210
        ;   Label: core_skeleton.cpp_CSkeleton_calculateFrameDataSize_FUN_00548210
    MOV EAX,dword ptr [EDX + 0x1de78]   ; 00548214
    SHL EAX,0x4                         ; 0054821a
    MOV ECX,dword ptr [EDX + 0x1ec8c]   ; 0054821d
    ADD EAX,0x18                        ; 00548223
    IMUL EAX,ECX                        ; 00548226
    RET                                 ; 00548229

