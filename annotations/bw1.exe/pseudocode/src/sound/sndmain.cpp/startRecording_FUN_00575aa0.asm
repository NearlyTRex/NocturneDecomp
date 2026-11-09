; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_startRecording_FUN_00575aa0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00623320
;   undefined4 DAT_00623324
;   undefined4 DAT_00623328
;   undefined4 DAT_02c81038
;   undefined4 DAT_02c8103c
;   undefined4 DAT_02c81040
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00573e70
;   sound_sndmain.cpp_isRecordingStarted_FUN_00575990
;   sound_sndmain.cpp_isRecordingSystemActive_FUN_00575980
;   sound_sndmain.cpp_lockSound_FUN_00575d20
;   sound_sndmain.cpp_setRecordingFormat_FUN_005759b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00575aa0
        ;   Label: sound_sndmain.cpp_startRecording_FUN_00575aa0
    PUSH ESI                            ; 00575aa1
    CALL sound_sndmain.cpp_isRecordingSystemActive_FUN_00575980 ; 00575aa2
        ;   XREF to: 00575980 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isRecordingSystemActive_FUN_00575980()
    TEST EAX,EAX                        ; 00575aa7
    JNZ 0x00575aae                      ; 00575aa9
        ;   XREF to: 00575aae (CONDITIONAL_JUMP)  ; LAB_00575aae
    POP ESI                             ; 00575aab
    POP EBX                             ; 00575aac
    RET                                 ; 00575aad
    CALL sound_sndmain.cpp_isRecordingStarted_FUN_00575990 ; 00575aae
        ;   XREF to: 00575990 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isRecordingStarted_FUN_00575990()
        ;   Label: LAB_00575aae
    TEST EAX,EAX                        ; 00575ab3
    JZ 0x00575abf                       ; 00575ab5
        ;   XREF to: 00575abf (CONDITIONAL_JUMP)  ; LAB_00575abf
    MOV EAX,0x1                         ; 00575ab7
    POP ESI                             ; 00575abc
    POP EBX                             ; 00575abd
    RET                                 ; 00575abe
    CALL sound_sndmain.cpp_lockSound_FUN_00575d20 ; 00575abf
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00575d20()
        ;   Label: LAB_00575abf
    MOV EDX,dword ptr [0x02c81040]      ; 00575ac4 | DAT_02c81040
    PUSH EDX                            ; 00575aca
    MOV ECX,dword ptr [0x00623328]      ; 00575acb | DAT_00623328
    PUSH ECX                            ; 00575ad1
    MOV EBX,dword ptr [0x00623324]      ; 00575ad2 | DAT_00623324
    PUSH EBX                            ; 00575ad8
    MOV ESI,dword ptr [0x00623320]      ; 00575ad9 | DAT_00623320
    PUSH ESI                            ; 00575adf
    CALL sound_sndmain.cpp_setRecordingFormat_FUN_005759b0 ; 00575ae0
        ;   XREF to: 005759b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setRecordingFormat_FUN_005759b0(int bits_per_sample, int channels, int sample_rate, int signed_samples)
    ADD ESP,0x10                        ; 00575ae5
    TEST EAX,EAX                        ; 00575ae8
    JZ 0x00575b15                       ; 00575aea
        ;   XREF to: 00575b15 (CONDITIONAL_JUMP)  ; LAB_00575b15
    MOV EAX,[0x02c81038]                ; 00575aec | DAT_02c81038
    PUSH EAX                            ; 00575af1
    MOV EDX,dword ptr [EAX]             ; 00575af2
    CALL dword ptr [EDX + 0x4]          ; 00575af4
    ADD ESP,0x4                         ; 00575af7
    TEST EAX,EAX                        ; 00575afa
    JZ 0x00575b15                       ; 00575afc
        ;   XREF to: 00575b15 (CONDITIONAL_JUMP)  ; LAB_00575b15
    PUSH EDI                            ; 00575afe
    MOV EDI,0x1                         ; 00575aff
    MOV dword ptr [0x02c8103c],EDI      ; 00575b04 | DAT_02c8103c
    CALL sound_sndmain.cpp_FUN_00573e70 ; 00575b0a
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573e70()
    MOV EAX,EDI                         ; 00575b0f
    POP EDI                             ; 00575b11
    POP ESI                             ; 00575b12
    POP EBX                             ; 00575b13
    RET                                 ; 00575b14
    CALL sound_sndmain.cpp_FUN_00573e70 ; 00575b15
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573e70()
        ;   Label: LAB_00575b15
    XOR EAX,EAX                         ; 00575b1a
    POP ESI                             ; 00575b1c
    POP EBX                             ; 00575b1d
    RET                                 ; 00575b1e

