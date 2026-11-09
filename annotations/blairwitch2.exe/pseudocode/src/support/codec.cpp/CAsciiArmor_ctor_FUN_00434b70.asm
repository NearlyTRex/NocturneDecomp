; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAsciiArmor * support_codec_cpp_CAsciiArmor_ctor_FUN_00434b70(CAsciiArmor *this_ptr)
;
; Parameters:
; CAsciiArmor *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   support_codec.cpp_CCodec_ctor_FUN_00433e80
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00434b70
        ;   Label: support_codec.cpp_CAsciiArmor_ctor_FUN_00434b70
    PUSH EDX                            ; 00434b74
    CALL support_codec.cpp_CCodec_ctor_FUN_00433e80 ; 00434b75
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_ctor_FUN_00433e80(CCodec * this_ptr)
    ADD ESP,0x4                         ; 00434b7a
    MOV dword ptr [EAX],0x5f42b4        ; 00434b7d
    RET                                 ; 00434b83

