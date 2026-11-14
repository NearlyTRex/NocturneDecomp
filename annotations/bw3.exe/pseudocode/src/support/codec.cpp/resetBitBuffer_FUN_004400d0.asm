; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_resetBitBuffer_FUN_004400d0(SBitBuffer *bit_buffer)
;
; Parameters:
; SBitBuffer *     Stack[0x4]:4   bit_buffer
;
; XREF[3]:
;   support_codec.cpp_CLZWCompress_init_FUN_00441140 at 00441161
;   support_codec.cpp_CLZWDecompress_init_FUN_00441350 at 00441371
;   support_codec.cpp_FUN_00441510 at 00441518
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004400d0
        ;   Label: support_codec.cpp_resetBitBuffer_FUN_004400d0
    MOV dword ptr [EAX + 0x4],0x0       ; 004400d4
    MOV dword ptr [EAX],0x0             ; 004400db
    RET                                 ; 004400e1

