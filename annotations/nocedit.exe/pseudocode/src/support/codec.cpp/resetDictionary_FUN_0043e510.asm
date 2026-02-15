; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_resetDictionary_FUN_0043e510(CLZWDictionary *dict)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   dict
;
; XREF[2]:
;   support_codec.cpp_CLZWCompress_init_FUN_0043f320 at 0043f341
;   support_codec.cpp_CLZWDecompress_init_FUN_0043f4d0 at 0043f4f1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043e510
        ;   Label: support_codec.cpp_resetDictionary_FUN_0043e510
    MOV dword ptr [EAX + 0x4],0x0       ; 0043e514
    MOV dword ptr [EAX],0x0             ; 0043e51b
    RET                                 ; 0043e521

