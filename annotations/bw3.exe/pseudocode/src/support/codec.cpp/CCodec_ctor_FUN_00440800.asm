; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCodec * __cdecl support_codec_cpp_CCodec_ctor_FUN_00440800(CCodec *this_ptr)
;
; Parameters:
; CCodec *         Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   support_codec.cpp_CAsciiArmor_ctor_FUN_004414f0 at 004414f5
;   support_codec.cpp_CAsciiUnarmor_ctor_FUN_004415f0 at 004415f5
;   support_codec.cpp_CCheesyCipher_ctor_FUN_00441660 at 00441667
;   support_codec.cpp_CLZWCompress_ctor_FUN_004410f0 at 004410f5
;   support_codec.cpp_CLZWDecompress_ctor_FUN_00441310 at 00441315
;
; Referenced Globals:
;   void* PTR_support_codec.cpp_CCodec_dtor_FUN_00440810_005dd434 = 00440810
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00440800
        ;   Label: support_codec.cpp_CCodec_ctor_FUN_00440800
    MOV dword ptr [EAX],0x5dd434        ; 00440804 | PTR_support_codec.cpp_CCodec_dtor_FUN_00440810_005dd434
    RET                                 ; 0044080a

