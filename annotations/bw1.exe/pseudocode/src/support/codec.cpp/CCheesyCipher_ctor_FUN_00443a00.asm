; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCodec * __cdecl support_codec_cpp_CCheesyCipher_ctor_FUN_00443a00(CCheesyCipher *this_ptr,undefined4 param_2,undefined4 param_3)
;
; Parameters:
; CCheesyCipher *  Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
;
; Called Functions:
;   support_codec.cpp_CCheesyCipher_setKey_FUN_00443a50
;   support_codec.cpp_CCheesyCipher_setMode_FUN_00443a40
;   support_codec.cpp_CCodec_ctor_FUN_00442ba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443a00
        ;   Label: support_codec.cpp_CCheesyCipher_ctor_FUN_00443a00
    PUSH ESI                            ; 00443a01
    MOV EDX,dword ptr [ESP + 0xc]       ; 00443a02
    PUSH EDX                            ; 00443a06
    CALL support_codec.cpp_CCodec_ctor_FUN_00442ba0 ; 00443a07
        ;   XREF to: 00442ba0 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_ctor_FUN_00442ba0(CCodec * this_ptr)
    ADD ESP,0x4                         ; 00443a0c
    MOV ECX,dword ptr [ESP + 0x10]      ; 00443a0f
    PUSH ECX                            ; 00443a13
    PUSH EAX                            ; 00443a14
    MOV EBX,EAX                         ; 00443a15
    MOV dword ptr [EAX],0x5fda44        ; 00443a17
    CALL support_codec.cpp_CCheesyCipher_setMode_FUN_00443a40 ; 00443a1d
        ;   XREF to: 00443a40 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CCheesyCipher_setMode_FUN_00443a40(CCheesyCipher * this_ptr, undefined4 param_2)
    ADD ESP,0x8                         ; 00443a22
    MOV ESI,dword ptr [ESP + 0x14]      ; 00443a25
    PUSH ESI                            ; 00443a29
    PUSH EBX                            ; 00443a2a
    CALL support_codec.cpp_CCheesyCipher_setKey_FUN_00443a50 ; 00443a2b
        ;   XREF to: 00443a50 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CCheesyCipher_setKey_FUN_00443a50(CCheesyCipher * this_ptr, uint param_2)
    ADD ESP,0x8                         ; 00443a30
    MOV EAX,EBX                         ; 00443a33
    POP ESI                             ; 00443a35
    POP EBX                             ; 00443a36
    RET                                 ; 00443a37

