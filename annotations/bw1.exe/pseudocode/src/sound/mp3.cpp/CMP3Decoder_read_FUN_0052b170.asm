; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_mp3_cpp_CMP3Decoder_read_FUN_0052b170(CMP3Decoder *this_ptr,short *output_buffer,int samples_requested)
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
;   sound_sndmain.cpp_FUN_0056e830 at 0056ed5a
;   sound_sndmain.cpp_FUN_00570460 at 00570a12
;
; Referenced Globals:
;   undefined4 DAT_01d404c8
;   undefined4 DAT_01d404c9
;   undefined4 DAT_01d404ca
;   undefined4 DAT_01d404cb
;
; Called Functions:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0052b450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052b170
        ;   Label: sound_mp3.cpp_CMP3Decoder_read_FUN_0052b170
    PUSH ESI                            ; 0052b171
    PUSH EDI                            ; 0052b172
    PUSH EBP                            ; 0052b173
    SUB ESP,0x8                         ; 0052b174
    MOV EBX,dword ptr [ESP + 0x24]      ; 0052b177
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0052b17b
    MOV EDI,0x1d404c8                   ; 0052b17f
    MOV EBP,dword ptr [ESP + 0x20]      ; 0052b184
    PUSH EDI                            ; 0052b188
    MOV AL,byte ptr [ESI]               ; 0052b189
        ;   Label: LAB_0052b189
    MOV byte ptr [EDI],AL               ; 0052b18b | DAT_01d404c8 | DAT_01d404ca
    CMP AL,0x0                          ; 0052b18d
    JZ 0x0052b1a1                       ; 0052b18f
        ;   XREF to: 0052b1a1 (CONDITIONAL_JUMP)  ; LAB_0052b1a1
    MOV AL,byte ptr [ESI + 0x1]         ; 0052b191
    ADD ESI,0x2                         ; 0052b194
    MOV byte ptr [EDI + 0x1],AL         ; 0052b197 | DAT_01d404c9 | DAT_01d404cb
    ADD EDI,0x2                         ; 0052b19a
    CMP AL,0x0                          ; 0052b19d
    JNZ 0x0052b189                      ; 0052b19f
        ;   XREF to: 0052b189 (CONDITIONAL_JUMP)  ; LAB_0052b189
    POP EDI                             ; 0052b1a1
        ;   Label: LAB_0052b1a1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0052b1a2
    XOR EDX,EDX                         ; 0052b1a6
    ADD EAX,0x110                       ; 0052b1a8
    MOV dword ptr [ESP + 0x4],EDX       ; 0052b1ad
    MOV dword ptr [ESP],EAX             ; 0052b1b1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0052b1b4
        ;   Label: LAB_0052b1b4
    MOV ECX,dword ptr [EAX + 0x108]     ; 0052b1b8
    TEST ECX,ECX                        ; 0052b1be
    JLE 0x0052b235                      ; 0052b1c0
        ;   XREF to: 0052b235 (CONDITIONAL_JUMP)  ; LAB_0052b235
    MOV EDX,ECX                         ; 0052b1c2
    CMP ECX,EBX                         ; 0052b1c4
    JLE 0x0052b1ca                      ; 0052b1c6
        ;   XREF to: 0052b1ca (CONDITIONAL_JUMP)  ; LAB_0052b1ca
    MOV EDX,EBX                         ; 0052b1c8
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0052b1ca
        ;   Label: LAB_0052b1ca
    MOV ECX,dword ptr [ECX + 0x104]     ; 0052b1ce
    IMUL ECX,EDX                        ; 0052b1d4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0052b1d7
    MOV EDI,EBP                         ; 0052b1db
    MOV ESI,dword ptr [ESI + 0x10c]     ; 0052b1dd
    ADD ECX,ECX                         ; 0052b1e3
    PUSH EDI                            ; 0052b1e5
    MOV EAX,ECX                         ; 0052b1e6
    SHR ECX,0x2                         ; 0052b1e8
    MOVSD.REP ES:EDI,ESI                ; 0052b1eb
    MOV CL,AL                           ; 0052b1ed
    AND CL,0x3                          ; 0052b1ef
    MOVSB.REP ES:EDI,ESI                ; 0052b1f2
    POP EDI                             ; 0052b1f4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0052b1f5
    SUB dword ptr [EAX + 0x108],EDX     ; 0052b1f9
    MOV EAX,dword ptr [EAX + 0x104]     ; 0052b1ff
    IMUL EAX,EDX                        ; 0052b205
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0052b208
    MOV ESI,dword ptr [ECX + 0x10c]     ; 0052b20c
    ADD EAX,EAX                         ; 0052b212
    ADD ESI,EAX                         ; 0052b214
    MOV EAX,dword ptr [ECX + 0x104]     ; 0052b216
    IMUL EAX,EDX                        ; 0052b21c
    MOV EDI,dword ptr [ESP + 0x4]       ; 0052b21f
    ADD EDI,EDX                         ; 0052b223
    SUB EBX,EDX                         ; 0052b225
    MOV dword ptr [ESP + 0x4],EDI       ; 0052b227
    ADD EAX,EAX                         ; 0052b22b
    MOV dword ptr [ECX + 0x10c],ESI     ; 0052b22d
    ADD EBP,EAX                         ; 0052b233
    CMP EBX,0x480                       ; 0052b235
        ;   Label: LAB_0052b235
    JGE 0x0052b24e                      ; 0052b23b
        ;   XREF to: 0052b24e (CONDITIONAL_JUMP)  ; LAB_0052b24e
    CMP EBX,0x1                         ; 0052b23d
    JGE 0x0052b27f                      ; 0052b240
        ;   XREF to: 0052b27f (CONDITIONAL_JUMP)  ; LAB_0052b27f
    MOV EAX,dword ptr [ESP + 0x4]       ; 0052b242
        ;   Label: LAB_0052b242
    ADD ESP,0x8                         ; 0052b246
    POP EBP                             ; 0052b249
    POP EDI                             ; 0052b24a
    POP ESI                             ; 0052b24b
    POP EBX                             ; 0052b24c
    RET                                 ; 0052b24d
    PUSH EBP                            ; 0052b24e
        ;   Label: LAB_0052b24e
    MOV ECX,dword ptr [ESP + 0x20]      ; 0052b24f
    PUSH ECX                            ; 0052b253
    CALL sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0052b450 ; 0052b254
        ;   XREF to: 0052b450 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0052b450(CMP3Decoder * this_ptr, short * pcm_output)
    ADD ESP,0x8                         ; 0052b259
    TEST EAX,EAX                        ; 0052b25c
    JLE 0x0052b242                      ; 0052b25e
        ;   XREF to: 0052b242 (CONDITIONAL_JUMP)  ; LAB_0052b242
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0052b260
    MOV EDX,dword ptr [EDX + 0x104]     ; 0052b264
    IMUL EDX,EAX                        ; 0052b26a
    MOV ESI,dword ptr [ESP + 0x4]       ; 0052b26d
    SUB EBX,EAX                         ; 0052b271
    ADD ESI,EAX                         ; 0052b273
    ADD EDX,EDX                         ; 0052b275
    MOV dword ptr [ESP + 0x4],ESI       ; 0052b277
    ADD EBP,EDX                         ; 0052b27b
    JMP 0x0052b235                      ; 0052b27d
        ;   XREF to: 0052b235 (UNCONDITIONAL_JUMP)  ; LAB_0052b235
    MOV EDI,dword ptr [ESP]             ; 0052b27f
        ;   Label: LAB_0052b27f
    PUSH EDI                            ; 0052b282
    MOV EAX,dword ptr [ESP + 0x20]      ; 0052b283
    PUSH EAX                            ; 0052b287
    CALL sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0052b450 ; 0052b288
        ;   XREF to: 0052b450 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0052b450(CMP3Decoder * this_ptr, short * pcm_output)
    ADD ESP,0x8                         ; 0052b28d
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0052b290
    MOV dword ptr [EDX + 0x108],EAX     ; 0052b294
    TEST EAX,EAX                        ; 0052b29a
    JLE 0x0052b242                      ; 0052b29c
        ;   XREF to: 0052b242 (CONDITIONAL_JUMP)  ; LAB_0052b242
    MOV dword ptr [EDX + 0x10c],EDI     ; 0052b29e
    JMP 0x0052b1b4                      ; 0052b2a4
        ;   XREF to: 0052b1b4 (UNCONDITIONAL_JUMP)  ; LAB_0052b1b4

