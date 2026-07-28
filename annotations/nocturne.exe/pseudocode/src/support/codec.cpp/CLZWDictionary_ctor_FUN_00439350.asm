; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLZWDictionary * __cdecl support_codec_cpp_CLZWDictionary_ctor_FUN_00439350(CLZWDictionary *this_ptr)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   support_codec.cpp_CLZWCompress_ctor_FUN_00439830 at 00439841
;   support_codec.cpp_CLZWDecompress_ctor_FUN_004399f0 at 00439a01
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00439350
        ;   Label: support_codec.cpp_CLZWDictionary_ctor_FUN_00439350
    MOV dword ptr [EAX + 0xc],0x0       ; 00439354
    MOV dword ptr [EAX + 0x10],0x0      ; 0043935b
    MOV EDX,dword ptr [EAX + 0xc]       ; 00439362
    MOV dword ptr [EAX],EDX             ; 00439365
    RET                                 ; 00439367

