; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_mp3_cpp_CMP3Decoder_seek_FUN_0050a0e0(CMP3Decoder *this_ptr,int sample_offset)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   sample_offset
;
; XREF[2]:
;   sound_mp3.cpp_FUN_00509db0 at 00509ede
;   sound_sndmain.cpp_CSfxSample_seek_FUN_0054dc50 at 0054dcf9
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   crt_stdio.c_fseek_FUN_005b929c
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050a0e0
        ;   Label: sound_mp3.cpp_CMP3Decoder_seek_FUN_0050a0e0
    PUSH ESI                            ; 0050a0e1
    PUSH EDI                            ; 0050a0e2
    PUSH EBP                            ; 0050a0e3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0050a0e4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0050a0e8
    MOV dword ptr [EBX + 0x108],0x0     ; 0050a0ec
    LEA EDI,[EBX + 0x5320]              ; 0050a0f6
    MOV dword ptr [EBX + 0x10c],0x0     ; 0050a0fc
    PUSH 0x0                            ; 0050a106
    MOV EDX,dword ptr [EDI + 0x20]      ; 0050a108
    PUSH EDX                            ; 0050a10b
    MOV ECX,dword ptr [EDI]             ; 0050a10c
    PUSH ECX                            ; 0050a10e
    CALL crt_stdio.c_fseek_FUN_005b929c ; 0050a10f
        ;   XREF to: 005b929c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005b929c(_FILE * file, long offset, int whence)
    MOV dword ptr [EDI + 0x10],0x0      ; 0050a114
    MOV dword ptr [EDI + 0x14],0x0      ; 0050a11b
    MOV dword ptr [EDI + 0xc],0x0       ; 0050a122
    MOV dword ptr [EDI + 0x18],0x0      ; 0050a129
    MOV dword ptr [EDI + 0x1c],0x0      ; 0050a130
    MOV EAX,dword ptr [EDI + 0x24]      ; 0050a137
    MOV dword ptr [EDI + 0x28],EAX      ; 0050a13a
    MOV dword ptr [EBX + 0x534c],0x0    ; 0050a13d
    MOV dword ptr [EBX + 0x1310],0x0    ; 0050a147
    ADD ESP,0xc                         ; 0050a151
    MOV dword ptr [EBX + 0x1314],0x0    ; 0050a154
    PUSH 0x2000                         ; 0050a15e
    MOV dword ptr [EBX + 0x1318],0x0    ; 0050a163
    PUSH 0x0                            ; 0050a16d
    MOV dword ptr [EBX + 0x531c],0x8    ; 0050a16f
    LEA EAX,[EBX + 0x5350]              ; 0050a179
    MOV dword ptr [EBX + 0x7350],0x40   ; 0050a17f
    PUSH EAX                            ; 0050a189
    MOV dword ptr [EBX + 0x7354],0x40   ; 0050a18a
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0050a194
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0050a199
    PUSH 0x1200                         ; 0050a19c
    PUSH 0x0                            ; 0050a1a1
    LEA EAX,[EBX + 0x7430]              ; 0050a1a3
    PUSH EAX                            ; 0050a1a9
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0050a1aa
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0050a1af
    CMP ESI,0x900                       ; 0050a1b2
    JL 0x0050a1d3                       ; 0050a1b8
        ;   XREF to: 0050a1d3 (CONDITIONAL_JUMP)  ; LAB_0050a1d3
    PUSH 0x0                            ; 0050a1ba
        ;   Label: LAB_0050a1ba
    PUSH EBX                            ; 0050a1bc
    CALL sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280 ; 0050a1bd
        ;   XREF to: 0050a280 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280(CMP3Decoder * this_ptr, short * pcm_output)
    ADD ESP,0x8                         ; 0050a1c2
    TEST EAX,EAX                        ; 0050a1c5
    JLE 0x0050a1e7                      ; 0050a1c7
        ;   XREF to: 0050a1e7 (CONDITIONAL_JUMP)  ; LAB_0050a1e7
    SUB ESI,EAX                         ; 0050a1c9
    CMP ESI,0x900                       ; 0050a1cb
    JGE 0x0050a1ba                      ; 0050a1d1
        ;   XREF to: 0050a1ba (CONDITIONAL_JUMP)  ; LAB_0050a1ba
    LEA EDI,[EBX + 0x110]               ; 0050a1d3
        ;   Label: LAB_0050a1d3
    TEST ESI,ESI                        ; 0050a1d9
    JG 0x0050a1ee                       ; 0050a1db
        ;   XREF to: 0050a1ee (CONDITIONAL_JUMP)  ; LAB_0050a1ee
    MOV EAX,0x1                         ; 0050a1dd
    POP EBP                             ; 0050a1e2
    POP EDI                             ; 0050a1e3
    POP ESI                             ; 0050a1e4
    POP EBX                             ; 0050a1e5
    RET                                 ; 0050a1e6
    XOR EAX,EAX                         ; 0050a1e7
        ;   Label: LAB_0050a1e7
    POP EBP                             ; 0050a1e9
    POP EDI                             ; 0050a1ea
    POP ESI                             ; 0050a1eb
    POP EBX                             ; 0050a1ec
    RET                                 ; 0050a1ed
    PUSH EDI                            ; 0050a1ee
        ;   Label: LAB_0050a1ee
    PUSH EBX                            ; 0050a1ef
    CALL sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280 ; 0050a1f0
        ;   XREF to: 0050a280 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280(CMP3Decoder * this_ptr, short * pcm_output)
    ADD ESP,0x8                         ; 0050a1f5
    MOV dword ptr [EBX + 0x108],EAX     ; 0050a1f8
    TEST EAX,EAX                        ; 0050a1fe
    JLE 0x0050a1e7                      ; 0050a200
        ;   XREF to: 0050a1e7 (CONDITIONAL_JUMP)  ; LAB_0050a1e7
    CMP ESI,EAX                         ; 0050a202
    JL 0x0050a220                       ; 0050a204
        ;   XREF to: 0050a220 (CONDITIONAL_JUMP)  ; LAB_0050a220
    MOV dword ptr [EBX + 0x108],0x0     ; 0050a206
    SUB ESI,EAX                         ; 0050a210
    TEST ESI,ESI                        ; 0050a212
    JG 0x0050a1ee                       ; 0050a214
        ;   XREF to: 0050a1ee (CONDITIONAL_JUMP)  ; LAB_0050a1ee
    MOV EAX,0x1                         ; 0050a216
    POP EBP                             ; 0050a21b
    POP EDI                             ; 0050a21c
    POP ESI                             ; 0050a21d
    POP EBX                             ; 0050a21e
    RET                                 ; 0050a21f
    MOV ECX,EAX                         ; 0050a220
        ;   Label: LAB_0050a220
    MOV EBP,dword ptr [EBX + 0x104]     ; 0050a222
    SUB ECX,ESI                         ; 0050a228
    IMUL ESI,EBP                        ; 0050a22a
    ADD ESI,ESI                         ; 0050a22d
    MOV dword ptr [EBX + 0x108],ECX     ; 0050a22f
    ADD EDI,ESI                         ; 0050a235
    MOV dword ptr [EBX + 0x10c],EDI     ; 0050a237
    MOV EAX,0x1                         ; 0050a23d
    POP EBP                             ; 0050a242
    POP EDI                             ; 0050a243
    POP ESI                             ; 0050a244
    POP EBX                             ; 0050a245
    RET                                 ; 0050a246

