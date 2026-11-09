; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_00505170(CFileBitStream *this_ptr,SMpegFrameHeader **header_out)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
; SMpegFrameHeader * * Stack[0x8]:4   header_out
;
; XREF[2]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280 at 0050ae54
;   sound_mp3.cpp_FUN_00509db0 at 00509e9a
;
; Called Functions:
;   sound_mp3.cpp_CFileBitStream_readBit_FUN_00504a10
;   sound_mp3.cpp_FUN_00504b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505170
        ;   Label: sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_00505170
    PUSH ESI                            ; 00505171
    MOV ESI,dword ptr [ESP + 0xc]       ; 00505172
    MOV EBX,dword ptr [ESP + 0x10]      ; 00505176
    PUSH ESI                            ; 0050517a
    MOV EBX,dword ptr [EBX]             ; 0050517b
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_00504a10 ; 0050517d
        ;   XREF to: 00504a10 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_00504a10(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 00505182
    PUSH 0x2                            ; 00505185
    PUSH ESI                            ; 00505187
    MOV dword ptr [EBX],EAX             ; 00505188
    CALL sound_mp3.cpp_FUN_00504b00     ; 0050518a
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00504b00(CFileBitStream * this_ptr, int num_bits)
    MOV EDX,0x4                         ; 0050518f
    ADD ESP,0x8                         ; 00505194
    SUB EDX,EAX                         ; 00505197
    PUSH ESI                            ; 00505199
    MOV dword ptr [EBX + 0x4],EDX       ; 0050519a
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_00504a10 ; 0050519d
        ;   XREF to: 00504a10 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_00504a10(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 005051a2
    TEST EAX,EAX                        ; 005051a5
    SETZ AL                             ; 005051a7
    PUSH 0x4                            ; 005051aa
    AND EAX,0xff                        ; 005051ac
    PUSH ESI                            ; 005051b1
    MOV dword ptr [EBX + 0x8],EAX       ; 005051b2
    CALL sound_mp3.cpp_FUN_00504b00     ; 005051b5
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00504b00(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 005051ba
    PUSH 0x2                            ; 005051bd
    PUSH ESI                            ; 005051bf
    MOV dword ptr [EBX + 0xc],EAX       ; 005051c0
    CALL sound_mp3.cpp_FUN_00504b00     ; 005051c3
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00504b00(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 005051c8
    PUSH ESI                            ; 005051cb
    MOV dword ptr [EBX + 0x10],EAX      ; 005051cc
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_00504a10 ; 005051cf
        ;   XREF to: 00504a10 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_00504a10(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 005051d4
    PUSH ESI                            ; 005051d7
    MOV dword ptr [EBX + 0x14],EAX      ; 005051d8
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_00504a10 ; 005051db
        ;   XREF to: 00504a10 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_00504a10(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 005051e0
    PUSH 0x2                            ; 005051e3
    PUSH ESI                            ; 005051e5
    MOV dword ptr [EBX + 0x18],EAX      ; 005051e6
    CALL sound_mp3.cpp_FUN_00504b00     ; 005051e9
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00504b00(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 005051ee
    PUSH 0x2                            ; 005051f1
    PUSH ESI                            ; 005051f3
    MOV dword ptr [EBX + 0x1c],EAX      ; 005051f4
    CALL sound_mp3.cpp_FUN_00504b00     ; 005051f7
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00504b00(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 005051fc
    PUSH ESI                            ; 005051ff
    MOV dword ptr [EBX + 0x20],EAX      ; 00505200
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_00504a10 ; 00505203
        ;   XREF to: 00504a10 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_00504a10(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 00505208
    PUSH ESI                            ; 0050520b
    MOV dword ptr [EBX + 0x24],EAX      ; 0050520c
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_00504a10 ; 0050520f
        ;   XREF to: 00504a10 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_00504a10(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 00505214
    PUSH 0x2                            ; 00505217
    PUSH ESI                            ; 00505219
    MOV dword ptr [EBX + 0x28],EAX      ; 0050521a
    CALL sound_mp3.cpp_FUN_00504b00     ; 0050521d
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00504b00(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 00505222
    MOV dword ptr [EBX + 0x2c],EAX      ; 00505225
    POP ESI                             ; 00505228
    POP EBX                             ; 00505229
    RET                                 ; 0050522a

