; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavOutDevice_close_FUN_0055d870(CWavOutDevice *this_ptr)
;
; Parameters:
; CWavOutDevice *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   sound_sndwav.cpp_getWavOutDevice_FUN_0055e540 at 0055e548
;
; Referenced Globals:
;   void* PTR_waveOutClose_005b347c = 001b39ce
;   void* PTR_GlobalFree_005b35e0 = 001b3fde
;   TerminatedCString s_waveOutClose_failed_005d4fb1
;   undefined4 DAT_02cf546c
;
; Called Functions:
;   GlobalFree
;   sound_sndmain.cpp_FUN_0055a560
;   waveOutClose
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055d870
        ;   Label: sound_sndwav.cpp_CWavOutDevice_close_FUN_0055d870
    PUSH ESI                            ; 0055d871
    PUSH EDI                            ; 0055d872
    PUSH EBP                            ; 0055d873
    MOV EBX,dword ptr [ESP + 0x14]      ; 0055d874
    PUSH EBX                            ; 0055d878
    MOV EAX,dword ptr [EBX]             ; 0055d879
    MOV ESI,0x1                         ; 0055d87b
    CALL dword ptr [EAX + 0x8]          ; 0055d880
    ADD ESP,0x4                         ; 0055d883
    TEST EAX,EAX                        ; 0055d886
    JZ 0x0055d8e3                       ; 0055d888
        ;   XREF to: 0055d8e3 (CONDITIONAL_JUMP)  ; LAB_0055d8e3
    XOR EBX,EBX                         ; 0055d88a
        ;   Label: LAB_0055d88a
    XOR EDI,EDI                         ; 0055d88c
    MOV EDX,dword ptr [EBX + 0x2cf54b0] ; 0055d88e
        ;   Label: LAB_0055d88e
    CMP EDI,EDX                         ; 0055d894
    JZ 0x0055d8a6                       ; 0055d896
        ;   XREF to: 0055d8a6 (CONDITIONAL_JUMP)  ; LAB_0055d8a6
    PUSH EDX                            ; 0055d898
    CALL dword ptr CS:[0x5b35e0]        ; 0055d899 | PTR_GlobalFree_005b35e0
    MOV dword ptr [EBX + 0x2cf54b0],EDI ; 0055d8a0
    MOV EBP,dword ptr [EBX + 0x2cf5470] ; 0055d8a6
        ;   Label: LAB_0055d8a6
    MOV dword ptr [EBX + 0x2cf54d0],EDI ; 0055d8ac
    CMP EDI,EBP                         ; 0055d8b2
    JZ 0x0055d8c4                       ; 0055d8b4
        ;   XREF to: 0055d8c4 (CONDITIONAL_JUMP)  ; LAB_0055d8c4
    PUSH EBP                            ; 0055d8b6
    CALL dword ptr CS:[0x5b35e0]        ; 0055d8b7 | PTR_GlobalFree_005b35e0
    MOV dword ptr [EBX + 0x2cf5470],EDI ; 0055d8be
    ADD EBX,0x4                         ; 0055d8c4
        ;   Label: LAB_0055d8c4
    MOV dword ptr [EBX + 0x2cf548c],EDI ; 0055d8c7
    CMP EBX,0x20                        ; 0055d8cd
    JNZ 0x0055d88e                      ; 0055d8d0
        ;   XREF to: 0055d88e (CONDITIONAL_JUMP)  ; LAB_0055d88e
    MOV EDX,dword ptr [0x02cf546c]      ; 0055d8d2 | DAT_02cf546c
    TEST EDX,EDX                        ; 0055d8d8
    JNZ 0x0055d8e7                      ; 0055d8da
        ;   XREF to: 0055d8e7 (CONDITIONAL_JUMP)  ; LAB_0055d8e7
    MOV EAX,ESI                         ; 0055d8dc
    POP EBP                             ; 0055d8de
    POP EDI                             ; 0055d8df
    POP ESI                             ; 0055d8e0
    POP EBX                             ; 0055d8e1
    RET                                 ; 0055d8e2
    XOR ESI,ESI                         ; 0055d8e3
        ;   Label: LAB_0055d8e3
    JMP 0x0055d88a                      ; 0055d8e5
        ;   XREF to: 0055d88a (UNCONDITIONAL_JUMP)  ; LAB_0055d88a
    PUSH EDX                            ; 0055d8e7
        ;   Label: LAB_0055d8e7
    CALL dword ptr CS:[0x5b347c]        ; 0055d8e8 | PTR_waveOutClose_005b347c
    TEST EAX,EAX                        ; 0055d8ef
    JZ 0x0055d902                       ; 0055d8f1
        ;   XREF to: 0055d902 (CONDITIONAL_JUMP)  ; LAB_0055d902
    PUSH 0x5d4fb1                       ; 0055d8f3 | = "waveOutClose failed."
    CALL sound_sndmain.cpp_FUN_0055a560 ; 0055d8f8
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    XOR ESI,ESI                         ; 0055d8fd
    ADD ESP,0x4                         ; 0055d8ff
    XOR EBX,EBX                         ; 0055d902
        ;   Label: LAB_0055d902
    MOV dword ptr [0x02cf546c],EBX      ; 0055d904 | DAT_02cf546c
    MOV EAX,ESI                         ; 0055d90a
    POP EBP                             ; 0055d90c
    POP EDI                             ; 0055d90d
    POP ESI                             ; 0055d90e
    POP EBX                             ; 0055d90f
    RET                                 ; 0055d910

