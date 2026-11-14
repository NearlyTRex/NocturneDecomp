; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_005020e0(CMP3Decoder *this_ptr,float *input_samples,float *output_buffer,int subband_index,int channel,SMpegLayer3GranuleInfo *granule,SMpegFrameHeader *header)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; float *          Stack[0x8]:4   input_samples
; float *          Stack[0xc]:4   output_buffer
; int              Stack[0x10]:4   subband_index
; int              Stack[0x14]:4   channel
; SMpegLayer3GranuleInfo * Stack[0x18]:4   granule
; SMpegFrameHeader * Stack[0x1c]:4   header
; Local Variables:
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x4c]:4  local_4c
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60 at 005036c7
;
; Called Functions:
;   sound_mp3.cpp_applyPolyphaseWindow_FUN_00501bd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005020e0
        ;   Label: sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_005020e0
    SUB ESP,0x90                        ; 005020e1
    MOV EBX,dword ptr [ESP + 0xa4]      ; 005020e7
    MOV EAX,dword ptr [ESP + 0xac]      ; 005020ee
    CMP dword ptr [EAX + 0x10],0x0      ; 005020f5
    JZ 0x00502186                       ; 005020f9
        ;   XREF to: 00502186 (CONDITIONAL_JUMP)  ; LAB_00502186
    CMP dword ptr [EAX + 0x18],0x0      ; 005020ff
    JZ 0x00502186                       ; 00502103
        ;   XREF to: 00502186 (CONDITIONAL_JUMP)  ; LAB_00502186
    CMP EBX,0x2                         ; 00502109
    JGE 0x00502186                      ; 0050210c
        ;   XREF to: 00502186 (CONDITIONAL_JUMP)  ; LAB_00502186
    XOR EAX,EAX                         ; 0050210e
    PUSH ESI                            ; 00502110
        ;   Label: LAB_00502110
    PUSH EAX                            ; 00502111
    LEA EAX,[ESP + 0x8]                 ; 00502112
    PUSH EAX                            ; 00502116
    MOV ESI,dword ptr [ESP + 0xa8]      ; 00502117
    PUSH ESI                            ; 0050211e
    CALL sound_mp3.cpp_applyPolyphaseWindow_FUN_00501bd0 ; 0050211f
        ;   XREF to: 00501bd0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_applyPolyphaseWindow_FUN_00501bd0(float * input_samples, float * output_samples, int mpeg_block_type)
    ADD ESP,0xc                         ; 00502124
    MOV EDX,dword ptr [ESP + 0xac]      ; 00502127
    LEA EAX,[EDX*0x8 + 0x0]             ; 0050212e
    MOV ECX,dword ptr [ESP + 0x9c]      ; 00502135
    ADD EAX,EDX                         ; 0050213c
    ADD ECX,0x7430                      ; 0050213e
    SHL EAX,0x8                         ; 00502144
    ADD ECX,EAX                         ; 00502147
    LEA EAX,[EBX*0x8 + 0x0]             ; 00502149
    ADD EAX,EBX                         ; 00502150
    SHL EAX,0x3                         ; 00502152
    LEA EDX,[ECX + EAX*0x1]             ; 00502155
    MOV ECX,dword ptr [ESP + 0xa4]      ; 00502158
    XOR EAX,EAX                         ; 0050215f
    POP ESI                             ; 00502161
    ADD EDX,0x4                         ; 00502162
        ;   Label: LAB_00502162
    FLD float ptr [ESP + EAX*0x4]       ; 00502165
    ADD ECX,0x4                         ; 00502168
    FADD float ptr [EDX + -0x4]         ; 0050216b
    INC EAX                             ; 0050216e
    FSTP float ptr [ECX + -0x4]         ; 0050216f
    MOV EBX,dword ptr [ESP + EAX*0x4 + 0x44] ; 00502172
    MOV dword ptr [EDX + -0x4],EBX      ; 00502176
    CMP EAX,0x12                        ; 00502179
    JL 0x00502162                       ; 0050217c
        ;   XREF to: 00502162 (CONDITIONAL_JUMP)  ; LAB_00502162
    ADD ESP,0x90                        ; 0050217e
    POP EBX                             ; 00502184
    RET                                 ; 00502185
    MOV EAX,dword ptr [EAX + 0x14]      ; 00502186
        ;   Label: LAB_00502186
    JMP 0x00502110                      ; 00502189
        ;   XREF to: 00502110 (UNCONDITIONAL_JUMP)  ; LAB_00502110

