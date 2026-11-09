; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_00509600(CMP3Decoder *this_ptr,float *input_samples,float *output_buffer,int subband_index,int channel,SMpegLayer3GranuleInfo *granule,SMpegFrameHeader *header)
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
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280 at 0050abe7
;
; Called Functions:
;   sound_mp3.cpp_applyPolyphaseWindow_FUN_005090f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509600
        ;   Label: sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_00509600
    SUB ESP,0x90                        ; 00509601
    MOV EBX,dword ptr [ESP + 0xa4]      ; 00509607
    MOV EAX,dword ptr [ESP + 0xac]      ; 0050960e
    CMP dword ptr [EAX + 0x10],0x0      ; 00509615
    JZ 0x005096a6                       ; 00509619
        ;   XREF to: 005096a6 (CONDITIONAL_JUMP)  ; LAB_005096a6
    CMP dword ptr [EAX + 0x18],0x0      ; 0050961f
    JZ 0x005096a6                       ; 00509623
        ;   XREF to: 005096a6 (CONDITIONAL_JUMP)  ; LAB_005096a6
    CMP EBX,0x2                         ; 00509629
    JGE 0x005096a6                      ; 0050962c
        ;   XREF to: 005096a6 (CONDITIONAL_JUMP)  ; LAB_005096a6
    XOR EAX,EAX                         ; 0050962e
    PUSH ESI                            ; 00509630
        ;   Label: LAB_00509630
    PUSH EAX                            ; 00509631
    LEA EAX,[ESP + 0x8]                 ; 00509632
    PUSH EAX                            ; 00509636
    MOV ESI,dword ptr [ESP + 0xa8]      ; 00509637
    PUSH ESI                            ; 0050963e
    CALL sound_mp3.cpp_applyPolyphaseWindow_FUN_005090f0 ; 0050963f
        ;   XREF to: 005090f0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_applyPolyphaseWindow_FUN_005090f0()
    ADD ESP,0xc                         ; 00509644
    MOV EDX,dword ptr [ESP + 0xac]      ; 00509647
    LEA EAX,[EDX*0x8 + 0x0]             ; 0050964e
    MOV ECX,dword ptr [ESP + 0x9c]      ; 00509655
    ADD EAX,EDX                         ; 0050965c
    ADD ECX,0x7430                      ; 0050965e
    SHL EAX,0x8                         ; 00509664
    ADD ECX,EAX                         ; 00509667
    LEA EAX,[EBX*0x8 + 0x0]             ; 00509669
    ADD EAX,EBX                         ; 00509670
    SHL EAX,0x3                         ; 00509672
    LEA EDX,[ECX + EAX*0x1]             ; 00509675
    MOV ECX,dword ptr [ESP + 0xa4]      ; 00509678
    XOR EAX,EAX                         ; 0050967f
    POP ESI                             ; 00509681
    ADD EDX,0x4                         ; 00509682
        ;   Label: LAB_00509682
    FLD float ptr [ESP + EAX*0x4]       ; 00509685
    ADD ECX,0x4                         ; 00509688
    FADD float ptr [EDX + -0x4]         ; 0050968b
    INC EAX                             ; 0050968e
    FSTP float ptr [ECX + -0x4]         ; 0050968f
    MOV EBX,dword ptr [ESP + EAX*0x4 + 0x44] ; 00509692
    MOV dword ptr [EDX + -0x4],EBX      ; 00509696
    CMP EAX,0x12                        ; 00509699
    JL 0x00509682                       ; 0050969c
        ;   XREF to: 00509682 (CONDITIONAL_JUMP)  ; LAB_00509682
    ADD ESP,0x90                        ; 0050969e
    POP EBX                             ; 005096a4
    RET                                 ; 005096a5
    MOV EAX,dword ptr [EAX + 0x14]      ; 005096a6
        ;   Label: LAB_005096a6
    JMP 0x00509630                      ; 005096a9
        ;   XREF to: 00509630 (UNCONDITIONAL_JUMP)  ; LAB_00509630

