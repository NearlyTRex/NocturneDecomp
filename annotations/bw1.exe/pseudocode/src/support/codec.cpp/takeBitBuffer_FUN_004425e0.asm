; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl support_codec_cpp_takeBitBuffer_FUN_004425e0(SBitBuffer *bit_buffer,int *bit_count_out)
;
; Parameters:
; SBitBuffer *     Stack[0x4]:4   bit_buffer
; int *            Stack[0x8]:4   bit_count_out
;
; XREF[1]:
;   support_codec.cpp_CAsciiArmor_flush_FUN_00443920 at 0044392e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004425e0
        ;   Label: support_codec.cpp_takeBitBuffer_FUN_004425e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004425e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004425e5
    MOV ECX,dword ptr [EDX]             ; 004425e9
    MOV EAX,dword ptr [EDX + 0x4]       ; 004425eb
    MOV dword ptr [EBX],ECX             ; 004425ee
    MOV dword ptr [EDX + 0x4],0x0       ; 004425f0
    MOV dword ptr [EDX],0x0             ; 004425f7
    POP EBX                             ; 004425fd
    RET                                 ; 004425fe

