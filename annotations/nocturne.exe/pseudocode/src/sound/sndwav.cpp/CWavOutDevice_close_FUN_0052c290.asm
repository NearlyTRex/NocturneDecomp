; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool __cdecl sound_sndwav_cpp_CWavOutDevice_close_FUN_0052c290(int *param_1)
;
;
; XREF[1]:
;   sound_sndwav.cpp_getWavOutDevice_FUN_0052c760 at 0052c768
;
; Referenced Globals:
;   void* PTR_waveOutClose_005753f0 = 00175858
;   void* PTR_GlobalFree_00575548 = 00175e34
;   TerminatedCString s_waveOutClose_failed_0059490e
;   undefined4 DAT_02dc93a4
;
; Called Functions:
;   GlobalFree
;   sound_sndmain.cpp_FUN_00529980
;   waveOutClose
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052c290
        ;   Label: sound_sndwav.cpp_CWavOutDevice_close_FUN_0052c290
    PUSH ESI                            ; 0052c291
    PUSH EDI                            ; 0052c292
    PUSH EBP                            ; 0052c293
    MOV EBX,dword ptr [ESP + 0x14]      ; 0052c294
    PUSH EBX                            ; 0052c298
    MOV EAX,dword ptr [EBX]             ; 0052c299
    MOV ESI,0x1                         ; 0052c29b
    CALL dword ptr [EAX + 0x8]          ; 0052c2a0
    ADD ESP,0x4                         ; 0052c2a3
    TEST EAX,EAX                        ; 0052c2a6
    JZ 0x0052c303                       ; 0052c2a8
        ;   XREF to: 0052c303 (CONDITIONAL_JUMP)  ; LAB_0052c303
    XOR EBX,EBX                         ; 0052c2aa
        ;   Label: LAB_0052c2aa
    XOR EDI,EDI                         ; 0052c2ac
    MOV EDX,dword ptr [EBX + 0x2dc93e8] ; 0052c2ae
        ;   Label: LAB_0052c2ae
    CMP EDI,EDX                         ; 0052c2b4
    JZ 0x0052c2c6                       ; 0052c2b6
        ;   XREF to: 0052c2c6 (CONDITIONAL_JUMP)  ; LAB_0052c2c6
    PUSH EDX                            ; 0052c2b8
    CALL dword ptr CS:[0x575548]        ; 0052c2b9 | PTR_GlobalFree_00575548
    MOV dword ptr [EBX + 0x2dc93e8],EDI ; 0052c2c0
    MOV EBP,dword ptr [EBX + 0x2dc9408] ; 0052c2c6
        ;   Label: LAB_0052c2c6
    MOV dword ptr [EBX + 0x2dc93c8],EDI ; 0052c2cc
    CMP EDI,EBP                         ; 0052c2d2
    JZ 0x0052c2e4                       ; 0052c2d4
        ;   XREF to: 0052c2e4 (CONDITIONAL_JUMP)  ; LAB_0052c2e4
    PUSH EBP                            ; 0052c2d6
    CALL dword ptr CS:[0x575548]        ; 0052c2d7 | PTR_GlobalFree_00575548
    MOV dword ptr [EBX + 0x2dc9408],EDI ; 0052c2de
    ADD EBX,0x4                         ; 0052c2e4
        ;   Label: LAB_0052c2e4
    MOV dword ptr [EBX + 0x2dc93a4],EDI ; 0052c2e7
    CMP EBX,0x20                        ; 0052c2ed
    JNZ 0x0052c2ae                      ; 0052c2f0
        ;   XREF to: 0052c2ae (CONDITIONAL_JUMP)  ; LAB_0052c2ae
    MOV EDX,dword ptr [0x02dc93a4]      ; 0052c2f2 | DAT_02dc93a4
    TEST EDX,EDX                        ; 0052c2f8
    JNZ 0x0052c307                      ; 0052c2fa
        ;   XREF to: 0052c307 (CONDITIONAL_JUMP)  ; LAB_0052c307
    MOV EAX,ESI                         ; 0052c2fc
    POP EBP                             ; 0052c2fe
    POP EDI                             ; 0052c2ff
    POP ESI                             ; 0052c300
    POP EBX                             ; 0052c301
    RET                                 ; 0052c302
    XOR ESI,ESI                         ; 0052c303
        ;   Label: LAB_0052c303
    JMP 0x0052c2aa                      ; 0052c305
        ;   XREF to: 0052c2aa (UNCONDITIONAL_JUMP)  ; LAB_0052c2aa
    PUSH EDX                            ; 0052c307
        ;   Label: LAB_0052c307
    CALL dword ptr CS:[0x5753f0]        ; 0052c308 | PTR_waveOutClose_005753f0
    TEST EAX,EAX                        ; 0052c30f
    JZ 0x0052c322                       ; 0052c311
        ;   XREF to: 0052c322 (CONDITIONAL_JUMP)  ; LAB_0052c322
    PUSH 0x59490e                       ; 0052c313 | = "waveOutClose failed."
    CALL sound_sndmain.cpp_FUN_00529980 ; 0052c318
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00529980()
    XOR ESI,ESI                         ; 0052c31d
    ADD ESP,0x4                         ; 0052c31f
    XOR EBX,EBX                         ; 0052c322
        ;   Label: LAB_0052c322
    MOV dword ptr [0x02dc93a4],EBX      ; 0052c324 | DAT_02dc93a4
    MOV EAX,ESI                         ; 0052c32a
    POP EBP                             ; 0052c32c
    POP EDI                             ; 0052c32d
    POP ESI                             ; 0052c32e
    POP EBX                             ; 0052c32f
    RET                                 ; 0052c330

