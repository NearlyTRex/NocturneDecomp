; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_mp3_cpp_CMP3Decoder_seek_FUN_0052b2b0(CMP3Decoder *this_ptr,int sample_offset)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   sample_offset
;
; XREF[2]:
;   sound_mp3.cpp_FUN_0052af80 at 0052b0ae
;   sound_sndmain.cpp_CSfxSample_seek_FUN_005702c0 at 00570369
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   crt_stdio.c_fseek_FUN_005c170c
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0052b450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052b2b0
        ;   Label: sound_mp3.cpp_CMP3Decoder_seek_FUN_0052b2b0
    PUSH ESI                            ; 0052b2b1
    PUSH EDI                            ; 0052b2b2
    PUSH EBP                            ; 0052b2b3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0052b2b4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0052b2b8
    MOV dword ptr [EBX + 0x108],0x0     ; 0052b2bc
    LEA EDI,[EBX + 0x5320]              ; 0052b2c6
    MOV dword ptr [EBX + 0x10c],0x0     ; 0052b2cc
    PUSH 0x0                            ; 0052b2d6
    MOV EDX,dword ptr [EDI + 0x20]      ; 0052b2d8
    PUSH EDX                            ; 0052b2db
    MOV ECX,dword ptr [EDI]             ; 0052b2dc
    PUSH ECX                            ; 0052b2de
    CALL crt_stdio.c_fseek_FUN_005c170c ; 0052b2df
        ;   XREF to: 005c170c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005c170c(_FILE * file, long offset, int whence)
    MOV dword ptr [EDI + 0x10],0x0      ; 0052b2e4
    MOV dword ptr [EDI + 0x14],0x0      ; 0052b2eb
    MOV dword ptr [EDI + 0xc],0x0       ; 0052b2f2
    MOV dword ptr [EDI + 0x18],0x0      ; 0052b2f9
    MOV dword ptr [EDI + 0x1c],0x0      ; 0052b300
    MOV EAX,dword ptr [EDI + 0x24]      ; 0052b307
    MOV dword ptr [EDI + 0x28],EAX      ; 0052b30a
    MOV dword ptr [EBX + 0x534c],0x0    ; 0052b30d
    MOV dword ptr [EBX + 0x1310],0x0    ; 0052b317
    ADD ESP,0xc                         ; 0052b321
    MOV dword ptr [EBX + 0x1314],0x0    ; 0052b324
    PUSH 0x2000                         ; 0052b32e
    MOV dword ptr [EBX + 0x1318],0x0    ; 0052b333
    PUSH 0x0                            ; 0052b33d
    MOV dword ptr [EBX + 0x531c],0x8    ; 0052b33f
    LEA EAX,[EBX + 0x5350]              ; 0052b349
    MOV dword ptr [EBX + 0x7350],0x40   ; 0052b34f
    PUSH EAX                            ; 0052b359
    MOV dword ptr [EBX + 0x7354],0x40   ; 0052b35a
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0052b364
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0052b369
    PUSH 0x1200                         ; 0052b36c
    PUSH 0x0                            ; 0052b371
    LEA EAX,[EBX + 0x7430]              ; 0052b373
    PUSH EAX                            ; 0052b379
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0052b37a
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0052b37f
    CMP ESI,0x900                       ; 0052b382
    JL 0x0052b3a3                       ; 0052b388
        ;   XREF to: 0052b3a3 (CONDITIONAL_JUMP)  ; LAB_0052b3a3
    PUSH 0x0                            ; 0052b38a
        ;   Label: LAB_0052b38a
    PUSH EBX                            ; 0052b38c
    CALL sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0052b450 ; 0052b38d
        ;   XREF to: 0052b450 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0052b450(CMP3Decoder * this_ptr, short * pcm_output)
    ADD ESP,0x8                         ; 0052b392
    TEST EAX,EAX                        ; 0052b395
    JLE 0x0052b3b7                      ; 0052b397
        ;   XREF to: 0052b3b7 (CONDITIONAL_JUMP)  ; LAB_0052b3b7
    SUB ESI,EAX                         ; 0052b399
    CMP ESI,0x900                       ; 0052b39b
    JGE 0x0052b38a                      ; 0052b3a1
        ;   XREF to: 0052b38a (CONDITIONAL_JUMP)  ; LAB_0052b38a
    LEA EDI,[EBX + 0x110]               ; 0052b3a3
        ;   Label: LAB_0052b3a3
    TEST ESI,ESI                        ; 0052b3a9
    JG 0x0052b3be                       ; 0052b3ab
        ;   XREF to: 0052b3be (CONDITIONAL_JUMP)  ; LAB_0052b3be
    MOV EAX,0x1                         ; 0052b3ad
    POP EBP                             ; 0052b3b2
    POP EDI                             ; 0052b3b3
    POP ESI                             ; 0052b3b4
    POP EBX                             ; 0052b3b5
    RET                                 ; 0052b3b6
    XOR EAX,EAX                         ; 0052b3b7
        ;   Label: LAB_0052b3b7
    POP EBP                             ; 0052b3b9
    POP EDI                             ; 0052b3ba
    POP ESI                             ; 0052b3bb
    POP EBX                             ; 0052b3bc
    RET                                 ; 0052b3bd
    PUSH EDI                            ; 0052b3be
        ;   Label: LAB_0052b3be
    PUSH EBX                            ; 0052b3bf
    CALL sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0052b450 ; 0052b3c0
        ;   XREF to: 0052b450 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0052b450(CMP3Decoder * this_ptr, short * pcm_output)
    ADD ESP,0x8                         ; 0052b3c5
    MOV dword ptr [EBX + 0x108],EAX     ; 0052b3c8
    TEST EAX,EAX                        ; 0052b3ce
    JLE 0x0052b3b7                      ; 0052b3d0
        ;   XREF to: 0052b3b7 (CONDITIONAL_JUMP)  ; LAB_0052b3b7
    CMP ESI,EAX                         ; 0052b3d2
    JL 0x0052b3f0                       ; 0052b3d4
        ;   XREF to: 0052b3f0 (CONDITIONAL_JUMP)  ; LAB_0052b3f0
    MOV dword ptr [EBX + 0x108],0x0     ; 0052b3d6
    SUB ESI,EAX                         ; 0052b3e0
    TEST ESI,ESI                        ; 0052b3e2
    JG 0x0052b3be                       ; 0052b3e4
        ;   XREF to: 0052b3be (CONDITIONAL_JUMP)  ; LAB_0052b3be
    MOV EAX,0x1                         ; 0052b3e6
    POP EBP                             ; 0052b3eb
    POP EDI                             ; 0052b3ec
    POP ESI                             ; 0052b3ed
    POP EBX                             ; 0052b3ee
    RET                                 ; 0052b3ef
    MOV ECX,EAX                         ; 0052b3f0
        ;   Label: LAB_0052b3f0
    MOV EBP,dword ptr [EBX + 0x104]     ; 0052b3f2
    SUB ECX,ESI                         ; 0052b3f8
    IMUL ESI,EBP                        ; 0052b3fa
    ADD ESI,ESI                         ; 0052b3fd
    MOV dword ptr [EBX + 0x108],ECX     ; 0052b3ff
    ADD EDI,ESI                         ; 0052b405
    MOV dword ptr [EBX + 0x10c],EDI     ; 0052b407
    MOV EAX,0x1                         ; 0052b40d
    POP EBP                             ; 0052b412
    POP EDI                             ; 0052b413
    POP ESI                             ; 0052b414
    POP EBX                             ; 0052b415
    RET                                 ; 0052b416

