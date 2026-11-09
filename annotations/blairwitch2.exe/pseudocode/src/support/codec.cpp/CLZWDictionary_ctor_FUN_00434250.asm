; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLZWDictionary * __cdecl support_codec_cpp_CLZWDictionary_ctor_FUN_00434250(CLZWDictionary *this_ptr)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   support_codec.cpp_CLZWCompress_ctor_FUN_00434770 at 00434781
;   support_codec.cpp_CLZWDecompress_ctor_FUN_00434990 at 004349a1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00434250
        ;   Label: support_codec.cpp_CLZWDictionary_ctor_FUN_00434250
    MOV dword ptr [EAX + 0xc],0x0       ; 00434254
    MOV dword ptr [EAX + 0x10],0x0      ; 0043425b
    MOV EDX,dword ptr [EAX + 0xc]       ; 00434262
    MOV dword ptr [EAX],EDX             ; 00434265
    RET                                 ; 00434267

