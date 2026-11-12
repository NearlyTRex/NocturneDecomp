; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_enumerateWavOutDevice_FUN_0055e4a0(UINT device_id,SSoundDeviceInfo *device_info)
;
; Parameters:
; UINT             Stack[0x4]:4   device_id
; SSoundDeviceInfo * Stack[0x8]:4   device_info
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x34]:1  local_34
; undefined1       Stack[-0x33]:1  local_33
;
; XREF[1]:
;   sound_sndmain.cpp_getSoundDeviceCount_FUN_00558430 at 00558467
;
; Referenced Globals:
;   void* PTR_waveOutGetDevCapsA_005b3480 = 001b39de
;   TerminatedCString s_WavOutWrite_005d5119
;
; Called Functions:
;   support_newmsg.cpp_getLocalizedString_FUN_00508960
;   waveOutGetDevCapsA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055e4a0
        ;   Label: sound_sndwav.cpp_enumerateWavOutDevice_FUN_0055e4a0
    PUSH ESI                            ; 0055e4a1
    SUB ESP,0x34                        ; 0055e4a2
    MOV ESI,dword ptr [ESP + 0x40]      ; 0055e4a5
    MOV EBX,dword ptr [ESP + 0x44]      ; 0055e4a9
    PUSH 0x34                           ; 0055e4ad
    LEA EAX,[ESP + 0x4]                 ; 0055e4af
    PUSH EAX                            ; 0055e4b3
    PUSH ESI                            ; 0055e4b4
    CALL dword ptr CS:[0x5b3480]        ; 0055e4b5 | PTR_waveOutGetDevCapsA_005b3480
    TEST EAX,EAX                        ; 0055e4bc
    JZ 0x0055e4c8                       ; 0055e4be
        ;   XREF to: 0055e4c8 (CONDITIONAL_JUMP)  ; LAB_0055e4c8
    XOR EAX,EAX                         ; 0055e4c0
    ADD ESP,0x34                        ; 0055e4c2
    POP ESI                             ; 0055e4c5
    POP EBX                             ; 0055e4c6
    RET                                 ; 0055e4c7
    PUSH EDI                            ; 0055e4c8
        ;   Label: LAB_0055e4c8
    MOV dword ptr [EBX + 0x100],EAX     ; 0055e4c9
    MOV dword ptr [EBX + 0x104],ESI     ; 0055e4cf
    MOV dword ptr [EBX + 0x108],EAX     ; 0055e4d5
    PUSH 0x5d5119                       ; 0055e4db | = "WavOutWrite: "
    MOV dword ptr [EBX + 0x10c],EAX     ; 0055e4e0
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 0055e4e6
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 0055e4eb
    MOV EDI,EBX                         ; 0055e4ee
    MOV ESI,EAX                         ; 0055e4f0
    PUSH EDI                            ; 0055e4f2
    MOV AL,byte ptr [ESI]               ; 0055e4f3
        ;   Label: LAB_0055e4f3
    MOV byte ptr [EDI],AL               ; 0055e4f5
    CMP AL,0x0                          ; 0055e4f7
    JZ 0x0055e50b                       ; 0055e4f9
        ;   XREF to: 0055e50b (CONDITIONAL_JUMP)  ; LAB_0055e50b
    MOV AL,byte ptr [ESI + 0x1]         ; 0055e4fb
    ADD ESI,0x2                         ; 0055e4fe
    MOV byte ptr [EDI + 0x1],AL         ; 0055e501
    ADD EDI,0x2                         ; 0055e504
    CMP AL,0x0                          ; 0055e507
    JNZ 0x0055e4f3                      ; 0055e509
        ;   XREF to: 0055e4f3 (CONDITIONAL_JUMP)  ; LAB_0055e4f3
    POP EDI                             ; 0055e50b
        ;   Label: LAB_0055e50b
    LEA ESI,[ESP + 0xc]                 ; 0055e50c
    PUSH EDI                            ; 0055e510
    SUB ECX,ECX                         ; 0055e511
    DEC ECX                             ; 0055e513
    MOV AL,0x0                          ; 0055e514
    SCASB.REPNE ES:EDI                  ; 0055e516
    DEC EDI                             ; 0055e518
    MOV AL,byte ptr [ESI]               ; 0055e519
        ;   Label: LAB_0055e519
    MOV byte ptr [EDI],AL               ; 0055e51b
    CMP AL,0x0                          ; 0055e51d
    JZ 0x0055e531                       ; 0055e51f
        ;   XREF to: 0055e531 (CONDITIONAL_JUMP)  ; LAB_0055e531
    MOV AL,byte ptr [ESI + 0x1]         ; 0055e521
    ADD ESI,0x2                         ; 0055e524
    MOV byte ptr [EDI + 0x1],AL         ; 0055e527
    ADD EDI,0x2                         ; 0055e52a
    CMP AL,0x0                          ; 0055e52d
    JNZ 0x0055e519                      ; 0055e52f
        ;   XREF to: 0055e519 (CONDITIONAL_JUMP)  ; LAB_0055e519
    POP EDI                             ; 0055e531
        ;   Label: LAB_0055e531
    MOV EAX,0x1                         ; 0055e532
    POP EDI                             ; 0055e537
    ADD ESP,0x34                        ; 0055e538
    POP ESI                             ; 0055e53b
    POP EBX                             ; 0055e53c
    RET                                 ; 0055e53d

