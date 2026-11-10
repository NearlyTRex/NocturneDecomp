; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_getRecordingFormat_FUN_0055301e(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_0061bcd0
;   undefined4 DAT_0061bcd4
;   undefined4 DAT_0061bcd8
;   undefined4 DAT_02649870
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0055301e
        ;   Label: sound_sndmain.cpp_getRecordingFormat_FUN_0055301e
    PUSH EBX                            ; 00553020
    MOV EBX,dword ptr [ESP + 0x8]       ; 00553021
    MOV ECX,dword ptr [ESP + 0x10]      ; 00553025
    MOV EDX,dword ptr [ESP + 0x14]      ; 00553029
    TEST EBX,EBX                        ; 0055302d
    JNZ 0x00553051                      ; 0055302f
        ;   XREF to: 00553051 (CONDITIONAL_JUMP)  ; LAB_00553051
    MOV EBX,dword ptr [ESP + 0xc]       ; 00553031
        ;   Label: LAB_00553031
    TEST EBX,EBX                        ; 00553035
    JZ 0x00553040                       ; 00553037
        ;   XREF to: 00553040 (CONDITIONAL_JUMP)  ; LAB_00553040
    MOV EAX,[0x0061bcd4]                ; 00553039 | DAT_0061bcd4
    MOV dword ptr [EBX],EAX             ; 0055303e
    TEST ECX,ECX                        ; 00553040
        ;   Label: LAB_00553040
    JZ 0x0055304b                       ; 00553042
        ;   XREF to: 0055304b (CONDITIONAL_JUMP)  ; LAB_0055304b
    MOV EAX,[0x0061bcd8]                ; 00553044 | DAT_0061bcd8
    MOV dword ptr [ECX],EAX             ; 00553049
    TEST EDX,EDX                        ; 0055304b
        ;   Label: LAB_0055304b
    JNZ 0x0055305a                      ; 0055304d
        ;   XREF to: 0055305a (CONDITIONAL_JUMP)  ; LAB_0055305a
    POP EBX                             ; 0055304f
    RET                                 ; 00553050
    MOV EAX,[0x0061bcd0]                ; 00553051 | DAT_0061bcd0
        ;   Label: LAB_00553051
    MOV dword ptr [EBX],EAX             ; 00553056
    JMP 0x00553031                      ; 00553058
        ;   XREF to: 00553031 (UNCONDITIONAL_JUMP)  ; LAB_00553031
    MOV EAX,[0x02649870]                ; 0055305a | DAT_02649870
        ;   Label: LAB_0055305a
    MOV dword ptr [EDX],EAX             ; 0055305f
    POP EBX                             ; 00553061
    RET                                 ; 00553062

