; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSlot * __cdecl sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(uint sfx_handle,int check_hardware_playback)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; int              Stack[0x8]:4   check_hardware_playback
;
; XREF[16]:
;   sound_sndmain.cpp_getSfxOptions_FUN_00526dd0 at 00526dd8
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00526d10 at 00526d22
;   sound_sndmain.cpp_getSfxSampleInfo_FUN_00526cd0 at 00526cd7
;   sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 at 00526c60
;   sound_sndmain.cpp_killSfx_FUN_00527230 at 00527237
;   sound_sndmain.cpp_setSfxBaseFrequency_FUN_00527130 at 00527138
;   sound_sndmain.cpp_setSfxFade_FUN_00527260 at 0052726a
;   sound_sndmain.cpp_setSfxIsActive_FUN_00527200 at 00527207
;   sound_sndmain.cpp_setSfxPosition_FUN_00526e10 at 00526e18
;   sound_sndmain.cpp_setSfxTrackedDoublePosition_FUN_00526f00 at 00526f08
;   ... and 6 more
;
; Referenced Globals:
;   undefined4 g_CSfxSlot_ARRAY_02dbd374[0].playback_state
;   undefined4 DAT_02dc8318
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570
;   sound_sndmain.cpp_lockSound_FUN_00528800
;   sound_sndmain.cpp_unlockSound_FUN_00528890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005234b0
        ;   Label: sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0
    PUSH ESI                            ; 005234b1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005234b2
    MOV EAX,ESI                         ; 005234b6
    SHR ESI,0x6                         ; 005234b8
    AND EAX,0x3f                        ; 005234bb
    CMP ESI,0x1                         ; 005234be
    JL 0x005234f6                       ; 005234c1
        ;   XREF to: 005234f6 (CONDITIONAL_JUMP)  ; LAB_005234f6
    CMP ESI,0xffffff                    ; 005234c3
    JGE 0x005234f6                      ; 005234c9
        ;   XREF to: 005234f6 (CONDITIONAL_JUMP)  ; LAB_005234f6
    TEST EAX,EAX                        ; 005234cb
    JL 0x005234f6                       ; 005234cd
        ;   XREF to: 005234f6 (CONDITIONAL_JUMP)  ; LAB_005234f6
    CMP EAX,0x40                        ; 005234cf
    JGE 0x005234f6                      ; 005234d2
        ;   XREF to: 005234f6 (CONDITIONAL_JUMP)  ; LAB_005234f6
    MOV EBX,EAX                         ; 005234d4
    SHL EAX,0x3                         ; 005234d6
    ADD EAX,EBX                         ; 005234d9
    MOV EBX,0x2dbd374                   ; 005234db
    SHL EAX,0x5                         ; 005234e0
    ADD EBX,EAX                         ; 005234e3
    CMP ESI,dword ptr [EBX + 0x70]      ; 005234e5 | g_CSfxSlot_ARRAY_02dbd374[0].playback_state
    JNZ 0x005234f6                      ; 005234e8
        ;   XREF to: 005234f6 (CONDITIONAL_JUMP)  ; LAB_005234f6
    CMP dword ptr [ESP + 0x10],0x0      ; 005234ea
    JNZ 0x005234fb                      ; 005234ef
        ;   XREF to: 005234fb (CONDITIONAL_JUMP)  ; LAB_005234fb
    MOV EAX,EBX                         ; 005234f1
        ;   Label: LAB_005234f1
    POP ESI                             ; 005234f3
    POP EBX                             ; 005234f4
    RET                                 ; 005234f5
    XOR EAX,EAX                         ; 005234f6
        ;   Label: LAB_005234f6
    POP ESI                             ; 005234f8
    POP EBX                             ; 005234f9
    RET                                 ; 005234fa
    CALL sound_sndmain.cpp_lockSound_FUN_00528800 ; 005234fb
        ;   XREF to: 00528800 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00528800()
        ;   Label: LAB_005234fb
    CMP ESI,dword ptr [EBX + 0x70]      ; 00523500 | g_CSfxSlot_ARRAY_02dbd374[0].playback_state
    JNZ 0x0052352e                      ; 00523503
        ;   XREF to: 0052352e (CONDITIONAL_JUMP)  ; LAB_0052352e
    CMP dword ptr [EBX + 0x74],0x0      ; 00523505
    JZ 0x0052352e                       ; 00523509
        ;   XREF to: 0052352e (CONDITIONAL_JUMP)  ; LAB_0052352e
    CMP dword ptr [EBX + 0x6c],0x0      ; 0052350b
    JZ 0x005234f1                       ; 0052350f
        ;   XREF to: 005234f1 (CONDITIONAL_JUMP)  ; LAB_005234f1
    MOV EDX,dword ptr [0x02dc8318]      ; 00523511 | DAT_02dc8318
    TEST EDX,EDX                        ; 00523517
    JZ 0x00523538                       ; 00523519
        ;   XREF to: 00523538 (CONDITIONAL_JUMP)  ; LAB_00523538
    PUSH EBX                            ; 0052351b
    MOV ESI,dword ptr [EDX]             ; 0052351c
    PUSH EDX                            ; 0052351e
    CALL dword ptr [ESI + 0x50]         ; 0052351f
    ADD ESP,0x8                         ; 00523522
    TEST EAX,EAX                        ; 00523525
    JZ 0x00523538                       ; 00523527
        ;   XREF to: 00523538 (CONDITIONAL_JUMP)  ; LAB_00523538
    MOV EAX,EBX                         ; 00523529
    POP ESI                             ; 0052352b
    POP EBX                             ; 0052352c
    RET                                 ; 0052352d
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 0052352e
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
        ;   Label: LAB_0052352e
    XOR EAX,EAX                         ; 00523533
    POP ESI                             ; 00523535
    POP EBX                             ; 00523536
    RET                                 ; 00523537
    PUSH EBX                            ; 00523538
        ;   Label: LAB_00523538
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570 ; 00523539
        ;   XREF to: 00525570 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 0052353e
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 00523541
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
    XOR EAX,EAX                         ; 00523546
    POP ESI                             ; 00523548
    POP EBX                             ; 00523549
    RET                                 ; 0052354a

