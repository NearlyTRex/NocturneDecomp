; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_codec_cpp_FUN_00434b90(int param_1)
;
;
; Called Functions:
;   support_codec.cpp_resetBitBuffer_FUN_00433760
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00434b90
        ;   Label: support_codec.cpp_FUN_00434b90
    ADD EAX,0x4                         ; 00434b94
    PUSH EAX                            ; 00434b97
    CALL support_codec.cpp_resetBitBuffer_FUN_00433760 ; 00434b98
        ;   XREF to: 00433760 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_resetBitBuffer_FUN_00433760(SBitBuffer * bit_buffer)
    ADD ESP,0x4                         ; 00434b9d
    RET                                 ; 00434ba0

