; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_005a4450(int requested_bytes)
;
; Parameters:
; int              Stack[0x4]:4   requested_bytes
;
; XREF[3]:
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_005a6170 at 005a6277
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60 at 005a7f82
;   sound_sndmain.cpp_setMemoryBudget_FUN_005aa340 at 005aa354
;
; Referenced Globals:
;   int g_MaximumSoundMemoryBudget = 0x400000
;   int g_LastSampleAccessIndex
;   CSfxSample[64] g_SfxSamples
;   undefined4 DAT_03f6294c
;   undefined4 DAT_03f6297c
;   undefined4 DAT_03f62980
;   undefined4 DAT_03f6298c
;   undefined4 DAT_03f629ac
;   undefined4 DAT_03f62acc
;   undefined4 DAT_03f62b0c
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
;   sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4450
        ;   Label: sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_005a4450
    PUSH ESI                            ; 005a4451
    PUSH EDI                            ; 005a4452
    PUSH EBP                            ; 005a4453
    MOV EBP,dword ptr [ESP + 0x14]      ; 005a4454
    XOR EBX,EBX                         ; 005a4458
    XOR ESI,ESI                         ; 005a445a
    CMP dword ptr [EBX + 0x3f6294c],0x0 ; 005a445c | DAT_03f6294c | DAT_03f62acc
        ;   Label: LAB_005a445c
    JNZ 0x005a44b6                      ; 005a4463
        ;   XREF to: 005a44b6 (CONDITIONAL_JUMP)  ; LAB_005a44b6
    ADD EBX,0x180                       ; 005a4465
        ;   Label: LAB_005a4465
    CMP EBX,0x6000                      ; 005a446b
    JNZ 0x005a445c                      ; 005a4471
        ;   XREF to: 005a445c (CONDITIONAL_JUMP)  ; LAB_005a445c
    MOV EBX,dword ptr [0x00681b44]      ; 005a4473 | g_MaximumSoundMemoryBudget
        ;   Label: LAB_005a4473
    LEA EAX,[ESI + EBP*0x1]             ; 005a4479
    CMP EAX,EBX                         ; 005a447c
    JLE 0x005a451c                      ; 005a447e
        ;   XREF to: 005a451c (CONDITIONAL_JUMP)  ; LAB_005a451c
    MOV EDX,dword ptr [0x03f62828]      ; 005a4484 | g_LastSampleAccessIndex
    XOR EBX,EBX                         ; 005a448a
    XOR EDI,EDI                         ; 005a448c
    INC EDX                             ; 005a448e
        ;   Label: LAB_005a448e
    CMP EDX,0x40                        ; 005a448f
    JL 0x005a4496                       ; 005a4492
        ;   XREF to: 005a4496 (CONDITIONAL_JUMP)  ; LAB_005a4496
    MOV EDX,EDI                         ; 005a4494
    IMUL EAX,EDX,0x180                  ; 005a4496
        ;   Label: LAB_005a4496
    CMP EDI,dword ptr [EAX + 0x3f6294c] ; 005a449c | DAT_03f6294c | DAT_03f62acc
    JNZ 0x005a44d1                      ; 005a44a2
        ;   XREF to: 005a44d1 (CONDITIONAL_JUMP)  ; LAB_005a44d1
    INC EBX                             ; 005a44a4
        ;   Label: LAB_005a44a4
    CMP EBX,0x40                        ; 005a44a5
    JL 0x005a448e                       ; 005a44a8
        ;   XREF to: 005a448e (CONDITIONAL_JUMP)  ; LAB_005a448e
    CMP EBX,0x40                        ; 005a44aa
    JL 0x005a4473                       ; 005a44ad
        ;   XREF to: 005a4473 (CONDITIONAL_JUMP)  ; LAB_005a4473
    XOR EAX,EAX                         ; 005a44af
    POP EBP                             ; 005a44b1
    POP EDI                             ; 005a44b2
    POP ESI                             ; 005a44b3
    POP EBX                             ; 005a44b4
    RET                                 ; 005a44b5
    MOV EDI,0x3f6282c                   ; 005a44b6 | g_SfxSamples
        ;   Label: LAB_005a44b6
    ADD EDI,EBX                         ; 005a44bb
    PUSH EDI                            ; 005a44bd | DAT_03f629ac
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550 ; 005a44be
        ;   XREF to: 005a8550 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(CSfxSample * this_ptr)
    IMUL EAX,dword ptr [EDI + 0x160]    ; 005a44c3 | DAT_03f62b0c
    ADD ESP,0x4                         ; 005a44ca
    ADD ESI,EAX                         ; 005a44cd
    JMP 0x005a4465                      ; 005a44cf
        ;   XREF to: 005a4465 (UNCONDITIONAL_JUMP)  ; LAB_005a4465
    CMP dword ptr [EAX + 0x3f6298c],0x1 ; 005a44d1 | DAT_03f6298c
        ;   Label: LAB_005a44d1
    JL 0x005a44a4                       ; 005a44d8
        ;   XREF to: 005a44a4 (CONDITIONAL_JUMP)  ; LAB_005a44a4
    CMP EDI,dword ptr [EAX + 0x3f62980] ; 005a44da | DAT_03f62980
    JNZ 0x005a44a4                      ; 005a44e0
        ;   XREF to: 005a44a4 (CONDITIONAL_JUMP)  ; LAB_005a44a4
    CMP EDI,dword ptr [EAX + 0x3f6297c] ; 005a44e2 | DAT_03f6297c
    JNZ 0x005a44a4                      ; 005a44e8
        ;   XREF to: 005a44a4 (CONDITIONAL_JUMP)  ; LAB_005a44a4
    MOV EDI,0x3f6282c                   ; 005a44ea | g_SfxSamples
    ADD EDI,EAX                         ; 005a44ef
    PUSH EDI                            ; 005a44f1 | g_SfxSamples
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550 ; 005a44f2
        ;   XREF to: 005a8550 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(CSfxSample * this_ptr)
    IMUL EAX,dword ptr [EDI + 0x160]    ; 005a44f7 | DAT_03f6298c
    ADD ESP,0x4                         ; 005a44fe
    PUSH EDI                            ; 005a4501 | g_SfxSamples
    SUB ESI,EAX                         ; 005a4502
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0 ; 005a4504
        ;   XREF to: 005a62c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005a4509
    CMP EBX,0x40                        ; 005a450c
    JL 0x005a4473                       ; 005a450f
        ;   XREF to: 005a4473 (CONDITIONAL_JUMP)  ; LAB_005a4473
    XOR EAX,EAX                         ; 005a4515
    POP EBP                             ; 005a4517
    POP EDI                             ; 005a4518
    POP ESI                             ; 005a4519
    POP EBX                             ; 005a451a
    RET                                 ; 005a451b
    MOV EAX,0x1                         ; 005a451c
        ;   Label: LAB_005a451c
    POP EBP                             ; 005a4521
    POP EDI                             ; 005a4522
    POP ESI                             ; 005a4523
    POP EBX                             ; 005a4524
    RET                                 ; 005a4525

