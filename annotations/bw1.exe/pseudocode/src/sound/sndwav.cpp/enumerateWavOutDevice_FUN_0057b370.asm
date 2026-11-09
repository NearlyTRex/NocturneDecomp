; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl sound_sndwav_cpp_enumerateWavOutDevice_FUN_0057b370(UINT_PTR param_1,char *param_2)
;
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x34]:1  local_34
; undefined1       Stack[-0x33]:1  local_33
;
; XREF[1]:
;   sound_sndmain.cpp_getSoundDeviceCount_FUN_005752c0 at 005752f7
;
; Referenced Globals:
;   void* PTR_waveOutGetDevCapsA_005d0480 = 001d09de
;   TerminatedCString s_WavOutWrite_005f58c0
;
; Called Functions:
;   support_newmsg.cpp_getLocalizedString_FUN_00531090
;   waveOutGetDevCapsA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057b370
        ;   Label: sound_sndwav.cpp_enumerateWavOutDevice_FUN_0057b370
    PUSH ESI                            ; 0057b371
    SUB ESP,0x34                        ; 0057b372
    MOV ESI,dword ptr [ESP + 0x40]      ; 0057b375
    MOV EBX,dword ptr [ESP + 0x44]      ; 0057b379
    PUSH 0x34                           ; 0057b37d
    LEA EAX,[ESP + 0x4]                 ; 0057b37f
    PUSH EAX                            ; 0057b383
    PUSH ESI                            ; 0057b384
    CALL dword ptr CS:[0x5d0480]        ; 0057b385 | PTR_waveOutGetDevCapsA_005d0480
    TEST EAX,EAX                        ; 0057b38c
    JZ 0x0057b398                       ; 0057b38e
        ;   XREF to: 0057b398 (CONDITIONAL_JUMP)  ; LAB_0057b398
    XOR EAX,EAX                         ; 0057b390
    ADD ESP,0x34                        ; 0057b392
    POP ESI                             ; 0057b395
    POP EBX                             ; 0057b396
    RET                                 ; 0057b397
    PUSH EDI                            ; 0057b398
        ;   Label: LAB_0057b398
    MOV dword ptr [EBX + 0x100],EAX     ; 0057b399
    MOV dword ptr [EBX + 0x104],ESI     ; 0057b39f
    MOV dword ptr [EBX + 0x108],EAX     ; 0057b3a5
    PUSH 0x5f58c0                       ; 0057b3ab | = "WavOutWrite: "
    MOV dword ptr [EBX + 0x10c],EAX     ; 0057b3b0
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 0057b3b6
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 0057b3bb
    MOV EDI,EBX                         ; 0057b3be
    MOV ESI,EAX                         ; 0057b3c0
    PUSH EDI                            ; 0057b3c2
    MOV AL,byte ptr [ESI]               ; 0057b3c3
        ;   Label: LAB_0057b3c3
    MOV byte ptr [EDI],AL               ; 0057b3c5
    CMP AL,0x0                          ; 0057b3c7
    JZ 0x0057b3db                       ; 0057b3c9
        ;   XREF to: 0057b3db (CONDITIONAL_JUMP)  ; LAB_0057b3db
    MOV AL,byte ptr [ESI + 0x1]         ; 0057b3cb
    ADD ESI,0x2                         ; 0057b3ce
    MOV byte ptr [EDI + 0x1],AL         ; 0057b3d1
    ADD EDI,0x2                         ; 0057b3d4
    CMP AL,0x0                          ; 0057b3d7
    JNZ 0x0057b3c3                      ; 0057b3d9
        ;   XREF to: 0057b3c3 (CONDITIONAL_JUMP)  ; LAB_0057b3c3
    POP EDI                             ; 0057b3db
        ;   Label: LAB_0057b3db
    LEA ESI,[ESP + 0xc]                 ; 0057b3dc
    PUSH EDI                            ; 0057b3e0
    SUB ECX,ECX                         ; 0057b3e1
    DEC ECX                             ; 0057b3e3
    MOV AL,0x0                          ; 0057b3e4
    SCASB.REPNE ES:EDI                  ; 0057b3e6
    DEC EDI                             ; 0057b3e8
    MOV AL,byte ptr [ESI]               ; 0057b3e9
        ;   Label: LAB_0057b3e9
    MOV byte ptr [EDI],AL               ; 0057b3eb
    CMP AL,0x0                          ; 0057b3ed
    JZ 0x0057b401                       ; 0057b3ef
        ;   XREF to: 0057b401 (CONDITIONAL_JUMP)  ; LAB_0057b401
    MOV AL,byte ptr [ESI + 0x1]         ; 0057b3f1
    ADD ESI,0x2                         ; 0057b3f4
    MOV byte ptr [EDI + 0x1],AL         ; 0057b3f7
    ADD EDI,0x2                         ; 0057b3fa
    CMP AL,0x0                          ; 0057b3fd
    JNZ 0x0057b3e9                      ; 0057b3ff
        ;   XREF to: 0057b3e9 (CONDITIONAL_JUMP)  ; LAB_0057b3e9
    POP EDI                             ; 0057b401
        ;   Label: LAB_0057b401
    MOV EAX,0x1                         ; 0057b402
    POP EDI                             ; 0057b407
    ADD ESP,0x34                        ; 0057b408
    POP ESI                             ; 0057b40b
    POP EBX                             ; 0057b40c
    RET                                 ; 0057b40d

