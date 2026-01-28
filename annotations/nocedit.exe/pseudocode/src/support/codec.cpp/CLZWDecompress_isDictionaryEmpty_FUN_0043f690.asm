; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl support_codec_cpp_CLZWDecompress_isDictionaryEmpty_FUN_0043f690(CLZWDecompress *this_ptr)
;
; Parameters:
; CLZWDecompress * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043f690
        ;   Label: support_codec.cpp_CLZWDecompress_isDictionaryEmpty_FUN_0043f690
    CMP dword ptr [EAX + 0x10],0x0      ; 0043f694
    SETZ AL                             ; 0043f698
    AND EAX,0xff                        ; 0043f69b
    RET                                 ; 0043f6a0

