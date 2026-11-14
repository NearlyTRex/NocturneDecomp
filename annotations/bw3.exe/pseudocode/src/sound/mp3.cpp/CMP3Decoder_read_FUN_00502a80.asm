; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_mp3_cpp_CMP3Decoder_read_FUN_00502a80(CMP3Decoder *this_ptr,short *output_buffer,int samples_requested)
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
;   sound_sndmain.cpp_CSfxSample_pollStream_FUN_00553960 at 00553f12
;   sound_sndmain.cpp_getSfxSample_FUN_00551d20 at 0055224a
;
; Referenced Globals:
;   undefined4 DAT_01d94b98
;   undefined4 DAT_01d94b99
;   undefined4 DAT_01d94b9a
;   undefined4 DAT_01d94b9b
;
; Called Functions:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502a80
        ;   Label: sound_mp3.cpp_CMP3Decoder_read_FUN_00502a80
    PUSH ESI                            ; 00502a81
    PUSH EDI                            ; 00502a82
    PUSH EBP                            ; 00502a83
    SUB ESP,0x8                         ; 00502a84
    MOV EBX,dword ptr [ESP + 0x24]      ; 00502a87
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00502a8b
    MOV EDI,0x1d94b98                   ; 00502a8f
    MOV EBP,dword ptr [ESP + 0x20]      ; 00502a94
    PUSH EDI                            ; 00502a98
    MOV AL,byte ptr [ESI]               ; 00502a99
        ;   Label: LAB_00502a99
    MOV byte ptr [EDI],AL               ; 00502a9b | DAT_01d94b98 | DAT_01d94b9a
    CMP AL,0x0                          ; 00502a9d
    JZ 0x00502ab1                       ; 00502a9f
        ;   XREF to: 00502ab1 (CONDITIONAL_JUMP)  ; LAB_00502ab1
    MOV AL,byte ptr [ESI + 0x1]         ; 00502aa1
    ADD ESI,0x2                         ; 00502aa4
    MOV byte ptr [EDI + 0x1],AL         ; 00502aa7 | DAT_01d94b99 | DAT_01d94b9b
    ADD EDI,0x2                         ; 00502aaa
    CMP AL,0x0                          ; 00502aad
    JNZ 0x00502a99                      ; 00502aaf
        ;   XREF to: 00502a99 (CONDITIONAL_JUMP)  ; LAB_00502a99
    POP EDI                             ; 00502ab1
        ;   Label: LAB_00502ab1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00502ab2
    XOR EDX,EDX                         ; 00502ab6
    ADD EAX,0x110                       ; 00502ab8
    MOV dword ptr [ESP + 0x4],EDX       ; 00502abd
    MOV dword ptr [ESP],EAX             ; 00502ac1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00502ac4
        ;   Label: LAB_00502ac4
    MOV ECX,dword ptr [EAX + 0x108]     ; 00502ac8
    TEST ECX,ECX                        ; 00502ace
    JLE 0x00502b45                      ; 00502ad0
        ;   XREF to: 00502b45 (CONDITIONAL_JUMP)  ; LAB_00502b45
    MOV EDX,ECX                         ; 00502ad2
    CMP ECX,EBX                         ; 00502ad4
    JLE 0x00502ada                      ; 00502ad6
        ;   XREF to: 00502ada (CONDITIONAL_JUMP)  ; LAB_00502ada
    MOV EDX,EBX                         ; 00502ad8
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00502ada
        ;   Label: LAB_00502ada
    MOV ECX,dword ptr [ECX + 0x104]     ; 00502ade
    IMUL ECX,EDX                        ; 00502ae4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00502ae7
    MOV EDI,EBP                         ; 00502aeb
    MOV ESI,dword ptr [ESI + 0x10c]     ; 00502aed
    ADD ECX,ECX                         ; 00502af3
    PUSH EDI                            ; 00502af5
    MOV EAX,ECX                         ; 00502af6
    SHR ECX,0x2                         ; 00502af8
    MOVSD.REP ES:EDI,ESI                ; 00502afb
    MOV CL,AL                           ; 00502afd
    AND CL,0x3                          ; 00502aff
    MOVSB.REP ES:EDI,ESI                ; 00502b02
    POP EDI                             ; 00502b04
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00502b05
    SUB dword ptr [EAX + 0x108],EDX     ; 00502b09
    MOV EAX,dword ptr [EAX + 0x104]     ; 00502b0f
    IMUL EAX,EDX                        ; 00502b15
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00502b18
    MOV ESI,dword ptr [ECX + 0x10c]     ; 00502b1c
    ADD EAX,EAX                         ; 00502b22
    ADD ESI,EAX                         ; 00502b24
    MOV EAX,dword ptr [ECX + 0x104]     ; 00502b26
    IMUL EAX,EDX                        ; 00502b2c
    MOV EDI,dword ptr [ESP + 0x4]       ; 00502b2f
    ADD EDI,EDX                         ; 00502b33
    SUB EBX,EDX                         ; 00502b35
    MOV dword ptr [ESP + 0x4],EDI       ; 00502b37
    ADD EAX,EAX                         ; 00502b3b
    MOV dword ptr [ECX + 0x10c],ESI     ; 00502b3d
    ADD EBP,EAX                         ; 00502b43
    CMP EBX,0x480                       ; 00502b45
        ;   Label: LAB_00502b45
    JGE 0x00502b5e                      ; 00502b4b
        ;   XREF to: 00502b5e (CONDITIONAL_JUMP)  ; LAB_00502b5e
    CMP EBX,0x1                         ; 00502b4d
    JGE 0x00502b8f                      ; 00502b50
        ;   XREF to: 00502b8f (CONDITIONAL_JUMP)  ; LAB_00502b8f
    MOV EAX,dword ptr [ESP + 0x4]       ; 00502b52
        ;   Label: LAB_00502b52
    ADD ESP,0x8                         ; 00502b56
    POP EBP                             ; 00502b59
    POP EDI                             ; 00502b5a
    POP ESI                             ; 00502b5b
    POP EBX                             ; 00502b5c
    RET                                 ; 00502b5d
    PUSH EBP                            ; 00502b5e
        ;   Label: LAB_00502b5e
    MOV ECX,dword ptr [ESP + 0x20]      ; 00502b5f
    PUSH ECX                            ; 00502b63
    CALL sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60 ; 00502b64
        ;   XREF to: 00502d60 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60(CMP3Decoder * this_ptr, short * pcm_output)
    ADD ESP,0x8                         ; 00502b69
    TEST EAX,EAX                        ; 00502b6c
    JLE 0x00502b52                      ; 00502b6e
        ;   XREF to: 00502b52 (CONDITIONAL_JUMP)  ; LAB_00502b52
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00502b70
    MOV EDX,dword ptr [EDX + 0x104]     ; 00502b74
    IMUL EDX,EAX                        ; 00502b7a
    MOV ESI,dword ptr [ESP + 0x4]       ; 00502b7d
    SUB EBX,EAX                         ; 00502b81
    ADD ESI,EAX                         ; 00502b83
    ADD EDX,EDX                         ; 00502b85
    MOV dword ptr [ESP + 0x4],ESI       ; 00502b87
    ADD EBP,EDX                         ; 00502b8b
    JMP 0x00502b45                      ; 00502b8d
        ;   XREF to: 00502b45 (UNCONDITIONAL_JUMP)  ; LAB_00502b45
    MOV EDI,dword ptr [ESP]             ; 00502b8f
        ;   Label: LAB_00502b8f
    PUSH EDI                            ; 00502b92
    MOV EAX,dword ptr [ESP + 0x20]      ; 00502b93
    PUSH EAX                            ; 00502b97
    CALL sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60 ; 00502b98
        ;   XREF to: 00502d60 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60(CMP3Decoder * this_ptr, short * pcm_output)
    ADD ESP,0x8                         ; 00502b9d
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00502ba0
    MOV dword ptr [EDX + 0x108],EAX     ; 00502ba4
    TEST EAX,EAX                        ; 00502baa
    JLE 0x00502b52                      ; 00502bac
        ;   XREF to: 00502b52 (CONDITIONAL_JUMP)  ; LAB_00502b52
    MOV dword ptr [EDX + 0x10c],EDI     ; 00502bae
    JMP 0x00502ac4                      ; 00502bb4
        ;   XREF to: 00502ac4 (UNCONDITIONAL_JUMP)  ; LAB_00502ac4

