; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_CCheesyCipher_advanceKey_FUN_00443b70(CCheesyCipher *this_ptr)
;
; Parameters:
; CCheesyCipher *  Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   support_codec.cpp_CCheesyCipher_setKey_FUN_00443a50 at 00443a62
;   support_codec.cpp_CCheesyCipher_transformByte_FUN_00443a80 at 00443a86
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00443b70
        ;   Label: support_codec.cpp_CCheesyCipher_advanceKey_FUN_00443b70
    IMUL EAX,dword ptr [EDX + 0x8],0x2ff0bd ; 00443b74
    INC EAX                             ; 00443b7b
    AND EAX,0xffffff                    ; 00443b7c
    MOV dword ptr [EDX + 0x8],EAX       ; 00443b81
    RET                                 ; 00443b84

