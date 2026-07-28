; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool support_codec_cpp_CLZWDecompress_isDictionaryEmpty_FUN_00439bf0(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00439bf0
        ;   Label: support_codec.cpp_CLZWDecompress_isDictionaryEmpty_FUN_00439bf0
    CMP dword ptr [EAX + 0x10],0x0      ; 00439bf4
    SETZ AL                             ; 00439bf8
    AND EAX,0xff                        ; 00439bfb
    RET                                 ; 00439c00

