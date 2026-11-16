; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl support_codec_cpp_takeBitBuffer_FUN_00440240(SBitBuffer *bit_buffer,int *bit_count_out)
;
; Parameters:
; SBitBuffer *     Stack[0x4]:4   bit_buffer
; int *            Stack[0x8]:4   bit_count_out
;
; XREF[1]:
;   support_codec.cpp_CAsciiArmor_flush_FUN_00441580 at 0044158e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440240
        ;   Label: support_codec.cpp_takeBitBuffer_FUN_00440240
    MOV EDX,dword ptr [ESP + 0x8]       ; 00440241
    MOV EBX,dword ptr [ESP + 0xc]       ; 00440245
    MOV ECX,dword ptr [EDX]             ; 00440249
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044024b
    MOV dword ptr [EBX],ECX             ; 0044024e
    MOV dword ptr [EDX + 0x4],0x0       ; 00440250
    MOV dword ptr [EDX],0x0             ; 00440257
    POP EBX                             ; 0044025d
    RET                                 ; 0044025e

