; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCodec * __cdecl support_codec_cpp_CCodec_ctor_FUN_0043e9a0(CCodec *this_ptr)
;
; Parameters:
; CCodec *         Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   support_codec.cpp_CLZWCompress_ctor_FUN_0043f2d0 at 0043f2d5
;   support_codec.cpp_CLZWDecompress_ctor_FUN_0043f490 at 0043f495
;
; Referenced Globals:
;   CCodec_vtable g_CCodecVTable
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043e9a0
        ;   Label: support_codec.cpp_CCodec_ctor_FUN_0043e9a0
    MOV dword ptr [EAX],0x65bbc4        ; 0043e9a4 | g_CCodecVTable
    RET                                 ; 0043e9aa

