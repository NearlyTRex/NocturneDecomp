; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_mp3_cpp_CMP3Decoder_seek_FUN_00534ba0(CMP3Decoder *this_ptr,int sample_offset)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   sample_offset
;
; XREF[3]:
;   sound_mp3.cpp_CMP3Decoder_getTotalSamples_FUN_00534d10 at 00534d1b
;   sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630 at 00534956
;   sound_sndmain.cpp_CSfxSample_seek_FUN_005a65a0 at 005a66bb
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c_fseek_FUN_005ffacc
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534ba0
        ;   Label: sound_mp3.cpp_CMP3Decoder_seek_FUN_00534ba0
    PUSH ESI                            ; 00534ba1
    PUSH EDI                            ; 00534ba2
    PUSH EBP                            ; 00534ba3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00534ba4
    MOV ESI,dword ptr [ESP + 0x18]      ; 00534ba8
    MOV dword ptr [EBX + 0x108],0x0     ; 00534bac
    LEA EDI,[EBX + 0x5320]              ; 00534bb6
    MOV dword ptr [EBX + 0x10c],0x0     ; 00534bbc
    PUSH 0x0                            ; 00534bc6
    MOV EDX,dword ptr [EDI + 0x20]      ; 00534bc8
    PUSH EDX                            ; 00534bcb
    MOV ECX,dword ptr [EDI]             ; 00534bcc
    PUSH ECX                            ; 00534bce
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 00534bcf
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    MOV dword ptr [EDI + 0x10],0x0      ; 00534bd4
    MOV dword ptr [EDI + 0x14],0x0      ; 00534bdb
    MOV dword ptr [EDI + 0xc],0x0       ; 00534be2
    MOV dword ptr [EDI + 0x18],0x0      ; 00534be9
    MOV dword ptr [EDI + 0x1c],0x0      ; 00534bf0
    MOV EAX,dword ptr [EDI + 0x24]      ; 00534bf7
    MOV dword ptr [EDI + 0x28],EAX      ; 00534bfa
    MOV dword ptr [EBX + 0x534c],0x0    ; 00534bfd
    MOV dword ptr [EBX + 0x1310],0x0    ; 00534c07
    ADD ESP,0xc                         ; 00534c11
    MOV dword ptr [EBX + 0x1314],0x0    ; 00534c14
    PUSH 0x2000                         ; 00534c1e
    MOV dword ptr [EBX + 0x1318],0x0    ; 00534c23
    PUSH 0x0                            ; 00534c2d
    MOV dword ptr [EBX + 0x531c],0x8    ; 00534c2f
    LEA EAX,[EBX + 0x5350]              ; 00534c39
    MOV dword ptr [EBX + 0x7350],0x40   ; 00534c3f
    PUSH EAX                            ; 00534c49
    MOV dword ptr [EBX + 0x7354],0x40   ; 00534c4a
    CALL crt_memory.c_memset_FUN_005fde40 ; 00534c54
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00534c59
    PUSH 0x1200                         ; 00534c5c
    PUSH 0x0                            ; 00534c61
    LEA EAX,[EBX + 0x7430]              ; 00534c63
    PUSH EAX                            ; 00534c69
    CALL crt_memory.c_memset_FUN_005fde40 ; 00534c6a
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00534c6f
    CMP ESI,0x900                       ; 00534c72
    JL 0x00534c93                       ; 00534c78
        ;   XREF to: 00534c93 (CONDITIONAL_JUMP)  ; LAB_00534c93
    PUSH 0x0                            ; 00534c7a
        ;   Label: LAB_00534c7a
    PUSH EBX                            ; 00534c7c
    CALL sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 ; 00534c7d
        ;   XREF to: 00534d40 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40(CMP3Decoder * this_ptr)
    ADD ESP,0x8                         ; 00534c82
    TEST EAX,EAX                        ; 00534c85
    JLE 0x00534ca7                      ; 00534c87
        ;   XREF to: 00534ca7 (CONDITIONAL_JUMP)  ; LAB_00534ca7
    SUB ESI,EAX                         ; 00534c89
    CMP ESI,0x900                       ; 00534c8b
    JGE 0x00534c7a                      ; 00534c91
        ;   XREF to: 00534c7a (CONDITIONAL_JUMP)  ; LAB_00534c7a
    LEA EDI,[EBX + 0x110]               ; 00534c93
        ;   Label: LAB_00534c93
    TEST ESI,ESI                        ; 00534c99
    JG 0x00534cae                       ; 00534c9b
        ;   XREF to: 00534cae (CONDITIONAL_JUMP)  ; LAB_00534cae
    MOV EAX,0x1                         ; 00534c9d
    POP EBP                             ; 00534ca2
    POP EDI                             ; 00534ca3
    POP ESI                             ; 00534ca4
    POP EBX                             ; 00534ca5
    RET                                 ; 00534ca6
    XOR EAX,EAX                         ; 00534ca7
        ;   Label: LAB_00534ca7
    POP EBP                             ; 00534ca9
    POP EDI                             ; 00534caa
    POP ESI                             ; 00534cab
    POP EBX                             ; 00534cac
    RET                                 ; 00534cad
    PUSH EDI                            ; 00534cae
        ;   Label: LAB_00534cae
    PUSH EBX                            ; 00534caf
    CALL sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 ; 00534cb0
        ;   XREF to: 00534d40 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40(CMP3Decoder * this_ptr)
    ADD ESP,0x8                         ; 00534cb5
    MOV dword ptr [EBX + 0x108],EAX     ; 00534cb8
    TEST EAX,EAX                        ; 00534cbe
    JLE 0x00534ca7                      ; 00534cc0
        ;   XREF to: 00534ca7 (CONDITIONAL_JUMP)  ; LAB_00534ca7
    CMP ESI,EAX                         ; 00534cc2
    JL 0x00534ce0                       ; 00534cc4
        ;   XREF to: 00534ce0 (CONDITIONAL_JUMP)  ; LAB_00534ce0
    MOV dword ptr [EBX + 0x108],0x0     ; 00534cc6
    SUB ESI,EAX                         ; 00534cd0
    TEST ESI,ESI                        ; 00534cd2
    JG 0x00534cae                       ; 00534cd4
        ;   XREF to: 00534cae (CONDITIONAL_JUMP)  ; LAB_00534cae
    MOV EAX,0x1                         ; 00534cd6
    POP EBP                             ; 00534cdb
    POP EDI                             ; 00534cdc
    POP ESI                             ; 00534cdd
    POP EBX                             ; 00534cde
    RET                                 ; 00534cdf
    MOV ECX,EAX                         ; 00534ce0
        ;   Label: LAB_00534ce0
    MOV EBP,dword ptr [EBX + 0x104]     ; 00534ce2
    SUB ECX,ESI                         ; 00534ce8
    IMUL ESI,EBP                        ; 00534cea
    ADD ESI,ESI                         ; 00534ced
    MOV dword ptr [EBX + 0x108],ECX     ; 00534cef
    ADD EDI,ESI                         ; 00534cf5
    MOV dword ptr [EBX + 0x10c],EDI     ; 00534cf7
    MOV EAX,0x1                         ; 00534cfd
    POP EBP                             ; 00534d02
    POP EDI                             ; 00534d03
    POP ESI                             ; 00534d04
    POP EBX                             ; 00534d05
    RET                                 ; 00534d06

