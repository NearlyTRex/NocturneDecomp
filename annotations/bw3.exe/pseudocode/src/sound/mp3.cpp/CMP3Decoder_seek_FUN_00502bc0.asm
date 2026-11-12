; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_mp3_cpp_CMP3Decoder_seek_FUN_00502bc0(CMP3Decoder *this_ptr,int sample_offset)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   sample_offset
;
; XREF[2]:
;   sound_mp3.cpp_FUN_00502890 at 005029be
;   sound_sndmain.cpp_CSfxSample_seek_FUN_005537c0 at 00553869
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   crt_stdio.c_fseek_FUN_005a457c
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502bc0
        ;   Label: sound_mp3.cpp_CMP3Decoder_seek_FUN_00502bc0
    PUSH ESI                            ; 00502bc1
    PUSH EDI                            ; 00502bc2
    PUSH EBP                            ; 00502bc3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00502bc4
    MOV ESI,dword ptr [ESP + 0x18]      ; 00502bc8
    MOV dword ptr [EBX + 0x108],0x0     ; 00502bcc
    LEA EDI,[EBX + 0x5320]              ; 00502bd6
    MOV dword ptr [EBX + 0x10c],0x0     ; 00502bdc
    PUSH 0x0                            ; 00502be6
    MOV EDX,dword ptr [EDI + 0x20]      ; 00502be8
    PUSH EDX                            ; 00502beb
    MOV ECX,dword ptr [EDI]             ; 00502bec
    PUSH ECX                            ; 00502bee
    CALL crt_stdio.c_fseek_FUN_005a457c ; 00502bef
        ;   XREF to: 005a457c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005a457c(_FILE * file, long offset, int whence)
    MOV dword ptr [EDI + 0x10],0x0      ; 00502bf4
    MOV dword ptr [EDI + 0x14],0x0      ; 00502bfb
    MOV dword ptr [EDI + 0xc],0x0       ; 00502c02
    MOV dword ptr [EDI + 0x18],0x0      ; 00502c09
    MOV dword ptr [EDI + 0x1c],0x0      ; 00502c10
    MOV EAX,dword ptr [EDI + 0x24]      ; 00502c17
    MOV dword ptr [EDI + 0x28],EAX      ; 00502c1a
    MOV dword ptr [EBX + 0x534c],0x0    ; 00502c1d
    MOV dword ptr [EBX + 0x1310],0x0    ; 00502c27
    ADD ESP,0xc                         ; 00502c31
    MOV dword ptr [EBX + 0x1314],0x0    ; 00502c34
    PUSH 0x2000                         ; 00502c3e
    MOV dword ptr [EBX + 0x1318],0x0    ; 00502c43
    PUSH 0x0                            ; 00502c4d
    MOV dword ptr [EBX + 0x531c],0x8    ; 00502c4f
    LEA EAX,[EBX + 0x5350]              ; 00502c59
    MOV dword ptr [EBX + 0x7350],0x40   ; 00502c5f
    PUSH EAX                            ; 00502c69
    MOV dword ptr [EBX + 0x7354],0x40   ; 00502c6a
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00502c74
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00502c79
    PUSH 0x1200                         ; 00502c7c
    PUSH 0x0                            ; 00502c81
    LEA EAX,[EBX + 0x7430]              ; 00502c83
    PUSH EAX                            ; 00502c89
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00502c8a
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00502c8f
    CMP ESI,0x900                       ; 00502c92
    JL 0x00502cb3                       ; 00502c98
        ;   XREF to: 00502cb3 (CONDITIONAL_JUMP)  ; LAB_00502cb3
    PUSH 0x0                            ; 00502c9a
        ;   Label: LAB_00502c9a
    PUSH EBX                            ; 00502c9c
    CALL sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60 ; 00502c9d
        ;   XREF to: 00502d60 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60(CMP3Decoder * this_ptr, short * pcm_output)
    ADD ESP,0x8                         ; 00502ca2
    TEST EAX,EAX                        ; 00502ca5
    JLE 0x00502cc7                      ; 00502ca7
        ;   XREF to: 00502cc7 (CONDITIONAL_JUMP)  ; LAB_00502cc7
    SUB ESI,EAX                         ; 00502ca9
    CMP ESI,0x900                       ; 00502cab
    JGE 0x00502c9a                      ; 00502cb1
        ;   XREF to: 00502c9a (CONDITIONAL_JUMP)  ; LAB_00502c9a
    LEA EDI,[EBX + 0x110]               ; 00502cb3
        ;   Label: LAB_00502cb3
    TEST ESI,ESI                        ; 00502cb9
    JG 0x00502cce                       ; 00502cbb
        ;   XREF to: 00502cce (CONDITIONAL_JUMP)  ; LAB_00502cce
    MOV EAX,0x1                         ; 00502cbd
    POP EBP                             ; 00502cc2
    POP EDI                             ; 00502cc3
    POP ESI                             ; 00502cc4
    POP EBX                             ; 00502cc5
    RET                                 ; 00502cc6
    XOR EAX,EAX                         ; 00502cc7
        ;   Label: LAB_00502cc7
    POP EBP                             ; 00502cc9
    POP EDI                             ; 00502cca
    POP ESI                             ; 00502ccb
    POP EBX                             ; 00502ccc
    RET                                 ; 00502ccd
    PUSH EDI                            ; 00502cce
        ;   Label: LAB_00502cce
    PUSH EBX                            ; 00502ccf
    CALL sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60 ; 00502cd0
        ;   XREF to: 00502d60 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60(CMP3Decoder * this_ptr, short * pcm_output)
    ADD ESP,0x8                         ; 00502cd5
    MOV dword ptr [EBX + 0x108],EAX     ; 00502cd8
    TEST EAX,EAX                        ; 00502cde
    JLE 0x00502cc7                      ; 00502ce0
        ;   XREF to: 00502cc7 (CONDITIONAL_JUMP)  ; LAB_00502cc7
    CMP ESI,EAX                         ; 00502ce2
    JL 0x00502d00                       ; 00502ce4
        ;   XREF to: 00502d00 (CONDITIONAL_JUMP)  ; LAB_00502d00
    MOV dword ptr [EBX + 0x108],0x0     ; 00502ce6
    SUB ESI,EAX                         ; 00502cf0
    TEST ESI,ESI                        ; 00502cf2
    JG 0x00502cce                       ; 00502cf4
        ;   XREF to: 00502cce (CONDITIONAL_JUMP)  ; LAB_00502cce
    MOV EAX,0x1                         ; 00502cf6
    POP EBP                             ; 00502cfb
    POP EDI                             ; 00502cfc
    POP ESI                             ; 00502cfd
    POP EBX                             ; 00502cfe
    RET                                 ; 00502cff
    MOV ECX,EAX                         ; 00502d00
        ;   Label: LAB_00502d00
    MOV EBP,dword ptr [EBX + 0x104]     ; 00502d02
    SUB ECX,ESI                         ; 00502d08
    IMUL ESI,EBP                        ; 00502d0a
    ADD ESI,ESI                         ; 00502d0d
    MOV dword ptr [EBX + 0x108],ECX     ; 00502d0f
    ADD EDI,ESI                         ; 00502d15
    MOV dword ptr [EBX + 0x10c],EDI     ; 00502d17
    MOV EAX,0x1                         ; 00502d1d
    POP EBP                             ; 00502d22
    POP EDI                             ; 00502d23
    POP ESI                             ; 00502d24
    POP EBX                             ; 00502d25
    RET                                 ; 00502d26

