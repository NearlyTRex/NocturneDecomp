; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_createUserSample_FUN_00557260(CSfxSample *sample)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   sample
;
; Referenced Globals:
;   undefined4 DAT_02cebc20
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005533b0
;   sound_sndmain.cpp_CSfxSample_framesToBytes_FUN_00555900
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520
;   sound_sndmain.cpp_freeSampleByName_FUN_005574e0
;   sound_sndmain.cpp_lockSound_FUN_00558e90
;   sound_sndmain.cpp_unlockSound_FUN_00556fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557260
        ;   Label: sound_sndmain.cpp_createUserSample_FUN_00557260
    PUSH ESI                            ; 00557261
    PUSH EDI                            ; 00557262
    PUSH EBP                            ; 00557263
    MOV EBX,dword ptr [0x02cebc20]      ; 00557264 | DAT_02cebc20
    MOV ESI,dword ptr [ESP + 0x14]      ; 0055726a
    CALL sound_sndmain.cpp_lockSound_FUN_00558e90 ; 0055726e
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00558e90()
    PUSH 0x1                            ; 00557273
    PUSH ESI                            ; 00557275
    CALL sound_sndmain.cpp_freeSampleByName_FUN_005574e0 ; 00557276
        ;   XREF to: 005574e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_freeSampleByName_FUN_005574e0(char * sample_name, int kill_active_slots)
    ADD ESP,0x8                         ; 0055727b
    XOR ECX,ECX                         ; 0055727e
    XOR EBP,EBP                         ; 00557280
    MOV EBX,dword ptr [0x02cebc20]      ; 00557282 | DAT_02cebc20
        ;   Label: LAB_00557282
    INC EBX                             ; 00557288
    CMP EBX,0x40                        ; 00557289
    JL 0x00557290                       ; 0055728c
        ;   XREF to: 00557290 (CONDITIONAL_JUMP)  ; LAB_00557290
    MOV EBX,EBP                         ; 0055728e
    IMUL EAX,EBX,0x1b0                  ; 00557290
        ;   Label: LAB_00557290
    MOV EDX,dword ptr [EAX + 0x2cebd74] ; 00557296
    CMP EBP,EDX                         ; 0055729c
    JZ 0x005572be                       ; 0055729e
        ;   XREF to: 005572be (CONDITIONAL_JUMP)  ; LAB_005572be
    INC ECX                             ; 005572a0
        ;   Label: LAB_005572a0
    MOV dword ptr [0x02cebc20],EBX      ; 005572a1 | DAT_02cebc20
    CMP ECX,0x40                        ; 005572a7
    JL 0x00557282                       ; 005572aa
        ;   XREF to: 00557282 (CONDITIONAL_JUMP)  ; LAB_00557282
    CALL sound_sndmain.cpp_unlockSound_FUN_00556fd0 ; 005572ac
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00556fd0()
        ;   Label: LAB_005572ac
    XOR EAX,EAX                         ; 005572b1
    MOV EBX,dword ptr [0x02cebc20]      ; 005572b3 | DAT_02cebc20
    POP EBP                             ; 005572b9
    POP EDI                             ; 005572ba
    POP ESI                             ; 005572bb
    POP EBX                             ; 005572bc
    RET                                 ; 005572bd
    MOV EDI,dword ptr [EAX + 0x2cebd78] ; 005572be
        ;   Label: LAB_005572be
    CMP EDX,EDI                         ; 005572c4
    JNZ 0x005572a0                      ; 005572c6
        ;   XREF to: 005572a0 (CONDITIONAL_JUMP)  ; LAB_005572a0
    MOV EDX,dword ptr [EAX + 0x2cebd80] ; 005572c8
    CMP EDI,EDX                         ; 005572ce
    JNZ 0x005572a0                      ; 005572d0
        ;   XREF to: 005572a0 (CONDITIONAL_JUMP)  ; LAB_005572a0
    CMP EDX,dword ptr [EAX + 0x2cebdd0] ; 005572d2
    JNZ 0x005572a0                      ; 005572d8
        ;   XREF to: 005572a0 (CONDITIONAL_JUMP)  ; LAB_005572a0
    MOV EBP,0x2cebc24                   ; 005572da
    MOV dword ptr [0x02cebc20],EBX      ; 005572df | DAT_02cebc20
    ADD EBP,EAX                         ; 005572e5
    JZ 0x005572ac                       ; 005572e7
        ;   XREF to: 005572ac (CONDITIONAL_JUMP)  ; LAB_005572ac
    MOV ECX,0x54                        ; 005572e9
    MOV EDI,EBP                         ; 005572ee
    MOVSD.REP ES:EDI,ESI                ; 005572f0
    MOV dword ptr [EBP + 0x150],0x0     ; 005572f2
    MOV dword ptr [EBP + 0x154],0x0     ; 005572fc
    MOV dword ptr [EBP + 0x158],0x0     ; 00557306
    MOV dword ptr [EBP + 0x15c],0x1     ; 00557310
    MOV dword ptr [EBP + 0x160],0xffffffff ; 0055731a
    MOV EAX,dword ptr [EBP + 0x110]     ; 00557324
    MOV dword ptr [EBP + 0x164],EAX     ; 0055732a
    PUSH EAX                            ; 00557330
    MOV dword ptr [EBP + 0x16c],EAX     ; 00557331
    PUSH EBP                            ; 00557337
    MOV dword ptr [EBP + 0x170],EAX     ; 00557338
    CALL sound_sndmain.cpp_CSfxSample_framesToBytes_FUN_00555900 ; 0055733e
        ;   XREF to: 00555900 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_framesToBytes_FUN_00555900(CSfxSample * this_ptr, int frame_count)
    ADD ESP,0x8                         ; 00557343
    PUSH EBP                            ; 00557346
    MOV dword ptr [EBP + 0x168],EAX     ; 00557347
    CALL sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005533b0 ; 0055734d
        ;   XREF to: 005533b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005533b0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00557352
    TEST EAX,EAX                        ; 00557355
    JZ 0x0055736e                       ; 00557357
        ;   XREF to: 0055736e (CONDITIONAL_JUMP)  ; LAB_0055736e
    CALL sound_sndmain.cpp_unlockSound_FUN_00556fd0 ; 00557359
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00556fd0()
    MOV EAX,0x1                         ; 0055735e
    MOV EBX,dword ptr [0x02cebc20]      ; 00557363 | DAT_02cebc20
    POP EBP                             ; 00557369
    POP EDI                             ; 0055736a
    POP ESI                             ; 0055736b
    POP EBX                             ; 0055736c
    RET                                 ; 0055736d
    PUSH EBP                            ; 0055736e
        ;   Label: LAB_0055736e
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520 ; 0055736f
        ;   XREF to: 00553520 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00557374
    XOR EAX,EAX                         ; 00557377
    MOV EBX,dword ptr [0x02cebc20]      ; 00557379 | DAT_02cebc20
    POP EBP                             ; 0055737f
    POP EDI                             ; 00557380
    POP ESI                             ; 00557381
    POP EBX                             ; 00557382
    RET                                 ; 00557383

