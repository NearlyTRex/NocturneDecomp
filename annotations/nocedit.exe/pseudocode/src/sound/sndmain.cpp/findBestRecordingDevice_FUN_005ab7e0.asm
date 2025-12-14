; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndmain.cpp_findBestRecordingDevice_FUN_005ab7e0(void)
;
; Local Variables:
; undefined4       Stack[-0x118]:4  local_118
; undefined1       Stack[-0x110]:1  local_110
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860 at 005ab881
;
; Called Functions:
;   sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720
;   sound_sndmain.cpp_getRecordingDeviceInfo_FUN_005ab780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab7e0
        ;   Label: sound_sndmain.cpp_findBestRecordingDevice_FUN_005ab7e0
    PUSH ESI                            ; 005ab7e1
    SUB ESP,0x210                       ; 005ab7e2
    CALL sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720 ; 005ab7e8
        ;   XREF to: 005ab720 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720()
    MOV ESI,EAX                         ; 005ab7ed
    CMP EAX,0x1                         ; 005ab7ef
    JL 0x005ab848                       ; 005ab7f2
        ;   XREF to: 005ab848 (CONDITIONAL_JUMP)  ; LAB_005ab848
    XOR EBX,EBX                         ; 005ab7f4
    TEST EAX,EAX                        ; 005ab7f6
    JLE 0x005ab81a                      ; 005ab7f8
        ;   XREF to: 005ab81a (CONDITIONAL_JUMP)  ; LAB_005ab81a
    LEA EAX,[ESP + 0x108]               ; 005ab7fa
        ;   Label: LAB_005ab7fa
    PUSH EAX                            ; 005ab801
    PUSH EBX                            ; 005ab802
    CALL sound_sndmain.cpp_getRecordingDeviceInfo_FUN_005ab780 ; 005ab803
        ;   XREF to: 005ab780 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getRecordingDeviceInfo_FUN_005ab780(int index, SRecordingDeviceInfo * device_info)
    ADD ESP,0x8                         ; 005ab808
    CMP dword ptr [ESP + 0x208],0x1     ; 005ab80b
    JZ 0x005ab83d                       ; 005ab813
        ;   XREF to: 005ab83d (CONDITIONAL_JUMP)  ; LAB_005ab83d
    INC EBX                             ; 005ab815
    CMP EBX,ESI                         ; 005ab816
    JL 0x005ab7fa                       ; 005ab818
        ;   XREF to: 005ab7fa (CONDITIONAL_JUMP)  ; LAB_005ab7fa
    XOR EBX,EBX                         ; 005ab81a
        ;   Label: LAB_005ab81a
    TEST ESI,ESI                        ; 005ab81c
    JLE 0x005ab83b                      ; 005ab81e
        ;   XREF to: 005ab83b (CONDITIONAL_JUMP)  ; LAB_005ab83b
    MOV EAX,ESP                         ; 005ab820
        ;   Label: LAB_005ab820
    PUSH EAX                            ; 005ab822
    PUSH EBX                            ; 005ab823
    CALL sound_sndmain.cpp_getRecordingDeviceInfo_FUN_005ab780 ; 005ab824
        ;   XREF to: 005ab780 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_getRecordingDeviceInfo_FUN_005ab780(int index, SRecordingDeviceInfo * device_info)
    ADD ESP,0x8                         ; 005ab829
    CMP dword ptr [ESP + 0x100],0x0     ; 005ab82c
    JZ 0x005ab83d                       ; 005ab834
        ;   XREF to: 005ab83d (CONDITIONAL_JUMP)  ; LAB_005ab83d
    INC EBX                             ; 005ab836
    CMP EBX,ESI                         ; 005ab837
    JL 0x005ab820                       ; 005ab839
        ;   XREF to: 005ab820 (CONDITIONAL_JUMP)  ; LAB_005ab820
    XOR EBX,EBX                         ; 005ab83b
        ;   Label: LAB_005ab83b
    MOV EAX,EBX                         ; 005ab83d
        ;   Label: LAB_005ab83d
    ADD ESP,0x210                       ; 005ab83f
    POP ESI                             ; 005ab845
    POP EBX                             ; 005ab846
    RET                                 ; 005ab847
    MOV EBX,0xffffffff                  ; 005ab848
        ;   Label: LAB_005ab848
    MOV EAX,EBX                         ; 005ab84d
    ADD ESP,0x210                       ; 005ab84f
    POP ESI                             ; 005ab855
    POP EBX                             ; 005ab856
    RET                                 ; 005ab857

