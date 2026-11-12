; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_004555c0(CCharacter *param_1)
;
; Local Variables:
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x13c]:4  local_13c
; undefined        Stack[-0x138]:1  local_138
; undefined        Stack[-0x128]:1  local_128
; undefined        Stack[-0x118]:1  local_118
; undefined        Stack[-0x108]:1  local_108
; undefined        Stack[-0xf8]:1  local_f8
; undefined        Stack[-0xe8]:1  local_e8
; undefined        Stack[-0xd8]:1  local_d8
; undefined        Stack[-0xc8]:1  local_c8
; undefined        Stack[-0xb8]:1  local_b8
; undefined        Stack[-0xa8]:1  local_a8
; undefined        Stack[-0x98]:1  local_98
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x78]:1  local_78
; undefined        Stack[-0x68]:1  local_68
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
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
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_doc.cpp_FUN_00453d80 at 00453e5d
;
; Referenced Globals:
;   TerminatedCString s_core_doc_cpp_005d0207
;   TerminatedCString s_CDoc_makeDrawDecision_dr_005d0217
;   undefined4 DAT_005d024f
;   undefined4 DAT_005d0257
;   undefined4 DAT_005d025f
;   undefined4 DAT_005d0267
;   undefined4 DAT_005d026f
;   undefined4 DAT_005d0273
;   undefined4 DAT_005f515c
;   undefined4 DAT_005f5160
;   undefined4 DAT_005f5164
;   undefined4 DAT_01b4d264
;   undefined4 DAT_01b4d268
;   undefined4 DAT_01b4d26c
;   undefined4 DAT_01b4d28c
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
;   core_doc.cpp_FUN_004562a0
;   core_main.c_FUN_004e4500
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10
;   core_motion.cpp_FUN_005035c0
;   core_motion.cpp_FUN_005038a0
;   core_motion.cpp_FUN_00503e60
;   core_motion.cpp_FUN_00503f50
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_FUN_00545a60
;   core_xform.cpp_quaternionFromAngleX_FUN_00593fa0
;   core_xform.cpp_quaternionFromAngleY_FUN_00593fe0
;   core_xform.cpp_slerpQuaternion_FUN_00593df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004555c0
        ;   Label: core_doc.cpp_FUN_004555c0
    PUSH ESI                            ; 004555c1
    PUSH EDI                            ; 004555c2
    PUSH EBP                            ; 004555c3
    MOV EBP,ESP                         ; 004555c4
    SUB ESP,0x128                       ; 004555c6
    SUB EBP,0x7e                        ; 004555cc
    MOV EBX,dword ptr [EBP + 0x92]      ; 004555cf
    MOV EDX,dword ptr [EBX + 0x2d04]    ; 004555d5
    TEST EDX,EDX                        ; 004555db
    JL 0x004555e4                       ; 004555dd
        ;   XREF to: 004555e4 (CONDITIONAL_JUMP)  ; LAB_004555e4
    CMP EDX,0x10                        ; 004555df
    JL 0x00455607                       ; 004555e2
        ;   XREF to: 00455607 (CONDITIONAL_JUMP)  ; LAB_00455607
    MOV ESI,0x5d0207                    ; 004555e4 | = "..\\core\\doc.cpp"
        ;   Label: LAB_004555e4
    MOV EDI,0xbe0                       ; 004555e9
    PUSH 0x5d0217                       ; 004555ee | = "CDoc::makeDrawDecision - draw motion ..."
    MOV dword ptr [0x01d046a0],ESI      ; 004555f3 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 004555f9 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004555ff
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00455604
    MOV ESI,dword ptr [EBX + 0x2d04]    ; 00455607
        ;   Label: LAB_00455607
    MOV EAX,0x3f800000                  ; 0045560d
    SHL ESI,0x3                         ; 00455612
    MOV dword ptr [EBP + 0x72],EAX      ; 00455615
    MOV EAX,ESI                         ; 00455618
    SHL ESI,0x3                         ; 0045561a
    SUB ESI,EAX                         ; 0045561d
    CMP dword ptr [ESI + EBX*0x1 + 0x2834],0x0 ; 0045561f
    JNZ 0x00455632                      ; 00455627
        ;   XREF to: 00455632 (CONDITIONAL_JUMP)  ; LAB_00455632
    MOV EAX,dword ptr [EBX + 0x2d08]    ; 00455629
    MOV dword ptr [EBP + 0x72],EAX      ; 0045562f
    MOV ESI,dword ptr [EBX + 0x2d04]    ; 00455632
        ;   Label: LAB_00455632
    SHL ESI,0x3                         ; 00455638
    MOV EAX,ESI                         ; 0045563b
    SHL ESI,0x3                         ; 0045563d
    SUB ESI,EAX                         ; 00455640
    CMP dword ptr [ESI + EBX*0x1 + 0x2838],0x0 ; 00455642
    JNZ 0x0045565c                      ; 0045564a
        ;   XREF to: 0045565c (CONDITIONAL_JUMP)  ; LAB_0045565c
    FLD float ptr [EBX + 0x2d08]        ; 0045564c
    FLD1                                ; 00455652
    FSUBRP                              ; 00455654
    FMUL float ptr [EBP + 0x72]         ; 00455656
    FSTP float ptr [EBP + 0x72]         ; 00455659
    PUSH 0x2a                           ; 0045565c
        ;   Label: LAB_0045565c
    LEA ESI,[EBX + 0x2b4]               ; 0045565e
    PUSH ESI                            ; 00455664
    CALL core_motion.cpp_FUN_005038a0   ; 00455665
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    ADD ESP,0x8                         ; 0045566a
    PUSH 0x2b                           ; 0045566d
    PUSH ESI                            ; 0045566f
    MOV dword ptr [EBP + 0x4e],EAX      ; 00455670
    CALL core_motion.cpp_FUN_005038a0   ; 00455673
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [EBP + 0x7a],EAX      ; 00455678
    ADD ESP,0x8                         ; 0045567b
    FLD float ptr [EBP + 0x7a]          ; 0045567e
    PUSH 0x26                           ; 00455681
    FADD float ptr [EBP + 0x4e]         ; 00455683
    PUSH ESI                            ; 00455686
    FSTP float ptr [EBP + 0x4e]         ; 00455687
    CALL core_motion.cpp_FUN_005038a0   ; 0045568a
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [EBP + 0x7a],EAX      ; 0045568f
    ADD ESP,0x8                         ; 00455692
    FLD float ptr [EBP + 0x7a]          ; 00455695
    PUSH 0x24                           ; 00455698
    FADD float ptr [EBP + 0x4e]         ; 0045569a
    PUSH ESI                            ; 0045569d
    FSTP float ptr [EBP + 0x4e]         ; 0045569e
    CALL core_motion.cpp_FUN_005038a0   ; 004556a1
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [EBP + 0x7a],EAX      ; 004556a6
    FLD float ptr [EBP + 0x7a]          ; 004556a9
    FADD float ptr [EBP + 0x4e]         ; 004556ac
    FLD1                                ; 004556af
    FSUBRP                              ; 004556b1
    FLD float ptr [EBP + 0x72]          ; 004556b3
    FXCH                                ; 004556b6
    FMUL ST1                            ; 004556b8
    FLDZ                                ; 004556ba
    ADD ESP,0x8                         ; 004556bc
    FXCH                                ; 004556bf
    FSTP ST2                            ; 004556c1
    FXCH                                ; 004556c3
    FSTP float ptr [EBP + 0x72]         ; 004556c5
    FCOMP float ptr [EBP + 0x72]        ; 004556c8
    FNSTSW AX                           ; 004556cb
    SAHF                                ; 004556cd
    JBE 0x004556d5                      ; 004556ce
        ;   XREF to: 004556d5 (CONDITIONAL_JUMP)  ; LAB_004556d5
    XOR ESI,ESI                         ; 004556d0
    MOV dword ptr [EBP + 0x72],ESI      ; 004556d2
    CMP dword ptr [EBX + 0x2d04],0x9    ; 004556d5
        ;   Label: LAB_004556d5
    JNZ 0x00455742                      ; 004556dc
        ;   XREF to: 00455742 (CONDITIONAL_JUMP)  ; LAB_00455742
    LEA ESI,[EBX + 0x2b4]               ; 004556de
    PUSH ESI                            ; 004556e4
    CALL core_motion.cpp_FUN_00503e60   ; 004556e5
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x7a],EAX      ; 004556ea
    ADD ESP,0x4                         ; 004556ed
    FLD float ptr [EBP + 0x7a]          ; 004556f0
    MOV EAX,0x3f800000                  ; 004556f3
    PUSH ESI                            ; 004556f8
    FSTP float ptr [EBP + 0x5e]         ; 004556f9
    MOV dword ptr [EBP + 0x6a],EAX      ; 004556fc
    CALL core_motion.cpp_FUN_005035c0   ; 004556ff
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV ESI,dword ptr [EAX + 0x24]      ; 00455704
    ADD ESP,0x4                         ; 00455707
    CMP ESI,0x17                        ; 0045570a
    JNZ 0x00455bef                      ; 0045570d
        ;   XREF to: 00455bef (CONDITIONAL_JUMP)  ; LAB_00455bef
    FLD float ptr [EBP + 0x5e]          ; 00455713
        ;   Label: LAB_00455713
    FADD double ptr [0x005d025f]        ; 00455716 | DAT_005d025f
    FMUL double ptr [0x005d0257]        ; 0045571c | DAT_005d0257
        ;   Label: LAB_0045571c
    FSTP float ptr [EBP + 0x6a]         ; 00455722
    CMP dword ptr [EBP + 0x6a],0x3f800000 ; 00455725
        ;   Label: LAB_00455725
    JLE 0x00455c15                      ; 0045572c
        ;   XREF to: 00455c15 (CONDITIONAL_JUMP)  ; LAB_00455c15
    MOV dword ptr [EBP + 0x6a],0x3f800000 ; 00455732
    FLD float ptr [EBP + 0x72]          ; 00455739
        ;   Label: LAB_00455739
    FMUL float ptr [EBP + 0x6a]         ; 0045573c
    FSTP float ptr [EBP + 0x72]         ; 0045573f
    FLD float ptr [EBP + 0x72]          ; 00455742
        ;   Label: LAB_00455742
    FST double ptr [EBP + 0x36]         ; 00455745
    FCOMP double ptr [0x005d0267]       ; 00455748 | DAT_005d0267
    FNSTSW AX                           ; 0045574e
    SAHF                                ; 00455750
    JBE 0x00455be7                      ; 00455751
        ;   XREF to: 00455be7 (CONDITIONAL_JUMP)  ; LAB_00455be7
    FLD1                                ; 00455757
    FCOMP double ptr [EBP + 0x36]       ; 00455759
    FNSTSW AX                           ; 0045575c
    SAHF                                ; 0045575e
    JNC 0x00455768                      ; 0045575f
        ;   XREF to: 00455768 (CONDITIONAL_JUMP)  ; LAB_00455768
    MOV dword ptr [EBP + 0x72],0x3f800000 ; 00455761
    MOV ESI,dword ptr [EBX + 0x2d04]    ; 00455768
        ;   Label: LAB_00455768
    SHL ESI,0x3                         ; 0045576e
    MOV EAX,ESI                         ; 00455771
    SHL ESI,0x3                         ; 00455773
    SUB ESI,EAX                         ; 00455776
    LEA EAX,[EBX + 0x2834]              ; 00455778
    ADD EAX,ESI                         ; 0045577e
    PUSH 0x1                            ; 00455780
    ADD EAX,0x8                         ; 00455782
    PUSH EAX                            ; 00455785
    LEA ESI,[EBX + 0x2b4]               ; 00455786
    PUSH ESI                            ; 0045578c
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 0045578d
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00455792
    PUSH EAX                            ; 00455795
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10 ; 00455796
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_00502f10(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0045579b
    PUSH dword ptr [EBX + 0x2d08]       ; 0045579e
    PUSH EAX                            ; 004557a4
    PUSH ESI                            ; 004557a5
    MOV dword ptr [EBP + 0x52],EAX      ; 004557a6
    CALL core_motion.cpp_FUN_00503f50   ; 004557a9
        ;   XREF to: 00503f50 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00503f50()
    MOV dword ptr [EBP + 0x7a],EAX      ; 004557ae
    ADD ESP,0xc                         ; 004557b1
    MOV EAX,[0x01cede1c]                ; 004557b4 | g_CGunClassInfo.name_hash
    LEA ESI,[EBX + 0x2437c]             ; 004557b9
    PUSH EAX                            ; 004557bf
    MOV EAX,dword ptr [ESI + 0x468]     ; 004557c0
    MOV EAX,dword ptr [ESI + EAX*0x4 + 0x610] ; 004557c6
    FLD float ptr [EBP + 0x7a]          ; 004557cd
    PUSH EAX                            ; 004557d0
    FSTP float ptr [EBP + 0x5a]         ; 004557d1
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004557d4
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004557d9
    MOV EDX,dword ptr [0x01d0557c]      ; 004557dc | g_CMeleeClassInfo.name_hash
    MOV EAX,dword ptr [ESI + 0x468]     ; 004557e2
    PUSH EDX                            ; 004557e8
    MOV EAX,dword ptr [ESI + EAX*0x4 + 0x610] ; 004557e9
    PUSH EAX                            ; 004557f0
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004557f1
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,dword ptr [0x01b4d29c]      ; 004557f6 | DAT_01b4d29c
    MOV ECX,dword ptr [EBX + 0x2d04]    ; 004557fc
    ADD ESP,0x8                         ; 00455802
    CMP ECX,0x1                         ; 00455805
    JNZ 0x0045581c                      ; 00455808
        ;   XREF to: 0045581c (CONDITIONAL_JUMP)  ; LAB_0045581c
    CMP dword ptr [EBX + 0x2d08],0x3f800000 ; 0045580a
    JNZ 0x0045581c                      ; 00455814
        ;   XREF to: 0045581c (CONDITIONAL_JUMP)  ; LAB_0045581c
    MOV ESI,dword ptr [0x01b4d264]      ; 00455816 | DAT_01b4d264
    CMP dword ptr [EBX + 0x2d04],0x3    ; 0045581c
        ;   Label: LAB_0045581c
    JNZ 0x00455837                      ; 00455823
        ;   XREF to: 00455837 (CONDITIONAL_JUMP)  ; LAB_00455837
    CMP dword ptr [EBX + 0x2d08],0x3f800000 ; 00455825
    JNZ 0x00455837                      ; 0045582f
        ;   XREF to: 00455837 (CONDITIONAL_JUMP)  ; LAB_00455837
    MOV ESI,dword ptr [0x01b4d268]      ; 00455831 | DAT_01b4d268
    MOV ECX,dword ptr [EBX + 0x2d04]    ; 00455837
        ;   Label: LAB_00455837
    CMP ECX,0x4                         ; 0045583d
    JL 0x00455859                       ; 00455840
        ;   XREF to: 00455859 (CONDITIONAL_JUMP)  ; LAB_00455859
    CMP ECX,0x6                         ; 00455842
    JG 0x00455859                       ; 00455845
        ;   XREF to: 00455859 (CONDITIONAL_JUMP)  ; LAB_00455859
    CMP dword ptr [EBX + 0x2d08],0x3f800000 ; 00455847
    JNZ 0x00455859                      ; 00455851
        ;   XREF to: 00455859 (CONDITIONAL_JUMP)  ; LAB_00455859
    MOV ESI,dword ptr [0x01b4d268]      ; 00455853 | DAT_01b4d268
    CMP dword ptr [EBX + 0x2d04],0x8    ; 00455859
        ;   Label: LAB_00455859
    JNZ 0x00455874                      ; 00455860
        ;   XREF to: 00455874 (CONDITIONAL_JUMP)  ; LAB_00455874
    CMP dword ptr [EBX + 0x2d08],0x3f800000 ; 00455862
    JNZ 0x00455874                      ; 0045586c
        ;   XREF to: 00455874 (CONDITIONAL_JUMP)  ; LAB_00455874
    MOV ESI,dword ptr [0x01b4d268]      ; 0045586e | DAT_01b4d268
    CMP dword ptr [EBX + 0x2d04],0x7    ; 00455874
        ;   Label: LAB_00455874
    JNZ 0x004558af                      ; 0045587b
        ;   XREF to: 004558af (CONDITIONAL_JUMP)  ; LAB_004558af
    FLD float ptr [EBX + 0x2d08]        ; 0045587d
    FLD1                                ; 00455883
    FCOMPP                              ; 00455885
    FNSTSW AX                           ; 00455887
    SAHF                                ; 00455889
    JBE 0x00455c38                      ; 0045588a
        ;   XREF to: 00455c38 (CONDITIONAL_JUMP)  ; LAB_00455c38
    LEA EAX,[EBX + 0x2b4]               ; 00455890
    PUSH EAX                            ; 00455896
    CALL core_motion.cpp_FUN_005035c0   ; 00455897
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0045589c
    ADD ESP,0x4                         ; 0045589f
    TEST EAX,EAX                        ; 004558a2
    JNZ 0x00455c2d                      ; 004558a4
        ;   XREF to: 00455c2d (CONDITIONAL_JUMP)  ; LAB_00455c2d
    MOV ESI,0xffffffff                  ; 004558aa
    PUSH 0x13                           ; 004558af
        ;   Label: LAB_004558af
    LEA EDI,[EBX + 0x2b4]               ; 004558b1
    PUSH EDI                            ; 004558b7
    CALL core_motion.cpp_FUN_005038a0   ; 004558b8
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [EBP + 0x7a],EAX      ; 004558bd
    ADD ESP,0x8                         ; 004558c0
    FLD float ptr [EBP + 0x7a]          ; 004558c3
    FLD1                                ; 004558c6
    FSUBRP                              ; 004558c8
    PUSH 0x544cc0                       ; 004558ca
    FLD float ptr [EBP + 0x72]          ; 004558cf
    FXCH                                ; 004558d2
    FMUL ST1                            ; 004558d4
    PUSH ESI                            ; 004558d6
    FSTP ST1                            ; 004558d7
    FSTP float ptr [EBP + 0x72]         ; 004558d9
    PUSH dword ptr [EBP + 0x72]         ; 004558dc
    MOV EAX,dword ptr [EBP + 0x52]      ; 004558df
    PUSH dword ptr [EBP + 0x5a]         ; 004558e2
    PUSH EAX                            ; 004558e5
    PUSH EDI                            ; 004558e6
    CALL core_skeleton.cpp_FUN_00545a60 ; 004558e7
        ;   XREF to: 00545a60 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00545a60()
    MOV EDX,dword ptr [EBX + 0x2d04]    ; 004558ec
    ADD ESP,0x18                        ; 004558f2
    TEST EDX,EDX                        ; 004558f5
    JNZ 0x00455c43                      ; 004558f7
        ;   XREF to: 00455c43 (CONDITIONAL_JUMP)  ; LAB_00455c43
    MOV ESI,dword ptr [0x01b4d26c]      ; 004558fd | DAT_01b4d26c
        ;   Label: LAB_004558fd
    LEA EAX,[EBX + 0x964]               ; 00455903
    SHL ESI,0x4                         ; 00455909
    ADD ESI,EAX                         ; 0045590c
    PUSH dword ptr [EBX + 0x2d08]       ; 0045590e
    PUSH ESI                            ; 00455914
    MOV ESI,dword ptr [0x01b4d28c]      ; 00455915 | DAT_01b4d28c
    SHL ESI,0x4                         ; 0045591b
    ADD EAX,ESI                         ; 0045591e
    PUSH EAX                            ; 00455920
    LEA ESI,[EBP + 0xffffff66]          ; 00455921
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 00455927
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    MOV EAX,[0x01b4d28c]                ; 0045592c | DAT_01b4d28c
    SHL EAX,0x4                         ; 00455931
    LEA ESI,[EBP + 0xffffff66]          ; 00455934
    LEA EDI,[EBX + EAX*0x1 + 0x964]     ; 0045593a
    ADD ESP,0xc                         ; 00455941
    MOVSD ES:EDI,ESI                    ; 00455944
    MOVSD ES:EDI,ESI                    ; 00455945
    MOVSD ES:EDI,ESI                    ; 00455946
    MOVSD ES:EDI,ESI                    ; 00455947
    MOV ESI,dword ptr [EBX + 0x2d04]    ; 00455948
        ;   Label: LAB_00455948
    CMP ESI,0x1                         ; 0045594e
    JNZ 0x00455c51                      ; 00455951
        ;   XREF to: 00455c51 (CONDITIONAL_JUMP)  ; LAB_00455c51
    MOV EDX,0x3e860a92                  ; 00455957
        ;   Label: LAB_00455957
    MOV EAX,dword ptr [EBX + 0x2567c]   ; 0045595c
    MOV ECX,0x3f19999a                  ; 00455962
    MOV dword ptr [EBP + 0x66],EAX      ; 00455967
    MOV dword ptr [EBP + 0x62],EDX      ; 0045596a
    MOV dword ptr [EBP + 0x56],ECX      ; 0045596d
    FLD float ptr [EBP + 0x66]          ; 00455970
    XOR EAX,EAX                         ; 00455973
    FLDZ                                ; 00455975
    MOV dword ptr [EBP + 0x6e],EAX      ; 00455977
    FCOMPP                              ; 0045597a
    FNSTSW AX                           ; 0045597c
    SAHF                                ; 0045597e
    JBE 0x0045599f                      ; 0045597f
        ;   XREF to: 0045599f (CONDITIONAL_JUMP)  ; LAB_0045599f
    FLD float ptr [0x005d026f]          ; 00455981 | DAT_005d026f
    FLD float ptr [EBP + 0x66]          ; 00455987
    FADD ST0,ST1                        ; 0045598a
    FLD float ptr [0x005f515c]          ; 0045598c | DAT_005f515c
    FADDP ST2,ST0                       ; 00455992
    FDIVRP                              ; 00455994
    FMUL float ptr [0x005d0273]         ; 00455996 | DAT_005d0273
    FSTP float ptr [EBP + 0x6e]         ; 0045599c
    FLD float ptr [EBP + 0x66]          ; 0045599f
        ;   Label: LAB_0045599f
    FLDZ                                ; 004559a2
    FCOMPP                              ; 004559a4
    FNSTSW AX                           ; 004559a6
    SAHF                                ; 004559a8
    JNC 0x004559c3                      ; 004559a9
        ;   XREF to: 004559c3 (CONDITIONAL_JUMP)  ; LAB_004559c3
    FLD float ptr [EBP + 0x62]          ; 004559ab
    FLD float ptr [EBP + 0x66]          ; 004559ae
    FSUB ST0,ST1                        ; 004559b1
    FLD float ptr [0x005f5160]          ; 004559b3 | DAT_005f5160
    FSUBRP ST2,ST0                      ; 004559b9
    FDIVRP                              ; 004559bb
    FMUL float ptr [EBP + 0x56]         ; 004559bd
    FSTP float ptr [EBP + 0x6e]         ; 004559c0
    PUSH 0x1                            ; 004559c3
        ;   Label: LAB_004559c3
    PUSH EBX                            ; 004559c5
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0 ; 004559c6
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(CCharacter * this_ptr, int state_index)
    MOV dword ptr [EBP + 0x7a],EAX      ; 004559cb
    ADD ESP,0x8                         ; 004559ce
    FLD float ptr [EBP + 0x7a]          ; 004559d1
    FLD1                                ; 004559d4
    FSUBRP                              ; 004559d6
    PUSH 0x12                           ; 004559d8
    FMUL float ptr [EBP + 0x72]         ; 004559da
    PUSH EBX                            ; 004559dd
    FSTP double ptr [EBP + 0x3e]        ; 004559de
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0 ; 004559e1
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(CCharacter * this_ptr, int state_index)
    MOV dword ptr [EBP + 0x7a],EAX      ; 004559e6
    FLD float ptr [EBP + 0x7a]          ; 004559e9
    FLD1                                ; 004559ec
    FSUBRP                              ; 004559ee
    FMUL double ptr [EBP + 0x3e]        ; 004559f0
    FLD float ptr [EBP + 0x6e]          ; 004559f3
    FXCH                                ; 004559f6
    FMUL ST1                            ; 004559f8
    ADD ESP,0x8                         ; 004559fa
    FSTP ST1                            ; 004559fd
    FST float ptr [EBP + 0x6e]          ; 004559ff
    FLDZ                                ; 00455a02
    FCOMPP                              ; 00455a04
    FNSTSW AX                           ; 00455a06
    SAHF                                ; 00455a08
    JNC 0x00455a96                      ; 00455a09
        ;   XREF to: 00455a96 (CONDITIONAL_JUMP)  ; LAB_00455a96
    PUSH 0x44fe40                       ; 00455a0f
    MOV ESI,dword ptr [0x01b4d29c]      ; 00455a14 | DAT_01b4d29c
    PUSH ESI                            ; 00455a1a
    PUSH dword ptr [EBP + 0x6e]         ; 00455a1b
    LEA ESI,[EBP + 0xffffff76]          ; 00455a1e
    PUSH dword ptr [EBP + 0x66]         ; 00455a24
    CALL core_xform.cpp_quaternionFromAngleX_FUN_00593fa0 ; 00455a27
        ;   XREF to: 00593fa0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_00593fa0()
    ADD ESP,0x4                         ; 00455a2c
    LEA EAX,[EBP + 0xffffff56]          ; 00455a2f
    LEA EDI,[EBP + 0xffffff56]          ; 00455a35
    PUSH EAX                            ; 00455a3b
    LEA EAX,[EBX + 0x2b4]               ; 00455a3c
    LEA ESI,[EBP + 0xffffff76]          ; 00455a42
    PUSH EAX                            ; 00455a48
    MOVSD ES:EDI,ESI                    ; 00455a49
    MOVSD ES:EDI,ESI                    ; 00455a4a
    MOVSD ES:EDI,ESI                    ; 00455a4b
    MOVSD ES:EDI,ESI                    ; 00455a4c
    MOV dword ptr [EBP + 0x4e],EAX      ; 00455a4d
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40 ; 00455a50
        ;   XREF to: 00546f40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 00455a55
    PUSH 0x44fe40                       ; 00455a58
    MOV EAX,[0x01b4d264]                ; 00455a5d | DAT_01b4d264
    PUSH EAX                            ; 00455a62
    LEA ESI,[EBP + -0x7a]               ; 00455a63
    PUSH dword ptr [EBP + 0x6e]         ; 00455a66
    FLD float ptr [EBP + 0x66]          ; 00455a69
    SUB ESP,0x4                         ; 00455a6c
    FCHS                                ; 00455a6f
    FSTP float ptr [ESP]                ; 00455a71
    CALL core_xform.cpp_quaternionFromAngleX_FUN_00593fa0 ; 00455a74
        ;   XREF to: 00593fa0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_00593fa0()
    ADD ESP,0x4                         ; 00455a79
    LEA EAX,[EBP + 0x26]                ; 00455a7c
    LEA EDI,[EBP + 0x26]                ; 00455a7f
    PUSH EAX                            ; 00455a82
    MOV EDX,dword ptr [EBP + 0x4e]      ; 00455a83
    LEA ESI,[EBP + -0x7a]               ; 00455a86
    PUSH EDX                            ; 00455a89
    MOVSD ES:EDI,ESI                    ; 00455a8a
    MOVSD ES:EDI,ESI                    ; 00455a8b
    MOVSD ES:EDI,ESI                    ; 00455a8c
    MOVSD ES:EDI,ESI                    ; 00455a8d
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40 ; 00455a8e
        ;   XREF to: 00546f40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 00455a93
    PUSH 0x3                            ; 00455a96
        ;   Label: LAB_00455a96
    PUSH EBX                            ; 00455a98
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0 ; 00455a99
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(CCharacter * this_ptr, int state_index)
    MOV dword ptr [EBP + 0x7a],EAX      ; 00455a9e
    ADD ESP,0x8                         ; 00455aa1
    FLD float ptr [EBP + 0x7a]          ; 00455aa4
    FLD1                                ; 00455aa7
    FSUBRP                              ; 00455aa9
    PUSH 0x12                           ; 00455aab
    FMUL float ptr [EBP + 0x72]         ; 00455aad
    PUSH EBX                            ; 00455ab0
    FSTP double ptr [EBP + 0x3e]        ; 00455ab1
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0 ; 00455ab4
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(CCharacter * this_ptr, int state_index)
    MOV dword ptr [EBP + 0x7a],EAX      ; 00455ab9
    FLD float ptr [EBP + 0x7a]          ; 00455abc
    FLD1                                ; 00455abf
    FSUBRP                              ; 00455ac1
    FMUL double ptr [EBP + 0x3e]        ; 00455ac3
    ADD ESP,0x8                         ; 00455ac6
    LEA ESI,[EBP + 0x6]                 ; 00455ac9
    PUSH dword ptr [EBX + 0x25680]      ; 00455acc
    FSTP float ptr [EBP + 0x4a]         ; 00455ad2
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 00455ad5
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    ADD ESP,0x4                         ; 00455ada
    PUSH 0x44fe40                       ; 00455add
    MOV ECX,dword ptr [0x01b4d29c]      ; 00455ae2 | DAT_01b4d29c
    PUSH ECX                            ; 00455ae8
    LEA EAX,[EBP + -0x3a]               ; 00455ae9
    PUSH dword ptr [EBP + 0x4a]         ; 00455aec
    LEA EDI,[EBP + -0x3a]               ; 00455aef
    PUSH EAX                            ; 00455af2
    LEA EAX,[EBX + 0x2b4]               ; 00455af3
    LEA ESI,[EBP + 0x6]                 ; 00455af9
    PUSH EAX                            ; 00455afc
    MOVSD ES:EDI,ESI                    ; 00455afd
    MOVSD ES:EDI,ESI                    ; 00455afe
    MOVSD ES:EDI,ESI                    ; 00455aff
    MOVSD ES:EDI,ESI                    ; 00455b00
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40 ; 00455b01
        ;   XREF to: 00546f40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 00455b06
    PUSH 0x0                            ; 00455b09
    PUSH EBX                            ; 00455b0b
    CALL core_doc.cpp_FUN_004562a0      ; 00455b0c
        ;   XREF to: 004562a0 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_004562a0()
    MOV EAX,[0x01b4d28c]                ; 00455b11 | DAT_01b4d28c
    MOV ESI,dword ptr [0x01b4d26c]      ; 00455b16 | DAT_01b4d26c
    SHL EAX,0x4                         ; 00455b1c
    SHL ESI,0x4                         ; 00455b1f
    LEA EDI,[EBX + EAX*0x1 + 0x964]     ; 00455b22
    LEA ESI,[ESI + EBX*0x1 + 0x964]     ; 00455b29
    ADD ESP,0x8                         ; 00455b30
    MOVSD ES:EDI,ESI                    ; 00455b33
    MOVSD ES:EDI,ESI                    ; 00455b34
    MOVSD ES:EDI,ESI                    ; 00455b35
    MOVSD ES:EDI,ESI                    ; 00455b36
    MOV ESI,dword ptr [EBX + 0x2d04]    ; 00455b37
        ;   Label: LAB_00455b37
    CMP ESI,0xc                         ; 00455b3d
    JNZ 0x00455c5f                      ; 00455b40
        ;   XREF to: 00455c5f (CONDITIONAL_JUMP)  ; LAB_00455c5f
    PUSH 0x3                            ; 00455b46
        ;   Label: LAB_00455b46
    PUSH EBX                            ; 00455b48
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0 ; 00455b49
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(CCharacter * this_ptr, int state_index)
    MOV dword ptr [EBP + 0x7a],EAX      ; 00455b4e
    FLD float ptr [EBP + 0x7a]          ; 00455b51
    FLD1                                ; 00455b54
    FSUBRP                              ; 00455b56
    FMUL float ptr [EBP + 0x72]         ; 00455b58
    ADD ESP,0x8                         ; 00455b5b
    LEA ESI,[EBP + -0x6a]               ; 00455b5e
    PUSH dword ptr [EBX + 0x2565c]      ; 00455b61
    FSTP float ptr [EBP + 0x76]         ; 00455b67
    CALL core_xform.cpp_quaternionFromAngleX_FUN_00593fa0 ; 00455b6a
        ;   XREF to: 00593fa0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_00593fa0()
    ADD ESP,0x4                         ; 00455b6f
    PUSH 0x44fe40                       ; 00455b72
    MOV EAX,[0x01b4d29c]                ; 00455b77 | DAT_01b4d29c
    PUSH EAX                            ; 00455b7c
    PUSH dword ptr [EBP + 0x76]         ; 00455b7d
    LEA EAX,[EBP + 0x16]                ; 00455b80
    LEA EDI,[EBP + 0x16]                ; 00455b83
    PUSH EAX                            ; 00455b86
    LEA EAX,[EBX + 0x2b4]               ; 00455b87
    LEA ESI,[EBP + -0x6a]               ; 00455b8d
    PUSH EAX                            ; 00455b90
    MOVSD ES:EDI,ESI                    ; 00455b91
    MOVSD ES:EDI,ESI                    ; 00455b92
    MOVSD ES:EDI,ESI                    ; 00455b93
    MOVSD ES:EDI,ESI                    ; 00455b94
    MOV dword ptr [EBP + 0x4e],EAX      ; 00455b95
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40 ; 00455b98
        ;   XREF to: 00546f40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 00455b9d
    LEA ESI,[EBP + -0x4a]               ; 00455ba0
    PUSH dword ptr [EBX + 0x25660]      ; 00455ba3
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 00455ba9
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    ADD ESP,0x4                         ; 00455bae
    PUSH 0x44fe40                       ; 00455bb1
    MOV ECX,dword ptr [0x01b4d29c]      ; 00455bb6 | DAT_01b4d29c
    LEA EDI,[EBP + -0x1a]               ; 00455bbc
    PUSH ECX                            ; 00455bbf
    LEA ESI,[EBP + -0x4a]               ; 00455bc0
    LEA EAX,[EBP + -0x1a]               ; 00455bc3
    PUSH dword ptr [EBP + 0x76]         ; 00455bc6
    MOVSD ES:EDI,ESI                    ; 00455bc9
    MOVSD ES:EDI,ESI                    ; 00455bca
    MOVSD ES:EDI,ESI                    ; 00455bcb
    MOVSD ES:EDI,ESI                    ; 00455bcc
    PUSH EAX                            ; 00455bcd
    MOV ESI,dword ptr [EBP + 0x4e]      ; 00455bce
    PUSH ESI                            ; 00455bd1
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40 ; 00455bd2
        ;   XREF to: 00546f40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 00455bd7
    CMP dword ptr [EBX + 0x2d04],0x9    ; 00455bda
        ;   Label: LAB_00455bda
    JZ 0x00455c6d                       ; 00455be1
        ;   XREF to: 00455c6d (CONDITIONAL_JUMP)  ; LAB_00455c6d
    LEA ESP,[EBP + 0x7e]                ; 00455be7
        ;   Label: LAB_00455be7
    POP EBP                             ; 00455bea
    POP EDI                             ; 00455beb
    POP ESI                             ; 00455bec
    POP EBX                             ; 00455bed
    RET                                 ; 00455bee
    CMP ESI,0x18                        ; 00455bef
        ;   Label: LAB_00455bef
    JZ 0x00455713                       ; 00455bf2
        ;   XREF to: 00455713 (CONDITIONAL_JUMP)  ; LAB_00455713
    CMP ESI,0x19                        ; 00455bf8
    JNZ 0x00455c0b                      ; 00455bfb
        ;   XREF to: 00455c0b (CONDITIONAL_JUMP)  ; LAB_00455c0b
    FLD float ptr [EBP + 0x5e]          ; 00455bfd
        ;   Label: LAB_00455bfd
    FSUBR double ptr [0x005d024f]       ; 00455c00 | DAT_005d024f
    JMP 0x0045571c                      ; 00455c06
        ;   XREF to: 0045571c (UNCONDITIONAL_JUMP)  ; LAB_0045571c
    CMP ESI,0x1a                        ; 00455c0b
        ;   Label: LAB_00455c0b
    JZ 0x00455bfd                       ; 00455c0e
        ;   XREF to: 00455bfd (CONDITIONAL_JUMP)  ; LAB_00455bfd
    JMP 0x00455725                      ; 00455c10
        ;   XREF to: 00455725 (UNCONDITIONAL_JUMP)  ; LAB_00455725
    FLDZ                                ; 00455c15
        ;   Label: LAB_00455c15
    FCOMP float ptr [EBP + 0x6a]        ; 00455c17
    FNSTSW AX                           ; 00455c1a
    SAHF                                ; 00455c1c
    JBE 0x00455739                      ; 00455c1d
        ;   XREF to: 00455739 (CONDITIONAL_JUMP)  ; LAB_00455739
    XOR ECX,ECX                         ; 00455c23
    MOV dword ptr [EBP + 0x6a],ECX      ; 00455c25
    JMP 0x00455739                      ; 00455c28
        ;   XREF to: 00455739 (UNCONDITIONAL_JUMP)  ; LAB_00455739
    MOV ESI,dword ptr [0x01b4d29c]      ; 00455c2d | DAT_01b4d29c
        ;   Label: LAB_00455c2d
    JMP 0x004558af                      ; 00455c33
        ;   XREF to: 004558af (UNCONDITIONAL_JUMP)  ; LAB_004558af
    MOV ESI,dword ptr [0x01b4d268]      ; 00455c38 | DAT_01b4d268
        ;   Label: LAB_00455c38
    JMP 0x004558af                      ; 00455c3e
        ;   XREF to: 004558af (UNCONDITIONAL_JUMP)  ; LAB_004558af
    CMP EDX,0x1                         ; 00455c43
        ;   Label: LAB_00455c43
    JZ 0x004558fd                       ; 00455c46
        ;   XREF to: 004558fd (CONDITIONAL_JUMP)  ; LAB_004558fd
    JMP 0x00455948                      ; 00455c4c
        ;   XREF to: 00455948 (UNCONDITIONAL_JUMP)  ; LAB_00455948
    CMP ESI,0xe                         ; 00455c51
        ;   Label: LAB_00455c51
    JZ 0x00455957                       ; 00455c54
        ;   XREF to: 00455957 (CONDITIONAL_JUMP)  ; LAB_00455957
    JMP 0x00455b37                      ; 00455c5a
        ;   XREF to: 00455b37 (UNCONDITIONAL_JUMP)  ; LAB_00455b37
    CMP ESI,0xd                         ; 00455c5f
        ;   Label: LAB_00455c5f
    JZ 0x00455b46                       ; 00455c62
        ;   XREF to: 00455b46 (CONDITIONAL_JUMP)  ; LAB_00455b46
    JMP 0x00455bda                      ; 00455c68
        ;   XREF to: 00455bda (UNCONDITIONAL_JUMP)  ; LAB_00455bda
    FLD float ptr [EBX + 0x25718]       ; 00455c6d
        ;   Label: LAB_00455c6d
    FDIV float ptr [0x005f5164]         ; 00455c73 | DAT_005f5164
    FLD1                                ; 00455c79
    FPATAN                              ; 00455c7b
    LEA ESI,[EBP + -0x5a]               ; 00455c7d
    FSTP float ptr [EBP + 0x46]         ; 00455c80
    PUSH dword ptr [EBP + 0x46]         ; 00455c83
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 00455c86
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    ADD ESP,0x4                         ; 00455c8b
    PUSH 0x544cc0                       ; 00455c8e
    MOV EAX,[0x01b4d268]                ; 00455c93 | DAT_01b4d268
    PUSH EAX                            ; 00455c98
    LEA EDI,[EBP + -0x2a]               ; 00455c99
    LEA ESI,[EBP + -0x5a]               ; 00455c9c
    PUSH 0x3f800000                     ; 00455c9f
    LEA EAX,[EBP + -0x2a]               ; 00455ca4
    ADD EBX,0x2b4                       ; 00455ca7
    PUSH EAX                            ; 00455cad
    MOVSD ES:EDI,ESI                    ; 00455cae
    MOVSD ES:EDI,ESI                    ; 00455caf
    MOVSD ES:EDI,ESI                    ; 00455cb0
    MOVSD ES:EDI,ESI                    ; 00455cb1
    PUSH EBX                            ; 00455cb2
    LEA ESI,[EBP + -0xa]                ; 00455cb3
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40 ; 00455cb6
        ;   XREF to: 00546f40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 00455cbb
    FLD float ptr [EBP + 0x46]          ; 00455cbe
    SUB ESP,0x4                         ; 00455cc1
    FCHS                                ; 00455cc4
    FSTP float ptr [ESP]                ; 00455cc6
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 00455cc9
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    ADD ESP,0x4                         ; 00455cce
    PUSH 0x544cc0                       ; 00455cd1
    MOV EDX,dword ptr [0x01b4d264]      ; 00455cd6 | DAT_01b4d264
    PUSH EDX                            ; 00455cdc
    LEA EAX,[EBP + -0x2a]               ; 00455cdd
    PUSH 0x3f800000                     ; 00455ce0
    PUSH EAX                            ; 00455ce5
    LEA EDI,[EBP + -0x2a]               ; 00455ce6
    LEA ESI,[EBP + -0xa]                ; 00455ce9
    PUSH EBX                            ; 00455cec
    MOVSD ES:EDI,ESI                    ; 00455ced
    MOVSD ES:EDI,ESI                    ; 00455cee
    MOVSD ES:EDI,ESI                    ; 00455cef
    MOVSD ES:EDI,ESI                    ; 00455cf0
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40 ; 00455cf1
        ;   XREF to: 00546f40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 00455cf6
    LEA ESP,[EBP + 0x7e]                ; 00455cf9
    POP EBP                             ; 00455cfc
    POP EDI                             ; 00455cfd
    POP ESI                             ; 00455cfe
    POP EBX                             ; 00455cff
    RET                                 ; 00455d00

