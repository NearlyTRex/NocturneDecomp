; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860(int device_id)
;
; Parameters:
; int              Stack[0x4]:4   device_id
;
; XREF[3]:
;   sound_sndmain.cpp_initializeRecordingDevice_FUN_005ab8d0 at 005ab8e1
;   sound_sndmain.cpp_readIni_FUN_005abf20 at 005ac00a
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005aae00 at 005aaea2
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00650d68
;   TerminatedCString s_selectRecordingDevice_de_00650d7d
;   int g_CurrentRecordingDevice = -0x1
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   sound_sndmain.cpp_findBestRecordingDevice_FUN_005ab7e0
;   sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720
;   sound_sndmain.cpp_isRecordingSystemActive_FUN_005ab970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab860
        ;   Label: sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ab861
    CALL sound_sndmain.cpp_isRecordingSystemActive_FUN_005ab970 ; 005ab865
        ;   XREF to: 005ab970 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isRecordingSystemActive_FUN_005ab970()
    TEST EAX,EAX                        ; 005ab86a
    JNZ 0x005ab890                      ; 005ab86c
        ;   XREF to: 005ab890 (CONDITIONAL_JUMP)  ; LAB_005ab890
    TEST EBX,EBX                        ; 005ab86e
        ;   Label: LAB_005ab86e
    JGE 0x005ab878                      ; 005ab870
        ;   XREF to: 005ab878 (CONDITIONAL_JUMP)  ; LAB_005ab878
    MOV EBX,dword ptr [0x00681b50]      ; 005ab872 | g_CurrentRecordingDevice
    CALL sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720 ; 005ab878
        ;   XREF to: 005ab720 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720()
        ;   Label: LAB_005ab878
    CMP EBX,EAX                         ; 005ab87d
    JL 0x005ab8b5                       ; 005ab87f
        ;   XREF to: 005ab8b5 (CONDITIONAL_JUMP)  ; LAB_005ab8b5
    CALL sound_sndmain.cpp_findBestRecordingDevice_FUN_005ab7e0 ; 005ab881
        ;   XREF to: 005ab7e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_findBestRecordingDevice_FUN_005ab7e0()
        ;   Label: LAB_005ab881
    MOV EBX,EAX                         ; 005ab886
    MOV dword ptr [0x00681b50],EBX      ; 005ab888 | g_CurrentRecordingDevice
    POP EBX                             ; 005ab88e
    RET                                 ; 005ab88f
    MOV EDX,0x650d68                    ; 005ab890 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005ab890
    MOV ECX,0x1447                      ; 005ab895
    PUSH 0x650d7d                       ; 005ab89a | = "selectRecordingDevice - device alread..."
    MOV dword ptr [0x02f0ca48],EDX      ; 005ab89f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005ab8a5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ab8ab
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005ab8b0
    JMP 0x005ab86e                      ; 005ab8b3
        ;   XREF to: 005ab86e (UNCONDITIONAL_JUMP)  ; LAB_005ab86e
    TEST EBX,EBX                        ; 005ab8b5
        ;   Label: LAB_005ab8b5
    JL 0x005ab881                       ; 005ab8b7
        ;   XREF to: 005ab881 (CONDITIONAL_JUMP)  ; LAB_005ab881
    MOV dword ptr [0x00681b50],EBX      ; 005ab8b9 | g_CurrentRecordingDevice
    POP EBX                             ; 005ab8bf
    RET                                 ; 005ab8c0

