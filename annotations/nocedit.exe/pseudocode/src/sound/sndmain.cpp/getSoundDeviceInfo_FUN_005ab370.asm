; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(int device_id,SSoundDeviceInfo *device_info)
;
; Parameters:
; int              Stack[0x4]:4   device_id
; SSoundDeviceInfo * Stack[0x8]:4   device_info
;
; XREF[5]:
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 00512c65
;   sound_sndmain.cpp_findBestSoundDevice_FUN_005ab3d0 at 005ab486
;   sound_sndmain.cpp_logSoundError_FUN_005adba0 at 005adce8
;   sound_sndmain.cpp_readIni_FUN_005abf20 at 005abfda
;   sound_sndmain.cpp_writeIni_FUN_005ac220 at 005ac261
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00650c63
;   TerminatedCString s_getSoundDeviceInfo_inval_00650c78
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   SSoundDeviceInfo[8] g_SoundDevices
;   undefined4 g_SoundDevices[0].device_name[4]
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab370
        ;   Label: sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370
    PUSH ESI                            ; 005ab371
    PUSH EDI                            ; 005ab372
    MOV EBX,dword ptr [ESP + 0x10]      ; 005ab373
    CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0 ; 005ab377
        ;   XREF to: 005ab2e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0()
    TEST EBX,EBX                        ; 005ab37c
    JL 0x005ab3a8                       ; 005ab37e
        ;   XREF to: 005ab3a8 (CONDITIONAL_JUMP)  ; LAB_005ab3a8
    CMP EBX,EAX                         ; 005ab380
    JGE 0x005ab3a8                      ; 005ab382
        ;   XREF to: 005ab3a8 (CONDITIONAL_JUMP)  ; LAB_005ab3a8
    LEA EAX,[EBX*0x8 + 0x0]             ; 005ab384
        ;   Label: LAB_005ab384
    ADD EAX,EBX                         ; 005ab38b
    SHL EAX,0x2                         ; 005ab38d
    SUB EAX,EBX                         ; 005ab390
    MOV ECX,0x46                        ; 005ab392
    MOV EDI,dword ptr [ESP + 0x14]      ; 005ab397
    LEA ESI,[EAX*0x8 + 0x3f689a8]       ; 005ab39b | g_SoundDevices
    MOVSD.REP ES:EDI,ESI                ; 005ab3a2 | g_SoundDevices | g_SoundDevices[0].device_name[4]
    POP EDI                             ; 005ab3a4
    POP ESI                             ; 005ab3a5
    POP EBX                             ; 005ab3a6
    RET                                 ; 005ab3a7
    MOV EDX,0x650c63                    ; 005ab3a8 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005ab3a8
    MOV ECX,0x12f5                      ; 005ab3ad
    PUSH 0x650c78                       ; 005ab3b2 | = "getSoundDeviceInfo - invalid index"
    MOV dword ptr [0x02f0ca48],EDX      ; 005ab3b7 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005ab3bd | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ab3c3
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005ab3c8
    JMP 0x005ab384                      ; 005ab3cb
        ;   XREF to: 005ab384 (UNCONDITIONAL_JUMP)  ; LAB_005ab384

