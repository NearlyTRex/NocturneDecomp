; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSlot * __cdecl sound_sndmain_cpp_FUN_0054d3a0(uint sfx_handle,int check_hardware_playback)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; int              Stack[0x8]:4   check_hardware_playback
;
; XREF[11]:
;   sound_sndmain.cpp_FUN_00550b70 at 00550b81
;   sound_sndmain.cpp_FUN_00550bf0 at 00550bf7
;   sound_sndmain.cpp_FUN_00550d30 at 00550d37
;   sound_sndmain.cpp_FUN_00550da0 at 00550da7
;   sound_sndmain.cpp_FUN_00550ea0 at 00550ea7
;   sound_sndmain.cpp_FUN_00550f20 at 00550f27
;   sound_sndmain.cpp_FUN_00550f50 at 00550f57
;   sound_sndmain.cpp_FUN_00550fb0 at 00550fea
;   sound_sndmain.cpp_FUN_00551080 at 0055108a
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00550c30 at 00550c42
;   ... and 1 more
;
; Referenced Globals:
;   undefined4 DAT_0263cf7c
;   undefined4 DAT_0263cf80
;   undefined4 DAT_0263cf84
;   undefined4 DAT_02648e80
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700
;   sound_sndmain.cpp_FUN_00551440
;   sound_sndmain.cpp_lockSound_FUN_005532f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054d3a0
        ;   Label: sound_sndmain.cpp_FUN_0054d3a0
    PUSH ESI                            ; 0054d3a1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0054d3a2
    MOV EBX,ESI                         ; 0054d3a6
    SHR ESI,0x6                         ; 0054d3a8
    AND EBX,0x3f                        ; 0054d3ab
    CMP ESI,0x1                         ; 0054d3ae
    JL 0x0054d3ed                       ; 0054d3b1
        ;   XREF to: 0054d3ed (CONDITIONAL_JUMP)  ; LAB_0054d3ed
    CMP ESI,0xffffff                    ; 0054d3b3
    JGE 0x0054d3ed                      ; 0054d3b9
        ;   XREF to: 0054d3ed (CONDITIONAL_JUMP)  ; LAB_0054d3ed
    TEST EBX,EBX                        ; 0054d3bb
    JL 0x0054d3ed                       ; 0054d3bd
        ;   XREF to: 0054d3ed (CONDITIONAL_JUMP)  ; LAB_0054d3ed
    CMP EBX,0x40                        ; 0054d3bf
    JGE 0x0054d3ed                      ; 0054d3c2
        ;   XREF to: 0054d3ed (CONDITIONAL_JUMP)  ; LAB_0054d3ed
    LEA EAX,[EBX*0x8 + 0x0]             ; 0054d3c4
    ADD EAX,EBX                         ; 0054d3cb
    SHL EAX,0x3                         ; 0054d3cd
    SUB EAX,EBX                         ; 0054d3d0
    MOV EBX,0x263cf1c                   ; 0054d3d2
    SHL EAX,0x2                         ; 0054d3d7
    ADD EBX,EAX                         ; 0054d3da
    CMP ESI,dword ptr [EBX + 0x64]      ; 0054d3dc | DAT_0263cf80
    JNZ 0x0054d3ed                      ; 0054d3df
        ;   XREF to: 0054d3ed (CONDITIONAL_JUMP)  ; LAB_0054d3ed
    CMP dword ptr [ESP + 0x10],0x0      ; 0054d3e1
    JNZ 0x0054d3f2                      ; 0054d3e6
        ;   XREF to: 0054d3f2 (CONDITIONAL_JUMP)  ; LAB_0054d3f2
    MOV EAX,EBX                         ; 0054d3e8
        ;   Label: LAB_0054d3e8
    POP ESI                             ; 0054d3ea
    POP EBX                             ; 0054d3eb
    RET                                 ; 0054d3ec
    XOR EAX,EAX                         ; 0054d3ed
        ;   Label: LAB_0054d3ed
    POP ESI                             ; 0054d3ef
    POP EBX                             ; 0054d3f0
    RET                                 ; 0054d3f1
    CALL sound_sndmain.cpp_lockSound_FUN_005532f0 ; 0054d3f2
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005532f0()
        ;   Label: LAB_0054d3f2
    CMP ESI,dword ptr [EBX + 0x64]      ; 0054d3f7 | DAT_0263cf80
    JNZ 0x0054d420                      ; 0054d3fa
        ;   XREF to: 0054d420 (CONDITIONAL_JUMP)  ; LAB_0054d420
    CMP dword ptr [EBX + 0x68],0x0      ; 0054d3fc | DAT_0263cf84
    JZ 0x0054d420                       ; 0054d400
        ;   XREF to: 0054d420 (CONDITIONAL_JUMP)  ; LAB_0054d420
    CMP dword ptr [EBX + 0x60],0x0      ; 0054d402 | DAT_0263cf7c
    JZ 0x0054d3e8                       ; 0054d406
        ;   XREF to: 0054d3e8 (CONDITIONAL_JUMP)  ; LAB_0054d3e8
    MOV EDX,dword ptr [0x02648e80]      ; 0054d408 | DAT_02648e80
    TEST EDX,EDX                        ; 0054d40e
    JZ 0x0054d42a                       ; 0054d410
        ;   XREF to: 0054d42a (CONDITIONAL_JUMP)  ; LAB_0054d42a
    TEST byte ptr [EBX + 0x11b],0x40    ; 0054d412
    JZ 0x0054d43d                       ; 0054d419
        ;   XREF to: 0054d43d (CONDITIONAL_JUMP)  ; LAB_0054d43d
    MOV EAX,EBX                         ; 0054d41b
    POP ESI                             ; 0054d41d
    POP EBX                             ; 0054d41e
    RET                                 ; 0054d41f
    CALL sound_sndmain.cpp_FUN_00551440 ; 0054d420
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551440()
        ;   Label: LAB_0054d420
    XOR EAX,EAX                         ; 0054d425
    POP ESI                             ; 0054d427
    POP EBX                             ; 0054d428
    RET                                 ; 0054d429
    PUSH EBX                            ; 0054d42a
        ;   Label: LAB_0054d42a
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700 ; 0054d42b
        ;   XREF to: 0054f700 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 0054d430
    CALL sound_sndmain.cpp_FUN_00551440 ; 0054d433
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551440()
    XOR EAX,EAX                         ; 0054d438
    POP ESI                             ; 0054d43a
    POP EBX                             ; 0054d43b
    RET                                 ; 0054d43c
    PUSH EBX                            ; 0054d43d
        ;   Label: LAB_0054d43d
    MOV ESI,dword ptr [EDX]             ; 0054d43e
    PUSH EDX                            ; 0054d440
    CALL dword ptr [ESI + 0x54]         ; 0054d441
    ADD ESP,0x8                         ; 0054d444
    TEST EAX,EAX                        ; 0054d447
    JNZ 0x0054d3e8                      ; 0054d449
        ;   XREF to: 0054d3e8 (CONDITIONAL_JUMP)  ; LAB_0054d3e8
    PUSH EBX                            ; 0054d44b
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700 ; 0054d44c
        ;   XREF to: 0054f700 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 0054d451
    CALL sound_sndmain.cpp_FUN_00551440 ; 0054d454
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551440()
    XOR EAX,EAX                         ; 0054d459
    POP ESI                             ; 0054d45b
    POP EBX                             ; 0054d45c
    RET                                 ; 0054d45d

