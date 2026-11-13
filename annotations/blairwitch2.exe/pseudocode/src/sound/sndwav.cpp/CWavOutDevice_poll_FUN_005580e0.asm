; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavOutDevice_poll_FUN_005580e0(CWavOutDevice *this_ptr,short *output_buffer,int num_samples)
;
; Parameters:
; CWavOutDevice *  Stack[0x4]:4   this_ptr
; short *          Stack[0x8]:4   output_buffer
; int              Stack[0xc]:4   num_samples
;
; Referenced Globals:
;   TerminatedCString s_WavOutDevice_poll_NULL_p_005ea5a5
;   TerminatedCString s_WavOutDevice_poll_sendWa_005ea5c9
;   undefined4 DAT_0264b104
;
; Called Functions:
;   sound_sndmain.cpp_logSoundError_FUN_005549c0
;   sound_sndwav.cpp_writeWavOutBuffer_FUN_00557b90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005580e0
        ;   Label: sound_sndwav.cpp_CWavOutDevice_poll_FUN_005580e0
    PUSH ESI                            ; 005580e1
    PUSH EDI                            ; 005580e2
    PUSH EBP                            ; 005580e3
    MOV EDI,0x1                         ; 005580e4
    MOV EDX,dword ptr [0x0264b104]      ; 005580e9 | DAT_0264b104
    XOR ESI,ESI                         ; 005580ef
    TEST EDX,EDX                        ; 005580f1
    JLE 0x0055811e                      ; 005580f3
        ;   XREF to: 0055811e (CONDITIONAL_JUMP)  ; LAB_0055811e
    XOR EBX,EBX                         ; 005580f5
    MOV EBP,dword ptr [EBX + 0x264b094] ; 005580f7
        ;   Label: LAB_005580f7
    TEST EBP,EBP                        ; 005580fd
    JZ 0x00558125                       ; 005580ff
        ;   XREF to: 00558125 (CONDITIONAL_JUMP)  ; LAB_00558125
    CMP dword ptr [EBX + 0x264b0d4],0x0 ; 00558101
    JZ 0x00558125                       ; 00558108
        ;   XREF to: 00558125 (CONDITIONAL_JUMP)  ; LAB_00558125
    TEST byte ptr [EBP + 0x10],0x1      ; 0055810a
    JNZ 0x00558136                      ; 0055810e
        ;   XREF to: 00558136 (CONDITIONAL_JUMP)  ; LAB_00558136
    MOV ECX,dword ptr [0x0264b104]      ; 00558110 | DAT_0264b104
        ;   Label: LAB_00558110
    INC ESI                             ; 00558116
    ADD EBX,0x4                         ; 00558117
    CMP ESI,ECX                         ; 0055811a
    JL 0x005580f7                       ; 0055811c
        ;   XREF to: 005580f7 (CONDITIONAL_JUMP)  ; LAB_005580f7
    MOV EAX,EDI                         ; 0055811e
        ;   Label: LAB_0055811e
    POP EBP                             ; 00558120
    POP EDI                             ; 00558121
    POP ESI                             ; 00558122
    POP EBX                             ; 00558123
    RET                                 ; 00558124
    PUSH 0x5ea5a5                       ; 00558125 | = "WavOutDevice::poll - NULL pointer??"
        ;   Label: LAB_00558125
    CALL sound_sndmain.cpp_logSoundError_FUN_005549c0 ; 0055812a
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005549c0(char * format)
    XOR EDI,EDI                         ; 0055812f
    ADD ESP,0x4                         ; 00558131
    JMP 0x0055811e                      ; 00558134
        ;   XREF to: 0055811e (UNCONDITIONAL_JUMP)  ; LAB_0055811e
    PUSH ESI                            ; 00558136
        ;   Label: LAB_00558136
    CALL sound_sndwav.cpp_writeWavOutBuffer_FUN_00557b90 ; 00558137
        ;   XREF to: 00557b90 (UNCONDITIONAL_CALL)  ; int sound_sndwav.cpp_writeWavOutBuffer_FUN_00557b90(int buffer_index)
    ADD ESP,0x4                         ; 0055813c
    TEST EAX,EAX                        ; 0055813f
    JNZ 0x00558110                      ; 00558141
        ;   XREF to: 00558110 (CONDITIONAL_JUMP)  ; LAB_00558110
    PUSH 0x5ea5c9                       ; 00558143 | = "WavOutDevice::poll - sendWavOutBuffer..."
    CALL sound_sndmain.cpp_logSoundError_FUN_005549c0 ; 00558148
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005549c0(char * format)
    XOR EDI,EDI                         ; 0055814d
    ADD ESP,0x4                         ; 0055814f
    MOV EAX,EDI                         ; 00558152
    POP EBP                             ; 00558154
    POP EDI                             ; 00558155
    POP ESI                             ; 00558156
    POP EBX                             ; 00558157
    RET                                 ; 00558158

