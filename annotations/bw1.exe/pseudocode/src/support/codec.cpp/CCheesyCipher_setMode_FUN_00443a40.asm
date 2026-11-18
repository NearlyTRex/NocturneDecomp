; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_CCheesyCipher_setMode_FUN_00443a40(CCheesyCipher *this_ptr,int mode)
;
; Parameters:
; CCheesyCipher *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   mode
;
; XREF[1]:
;   support_codec.cpp_CCheesyCipher_ctor_FUN_00443a00 at 00443a1d
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00443a40
        ;   Label: support_codec.cpp_CCheesyCipher_setMode_FUN_00443a40
    MOV EAX,dword ptr [ESP + 0x8]       ; 00443a44
    MOV dword ptr [EDX + 0x4],EAX       ; 00443a48
    RET                                 ; 00443a4b

