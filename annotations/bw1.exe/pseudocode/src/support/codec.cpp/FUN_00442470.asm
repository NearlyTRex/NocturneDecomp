; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_FUN_00442470(SBitBuffer *bit_buffer)
;
; Parameters:
; SBitBuffer *     Stack[0x4]:4   bit_buffer
;
; XREF[3]:
;   support_codec.cpp_FUN_004434e0 at 00443501
;   support_codec.cpp_FUN_004436f0 at 00443711
;   support_codec.cpp_FUN_004438b0 at 004438b8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00442470
        ;   Label: support_codec.cpp_FUN_00442470
    MOV dword ptr [EAX + 0x4],0x0       ; 00442474
    MOV dword ptr [EAX],0x0             ; 0044247b
    RET                                 ; 00442481

