; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CSkeleton_calculateFrameDataSize_FUN_00517b50(int param_1)
;
;
; XREF[1]:
;   core_skeleton.cpp_FUN_0051f760 at 0051f778
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00517b50
        ;   Label: core_skeleton.cpp_CSkeleton_calculateFrameDataSize_FUN_00517b50
    MOV EAX,dword ptr [EDX + 0x28558]   ; 00517b54
    SHL EAX,0x4                         ; 00517b5a
    MOV ECX,dword ptr [EDX + 0x2936c]   ; 00517b5d
    ADD EAX,0x18                        ; 00517b63
    IMUL EAX,ECX                        ; 00517b66
    RET                                 ; 00517b69

