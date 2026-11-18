; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_CAsciiArmor_init_FUN_00441510(CAsciiArmor *this_ptr)
;
; Parameters:
; CAsciiArmor *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   support_codec.cpp_resetBitBuffer_FUN_004400d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00441510
        ;   Label: support_codec.cpp_CAsciiArmor_init_FUN_00441510
    ADD EAX,0x4                         ; 00441514
    PUSH EAX                            ; 00441517
    CALL support_codec.cpp_resetBitBuffer_FUN_004400d0 ; 00441518
        ;   XREF to: 004400d0 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_resetBitBuffer_FUN_004400d0(SBitBuffer * bit_buffer)
    ADD ESP,0x4                         ; 0044151d
    RET                                 ; 00441520

