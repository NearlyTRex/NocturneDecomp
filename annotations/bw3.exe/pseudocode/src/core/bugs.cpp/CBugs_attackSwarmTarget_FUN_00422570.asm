; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_attackSwarmTarget_FUN_00422570(CBugs *this_ptr,float delta_time)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x1b4]:4  local_1b4
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined        Stack[-0x14c]:1  local_14c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_bugs.cpp_CBugs_process_FUN_00421300 at 00421522
;   core_bugs.cpp_CBugs_updateBugsBehavior_FUN_004221c0 at 00422549
;
; Referenced Globals:
;   undefined4 DAT_005b7861
;   undefined4 DAT_005b7869
;   undefined4 DAT_005dcbd4
;   undefined4 g_CCharacterClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423bc0
;   core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_00421c90
;   core_bugs.cpp_FUN_00423050
;   core_bugs.cpp_FUN_00423fb0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
;   core_dirmat.cpp_FUN_0045b800
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_0050c680
;   core_path.cpp_getPathMap_FUN_0050ced0
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0054e420
;   core_xform.cpp_FUN_00583800
;   core_xform.cpp_FUN_00583940
;   core_xform.cpp_multiplyMatrix3x4_FUN_005833e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422570
        ;   Label: core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422570
    PUSH ESI                            ; 00422571
    PUSH EDI                            ; 00422572
    PUSH EBP                            ; 00422573
    MOV EBP,ESP                         ; 00422574
    SUB ESP,0x1a8                       ; 00422576
    AND ESP,0xfffffff8                  ; 0042257c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042257f
    MOV EDX,dword ptr [EBX + 0x1381c]   ; 00422582
    TEST EDX,EDX                        ; 00422588
    JZ 0x004227fe                       ; 0042258a
        ;   XREF to: 004227fe (CONDITIONAL_JUMP)  ; LAB_004227fe
    MOV EDI,dword ptr [EBX + 0xd058]    ; 00422590
    XOR ECX,ECX                         ; 00422596
    XOR ESI,ESI                         ; 00422598
    MOV dword ptr [ESP + 0x1a4],ECX     ; 0042259a
    TEST EDI,EDI                        ; 004225a1
    JLE 0x004225c5                      ; 004225a3
        ;   XREF to: 004225c5 (CONDITIONAL_JUMP)  ; LAB_004225c5
    MOV EAX,EBX                         ; 004225a5
    CMP dword ptr [EAX + 0xd088],0x0    ; 004225a7
        ;   Label: LAB_004225a7
    JL 0x004225b7                       ; 004225ae
        ;   XREF to: 004225b7 (CONDITIONAL_JUMP)  ; LAB_004225b7
    INC dword ptr [ESP + 0x1a4]         ; 004225b0
    INC ESI                             ; 004225b7
        ;   Label: LAB_004225b7
    MOV EDX,dword ptr [EBX + 0xd058]    ; 004225b8
    ADD EAX,0x40                        ; 004225be
    CMP ESI,EDX                         ; 004225c1
    JL 0x004225a7                       ; 004225c3
        ;   XREF to: 004225a7 (CONDITIONAL_JUMP)  ; LAB_004225a7
    MOV EAX,dword ptr [ESP + 0x1a4]     ; 004225c5
        ;   Label: LAB_004225c5
    CMP EAX,dword ptr [EBX + 0xd058]    ; 004225cc
    JL 0x0042280b                       ; 004225d2
        ;   XREF to: 0042280b (CONDITIONAL_JUMP)  ; LAB_0042280b
    CMP dword ptr [ESP + 0x1a4],0x0     ; 004225d8
        ;   Label: LAB_004225d8
    JLE 0x0042264f                      ; 004225e0
        ;   XREF to: 0042264f (CONDITIONAL_JUMP)  ; LAB_0042264f
    FLD float ptr [EBX + 0x1be90]       ; 004225e2
    FSUB float ptr [EBP + 0x18]         ; 004225e8
    FST float ptr [EBX + 0x1be90]       ; 004225eb
    FLDZ                                ; 004225f1
    FCOMPP                              ; 004225f3
    FNSTSW AX                           ; 004225f5
    SAHF                                ; 004225f7
    JC 0x0042264f                       ; 004225f8
        ;   XREF to: 0042264f (CONDITIONAL_JUMP)  ; LAB_0042264f
    MOV EDI,dword ptr [0x007e2cec]      ; 004225fa | g_CCharacterClassInfo.name_hash
    PUSH EDI                            ; 00422600
    MOV EAX,dword ptr [EBX + 0x1381c]   ; 00422601
    PUSH EAX                            ; 00422607
    MOV dword ptr [EBX + 0x1be90],0x3e4ccccd ; 00422608
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00422612
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 00422617
    ADD ESP,0x8                         ; 00422619
    TEST EAX,EAX                        ; 0042261c
    JZ 0x0042264f                       ; 0042261e
        ;   XREF to: 0042264f (CONDITIONAL_JUMP)  ; LAB_0042264f
    MOV EAX,ESP                         ; 00422620
    PUSH EAX                            ; 00422622
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 00422623
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    MOV EDX,0x3f800000                  ; 00422628
    ADD ESP,0x4                         ; 0042262d
    MOV EAX,ESP                         ; 00422630
    MOV dword ptr [ESP + 0x34],EBX      ; 00422632
    PUSH EAX                            ; 00422636
    MOV dword ptr [ESP + 0x3c],EBX      ; 00422637
    MOV dword ptr [ESP + 0x8],EDX       ; 0042263b
    PUSH ESI                            ; 0042263f
    MOV EDI,dword ptr [ESI + 0x154]     ; 00422640
    CALL dword ptr [EDI + 0x108]        ; 00422646
    ADD ESP,0x8                         ; 0042264c
    MOV EAX,dword ptr [EBX + 0x1381c]   ; 0042264f
        ;   Label: LAB_0042264f
    LEA ESI,[EAX + 0x30]                ; 00422655
    PUSH ESI                            ; 00422658
    ADD EAX,0x20                        ; 00422659
    PUSH EAX                            ; 0042265c
    LEA EAX,[ESP + 0x74]                ; 0042265d
    PUSH EAX                            ; 00422661
    CALL core_xform.cpp_FUN_00583940    ; 00422662
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    ADD ESP,0xc                         ; 00422667
    LEA EAX,[EBX + 0x30]                ; 0042266a
    PUSH EAX                            ; 0042266d
    LEA EAX,[EBX + 0x20]                ; 0042266e
    PUSH EAX                            ; 00422671
    LEA EAX,[ESP + 0x44]                ; 00422672
    PUSH EAX                            ; 00422676
    CALL core_xform.cpp_FUN_00583800    ; 00422677
        ;   XREF to: 00583800 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_00583800(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0042267c
    LEA EAX,[ESP + 0x3c]                ; 0042267f
    PUSH EAX                            ; 00422683
    LEA EAX,[ESP + 0x70]                ; 00422684
    PUSH EAX                            ; 00422688
    LEA ESI,[ESP + 0xa4]                ; 00422689
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 00422690
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005833e0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 00422695
    LEA ESI,[ESP + 0xa4]                ; 0042269a
    LEA EDI,[EBX + 0x13824]             ; 004226a1
    ADD ESP,0x8                         ; 004226a7
    MOVSD.REP ES:EDI,ESI                ; 004226aa
    MOV EAX,dword ptr [EBX + 0x13820]   ; 004226ac
    MOV ECX,dword ptr [EBX + 0x13854]   ; 004226b2
    CMP ECX,dword ptr [EAX + 0x2320]    ; 004226b8
    JZ 0x004226ca                       ; 004226be
        ;   XREF to: 004226ca (CONDITIONAL_JUMP)  ; LAB_004226ca
    PUSH ECX                            ; 004226c0
    PUSH EAX                            ; 004226c1
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0054e420 ; 004226c2
        ;   XREF to: 0054e420 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0054e420(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 004226c7
    MOV EDI,dword ptr [EBX + 0xd058]    ; 004226ca
        ;   Label: LAB_004226ca
    XOR ESI,ESI                         ; 004226d0
    TEST EDI,EDI                        ; 004226d2
    JLE 0x00422700                      ; 004226d4
        ;   XREF to: 00422700 (CONDITIONAL_JUMP)  ; LAB_00422700
    LEA EDI,[EBX + 0xd05c]              ; 004226d6
    PUSH dword ptr [EBP + 0x18]         ; 004226dc
        ;   Label: LAB_004226dc
    PUSH EDI                            ; 004226df
    PUSH EBX                            ; 004226e0
    INC ESI                             ; 004226e1
    CALL core_bugs.cpp_FUN_00423050     ; 004226e2
        ;   XREF to: 00423050 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_00423050()
    ADD EDI,0x40                        ; 004226e7
    MOV EAX,dword ptr [EBX + 0xd058]    ; 004226ea
    ADD ESP,0xc                         ; 004226f0
    CMP ESI,EAX                         ; 004226f3
    JL 0x004226dc                       ; 004226f5
        ;   XREF to: 004226dc (CONDITIONAL_JUMP)  ; LAB_004226dc
    LEA EAX,[EAX]                       ; 004226f7
    LEA EDX,[EDX]                       ; 004226fd
    PUSH EBX                            ; 00422700
        ;   Label: LAB_00422700
    LEA EDI,[ESP + 0xf8]                ; 00422701
    LEA ESI,[EBX + 0x1be68]             ; 00422708
    CALL core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423bc0 ; 0042270e
        ;   XREF to: 00423bc0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423bc0(CBugs * this_ptr)
    ADD ESP,0x4                         ; 00422713
    FLD float ptr [ESI + 0x4]           ; 00422716
    FLD float ptr [ESI + 0x8]           ; 00422719
    LEA EAX,[EBX + 0x1be74]             ; 0042271c
    FLD float ptr [ESI]                 ; 00422722
    LEA ESI,[ESP + 0x178]               ; 00422724
    FADD float ptr [EAX]                ; 0042272b
    FXCH ST2                            ; 0042272d
    FADD float ptr [EAX + 0x4]          ; 0042272f
    FXCH                                ; 00422732
    FADD float ptr [EAX + 0x8]          ; 00422734
    FXCH ST2                            ; 00422737
    FSTP float ptr [ESP + 0x178]        ; 00422739
    FSTP float ptr [ESP + 0x17c]        ; 00422740
    FSTP float ptr [ESP + 0x180]        ; 00422747
    MOVSD ES:EDI,ESI                    ; 0042274e
    MOVSD ES:EDI,ESI                    ; 0042274f
    MOVSD ES:EDI,ESI                    ; 00422750
    FLD float ptr [0x005b7869]          ; 00422751 | DAT_005b7869
    FLD float ptr [ESP + 0xf4]          ; 00422757
    FMUL ST1                            ; 0042275e
    FLD float ptr [ESP + 0xf8]          ; 00422760
    FMUL ST2                            ; 00422767
    FLD float ptr [ESP + 0xfc]          ; 00422769
    FMULP ST3                           ; 00422770
    LEA EAX,[EBX + 0x20]                ; 00422772
    LEA EDI,[ESP + 0x130]               ; 00422775
    LEA ESI,[ESP + 0x190]               ; 0042277c
    FXCH                                ; 00422783
    FSTP float ptr [ESP + 0x190]        ; 00422785
    FSTP float ptr [ESP + 0x194]        ; 0042278c
    FSTP float ptr [ESP + 0x198]        ; 00422793
    MOVSD ES:EDI,ESI                    ; 0042279a
    MOVSD ES:EDI,ESI                    ; 0042279b
    MOVSD ES:EDI,ESI                    ; 0042279c
    FLD float ptr [EAX + 0x4]           ; 0042279d
    FLD float ptr [EAX + 0x8]           ; 004227a0
    FLD float ptr [EAX]                 ; 004227a3
    LEA EDI,[ESP + 0x118]               ; 004227a5
    LEA ESI,[ESP + 0x148]               ; 004227ac
    LEA EAX,[ESP + 0x118]               ; 004227b3
    FADD float ptr [ESP + 0x130]        ; 004227ba
    FXCH ST2                            ; 004227c1
    FADD float ptr [ESP + 0x134]        ; 004227c3
    FXCH                                ; 004227ca
    FADD float ptr [ESP + 0x138]        ; 004227cc
    FXCH ST2                            ; 004227d3
    FSTP float ptr [ESP + 0x148]        ; 004227d5
    FSTP float ptr [ESP + 0x14c]        ; 004227dc
    PUSH EAX                            ; 004227e3
    FSTP float ptr [ESP + 0x154]        ; 004227e4
    PUSH EBX                            ; 004227eb
    MOVSD ES:EDI,ESI                    ; 004227ec
    MOVSD ES:EDI,ESI                    ; 004227ed
    MOVSD ES:EDI,ESI                    ; 004227ee
    CALL core_bugs.cpp_FUN_00423fb0     ; 004227ef
        ;   XREF to: 00423fb0 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_00423fb0()
    ADD ESP,0x8                         ; 004227f4
    MOV ESP,EBP                         ; 004227f7
    POP EBP                             ; 004227f9
    POP EDI                             ; 004227fa
    POP ESI                             ; 004227fb
    POP EBX                             ; 004227fc
    RET                                 ; 004227fd
    MOV dword ptr [EBX + 0xd054],EDX    ; 004227fe
        ;   Label: LAB_004227fe
    MOV ESP,EBP                         ; 00422804
    POP EBP                             ; 00422806
    POP EDI                             ; 00422807
    POP ESI                             ; 00422808
    POP EBX                             ; 00422809
    RET                                 ; 0042280a
    LEA ESI,[EBX + 0x20]                ; 0042280b
        ;   Label: LAB_0042280b
    LEA EDI,[ESP + 0x160]               ; 0042280e
    MOV EAX,dword ptr [EBX + 0x1381c]   ; 00422815
    FLD float ptr [ESI + 0x4]           ; 0042281b
    FLD float ptr [ESI + 0x8]           ; 0042281e
    FLD float ptr [ESI]                 ; 00422821
    LEA ESI,[ESP + 0x184]               ; 00422823
    FSUB float ptr [EAX + 0x20]         ; 0042282a
    FXCH ST2                            ; 0042282d
    FSUB float ptr [EAX + 0x24]         ; 0042282f
    FXCH                                ; 00422832
    FSUB float ptr [EAX + 0x28]         ; 00422834
    FXCH ST2                            ; 00422837
    FSTP float ptr [ESP + 0x184]        ; 00422839
    FSTP float ptr [ESP + 0x188]        ; 00422840
    FSTP float ptr [ESP + 0x18c]        ; 00422847
    MOVSD ES:EDI,ESI                    ; 0042284e
    MOVSD ES:EDI,ESI                    ; 0042284f
    MOVSD ES:EDI,ESI                    ; 00422850
    FLD float ptr [ESP + 0x164]         ; 00422851
    FABS                                ; 00422858
    FCOMP double ptr [0x005b7861]       ; 0042285a | DAT_005b7861
    FNSTSW AX                           ; 00422860
    SAHF                                ; 00422862
    JBE 0x004229a5                      ; 00422863
        ;   XREF to: 004229a5 (CONDITIONAL_JUMP)  ; LAB_004229a5
    MOV EAX,dword ptr [EBX + 0x1381c]   ; 00422869
        ;   Label: LAB_00422869
    PUSH EAX                            ; 0042286f
    MOV ESI,dword ptr [EAX + 0x154]     ; 00422870
    CALL dword ptr [ESI + 0xc4]         ; 00422876
    ADD ESP,0x4                         ; 0042287c
    MOV ESI,EAX                         ; 0042287f
    TEST EAX,EAX                        ; 00422881
    JNZ 0x00422899                      ; 00422883
        ;   XREF to: 00422899 (CONDITIONAL_JUMP)  ; LAB_00422899
    MOV EAX,dword ptr [EBX + 0x1381c]   ; 00422885
    ADD EAX,0x20                        ; 0042288b
    PUSH EAX                            ; 0042288e
    CALL core_path.cpp_getPathMap_FUN_0050ced0 ; 0042288f
        ;   XREF to: 0050ced0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_0050ced0(CLocation * location)
    ADD ESP,0x4                         ; 00422894
    MOV ESI,EAX                         ; 00422897
    MOV EDI,dword ptr [EBX + 0x6c]      ; 00422899
        ;   Label: LAB_00422899
    PUSH EDI                            ; 0042289c
    LEA EAX,[ESP + 0x104]               ; 0042289d
    PUSH EAX                            ; 004228a4
    LEA EAX,[EBX + 0x20]                ; 004228a5
    PUSH EAX                            ; 004228a8
    PUSH ESI                            ; 004228a9
    MOV dword ptr [ESP + 0x1b0],EAX     ; 004228aa
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_0050c680 ; 004228b1
        ;   XREF to: 0050c680 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_0050c680(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 004228b6
    TEST EAX,EAX                        ; 004228b9
    JZ 0x00422997                       ; 004228bb
        ;   XREF to: 00422997 (CONDITIONAL_JUMP)  ; LAB_00422997
    LEA EAX,[ESP + 0x100]               ; 004228c1
    PUSH EAX                            ; 004228c8
    LEA EAX,[ESP + 0xd0]                ; 004228c9
    PUSH EAX                            ; 004228d0
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 004228d1
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004228d6
    FLD float ptr [0x005dcbd4]          ; 004228d9 | DAT_005dcbd4
    FMUL float ptr [EBP + 0x18]         ; 004228df
    FSTP float ptr [ESP + 0x19c]        ; 004228e2
    MOV EAX,dword ptr [ESP + 0x19c]     ; 004228e9
    LEA ESI,[ESP + 0x124]               ; 004228f0
    MOV dword ptr [ESP + 0x114],EAX     ; 004228f7
    LEA EAX,[ESP + 0x10c]               ; 004228fe
    LEA EDI,[ESP + 0x16c]               ; 00422905
    PUSH EAX                            ; 0042290c
    LEA EAX,[ESP + 0xd0]                ; 0042290d
    XOR EDX,EDX                         ; 00422914
    PUSH EAX                            ; 00422916
    MOV dword ptr [ESP + 0x114],EDX     ; 00422917
    MOV dword ptr [ESP + 0x118],EDX     ; 0042291e
    CALL core_dirmat.cpp_FUN_0045b800   ; 00422925
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    LEA ESI,[ESP + 0x12c]               ; 0042292a
    ADD ESP,0x8                         ; 00422931
    LEA EAX,[ESP + 0x16c]               ; 00422934
    MOVSD ES:EDI,ESI                    ; 0042293b
    MOVSD ES:EDI,ESI                    ; 0042293c
    MOVSD ES:EDI,ESI                    ; 0042293d
    PUSH EAX                            ; 0042293e
    LEA EDI,[ESP + 0x158]               ; 0042293f
    LEA ESI,[EBX + 0x20]                ; 00422946
    PUSH EBX                            ; 00422949
    MOVSD ES:EDI,ESI                    ; 0042294a
    MOVSD ES:EDI,ESI                    ; 0042294b
    MOVSD ES:EDI,ESI                    ; 0042294c
    CALL core_charactr.cpp_FUN_0042c230 ; 0042294d
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    LEA EDI,[ESP + 0x144]               ; 00422952
    LEA ESI,[EBX + 0x20]                ; 00422959
    ADD ESP,0x8                         ; 0042295c
    MOVSD ES:EDI,ESI                    ; 0042295f
    MOVSD ES:EDI,ESI                    ; 00422960
    MOVSD ES:EDI,ESI                    ; 00422961
    MOV ESI,dword ptr [ESP + 0x1a0]     ; 00422962
    MOV EAX,dword ptr [ESP + 0x154]     ; 00422969
    MOV dword ptr [ESI],EAX             ; 00422970
    MOV EAX,dword ptr [ESP + 0x158]     ; 00422972
    MOV dword ptr [ESI + 0x4],EAX       ; 00422979
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0042297c
    MOV dword ptr [ESI + 0x8],EAX       ; 00422983
    LEA EAX,[ESP + 0x13c]               ; 00422986
    PUSH EAX                            ; 0042298d
    PUSH EBX                            ; 0042298e
    CALL core_bugs.cpp_FUN_00423fb0     ; 0042298f
        ;   XREF to: 00423fb0 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_00423fb0()
    ADD ESP,0x8                         ; 00422994
    PUSH EBX                            ; 00422997
        ;   Label: LAB_00422997
    CALL core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_00421c90 ; 00422998
        ;   XREF to: 00421c90 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_00421c90(CBugs * this_ptr)
    ADD ESP,0x4                         ; 0042299d
    JMP 0x004225d8                      ; 004229a0
        ;   XREF to: 004225d8 (UNCONDITIONAL_JUMP)  ; LAB_004225d8
    FLD float ptr [ESP + 0x160]         ; 004229a5
        ;   Label: LAB_004229a5
    FABS                                ; 004229ac
    FCOMP double ptr [0x005b7861]       ; 004229ae | DAT_005b7861
    FNSTSW AX                           ; 004229b4
    SAHF                                ; 004229b6
    JA 0x00422869                       ; 004229b7
        ;   XREF to: 00422869 (CONDITIONAL_JUMP)  ; LAB_00422869
    FLD float ptr [ESP + 0x168]         ; 004229bd
    FABS                                ; 004229c4
    FCOMP double ptr [0x005b7861]       ; 004229c6 | DAT_005b7861
    FNSTSW AX                           ; 004229cc
    SAHF                                ; 004229ce
    JA 0x00422869                       ; 004229cf
        ;   XREF to: 00422869 (CONDITIONAL_JUMP)  ; LAB_00422869
    PUSH EBX                            ; 004229d5
    CALL core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_00421c90 ; 004229d6
        ;   XREF to: 00421c90 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_00421c90(CBugs * this_ptr)
    ADD ESP,0x4                         ; 004229db
    JMP 0x004225d8                      ; 004229de
        ;   XREF to: 004225d8 (UNCONDITIONAL_JUMP)  ; LAB_004225d8

