; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057d6a0(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[3]:
;   FUN_0050ba70 at 0050c339
;   FUN_0050c990 at 0050cb79
;   FUN_0050cc90 at 0050cfcf
;
; Referenced Globals:
;   undefined4 s_splash_music_44_wav_005f5afd+1
;   TerminatedCString s_splash_music_22_wav_005f5b12
;   undefined4 DAT_00605c94
;   undefined4 DAT_00605c98
;   undefined4 DAT_00605c9c
;
; Called Functions:
;   FUN_00572980
;   FUN_00572a10
;   FUN_00572ac0
;   FUN_00572b40
;   FUN_00572d20
;   FUN_005735f0
;   FUN_00573b30
;   FUN_00573bc0
;   FUN_00573ec0
;   FUN_00573f20
;   FUN_00573fa0
;   FUN_00574ee0
;   FUN_00575220
;   FUN_005756f0
;   FUN_0057d800
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0057d6a0
        ;   Label: FUN_0057d6a0
    PUSH 0x1                            ; 0057d6a3
    CALL FUN_00573bc0                   ; 0057d6a5
        ;   XREF to: 00573bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573bc0()
    MOV dword ptr [ESP + 0x4],EAX       ; 0057d6aa
    FLD float ptr [ESP + 0x4]           ; 0057d6ae
    ADD ESP,0x4                         ; 0057d6b2
    FCOMP float ptr [0x00605c94]        ; 0057d6b5 | DAT_00605c94
    FNSTSW AX                           ; 0057d6bb
    SAHF                                ; 0057d6bd
    JA 0x0057d7cb                       ; 0057d6be
        ;   XREF to: 0057d7cb (CONDITIONAL_JUMP)  ; LAB_0057d7cb
    PUSH 0x0                            ; 0057d6c4
        ;   Label: LAB_0057d6c4
    CALL FUN_00573bc0                   ; 0057d6c6
        ;   XREF to: 00573bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573bc0()
    MOV dword ptr [ESP + 0x4],EAX       ; 0057d6cb
    FLD float ptr [ESP + 0x4]           ; 0057d6cf
    ADD ESP,0x4                         ; 0057d6d3
    FCOMP float ptr [0x00605c98]        ; 0057d6d6 | DAT_00605c98
    FNSTSW AX                           ; 0057d6dc
    SAHF                                ; 0057d6de
    JBE 0x0057d6f1                      ; 0057d6df
        ;   XREF to: 0057d6f1 (CONDITIONAL_JUMP)  ; LAB_0057d6f1
    PUSH dword ptr [0x00605c98]         ; 0057d6e1 | DAT_00605c98
    PUSH 0x0                            ; 0057d6e7
    CALL FUN_00573b30                   ; 0057d6e9
        ;   XREF to: 00573b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00573b30()
    ADD ESP,0x8                         ; 0057d6ee
    PUSH 0x2                            ; 0057d6f1
        ;   Label: LAB_0057d6f1
    CALL FUN_00573bc0                   ; 0057d6f3
        ;   XREF to: 00573bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573bc0()
    MOV dword ptr [ESP + 0x4],EAX       ; 0057d6f8
    FLD float ptr [ESP + 0x4]           ; 0057d6fc
    ADD ESP,0x4                         ; 0057d700
    FCOMP float ptr [0x00605c9c]        ; 0057d703 | DAT_00605c9c
    FNSTSW AX                           ; 0057d709
    SAHF                                ; 0057d70b
    JBE 0x0057d71e                      ; 0057d70c
        ;   XREF to: 0057d71e (CONDITIONAL_JUMP)  ; LAB_0057d71e
    PUSH dword ptr [0x00605c9c]         ; 0057d70e | DAT_00605c9c
    PUSH 0x2                            ; 0057d714
    CALL FUN_00573b30                   ; 0057d716
        ;   XREF to: 00573b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00573b30()
    ADD ESP,0x8                         ; 0057d71b
    CALL FUN_005735f0                   ; 0057d71e
        ;   XREF to: 005735f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005735f0()
        ;   Label: LAB_0057d71e
    TEST EAX,EAX                        ; 0057d723
    JNZ 0x0057d7c7                      ; 0057d725
        ;   XREF to: 0057d7c7 (CONDITIONAL_JUMP)  ; LAB_0057d7c7
    MOV EDX,dword ptr [ESP + 0x8]       ; 0057d72b
    PUSH EDX                            ; 0057d72f
    CALL FUN_0057d800                   ; 0057d730
        ;   XREF to: 0057d800 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d800()
    ADD ESP,0x4                         ; 0057d735
    PUSH 0x0                            ; 0057d738
    PUSH 0x0                            ; 0057d73a
    PUSH 0x0                            ; 0057d73c
    CALL FUN_005756f0                   ; 0057d73e
        ;   XREF to: 005756f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005756f0()
    ADD ESP,0xc                         ; 0057d743
    PUSH 0x0                            ; 0057d746
    PUSH 0x0                            ; 0057d748
    PUSH 0x0                            ; 0057d74a
    PUSH 0x0                            ; 0057d74c
    PUSH 0x0                            ; 0057d74e
    PUSH 0x0                            ; 0057d750
    CALL FUN_00573ec0                   ; 0057d752
        ;   XREF to: 00573ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573ec0()
    ADD ESP,0x18                        ; 0057d757
    PUSH 0x3f800000                     ; 0057d75a
    PUSH 0x0                            ; 0057d75f
    PUSH 0x0                            ; 0057d761
    PUSH 0x0                            ; 0057d763
    PUSH 0x3f800000                     ; 0057d765
    PUSH 0x0                            ; 0057d76a
    PUSH 0x0                            ; 0057d76c
    PUSH 0x0                            ; 0057d76e
    PUSH 0x3f800000                     ; 0057d770
    CALL FUN_00573f20                   ; 0057d775
        ;   XREF to: 00573f20 (UNCONDITIONAL_CALL)  ; undefined FUN_00573f20()
    ADD ESP,0x24                        ; 0057d77a
    PUSH 0x0                            ; 0057d77d
    PUSH 0x0                            ; 0057d77f
    PUSH 0x0                            ; 0057d781
    CALL FUN_00573fa0                   ; 0057d783
        ;   XREF to: 00573fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573fa0()
    ADD ESP,0xc                         ; 0057d788
    CALL FUN_00574ee0                   ; 0057d78b
        ;   XREF to: 00574ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_00574ee0()
    CALL FUN_00572ac0                   ; 0057d790
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00572ac0()
    PUSH 0x1                            ; 0057d795
    CALL FUN_00572980                   ; 0057d797
        ;   XREF to: 00572980 (UNCONDITIONAL_CALL)  ; undefined FUN_00572980()
    ADD ESP,0x4                         ; 0057d79c
    PUSH 0x1                            ; 0057d79f
    CALL FUN_00572a10                   ; 0057d7a1
        ;   XREF to: 00572a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00572a10()
    ADD ESP,0x4                         ; 0057d7a6
    CALL FUN_00575220                   ; 0057d7a9
        ;   XREF to: 00575220 (UNCONDITIONAL_CALL)  ; undefined FUN_00575220()
    CMP EAX,0x7530                      ; 0057d7ae
    JLE 0x0057d7e0                      ; 0057d7b3
        ;   XREF to: 0057d7e0 (CONDITIONAL_JUMP)  ; LAB_0057d7e0
    PUSH 0x5f5afe                       ; 0057d7b5 | s_splash_music_44_wav_005f5afd+1
    CALL FUN_00572d20                   ; 0057d7ba
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00572d20()
    ADD ESP,0x4                         ; 0057d7bf
    CALL FUN_00572b40                   ; 0057d7c2
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00572b40()
    ADD ESP,0x4                         ; 0057d7c7
        ;   Label: LAB_0057d7c7
    RET                                 ; 0057d7ca
    PUSH dword ptr [0x00605c94]         ; 0057d7cb | DAT_00605c94
        ;   Label: LAB_0057d7cb
    PUSH 0x1                            ; 0057d7d1
    CALL FUN_00573b30                   ; 0057d7d3
        ;   XREF to: 00573b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00573b30()
    ADD ESP,0x8                         ; 0057d7d8
    JMP 0x0057d6c4                      ; 0057d7db
        ;   XREF to: 0057d6c4 (UNCONDITIONAL_JUMP)  ; LAB_0057d6c4
    PUSH 0x5f5b12                       ; 0057d7e0 | = "splash-music-22.wav"
        ;   Label: LAB_0057d7e0
    CALL FUN_00572d20                   ; 0057d7e5
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00572d20()
    ADD ESP,0x4                         ; 0057d7ea
    CALL FUN_00572b40                   ; 0057d7ed
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00572b40()
    ADD ESP,0x4                         ; 0057d7f2
    RET                                 ; 0057d7f5

