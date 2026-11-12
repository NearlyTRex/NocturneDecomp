; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_enumerateWavInDevice_FUN_0055e590(UINT device_id,SRecordingDeviceInfo *device_info)
;
; Parameters:
; UINT             Stack[0x4]:4   device_id
; SRecordingDeviceInfo * Stack[0x8]:4   device_info
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x30]:1  local_30
; undefined1       Stack[-0x2f]:1  local_2f
;
; XREF[1]:
;   sound_sndmain.cpp_getRecordingDeviceCount_FUN_005588a0 at 005588d7
;
; Referenced Globals:
;   void* PTR_waveInGetDevCapsA_005b3464 = 001b3962
;   TerminatedCString s_WavIn_005d5127
;
; Called Functions:
;   support_newmsg.cpp_getLocalizedString_FUN_00508960
;   waveInGetDevCapsA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055e590
        ;   Label: sound_sndwav.cpp_enumerateWavInDevice_FUN_0055e590
    PUSH ESI                            ; 0055e591
    SUB ESP,0x30                        ; 0055e592
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0055e595
    MOV EBX,dword ptr [ESP + 0x40]      ; 0055e599
    PUSH 0x30                           ; 0055e59d
    LEA EAX,[ESP + 0x4]                 ; 0055e59f
    PUSH EAX                            ; 0055e5a3
    PUSH ESI                            ; 0055e5a4
    CALL dword ptr CS:[0x5b3464]        ; 0055e5a5 | PTR_waveInGetDevCapsA_005b3464
    TEST EAX,EAX                        ; 0055e5ac
    JZ 0x0055e5b8                       ; 0055e5ae
        ;   XREF to: 0055e5b8 (CONDITIONAL_JUMP)  ; LAB_0055e5b8
    XOR EAX,EAX                         ; 0055e5b0
    ADD ESP,0x30                        ; 0055e5b2
    POP ESI                             ; 0055e5b5
    POP EBX                             ; 0055e5b6
    RET                                 ; 0055e5b7
    PUSH EDI                            ; 0055e5b8
        ;   Label: LAB_0055e5b8
    MOV dword ptr [EBX + 0x100],EAX     ; 0055e5b9
    PUSH 0x5d5127                       ; 0055e5bf | = "WavIn: "
    MOV dword ptr [EBX + 0x104],ESI     ; 0055e5c4
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 0055e5ca
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 0055e5cf
    MOV EDI,EBX                         ; 0055e5d2
    MOV ESI,EAX                         ; 0055e5d4
    PUSH EDI                            ; 0055e5d6
    MOV AL,byte ptr [ESI]               ; 0055e5d7
        ;   Label: LAB_0055e5d7
    MOV byte ptr [EDI],AL               ; 0055e5d9
    CMP AL,0x0                          ; 0055e5db
    JZ 0x0055e5ef                       ; 0055e5dd
        ;   XREF to: 0055e5ef (CONDITIONAL_JUMP)  ; LAB_0055e5ef
    MOV AL,byte ptr [ESI + 0x1]         ; 0055e5df
    ADD ESI,0x2                         ; 0055e5e2
    MOV byte ptr [EDI + 0x1],AL         ; 0055e5e5
    ADD EDI,0x2                         ; 0055e5e8
    CMP AL,0x0                          ; 0055e5eb
    JNZ 0x0055e5d7                      ; 0055e5ed
        ;   XREF to: 0055e5d7 (CONDITIONAL_JUMP)  ; LAB_0055e5d7
    POP EDI                             ; 0055e5ef
        ;   Label: LAB_0055e5ef
    LEA ESI,[ESP + 0xc]                 ; 0055e5f0
    PUSH EDI                            ; 0055e5f4
    SUB ECX,ECX                         ; 0055e5f5
    DEC ECX                             ; 0055e5f7
    MOV AL,0x0                          ; 0055e5f8
    SCASB.REPNE ES:EDI                  ; 0055e5fa
    DEC EDI                             ; 0055e5fc
    MOV AL,byte ptr [ESI]               ; 0055e5fd
        ;   Label: LAB_0055e5fd
    MOV byte ptr [EDI],AL               ; 0055e5ff
    CMP AL,0x0                          ; 0055e601
    JZ 0x0055e615                       ; 0055e603
        ;   XREF to: 0055e615 (CONDITIONAL_JUMP)  ; LAB_0055e615
    MOV AL,byte ptr [ESI + 0x1]         ; 0055e605
    ADD ESI,0x2                         ; 0055e608
    MOV byte ptr [EDI + 0x1],AL         ; 0055e60b
    ADD EDI,0x2                         ; 0055e60e
    CMP AL,0x0                          ; 0055e611
    JNZ 0x0055e5fd                      ; 0055e613
        ;   XREF to: 0055e5fd (CONDITIONAL_JUMP)  ; LAB_0055e5fd
    POP EDI                             ; 0055e615
        ;   Label: LAB_0055e615
    MOV EAX,0x1                         ; 0055e616
    POP EDI                             ; 0055e61b
    ADD ESP,0x30                        ; 0055e61c
    POP ESI                             ; 0055e61f
    POP EBX                             ; 0055e620
    RET                                 ; 0055e621

