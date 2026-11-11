; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCodec * __cdecl support_codec_cpp_CCodec_ctor_FUN_00433e80(CCodec *this_ptr)
;
; Parameters:
; CCodec *         Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   support_codec.cpp_CAsciiArmor_ctor_FUN_00434b70 at 00434b75
;   support_codec.cpp_CAsciiUnarmor_ctor_FUN_00434c70 at 00434c75
;   support_codec.cpp_CCheesyCipher_ctor_FUN_00434ce0 at 00434ce7
;   support_codec.cpp_CLZWCompress_ctor_FUN_00434770 at 00434775
;   support_codec.cpp_CLZWDecompress_ctor_FUN_00434990 at 00434995
;
; Referenced Globals:
;   void* g_CCodecVTable = 00433e90
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00433e80
        ;   Label: support_codec.cpp_CCodec_ctor_FUN_00433e80
    MOV dword ptr [EAX],0x5f4224        ; 00433e84 | g_CCodecVTable
    RET                                 ; 00433e8a

