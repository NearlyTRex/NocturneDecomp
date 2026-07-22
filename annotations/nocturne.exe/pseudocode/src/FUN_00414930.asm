; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00414930(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x24]:1  local_24
;
; Referenced Globals:
;   TerminatedCString s_batman_die_wav_00578d2f
;   string s_batman-hurt?.wav_00578d3e
;   double DOUBLE_00578d4f = 2
;   undefined4 DAT_005b80f0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomInt_FUN_0040de00
;   core_batman.cpp_CBatman_processDismemberment_FUN_004145f0
;   core_charactr.cpp_FUN_00427730
;   core_enemy.cpp_CEnemy_processDamage_FUN_00479f70
;   core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
;   sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
;   sound_sndmain.cpp_killSfx_FUN_00527230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414930
        ;   Label: FUN_00414930
    PUSH ESI                            ; 00414931
    PUSH EDI                            ; 00414932
    PUSH EBP                            ; 00414933
    SUB ESP,0x2c                        ; 00414934
    MOV ESI,dword ptr [ESP + 0x40]      ; 00414937
    MOV EDI,dword ptr [ESP + 0x44]      ; 0041493b
    MOV EDX,dword ptr [ESI + 0xbddc]    ; 0041493f
    PUSH EDX                            ; 00414945
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00414946
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 0041494b
    MOV ECX,dword ptr [ESI + 0xbdd4]    ; 0041494e
    PUSH ECX                            ; 00414954
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00414955
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    MOV EBX,dword ptr [EDI + 0x28]      ; 0041495a
    ADD ESP,0x4                         ; 0041495d
    CMP EBX,0x7                         ; 00414960
    JZ 0x00414a57                       ; 00414963
        ;   XREF to: 00414a57 (CONDITIONAL_JUMP)  ; LAB_00414a57
    LEA EAX,[EAX]                       ; 00414969
    NOP                                 ; 0041496f
    CMP dword ptr [EDI + 0x30],0x6c     ; 00414970
        ;   Label: LAB_00414970
    JNZ 0x004149b4                      ; 00414974
        ;   XREF to: 004149b4 (CONDITIONAL_JUMP)  ; LAB_004149b4
    PUSH 0x0                            ; 00414976
    LEA EAX,[ESP + 0x4]                 ; 00414978
    PUSH EAX                            ; 0041497c
    LEA EAX,[ESI + 0x150]               ; 0041497d
    PUSH EAX                            ; 00414983
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 00414984
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380()
    ADD ESP,0xc                         ; 00414989
    PUSH EAX                            ; 0041498c
    LEA EAX,[ESP + 0x1c]                ; 0041498d
    PUSH EAX                            ; 00414991
    PUSH ESI                            ; 00414992
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00414993
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00414998
    PUSH 0x0                            ; 0041499b
    PUSH 0x41200000                     ; 0041499d
    PUSH 0x0                            ; 004149a2
    PUSH 0x0                            ; 004149a4
    LEA EAX,[ESP + 0x28]                ; 004149a6
    PUSH EAX                            ; 004149aa
    PUSH ESI                            ; 004149ab
    CALL core_charactr.cpp_FUN_00427730 ; 004149ac
        ;   XREF to: 00427730 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427730()
    ADD ESP,0x18                        ; 004149b1
    PUSH EDI                            ; 004149b4
        ;   Label: LAB_004149b4
    PUSH ESI                            ; 004149b5
    CALL core_batman.cpp_CBatman_processDismemberment_FUN_004145f0 ; 004149b6
        ;   XREF to: 004145f0 (UNCONDITIONAL_CALL)  ; undefined core_batman.cpp_CBatman_processDismemberment_FUN_004145f0()
    FLD float ptr [EDI + 0x4]           ; 004149bb
    ADD ESP,0x8                         ; 004149be
    FSUBR float ptr [ESI + 0x2434]      ; 004149c1
    LEA EBX,[ESI + 0x150]               ; 004149c7
    FST float ptr [ESI + 0x2434]        ; 004149cd
    FLDZ                                ; 004149d3
    FCOMPP                              ; 004149d5
    FNSTSW AX                           ; 004149d7
    SAHF                                ; 004149d9
    JNC 0x00414aa9                      ; 004149da
        ;   XREF to: 00414aa9 (CONDITIONAL_JUMP)  ; LAB_00414aa9
    PUSH 0x2                            ; 004149e0
    PUSH 0x0                            ; 004149e2
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 004149e4
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomInt_FUN_0040de00()
    ADD ESP,0x8                         ; 004149e9
    MOV EBP,EAX                         ; 004149ec
    TEST EAX,EAX                        ; 004149ee
    JNZ 0x004149ff                      ; 004149f0
        ;   XREF to: 004149ff (CONDITIONAL_JUMP)  ; LAB_004149ff
    PUSH 0x1                            ; 004149f2
    PUSH 0x4                            ; 004149f4
    PUSH EBX                            ; 004149f6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004149f7
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004149fc
    CMP EBP,0x1                         ; 004149ff
        ;   Label: LAB_004149ff
    JNZ 0x00414a16                      ; 00414a02
        ;   XREF to: 00414a16 (CONDITIONAL_JUMP)  ; LAB_00414a16
    PUSH EBP                            ; 00414a04
    PUSH 0x5                            ; 00414a05
    LEA EAX,[ESI + 0x150]               ; 00414a07
    PUSH EAX                            ; 00414a0d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00414a0e
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00414a13
    CMP EBP,0x2                         ; 00414a16
        ;   Label: LAB_00414a16
    JNZ 0x00414a2e                      ; 00414a19
        ;   XREF to: 00414a2e (CONDITIONAL_JUMP)  ; LAB_00414a2e
    PUSH 0x1                            ; 00414a1b
    PUSH 0x6                            ; 00414a1d
    LEA EAX,[ESI + 0x150]               ; 00414a1f
    PUSH EAX                            ; 00414a25
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00414a26
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00414a2b
    MOV ECX,dword ptr [ESI + 0xbdd8]    ; 00414a2e
        ;   Label: LAB_00414a2e
    PUSH ECX                            ; 00414a34
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 00414a35
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxPlaying_FUN_00526c50()
    ADD ESP,0x4                         ; 00414a3a
    TEST EAX,EAX                        ; 00414a3d
    JZ 0x00414b13                       ; 00414a3f
        ;   XREF to: 00414b13 (CONDITIONAL_JUMP)  ; LAB_00414b13
    PUSH EDI                            ; 00414a45
        ;   Label: LAB_00414a45
    PUSH ESI                            ; 00414a46
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 00414a47
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_processDamage_FUN_00479f70()
    ADD ESP,0x8                         ; 00414a4c
    ADD ESP,0x2c                        ; 00414a4f
    POP EBP                             ; 00414a52
    POP EDI                             ; 00414a53
    POP ESI                             ; 00414a54
    POP EBX                             ; 00414a55
    RET                                 ; 00414a56
    FLD float ptr [EDI + 0x4]           ; 00414a57
        ;   Label: LAB_00414a57
    LEA EAX,[EDI + 0x1c]                ; 00414a5a
    FLD ST0                             ; 00414a5d
    FMUL double ptr [0x00578d4f]        ; 00414a5f | DOUBLE_00578d4f
    PUSH EAX                            ; 00414a65
    LEA EAX,[ESP + 0x10]                ; 00414a66
    XOR EBX,EBX                         ; 00414a6a
    PUSH EAX                            ; 00414a6c
    FSTP ST1                            ; 00414a6d
    PUSH ESI                            ; 00414a6f
    FSTP float ptr [EDI + 0x4]          ; 00414a70
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00414a73
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00414a78
    MOV EBP,0x4000                      ; 00414a7b
    PUSH 0xffff                         ; 00414a80
        ;   Label: LAB_00414a80
    PUSH 0x0                            ; 00414a85
    PUSH EBP                            ; 00414a87
    PUSH EBP                            ; 00414a88
    PUSH 0x0                            ; 00414a89
    LEA EAX,[ESP + 0x20]                ; 00414a8b
    PUSH EAX                            ; 00414a8f
    MOV EAX,[0x005b80f0]                ; 00414a90 | DAT_005b80f0
    PUSH EAX                            ; 00414a95
    INC EBX                             ; 00414a96
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90 ; 00414a97
        ;   XREF to: 0048ae90 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90()
    ADD ESP,0x1c                        ; 00414a9c
    CMP EBX,0x5                         ; 00414a9f
    JL 0x00414a80                       ; 00414aa2
        ;   XREF to: 00414a80 (CONDITIONAL_JUMP)  ; LAB_00414a80
    JMP 0x00414970                      ; 00414aa4
        ;   XREF to: 00414970 (UNCONDITIONAL_JUMP)  ; LAB_00414970
    PUSH EBX                            ; 00414aa9
        ;   Label: LAB_00414aa9
    MOV dword ptr [ESI + 0x2434],0x0    ; 00414aaa
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00414ab4
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00414ab9
    ADD ESP,0x4                         ; 00414abc
    CMP EAX,0x7                         ; 00414abf
    JZ 0x00414a45                       ; 00414ac2
        ;   XREF to: 00414a45 (CONDITIONAL_JUMP)  ; LAB_00414a45
    CMP EAX,0x8                         ; 00414ac4
    JZ 0x00414a45                       ; 00414ac7
        ;   XREF to: 00414a45 (CONDITIONAL_JUMP)  ; LAB_00414a45
    PUSH 0x1                            ; 00414acd
    PUSH 0x7                            ; 00414acf
    PUSH EBX                            ; 00414ad1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00414ad2
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00414ad7
    MOV EBX,dword ptr [ESI + 0xbdd8]    ; 00414ada
    PUSH EBX                            ; 00414ae0
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00414ae1
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 00414ae6
    PUSH 0x578d2f                       ; 00414ae9 | = "batman-die.wav"
    MOV EAX,dword ptr [ESI + 0x14c]     ; 00414aee
    PUSH ESI                            ; 00414af4
    CALL dword ptr [EAX + 0x24]         ; 00414af5
    ADD ESP,0x8                         ; 00414af8
    MOV dword ptr [ESI + 0xbdd8],EAX    ; 00414afb
    PUSH EDI                            ; 00414b01
    PUSH ESI                            ; 00414b02
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 00414b03
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_processDamage_FUN_00479f70()
    ADD ESP,0x8                         ; 00414b08
    ADD ESP,0x2c                        ; 00414b0b
    POP EBP                             ; 00414b0e
    POP EDI                             ; 00414b0f
    POP ESI                             ; 00414b10
    POP EBX                             ; 00414b11
    RET                                 ; 00414b12
    PUSH 0x578d3e                       ; 00414b13 | = "batman-hurt?.wav"
        ;   Label: LAB_00414b13
    MOV EAX,dword ptr [ESI + 0x14c]     ; 00414b18
    PUSH ESI                            ; 00414b1e
    CALL dword ptr [EAX + 0x24]         ; 00414b1f
    ADD ESP,0x8                         ; 00414b22
    MOV dword ptr [ESI + 0xbdd8],EAX    ; 00414b25
    PUSH EDI                            ; 00414b2b
    PUSH ESI                            ; 00414b2c
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 00414b2d
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_processDamage_FUN_00479f70()
    ADD ESP,0x8                         ; 00414b32
    ADD ESP,0x2c                        ; 00414b35
    POP EBP                             ; 00414b38
    POP EDI                             ; 00414b39
    POP ESI                             ; 00414b3a
    POP EBX                             ; 00414b3b
    RET                                 ; 00414b3c

