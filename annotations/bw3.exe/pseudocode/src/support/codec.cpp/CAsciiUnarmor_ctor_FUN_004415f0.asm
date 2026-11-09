; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAsciiUnarmor * support_codec_cpp_CAsciiUnarmor_ctor_FUN_004415f0(CAsciiUnarmor *this_ptr)
;
; Parameters:
; CAsciiUnarmor *  Stack[0x4]:4   this_ptr
;
; Called Functions:
;   support_codec.cpp_CCodec_ctor_FUN_00440800
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004415f0
        ;   Label: support_codec.cpp_CAsciiUnarmor_ctor_FUN_004415f0
    PUSH EDX                            ; 004415f4
    CALL support_codec.cpp_CCodec_ctor_FUN_00440800 ; 004415f5
        ;   XREF to: 00440800 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_ctor_FUN_00440800(CCodec * this_ptr)
    ADD ESP,0x4                         ; 004415fa
    MOV dword ptr [EAX],0x5dd4f4        ; 004415fd
    RET                                 ; 00441603

