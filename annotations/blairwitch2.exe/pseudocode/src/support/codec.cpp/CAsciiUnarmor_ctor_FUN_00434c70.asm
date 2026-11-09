; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAsciiUnarmor * support_codec_cpp_CAsciiUnarmor_ctor_FUN_00434c70(CAsciiUnarmor *this_ptr)
;
; Parameters:
; CAsciiUnarmor *  Stack[0x4]:4   this_ptr
;
; Called Functions:
;   support_codec.cpp_CCodec_ctor_FUN_00433e80
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00434c70
        ;   Label: support_codec.cpp_CAsciiUnarmor_ctor_FUN_00434c70
    PUSH EDX                            ; 00434c74
    CALL support_codec.cpp_CCodec_ctor_FUN_00433e80 ; 00434c75
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_ctor_FUN_00433e80(CCodec * this_ptr)
    ADD ESP,0x4                         ; 00434c7a
    MOV dword ptr [EAX],0x5f42e4        ; 00434c7d
    RET                                 ; 00434c83

