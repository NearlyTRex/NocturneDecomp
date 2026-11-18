; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_CCheesyCipher_setMode_FUN_00434d20(CCheesyCipher *this_ptr,int mode)
;
; Parameters:
; CCheesyCipher *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   mode
;
; XREF[1]:
;   support_codec.cpp_CCheesyCipher_ctor_FUN_00434ce0 at 00434cfd
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00434d20
        ;   Label: support_codec.cpp_CCheesyCipher_setMode_FUN_00434d20
    MOV EAX,dword ptr [ESP + 0x8]       ; 00434d24
    MOV dword ptr [EDX + 0x4],EAX       ; 00434d28
    RET                                 ; 00434d2b

