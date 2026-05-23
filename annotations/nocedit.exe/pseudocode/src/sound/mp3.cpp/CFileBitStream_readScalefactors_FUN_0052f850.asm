; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CFileBitStream_readScalefactors_FUN_0052f850(CFileBitStream *this_ptr,SMpegSubbandAllocation *allocation_indices,SMpegSubbandScalefactors *scalefactors,SMpegFrame *frame)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
; SMpegSubbandAllocation * Stack[0x8]:4   allocation_indices
; SMpegSubbandScalefactors * Stack[0xc]:4   scalefactors
; SMpegFrame *     Stack[0x10]:4   frame
; Local Variables:
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 at 00535093
;
; Called Functions:
;   sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052f850
        ;   Label: sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_0052f850
    PUSH ESI                            ; 0052f851
    PUSH EDI                            ; 0052f852
    PUSH EBP                            ; 0052f853
    SUB ESP,0x4                         ; 0052f854
    XOR EDX,EDX                         ; 0052f857
    MOV EBP,dword ptr [ESP + 0x24]      ; 0052f859
    MOV dword ptr [ESP],EDX             ; 0052f85d
    MOV EBP,dword ptr [EBP + 0x10]      ; 0052f860
    XOR ESI,ESI                         ; 0052f863
        ;   Label: LAB_0052f863
    TEST EBP,EBP                        ; 0052f865
    JLE 0x0052f897                      ; 0052f867
        ;   XREF to: 0052f897 (CONDITIONAL_JUMP)  ; LAB_0052f897
    MOV EBX,dword ptr [ESP]             ; 0052f869
    MOV EDI,dword ptr [ESP + 0x20]      ; 0052f86c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0052f870
    ADD EBX,EDI                         ; 0052f874
    MOV EDI,dword ptr [ESP]             ; 0052f876
    ADD EDI,EAX                         ; 0052f879
    CMP dword ptr [EDI],0x0             ; 0052f87b
        ;   Label: LAB_0052f87b
    JNZ 0x0052f8b0                      ; 0052f87e
        ;   XREF to: 0052f8b0 (CONDITIONAL_JUMP)  ; LAB_0052f8b0
    MOV dword ptr [EBX],0x3f            ; 0052f880
    ADD EBX,0x180                       ; 0052f886
        ;   Label: LAB_0052f886
    INC ESI                             ; 0052f88c
    ADD EDI,0x80                        ; 0052f88d
    CMP ESI,EBP                         ; 0052f893
    JL 0x0052f87b                       ; 0052f895
        ;   XREF to: 0052f87b (CONDITIONAL_JUMP)  ; LAB_0052f87b
    MOV ECX,dword ptr [ESP]             ; 0052f897
        ;   Label: LAB_0052f897
    ADD ECX,0x4                         ; 0052f89a
    MOV dword ptr [ESP],ECX             ; 0052f89d
    CMP ECX,0x80                        ; 0052f8a0
    JNZ 0x0052f863                      ; 0052f8a6
        ;   XREF to: 0052f863 (CONDITIONAL_JUMP)  ; LAB_0052f863
    ADD ESP,0x4                         ; 0052f8a8
    POP EBP                             ; 0052f8ab
    POP EDI                             ; 0052f8ac
    POP ESI                             ; 0052f8ad
    POP EBX                             ; 0052f8ae
    RET                                 ; 0052f8af
    PUSH 0x6                            ; 0052f8b0
        ;   Label: LAB_0052f8b0
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0052f8b2
    PUSH ECX                            ; 0052f8b6
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40 ; 0052f8b7
        ;   XREF to: 0052ef40 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
    ADD ESP,0x8                         ; 0052f8bc
    MOV dword ptr [EBX],EAX             ; 0052f8bf
    JMP 0x0052f886                      ; 0052f8c1
        ;   XREF to: 0052f886 (UNCONDITIONAL_JUMP)  ; LAB_0052f886

