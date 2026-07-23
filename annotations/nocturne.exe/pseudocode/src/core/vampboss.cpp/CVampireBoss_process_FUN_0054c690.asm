; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_vampboss_cpp_CVampireBoss_process_FUN_0054c690(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x258]:4  local_258
; undefined4       Stack[-0x254]:4  local_254
; undefined4       Stack[-0x250]:4  local_250
; undefined4       Stack[-0x24c]:4  local_24c
; undefined4       Stack[-0x248]:4  local_248
; undefined        Stack[-0x244]:1  local_244
; undefined4       Stack[-0x240]:4  local_240
; undefined4       Stack[-0x210]:4  local_210
; undefined4       Stack[-0x20c]:4  local_20c
; undefined        Stack[-0x1cc]:1  local_1cc
; undefined        Stack[-0x1c0]:1  local_1c0
; undefined        Stack[-0x1b4]:1  local_1b4
; undefined        Stack[-0x19c]:1  local_19c
; undefined        Stack[-0x184]:1  local_184
; undefined        Stack[-0x178]:1  local_178
; undefined        Stack[-0x16c]:1  local_16c
; undefined        Stack[-0x154]:1  local_154
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined        Stack[-0x130]:1  local_130
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined        Stack[-0xdc]:1  local_dc
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   undefined1* switchdataD_0054c654 = 0054d5ef
;   undefined1* switchdataD_0054c664 = 0054d239
;   string s_..\\core\\vampboss.cpp_00597073
;   string s_CVampireBoss::process_-_Need_4_w_00597088
;   string s_morphCompleted_005970b1
;   string s_backToHuman_005970c0
;   string s_morphToBat_005970cc
;   string s_flyout_005970d7
;   double DOUBLE_005970e5 = 25
;   double DOUBLE_005970ed = 5
;   double DOUBLE_005970f5 = 10
;   double DOUBLE_005970fd = 40
;   double DOUBLE_00597105 = 24
;   double DOUBLE_0059710d = 4
;   double DOUBLE_00597115 = 6
;   ... and 17 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;   core_actor.cpp_getRandomInt_FUN_0040de00
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00
;   core_charactr.cpp_CCharacter_dismember_FUN_00427b60
;   core_charactr.cpp_CCharacter_followActor_FUN_00428780
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
;   core_charactr.cpp_FUN_004259f0
;   core_charactr.cpp_FUN_0042a150
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_cloth.cpp_CCloth_process_FUN_00436e50
;   ... and 20 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054c690
        ;   Label: core_vampboss.cpp_CVampireBoss_process_FUN_0054c690
    PUSH ESI                            ; 0054c691
    PUSH EDI                            ; 0054c692
    PUSH EBP                            ; 0054c693
    MOV EBP,ESP                         ; 0054c694
    SUB ESP,0x23c                       ; 0054c696
    AND ESP,0xfffffff8                  ; 0054c69c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054c69f
    MOV ESI,EBX                         ; 0054c6a2
    LEA EDI,[EBX + 0x10]                ; 0054c6a4
    CMP dword ptr [ESI + 0xbedb4],0x0   ; 0054c6a7
        ;   Label: LAB_0054c6a7
    JZ 0x0054ccaf                       ; 0054c6ae
        ;   XREF to: 0054ccaf (CONDITIONAL_JUMP)  ; LAB_0054ccaf
    ADD ESI,0x4                         ; 0054c6b4
        ;   Label: LAB_0054c6b4
    CMP ESI,EDI                         ; 0054c6b7
    JNZ 0x0054c6a7                      ; 0054c6b9
        ;   XREF to: 0054c6a7 (CONDITIONAL_JUMP)  ; LAB_0054c6a7
    PUSH dword ptr [EBP + 0x18]         ; 0054c6bb
    PUSH EBX                            ; 0054c6be
    CALL core_charactr.cpp_FUN_004259f0 ; 0054c6bf
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004259f0()
    ADD ESP,0x8                         ; 0054c6c4
    TEST EAX,EAX                        ; 0054c6c7
    JZ 0x0054cca8                       ; 0054c6c9
        ;   XREF to: 0054cca8 (CONDITIONAL_JUMP)  ; LAB_0054cca8
    MOV EDX,dword ptr [EBX + 0xbe168]   ; 0054c6cf
    CMP EDX,0x2                         ; 0054c6d5
    JNZ 0x0054cdbb                      ; 0054c6d8
        ;   XREF to: 0054cdbb (CONDITIONAL_JUMP)  ; LAB_0054cdbb
    PUSH dword ptr [EBP + 0x18]         ; 0054c6de
    PUSH EBX                            ; 0054c6e1
    CALL core_vampboss.cpp_CVampireBoss_advanceAnimation_FUN_0054d9c0 ; 0054c6e2
        ;   XREF to: 0054d9c0 (UNCONDITIONAL_CALL)  ; undefined core_vampboss.cpp_CVampireBoss_advanceAnimation_FUN_0054d9c0()
    ADD ESP,0x8                         ; 0054c6e7
    LEA ESI,[EBX + 0xbd24]              ; 0054c6ea
    PUSH ESI                            ; 0054c6f0
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880 ; 0054c6f1
        ;   XREF to: 0051b880 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880()
    ADD ESP,0x4                         ; 0054c6f6
    PUSH ESI                            ; 0054c6f9
    PUSH dword ptr [EBX + 0x240c]       ; 0054c6fa
    LEA EAX,[EBX + 0x30]                ; 0054c700
    PUSH dword ptr [EBP + 0x18]         ; 0054c703
    PUSH EAX                            ; 0054c706
    LEA EAX,[EBX + 0x20]                ; 0054c707
    PUSH EAX                            ; 0054c70a
    LEA EAX,[EBX + 0xdfd8]              ; 0054c70b
    PUSH EAX                            ; 0054c711
    CALL core_cloth.cpp_CCloth_process_FUN_00436e50 ; 0054c712
        ;   XREF to: 00436e50 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CCloth_process_FUN_00436e50()
    FLD float ptr [EBX + 0x2434]        ; 0054c717
    ADD ESP,0x18                        ; 0054c71d
    FCOMP double ptr [0x005970e5]       ; 0054c720 | DOUBLE_005970e5
    FNSTSW AX                           ; 0054c726
    SAHF                                ; 0054c728
    JNC 0x0054c762                      ; 0054c729
        ;   XREF to: 0054c762 (CONDITIONAL_JUMP)  ; LAB_0054c762
    MOV EDX,dword ptr [EBX + 0xbedac]   ; 0054c72b
    MOV dword ptr [EBX + 0x2434],0x41c7fdf4 ; 0054c731
    CMP EDX,0x2                         ; 0054c73b
    JZ 0x0054c762                       ; 0054c73e
        ;   XREF to: 0054c762 (CONDITIONAL_JUMP)  ; LAB_0054c762
    CMP EDX,0x3                         ; 0054c740
    JZ 0x0054c762                       ; 0054c743
        ;   XREF to: 0054c762 (CONDITIONAL_JUMP)  ; LAB_0054c762
    PUSH EBX                            ; 0054c745
    CALL core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_0054e230 ; 0054c746
        ;   XREF to: 0054e230 (UNCONDITIONAL_CALL)  ; undefined core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_0054e230()
    MOV dword ptr [EBX + 0xbedac],0x2   ; 0054c74b
    ADD ESP,0x4                         ; 0054c755
    MOV dword ptr [EBX + 0xbeda0],0x40a00000 ; 0054c758
    MOV ESI,dword ptr [EBX + 0xbedac]   ; 0054c762
        ;   Label: LAB_0054c762
    CMP ESI,0x2                         ; 0054c768
    JZ 0x0054c912                       ; 0054c76b
        ;   XREF to: 0054c912 (CONDITIONAL_JUMP)  ; LAB_0054c912
    CMP ESI,0x3                         ; 0054c771
    JZ 0x0054c912                       ; 0054c774
        ;   XREF to: 0054c912 (CONDITIONAL_JUMP)  ; LAB_0054c912
    MOV EAX,[0x01cae0e8]                ; 0054c77a | DAT_01cae0e8
    LEA EDX,[EBX + 0x20]                ; 0054c77f
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0054c782
    FLD float ptr [EDX]                 ; 0054c789
    FSUB float ptr [EAX + 0x20]         ; 0054c78b
    FSTP float ptr [ESP + 0x15c]        ; 0054c78e
    FLD float ptr [EDX + 0x4]           ; 0054c795
    FSUB float ptr [EAX + 0x24]         ; 0054c798
    FSTP float ptr [ESP + 0x160]        ; 0054c79b
    FLD float ptr [EDX + 0x8]           ; 0054c7a2
    FSUB float ptr [EAX + 0x28]         ; 0054c7a5
    FST float ptr [ESP + 0x164]         ; 0054c7a8
    FMUL float ptr [ESP + 0x164]        ; 0054c7af
    FLD float ptr [ESP + 0x15c]         ; 0054c7b6
    FMUL ST0                            ; 0054c7bd
    FADDP                               ; 0054c7bf
    FSQRT                               ; 0054c7c1
    FST float ptr [ESP]                 ; 0054c7c3
    FCOMP double ptr [0x005970ed]       ; 0054c7c6 | DOUBLE_005970ed
    FNSTSW AX                           ; 0054c7cc
    SAHF                                ; 0054c7ce
    JNC 0x0054c852                      ; 0054c7cf
        ;   XREF to: 0054c852 (CONDITIONAL_JUMP)  ; LAB_0054c852
    MOV dword ptr [EBX + 0xbedac],0x1   ; 0054c7d5
    FLD float ptr [ESP + 0x160]         ; 0054c7df
    FCOMP double ptr [0x005970f5]       ; 0054c7e6 | DOUBLE_005970f5
    FNSTSW AX                           ; 0054c7ec
    SAHF                                ; 0054c7ee
    JNC 0x0054ccd6                      ; 0054c7ef
        ;   XREF to: 0054ccd6 (CONDITIONAL_JUMP)  ; LAB_0054ccd6
    MOV EAX,0x1                         ; 0054c7f5
    MOV dword ptr [ESP + 0x238],EAX     ; 0054c7fa
        ;   Label: LAB_0054c7fa
    FILD dword ptr [ESP + 0x238]        ; 0054c801
    FABS                                ; 0054c808
    FLDZ                                ; 0054c80a
    FCOMPP                              ; 0054c80c
    FNSTSW AX                           ; 0054c80e
    SAHF                                ; 0054c810
    JZ 0x0054c852                       ; 0054c811
        ;   XREF to: 0054c852 (CONDITIONAL_JUMP)  ; LAB_0054c852
    LEA EAX,[ESP + 0xc]                 ; 0054c813
    PUSH EAX                            ; 0054c817
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 0054c818
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    MOV EAX,0x41200000                  ; 0054c81d
    ADD ESP,0x4                         ; 0054c822
    LEA EDX,[ESP + 0xc]                 ; 0054c825
    MOV dword ptr [ESP + 0x10],EAX      ; 0054c829
    MOV EAX,[0x01cae0e8]                ; 0054c82d | DAT_01cae0e8
    MOV dword ptr [ESP + 0x40],EBX      ; 0054c832
    PUSH EDX                            ; 0054c836
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0054c837
    MOV dword ptr [ESP + 0x48],EBX      ; 0054c83e
    PUSH EAX                            ; 0054c842
    MOV ESI,dword ptr [EAX + 0x14c]     ; 0054c843
    CALL dword ptr [ESI + 0x100]        ; 0054c849
    ADD ESP,0x8                         ; 0054c84f
    FLD float ptr [ESP]                 ; 0054c852
        ;   Label: LAB_0054c852
    FCOMP double ptr [0x005970fd]       ; 0054c855 | DOUBLE_005970fd
    FNSTSW AX                           ; 0054c85b
    SAHF                                ; 0054c85d
    JBE 0x0054c87e                      ; 0054c85e
        ;   XREF to: 0054c87e (CONDITIONAL_JUMP)  ; LAB_0054c87e
    MOV dword ptr [EBX + 0xbed9c],0x40a00000 ; 0054c860
    MOV dword ptr [EBX + 0xbeda4],0x0   ; 0054c86a
    MOV dword ptr [EBX + 0xbedac],0x0   ; 0054c874
    MOV EDX,dword ptr [EBX + 0xbedac]   ; 0054c87e
        ;   Label: LAB_0054c87e
    TEST EDX,EDX                        ; 0054c884
    JNZ 0x0054c8b0                      ; 0054c886
        ;   XREF to: 0054c8b0 (CONDITIONAL_JUMP)  ; LAB_0054c8b0
    FLD float ptr [EBX + 0xbed9c]       ; 0054c888
    FSUB float ptr [EBP + 0x18]         ; 0054c88e
    FST float ptr [EBX + 0xbed9c]       ; 0054c891
    FLDZ                                ; 0054c897
    FCOMPP                              ; 0054c899
    FNSTSW AX                           ; 0054c89b
    SAHF                                ; 0054c89d
    JBE 0x0054c8b0                      ; 0054c89e
        ;   XREF to: 0054c8b0 (CONDITIONAL_JUMP)  ; LAB_0054c8b0
    MOV dword ptr [EBX + 0xbedac],0x1   ; 0054c8a0
    MOV dword ptr [EBX + 0xbed9c],EDX   ; 0054c8aa
    LEA ESI,[EBX + 0xbd24]              ; 0054c8b0
        ;   Label: LAB_0054c8b0
    PUSH ESI                            ; 0054c8b6
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 0054c8b7
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0054c8bc
    ADD ESP,0x4                         ; 0054c8bf
    TEST EAX,EAX                        ; 0054c8c2
    JNZ 0x0054c912                      ; 0054c8c4
        ;   XREF to: 0054c912 (CONDITIONAL_JUMP)  ; LAB_0054c912
    CMP dword ptr [EBX + 0xbedac],0x0   ; 0054c8c6
    JNZ 0x0054c912                      ; 0054c8cd
        ;   XREF to: 0054c912 (CONDITIONAL_JUMP)  ; LAB_0054c912
    FLD float ptr [ESP]                 ; 0054c8cf
    FCOMP double ptr [0x00597105]       ; 0054c8d2 | DOUBLE_00597105
    FNSTSW AX                           ; 0054c8d8
    SAHF                                ; 0054c8da
    JNC 0x0054c912                      ; 0054c8db
        ;   XREF to: 0054c912 (CONDITIONAL_JUMP)  ; LAB_0054c912
    CMP dword ptr [EBX + 0xbeda4],0x0   ; 0054c8dd
    JNZ 0x0054c912                      ; 0054c8e4
        ;   XREF to: 0054c912 (CONDITIONAL_JUMP)  ; LAB_0054c912
    PUSH 0x3f000000                     ; 0054c8e6
    MOV dword ptr [EBX + 0xbeda4],0x1   ; 0054c8eb
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 0054c8f5
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 0054c8fa
    TEST EAX,EAX                        ; 0054c8fd
    JZ 0x0054ccdd                       ; 0054c8ff
        ;   XREF to: 0054ccdd (CONDITIONAL_JUMP)  ; LAB_0054ccdd
    PUSH 0x1                            ; 0054c905
    PUSH 0x1                            ; 0054c907
    PUSH ESI                            ; 0054c909
        ;   Label: LAB_0054c909
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0054c90a
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0054c90f
    MOV EAX,[0x01cae0e8]                ; 0054c912 | DAT_01cae0e8
        ;   Label: LAB_0054c912
    MOV EDX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0054c917
    LEA EAX,[ESP + 0x198]               ; 0054c91e
    ADD EDX,0x20                        ; 0054c925
    CMP EAX,EDX                         ; 0054c928
    JZ 0x0054c949                       ; 0054c92a
        ;   XREF to: 0054c949 (CONDITIONAL_JUMP)  ; LAB_0054c949
    MOV EAX,dword ptr [EDX]             ; 0054c92c
    MOV dword ptr [ESP + 0x198],EAX     ; 0054c92e
    MOV EAX,dword ptr [EDX + 0x4]       ; 0054c935
    MOV dword ptr [ESP + 0x19c],EAX     ; 0054c938
    MOV EAX,dword ptr [EDX + 0x8]       ; 0054c93f
    MOV dword ptr [ESP + 0x1a0],EAX     ; 0054c942
    MOV EAX,dword ptr [EBX + 0xbedac]   ; 0054c949
        ;   Label: LAB_0054c949
    CMP EAX,0x2                         ; 0054c94f
    JNZ 0x0054cd18                      ; 0054c952
        ;   XREF to: 0054cd18 (CONDITIONAL_JUMP)  ; LAB_0054cd18
    FLD float ptr [EBX + 0xbeda0]       ; 0054c958
    MOV EAX,0x4                         ; 0054c95e
    MOV ECX,dword ptr [EBX + 0xbedb0]   ; 0054c963
    FSUB float ptr [EBP + 0x18]         ; 0054c969
    SUB EAX,ECX                         ; 0054c96c
    FSTP float ptr [EBX + 0xbeda0]      ; 0054c96e
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0xbedb0] ; 0054c974
    LEA EAX,[ESP + 0x198]               ; 0054c97b
    ADD EDX,0x20                        ; 0054c982
    CMP EAX,EDX                         ; 0054c985
    JZ 0x0054c9a6                       ; 0054c987
        ;   XREF to: 0054c9a6 (CONDITIONAL_JUMP)  ; LAB_0054c9a6
    MOV EAX,dword ptr [EDX]             ; 0054c989
    MOV dword ptr [ESP + 0x198],EAX     ; 0054c98b
    MOV EAX,dword ptr [EDX + 0x4]       ; 0054c992
    MOV dword ptr [ESP + 0x19c],EAX     ; 0054c995
    MOV EAX,dword ptr [EDX + 0x8]       ; 0054c99c
    MOV dword ptr [ESP + 0x1a0],EAX     ; 0054c99f
    FLD float ptr [EBX + 0xbeda0]       ; 0054c9a6
        ;   Label: LAB_0054c9a6
    FLDZ                                ; 0054c9ac
    FCOMPP                              ; 0054c9ae
    FNSTSW AX                           ; 0054c9b0
    SAHF                                ; 0054c9b2
    JC 0x0054cce6                       ; 0054c9b3
        ;   XREF to: 0054cce6 (CONDITIONAL_JUMP)  ; LAB_0054cce6
    MOV dword ptr [EBX + 0xbeda0],0x40a00000 ; 0054c9b9
        ;   Label: LAB_0054c9b9
    MOV dword ptr [EBX + 0xbedac],0x3   ; 0054c9c3
    FLD float ptr [ESP + 0x198]         ; 0054c9cd
        ;   Label: LAB_0054c9cd
    FLD float ptr [ESP + 0x19c]         ; 0054c9d4
    FADD float ptr [0x0059711d]         ; 0054c9db | FLOAT_0059711d
    LEA EAX,[EBX + 0x20]                ; 0054c9e1
    FSTP float ptr [ESP + 0x19c]        ; 0054c9e4
    FSUB float ptr [EAX]                ; 0054c9eb
    FLD float ptr [ESP + 0x19c]         ; 0054c9ed
    FXCH                                ; 0054c9f4
    FSTP float ptr [ESP + 0x168]        ; 0054c9f6
    FSUB float ptr [EAX + 0x4]          ; 0054c9fd
    FLD float ptr [ESP + 0x1a0]         ; 0054ca00
    FXCH                                ; 0054ca07
    FSTP float ptr [ESP + 0x16c]        ; 0054ca09
    FSUB float ptr [EAX + 0x8]          ; 0054ca10
    FST float ptr [ESP + 0x170]         ; 0054ca13
    FLD float ptr [ESP + 0x168]         ; 0054ca1a
    CALL crt_math.c_atan2_FUN_00566c81  ; 0054ca21
        ;   XREF to: 00566c81 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_00566c81()
    FLD float ptr [ESP + 0x170]         ; 0054ca26
    FMUL ST0                            ; 0054ca2d
    FLD float ptr [ESP + 0x168]         ; 0054ca2f
    FMUL ST0                            ; 0054ca36
    FADDP                               ; 0054ca38
    FSQRT                               ; 0054ca3a
    FLD float ptr [ESP + 0x16c]         ; 0054ca3c
    CALL crt_math.c_atan2_FUN_00566c81  ; 0054ca43
        ;   XREF to: 00566c81 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_00566c81()
    MOV ESI,0x3f99999a                  ; 0054ca48
    MOV EDI,0x41a00000                  ; 0054ca4d
    MOV dword ptr [ESP + 0x1e8],ESI     ; 0054ca52
    MOV dword ptr [ESP + 0x20c],EDI     ; 0054ca59
    FXCH                                ; 0054ca60
    FSTP float ptr [ESP + 0x210]        ; 0054ca62
    FCHS                                ; 0054ca69
    MOV EAX,dword ptr [EBX + 0xbedac]   ; 0054ca6b
    FSTP float ptr [ESP + 0x218]        ; 0054ca71
    CMP EAX,0x1                         ; 0054ca78
    JNZ 0x0054ca9f                      ; 0054ca7b
        ;   XREF to: 0054ca9f (CONDITIONAL_JUMP)  ; LAB_0054ca9f
    MOV DL,byte ptr [ESP + 0x213]       ; 0054ca7d
    MOV AH,byte ptr [ESP + 0x21b]       ; 0054ca84
    XOR DL,0x80                         ; 0054ca8b
    XOR AH,0x80                         ; 0054ca8e
    MOV byte ptr [ESP + 0x213],DL       ; 0054ca91
    MOV byte ptr [ESP + 0x21b],AH       ; 0054ca98
    FLD float ptr [ESP + 0x210]         ; 0054ca9f
        ;   Label: LAB_0054ca9f
    FSUB float ptr [EBX + 0x34]         ; 0054caa6
    SUB ESP,0x4                         ; 0054caa9
    FSTP float ptr [ESP]                ; 0054caac
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0054caaf
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x23c],EAX     ; 0054cab4
    FLD float ptr [ESP + 0x23c]         ; 0054cabb
    ADD ESP,0x4                         ; 0054cac2
    FST float ptr [ESP + 0x4]           ; 0054cac5
    FMUL float ptr [EBP + 0x18]         ; 0054cac9
    FMUL float ptr [ESP + 0x1e8]        ; 0054cacc
    FST float ptr [ESP + 0x8]           ; 0054cad3
    FABS                                ; 0054cad7
    FLD float ptr [ESP + 0x4]           ; 0054cad9
    FABS                                ; 0054cadd
    FCOMPP                              ; 0054cadf
    FNSTSW AX                           ; 0054cae1
    SAHF                                ; 0054cae3
    JNC 0x0054cdac                      ; 0054cae4
        ;   XREF to: 0054cdac (CONDITIONAL_JUMP)  ; LAB_0054cdac
    MOV EAX,dword ptr [ESP + 0x210]     ; 0054caea
    MOV dword ptr [EBX + 0x34],EAX      ; 0054caf1
    FLD float ptr [ESP + 0x218]         ; 0054caf4
        ;   Label: LAB_0054caf4
    FSUB float ptr [EBX + 0x30]         ; 0054cafb
    SUB ESP,0x4                         ; 0054cafe
    FSTP float ptr [ESP]                ; 0054cb01
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0054cb04
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x23c],EAX     ; 0054cb09
    FLD float ptr [ESP + 0x23c]         ; 0054cb10
    ADD ESP,0x4                         ; 0054cb17
    FST float ptr [ESP + 0x218]         ; 0054cb1a
    FMUL float ptr [EBP + 0x18]         ; 0054cb21
    FMUL float ptr [ESP + 0x1e8]        ; 0054cb24
    FLD float ptr [EBX + 0x2434]        ; 0054cb2b
    MOV EDX,0xbec90fdb                  ; 0054cb31
    MOV ECX,0x3ec90fdb                  ; 0054cb36
    MOV dword ptr [ESP + 0x1f8],EDX     ; 0054cb3b
    FXCH                                ; 0054cb42
    FADD float ptr [EBX + 0x30]         ; 0054cb44
    MOV dword ptr [ESP + 0x22c],ECX     ; 0054cb47
    FSTP float ptr [EBX + 0x30]         ; 0054cb4e
    FCOMP double ptr [0x005970e5]       ; 0054cb51 | DOUBLE_005970e5
    FNSTSW AX                           ; 0054cb57
    SAHF                                ; 0054cb59
    JNC 0x0054cb7d                      ; 0054cb5a
        ;   XREF to: 0054cb7d (CONDITIONAL_JUMP)  ; LAB_0054cb7d
    CMP dword ptr [EBX + 0xbedac],0x0   ; 0054cb5c
    JNZ 0x0054cb7d                      ; 0054cb63
        ;   XREF to: 0054cb7d (CONDITIONAL_JUMP)  ; LAB_0054cb7d
    MOV EAX,0x3fc90fdb                  ; 0054cb65
    MOV EDI,0xbfc90fdb                  ; 0054cb6a
    MOV dword ptr [ESP + 0x22c],EAX     ; 0054cb6f
    MOV dword ptr [ESP + 0x1f8],EDI     ; 0054cb76
    FLD float ptr [EBX + 0x30]          ; 0054cb7d
        ;   Label: LAB_0054cb7d
    FCOMP float ptr [ESP + 0x1f8]       ; 0054cb80
    FNSTSW AX                           ; 0054cb87
    SAHF                                ; 0054cb89
    JNC 0x0054cb96                      ; 0054cb8a
        ;   XREF to: 0054cb96 (CONDITIONAL_JUMP)  ; LAB_0054cb96
    MOV EAX,dword ptr [ESP + 0x1f8]     ; 0054cb8c
    MOV dword ptr [EBX + 0x30],EAX      ; 0054cb93
    FLD float ptr [EBX + 0x30]          ; 0054cb96
        ;   Label: LAB_0054cb96
    FCOMP float ptr [ESP + 0x22c]       ; 0054cb99
    FNSTSW AX                           ; 0054cba0
    SAHF                                ; 0054cba2
    JBE 0x0054cbaf                      ; 0054cba3
        ;   XREF to: 0054cbaf (CONDITIONAL_JUMP)  ; LAB_0054cbaf
    MOV EAX,dword ptr [ESP + 0x22c]     ; 0054cba5
    MOV dword ptr [EBX + 0x30],EAX      ; 0054cbac
    FLD float ptr [EBX + 0x30]          ; 0054cbaf
        ;   Label: LAB_0054cbaf
    FLD ST0                             ; 0054cbb2
    FSIN                                ; 0054cbb4
    FLD float ptr [EBX + 0x34]          ; 0054cbb6
    FLD ST0                             ; 0054cbb9
    FSIN                                ; 0054cbbb
    FXCH ST3                            ; 0054cbbd
    FCOS                                ; 0054cbbf
    FXCH                                ; 0054cbc1
    FCOS                                ; 0054cbc3
    FXCH ST3                            ; 0054cbc5
    FMUL ST1                            ; 0054cbc7
    FXCH ST3                            ; 0054cbc9
    FMULP                               ; 0054cbcb
    FXCH                                ; 0054cbcd
    FCHS                                ; 0054cbcf
    FLD float ptr [ESP + 0x20c]         ; 0054cbd1
    FXCH                                ; 0054cbd8
    FMUL ST1                            ; 0054cbda
    FXCH ST3                            ; 0054cbdc
    FMUL ST1                            ; 0054cbde
    FXCH ST3                            ; 0054cbe0
    FLD float ptr [EBP + 0x18]          ; 0054cbe2
    FXCH                                ; 0054cbe5
    FMUL ST1                            ; 0054cbe7
    FXCH ST3                            ; 0054cbe9
    FMULP ST2                           ; 0054cbeb
    FXCH ST3                            ; 0054cbed
    FMUL ST3                            ; 0054cbef
    FXCH ST2                            ; 0054cbf1
    FADD float ptr [EBX + 0x24]         ; 0054cbf3
    FXCH                                ; 0054cbf6
    FMULP ST3                           ; 0054cbf8
    FST float ptr [EBX + 0x24]          ; 0054cbfa
    FXCH                                ; 0054cbfd
    FADD float ptr [EBX + 0x20]         ; 0054cbff
    FXCH ST2                            ; 0054cc02
    FADD float ptr [EBX + 0x28]         ; 0054cc04
    FXCH ST2                            ; 0054cc07
    FSTP float ptr [EBX + 0x20]         ; 0054cc09
    FXCH                                ; 0054cc0c
    FSTP float ptr [EBX + 0x28]         ; 0054cc0e
    FCOMP float ptr [ESP + 0x19c]       ; 0054cc11
    FNSTSW AX                           ; 0054cc18
    SAHF                                ; 0054cc1a
    JNC 0x0054cc27                      ; 0054cc1b
        ;   XREF to: 0054cc27 (CONDITIONAL_JUMP)  ; LAB_0054cc27
    MOV EAX,dword ptr [ESP + 0x19c]     ; 0054cc1d
    MOV dword ptr [EBX + 0x24],EAX      ; 0054cc24
    PUSH EBX                            ; 0054cc27
        ;   Label: LAB_0054cc27
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 0054cc28
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000()
    ADD ESP,0x4                         ; 0054cc2d
    LEA EAX,[ESP + 0xb4]                ; 0054cc30
    PUSH EAX                            ; 0054cc37
    LEA EAX,[EBX + 0xbd24]              ; 0054cc38
    PUSH EAX                            ; 0054cc3e
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40 ; 0054cc3f
        ;   XREF to: 0051ef40 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40()
    ADD ESP,0x8                         ; 0054cc44
    LEA EDX,[EBX + 0x25f0]              ; 0054cc47
    MOV ESI,EAX                         ; 0054cc4d
    MOV EDI,EDX                         ; 0054cc4f
    CMP EDX,EAX                         ; 0054cc51
    JZ 0x0054cc65                       ; 0054cc53
        ;   XREF to: 0054cc65 (CONDITIONAL_JUMP)  ; LAB_0054cc65
    MOV ECX,dword ptr [EAX]             ; 0054cc55
    MOV dword ptr [EDX],ECX             ; 0054cc57
    MOV ECX,dword ptr [EAX + 0x4]       ; 0054cc59
    MOV dword ptr [EDX + 0x4],ECX       ; 0054cc5c
    MOV ECX,dword ptr [EAX + 0x8]       ; 0054cc5f
    MOV dword ptr [EDX + 0x8],ECX       ; 0054cc62
    LEA EAX,[ESI + 0xc]                 ; 0054cc65
        ;   Label: LAB_0054cc65
    LEA EDX,[EDI + 0xc]                 ; 0054cc68
    CMP EDX,EAX                         ; 0054cc6b
    JZ 0x0054cc7f                       ; 0054cc6d
        ;   XREF to: 0054cc7f (CONDITIONAL_JUMP)  ; LAB_0054cc7f
    MOV ECX,dword ptr [EAX]             ; 0054cc6f
    MOV dword ptr [EDX],ECX             ; 0054cc71
    MOV ECX,dword ptr [EAX + 0x4]       ; 0054cc73
    MOV dword ptr [EDX + 0x4],ECX       ; 0054cc76
    MOV ECX,dword ptr [EAX + 0x8]       ; 0054cc79
    MOV dword ptr [EDX + 0x8],ECX       ; 0054cc7c
    LEA EAX,[EBX + 0x150]               ; 0054cc7f
        ;   Label: LAB_0054cc7f
    PUSH EAX                            ; 0054cc85
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 0054cc86
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0054cc8b
    ADD ESP,0x4                         ; 0054cc8e
    CMP EAX,0x2                         ; 0054cc91
    JZ 0x0054cca8                       ; 0054cc94
        ;   XREF to: 0054cca8 (CONDITIONAL_JUMP)  ; LAB_0054cca8
    MOV EAX,[0x005b9354]                ; 0054cc96 | DAT_005b9354 | DAT_01c775ec
    CMP dword ptr [EAX + 0x228],0x0     ; 0054cc9b | DAT_01c77814
    JZ 0x0054d86e                       ; 0054cca2
        ;   XREF to: 0054d86e (CONDITIONAL_JUMP)  ; LAB_0054d86e
    MOV ESP,EBP                         ; 0054cca8
        ;   Label: LAB_0054cca8
    POP EBP                             ; 0054ccaa
    POP EDI                             ; 0054ccab
    POP ESI                             ; 0054ccac
    POP EBX                             ; 0054ccad
    RET                                 ; 0054ccae
    MOV ECX,0x597073                    ; 0054ccaf | = "..\\core\\vampboss.cpp"
        ;   Label: LAB_0054ccaf
    MOV EAX,0xcf                        ; 0054ccb4
    PUSH 0x597088                       ; 0054ccb9 | = "CVampireBoss::process - Need 4 waypoints"
    MOV dword ptr [0x01cc4800],ECX      ; 0054ccbe | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 0054ccc4 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0054ccc9
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0054ccce
    JMP 0x0054c6b4                      ; 0054ccd1
        ;   XREF to: 0054c6b4 (UNCONDITIONAL_JUMP)  ; LAB_0054c6b4
    XOR EAX,EAX                         ; 0054ccd6
        ;   Label: LAB_0054ccd6
    JMP 0x0054c7fa                      ; 0054ccd8
        ;   XREF to: 0054c7fa (UNCONDITIONAL_JUMP)  ; LAB_0054c7fa
    PUSH 0x1                            ; 0054ccdd
        ;   Label: LAB_0054ccdd
    PUSH 0x2                            ; 0054ccdf
    JMP 0x0054c909                      ; 0054cce1
        ;   XREF to: 0054c909 (UNCONDITIONAL_JUMP)  ; LAB_0054c909
    LEA EAX,[EBX + 0x20]                ; 0054cce6
        ;   Label: LAB_0054cce6
    FLD float ptr [ESP + 0x198]         ; 0054cce9
    FSUB float ptr [EAX]                ; 0054ccf0
    FMUL ST0                            ; 0054ccf2
    FLD float ptr [ESP + 0x1a0]         ; 0054ccf4
    FSUB float ptr [EAX + 0x8]          ; 0054ccfb
    FMUL ST0                            ; 0054ccfe
    FADDP                               ; 0054cd00
    FSQRT                               ; 0054cd02
    FCOMP double ptr [0x00597115]       ; 0054cd04 | DOUBLE_00597115
    FNSTSW AX                           ; 0054cd0a
    SAHF                                ; 0054cd0c
    JC 0x0054c9b9                       ; 0054cd0d
        ;   XREF to: 0054c9b9 (CONDITIONAL_JUMP)  ; LAB_0054c9b9
    JMP 0x0054c9cd                      ; 0054cd13
        ;   XREF to: 0054c9cd (UNCONDITIONAL_JUMP)  ; LAB_0054c9cd
    CMP EAX,0x3                         ; 0054cd18
        ;   Label: LAB_0054cd18
    JNZ 0x0054c9cd                      ; 0054cd1b
        ;   XREF to: 0054c9cd (CONDITIONAL_JUMP)  ; LAB_0054c9cd
    MOV EAX,dword ptr [EBX + 0xbedb0]   ; 0054cd21
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0xbedb4] ; 0054cd27
    LEA EAX,[ESP + 0x198]               ; 0054cd2e
    ADD EDX,0x20                        ; 0054cd35
    CMP EAX,EDX                         ; 0054cd38
    JZ 0x0054cd59                       ; 0054cd3a
        ;   XREF to: 0054cd59 (CONDITIONAL_JUMP)  ; LAB_0054cd59
    MOV EAX,dword ptr [EDX]             ; 0054cd3c
    MOV dword ptr [ESP + 0x198],EAX     ; 0054cd3e
    MOV EAX,dword ptr [EDX + 0x4]       ; 0054cd45
    MOV dword ptr [ESP + 0x19c],EAX     ; 0054cd48
    MOV EAX,dword ptr [EDX + 0x8]       ; 0054cd4f
    MOV dword ptr [ESP + 0x1a0],EAX     ; 0054cd52
    FLD float ptr [EBX + 0xbeda0]       ; 0054cd59
        ;   Label: LAB_0054cd59
    FSUB float ptr [EBP + 0x18]         ; 0054cd5f
    FST float ptr [EBX + 0xbeda0]       ; 0054cd62
    FLDZ                                ; 0054cd68
    FCOMPP                              ; 0054cd6a
    FNSTSW AX                           ; 0054cd6c
    SAHF                                ; 0054cd6e
    JNC 0x0054cd9e                      ; 0054cd6f
        ;   XREF to: 0054cd9e (CONDITIONAL_JUMP)  ; LAB_0054cd9e
    LEA EAX,[EBX + 0x20]                ; 0054cd71
    FLD float ptr [ESP + 0x198]         ; 0054cd74
    FSUB float ptr [EAX]                ; 0054cd7b
    FMUL ST0                            ; 0054cd7d
    FLD float ptr [ESP + 0x1a0]         ; 0054cd7f
    FSUB float ptr [EAX + 0x8]          ; 0054cd86
    FMUL ST0                            ; 0054cd89
    FADDP                               ; 0054cd8b
    FSQRT                               ; 0054cd8d
    FCOMP double ptr [0x0059710d]       ; 0054cd8f | DOUBLE_0059710d
    FNSTSW AX                           ; 0054cd95
    SAHF                                ; 0054cd97
    JNC 0x0054c9cd                      ; 0054cd98
        ;   XREF to: 0054c9cd (CONDITIONAL_JUMP)  ; LAB_0054c9cd
    PUSH EBX                            ; 0054cd9e
        ;   Label: LAB_0054cd9e
    CALL core_vampboss.cpp_CVampireBoss_transformToHuman_FUN_0054e1e0 ; 0054cd9f
        ;   XREF to: 0054e1e0 (UNCONDITIONAL_CALL)  ; undefined core_vampboss.cpp_CVampireBoss_transformToHuman_FUN_0054e1e0()
    ADD ESP,0x4                         ; 0054cda4
    JMP 0x0054c9cd                      ; 0054cda7
        ;   XREF to: 0054c9cd (UNCONDITIONAL_JUMP)  ; LAB_0054c9cd
    FLD float ptr [EBX + 0x34]          ; 0054cdac
        ;   Label: LAB_0054cdac
    FADD float ptr [ESP + 0x8]          ; 0054cdaf
    FSTP float ptr [EBX + 0x34]         ; 0054cdb3
    JMP 0x0054caf4                      ; 0054cdb6
        ;   XREF to: 0054caf4 (UNCONDITIONAL_JUMP)  ; LAB_0054caf4
    CMP EDX,0x1                         ; 0054cdbb
        ;   Label: LAB_0054cdbb
    JNZ 0x0054cf69                      ; 0054cdbe
        ;   XREF to: 0054cf69 (CONDITIONAL_JUMP)  ; LAB_0054cf69
    FLD float ptr [EBP + 0x18]          ; 0054cdc4
    FDIV float ptr [0x005a3a7c]         ; 0054cdc7 | FLOAT_005a3a7c
    FADD float ptr [EBX + 0xbed98]      ; 0054cdcd
    FST float ptr [EBX + 0xbed98]       ; 0054cdd3
    FLD1                                ; 0054cdd9
    FCOMPP                              ; 0054cddb
    FNSTSW AX                           ; 0054cddd
    SAHF                                ; 0054cddf
    JA 0x0054cdff                       ; 0054cde0
        ;   XREF to: 0054cdff (CONDITIONAL_JUMP)  ; LAB_0054cdff
    PUSH 0x5970b1                       ; 0054cde2 | = "morphCompleted"
    MOV EAX,[0x005b7650]                ; 0054cde7 | DAT_005b7650
    PUSH EAX                            ; 0054cdec
    MOV dword ptr [EBX + 0xbe168],0x2   ; 0054cded
    CALL core_event.cpp_CEventList_executeCommands_FUN_0047ab70 ; 0054cdf7
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_executeCommands_FUN_0047ab70()
    ADD ESP,0x8                         ; 0054cdfc
    PUSH dword ptr [EBP + 0x18]         ; 0054cdff
        ;   Label: LAB_0054cdff
    PUSH EBX                            ; 0054ce02
    CALL core_vampboss.cpp_CVampireBoss_advanceAnimation_FUN_0054d9c0 ; 0054ce03
        ;   XREF to: 0054d9c0 (UNCONDITIONAL_CALL)  ; undefined core_vampboss.cpp_CVampireBoss_advanceAnimation_FUN_0054d9c0()
    ADD ESP,0x8                         ; 0054ce08
    LEA ESI,[EBX + 0xbd24]              ; 0054ce0b
    PUSH ESI                            ; 0054ce11
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880 ; 0054ce12
        ;   XREF to: 0051b880 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880()
    ADD ESP,0x4                         ; 0054ce17
    PUSH ESI                            ; 0054ce1a
    PUSH dword ptr [EBX + 0x240c]       ; 0054ce1b
    LEA EAX,[EBX + 0x30]                ; 0054ce21
    PUSH dword ptr [EBP + 0x18]         ; 0054ce24
    PUSH EAX                            ; 0054ce27
    LEA EAX,[EBX + 0x20]                ; 0054ce28
    PUSH EAX                            ; 0054ce2b
    LEA EAX,[EBX + 0xdfd8]              ; 0054ce2c
    PUSH EAX                            ; 0054ce32
    CALL core_cloth.cpp_CCloth_process_FUN_00436e50 ; 0054ce33
        ;   XREF to: 00436e50 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CCloth_process_FUN_00436e50()
    ADD ESP,0x18                        ; 0054ce38
    LEA ESI,[EBX + 0x150]               ; 0054ce3b
    MOV EAX,dword ptr [EBP + 0x18]      ; 0054ce41
    FLDZ                                ; 0054ce44
    MOV dword ptr [ESP + 0x230],EAX     ; 0054ce46
    FCOMP float ptr [EBP + 0x18]        ; 0054ce4d
    FNSTSW AX                           ; 0054ce50
    SAHF                                ; 0054ce52
    JNC 0x0054ce80                      ; 0054ce53
        ;   XREF to: 0054ce80 (CONDITIONAL_JUMP)  ; LAB_0054ce80
    LEA EAX,[ESP + 0x230]               ; 0054ce55
        ;   Label: LAB_0054ce55
    PUSH EAX                            ; 0054ce5c
    PUSH ESI                            ; 0054ce5d
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 0054ce5e
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_advance_FUN_004e11c0()
    ADD ESP,0x8                         ; 0054ce63
    FLDZ                                ; 0054ce66
    FCOMP float ptr [ESP + 0x230]       ; 0054ce68
    FNSTSW AX                           ; 0054ce6f
    SAHF                                ; 0054ce71
    JC 0x0054ce55                       ; 0054ce72
        ;   XREF to: 0054ce55 (CONDITIONAL_JUMP)  ; LAB_0054ce55
    LEA EAX,[EAX]                       ; 0054ce74
    LEA EDX,[EDX]                       ; 0054ce7a
    PUSH ESI                            ; 0054ce80
        ;   Label: LAB_0054ce80
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880 ; 0054ce81
        ;   XREF to: 0051b880 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880()
    ADD ESP,0x4                         ; 0054ce86
    PUSH ESI                            ; 0054ce89
    PUSH dword ptr [EBX + 0x240c]       ; 0054ce8a
    LEA EAX,[EBX + 0x30]                ; 0054ce90
    PUSH dword ptr [EBP + 0x18]         ; 0054ce93
    PUSH EAX                            ; 0054ce96
    LEA EDI,[EBX + 0x20]                ; 0054ce97
    PUSH EDI                            ; 0054ce9a
    MOV dword ptr [ESP + 0x24c],EAX     ; 0054ce9b
    LEA EAX,[EBX + 0x48b08]             ; 0054cea2
    PUSH EAX                            ; 0054cea8
    CALL core_cloth.cpp_CCloth_process_FUN_00436e50 ; 0054cea9
        ;   XREF to: 00436e50 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CCloth_process_FUN_00436e50()
    ADD ESP,0x18                        ; 0054ceae
    PUSH ESI                            ; 0054ceb1
    PUSH dword ptr [EBX + 0x240c]       ; 0054ceb2
    MOV EAX,dword ptr [ESP + 0x240]     ; 0054ceb8
    PUSH dword ptr [EBP + 0x18]         ; 0054cebf
    PUSH EAX                            ; 0054cec2
    PUSH EDI                            ; 0054cec3
    LEA EAX,[EBX + 0x83638]             ; 0054cec4
    PUSH EAX                            ; 0054ceca
    CALL core_cloth.cpp_CCloth_process_FUN_00436e50 ; 0054cecb
        ;   XREF to: 00436e50 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CCloth_process_FUN_00436e50()
    ADD ESP,0x18                        ; 0054ced0
    LEA EAX,[ESP + 0xfc]                ; 0054ced3
    PUSH EAX                            ; 0054ceda
    PUSH ESI                            ; 0054cedb
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40 ; 0054cedc
        ;   XREF to: 0051ef40 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40()
    ADD ESP,0x8                         ; 0054cee1
    LEA EDX,[EBX + 0x25f0]              ; 0054cee4
    MOV ESI,EAX                         ; 0054ceea
    MOV EDI,EDX                         ; 0054ceec
    CMP EDX,EAX                         ; 0054ceee
    JZ 0x0054cf02                       ; 0054cef0
        ;   XREF to: 0054cf02 (CONDITIONAL_JUMP)  ; LAB_0054cf02
    MOV ECX,dword ptr [EAX]             ; 0054cef2
    MOV dword ptr [EDX],ECX             ; 0054cef4
    MOV ECX,dword ptr [EAX + 0x4]       ; 0054cef6
    MOV dword ptr [EDX + 0x4],ECX       ; 0054cef9
    MOV ECX,dword ptr [EAX + 0x8]       ; 0054cefc
    MOV dword ptr [EDX + 0x8],ECX       ; 0054ceff
    LEA EDX,[ESI + 0xc]                 ; 0054cf02
        ;   Label: LAB_0054cf02
    LEA EAX,[EDI + 0xc]                 ; 0054cf05
    CMP EAX,EDX                         ; 0054cf08
    JZ 0x0054cf1c                       ; 0054cf0a
        ;   XREF to: 0054cf1c (CONDITIONAL_JUMP)  ; LAB_0054cf1c
    MOV ECX,dword ptr [EDX]             ; 0054cf0c
    MOV dword ptr [EAX],ECX             ; 0054cf0e
    MOV ECX,dword ptr [EDX + 0x4]       ; 0054cf10
    MOV dword ptr [EAX + 0x4],ECX       ; 0054cf13
    MOV ECX,dword ptr [EDX + 0x8]       ; 0054cf16
    MOV dword ptr [EAX + 0x8],ECX       ; 0054cf19
    LEA EAX,[ESP + 0xcc]                ; 0054cf1c
        ;   Label: LAB_0054cf1c
    PUSH EAX                            ; 0054cf23
    LEA EAX,[EBX + 0xbd24]              ; 0054cf24
    PUSH EAX                            ; 0054cf2a
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40 ; 0054cf2b
        ;   XREF to: 0051ef40 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40()
    ADD ESP,0x8                         ; 0054cf30
    LEA EAX,[ESP + 0xcc]                ; 0054cf33
    PUSH EAX                            ; 0054cf3a
    LEA ESI,[EBX + 0x25f0]              ; 0054cf3b
    PUSH ESI                            ; 0054cf41
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00 ; 0054cf42
        ;   XREF to: 0041cc00 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00()
    ADD ESP,0x8                         ; 0054cf47
    LEA EAX,[ESP + 0xd8]                ; 0054cf4a
    PUSH EAX                            ; 0054cf51
    PUSH ESI                            ; 0054cf52
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00 ; 0054cf53
        ;   XREF to: 0041cc00 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00()
    ADD ESP,0x8                         ; 0054cf58
    FLD float ptr [EBX + 0x24]          ; 0054cf5b
    FADD float ptr [EBP + 0x18]         ; 0054cf5e
    FSTP float ptr [EBX + 0x24]         ; 0054cf61
    JMP 0x0054cc7f                      ; 0054cf64
        ;   XREF to: 0054cc7f (UNCONDITIONAL_JUMP)  ; LAB_0054cc7f
    CMP EDX,0x3                         ; 0054cf69
        ;   Label: LAB_0054cf69
    JNZ 0x0054d161                      ; 0054cf6c
        ;   XREF to: 0054d161 (CONDITIONAL_JUMP)  ; LAB_0054d161
    FLD float ptr [EBP + 0x18]          ; 0054cf72
    FDIV float ptr [0x005a3a7c]         ; 0054cf75 | FLOAT_005a3a7c
    MOV EAX,dword ptr [EBX + 0xbed98]   ; 0054cf7b
    MOV dword ptr [ESP + 0x1f0],EAX     ; 0054cf81
    FLD float ptr [ESP + 0x1f0]         ; 0054cf88
    FXCH                                ; 0054cf8f
    FSTP float ptr [ESP + 0x1ec]        ; 0054cf91
    FSUB float ptr [ESP + 0x1ec]        ; 0054cf98
    FST float ptr [EBX + 0xbed98]       ; 0054cf9f
    FLDZ                                ; 0054cfa5
    FCOMPP                              ; 0054cfa7
    FNSTSW AX                           ; 0054cfa9
    SAHF                                ; 0054cfab
    JC 0x0054d140                       ; 0054cfac
        ;   XREF to: 0054d140 (CONDITIONAL_JUMP)  ; LAB_0054d140
    PUSH 0x5970c0                       ; 0054cfb2 | = "backToHuman"
    MOV EDI,dword ptr [0x005b7650]      ; 0054cfb7 | DAT_005b7650
    PUSH EDI                            ; 0054cfbd
    MOV dword ptr [EBX + 0xbe168],0x0   ; 0054cfbe
    CALL core_event.cpp_CEventList_executeCommands_FUN_0047ab70 ; 0054cfc8
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_executeCommands_FUN_0047ab70()
    FLD float ptr [EBX + 0x240c]        ; 0054cfcd
    MOV dword ptr [EBX + 0xbed98],0x0   ; 0054cfd3
    ADD ESP,0x8                         ; 0054cfdd
    FSTP float ptr [EBX + 0x24]         ; 0054cfe0
        ;   Label: LAB_0054cfe0
    PUSH dword ptr [EBP + 0x18]         ; 0054cfe3
    PUSH EBX                            ; 0054cfe6
    CALL core_vampboss.cpp_CVampireBoss_advanceAnimation_FUN_0054d9c0 ; 0054cfe7
        ;   XREF to: 0054d9c0 (UNCONDITIONAL_CALL)  ; undefined core_vampboss.cpp_CVampireBoss_advanceAnimation_FUN_0054d9c0()
    ADD ESP,0x8                         ; 0054cfec
    LEA ESI,[EBX + 0xbd24]              ; 0054cfef
    PUSH ESI                            ; 0054cff5
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880 ; 0054cff6
        ;   XREF to: 0051b880 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880()
    ADD ESP,0x4                         ; 0054cffb
    PUSH ESI                            ; 0054cffe
    PUSH dword ptr [EBX + 0x240c]       ; 0054cfff
    LEA EAX,[EBX + 0x30]                ; 0054d005
    PUSH dword ptr [EBP + 0x18]         ; 0054d008
    PUSH EAX                            ; 0054d00b
    LEA EAX,[EBX + 0x20]                ; 0054d00c
    PUSH EAX                            ; 0054d00f
    LEA EAX,[EBX + 0xdfd8]              ; 0054d010
    PUSH EAX                            ; 0054d016
    CALL core_cloth.cpp_CCloth_process_FUN_00436e50 ; 0054d017
        ;   XREF to: 00436e50 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CCloth_process_FUN_00436e50()
    ADD ESP,0x18                        ; 0054d01c
    LEA ESI,[EBX + 0x150]               ; 0054d01f
    MOV EAX,dword ptr [EBP + 0x18]      ; 0054d025
    FLDZ                                ; 0054d028
    MOV dword ptr [ESP + 0x234],EAX     ; 0054d02a
    FCOMP float ptr [EBP + 0x18]        ; 0054d031
    FNSTSW AX                           ; 0054d034
    SAHF                                ; 0054d036
    JNC 0x0054d060                      ; 0054d037
        ;   XREF to: 0054d060 (CONDITIONAL_JUMP)  ; LAB_0054d060
    LEA EAX,[ESP + 0x234]               ; 0054d039
        ;   Label: LAB_0054d039
    PUSH EAX                            ; 0054d040
    PUSH ESI                            ; 0054d041
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 0054d042
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_advance_FUN_004e11c0()
    ADD ESP,0x8                         ; 0054d047
    FLDZ                                ; 0054d04a
    FCOMP float ptr [ESP + 0x234]       ; 0054d04c
    FNSTSW AX                           ; 0054d053
    SAHF                                ; 0054d055
    JC 0x0054d039                       ; 0054d056
        ;   XREF to: 0054d039 (CONDITIONAL_JUMP)  ; LAB_0054d039
    LEA EAX,[EAX]                       ; 0054d058
    MOV EDX,EDX                         ; 0054d05e
    PUSH ESI                            ; 0054d060
        ;   Label: LAB_0054d060
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880 ; 0054d061
        ;   XREF to: 0051b880 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880()
    ADD ESP,0x4                         ; 0054d066
    PUSH ESI                            ; 0054d069
    PUSH dword ptr [EBX + 0x240c]       ; 0054d06a
    LEA EDI,[EBX + 0x30]                ; 0054d070
    PUSH dword ptr [EBP + 0x18]         ; 0054d073
    PUSH EDI                            ; 0054d076
    LEA EAX,[EBX + 0x20]                ; 0054d077
    PUSH EAX                            ; 0054d07a
    MOV dword ptr [ESP + 0x24c],EAX     ; 0054d07b
    LEA EAX,[EBX + 0x48b08]             ; 0054d082
    PUSH EAX                            ; 0054d088
    CALL core_cloth.cpp_CCloth_process_FUN_00436e50 ; 0054d089
        ;   XREF to: 00436e50 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CCloth_process_FUN_00436e50()
    ADD ESP,0x18                        ; 0054d08e
    PUSH ESI                            ; 0054d091
    PUSH dword ptr [EBX + 0x240c]       ; 0054d092
    PUSH dword ptr [EBP + 0x18]         ; 0054d098
    PUSH EDI                            ; 0054d09b
    MOV ECX,dword ptr [ESP + 0x248]     ; 0054d09c
    PUSH ECX                            ; 0054d0a3
    LEA EAX,[EBX + 0x83638]             ; 0054d0a4
    PUSH EAX                            ; 0054d0aa
    CALL core_cloth.cpp_CCloth_process_FUN_00436e50 ; 0054d0ab
        ;   XREF to: 00436e50 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CCloth_process_FUN_00436e50()
    ADD ESP,0x18                        ; 0054d0b0
    LEA EAX,[ESP + 0x9c]                ; 0054d0b3
    PUSH EAX                            ; 0054d0ba
    PUSH ESI                            ; 0054d0bb
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40 ; 0054d0bc
        ;   XREF to: 0051ef40 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40()
    ADD ESP,0x8                         ; 0054d0c1
    LEA EDX,[EBX + 0x25f0]              ; 0054d0c4
    MOV EDI,EAX                         ; 0054d0ca
    MOV ESI,EDX                         ; 0054d0cc
    CMP EDX,EAX                         ; 0054d0ce
    JZ 0x0054d0e2                       ; 0054d0d0
        ;   XREF to: 0054d0e2 (CONDITIONAL_JUMP)  ; LAB_0054d0e2
    MOV ECX,dword ptr [EAX]             ; 0054d0d2
    MOV dword ptr [EDX],ECX             ; 0054d0d4
    MOV ECX,dword ptr [EAX + 0x4]       ; 0054d0d6
    MOV dword ptr [EDX + 0x4],ECX       ; 0054d0d9
    MOV ECX,dword ptr [EAX + 0x8]       ; 0054d0dc
    MOV dword ptr [EDX + 0x8],ECX       ; 0054d0df
    LEA EDX,[EDI + 0xc]                 ; 0054d0e2
        ;   Label: LAB_0054d0e2
    LEA EAX,[ESI + 0xc]                 ; 0054d0e5
    CMP EAX,EDX                         ; 0054d0e8
    JZ 0x0054d0fc                       ; 0054d0ea
        ;   XREF to: 0054d0fc (CONDITIONAL_JUMP)  ; LAB_0054d0fc
    MOV ECX,dword ptr [EDX]             ; 0054d0ec
    MOV dword ptr [EAX],ECX             ; 0054d0ee
    MOV ECX,dword ptr [EDX + 0x4]       ; 0054d0f0
    MOV dword ptr [EAX + 0x4],ECX       ; 0054d0f3
    MOV ECX,dword ptr [EDX + 0x8]       ; 0054d0f6
    MOV dword ptr [EAX + 0x8],ECX       ; 0054d0f9
    LEA EAX,[ESP + 0x84]                ; 0054d0fc
        ;   Label: LAB_0054d0fc
    PUSH EAX                            ; 0054d103
    LEA EAX,[EBX + 0xbd24]              ; 0054d104
    PUSH EAX                            ; 0054d10a
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40 ; 0054d10b
        ;   XREF to: 0051ef40 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40()
    ADD ESP,0x8                         ; 0054d110
    LEA EAX,[ESP + 0x84]                ; 0054d113
    PUSH EAX                            ; 0054d11a
    LEA ESI,[EBX + 0x25f0]              ; 0054d11b
    PUSH ESI                            ; 0054d121
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00 ; 0054d122
        ;   XREF to: 0041cc00 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00()
    ADD ESP,0x8                         ; 0054d127
    LEA EAX,[ESP + 0x90]                ; 0054d12a
    PUSH EAX                            ; 0054d131
    PUSH ESI                            ; 0054d132
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00 ; 0054d133
        ;   XREF to: 0041cc00 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00()
    ADD ESP,0x8                         ; 0054d138
    JMP 0x0054cc7f                      ; 0054d13b
        ;   XREF to: 0054cc7f (UNCONDITIONAL_JUMP)  ; LAB_0054cc7f
    FLD float ptr [EBX + 0x240c]        ; 0054d140
        ;   Label: LAB_0054d140
    FSUB float ptr [EBX + 0x24]         ; 0054d146
    FLD float ptr [ESP + 0x1ec]         ; 0054d149
    FDIV float ptr [ESP + 0x1f0]        ; 0054d150
    FMULP                               ; 0054d157
    FADD float ptr [EBX + 0x24]         ; 0054d159
    JMP 0x0054cfe0                      ; 0054d15c
        ;   XREF to: 0054cfe0 (UNCONDITIONAL_JUMP)  ; LAB_0054cfe0
    MOV EAX,dword ptr [EBP + 0x18]      ; 0054d161
        ;   Label: LAB_0054d161
    MOV dword ptr [ESP + 0x1d8],EAX     ; 0054d164
    LEA EAX,[EBX + 0x150]               ; 0054d16b
    FLDZ                                ; 0054d171
    MOV dword ptr [ESP + 0x220],EAX     ; 0054d173
    FCOMP float ptr [EBP + 0x18]        ; 0054d17a
    FNSTSW AX                           ; 0054d17d
    SAHF                                ; 0054d17f
    JNC 0x0054d1c9                      ; 0054d180
        ;   XREF to: 0054d1c9 (CONDITIONAL_JUMP)  ; LAB_0054d1c9
    LEA EAX,[ESP + 0x1d8]               ; 0054d182
        ;   Label: LAB_0054d182
    PUSH EAX                            ; 0054d189
    MOV EDX,dword ptr [ESP + 0x224]     ; 0054d18a
    PUSH EDX                            ; 0054d191
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 0054d192
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_advance_FUN_004e11c0()
    ADD ESP,0x8                         ; 0054d197
    CMP EAX,0x2                         ; 0054d19a
    JNC 0x0054d4a9                      ; 0054d19d
        ;   XREF to: 0054d4a9 (CONDITIONAL_JUMP)  ; LAB_0054d4a9
    CMP EAX,0x1                         ; 0054d1a3
    JNZ 0x0054d1bb                      ; 0054d1a6
        ;   XREF to: 0054d1bb (CONDITIONAL_JUMP)  ; LAB_0054d1bb
    PUSH EBX                            ; 0054d1a8
    CALL core_vampboss.cpp_CVampireBoss_summonStalagmites_FUN_0054e0b0 ; 0054d1a9
        ;   XREF to: 0054e0b0 (UNCONDITIONAL_CALL)  ; undefined core_vampboss.cpp_CVampireBoss_summonStalagmites_FUN_0054e0b0()
    ADD ESP,0x4                         ; 0054d1ae
        ;   Label: LAB_0054d1ae
    MOV dword ptr [EBX + 0xbed9c],0x3f800000 ; 0054d1b1
    FLDZ                                ; 0054d1bb
        ;   Label: LAB_0054d1bb
    FCOMP float ptr [ESP + 0x1d8]       ; 0054d1bd
    FNSTSW AX                           ; 0054d1c4
    SAHF                                ; 0054d1c6
    JC 0x0054d182                       ; 0054d1c7
        ;   XREF to: 0054d182 (CONDITIONAL_JUMP)  ; LAB_0054d182
    LEA EAX,[ESP + 0xe4]                ; 0054d1c9
        ;   Label: LAB_0054d1c9
    PUSH EAX                            ; 0054d1d0
    MOV EDX,dword ptr [ESP + 0x224]     ; 0054d1d1
    PUSH EDX                            ; 0054d1d8
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40 ; 0054d1d9
        ;   XREF to: 0051ef40 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40()
    ADD ESP,0x8                         ; 0054d1de
    LEA EDX,[EBX + 0x25f0]              ; 0054d1e1
    MOV ESI,EAX                         ; 0054d1e7
    MOV EDI,EDX                         ; 0054d1e9
    CMP EDX,EAX                         ; 0054d1eb
    JZ 0x0054d1ff                       ; 0054d1ed
        ;   XREF to: 0054d1ff (CONDITIONAL_JUMP)  ; LAB_0054d1ff
    MOV ECX,dword ptr [EAX]             ; 0054d1ef
    MOV dword ptr [EDX],ECX             ; 0054d1f1
    MOV ECX,dword ptr [EAX + 0x4]       ; 0054d1f3
    MOV dword ptr [EDX + 0x4],ECX       ; 0054d1f6
    MOV ECX,dword ptr [EAX + 0x8]       ; 0054d1f9
    MOV dword ptr [EDX + 0x8],ECX       ; 0054d1fc
    LEA EDX,[ESI + 0xc]                 ; 0054d1ff
        ;   Label: LAB_0054d1ff
    LEA EAX,[EDI + 0xc]                 ; 0054d202
    CMP EAX,EDX                         ; 0054d205
    JZ 0x0054d219                       ; 0054d207
        ;   XREF to: 0054d219 (CONDITIONAL_JUMP)  ; LAB_0054d219
    MOV ECX,dword ptr [EDX]             ; 0054d209
    MOV dword ptr [EAX],ECX             ; 0054d20b
    MOV ECX,dword ptr [EDX + 0x4]       ; 0054d20d
    MOV dword ptr [EAX + 0x4],ECX       ; 0054d210
    MOV ECX,dword ptr [EDX + 0x8]       ; 0054d213
    MOV dword ptr [EAX + 0x8],ECX       ; 0054d216
    LEA ESI,[EBX + 0x150]               ; 0054d219
        ;   Label: LAB_0054d219
    PUSH ESI                            ; 0054d21f
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 0054d220
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0054d225
    ADD ESP,0x4                         ; 0054d228
    MOV EDI,EAX                         ; 0054d22b
    CMP EAX,0x9                         ; 0054d22d
    JA 0x0054d289                       ; 0054d230
        ;   XREF to: 0054d289 (CONDITIONAL_JUMP)  ; caseD_9
    JMP dword ptr [EAX*0x4 + 0x54c664]  ; 0054d232 | caseD_0 | caseD_9 | caseD_2
        ;   Label: switchD
    FLD float ptr [0x005a3a84]          ; 0054d239 | FLOAT_005a3a84
        ;   Label: caseD_0
    FMUL float ptr [EBP + 0x18]         ; 0054d23f
    MOV EAX,[0x005b9354]                ; 0054d242 | DAT_005b9354
    FSTP float ptr [EBX + 0x2430]       ; 0054d247
    CMP dword ptr [EAX + 0x228],0x0     ; 0054d24d | DAT_01c77814
    JZ 0x0054d7f3                       ; 0054d254
        ;   XREF to: 0054d7f3 (CONDITIONAL_JUMP)  ; LAB_0054d7f3
    PUSH 0x5970cc                       ; 0054d25a | = "morphToBat"
    MOV ECX,dword ptr [0x005b7650]      ; 0054d25f | DAT_005b7650
    PUSH ECX                            ; 0054d265
    MOV dword ptr [EBX + 0xbed9c],0x40400000 ; 0054d266
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 0054d270
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30()
    ADD ESP,0x8                         ; 0054d275
    TEST EAX,EAX                        ; 0054d278
    JZ 0x0054d4c8                       ; 0054d27a
        ;   XREF to: 0054d4c8 (CONDITIONAL_JUMP)  ; LAB_0054d4c8
    PUSH EBX                            ; 0054d280
        ;   Label: LAB_0054d280
    CALL core_vampboss.cpp_CVampireBoss_transformToBat_FUN_0054e1a0 ; 0054d281
        ;   XREF to: 0054e1a0 (UNCONDITIONAL_CALL)  ; undefined core_vampboss.cpp_CVampireBoss_transformToBat_FUN_0054e1a0()
    ADD ESP,0x4                         ; 0054d286
        ;   Label: LAB_0054d286
    MOV EAX,[0x005b9354]                ; 0054d289 | DAT_005b9354
        ;   Label: caseD_1
    CMP dword ptr [EAX + 0x228],0x0     ; 0054d28e | DAT_01c77814
    JNZ 0x0054d303                      ; 0054d295
        ;   XREF to: 0054d303 (CONDITIONAL_JUMP)  ; LAB_0054d303
    CMP EDI,0x2                         ; 0054d297
    JZ 0x0054d303                       ; 0054d29a
        ;   XREF to: 0054d303 (CONDITIONAL_JUMP)  ; LAB_0054d303
    LEA EDX,[EBX + 0x2414]              ; 0054d29c
    LEA EAX,[EBX + 0x23a4]              ; 0054d2a2
    FLD float ptr [EDX]                 ; 0054d2a8
    FADD float ptr [EAX]                ; 0054d2aa
    FLD float ptr [EBP + 0x18]          ; 0054d2ac
    FXCH                                ; 0054d2af
    FSTP float ptr [ESP + 0x150]        ; 0054d2b1
    FLD float ptr [EDX + 0x4]           ; 0054d2b8
    FADD float ptr [EAX + 0x4]          ; 0054d2bb
    FXCH                                ; 0054d2be
    FMUL double ptr [0x0059712d]        ; 0054d2c0 | DOUBLE_0059712d
    FXCH                                ; 0054d2c6
    FSTP float ptr [ESP + 0x154]        ; 0054d2c8
    FLD float ptr [EDX + 0x8]           ; 0054d2cf
    FADD float ptr [EAX + 0x8]          ; 0054d2d2
    FLD float ptr [ESP + 0x154]         ; 0054d2d5
    FXCH                                ; 0054d2dc
    FSTP float ptr [ESP + 0x158]        ; 0054d2de
    LEA EAX,[ESP + 0x150]               ; 0054d2e5
    FXCH                                ; 0054d2ec
    FSUBR ST0,ST1                       ; 0054d2ee
    PUSH EAX                            ; 0054d2f0
    FSTP ST1                            ; 0054d2f1
    PUSH EBX                            ; 0054d2f3
    FSTP float ptr [ESP + 0x15c]        ; 0054d2f4
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 0054d2fb
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050()
    ADD ESP,0x8                         ; 0054d300
    LEA EAX,[EBX + 0x2414]              ; 0054d303
        ;   Label: LAB_0054d303
    MOV dword ptr [EAX + 0x8],0x0       ; 0054d309
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054d310
    MOV dword ptr [EAX + 0x4],EDX       ; 0054d313
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054d316
    MOV dword ptr [EAX],EDX             ; 0054d319
    LEA EAX,[EBX + 0x23a4]              ; 0054d31b
    MOV dword ptr [EAX + 0x8],0x0       ; 0054d321
    PUSH EBX                            ; 0054d328
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054d329
    MOV dword ptr [EAX + 0x4],EDX       ; 0054d32c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054d32f
    MOV dword ptr [EAX],EDX             ; 0054d332
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 0054d334
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_preProcess_FUN_004259a0()
    ADD ESP,0x4                         ; 0054d339
    LEA ESI,[EBX + 0x150]               ; 0054d33c
    PUSH ESI                            ; 0054d342
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 0054d343
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0()
    ADD ESP,0x4                         ; 0054d348
    PUSH dword ptr [EBP + 0x18]         ; 0054d34b
    PUSH EBX                            ; 0054d34e
    CALL core_charactr.cpp_FUN_0042a150 ; 0054d34f
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042a150()
    ADD ESP,0x8                         ; 0054d354
    PUSH ESI                            ; 0054d357
    PUSH dword ptr [EBX + 0x240c]       ; 0054d358
    LEA EAX,[EBX + 0x30]                ; 0054d35e
    PUSH dword ptr [EBP + 0x18]         ; 0054d361
    PUSH EAX                            ; 0054d364
    LEA EDI,[EBX + 0x20]                ; 0054d365
    PUSH EDI                            ; 0054d368
    MOV dword ptr [ESP + 0x24c],EAX     ; 0054d369
    LEA EAX,[EBX + 0x48b08]             ; 0054d370
    PUSH EAX                            ; 0054d376
    CALL core_cloth.cpp_CCloth_process_FUN_00436e50 ; 0054d377
        ;   XREF to: 00436e50 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CCloth_process_FUN_00436e50()
    ADD ESP,0x18                        ; 0054d37c
    PUSH ESI                            ; 0054d37f
    PUSH dword ptr [EBX + 0x240c]       ; 0054d380
    MOV EAX,dword ptr [ESP + 0x240]     ; 0054d386
    PUSH dword ptr [EBP + 0x18]         ; 0054d38d
    PUSH EAX                            ; 0054d390
    PUSH EDI                            ; 0054d391
    LEA EAX,[EBX + 0x83638]             ; 0054d392
    PUSH EAX                            ; 0054d398
    CALL core_cloth.cpp_CCloth_process_FUN_00436e50 ; 0054d399
        ;   XREF to: 00436e50 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CCloth_process_FUN_00436e50()
    ADD ESP,0x18                        ; 0054d39e
    JMP 0x0054cc7f                      ; 0054d3a1
        ;   XREF to: 0054cc7f (UNCONDITIONAL_JUMP)  ; LAB_0054cc7f
    PUSH EBX                            ; 0054d3a6
        ;   Label: LAB_0054d3a6
    CALL FUN_0054e130                   ; 0054d3a7
        ;   XREF to: 0054e130 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e130()
    JMP 0x0054d1ae                      ; 0054d3ac
        ;   XREF to: 0054d1ae (UNCONDITIONAL_JUMP)  ; LAB_0054d1ae
    PUSH EBX                            ; 0054d3b1
        ;   Label: LAB_0054d3b1
    CALL core_vampboss.cpp_CVampireBoss_summonBats_FUN_0054e040 ; 0054d3b2
        ;   XREF to: 0054e040 (UNCONDITIONAL_CALL)  ; undefined core_vampboss.cpp_CVampireBoss_summonBats_FUN_0054e040()
    JMP 0x0054d1ae                      ; 0054d3b7
        ;   XREF to: 0054d1ae (UNCONDITIONAL_JUMP)  ; LAB_0054d1ae
    PUSH 0x0                            ; 0054d3bc
        ;   Label: LAB_0054d3bc
    PUSH 0x0                            ; 0054d3be
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0054d3c0
    PUSH EBX                            ; 0054d3c6
    CALL dword ptr [EAX + 0x120]        ; 0054d3c7
    ADD ESP,0xc                         ; 0054d3cd
    LEA EAX,[ESP + 0x18c]               ; 0054d3d0
    PUSH EAX                            ; 0054d3d7
    LEA EAX,[ESP + 0x148]               ; 0054d3d8
    XOR ECX,ECX                         ; 0054d3df
    PUSH EAX                            ; 0054d3e1
    MOV ESI,0x41a00000                  ; 0054d3e2
    MOV dword ptr [ESP + 0x194],ECX     ; 0054d3e7
    PUSH EBX                            ; 0054d3ee
    MOV dword ptr [ESP + 0x19c],ESI     ; 0054d3ef
    MOV dword ptr [ESP + 0x1a0],ESI     ; 0054d3f6
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 0054d3fd
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_transformVector_FUN_0040a200()
    ADD ESP,0xc                         ; 0054d402
    PUSH 0x0                            ; 0054d405
    LEA EAX,[ESP + 0x148]               ; 0054d407
    PUSH 0xbf800000                     ; 0054d40e
    PUSH EAX                            ; 0054d413
    PUSH EBX                            ; 0054d414
    MOV EDI,ESI                         ; 0054d415
    CALL core_charactr.cpp_CCharacter_dismember_FUN_00427b60 ; 0054d417
        ;   XREF to: 00427b60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_dismember_FUN_00427b60()
    ADD ESP,0x10                        ; 0054d41c
    XOR EAX,EAX                         ; 0054d41f
    XOR EDI,ESI                         ; 0054d421
    MOV dword ptr [ESP + 0x224],EAX     ; 0054d423
    MOV EAX,[0x005be368]                ; 0054d42a | DAT_005be368
        ;   Label: LAB_0054d42a
    MOV EDX,dword ptr [ESP + 0x224]     ; 0054d42f
    CMP EDX,dword ptr [EAX + 0x150bf4]  ; 0054d436 | DAT_01fa7e78
    JGE 0x0054d1bb                      ; 0054d43c
        ;   XREF to: 0054d1bb (CONDITIONAL_JUMP)  ; LAB_0054d1bb
    MOV ESI,dword ptr [0x02dd1144]      ; 0054d442 | DAT_02dd1144
    PUSH ESI                            ; 0054d448
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0x150bf8] ; 0054d449
    PUSH EDX                            ; 0054d450
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0054d451
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    MOV ESI,EAX                         ; 0054d456
    ADD ESP,0x8                         ; 0054d458
    TEST EAX,EAX                        ; 0054d45b
    JNZ 0x0054d473                      ; 0054d45d
        ;   XREF to: 0054d473 (CONDITIONAL_JUMP)  ; LAB_0054d473
    MOV EDX,dword ptr [ESP + 0x224]     ; 0054d45f
        ;   Label: LAB_0054d45f
    INC EDX                             ; 0054d466
    ADD EDI,0x4                         ; 0054d467
    MOV dword ptr [ESP + 0x224],EDX     ; 0054d46a
    JMP 0x0054d42a                      ; 0054d471
        ;   XREF to: 0054d42a (UNCONDITIONAL_JUMP)  ; LAB_0054d42a
    CMP dword ptr [EAX + 0xbecc],0x0    ; 0054d473
        ;   Label: LAB_0054d473
    JZ 0x0054d45f                       ; 0054d47a
        ;   XREF to: 0054d45f (CONDITIONAL_JUMP)  ; LAB_0054d45f
    LEA EAX,[ESP + 0x48]                ; 0054d47c
    PUSH EAX                            ; 0054d480
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 0054d481
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    MOV EAX,0x4479c000                  ; 0054d486
    ADD ESP,0x4                         ; 0054d48b
    MOV dword ptr [ESP + 0x4c],EAX      ; 0054d48e
    LEA EAX,[ESP + 0x48]                ; 0054d492
    PUSH EAX                            ; 0054d496
    MOV EDX,dword ptr [ESI + 0x14c]     ; 0054d497
    PUSH ESI                            ; 0054d49d
    CALL dword ptr [EDX + 0x100]        ; 0054d49e
    ADD ESP,0x8                         ; 0054d4a4
    JMP 0x0054d45f                      ; 0054d4a7
        ;   XREF to: 0054d45f (UNCONDITIONAL_JUMP)  ; LAB_0054d45f
    JBE 0x0054d3a6                      ; 0054d4a9
        ;   XREF to: 0054d3a6 (CONDITIONAL_JUMP)  ; LAB_0054d3a6
        ;   Label: LAB_0054d4a9
    CMP EAX,0x3                         ; 0054d4af
    JBE 0x0054d3b1                      ; 0054d4b2
        ;   XREF to: 0054d3b1 (CONDITIONAL_JUMP)  ; LAB_0054d3b1
    CMP EAX,0x29a                       ; 0054d4b8
    JZ 0x0054d3bc                       ; 0054d4bd
        ;   XREF to: 0054d3bc (CONDITIONAL_JUMP)  ; LAB_0054d3bc
    JMP 0x0054d1bb                      ; 0054d4c3
        ;   XREF to: 0054d1bb (UNCONDITIONAL_JUMP)  ; LAB_0054d1bb
    MOV EDX,dword ptr [0x01cae0e8]      ; 0054d4c8 | DAT_01cae0e8
        ;   Label: LAB_0054d4c8
    MOV EDX,dword ptr [EDX*0x4 + 0x1cae0d8] ; 0054d4ce
    LEA EAX,[EBX + 0x20]                ; 0054d4d5
    FLD float ptr [EDX + 0x20]          ; 0054d4d8
    FSUB float ptr [EAX]                ; 0054d4db
    FSTP float ptr [ESP + 0x114]        ; 0054d4dd
    FLD float ptr [EDX + 0x24]          ; 0054d4e4
    FSUB float ptr [EAX + 0x4]          ; 0054d4e7
    FSTP float ptr [ESP + 0x118]        ; 0054d4ea
    FLD float ptr [EDX + 0x28]          ; 0054d4f1
    FSUB float ptr [EAX + 0x8]          ; 0054d4f4
    LEA EAX,[ESP + 0x114]               ; 0054d4f7
    PUSH EAX                            ; 0054d4fe
    LEA EAX,[ESP + 0x124]               ; 0054d4ff
    PUSH EAX                            ; 0054d506
    FSTP float ptr [ESP + 0x124]        ; 0054d507
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 0054d50e
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 0054d513
    MOV EAX,dword ptr [EAX + 0x4]       ; 0054d516
    MOV dword ptr [ESP + 0x130],EAX     ; 0054d519
    FLD float ptr [ESP + 0x130]         ; 0054d520
    FSUB float ptr [EBX + 0x34]         ; 0054d527
    SUB ESP,0x4                         ; 0054d52a
    FSTP float ptr [ESP]                ; 0054d52d
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0054d530
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x23c],EAX     ; 0054d535
    MOV EAX,dword ptr [ESP + 0x23c]     ; 0054d53c
    MOV dword ptr [EBX + 0x2410],EAX    ; 0054d543
    ADD ESP,0x4                         ; 0054d549
    MOV EAX,dword ptr [EBX + 0x2410]    ; 0054d54c
    MOV dword ptr [ESP + 0x21c],EAX     ; 0054d552
    MOV EAX,dword ptr [EBX + 0x2430]    ; 0054d559
    PUSH dword ptr [ESP + 0x21c]        ; 0054d55f
    MOV dword ptr [ESP + 0x204],EAX     ; 0054d566
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0054d56d
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x23c],EAX     ; 0054d572
    FLD float ptr [ESP + 0x23c]         ; 0054d579
    ADD ESP,0x4                         ; 0054d580
    FLD float ptr [ESP + 0x200]         ; 0054d583
    FXCH                                ; 0054d58a
    FST float ptr [ESP + 0x21c]         ; 0054d58c
    FXCH                                ; 0054d593
    FCHS                                ; 0054d595
    FSTP float ptr [ESP + 0x1f4]        ; 0054d597
    FCOMP float ptr [ESP + 0x1f4]       ; 0054d59e
    FNSTSW AX                           ; 0054d5a5
    SAHF                                ; 0054d5a7
    JNC 0x0054d5ca                      ; 0054d5a8
        ;   XREF to: 0054d5ca (CONDITIONAL_JUMP)  ; LAB_0054d5ca
    MOV EAX,dword ptr [ESP + 0x1f4]     ; 0054d5aa
    MOV dword ptr [ESP + 0x1fc],EAX     ; 0054d5b1
        ;   Label: LAB_0054d5b1
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0054d5b8
    MOV dword ptr [EBX + 0x2410],EAX    ; 0054d5bf
    JMP 0x0054d289                      ; 0054d5c5
        ;   XREF to: 0054d289 (UNCONDITIONAL_JUMP)  ; caseD_9
    FLD float ptr [ESP + 0x21c]         ; 0054d5ca
        ;   Label: LAB_0054d5ca
    FCOMP float ptr [ESP + 0x200]       ; 0054d5d1
    FNSTSW AX                           ; 0054d5d8
    SAHF                                ; 0054d5da
    JBE 0x0054d5e6                      ; 0054d5db
        ;   XREF to: 0054d5e6 (CONDITIONAL_JUMP)  ; LAB_0054d5e6
    MOV EAX,dword ptr [ESP + 0x200]     ; 0054d5dd
    JMP 0x0054d5b1                      ; 0054d5e4
        ;   XREF to: 0054d5b1 (UNCONDITIONAL_JUMP)  ; LAB_0054d5b1
    MOV EAX,dword ptr [ESP + 0x21c]     ; 0054d5e6
        ;   Label: LAB_0054d5e6
    JMP 0x0054d5b1                      ; 0054d5ed
        ;   XREF to: 0054d5b1 (UNCONDITIONAL_JUMP)  ; LAB_0054d5b1
    FLD float ptr [EBX + 0x2438]        ; 0054d5ef
        ;   Label: caseD_0
    FMUL float ptr [EBP + 0x18]         ; 0054d5f5
    FDIV float ptr [0x005a3a88]         ; 0054d5f8 | FLOAT_005a3a88
    FADD float ptr [EBX + 0x2434]       ; 0054d5fe
    FST float ptr [EBX + 0x2434]        ; 0054d604
    FCOMP double ptr [0x00597125]       ; 0054d60a | DOUBLE_00597125
    FNSTSW AX                           ; 0054d610
    SAHF                                ; 0054d612
    JA 0x0054d280                       ; 0054d613
        ;   XREF to: 0054d280 (CONDITIONAL_JUMP)  ; LAB_0054d280
    LEA ESI,[EBX + 0x20]                ; 0054d619
    PUSH 0x41400000                     ; 0054d61c
    PUSH ESI                            ; 0054d621
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004b45b0 ; 0054d622
        ;   XREF to: 004b45b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_isAnyHeroWithinRadius_FUN_004b45b0()
    ADD ESP,0x8                         ; 0054d627
    TEST EAX,EAX                        ; 0054d62a
    JNZ 0x0054d7d9                      ; 0054d62c
        ;   XREF to: 0054d7d9 (CONDITIONAL_JUMP)  ; LAB_0054d7d9
    MOV EAX,[0x01cae0e8]                ; 0054d632 | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0054d637
    FLD float ptr [EAX + 0x20]          ; 0054d63e
    FSUB float ptr [ESI]                ; 0054d641
    FSTP float ptr [ESP + 0x180]        ; 0054d643
    FLD float ptr [EAX + 0x24]          ; 0054d64a
    FSUB float ptr [ESI + 0x4]          ; 0054d64d
    FSTP float ptr [ESP + 0x184]        ; 0054d650
    FLD float ptr [EAX + 0x28]          ; 0054d657
    LEA EAX,[ESP + 0x180]               ; 0054d65a
    PUSH EAX                            ; 0054d661
    LEA EAX,[ESP + 0x178]               ; 0054d662
    FSUB float ptr [ESI + 0x8]          ; 0054d669
    PUSH EAX                            ; 0054d66c
    FSTP float ptr [ESP + 0x190]        ; 0054d66d
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 0054d674
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 0054d679
    MOV EAX,dword ptr [EAX + 0x4]       ; 0054d67c
    MOV dword ptr [ESP + 0x13c],EAX     ; 0054d67f
    FLD float ptr [ESP + 0x13c]         ; 0054d686
    FSUB float ptr [EBX + 0x34]         ; 0054d68d
    SUB ESP,0x4                         ; 0054d690
    FSTP float ptr [ESP]                ; 0054d693
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0054d696
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x23c],EAX     ; 0054d69b
    MOV EAX,dword ptr [ESP + 0x23c]     ; 0054d6a2
    MOV dword ptr [EBX + 0x2410],EAX    ; 0054d6a9
    ADD ESP,0x4                         ; 0054d6af
    MOV EAX,dword ptr [EBX + 0x2410]    ; 0054d6b2
    MOV dword ptr [ESP + 0x214],EAX     ; 0054d6b8
    MOV EAX,dword ptr [EBX + 0x2430]    ; 0054d6bf
    PUSH dword ptr [ESP + 0x214]        ; 0054d6c5
    MOV dword ptr [ESP + 0x20c],EAX     ; 0054d6cc
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0054d6d3
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x23c],EAX     ; 0054d6d8
    FLD float ptr [ESP + 0x23c]         ; 0054d6df
    ADD ESP,0x4                         ; 0054d6e6
    FLD float ptr [ESP + 0x208]         ; 0054d6e9
    FXCH                                ; 0054d6f0
    FST float ptr [ESP + 0x214]         ; 0054d6f2
    FXCH                                ; 0054d6f9
    FCHS                                ; 0054d6fb
    FSTP float ptr [ESP + 0x228]        ; 0054d6fd
    FCOMP float ptr [ESP + 0x228]       ; 0054d704
    FNSTSW AX                           ; 0054d70b
    SAHF                                ; 0054d70d
    JNC 0x0054d78b                      ; 0054d70e
        ;   XREF to: 0054d78b (CONDITIONAL_JUMP)  ; LAB_0054d78b
    MOV EAX,dword ptr [ESP + 0x228]     ; 0054d714
    MOV dword ptr [ESP + 0x204],EAX     ; 0054d71b
        ;   Label: LAB_0054d71b
    FLD float ptr [EBX + 0xbed9c]       ; 0054d722
    MOV EAX,dword ptr [ESP + 0x204]     ; 0054d728
    FSUB float ptr [EBP + 0x18]         ; 0054d72f
    MOV dword ptr [EBX + 0x2410],EAX    ; 0054d732
    FST float ptr [EBX + 0xbed9c]       ; 0054d738
    FLDZ                                ; 0054d73e
    FCOMPP                              ; 0054d740
    FNSTSW AX                           ; 0054d742
    SAHF                                ; 0054d744
    JC 0x0054d289                       ; 0054d745
        ;   XREF to: 0054d289 (CONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x2                            ; 0054d74b
    PUSH 0x0                            ; 0054d74d
    MOV dword ptr [EBX + 0xbed9c],0x0   ; 0054d74f
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 0054d759
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomInt_FUN_0040de00()
    ADD ESP,0x8                         ; 0054d75e
    LEA EDX,[EBX + 0x150]               ; 0054d761
    TEST EAX,EAX                        ; 0054d767
    JZ 0x0054d7b6                       ; 0054d769
        ;   XREF to: 0054d7b6 (CONDITIONAL_JUMP)  ; LAB_0054d7b6
    CMP EAX,0x1                         ; 0054d76b
    JZ 0x0054d7c8                       ; 0054d76e
        ;   XREF to: 0054d7c8 (CONDITIONAL_JUMP)  ; LAB_0054d7c8
    CMP EAX,0x2                         ; 0054d770
    JNZ 0x0054d289                      ; 0054d773
        ;   XREF to: 0054d289 (CONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x1                            ; 0054d779
    PUSH 0x6                            ; 0054d77b
    PUSH EDX                            ; 0054d77d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0054d77e
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0054d783
    JMP 0x0054d289                      ; 0054d786
        ;   XREF to: 0054d289 (UNCONDITIONAL_JUMP)  ; caseD_9
    FLD float ptr [ESP + 0x214]         ; 0054d78b
        ;   Label: LAB_0054d78b
    FCOMP float ptr [ESP + 0x208]       ; 0054d792
    FNSTSW AX                           ; 0054d799
    SAHF                                ; 0054d79b
    JBE 0x0054d7aa                      ; 0054d79c
        ;   XREF to: 0054d7aa (CONDITIONAL_JUMP)  ; LAB_0054d7aa
    MOV EAX,dword ptr [ESP + 0x208]     ; 0054d79e
    JMP 0x0054d71b                      ; 0054d7a5
        ;   XREF to: 0054d71b (UNCONDITIONAL_JUMP)  ; LAB_0054d71b
    MOV EAX,dword ptr [ESP + 0x214]     ; 0054d7aa
        ;   Label: LAB_0054d7aa
    JMP 0x0054d71b                      ; 0054d7b1
        ;   XREF to: 0054d71b (UNCONDITIONAL_JUMP)  ; LAB_0054d71b
    PUSH 0x1                            ; 0054d7b6
        ;   Label: LAB_0054d7b6
    PUSH 0x4                            ; 0054d7b8
    PUSH EDX                            ; 0054d7ba
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0054d7bb
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0054d7c0
    JMP 0x0054d289                      ; 0054d7c3
        ;   XREF to: 0054d289 (UNCONDITIONAL_JUMP)  ; caseD_9
    PUSH EAX                            ; 0054d7c8
        ;   Label: LAB_0054d7c8
    PUSH 0x5                            ; 0054d7c9
    PUSH EDX                            ; 0054d7cb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0054d7cc
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0054d7d1
    JMP 0x0054d289                      ; 0054d7d4
        ;   XREF to: 0054d289 (UNCONDITIONAL_JUMP)  ; caseD_9
    PUSH EBX                            ; 0054d7d9
        ;   Label: LAB_0054d7d9
    CALL core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_0054e230 ; 0054d7da
        ;   XREF to: 0054e230 (UNCONDITIONAL_CALL)  ; undefined core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_0054e230()
    JMP 0x0054d286                      ; 0054d7df
        ;   XREF to: 0054d286 (UNCONDITIONAL_JUMP)  ; LAB_0054d286
    MOV dword ptr [EBX + 0xbed9c],0x40400000 ; 0054d7e4
        ;   Label: caseD_1
    JMP 0x0054d289                      ; 0054d7ee
        ;   XREF to: 0054d289 (UNCONDITIONAL_JUMP)  ; caseD_9
    LEA EAX,[EBX + 0xbedc4]             ; 0054d7f3
        ;   Label: LAB_0054d7f3
    FLD float ptr [0x005a3a80]          ; 0054d7f9 | FLOAT_005a3a80
    PUSH EAX                            ; 0054d7ff
    FMUL float ptr [EBP + 0x18]         ; 0054d800
    PUSH 0x497423f0                     ; 0054d803
    MOV EAX,dword ptr [EBX + 0xbedb0]   ; 0054d808
    FSTP float ptr [EBX + 0x242c]       ; 0054d80e
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0xbedb4] ; 0054d814
    PUSH 0x3e4ccccd                     ; 0054d81b
    PUSH EDX                            ; 0054d820
    PUSH EBX                            ; 0054d821
    CALL core_charactr.cpp_CCharacter_followActor_FUN_00428780 ; 0054d822
        ;   XREF to: 00428780 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_followActor_FUN_00428780()
    MOV EAX,dword ptr [EBX + 0xbedc4]   ; 0054d827
    ADD ESP,0x14                        ; 0054d82d
    CMP EAX,0x3                         ; 0054d830
    JA 0x0054d5ef                       ; 0054d833
        ;   XREF to: 0054d5ef (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x54c654]  ; 0054d839 | caseD_3 | caseD_2 | switchdataD_0054c654
        ;   Label: switchD
    PUSH 0x5970d7                       ; 0054d840 | = "flyout"
        ;   Label: caseD_2
    MOV ECX,dword ptr [0x005b7650]      ; 0054d845 | DAT_005b7650
    PUSH ECX                            ; 0054d84b
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 0054d84c
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30()
    ADD ESP,0x8                         ; 0054d851
    TEST EAX,EAX                        ; 0054d854
    JZ 0x0054d289                       ; 0054d856
        ;   XREF to: 0054d289 (CONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x1                            ; 0054d85c
    PUSH 0x0                            ; 0054d85e
    PUSH ESI                            ; 0054d860
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0054d861
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0054d866
    JMP 0x0054d289                      ; 0054d869
        ;   XREF to: 0054d289 (UNCONDITIONAL_JUMP)  ; caseD_9
    FLD float ptr [EBX + 0x2434]        ; 0054d86e
        ;   Label: LAB_0054d86e
    FDIV float ptr [EBX + 0x2438]       ; 0054d874
    PUSH 0x3f000000                     ; 0054d87a
    SUB ESP,0x4                         ; 0054d87f
    ADD EBX,0x2440                      ; 0054d882
    FSTP float ptr [ESP]                ; 0054d888
    PUSH EBX                            ; 0054d88b
    PUSH EAX                            ; 0054d88c | DAT_01c775ec
    CALL core_game.cpp_CGame_setStatusDisplay_FUN_004a3ab0 ; 0054d88d
        ;   XREF to: 004a3ab0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_setStatusDisplay_FUN_004a3ab0()
    ADD ESP,0x10                        ; 0054d892
    MOV ESP,EBP                         ; 0054d895
    POP EBP                             ; 0054d897
    POP EDI                             ; 0054d898
    POP ESI                             ; 0054d899
    POP EBX                             ; 0054d89a
    RET                                 ; 0054d89b

