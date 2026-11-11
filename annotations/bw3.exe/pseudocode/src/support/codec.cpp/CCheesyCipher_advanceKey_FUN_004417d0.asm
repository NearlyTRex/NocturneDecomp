; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_CCheesyCipher_advanceKey_FUN_004417d0(CCheesyCipher *this_ptr)
;
; Parameters:
; CCheesyCipher *  Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   support_codec.cpp_CCheesyCipher_setKey_FUN_004416b0 at 004416c2
;   support_codec.cpp_FUN_004416e0 at 004416e6
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004417d0
        ;   Label: support_codec.cpp_CCheesyCipher_advanceKey_FUN_004417d0
    IMUL EAX,dword ptr [EDX + 0x8],0x2ff0bd ; 004417d4
    INC EAX                             ; 004417db
    AND EAX,0xffffff                    ; 004417dc
    MOV dword ptr [EDX + 0x8],EAX       ; 004417e1
    RET                                 ; 004417e4

