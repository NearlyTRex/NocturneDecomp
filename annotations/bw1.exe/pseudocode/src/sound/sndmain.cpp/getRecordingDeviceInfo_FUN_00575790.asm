; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_getRecordingDeviceInfo_FUN_00575790(int param_1,undefined4 *param_2)
;
;
; XREF[2]:
;   sound_sndmain.cpp_findBestRecordingDevice_FUN_005757f0 at 00575813
;   sound_sndmain.cpp_readIni_FUN_005760b0 at 00576144
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f42c9
;   TerminatedCString s_getRecordingDeviceInfo_i_005f42de
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   sound_sndmain.cpp_getRecordingDeviceCount_FUN_00575730
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00575790
        ;   Label: sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00575790
    PUSH ESI                            ; 00575791
    PUSH EDI                            ; 00575792
    MOV EBX,dword ptr [ESP + 0x10]      ; 00575793
    CALL sound_sndmain.cpp_getRecordingDeviceCount_FUN_00575730 ; 00575797
        ;   XREF to: 00575730 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getRecordingDeviceCount_FUN_00575730()
    TEST EBX,EBX                        ; 0057579c
    JL 0x005757c1                       ; 0057579e
        ;   XREF to: 005757c1 (CONDITIONAL_JUMP)  ; LAB_005757c1
    CMP EBX,EAX                         ; 005757a0
    JGE 0x005757c1                      ; 005757a2
        ;   XREF to: 005757c1 (CONDITIONAL_JUMP)  ; LAB_005757c1
    MOV EAX,EBX                         ; 005757a4
        ;   Label: LAB_005757a4
    SHL EAX,0x5                         ; 005757a6
    ADD EAX,EBX                         ; 005757a9
    MOV ECX,0x42                        ; 005757ab
    MOV EDI,dword ptr [ESP + 0x14]      ; 005757b0
    LEA ESI,[EAX*0x8 + 0x2c807f8]       ; 005757b4
    MOVSD.REP ES:EDI,ESI                ; 005757bb
    POP EDI                             ; 005757bd
    POP ESI                             ; 005757be
    POP EBX                             ; 005757bf
    RET                                 ; 005757c0
    MOV EDX,0x5f42c9                    ; 005757c1 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005757c1
    MOV ECX,0x1655                      ; 005757c6
    PUSH 0x5f42de                       ; 005757cb | = "getRecordingDeviceInfo - invalid index"
    MOV dword ptr [0x01d1d400],EDX      ; 005757d0 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 005757d6 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005757dc
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005757e1
    JMP 0x005757a4                      ; 005757e4
        ;   XREF to: 005757a4 (UNCONDITIONAL_JUMP)  ; LAB_005757a4

