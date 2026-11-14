; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavOutDevice_poll_FUN_0057ab10(CWavOutDevice *this_ptr,short *output_buffer,int num_samples)
;
; Parameters:
; CWavOutDevice *  Stack[0x4]:4   this_ptr
; short *          Stack[0x8]:4   output_buffer
; int              Stack[0xc]:4   num_samples
;
; Referenced Globals:
;   TerminatedCString s_WavOutDevice_poll_NULL_p_005f579f
;   TerminatedCString s_WavOutDevice_poll_sendWa_005f57c3
;   undefined4 DAT_02c828d4
;
; Called Functions:
;   sound_sndmain.cpp_logSoundError_FUN_005773f0
;   sound_sndwav.cpp_writeWavOutBuffer_FUN_0057a5c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057ab10
        ;   Label: sound_sndwav.cpp_CWavOutDevice_poll_FUN_0057ab10
    PUSH ESI                            ; 0057ab11
    PUSH EDI                            ; 0057ab12
    PUSH EBP                            ; 0057ab13
    MOV EDI,0x1                         ; 0057ab14
    MOV EDX,dword ptr [0x02c828d4]      ; 0057ab19 | DAT_02c828d4
    XOR ESI,ESI                         ; 0057ab1f
    TEST EDX,EDX                        ; 0057ab21
    JLE 0x0057ab4e                      ; 0057ab23
        ;   XREF to: 0057ab4e (CONDITIONAL_JUMP)  ; LAB_0057ab4e
    XOR EBX,EBX                         ; 0057ab25
    MOV EBP,dword ptr [EBX + 0x2c82864] ; 0057ab27
        ;   Label: LAB_0057ab27
    TEST EBP,EBP                        ; 0057ab2d
    JZ 0x0057ab55                       ; 0057ab2f
        ;   XREF to: 0057ab55 (CONDITIONAL_JUMP)  ; LAB_0057ab55
    CMP dword ptr [EBX + 0x2c828a4],0x0 ; 0057ab31
    JZ 0x0057ab55                       ; 0057ab38
        ;   XREF to: 0057ab55 (CONDITIONAL_JUMP)  ; LAB_0057ab55
    TEST byte ptr [EBP + 0x10],0x1      ; 0057ab3a
    JNZ 0x0057ab66                      ; 0057ab3e
        ;   XREF to: 0057ab66 (CONDITIONAL_JUMP)  ; LAB_0057ab66
    MOV ECX,dword ptr [0x02c828d4]      ; 0057ab40 | DAT_02c828d4
        ;   Label: LAB_0057ab40
    INC ESI                             ; 0057ab46
    ADD EBX,0x4                         ; 0057ab47
    CMP ESI,ECX                         ; 0057ab4a
    JL 0x0057ab27                       ; 0057ab4c
        ;   XREF to: 0057ab27 (CONDITIONAL_JUMP)  ; LAB_0057ab27
    MOV EAX,EDI                         ; 0057ab4e
        ;   Label: LAB_0057ab4e
    POP EBP                             ; 0057ab50
    POP EDI                             ; 0057ab51
    POP ESI                             ; 0057ab52
    POP EBX                             ; 0057ab53
    RET                                 ; 0057ab54
    PUSH 0x5f579f                       ; 0057ab55 | = "WavOutDevice::poll - NULL pointer??"
        ;   Label: LAB_0057ab55
    CALL sound_sndmain.cpp_logSoundError_FUN_005773f0 ; 0057ab5a
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005773f0(char * format)
    XOR EDI,EDI                         ; 0057ab5f
    ADD ESP,0x4                         ; 0057ab61
    JMP 0x0057ab4e                      ; 0057ab64
        ;   XREF to: 0057ab4e (UNCONDITIONAL_JUMP)  ; LAB_0057ab4e
    PUSH ESI                            ; 0057ab66
        ;   Label: LAB_0057ab66
    CALL sound_sndwav.cpp_writeWavOutBuffer_FUN_0057a5c0 ; 0057ab67
        ;   XREF to: 0057a5c0 (UNCONDITIONAL_CALL)  ; int sound_sndwav.cpp_writeWavOutBuffer_FUN_0057a5c0(int buffer_index)
    ADD ESP,0x4                         ; 0057ab6c
    TEST EAX,EAX                        ; 0057ab6f
    JNZ 0x0057ab40                      ; 0057ab71
        ;   XREF to: 0057ab40 (CONDITIONAL_JUMP)  ; LAB_0057ab40
    PUSH 0x5f57c3                       ; 0057ab73 | = "WavOutDevice::poll - sendWavOutBuffer..."
    CALL sound_sndmain.cpp_logSoundError_FUN_005773f0 ; 0057ab78
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005773f0(char * format)
    XOR EDI,EDI                         ; 0057ab7d
    ADD ESP,0x4                         ; 0057ab7f
    MOV EAX,EDI                         ; 0057ab82
    POP EBP                             ; 0057ab84
    POP EDI                             ; 0057ab85
    POP ESI                             ; 0057ab86
    POP EBX                             ; 0057ab87
    RET                                 ; 0057ab88

