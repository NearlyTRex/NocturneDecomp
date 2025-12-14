; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_getRecordingDeviceInfo_FUN_005ab780(int index, SRecordingDeviceInfo * device_info)
;
; Parameters:
; int              Stack[0x4]:4   index
; SRecordingDeviceInfo * Stack[0x8]:4   device_info
;
; XREF[2]:
;   sound_sndmain.cpp_findBestRecordingDevice_FUN_005ab7e0 at 005ab803
;   sound_sndmain.cpp_readIni_FUN_005abf20 at 005abfac
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00650d2c
;   TerminatedCString s_getRecordingDeviceInfo_i_00650d41
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   SRecordingDeviceInfo[8] g_RecordingDevices
;   undefined4 g_RecordingDevices[0].device_name[4]
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab780
        ;   Label: sound_sndmain.cpp_getRecordingDeviceInfo_FUN_005ab780
    PUSH ESI                            ; 005ab781
    PUSH EDI                            ; 005ab782
    MOV EBX,dword ptr [ESP + 0x10]      ; 005ab783
    CALL sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720 ; 005ab787
        ;   XREF to: 005ab720 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720()
    TEST EBX,EBX                        ; 005ab78c
    JL 0x005ab7b1                       ; 005ab78e
        ;   XREF to: 005ab7b1 (CONDITIONAL_JUMP)  ; LAB_005ab7b1
    CMP EBX,EAX                         ; 005ab790
    JGE 0x005ab7b1                      ; 005ab792
        ;   XREF to: 005ab7b1 (CONDITIONAL_JUMP)  ; LAB_005ab7b1
    MOV EAX,EBX                         ; 005ab794
        ;   Label: LAB_005ab794
    SHL EAX,0x5                         ; 005ab796
    ADD EAX,EBX                         ; 005ab799
    MOV ECX,0x42                        ; 005ab79b
    MOV EDI,dword ptr [ESP + 0x14]      ; 005ab7a0
    LEA ESI,[EAX*0x8 + 0x3f69414]       ; 005ab7a4 | g_RecordingDevices
    MOVSD.REP ES:EDI,ESI                ; 005ab7ab | g_RecordingDevices | g_RecordingDevices[0].device_name[4]
    POP EDI                             ; 005ab7ad
    POP ESI                             ; 005ab7ae
    POP EBX                             ; 005ab7af
    RET                                 ; 005ab7b0
    MOV EDX,0x650d2c                    ; 005ab7b1 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005ab7b1
    MOV ECX,0x141b                      ; 005ab7b6
    PUSH 0x650d41                       ; 005ab7bb | = "getRecordingDeviceInfo - invalid index"
    MOV dword ptr [0x02f0ca48],EDX      ; 005ab7c0 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005ab7c6 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ab7cc
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005ab7d1
    JMP 0x005ab794                      ; 005ab7d4
        ;   XREF to: 005ab794 (UNCONDITIONAL_JUMP)  ; LAB_005ab794

