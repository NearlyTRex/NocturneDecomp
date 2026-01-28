; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CLZWDictionary * __cdecl support_codec_cpp_CLZWDictionary_ctor_FUN_0043edd0(CLZWDictionary *this_ptr)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   support_codec.cpp_CLZWCompress_ctor_FUN_0043f2d0 at 0043f2e1
;   support_codec.cpp_CLZWDecompress_ctor_FUN_0043f490 at 0043f4a1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043edd0
        ;   Label: support_codec.cpp_CLZWDictionary_ctor_FUN_0043edd0
    MOV dword ptr [EAX + 0xc],0x0       ; 0043edd4
    MOV dword ptr [EAX + 0x10],0x0      ; 0043eddb
    MOV EDX,dword ptr [EAX + 0xc]       ; 0043ede2
    MOV dword ptr [EAX],EDX             ; 0043ede5
    RET                                 ; 0043ede7

