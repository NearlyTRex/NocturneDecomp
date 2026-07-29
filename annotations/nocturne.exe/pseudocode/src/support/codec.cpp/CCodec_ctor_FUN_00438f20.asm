; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCodec * __cdecl support_codec_cpp_CCodec_ctor_FUN_00438f20(CCodec *this_ptr)
;
; Parameters:
; CCodec *         Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   support_codec.cpp_CLZWCompress_ctor_FUN_00439830 at 00439835
;   support_codec.cpp_CLZWDecompress_ctor_FUN_004399f0 at 004399f5
;
; Referenced Globals:
;   CCodec_vtable g_CCodecVTable
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00438f20
        ;   Label: support_codec.cpp_CCodec_ctor_FUN_00438f20
    MOV dword ptr [EAX],0x59b3e4        ; 00438f24 | g_CCodecVTable
    RET                                 ; 00438f2a

