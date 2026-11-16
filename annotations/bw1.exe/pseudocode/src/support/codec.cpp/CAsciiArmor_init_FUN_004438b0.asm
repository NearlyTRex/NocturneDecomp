; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_CAsciiArmor_init_FUN_004438b0(CAsciiArmor *this_ptr)
;
; Parameters:
; CAsciiArmor *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   support_codec.cpp_resetBitBuffer_FUN_00442470
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004438b0
        ;   Label: support_codec.cpp_CAsciiArmor_init_FUN_004438b0
    ADD EAX,0x4                         ; 004438b4
    PUSH EAX                            ; 004438b7
    CALL support_codec.cpp_resetBitBuffer_FUN_00442470 ; 004438b8
        ;   XREF to: 00442470 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_resetBitBuffer_FUN_00442470(SBitBuffer * bit_buffer)
    ADD ESP,0x4                         ; 004438bd
    RET                                 ; 004438c0

