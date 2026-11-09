; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCodec * __cdecl support_codec_cpp_CCodec_ctor_FUN_00442ba0(CCodec *this_ptr)
;
; Parameters:
; CCodec *         Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   support_codec.cpp_CAsciiArmor_ctor_FUN_00443890 at 00443895
;   support_codec.cpp_CAsciiUnarmor_ctor_FUN_00443990 at 00443995
;   support_codec.cpp_CLZWCompress_ctor_FUN_00443490 at 00443495
;   support_codec.cpp_CLZWDecompress_ctor_FUN_004436b0 at 004436b5
;   support_codec.cpp_FUN_00443a00 at 00443a07
;
; Referenced Globals:
;   void* PTR_support_codec.cpp_CCodec_dtor_FUN_00442bb0_005fd954 = 00442bb0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00442ba0
        ;   Label: support_codec.cpp_CCodec_ctor_FUN_00442ba0
    MOV dword ptr [EAX],0x5fd954        ; 00442ba4 | PTR_support_codec.cpp_CCodec_dtor_FUN_00442bb0_005fd954
    RET                                 ; 00442baa

