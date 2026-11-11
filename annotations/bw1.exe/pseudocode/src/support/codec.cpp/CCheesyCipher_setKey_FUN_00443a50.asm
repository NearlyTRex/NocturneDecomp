; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_CCheesyCipher_setKey_FUN_00443a50(CCheesyCipher *this_ptr,uint param_2)
;
; Parameters:
; CCheesyCipher *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   param_2
;
; XREF[1]:
;   support_codec.cpp_CCheesyCipher_ctor_FUN_00443a00 at 00443a2b
;
; Called Functions:
;   support_codec.cpp_CCheesyCipher_advanceKey_FUN_00443b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443a50
        ;   Label: support_codec.cpp_CCheesyCipher_setKey_FUN_00443a50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00443a51
    MOV EAX,dword ptr [ESP + 0xc]       ; 00443a55
    AND EAX,0xffffff                    ; 00443a59
    PUSH EBX                            ; 00443a5e
    MOV dword ptr [EBX + 0x8],EAX       ; 00443a5f
    CALL support_codec.cpp_CCheesyCipher_advanceKey_FUN_00443b70 ; 00443a62
        ;   XREF to: 00443b70 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CCheesyCipher_advanceKey_FUN_00443b70(CCheesyCipher * this_ptr)
    ADD ESP,0x4                         ; 00443a67
    PUSH EBX                            ; 00443a6a
    CALL support_codec.cpp_CCheesyCipher_advanceKey_FUN_00443b70 ; 00443a6b
        ;   XREF to: 00443b70 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CCheesyCipher_advanceKey_FUN_00443b70(CCheesyCipher * this_ptr)
    ADD ESP,0x4                         ; 00443a70
    POP EBX                             ; 00443a73
    RET                                 ; 00443a74

