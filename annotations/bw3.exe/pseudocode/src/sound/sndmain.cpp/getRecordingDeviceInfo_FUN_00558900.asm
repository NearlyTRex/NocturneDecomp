; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_getRecordingDeviceInfo_FUN_00558900(int param_1,undefined4 *param_2)
;
;
; XREF[2]:
;   sound_sndmain.cpp_findBestRecordingDevice_FUN_00558960 at 00558983
;   sound_sndmain.cpp_readIni_FUN_00559220 at 005592b4
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d3bbf
;   TerminatedCString s_getRecordingDeviceInfo_i_005d3bd4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   sound_sndmain.cpp_getRecordingDeviceCount_FUN_005588a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558900
        ;   Label: sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00558900
    PUSH ESI                            ; 00558901
    PUSH EDI                            ; 00558902
    MOV EBX,dword ptr [ESP + 0x10]      ; 00558903
    CALL sound_sndmain.cpp_getRecordingDeviceCount_FUN_005588a0 ; 00558907
        ;   XREF to: 005588a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getRecordingDeviceCount_FUN_005588a0()
    TEST EBX,EBX                        ; 0055890c
    JL 0x00558931                       ; 0055890e
        ;   XREF to: 00558931 (CONDITIONAL_JUMP)  ; LAB_00558931
    CMP EBX,EAX                         ; 00558910
    JGE 0x00558931                      ; 00558912
        ;   XREF to: 00558931 (CONDITIONAL_JUMP)  ; LAB_00558931
    MOV EAX,EBX                         ; 00558914
        ;   Label: LAB_00558914
    SHL EAX,0x5                         ; 00558916
    ADD EAX,EBX                         ; 00558919
    MOV ECX,0x42                        ; 0055891b
    MOV EDI,dword ptr [ESP + 0x14]      ; 00558920
    LEA ESI,[EAX*0x8 + 0x2cf3428]       ; 00558924
    MOVSD.REP ES:EDI,ESI                ; 0055892b
    POP EDI                             ; 0055892d
    POP ESI                             ; 0055892e
    POP EBX                             ; 0055892f
    RET                                 ; 00558930
    MOV EDX,0x5d3bbf                    ; 00558931 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00558931
    MOV ECX,0x1668                      ; 00558936
    PUSH 0x5d3bd4                       ; 0055893b | = "getRecordingDeviceInfo - invalid index"
    MOV dword ptr [0x01d71de0],EDX      ; 00558940 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00558946 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0055894c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00558951
    JMP 0x00558914                      ; 00558954
        ;   XREF to: 00558914 (UNCONDITIONAL_JUMP)  ; LAB_00558914

