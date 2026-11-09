; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLZWDictionary * __cdecl support_codec_cpp_CLZWDictionary_ctor_FUN_00442f70(CLZWDictionary *this_ptr)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   support_codec.cpp_CLZWCompress_ctor_FUN_00443490 at 004434a1
;   support_codec.cpp_CLZWDecompress_ctor_FUN_004436b0 at 004436c1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00442f70
        ;   Label: support_codec.cpp_CLZWDictionary_ctor_FUN_00442f70
    MOV dword ptr [EAX + 0xc],0x0       ; 00442f74
    MOV dword ptr [EAX + 0x10],0x0      ; 00442f7b
    MOV EDX,dword ptr [EAX + 0xc]       ; 00442f82
    MOV dword ptr [EAX],EDX             ; 00442f85
    RET                                 ; 00442f87

