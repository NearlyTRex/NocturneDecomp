; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_writeWavInBuffer_FUN_00558190(int buffer_index)
;
; Parameters:
; int              Stack[0x4]:4   buffer_index
;
; XREF[2]:
;   sound_sndwav.cpp_CWavInDevice_poll_FUN_005587b0 at 00558907
;   sound_sndwav.cpp_CWavInDevice_start_FUN_005582f0 at 0055835a
;
; Referenced Globals:
;   void* PTR_waveInAddBuffer_005c8450 = 001c892a
;   void* PTR_waveInPrepareHeader_005c8460 = 001c896c
;   TerminatedCString s_waveOutPrepareHeader_fai_005ea5f6
;   TerminatedCString s_waveOutWrite_failed_005ea613
;   undefined4 DAT_0264b108
;   undefined4 DAT_0264b24c
;   undefined4 DAT_0264b250
;   undefined4 DAT_0264b25c
;
; Called Functions:
;   sound_sndmain.cpp_logSoundError_FUN_005549c0
;   waveInAddBuffer
;   waveInPrepareHeader
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558190
        ;   Label: sound_sndwav.cpp_writeWavInBuffer_FUN_00558190
    PUSH EDI                            ; 00558191
    PUSH EBP                            ; 00558192
    MOV EBX,dword ptr [ESP + 0x10]      ; 00558193
    SHL EBX,0x2                         ; 00558197
    CMP dword ptr [EBX + 0x264b1fc],0x0 ; 0055819a
    JZ 0x005581ad                       ; 005581a1
        ;   XREF to: 005581ad (CONDITIONAL_JUMP)  ; LAB_005581ad
    MOV ECX,dword ptr [EBX + 0x264b15c] ; 005581a3
    TEST ECX,ECX                        ; 005581a9
    JNZ 0x005581b3                      ; 005581ab
        ;   XREF to: 005581b3 (CONDITIONAL_JUMP)  ; LAB_005581b3
    XOR EAX,EAX                         ; 005581ad
        ;   Label: LAB_005581ad
    POP EBP                             ; 005581af
    POP EDI                             ; 005581b0
    POP EBX                             ; 005581b1
    RET                                 ; 005581b2
    MOV EAX,[0x0264b24c]                ; 005581b3 | DAT_0264b24c
        ;   Label: LAB_005581b3
    MOV EDX,EAX                         ; 005581b8
    SAR EDX,0x1f                        ; 005581ba
    SHL EDX,0x3                         ; 005581bd
    SBB EAX,EDX                         ; 005581c0
    SAR EAX,0x3                         ; 005581c2
    IMUL EAX,dword ptr [0x0264b25c]     ; 005581c5 | DAT_0264b25c
    MOV EDX,dword ptr [0x0264b250]      ; 005581cc | DAT_0264b250
    IMUL EDX,EAX                        ; 005581d2
    MOV dword ptr [ECX + 0x4],EDX       ; 005581d5
    PUSH 0x20                           ; 005581d8
    MOV EDI,dword ptr [EBX + 0x264b15c] ; 005581da
    PUSH EDI                            ; 005581e0
    MOV EBP,dword ptr [0x0264b108]      ; 005581e1 | DAT_0264b108
    PUSH EBP                            ; 005581e7
    CALL dword ptr CS:[0x5c8460]        ; 005581e8 | PTR_waveInPrepareHeader_005c8460
    TEST EAX,EAX                        ; 005581ef
    JNZ 0x00558217                      ; 005581f1
        ;   XREF to: 00558217 (CONDITIONAL_JUMP)  ; LAB_00558217
    PUSH 0x20                           ; 005581f3
    MOV EAX,dword ptr [EBX + 0x264b15c] ; 005581f5
    PUSH EAX                            ; 005581fb
    MOV EDX,dword ptr [0x0264b108]      ; 005581fc | DAT_0264b108
    PUSH EDX                            ; 00558202
    CALL dword ptr CS:[0x5c8450]        ; 00558203 | PTR_waveInAddBuffer_005c8450
    TEST EAX,EAX                        ; 0055820a
    JNZ 0x0055822a                      ; 0055820c
        ;   XREF to: 0055822a (CONDITIONAL_JUMP)  ; LAB_0055822a
    MOV EAX,0x1                         ; 0055820e
    POP EBP                             ; 00558213
    POP EDI                             ; 00558214
    POP EBX                             ; 00558215
    RET                                 ; 00558216
    PUSH 0x5ea5f6                       ; 00558217 | = "waveOutPrepareHeader failed!"
        ;   Label: LAB_00558217
    CALL sound_sndmain.cpp_logSoundError_FUN_005549c0 ; 0055821c
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005549c0(char * format)
    ADD ESP,0x4                         ; 00558221
    XOR EAX,EAX                         ; 00558224
    POP EBP                             ; 00558226
    POP EDI                             ; 00558227
    POP EBX                             ; 00558228
    RET                                 ; 00558229
    PUSH 0x5ea613                       ; 0055822a | = "waveOutWrite failed!"
        ;   Label: LAB_0055822a
    CALL sound_sndmain.cpp_logSoundError_FUN_005549c0 ; 0055822f
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005549c0(char * format)
    ADD ESP,0x4                         ; 00558234
    XOR EAX,EAX                         ; 00558237
    POP EBP                             ; 00558239
    POP EDI                             ; 0055823a
    POP EBX                             ; 0055823b
    RET                                 ; 0055823c

