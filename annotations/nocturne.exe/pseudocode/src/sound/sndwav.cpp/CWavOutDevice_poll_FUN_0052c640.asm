; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavOutDevice_poll_FUN_0052c640(CWavOutDevice *this_ptr,short *output_buffer,int num_samples)
;
; Parameters:
; CWavOutDevice *  Stack[0x4]:4   this_ptr
; short *          Stack[0x8]:4   output_buffer
; int              Stack[0xc]:4   num_samples
;
; Referenced Globals:
;   TerminatedCString s_WavOutDevice_poll_NULL_p_00594955
;   TerminatedCString s_WavOutDevice_poll_sendBu_00594979
;   undefined4 DAT_02dc943c
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00529980
;   sound_sndwav.cpp_writeWavOutBuffer_FUN_0052c130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052c640
        ;   Label: sound_sndwav.cpp_CWavOutDevice_poll_FUN_0052c640
    PUSH ESI                            ; 0052c641
    PUSH EDI                            ; 0052c642
    PUSH EBP                            ; 0052c643
    MOV EDI,0x1                         ; 0052c644
    MOV EDX,dword ptr [0x02dc943c]      ; 0052c649 | DAT_02dc943c
    XOR ESI,ESI                         ; 0052c64f
    TEST EDX,EDX                        ; 0052c651
    JLE 0x0052c67e                      ; 0052c653
        ;   XREF to: 0052c67e (CONDITIONAL_JUMP)  ; LAB_0052c67e
    XOR EBX,EBX                         ; 0052c655
    MOV EBP,dword ptr [EBX + 0x2dc93a8] ; 0052c657
        ;   Label: LAB_0052c657
    TEST EBP,EBP                        ; 0052c65d
    JZ 0x0052c685                       ; 0052c65f
        ;   XREF to: 0052c685 (CONDITIONAL_JUMP)  ; LAB_0052c685
    CMP dword ptr [EBX + 0x2dc93c8],0x0 ; 0052c661
    JZ 0x0052c685                       ; 0052c668
        ;   XREF to: 0052c685 (CONDITIONAL_JUMP)  ; LAB_0052c685
    TEST byte ptr [EBP + 0x10],0x1      ; 0052c66a
    JNZ 0x0052c696                      ; 0052c66e
        ;   XREF to: 0052c696 (CONDITIONAL_JUMP)  ; LAB_0052c696
    MOV ECX,dword ptr [0x02dc943c]      ; 0052c670 | DAT_02dc943c
        ;   Label: LAB_0052c670
    INC ESI                             ; 0052c676
    ADD EBX,0x4                         ; 0052c677
    CMP ESI,ECX                         ; 0052c67a
    JL 0x0052c657                       ; 0052c67c
        ;   XREF to: 0052c657 (CONDITIONAL_JUMP)  ; LAB_0052c657
    MOV EAX,EDI                         ; 0052c67e
        ;   Label: LAB_0052c67e
    POP EBP                             ; 0052c680
    POP EDI                             ; 0052c681
    POP ESI                             ; 0052c682
    POP EBX                             ; 0052c683
    RET                                 ; 0052c684
    PUSH 0x594955                       ; 0052c685 | = "WavOutDevice::poll - NULL pointer??"
        ;   Label: LAB_0052c685
    CALL sound_sndmain.cpp_FUN_00529980 ; 0052c68a
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00529980()
    XOR EDI,EDI                         ; 0052c68f
    ADD ESP,0x4                         ; 0052c691
    JMP 0x0052c67e                      ; 0052c694
        ;   XREF to: 0052c67e (UNCONDITIONAL_JUMP)  ; LAB_0052c67e
    PUSH ESI                            ; 0052c696
        ;   Label: LAB_0052c696
    CALL sound_sndwav.cpp_writeWavOutBuffer_FUN_0052c130 ; 0052c697
        ;   XREF to: 0052c130 (UNCONDITIONAL_CALL)  ; int sound_sndwav.cpp_writeWavOutBuffer_FUN_0052c130(int buffer_index)
    ADD ESP,0x4                         ; 0052c69c
    TEST EAX,EAX                        ; 0052c69f
    JNZ 0x0052c670                      ; 0052c6a1
        ;   XREF to: 0052c670 (CONDITIONAL_JUMP)  ; LAB_0052c670
    PUSH 0x594979                       ; 0052c6a3 | = "WavOutDevice::poll - sendBuffer failed"
    CALL sound_sndmain.cpp_FUN_00529980 ; 0052c6a8
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00529980()
    XOR EDI,EDI                         ; 0052c6ad
    ADD ESP,0x4                         ; 0052c6af
    MOV EAX,EDI                         ; 0052c6b2
    POP EBP                             ; 0052c6b4
    POP EDI                             ; 0052c6b5
    POP ESI                             ; 0052c6b6
    POP EBX                             ; 0052c6b7
    RET                                 ; 0052c6b8

