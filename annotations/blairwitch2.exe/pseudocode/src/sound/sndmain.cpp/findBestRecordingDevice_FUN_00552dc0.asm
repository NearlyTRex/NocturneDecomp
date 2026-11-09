; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_findBestRecordingDevice_FUN_00552dc0(void)
;
; Local Variables:
; undefined4       Stack[-0x118]:4  local_118
; undefined        Stack[-0x110]:1  local_110
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   sound_sndmain.cpp_FUN_00552e40 at 00552e61
;
; Called Functions:
;   sound_sndmain.cpp_getRecordingDeviceCount_FUN_00552d00
;   sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00552d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552dc0
        ;   Label: sound_sndmain.cpp_findBestRecordingDevice_FUN_00552dc0
    PUSH ESI                            ; 00552dc1
    SUB ESP,0x210                       ; 00552dc2
    CALL sound_sndmain.cpp_getRecordingDeviceCount_FUN_00552d00 ; 00552dc8
        ;   XREF to: 00552d00 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getRecordingDeviceCount_FUN_00552d00()
    MOV ESI,EAX                         ; 00552dcd
    CMP EAX,0x1                         ; 00552dcf
    JL 0x00552e28                       ; 00552dd2
        ;   XREF to: 00552e28 (CONDITIONAL_JUMP)  ; LAB_00552e28
    XOR EBX,EBX                         ; 00552dd4
    TEST EAX,EAX                        ; 00552dd6
    JLE 0x00552dfa                      ; 00552dd8
        ;   XREF to: 00552dfa (CONDITIONAL_JUMP)  ; LAB_00552dfa
    LEA EAX,[ESP + 0x108]               ; 00552dda
        ;   Label: LAB_00552dda
    PUSH EAX                            ; 00552de1
    PUSH EBX                            ; 00552de2
    CALL sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00552d60 ; 00552de3
        ;   XREF to: 00552d60 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00552d60()
    ADD ESP,0x8                         ; 00552de8
    CMP dword ptr [ESP + 0x208],0x1     ; 00552deb
    JZ 0x00552e1d                       ; 00552df3
        ;   XREF to: 00552e1d (CONDITIONAL_JUMP)  ; LAB_00552e1d
    INC EBX                             ; 00552df5
    CMP EBX,ESI                         ; 00552df6
    JL 0x00552dda                       ; 00552df8
        ;   XREF to: 00552dda (CONDITIONAL_JUMP)  ; LAB_00552dda
    XOR EBX,EBX                         ; 00552dfa
        ;   Label: LAB_00552dfa
    TEST ESI,ESI                        ; 00552dfc
    JLE 0x00552e1b                      ; 00552dfe
        ;   XREF to: 00552e1b (CONDITIONAL_JUMP)  ; LAB_00552e1b
    MOV EAX,ESP                         ; 00552e00
        ;   Label: LAB_00552e00
    PUSH EAX                            ; 00552e02
    PUSH EBX                            ; 00552e03
    CALL sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00552d60 ; 00552e04
        ;   XREF to: 00552d60 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getRecordingDeviceInfo_FUN_00552d60()
    ADD ESP,0x8                         ; 00552e09
    CMP dword ptr [ESP + 0x100],0x0     ; 00552e0c
    JZ 0x00552e1d                       ; 00552e14
        ;   XREF to: 00552e1d (CONDITIONAL_JUMP)  ; LAB_00552e1d
    INC EBX                             ; 00552e16
    CMP EBX,ESI                         ; 00552e17
    JL 0x00552e00                       ; 00552e19
        ;   XREF to: 00552e00 (CONDITIONAL_JUMP)  ; LAB_00552e00
    XOR EBX,EBX                         ; 00552e1b
        ;   Label: LAB_00552e1b
    MOV EAX,EBX                         ; 00552e1d
        ;   Label: LAB_00552e1d
    ADD ESP,0x210                       ; 00552e1f
    POP ESI                             ; 00552e25
    POP EBX                             ; 00552e26
    RET                                 ; 00552e27
    MOV EBX,0xffffffff                  ; 00552e28
        ;   Label: LAB_00552e28
    MOV EAX,EBX                         ; 00552e2d
    ADD ESP,0x210                       ; 00552e2f
    POP ESI                             ; 00552e35
    POP EBX                             ; 00552e36
    RET                                 ; 00552e37

