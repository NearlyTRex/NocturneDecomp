; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(CMP3Decoder *this_ptr,uint num_bits)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   num_bits
; Local Variables:
; byte             Stack[-0x14]:1  local_14
;
; XREF[6]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 at 00535725
;   sound_mp3.cpp_CMP3Decoder_decodeScalefacCompress_FUN_005310f0 at 0053145f
;   sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680 at 00531d3c
;   sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_0052f350 at 0052f54b
;   sound_mp3.cpp_CMP3Decoder_readBit_FUN_0052f250 at 0052f257
;   sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00530d20 at 0053104a
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_0063ad8b
;   TerminatedCString s_Buffer_overflow_File_s_0063ad9c
;   uint[18] g_MpegBitMaskTableMultiBit
;   undefined4 g_MpegBitMaskTableMultiBit[8]
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   char[256] g_CurrentMp3Filename
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052f170
        ;   Label: sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170
    PUSH ESI                            ; 0052f171
    PUSH EDI                            ; 0052f172
    PUSH EBP                            ; 0052f173
    SUB ESP,0x4                         ; 0052f174
    MOV EBX,dword ptr [ESP + 0x18]      ; 0052f177
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0052f17b
    MOV EDX,dword ptr [EBX + 0x1314]    ; 0052f17f
    MOV ESI,EAX                         ; 0052f185
    ADD EDX,EAX                         ; 0052f187
    XOR EDI,EDI                         ; 0052f189
    MOV dword ptr [EBX + 0x1314],EDX    ; 0052f18b
    TEST EAX,EAX                        ; 0052f191
    JLE 0x0052f1f1                      ; 0052f193
        ;   XREF to: 0052f1f1 (CONDITIONAL_JUMP)  ; LAB_0052f1f1
    CMP dword ptr [EBX + 0x531c],0x0    ; 0052f195
        ;   Label: LAB_0052f195
    JZ 0x0052f1fb                       ; 0052f19c
        ;   XREF to: 0052f1fb (CONDITIONAL_JUMP)  ; LAB_0052f1fb
    MOV EDX,dword ptr [EBX + 0x531c]    ; 0052f19e
        ;   Label: LAB_0052f19e
    CMP ESI,EDX                         ; 0052f1a4
    JNC 0x0052f248                      ; 0052f1a6
        ;   XREF to: 0052f248 (CONDITIONAL_JUMP)  ; LAB_0052f248
    MOV EAX,ESI                         ; 0052f1ac
    MOV EDX,dword ptr [EBX + 0x1318]    ; 0052f1ae
        ;   Label: LAB_0052f1ae
    MOV ECX,dword ptr [EBX + 0x531c]    ; 0052f1b4
    SUB ESI,EAX                         ; 0052f1ba
    AND EDX,0xfff                       ; 0052f1bc
    MOV EBP,dword ptr [ECX*0x4 + 0x67e5e0] ; 0052f1c2 | g_MpegBitMaskTableMultiBit | g_MpegBitMaskTableMultiBit[8]
    SUB ECX,EAX                         ; 0052f1c9
    MOV EDX,dword ptr [EBX + EDX*0x4 + 0x131c] ; 0052f1cb
    MOV dword ptr [ESP],ECX             ; 0052f1d2
    AND EDX,EBP                         ; 0052f1d5
    MOV CL,byte ptr [ESP]               ; 0052f1d7
    MOV EAX,ESI                         ; 0052f1da
    SHR EDX,CL                          ; 0052f1dc
    MOV CL,AL                           ; 0052f1de
    SHL EDX,CL                          ; 0052f1e0
    OR EDI,EDX                          ; 0052f1e2
    MOV EDX,dword ptr [ESP]             ; 0052f1e4
    MOV dword ptr [EBX + 0x531c],EDX    ; 0052f1e7
    TEST ESI,ESI                        ; 0052f1ed
    JG 0x0052f195                       ; 0052f1ef
        ;   XREF to: 0052f195 (CONDITIONAL_JUMP)  ; LAB_0052f195
    MOV EAX,EDI                         ; 0052f1f1
        ;   Label: LAB_0052f1f1
    ADD ESP,0x4                         ; 0052f1f3
    POP EBP                             ; 0052f1f6
    POP EDI                             ; 0052f1f7
    POP ESI                             ; 0052f1f8
    POP EBX                             ; 0052f1f9
    RET                                 ; 0052f1fa
    MOV EDX,dword ptr [EBX + 0x1318]    ; 0052f1fb
        ;   Label: LAB_0052f1fb
    MOV dword ptr [EBX + 0x531c],0x8    ; 0052f201
    INC EDX                             ; 0052f20b
    MOV ECX,dword ptr [EBX + 0x1310]    ; 0052f20c
    MOV dword ptr [EBX + 0x1318],EDX    ; 0052f212
    CMP EDX,ECX                         ; 0052f218
    JBE 0x0052f19e                      ; 0052f21a
        ;   XREF to: 0052f19e (CONDITIONAL_JUMP)  ; LAB_0052f19e
    PUSH 0x2f68188                      ; 0052f21c | g_CurrentMp3Filename
    MOV EBP,0x63ad8b                    ; 0052f221 | = "..\\sound\\mp3.cpp"
    MOV EAX,0x2c1                       ; 0052f226
    PUSH 0x63ad9c                       ; 0052f22b | = "Buffer overflow!!  File: %s"
    MOV dword ptr [0x02f0ca48],EBP      ; 0052f230 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0052f236 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052f23b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0052f240
    JMP 0x0052f19e                      ; 0052f243
        ;   XREF to: 0052f19e (UNCONDITIONAL_JUMP)  ; LAB_0052f19e
    MOV EAX,EDX                         ; 0052f248
        ;   Label: LAB_0052f248
    JMP 0x0052f1ae                      ; 0052f24a
        ;   XREF to: 0052f1ae (UNCONDITIONAL_JUMP)  ; LAB_0052f1ae

