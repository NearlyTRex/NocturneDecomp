; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_CCheesyCipher_setMode_FUN_004416a0(CCheesyCipher *this_ptr,int param_2)
;
; Parameters:
; CCheesyCipher *  Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
;
; XREF[1]:
;   support_codec.cpp_CCheesyCipher_ctor_FUN_00441660 at 0044167d
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004416a0
        ;   Label: support_codec.cpp_CCheesyCipher_setMode_FUN_004416a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004416a4
    MOV dword ptr [EDX + 0x4],EAX       ; 004416a8
    RET                                 ; 004416ab

