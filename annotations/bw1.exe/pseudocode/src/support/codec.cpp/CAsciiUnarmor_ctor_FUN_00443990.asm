; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAsciiUnarmor * support_codec_cpp_CAsciiUnarmor_ctor_FUN_00443990(CAsciiUnarmor *this_ptr)
;
; Parameters:
; CAsciiUnarmor *  Stack[0x4]:4   this_ptr
;
; Called Functions:
;   support_codec.cpp_CCodec_ctor_FUN_00442ba0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00443990
        ;   Label: support_codec.cpp_CAsciiUnarmor_ctor_FUN_00443990
    PUSH EDX                            ; 00443994
    CALL support_codec.cpp_CCodec_ctor_FUN_00442ba0 ; 00443995
        ;   XREF to: 00442ba0 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_ctor_FUN_00442ba0(CCodec * this_ptr)
    ADD ESP,0x4                         ; 0044399a
    MOV dword ptr [EAX],0x5fda14        ; 0044399d
    RET                                 ; 004439a3

