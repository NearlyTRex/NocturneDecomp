; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_resetBitBuffer_FUN_00433760(SBitBuffer *bit_buffer)
;
; Parameters:
; SBitBuffer *     Stack[0x4]:4   bit_buffer
;
; XREF[3]:
;   support_codec.cpp_CLZWCompress_init_FUN_004347c0 at 004347e1
;   support_codec.cpp_CLZWDecompress_init_FUN_004349d0 at 004349f1
;   support_codec.cpp_FUN_00434b90 at 00434b98
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00433760
        ;   Label: support_codec.cpp_resetBitBuffer_FUN_00433760
    MOV dword ptr [EAX + 0x4],0x0       ; 00433764
    MOV dword ptr [EAX],0x0             ; 0043376b
    RET                                 ; 00433771

