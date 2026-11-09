; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_004fdc50(CFileBitStream *this_ptr,SMpegFrameHeader **header_out)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
; SMpegFrameHeader * * Stack[0x8]:4   header_out
;
; XREF[2]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60 at 00503934
;   sound_mp3.cpp_FUN_00502890 at 0050297a
;
; Called Functions:
;   sound_mp3.cpp_CFileBitStream_readBit_FUN_004fd4f0
;   sound_mp3.cpp_FUN_004fd5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fdc50
        ;   Label: sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_004fdc50
    PUSH ESI                            ; 004fdc51
    MOV ESI,dword ptr [ESP + 0xc]       ; 004fdc52
    MOV EBX,dword ptr [ESP + 0x10]      ; 004fdc56
    PUSH ESI                            ; 004fdc5a
    MOV EBX,dword ptr [EBX]             ; 004fdc5b
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_004fd4f0 ; 004fdc5d
        ;   XREF to: 004fd4f0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_004fd4f0(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 004fdc62
    PUSH 0x2                            ; 004fdc65
    PUSH ESI                            ; 004fdc67
    MOV dword ptr [EBX],EAX             ; 004fdc68
    CALL sound_mp3.cpp_FUN_004fd5e0     ; 004fdc6a
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_004fd5e0(CFileBitStream * this_ptr, int num_bits)
    MOV EDX,0x4                         ; 004fdc6f
    ADD ESP,0x8                         ; 004fdc74
    SUB EDX,EAX                         ; 004fdc77
    PUSH ESI                            ; 004fdc79
    MOV dword ptr [EBX + 0x4],EDX       ; 004fdc7a
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_004fd4f0 ; 004fdc7d
        ;   XREF to: 004fd4f0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_004fd4f0(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 004fdc82
    TEST EAX,EAX                        ; 004fdc85
    SETZ AL                             ; 004fdc87
    PUSH 0x4                            ; 004fdc8a
    AND EAX,0xff                        ; 004fdc8c
    PUSH ESI                            ; 004fdc91
    MOV dword ptr [EBX + 0x8],EAX       ; 004fdc92
    CALL sound_mp3.cpp_FUN_004fd5e0     ; 004fdc95
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_004fd5e0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 004fdc9a
    PUSH 0x2                            ; 004fdc9d
    PUSH ESI                            ; 004fdc9f
    MOV dword ptr [EBX + 0xc],EAX       ; 004fdca0
    CALL sound_mp3.cpp_FUN_004fd5e0     ; 004fdca3
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_004fd5e0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 004fdca8
    PUSH ESI                            ; 004fdcab
    MOV dword ptr [EBX + 0x10],EAX      ; 004fdcac
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_004fd4f0 ; 004fdcaf
        ;   XREF to: 004fd4f0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_004fd4f0(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 004fdcb4
    PUSH ESI                            ; 004fdcb7
    MOV dword ptr [EBX + 0x14],EAX      ; 004fdcb8
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_004fd4f0 ; 004fdcbb
        ;   XREF to: 004fd4f0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_004fd4f0(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 004fdcc0
    PUSH 0x2                            ; 004fdcc3
    PUSH ESI                            ; 004fdcc5
    MOV dword ptr [EBX + 0x18],EAX      ; 004fdcc6
    CALL sound_mp3.cpp_FUN_004fd5e0     ; 004fdcc9
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_004fd5e0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 004fdcce
    PUSH 0x2                            ; 004fdcd1
    PUSH ESI                            ; 004fdcd3
    MOV dword ptr [EBX + 0x1c],EAX      ; 004fdcd4
    CALL sound_mp3.cpp_FUN_004fd5e0     ; 004fdcd7
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_004fd5e0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 004fdcdc
    PUSH ESI                            ; 004fdcdf
    MOV dword ptr [EBX + 0x20],EAX      ; 004fdce0
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_004fd4f0 ; 004fdce3
        ;   XREF to: 004fd4f0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_004fd4f0(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 004fdce8
    PUSH ESI                            ; 004fdceb
    MOV dword ptr [EBX + 0x24],EAX      ; 004fdcec
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_004fd4f0 ; 004fdcef
        ;   XREF to: 004fd4f0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_004fd4f0(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 004fdcf4
    PUSH 0x2                            ; 004fdcf7
    PUSH ESI                            ; 004fdcf9
    MOV dword ptr [EBX + 0x28],EAX      ; 004fdcfa
    CALL sound_mp3.cpp_FUN_004fd5e0     ; 004fdcfd
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_004fd5e0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 004fdd02
    MOV dword ptr [EBX + 0x2c],EAX      ; 004fdd05
    POP ESI                             ; 004fdd08
    POP EBX                             ; 004fdd09
    RET                                 ; 004fdd0a

