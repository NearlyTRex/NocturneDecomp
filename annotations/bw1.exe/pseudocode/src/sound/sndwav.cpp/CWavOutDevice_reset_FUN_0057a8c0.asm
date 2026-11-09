; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavOutDevice_reset_FUN_0057a8c0(CWavOutDevice *this_ptr)
;
; Parameters:
; CWavOutDevice *  Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   void* PTR_waveOutReset_005d048c = 001d0a1a
;   void* PTR_waveOutUnprepareHeader_005d0490 = 001d0a2a
;   undefined4 s_waveOutReset_failed_005f5776+1
;   undefined4 DAT_02c82840
;
; Called Functions:
;   sound_sndmain.cpp_FUN_005773f0
;   sound_sndmain.cpp_killSoundThread_FUN_00575ca0
;   waveOutReset
;   waveOutUnprepareHeader
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057a8c0
        ;   Label: sound_sndwav.cpp_CWavOutDevice_reset_FUN_0057a8c0
    PUSH ESI                            ; 0057a8c1
    PUSH EDI                            ; 0057a8c2
    MOV EDX,dword ptr [0x02c82840]      ; 0057a8c3 | DAT_02c82840
    MOV ESI,0x1                         ; 0057a8c9
    TEST EDX,EDX                        ; 0057a8ce
    JNZ 0x0057a905                      ; 0057a8d0
        ;   XREF to: 0057a905 (CONDITIONAL_JUMP)  ; LAB_0057a905
    XOR EBX,EBX                         ; 0057a8d2
        ;   Label: LAB_0057a8d2
    MOV EDI,dword ptr [EBX + 0x2c82864] ; 0057a8d4
        ;   Label: LAB_0057a8d4
    TEST EDI,EDI                        ; 0057a8da
    JZ 0x0057a8ee                       ; 0057a8dc
        ;   XREF to: 0057a8ee (CONDITIONAL_JUMP)  ; LAB_0057a8ee
    PUSH 0x20                           ; 0057a8de
    PUSH EDI                            ; 0057a8e0
    MOV EAX,[0x02c82840]                ; 0057a8e1 | DAT_02c82840
    PUSH EAX                            ; 0057a8e6
    CALL dword ptr CS:[0x5d0490]        ; 0057a8e7 | PTR_waveOutUnprepareHeader_005d0490
    ADD EBX,0x4                         ; 0057a8ee
        ;   Label: LAB_0057a8ee
    CMP EBX,0x20                        ; 0057a8f1
    JNZ 0x0057a8d4                      ; 0057a8f4
        ;   XREF to: 0057a8d4 (CONDITIONAL_JUMP)  ; LAB_0057a8d4
    CALL sound_sndmain.cpp_killSoundThread_FUN_00575ca0 ; 0057a8f6
        ;   XREF to: 00575ca0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSoundThread_FUN_00575ca0()
    TEST EAX,EAX                        ; 0057a8fb
    JZ 0x0057a922                       ; 0057a8fd
        ;   XREF to: 0057a922 (CONDITIONAL_JUMP)  ; LAB_0057a922
    MOV EAX,ESI                         ; 0057a8ff
    POP EDI                             ; 0057a901
    POP ESI                             ; 0057a902
    POP EBX                             ; 0057a903
    RET                                 ; 0057a904
    PUSH EDX                            ; 0057a905
        ;   Label: LAB_0057a905
    CALL dword ptr CS:[0x5d048c]        ; 0057a906 | PTR_waveOutReset_005d048c
    TEST EAX,EAX                        ; 0057a90d
    JZ 0x0057a8d2                       ; 0057a90f
        ;   XREF to: 0057a8d2 (CONDITIONAL_JUMP)  ; LAB_0057a8d2
    PUSH 0x5f5777                       ; 0057a911 | s_waveOutReset_failed_005f5776+1
    CALL sound_sndmain.cpp_FUN_005773f0 ; 0057a916
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    XOR ESI,ESI                         ; 0057a91b
    ADD ESP,0x4                         ; 0057a91d
    JMP 0x0057a8d2                      ; 0057a920
        ;   XREF to: 0057a8d2 (UNCONDITIONAL_JUMP)  ; LAB_0057a8d2
    XOR ESI,ESI                         ; 0057a922
        ;   Label: LAB_0057a922
    MOV EAX,ESI                         ; 0057a924
    POP EDI                             ; 0057a926
    POP ESI                             ; 0057a927
    POP EBX                             ; 0057a928
    RET                                 ; 0057a929

