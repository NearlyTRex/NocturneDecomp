; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAsciiArmor * support_codec_cpp_CAsciiArmor_ctor_FUN_004414f0(CAsciiArmor *this_ptr)
;
; Parameters:
; CAsciiArmor *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   support_codec.cpp_CCodec_ctor_FUN_00440800
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004414f0
        ;   Label: support_codec.cpp_CAsciiArmor_ctor_FUN_004414f0
    PUSH EDX                            ; 004414f4
    CALL support_codec.cpp_CCodec_ctor_FUN_00440800 ; 004414f5
        ;   XREF to: 00440800 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_ctor_FUN_00440800(CCodec * this_ptr)
    ADD ESP,0x4                         ; 004414fa
    MOV dword ptr [EAX],0x5dd4c4        ; 004414fd
    RET                                 ; 00441503

