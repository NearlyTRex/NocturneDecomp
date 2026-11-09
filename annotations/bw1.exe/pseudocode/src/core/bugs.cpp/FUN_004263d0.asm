; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_FUN_004263d0(CBugs *this_ptr,float delta_time)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x1b8]:4  local_1b8
; undefined        Stack[-0x1b4]:1  local_1b4
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined        Stack[-0x148]:1  local_148
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_bugs.cpp_FUN_004253c0 at 0042545c
;   core_bugs.cpp_FUN_00426030 at 004263b9
;
; Referenced Globals:
;   undefined4 DAT_005d5120
;   undefined4 DAT_005d5128
;   undefined4 DAT_005d5130
;   undefined4 DAT_005fd234
;   undefined4 g_CCharacterClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_00425b00
;   core_bugs.cpp_FUN_00426ec0
;   core_bugs.cpp_FUN_00427a30
;   core_bugs.cpp_FUN_00427e00
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_dirmat.cpp_FUN_0045f3e0
;   core_dirmat.cpp_FUN_0045f690
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0
;   core_path.cpp_getPathMap_FUN_005351f0
;   core_skeleton.cpp_FUN_00569890
;   core_xform.cpp_FUN_005b5620
;   core_xform.cpp_FUN_005b5760
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004263d0
        ;   Label: core_bugs.cpp_FUN_004263d0
    PUSH ESI                            ; 004263d1
    PUSH EDI                            ; 004263d2
    PUSH EBP                            ; 004263d3
    MOV EBP,ESP                         ; 004263d4
    SUB ESP,0x1a8                       ; 004263d6
    AND ESP,0xfffffff8                  ; 004263dc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004263df
    MOV EDX,dword ptr [EBX + 0x12ea4]   ; 004263e2
    TEST EDX,EDX                        ; 004263e8
    JZ 0x0042666e                       ; 004263ea
        ;   XREF to: 0042666e (CONDITIONAL_JUMP)  ; LAB_0042666e
    MOV EDI,dword ptr [EBX + 0xc26c]    ; 004263f0
    XOR ECX,ECX                         ; 004263f6
    XOR ESI,ESI                         ; 004263f8
    MOV dword ptr [ESP],ECX             ; 004263fa
    TEST EDI,EDI                        ; 004263fd
    JLE 0x0042641d                      ; 004263ff
        ;   XREF to: 0042641d (CONDITIONAL_JUMP)  ; LAB_0042641d
    MOV EAX,EBX                         ; 00426401
    CMP dword ptr [EAX + 0xc29c],0x0    ; 00426403
        ;   Label: LAB_00426403
    JL 0x0042640f                       ; 0042640a
        ;   XREF to: 0042640f (CONDITIONAL_JUMP)  ; LAB_0042640f
    INC dword ptr [ESP]                 ; 0042640c
    INC ESI                             ; 0042640f
        ;   Label: LAB_0042640f
    MOV EDX,dword ptr [EBX + 0xc26c]    ; 00426410
    ADD EAX,0x40                        ; 00426416
    CMP ESI,EDX                         ; 00426419
    JL 0x00426403                       ; 0042641b
        ;   XREF to: 00426403 (CONDITIONAL_JUMP)  ; LAB_00426403
    MOV EAX,dword ptr [ESP]             ; 0042641d
        ;   Label: LAB_0042641d
    CMP EAX,dword ptr [EBX + 0xc26c]    ; 00426420
    JL 0x0042667b                       ; 00426426
        ;   XREF to: 0042667b (CONDITIONAL_JUMP)  ; LAB_0042667b
    CMP dword ptr [ESP],0x0             ; 0042642c
        ;   Label: LAB_0042642c
    JLE 0x004264b9                      ; 00426430
        ;   XREF to: 004264b9 (CONDITIONAL_JUMP)  ; LAB_004264b9
    FLD float ptr [EBX + 0x19da0]       ; 00426436
    FSUB float ptr [EBP + 0x18]         ; 0042643c
    FST float ptr [EBX + 0x19da0]       ; 0042643f
    FLDZ                                ; 00426445
    FCOMPP                              ; 00426447
    FNSTSW AX                           ; 00426449
    SAHF                                ; 0042644b
    JC 0x004264b9                       ; 0042644c
        ;   XREF to: 004264b9 (CONDITIONAL_JUMP)  ; LAB_004264b9
    MOV EDI,dword ptr [0x007c637c]      ; 0042644e | g_CCharacterClassInfo.name_hash
    PUSH EDI                            ; 00426454
    MOV EAX,dword ptr [EBX + 0x12ea4]   ; 00426455
    PUSH EAX                            ; 0042645b
    MOV dword ptr [EBX + 0x19da0],0x3e4ccccd ; 0042645c
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00426466
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV ESI,EAX                         ; 0042646b
    ADD ESP,0x8                         ; 0042646d
    TEST EAX,EAX                        ; 00426470
    JZ 0x004264b9                       ; 00426472
        ;   XREF to: 004264b9 (CONDITIONAL_JUMP)  ; LAB_004264b9
    LEA EAX,[ESP + 0x4]                 ; 00426474
    PUSH EAX                            ; 00426478
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 00426479
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0042647e
    MOV EAX,dword ptr [ESP]             ; 00426481
    MOV dword ptr [ESP + 0x1a4],EAX     ; 00426484
    FILD dword ptr [ESP + 0x1a4]        ; 0042648b
    LEA EAX,[ESP + 0x4]                 ; 00426492
    FMUL double ptr [0x005d5128]        ; 00426496 | DAT_005d5128
    PUSH EAX                            ; 0042649c
    MOV dword ptr [ESP + 0x3c],EBX      ; 0042649d
    MOV dword ptr [ESP + 0x40],EBX      ; 004264a1
    PUSH ESI                            ; 004264a5
    FSTP float ptr [ESP + 0x10]         ; 004264a6
    MOV EDI,dword ptr [ESI + 0x154]     ; 004264aa
    CALL dword ptr [EDI + 0x108]        ; 004264b0
    ADD ESP,0x8                         ; 004264b6
    MOV EAX,dword ptr [EBX + 0x12ea4]   ; 004264b9
        ;   Label: LAB_004264b9
    LEA ESI,[EAX + 0x30]                ; 004264bf
    PUSH ESI                            ; 004264c2
    ADD EAX,0x20                        ; 004264c3
    PUSH EAX                            ; 004264c6
    LEA EAX,[ESP + 0x78]                ; 004264c7
    PUSH EAX                            ; 004264cb
    CALL core_xform.cpp_FUN_005b5760    ; 004264cc
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 004264d1
    LEA EAX,[EBX + 0x30]                ; 004264d4
    PUSH EAX                            ; 004264d7
    LEA EAX,[EBX + 0x20]                ; 004264d8
    PUSH EAX                            ; 004264db
    LEA EAX,[ESP + 0x48]                ; 004264dc
    PUSH EAX                            ; 004264e0
    CALL core_xform.cpp_FUN_005b5620    ; 004264e1
        ;   XREF to: 005b5620 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5620(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 004264e6
    LEA EAX,[ESP + 0x40]                ; 004264e9
    PUSH EAX                            ; 004264ed
    LEA EAX,[ESP + 0x74]                ; 004264ee
    PUSH EAX                            ; 004264f2
    LEA ESI,[ESP + 0xa8]                ; 004264f3
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 004264fa
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 004264ff
    LEA ESI,[ESP + 0xa8]                ; 00426504
    LEA EDI,[EBX + 0x12eac]             ; 0042650b
    ADD ESP,0x8                         ; 00426511
    MOVSD.REP ES:EDI,ESI                ; 00426514
    MOV EAX,dword ptr [EBX + 0x12ea8]   ; 00426516
    MOV EDX,dword ptr [EBX + 0x12edc]   ; 0042651c
    CMP EDX,dword ptr [EAX + 0x2320]    ; 00426522
    JZ 0x00426534                       ; 00426528
        ;   XREF to: 00426534 (CONDITIONAL_JUMP)  ; LAB_00426534
    PUSH EDX                            ; 0042652a
    PUSH EAX                            ; 0042652b
    CALL core_skeleton.cpp_FUN_00569890 ; 0042652c
        ;   XREF to: 00569890 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00569890(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 00426531
    MOV EDI,dword ptr [EBX + 0xc26c]    ; 00426534
        ;   Label: LAB_00426534
    XOR ESI,ESI                         ; 0042653a
    TEST EDI,EDI                        ; 0042653c
    JLE 0x00426570                      ; 0042653e
        ;   XREF to: 00426570 (CONDITIONAL_JUMP)  ; LAB_00426570
    LEA EDI,[EBX + 0xc270]              ; 00426540
    PUSH dword ptr [EBP + 0x18]         ; 00426546
        ;   Label: LAB_00426546
    PUSH EDI                            ; 00426549
    PUSH EBX                            ; 0042654a
    INC ESI                             ; 0042654b
    CALL core_bugs.cpp_FUN_00426ec0     ; 0042654c
        ;   XREF to: 00426ec0 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_00426ec0()
    ADD EDI,0x40                        ; 00426551
    MOV EAX,dword ptr [EBX + 0xc26c]    ; 00426554
    ADD ESP,0xc                         ; 0042655a
    CMP ESI,EAX                         ; 0042655d
    JL 0x00426546                       ; 0042655f
        ;   XREF to: 00426546 (CONDITIONAL_JUMP)  ; LAB_00426546
    LEA EAX,[EAX]                       ; 00426561
    LEA EDX,[EDX]                       ; 00426567
    LEA EAX,[EAX]                       ; 0042656d
    PUSH EBX                            ; 00426570
        ;   Label: LAB_00426570
    LEA EDI,[ESP + 0x108]               ; 00426571
    LEA ESI,[EBX + 0x19d78]             ; 00426578
    CALL core_bugs.cpp_FUN_00427a30     ; 0042657e
        ;   XREF to: 00427a30 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_FUN_00427a30(CBugs * this_ptr)
    ADD ESP,0x4                         ; 00426583
    FLD float ptr [ESI + 0x4]           ; 00426586
    FLD float ptr [ESI + 0x8]           ; 00426589
    LEA EAX,[EBX + 0x19d84]             ; 0042658c
    FLD float ptr [ESI]                 ; 00426592
    LEA ESI,[ESP + 0x110]               ; 00426594
    FADD float ptr [EAX]                ; 0042659b
    FXCH ST2                            ; 0042659d
    FADD float ptr [EAX + 0x4]          ; 0042659f
    FXCH                                ; 004265a2
    FADD float ptr [EAX + 0x8]          ; 004265a4
    FXCH ST2                            ; 004265a7
    FSTP float ptr [ESP + 0x110]        ; 004265a9
    FSTP float ptr [ESP + 0x114]        ; 004265b0
    FSTP float ptr [ESP + 0x118]        ; 004265b7
    MOVSD ES:EDI,ESI                    ; 004265be
    MOVSD ES:EDI,ESI                    ; 004265bf
    MOVSD ES:EDI,ESI                    ; 004265c0
    FLD float ptr [0x005d5130]          ; 004265c1 | DAT_005d5130
    FLD float ptr [ESP + 0x104]         ; 004265c7
    FMUL ST1                            ; 004265ce
    FLD float ptr [ESP + 0x108]         ; 004265d0
    FMUL ST2                            ; 004265d7
    FLD float ptr [ESP + 0x10c]         ; 004265d9
    FMULP ST3                           ; 004265e0
    LEA EAX,[EBX + 0x20]                ; 004265e2
    LEA EDI,[ESP + 0xf8]                ; 004265e5
    LEA ESI,[ESP + 0x11c]               ; 004265ec
    FXCH                                ; 004265f3
    FSTP float ptr [ESP + 0x11c]        ; 004265f5
    FSTP float ptr [ESP + 0x120]        ; 004265fc
    FSTP float ptr [ESP + 0x124]        ; 00426603
    MOVSD ES:EDI,ESI                    ; 0042660a
    MOVSD ES:EDI,ESI                    ; 0042660b
    MOVSD ES:EDI,ESI                    ; 0042660c
    FLD float ptr [EAX + 0x4]           ; 0042660d
    FLD float ptr [EAX + 0x8]           ; 00426610
    FLD float ptr [EAX]                 ; 00426613
    LEA EDI,[ESP + 0x140]               ; 00426615
    LEA ESI,[ESP + 0x128]               ; 0042661c
    LEA EAX,[ESP + 0x140]               ; 00426623
    FADD float ptr [ESP + 0xf8]         ; 0042662a
    FXCH ST2                            ; 00426631
    FADD float ptr [ESP + 0xfc]         ; 00426633
    FXCH                                ; 0042663a
    FADD float ptr [ESP + 0x100]        ; 0042663c
    FXCH ST2                            ; 00426643
    FSTP float ptr [ESP + 0x128]        ; 00426645
    FSTP float ptr [ESP + 0x12c]        ; 0042664c
    PUSH EAX                            ; 00426653
    FSTP float ptr [ESP + 0x134]        ; 00426654
    PUSH EBX                            ; 0042665b
    MOVSD ES:EDI,ESI                    ; 0042665c
    MOVSD ES:EDI,ESI                    ; 0042665d
    MOVSD ES:EDI,ESI                    ; 0042665e
    CALL core_bugs.cpp_FUN_00427e00     ; 0042665f
        ;   XREF to: 00427e00 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_00427e00()
    ADD ESP,0x8                         ; 00426664
    MOV ESP,EBP                         ; 00426667
    POP EBP                             ; 00426669
    POP EDI                             ; 0042666a
    POP ESI                             ; 0042666b
    POP EBX                             ; 0042666c
    RET                                 ; 0042666d
    MOV dword ptr [EBX + 0xc268],EDX    ; 0042666e
        ;   Label: LAB_0042666e
    MOV ESP,EBP                         ; 00426674
    POP EBP                             ; 00426676
    POP EDI                             ; 00426677
    POP ESI                             ; 00426678
    POP EBX                             ; 00426679
    RET                                 ; 0042667a
    LEA ESI,[EBX + 0x20]                ; 0042667b
        ;   Label: LAB_0042667b
    LEA EDI,[ESP + 0x17c]               ; 0042667e
    MOV EAX,dword ptr [EBX + 0x12ea4]   ; 00426685
    FLD float ptr [ESI + 0x4]           ; 0042668b
    FLD float ptr [ESI + 0x8]           ; 0042668e
    FLD float ptr [ESI]                 ; 00426691
    LEA ESI,[ESP + 0x134]               ; 00426693
    FSUB float ptr [EAX + 0x20]         ; 0042669a
    FXCH ST2                            ; 0042669d
    FSUB float ptr [EAX + 0x24]         ; 0042669f
    FXCH                                ; 004266a2
    FSUB float ptr [EAX + 0x28]         ; 004266a4
    FXCH ST2                            ; 004266a7
    FSTP float ptr [ESP + 0x134]        ; 004266a9
    FSTP float ptr [ESP + 0x138]        ; 004266b0
    FSTP float ptr [ESP + 0x13c]        ; 004266b7
    MOVSD ES:EDI,ESI                    ; 004266be
    MOVSD ES:EDI,ESI                    ; 004266bf
    MOVSD ES:EDI,ESI                    ; 004266c0
    FLD float ptr [ESP + 0x180]         ; 004266c1
    FABS                                ; 004266c8
    FCOMP double ptr [0x005d5120]       ; 004266ca | DAT_005d5120
    FNSTSW AX                           ; 004266d0
    SAHF                                ; 004266d2
    JBE 0x00426815                      ; 004266d3
        ;   XREF to: 00426815 (CONDITIONAL_JUMP)  ; LAB_00426815
    MOV EAX,dword ptr [EBX + 0x12ea4]   ; 004266d9
        ;   Label: LAB_004266d9
    PUSH EAX                            ; 004266df
    MOV ESI,dword ptr [EAX + 0x154]     ; 004266e0
    CALL dword ptr [ESI + 0xc4]         ; 004266e6
    ADD ESP,0x4                         ; 004266ec
    MOV ESI,EAX                         ; 004266ef
    TEST EAX,EAX                        ; 004266f1
    JNZ 0x00426709                      ; 004266f3
        ;   XREF to: 00426709 (CONDITIONAL_JUMP)  ; LAB_00426709
    MOV EAX,dword ptr [EBX + 0x12ea4]   ; 004266f5
    ADD EAX,0x20                        ; 004266fb
    PUSH EAX                            ; 004266fe
    CALL core_path.cpp_getPathMap_FUN_005351f0 ; 004266ff
        ;   XREF to: 005351f0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_005351f0(CLocation * location)
    ADD ESP,0x4                         ; 00426704
    MOV ESI,EAX                         ; 00426707
    MOV EDI,dword ptr [EBX + 0x6c]      ; 00426709
        ;   Label: LAB_00426709
    PUSH EDI                            ; 0042670c
    LEA EAX,[ESP + 0x168]               ; 0042670d
    PUSH EAX                            ; 00426714
    LEA EAX,[EBX + 0x20]                ; 00426715
    PUSH EAX                            ; 00426718
    PUSH ESI                            ; 00426719
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0042671a
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0 ; 00426721
        ;   XREF to: 005349a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 00426726
    TEST EAX,EAX                        ; 00426729
    JZ 0x00426807                       ; 0042672b
        ;   XREF to: 00426807 (CONDITIONAL_JUMP)  ; LAB_00426807
    LEA EAX,[ESP + 0x164]               ; 00426731
    PUSH EAX                            ; 00426738
    LEA EAX,[ESP + 0xd4]                ; 00426739
    PUSH EAX                            ; 00426740
    CALL core_dirmat.cpp_FUN_0045f3e0   ; 00426741
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00426746
    FLD float ptr [0x005fd234]          ; 00426749 | DAT_005fd234
    FMUL float ptr [EBP + 0x18]         ; 0042674f
    FSTP float ptr [ESP + 0x1a4]        ; 00426752
    MOV EAX,dword ptr [ESP + 0x1a4]     ; 00426759
    LEA ESI,[ESP + 0x188]               ; 00426760
    MOV dword ptr [ESP + 0x154],EAX     ; 00426767
    LEA EAX,[ESP + 0x14c]               ; 0042676e
    LEA EDI,[ESP + 0x158]               ; 00426775
    PUSH EAX                            ; 0042677c
    LEA EAX,[ESP + 0xd4]                ; 0042677d
    XOR EDX,EDX                         ; 00426784
    PUSH EAX                            ; 00426786
    MOV dword ptr [ESP + 0x154],EDX     ; 00426787
    MOV dword ptr [ESP + 0x158],EDX     ; 0042678e
    CALL core_dirmat.cpp_FUN_0045f690   ; 00426795
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x190]               ; 0042679a
    ADD ESP,0x8                         ; 004267a1
    LEA EAX,[ESP + 0x158]               ; 004267a4
    MOVSD ES:EDI,ESI                    ; 004267ab
    MOVSD ES:EDI,ESI                    ; 004267ac
    MOVSD ES:EDI,ESI                    ; 004267ad
    PUSH EAX                            ; 004267ae
    LEA EDI,[ESP + 0x198]               ; 004267af
    LEA ESI,[EBX + 0x20]                ; 004267b6
    PUSH EBX                            ; 004267b9
    MOVSD ES:EDI,ESI                    ; 004267ba
    MOVSD ES:EDI,ESI                    ; 004267bb
    MOVSD ES:EDI,ESI                    ; 004267bc
    CALL core_charactr.cpp_FUN_0042d750 ; 004267bd
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    LEA EDI,[ESP + 0x178]               ; 004267c2
    LEA ESI,[EBX + 0x20]                ; 004267c9
    ADD ESP,0x8                         ; 004267cc
    MOVSD ES:EDI,ESI                    ; 004267cf
    MOVSD ES:EDI,ESI                    ; 004267d0
    MOVSD ES:EDI,ESI                    ; 004267d1
    MOV ESI,dword ptr [ESP + 0x1a0]     ; 004267d2
    MOV EAX,dword ptr [ESP + 0x194]     ; 004267d9
    MOV dword ptr [ESI],EAX             ; 004267e0
    MOV EAX,dword ptr [ESP + 0x198]     ; 004267e2
    MOV dword ptr [ESI + 0x4],EAX       ; 004267e9
    MOV EAX,dword ptr [ESP + 0x19c]     ; 004267ec
    MOV dword ptr [ESI + 0x8],EAX       ; 004267f3
    LEA EAX,[ESP + 0x170]               ; 004267f6
    PUSH EAX                            ; 004267fd
    PUSH EBX                            ; 004267fe
    CALL core_bugs.cpp_FUN_00427e00     ; 004267ff
        ;   XREF to: 00427e00 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_00427e00()
    ADD ESP,0x8                         ; 00426804
    PUSH EBX                            ; 00426807
        ;   Label: LAB_00426807
    CALL core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_00425b00 ; 00426808
        ;   XREF to: 00425b00 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_00425b00(CBugs * this_ptr)
    ADD ESP,0x4                         ; 0042680d
    JMP 0x0042642c                      ; 00426810
        ;   XREF to: 0042642c (UNCONDITIONAL_JUMP)  ; LAB_0042642c
    FLD float ptr [ESP + 0x17c]         ; 00426815
        ;   Label: LAB_00426815
    FABS                                ; 0042681c
    FCOMP double ptr [0x005d5120]       ; 0042681e | DAT_005d5120
    FNSTSW AX                           ; 00426824
    SAHF                                ; 00426826
    JA 0x004266d9                       ; 00426827
        ;   XREF to: 004266d9 (CONDITIONAL_JUMP)  ; LAB_004266d9
    FLD float ptr [ESP + 0x184]         ; 0042682d
    FABS                                ; 00426834
    FCOMP double ptr [0x005d5120]       ; 00426836 | DAT_005d5120
    FNSTSW AX                           ; 0042683c
    SAHF                                ; 0042683e
    JA 0x004266d9                       ; 0042683f
        ;   XREF to: 004266d9 (CONDITIONAL_JUMP)  ; LAB_004266d9
    PUSH EBX                            ; 00426845
    CALL core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_00425b00 ; 00426846
        ;   XREF to: 00425b00 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_00425b00(CBugs * this_ptr)
    ADD ESP,0x4                         ; 0042684b
    JMP 0x0042642c                      ; 0042684e
        ;   XREF to: 0042642c (UNCONDITIONAL_JUMP)  ; LAB_0042642c

