; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_resetBitBuffer_FUN_00438a90(undefined4 *param_1)
;
;
; XREF[2]:
;   support_codec.cpp_CLZWCompress_init_FUN_00439880 at 004398a1
;   support_codec.cpp_CLZWDecompress_init_FUN_00439a30 at 00439a51
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00438a90
        ;   Label: support_codec.cpp_resetBitBuffer_FUN_00438a90
    MOV dword ptr [EAX + 0x4],0x0       ; 00438a94
    MOV dword ptr [EAX],0x0             ; 00438a9b
    RET                                 ; 00438aa1

