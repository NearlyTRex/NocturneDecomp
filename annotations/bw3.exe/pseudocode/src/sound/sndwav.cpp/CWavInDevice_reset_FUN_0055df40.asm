; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavInDevice_reset_FUN_0055df40(CWavInDevice *this_ptr)
;
; Parameters:
; CWavInDevice *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   void* PTR_waveInReset_005b3470 = 001b399a
;   void* PTR_waveInUnprepareHeader_005b3478 = 001b39b6
;   TerminatedCString s_waveInReset_failed_005d50a3
;   undefined4 DAT_02cf5504
;
; Called Functions:
;   sound_sndmain.cpp_FUN_0055a560
;   waveInReset
;   waveInUnprepareHeader
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055df40
        ;   Label: sound_sndwav.cpp_CWavInDevice_reset_FUN_0055df40
    PUSH ESI                            ; 0055df41
    PUSH EDI                            ; 0055df42
    MOV EDX,dword ptr [0x02cf5504]      ; 0055df43 | DAT_02cf5504
    MOV ESI,0x1                         ; 0055df49
    TEST EDX,EDX                        ; 0055df4e
    JNZ 0x0055df7c                      ; 0055df50
        ;   XREF to: 0055df7c (CONDITIONAL_JUMP)  ; LAB_0055df7c
    XOR EBX,EBX                         ; 0055df52
        ;   Label: LAB_0055df52
    MOV EDI,dword ptr [EBX + 0x2cf5558] ; 0055df54
        ;   Label: LAB_0055df54
    TEST EDI,EDI                        ; 0055df5a
    JZ 0x0055df6e                       ; 0055df5c
        ;   XREF to: 0055df6e (CONDITIONAL_JUMP)  ; LAB_0055df6e
    PUSH 0x20                           ; 0055df5e
    PUSH EDI                            ; 0055df60
    MOV EAX,[0x02cf5504]                ; 0055df61 | DAT_02cf5504
    PUSH EAX                            ; 0055df66
    CALL dword ptr CS:[0x5b3478]        ; 0055df67 | PTR_waveInUnprepareHeader_005b3478
    ADD EBX,0x4                         ; 0055df6e
        ;   Label: LAB_0055df6e
    CMP EBX,0x50                        ; 0055df71
    JNZ 0x0055df54                      ; 0055df74
        ;   XREF to: 0055df54 (CONDITIONAL_JUMP)  ; LAB_0055df54
    MOV EAX,ESI                         ; 0055df76
    POP EDI                             ; 0055df78
    POP ESI                             ; 0055df79
    POP EBX                             ; 0055df7a
    RET                                 ; 0055df7b
    PUSH EDX                            ; 0055df7c
        ;   Label: LAB_0055df7c
    CALL dword ptr CS:[0x5b3470]        ; 0055df7d | PTR_waveInReset_005b3470
    TEST EAX,EAX                        ; 0055df84
    JZ 0x0055df52                       ; 0055df86
        ;   XREF to: 0055df52 (CONDITIONAL_JUMP)  ; LAB_0055df52
    PUSH 0x5d50a3                       ; 0055df88 | = "waveInReset failed!"
    CALL sound_sndmain.cpp_FUN_0055a560 ; 0055df8d
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    XOR ESI,ESI                         ; 0055df92
    ADD ESP,0x4                         ; 0055df94
    JMP 0x0055df52                      ; 0055df97
        ;   XREF to: 0055df52 (UNCONDITIONAL_JUMP)  ; LAB_0055df52

