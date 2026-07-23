; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hotdemon_cpp_CHotDemon_processDamage_FUN_004b9720(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
;
; Referenced Globals:
;   TerminatedCString s_hotdemon_die_wav_00585f9a
;   TerminatedCString s_hotdemon_hurt_wav_00585fab
;   double DOUBLE_00585fc5 = 2
;   undefined4 DAT_005b80f0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_enemy.cpp_CEnemy_processDamage_FUN_00479f70
;   core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
;   sound_sndmain.cpp_killSfx_FUN_00527230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b9720
        ;   Label: core_hotdemon.cpp_CHotDemon_processDamage_FUN_004b9720
    PUSH ESI                            ; 004b9721
    PUSH EDI                            ; 004b9722
    PUSH EBP                            ; 004b9723
    SUB ESP,0x14                        ; 004b9724
    MOV ESI,dword ptr [ESP + 0x28]      ; 004b9727
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004b972b
    MOV EDX,dword ptr [ESI + 0xbd24]    ; 004b972f
    PUSH EDX                            ; 004b9735
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 004b9736
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    MOV ECX,dword ptr [EDI + 0x28]      ; 004b973b
    ADD ESP,0x4                         ; 004b973e
    CMP ECX,0x8                         ; 004b9741
    JZ 0x004b97c3                       ; 004b9744
        ;   XREF to: 004b97c3 (CONDITIONAL_JUMP)  ; LAB_004b97c3
    LEA EAX,[EAX]                       ; 004b974a
    FLD float ptr [EDI + 0x4]           ; 004b9750
        ;   Label: LAB_004b9750
    FSUBR float ptr [ESI + 0x2434]      ; 004b9753
    LEA EBX,[ESI + 0x150]               ; 004b9759
    FST float ptr [ESI + 0x2434]        ; 004b975f
    FLDZ                                ; 004b9765
    FCOMPP                              ; 004b9767
    FNSTSW AX                           ; 004b9769
    SAHF                                ; 004b976b
    JNC 0x004b9819                      ; 004b976c
        ;   XREF to: 004b9819 (CONDITIONAL_JUMP)  ; LAB_004b9819
    PUSH EBX                            ; 004b9772
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004b9773
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004b9778
    ADD ESP,0x4                         ; 004b977b
    CMP EAX,0x6                         ; 004b977e
    JGE 0x004b98a4                      ; 004b9781
        ;   XREF to: 004b98a4 (CONDITIONAL_JUMP)  ; LAB_004b98a4
    PUSH 0x1                            ; 004b9787
        ;   Label: LAB_004b9787
    PUSH 0x3                            ; 004b9789
    LEA EAX,[ESI + 0x150]               ; 004b978b
    PUSH EAX                            ; 004b9791
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b9792
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
        ;   Label: LAB_004b9792
    ADD ESP,0xc                         ; 004b9797
    MOV EAX,dword ptr [ESI + 0xbd28]    ; 004b979a
    PUSH EAX                            ; 004b97a0
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004b97a1
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxPlaying_FUN_00526c50()
    ADD ESP,0x4                         ; 004b97a6
    TEST EAX,EAX                        ; 004b97a9
    JZ 0x004b98b7                       ; 004b97ab
        ;   XREF to: 004b98b7 (CONDITIONAL_JUMP)  ; LAB_004b98b7
    PUSH EDI                            ; 004b97b1
        ;   Label: LAB_004b97b1
    PUSH ESI                            ; 004b97b2
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 004b97b3
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_processDamage_FUN_00479f70()
    ADD ESP,0x8                         ; 004b97b8
    ADD ESP,0x14                        ; 004b97bb
    POP EBP                             ; 004b97be
    POP EDI                             ; 004b97bf
    POP ESI                             ; 004b97c0
    POP EBX                             ; 004b97c1
    RET                                 ; 004b97c2
    FLD float ptr [EDI + 0x4]           ; 004b97c3
        ;   Label: LAB_004b97c3
    LEA EAX,[EDI + 0x1c]                ; 004b97c6
    FLD ST0                             ; 004b97c9
    FMUL double ptr [0x00585fc5]        ; 004b97cb | DOUBLE_00585fc5
    PUSH EAX                            ; 004b97d1
    LEA EAX,[ESP + 0x4]                 ; 004b97d2
    XOR EBX,EBX                         ; 004b97d6
    PUSH EAX                            ; 004b97d8
    FSTP ST1                            ; 004b97d9
    PUSH ESI                            ; 004b97db
    FSTP float ptr [EDI + 0x4]          ; 004b97dc
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004b97df
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 004b97e4
    PUSH 0xffff                         ; 004b97e7
        ;   Label: LAB_004b97e7
    PUSH 0x0                            ; 004b97ec
    PUSH 0x4000                         ; 004b97ee
    PUSH 0x4000                         ; 004b97f3
    PUSH 0x0                            ; 004b97f8
    LEA EAX,[ESP + 0x14]                ; 004b97fa
    PUSH EAX                            ; 004b97fe
    MOV EBP,dword ptr [0x005b80f0]      ; 004b97ff | DAT_005b80f0
    PUSH EBP                            ; 004b9805
    INC EBX                             ; 004b9806
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90 ; 004b9807
        ;   XREF to: 0048ae90 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90()
    ADD ESP,0x1c                        ; 004b980c
    CMP EBX,0x5                         ; 004b980f
    JL 0x004b97e7                       ; 004b9812
        ;   XREF to: 004b97e7 (CONDITIONAL_JUMP)  ; LAB_004b97e7
    JMP 0x004b9750                      ; 004b9814
        ;   XREF to: 004b9750 (UNCONDITIONAL_JUMP)  ; LAB_004b9750
    PUSH EBX                            ; 004b9819
        ;   Label: LAB_004b9819
    MOV dword ptr [ESI + 0x2434],0x0    ; 004b981a
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004b9824
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004b9829
    ADD ESP,0x4                         ; 004b982c
    CMP EAX,0x4                         ; 004b982f
    JZ 0x004b97b1                       ; 004b9832
        ;   XREF to: 004b97b1 (CONDITIONAL_JUMP)  ; LAB_004b97b1
    CMP EAX,0x5                         ; 004b9838
    JZ 0x004b97b1                       ; 004b983b
        ;   XREF to: 004b97b1 (CONDITIONAL_JUMP)  ; LAB_004b97b1
    CMP EAX,0xa                         ; 004b9841
    JZ 0x004b97b1                       ; 004b9844
        ;   XREF to: 004b97b1 (CONDITIONAL_JUMP)  ; LAB_004b97b1
    CMP EAX,0xb                         ; 004b984a
    JZ 0x004b97b1                       ; 004b984d
        ;   XREF to: 004b97b1 (CONDITIONAL_JUMP)  ; LAB_004b97b1
    CMP EAX,0x6                         ; 004b9853
    JL 0x004b989e                       ; 004b9856
        ;   XREF to: 004b989e (CONDITIONAL_JUMP)  ; LAB_004b989e
    PUSH 0x1                            ; 004b9858
    PUSH 0xa                            ; 004b985a
    PUSH EBX                            ; 004b985c
        ;   Label: LAB_004b985c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b985d
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004b9862
    MOV EDX,dword ptr [ESI + 0xbd28]    ; 004b9865
    PUSH EDX                            ; 004b986b
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 004b986c
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 004b9871
    PUSH 0x585f9a                       ; 004b9874 | = "hotdemon-die.wav"
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004b9879
    PUSH ESI                            ; 004b987f
    CALL dword ptr [EAX + 0x24]         ; 004b9880
    ADD ESP,0x8                         ; 004b9883
    MOV dword ptr [ESI + 0xbd28],EAX    ; 004b9886
    PUSH EDI                            ; 004b988c
    PUSH ESI                            ; 004b988d
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 004b988e
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_processDamage_FUN_00479f70()
    ADD ESP,0x8                         ; 004b9893
    ADD ESP,0x14                        ; 004b9896
    POP EBP                             ; 004b9899
    POP EDI                             ; 004b989a
    POP ESI                             ; 004b989b
    POP EBX                             ; 004b989c
    RET                                 ; 004b989d
    PUSH 0x1                            ; 004b989e
        ;   Label: LAB_004b989e
    PUSH 0x4                            ; 004b98a0
    JMP 0x004b985c                      ; 004b98a2
        ;   XREF to: 004b985c (UNCONDITIONAL_JUMP)  ; LAB_004b985c
    CMP EAX,0xf                         ; 004b98a4
        ;   Label: LAB_004b98a4
    JZ 0x004b9787                       ; 004b98a7
        ;   XREF to: 004b9787 (CONDITIONAL_JUMP)  ; LAB_004b9787
    PUSH 0x1                            ; 004b98ad
    PUSH 0x9                            ; 004b98af
    PUSH EBX                            ; 004b98b1
    JMP 0x004b9792                      ; 004b98b2
        ;   XREF to: 004b9792 (UNCONDITIONAL_JUMP)  ; LAB_004b9792
    PUSH 0x585fab                       ; 004b98b7 | = "hotdemon-hurt?.wav"
        ;   Label: LAB_004b98b7
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004b98bc
    PUSH ESI                            ; 004b98c2
    CALL dword ptr [EAX + 0x24]         ; 004b98c3
    ADD ESP,0x8                         ; 004b98c6
    MOV dword ptr [ESI + 0xbd28],EAX    ; 004b98c9
    PUSH EDI                            ; 004b98cf
    PUSH ESI                            ; 004b98d0
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 004b98d1
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_processDamage_FUN_00479f70()
    ADD ESP,0x8                         ; 004b98d6
    ADD ESP,0x14                        ; 004b98d9
    POP EBP                             ; 004b98dc
    POP EDI                             ; 004b98dd
    POP ESI                             ; 004b98de
    POP EBX                             ; 004b98df
    RET                                 ; 004b98e0

