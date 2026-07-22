; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_0041e5e0(int param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0xe8]:8  local_e8
; undefined        Stack[-0xa0]:1  local_a0
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0041f3d0 at 0041f3e7
;
; Referenced Globals:
;   float FLOAT_0057980d = 0.1047198
;   float FLOAT_00579811 = 0.5
;   double DOUBLE_00579815 = 3
;   float FLOAT_0057981d = 0.2000000
;   undefined4 DAT_005be368
;   undefined4 DAT_005bed68
;   undefined4 DAT_01e57284
;
; Called Functions:
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_box.cpp_CBox_process_FUN_0041acb0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   core_setcolid.cpp_CDemonSet_notifyDamageListeners_FUN_00511880
;   core_sound.cpp_CSound_isSoundPlaying_FUN_0052eba0
;   crt_math.c_floor_FUN_005648c0
;   crt_math.c_round_FUN_00563a30
;   sound_sndmain.cpp_popSfxOptions_FUN_005263c0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00526340
;   sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005262d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041e5e0
        ;   Label: core_boxactor.cpp_CBoxActor_process_FUN_0041e5e0
    PUSH ESI                            ; 0041e5e1
    PUSH EDI                            ; 0041e5e2
    PUSH EBP                            ; 0041e5e3
    MOV EBP,ESP                         ; 0041e5e4
    SUB ESP,0xd0                        ; 0041e5e6
    AND ESP,0xfffffff8                  ; 0041e5ec
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041e5ef
    LEA EAX,[EBX + 0x150]               ; 0041e5f2
    PUSH EAX                            ; 0041e5f8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 0041e5f9
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    FLD float ptr [EBX + 0x304]         ; 0041e5fe
    ADD ESP,0x4                         ; 0041e604
    MOV ESI,dword ptr [EAX + 0x100]     ; 0041e607
    FADD float ptr [EBX + 0x308]        ; 0041e60d
    SUB ESP,0x8                         ; 0041e613
    FST float ptr [EBX + 0x308]         ; 0041e616
    FSTP double ptr [ESP]               ; 0041e61c
    CALL crt_math.c_floor_FUN_005648c0  ; 0041e61f
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_floor_FUN_005648c0()
    MOV dword ptr [ESP + 0xc0],EAX      ; 0041e624
    MOV dword ptr [ESP + 0xc4],EDX      ; 0041e62b
    FLD double ptr [ESP + 0xc0]         ; 0041e632
    ADD ESP,0x8                         ; 0041e639
    CALL crt_math.c_round_FUN_00563a30  ; 0041e63c
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0xc4]        ; 0041e641
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0041e648
    MOV dword ptr [ESP + 0xc8],EAX      ; 0041e64f
    FILD dword ptr [ESP + 0xc8]         ; 0041e656
    FSUBR float ptr [EBX + 0x308]       ; 0041e65d
    MOV EDI,ESI                         ; 0041e663
    FSTP float ptr [ESP + 0xc0]         ; 0041e665
    TEST EAX,EAX                        ; 0041e66c
    JL 0x0041e7dd                       ; 0041e66e
        ;   XREF to: 0041e7dd (CONDITIONAL_JUMP)  ; LAB_0041e7dd
    MOV EDX,EAX                         ; 0041e674
    SAR EDX,0x1f                        ; 0041e676
    IDIV ESI                            ; 0041e679
    MOV dword ptr [ESP + 0xc4],EDX      ; 0041e67b
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0041e682
        ;   Label: LAB_0041e682
    MOV dword ptr [ESP + 0xc8],EAX      ; 0041e689
    MOV dword ptr [ESP + 0xcc],EDI      ; 0041e690
    FILD dword ptr [ESP + 0xc8]         ; 0041e697
    FADD float ptr [ESP + 0xc0]         ; 0041e69e
    FILD dword ptr [ESP + 0xcc]         ; 0041e6a5
    FXCH                                ; 0041e6ac
    FSTP float ptr [EBX + 0x308]        ; 0041e6ae
    FCOMP float ptr [EBX + 0x308]       ; 0041e6b4
    FNSTSW AX                           ; 0041e6ba
    SAHF                                ; 0041e6bc
    JA 0x0041e6c9                       ; 0041e6bd
        ;   XREF to: 0041e6c9 (CONDITIONAL_JUMP)  ; LAB_0041e6c9
    MOV dword ptr [EBX + 0x308],0x0     ; 0041e6bf
    LEA EAX,[EBX + 0x2f8]               ; 0041e6c9
        ;   Label: LAB_0041e6c9
    FLD float ptr [EBP + 0x18]          ; 0041e6cf
    FLD float ptr [EAX]                 ; 0041e6d2
    FMUL ST1                            ; 0041e6d4
    FSTP float ptr [ESP + 0xac]         ; 0041e6d6
    FLD float ptr [EAX + 0x4]           ; 0041e6dd
    FMUL ST1                            ; 0041e6e0
    FLD float ptr [0x0057980d]          ; 0041e6e2 | FLOAT_0057980d
    FLD float ptr [ESP + 0xac]          ; 0041e6e8
    FMUL ST1                            ; 0041e6ef
    FXCH ST2                            ; 0041e6f1
    FSTP float ptr [ESP + 0xb0]         ; 0041e6f3
    FLD float ptr [EAX + 0x8]           ; 0041e6fa
    FMULP ST3                           ; 0041e6fd
    FLD float ptr [ESP + 0xb0]          ; 0041e6ff
    FMUL ST1                            ; 0041e706
    FXCH ST3                            ; 0041e708
    FST float ptr [ESP + 0xb4]          ; 0041e70a
    FMULP                               ; 0041e711
    FXCH                                ; 0041e713
    FSTP float ptr [ESP + 0x58]         ; 0041e715
    LEA EAX,[EBX + 0x30]                ; 0041e719
    FXCH                                ; 0041e71c
    FSTP float ptr [ESP + 0x5c]         ; 0041e71e
    FSTP float ptr [ESP + 0x60]         ; 0041e722
    FLD float ptr [EAX]                 ; 0041e726
    FADD float ptr [ESP + 0x58]         ; 0041e728
    FLD float ptr [EAX + 0x4]           ; 0041e72c
    FXCH                                ; 0041e72f
    FSTP float ptr [EAX]                ; 0041e731
    FADD float ptr [ESP + 0x5c]         ; 0041e733
    FLD float ptr [EAX + 0x8]           ; 0041e737
    FXCH                                ; 0041e73a
    FSTP float ptr [EAX + 0x4]          ; 0041e73c
    FADD float ptr [ESP + 0x60]         ; 0041e73f
    FSTP float ptr [EAX + 0x8]          ; 0041e743
    PUSH dword ptr [EBX + 0x30]         ; 0041e746
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0041e749
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0xd0],EAX      ; 0041e74e
    FLD float ptr [ESP + 0xd0]          ; 0041e755
    ADD ESP,0x4                         ; 0041e75c
    PUSH dword ptr [EBX + 0x38]         ; 0041e75f
    FSTP float ptr [EBX + 0x30]         ; 0041e762
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0041e765
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0xd0],EAX      ; 0041e76a
    FLD float ptr [ESP + 0xd0]          ; 0041e771
    ADD ESP,0x4                         ; 0041e778
    PUSH dword ptr [EBX + 0x34]         ; 0041e77b
    FSTP float ptr [EBX + 0x38]         ; 0041e77e
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0041e781
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0xd0],EAX      ; 0041e786
    FLD float ptr [ESP + 0xd0]          ; 0041e78d
    MOV AH,byte ptr [EBX + 0x2cc]       ; 0041e794
    FSTP float ptr [EBX + 0x34]         ; 0041e79a
    ADD ESP,0x4                         ; 0041e79d
    TEST AH,AH                          ; 0041e7a0
    JZ 0x0041e7be                       ; 0041e7a2
        ;   XREF to: 0041e7be (CONDITIONAL_JUMP)  ; LAB_0041e7be
    MOV ECX,dword ptr [EBX + 0x2f4]     ; 0041e7a4
    PUSH ECX                            ; 0041e7aa
    MOV ESI,dword ptr [0x005bed68]      ; 0041e7ab | DAT_005bed68
    PUSH ESI                            ; 0041e7b1
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0052eba0 ; 0041e7b2
        ;   XREF to: 0052eba0 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_isSoundPlaying_FUN_0052eba0()
    ADD ESP,0x8                         ; 0041e7b7
    TEST EAX,EAX                        ; 0041e7ba
    JZ 0x0041e7f4                       ; 0041e7bc
        ;   XREF to: 0041e7f4 (CONDITIONAL_JUMP)  ; LAB_0041e7f4
    CMP dword ptr [EBX + 0x310],0x0     ; 0041e7be
        ;   Label: LAB_0041e7be
    JNZ 0x0041e7d6                      ; 0041e7c5
        ;   XREF to: 0041e7d6 (CONDITIONAL_JUMP)  ; LAB_0041e7d6
    FLD float ptr [EBX + 0x388]         ; 0041e7c7
    FLDZ                                ; 0041e7cd
    FCOMPP                              ; 0041e7cf
    FNSTSW AX                           ; 0041e7d1
    SAHF                                ; 0041e7d3
    JC 0x0041e84a                       ; 0041e7d4
        ;   XREF to: 0041e84a (CONDITIONAL_JUMP)  ; LAB_0041e84a
    MOV ESP,EBP                         ; 0041e7d6
        ;   Label: LAB_0041e7d6
    POP EBP                             ; 0041e7d8
    POP EDI                             ; 0041e7d9
    POP ESI                             ; 0041e7da
    POP EBX                             ; 0041e7db
    RET                                 ; 0041e7dc
    NEG EAX                             ; 0041e7dd
        ;   Label: LAB_0041e7dd
    MOV EDX,EAX                         ; 0041e7df
    SAR EDX,0x1f                        ; 0041e7e1
    IDIV ESI                            ; 0041e7e4
    SUB ESI,EDX                         ; 0041e7e6
    MOV dword ptr [ESP + 0xc4],ESI      ; 0041e7e8
    JMP 0x0041e682                      ; 0041e7ef
        ;   XREF to: 0041e682 (UNCONDITIONAL_JUMP)  ; LAB_0041e682
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00526340 ; 0041e7f4
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_pushSfxOptions_FUN_00526340()
        ;   Label: LAB_0041e7f4
    PUSH 0x2                            ; 0041e7f9
    PUSH 0x3f800000                     ; 0041e7fb
    PUSH 0x0                            ; 0041e800
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0041e802
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0xd8],EAX      ; 0041e807
    FLD float ptr [ESP + 0xd8]          ; 0041e80e
    ADD ESP,0x8                         ; 0041e815
    SUB ESP,0x8                         ; 0041e818
    FSTP double ptr [ESP]               ; 0041e81b
    CALL sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005262d0 ; 0041e81e
        ;   XREF to: 005262d0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005262d0()
    ADD ESP,0xc                         ; 0041e823
    LEA EDX,[EBX + 0x2cc]               ; 0041e826
    PUSH EDX                            ; 0041e82c
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0041e82d
    PUSH EBX                            ; 0041e833
    CALL dword ptr [EAX + 0x24]         ; 0041e834
    ADD ESP,0x8                         ; 0041e837
    MOV dword ptr [EBX + 0x2f4],EAX     ; 0041e83a
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005263c0 ; 0041e840
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_popSfxOptions_FUN_005263c0()
    JMP 0x0041e7be                      ; 0041e845
        ;   XREF to: 0041e7be (UNCONDITIONAL_JUMP)  ; LAB_0041e7be
    LEA EDX,[EBX + 0x20]                ; 0041e84a
        ;   Label: LAB_0041e84a
    MOV EAX,dword ptr [EDX]             ; 0041e84d
    MOV dword ptr [ESP + 0x70],EAX      ; 0041e84f
    LEA EAX,[EDX + 0x4]                 ; 0041e853
    MOV EAX,dword ptr [EAX]             ; 0041e856
    MOV dword ptr [ESP + 0x74],EAX      ; 0041e858
    LEA EAX,[EDX + 0x8]                 ; 0041e85c
    MOV EAX,dword ptr [EAX]             ; 0041e85f
    MOV dword ptr [ESP + 0x78],EAX      ; 0041e861
    LEA EAX,[EBX + 0x38c]               ; 0041e865
    PUSH dword ptr [EBP + 0x18]         ; 0041e86b
    PUSH EAX                            ; 0041e86e
    CALL core_box.cpp_CBox_process_FUN_0041acb0 ; 0041e86f
        ;   XREF to: 0041acb0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBox_process_FUN_0041acb0()
    LEA EDX,[EBX + 0x30]                ; 0041e874
    LEA EAX,[EBX + 0x398]               ; 0041e877
    ADD ESP,0x8                         ; 0041e87d
    CMP EDX,EAX                         ; 0041e880
    JZ 0x0041e894                       ; 0041e882
        ;   XREF to: 0041e894 (CONDITIONAL_JUMP)  ; LAB_0041e894
    MOV ECX,dword ptr [EAX]             ; 0041e884
    MOV dword ptr [EDX],ECX             ; 0041e886
    MOV ECX,dword ptr [EAX + 0x4]       ; 0041e888
    MOV dword ptr [EDX + 0x4],ECX       ; 0041e88b
    MOV ECX,dword ptr [EAX + 0x8]       ; 0041e88e
    MOV dword ptr [EDX + 0x8],ECX       ; 0041e891
    PUSH EBX                            ; 0041e894
        ;   Label: LAB_0041e894
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 0041e895
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000()
    ADD ESP,0x4                         ; 0041e89a
    LEA EDX,[ESP + 0x40]                ; 0041e89d
    PUSH EDX                            ; 0041e8a1
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0041e8a2
    PUSH EBX                            ; 0041e8a8
    CALL dword ptr [EAX + 0x14]         ; 0041e8a9
    LEA EDX,[EAX + 0xc]                 ; 0041e8ac
    FLD float ptr [EAX]                 ; 0041e8af
    FADD float ptr [EDX]                ; 0041e8b1
    ADD ESP,0x8                         ; 0041e8b3
    FST float ptr [ESP + 0x94]          ; 0041e8b6
    FLD float ptr [EAX + 0x4]           ; 0041e8bd
    FADD float ptr [EDX + 0x4]          ; 0041e8c0
    FXCH                                ; 0041e8c3
    FLD float ptr [0x00579811]          ; 0041e8c5 | FLOAT_00579811
    FXCH                                ; 0041e8cb
    FMUL ST1                            ; 0041e8cd
    FXCH ST2                            ; 0041e8cf
    FST float ptr [ESP + 0x98]          ; 0041e8d1
    FLD float ptr [EAX + 0x8]           ; 0041e8d8
    FADD float ptr [EDX + 0x8]          ; 0041e8db
    FXCH                                ; 0041e8de
    FMUL ST2                            ; 0041e8e0
    FXCH                                ; 0041e8e2
    FST float ptr [ESP + 0x9c]          ; 0041e8e4
    FMULP ST2                           ; 0041e8eb
    LEA EAX,[ESP + 0x64]                ; 0041e8ed
    FXCH ST2                            ; 0041e8f1
    FSTP float ptr [ESP + 0x7c]         ; 0041e8f3
    FXCH                                ; 0041e8f7
    FSTP float ptr [ESP + 0x80]         ; 0041e8f9
    PUSH EAX                            ; 0041e900
    FLD float ptr [ESP + 0x80]          ; 0041e901
    FLD float ptr [ESP + 0x84]          ; 0041e908
    LEA EAX,[ESP + 0xa4]                ; 0041e90f
    FXCH                                ; 0041e916
    FCHS                                ; 0041e918
    FXCH                                ; 0041e91a
    FCHS                                ; 0041e91c
    FXCH                                ; 0041e91e
    FSTP float ptr [ESP + 0x68]         ; 0041e920
    FSTP float ptr [ESP + 0x6c]         ; 0041e924
    PUSH EAX                            ; 0041e928
    FST float ptr [ESP + 0x8c]          ; 0041e929
    PUSH EBX                            ; 0041e930
    FCHS                                ; 0041e931
    FSTP float ptr [ESP + 0x78]         ; 0041e933
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 0041e937
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_transformVector_FUN_0040a200()
    LEA EDX,[EBX + 0x38c]               ; 0041e93c
    FLD float ptr [EDX]                 ; 0041e942
    FADD float ptr [EAX]                ; 0041e944
    ADD ESP,0xc                         ; 0041e946
    FSTP float ptr [ESP + 0x88]         ; 0041e949
    FLD float ptr [EDX + 0x4]           ; 0041e950
    FADD float ptr [EAX + 0x4]          ; 0041e953
    LEA ESI,[EBX + 0x20]                ; 0041e956
    FSTP float ptr [ESP + 0x8c]         ; 0041e959
    FLD float ptr [EDX + 0x8]           ; 0041e960
    FADD float ptr [EAX + 0x8]          ; 0041e963
    MOV EAX,dword ptr [ESP + 0x88]      ; 0041e966
    FSTP float ptr [ESP + 0x90]         ; 0041e96d
    MOV dword ptr [ESI],EAX             ; 0041e974
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0041e976
    MOV dword ptr [ESI + 0x4],EAX       ; 0041e97d
    MOV EAX,dword ptr [ESP + 0x90]      ; 0041e980
    MOV dword ptr [ESI + 0x8],EAX       ; 0041e987
    LEA EAX,[EBX + 0x3cc]               ; 0041e98a
    FLD float ptr [EAX + 0x4]           ; 0041e990
    FMUL ST0                            ; 0041e993
    FLD float ptr [EAX]                 ; 0041e995
    FMUL ST0                            ; 0041e997
    FADDP                               ; 0041e999
    FLD float ptr [EAX + 0x8]           ; 0041e99b
    FMUL ST0                            ; 0041e99e
    FADDP                               ; 0041e9a0
    FSQRT                               ; 0041e9a2
    FST float ptr [ESP]                 ; 0041e9a4
    FCOMP double ptr [0x00579815]       ; 0041e9a7 | DOUBLE_00579815
    FNSTSW AX                           ; 0041e9ad
    SAHF                                ; 0041e9af
    JBE 0x0041e7d6                      ; 0041e9b0
        ;   XREF to: 0041e7d6 (CONDITIONAL_JUMP)  ; LAB_0041e7d6
    LEA EAX,[ESP + 0x4]                 ; 0041e9b6
    PUSH EAX                            ; 0041e9ba
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 0041e9bb
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    ADD ESP,0x4                         ; 0041e9c0
    LEA EAX,[ESP + 0x4]                 ; 0041e9c3
    FLD float ptr [ESP]                 ; 0041e9c7
    FMUL float ptr [EBX + 0x388]        ; 0041e9ca
    PUSH EAX                            ; 0041e9d0
    FMUL float ptr [0x0057981d]         ; 0041e9d1 | FLOAT_0057981d
    PUSH ESI                            ; 0041e9d7
    LEA EAX,[ESP + 0x78]                ; 0041e9d8
    MOV dword ptr [ESP + 0x40],EBX      ; 0041e9dc
    PUSH EAX                            ; 0041e9e0
    MOV EAX,[0x005be368]                ; 0041e9e1 | DAT_005be368
    MOV dword ptr [ESP + 0x48],EBX      ; 0041e9e6
    PUSH EAX                            ; 0041e9ea | DAT_01e57284
    FSTP float ptr [ESP + 0x18]         ; 0041e9eb
    CALL core_setcolid.cpp_CDemonSet_notifyDamageListeners_FUN_00511880 ; 0041e9ef
        ;   XREF to: 00511880 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_notifyDamageListeners_FUN_00511880()
    ADD ESP,0x10                        ; 0041e9f4
    MOV ESP,EBP                         ; 0041e9f7
    POP EBP                             ; 0041e9f9
    POP EDI                             ; 0041e9fa
    POP ESI                             ; 0041e9fb
    POP EBX                             ; 0041e9fc
    RET                                 ; 0041e9fd

