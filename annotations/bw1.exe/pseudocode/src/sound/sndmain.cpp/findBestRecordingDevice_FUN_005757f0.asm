; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_findBestRecordingDevice_FUN_005757f0(void)
;
; Local Variables:
; undefined4       Stack[-0x118]:4  local_118
; undefined        Stack[-0x110]:1  local_110
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   sound_sndmain.cpp_selectRecordingDevice_FUN_00575870 at 00575891
;
; Called Functions:
;   sound_sndmain.cpp_getRecordingDeviceCount_FUN_00575730
;   sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00575790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005757f0
        ;   Label: sound_sndmain.cpp_findBestRecordingDevice_FUN_005757f0
    PUSH ESI                            ; 005757f1
    SUB ESP,0x210                       ; 005757f2
    CALL sound_sndmain.cpp_getRecordingDeviceCount_FUN_00575730 ; 005757f8
        ;   XREF to: 00575730 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getRecordingDeviceCount_FUN_00575730()
    MOV ESI,EAX                         ; 005757fd
    CMP EAX,0x1                         ; 005757ff
    JL 0x00575858                       ; 00575802
        ;   XREF to: 00575858 (CONDITIONAL_JUMP)  ; LAB_00575858
    XOR EBX,EBX                         ; 00575804
    TEST EAX,EAX                        ; 00575806
    JLE 0x0057582a                      ; 00575808
        ;   XREF to: 0057582a (CONDITIONAL_JUMP)  ; LAB_0057582a
    LEA EAX,[ESP + 0x108]               ; 0057580a
        ;   Label: LAB_0057580a
    PUSH EAX                            ; 00575811
    PUSH EBX                            ; 00575812
    CALL sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00575790 ; 00575813
        ;   XREF to: 00575790 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00575790()
    ADD ESP,0x8                         ; 00575818
    CMP dword ptr [ESP + 0x208],0x1     ; 0057581b
    JZ 0x0057584d                       ; 00575823
        ;   XREF to: 0057584d (CONDITIONAL_JUMP)  ; LAB_0057584d
    INC EBX                             ; 00575825
    CMP EBX,ESI                         ; 00575826
    JL 0x0057580a                       ; 00575828
        ;   XREF to: 0057580a (CONDITIONAL_JUMP)  ; LAB_0057580a
    XOR EBX,EBX                         ; 0057582a
        ;   Label: LAB_0057582a
    TEST ESI,ESI                        ; 0057582c
    JLE 0x0057584b                      ; 0057582e
        ;   XREF to: 0057584b (CONDITIONAL_JUMP)  ; LAB_0057584b
    MOV EAX,ESP                         ; 00575830
        ;   Label: LAB_00575830
    PUSH EAX                            ; 00575832
    PUSH EBX                            ; 00575833
    CALL sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00575790 ; 00575834
        ;   XREF to: 00575790 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00575790()
    ADD ESP,0x8                         ; 00575839
    CMP dword ptr [ESP + 0x100],0x0     ; 0057583c
    JZ 0x0057584d                       ; 00575844
        ;   XREF to: 0057584d (CONDITIONAL_JUMP)  ; LAB_0057584d
    INC EBX                             ; 00575846
    CMP EBX,ESI                         ; 00575847
    JL 0x00575830                       ; 00575849
        ;   XREF to: 00575830 (CONDITIONAL_JUMP)  ; LAB_00575830
    XOR EBX,EBX                         ; 0057584b
        ;   Label: LAB_0057584b
    MOV EAX,EBX                         ; 0057584d
        ;   Label: LAB_0057584d
    ADD ESP,0x210                       ; 0057584f
    POP ESI                             ; 00575855
    POP EBX                             ; 00575856
    RET                                 ; 00575857
    MOV EBX,0xffffffff                  ; 00575858
        ;   Label: LAB_00575858
    MOV EAX,EBX                         ; 0057585d
    ADD ESP,0x210                       ; 0057585f
    POP ESI                             ; 00575865
    POP EBX                             ; 00575866
    RET                                 ; 00575867

