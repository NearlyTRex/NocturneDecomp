; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_mp3_cpp_CMP3Decoder_read_FUN_00534a60(CMP3Decoder *this_ptr,short *output_buffer,int samples_requested)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; short *          Stack[0x8]:4   output_buffer
; int              Stack[0xc]:4   samples_requested
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   sound_mp3.cpp_testMP3DecoderBenchmark_FUN_00534210 at 0053435a
;   sound_sndmain.cpp_CSfxSample_pollStream_FUN_005a6730 at 005a6cad
;   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 at 005acfe3
;   sound_sndmain.cpp_getSfxSample_FUN_005a4c80 at 005a5106
;
; Referenced Globals:
;   char[256] g_CurrentMp3Filename
;   undefined4 DAT_02f68189
;   undefined4 DAT_02f6818a
;   undefined4 DAT_02f6818b
;
; Called Functions:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534a60
        ;   Label: sound_mp3.cpp_CMP3Decoder_read_FUN_00534a60
    PUSH ESI                            ; 00534a61
    PUSH EDI                            ; 00534a62
    PUSH EBP                            ; 00534a63
    SUB ESP,0x8                         ; 00534a64
    MOV EBX,dword ptr [ESP + 0x24]      ; 00534a67
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00534a6b
    MOV EDI,0x2f68188                   ; 00534a6f | g_CurrentMp3Filename
    MOV EBP,dword ptr [ESP + 0x20]      ; 00534a74
    PUSH EDI                            ; 00534a78 | g_CurrentMp3Filename
    MOV AL,byte ptr [ESI]               ; 00534a79
        ;   Label: LAB_00534a79
    MOV byte ptr [EDI],AL               ; 00534a7b | g_CurrentMp3Filename | DAT_02f6818a
    CMP AL,0x0                          ; 00534a7d
    JZ 0x00534a91                       ; 00534a7f
        ;   XREF to: 00534a91 (CONDITIONAL_JUMP)  ; LAB_00534a91
    MOV AL,byte ptr [ESI + 0x1]         ; 00534a81
    ADD ESI,0x2                         ; 00534a84
    MOV byte ptr [EDI + 0x1],AL         ; 00534a87 | DAT_02f68189 | DAT_02f6818b
    ADD EDI,0x2                         ; 00534a8a
    CMP AL,0x0                          ; 00534a8d
    JNZ 0x00534a79                      ; 00534a8f
        ;   XREF to: 00534a79 (CONDITIONAL_JUMP)  ; LAB_00534a79
    POP EDI                             ; 00534a91
        ;   Label: LAB_00534a91
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00534a92
    XOR EDX,EDX                         ; 00534a96
    ADD EAX,0x110                       ; 00534a98
    MOV dword ptr [ESP + 0x4],EDX       ; 00534a9d
    MOV dword ptr [ESP],EAX             ; 00534aa1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00534aa4
        ;   Label: LAB_00534aa4
    MOV ECX,dword ptr [EAX + 0x108]     ; 00534aa8
    TEST ECX,ECX                        ; 00534aae
    JLE 0x00534b25                      ; 00534ab0
        ;   XREF to: 00534b25 (CONDITIONAL_JUMP)  ; LAB_00534b25
    MOV EDX,ECX                         ; 00534ab2
    CMP ECX,EBX                         ; 00534ab4
    JLE 0x00534aba                      ; 00534ab6
        ;   XREF to: 00534aba (CONDITIONAL_JUMP)  ; LAB_00534aba
    MOV EDX,EBX                         ; 00534ab8
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00534aba
        ;   Label: LAB_00534aba
    MOV ECX,dword ptr [ECX + 0x104]     ; 00534abe
    IMUL ECX,EDX                        ; 00534ac4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00534ac7
    MOV EDI,EBP                         ; 00534acb
    MOV ESI,dword ptr [ESI + 0x10c]     ; 00534acd
    ADD ECX,ECX                         ; 00534ad3
    PUSH EDI                            ; 00534ad5
    MOV EAX,ECX                         ; 00534ad6
    SHR ECX,0x2                         ; 00534ad8
    MOVSD.REP ES:EDI,ESI                ; 00534adb
    MOV CL,AL                           ; 00534add
    AND CL,0x3                          ; 00534adf
    MOVSB.REP ES:EDI,ESI                ; 00534ae2
    POP EDI                             ; 00534ae4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00534ae5
    SUB dword ptr [EAX + 0x108],EDX     ; 00534ae9
    MOV EAX,dword ptr [EAX + 0x104]     ; 00534aef
    IMUL EAX,EDX                        ; 00534af5
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00534af8
    MOV ESI,dword ptr [ECX + 0x10c]     ; 00534afc
    ADD EAX,EAX                         ; 00534b02
    ADD ESI,EAX                         ; 00534b04
    MOV EAX,dword ptr [ECX + 0x104]     ; 00534b06
    IMUL EAX,EDX                        ; 00534b0c
    MOV EDI,dword ptr [ESP + 0x4]       ; 00534b0f
    ADD EDI,EDX                         ; 00534b13
    SUB EBX,EDX                         ; 00534b15
    MOV dword ptr [ESP + 0x4],EDI       ; 00534b17
    ADD EAX,EAX                         ; 00534b1b
    MOV dword ptr [ECX + 0x10c],ESI     ; 00534b1d
    ADD EBP,EAX                         ; 00534b23
    CMP EBX,0x480                       ; 00534b25
        ;   Label: LAB_00534b25
    JGE 0x00534b3e                      ; 00534b2b
        ;   XREF to: 00534b3e (CONDITIONAL_JUMP)  ; LAB_00534b3e
    CMP EBX,0x1                         ; 00534b2d
    JGE 0x00534b6f                      ; 00534b30
        ;   XREF to: 00534b6f (CONDITIONAL_JUMP)  ; LAB_00534b6f
    MOV EAX,dword ptr [ESP + 0x4]       ; 00534b32
        ;   Label: LAB_00534b32
    ADD ESP,0x8                         ; 00534b36
    POP EBP                             ; 00534b39
    POP EDI                             ; 00534b3a
    POP ESI                             ; 00534b3b
    POP EBX                             ; 00534b3c
    RET                                 ; 00534b3d
    PUSH EBP                            ; 00534b3e
        ;   Label: LAB_00534b3e
    MOV ECX,dword ptr [ESP + 0x20]      ; 00534b3f
    PUSH ECX                            ; 00534b43
    CALL sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 ; 00534b44
        ;   XREF to: 00534d40 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40(CMP3Decoder * this_ptr)
    ADD ESP,0x8                         ; 00534b49
    TEST EAX,EAX                        ; 00534b4c
    JLE 0x00534b32                      ; 00534b4e
        ;   XREF to: 00534b32 (CONDITIONAL_JUMP)  ; LAB_00534b32
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00534b50
    MOV EDX,dword ptr [EDX + 0x104]     ; 00534b54
    IMUL EDX,EAX                        ; 00534b5a
    MOV ESI,dword ptr [ESP + 0x4]       ; 00534b5d
    SUB EBX,EAX                         ; 00534b61
    ADD ESI,EAX                         ; 00534b63
    ADD EDX,EDX                         ; 00534b65
    MOV dword ptr [ESP + 0x4],ESI       ; 00534b67
    ADD EBP,EDX                         ; 00534b6b
    JMP 0x00534b25                      ; 00534b6d
        ;   XREF to: 00534b25 (UNCONDITIONAL_JUMP)  ; LAB_00534b25
    MOV EDI,dword ptr [ESP]             ; 00534b6f
        ;   Label: LAB_00534b6f
    PUSH EDI                            ; 00534b72
    MOV EAX,dword ptr [ESP + 0x20]      ; 00534b73
    PUSH EAX                            ; 00534b77
    CALL sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 ; 00534b78
        ;   XREF to: 00534d40 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40(CMP3Decoder * this_ptr)
    ADD ESP,0x8                         ; 00534b7d
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00534b80
    MOV dword ptr [EDX + 0x108],EAX     ; 00534b84
    TEST EAX,EAX                        ; 00534b8a
    JLE 0x00534b32                      ; 00534b8c
        ;   XREF to: 00534b32 (CONDITIONAL_JUMP)  ; LAB_00534b32
    MOV dword ptr [EDX + 0x10c],EDI     ; 00534b8e
    JMP 0x00534aa4                      ; 00534b94
        ;   XREF to: 00534aa4 (UNCONDITIONAL_JUMP)  ; LAB_00534aa4

