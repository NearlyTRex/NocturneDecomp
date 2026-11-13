; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vampboss_cpp_CVampireBoss_process_FUN_00581910(CVampireBoss *this_ptr,float delta_time)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_005818d4 = 005829c1
;   undefined1* switchdataD_005818e4 = 005825be
;   TerminatedCString s_core_vampboss_cpp_005ed9da
;   TerminatedCString s_CVampireBoss_process_Nee_005ed9ef
;   TerminatedCString s_morphCompleted_005eda18
;   TerminatedCString s_backToHuman_005eda27
;   TerminatedCString s_morphToBat_005eda33
;   TerminatedCString s_flyout_005eda3e
;   undefined4 DAT_005eda4c
;   undefined4 DAT_005eda54
;   undefined4 DAT_005eda5c
;   undefined4 DAT_005eda64
;   undefined4 DAT_005eda6c
;   undefined4 DAT_005eda74
;   undefined4 DAT_005eda7c
;   ... and 17 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_actor.cpp_randomChance_FUN_0040d060
;   core_box.cpp_CBoundingBox3D_expand_FUN_0041a590
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90
;   core_charactr.cpp_CCharacter_dismember_FUN_00427360
;   core_charactr.cpp_CCharacter_preProcess_FUN_00424470
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0
;   core_charactr.cpp_FUN_00423a60
;   core_charactr.cpp_FUN_00428260
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   core_cloth.cpp_CCloth_process_FUN_005afdf0
;   ... and 20 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00581910
        ;   Label: core_vampboss.cpp_CVampireBoss_process_FUN_00581910
    PUSH ESI                            ; 00581911
    PUSH EDI                            ; 00581912
    PUSH EBP                            ; 00581913
    MOV EBP,ESP                         ; 00581914
    SUB ESP,0x318                       ; 00581916
    AND ESP,0xfffffff8                  ; 0058191c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058191f
    MOV ESI,EBX                         ; 00581922
    LEA EDI,[EBX + 0x10]                ; 00581924
    CMP dword ptr [ESI + 0xc3b88],0x0   ; 00581927
        ;   Label: LAB_00581927
    JZ 0x00581f8f                       ; 0058192e
        ;   XREF to: 00581f8f (CONDITIONAL_JUMP)  ; LAB_00581f8f
    ADD ESI,0x4                         ; 00581934
        ;   Label: LAB_00581934
    CMP ESI,EDI                         ; 00581937
    JNZ 0x00581927                      ; 00581939
        ;   XREF to: 00581927 (CONDITIONAL_JUMP)  ; LAB_00581927
    PUSH dword ptr [EBP + 0x18]         ; 0058193b
    PUSH EBX                            ; 0058193e
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 0058193f
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00581944
    TEST EAX,EAX                        ; 00581947
    JZ 0x00581f88                       ; 00581949
        ;   XREF to: 00581f88 (CONDITIONAL_JUMP)  ; LAB_00581f88
    MOV EDX,dword ptr [EBX + 0xc2f3c]   ; 0058194f
    CMP EDX,0x2                         ; 00581955
    JNZ 0x0058209a                      ; 00581958
        ;   XREF to: 0058209a (CONDITIONAL_JUMP)  ; LAB_0058209a
    PUSH dword ptr [EBP + 0x18]         ; 0058195e
    PUSH EBX                            ; 00581961
    CALL core_vampboss.cpp_CVampireBoss_advanceAnimation_FUN_00582dc0 ; 00581962
        ;   XREF to: 00582dc0 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_advanceAnimation_FUN_00582dc0(CVampireBoss * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00581967
    LEA ESI,[EBX + 0x10af8]             ; 0058196a
    PUSH ESI                            ; 00581970
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0 ; 00581971
        ;   XREF to: 00544ee0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00581976
    PUSH ESI                            ; 00581979
    PUSH dword ptr [EBX + 0x2574]       ; 0058197a
    LEA EAX,[EBX + 0x30]                ; 00581980
    PUSH dword ptr [EBP + 0x18]         ; 00581983
    PUSH EAX                            ; 00581986
    LEA EAX,[EBX + 0x20]                ; 00581987
    PUSH EAX                            ; 0058198a
    LEA EAX,[EBX + 0x12dac]             ; 0058198b
    PUSH EAX                            ; 00581991
    CALL core_cloth.cpp_CCloth_process_FUN_005afdf0 ; 00581992
        ;   XREF to: 005afdf0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_005afdf0(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    FLD float ptr [EBX + 0x25a8]        ; 00581997
    ADD ESP,0x18                        ; 0058199d
    FCOMP double ptr [0x005eda4c]       ; 005819a0 | DAT_005eda4c
    FNSTSW AX                           ; 005819a6
    SAHF                                ; 005819a8
    JNC 0x005819e2                      ; 005819a9
        ;   XREF to: 005819e2 (CONDITIONAL_JUMP)  ; LAB_005819e2
    MOV EDX,dword ptr [EBX + 0xc3b80]   ; 005819ab
    MOV dword ptr [EBX + 0x25a8],0x41c7fdf4 ; 005819b1
    CMP EDX,0x2                         ; 005819bb
    JZ 0x005819e2                       ; 005819be
        ;   XREF to: 005819e2 (CONDITIONAL_JUMP)  ; LAB_005819e2
    CMP EDX,0x3                         ; 005819c0
    JZ 0x005819e2                       ; 005819c3
        ;   XREF to: 005819e2 (CONDITIONAL_JUMP)  ; LAB_005819e2
    PUSH EBX                            ; 005819c5
    CALL core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005836a0 ; 005819c6
        ;   XREF to: 005836a0 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005836a0(CVampireBoss * this_ptr)
    MOV dword ptr [EBX + 0xc3b80],0x2   ; 005819cb
    ADD ESP,0x4                         ; 005819d5
    MOV dword ptr [EBX + 0xc3b74],0x40a00000 ; 005819d8
    MOV ESI,dword ptr [EBX + 0xc3b80]   ; 005819e2
        ;   Label: LAB_005819e2
    CMP ESI,0x2                         ; 005819e8
    JZ 0x00581bb5                       ; 005819eb
        ;   XREF to: 00581bb5 (CONDITIONAL_JUMP)  ; LAB_00581bb5
    CMP ESI,0x3                         ; 005819f1
    JZ 0x00581bb5                       ; 005819f4
        ;   XREF to: 00581bb5 (CONDITIONAL_JUMP)  ; LAB_00581bb5
    MOV EAX,[0x01cedef4]                ; 005819fa | DAT_01cedef4
    MOV EDX,dword ptr [EAX*0x4 + 0x1cedee4] ; 005819ff
    LEA EAX,[EBX + 0x20]                ; 00581a06
    LEA EDI,[ESP + 0x240]               ; 00581a09
    LEA ESI,[ESP + 0x204]               ; 00581a10
    FLD float ptr [EAX]                 ; 00581a17
    FLD float ptr [EAX + 0x4]           ; 00581a19
    FLD float ptr [EAX + 0x8]           ; 00581a1c
    FXCH ST2                            ; 00581a1f
    FSUB float ptr [EDX + 0x20]         ; 00581a21
    FXCH                                ; 00581a24
    FSUB float ptr [EDX + 0x24]         ; 00581a26
    FXCH ST2                            ; 00581a29
    FSUB float ptr [EDX + 0x28]         ; 00581a2b
    FXCH                                ; 00581a2e
    FSTP float ptr [ESP + 0x204]        ; 00581a30
    FXCH                                ; 00581a37
    FSTP float ptr [ESP + 0x208]        ; 00581a39
    FSTP float ptr [ESP + 0x20c]        ; 00581a40
    MOVSD ES:EDI,ESI                    ; 00581a47
    MOVSD ES:EDI,ESI                    ; 00581a48
    MOVSD ES:EDI,ESI                    ; 00581a49
    FLD float ptr [ESP + 0x248]         ; 00581a4a
    FMUL ST0                            ; 00581a51
    FLD float ptr [ESP + 0x240]         ; 00581a53
    FMUL ST0                            ; 00581a5a
    FADDP                               ; 00581a5c
    FSQRT                               ; 00581a5e
    FST float ptr [ESP + 0x4]           ; 00581a60
    FCOMP double ptr [0x005eda54]       ; 00581a64 | DAT_005eda54
    FNSTSW AX                           ; 00581a6a
    SAHF                                ; 00581a6c
    JNC 0x00581af3                      ; 00581a6d
        ;   XREF to: 00581af3 (CONDITIONAL_JUMP)  ; LAB_00581af3
    FLD float ptr [ESP + 0x244]         ; 00581a73
    MOV dword ptr [EBX + 0xc3b80],0x1   ; 00581a7a
    FCOMP double ptr [0x005eda5c]       ; 00581a84 | DAT_005eda5c
    FNSTSW AX                           ; 00581a8a
    SAHF                                ; 00581a8c
    JNC 0x00581fb6                      ; 00581a8d
        ;   XREF to: 00581fb6 (CONDITIONAL_JUMP)  ; LAB_00581fb6
    MOV EAX,0x1                         ; 00581a93
    MOV dword ptr [ESP + 0x314],EAX     ; 00581a98
        ;   Label: LAB_00581a98
    FILD dword ptr [ESP + 0x314]        ; 00581a9f
    FABS                                ; 00581aa6
    FLDZ                                ; 00581aa8
    FCOMPP                              ; 00581aaa
    FNSTSW AX                           ; 00581aac
    SAHF                                ; 00581aae
    JZ 0x00581af3                       ; 00581aaf
        ;   XREF to: 00581af3 (CONDITIONAL_JUMP)  ; LAB_00581af3
    LEA EAX,[ESP + 0x48]                ; 00581ab1
    PUSH EAX                            ; 00581ab5
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 00581ab6
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    MOV EAX,0x41200000                  ; 00581abb
    ADD ESP,0x4                         ; 00581ac0
    LEA ESI,[ESP + 0x48]                ; 00581ac3
    MOV dword ptr [ESP + 0x4c],EAX      ; 00581ac7
    MOV EAX,[0x01cedef4]                ; 00581acb | DAT_01cedef4
    MOV dword ptr [ESP + 0x7c],EBX      ; 00581ad0
    PUSH ESI                            ; 00581ad4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 00581ad5
    MOV dword ptr [ESP + 0x84],EBX      ; 00581adc
    PUSH EAX                            ; 00581ae3
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00581ae4
    CALL dword ptr [EDX + 0x110]        ; 00581aea
    ADD ESP,0x8                         ; 00581af0
    FLD float ptr [ESP + 0x4]           ; 00581af3
        ;   Label: LAB_00581af3
    FCOMP double ptr [0x005eda64]       ; 00581af7 | DAT_005eda64
    FNSTSW AX                           ; 00581afd
    SAHF                                ; 00581aff
    JBE 0x00581b20                      ; 00581b00
        ;   XREF to: 00581b20 (CONDITIONAL_JUMP)  ; LAB_00581b20
    MOV dword ptr [EBX + 0xc3b70],0x40a00000 ; 00581b02
    MOV dword ptr [EBX + 0xc3b78],0x0   ; 00581b0c
    MOV dword ptr [EBX + 0xc3b80],0x0   ; 00581b16
    MOV EDX,dword ptr [EBX + 0xc3b80]   ; 00581b20
        ;   Label: LAB_00581b20
    TEST EDX,EDX                        ; 00581b26
    JNZ 0x00581b52                      ; 00581b28
        ;   XREF to: 00581b52 (CONDITIONAL_JUMP)  ; LAB_00581b52
    FLD float ptr [EBX + 0xc3b70]       ; 00581b2a
    FSUB float ptr [EBP + 0x18]         ; 00581b30
    FST float ptr [EBX + 0xc3b70]       ; 00581b33
    FLDZ                                ; 00581b39
    FCOMPP                              ; 00581b3b
    FNSTSW AX                           ; 00581b3d
    SAHF                                ; 00581b3f
    JBE 0x00581b52                      ; 00581b40
        ;   XREF to: 00581b52 (CONDITIONAL_JUMP)  ; LAB_00581b52
    MOV dword ptr [EBX + 0xc3b80],0x1   ; 00581b42
    MOV dword ptr [EBX + 0xc3b70],EDX   ; 00581b4c
    LEA ESI,[EBX + 0x10af8]             ; 00581b52
        ;   Label: LAB_00581b52
    PUSH ESI                            ; 00581b58
    CALL core_motion.cpp_FUN_005035c0   ; 00581b59
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00581b5e
    ADD ESP,0x4                         ; 00581b61
    TEST EAX,EAX                        ; 00581b64
    JNZ 0x00581bb5                      ; 00581b66
        ;   XREF to: 00581bb5 (CONDITIONAL_JUMP)  ; LAB_00581bb5
    CMP dword ptr [EBX + 0xc3b80],0x0   ; 00581b68
    JNZ 0x00581bb5                      ; 00581b6f
        ;   XREF to: 00581bb5 (CONDITIONAL_JUMP)  ; LAB_00581bb5
    FLD float ptr [ESP + 0x4]           ; 00581b71
    FCOMP double ptr [0x005eda6c]       ; 00581b75 | DAT_005eda6c
    FNSTSW AX                           ; 00581b7b
    SAHF                                ; 00581b7d
    JNC 0x00581bb5                      ; 00581b7e
        ;   XREF to: 00581bb5 (CONDITIONAL_JUMP)  ; LAB_00581bb5
    CMP dword ptr [EBX + 0xc3b78],0x0   ; 00581b80
    JNZ 0x00581bb5                      ; 00581b87
        ;   XREF to: 00581bb5 (CONDITIONAL_JUMP)  ; LAB_00581bb5
    PUSH 0x3f000000                     ; 00581b89
    MOV dword ptr [EBX + 0xc3b78],0x1   ; 00581b8e
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 00581b98
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 00581b9d
    TEST EAX,EAX                        ; 00581ba0
    JZ 0x00581fbd                       ; 00581ba2
        ;   XREF to: 00581fbd (CONDITIONAL_JUMP)  ; LAB_00581fbd
    PUSH 0x1                            ; 00581ba8
    PUSH 0x1                            ; 00581baa
    PUSH ESI                            ; 00581bac
        ;   Label: LAB_00581bac
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00581bad
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00581bb2
    MOV EDX,dword ptr [0x01cedef4]      ; 00581bb5 | DAT_01cedef4
        ;   Label: LAB_00581bb5
    MOV EDX,dword ptr [EDX*0x4 + 0x1cedee4] ; 00581bbb
    LEA EAX,[ESP + 0x1e0]               ; 00581bc2
    ADD EDX,0x20                        ; 00581bc9
    CMP EAX,EDX                         ; 00581bcc
    JZ 0x00581bed                       ; 00581bce
        ;   XREF to: 00581bed (CONDITIONAL_JUMP)  ; LAB_00581bed
    MOV EAX,dword ptr [EDX]             ; 00581bd0
    MOV dword ptr [ESP + 0x1e0],EAX     ; 00581bd2
    MOV EAX,dword ptr [EDX + 0x4]       ; 00581bd9
    MOV dword ptr [ESP + 0x1e4],EAX     ; 00581bdc
    MOV EAX,dword ptr [EDX + 0x8]       ; 00581be3
    MOV dword ptr [ESP + 0x1e8],EAX     ; 00581be6
    MOV EAX,dword ptr [EBX + 0xc3b80]   ; 00581bed
        ;   Label: LAB_00581bed
    CMP EAX,0x2                         ; 00581bf3
    JNZ 0x00581ff8                      ; 00581bf6
        ;   XREF to: 00581ff8 (CONDITIONAL_JUMP)  ; LAB_00581ff8
    FLD float ptr [EBX + 0xc3b74]       ; 00581bfc
    MOV EAX,0x4                         ; 00581c02
    MOV ECX,dword ptr [EBX + 0xc3b84]   ; 00581c07
    FSUB float ptr [EBP + 0x18]         ; 00581c0d
    SUB EAX,ECX                         ; 00581c10
    FSTP float ptr [EBX + 0xc3b74]      ; 00581c12
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0xc3b84] ; 00581c18
    LEA EAX,[ESP + 0x1e0]               ; 00581c1f
    ADD EDX,0x20                        ; 00581c26
    CMP EAX,EDX                         ; 00581c29
    JZ 0x00581c4a                       ; 00581c2b
        ;   XREF to: 00581c4a (CONDITIONAL_JUMP)  ; LAB_00581c4a
    MOV EAX,dword ptr [EDX]             ; 00581c2d
    MOV dword ptr [ESP + 0x1e0],EAX     ; 00581c2f
    MOV EAX,dword ptr [EDX + 0x4]       ; 00581c36
    MOV dword ptr [ESP + 0x1e4],EAX     ; 00581c39
    MOV EAX,dword ptr [EDX + 0x8]       ; 00581c40
    MOV dword ptr [ESP + 0x1e8],EAX     ; 00581c43
    FLD float ptr [EBX + 0xc3b74]       ; 00581c4a
        ;   Label: LAB_00581c4a
    FLDZ                                ; 00581c50
    FCOMPP                              ; 00581c52
    FNSTSW AX                           ; 00581c54
    SAHF                                ; 00581c56
    JC 0x00581fc6                       ; 00581c57
        ;   XREF to: 00581fc6 (CONDITIONAL_JUMP)  ; LAB_00581fc6
    MOV dword ptr [EBX + 0xc3b74],0x40a00000 ; 00581c5d
        ;   Label: LAB_00581c5d
    MOV dword ptr [EBX + 0xc3b80],0x3   ; 00581c67
    FLD float ptr [ESP + 0x1e4]         ; 00581c71
        ;   Label: LAB_00581c71
    FLD float ptr [ESP + 0x1e0]         ; 00581c78
    FLD float ptr [ESP + 0x1e8]         ; 00581c7f
    MOV ESI,0x3f99999a                  ; 00581c86
    MOV EDI,0x41a00000                  ; 00581c8b
    LEA EAX,[EBX + 0x20]                ; 00581c90
    MOV dword ptr [ESP + 0x2d0],ESI     ; 00581c93
    FXCH ST2                            ; 00581c9a
    FADD float ptr [0x005eda84]         ; 00581c9c | DAT_005eda84
    MOV dword ptr [ESP + 0x2e0],EDI     ; 00581ca2
    FST float ptr [ESP + 0x1e4]         ; 00581ca9
    LEA EDI,[ESP + 0x1a4]               ; 00581cb0
    LEA ESI,[ESP + 0x1f8]               ; 00581cb7
    FXCH                                ; 00581cbe
    FSUB float ptr [EAX]                ; 00581cc0
    FXCH ST2                            ; 00581cc2
    FSUB float ptr [EAX + 0x8]          ; 00581cc4
    FXCH ST2                            ; 00581cc7
    FSTP float ptr [ESP + 0x1f8]        ; 00581cc9
    FSUB float ptr [EAX + 0x4]          ; 00581cd0
    FXCH                                ; 00581cd3
    FSTP float ptr [ESP + 0x200]        ; 00581cd5
    FSTP float ptr [ESP + 0x1fc]        ; 00581cdc
    MOVSD ES:EDI,ESI                    ; 00581ce3
    MOVSD ES:EDI,ESI                    ; 00581ce4
    MOVSD ES:EDI,ESI                    ; 00581ce5
    FLD float ptr [ESP + 0x1ac]         ; 00581ce6
    FLD float ptr [ESP + 0x1a4]         ; 00581ced
    CALL crt_math.c_atan2_FUN_005b9989  ; 00581cf4
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005b9989()
    FLD float ptr [ESP + 0x1ac]         ; 00581cf9
    FMUL ST0                            ; 00581d00
    FLD float ptr [ESP + 0x1a4]         ; 00581d02
    FMUL ST0                            ; 00581d09
    FADDP                               ; 00581d0b
    FSQRT                               ; 00581d0d
    FLD float ptr [ESP + 0x1a8]         ; 00581d0f
    CALL crt_math.c_atan2_FUN_005b9989  ; 00581d16
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005b9989()
    FXCH                                ; 00581d1b
    FSTP float ptr [ESP + 0x2f8]        ; 00581d1d
    FCHS                                ; 00581d24
    MOV EAX,dword ptr [EBX + 0xc3b80]   ; 00581d26
    FSTP float ptr [ESP + 0x300]        ; 00581d2c
    CMP EAX,0x1                         ; 00581d33
    JNZ 0x00581d5a                      ; 00581d36
        ;   XREF to: 00581d5a (CONDITIONAL_JUMP)  ; LAB_00581d5a
    MOV DL,byte ptr [ESP + 0x2fb]       ; 00581d38
    MOV AH,byte ptr [ESP + 0x303]       ; 00581d3f
    XOR DL,0x80                         ; 00581d46
    XOR AH,0x80                         ; 00581d49
    MOV byte ptr [ESP + 0x2fb],DL       ; 00581d4c
    MOV byte ptr [ESP + 0x303],AH       ; 00581d53
    FLD float ptr [ESP + 0x2f8]         ; 00581d5a
        ;   Label: LAB_00581d5a
    FSUB float ptr [EBX + 0x34]         ; 00581d61
    SUB ESP,0x4                         ; 00581d64
    FSTP float ptr [ESP]                ; 00581d67
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 00581d6a
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x318],EAX     ; 00581d6f
    FLD float ptr [ESP + 0x318]         ; 00581d76
    ADD ESP,0x4                         ; 00581d7d
    FST float ptr [ESP + 0x8]           ; 00581d80
    FMUL float ptr [EBP + 0x18]         ; 00581d84
    FMUL float ptr [ESP + 0x2d0]        ; 00581d87
    FST float ptr [ESP]                 ; 00581d8e
    FABS                                ; 00581d91
    FLD float ptr [ESP + 0x8]           ; 00581d93
    FABS                                ; 00581d97
    FCOMPP                              ; 00581d99
    FNSTSW AX                           ; 00581d9b
    SAHF                                ; 00581d9d
    JNC 0x0058208c                      ; 00581d9e
        ;   XREF to: 0058208c (CONDITIONAL_JUMP)  ; LAB_0058208c
    MOV EAX,dword ptr [ESP + 0x2f8]     ; 00581da4
    MOV dword ptr [EBX + 0x34],EAX      ; 00581dab
    FLD float ptr [ESP + 0x300]         ; 00581dae
        ;   Label: LAB_00581dae
    FSUB float ptr [EBX + 0x30]         ; 00581db5
    SUB ESP,0x4                         ; 00581db8
    FSTP float ptr [ESP]                ; 00581dbb
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 00581dbe
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x318],EAX     ; 00581dc3
    FLD float ptr [ESP + 0x318]         ; 00581dca
    ADD ESP,0x4                         ; 00581dd1
    FST float ptr [ESP + 0x300]         ; 00581dd4
    FMUL float ptr [EBP + 0x18]         ; 00581ddb
    FMUL float ptr [ESP + 0x2d0]        ; 00581dde
    FLD float ptr [EBX + 0x25a8]        ; 00581de5
    MOV EDX,0xbec90fdb                  ; 00581deb
    MOV ECX,0x3ec90fdb                  ; 00581df0
    MOV dword ptr [ESP + 0x2ec],EDX     ; 00581df5
    FXCH                                ; 00581dfc
    FADD float ptr [EBX + 0x30]         ; 00581dfe
    MOV dword ptr [ESP + 0x2f4],ECX     ; 00581e01
    FSTP float ptr [EBX + 0x30]         ; 00581e08
    FCOMP double ptr [0x005eda4c]       ; 00581e0b | DAT_005eda4c
    FNSTSW AX                           ; 00581e11
    SAHF                                ; 00581e13
    JNC 0x00581e37                      ; 00581e14
        ;   XREF to: 00581e37 (CONDITIONAL_JUMP)  ; LAB_00581e37
    CMP dword ptr [EBX + 0xc3b80],0x0   ; 00581e16
    JNZ 0x00581e37                      ; 00581e1d
        ;   XREF to: 00581e37 (CONDITIONAL_JUMP)  ; LAB_00581e37
    MOV EAX,0x3fc90fdb                  ; 00581e1f
    MOV EDI,0xbfc90fdb                  ; 00581e24
    MOV dword ptr [ESP + 0x2f4],EAX     ; 00581e29
    MOV dword ptr [ESP + 0x2ec],EDI     ; 00581e30
    FLD float ptr [EBX + 0x30]          ; 00581e37
        ;   Label: LAB_00581e37
    FCOMP float ptr [ESP + 0x2ec]       ; 00581e3a
    FNSTSW AX                           ; 00581e41
    SAHF                                ; 00581e43
    JNC 0x00581e50                      ; 00581e44
        ;   XREF to: 00581e50 (CONDITIONAL_JUMP)  ; LAB_00581e50
    MOV EAX,dword ptr [ESP + 0x2ec]     ; 00581e46
    MOV dword ptr [EBX + 0x30],EAX      ; 00581e4d
    FLD float ptr [EBX + 0x30]          ; 00581e50
        ;   Label: LAB_00581e50
    FCOMP float ptr [ESP + 0x2f4]       ; 00581e53
    FNSTSW AX                           ; 00581e5a
    SAHF                                ; 00581e5c
    JBE 0x00581e69                      ; 00581e5d
        ;   XREF to: 00581e69 (CONDITIONAL_JUMP)  ; LAB_00581e69
    MOV EAX,dword ptr [ESP + 0x2f4]     ; 00581e5f
    MOV dword ptr [EBX + 0x30],EAX      ; 00581e66
    FLD float ptr [EBX + 0x30]          ; 00581e69
        ;   Label: LAB_00581e69
    FLD ST0                             ; 00581e6c
    FSIN                                ; 00581e6e
    FLD float ptr [EBX + 0x34]          ; 00581e70
    FLD ST0                             ; 00581e73
    FSIN                                ; 00581e75
    FXCH ST3                            ; 00581e77
    FCOS                                ; 00581e79
    FXCH                                ; 00581e7b
    FCOS                                ; 00581e7d
    FXCH ST3                            ; 00581e7f
    FMUL ST1                            ; 00581e81
    FXCH ST3                            ; 00581e83
    FMULP                               ; 00581e85
    FXCH                                ; 00581e87
    FCHS                                ; 00581e89
    FLD float ptr [ESP + 0x2e0]         ; 00581e8b
    FXCH                                ; 00581e92
    FMUL ST1                            ; 00581e94
    FXCH ST3                            ; 00581e96
    FMUL ST1                            ; 00581e98
    FXCH ST3                            ; 00581e9a
    FLD float ptr [EBP + 0x18]          ; 00581e9c
    FXCH                                ; 00581e9f
    FMUL ST1                            ; 00581ea1
    FXCH ST3                            ; 00581ea3
    FMULP ST2                           ; 00581ea5
    FXCH ST3                            ; 00581ea7
    FMUL ST3                            ; 00581ea9
    FXCH ST2                            ; 00581eab
    FADD float ptr [EBX + 0x24]         ; 00581ead
    FXCH                                ; 00581eb0
    FMULP ST3                           ; 00581eb2
    FST float ptr [EBX + 0x24]          ; 00581eb4
    FXCH                                ; 00581eb7
    FADD float ptr [EBX + 0x20]         ; 00581eb9
    FXCH ST2                            ; 00581ebc
    FADD float ptr [EBX + 0x28]         ; 00581ebe
    FXCH ST2                            ; 00581ec1
    FSTP float ptr [EBX + 0x20]         ; 00581ec3
    FXCH                                ; 00581ec6
    FSTP float ptr [EBX + 0x28]         ; 00581ec8
    FCOMP float ptr [ESP + 0x1e4]       ; 00581ecb
    FNSTSW AX                           ; 00581ed2
    SAHF                                ; 00581ed4
    JNC 0x00581ee1                      ; 00581ed5
        ;   XREF to: 00581ee1 (CONDITIONAL_JUMP)  ; LAB_00581ee1
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 00581ed7
    MOV dword ptr [EBX + 0x24],EAX      ; 00581ede
    PUSH EBX                            ; 00581ee1
        ;   Label: LAB_00581ee1
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 00581ee2
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00581ee7
    LEA EAX,[EBX + 0x10af8]             ; 00581eea
    PUSH EAX                            ; 00581ef0
    LEA ESI,[ESP + 0x148]               ; 00581ef1
    LEA EDI,[ESP + 0xe8]                ; 00581ef8
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_005487d0 ; 00581eff
        ;   XREF to: 005487d0 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_005487d0(CDeformableModelInstance * this_ptr, CBoundingBox3D * output_bbox)
    MOV ECX,0x6                         ; 00581f04
    LEA ESI,[ESP + 0x148]               ; 00581f09
    ADD ESP,0x4                         ; 00581f10
    MOVSD.REP ES:EDI,ESI                ; 00581f13
    LEA EDX,[EBX + 0x27f4]              ; 00581f15
    LEA EDI,[ESP + 0xe4]                ; 00581f1b
    MOV ESI,EDX                         ; 00581f22
    CMP EDX,EDI                         ; 00581f24
    JZ 0x00581f45                       ; 00581f26
        ;   XREF to: 00581f45 (CONDITIONAL_JUMP)  ; LAB_00581f45
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00581f28
    MOV dword ptr [EDX],EAX             ; 00581f2f
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00581f31
    MOV dword ptr [EDX + 0x4],EAX       ; 00581f38
    MOV EAX,dword ptr [ESP + 0xec]      ; 00581f3b
    MOV dword ptr [EDX + 0x8],EAX       ; 00581f42
    LEA EDX,[EDI + 0xc]                 ; 00581f45
        ;   Label: LAB_00581f45
    LEA EAX,[ESI + 0xc]                 ; 00581f48
    CMP EAX,EDX                         ; 00581f4b
    JZ 0x00581f5f                       ; 00581f4d
        ;   XREF to: 00581f5f (CONDITIONAL_JUMP)  ; LAB_00581f5f
    MOV ECX,dword ptr [EDX]             ; 00581f4f
    MOV dword ptr [EAX],ECX             ; 00581f51
    MOV ECX,dword ptr [EDX + 0x4]       ; 00581f53
    MOV dword ptr [EAX + 0x4],ECX       ; 00581f56
    MOV ECX,dword ptr [EDX + 0x8]       ; 00581f59
    MOV dword ptr [EAX + 0x8],ECX       ; 00581f5c
    LEA EAX,[EBX + 0x2b4]               ; 00581f5f
        ;   Label: LAB_00581f5f
    PUSH EAX                            ; 00581f65
    CALL core_motion.cpp_FUN_005035c0   ; 00581f66
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00581f6b
    ADD ESP,0x4                         ; 00581f6e
    CMP EAX,0x2                         ; 00581f71
    JZ 0x00581f88                       ; 00581f74
        ;   XREF to: 00581f88 (CONDITIONAL_JUMP)  ; LAB_00581f88
    MOV EAX,[0x00616494]                ; 00581f76 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x244],0x0     ; 00581f7b | g_CGameInstance.letterbox_mode
    JZ 0x00582c5d                       ; 00581f82
        ;   XREF to: 00582c5d (CONDITIONAL_JUMP)  ; LAB_00582c5d
    MOV ESP,EBP                         ; 00581f88
        ;   Label: LAB_00581f88
    POP EBP                             ; 00581f8a
    POP EDI                             ; 00581f8b
    POP ESI                             ; 00581f8c
    POP EBX                             ; 00581f8d
    RET                                 ; 00581f8e
    MOV ECX,0x5ed9da                    ; 00581f8f | = "..\\core\\vampboss.cpp"
        ;   Label: LAB_00581f8f
    MOV EAX,0xcf                        ; 00581f94
    PUSH 0x5ed9ef                       ; 00581f99 | = "CVampireBoss::process - Need 4 waypoints"
    MOV dword ptr [0x01d046a0],ECX      ; 00581f9e | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00581fa4 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00581fa9
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00581fae
    JMP 0x00581934                      ; 00581fb1
        ;   XREF to: 00581934 (UNCONDITIONAL_JUMP)  ; LAB_00581934
    XOR EAX,EAX                         ; 00581fb6
        ;   Label: LAB_00581fb6
    JMP 0x00581a98                      ; 00581fb8
        ;   XREF to: 00581a98 (UNCONDITIONAL_JUMP)  ; LAB_00581a98
    PUSH 0x1                            ; 00581fbd
        ;   Label: LAB_00581fbd
    PUSH 0x2                            ; 00581fbf
    JMP 0x00581bac                      ; 00581fc1
        ;   XREF to: 00581bac (UNCONDITIONAL_JUMP)  ; LAB_00581bac
    LEA EAX,[EBX + 0x20]                ; 00581fc6
        ;   Label: LAB_00581fc6
    FLD float ptr [ESP + 0x1e0]         ; 00581fc9
    FSUB float ptr [EAX]                ; 00581fd0
    FMUL ST0                            ; 00581fd2
    FLD float ptr [ESP + 0x1e8]         ; 00581fd4
    FSUB float ptr [EAX + 0x8]          ; 00581fdb
    FMUL ST0                            ; 00581fde
    FADDP                               ; 00581fe0
    FSQRT                               ; 00581fe2
    FCOMP double ptr [0x005eda7c]       ; 00581fe4 | DAT_005eda7c
    FNSTSW AX                           ; 00581fea
    SAHF                                ; 00581fec
    JC 0x00581c5d                       ; 00581fed
        ;   XREF to: 00581c5d (CONDITIONAL_JUMP)  ; LAB_00581c5d
    JMP 0x00581c71                      ; 00581ff3
        ;   XREF to: 00581c71 (UNCONDITIONAL_JUMP)  ; LAB_00581c71
    CMP EAX,0x3                         ; 00581ff8
        ;   Label: LAB_00581ff8
    JNZ 0x00581c71                      ; 00581ffb
        ;   XREF to: 00581c71 (CONDITIONAL_JUMP)  ; LAB_00581c71
    MOV EAX,dword ptr [EBX + 0xc3b84]   ; 00582001
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0xc3b88] ; 00582007
    LEA EAX,[ESP + 0x1e0]               ; 0058200e
    ADD EDX,0x20                        ; 00582015
    CMP EAX,EDX                         ; 00582018
    JZ 0x00582039                       ; 0058201a
        ;   XREF to: 00582039 (CONDITIONAL_JUMP)  ; LAB_00582039
    MOV EAX,dword ptr [EDX]             ; 0058201c
    MOV dword ptr [ESP + 0x1e0],EAX     ; 0058201e
    MOV EAX,dword ptr [EDX + 0x4]       ; 00582025
    MOV dword ptr [ESP + 0x1e4],EAX     ; 00582028
    MOV EAX,dword ptr [EDX + 0x8]       ; 0058202f
    MOV dword ptr [ESP + 0x1e8],EAX     ; 00582032
    FLD float ptr [EBX + 0xc3b74]       ; 00582039
        ;   Label: LAB_00582039
    FSUB float ptr [EBP + 0x18]         ; 0058203f
    FST float ptr [EBX + 0xc3b74]       ; 00582042
    FLDZ                                ; 00582048
    FCOMPP                              ; 0058204a
    FNSTSW AX                           ; 0058204c
    SAHF                                ; 0058204e
    JNC 0x0058207e                      ; 0058204f
        ;   XREF to: 0058207e (CONDITIONAL_JUMP)  ; LAB_0058207e
    LEA EAX,[EBX + 0x20]                ; 00582051
    FLD float ptr [ESP + 0x1e0]         ; 00582054
    FSUB float ptr [EAX]                ; 0058205b
    FMUL ST0                            ; 0058205d
    FLD float ptr [ESP + 0x1e8]         ; 0058205f
    FSUB float ptr [EAX + 0x8]          ; 00582066
    FMUL ST0                            ; 00582069
    FADDP                               ; 0058206b
    FSQRT                               ; 0058206d
    FCOMP double ptr [0x005eda74]       ; 0058206f | DAT_005eda74
    FNSTSW AX                           ; 00582075
    SAHF                                ; 00582077
    JNC 0x00581c71                      ; 00582078
        ;   XREF to: 00581c71 (CONDITIONAL_JUMP)  ; LAB_00581c71
    PUSH EBX                            ; 0058207e
        ;   Label: LAB_0058207e
    CALL core_vampboss.cpp_CVampireBoss_transformToHuman_FUN_00583650 ; 0058207f
        ;   XREF to: 00583650 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_transformToHuman_FUN_00583650(CVampireBoss * this_ptr)
    ADD ESP,0x4                         ; 00582084
    JMP 0x00581c71                      ; 00582087
        ;   XREF to: 00581c71 (UNCONDITIONAL_JUMP)  ; LAB_00581c71
    FLD float ptr [EBX + 0x34]          ; 0058208c
        ;   Label: LAB_0058208c
    FADD float ptr [ESP]                ; 0058208f
    FSTP float ptr [EBX + 0x34]         ; 00582092
    JMP 0x00581dae                      ; 00582095
        ;   XREF to: 00581dae (UNCONDITIONAL_JUMP)  ; LAB_00581dae
    CMP EDX,0x1                         ; 0058209a
        ;   Label: LAB_0058209a
    JNZ 0x00582283                      ; 0058209d
        ;   XREF to: 00582283 (CONDITIONAL_JUMP)  ; LAB_00582283
    FLD float ptr [EBP + 0x18]          ; 005820a3
    FDIV float ptr [0x005fd82c]         ; 005820a6 | DAT_005fd82c
    FADD float ptr [EBX + 0xc3b6c]      ; 005820ac
    FST float ptr [EBX + 0xc3b6c]       ; 005820b2
    FLD1                                ; 005820b8
    FCOMPP                              ; 005820ba
    FNSTSW AX                           ; 005820bc
    SAHF                                ; 005820be
    JA 0x005820de                       ; 005820bf
        ;   XREF to: 005820de (CONDITIONAL_JUMP)  ; LAB_005820de
    PUSH 0x5eda18                       ; 005820c1 | = "morphCompleted"
    MOV EAX,[0x006141f0]                ; 005820c6 | DAT_006141f0
    PUSH EAX                            ; 005820cb
    MOV dword ptr [EBX + 0xc2f3c],0x2   ; 005820cc
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 005820d6
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 005820db
    PUSH dword ptr [EBP + 0x18]         ; 005820de
        ;   Label: LAB_005820de
    PUSH EBX                            ; 005820e1
    CALL core_vampboss.cpp_CVampireBoss_advanceAnimation_FUN_00582dc0 ; 005820e2
        ;   XREF to: 00582dc0 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_advanceAnimation_FUN_00582dc0(CVampireBoss * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005820e7
    LEA ESI,[EBX + 0x10af8]             ; 005820ea
    PUSH ESI                            ; 005820f0
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0 ; 005820f1
        ;   XREF to: 00544ee0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005820f6
    PUSH ESI                            ; 005820f9
    PUSH dword ptr [EBX + 0x2574]       ; 005820fa
    LEA EAX,[EBX + 0x30]                ; 00582100
    PUSH dword ptr [EBP + 0x18]         ; 00582103
    PUSH EAX                            ; 00582106
    LEA EAX,[EBX + 0x20]                ; 00582107
    PUSH EAX                            ; 0058210a
    LEA EAX,[EBX + 0x12dac]             ; 0058210b
    PUSH EAX                            ; 00582111
    CALL core_cloth.cpp_CCloth_process_FUN_005afdf0 ; 00582112
        ;   XREF to: 005afdf0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_005afdf0(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 00582117
    LEA ESI,[EBX + 0x2b4]               ; 0058211a
    MOV EAX,dword ptr [EBP + 0x18]      ; 00582120
    FLDZ                                ; 00582123
    MOV dword ptr [ESP + 0x2c0],EAX     ; 00582125
    FCOMP float ptr [EBP + 0x18]        ; 0058212c
    FNSTSW AX                           ; 0058212f
    SAHF                                ; 00582131
    JNC 0x00582160                      ; 00582132
        ;   XREF to: 00582160 (CONDITIONAL_JUMP)  ; LAB_00582160
    LEA EAX,[ESP + 0x2c0]               ; 00582134
        ;   Label: LAB_00582134
    PUSH EAX                            ; 0058213b
    PUSH ESI                            ; 0058213c
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 0058213d
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00582142
    FLDZ                                ; 00582145
    FCOMP float ptr [ESP + 0x2c0]       ; 00582147
    FNSTSW AX                           ; 0058214e
    SAHF                                ; 00582150
    JC 0x00582134                       ; 00582151
        ;   XREF to: 00582134 (CONDITIONAL_JUMP)  ; LAB_00582134
    LEA EAX,[EAX]                       ; 00582153
    LEA EDX,[EDX]                       ; 00582159
    NOP                                 ; 0058215f
    PUSH ESI                            ; 00582160
        ;   Label: LAB_00582160
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0 ; 00582161
        ;   XREF to: 00544ee0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00582166
    PUSH ESI                            ; 00582169
    PUSH dword ptr [EBX + 0x2574]       ; 0058216a
    LEA EDI,[EBX + 0x30]                ; 00582170
    PUSH dword ptr [EBP + 0x18]         ; 00582173
    PUSH EDI                            ; 00582176
    LEA EAX,[EBX + 0x20]                ; 00582177
    PUSH EAX                            ; 0058217a
    MOV dword ptr [ESP + 0x328],EAX     ; 0058217b
    LEA EAX,[EBX + 0x4d8dc]             ; 00582182
    PUSH EAX                            ; 00582188
    CALL core_cloth.cpp_CCloth_process_FUN_005afdf0 ; 00582189
        ;   XREF to: 005afdf0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_005afdf0(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 0058218e
    PUSH ESI                            ; 00582191
    PUSH dword ptr [EBX + 0x2574]       ; 00582192
    PUSH dword ptr [EBP + 0x18]         ; 00582198
    PUSH EDI                            ; 0058219b
    MOV EDX,dword ptr [ESP + 0x324]     ; 0058219c
    PUSH EDX                            ; 005821a3
    LEA EAX,[EBX + 0x8840c]             ; 005821a4
    PUSH EAX                            ; 005821aa
    CALL core_cloth.cpp_CCloth_process_FUN_005afdf0 ; 005821ab
        ;   XREF to: 005afdf0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_005afdf0(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 005821b0
    PUSH ESI                            ; 005821b3
    LEA ESI,[ESP + 0x178]               ; 005821b4
    LEA EDI,[ESP + 0x160]               ; 005821bb
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_005487d0 ; 005821c2
        ;   XREF to: 005487d0 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_005487d0(CDeformableModelInstance * this_ptr, CBoundingBox3D * output_bbox)
    MOV ECX,0x6                         ; 005821c7
    LEA ESI,[ESP + 0x178]               ; 005821cc
    ADD ESP,0x4                         ; 005821d3
    MOVSD.REP ES:EDI,ESI                ; 005821d6
    LEA EDX,[EBX + 0x27f4]              ; 005821d8
    LEA EDI,[ESP + 0x15c]               ; 005821de
    MOV ESI,EDX                         ; 005821e5
    CMP EDX,EDI                         ; 005821e7
    JZ 0x00582208                       ; 005821e9
        ;   XREF to: 00582208 (CONDITIONAL_JUMP)  ; LAB_00582208
    MOV EAX,dword ptr [ESP + 0x15c]     ; 005821eb
    MOV dword ptr [EDX],EAX             ; 005821f2
    MOV EAX,dword ptr [ESP + 0x160]     ; 005821f4
    MOV dword ptr [EDX + 0x4],EAX       ; 005821fb
    MOV EAX,dword ptr [ESP + 0x164]     ; 005821fe
    MOV dword ptr [EDX + 0x8],EAX       ; 00582205
    LEA EAX,[EDI + 0xc]                 ; 00582208
        ;   Label: LAB_00582208
    LEA EDX,[ESI + 0xc]                 ; 0058220b
    CMP EDX,EAX                         ; 0058220e
    JZ 0x00582222                       ; 00582210
        ;   XREF to: 00582222 (CONDITIONAL_JUMP)  ; LAB_00582222
    MOV ECX,dword ptr [EAX]             ; 00582212
    MOV dword ptr [EDX],ECX             ; 00582214
    MOV ECX,dword ptr [EAX + 0x4]       ; 00582216
    MOV dword ptr [EDX + 0x4],ECX       ; 00582219
    MOV ECX,dword ptr [EAX + 0x8]       ; 0058221c
    MOV dword ptr [EDX + 0x8],ECX       ; 0058221f
    LEA EAX,[EBX + 0x10af8]             ; 00582222
        ;   Label: LAB_00582222
    PUSH EAX                            ; 00582228
    LEA ESI,[ESP + 0xa0]                ; 00582229
    LEA EDI,[ESP + 0x100]               ; 00582230
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_005487d0 ; 00582237
        ;   XREF to: 005487d0 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_005487d0(CDeformableModelInstance * this_ptr, CBoundingBox3D * output_bbox)
    MOV ECX,0x6                         ; 0058223c
    LEA ESI,[ESP + 0xa0]                ; 00582241
    ADD ESP,0x4                         ; 00582248
    LEA EAX,[ESP + 0xfc]                ; 0058224b
    MOVSD.REP ES:EDI,ESI                ; 00582252
    PUSH EAX                            ; 00582254
    LEA ESI,[EBX + 0x27f4]              ; 00582255
    PUSH ESI                            ; 0058225b
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041a590 ; 0058225c
        ;   XREF to: 0041a590 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_0041a590(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 00582261
    LEA EAX,[ESP + 0x108]               ; 00582264
    PUSH EAX                            ; 0058226b
    PUSH ESI                            ; 0058226c
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041a590 ; 0058226d
        ;   XREF to: 0041a590 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_0041a590(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 00582272
    FLD float ptr [EBX + 0x24]          ; 00582275
    FADD float ptr [EBP + 0x18]         ; 00582278
    FSTP float ptr [EBX + 0x24]         ; 0058227b
    JMP 0x00581f5f                      ; 0058227e
        ;   XREF to: 00581f5f (UNCONDITIONAL_JUMP)  ; LAB_00581f5f
    CMP EDX,0x3                         ; 00582283
        ;   Label: LAB_00582283
    JNZ 0x005824bb                      ; 00582286
        ;   XREF to: 005824bb (CONDITIONAL_JUMP)  ; LAB_005824bb
    FLD float ptr [EBP + 0x18]          ; 0058228c
    FDIV float ptr [0x005fd82c]         ; 0058228f | DAT_005fd82c
    MOV EAX,dword ptr [EBX + 0xc3b6c]   ; 00582295
    MOV dword ptr [ESP + 0x2c8],EAX     ; 0058229b
    FLD float ptr [ESP + 0x2c8]         ; 005822a2
    FXCH                                ; 005822a9
    FSTP float ptr [ESP + 0x2cc]        ; 005822ab
    FSUB float ptr [ESP + 0x2cc]        ; 005822b2
    FST float ptr [EBX + 0xc3b6c]       ; 005822b9
    FLDZ                                ; 005822bf
    FCOMPP                              ; 005822c1
    FNSTSW AX                           ; 005822c3
    SAHF                                ; 005822c5
    JC 0x0058249a                       ; 005822c6
        ;   XREF to: 0058249a (CONDITIONAL_JUMP)  ; LAB_0058249a
    PUSH 0x5eda27                       ; 005822cc | = "backToHuman"
    MOV EDI,dword ptr [0x006141f0]      ; 005822d1 | DAT_006141f0
    PUSH EDI                            ; 005822d7
    MOV dword ptr [EBX + 0xc2f3c],0x0   ; 005822d8
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 005822e2
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
    FLD float ptr [EBX + 0x2574]        ; 005822e7
    MOV dword ptr [EBX + 0xc3b6c],0x0   ; 005822ed
    ADD ESP,0x8                         ; 005822f7
    FSTP float ptr [EBX + 0x24]         ; 005822fa
        ;   Label: LAB_005822fa
    PUSH dword ptr [EBP + 0x18]         ; 005822fd
    PUSH EBX                            ; 00582300
    CALL core_vampboss.cpp_CVampireBoss_advanceAnimation_FUN_00582dc0 ; 00582301
        ;   XREF to: 00582dc0 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_advanceAnimation_FUN_00582dc0(CVampireBoss * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00582306
    LEA ESI,[EBX + 0x10af8]             ; 00582309
    PUSH ESI                            ; 0058230f
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0 ; 00582310
        ;   XREF to: 00544ee0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00582315
    PUSH ESI                            ; 00582318
    PUSH dword ptr [EBX + 0x2574]       ; 00582319
    LEA EAX,[EBX + 0x30]                ; 0058231f
    PUSH dword ptr [EBP + 0x18]         ; 00582322
    PUSH EAX                            ; 00582325
    LEA EAX,[EBX + 0x20]                ; 00582326
    PUSH EAX                            ; 00582329
    LEA EAX,[EBX + 0x12dac]             ; 0058232a
    PUSH EAX                            ; 00582330
    CALL core_cloth.cpp_CCloth_process_FUN_005afdf0 ; 00582331
        ;   XREF to: 005afdf0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_005afdf0(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 00582336
    LEA ESI,[EBX + 0x2b4]               ; 00582339
    MOV EAX,dword ptr [EBP + 0x18]      ; 0058233f
    FLDZ                                ; 00582342
    MOV dword ptr [ESP + 0x310],EAX     ; 00582344
    FCOMP float ptr [EBP + 0x18]        ; 0058234b
    FNSTSW AX                           ; 0058234e
    SAHF                                ; 00582350
    JNC 0x00582380                      ; 00582351
        ;   XREF to: 00582380 (CONDITIONAL_JUMP)  ; LAB_00582380
    LEA EAX,[ESP + 0x310]               ; 00582353
        ;   Label: LAB_00582353
    PUSH EAX                            ; 0058235a
    PUSH ESI                            ; 0058235b
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 0058235c
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00582361
    FLDZ                                ; 00582364
    FCOMP float ptr [ESP + 0x310]       ; 00582366
    FNSTSW AX                           ; 0058236d
    SAHF                                ; 0058236f
    JC 0x00582353                       ; 00582370
        ;   XREF to: 00582353 (CONDITIONAL_JUMP)  ; LAB_00582353
    LEA EAX,[EAX]                       ; 00582372
    LEA EDX,[EDX]                       ; 00582378
    MOV EAX,EAX                         ; 0058237e
    PUSH ESI                            ; 00582380
        ;   Label: LAB_00582380
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0 ; 00582381
        ;   XREF to: 00544ee0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00582386
    PUSH ESI                            ; 00582389
    PUSH dword ptr [EBX + 0x2574]       ; 0058238a
    LEA EDI,[EBX + 0x30]                ; 00582390
    PUSH dword ptr [EBP + 0x18]         ; 00582393
    PUSH EDI                            ; 00582396
    LEA EAX,[EBX + 0x20]                ; 00582397
    PUSH EAX                            ; 0058239a
    MOV dword ptr [ESP + 0x328],EAX     ; 0058239b
    LEA EAX,[EBX + 0x4d8dc]             ; 005823a2
    PUSH EAX                            ; 005823a8
    CALL core_cloth.cpp_CCloth_process_FUN_005afdf0 ; 005823a9
        ;   XREF to: 005afdf0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_005afdf0(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 005823ae
    PUSH ESI                            ; 005823b1
    PUSH dword ptr [EBX + 0x2574]       ; 005823b2
    PUSH dword ptr [EBP + 0x18]         ; 005823b8
    PUSH EDI                            ; 005823bb
    MOV ECX,dword ptr [ESP + 0x324]     ; 005823bc
    PUSH ECX                            ; 005823c3
    LEA EAX,[EBX + 0x8840c]             ; 005823c4
    PUSH EAX                            ; 005823ca
    CALL core_cloth.cpp_CCloth_process_FUN_005afdf0 ; 005823cb
        ;   XREF to: 005afdf0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_005afdf0(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 005823d0
    PUSH ESI                            ; 005823d3
    LEA ESI,[ESP + 0x190]               ; 005823d4
    LEA EDI,[ESP + 0xb8]                ; 005823db
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_005487d0 ; 005823e2
        ;   XREF to: 005487d0 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_005487d0(CDeformableModelInstance * this_ptr, CBoundingBox3D * output_bbox)
    MOV ECX,0x6                         ; 005823e7
    LEA ESI,[ESP + 0x190]               ; 005823ec
    ADD ESP,0x4                         ; 005823f3
    MOVSD.REP ES:EDI,ESI                ; 005823f6
    LEA EDX,[EBX + 0x27f4]              ; 005823f8
    LEA EDI,[ESP + 0xb4]                ; 005823fe
    MOV ESI,EDX                         ; 00582405
    CMP EDX,EDI                         ; 00582407
    JZ 0x00582428                       ; 00582409
        ;   XREF to: 00582428 (CONDITIONAL_JUMP)  ; LAB_00582428
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0058240b
    MOV dword ptr [EDX],EAX             ; 00582412
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00582414
    MOV dword ptr [EDX + 0x4],EAX       ; 0058241b
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0058241e
    MOV dword ptr [EDX + 0x8],EAX       ; 00582425
    LEA EDX,[EDI + 0xc]                 ; 00582428
        ;   Label: LAB_00582428
    LEA EAX,[ESI + 0xc]                 ; 0058242b
    CMP EAX,EDX                         ; 0058242e
    JZ 0x00582442                       ; 00582430
        ;   XREF to: 00582442 (CONDITIONAL_JUMP)  ; LAB_00582442
    MOV ECX,dword ptr [EDX]             ; 00582432
    MOV dword ptr [EAX],ECX             ; 00582434
    MOV ECX,dword ptr [EDX + 0x4]       ; 00582436
    MOV dword ptr [EAX + 0x4],ECX       ; 00582439
    MOV ECX,dword ptr [EDX + 0x8]       ; 0058243c
    MOV dword ptr [EAX + 0x8],ECX       ; 0058243f
    LEA EAX,[EBX + 0x10af8]             ; 00582442
        ;   Label: LAB_00582442
    PUSH EAX                            ; 00582448
    LEA ESI,[ESP + 0x118]               ; 00582449
    LEA EDI,[ESP + 0x130]               ; 00582450
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_005487d0 ; 00582457
        ;   XREF to: 005487d0 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_005487d0(CDeformableModelInstance * this_ptr, CBoundingBox3D * output_bbox)
    MOV ECX,0x6                         ; 0058245c
    LEA ESI,[ESP + 0x118]               ; 00582461
    ADD ESP,0x4                         ; 00582468
    LEA EAX,[ESP + 0x12c]               ; 0058246b
    MOVSD.REP ES:EDI,ESI                ; 00582472
    PUSH EAX                            ; 00582474
    LEA ESI,[EBX + 0x27f4]              ; 00582475
    PUSH ESI                            ; 0058247b
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041a590 ; 0058247c
        ;   XREF to: 0041a590 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_0041a590(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 00582481
    LEA EAX,[ESP + 0x138]               ; 00582484
    PUSH EAX                            ; 0058248b
    PUSH ESI                            ; 0058248c
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041a590 ; 0058248d
        ;   XREF to: 0041a590 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_0041a590(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 00582492
    JMP 0x00581f5f                      ; 00582495
        ;   XREF to: 00581f5f (UNCONDITIONAL_JUMP)  ; LAB_00581f5f
    FLD float ptr [EBX + 0x2574]        ; 0058249a
        ;   Label: LAB_0058249a
    FSUB float ptr [EBX + 0x24]         ; 005824a0
    FLD float ptr [ESP + 0x2cc]         ; 005824a3
    FDIV float ptr [ESP + 0x2c8]        ; 005824aa
    FMULP                               ; 005824b1
    FADD float ptr [EBX + 0x24]         ; 005824b3
    JMP 0x005822fa                      ; 005824b6
        ;   XREF to: 005822fa (UNCONDITIONAL_JUMP)  ; LAB_005822fa
    MOV EAX,dword ptr [EBP + 0x18]      ; 005824bb
        ;   Label: LAB_005824bb
    MOV dword ptr [ESP + 0x2bc],EAX     ; 005824be
    LEA EAX,[EBX + 0x2b4]               ; 005824c5
    FLDZ                                ; 005824cb
    MOV dword ptr [ESP + 0x308],EAX     ; 005824cd
    FCOMP float ptr [EBP + 0x18]        ; 005824d4
    FNSTSW AX                           ; 005824d7
    SAHF                                ; 005824d9
    JNC 0x00582523                      ; 005824da
        ;   XREF to: 00582523 (CONDITIONAL_JUMP)  ; LAB_00582523
    LEA EAX,[ESP + 0x2bc]               ; 005824dc
        ;   Label: LAB_005824dc
    PUSH EAX                            ; 005824e3
    MOV ESI,dword ptr [ESP + 0x30c]     ; 005824e4
    PUSH ESI                            ; 005824eb
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 005824ec
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 005824f1
    CMP EAX,0x2                         ; 005824f4
    JNC 0x0058285b                      ; 005824f7
        ;   XREF to: 0058285b (CONDITIONAL_JUMP)  ; LAB_0058285b
    CMP EAX,0x1                         ; 005824fd
    JNZ 0x00582515                      ; 00582500
        ;   XREF to: 00582515 (CONDITIONAL_JUMP)  ; LAB_00582515
    PUSH EBX                            ; 00582502
    CALL core_vampboss.cpp_CVampireBoss_summonStalagmites_FUN_00583520 ; 00582503
        ;   XREF to: 00583520 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_summonStalagmites_FUN_00583520(CVampireBoss * this_ptr)
    ADD ESP,0x4                         ; 00582508
        ;   Label: LAB_00582508
    MOV dword ptr [EBX + 0xc3b70],0x3f800000 ; 0058250b
    FLDZ                                ; 00582515
        ;   Label: LAB_00582515
    FCOMP float ptr [ESP + 0x2bc]       ; 00582517
    FNSTSW AX                           ; 0058251e
    SAHF                                ; 00582520
    JC 0x005824dc                       ; 00582521
        ;   XREF to: 005824dc (CONDITIONAL_JUMP)  ; LAB_005824dc
    MOV ECX,dword ptr [ESP + 0x308]     ; 00582523
        ;   Label: LAB_00582523
    PUSH ECX                            ; 0058252a
    LEA ESI,[ESP + 0xd0]                ; 0058252b
    LEA EDI,[ESP + 0x88]                ; 00582532
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_005487d0 ; 00582539
        ;   XREF to: 005487d0 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_005487d0(CDeformableModelInstance * this_ptr, CBoundingBox3D * output_bbox)
    MOV ECX,0x6                         ; 0058253e
    LEA ESI,[ESP + 0xd0]                ; 00582543
    ADD ESP,0x4                         ; 0058254a
    MOVSD.REP ES:EDI,ESI                ; 0058254d
    LEA EDX,[EBX + 0x27f4]              ; 0058254f
    LEA ESI,[ESP + 0x84]                ; 00582555
    MOV EDI,EDX                         ; 0058255c
    CMP EDX,ESI                         ; 0058255e
    JZ 0x0058257f                       ; 00582560
        ;   XREF to: 0058257f (CONDITIONAL_JUMP)  ; LAB_0058257f
    MOV EAX,dword ptr [ESP + 0x84]      ; 00582562
    MOV dword ptr [EDX],EAX             ; 00582569
    MOV EAX,dword ptr [ESP + 0x88]      ; 0058256b
    MOV dword ptr [EDX + 0x4],EAX       ; 00582572
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00582575
    MOV dword ptr [EDX + 0x8],EAX       ; 0058257c
    LEA EDX,[ESI + 0xc]                 ; 0058257f
        ;   Label: LAB_0058257f
    LEA EAX,[EDI + 0xc]                 ; 00582582
    CMP EAX,EDX                         ; 00582585
    JZ 0x00582599                       ; 00582587
        ;   XREF to: 00582599 (CONDITIONAL_JUMP)  ; LAB_00582599
    MOV ECX,dword ptr [EDX]             ; 00582589
    MOV dword ptr [EAX],ECX             ; 0058258b
    MOV ECX,dword ptr [EDX + 0x4]       ; 0058258d
    MOV dword ptr [EAX + 0x4],ECX       ; 00582590
    MOV ECX,dword ptr [EDX + 0x8]       ; 00582593
    MOV dword ptr [EAX + 0x8],ECX       ; 00582596
    LEA ESI,[EBX + 0x2b4]               ; 00582599
        ;   Label: LAB_00582599
    PUSH ESI                            ; 0058259f
    CALL core_motion.cpp_FUN_005035c0   ; 005825a0
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 005825a5
    MOV EAX,dword ptr [EAX + 0x24]      ; 005825a8
    MOV dword ptr [ESP + 0x2c4],EAX     ; 005825ab
    CMP EAX,0x9                         ; 005825b2
    JA 0x0058260e                       ; 005825b5
        ;   XREF to: 0058260e (CONDITIONAL_JUMP)  ; caseD_9
    JMP dword ptr [EAX*0x4 + 0x5818e4]  ; 005825b7 | caseD_0 | caseD_9 | caseD_2
        ;   Label: switchD
    FLD float ptr [0x005fd834]          ; 005825be | DAT_005fd834
        ;   Label: caseD_0
    FMUL float ptr [EBP + 0x18]         ; 005825c4
    MOV EAX,[0x00616494]                ; 005825c7 | g_CGamePtr
    FSTP float ptr [EBX + 0x2598]       ; 005825cc
    CMP dword ptr [EAX + 0x244],0x0     ; 005825d2 | g_CGameInstance.letterbox_mode
    JZ 0x00582be2                       ; 005825d9
        ;   XREF to: 00582be2 (CONDITIONAL_JUMP)  ; LAB_00582be2
    PUSH 0x5eda33                       ; 005825df | = "morphToBat"
    MOV ESI,dword ptr [0x006141f0]      ; 005825e4 | DAT_006141f0
    PUSH ESI                            ; 005825ea
    MOV dword ptr [EBX + 0xc3b70],0x40400000 ; 005825eb
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 005825f5
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005825fa
    TEST EAX,EAX                        ; 005825fd
    JZ 0x0058287a                       ; 005825ff
        ;   XREF to: 0058287a (CONDITIONAL_JUMP)  ; LAB_0058287a
    PUSH EBX                            ; 00582605
        ;   Label: LAB_00582605
    CALL core_vampboss.cpp_CVampireBoss_transformToBat_FUN_00583610 ; 00582606
        ;   XREF to: 00583610 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_transformToBat_FUN_00583610(CVampireBoss * this_ptr)
    ADD ESP,0x4                         ; 0058260b
        ;   Label: LAB_0058260b
    MOV EAX,[0x00616494]                ; 0058260e | g_CGamePtr
        ;   Label: caseD_1
    CMP dword ptr [EAX + 0x244],0x0     ; 00582613 | g_CGameInstance.letterbox_mode
    JNZ 0x005826a0                      ; 0058261a
        ;   XREF to: 005826a0 (CONDITIONAL_JUMP)  ; LAB_005826a0
    CMP dword ptr [ESP + 0x2c4],0x2     ; 00582620
    JZ 0x005826a0                       ; 00582628
        ;   XREF to: 005826a0 (CONDITIONAL_JUMP)  ; LAB_005826a0
    FLD float ptr [EBP + 0x18]          ; 0058262a
    FMUL double ptr [0x005eda94]        ; 0058262d | DAT_005eda94
    LEA EAX,[EBX + 0x257c]              ; 00582633
    LEA EDI,[ESP + 0x234]               ; 00582639
    LEA ESI,[ESP + 0x210]               ; 00582640
    FLD float ptr [EAX + 0x4]           ; 00582647
    FLD float ptr [EAX + 0x8]           ; 0058264a
    LEA EDX,[EBX + 0x2508]              ; 0058264d
    FLD float ptr [EAX]                 ; 00582653
    LEA EAX,[ESP + 0x234]               ; 00582655
    FADD float ptr [EDX]                ; 0058265c
    FXCH ST2                            ; 0058265e
    FADD float ptr [EDX + 0x4]          ; 00582660
    FXCH                                ; 00582663
    FADD float ptr [EDX + 0x8]          ; 00582665
    FXCH ST2                            ; 00582668
    FSTP float ptr [ESP + 0x210]        ; 0058266a
    FSTP float ptr [ESP + 0x214]        ; 00582671
    FSTP float ptr [ESP + 0x218]        ; 00582678
    MOVSD ES:EDI,ESI                    ; 0058267f
    MOVSD ES:EDI,ESI                    ; 00582680
    MOVSD ES:EDI,ESI                    ; 00582681
    PUSH EAX                            ; 00582682
    FLD float ptr [ESP + 0x23c]         ; 00582683
    FXCH                                ; 0058268a
    FSUBR ST0,ST1                       ; 0058268c
    PUSH EBX                            ; 0058268e
    FSTP ST1                            ; 0058268f
    FSTP float ptr [ESP + 0x240]        ; 00582691
    CALL core_charactr.cpp_FUN_00423a60 ; 00582698
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0058269d
    LEA EAX,[EBX + 0x257c]              ; 005826a0
        ;   Label: LAB_005826a0
    MOV dword ptr [EAX + 0x8],0x0       ; 005826a6
    MOV EDX,dword ptr [EAX + 0x8]       ; 005826ad
    MOV dword ptr [EAX + 0x4],EDX       ; 005826b0
    MOV EDX,dword ptr [EAX + 0x4]       ; 005826b3
    MOV dword ptr [EAX],EDX             ; 005826b6
    LEA EAX,[EBX + 0x2508]              ; 005826b8
    MOV dword ptr [EAX + 0x8],0x0       ; 005826be
    PUSH EBX                            ; 005826c5
    MOV EDX,dword ptr [EAX + 0x8]       ; 005826c6
    MOV dword ptr [EAX + 0x4],EDX       ; 005826c9
    MOV EDX,dword ptr [EAX + 0x4]       ; 005826cc
    MOV dword ptr [EAX],EDX             ; 005826cf
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00424470 ; 005826d1
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00424470(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005826d6
    LEA ESI,[EBX + 0x2b4]               ; 005826d9
    PUSH ESI                            ; 005826df
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 005826e0
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005826e5
    PUSH dword ptr [EBP + 0x18]         ; 005826e8
    PUSH EBX                            ; 005826eb
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90 ; 005826ec
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005826f1
    PUSH ESI                            ; 005826f4
    PUSH dword ptr [EBX + 0x2574]       ; 005826f5
    LEA EDI,[EBX + 0x30]                ; 005826fb
    PUSH dword ptr [EBP + 0x18]         ; 005826fe
    PUSH EDI                            ; 00582701
    LEA EAX,[EBX + 0x20]                ; 00582702
    PUSH EAX                            ; 00582705
    MOV dword ptr [ESP + 0x328],EAX     ; 00582706
    LEA EAX,[EBX + 0x4d8dc]             ; 0058270d
    PUSH EAX                            ; 00582713
    CALL core_cloth.cpp_CCloth_process_FUN_005afdf0 ; 00582714
        ;   XREF to: 005afdf0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_005afdf0(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 00582719
    PUSH ESI                            ; 0058271c
    PUSH dword ptr [EBX + 0x2574]       ; 0058271d
    PUSH dword ptr [EBP + 0x18]         ; 00582723
    PUSH EDI                            ; 00582726
    MOV ECX,dword ptr [ESP + 0x324]     ; 00582727
    PUSH ECX                            ; 0058272e
    LEA EAX,[EBX + 0x8840c]             ; 0058272f
    PUSH EAX                            ; 00582735
    CALL core_cloth.cpp_CCloth_process_FUN_005afdf0 ; 00582736
        ;   XREF to: 005afdf0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_process_FUN_005afdf0(CCloth * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 0058273b
    JMP 0x00581f5f                      ; 0058273e
        ;   XREF to: 00581f5f (UNCONDITIONAL_JUMP)  ; LAB_00581f5f
    PUSH EBX                            ; 00582743
        ;   Label: LAB_00582743
    CALL core_vampboss.cpp_CVampireBoss_summonFireEmitters_FUN_005835a0 ; 00582744
        ;   XREF to: 005835a0 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_summonFireEmitters_FUN_005835a0(CVampireBoss * this_ptr)
    JMP 0x00582508                      ; 00582749
        ;   XREF to: 00582508 (UNCONDITIONAL_JUMP)  ; LAB_00582508
    PUSH EBX                            ; 0058274e
        ;   Label: LAB_0058274e
    CALL core_vampboss.cpp_CVampireBoss_summonBats_FUN_005834b0 ; 0058274f
        ;   XREF to: 005834b0 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_summonBats_FUN_005834b0(CVampireBoss * this_ptr)
    JMP 0x00582508                      ; 00582754
        ;   XREF to: 00582508 (UNCONDITIONAL_JUMP)  ; LAB_00582508
    PUSH 0x0                            ; 00582759
        ;   Label: LAB_00582759
    PUSH 0x0                            ; 0058275b
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0058275d
    PUSH EBX                            ; 00582763
    CALL dword ptr [EAX + 0x130]        ; 00582764
    MOV EAX,0x41a00000                  ; 0058276a
    ADD ESP,0xc                         ; 0058276f
    MOV dword ptr [ESP + 0x1c0],EAX     ; 00582772
    MOV dword ptr [ESP + 0x1c4],EAX     ; 00582779
    LEA EAX,[ESP + 0x1bc]               ; 00582780
    PUSH EAX                            ; 00582787
    XOR EDI,EDI                         ; 00582788
    PUSH EBX                            ; 0058278a
    LEA ESI,[ESP + 0x1b8]               ; 0058278b
    MOV dword ptr [ESP + 0x1c4],EDI     ; 00582792
    CALL core_actor.cpp_FUN_00408cf0    ; 00582799
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    ADD ESP,0x8                         ; 0058279e
    PUSH 0x0                            ; 005827a1
    LEA EAX,[ESP + 0x274]               ; 005827a3
    PUSH 0xbf800000                     ; 005827aa
    PUSH EAX                            ; 005827af
    LEA EDI,[ESP + 0x27c]               ; 005827b0
    LEA ESI,[ESP + 0x1bc]               ; 005827b7
    PUSH EBX                            ; 005827be
    MOVSD ES:EDI,ESI                    ; 005827bf
    MOVSD ES:EDI,ESI                    ; 005827c0
    MOVSD ES:EDI,ESI                    ; 005827c1
    CALL core_charactr.cpp_CCharacter_dismember_FUN_00427360 ; 005827c2
        ;   XREF to: 00427360 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismember_FUN_00427360(CCharacter * this_ptr, CVector3f * impact_point, float impact_force, int render_in_background)
    ADD ESP,0x10                        ; 005827c7
    XOR ECX,ECX                         ; 005827ca
    XOR EDI,EDI                         ; 005827cc
    MOV dword ptr [ESP + 0x30c],ECX     ; 005827ce
        ;   Label: LAB_005827ce
    MOV EAX,[0x0061b5a8]                ; 005827d5 | g_CDemonSetPtr
    MOV EDX,dword ptr [ESP + 0x30c]     ; 005827da
    CMP EDX,dword ptr [EAX + 0x150fec]  ; 005827e1 | g_CDemonSetInstance.enemy_count
    JGE 0x00582515                      ; 005827e7
        ;   XREF to: 00582515 (CONDITIONAL_JUMP)  ; LAB_00582515
    MOV EDX,dword ptr [0x026536cc]      ; 005827ed | g_CTVBatClassInfo.name_hash
    PUSH EDX                            ; 005827f3
    MOV ECX,dword ptr [EDI + EAX*0x1 + 0x150ff0] ; 005827f4
    PUSH ECX                            ; 005827fb
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 005827fc
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 00582801
    ADD ESP,0x8                         ; 00582803
    TEST EAX,EAX                        ; 00582806
    JNZ 0x00582817                      ; 00582808
        ;   XREF to: 00582817 (CONDITIONAL_JUMP)  ; LAB_00582817
    MOV ECX,dword ptr [ESP + 0x30c]     ; 0058280a
        ;   Label: LAB_0058280a
    INC ECX                             ; 00582811
    ADD EDI,0x4                         ; 00582812
    JMP 0x005827ce                      ; 00582815
        ;   XREF to: 005827ce (UNCONDITIONAL_JUMP)  ; LAB_005827ce
    CMP dword ptr [EAX + 0x10ca0],0x0   ; 00582817
        ;   Label: LAB_00582817
    JZ 0x0058280a                       ; 0058281e
        ;   XREF to: 0058280a (CONDITIONAL_JUMP)  ; LAB_0058280a
    LEA EAX,[ESP + 0xc]                 ; 00582820
    PUSH EAX                            ; 00582824
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 00582825
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    MOV EDX,0x4479c000                  ; 0058282a
    ADD ESP,0x4                         ; 0058282f
    MOV dword ptr [ESP + 0x10],EDX      ; 00582832
    LEA EDX,[ESP + 0xc]                 ; 00582836
    PUSH EDX                            ; 0058283a
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 0058283b
    PUSH ESI                            ; 00582841
    CALL dword ptr [EAX + 0x110]        ; 00582842
    ADD ESP,0x8                         ; 00582848
    MOV ECX,dword ptr [ESP + 0x30c]     ; 0058284b
    INC ECX                             ; 00582852
    ADD EDI,0x4                         ; 00582853
    JMP 0x005827ce                      ; 00582856
        ;   XREF to: 005827ce (UNCONDITIONAL_JUMP)  ; LAB_005827ce
    JBE 0x00582743                      ; 0058285b
        ;   XREF to: 00582743 (CONDITIONAL_JUMP)  ; LAB_00582743
        ;   Label: LAB_0058285b
    CMP EAX,0x3                         ; 00582861
    JBE 0x0058274e                      ; 00582864
        ;   XREF to: 0058274e (CONDITIONAL_JUMP)  ; LAB_0058274e
    CMP EAX,0x29a                       ; 0058286a
    JZ 0x00582759                       ; 0058286f
        ;   XREF to: 00582759 (CONDITIONAL_JUMP)  ; LAB_00582759
    JMP 0x00582515                      ; 00582875
        ;   XREF to: 00582515 (UNCONDITIONAL_JUMP)  ; LAB_00582515
    MOV EAX,[0x01cedef4]                ; 0058287a | DAT_01cedef4
        ;   Label: LAB_0058287a
    MOV EDX,dword ptr [EAX*0x4 + 0x1cedee4] ; 0058287f
    LEA EDI,[ESP + 0x264]               ; 00582886
    LEA ESI,[ESP + 0x1ec]               ; 0058288d
    FLD float ptr [EDX + 0x20]          ; 00582894
    FLD float ptr [EDX + 0x24]          ; 00582897
    LEA EAX,[EBX + 0x20]                ; 0058289a
    FLD float ptr [EDX + 0x28]          ; 0058289d
    FXCH ST2                            ; 005828a0
    FSUB float ptr [EAX]                ; 005828a2
    FXCH                                ; 005828a4
    FSUB float ptr [EAX + 0x4]          ; 005828a6
    FXCH ST2                            ; 005828a9
    FSUB float ptr [EAX + 0x8]          ; 005828ab
    FXCH                                ; 005828ae
    FSTP float ptr [ESP + 0x1ec]        ; 005828b0
    FXCH                                ; 005828b7
    FSTP float ptr [ESP + 0x1f0]        ; 005828b9
    FSTP float ptr [ESP + 0x1f4]        ; 005828c0
    LEA EAX,[ESP + 0x264]               ; 005828c7
    MOVSD ES:EDI,ESI                    ; 005828ce
    MOVSD ES:EDI,ESI                    ; 005828cf
    MOVSD ES:EDI,ESI                    ; 005828d0
    PUSH EAX                            ; 005828d1
    LEA ESI,[ESP + 0x22c]               ; 005828d2
    LEA EDI,[ESP + 0x220]               ; 005828d9
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 005828e0
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x22c]               ; 005828e5
    ADD ESP,0x4                         ; 005828ec
    MOVSD ES:EDI,ESI                    ; 005828ef
    MOVSD ES:EDI,ESI                    ; 005828f0
    MOVSD ES:EDI,ESI                    ; 005828f1
    FLD float ptr [ESP + 0x220]         ; 005828f2
    FSUB float ptr [EBX + 0x34]         ; 005828f9
    SUB ESP,0x4                         ; 005828fc
    FSTP float ptr [ESP]                ; 005828ff
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 00582902
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x318],EAX     ; 00582907
    MOV EAX,dword ptr [ESP + 0x318]     ; 0058290e
    MOV dword ptr [EBX + 0x2578],EAX    ; 00582915
    ADD ESP,0x4                         ; 0058291b
    MOV EAX,dword ptr [EBX + 0x2578]    ; 0058291e
    MOV dword ptr [ESP + 0x304],EAX     ; 00582924
    MOV EAX,dword ptr [EBX + 0x2598]    ; 0058292b
    PUSH dword ptr [ESP + 0x304]        ; 00582931
    MOV dword ptr [ESP + 0x2e8],EAX     ; 00582938
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 0058293f
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x318],EAX     ; 00582944
    FLD float ptr [ESP + 0x318]         ; 0058294b
    ADD ESP,0x4                         ; 00582952
    FLD float ptr [ESP + 0x2e4]         ; 00582955
    FXCH                                ; 0058295c
    FST float ptr [ESP + 0x304]         ; 0058295e
    FXCH                                ; 00582965
    FCHS                                ; 00582967
    FSTP float ptr [ESP + 0x2d4]        ; 00582969
    FCOMP float ptr [ESP + 0x2d4]       ; 00582970
    FNSTSW AX                           ; 00582977
    SAHF                                ; 00582979
    JNC 0x0058299c                      ; 0058297a
        ;   XREF to: 0058299c (CONDITIONAL_JUMP)  ; LAB_0058299c
    MOV EAX,dword ptr [ESP + 0x2d4]     ; 0058297c
    MOV dword ptr [ESP + 0x2e8],EAX     ; 00582983
        ;   Label: LAB_00582983
    MOV EAX,dword ptr [ESP + 0x2e8]     ; 0058298a
    MOV dword ptr [EBX + 0x2578],EAX    ; 00582991
    JMP 0x0058260e                      ; 00582997
        ;   XREF to: 0058260e (UNCONDITIONAL_JUMP)  ; caseD_9
    FLD float ptr [ESP + 0x304]         ; 0058299c
        ;   Label: LAB_0058299c
    FCOMP float ptr [ESP + 0x2e4]       ; 005829a3
    FNSTSW AX                           ; 005829aa
    SAHF                                ; 005829ac
    JBE 0x005829b8                      ; 005829ad
        ;   XREF to: 005829b8 (CONDITIONAL_JUMP)  ; LAB_005829b8
    MOV EAX,dword ptr [ESP + 0x2e4]     ; 005829af
    JMP 0x00582983                      ; 005829b6
        ;   XREF to: 00582983 (UNCONDITIONAL_JUMP)  ; LAB_00582983
    MOV EAX,dword ptr [ESP + 0x304]     ; 005829b8
        ;   Label: LAB_005829b8
    JMP 0x00582983                      ; 005829bf
        ;   XREF to: 00582983 (UNCONDITIONAL_JUMP)  ; LAB_00582983
    FLD float ptr [EBX + 0x25ac]        ; 005829c1
        ;   Label: caseD_0
    FMUL float ptr [EBP + 0x18]         ; 005829c7
    FDIV float ptr [0x005fd838]         ; 005829ca | DAT_005fd838
    FADD float ptr [EBX + 0x25a8]       ; 005829d0
    FST float ptr [EBX + 0x25a8]        ; 005829d6
    FCOMP double ptr [0x005eda8c]       ; 005829dc | DAT_005eda8c
    FNSTSW AX                           ; 005829e2
    SAHF                                ; 005829e4
    JA 0x00582605                       ; 005829e5
        ;   XREF to: 00582605 (CONDITIONAL_JUMP)  ; LAB_00582605
    LEA ESI,[EBX + 0x20]                ; 005829eb
    PUSH 0x41400000                     ; 005829ee
    PUSH ESI                            ; 005829f3
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004ce100 ; 005829f4
        ;   XREF to: 004ce100 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinRadius_FUN_004ce100(CVector3f * point, float radius)
    ADD ESP,0x8                         ; 005829f9
    TEST EAX,EAX                        ; 005829fc
    JNZ 0x00582bc8                      ; 005829fe
        ;   XREF to: 00582bc8 (CONDITIONAL_JUMP)  ; LAB_00582bc8
    MOV EAX,[0x01cedef4]                ; 00582a04 | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 00582a09
    LEA EDI,[ESP + 0x24c]               ; 00582a10
    FLD float ptr [EAX + 0x24]          ; 00582a17
    FLD float ptr [EAX + 0x28]          ; 00582a1a
    FLD float ptr [EAX + 0x20]          ; 00582a1d
    LEA EAX,[ESP + 0x24c]               ; 00582a20
    FSUB float ptr [ESI]                ; 00582a27
    FXCH ST2                            ; 00582a29
    FSUB float ptr [ESI + 0x4]          ; 00582a2b
    FXCH                                ; 00582a2e
    FSUB float ptr [ESI + 0x8]          ; 00582a30
    FXCH ST2                            ; 00582a33
    FSTP float ptr [ESP + 0x1c8]        ; 00582a35
    FSTP float ptr [ESP + 0x1cc]        ; 00582a3c
    LEA ESI,[ESP + 0x1c8]               ; 00582a43
    FSTP float ptr [ESP + 0x1d0]        ; 00582a4a
    MOVSD ES:EDI,ESI                    ; 00582a51
    MOVSD ES:EDI,ESI                    ; 00582a52
    MOVSD ES:EDI,ESI                    ; 00582a53
    PUSH EAX                            ; 00582a54
    LEA ESI,[ESP + 0x1d8]               ; 00582a55
    LEA EDI,[ESP + 0x25c]               ; 00582a5c
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 00582a63
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x1d8]               ; 00582a68
    ADD ESP,0x4                         ; 00582a6f
    MOVSD ES:EDI,ESI                    ; 00582a72
    MOVSD ES:EDI,ESI                    ; 00582a73
    MOVSD ES:EDI,ESI                    ; 00582a74
    FLD float ptr [ESP + 0x25c]         ; 00582a75
    FSUB float ptr [EBX + 0x34]         ; 00582a7c
    SUB ESP,0x4                         ; 00582a7f
    FSTP float ptr [ESP]                ; 00582a82
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 00582a85
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x318],EAX     ; 00582a8a
    MOV EAX,dword ptr [ESP + 0x318]     ; 00582a91
    MOV dword ptr [EBX + 0x2578],EAX    ; 00582a98
    ADD ESP,0x4                         ; 00582a9e
    MOV EAX,dword ptr [EBX + 0x2578]    ; 00582aa1
    MOV dword ptr [ESP + 0x2fc],EAX     ; 00582aa7
    MOV EAX,dword ptr [EBX + 0x2598]    ; 00582aae
    PUSH dword ptr [ESP + 0x2fc]        ; 00582ab4
    MOV dword ptr [ESP + 0x2e0],EAX     ; 00582abb
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 00582ac2
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x318],EAX     ; 00582ac7
    FLD float ptr [ESP + 0x318]         ; 00582ace
    ADD ESP,0x4                         ; 00582ad5
    FLD float ptr [ESP + 0x2dc]         ; 00582ad8
    FXCH                                ; 00582adf
    FST float ptr [ESP + 0x2fc]         ; 00582ae1
    FXCH                                ; 00582ae8
    FCHS                                ; 00582aea
    FSTP float ptr [ESP + 0x2d8]        ; 00582aec
    FCOMP float ptr [ESP + 0x2d8]       ; 00582af3
    FNSTSW AX                           ; 00582afa
    SAHF                                ; 00582afc
    JNC 0x00582b7a                      ; 00582afd
        ;   XREF to: 00582b7a (CONDITIONAL_JUMP)  ; LAB_00582b7a
    MOV EAX,dword ptr [ESP + 0x2d8]     ; 00582b03
    MOV dword ptr [ESP + 0x2f0],EAX     ; 00582b0a
        ;   Label: LAB_00582b0a
    FLD float ptr [EBX + 0xc3b70]       ; 00582b11
    MOV EAX,dword ptr [ESP + 0x2f0]     ; 00582b17
    FSUB float ptr [EBP + 0x18]         ; 00582b1e
    MOV dword ptr [EBX + 0x2578],EAX    ; 00582b21
    FST float ptr [EBX + 0xc3b70]       ; 00582b27
    FLDZ                                ; 00582b2d
    FCOMPP                              ; 00582b2f
    FNSTSW AX                           ; 00582b31
    SAHF                                ; 00582b33
    JC 0x0058260e                       ; 00582b34
        ;   XREF to: 0058260e (CONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x2                            ; 00582b3a
    PUSH 0x0                            ; 00582b3c
    MOV dword ptr [EBX + 0xc3b70],0x0   ; 00582b3e
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 00582b48
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00582b4d
    LEA EDX,[EBX + 0x2b4]               ; 00582b50
    TEST EAX,EAX                        ; 00582b56
    JZ 0x00582ba5                       ; 00582b58
        ;   XREF to: 00582ba5 (CONDITIONAL_JUMP)  ; LAB_00582ba5
    CMP EAX,0x1                         ; 00582b5a
    JZ 0x00582bb7                       ; 00582b5d
        ;   XREF to: 00582bb7 (CONDITIONAL_JUMP)  ; LAB_00582bb7
    CMP EAX,0x2                         ; 00582b5f
    JNZ 0x0058260e                      ; 00582b62
        ;   XREF to: 0058260e (CONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x1                            ; 00582b68
    PUSH 0x6                            ; 00582b6a
    PUSH EDX                            ; 00582b6c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00582b6d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00582b72
    JMP 0x0058260e                      ; 00582b75
        ;   XREF to: 0058260e (UNCONDITIONAL_JUMP)  ; caseD_9
    FLD float ptr [ESP + 0x2fc]         ; 00582b7a
        ;   Label: LAB_00582b7a
    FCOMP float ptr [ESP + 0x2dc]       ; 00582b81
    FNSTSW AX                           ; 00582b88
    SAHF                                ; 00582b8a
    JBE 0x00582b99                      ; 00582b8b
        ;   XREF to: 00582b99 (CONDITIONAL_JUMP)  ; LAB_00582b99
    MOV EAX,dword ptr [ESP + 0x2dc]     ; 00582b8d
    JMP 0x00582b0a                      ; 00582b94
        ;   XREF to: 00582b0a (UNCONDITIONAL_JUMP)  ; LAB_00582b0a
    MOV EAX,dword ptr [ESP + 0x2fc]     ; 00582b99
        ;   Label: LAB_00582b99
    JMP 0x00582b0a                      ; 00582ba0
        ;   XREF to: 00582b0a (UNCONDITIONAL_JUMP)  ; LAB_00582b0a
    PUSH 0x1                            ; 00582ba5
        ;   Label: LAB_00582ba5
    PUSH 0x4                            ; 00582ba7
    PUSH EDX                            ; 00582ba9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00582baa
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00582baf
    JMP 0x0058260e                      ; 00582bb2
        ;   XREF to: 0058260e (UNCONDITIONAL_JUMP)  ; caseD_9
    PUSH EAX                            ; 00582bb7
        ;   Label: LAB_00582bb7
    PUSH 0x5                            ; 00582bb8
    PUSH EDX                            ; 00582bba
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00582bbb
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00582bc0
    JMP 0x0058260e                      ; 00582bc3
        ;   XREF to: 0058260e (UNCONDITIONAL_JUMP)  ; caseD_9
    PUSH EBX                            ; 00582bc8
        ;   Label: LAB_00582bc8
    CALL core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005836a0 ; 00582bc9
        ;   XREF to: 005836a0 (UNCONDITIONAL_CALL)  ; void core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005836a0(CVampireBoss * this_ptr)
    JMP 0x0058260b                      ; 00582bce
        ;   XREF to: 0058260b (UNCONDITIONAL_JUMP)  ; LAB_0058260b
    MOV dword ptr [EBX + 0xc3b70],0x40400000 ; 00582bd3
        ;   Label: caseD_1
    JMP 0x0058260e                      ; 00582bdd
        ;   XREF to: 0058260e (UNCONDITIONAL_JUMP)  ; caseD_9
    LEA EAX,[EBX + 0xc3b98]             ; 00582be2
        ;   Label: LAB_00582be2
    FLD float ptr [0x005fd830]          ; 00582be8 | DAT_005fd830
    PUSH EAX                            ; 00582bee
    FMUL float ptr [EBP + 0x18]         ; 00582bef
    PUSH 0x497423f0                     ; 00582bf2
    MOV EAX,dword ptr [EBX + 0xc3b84]   ; 00582bf7
    FSTP float ptr [EBX + 0x2594]       ; 00582bfd
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0xc3b88] ; 00582c03
    PUSH 0x3e4ccccd                     ; 00582c0a
    PUSH ECX                            ; 00582c0f
    PUSH EBX                            ; 00582c10
    CALL core_charactr.cpp_FUN_00428260 ; 00582c11
        ;   XREF to: 00428260 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00428260()
    MOV EAX,dword ptr [EBX + 0xc3b98]   ; 00582c16
    ADD ESP,0x14                        ; 00582c1c
    CMP EAX,0x3                         ; 00582c1f
    JA 0x005829c1                       ; 00582c22
        ;   XREF to: 005829c1 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x5818d4]  ; 00582c28 | caseD_3 | caseD_2 | switchdataD_005818d4
        ;   Label: switchD
    PUSH 0x5eda3e                       ; 00582c2f | = "flyout"
        ;   Label: caseD_2
    MOV EDI,dword ptr [0x006141f0]      ; 00582c34 | DAT_006141f0
    PUSH EDI                            ; 00582c3a
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 00582c3b
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00582c40
    TEST EAX,EAX                        ; 00582c43
    JZ 0x0058260e                       ; 00582c45
        ;   XREF to: 0058260e (CONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x1                            ; 00582c4b
    PUSH 0x0                            ; 00582c4d
    PUSH ESI                            ; 00582c4f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00582c50
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00582c55
    JMP 0x0058260e                      ; 00582c58
        ;   XREF to: 0058260e (UNCONDITIONAL_JUMP)  ; caseD_9
    FLD float ptr [EBX + 0x25a8]        ; 00582c5d
        ;   Label: LAB_00582c5d
    FDIV float ptr [EBX + 0x25ac]       ; 00582c63
    PUSH 0x3f000000                     ; 00582c69
    SUB ESP,0x4                         ; 00582c6e
    ADD EBX,0x25b4                      ; 00582c71
    FSTP float ptr [ESP]                ; 00582c77
    PUSH EBX                            ; 00582c7a
    PUSH EAX                            ; 00582c7b | g_CGameInstance
    CALL core_game.cpp_CGame_setStatusDisplay_FUN_004bb8d0 ; 00582c7c
        ;   XREF to: 004bb8d0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setStatusDisplay_FUN_004bb8d0(CGame * this_ptr, char * name, float value, float duration)
    ADD ESP,0x10                        ; 00582c81
    MOV ESP,EBP                         ; 00582c84
    POP EBP                             ; 00582c86
    POP EDI                             ; 00582c87
    POP ESI                             ; 00582c88
    POP EBX                             ; 00582c89
    RET                                 ; 00582c8a

