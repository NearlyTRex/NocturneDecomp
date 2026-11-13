; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_mp3_cpp_CMP3Decoder_read_FUN_00509fa0(CMP3Decoder *this_ptr,short *output_buffer,int samples_requested)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; short *          Stack[0x8]:4   output_buffer
; int              Stack[0xc]:4   samples_requested
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   sound_sndmain.cpp_CSfxSample_pollStream_FUN_0054ddf0 at 0054e3a2
;   sound_sndmain.cpp_getSfxSample_FUN_0054c1c0 at 0054c6ea
;
; Referenced Globals:
;   undefined4 DAT_01d23558
;   undefined4 DAT_01d23559
;   undefined4 DAT_01d2355a
;   undefined4 DAT_01d2355b
;
; Called Functions:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509fa0
        ;   Label: sound_mp3.cpp_CMP3Decoder_read_FUN_00509fa0
    PUSH ESI                            ; 00509fa1
    PUSH EDI                            ; 00509fa2
    PUSH EBP                            ; 00509fa3
    SUB ESP,0x8                         ; 00509fa4
    MOV EBX,dword ptr [ESP + 0x24]      ; 00509fa7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00509fab
    MOV EDI,0x1d23558                   ; 00509faf
    MOV EBP,dword ptr [ESP + 0x20]      ; 00509fb4
    PUSH EDI                            ; 00509fb8
    MOV AL,byte ptr [ESI]               ; 00509fb9
        ;   Label: LAB_00509fb9
    MOV byte ptr [EDI],AL               ; 00509fbb | DAT_01d23558 | DAT_01d2355a
    CMP AL,0x0                          ; 00509fbd
    JZ 0x00509fd1                       ; 00509fbf
        ;   XREF to: 00509fd1 (CONDITIONAL_JUMP)  ; LAB_00509fd1
    MOV AL,byte ptr [ESI + 0x1]         ; 00509fc1
    ADD ESI,0x2                         ; 00509fc4
    MOV byte ptr [EDI + 0x1],AL         ; 00509fc7 | DAT_01d23559 | DAT_01d2355b
    ADD EDI,0x2                         ; 00509fca
    CMP AL,0x0                          ; 00509fcd
    JNZ 0x00509fb9                      ; 00509fcf
        ;   XREF to: 00509fb9 (CONDITIONAL_JUMP)  ; LAB_00509fb9
    POP EDI                             ; 00509fd1
        ;   Label: LAB_00509fd1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00509fd2
    XOR EDX,EDX                         ; 00509fd6
    ADD EAX,0x110                       ; 00509fd8
    MOV dword ptr [ESP + 0x4],EDX       ; 00509fdd
    MOV dword ptr [ESP],EAX             ; 00509fe1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00509fe4
        ;   Label: LAB_00509fe4
    MOV ECX,dword ptr [EAX + 0x108]     ; 00509fe8
    TEST ECX,ECX                        ; 00509fee
    JLE 0x0050a065                      ; 00509ff0
        ;   XREF to: 0050a065 (CONDITIONAL_JUMP)  ; LAB_0050a065
    MOV EDX,ECX                         ; 00509ff2
    CMP ECX,EBX                         ; 00509ff4
    JLE 0x00509ffa                      ; 00509ff6
        ;   XREF to: 00509ffa (CONDITIONAL_JUMP)  ; LAB_00509ffa
    MOV EDX,EBX                         ; 00509ff8
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00509ffa
        ;   Label: LAB_00509ffa
    MOV ECX,dword ptr [ECX + 0x104]     ; 00509ffe
    IMUL ECX,EDX                        ; 0050a004
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0050a007
    MOV EDI,EBP                         ; 0050a00b
    MOV ESI,dword ptr [ESI + 0x10c]     ; 0050a00d
    ADD ECX,ECX                         ; 0050a013
    PUSH EDI                            ; 0050a015
    MOV EAX,ECX                         ; 0050a016
    SHR ECX,0x2                         ; 0050a018
    MOVSD.REP ES:EDI,ESI                ; 0050a01b
    MOV CL,AL                           ; 0050a01d
    AND CL,0x3                          ; 0050a01f
    MOVSB.REP ES:EDI,ESI                ; 0050a022
    POP EDI                             ; 0050a024
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0050a025
    SUB dword ptr [EAX + 0x108],EDX     ; 0050a029
    MOV EAX,dword ptr [EAX + 0x104]     ; 0050a02f
    IMUL EAX,EDX                        ; 0050a035
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0050a038
    MOV ESI,dword ptr [ECX + 0x10c]     ; 0050a03c
    ADD EAX,EAX                         ; 0050a042
    ADD ESI,EAX                         ; 0050a044
    MOV EAX,dword ptr [ECX + 0x104]     ; 0050a046
    IMUL EAX,EDX                        ; 0050a04c
    MOV EDI,dword ptr [ESP + 0x4]       ; 0050a04f
    ADD EDI,EDX                         ; 0050a053
    SUB EBX,EDX                         ; 0050a055
    MOV dword ptr [ESP + 0x4],EDI       ; 0050a057
    ADD EAX,EAX                         ; 0050a05b
    MOV dword ptr [ECX + 0x10c],ESI     ; 0050a05d
    ADD EBP,EAX                         ; 0050a063
    CMP EBX,0x480                       ; 0050a065
        ;   Label: LAB_0050a065
    JGE 0x0050a07e                      ; 0050a06b
        ;   XREF to: 0050a07e (CONDITIONAL_JUMP)  ; LAB_0050a07e
    CMP EBX,0x1                         ; 0050a06d
    JGE 0x0050a0af                      ; 0050a070
        ;   XREF to: 0050a0af (CONDITIONAL_JUMP)  ; LAB_0050a0af
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050a072
        ;   Label: LAB_0050a072
    ADD ESP,0x8                         ; 0050a076
    POP EBP                             ; 0050a079
    POP EDI                             ; 0050a07a
    POP ESI                             ; 0050a07b
    POP EBX                             ; 0050a07c
    RET                                 ; 0050a07d
    PUSH EBP                            ; 0050a07e
        ;   Label: LAB_0050a07e
    MOV ECX,dword ptr [ESP + 0x20]      ; 0050a07f
    PUSH ECX                            ; 0050a083
    CALL sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280 ; 0050a084
        ;   XREF to: 0050a280 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280(CMP3Decoder * this_ptr, short * pcm_output)
    ADD ESP,0x8                         ; 0050a089
    TEST EAX,EAX                        ; 0050a08c
    JLE 0x0050a072                      ; 0050a08e
        ;   XREF to: 0050a072 (CONDITIONAL_JUMP)  ; LAB_0050a072
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0050a090
    MOV EDX,dword ptr [EDX + 0x104]     ; 0050a094
    IMUL EDX,EAX                        ; 0050a09a
    MOV ESI,dword ptr [ESP + 0x4]       ; 0050a09d
    SUB EBX,EAX                         ; 0050a0a1
    ADD ESI,EAX                         ; 0050a0a3
    ADD EDX,EDX                         ; 0050a0a5
    MOV dword ptr [ESP + 0x4],ESI       ; 0050a0a7
    ADD EBP,EDX                         ; 0050a0ab
    JMP 0x0050a065                      ; 0050a0ad
        ;   XREF to: 0050a065 (UNCONDITIONAL_JUMP)  ; LAB_0050a065
    MOV EDI,dword ptr [ESP]             ; 0050a0af
        ;   Label: LAB_0050a0af
    PUSH EDI                            ; 0050a0b2
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050a0b3
    PUSH EAX                            ; 0050a0b7
    CALL sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280 ; 0050a0b8
        ;   XREF to: 0050a280 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280(CMP3Decoder * this_ptr, short * pcm_output)
    ADD ESP,0x8                         ; 0050a0bd
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0050a0c0
    MOV dword ptr [EDX + 0x108],EAX     ; 0050a0c4
    TEST EAX,EAX                        ; 0050a0ca
    JLE 0x0050a072                      ; 0050a0cc
        ;   XREF to: 0050a072 (CONDITIONAL_JUMP)  ; LAB_0050a072
    MOV dword ptr [EDX + 0x10c],EDI     ; 0050a0ce
    JMP 0x00509fe4                      ; 0050a0d4
        ;   XREF to: 00509fe4 (UNCONDITIONAL_JUMP)  ; LAB_00509fe4

