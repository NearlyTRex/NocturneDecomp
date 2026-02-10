; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dracbrid_cpp_CDraculaBride_process_FUN_00484410(CDraculaBride *this_ptr,float delta_time)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined1       Stack[-0x494]:1  local_494
; undefined1       Stack[-0x430]:1  local_430
; undefined1       Stack[-0x3cc]:1  local_3cc
; undefined1       Stack[-0x368]:1  local_368
; undefined1       Stack[-0x304]:1  local_304
; undefined4       Stack[-0x300]:4  local_300
; undefined4       Stack[-0x2d0]:4  local_2d0
; undefined4       Stack[-0x2cc]:4  local_2cc
; undefined1       Stack[-0x2c8]:1  local_2c8
; undefined4       Stack[-0x2c4]:4  local_2c4
; undefined4       Stack[-0x294]:4  local_294
; undefined4       Stack[-0x290]:4  local_290
; undefined1       Stack[-0x28c]:1  local_28c
; undefined4       Stack[-0x288]:4  local_288
; undefined4       Stack[-0x258]:4  local_258
; undefined4       Stack[-0x254]:4  local_254
; undefined1       Stack[-0x250]:1  local_250
; undefined4       Stack[-0x24c]:4  local_24c
; undefined4       Stack[-0x21c]:4  local_21c
; undefined4       Stack[-0x218]:4  local_218
; undefined1       Stack[-0x214]:1  local_214
; undefined4       Stack[-0x210]:4  local_210
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined4       Stack[-0x1dc]:4  local_1dc
; undefined4       Stack[-0x1d8]:4  local_1d8
; undefined4       Stack[-0x1d4]:4  local_1d4
; undefined4       Stack[-0x1d0]:4  local_1d0
; undefined1       Stack[-0x1cc]:1  local_1cc
; undefined1       Stack[-0x1c0]:1  local_1c0
; undefined1       Stack[-0x1b4]:1  local_1b4
; undefined4       Stack[-0x1a8]:4  local_1a8
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined1       Stack[-0x190]:1  local_190
; undefined1       Stack[-0x184]:1  local_184
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined4       Stack[-0x170]:4  local_170
; undefined1       Stack[-0x16c]:1  local_16c
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined1       Stack[-0x154]:1  local_154
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined1       Stack[-0x13c]:1  local_13c
; undefined1       Stack[-0x130]:1  local_130
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined1       Stack[-0x118]:1  local_118
; undefined1       Stack[-0x10c]:1  local_10c
; undefined1       Stack[-0x100]:1  local_100
; undefined1       Stack[-0xf4]:1  local_f4
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined1       Stack[-0xd0]:1  local_d0
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined1       Stack[-0xb8]:1  local_b8
; undefined1       Stack[-0xac]:1  local_ac
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined1       Stack[-0x94]:1  local_94
; undefined1       Stack[-0x88]:1  local_88
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined1       Stack[-0x70]:1  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined1       Stack[-0x64]:1  local_64
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined1       Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined4 DAT_00002424
;   void* switchdataD_00484394 = 00484927
;   void* switchdataD_004843a4 = 0048553b
;   TerminatedCString s_brideexplosion_wav_006219bd
;   TerminatedCString s_s_confused_while_walking_006219d0
;   TerminatedCString s_bride_d_wav_006219fa
;   TerminatedCString s_hotbride_disappear_wav_00621a08
;   TerminatedCString s_bride_d_wav_00621a1f
;   TerminatedCString s_s_gave_up_chase_I_m_conf_00621a2d
;   TerminatedCString s_hotbride_bite_wav_00621a4e
;   TerminatedCString s_CHero_00621a61
;   TerminatedCString s_bride_d_wav_00621a67
;   TerminatedCString s_hotbride_disappear_wav_00621a75
;   TerminatedCString s_bride_d_wav_00621a8c
;   TerminatedCString s_s_gave_up_chase_I_m_conf_00621a9a
;   ... and 39 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40
;   core_charactr.cpp_CCharacter_preProcess_FUN_00429820
;   core_charactr.cpp_CCharacter_process_FUN_00429870
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40
;   core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
;   ... and 23 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484410
        ;   Label: core_dracbrid.cpp_CDraculaBride_process_FUN_00484410
    PUSH ESI                            ; 00484411
    PUSH EDI                            ; 00484412
    PUSH EBP                            ; 00484413
    MOV EBP,ESP                         ; 00484414
    SUB ESP,0x484                       ; 00484416
    SUB EBP,0x7a                        ; 0048441c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0048441f
    CMP dword ptr [EBX + 0xbfe4],0x0    ; 00484425
    JZ 0x004844a0                       ; 0048442c
        ;   XREF to: 004844a0 (CONDITIONAL_JUMP)  ; LAB_004844a0
    FLD float ptr [EBX + 0xbfe8]        ; 0048442e
    FSUB float ptr [EBP + 0x92]         ; 00484434
    FST float ptr [EBX + 0xbfe8]        ; 0048443a
    FLDZ                                ; 00484440
    FCOMPP                              ; 00484442
    FNSTSW AX                           ; 00484444
    SAHF                                ; 00484446
    JBE 0x004845a6                      ; 00484447
        ;   XREF to: 004845a6 (CONDITIONAL_JUMP)  ; LAB_004845a6
    MOV dword ptr [EBX + 0xbfe4],0x0    ; 0048444d
    MOV dword ptr [EBX + 0x70],0x2      ; 00484457
    MOV ESI,dword ptr [EBX + 0xbf68]    ; 0048445e
    MOV dword ptr [EBX + 0xbfe8],0x0    ; 00484464
    XOR EAX,EAX                         ; 0048446e
    TEST ESI,ESI                        ; 00484470
    JLE 0x004844a0                      ; 00484472
        ;   XREF to: 004844a0 (CONDITIONAL_JUMP)  ; LAB_004844a0
    MOV ESI,EBX                         ; 00484474
    MOV EDI,dword ptr [ESI + 0xbf6c]    ; 00484476
        ;   Label: LAB_00484476
    MOV dword ptr [EDI + 0x70],0x2      ; 0048447c
    INC EAX                             ; 00484483
    MOV EDX,dword ptr [EBX + 0xbf68]    ; 00484484
    ADD ESI,0x4                         ; 0048448a
    CMP EAX,EDX                         ; 0048448d
    JL 0x00484476                       ; 0048448f
        ;   XREF to: 00484476 (CONDITIONAL_JUMP)  ; LAB_00484476
    LEA EAX,[EAX]                       ; 00484491
    LEA EDX,[EDX]                       ; 00484497
    LEA EAX,[EAX]                       ; 0048449d
    PUSH dword ptr [EBP + 0x92]         ; 004844a0
        ;   Label: LAB_004844a0
    PUSH EBX                            ; 004844a6
    CALL core_dracbrid.cpp_CDraculaBride_FUN_004869a0 ; 004844a7
        ;   XREF to: 004869a0 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_CDraculaBride_FUN_004869a0(CDraculaBride * this_ptr)
    ADD ESP,0x8                         ; 004844ac
    PUSH dword ptr [EBP + 0x92]         ; 004844af
    PUSH EBX                            ; 004844b5
    CALL core_charactr.cpp_CCharacter_process_FUN_00429870 ; 004844b6
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_process_FUN_00429870(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004844bb
    TEST EAX,EAX                        ; 004844be
    JZ 0x00484892                       ; 004844c0
        ;   XREF to: 00484892 (CONDITIONAL_JUMP)  ; LAB_00484892
    FLD float ptr [EBX + 0xbf54]        ; 004844c6
    FLDZ                                ; 004844cc
    FCOMPP                              ; 004844ce
    FNSTSW AX                           ; 004844d0
    SAHF                                ; 004844d2
    JBE 0x0048460a                      ; 004844d3
        ;   XREF to: 0048460a (CONDITIONAL_JUMP)  ; LAB_0048460a
    LEA EAX,[EBX + 0x23ac]              ; 004844d9
        ;   Label: LAB_004844d9
    MOV dword ptr [EAX + 0x8],0x0       ; 004844df
    FLD float ptr [EBP + 0x92]          ; 004844e6
    MOV EDX,dword ptr [EAX + 0x8]       ; 004844ec
    MOV dword ptr [EAX + 0x4],EDX       ; 004844ef
    MOV EDX,dword ptr [EAX + 0x4]       ; 004844f2
    MOV dword ptr [EAX],EDX             ; 004844f5
    FMUL float ptr [EBX + 0xbe24]       ; 004844f7
    LEA ESI,[EBX + 0x158]               ; 004844fd
    FSTP float ptr [EBP + 0x52]         ; 00484503
    MOV EDI,0x1                         ; 00484506
    FLD float ptr [EBP + 0x52]          ; 0048450b
        ;   Label: LAB_0048450b
    FLDZ                                ; 0048450e
    FCOMPP                              ; 00484510
    FNSTSW AX                           ; 00484512
    SAHF                                ; 00484514
    JNC 0x00484630                      ; 00484515
        ;   XREF to: 00484630 (CONDITIONAL_JUMP)  ; LAB_00484630
    LEA EAX,[EBP + 0x52]                ; 0048451b
    PUSH EAX                            ; 0048451e
    PUSH ESI                            ; 0048451f
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 00484520
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 00484525
    CMP EAX,0x29a                       ; 00484528
    JNZ 0x00484621                      ; 0048452d
        ;   XREF to: 00484621 (CONDITIONAL_JUMP)  ; LAB_00484621
    MOV dword ptr [EBX + 0x2df4],0x0    ; 00484533
    XOR EAX,EAX                         ; 0048453d
    MOV dword ptr [EBP + 0xffffff12],EAX ; 0048453f
    LEA EAX,[EBP + 0xffffff12]          ; 00484545
    PUSH EAX                            ; 0048454b
    LEA EAX,[EBP + -0x22]               ; 0048454c
    PUSH EAX                            ; 0048454f
    MOV EDX,0x41a00000                  ; 00484550
    PUSH EBX                            ; 00484555
    MOV dword ptr [EBP + 0xffffff16],EDX ; 00484556
    MOV dword ptr [EBP + 0xffffff1a],EDX ; 0048455c
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 00484562
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00484567
    PUSH EDI                            ; 0048456a
    LEA EAX,[EBP + -0x22]               ; 0048456b
    PUSH 0xbf800000                     ; 0048456e
    PUSH EAX                            ; 00484573
    PUSH EBX                            ; 00484574
    CALL core_dracbrid.cpp_CDraculaBride_FUN_004858f0 ; 00484575
        ;   XREF to: 004858f0 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_CDraculaBride_FUN_004858f0(CDraculaBride * this_ptr)
    ADD ESP,0x10                        ; 0048457a
    FLD float ptr [0x0065cd8c]          ; 0048457d | FLOAT_0065cd8c
    PUSH 0x6219bd                       ; 00484583 | = "brideexplosion.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00484588
    MOV dword ptr [EBX + 0xbfe4],EDI    ; 0048458e
    PUSH EBX                            ; 00484594
    FSTP float ptr [EBX + 0xbfe8]       ; 00484595
    CALL dword ptr [EAX + 0x28]         ; 0048459b
    ADD ESP,0x8                         ; 0048459e
    JMP 0x0048450b                      ; 004845a1
        ;   XREF to: 0048450b (UNCONDITIONAL_JUMP)  ; LAB_0048450b
    MOV ECX,dword ptr [EBX + 0xbf68]    ; 004845a6
        ;   Label: LAB_004845a6
    XOR EDI,EDI                         ; 004845ac
    TEST ECX,ECX                        ; 004845ae
    JLE 0x004844a0                      ; 004845b0
        ;   XREF to: 004844a0 (CONDITIONAL_JUMP)  ; LAB_004844a0
    FLD float ptr [0x0065cd8c]          ; 004845b6 | FLOAT_0065cd8c
    FLD double ptr [0x00621ad6]         ; 004845bc | DOUBLE_00621ad6
    MOV ESI,EBX                         ; 004845c2
    MOV EAX,dword ptr [ESI + 0xbf6c]    ; 004845c4
        ;   Label: LAB_004845c4
    MOV dword ptr [EAX + 0xfc],0x1      ; 004845ca
    MOV dword ptr [EAX + 0xcb4],0x1     ; 004845d4
    FLD float ptr [EBX + 0xbfe8]        ; 004845de
    FMUL ST1                            ; 004845e4
    FDIV ST0,ST2                        ; 004845e6
    INC EDI                             ; 004845e8
    CALL crt_math.c_round_FUN_005fe6b0  ; 004845e9
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EAX + 0xcc0]       ; 004845ee
    MOV EAX,dword ptr [EBX + 0xbf68]    ; 004845f4
    ADD ESI,0x4                         ; 004845fa
    CMP EDI,EAX                         ; 004845fd
    JL 0x004845c4                       ; 004845ff
        ;   XREF to: 004845c4 (CONDITIONAL_JUMP)  ; LAB_004845c4
    FSTP ST0                            ; 00484601
    FSTP ST0                            ; 00484603
    JMP 0x004844a0                      ; 00484605
        ;   XREF to: 004844a0 (UNCONDITIONAL_JUMP)  ; LAB_004844a0
    FLD float ptr [EBX + 0xbf54]        ; 0048460a
        ;   Label: LAB_0048460a
    FSUB float ptr [EBP + 0x92]         ; 00484610
    FSTP float ptr [EBX + 0xbf54]       ; 00484616
    JMP 0x004844d9                      ; 0048461c
        ;   XREF to: 004844d9 (UNCONDITIONAL_JUMP)  ; LAB_004844d9
    PUSH EAX                            ; 00484621
        ;   Label: LAB_00484621
    PUSH EBX                            ; 00484622
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40 ; 00484623
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter * this_ptr, uint event_id)
    ADD ESP,0x8                         ; 00484628
    JMP 0x0048450b                      ; 0048462b
        ;   XREF to: 0048450b (UNCONDITIONAL_JUMP)  ; LAB_0048450b
    PUSH ESI                            ; 00484630
        ;   Label: LAB_00484630
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00484631
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00484636
    ADD ESP,0x4                         ; 00484639
    MOV ESI,EAX                         ; 0048463c
    CMP EAX,0x9                         ; 0048463e
    JNZ 0x0048489a                      ; 00484641
        ;   XREF to: 0048489a (CONDITIONAL_JUMP)  ; LAB_0048489a
    FLD float ptr [EBP + 0x92]          ; 00484647
    FLD float ptr [0x0065cd84]          ; 0048464d | FLOAT_0065cd84
    FMUL ST1                            ; 00484653
    FLD float ptr [0x0065cd80]          ; 00484655 | FLOAT_0065cd80
    FMULP ST2                           ; 0048465b
    FMUL float ptr [EBX + 0xbe24]       ; 0048465d
    FLD float ptr [EBX + 0xbe24]        ; 00484663
    FMULP ST2                           ; 00484669
    FSTP float ptr [EBX + 0x2438]       ; 0048466b
    FSTP float ptr [EBX + 0x2434]       ; 00484671
    PUSH dword ptr [EBP + 0x92]         ; 00484677
        ;   Label: LAB_00484677
    PUSH EBX                            ; 0048467d
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70 ; 0048467e
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00484683
    TEST EAX,EAX                        ; 00484686
    JZ 0x004858c4                       ; 00484688
        ;   XREF to: 004858c4 (CONDITIONAL_JUMP)  ; LAB_004858c4
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 0048468e
    CMP EAX,0x2                         ; 00484694
    JNC 0x004848ee                      ; 00484697
        ;   XREF to: 004848ee (CONDITIONAL_JUMP)  ; LAB_004848ee
    CMP EAX,0x1                         ; 0048469d
    JNZ 0x004848f9                      ; 004846a0
        ;   XREF to: 004848f9 (CONDITIONAL_JUMP)  ; LAB_004848f9
    PUSH 0x1                            ; 004846a6
        ;   Label: LAB_004846a6
    PUSH 0xe                            ; 004846a8
    LEA EAX,[EBX + 0x158]               ; 004846aa
        ;   Label: LAB_004846aa
    PUSH EAX                            ; 004846b0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004846b1
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004846b6
        ;   Label: LAB_004846b6
    LEA EAX,[EBX + 0x23ac]              ; 004846b9
    MOV dword ptr [EAX + 0x8],0x0       ; 004846bf
    MOV EDX,dword ptr [EAX + 0x8]       ; 004846c6
    MOV dword ptr [EAX + 0x4],EDX       ; 004846c9
    MOV EDX,dword ptr [EAX + 0x4]       ; 004846cc
    MOV dword ptr [EAX],EDX             ; 004846cf
    LEA EAX,[EAX]                       ; 004846d1
    LEA EDX,[EDX]                       ; 004846d7
    LEA EAX,[EAX]                       ; 004846dd
    FLD float ptr [EBX + 0xbe38]        ; 004846e0
        ;   Label: caseD_1
    FLDZ                                ; 004846e6
    FCOMPP                              ; 004846e8
    FNSTSW AX                           ; 004846ea
    SAHF                                ; 004846ec
    JNC 0x00484701                      ; 004846ed
        ;   XREF to: 00484701 (CONDITIONAL_JUMP)  ; LAB_00484701
    FLD float ptr [EBX + 0xbe38]        ; 004846ef
    FSUB float ptr [EBP + 0x92]         ; 004846f5
    FSTP float ptr [EBX + 0xbe38]       ; 004846fb
    LEA EAX,[EBX + 0x158]               ; 00484701
        ;   Label: LAB_00484701
    PUSH EAX                            ; 00484707
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00484708
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0048470d
    ADD ESP,0x4                         ; 00484710
    MOV dword ptr [EBP + 0x62],EAX      ; 00484713
    CMP EAX,0x11                        ; 00484716
    JZ 0x004858d4                       ; 00484719
        ;   XREF to: 004858d4 (CONDITIONAL_JUMP)  ; LAB_004858d4
    CMP EAX,0x10                        ; 0048471f
    JZ 0x004858d4                       ; 00484722
        ;   XREF to: 004858d4 (CONDITIONAL_JUMP)  ; LAB_004858d4
    CMP EAX,0xf                         ; 00484728
    JZ 0x004858d4                       ; 0048472b
        ;   XREF to: 004858d4 (CONDITIONAL_JUMP)  ; LAB_004858d4
    CMP dword ptr [EBP + 0x62],0x3      ; 00484731
        ;   Label: LAB_00484731
    JNZ 0x0048474d                      ; 00484735
        ;   XREF to: 0048474d (CONDITIONAL_JUMP)  ; LAB_0048474d
    FLD float ptr [EBX + 0x23b4]        ; 00484737
    FLD ST0                             ; 0048473d
    FMUL double ptr [0x00621af6]        ; 0048473f | DOUBLE_00621af6
    FSTP ST1                            ; 00484745
    FSTP float ptr [EBX + 0x23b4]       ; 00484747
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 0048474d
        ;   Label: LAB_0048474d
    TEST ESI,ESI                        ; 00484753
    JZ 0x00484782                       ; 00484755
        ;   XREF to: 00484782 (CONDITIONAL_JUMP)  ; LAB_00484782
    MOV EAX,ESI                         ; 00484757
    PUSH EAX                            ; 00484759
    MOV ESI,dword ptr [ESI + 0x154]     ; 0048475a
    CALL dword ptr [ESI + 0x108]        ; 00484760
    ADD ESP,0x4                         ; 00484766
    CMP EAX,EBX                         ; 00484769
    JNZ 0x00484782                      ; 0048476b
        ;   XREF to: 00484782 (CONDITIONAL_JUMP)  ; LAB_00484782
    MOV EDI,dword ptr [EBX + 0xbe3c]    ; 0048476d
    PUSH EDI                            ; 00484773
    MOV EAX,[0x006810c8]                ; 00484774 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EAX                            ; 00484779 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 0048477a
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0048477f
    FLD float ptr [EBP + 0x92]          ; 00484782
        ;   Label: LAB_00484782
    FLD ST0                             ; 00484788
    FMUL double ptr [0x00621afe]        ; 0048478a | DOUBLE_00621afe
    FLD float ptr [EBX + 0x242c]        ; 00484790
    FXCH                                ; 00484796
    FSUBR ST0,ST1                       ; 00484798
    LEA EDI,[EBX + 0x2428]              ; 0048479a
    FSTP ST1                            ; 004847a0
    FSTP float ptr [EBX + 0x242c]       ; 004847a2
    FLD float ptr [EDI]                 ; 004847a8
    FMUL ST1                            ; 004847aa
    FSTP float ptr [EBP + 0xffffff2a]   ; 004847ac
    FLD float ptr [EDI + 0x4]           ; 004847b2
    FMUL ST1                            ; 004847b5
    LEA EAX,[EBX + 0x241c]              ; 004847b7
    FSTP float ptr [EBP + 0xffffff2e]   ; 004847bd
    FMUL float ptr [EDI + 0x8]          ; 004847c3
    LEA ESI,[EBX + 0x23ac]              ; 004847c6
    FLD float ptr [EBP + 0xffffff2a]    ; 004847cc
    FXCH                                ; 004847d2
    FSTP float ptr [EBP + 0xffffff32]   ; 004847d4
    FADD float ptr [EAX]                ; 004847da
    FLD float ptr [EBP + 0xffffff2e]    ; 004847dc
    FXCH                                ; 004847e2
    FSTP float ptr [EBP + 0xfffffeb2]   ; 004847e4
    FADD float ptr [EAX + 0x4]          ; 004847ea
    FLD float ptr [EBP + 0xffffff32]    ; 004847ed
    FXCH                                ; 004847f3
    FSTP float ptr [EBP + 0xfffffeb6]   ; 004847f5
    FADD float ptr [EAX + 0x8]          ; 004847fb | DAT_00002424
    FLD float ptr [EBP + 0xfffffeb2]    ; 004847fe
    FXCH                                ; 00484804
    FSTP float ptr [EBP + 0xfffffeba]   ; 00484806
    FADD float ptr [ESI]                ; 0048480c
    FLD float ptr [EBP + 0xfffffeb6]    ; 0048480e
    FXCH                                ; 00484814
    FSTP float ptr [EBP + -0x5e]        ; 00484816
    FADD float ptr [ESI + 0x4]          ; 00484819
    FLD float ptr [EBP + 0xfffffeba]    ; 0048481c
    FXCH                                ; 00484822
    FSTP float ptr [EBP + -0x5a]        ; 00484824
    FADD float ptr [ESI + 0x8]          ; 00484827
    FSTP float ptr [EBP + -0x56]        ; 0048482a
    MOV dword ptr [EAX + 0x8],0x0       ; 0048482d | DAT_00002424
    MOV EDX,dword ptr [EAX + 0x8]       ; 00484834 | DAT_00002424
    MOV dword ptr [EAX + 0x4],EDX       ; 00484837
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048483a
    MOV dword ptr [EAX],EDX             ; 0048483d
    MOV dword ptr [ESI + 0x8],0x0       ; 0048483f
    LEA EAX,[EBP + -0x5e]               ; 00484846
    FLD float ptr [ESI + 0x8]           ; 00484849
    PUSH EAX                            ; 0048484c
    FST float ptr [ESI + 0x4]           ; 0048484d
    PUSH EBX                            ; 00484850
    FSTP float ptr [ESI]                ; 00484851
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40 ; 00484853
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00484858
    CMP dword ptr [EBP + 0x62],0x17     ; 0048485b
        ;   Label: LAB_0048485b
    JZ 0x0048486b                       ; 0048485f
        ;   XREF to: 0048486b (CONDITIONAL_JUMP)  ; LAB_0048486b
    MOV dword ptr [EBX + 0xbf48],0x0    ; 00484861
    PUSH EBX                            ; 0048486b
        ;   Label: LAB_0048486b
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00429820 ; 0048486c
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00484871
    LEA EAX,[EBX + 0x158]               ; 00484874
    PUSH EAX                            ; 0048487a
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 0048487b
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00484880
    PUSH dword ptr [EBP + 0x92]         ; 00484883
    PUSH EBX                            ; 00484889
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 0048488a
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr, float delta_time, float param_3)
    ADD ESP,0x8                         ; 0048488f
    LEA ESP,[EBP + 0x7a]                ; 00484892
        ;   Label: LAB_00484892
    POP EBP                             ; 00484895
    POP EDI                             ; 00484896
    POP ESI                             ; 00484897
    POP EBX                             ; 00484898
    RET                                 ; 00484899
    FLD float ptr [0x0065cd7c]          ; 0048489a | FLOAT_0065cd7c
        ;   Label: LAB_0048489a
    FMUL float ptr [EBP + 0x92]         ; 004848a0
    FMUL float ptr [EBX + 0xbe24]       ; 004848a6
    MOV EAX,dword ptr [EBX + 0x23b4]    ; 004848ac
    MOV dword ptr [EBX + 0x2434],EAX    ; 004848b2
    FSTP float ptr [EBX + 0x2438]       ; 004848b8
    JMP 0x00484677                      ; 004848be
        ;   XREF to: 00484677 (UNCONDITIONAL_JUMP)  ; LAB_00484677
    PUSH 0x1                            ; 004848c3
        ;   Label: LAB_004848c3
    PUSH 0x0                            ; 004848c5
    LEA EAX,[EBX + 0x158]               ; 004848c7
    PUSH EAX                            ; 004848cd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004848ce
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004848d3
    PUSH EBX                            ; 004848d6
    MOV EAX,0x6219d0                    ; 004848d7 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 004848dc | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x0066e8e0]      ; 004848dd | g_CConsolePtr
    PUSH ESI                            ; 004848e3 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004848e4
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    JMP 0x004846b6                      ; 004848e9
        ;   XREF to: 004846b6 (UNCONDITIONAL_JUMP)  ; LAB_004846b6
    JBE 0x004846a6                      ; 004848ee
        ;   XREF to: 004846a6 (CONDITIONAL_JUMP)  ; LAB_004846a6
        ;   Label: LAB_004848ee
    CMP EAX,0x3                         ; 004848f4
    JZ 0x004848c3                       ; 004848f7
        ;   XREF to: 004848c3 (CONDITIONAL_JUMP)  ; LAB_004848c3
    PUSH 0x1                            ; 004848f9
        ;   Label: LAB_004848f9
    PUSH 0x0                            ; 004848fb
    JMP 0x004846aa                      ; 004848fd
        ;   XREF to: 004846aa (UNCONDITIONAL_JUMP)  ; LAB_004846aa
    FLD float ptr [EBX + 0xbf50]        ; 00484902
        ;   Label: caseD_17
    FLDZ                                ; 00484908
    FCOMPP                              ; 0048490a
    FNSTSW AX                           ; 0048490c
    SAHF                                ; 0048490e
    JNC 0x0048493f                      ; 0048490f
        ;   XREF to: 0048493f (CONDITIONAL_JUMP)  ; LAB_0048493f
    MOV EAX,dword ptr [EBX + 0xbf48]    ; 00484911
        ;   Label: LAB_00484911
    CMP EAX,0x3                         ; 00484917
    JA 0x004846e0                       ; 0048491a
        ;   XREF to: 004846e0 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x484394]  ; 00484920 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH 0x1                            ; 00484927
        ;   Label: caseD_0
    PUSH 0x0                            ; 00484929
    LEA EAX,[EBX + 0x158]               ; 0048492b
    PUSH EAX                            ; 00484931
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00484932
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00484937
    JMP 0x004846e0                      ; 0048493a
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [EBX + 0xbf44]    ; 0048493f
        ;   Label: LAB_0048493f
    PUSH ESI                            ; 00484945
    PUSH 0x6219fa                       ; 00484946 | = "bride-%d?.wav"
    LEA EAX,[EBP + 0xfffffbf6]          ; 0048494b
    PUSH EAX                            ; 00484951
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00484952
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00484957
    LEA EAX,[EBP + 0xfffffbf6]          ; 0048495a
    PUSH 0x3f800000                     ; 00484960
    PUSH EAX                            ; 00484965
    PUSH EBX                            ; 00484966
    CALL core_dracbrid.cpp_CDraculaBride_FUN_004864c0 ; 00484967
        ;   XREF to: 004864c0 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_CDraculaBride_FUN_004864c0(CDraculaBride * this_ptr)
    ADD ESP,0xc                         ; 0048496c
    PUSH 0x3e4ccccd                     ; 0048496f
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 00484974
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 00484979
    TEST EAX,EAX                        ; 0048497c
    JZ 0x00484911                       ; 0048497e
        ;   XREF to: 00484911 (CONDITIONAL_JUMP)  ; LAB_00484911
    LEA EAX,[EBP + 0xfffffbf6]          ; 00484980
    PUSH 0x3f800000                     ; 00484986
    PUSH EAX                            ; 0048498b
    PUSH EBX                            ; 0048498c
    CALL core_dracbrid.cpp_CDraculaBride_FUN_004864c0 ; 0048498d
        ;   XREF to: 004864c0 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_CDraculaBride_FUN_004864c0(CDraculaBride * this_ptr)
    ADD ESP,0xc                         ; 00484992
    JMP 0x00484911                      ; 00484995
        ;   XREF to: 00484911 (UNCONDITIONAL_JUMP)  ; LAB_00484911
    FLD float ptr [EBX + 0xbf4c]        ; 0048499a
        ;   Label: caseD_1
    FADD float ptr [EBP + 0x92]         ; 004849a0
    FST float ptr [EBX + 0xbf4c]        ; 004849a6
    FCOMP float ptr [0x0065cd88]        ; 004849ac | FLOAT_0065cd88
    FNSTSW AX                           ; 004849b2
    SAHF                                ; 004849b4
    JBE 0x004849cc                      ; 004849b5
        ;   XREF to: 004849cc (CONDITIONAL_JUMP)  ; LAB_004849cc
    MOV dword ptr [EBX + 0xbf48],0x2    ; 004849b7
    MOV EAX,[0x0065cd88]                ; 004849c1 | FLOAT_0065cd88
    MOV dword ptr [EBX + 0xbf4c],EAX    ; 004849c6
    MOV ECX,0x40400000                  ; 004849cc
        ;   Label: LAB_004849cc
    LEA EAX,[EBX + 0x158]               ; 004849d1
    XOR EDX,EDX                         ; 004849d7
    XOR ESI,ESI                         ; 004849d9
    MOV dword ptr [EBP + 0xffffff42],EDX ; 004849db
    MOV dword ptr [EBP + 0xffffff46],ECX ; 004849e1
    PUSH EAX                            ; 004849e7
    MOV dword ptr [EBP + 0xffffff4a],EDX ; 004849e8
    MOV dword ptr [EBP + 0x5e],EAX      ; 004849ee
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 004849f1
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004849f6
    MOV EDX,dword ptr [EAX + 0x28558]   ; 004849f9
    MOV EDI,EAX                         ; 004849ff
    TEST EDX,EDX                        ; 00484a01
    JLE 0x004846e0                      ; 00484a03
        ;   XREF to: 004846e0 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x5e]      ; 00484a09
    MOV dword ptr [EBP + 0x66],EAX      ; 00484a0c
    PUSH ESI                            ; 00484a0f
        ;   Label: LAB_00484a0f
    LEA EAX,[EBP + 0x26]                ; 00484a10
    PUSH EAX                            ; 00484a13
    MOV EAX,dword ptr [EBP + 0x66]      ; 00484a14
    PUSH EAX                            ; 00484a17
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 00484a18
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00484a1d
    PUSH EAX                            ; 00484a20
    LEA EAX,[EBP + 0xffffff72]          ; 00484a21
    PUSH EAX                            ; 00484a27
    PUSH EBX                            ; 00484a28
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00484a29
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00484a2e
    PUSH 0xffff                         ; 00484a31
    LEA EAX,[EBP + 0xffffff42]          ; 00484a36
    PUSH EAX                            ; 00484a3c
    LEA EAX,[EBP + 0xffffff72]          ; 00484a3d
    PUSH 0x3f000000                     ; 00484a43
    PUSH EAX                            ; 00484a48
    MOV EDX,dword ptr [0x0067a3d0]      ; 00484a49 | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH EDX                            ; 00484a4f | g_CFireEffectInstance
    INC ESI                             ; 00484a50
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20 ; 00484a51
        ;   XREF to: 004c7b20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    MOV ECX,dword ptr [EDI + 0x28558]   ; 00484a56
    ADD ESP,0x14                        ; 00484a5c
    CMP ESI,ECX                         ; 00484a5f
    JL 0x00484a0f                       ; 00484a61
        ;   XREF to: 00484a0f (CONDITIONAL_JUMP)  ; LAB_00484a0f
    JMP 0x004846e0                      ; 00484a63
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    MOV ESI,0x1                         ; 00484a68
        ;   Label: caseD_2
    XOR EDI,EDI                         ; 00484a6d
    XOR EAX,EAX                         ; 00484a6f
    MOV dword ptr [EBP + 0x5a],ESI      ; 00484a71
    MOV dword ptr [EBP + 0x72],EDI      ; 00484a74
    MOV dword ptr [EBP + 0x6e],EAX      ; 00484a77
    LEA EDI,[EBX + 0xbf58]              ; 00484a7a
    MOV EAX,[0x006810c8]                ; 00484a80 | g_CDemonSetPtr
        ;   Label: LAB_00484a80
    MOV ESI,dword ptr [EBP + 0x72]      ; 00484a85
    CMP ESI,dword ptr [EAX + 0x14f098]  ; 00484a88 | g_CDemonSetInstance.damage_listener_count
    JGE 0x00484b1a                      ; 00484a8e
        ;   XREF to: 00484b1a (CONDITIONAL_JUMP)  ; LAB_00484b1a
    ADD EAX,dword ptr [EBP + 0x6e]      ; 00484a94
    MOV ESI,dword ptr [EAX + 0x14f09c]  ; 00484a97 | g_CDemonSetInstance.damage_listeners | DAT_03263318
    TEST ESI,ESI                        ; 00484a9d
    JNZ 0x00484ab3                      ; 00484a9f
        ;   XREF to: 00484ab3 (CONDITIONAL_JUMP)  ; LAB_00484ab3
    MOV ESI,dword ptr [EBP + 0x72]      ; 00484aa1
        ;   Label: LAB_00484aa1
    MOV ECX,dword ptr [EBP + 0x6e]      ; 00484aa4
    INC ESI                             ; 00484aa7
    ADD ECX,0x4                         ; 00484aa8
    MOV dword ptr [EBP + 0x72],ESI      ; 00484aab
    MOV dword ptr [EBP + 0x6e],ECX      ; 00484aae
    JMP 0x00484a80                      ; 00484ab1
        ;   XREF to: 00484a80 (UNCONDITIONAL_JUMP)  ; LAB_00484a80
    CMP ESI,EBX                         ; 00484ab3
        ;   Label: LAB_00484ab3
    JZ 0x00484aa1                       ; 00484ab5
        ;   XREF to: 00484aa1 (CONDITIONAL_JUMP)  ; LAB_00484aa1
    PUSH ESI                            ; 00484ab7
    MOV EAX,dword ptr [ESI + 0x154]     ; 00484ab8
    CALL dword ptr [EAX + 0x120]        ; 00484abe
    ADD ESP,0x4                         ; 00484ac4
    TEST EAX,EAX                        ; 00484ac7
    JG 0x00484aa1                       ; 00484ac9
        ;   XREF to: 00484aa1 (CONDITIONAL_JUMP)  ; LAB_00484aa1
    FLD float ptr [ESI + 0x20]          ; 00484acb
    FSUB float ptr [EDI]                ; 00484ace
    FSTP float ptr [EBP + 0xfffffeee]   ; 00484ad0
    FLD float ptr [ESI + 0x24]          ; 00484ad6
    FSUB float ptr [EDI + 0x4]          ; 00484ad9
    FST float ptr [EBP + 0xfffffef2]    ; 00484adc
    FMUL float ptr [EBP + 0xfffffef2]   ; 00484ae2
    FLD float ptr [EBP + 0xfffffeee]    ; 00484ae8
    FMUL ST0                            ; 00484aee
    FLD float ptr [ESI + 0x28]          ; 00484af0
    FSUB float ptr [EDI + 0x8]          ; 00484af3
    FXCH                                ; 00484af6
    FADDP ST2,ST0                       ; 00484af8
    FST float ptr [EBP + 0xfffffef6]    ; 00484afa
    FMUL float ptr [EBP + 0xfffffef6]   ; 00484b00
    FADDP                               ; 00484b06
    FSQRT                               ; 00484b08
    FCOMP double ptr [0x00621b06]       ; 00484b0a | DOUBLE_00621b06
    FNSTSW AX                           ; 00484b10
    SAHF                                ; 00484b12
    JNC 0x00484aa1                      ; 00484b13
        ;   XREF to: 00484aa1 (CONDITIONAL_JUMP)  ; LAB_00484aa1
    JMP 0x004846e0                      ; 00484b15
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    CMP dword ptr [EBP + 0x5a],0x0      ; 00484b1a
        ;   Label: LAB_00484b1a
    JZ 0x004846e0                       ; 00484b1e
        ;   XREF to: 004846e0 (CONDITIONAL_JUMP)  ; default
    FLD float ptr [0x0065cd88]          ; 00484b24 | FLOAT_0065cd88
    MOV dword ptr [EBX + 0xbf48],0x3    ; 00484b2a
    LEA EAX,[EBX + 0x20]                ; 00484b34
    FSTP float ptr [EBX + 0xbf4c]       ; 00484b37
    MOV EDX,dword ptr [EDI]             ; 00484b3d
    MOV dword ptr [EAX],EDX             ; 00484b3f
    MOV EDX,dword ptr [EDI + 0x4]       ; 00484b41
    MOV dword ptr [EAX + 0x4],EDX       ; 00484b44
    MOV EDX,dword ptr [EDI + 0x8]       ; 00484b47
    MOV dword ptr [EAX + 0x8],EDX       ; 00484b4a
    MOV EDI,dword ptr [EBX + 0xbe3c]    ; 00484b4d
    TEST EDI,EDI                        ; 00484b53
    JZ 0x00484bab                       ; 00484b55
        ;   XREF to: 00484bab (CONDITIONAL_JUMP)  ; LAB_00484bab
    MOV ESI,EDI                         ; 00484b57
    FLD float ptr [ESI + 0x20]          ; 00484b59
    FSUB float ptr [EAX]                ; 00484b5c
    FSTP float ptr [EBP + -0x52]        ; 00484b5e
    FLD float ptr [ESI + 0x24]          ; 00484b61
    FSUB float ptr [EAX + 0x4]          ; 00484b64
    FSTP float ptr [EBP + -0x4e]        ; 00484b67
    FLD float ptr [ESI + 0x28]          ; 00484b6a
    FSUB float ptr [EAX + 0x8]          ; 00484b6d
    LEA EAX,[EBP + -0x52]               ; 00484b70
    PUSH EAX                            ; 00484b73
    LEA EAX,[EBP + 0xfffffefa]          ; 00484b74
    LEA ESI,[EBX + 0x30]                ; 00484b7a
    PUSH EAX                            ; 00484b7d
    FSTP float ptr [EBP + -0x4a]        ; 00484b7e
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 00484b81
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 00484b86
    CMP ESI,EAX                         ; 00484b89
    JZ 0x00484b9d                       ; 00484b8b
        ;   XREF to: 00484b9d (CONDITIONAL_JUMP)  ; LAB_00484b9d
    MOV EDX,dword ptr [EAX]             ; 00484b8d
    MOV dword ptr [ESI],EDX             ; 00484b8f
    MOV EDX,dword ptr [EAX + 0x4]       ; 00484b91
    MOV dword ptr [ESI + 0x4],EDX       ; 00484b94
    MOV EDX,dword ptr [EAX + 0x8]       ; 00484b97
    MOV dword ptr [ESI + 0x8],EDX       ; 00484b9a
    MOV dword ptr [EBX + 0x38],0x0      ; 00484b9d
        ;   Label: LAB_00484b9d
    MOV dword ptr [EBX + 0x30],0x0      ; 00484ba4
    PUSH 0x621a08                       ; 00484bab | = "hotbride-disappear.wav"
        ;   Label: LAB_00484bab
    MOV EAX,dword ptr [EBX + 0x154]     ; 00484bb0
    PUSH EBX                            ; 00484bb6
    CALL dword ptr [EAX + 0x24]         ; 00484bb7
    ADD ESP,0x8                         ; 00484bba
    JMP 0x004846e0                      ; 00484bbd
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    XOR EDI,EDI                         ; 00484bc2
        ;   Label: caseD_3
    MOV dword ptr [EBP + -0x3a],EDI     ; 00484bc4
    MOV dword ptr [EBP + -0x32],EDI     ; 00484bc7
    LEA EDI,[EBX + 0x158]               ; 00484bca
    MOV EAX,0x40400000                  ; 00484bd0
    PUSH EDI                            ; 00484bd5
    XOR ESI,ESI                         ; 00484bd6
    MOV dword ptr [EBP + -0x36],EAX     ; 00484bd8
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 00484bdb
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00484be0
    MOV ECX,dword ptr [EAX + 0x28558]   ; 00484be3
    MOV dword ptr [EBP + 0x6a],EAX      ; 00484be9
    TEST ECX,ECX                        ; 00484bec
    JLE 0x00484c50                      ; 00484bee
        ;   XREF to: 00484c50 (CONDITIONAL_JUMP)  ; LAB_00484c50
    PUSH ESI                            ; 00484bf0
        ;   Label: LAB_00484bf0
    LEA EAX,[EBP + 0xffffff7e]          ; 00484bf1
    PUSH EAX                            ; 00484bf7
    PUSH EDI                            ; 00484bf8
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 00484bf9
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00484bfe
    PUSH EAX                            ; 00484c01
    LEA EAX,[EBP + 0xffffff5a]          ; 00484c02
    PUSH EAX                            ; 00484c08
    PUSH EBX                            ; 00484c09
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00484c0a
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00484c0f
    PUSH 0xffff                         ; 00484c12
    LEA EAX,[EBP + -0x3a]               ; 00484c17
    PUSH EAX                            ; 00484c1a
    LEA EAX,[EBP + 0xffffff5a]          ; 00484c1b
    PUSH 0x3f000000                     ; 00484c21
    PUSH EAX                            ; 00484c26
    MOV EAX,[0x0067a3d0]                ; 00484c27 | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH EAX                            ; 00484c2c | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20 ; 00484c2d
        ;   XREF to: 004c7b20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004c7b20(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00484c32
    INC ESI                             ; 00484c35
    MOV EDX,dword ptr [EAX + 0x28558]   ; 00484c36
    ADD ESP,0x14                        ; 00484c3c
    CMP ESI,EDX                         ; 00484c3f
    JL 0x00484bf0                       ; 00484c41
        ;   XREF to: 00484bf0 (CONDITIONAL_JUMP)  ; LAB_00484bf0
    LEA EAX,[EAX]                       ; 00484c43
    LEA EDX,[EDX]                       ; 00484c49
    NOP                                 ; 00484c4f
    FLD float ptr [EBX + 0xbf4c]        ; 00484c50
        ;   Label: LAB_00484c50
    FSUB float ptr [EBP + 0x92]         ; 00484c56
    FST float ptr [EBX + 0xbf4c]        ; 00484c5c
    FLDZ                                ; 00484c62
    FCOMPP                              ; 00484c64
    FNSTSW AX                           ; 00484c66
    SAHF                                ; 00484c68
    JBE 0x004846e0                      ; 00484c69
        ;   XREF to: 004846e0 (CONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 00484c6f
    PUSH 0xe                            ; 00484c71
    MOV dword ptr [EBX + 0xbf4c],0x0    ; 00484c73
    PUSH EDI                            ; 00484c7d
    MOV dword ptr [EBX + 0xbf48],0x0    ; 00484c7e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00484c88
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00484c8d
    PUSH 0x41a00000                     ; 00484c90
    PUSH 0x40000000                     ; 00484c95
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00484c9a
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00484c9f
    ADD ESP,0x8                         ; 00484ca2
    MOV EAX,dword ptr [EBP + 0x76]      ; 00484ca5
    MOV dword ptr [EBX + 0xbf54],EAX    ; 00484ca8
    JMP 0x004846e0                      ; 00484cae
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    CMP dword ptr [EBX + 0xbfe4],0x0    ; 00484cb3
        ;   Label: caseD_7
    JNZ 0x004846e0                      ; 00484cba
        ;   XREF to: 004846e0 (CONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [0x02c6d0bc]      ; 00484cc0 | INT_02c6d0bc
    PUSH ESI                            ; 00484cc6
    LEA EAX,[EBP + -0x46]               ; 00484cc7
    PUSH EAX                            ; 00484cca
    LEA EAX,[EBX + 0x158]               ; 00484ccb
    PUSH EAX                            ; 00484cd1
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 00484cd2
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00484cd7
    PUSH EAX                            ; 00484cda
    LEA EAX,[EBP + -0x6a]               ; 00484cdb
    PUSH EAX                            ; 00484cde
    PUSH EBX                            ; 00484cdf
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00484ce0
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00484ce5
    PUSH 0x0                            ; 00484ce8
    PUSH 0x1                            ; 00484cea
    LEA EAX,[EBX + 0x30]                ; 00484cec
    PUSH EAX                            ; 00484cef
    LEA EAX,[EBP + -0x6a]               ; 00484cf0
    PUSH EAX                            ; 00484cf3
    MOV EDI,dword ptr [0x0067a3d0]      ; 00484cf4 | g_CFireEffectPtr
    PUSH EDI                            ; 00484cfa | g_CFireEffectInstance
    LEA ESI,[EBX + 0x30]                ; 00484cfb
    CALL core_fire.cpp_CFireEffect_FUN_004c8ef0 ; 00484cfe
        ;   XREF to: 004c8ef0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c8ef0(CFireEffect * this_ptr)
    MOV EAX,dword ptr [ESI]             ; 00484d03
    MOV dword ptr [EBP + -0x16],EAX     ; 00484d05
    LEA EAX,[ESI + 0x4]                 ; 00484d08
    MOV EAX,dword ptr [EAX]             ; 00484d0b
    ADD ESP,0x14                        ; 00484d0d
    MOV dword ptr [EBP + -0x12],EAX     ; 00484d10
    LEA EAX,[ESI + 0x8]                 ; 00484d13
    PUSH 0x0                            ; 00484d16
    MOV EAX,dword ptr [EAX]             ; 00484d18
    PUSH 0x1                            ; 00484d1a
    MOV dword ptr [EBP + -0xe],EAX      ; 00484d1c
    LEA EAX,[EBP + -0x16]               ; 00484d1f
    PUSH EAX                            ; 00484d22
    LEA EAX,[EBP + -0x6a]               ; 00484d23
    FLD float ptr [EBP + -0x16]         ; 00484d26
    PUSH EAX                            ; 00484d29
    MOV EAX,[0x0067a3d0]                ; 00484d2a | g_CFireEffectPtr | g_CFireEffectInstance
    FADD float ptr [0x00621aee]         ; 00484d2f | FLOAT_00621aee
    PUSH EAX                            ; 00484d35 | g_CFireEffectInstance
    FSTP float ptr [EBP + -0x16]        ; 00484d36
    CALL core_fire.cpp_CFireEffect_FUN_004c8ef0 ; 00484d39
        ;   XREF to: 004c8ef0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c8ef0(CFireEffect * this_ptr)
    ADD ESP,0x14                        ; 00484d3e
    JMP 0x004846e0                      ; 00484d41
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[EBP + 0xfffffdfe]          ; 00484d46
        ;   Label: caseD_2
    PUSH EAX                            ; 00484d4c
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 00484d4d
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00484d52
    PUSH 0x41700000                     ; 00484d55
    PUSH 0x40e00000                     ; 00484d5a
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00484d5f
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00484d64
    ADD ESP,0x8                         ; 00484d67
    LEA EAX,[EBP + 0xfffffdfe]          ; 00484d6a
    MOV ESI,dword ptr [0x02c6d0a0]      ; 00484d70 | INT_02c6d0a0
    PUSH EAX                            ; 00484d76
    LEA EAX,[ESI*0x4 + 0x0]             ; 00484d77
    MOV dword ptr [EBP + 0xfffffe32],EBX ; 00484d7e
    SUB EAX,ESI                         ; 00484d84
    MOV dword ptr [EBP + 0xfffffe36],EBX ; 00484d86
    SHL EAX,0x4                         ; 00484d8c
    LEA ESI,[EBX + 0xfd8]               ; 00484d8f
    ADD EAX,ESI                         ; 00484d95
    PUSH 0x3ecccccd                     ; 00484d97
    PUSH EAX                            ; 00484d9c
    MOV EAX,0x3f87558                   ; 00484d9d | g_ZeroVector
    PUSH EAX                            ; 00484da2 | g_ZeroVector
    LEA EAX,[EBP + -0x2e]               ; 00484da3
    FLD float ptr [EBP + 0x76]          ; 00484da6
    PUSH EAX                            ; 00484da9
    FSTP float ptr [EBP + 0xfffffe02]   ; 00484daa
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00484db0
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00484db5
    PUSH EAX                            ; 00484db8
    LEA EAX,[EBP + -0x76]               ; 00484db9
    PUSH EAX                            ; 00484dbc
    PUSH EBX                            ; 00484dbd
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00484dbe
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00484dc3
    PUSH EAX                            ; 00484dc6
    PUSH EBX                            ; 00484dc7
    CALL core_enemy.cpp_CEnemy_FUN_004a9880 ; 00484dc8
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004a9880(CEnemy * this_ptr)
    ADD ESP,0x10                        ; 00484dcd
    MOV dword ptr [EBX + 0xbf64],0x1    ; 00484dd0
    JMP 0x004846e0                      ; 00484dda
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[EBP + 0xfffffdc2]          ; 00484ddf
        ;   Label: caseD_13
    PUSH EAX                            ; 00484de5
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 00484de6
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00484deb
    PUSH 0x41700000                     ; 00484dee
    PUSH 0x40e00000                     ; 00484df3
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00484df8
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00484dfd
    ADD ESP,0x8                         ; 00484e00
    LEA EAX,[EBP + 0xfffffdc2]          ; 00484e03
    MOV ESI,dword ptr [0x02c6d0a0]      ; 00484e09 | INT_02c6d0a0
    PUSH EAX                            ; 00484e0f
    LEA EAX,[ESI*0x4 + 0x0]             ; 00484e10
    MOV dword ptr [EBP + 0xfffffdf6],EBX ; 00484e17
    SUB EAX,ESI                         ; 00484e1d
    MOV dword ptr [EBP + 0xfffffdfa],EBX ; 00484e1f
    SHL EAX,0x4                         ; 00484e25
    LEA ESI,[EBX + 0xfd8]               ; 00484e28
    ADD EAX,ESI                         ; 00484e2e
    PUSH 0x3ecccccd                     ; 00484e30
    PUSH EAX                            ; 00484e35
    PUSH 0x3f87558                      ; 00484e36 | g_ZeroVector
    LEA EAX,[EBP + 0xffffff4e]          ; 00484e3b
    FLD float ptr [EBP + 0x76]          ; 00484e41
    PUSH EAX                            ; 00484e44
    FSTP float ptr [EBP + 0xfffffdc6]   ; 00484e45
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00484e4b
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00484e50
    PUSH EAX                            ; 00484e53
    LEA EAX,[EBP + -0xa]                ; 00484e54
    PUSH EAX                            ; 00484e57
    PUSH EBX                            ; 00484e58
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00484e59
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00484e5e
    PUSH EAX                            ; 00484e61
    PUSH EBX                            ; 00484e62
    CALL core_enemy.cpp_CEnemy_FUN_004a9880 ; 00484e63
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004a9880(CEnemy * this_ptr)
    ADD ESP,0x10                        ; 00484e68
    MOV dword ptr [EBX + 0xbf64],0x1    ; 00484e6b
    JMP 0x004846e0                      ; 00484e75
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[EBP + 0xfffffe76]          ; 00484e7a
        ;   Label: caseD_14
    PUSH EAX                            ; 00484e80
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 00484e81
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00484e86
    PUSH 0x41700000                     ; 00484e89
    PUSH 0x40e00000                     ; 00484e8e
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00484e93
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00484e98
    ADD ESP,0x8                         ; 00484e9b
    LEA EAX,[EBP + 0xfffffe76]          ; 00484e9e
    MOV ESI,dword ptr [0x02c6d0a0]      ; 00484ea4 | INT_02c6d0a0
    PUSH EAX                            ; 00484eaa
    LEA EAX,[ESI*0x4 + 0x0]             ; 00484eab
    SUB EAX,ESI                         ; 00484eb2
    MOV dword ptr [EBP + 0xfffffeaa],EBX ; 00484eb4
    MOV ESI,EAX                         ; 00484eba
    MOV dword ptr [EBP + 0xfffffeae],EBX ; 00484ebc
    SHL ESI,0x4                         ; 00484ec2
    LEA EAX,[EBX + 0xfd8]               ; 00484ec5
    ADD EAX,ESI                         ; 00484ecb
    PUSH 0x3ecccccd                     ; 00484ecd
    PUSH EAX                            ; 00484ed2
    PUSH 0x3f87558                      ; 00484ed3 | g_ZeroVector
    LEA EAX,[EBP + 0x2]                 ; 00484ed8
    FLD float ptr [EBP + 0x76]          ; 00484edb
    PUSH EAX                            ; 00484ede
    FSTP float ptr [EBP + 0xfffffe7a]   ; 00484edf
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00484ee5
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00484eea
    PUSH EAX                            ; 00484eed
    LEA EAX,[EBP + 0xffffff1e]          ; 00484eee
    PUSH EAX                            ; 00484ef4
    PUSH EBX                            ; 00484ef5
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00484ef6
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00484efb
    PUSH EAX                            ; 00484efe
    PUSH EBX                            ; 00484eff
    CALL core_enemy.cpp_CEnemy_FUN_004a9880 ; 00484f00
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004a9880(CEnemy * this_ptr)
    ADD ESP,0x10                        ; 00484f05
    MOV dword ptr [EBX + 0xbf64],0x1    ; 00484f08
    JMP 0x004846e0                      ; 00484f12
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[EBP + 0xfffffe3a]          ; 00484f17
        ;   Label: caseD_15
    PUSH EAX                            ; 00484f1d
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 00484f1e
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00484f23
    PUSH 0x41700000                     ; 00484f26
    PUSH 0x40e00000                     ; 00484f2b
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00484f30
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00484f35
    ADD ESP,0x8                         ; 00484f38
    LEA EAX,[EBP + 0xfffffe3a]          ; 00484f3b
    MOV ESI,dword ptr [0x02c6d0a8]      ; 00484f41 | INT_02c6d0a8
    PUSH EAX                            ; 00484f47
    LEA EAX,[ESI*0x4 + 0x0]             ; 00484f48
    SUB EAX,ESI                         ; 00484f4f
    MOV dword ptr [EBP + 0xfffffe6e],EBX ; 00484f51
    MOV ESI,EAX                         ; 00484f57
    MOV dword ptr [EBP + 0xfffffe72],EBX ; 00484f59
    SHL ESI,0x4                         ; 00484f5f
    LEA EAX,[EBX + 0xfd8]               ; 00484f62
    ADD EAX,ESI                         ; 00484f68
    PUSH 0x3ecccccd                     ; 00484f6a
    PUSH EAX                            ; 00484f6f
    PUSH 0x3f87558                      ; 00484f70 | g_ZeroVector
    LEA EAX,[EBP + 0xfffffeca]          ; 00484f75
    FLD float ptr [EBP + 0x76]          ; 00484f7b
    PUSH EAX                            ; 00484f7e
    FSTP float ptr [EBP + 0xfffffe3e]   ; 00484f7f
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00484f85
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00484f8a
    PUSH EAX                            ; 00484f8d
    LEA EAX,[EBP + 0xffffff36]          ; 00484f8e
    PUSH EAX                            ; 00484f94
    PUSH EBX                            ; 00484f95
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00484f96
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00484f9b
    PUSH EAX                            ; 00484f9e
    PUSH EBX                            ; 00484f9f
    CALL core_enemy.cpp_CEnemy_FUN_004a9880 ; 00484fa0
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004a9880(CEnemy * this_ptr)
    ADD ESP,0x10                        ; 00484fa5
    JMP 0x004846e0                      ; 00484fa8
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [EBX + 0xbe28]    ; 00484fad
        ;   Label: caseD_11
    TEST ESI,ESI                        ; 00484fb3
    JNZ 0x004846e0                      ; 00484fb5
        ;   XREF to: 004846e0 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [EBX + 0xdc],0x0      ; 00484fbb
    JNZ 0x004846e0                      ; 00484fc2
        ;   XREF to: 004846e0 (CONDITIONAL_JUMP)  ; default
    PUSH EAX                            ; 00484fc8
    LEA EAX,[EBP + 0xfffffed6]          ; 00484fc9
    PUSH EAX                            ; 00484fcf
    LEA EAX,[EBX + 0x158]               ; 00484fd0
    PUSH EAX                            ; 00484fd6
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 00484fd7
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00484fdc
    PUSH EAX                            ; 00484fdf
    LEA EAX,[EBP + 0xfffffebe]          ; 00484fe0
    PUSH EAX                            ; 00484fe6
    PUSH EBX                            ; 00484fe7
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00484fe8
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00484fed
    PUSH ESI                            ; 00484ff0
    LEA EAX,[EBP + 0xfffffebe]          ; 00484ff1
    PUSH EAX                            ; 00484ff7
    MOV EAX,[0x0067b9a0]                ; 00484ff8 | g_CGorePtr | g_CGoreInstance
    PUSH EAX                            ; 00484ffd | g_CGoreInstance
    CALL core_gore.cpp_CGore_FUN_004ede30 ; 00484ffe
        ;   XREF to: 004ede30 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_FUN_004ede30(CGore * this_ptr)
    ADD ESP,0xc                         ; 00485003
    MOV dword ptr [EBX + 0xbe28],0x1    ; 00485006
        ;   Label: caseD_10
    JMP 0x004846e0                      ; 00485010
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x02db87d0]                ; 00485015 | g_LocalHeroIndex
        ;   Label: caseD_c
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 0048501a | g_HeroActors
    PUSH EAX                            ; 00485021
    MOV ESI,dword ptr [EAX + 0x154]     ; 00485022
    CALL dword ptr [ESI + 0x120]        ; 00485028
    ADD ESP,0x4                         ; 0048502e
    TEST EAX,EAX                        ; 00485031
    JNZ 0x004846e0                      ; 00485033
        ;   XREF to: 004846e0 (CONDITIONAL_JUMP)  ; default
    LEA EAX,[EBX + 0xbee0]              ; 00485039
    PUSH EAX                            ; 0048503f
    MOV ESI,dword ptr [0x006793d0]      ; 00485040 | g_CEventListPtr
    PUSH ESI                            ; 00485046 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 00485047
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0048504c
    TEST EAX,EAX                        ; 0048504f
    JZ 0x004846e0                       ; 00485051
        ;   XREF to: 004846e0 (CONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 00485057
    PUSH 0xd                            ; 00485059
    LEA EAX,[EBX + 0x158]               ; 0048505b
    PUSH EAX                            ; 00485061
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00485062
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00485067
    JMP 0x004846e0                      ; 0048506a
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x02db87d0]                ; 0048506f | g_LocalHeroIndex
        ;   Label: caseD_12
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 00485074 | g_HeroActors
    PUSH EAX                            ; 0048507b
    MOV ESI,dword ptr [EAX + 0x154]     ; 0048507c
    CALL dword ptr [ESI + 0x120]        ; 00485082
    ADD ESP,0x4                         ; 00485088
    TEST EAX,EAX                        ; 0048508b
    JNZ 0x004846e0                      ; 0048508d
        ;   XREF to: 004846e0 (CONDITIONAL_JUMP)  ; default
    LEA EAX,[EBX + 0xbee0]              ; 00485093
    PUSH EAX                            ; 00485099
    MOV ECX,dword ptr [0x006793d0]      ; 0048509a | g_CEventListPtr
    PUSH ECX                            ; 004850a0 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 004850a1
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004850a6
    TEST EAX,EAX                        ; 004850a9
    JZ 0x004846e0                       ; 004850ab
        ;   XREF to: 004846e0 (CONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 004850b1
    PUSH 0xd                            ; 004850b3
    LEA EAX,[EBX + 0x158]               ; 004850b5
    PUSH EAX                            ; 004850bb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004850bc
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004850c1
    JMP 0x004846e0                      ; 004850c4
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[EBX + 0xbee0]              ; 004850c9
        ;   Label: caseD_1a
    PUSH EAX                            ; 004850cf
    MOV ECX,dword ptr [0x006793d0]      ; 004850d0 | g_CEventListPtr
    PUSH ECX                            ; 004850d6 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 004850d7
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004850dc
    TEST EAX,EAX                        ; 004850df
    JZ 0x004846e0                       ; 004850e1
        ;   XREF to: 004846e0 (CONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 004850e7
    PUSH 0x0                            ; 004850e9
    LEA EAX,[EBX + 0x158]               ; 004850eb
    PUSH EAX                            ; 004850f1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004850f2
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004850f7
    JMP 0x004846e0                      ; 004850fa
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[EBX + 0xbee0]              ; 004850ff
        ;   Label: caseD_f
    PUSH EAX                            ; 00485105
    MOV EDX,dword ptr [0x006793d0]      ; 00485106 | g_CEventListPtr
    PUSH EDX                            ; 0048510c | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0048510d
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00485112
    TEST EAX,EAX                        ; 00485115
    JZ 0x004846e0                       ; 00485117
        ;   XREF to: 004846e0 (CONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 0048511d
    PUSH 0xb                            ; 0048511f
    LEA EAX,[EBX + 0x158]               ; 00485121
    PUSH EAX                            ; 00485127
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00485128
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0048512d
    JMP 0x004846e0                      ; 00485130
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    PUSH dword ptr [EBP + 0x92]         ; 00485135
        ;   Label: caseD_8
    MOV EAX,dword ptr [EBX + 0x154]     ; 0048513b
    PUSH EBX                            ; 00485141
    CALL dword ptr [EAX + 0x158]        ; 00485142
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00485148
    ADD ESP,0x8                         ; 0048514e
    TEST EAX,EAX                        ; 00485151
    JZ 0x004851d6                       ; 00485153
        ;   XREF to: 004851d6 (CONDITIONAL_JUMP)  ; LAB_004851d6
    FLD float ptr [EBX + 0x243c]        ; 00485159
    FCOMP float ptr [0x0065cd78]        ; 0048515f | FLOAT_0065cd78
    FNSTSW AX                           ; 00485165
    SAHF                                ; 00485167
    JC 0x00485179                       ; 00485168
        ;   XREF to: 00485179 (CONDITIONAL_JUMP)  ; LAB_00485179
    FLD float ptr [EBX + 0xbf54]        ; 0048516a
    FLDZ                                ; 00485170
    FCOMPP                              ; 00485172
    FNSTSW AX                           ; 00485174
    SAHF                                ; 00485176
    JBE 0x004851aa                      ; 00485177
        ;   XREF to: 004851aa (CONDITIONAL_JUMP)  ; LAB_004851aa
    PUSH 0x1                            ; 00485179
        ;   Label: LAB_00485179
    PUSH 0x0                            ; 0048517b
    LEA EAX,[EBX + 0x158]               ; 0048517d
    PUSH EAX                            ; 00485183
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00485184
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00485189
    PUSH 0x41a00000                     ; 0048518c
    PUSH 0x40000000                     ; 00485191
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00485196
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0048519b
    ADD ESP,0x8                         ; 0048519e
    MOV EAX,dword ptr [EBP + 0x76]      ; 004851a1
    MOV dword ptr [EBX + 0xbf54],EAX    ; 004851a4
    MOV EDX,dword ptr [EBX + 0xbf64]    ; 004851aa
        ;   Label: LAB_004851aa
    LEA EAX,[EBX + 0x158]               ; 004851b0
    TEST EDX,EDX                        ; 004851b6
    JZ 0x00485205                       ; 004851b8
        ;   XREF to: 00485205 (CONDITIONAL_JUMP)  ; LAB_00485205
    PUSH 0x1                            ; 004851ba
    PUSH 0x19                           ; 004851bc
    PUSH EAX                            ; 004851be
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004851bf
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004851c4
    MOV dword ptr [EBX + 0xbf64],0x0    ; 004851c7
    JMP 0x004846e0                      ; 004851d1
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    PUSH dword ptr [EBP + 0x92]         ; 004851d6
        ;   Label: LAB_004851d6
    PUSH EBX                            ; 004851dc
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 004851dd
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr)
    ADD ESP,0x8                         ; 004851e2
    TEST EAX,EAX                        ; 004851e5
    JZ 0x004846e0                       ; 004851e7
        ;   XREF to: 004846e0 (CONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 004851ed
    PUSH 0xe                            ; 004851ef
    LEA EAX,[EBX + 0x158]               ; 004851f1
    PUSH EAX                            ; 004851f7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004851f8
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004851fd
    JMP 0x004846e0                      ; 00485200
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 00485205
        ;   Label: LAB_00485205
    PUSH 0x9                            ; 00485207
    PUSH EAX                            ; 00485209
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0048520a
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0048520f
    JMP 0x004846e0                      ; 00485212
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [EBX + 0xbf50]        ; 00485217
        ;   Label: caseD_9
    FLDZ                                ; 0048521d
    FCOMPP                              ; 0048521f
    FNSTSW AX                           ; 00485221
    SAHF                                ; 00485223
    JC 0x0048527c                       ; 00485224
        ;   XREF to: 0048527c (CONDITIONAL_JUMP)  ; LAB_0048527c
    MOV EDI,dword ptr [EBX + 0xbf44]    ; 00485226
    PUSH EDI                            ; 0048522c
    PUSH 0x621a1f                       ; 0048522d | = "bride-%d?.wav"
    LEA EAX,[EBP + 0xfffffcbe]          ; 00485232
    PUSH EAX                            ; 00485238
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00485239
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0048523e
    LEA EAX,[EBP + 0xfffffcbe]          ; 00485241
    PUSH 0x3f800000                     ; 00485247
    PUSH EAX                            ; 0048524c
    PUSH EBX                            ; 0048524d
    CALL core_dracbrid.cpp_CDraculaBride_FUN_004864c0 ; 0048524e
        ;   XREF to: 004864c0 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_CDraculaBride_FUN_004864c0(CDraculaBride * this_ptr)
    ADD ESP,0xc                         ; 00485253
    PUSH 0x3e4ccccd                     ; 00485256
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 0048525b
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 00485260
    TEST EAX,EAX                        ; 00485263
    JZ 0x0048527c                       ; 00485265
        ;   XREF to: 0048527c (CONDITIONAL_JUMP)  ; LAB_0048527c
    LEA EAX,[EBP + 0xfffffcbe]          ; 00485267
    PUSH 0x3f800000                     ; 0048526d
    PUSH EAX                            ; 00485272
    PUSH EBX                            ; 00485273
    CALL core_dracbrid.cpp_CDraculaBride_FUN_004864c0 ; 00485274
        ;   XREF to: 004864c0 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_CDraculaBride_FUN_004864c0(CDraculaBride * this_ptr)
    ADD ESP,0xc                         ; 00485279
    PUSH dword ptr [EBP + 0x92]         ; 0048527c
        ;   Label: LAB_0048527c
    MOV EAX,dword ptr [EBX + 0x154]     ; 00485282
    PUSH EBX                            ; 00485288
    CALL dword ptr [EAX + 0x158]        ; 00485289
    ADD ESP,0x8                         ; 0048528f
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00485292
    LEA ESI,[EBX + 0x158]               ; 00485298
    TEST EAX,EAX                        ; 0048529e
    JZ 0x004852e1                       ; 004852a0
        ;   XREF to: 004852e1 (CONDITIONAL_JUMP)  ; LAB_004852e1
    FLD float ptr [EBX + 0xbf54]        ; 004852a2
    FLDZ                                ; 004852a8
    FCOMPP                              ; 004852aa
    FNSTSW AX                           ; 004852ac
    SAHF                                ; 004852ae
    JBE 0x0048530a                      ; 004852af
        ;   XREF to: 0048530a (CONDITIONAL_JUMP)  ; LAB_0048530a
    PUSH 0x41a00000                     ; 004852b1
    PUSH 0x40000000                     ; 004852b6
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004852bb
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    ADD ESP,0x8                         ; 004852c0
    PUSH 0x1                            ; 004852c3
    MOV dword ptr [EBP + 0x76],EAX      ; 004852c5
    PUSH 0x0                            ; 004852c8
    FLD float ptr [EBP + 0x76]          ; 004852ca
    PUSH ESI                            ; 004852cd
    FSTP float ptr [EBX + 0xbf54]       ; 004852ce
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004852d4
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004852d9
    JMP 0x004846e0                      ; 004852dc
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    PUSH dword ptr [EBP + 0x92]         ; 004852e1
        ;   Label: LAB_004852e1
    PUSH EBX                            ; 004852e7
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 004852e8
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr)
    ADD ESP,0x8                         ; 004852ed
    TEST EAX,EAX                        ; 004852f0
    JZ 0x004846e0                       ; 004852f2
        ;   XREF to: 004846e0 (CONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 004852f8
        ;   Label: LAB_004852f8
    PUSH 0xe                            ; 004852fa
    PUSH ESI                            ; 004852fc
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004852fd
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00485302
    JMP 0x004846e0                      ; 00485305
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x3db2b8c2                     ; 0048530a
        ;   Label: LAB_0048530a
    PUSH 0x3f000000                     ; 0048530f
    MOV EAX,[0x0065cd6c]                ; 00485314 | FLOAT_0065cd6c
    XOR EDX,EDX                         ; 00485319
    MOV dword ptr [EBP + 0x32],EDX      ; 0048531b
    MOV dword ptr [EBP + 0x3a],EAX      ; 0048531e
    LEA EAX,[EBP + 0x32]                ; 00485321
    MOV dword ptr [EBP + 0x36],EDX      ; 00485324
    PUSH EAX                            ; 00485327
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00485328
    PUSH EAX                            ; 0048532e
    MOV EDI,dword ptr [EAX + 0x154]     ; 0048532f
    CALL dword ptr [EDI + 0xbc]         ; 00485335
    ADD ESP,0x4                         ; 0048533b
    PUSH EAX                            ; 0048533e
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 0048533f
    ADD EAX,0x20                        ; 00485345
    PUSH EAX                            ; 00485348
    PUSH EBX                            ; 00485349
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 0048534a
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0048534f
    TEST EAX,EAX                        ; 00485352
    JL 0x00485399                       ; 00485354
        ;   XREF to: 00485399 (CONDITIONAL_JUMP)  ; LAB_00485399
    JLE 0x004853c0                      ; 00485356
        ;   XREF to: 004853c0 (CONDITIONAL_JUMP)  ; LAB_004853c0
    FLD float ptr [EBX + 0xbe38]        ; 00485358
    FLDZ                                ; 0048535e
    FCOMPP                              ; 00485360
    FNSTSW AX                           ; 00485362
    SAHF                                ; 00485364
    JC 0x004846e0                       ; 00485365
        ;   XREF to: 004846e0 (CONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 0048536b
    PUSH 0x2                            ; 0048536d
    PUSH ESI                            ; 0048536f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00485370
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00485375
    PUSH 0x621a4e                       ; 00485378 | = "hotbride-bite?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0048537d
    PUSH EBX                            ; 00485383
    CALL dword ptr [EAX + 0x24]         ; 00485384
    ADD ESP,0x8                         ; 00485387
    MOV dword ptr [EBX + 0xbe38],0x3f800000 ; 0048538a
    JMP 0x004846e0                      ; 00485394
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    PUSH EBX                            ; 00485399
        ;   Label: LAB_00485399
    PUSH 0x621a2d                       ; 0048539a | = "%s gave up chase - I'm confused\n"
    MOV EDI,dword ptr [0x0066e8e0]      ; 0048539f | g_CConsolePtr
    PUSH EDI                            ; 004853a5 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004853a6
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004853ab
    PUSH 0x1                            ; 004853ae
    PUSH 0x8                            ; 004853b0
    PUSH ESI                            ; 004853b2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004853b3
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004853b8
    JMP 0x004846e0                      ; 004853bb
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 004853c0
        ;   Label: LAB_004853c0
    LEA EAX,[EBX + 0x20]                ; 004853c6
    FLD float ptr [ESI + 0x20]          ; 004853c9
    FSUB float ptr [EAX]                ; 004853cc
    FSTP float ptr [EBP + 0xffffff66]   ; 004853ce
    FLD float ptr [ESI + 0x24]          ; 004853d4
    FSUB float ptr [EAX + 0x4]          ; 004853d7
    FSTP float ptr [EBP + 0xffffff6a]   ; 004853da
    FLD float ptr [ESI + 0x28]          ; 004853e0
    LEA ESI,[EBP + 0xe]                 ; 004853e3
    FSUB float ptr [EAX + 0x8]          ; 004853e6
    LEA EAX,[EBP + 0xffffff66]          ; 004853e9
    FSTP float ptr [EBP + 0xffffff6e]   ; 004853ef
    CMP ESI,EAX                         ; 004853f5
    JZ 0x00485414                       ; 004853f7
        ;   XREF to: 00485414 (CONDITIONAL_JUMP)  ; LAB_00485414
    MOV EAX,dword ptr [EBP + 0xffffff66] ; 004853f9
    MOV dword ptr [EBP + 0xe],EAX       ; 004853ff
    MOV EAX,dword ptr [EBP + 0xffffff6a] ; 00485402
    MOV dword ptr [EBP + 0x12],EAX      ; 00485408
    MOV EAX,dword ptr [EBP + 0xffffff6e] ; 0048540b
    MOV dword ptr [EBP + 0x16],EAX      ; 00485411
    FLD float ptr [EBP + 0x12]          ; 00485414
        ;   Label: LAB_00485414
    FMUL ST0                            ; 00485417
    FLD float ptr [EBP + 0xe]           ; 00485419
    FMUL ST0                            ; 0048541c
    FADDP                               ; 0048541e
    FLD float ptr [EBP + 0x16]          ; 00485420
    FMUL ST0                            ; 00485423
    FADDP                               ; 00485425
    FSQRT                               ; 00485427
    FCOMP double ptr [0x00621ade]       ; 00485429 | DOUBLE_00621ade
    FNSTSW AX                           ; 0048542f
    SAHF                                ; 00485431
    JBE 0x004846e0                      ; 00485432
        ;   XREF to: 004846e0 (CONDITIONAL_JUMP)  ; default
    LEA EAX,[EBP + 0xe]                 ; 00485438
    PUSH EAX                            ; 0048543b
    LEA EAX,[EBP + 0x1a]                ; 0048543c
    PUSH EAX                            ; 0048543f
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 00485440
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + 0x1e]          ; 00485445
    ADD ESP,0x8                         ; 00485448
    FSUB float ptr [EBX + 0x34]         ; 0048544b
    SUB ESP,0x4                         ; 0048544e
    FSTP float ptr [ESP]                ; 00485451
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 00485454
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 00485459
    FLD float ptr [EBP + 0x76]          ; 0048545c
    FABS                                ; 0048545f
    ADD ESP,0x4                         ; 00485461
    FCOMP double ptr [0x00621ae6]       ; 00485464 | DOUBLE_00621ae6
    FNSTSW AX                           ; 0048546a
    SAHF                                ; 0048546c
    JNC 0x004846e0                      ; 0048546d
        ;   XREF to: 004846e0 (CONDITIONAL_JUMP)  ; default
    PUSH 0x3f490fdb                     ; 00485473
    PUSH 0xbf490fdb                     ; 00485478
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0048547d
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    ADD ESP,0x8                         ; 00485482
    MOV dword ptr [EBP + 0x76],EAX      ; 00485485
    PUSH 0x1                            ; 00485488
    FLD float ptr [EBP + 0x76]          ; 0048548a
    LEA EAX,[EBX + 0x158]               ; 0048548d
    PUSH 0x3                            ; 00485493
    FADD float ptr [EBX + 0x34]         ; 00485495
    PUSH EAX                            ; 00485498
    FSTP float ptr [EBX + 0x34]         ; 00485499
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0048549c
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004854a1
    JMP 0x004846e0                      ; 004854a4
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[EBP + 0xfffffd86]          ; 004854a9
        ;   Label: caseD_3
    PUSH EAX                            ; 004854af
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 004854b0
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004854b5
    PUSH 0x41700000                     ; 004854b8
    PUSH 0x40e00000                     ; 004854bd
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004854c2
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004854c7
    ADD ESP,0x8                         ; 004854ca
    LEA EAX,[EBP + 0xfffffd86]          ; 004854cd
    MOV ESI,dword ptr [0x02c6d0a0]      ; 004854d3 | INT_02c6d0a0
    PUSH EAX                            ; 004854d9
    LEA EAX,[ESI*0x4 + 0x0]             ; 004854da
    MOV dword ptr [EBP + 0xfffffdba],EBX ; 004854e1
    SUB EAX,ESI                         ; 004854e7
    MOV dword ptr [EBP + 0xfffffdbe],EBX ; 004854e9
    SHL EAX,0x4                         ; 004854ef
    LEA ESI,[EBX + 0xfd8]               ; 004854f2
    ADD EAX,ESI                         ; 004854f8
    PUSH 0x3ecccccd                     ; 004854fa
    PUSH EAX                            ; 004854ff
    MOV EAX,0x3f87558                   ; 00485500 | g_ZeroVector
    PUSH EAX                            ; 00485505 | g_ZeroVector
    LEA EAX,[EBP + 0xffffff06]          ; 00485506
    FLD float ptr [EBP + 0x76]          ; 0048550c
    PUSH EAX                            ; 0048550f
    FSTP float ptr [EBP + 0xfffffd8a]   ; 00485510
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00485516
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0048551b
    PUSH EAX                            ; 0048551e
    LEA EAX,[EBP + 0x3e]                ; 0048551f
    PUSH EAX                            ; 00485522
    PUSH EBX                            ; 00485523
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00485524
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00485529
    PUSH EAX                            ; 0048552c
    PUSH EBX                            ; 0048552d
    CALL core_enemy.cpp_CEnemy_FUN_004a9880 ; 0048552e
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004a9880(CEnemy * this_ptr)
    ADD ESP,0x10                        ; 00485533
    JMP 0x004846e0                      ; 00485536
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    PUSH dword ptr [EBP + 0x92]         ; 0048553b
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x154]     ; 00485541
    PUSH EBX                            ; 00485547
    CALL dword ptr [EAX + 0x158]        ; 00485548
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 0048554e
    ADD ESP,0x8                         ; 00485554
    TEST EDX,EDX                        ; 00485557
    JNZ 0x0048558a                      ; 00485559
        ;   XREF to: 0048558a (CONDITIONAL_JUMP)  ; LAB_0048558a
    PUSH dword ptr [EBP + 0x92]         ; 0048555b
    PUSH EBX                            ; 00485561
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 00485562
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr)
    ADD ESP,0x8                         ; 00485567
    TEST EAX,EAX                        ; 0048556a
    JZ 0x004846e0                       ; 0048556c
        ;   XREF to: 004846e0 (CONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 00485572
    PUSH 0xe                            ; 00485574
    LEA EAX,[EBX + 0x158]               ; 00485576
    PUSH EAX                            ; 0048557c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0048557d
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00485582
    JMP 0x004846e0                      ; 00485585
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x3e800000                     ; 0048558a
        ;   Label: LAB_0048558a
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 0048558f
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 00485594
    TEST EAX,EAX                        ; 00485597
    JNZ 0x004855e4                      ; 00485599
        ;   XREF to: 004855e4 (CONDITIONAL_JUMP)  ; LAB_004855e4
    FLD float ptr [EBX + 0xbf54]        ; 0048559b
        ;   Label: LAB_0048559b
    FLDZ                                ; 004855a1
    LEA ESI,[EBX + 0x158]               ; 004855a3
    FCOMPP                              ; 004855a9
    FNSTSW AX                           ; 004855ab
    SAHF                                ; 004855ad
    JBE 0x004852f8                      ; 004855ae
        ;   XREF to: 004852f8 (CONDITIONAL_JUMP)  ; LAB_004852f8
    PUSH 0x41a00000                     ; 004855b4
    PUSH 0x40000000                     ; 004855b9
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004855be
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    ADD ESP,0x8                         ; 004855c3
    PUSH 0x1                            ; 004855c6
    MOV dword ptr [EBP + 0x76],EAX      ; 004855c8
    PUSH 0xd                            ; 004855cb
    FLD float ptr [EBP + 0x76]          ; 004855cd
    PUSH ESI                            ; 004855d0
    FSTP float ptr [EBX + 0xbf54]       ; 004855d1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004855d7
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004855dc
    JMP 0x004846e0                      ; 004855df
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,0x621a61                    ; 004855e4 | = "CHero"
        ;   Label: LAB_004855e4
    PUSH EAX                            ; 004855e9 | = "CHero"
    MOV ECX,dword ptr [EBX + 0xbe3c]    ; 004855ea
    PUSH ECX                            ; 004855f0
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004855f1
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004855f6
    TEST EAX,EAX                        ; 004855f9
    JZ 0x0048559b                       ; 004855fb
        ;   XREF to: 0048559b (CONDITIONAL_JUMP)  ; LAB_0048559b
    XOR ESI,ESI                         ; 004855fd
    LEA EDI,[ESI*0x4 + 0x0]             ; 004855ff
    MOV EAX,[0x006810c8]                ; 00485606 | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_00485606
    CMP ESI,dword ptr [EAX + 0x150fdc]  ; 0048560b | g_CDemonSetInstance.unk4[7996]
    JGE 0x0048563d                      ; 00485611
        ;   XREF to: 0048563d (CONDITIONAL_JUMP)  ; LAB_0048563d
    MOV ECX,dword ptr [0x02c6d09c]      ; 00485613 | g_CDraculaBrideClassInfo.name_hash
    PUSH ECX                            ; 00485619
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0x150fe0] ; 0048561a | DAT_03265258 | DAT_0326525c
    PUSH EDX                            ; 00485621
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00485622
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00485627
    TEST EAX,EAX                        ; 0048562a
    JNZ 0x00485634                      ; 0048562c
        ;   XREF to: 00485634 (CONDITIONAL_JUMP)  ; LAB_00485634
    INC ESI                             ; 0048562e
        ;   Label: LAB_0048562e
    ADD EDI,0x4                         ; 0048562f
    JMP 0x00485606                      ; 00485632
        ;   XREF to: 00485606 (UNCONDITIONAL_JUMP)  ; LAB_00485606
    CMP dword ptr [EAX + 0xbf48],0x0    ; 00485634
        ;   Label: LAB_00485634
    JZ 0x0048562e                       ; 0048563b
        ;   XREF to: 0048562e (CONDITIONAL_JUMP)  ; LAB_0048562e
    MOV EAX,[0x006810c8]                ; 0048563d | g_CDemonSetPtr
        ;   Label: LAB_0048563d
    CMP ESI,dword ptr [EAX + 0x150fdc]  ; 00485642 | g_CDemonSetInstance.unk4[7996]
    JNZ 0x0048559b                      ; 00485648
        ;   XREF to: 0048559b (CONDITIONAL_JUMP)  ; LAB_0048559b
    MOV EAX,dword ptr [EBX + 0xbf44]    ; 0048564e
    PUSH EAX                            ; 00485654
    PUSH 0x621a67                       ; 00485655 | = "bride-%d?.wav"
    LEA EAX,[EBP + 0xfffffc5a]          ; 0048565a
    PUSH EAX                            ; 00485660
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00485661
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00485666
    LEA EAX,[EBP + 0xfffffc5a]          ; 00485669
    PUSH 0x3f800000                     ; 0048566f
    PUSH EAX                            ; 00485674
    PUSH EBX                            ; 00485675
    CALL core_dracbrid.cpp_CDraculaBride_FUN_004864c0 ; 00485676
        ;   XREF to: 004864c0 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_CDraculaBride_FUN_004864c0(CDraculaBride * this_ptr)
    ADD ESP,0xc                         ; 0048567b
    PUSH 0x1                            ; 0048567e
    PUSH 0x17                           ; 00485680
    LEA EAX,[EBX + 0x158]               ; 00485682
    PUSH EAX                            ; 00485688
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00485689
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0048568e
    PUSH 0x621a75                       ; 00485691 | = "hotbride-disappear.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00485696
    PUSH EBX                            ; 0048569c
    CALL dword ptr [EAX + 0x24]         ; 0048569d
    ADD ESP,0x8                         ; 004856a0
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 004856a3
    LEA EAX,[EBX + 0xbf58]              ; 004856a9
    ADD ESI,0x20                        ; 004856af
    MOV dword ptr [EBX + 0xbf48],0x1    ; 004856b2
    CMP EAX,ESI                         ; 004856bc
    JZ 0x004856d0                       ; 004856be
        ;   XREF to: 004856d0 (CONDITIONAL_JUMP)  ; LAB_004856d0
    MOV EDX,dword ptr [ESI]             ; 004856c0
    MOV dword ptr [EAX],EDX             ; 004856c2
    MOV EDX,dword ptr [ESI + 0x4]       ; 004856c4
    MOV dword ptr [EAX + 0x4],EDX       ; 004856c7
    MOV EDX,dword ptr [ESI + 0x8]       ; 004856ca
    MOV dword ptr [EAX + 0x8],EDX       ; 004856cd
    MOV dword ptr [EBX + 0xbf4c],0x0    ; 004856d0
        ;   Label: LAB_004856d0
    JMP 0x004846e0                      ; 004856da
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [EBX + 0xbf50]        ; 004856df
        ;   Label: caseD_e
    FLDZ                                ; 004856e5
    FCOMPP                              ; 004856e7
    FNSTSW AX                           ; 004856e9
    SAHF                                ; 004856eb
    JC 0x00485744                       ; 004856ec
        ;   XREF to: 00485744 (CONDITIONAL_JUMP)  ; LAB_00485744
    MOV ECX,dword ptr [EBX + 0xbf44]    ; 004856ee
    PUSH ECX                            ; 004856f4
    PUSH 0x621a8c                       ; 004856f5 | = "bride-%d?.wav"
    LEA EAX,[EBP + 0xfffffd22]          ; 004856fa
    PUSH EAX                            ; 00485700
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00485701
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00485706
    LEA EAX,[EBP + 0xfffffd22]          ; 00485709
    PUSH 0x3f800000                     ; 0048570f
    PUSH EAX                            ; 00485714
    PUSH EBX                            ; 00485715
    CALL core_dracbrid.cpp_CDraculaBride_FUN_004864c0 ; 00485716
        ;   XREF to: 004864c0 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_CDraculaBride_FUN_004864c0(CDraculaBride * this_ptr)
    ADD ESP,0xc                         ; 0048571b
    PUSH 0x3e4ccccd                     ; 0048571e
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 00485723
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 00485728
    TEST EAX,EAX                        ; 0048572b
    JZ 0x00485744                       ; 0048572d
        ;   XREF to: 00485744 (CONDITIONAL_JUMP)  ; LAB_00485744
    LEA EAX,[EBP + 0xfffffd22]          ; 0048572f
    PUSH 0x3f800000                     ; 00485735
    PUSH EAX                            ; 0048573a
    PUSH EBX                            ; 0048573b
    CALL core_dracbrid.cpp_CDraculaBride_FUN_004864c0 ; 0048573c
        ;   XREF to: 004864c0 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_CDraculaBride_FUN_004864c0(CDraculaBride * this_ptr)
    ADD ESP,0xc                         ; 00485741
    PUSH dword ptr [EBP + 0x92]         ; 00485744
        ;   Label: LAB_00485744
    MOV EAX,dword ptr [EBX + 0x154]     ; 0048574a
    PUSH EBX                            ; 00485750
    CALL dword ptr [EAX + 0x158]        ; 00485751
    ADD ESP,0x8                         ; 00485757
    MOV EDI,dword ptr [EBX + 0xbe3c]    ; 0048575a
    LEA ESI,[EBX + 0x158]               ; 00485760
    TEST EDI,EDI                        ; 00485766
    JNZ 0x00485792                      ; 00485768
        ;   XREF to: 00485792 (CONDITIONAL_JUMP)  ; LAB_00485792
    PUSH dword ptr [EBP + 0x92]         ; 0048576a
    PUSH EBX                            ; 00485770
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 00485771
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr)
    ADD ESP,0x8                         ; 00485776
    TEST EAX,EAX                        ; 00485779
    JNZ 0x004846e0                      ; 0048577b
        ;   XREF to: 004846e0 (CONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 00485781
    PUSH EDI                            ; 00485783
    PUSH ESI                            ; 00485784
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00485785
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0048578a
    JMP 0x004846e0                      ; 0048578d
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x0065cd68]                ; 00485792 | FLOAT_0065cd68
        ;   Label: LAB_00485792
    MOV dword ptr [EBP + 0x56],EAX      ; 00485797
    LEA EAX,[EBX + 0x23ac]              ; 0048579a
    MOV dword ptr [EAX + 0x8],0x0       ; 004857a0
    MOV EDX,dword ptr [EAX + 0x8]       ; 004857a7
    MOV dword ptr [EAX + 0x4],EDX       ; 004857aa
    MOV EDX,dword ptr [EAX + 0x4]       ; 004857ad
    MOV dword ptr [EAX],EDX             ; 004857b0
    XOR EAX,EAX                         ; 004857b2
    MOV dword ptr [EBP + 0xfffffee2],EAX ; 004857b4
    MOV dword ptr [EBP + 0xfffffee6],EAX ; 004857ba
    MOV EAX,dword ptr [EBP + 0x56]      ; 004857c0
    PUSH 0x3db2b8c2                     ; 004857c3
    MOV dword ptr [EBP + 0xfffffeea],EAX ; 004857c8
    LEA EAX,[EBP + 0xfffffee2]          ; 004857ce
    PUSH 0x3f000000                     ; 004857d4
    PUSH EAX                            ; 004857d9
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004857da
    PUSH EAX                            ; 004857e0
    MOV EDI,dword ptr [EAX + 0x154]     ; 004857e1
    CALL dword ptr [EDI + 0xbc]         ; 004857e7
    ADD ESP,0x4                         ; 004857ed
    PUSH EAX                            ; 004857f0
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004857f1
    ADD EAX,0x20                        ; 004857f7
    PUSH EAX                            ; 004857fa
    PUSH EBX                            ; 004857fb
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 004857fc
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00485801
    TEST EAX,EAX                        ; 00485804
    JL 0x0048588b                       ; 00485806
        ;   XREF to: 0048588b (CONDITIONAL_JUMP)  ; LAB_0048588b
    JLE 0x004846e0                      ; 0048580c
        ;   XREF to: 004846e0 (CONDITIONAL_JUMP)  ; default
    FLD float ptr [EBX + 0xbe38]        ; 00485812
    FLDZ                                ; 00485818
    FCOMPP                              ; 0048581a
    FNSTSW AX                           ; 0048581c
    SAHF                                ; 0048581e
    JC 0x004846e0                       ; 0048581f
        ;   XREF to: 004846e0 (CONDITIONAL_JUMP)  ; default
    PUSH 0x2                            ; 00485825
    PUSH 0x0                            ; 00485827
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 00485829
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 0048582e
    MOV EDI,EAX                         ; 00485831
    TEST EAX,EAX                        ; 00485833
    JZ 0x004858b2                       ; 00485835
        ;   XREF to: 004858b2 (CONDITIONAL_JUMP)  ; LAB_004858b2
    CMP EDI,0x1                         ; 0048583b
        ;   Label: LAB_0048583b
    JNZ 0x00485852                      ; 0048583e
        ;   XREF to: 00485852 (CONDITIONAL_JUMP)  ; LAB_00485852
    PUSH EDI                            ; 00485840
    PUSH 0x14                           ; 00485841
    LEA EAX,[EBX + 0x158]               ; 00485843
    PUSH EAX                            ; 00485849
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0048584a
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0048584f
    CMP EDI,0x2                         ; 00485852
        ;   Label: LAB_00485852
    JNZ 0x0048587c                      ; 00485855
        ;   XREF to: 0048587c (CONDITIONAL_JUMP)  ; LAB_0048587c
    PUSH 0x1                            ; 00485857
    PUSH 0x15                           ; 00485859
    LEA EAX,[EBX + 0x158]               ; 0048585b
    PUSH EAX                            ; 00485861
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00485862
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00485867
    PUSH 0x621abb                       ; 0048586a | = "hotbride-swipe?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0048586f
    PUSH EBX                            ; 00485875
    CALL dword ptr [EAX + 0x24]         ; 00485876
    ADD ESP,0x8                         ; 00485879
    MOV dword ptr [EBX + 0xbe38],0x3f800000 ; 0048587c
        ;   Label: LAB_0048587c
    JMP 0x004846e0                      ; 00485886
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    PUSH EBX                            ; 0048588b
        ;   Label: LAB_0048588b
    PUSH 0x621a9a                       ; 0048588c | = "%s gave up chase - I'm confused\n"
    MOV ECX,dword ptr [0x0066e8e0]      ; 00485891 | g_CConsolePtr
    PUSH ECX                            ; 00485897 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 00485898
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0048589d
    PUSH 0x1                            ; 004858a0
    PUSH 0x0                            ; 004858a2
    PUSH ESI                            ; 004858a4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004858a5
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004858aa
    JMP 0x004846e0                      ; 004858ad
        ;   XREF to: 004846e0 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 004858b2
        ;   Label: LAB_004858b2
    PUSH 0x13                           ; 004858b4
    PUSH ESI                            ; 004858b6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004858b7
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004858bc
    JMP 0x0048583b                      ; 004858bf
        ;   XREF to: 0048583b (UNCONDITIONAL_JUMP)  ; LAB_0048583b
    CMP ESI,0x1a                        ; 004858c4
        ;   Label: LAB_004858c4
    JA 0x004846e0                       ; 004858c7
        ;   XREF to: 004846e0 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [ESI*0x4 + 0x4843a4]  ; 004858cd | caseD_0 | default | caseD_2
        ;   Label: switchD
    CMP dword ptr [EBX + 0xdc],0x0      ; 004858d4
        ;   Label: LAB_004858d4
    JNZ 0x00484731                      ; 004858db
        ;   XREF to: 00484731 (CONDITIONAL_JUMP)  ; LAB_00484731
    JMP 0x0048485b                      ; 004858e1
        ;   XREF to: 0048485b (UNCONDITIONAL_JUMP)  ; LAB_0048485b

