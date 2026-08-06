; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_setSoundOutputMode_FUN_005280c0(int bits_per_sample,int channels,int sample_rate)
;
; Parameters:
; int              Stack[0x4]:4   bits_per_sample
; int              Stack[0x8]:4   channels
; int              Stack[0xc]:4   sample_rate
;
; XREF[7]:
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d2158
;   core_sound.cpp_CSound_findAllSoundFiles_FUN_0052dd20 at 0052dd6f
;   sound_sndmain.cpp_enableSoundSystem_FUN_00527e40 at 00527e92
;   sound_sndmain.cpp_readIni_FUN_005289f0 at 00528b61
;   sound_sndmain.cpp_setAudioBitDepth_FUN_005281d0 at 005281e1
;   sound_sndmain.cpp_setAudioChannelCount_FUN_005281f0 at 00528201
;   sound_sndmain.cpp_setAudioSampleRate_FUN_00528210 at 00528221
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005937cc
;   TerminatedCString s_setSoundOutputMode_can_t_005937e1
;   undefined4 DAT_005bea64
;   undefined4 DAT_005bea68
;   undefined4 DAT_005bea6c
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 DAT_02dc8318
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   sound_sndmain.cpp_allocMixBuffers_FUN_00522f10
;   sound_sndmain.cpp_isSoundBusy_FUN_00528490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005280c0
        ;   Label: sound_sndmain.cpp_setSoundOutputMode_FUN_005280c0
    PUSH EDI                            ; 005280c1
    PUSH EBP                            ; 005280c2
    SUB ESP,0x4                         ; 005280c3
    CALL sound_sndmain.cpp_isSoundBusy_FUN_00528490 ; 005280c6
        ;   XREF to: 00528490 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundBusy_FUN_00528490()
    TEST EAX,EAX                        ; 005280cb
    JNZ 0x00528100                      ; 005280cd
        ;   XREF to: 00528100 (CONDITIONAL_JUMP)  ; LAB_00528100
    MOV EAX,dword ptr [ESP + 0x14]      ; 005280cf
        ;   Label: LAB_005280cf
    MOV [0x005bea64],EAX                ; 005280d3 | DAT_005bea64
    MOV EAX,dword ptr [ESP + 0x18]      ; 005280d8
    MOV [0x005bea68],EAX                ; 005280dc | DAT_005bea68
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005280e1
    MOV EBX,dword ptr [0x02dc8318]      ; 005280e5 | DAT_02dc8318
    MOV [0x005bea6c],EAX                ; 005280eb | DAT_005bea6c
    TEST EBX,EBX                        ; 005280f0
    JNZ 0x00528125                      ; 005280f2
        ;   XREF to: 00528125 (CONDITIONAL_JUMP)  ; LAB_00528125
    MOV EAX,0x1                         ; 005280f4
        ;   Label: LAB_005280f4
    ADD ESP,0x4                         ; 005280f9
        ;   Label: LAB_005280f9
    POP EBP                             ; 005280fc
    POP EDI                             ; 005280fd
    POP EBX                             ; 005280fe
    RET                                 ; 005280ff
    MOV EDX,0x5937cc                    ; 00528100 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00528100
    MOV ECX,0x1168                      ; 00528105
    PUSH 0x5937e1                       ; 0052810a | = "setSoundOutputMode - can't do this wh..."
    MOV dword ptr [0x01cc4800],EDX      ; 0052810f | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 00528115 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0052811b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00528120
    JMP 0x005280cf                      ; 00528123
        ;   XREF to: 005280cf (UNCONDITIONAL_JUMP)  ; LAB_005280cf
    MOV ECX,ESP                         ; 00528125
        ;   Label: LAB_00528125
    PUSH ECX                            ; 00528127
    PUSH EAX                            ; 00528128
    MOV EDI,dword ptr [ESP + 0x20]      ; 00528129
    PUSH EDI                            ; 0052812d
    MOV EBP,dword ptr [ESP + 0x20]      ; 0052812e
    PUSH EBP                            ; 00528132
    MOV EDX,dword ptr [EBX]             ; 00528133
    PUSH EBX                            ; 00528135
    CALL dword ptr [EDX + 0xc]          ; 00528136
    ADD ESP,0x14                        ; 00528139
    TEST EAX,EAX                        ; 0052813c
    JZ 0x005280f9                       ; 0052813e
        ;   XREF to: 005280f9 (CONDITIONAL_JUMP)  ; LAB_005280f9
    MOV EAX,dword ptr [ESP]             ; 00528140
    TEST EAX,EAX                        ; 00528143
    JLE 0x005280f4                      ; 00528145
        ;   XREF to: 005280f4 (CONDITIONAL_JUMP)  ; LAB_005280f4
    PUSH 0x4                            ; 00528147
    PUSH EAX                            ; 00528149
    CALL sound_sndmain.cpp_allocMixBuffers_FUN_00522f10 ; 0052814a
        ;   XREF to: 00522f10 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_allocMixBuffers_FUN_00522f10(int requested_size, int num_buffers)
    ADD ESP,0x8                         ; 0052814f
    MOV EAX,0x1                         ; 00528152
    ADD ESP,0x4                         ; 00528157
    POP EBP                             ; 0052815a
    POP EDI                             ; 0052815b
    POP EBX                             ; 0052815c
    RET                                 ; 0052815d

