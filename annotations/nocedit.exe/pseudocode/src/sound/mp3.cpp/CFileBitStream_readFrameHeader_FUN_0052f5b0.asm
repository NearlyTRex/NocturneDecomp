; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0(CFileBitStream *this_ptr,SMpegFrameHeader **header_out)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
; SMpegFrameHeader * * Stack[0x8]:4   header_out
;
; XREF[2]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 at 00534e44
;   sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630 at 005347c7
;
; Called Functions:
;   sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50
;   sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052f5b0
        ;   Label: sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0
    PUSH ESI                            ; 0052f5b1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0052f5b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0052f5b6
    PUSH ESI                            ; 0052f5ba
    MOV EBX,dword ptr [EBX]             ; 0052f5bb
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50 ; 0052f5bd
        ;   XREF to: 0052ee50 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 0052f5c2
    PUSH 0x2                            ; 0052f5c5
    PUSH ESI                            ; 0052f5c7
    MOV dword ptr [EBX],EAX             ; 0052f5c8
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0052f5ca
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * this_ptr, int num_bits)
    MOV EDX,0x4                         ; 0052f5cf
    ADD ESP,0x8                         ; 0052f5d4
    SUB EDX,EAX                         ; 0052f5d7
    PUSH ESI                            ; 0052f5d9
    MOV dword ptr [EBX + 0x4],EDX       ; 0052f5da
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50 ; 0052f5dd
        ;   XREF to: 0052ee50 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 0052f5e2
    TEST EAX,EAX                        ; 0052f5e5
    SETZ AL                             ; 0052f5e7
    PUSH 0x4                            ; 0052f5ea
    AND EAX,0xff                        ; 0052f5ec
    PUSH ESI                            ; 0052f5f1
    MOV dword ptr [EBX + 0x8],EAX       ; 0052f5f2
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0052f5f5
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 0052f5fa
    PUSH 0x2                            ; 0052f5fd
    PUSH ESI                            ; 0052f5ff
    MOV dword ptr [EBX + 0xc],EAX       ; 0052f600
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0052f603
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 0052f608
    PUSH ESI                            ; 0052f60b
    MOV dword ptr [EBX + 0x10],EAX      ; 0052f60c
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50 ; 0052f60f
        ;   XREF to: 0052ee50 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 0052f614
    PUSH ESI                            ; 0052f617
    MOV dword ptr [EBX + 0x14],EAX      ; 0052f618
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50 ; 0052f61b
        ;   XREF to: 0052ee50 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 0052f620
    PUSH 0x2                            ; 0052f623
    PUSH ESI                            ; 0052f625
    MOV dword ptr [EBX + 0x18],EAX      ; 0052f626
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0052f629
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 0052f62e
    PUSH 0x2                            ; 0052f631
    PUSH ESI                            ; 0052f633
    MOV dword ptr [EBX + 0x1c],EAX      ; 0052f634
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0052f637
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 0052f63c
    PUSH ESI                            ; 0052f63f
    MOV dword ptr [EBX + 0x20],EAX      ; 0052f640
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50 ; 0052f643
        ;   XREF to: 0052ee50 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 0052f648
    PUSH ESI                            ; 0052f64b
    MOV dword ptr [EBX + 0x24],EAX      ; 0052f64c
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50 ; 0052f64f
        ;   XREF to: 0052ee50 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 0052f654
    PUSH 0x2                            ; 0052f657
    PUSH ESI                            ; 0052f659
    MOV dword ptr [EBX + 0x28],EAX      ; 0052f65a
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0052f65d
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 0052f662
    MOV dword ptr [EBX + 0x2c],EAX      ; 0052f665
    POP ESI                             ; 0052f668
    POP EBX                             ; 0052f669
    RET                                 ; 0052f66a

