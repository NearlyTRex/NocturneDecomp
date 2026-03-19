; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(CFileBitStream *this_ptr)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0 at 0052f643
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 at 005352e8
;   sound_mp3.cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0 at 005309a2
;
; Referenced Globals:
;   uint[8] g_MpegBitMaskTableSingleBit
;   undefined4 g_MpegBitMaskTableSingleBit[7]
;
; Called Functions:
;   crt_stdio.c_fread_FUN_005fd990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052ee50
        ;   Label: sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50
    PUSH EDI                            ; 0052ee51
    PUSH EBP                            ; 0052ee52
    MOV EDI,dword ptr [ESP + 0x10]      ; 0052ee53
    MOV EDX,dword ptr [EDI + 0xc]       ; 0052ee57
    INC EDX                             ; 0052ee5a
    MOV ECX,dword ptr [EDI + 0x14]      ; 0052ee5b
    MOV dword ptr [EDI + 0xc],EDX       ; 0052ee5e
    TEST ECX,ECX                        ; 0052ee61
    JNZ 0x0052eefc                      ; 0052ee63
        ;   XREF to: 0052eefc (CONDITIONAL_JUMP)  ; LAB_0052eefc
    MOV EBX,dword ptr [EDI + 0x10]      ; 0052ee69
    MOV dword ptr [EDI + 0x14],0x8      ; 0052ee6c
    DEC EBX                             ; 0052ee73
    MOV dword ptr [EDI + 0x10],EBX      ; 0052ee74
    CMP EBX,0x4                         ; 0052ee77
    JGE 0x0052ef20                      ; 0052ee7a
        ;   XREF to: 0052ef20 (CONDITIONAL_JUMP)  ; LAB_0052ef20
    CMP dword ptr [EDI + 0x18],0x0      ; 0052ee80
        ;   Label: LAB_0052ee80
    JNZ 0x0052ef2b                      ; 0052ee84
        ;   XREF to: 0052ef2b (CONDITIONAL_JUMP)  ; LAB_0052ef2b
    PUSH ESI                            ; 0052ee8a
    MOV EBX,dword ptr [EDI + 0x10]      ; 0052ee8b
    TEST EBX,EBX                        ; 0052ee8e
    JL 0x0052eeb0                       ; 0052ee90
        ;   XREF to: 0052eeb0 (CONDITIONAL_JUMP)  ; LAB_0052eeb0
    MOV EAX,dword ptr [EDI + 0x8]       ; 0052ee92
        ;   Label: LAB_0052ee92
    MOV EBP,dword ptr [EDI + 0x10]      ; 0052ee95
    DEC EAX                             ; 0052ee98
    MOV ESI,dword ptr [EDI + 0x4]       ; 0052ee99
    SUB EAX,EBP                         ; 0052ee9c
    LEA EDX,[ESI + EBX*0x1]             ; 0052ee9e
    ADD EAX,EBX                         ; 0052eea1
    ADD ESI,EAX                         ; 0052eea3
    MOV AL,byte ptr [EDX]               ; 0052eea5
    DEC EBX                             ; 0052eea7
    MOV byte ptr [ESI],AL               ; 0052eea8
    TEST EBX,EBX                        ; 0052eeaa
    JGE 0x0052ee92                      ; 0052eeac
        ;   XREF to: 0052ee92 (CONDITIONAL_JUMP)  ; LAB_0052ee92
    MOV EAX,EAX                         ; 0052eeae
    MOV ESI,dword ptr [EDI + 0x8]       ; 0052eeb0
        ;   Label: LAB_0052eeb0
    MOV EAX,dword ptr [EDI + 0x10]      ; 0052eeb3
    SUB ESI,0x2                         ; 0052eeb6
    SUB ESI,EAX                         ; 0052eeb9
    MOV EBX,EDI                         ; 0052eebb
    TEST ESI,ESI                        ; 0052eebd
    JL 0x0052eef4                       ; 0052eebf
        ;   XREF to: 0052eef4 (CONDITIONAL_JUMP)  ; LAB_0052eef4
    CMP dword ptr [EBX + 0x18],0x0      ; 0052eec1
        ;   Label: LAB_0052eec1
    JNZ 0x0052eef4                      ; 0052eec5
        ;   XREF to: 0052eef4 (CONDITIONAL_JUMP)  ; LAB_0052eef4
    MOV ECX,dword ptr [EBX + 0x28]      ; 0052eec7
    XOR EAX,EAX                         ; 0052eeca
    TEST ECX,ECX                        ; 0052eecc
    JLE 0x0052eee8                      ; 0052eece
        ;   XREF to: 0052eee8 (CONDITIONAL_JUMP)  ; LAB_0052eee8
    MOV EBP,dword ptr [EBX]             ; 0052eed0
    PUSH EBP                            ; 0052eed2
    PUSH 0x1                            ; 0052eed3
    MOV EDX,ESI                         ; 0052eed5
    MOV EAX,dword ptr [EBX + 0x4]       ; 0052eed7
    PUSH 0x1                            ; 0052eeda
    ADD EAX,EDX                         ; 0052eedc
    PUSH EAX                            ; 0052eede
    DEC ESI                             ; 0052eedf
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0052eee0
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0052eee5
    CMP EAX,0x1                         ; 0052eee8
        ;   Label: LAB_0052eee8
    JNZ 0x0052ef34                      ; 0052eeeb
        ;   XREF to: 0052ef34 (CONDITIONAL_JUMP)  ; LAB_0052ef34
    DEC dword ptr [EBX + 0x28]          ; 0052eeed
    TEST ESI,ESI                        ; 0052eef0
        ;   Label: LAB_0052eef0
    JGE 0x0052eec1                      ; 0052eef2
        ;   XREF to: 0052eec1 (CONDITIONAL_JUMP)  ; LAB_0052eec1
    MOV EAX,dword ptr [EDI + 0x8]       ; 0052eef4
        ;   Label: LAB_0052eef4
    DEC EAX                             ; 0052eef7
    MOV dword ptr [EDI + 0x10],EAX      ; 0052eef8
    POP ESI                             ; 0052eefb
    MOV EDX,dword ptr [EDI + 0x10]      ; 0052eefc
        ;   Label: LAB_0052eefc
    MOV EAX,dword ptr [EDI + 0x4]       ; 0052eeff
    ADD EAX,EDX                         ; 0052ef02
    MOV EDX,dword ptr [EDI + 0x14]      ; 0052ef04
    XOR EBX,EBX                         ; 0052ef07
    DEC EDX                             ; 0052ef09
    MOV BL,byte ptr [EAX]               ; 0052ef0a
    MOV EAX,dword ptr [EDX*0x4 + 0x67e5c0] ; 0052ef0c | g_MpegBitMaskTableSingleBit | g_MpegBitMaskTableSingleBit[7]
    MOV CL,DL                           ; 0052ef13
    AND EAX,EBX                         ; 0052ef15
    MOV dword ptr [EDI + 0x14],EDX      ; 0052ef17
    SHR EAX,CL                          ; 0052ef1a
    POP EBP                             ; 0052ef1c
    POP EDI                             ; 0052ef1d
    POP EBX                             ; 0052ef1e
    RET                                 ; 0052ef1f
    CMP EBX,dword ptr [EDI + 0x18]      ; 0052ef20
        ;   Label: LAB_0052ef20
    JL 0x0052ee80                       ; 0052ef23
        ;   XREF to: 0052ee80 (CONDITIONAL_JUMP)  ; LAB_0052ee80
    JMP 0x0052eefc                      ; 0052ef29
        ;   XREF to: 0052eefc (UNCONDITIONAL_JUMP)  ; LAB_0052eefc
    MOV dword ptr [EDI + 0x1c],0x1      ; 0052ef2b
        ;   Label: LAB_0052ef2b
    JMP 0x0052eefc                      ; 0052ef32
        ;   XREF to: 0052eefc (UNCONDITIONAL_JUMP)  ; LAB_0052eefc
    LEA EAX,[ESI + 0x1]                 ; 0052ef34
        ;   Label: LAB_0052ef34
    MOV dword ptr [EBX + 0x18],EAX      ; 0052ef37
    JMP 0x0052eef0                      ; 0052ef3a
        ;   XREF to: 0052eef0 (UNCONDITIONAL_JUMP)  ; LAB_0052eef0

