; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_stranger_cpp_CStranger_tryPickupObject_FUN_0053b630(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0053fc60 at 0053fe06
;
; Referenced Globals:
;   void* switchdataD_0053b60c = 0053b971
;   void* switchdataD_0053b61c = 0053bbc2
;   TerminatedCString s_Picking_up_heavy_s_shelf_005959c3
;   string s_Picking_up_heavy_%s_crate_005959de
;   string s_%s_out_of_reach_-_canceling_pick_005959f9
;   string s_Picking_up_%s_waist_level_00595a1d
;   string s_Picking_up_%s_off_ground_00595a38
;   string s_Rummaging_%s_00595a52
;   string s_..\\core\\stranger.cpp_00595a60
;   string s_Hell_froze_-_invalid_pickUpType:_00595a75
;   double DOUBLE_00595a9f = 0.990000000000000
;   float FLOAT_00595aa7 = 0.5
;   double DOUBLE_00595aaf = 2.5
;   double DOUBLE_00595ab7 = 2
;   double DOUBLE_00595abf = 20
;   ... and 10 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053b630
        ;   Label: core_stranger.cpp_CStranger_tryPickupObject_FUN_0053b630
    PUSH ESI                            ; 0053b631
    PUSH EDI                            ; 0053b632
    PUSH EBP                            ; 0053b633
    MOV EBP,ESP                         ; 0053b634
    SUB ESP,0x160                       ; 0053b636
    AND ESP,0xfffffff8                  ; 0053b63c
    MOV ESI,dword ptr [EBP + 0x14]      ; 0053b63f
    FLD float ptr [ESI + 0x1faa8]       ; 0053b642
    FLDZ                                ; 0053b648
    FCOMPP                              ; 0053b64a
    FNSTSW AX                           ; 0053b64c
    SAHF                                ; 0053b64e
    JC 0x0053b65b                       ; 0053b64f
        ;   XREF to: 0053b65b (CONDITIONAL_JUMP)  ; LAB_0053b65b
    MOV EDX,dword ptr [ESI + 0x1fa08]   ; 0053b651
    TEST EDX,EDX                        ; 0053b657
    JZ 0x0053b664                       ; 0053b659
        ;   XREF to: 0053b664 (CONDITIONAL_JUMP)  ; LAB_0053b664
    XOR EAX,EAX                         ; 0053b65b
        ;   Label: LAB_0053b65b
    MOV ESP,EBP                         ; 0053b65d
    POP EBP                             ; 0053b65f
    POP EDI                             ; 0053b660
    POP ESI                             ; 0053b661
    POP EBX                             ; 0053b662
    RET                                 ; 0053b663
    PUSH EDX                            ; 0053b664
        ;   Label: LAB_0053b664
    PUSH ESI                            ; 0053b665
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0 ; 0053b666
        ;   XREF to: 0042a9d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0()
    MOV dword ptr [ESP + 0x164],EAX     ; 0053b66b
    FLD float ptr [ESP + 0x164]         ; 0053b672
    ADD ESP,0x8                         ; 0053b679
    FCOMP double ptr [0x00595a9f]       ; 0053b67c | DOUBLE_00595a9f
    FNSTSW AX                           ; 0053b682
    SAHF                                ; 0053b684
    JC 0x0053b65b                       ; 0053b685
        ;   XREF to: 0053b65b (CONDITIONAL_JUMP)  ; LAB_0053b65b
    PUSH 0x0                            ; 0053b687
    LEA EAX,[ESI + 0x150]               ; 0053b689
    PUSH EAX                            ; 0053b68f
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 0053b690
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0()
    MOV dword ptr [ESP + 0x164],EAX     ; 0053b695
    FLD float ptr [ESP + 0x164]         ; 0053b69c
    FLD1                                ; 0053b6a3
    ADD ESP,0x8                         ; 0053b6a5
    FCOMPP                              ; 0053b6a8
    FNSTSW AX                           ; 0053b6aa
    SAHF                                ; 0053b6ac
    JA 0x0053b65b                       ; 0053b6ad
        ;   XREF to: 0053b65b (CONDITIONAL_JUMP)  ; LAB_0053b65b
    MOV ECX,dword ptr [ESI + 0x24ac]    ; 0053b6af
    TEST ECX,ECX                        ; 0053b6b5
    JNZ 0x0053b65b                      ; 0053b6b7
        ;   XREF to: 0053b65b (CONDITIONAL_JUMP)  ; LAB_0053b65b
    CMP dword ptr [ESI + 0x24f0],0x0    ; 0053b6b9
    JNZ 0x0053b65b                      ; 0053b6c0
        ;   XREF to: 0053b65b (CONDITIONAL_JUMP)  ; LAB_0053b65b
    MOV EDI,0x40800000                  ; 0053b6c2
    MOV dword ptr [ESP + 0x154],ECX     ; 0053b6c7
    LEA EAX,[ESI + 0x20]                ; 0053b6ce
    MOV dword ptr [ESP + 0x158],ECX     ; 0053b6d1
    MOV dword ptr [ESP + 0x148],EDI     ; 0053b6d8
    MOV dword ptr [ESP + 0x14c],EAX     ; 0053b6df
    MOV EAX,[0x005be368]                ; 0053b6e6 | DAT_005be368
        ;   Label: LAB_0053b6e6
    MOV EDX,dword ptr [ESP + 0x154]     ; 0053b6eb
    CMP EDX,dword ptr [EAX + 0x14cd6c]  ; 0053b6f2 | DAT_01fa3ff0
    JGE 0x0053baa5                      ; 0053b6f8
        ;   XREF to: 0053baa5 (CONDITIONAL_JUMP)  ; LAB_0053baa5
    ADD EAX,dword ptr [ESP + 0x158]     ; 0053b6fe
    MOV EBX,dword ptr [EAX + 0x14cd70]  ; 0053b705 | DAT_01fa3ff4
    PUSH EBX                            ; 0053b70b
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0053b70c
    CALL dword ptr [EAX + 0x8c]         ; 0053b712
    ADD ESP,0x4                         ; 0053b718
    TEST EAX,EAX                        ; 0053b71b
    JZ 0x0053ba7f                       ; 0053b71d
        ;   XREF to: 0053ba7f (CONDITIONAL_JUMP)  ; LAB_0053ba7f
    MOV EBX,dword ptr [ESP + 0x154]     ; 0053b723
        ;   Label: default
    MOV ECX,dword ptr [ESP + 0x158]     ; 0053b72a
    INC EBX                             ; 0053b731
    ADD ECX,0x4                         ; 0053b732
    MOV dword ptr [ESP + 0x154],EBX     ; 0053b735
    MOV dword ptr [ESP + 0x158],ECX     ; 0053b73c
    JMP 0x0053b6e6                      ; 0053b743
        ;   XREF to: 0053b6e6 (UNCONDITIONAL_JUMP)  ; LAB_0053b6e6
    MOV EDI,dword ptr [ESI + 0x24f0]    ; 0053b745
        ;   Label: caseD_2
    TEST EDI,EDI                        ; 0053b74b
    JNZ 0x0053b723                      ; 0053b74d
        ;   XREF to: 0053b723 (CONDITIONAL_JUMP)  ; default
    MOV EDX,0x40400000                  ; 0053b74f
    MOV ECX,0x40000000                  ; 0053b754
    LEA EAX,[ESP + 0x64]                ; 0053b759
    MOV dword ptr [ESP + 0x64],EDI      ; 0053b75d
    MOV dword ptr [ESP + 0x68],EDX      ; 0053b761
    LEA EDX,[ESP + 0x34]                ; 0053b765
    MOV dword ptr [ESP + 0x6c],ECX      ; 0053b769
    CMP EDX,EAX                         ; 0053b76d
    JZ 0x0053b782                       ; 0053b76f
        ;   XREF to: 0053b782 (CONDITIONAL_JUMP)  ; LAB_0053b782
    MOV EAX,0x40400000                  ; 0053b771
    MOV dword ptr [ESP + 0x3c],ECX      ; 0053b776
    MOV dword ptr [ESP + 0x34],EDI      ; 0053b77a
    MOV dword ptr [ESP + 0x38],EAX      ; 0053b77e
    LEA EAX,[ESP + 0x34]                ; 0053b782
        ;   Label: LAB_0053b782
    PUSH EAX                            ; 0053b786
    LEA EAX,[ESP + 0xe0]                ; 0053b787
    PUSH EAX                            ; 0053b78e
    PUSH ESI                            ; 0053b78f
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0053b790
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 0053b795
    LEA EDX,[ESP + 0x1c]                ; 0053b798
    PUSH EDX                            ; 0053b79c
    MOV EDI,EAX                         ; 0053b79d
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0053b79f
    PUSH EBX                            ; 0053b7a5
    CALL dword ptr [EAX + 0x14]         ; 0053b7a6
    LEA EDX,[EAX + 0xc]                 ; 0053b7a9
    FLD float ptr [EAX]                 ; 0053b7ac
    FADD float ptr [EDX]                ; 0053b7ae
    ADD ESP,0x8                         ; 0053b7b0
    FST float ptr [ESP + 0xa0]          ; 0053b7b3
    FLD float ptr [EAX + 0x4]           ; 0053b7ba
    FADD float ptr [EDX + 0x4]          ; 0053b7bd
    FXCH                                ; 0053b7c0
    FLD float ptr [0x00595aa7]          ; 0053b7c2 | FLOAT_00595aa7
    FXCH                                ; 0053b7c8
    FMUL ST1                            ; 0053b7ca
    FXCH ST2                            ; 0053b7cc
    FST float ptr [ESP + 0xa4]          ; 0053b7ce
    FMUL ST1                            ; 0053b7d5
    FLD float ptr [EAX + 0x8]           ; 0053b7d7
    FADD float ptr [EDX + 0x8]          ; 0053b7da
    LEA EAX,[ESP + 0x118]               ; 0053b7dd
    FST float ptr [ESP + 0xa8]          ; 0053b7e4
    FMULP ST2                           ; 0053b7eb
    PUSH EAX                            ; 0053b7ed
    LEA EAX,[ESP + 0x44]                ; 0053b7ee
    FXCH ST2                            ; 0053b7f2
    FSTP float ptr [ESP + 0x11c]        ; 0053b7f4
    PUSH EAX                            ; 0053b7fb
    FXCH                                ; 0053b7fc
    FSTP float ptr [ESP + 0x124]        ; 0053b7fe
    PUSH EBX                            ; 0053b805
    FSTP float ptr [ESP + 0x12c]        ; 0053b806
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0053b80d
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    FLD float ptr [EAX]                 ; 0053b812
    FSUB float ptr [EDI]                ; 0053b814
    ADD ESP,0xc                         ; 0053b816
    FSTP float ptr [ESP + 0x70]         ; 0053b819
    FLD float ptr [EAX + 0x4]           ; 0053b81d
    FSUB float ptr [EDI + 0x4]          ; 0053b820
    FST float ptr [ESP + 0x74]          ; 0053b823
    FLD float ptr [EAX + 0x8]           ; 0053b827
    FXCH                                ; 0053b82a
    FABS                                ; 0053b82c
    FXCH                                ; 0053b82e
    FSUB float ptr [EDI + 0x8]          ; 0053b830
    FSTP float ptr [ESP + 0x78]         ; 0053b833
    FCOMP double ptr [0x00595ac7]       ; 0053b837 | DOUBLE_00595ac7
    FNSTSW AX                           ; 0053b83d
    SAHF                                ; 0053b83f
    JA 0x0053b723                       ; 0053b840
        ;   XREF to: 0053b723 (CONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0x78]          ; 0053b846
    FMUL ST0                            ; 0053b84a
    FLD float ptr [ESP + 0x70]          ; 0053b84c
    FMUL ST0                            ; 0053b850
    FADDP                               ; 0053b852
    FST float ptr [ESP + 0x150]         ; 0053b854
    FCOMP float ptr [ESP + 0x148]       ; 0053b85b
    FNSTSW AX                           ; 0053b862
    SAHF                                ; 0053b864
    JA 0x0053b723                       ; 0053b865
        ;   XREF to: 0053b723 (CONDITIONAL_JUMP)  ; default
    MOV EDX,dword ptr [EBP + 0x18]      ; 0053b86b
    PUSH EDX                            ; 0053b86e
    PUSH EBX                            ; 0053b86f
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 0053b870
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 0053b875
    TEST EAX,EAX                        ; 0053b878
    JZ 0x0053b723                       ; 0053b87a
        ;   XREF to: 0053b723 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [ESP + 0x150]     ; 0053b880
    MOV dword ptr [ESP + 0x148],EAX     ; 0053b887
    MOV EAX,dword ptr [ESP + 0x144]     ; 0053b88e
    MOV dword ptr [ESI + 0x1fa08],EBX   ; 0053b895
    MOV dword ptr [ESP + 0x140],EAX     ; 0053b89b
    JMP 0x0053b723                      ; 0053b8a2
        ;   XREF to: 0053b723 (UNCONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI + 0x24f0],0x0    ; 0053b8a7
        ;   Label: caseD_3
    JNZ 0x0053b723                      ; 0053b8ae
        ;   XREF to: 0053b723 (CONDITIONAL_JUMP)  ; default
    PUSH ESI                            ; 0053b8b4
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0053b8b5
    PUSH EBX                            ; 0053b8bb
    CALL dword ptr [EAX + 0x7c]         ; 0053b8bc
    ADD ESP,0x8                         ; 0053b8bf
    CMP EAX,0x4                         ; 0053b8c2
    SETZ AL                             ; 0053b8c5
    AND EAX,0xff                        ; 0053b8c8
    JZ 0x0053b92a                       ; 0053b8cd
        ;   XREF to: 0053b92a (CONDITIONAL_JUMP)  ; LAB_0053b92a
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0053b8cf
    PUSH EAX                            ; 0053b8d6
    LEA EAX,[ESP + 0xd4]                ; 0053b8d7
    PUSH EAX                            ; 0053b8de
    PUSH EBX                            ; 0053b8df
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0053b8e0
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    ADD ESP,0xc                         ; 0053b8e5
    FLD float ptr [ESP + 0xd0]          ; 0053b8e8
    FABS                                ; 0053b8ef
    FLD1                                ; 0053b8f1
    FCOMPP                              ; 0053b8f3
    FNSTSW AX                           ; 0053b8f5
    SAHF                                ; 0053b8f7
    JC 0x0053b723                       ; 0053b8f8
        ;   XREF to: 0053b723 (CONDITIONAL_JUMP)  ; default
    LEA EAX,[ESP + 0xd0]                ; 0053b8fe
    PUSH EAX                            ; 0053b905
    LEA EAX,[ESP + 0xec]                ; 0053b906
    PUSH EAX                            ; 0053b90d
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 0053b90e
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    FLD float ptr [EAX + 0x4]           ; 0053b913
    FABS                                ; 0053b916
    ADD ESP,0x8                         ; 0053b918
    FCOMP double ptr [0x00595abf]       ; 0053b91b | DOUBLE_00595abf
    FNSTSW AX                           ; 0053b921
    SAHF                                ; 0053b923
    JA 0x0053b723                       ; 0053b924
        ;   XREF to: 0053b723 (CONDITIONAL_JUMP)  ; default
    MOV ECX,0x40400000                  ; 0053b92a
        ;   Label: LAB_0053b92a
    MOV EDI,0x40000000                  ; 0053b92f
    XOR EDX,EDX                         ; 0053b934
    LEA EAX,[ESP + 0x124]               ; 0053b936
    MOV dword ptr [ESP + 0x124],EDX     ; 0053b93d
    MOV dword ptr [ESP + 0x128],ECX     ; 0053b944
    LEA EDX,[ESP + 0x34]                ; 0053b94b
    MOV dword ptr [ESP + 0x12c],EDI     ; 0053b94f
    CMP EDX,EAX                         ; 0053b956
    JZ 0x0053b782                       ; 0053b958
        ;   XREF to: 0053b782 (CONDITIONAL_JUMP)  ; LAB_0053b782
    MOV dword ptr [ESP + 0x38],ECX      ; 0053b95e
    XOR EAX,EAX                         ; 0053b962
    MOV dword ptr [ESP + 0x3c],EDI      ; 0053b964
    MOV dword ptr [ESP + 0x34],EAX      ; 0053b968
    JMP 0x0053b782                      ; 0053b96c
        ;   XREF to: 0053b782 (UNCONDITIONAL_JUMP)  ; LAB_0053b782
    CMP dword ptr [ESI + 0x24ac],0x0    ; 0053b971
        ;   Label: caseD_1
    JNZ 0x0053b723                      ; 0053b978
        ;   XREF to: 0053b723 (CONDITIONAL_JUMP)  ; default
    MOV EDI,dword ptr [ESP + 0x14c]     ; 0053b97e
    PUSH EDI                            ; 0053b985
    LEA EAX,[ESP + 0xf8]                ; 0053b986
    PUSH EAX                            ; 0053b98d
    PUSH EBX                            ; 0053b98e
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0053b98f
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    ADD ESP,0xc                         ; 0053b994
    FLD float ptr [ESP + 0xf8]          ; 0053b997
    FMUL ST0                            ; 0053b99e
    FLD float ptr [ESP + 0xf4]          ; 0053b9a0
    FMUL ST0                            ; 0053b9a7
    FADDP                               ; 0053b9a9
    FLD float ptr [ESP + 0xfc]          ; 0053b9ab
    FMUL ST0                            ; 0053b9b2
    FADDP                               ; 0053b9b4
    FSQRT                               ; 0053b9b6
    FST float ptr [ESP]                 ; 0053b9b8
    FLDZ                                ; 0053b9bb
    FCOMPP                              ; 0053b9bd
    FNSTSW AX                           ; 0053b9bf
    SAHF                                ; 0053b9c1
    JNC 0x0053ba66                      ; 0053b9c2
        ;   XREF to: 0053ba66 (CONDITIONAL_JUMP)  ; LAB_0053ba66
    FLD1                                ; 0053b9c8
    FLD float ptr [ESP + 0xf4]          ; 0053b9ca
    FXCH                                ; 0053b9d1
    FDIV float ptr [ESP]                ; 0053b9d3
    FXCH                                ; 0053b9d6
    FMUL ST1                            ; 0053b9d8
    FLD float ptr [ESP + 0xf8]          ; 0053b9da
    FMUL ST2                            ; 0053b9e1
    FLD float ptr [ESP + 0xfc]          ; 0053b9e3
    FMULP ST3                           ; 0053b9ea
    FXCH                                ; 0053b9ec
    FSTP float ptr [ESP + 0xf4]         ; 0053b9ee
    FSTP float ptr [ESP + 0xf8]         ; 0053b9f5
    FSTP float ptr [ESP + 0xfc]         ; 0053b9fc
    FLD float ptr [ESP + 0xfc]          ; 0053ba03
        ;   Label: LAB_0053ba03
    FLDZ                                ; 0053ba0a
    FCOMPP                              ; 0053ba0c
    FNSTSW AX                           ; 0053ba0e
    SAHF                                ; 0053ba10
    JC 0x0053b723                       ; 0053ba11
        ;   XREF to: 0053b723 (CONDITIONAL_JUMP)  ; default
    MOV EAX,0x40400000                  ; 0053ba17
    MOV EDX,0x40000000                  ; 0053ba1c
    XOR EDI,EDI                         ; 0053ba21
    MOV dword ptr [ESP + 0xb0],EAX      ; 0053ba23
    MOV dword ptr [ESP + 0xb4],EDX      ; 0053ba2a
    LEA EDX,[ESP + 0xac]                ; 0053ba31
    LEA EAX,[ESP + 0x34]                ; 0053ba38
    MOV dword ptr [ESP + 0xac],EDI      ; 0053ba3c
    CMP EAX,EDX                         ; 0053ba43
    JZ 0x0053b782                       ; 0053ba45
        ;   XREF to: 0053b782 (CONDITIONAL_JUMP)  ; LAB_0053b782
    MOV EAX,0x40000000                  ; 0053ba4b
    MOV dword ptr [ESP + 0x34],EDI      ; 0053ba50
    MOV EDI,0x40400000                  ; 0053ba54
    MOV dword ptr [ESP + 0x3c],EAX      ; 0053ba59
    MOV dword ptr [ESP + 0x38],EDI      ; 0053ba5d
    JMP 0x0053b782                      ; 0053ba61
        ;   XREF to: 0053b782 (UNCONDITIONAL_JUMP)  ; LAB_0053b782
    XOR EAX,EAX                         ; 0053ba66
        ;   Label: LAB_0053ba66
    MOV dword ptr [ESP + 0xf8],EAX      ; 0053ba68
    MOV dword ptr [ESP + 0xf4],EAX      ; 0053ba6f
    MOV dword ptr [ESP + 0xfc],EAX      ; 0053ba76
    JMP 0x0053ba03                      ; 0053ba7d
        ;   XREF to: 0053ba03 (UNCONDITIONAL_JUMP)  ; LAB_0053ba03
    PUSH ESI                            ; 0053ba7f
        ;   Label: LAB_0053ba7f
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0053ba80
    PUSH EBX                            ; 0053ba86
    CALL dword ptr [EAX + 0x7c]         ; 0053ba87
    ADD ESP,0x8                         ; 0053ba8a
    MOV dword ptr [ESP + 0x144],EAX     ; 0053ba8d
    DEC EAX                             ; 0053ba94
    CMP EAX,0x3                         ; 0053ba95
    JA 0x0053b723                       ; 0053ba98
        ;   XREF to: 0053b723 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x53b60c]  ; 0053ba9e | caseD_1 | caseD_2 | caseD_4
        ;   Label: switchD
    MOV EBX,dword ptr [ESI + 0x1fa08]   ; 0053baa5
        ;   Label: LAB_0053baa5
    TEST EBX,EBX                        ; 0053baab
    JZ 0x0053b65b                       ; 0053baad
        ;   XREF to: 0053b65b (CONDITIONAL_JUMP)  ; LAB_0053b65b
    LEA EDX,[ESP + 0x4]                 ; 0053bab3
    PUSH EDX                            ; 0053bab7
    MOV EAX,EBX                         ; 0053bab8
    MOV EBX,dword ptr [EBX + 0x14c]     ; 0053baba
    PUSH EAX                            ; 0053bac0
    CALL dword ptr [EBX + 0x14]         ; 0053bac1
    ADD ESP,0x8                         ; 0053bac4
    LEA EDX,[ESI + 0x1fb0c]             ; 0053bac7
    MOV EBX,EAX                         ; 0053bacd
    MOV EDI,EDX                         ; 0053bacf
    CMP EDX,EAX                         ; 0053bad1
    JZ 0x0053bae5                       ; 0053bad3
        ;   XREF to: 0053bae5 (CONDITIONAL_JUMP)  ; LAB_0053bae5
    MOV ECX,dword ptr [EAX]             ; 0053bad5
    MOV dword ptr [EDX],ECX             ; 0053bad7
    MOV ECX,dword ptr [EAX + 0x4]       ; 0053bad9
    MOV dword ptr [EDX + 0x4],ECX       ; 0053badc
    MOV ECX,dword ptr [EAX + 0x8]       ; 0053badf
    MOV dword ptr [EDX + 0x8],ECX       ; 0053bae2
    LEA EAX,[EBX + 0xc]                 ; 0053bae5
        ;   Label: LAB_0053bae5
    LEA EDX,[EDI + 0xc]                 ; 0053bae8
    CMP EDX,EAX                         ; 0053baeb
    JZ 0x0053baff                       ; 0053baed
        ;   XREF to: 0053baff (CONDITIONAL_JUMP)  ; LAB_0053baff
    MOV ECX,dword ptr [EAX]             ; 0053baef
    MOV dword ptr [EDX],ECX             ; 0053baf1
    MOV ECX,dword ptr [EAX + 0x4]       ; 0053baf3
    MOV dword ptr [EDX + 0x4],ECX       ; 0053baf6
    MOV ECX,dword ptr [EAX + 0x8]       ; 0053baf9
    MOV dword ptr [EDX + 0x8],ECX       ; 0053bafc
    LEA EDX,[ESI + 0x1fb0c]             ; 0053baff
        ;   Label: LAB_0053baff
    LEA EAX,[ESI + 0x1fb18]             ; 0053bb05
    FLD float ptr [EDX]                 ; 0053bb0b
    FADD float ptr [EAX]                ; 0053bb0d
    FST float ptr [ESP + 0x100]         ; 0053bb0f
    FLD float ptr [EDX + 0x4]           ; 0053bb16
    FADD float ptr [EAX + 0x4]          ; 0053bb19
    FXCH                                ; 0053bb1c
    FLD float ptr [0x00595aa7]          ; 0053bb1e | FLOAT_00595aa7
    FXCH                                ; 0053bb24
    FMUL ST1                            ; 0053bb26
    FXCH ST2                            ; 0053bb28
    FST float ptr [ESP + 0x104]         ; 0053bb2a
    FLD float ptr [EDX + 0x8]           ; 0053bb31
    FADD float ptr [EAX + 0x8]          ; 0053bb34
    FXCH                                ; 0053bb37
    FMUL ST2                            ; 0053bb39
    FXCH                                ; 0053bb3b
    FST float ptr [ESP + 0x108]         ; 0053bb3d
    FMULP ST2                           ; 0053bb44
    LEA EAX,[ESP + 0x130]               ; 0053bb46
    FXCH ST2                            ; 0053bb4d
    FSTP float ptr [ESP + 0x130]        ; 0053bb4f
    PUSH EAX                            ; 0053bb56
    LEA EAX,[ESP + 0x8c]                ; 0053bb57
    FXCH                                ; 0053bb5e
    FSTP float ptr [ESP + 0x138]        ; 0053bb60
    PUSH EAX                            ; 0053bb67
    FSTP float ptr [ESP + 0x140]        ; 0053bb68
    MOV EDI,dword ptr [ESI + 0x1fa08]   ; 0053bb6f
    PUSH EDI                            ; 0053bb75
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0053bb76
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 0053bb7b
    PUSH EAX                            ; 0053bb7e
    LEA EAX,[ESP + 0x98]                ; 0053bb7f
    PUSH EAX                            ; 0053bb86
    PUSH ESI                            ; 0053bb87
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0053bb88
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    LEA EDX,[ESI + 0x1fb00]             ; 0053bb8d
    ADD ESP,0xc                         ; 0053bb93
    CMP EDX,EAX                         ; 0053bb96
    JZ 0x0053bbaa                       ; 0053bb98
        ;   XREF to: 0053bbaa (CONDITIONAL_JUMP)  ; LAB_0053bbaa
    MOV ECX,dword ptr [EAX]             ; 0053bb9a
    MOV dword ptr [EDX],ECX             ; 0053bb9c
    MOV ECX,dword ptr [EAX + 0x4]       ; 0053bb9e
    MOV dword ptr [EDX + 0x4],ECX       ; 0053bba1
    MOV ECX,dword ptr [EAX + 0x8]       ; 0053bba4
    MOV dword ptr [EDX + 0x8],ECX       ; 0053bba7
    MOV EAX,dword ptr [ESP + 0x140]     ; 0053bbaa
        ;   Label: LAB_0053bbaa
    DEC EAX                             ; 0053bbb1
    CMP EAX,0x3                         ; 0053bbb2
    JA 0x0053be7b                       ; 0053bbb5
        ;   XREF to: 0053be7b (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x53b61c]  ; 0053bbbb | caseD_1 | caseD_4 | switchdataD_0053b61c
        ;   Label: switchD
    PUSH 0x1                            ; 0053bbc2
        ;   Label: caseD_1
    PUSH 0x1b                           ; 0053bbc4
    LEA EAX,[ESI + 0x150]               ; 0053bbc6
    PUSH EAX                            ; 0053bbcc
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0053bbcd
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0053bbd2
    MOV EDX,dword ptr [ESI + 0x1fa08]   ; 0053bbd5
    PUSH EDX                            ; 0053bbdb
    PUSH 0x595a52                       ; 0053bbdc | = "Rummaging %s\n"
    MOV ECX,dword ptr [0x005ad350]      ; 0053bbe1 | PTR_DAT_005ad350
        ;   Label: LAB_0053bbe1
    PUSH ECX                            ; 0053bbe7 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0053bbe8
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
        ;   Label: LAB_0053bbe8
    ADD ESP,0xc                         ; 0053bbed
    MOV dword ptr [ESI + 0x1faa8],0x40800000 ; 0053bbf0
        ;   Label: LAB_0053bbf0
    MOV EAX,0x1                         ; 0053bbfa
    MOV dword ptr [ESI + 0x1faa0],0x4   ; 0053bbff
    MOV ESP,EBP                         ; 0053bc09
    POP EBP                             ; 0053bc0b
    POP EDI                             ; 0053bc0c
    POP ESI                             ; 0053bc0d
    POP EBX                             ; 0053bc0e
    RET                                 ; 0053bc0f
    MOV EAX,dword ptr [ESI + 0x1fa08]   ; 0053bc10
        ;   Label: caseD_2
    TEST EAX,EAX                        ; 0053bc16
    JNZ 0x0053bd49                      ; 0053bc18
        ;   XREF to: 0053bd49 (CONDITIONAL_JUMP)  ; LAB_0053bd49
    FLD float ptr [ESI + 0x1fb04]       ; 0053bc1e
        ;   Label: LAB_0053bc1e
    LEA EBX,[ESI + 0x150]               ; 0053bc24
    FCOMP double ptr [0x00595ab7]       ; 0053bc2a | DOUBLE_00595ab7
    FNSTSW AX                           ; 0053bc30
    SAHF                                ; 0053bc32
    JBE 0x0053be56                      ; 0053bc33
        ;   XREF to: 0053be56 (CONDITIONAL_JUMP)  ; LAB_0053be56
    MOV EAX,[0x02dc9f88]                ; 0053bc39 | DAT_02dc9f88
    PUSH EAX                            ; 0053bc3e
    LEA EAX,[ESP + 0xbc]                ; 0053bc3f
    PUSH EAX                            ; 0053bc46
    PUSH EBX                            ; 0053bc47
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 0053bc48
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0()
    ADD ESP,0xc                         ; 0053bc4d
    MOV EDX,dword ptr [0x02dc9f60]      ; 0053bc50 | DAT_02dc9f60
    PUSH EDX                            ; 0053bc56
    LEA EAX,[ESP + 0xc8]                ; 0053bc57
    PUSH EAX                            ; 0053bc5e
    PUSH EBX                            ; 0053bc5f
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 0053bc60
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0()
    ADD ESP,0xc                         ; 0053bc65
    FLD float ptr [ESP + 0xb8]          ; 0053bc68
    FLD float ptr [ESP + 0xbc]          ; 0053bc6f
    FSUB float ptr [ESP + 0xc8]         ; 0053bc76
    FXCH                                ; 0053bc7d
    FSUB float ptr [ESP + 0xc4]         ; 0053bc7f
    FXCH                                ; 0053bc86
    FST float ptr [ESP + 0x110]         ; 0053bc88
    FMUL float ptr [ESP + 0x110]        ; 0053bc8f
    FXCH                                ; 0053bc96
    FST float ptr [ESP + 0x10c]         ; 0053bc98
    FMUL float ptr [ESP + 0x10c]        ; 0053bc9f
    FLD float ptr [ESP + 0xc0]          ; 0053bca6
    FSUB float ptr [ESP + 0xcc]         ; 0053bcad
    FXCH                                ; 0053bcb4
    FADDP ST2,ST0                       ; 0053bcb6
    FST float ptr [ESP + 0x114]         ; 0053bcb8
    FMUL float ptr [ESP + 0x114]        ; 0053bcbf
    FADDP                               ; 0053bcc6
    FSQRT                               ; 0053bcc8
    LEA EAX,[ESI + 0x1fb00]             ; 0053bcca
    FLD float ptr [ESP + 0xc4]          ; 0053bcd0
    FSUB float ptr [EAX]                ; 0053bcd7
    FLD float ptr [ESP + 0xc8]          ; 0053bcd9
    FXCH                                ; 0053bce0
    FSTP float ptr [ESP + 0x4c]         ; 0053bce2
    FSUB float ptr [EAX + 0x4]          ; 0053bce6
    FST float ptr [ESP + 0x50]          ; 0053bce9
    FMUL float ptr [ESP + 0x50]         ; 0053bced
    FLD float ptr [ESP + 0x4c]          ; 0053bcf1
    FMUL ST0                            ; 0053bcf5
    FLD float ptr [ESP + 0xcc]          ; 0053bcf7
    FSUB float ptr [EAX + 0x8]          ; 0053bcfe
    FXCH                                ; 0053bd01
    FADDP ST2,ST0                       ; 0053bd03
    FST float ptr [ESP + 0x54]          ; 0053bd05
    FMUL float ptr [ESP + 0x54]         ; 0053bd09
    FADDP                               ; 0053bd0d
    FSQRT                               ; 0053bd0f
    FSUBP                               ; 0053bd11
    FABS                                ; 0053bd13
    FCOMP double ptr [0x00595ab7]       ; 0053bd15 | DOUBLE_00595ab7
    FNSTSW AX                           ; 0053bd1b
    SAHF                                ; 0053bd1d
    JA 0x0053be29                       ; 0053bd1e
        ;   XREF to: 0053be29 (CONDITIONAL_JUMP)  ; LAB_0053be29
    PUSH 0x1                            ; 0053bd24
    PUSH 0x15                           ; 0053bd26
    PUSH EBX                            ; 0053bd28
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0053bd29
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0053bd2e
    MOV ECX,dword ptr [ESI + 0x1fa08]   ; 0053bd31
    PUSH ECX                            ; 0053bd37
    PUSH 0x595a1d                       ; 0053bd38 | = "Picking up %s waist level\n"
    MOV EBX,dword ptr [0x005ad350]      ; 0053bd3d | PTR_DAT_005ad350
    PUSH EBX                            ; 0053bd43 | DAT_0077ad0c
    JMP 0x0053bbe8                      ; 0053bd44
        ;   XREF to: 0053bbe8 (UNCONDITIONAL_JUMP)  ; LAB_0053bbe8
    PUSH ESI                            ; 0053bd49
        ;   Label: LAB_0053bd49
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0053bd4a
    PUSH EAX                            ; 0053bd50
    CALL dword ptr [EDX + 0x7c]         ; 0053bd51
    ADD ESP,0x8                         ; 0053bd54
    CMP EAX,0x4                         ; 0053bd57
    SETZ AL                             ; 0053bd5a
    AND EAX,0xff                        ; 0053bd5d
    JZ 0x0053bc1e                       ; 0053bd62
        ;   XREF to: 0053bc1e (CONDITIONAL_JUMP)  ; LAB_0053bc1e
    LEA EAX,[ESI + 0x20]                ; 0053bd68
    PUSH EAX                            ; 0053bd6b
    LEA EAX,[ESP + 0x80]                ; 0053bd6c
    PUSH EAX                            ; 0053bd73
    MOV EBX,dword ptr [ESI + 0x1fa08]   ; 0053bd74
    PUSH EBX                            ; 0053bd7a
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0053bd7b
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    FLD float ptr [EAX + 0x8]           ; 0053bd80
    FLDZ                                ; 0053bd83
    ADD ESP,0xc                         ; 0053bd85
    FCOMPP                              ; 0053bd88
    FNSTSW AX                           ; 0053bd8a
    SAHF                                ; 0053bd8c
    JNC 0x0053be01                      ; 0053bd8d
        ;   XREF to: 0053be01 (CONDITIONAL_JUMP)  ; LAB_0053be01
    MOV EAX,0x1                         ; 0053bd8f
    FLD float ptr [ESI + 0x1fb04]       ; 0053bd94
        ;   Label: LAB_0053bd94
    LEA EDX,[ESI + 0x150]               ; 0053bd9a
    MOV dword ptr [ESI + 0x1faf0],EAX   ; 0053bda0
    FCOMP double ptr [0x00595aaf]       ; 0053bda6 | DOUBLE_00595aaf
    FNSTSW AX                           ; 0053bdac
    SAHF                                ; 0053bdae
    JBE 0x0053be05                      ; 0053bdaf
        ;   XREF to: 0053be05 (CONDITIONAL_JUMP)  ; LAB_0053be05
    PUSH 0x1                            ; 0053bdb1
    PUSH 0x18                           ; 0053bdb3
    PUSH EDX                            ; 0053bdb5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0053bdb6
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    MOV EAX,dword ptr [ESI + 0x1fa08]   ; 0053bdbb
    ADD ESP,0xc                         ; 0053bdc1
    ADD EAX,0x20                        ; 0053bdc4
    PUSH EAX                            ; 0053bdc7
    LEA EAX,[ESP + 0x5c]                ; 0053bdc8
    PUSH EAX                            ; 0053bdcc
    PUSH ESI                            ; 0053bdcd
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0053bdce
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    LEA EDX,[ESI + 0x1fb00]             ; 0053bdd3
    ADD ESP,0xc                         ; 0053bdd9
    CMP EDX,EAX                         ; 0053bddc
    JZ 0x0053bdf0                       ; 0053bdde
        ;   XREF to: 0053bdf0 (CONDITIONAL_JUMP)  ; LAB_0053bdf0
    MOV ECX,dword ptr [EAX]             ; 0053bde0
    MOV dword ptr [EDX],ECX             ; 0053bde2
    MOV ECX,dword ptr [EAX + 0x4]       ; 0053bde4
    MOV dword ptr [EDX + 0x4],ECX       ; 0053bde7
    MOV ECX,dword ptr [EAX + 0x8]       ; 0053bdea
    MOV dword ptr [EDX + 0x8],ECX       ; 0053bded
    MOV EDX,dword ptr [ESI + 0x1fa08]   ; 0053bdf0
        ;   Label: LAB_0053bdf0
    PUSH EDX                            ; 0053bdf6
    PUSH 0x5959c3                       ; 0053bdf7 | = "Picking up heavy %s shelf\n"
    JMP 0x0053bbe1                      ; 0053bdfc
        ;   XREF to: 0053bbe1 (UNCONDITIONAL_JUMP)  ; LAB_0053bbe1
    XOR EAX,EAX                         ; 0053be01
        ;   Label: LAB_0053be01
    JMP 0x0053bd94                      ; 0053be03
        ;   XREF to: 0053bd94 (UNCONDITIONAL_JUMP)  ; LAB_0053bd94
    PUSH 0x1                            ; 0053be05
        ;   Label: LAB_0053be05
    PUSH 0x17                           ; 0053be07
    PUSH EDX                            ; 0053be09
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0053be0a
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0053be0f
    MOV EDI,dword ptr [ESI + 0x1fa08]   ; 0053be12
    PUSH EDI                            ; 0053be18
    PUSH 0x5959de                       ; 0053be19 | = "Picking up heavy %s crate\n"
    MOV EAX,[0x005ad350]                ; 0053be1e | PTR_DAT_005ad350
    PUSH EAX                            ; 0053be23 | DAT_0077ad0c
    JMP 0x0053bbe8                      ; 0053be24
        ;   XREF to: 0053bbe8 (UNCONDITIONAL_JUMP)  ; LAB_0053bbe8
    MOV EDI,dword ptr [ESI + 0x1fa08]   ; 0053be29
        ;   Label: LAB_0053be29
    PUSH EDI                            ; 0053be2f
    PUSH 0x5959f9                       ; 0053be30 | = "%s out of reach - canceling pickup\n"
    MOV EAX,[0x005ad350]                ; 0053be35 | PTR_DAT_005ad350
    PUSH EAX                            ; 0053be3a | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0053be3b
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0xc                         ; 0053be40
    MOV dword ptr [ESI + 0x1fa08],0x0   ; 0053be43
    XOR EAX,EAX                         ; 0053be4d
    MOV ESP,EBP                         ; 0053be4f
    POP EBP                             ; 0053be51
    POP EDI                             ; 0053be52
    POP ESI                             ; 0053be53
    POP EBX                             ; 0053be54
    RET                                 ; 0053be55
    PUSH 0x1                            ; 0053be56
        ;   Label: LAB_0053be56
    PUSH 0x13                           ; 0053be58
    PUSH EBX                            ; 0053be5a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0053be5b
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0053be60
    MOV EBX,dword ptr [ESI + 0x1fa08]   ; 0053be63
    PUSH EBX                            ; 0053be69
    PUSH 0x595a38                       ; 0053be6a | = "Picking up %s off ground\n"
    MOV EDI,dword ptr [0x005ad350]      ; 0053be6f | PTR_DAT_005ad350
    PUSH EDI                            ; 0053be75 | DAT_0077ad0c
    JMP 0x0053bbe8                      ; 0053be76
        ;   XREF to: 0053bbe8 (UNCONDITIONAL_JUMP)  ; LAB_0053bbe8
    MOV ECX,dword ptr [ESP + 0x140]     ; 0053be7b
        ;   Label: default
    PUSH ECX                            ; 0053be82
    MOV EAX,0x595a60                    ; 0053be83 | = "..\\core\\stranger.cpp"
    MOV EDX,0xd31                       ; 0053be88
    PUSH 0x595a75                       ; 0053be8d | = "Hell froze - invalid pickUpType: %d"
    MOV [0x01cc4800],EAX                ; 0053be92 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 0053be97 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0053be9d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 0053bea2
    JMP 0x0053bbf0                      ; 0053bea5
        ;   XREF to: 0053bbf0 (UNCONDITIONAL_JUMP)  ; LAB_0053bbf0

