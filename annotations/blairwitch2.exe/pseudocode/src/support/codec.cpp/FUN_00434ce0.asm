; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCodec * support_codec_cpp_FUN_00434ce0(CCodec *param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   support_codec.cpp_CCodec_ctor_FUN_00433e80
;   support_codec.cpp_FUN_00434d20
;   support_codec.cpp_FUN_00434d30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434ce0
        ;   Label: support_codec.cpp_FUN_00434ce0
    PUSH ESI                            ; 00434ce1
    MOV EDX,dword ptr [ESP + 0xc]       ; 00434ce2
    PUSH EDX                            ; 00434ce6
    CALL support_codec.cpp_CCodec_ctor_FUN_00433e80 ; 00434ce7
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_ctor_FUN_00433e80(CCodec * this_ptr)
    ADD ESP,0x4                         ; 00434cec
    MOV ECX,dword ptr [ESP + 0x10]      ; 00434cef
    PUSH ECX                            ; 00434cf3
    PUSH EAX                            ; 00434cf4
    MOV EBX,EAX                         ; 00434cf5
    MOV dword ptr [EAX],0x5f4314        ; 00434cf7
    CALL support_codec.cpp_FUN_00434d20 ; 00434cfd
        ;   XREF to: 00434d20 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00434d20()
    ADD ESP,0x8                         ; 00434d02
    MOV ESI,dword ptr [ESP + 0x14]      ; 00434d05
    PUSH ESI                            ; 00434d09
    PUSH EBX                            ; 00434d0a
    CALL support_codec.cpp_FUN_00434d30 ; 00434d0b
        ;   XREF to: 00434d30 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00434d30()
    ADD ESP,0x8                         ; 00434d10
    MOV EAX,EBX                         ; 00434d13
    POP ESI                             ; 00434d15
    POP EBX                             ; 00434d16
    RET                                 ; 00434d17

