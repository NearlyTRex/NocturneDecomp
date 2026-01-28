; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_sndwav_cpp_enumerateWavInDevice_FUN_005b1560(UINT device_id,SRecordingDeviceInfo *device_info)
;
; Parameters:
; UINT             Stack[0x4]:4   device_id
; SRecordingDeviceInfo * Stack[0x8]:4   device_info
; Local Variables:
; undefined1       Stack[-0x38]:1  local_38
;
; XREF[1]:
;   sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720 at 005ab757
;
; Referenced Globals:
;   waveInGetDevCapsA* g_waveInGetDevCapsAFunc = 002118b2
;   TerminatedCString s_WavIn_006524e6
;
; Called Functions:
;   support_newmsg.cpp_getLocalizedString_FUN_005441f0
;   waveInGetDevCapsA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1560
        ;   Label: sound_sndwav.cpp_enumerateWavInDevice_FUN_005b1560
    PUSH ESI                            ; 005b1561
    SUB ESP,0x30                        ; 005b1562
    MOV ESI,dword ptr [ESP + 0x3c]      ; 005b1565
    MOV EBX,dword ptr [ESP + 0x40]      ; 005b1569
    PUSH 0x30                           ; 005b156d
    LEA EAX,[ESP + 0x4]                 ; 005b156f
    PUSH EAX                            ; 005b1573
    PUSH ESI                            ; 005b1574
    CALL dword ptr CS:[0x611428]        ; 005b1575 | g_waveInGetDevCapsAFunc
    TEST EAX,EAX                        ; 005b157c
    JZ 0x005b1588                       ; 005b157e
        ;   XREF to: 005b1588 (CONDITIONAL_JUMP)  ; LAB_005b1588
    XOR EAX,EAX                         ; 005b1580
    ADD ESP,0x30                        ; 005b1582
    POP ESI                             ; 005b1585
    POP EBX                             ; 005b1586
    RET                                 ; 005b1587
    PUSH EDI                            ; 005b1588
        ;   Label: LAB_005b1588
    MOV dword ptr [EBX + 0x100],EAX     ; 005b1589
    PUSH 0x6524e6                       ; 005b158f | = "WavIn: "
    MOV dword ptr [EBX + 0x104],ESI     ; 005b1594
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005b159a
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 005b159f
    MOV EDI,EBX                         ; 005b15a2
    MOV ESI,EAX                         ; 005b15a4
    PUSH EDI                            ; 005b15a6
    MOV AL,byte ptr [ESI]               ; 005b15a7
        ;   Label: LAB_005b15a7
    MOV byte ptr [EDI],AL               ; 005b15a9
    CMP AL,0x0                          ; 005b15ab
    JZ 0x005b15bf                       ; 005b15ad
        ;   XREF to: 005b15bf (CONDITIONAL_JUMP)  ; LAB_005b15bf
    MOV AL,byte ptr [ESI + 0x1]         ; 005b15af
    ADD ESI,0x2                         ; 005b15b2
    MOV byte ptr [EDI + 0x1],AL         ; 005b15b5
    ADD EDI,0x2                         ; 005b15b8
    CMP AL,0x0                          ; 005b15bb
    JNZ 0x005b15a7                      ; 005b15bd
        ;   XREF to: 005b15a7 (CONDITIONAL_JUMP)  ; LAB_005b15a7
    POP EDI                             ; 005b15bf
        ;   Label: LAB_005b15bf
    LEA ESI,[ESP + 0xc]                 ; 005b15c0
    PUSH EDI                            ; 005b15c4
    SUB ECX,ECX                         ; 005b15c5
    DEC ECX                             ; 005b15c7
    MOV AL,0x0                          ; 005b15c8
    SCASB.REPNE ES:EDI                  ; 005b15ca
    DEC EDI                             ; 005b15cc
    MOV AL,byte ptr [ESI]               ; 005b15cd
        ;   Label: LAB_005b15cd
    MOV byte ptr [EDI],AL               ; 005b15cf
    CMP AL,0x0                          ; 005b15d1
    JZ 0x005b15e5                       ; 005b15d3
        ;   XREF to: 005b15e5 (CONDITIONAL_JUMP)  ; LAB_005b15e5
    MOV AL,byte ptr [ESI + 0x1]         ; 005b15d5
    ADD ESI,0x2                         ; 005b15d8
    MOV byte ptr [EDI + 0x1],AL         ; 005b15db
    ADD EDI,0x2                         ; 005b15de
    CMP AL,0x0                          ; 005b15e1
    JNZ 0x005b15cd                      ; 005b15e3
        ;   XREF to: 005b15cd (CONDITIONAL_JUMP)  ; LAB_005b15cd
    POP EDI                             ; 005b15e5
        ;   Label: LAB_005b15e5
    MOV EAX,0x1                         ; 005b15e6
    POP EDI                             ; 005b15eb
    ADD ESP,0x30                        ; 005b15ec
    POP ESI                             ; 005b15ef
    POP EBX                             ; 005b15f0
    RET                                 ; 005b15f1

