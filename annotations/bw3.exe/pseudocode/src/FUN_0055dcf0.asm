; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055dcf0(int param_1)
;
;
; XREF[2]:
;   FUN_0055de50 at 0055deba
;   FUN_0055e310 at 0055e467
;
; Referenced Globals:
;   void* PTR_waveInAddBuffer_005b345c = 001b3942
;   void* PTR_waveInPrepareHeader_005b346c = 001b3984
;   TerminatedCString s_waveOutPrepareHeader_fai_005d5049
;   TerminatedCString s_waveOutWrite_failed_005d5066
;   undefined4 DAT_02cf5504
;   undefined4 DAT_02cf5648
;   undefined4 DAT_02cf564c
;   undefined4 DAT_02cf5658
;
; Called Functions:
;   FUN_0055a560
;   waveInAddBuffer
;   waveInPrepareHeader
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055dcf0
        ;   Label: FUN_0055dcf0
    PUSH EDI                            ; 0055dcf1
    PUSH EBP                            ; 0055dcf2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0055dcf3
    SHL EBX,0x2                         ; 0055dcf7
    CMP dword ptr [EBX + 0x2cf55f8],0x0 ; 0055dcfa
    JZ 0x0055dd0d                       ; 0055dd01
        ;   XREF to: 0055dd0d (CONDITIONAL_JUMP)  ; LAB_0055dd0d
    MOV ECX,dword ptr [EBX + 0x2cf5558] ; 0055dd03
    TEST ECX,ECX                        ; 0055dd09
    JNZ 0x0055dd13                      ; 0055dd0b
        ;   XREF to: 0055dd13 (CONDITIONAL_JUMP)  ; LAB_0055dd13
    XOR EAX,EAX                         ; 0055dd0d
        ;   Label: LAB_0055dd0d
    POP EBP                             ; 0055dd0f
    POP EDI                             ; 0055dd10
    POP EBX                             ; 0055dd11
    RET                                 ; 0055dd12
    MOV EAX,[0x02cf5648]                ; 0055dd13 | DAT_02cf5648
        ;   Label: LAB_0055dd13
    MOV EDX,EAX                         ; 0055dd18
    SAR EDX,0x1f                        ; 0055dd1a
    SHL EDX,0x3                         ; 0055dd1d
    SBB EAX,EDX                         ; 0055dd20
    SAR EAX,0x3                         ; 0055dd22
    IMUL EAX,dword ptr [0x02cf5658]     ; 0055dd25 | DAT_02cf5658
    MOV EDX,dword ptr [0x02cf564c]      ; 0055dd2c | DAT_02cf564c
    IMUL EDX,EAX                        ; 0055dd32
    MOV dword ptr [ECX + 0x4],EDX       ; 0055dd35
    PUSH 0x20                           ; 0055dd38
    MOV EDI,dword ptr [EBX + 0x2cf5558] ; 0055dd3a
    PUSH EDI                            ; 0055dd40
    MOV EBP,dword ptr [0x02cf5504]      ; 0055dd41 | DAT_02cf5504
    PUSH EBP                            ; 0055dd47
    CALL dword ptr CS:[0x5b346c]        ; 0055dd48 | PTR_waveInPrepareHeader_005b346c
    TEST EAX,EAX                        ; 0055dd4f
    JNZ 0x0055dd77                      ; 0055dd51
        ;   XREF to: 0055dd77 (CONDITIONAL_JUMP)  ; LAB_0055dd77
    PUSH 0x20                           ; 0055dd53
    MOV EAX,dword ptr [EBX + 0x2cf5558] ; 0055dd55
    PUSH EAX                            ; 0055dd5b
    MOV EDX,dword ptr [0x02cf5504]      ; 0055dd5c | DAT_02cf5504
    PUSH EDX                            ; 0055dd62
    CALL dword ptr CS:[0x5b345c]        ; 0055dd63 | PTR_waveInAddBuffer_005b345c
    TEST EAX,EAX                        ; 0055dd6a
    JNZ 0x0055dd8a                      ; 0055dd6c
        ;   XREF to: 0055dd8a (CONDITIONAL_JUMP)  ; LAB_0055dd8a
    MOV EAX,0x1                         ; 0055dd6e
    POP EBP                             ; 0055dd73
    POP EDI                             ; 0055dd74
    POP EBX                             ; 0055dd75
    RET                                 ; 0055dd76
    PUSH 0x5d5049                       ; 0055dd77 | = "waveOutPrepareHeader failed!"
        ;   Label: LAB_0055dd77
    CALL FUN_0055a560                   ; 0055dd7c
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a560()
    ADD ESP,0x4                         ; 0055dd81
    XOR EAX,EAX                         ; 0055dd84
    POP EBP                             ; 0055dd86
    POP EDI                             ; 0055dd87
    POP EBX                             ; 0055dd88
    RET                                 ; 0055dd89
    PUSH 0x5d5066                       ; 0055dd8a | = "waveOutWrite failed!"
        ;   Label: LAB_0055dd8a
    CALL FUN_0055a560                   ; 0055dd8f
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a560()
    ADD ESP,0x4                         ; 0055dd94
    XOR EAX,EAX                         ; 0055dd97
    POP EBP                             ; 0055dd99
    POP EDI                             ; 0055dd9a
    POP EBX                             ; 0055dd9b
    RET                                 ; 0055dd9c

