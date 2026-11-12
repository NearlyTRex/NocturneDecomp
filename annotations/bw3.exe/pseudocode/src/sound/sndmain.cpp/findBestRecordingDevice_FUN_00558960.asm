; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_findBestRecordingDevice_FUN_00558960(void)
;
; Local Variables:
; undefined4       Stack[-0x118]:4  local_118
; undefined        Stack[-0x110]:1  local_110
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   sound_sndmain.cpp_selectRecordingDevice_FUN_005589e0 at 00558a01
;
; Called Functions:
;   sound_sndmain.cpp_getRecordingDeviceCount_FUN_005588a0
;   sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00558900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558960
        ;   Label: sound_sndmain.cpp_findBestRecordingDevice_FUN_00558960
    PUSH ESI                            ; 00558961
    SUB ESP,0x210                       ; 00558962
    CALL sound_sndmain.cpp_getRecordingDeviceCount_FUN_005588a0 ; 00558968
        ;   XREF to: 005588a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getRecordingDeviceCount_FUN_005588a0()
    MOV ESI,EAX                         ; 0055896d
    CMP EAX,0x1                         ; 0055896f
    JL 0x005589c8                       ; 00558972
        ;   XREF to: 005589c8 (CONDITIONAL_JUMP)  ; LAB_005589c8
    XOR EBX,EBX                         ; 00558974
    TEST EAX,EAX                        ; 00558976
    JLE 0x0055899a                      ; 00558978
        ;   XREF to: 0055899a (CONDITIONAL_JUMP)  ; LAB_0055899a
    LEA EAX,[ESP + 0x108]               ; 0055897a
        ;   Label: LAB_0055897a
    PUSH EAX                            ; 00558981
    PUSH EBX                            ; 00558982
    CALL sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00558900 ; 00558983
        ;   XREF to: 00558900 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00558900(int index, SRecordingDeviceInfo * device_info)
    ADD ESP,0x8                         ; 00558988
    CMP dword ptr [ESP + 0x208],0x1     ; 0055898b
    JZ 0x005589bd                       ; 00558993
        ;   XREF to: 005589bd (CONDITIONAL_JUMP)  ; LAB_005589bd
    INC EBX                             ; 00558995
    CMP EBX,ESI                         ; 00558996
    JL 0x0055897a                       ; 00558998
        ;   XREF to: 0055897a (CONDITIONAL_JUMP)  ; LAB_0055897a
    XOR EBX,EBX                         ; 0055899a
        ;   Label: LAB_0055899a
    TEST ESI,ESI                        ; 0055899c
    JLE 0x005589bb                      ; 0055899e
        ;   XREF to: 005589bb (CONDITIONAL_JUMP)  ; LAB_005589bb
    MOV EAX,ESP                         ; 005589a0
        ;   Label: LAB_005589a0
    PUSH EAX                            ; 005589a2
    PUSH EBX                            ; 005589a3
    CALL sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00558900 ; 005589a4
        ;   XREF to: 00558900 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00558900(int index, SRecordingDeviceInfo * device_info)
    ADD ESP,0x8                         ; 005589a9
    CMP dword ptr [ESP + 0x100],0x0     ; 005589ac
    JZ 0x005589bd                       ; 005589b4
        ;   XREF to: 005589bd (CONDITIONAL_JUMP)  ; LAB_005589bd
    INC EBX                             ; 005589b6
    CMP EBX,ESI                         ; 005589b7
    JL 0x005589a0                       ; 005589b9
        ;   XREF to: 005589a0 (CONDITIONAL_JUMP)  ; LAB_005589a0
    XOR EBX,EBX                         ; 005589bb
        ;   Label: LAB_005589bb
    MOV EAX,EBX                         ; 005589bd
        ;   Label: LAB_005589bd
    ADD ESP,0x210                       ; 005589bf
    POP ESI                             ; 005589c5
    POP EBX                             ; 005589c6
    RET                                 ; 005589c7
    MOV EBX,0xffffffff                  ; 005589c8
        ;   Label: LAB_005589c8
    MOV EAX,EBX                         ; 005589cd
    ADD ESP,0x210                       ; 005589cf
    POP ESI                             ; 005589d5
    POP EBX                             ; 005589d6
    RET                                 ; 005589d7

