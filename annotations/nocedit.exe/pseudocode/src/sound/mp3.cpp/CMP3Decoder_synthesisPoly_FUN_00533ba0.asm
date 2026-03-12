; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0(CMP3Decoder *this_ptr,float *input_samples,float *output_buffer,int subband_index,int channel,SMpegFrame *frame_info,SMpegFrameHeader *header)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; float *          Stack[0x8]:4   input_samples
; float *          Stack[0xc]:4   output_buffer
; int              Stack[0x10]:4   subband_index
; int              Stack[0x14]:4   channel
; SMpegFrame *     Stack[0x18]:4   frame_info
; SMpegFrameHeader * Stack[0x1c]:4   header
; Local Variables:
; float[18]        Stack[-0x94]:72  local_94
; float[18]        Stack[-0x4c]:72  local_4c
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 at 005359c7
;
; Called Functions:
;   sound_mp3.cpp_applyPolyphaseWindow_FUN_00533690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00533ba0
        ;   Label: sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0
    SUB ESP,0x90                        ; 00533ba1
    MOV EBX,dword ptr [ESP + 0xa4]      ; 00533ba7
    MOV EAX,dword ptr [ESP + 0xac]      ; 00533bae
    CMP dword ptr [EAX + 0x10],0x0      ; 00533bb5
    JZ 0x00533c46                       ; 00533bb9
        ;   XREF to: 00533c46 (CONDITIONAL_JUMP)  ; LAB_00533c46
    CMP dword ptr [EAX + 0x18],0x0      ; 00533bbf
    JZ 0x00533c46                       ; 00533bc3
        ;   XREF to: 00533c46 (CONDITIONAL_JUMP)  ; LAB_00533c46
    CMP EBX,0x2                         ; 00533bc9
    JGE 0x00533c46                      ; 00533bcc
        ;   XREF to: 00533c46 (CONDITIONAL_JUMP)  ; LAB_00533c46
    XOR EAX,EAX                         ; 00533bce
    PUSH ESI                            ; 00533bd0
        ;   Label: LAB_00533bd0
    PUSH EAX                            ; 00533bd1
    LEA EAX,[ESP + 0x8]                 ; 00533bd2
    PUSH EAX                            ; 00533bd6
    MOV ESI,dword ptr [ESP + 0xa8]      ; 00533bd7
    PUSH ESI                            ; 00533bde
    CALL sound_mp3.cpp_applyPolyphaseWindow_FUN_00533690 ; 00533bdf
        ;   XREF to: 00533690 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_applyPolyphaseWindow_FUN_00533690(float * input_samples, float * output_samples, int mpeg_block_type)
    ADD ESP,0xc                         ; 00533be4
    MOV EDX,dword ptr [ESP + 0xac]      ; 00533be7
    LEA EAX,[EDX*0x8 + 0x0]             ; 00533bee
    MOV ECX,dword ptr [ESP + 0x9c]      ; 00533bf5
    ADD EAX,EDX                         ; 00533bfc
    ADD ECX,0x7430                      ; 00533bfe
    SHL EAX,0x8                         ; 00533c04
    ADD ECX,EAX                         ; 00533c07
    LEA EAX,[EBX*0x8 + 0x0]             ; 00533c09
    ADD EAX,EBX                         ; 00533c10
    SHL EAX,0x3                         ; 00533c12
    LEA EDX,[ECX + EAX*0x1]             ; 00533c15
    MOV ECX,dword ptr [ESP + 0xa4]      ; 00533c18
    XOR EAX,EAX                         ; 00533c1f
    POP ESI                             ; 00533c21
    ADD EDX,0x4                         ; 00533c22
        ;   Label: LAB_00533c22
    FLD float ptr [ESP + EAX*0x4]       ; 00533c25
    ADD ECX,0x4                         ; 00533c28
    FADD float ptr [EDX + -0x4]         ; 00533c2b
    INC EAX                             ; 00533c2e
    FSTP float ptr [ECX + -0x4]         ; 00533c2f
    MOV EBX,dword ptr [ESP + EAX*0x4 + 0x44] ; 00533c32
    MOV dword ptr [EDX + -0x4],EBX      ; 00533c36
    CMP EAX,0x12                        ; 00533c39
    JL 0x00533c22                       ; 00533c3c
        ;   XREF to: 00533c22 (CONDITIONAL_JUMP)  ; LAB_00533c22
    ADD ESP,0x90                        ; 00533c3e
    POP EBX                             ; 00533c44
    RET                                 ; 00533c45
    MOV EAX,dword ptr [EAX + 0x14]      ; 00533c46
        ;   Label: LAB_00533c46
    JMP 0x00533bd0                      ; 00533c49
        ;   XREF to: 00533bd0 (UNCONDITIONAL_JUMP)  ; LAB_00533bd0

