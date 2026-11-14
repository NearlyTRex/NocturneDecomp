; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_CCheesyCipher_setKey_FUN_00434d30(CCheesyCipher *this_ptr,uint param_2)
;
; Parameters:
; CCheesyCipher *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   param_2
;
; XREF[1]:
;   support_codec.cpp_CCheesyCipher_ctor_FUN_00434ce0 at 00434d0b
;
; Called Functions:
;   support_codec.cpp_CCheesyCipher_advanceKey_FUN_00434e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434d30
        ;   Label: support_codec.cpp_CCheesyCipher_setKey_FUN_00434d30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00434d31
    MOV EAX,dword ptr [ESP + 0xc]       ; 00434d35
    AND EAX,0xffffff                    ; 00434d39
    PUSH EBX                            ; 00434d3e
    MOV dword ptr [EBX + 0x8],EAX       ; 00434d3f
    CALL support_codec.cpp_CCheesyCipher_advanceKey_FUN_00434e50 ; 00434d42
        ;   XREF to: 00434e50 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CCheesyCipher_advanceKey_FUN_00434e50(CCheesyCipher * this_ptr)
    ADD ESP,0x4                         ; 00434d47
    PUSH EBX                            ; 00434d4a
    CALL support_codec.cpp_CCheesyCipher_advanceKey_FUN_00434e50 ; 00434d4b
        ;   XREF to: 00434e50 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CCheesyCipher_advanceKey_FUN_00434e50(CCheesyCipher * this_ptr)
    ADD ESP,0x4                         ; 00434d50
    POP EBX                             ; 00434d53
    RET                                 ; 00434d54

