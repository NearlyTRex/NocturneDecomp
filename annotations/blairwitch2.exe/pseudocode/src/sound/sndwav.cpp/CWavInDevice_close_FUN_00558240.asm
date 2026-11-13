; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavInDevice_close_FUN_00558240(CWavInDevice *this_ptr)
;
; Parameters:
; CWavInDevice *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   sound_sndwav.cpp_getWavInDevice_FUN_00558ad0 at 00558ad8
;
; Referenced Globals:
;   void* PTR_waveInClose_005c8454 = 001c893c
;   void* PTR_GlobalFree_005c85cc = 001c8f9c
;   TerminatedCString s_waveInClose_failed_005ea628
;   undefined4 DAT_0264b108
;
; Called Functions:
;   GlobalFree
;   sound_sndmain.cpp_FUN_005549c0
;   waveInClose
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558240
        ;   Label: sound_sndwav.cpp_CWavInDevice_close_FUN_00558240
    PUSH ESI                            ; 00558241
    PUSH EDI                            ; 00558242
    PUSH EBP                            ; 00558243
    MOV EBX,dword ptr [ESP + 0x14]      ; 00558244
    PUSH EBX                            ; 00558248
    MOV EAX,dword ptr [EBX]             ; 00558249
    MOV ESI,0x1                         ; 0055824b
    CALL dword ptr [EAX + 0x8]          ; 00558250
    ADD ESP,0x4                         ; 00558253
    TEST EAX,EAX                        ; 00558256
    JZ 0x005582b3                       ; 00558258
        ;   XREF to: 005582b3 (CONDITIONAL_JUMP)  ; LAB_005582b3
    XOR EBX,EBX                         ; 0055825a
        ;   Label: LAB_0055825a
    XOR EDI,EDI                         ; 0055825c
    MOV EDX,dword ptr [EBX + 0x264b1ac] ; 0055825e
        ;   Label: LAB_0055825e
    CMP EDI,EDX                         ; 00558264
    JZ 0x00558276                       ; 00558266
        ;   XREF to: 00558276 (CONDITIONAL_JUMP)  ; LAB_00558276
    PUSH EDX                            ; 00558268
    CALL dword ptr CS:[0x5c85cc]        ; 00558269 | PTR_GlobalFree_005c85cc
    MOV dword ptr [EBX + 0x264b1ac],EDI ; 00558270
    MOV EBP,dword ptr [EBX + 0x264b10c] ; 00558276
        ;   Label: LAB_00558276
    MOV dword ptr [EBX + 0x264b1fc],EDI ; 0055827c
    CMP EDI,EBP                         ; 00558282
    JZ 0x00558294                       ; 00558284
        ;   XREF to: 00558294 (CONDITIONAL_JUMP)  ; LAB_00558294
    PUSH EBP                            ; 00558286
    CALL dword ptr CS:[0x5c85cc]        ; 00558287 | PTR_GlobalFree_005c85cc
    MOV dword ptr [EBX + 0x264b10c],EDI ; 0055828e
    ADD EBX,0x4                         ; 00558294
        ;   Label: LAB_00558294
    MOV dword ptr [EBX + 0x264b158],EDI ; 00558297
    CMP EBX,0x50                        ; 0055829d
    JNZ 0x0055825e                      ; 005582a0
        ;   XREF to: 0055825e (CONDITIONAL_JUMP)  ; LAB_0055825e
    MOV EDX,dword ptr [0x0264b108]      ; 005582a2 | DAT_0264b108
    TEST EDX,EDX                        ; 005582a8
    JNZ 0x005582b7                      ; 005582aa
        ;   XREF to: 005582b7 (CONDITIONAL_JUMP)  ; LAB_005582b7
    MOV EAX,ESI                         ; 005582ac
    POP EBP                             ; 005582ae
    POP EDI                             ; 005582af
    POP ESI                             ; 005582b0
    POP EBX                             ; 005582b1
    RET                                 ; 005582b2
    XOR ESI,ESI                         ; 005582b3
        ;   Label: LAB_005582b3
    JMP 0x0055825a                      ; 005582b5
        ;   XREF to: 0055825a (UNCONDITIONAL_JUMP)  ; LAB_0055825a
    PUSH EDX                            ; 005582b7
        ;   Label: LAB_005582b7
    CALL dword ptr CS:[0x5c8454]        ; 005582b8 | PTR_waveInClose_005c8454
    TEST EAX,EAX                        ; 005582bf
    JZ 0x005582d2                       ; 005582c1
        ;   XREF to: 005582d2 (CONDITIONAL_JUMP)  ; LAB_005582d2
    PUSH 0x5ea628                       ; 005582c3 | = "waveInClose failed."
    CALL sound_sndmain.cpp_FUN_005549c0 ; 005582c8
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    XOR ESI,ESI                         ; 005582cd
    ADD ESP,0x4                         ; 005582cf
    XOR EBX,EBX                         ; 005582d2
        ;   Label: LAB_005582d2
    MOV dword ptr [0x0264b108],EBX      ; 005582d4 | DAT_0264b108
    MOV EAX,ESI                         ; 005582da
    POP EBP                             ; 005582dc
    POP EDI                             ; 005582dd
    POP ESI                             ; 005582de
    POP EBX                             ; 005582df
    RET                                 ; 005582e0

