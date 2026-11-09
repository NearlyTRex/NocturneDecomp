; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_setRecordingFormat_FUN_005759b0(int bits_per_sample,int channels,int sample_rate,int signed_samples)
;
; Parameters:
; int              Stack[0x4]:4   bits_per_sample
; int              Stack[0x8]:4   channels
; int              Stack[0xc]:4   sample_rate
; int              Stack[0x10]:4   signed_samples
;
; XREF[1]:
;   sound_sndmain.cpp_startRecording_FUN_00575aa0 at 00575ae0
;
; Referenced Globals:
;   undefined4 DAT_00623320
;   undefined4 DAT_00623324
;   undefined4 DAT_00623328
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c81038
;   undefined4 DAT_02c81040
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   sound_sndmain.cpp_isRecordingStarted_FUN_00575990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005759b0
        ;   Label: sound_sndmain.cpp_setRecordingFormat_FUN_005759b0
    PUSH ESI                            ; 005759b1
    PUSH EDI                            ; 005759b2
    PUSH EBP                            ; 005759b3
    CALL sound_sndmain.cpp_isRecordingStarted_FUN_00575990 ; 005759b4
        ;   XREF to: 00575990 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isRecordingStarted_FUN_00575990()
    TEST EAX,EAX                        ; 005759b9
    JNZ 0x005759ff                      ; 005759bb
        ;   XREF to: 005759ff (CONDITIONAL_JUMP)  ; LAB_005759ff
    MOV EAX,dword ptr [ESP + 0x14]      ; 005759bd
        ;   Label: LAB_005759bd
    MOV [0x00623320],EAX                ; 005759c1 | DAT_00623320
    MOV EAX,dword ptr [ESP + 0x18]      ; 005759c6
    MOV [0x00623324],EAX                ; 005759ca | DAT_00623324
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005759cf
    MOV EBX,dword ptr [ESP + 0x20]      ; 005759d3
    MOV [0x00623328],EAX                ; 005759d7 | DAT_00623328
    TEST EBX,EBX                        ; 005759dc
    SETNZ AL                            ; 005759de
    AND EAX,0xff                        ; 005759e1
    MOV ESI,dword ptr [0x02c81038]      ; 005759e6 | DAT_02c81038
    MOV [0x02c81040],EAX                ; 005759ec | DAT_02c81040
    TEST ESI,ESI                        ; 005759f1
    JNZ 0x00575a24                      ; 005759f3
        ;   XREF to: 00575a24 (CONDITIONAL_JUMP)  ; LAB_00575a24
    MOV EAX,0x1                         ; 005759f5
        ;   Label: LAB_005759f5
    POP EBP                             ; 005759fa
    POP EDI                             ; 005759fb
    POP ESI                             ; 005759fc
    POP EBX                             ; 005759fd
    RET                                 ; 005759fe
    MOV EDX,0x5f4347                    ; 005759ff
        ;   Label: LAB_005759ff
    MOV ECX,0x16ed                      ; 00575a04
    PUSH 0x5f435c                       ; 00575a09
    MOV dword ptr [0x01d1d400],EDX      ; 00575a0e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00575a14 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00575a1a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00575a1f
    JMP 0x005759bd                      ; 00575a22
        ;   XREF to: 005759bd (UNCONDITIONAL_JUMP)  ; LAB_005759bd
    PUSH EAX                            ; 00575a24
        ;   Label: LAB_00575a24
    MOV EDI,dword ptr [0x00623328]      ; 00575a25 | DAT_00623328
    PUSH EDI                            ; 00575a2b
    MOV EBP,dword ptr [0x00623324]      ; 00575a2c | DAT_00623324
    PUSH EBP                            ; 00575a32
    MOV EAX,[0x00623320]                ; 00575a33 | DAT_00623320
    PUSH EAX                            ; 00575a38
    MOV ECX,dword ptr [ESI]             ; 00575a39
    PUSH ESI                            ; 00575a3b
    CALL dword ptr [ECX + 0xc]          ; 00575a3c
    ADD ESP,0x14                        ; 00575a3f
    TEST EAX,EAX                        ; 00575a42
    JNZ 0x005759f5                      ; 00575a44
        ;   XREF to: 005759f5 (CONDITIONAL_JUMP)  ; LAB_005759f5
    POP EBP                             ; 00575a46
    POP EDI                             ; 00575a47
    POP ESI                             ; 00575a48
    POP EBX                             ; 00575a49
    RET                                 ; 00575a4a

