; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndwav_cpp_CWavOutDevice_reset_FUN_0052c3f0(void)
;
;
; Referenced Globals:
;   void* PTR_waveOutReset_00575400 = 001758a4
;   void* PTR_waveOutUnprepareHeader_00575404 = 001758b4
;   TerminatedCString s_waveOutReset_failed_0059492d
;   undefined4 DAT_02dc93a4
;
; Called Functions:
;   FUN_00529980
;   sound_sndmain.cpp_killSoundThread_FUN_00528780
;   waveOutReset
;   waveOutUnprepareHeader
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052c3f0
        ;   Label: sound_sndwav.cpp_CWavOutDevice_reset_FUN_0052c3f0
    PUSH ESI                            ; 0052c3f1
    PUSH EDI                            ; 0052c3f2
    MOV EDX,dword ptr [0x02dc93a4]      ; 0052c3f3 | DAT_02dc93a4
    MOV ESI,0x1                         ; 0052c3f9
    TEST EDX,EDX                        ; 0052c3fe
    JNZ 0x0052c435                      ; 0052c400
        ;   XREF to: 0052c435 (CONDITIONAL_JUMP)  ; LAB_0052c435
    XOR EBX,EBX                         ; 0052c402
        ;   Label: LAB_0052c402
    MOV EDI,dword ptr [EBX + 0x2dc93a8] ; 0052c404
        ;   Label: LAB_0052c404
    TEST EDI,EDI                        ; 0052c40a
    JZ 0x0052c41e                       ; 0052c40c
        ;   XREF to: 0052c41e (CONDITIONAL_JUMP)  ; LAB_0052c41e
    PUSH 0x20                           ; 0052c40e
    PUSH EDI                            ; 0052c410
    MOV EAX,[0x02dc93a4]                ; 0052c411 | DAT_02dc93a4
    PUSH EAX                            ; 0052c416
    CALL dword ptr CS:[0x575404]        ; 0052c417 | PTR_waveOutUnprepareHeader_00575404
    ADD EBX,0x4                         ; 0052c41e
        ;   Label: LAB_0052c41e
    CMP EBX,0x20                        ; 0052c421
    JNZ 0x0052c404                      ; 0052c424
        ;   XREF to: 0052c404 (CONDITIONAL_JUMP)  ; LAB_0052c404
    CALL sound_sndmain.cpp_killSoundThread_FUN_00528780 ; 0052c426
        ;   XREF to: 00528780 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSoundThread_FUN_00528780()
    TEST EAX,EAX                        ; 0052c42b
    JZ 0x0052c452                       ; 0052c42d
        ;   XREF to: 0052c452 (CONDITIONAL_JUMP)  ; LAB_0052c452
    MOV EAX,ESI                         ; 0052c42f
    POP EDI                             ; 0052c431
    POP ESI                             ; 0052c432
    POP EBX                             ; 0052c433
    RET                                 ; 0052c434
    PUSH EDX                            ; 0052c435
        ;   Label: LAB_0052c435
    CALL dword ptr CS:[0x575400]        ; 0052c436 | PTR_waveOutReset_00575400
    TEST EAX,EAX                        ; 0052c43d
    JZ 0x0052c402                       ; 0052c43f
        ;   XREF to: 0052c402 (CONDITIONAL_JUMP)  ; LAB_0052c402
    PUSH 0x59492d                       ; 0052c441 | = "waveOutReset failed!"
    CALL FUN_00529980                   ; 0052c446
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined FUN_00529980()
    XOR ESI,ESI                         ; 0052c44b
    ADD ESP,0x4                         ; 0052c44d
    JMP 0x0052c402                      ; 0052c450
        ;   XREF to: 0052c402 (UNCONDITIONAL_JUMP)  ; LAB_0052c402
    XOR ESI,ESI                         ; 0052c452
        ;   Label: LAB_0052c452
    MOV EAX,ESI                         ; 0052c454
    POP EDI                             ; 0052c456
    POP ESI                             ; 0052c457
    POP EBX                             ; 0052c458
    RET                                 ; 0052c459

