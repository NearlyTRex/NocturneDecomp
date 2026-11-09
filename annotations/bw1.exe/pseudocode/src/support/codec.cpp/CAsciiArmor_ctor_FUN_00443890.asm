; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAsciiArmor * support_codec_cpp_CAsciiArmor_ctor_FUN_00443890(CAsciiArmor *this_ptr)
;
; Parameters:
; CAsciiArmor *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   support_codec.cpp_CCodec_ctor_FUN_00442ba0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00443890
        ;   Label: support_codec.cpp_CAsciiArmor_ctor_FUN_00443890
    PUSH EDX                            ; 00443894
    CALL support_codec.cpp_CCodec_ctor_FUN_00442ba0 ; 00443895
        ;   XREF to: 00442ba0 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_ctor_FUN_00442ba0(CCodec * this_ptr)
    ADD ESP,0x4                         ; 0044389a
    MOV dword ptr [EAX],0x5fd9e4        ; 0044389d
    RET                                 ; 004438a3

