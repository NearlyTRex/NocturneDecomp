; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl sound_sndwav_cpp_enumerateWavInDevice_FUN_0057b460(UINT_PTR param_1,char *param_2)
;
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x30]:1  local_30
; undefined1       Stack[-0x2f]:1  local_2f
;
; XREF[1]:
;   sound_sndmain.cpp_getRecordingDeviceCount_FUN_00575730 at 00575767
;
; Referenced Globals:
;   void* PTR_waveInGetDevCapsA_005d0464 = 001d0962
;   TerminatedCString s_WavIn_005f58ce
;
; Called Functions:
;   support_newmsg.cpp_getLocalizedString_FUN_00531090
;   waveInGetDevCapsA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057b460
        ;   Label: sound_sndwav.cpp_enumerateWavInDevice_FUN_0057b460
    PUSH ESI                            ; 0057b461
    SUB ESP,0x30                        ; 0057b462
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0057b465
    MOV EBX,dword ptr [ESP + 0x40]      ; 0057b469
    PUSH 0x30                           ; 0057b46d
    LEA EAX,[ESP + 0x4]                 ; 0057b46f
    PUSH EAX                            ; 0057b473
    PUSH ESI                            ; 0057b474
    CALL dword ptr CS:[0x5d0464]        ; 0057b475 | PTR_waveInGetDevCapsA_005d0464
    TEST EAX,EAX                        ; 0057b47c
    JZ 0x0057b488                       ; 0057b47e
        ;   XREF to: 0057b488 (CONDITIONAL_JUMP)  ; LAB_0057b488
    XOR EAX,EAX                         ; 0057b480
    ADD ESP,0x30                        ; 0057b482
    POP ESI                             ; 0057b485
    POP EBX                             ; 0057b486
    RET                                 ; 0057b487
    PUSH EDI                            ; 0057b488
        ;   Label: LAB_0057b488
    MOV dword ptr [EBX + 0x100],EAX     ; 0057b489
    PUSH 0x5f58ce                       ; 0057b48f | = "WavIn: "
    MOV dword ptr [EBX + 0x104],ESI     ; 0057b494
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0057b49a
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0057b49f
    MOV EDI,EBX                         ; 0057b4a2
    MOV ESI,EAX                         ; 0057b4a4
    PUSH EDI                            ; 0057b4a6
    MOV AL,byte ptr [ESI]               ; 0057b4a7
        ;   Label: LAB_0057b4a7
    MOV byte ptr [EDI],AL               ; 0057b4a9
    CMP AL,0x0                          ; 0057b4ab
    JZ 0x0057b4bf                       ; 0057b4ad
        ;   XREF to: 0057b4bf (CONDITIONAL_JUMP)  ; LAB_0057b4bf
    MOV AL,byte ptr [ESI + 0x1]         ; 0057b4af
    ADD ESI,0x2                         ; 0057b4b2
    MOV byte ptr [EDI + 0x1],AL         ; 0057b4b5
    ADD EDI,0x2                         ; 0057b4b8
    CMP AL,0x0                          ; 0057b4bb
    JNZ 0x0057b4a7                      ; 0057b4bd
        ;   XREF to: 0057b4a7 (CONDITIONAL_JUMP)  ; LAB_0057b4a7
    POP EDI                             ; 0057b4bf
        ;   Label: LAB_0057b4bf
    LEA ESI,[ESP + 0xc]                 ; 0057b4c0
    PUSH EDI                            ; 0057b4c4
    SUB ECX,ECX                         ; 0057b4c5
    DEC ECX                             ; 0057b4c7
    MOV AL,0x0                          ; 0057b4c8
    SCASB.REPNE ES:EDI                  ; 0057b4ca
    DEC EDI                             ; 0057b4cc
    MOV AL,byte ptr [ESI]               ; 0057b4cd
        ;   Label: LAB_0057b4cd
    MOV byte ptr [EDI],AL               ; 0057b4cf
    CMP AL,0x0                          ; 0057b4d1
    JZ 0x0057b4e5                       ; 0057b4d3
        ;   XREF to: 0057b4e5 (CONDITIONAL_JUMP)  ; LAB_0057b4e5
    MOV AL,byte ptr [ESI + 0x1]         ; 0057b4d5
    ADD ESI,0x2                         ; 0057b4d8
    MOV byte ptr [EDI + 0x1],AL         ; 0057b4db
    ADD EDI,0x2                         ; 0057b4de
    CMP AL,0x0                          ; 0057b4e1
    JNZ 0x0057b4cd                      ; 0057b4e3
        ;   XREF to: 0057b4cd (CONDITIONAL_JUMP)  ; LAB_0057b4cd
    POP EDI                             ; 0057b4e5
        ;   Label: LAB_0057b4e5
    MOV EAX,0x1                         ; 0057b4e6
    POP EDI                             ; 0057b4eb
    ADD ESP,0x30                        ; 0057b4ec
    POP ESI                             ; 0057b4ef
    POP EBX                             ; 0057b4f0
    RET                                 ; 0057b4f1

