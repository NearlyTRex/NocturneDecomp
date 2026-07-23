; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054dd50(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
;
; Referenced Globals:
;   TerminatedCString s_voicuhurt_wav_005971c9
;   TerminatedCString s_VampireBossBitesIt_005971d7
;   TerminatedCString s_voicudeath_wav_2_5_005971ea
;   double DOUBLE_00597205 = 2
;   double DOUBLE_0059720d = 25
;   undefined4 DAT_005b7650
;   undefined4 DAT_005b80f0
;   undefined4 DAT_005baf90
;   undefined4 DAT_005bed68
;   undefined4 DAT_01cae124
;   undefined4 DAT_01cc56dc
;   undefined4 DAT_01cc9450
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomInt_FUN_0040de00
;   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428f40
;   core_event.cpp_CEventList_executeCommands_FUN_0047ab70
;   core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90
;   core_inv.cpp_CInventory_findItemByName_FUN_004c0710
;   core_inv.cpp_CInventory_removeItem_FUN_004c07b0
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_sound.cpp_CSound_playSound_FUN_0052ea40
;   sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
;   sound_sndmain.cpp_killSfx_FUN_00527230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054dd50
        ;   Label: FUN_0054dd50
    PUSH ESI                            ; 0054dd51
    PUSH EDI                            ; 0054dd52
    PUSH EBP                            ; 0054dd53
    SUB ESP,0x14                        ; 0054dd54
    MOV ESI,dword ptr [ESP + 0x28]      ; 0054dd57
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0054dd5b
    CMP dword ptr [EDI + 0x28],0x7      ; 0054dd5f
    JZ 0x0054ddf5                       ; 0054dd63
        ;   XREF to: 0054ddf5 (CONDITIONAL_JUMP)  ; LAB_0054ddf5
    LEA EAX,[EAX]                       ; 0054dd69
    NOP                                 ; 0054dd6f
    MOV EAX,dword ptr [ESI + 0xbe168]   ; 0054dd70
        ;   Label: LAB_0054dd70
    TEST EAX,EAX                        ; 0054dd76
    JBE 0x0054de7e                      ; 0054dd78
        ;   XREF to: 0054de7e (CONDITIONAL_JUMP)  ; LAB_0054de7e
    CMP EAX,0x2                         ; 0054dd7e
    JNZ 0x0054df80                      ; 0054dd81
        ;   XREF to: 0054df80 (CONDITIONAL_JUMP)  ; LAB_0054df80
    FLD float ptr [EDI + 0x4]           ; 0054dd87
    FSUBR float ptr [ESI + 0x2434]      ; 0054dd8a
    FST float ptr [ESI + 0x2434]        ; 0054dd90
    FCOMP double ptr [0x0059720d]       ; 0054dd96 | DOUBLE_0059720d
    FNSTSW AX                           ; 0054dd9c
    SAHF                                ; 0054dd9e
    JNC 0x0054ddab                      ; 0054dd9f
        ;   XREF to: 0054ddab (CONDITIONAL_JUMP)  ; LAB_0054ddab
    MOV dword ptr [ESI + 0x2434],0x41c7fdf4 ; 0054dda1
    PUSH 0x2                            ; 0054ddab
        ;   Label: LAB_0054ddab
    PUSH 0x0                            ; 0054ddad
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 0054ddaf
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomInt_FUN_0040de00()
    ADD ESP,0x8                         ; 0054ddb4
    LEA EBX,[ESI + 0xbd24]              ; 0054ddb7
    TEST EAX,EAX                        ; 0054ddbd
    JBE 0x0054de48                      ; 0054ddbf
        ;   XREF to: 0054de48 (CONDITIONAL_JUMP)  ; LAB_0054de48
    CMP EAX,0x1                         ; 0054ddc5
    JNZ 0x0054de4e                      ; 0054ddc8
        ;   XREF to: 0054de4e (CONDITIONAL_JUMP)  ; LAB_0054de4e
    PUSH EAX                            ; 0054ddce
    PUSH 0x4                            ; 0054ddcf
    PUSH EBX                            ; 0054ddd1
        ;   Label: LAB_0054ddd1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0054ddd2
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
        ;   Label: LAB_0054ddd2
    ADD ESP,0xc                         ; 0054ddd7
    MOV EBX,dword ptr [ESI + 0xbeda8]   ; 0054ddda
    PUSH EBX                            ; 0054dde0
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 0054dde1
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxPlaying_FUN_00526c50()
    ADD ESP,0x4                         ; 0054dde6
    TEST EAX,EAX                        ; 0054dde9
    JZ 0x0054de5e                       ; 0054ddeb
        ;   XREF to: 0054de5e (CONDITIONAL_JUMP)  ; LAB_0054de5e
    ADD ESP,0x14                        ; 0054dded
        ;   Label: LAB_0054dded
    POP EBP                             ; 0054ddf0
    POP EDI                             ; 0054ddf1
    POP ESI                             ; 0054ddf2
    POP EBX                             ; 0054ddf3
    RET                                 ; 0054ddf4
    FLD float ptr [EDI + 0x4]           ; 0054ddf5
        ;   Label: LAB_0054ddf5
    LEA EAX,[EDI + 0x1c]                ; 0054ddf8
    FLD ST0                             ; 0054ddfb
    FMUL double ptr [0x00597205]        ; 0054ddfd | DOUBLE_00597205
    PUSH EAX                            ; 0054de03
    LEA EAX,[ESP + 0x4]                 ; 0054de04
    XOR EBX,EBX                         ; 0054de08
    PUSH EAX                            ; 0054de0a
    FSTP ST1                            ; 0054de0b
    PUSH ESI                            ; 0054de0d
    FSTP float ptr [EDI + 0x4]          ; 0054de0e
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0054de11
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 0054de16
    MOV EBP,0x4000                      ; 0054de19
    PUSH 0xffff                         ; 0054de1e
        ;   Label: LAB_0054de1e
    PUSH 0x0                            ; 0054de23
    PUSH EBP                            ; 0054de25
    PUSH EBP                            ; 0054de26
    PUSH 0x0                            ; 0054de27
    LEA EAX,[ESP + 0x14]                ; 0054de29
    PUSH EAX                            ; 0054de2d
    MOV ECX,dword ptr [0x005b80f0]      ; 0054de2e | DAT_005b80f0
    PUSH ECX                            ; 0054de34
    INC EBX                             ; 0054de35
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90 ; 0054de36
        ;   XREF to: 0048ae90 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90()
    ADD ESP,0x1c                        ; 0054de3b
    CMP EBX,0x5                         ; 0054de3e
    JL 0x0054de1e                       ; 0054de41
        ;   XREF to: 0054de1e (CONDITIONAL_JUMP)  ; LAB_0054de1e
    JMP 0x0054dd70                      ; 0054de43
        ;   XREF to: 0054dd70 (UNCONDITIONAL_JUMP)  ; LAB_0054dd70
    PUSH 0x1                            ; 0054de48
        ;   Label: LAB_0054de48
    PUSH 0x3                            ; 0054de4a
    JMP 0x0054ddd1                      ; 0054de4c
        ;   XREF to: 0054ddd1 (UNCONDITIONAL_JUMP)  ; LAB_0054ddd1
    PUSH 0x1                            ; 0054de4e
        ;   Label: LAB_0054de4e
    PUSH 0x5                            ; 0054de50
    LEA EAX,[ESI + 0xbd24]              ; 0054de52
    PUSH EAX                            ; 0054de58
    JMP 0x0054ddd2                      ; 0054de59
        ;   XREF to: 0054ddd2 (UNCONDITIONAL_JUMP)  ; LAB_0054ddd2
    PUSH 0x5971c9                       ; 0054de5e | = "voicuhurt.wav"
        ;   Label: LAB_0054de5e
    MOV EAX,dword ptr [ESI + 0x14c]     ; 0054de63
    PUSH ESI                            ; 0054de69
    CALL dword ptr [EAX + 0x24]         ; 0054de6a
    ADD ESP,0x8                         ; 0054de6d
    MOV dword ptr [ESI + 0xbeda8],EAX   ; 0054de70
    ADD ESP,0x14                        ; 0054de76
    POP EBP                             ; 0054de79
    POP EDI                             ; 0054de7a
    POP ESI                             ; 0054de7b
    POP EBX                             ; 0054de7c
    RET                                 ; 0054de7d
    CMP dword ptr [EDI + 0x28],0x1      ; 0054de7e
        ;   Label: LAB_0054de7e
    JNZ 0x0054dded                      ; 0054de82
        ;   XREF to: 0054dded (CONDITIONAL_JUMP)  ; LAB_0054dded
    MOV EAX,[0x01cc56dc]                ; 0054de88 | DAT_01cc56dc
    PUSH EAX                            ; 0054de8d
    MOV EDX,dword ptr [EDI + 0x34]      ; 0054de8e
    PUSH EDX                            ; 0054de91
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0054de92
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    MOV EBX,EAX                         ; 0054de97
    ADD ESP,0x8                         ; 0054de99
    MOV EBP,EAX                         ; 0054de9c
    TEST EAX,EAX                        ; 0054de9e
    JZ 0x0054dded                       ; 0054dea0
        ;   XREF to: 0054dded (CONDITIONAL_JUMP)  ; LAB_0054dded
    PUSH 0x1                            ; 0054dea6
    PUSH 0xa                            ; 0054dea8
    LEA EAX,[ESI + 0x150]               ; 0054deaa
    PUSH EAX                            ; 0054deb0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0054deb1
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0054deb6
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0054deb9
    PUSH EBX                            ; 0054debf
    CALL dword ptr [EAX + 0x8c]         ; 0054dec0
    MOV EDI,EAX                         ; 0054dec6
    ADD ESP,0x4                         ; 0054dec8
    TEST EAX,EAX                        ; 0054decb
    JZ 0x0054df26                       ; 0054decd
        ;   XREF to: 0054df26 (CONDITIONAL_JUMP)  ; LAB_0054df26
    PUSH 0x0                            ; 0054decf
    PUSH EBX                            ; 0054ded1
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0054ded2
    PUSH EDI                            ; 0054ded8
    CALL dword ptr [EAX + 0x88]         ; 0054ded9
    ADD ESP,0xc                         ; 0054dedf
    MOV ECX,dword ptr [0x01cae124]      ; 0054dee2 | DAT_01cae124
    PUSH ECX                            ; 0054dee8
    PUSH EDI                            ; 0054dee9
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0054deea
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 0054deef
    TEST EAX,EAX                        ; 0054def2
    JZ 0x0054df26                       ; 0054def4
        ;   XREF to: 0054df26 (CONDITIONAL_JUMP)  ; LAB_0054df26
    PUSH EBX                            ; 0054def6
    LEA EDI,[EAX + 0x1f5a0]             ; 0054def7
    PUSH EDI                            ; 0054defd
    CALL core_inv.cpp_CInventory_findItemByName_FUN_004c0710 ; 0054defe
        ;   XREF to: 004c0710 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_findItemByName_FUN_004c0710()
    ADD ESP,0x8                         ; 0054df03
    CMP EAX,EBX                         ; 0054df06
    JNZ 0x0054df26                      ; 0054df08
        ;   XREF to: 0054df26 (CONDITIONAL_JUMP)  ; LAB_0054df26
    PUSH 0x0                            ; 0054df0a
    PUSH EBX                            ; 0054df0c
    PUSH EDI                            ; 0054df0d
    CALL core_inv.cpp_CInventory_removeItem_FUN_004c07b0 ; 0054df0e
        ;   XREF to: 004c07b0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_removeItem_FUN_004c07b0()
    ADD ESP,0xc                         ; 0054df13
    PUSH EBX                            ; 0054df16
    MOV EBX,dword ptr [0x005baf90]      ; 0054df17 | DAT_005baf90
    PUSH EBX                            ; 0054df1d | DAT_01cc9450
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60 ; 0054df1e
        ;   XREF to: 004d8c60 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60()
    ADD ESP,0x8                         ; 0054df23
    PUSH 0x3e4ccccd                     ; 0054df26
        ;   Label: LAB_0054df26
    PUSH EBP                            ; 0054df2b
    PUSH 0x0                            ; 0054df2c
    PUSH ESI                            ; 0054df2e
    CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428f40 ; 0054df2f
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428f40()
    ADD ESP,0x10                        ; 0054df34
    PUSH 0x5971d7                       ; 0054df37 | = "VampireBossBitesIt"
    MOV EDI,dword ptr [0x005b7650]      ; 0054df3c | DAT_005b7650
    PUSH EDI                            ; 0054df42
    CALL core_event.cpp_CEventList_executeCommands_FUN_0047ab70 ; 0054df43
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_executeCommands_FUN_0047ab70()
    ADD ESP,0x8                         ; 0054df48
    MOV EBP,dword ptr [ESI + 0xbeda8]   ; 0054df4b
    PUSH EBP                            ; 0054df51
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 0054df52
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 0054df57
    PUSH 0x5971ea                       ; 0054df5a | = "voicudeath.wav @ 2.5"
    PUSH ESI                            ; 0054df5f
    MOV EAX,[0x005bed68]                ; 0054df60 | DAT_005bed68
    PUSH EAX                            ; 0054df65
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 0054df66
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_playSound_FUN_0052ea40()
    ADD ESP,0xc                         ; 0054df6b
    MOV dword ptr [ESI + 0x2434],0x0    ; 0054df6e
    ADD ESP,0x14                        ; 0054df78
    POP EBP                             ; 0054df7b
    POP EDI                             ; 0054df7c
    POP ESI                             ; 0054df7d
    POP EBX                             ; 0054df7e
    RET                                 ; 0054df7f
    MOV dword ptr [EDI + 0x4],0x0       ; 0054df80
        ;   Label: LAB_0054df80
    ADD ESP,0x14                        ; 0054df87
    POP EBP                             ; 0054df8a
    POP EDI                             ; 0054df8b
    POP ESI                             ; 0054df8c
    POP EBX                             ; 0054df8d
    RET                                 ; 0054df8e

