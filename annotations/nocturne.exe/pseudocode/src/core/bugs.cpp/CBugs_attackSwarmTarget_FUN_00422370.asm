; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_attackSwarmTarget_FUN_00422370(CBugs *this_ptr,float delta_time)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined        Stack[-0x11c]:1  local_11c
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_bugs.cpp_CBugs_process_FUN_00421480 at 0042151c
;   core_bugs.cpp_FUN_00422050 at 0042235a
;
; Referenced Globals:
;   double DOUBLE_00579d2d = 2
;   double DOUBLE_00579d35 = 0.0500000000000000
;   float FLOAT_00579d3d = 0.5
;   float FLOAT_0059aeb4 = 2
;   undefined4 g_CCharacterActorType_00765a60.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_bugs.cpp_CBugs_applySwarmTranslation_FUN_00423a50
;   core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423680
;   core_bugs.cpp_CBugs_updateBugRenderingData_FUN_00422c70
;   core_bugs.cpp_FUN_00421b80
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600
;   core_path.cpp_getPathMap_FUN_004f1e00
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50
;   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422370
        ;   Label: core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422370
    PUSH ESI                            ; 00422371
    PUSH EDI                            ; 00422372
    PUSH EBP                            ; 00422373
    MOV EBP,ESP                         ; 00422374
    SUB ESP,0x174                       ; 00422376
    AND ESP,0xfffffff8                  ; 0042237c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042237f
    MOV EDX,dword ptr [EBX + 0x12960]   ; 00422382
    TEST EDX,EDX                        ; 00422388
    JZ 0x004225a6                       ; 0042238a
        ;   XREF to: 004225a6 (CONDITIONAL_JUMP)  ; LAB_004225a6
    MOV ECX,dword ptr [EBX + 0xbd28]    ; 00422390
    XOR EAX,EAX                         ; 00422396
    XOR EDI,EDI                         ; 00422398
    TEST ECX,ECX                        ; 0042239a
    JLE 0x004223b8                      ; 0042239c
        ;   XREF to: 004223b8 (CONDITIONAL_JUMP)  ; LAB_004223b8
    MOV ESI,EBX                         ; 0042239e
    CMP dword ptr [ESI + 0xbd58],0x0    ; 004223a0
        ;   Label: LAB_004223a0
    JL 0x004223aa                       ; 004223a7
        ;   XREF to: 004223aa (CONDITIONAL_JUMP)  ; LAB_004223aa
    INC EDI                             ; 004223a9
    INC EAX                             ; 004223aa
        ;   Label: LAB_004223aa
    MOV EDX,dword ptr [EBX + 0xbd28]    ; 004223ab
    ADD ESI,0x40                        ; 004223b1
    CMP EAX,EDX                         ; 004223b4
    JL 0x004223a0                       ; 004223b6
        ;   XREF to: 004223a0 (CONDITIONAL_JUMP)  ; LAB_004223a0
    CMP EDI,dword ptr [EBX + 0xbd28]    ; 004223b8
        ;   Label: LAB_004223b8
    JL 0x004225b3                       ; 004223be
        ;   XREF to: 004225b3 (CONDITIONAL_JUMP)  ; LAB_004225b3
    TEST EDI,EDI                        ; 004223c4
        ;   Label: LAB_004223c4
    JLE 0x00422448                      ; 004223c6
        ;   XREF to: 00422448 (CONDITIONAL_JUMP)  ; LAB_00422448
    FLD float ptr [EBX + 0x1985c]       ; 004223cc
    FSUB float ptr [EBP + 0x18]         ; 004223d2
    FST float ptr [EBX + 0x1985c]       ; 004223d5
    FLDZ                                ; 004223db
    FCOMPP                              ; 004223dd
    FNSTSW AX                           ; 004223df
    SAHF                                ; 004223e1
    JC 0x00422448                       ; 004223e2
        ;   XREF to: 00422448 (CONDITIONAL_JUMP)  ; LAB_00422448
    MOV ECX,dword ptr [0x00765a98]      ; 004223e4 | g_CCharacterActorType_00765a60.name_hash
    PUSH ECX                            ; 004223ea
    MOV ESI,dword ptr [EBX + 0x12960]   ; 004223eb
    PUSH ESI                            ; 004223f1
    MOV dword ptr [EBX + 0x1985c],0x3e4ccccd ; 004223f2
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004223fc
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 00422401
    ADD ESP,0x8                         ; 00422403
    TEST EAX,EAX                        ; 00422406
    JZ 0x00422448                       ; 00422408
        ;   XREF to: 00422448 (CONDITIONAL_JUMP)  ; LAB_00422448
    MOV EAX,ESP                         ; 0042240a
    PUSH EAX                            ; 0042240c
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 0042240d
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00422412
    MOV dword ptr [ESP + 0x170],EDI     ; 00422415
    MOV EAX,ESP                         ; 0042241c
    FILD dword ptr [ESP + 0x170]        ; 0042241e
    FMUL double ptr [0x00579d35]        ; 00422425 | DOUBLE_00579d35
    PUSH EAX                            ; 0042242b
    MOV dword ptr [ESP + 0x38],EBX      ; 0042242c
    MOV dword ptr [ESP + 0x3c],EBX      ; 00422430
    PUSH ESI                            ; 00422434
    FSTP float ptr [ESP + 0xc]          ; 00422435
    MOV EDX,dword ptr [ESI + 0x14c]     ; 00422439
    CALL dword ptr [EDX + 0x100]        ; 0042243f
    ADD ESP,0x8                         ; 00422445
    MOV EAX,dword ptr [EBX + 0x12960]   ; 00422448
        ;   Label: LAB_00422448
    LEA EDX,[EAX + 0x30]                ; 0042244e
    PUSH EDX                            ; 00422451
    ADD EAX,0x20                        ; 00422452
    PUSH EAX                            ; 00422455
    LEA EAX,[ESP + 0x74]                ; 00422456
    PUSH EAX                            ; 0042245a
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0042245b
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00422460
    LEA EAX,[EBX + 0x30]                ; 00422463
    PUSH EAX                            ; 00422466
    LEA EAX,[EBX + 0x20]                ; 00422467
    PUSH EAX                            ; 0042246a
    LEA EAX,[ESP + 0x44]                ; 0042246b
    PUSH EAX                            ; 0042246f
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80 ; 00422470
        ;   XREF to: 0055ae80 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00422475
    LEA EAX,[ESP + 0x3c]                ; 00422478
    PUSH EAX                            ; 0042247c
    LEA EAX,[ESP + 0x70]                ; 0042247d
    PUSH EAX                            ; 00422481
    LEA ESI,[ESP + 0xa4]                ; 00422482
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 00422489
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0042248e
    LEA ESI,[ESP + 0xa4]                ; 00422493
    LEA EDI,[EBX + 0x12968]             ; 0042249a
    ADD ESP,0x8                         ; 004224a0
    MOVSD.REP ES:EDI,ESI                ; 004224a3
    MOV EAX,dword ptr [EBX + 0x12964]   ; 004224a5
    MOV EDI,dword ptr [EBX + 0x12998]   ; 004224ab
    CMP EDI,dword ptr [EAX + 0x2230]    ; 004224b1
    JZ 0x004224c3                       ; 004224b7
        ;   XREF to: 004224c3 (CONDITIONAL_JUMP)  ; LAB_004224c3
    PUSH EDI                            ; 004224b9
    PUSH EAX                            ; 004224ba
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50 ; 004224bb
        ;   XREF to: 0051da50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 004224c0
    MOV ECX,dword ptr [EBX + 0xbd28]    ; 004224c3
        ;   Label: LAB_004224c3
    XOR EDI,EDI                         ; 004224c9
    TEST ECX,ECX                        ; 004224cb
    JLE 0x004224f0                      ; 004224cd
        ;   XREF to: 004224f0 (CONDITIONAL_JUMP)  ; LAB_004224f0
    LEA ESI,[EBX + 0xbd2c]              ; 004224cf
    PUSH dword ptr [EBP + 0x18]         ; 004224d5
        ;   Label: LAB_004224d5
    PUSH ESI                            ; 004224d8
    PUSH EBX                            ; 004224d9
    INC EDI                             ; 004224da
    CALL core_bugs.cpp_CBugs_updateBugRenderingData_FUN_00422c70 ; 004224db
        ;   XREF to: 00422c70 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_updateBugRenderingData_FUN_00422c70(CBugs * this_ptr, SBug * bug_data, float delta_time)
    ADD ESI,0x40                        ; 004224e0
    MOV ECX,dword ptr [EBX + 0xbd28]    ; 004224e3
    ADD ESP,0xc                         ; 004224e9
    CMP EDI,ECX                         ; 004224ec
    JL 0x004224d5                       ; 004224ee
        ;   XREF to: 004224d5 (CONDITIONAL_JUMP)  ; LAB_004224d5
    PUSH EBX                            ; 004224f0
        ;   Label: LAB_004224f0
    CALL core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423680 ; 004224f1
        ;   XREF to: 00423680 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423680(CBugs * this_ptr)
    LEA EAX,[EBX + 0x19834]             ; 004224f6
    LEA ESI,[EBX + 0x19840]             ; 004224fc
    FLD float ptr [EAX]                 ; 00422502
    FADD float ptr [ESI]                ; 00422504
    ADD ESP,0x4                         ; 00422506
    FST float ptr [ESP + 0x130]         ; 00422509
    FLD float ptr [EAX + 0x4]           ; 00422510
    FADD float ptr [ESI + 0x4]          ; 00422513
    FXCH                                ; 00422516
    FLD float ptr [0x00579d3d]          ; 00422518 | FLOAT_00579d3d
    FXCH                                ; 0042251e
    FMUL ST1                            ; 00422520
    FXCH ST2                            ; 00422522
    FST float ptr [ESP + 0x134]         ; 00422524
    FLD float ptr [EAX + 0x8]           ; 0042252b
    FADD float ptr [ESI + 0x8]          ; 0042252e
    FXCH                                ; 00422531
    FMUL ST2                            ; 00422533
    FXCH                                ; 00422535
    FST float ptr [ESP + 0x138]         ; 00422537
    FMULP ST2                           ; 0042253e
    LEA EAX,[EBX + 0x20]                ; 00422540
    FXCH ST2                            ; 00422543
    FSTP float ptr [ESP + 0x100]        ; 00422545
    FXCH                                ; 0042254c
    FSTP float ptr [ESP + 0x104]        ; 0042254e
    FSTP float ptr [ESP + 0x108]        ; 00422555
    FLD float ptr [EAX]                 ; 0042255c
    FADD float ptr [ESP + 0x100]        ; 0042255e
    FSTP float ptr [ESP + 0x154]        ; 00422565
    FLD float ptr [EAX + 0x4]           ; 0042256c
    FADD float ptr [ESP + 0x104]        ; 0042256f
    FSTP float ptr [ESP + 0x158]        ; 00422576
    FLD float ptr [EAX + 0x8]           ; 0042257d
    LEA EAX,[ESP + 0x154]               ; 00422580
    PUSH EAX                            ; 00422587
    FADD float ptr [ESP + 0x10c]        ; 00422588
    PUSH EBX                            ; 0042258f
    FSTP float ptr [ESP + 0x164]        ; 00422590
    CALL core_bugs.cpp_CBugs_applySwarmTranslation_FUN_00423a50 ; 00422597
        ;   XREF to: 00423a50 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_applySwarmTranslation_FUN_00423a50(CBugs * this_ptr, CVector3f * new_position)
    ADD ESP,0x8                         ; 0042259c
    MOV ESP,EBP                         ; 0042259f
    POP EBP                             ; 004225a1
    POP EDI                             ; 004225a2
    POP ESI                             ; 004225a3
    POP EBX                             ; 004225a4
    RET                                 ; 004225a5
    MOV dword ptr [EBX + 0xbd24],EDX    ; 004225a6
        ;   Label: LAB_004225a6
    MOV ESP,EBP                         ; 004225ac
    POP EBP                             ; 004225ae
    POP EDI                             ; 004225af
    POP ESI                             ; 004225b0
    POP EBX                             ; 004225b1
    RET                                 ; 004225b2
    LEA EAX,[EBX + 0x20]                ; 004225b3
        ;   Label: LAB_004225b3
    MOV ESI,dword ptr [EBX + 0x12960]   ; 004225b6
    FLD float ptr [EAX]                 ; 004225bc
    FSUB float ptr [ESI + 0x20]         ; 004225be
    FSTP float ptr [ESP + 0x13c]        ; 004225c1
    FLD float ptr [EAX + 0x4]           ; 004225c8
    FSUB float ptr [ESI + 0x24]         ; 004225cb
    FST float ptr [ESP + 0x140]         ; 004225ce
    FLD float ptr [EAX + 0x8]           ; 004225d5
    FXCH                                ; 004225d8
    FABS                                ; 004225da
    FXCH                                ; 004225dc
    FSUB float ptr [ESI + 0x28]         ; 004225de
    FSTP float ptr [ESP + 0x144]        ; 004225e1
    FCOMP double ptr [0x00579d2d]       ; 004225e8 | DOUBLE_00579d2d
    FNSTSW AX                           ; 004225ee
    SAHF                                ; 004225f0
    JBE 0x00422753                      ; 004225f1
        ;   XREF to: 00422753 (CONDITIONAL_JUMP)  ; LAB_00422753
    MOV EAX,dword ptr [EBX + 0x12960]   ; 004225f7
        ;   Label: LAB_004225f7
    PUSH EAX                            ; 004225fd
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004225fe
    CALL dword ptr [EDX + 0xbc]         ; 00422604
    ADD ESP,0x4                         ; 0042260a
    MOV EDX,EAX                         ; 0042260d
    TEST EAX,EAX                        ; 0042260f
    JNZ 0x00422627                      ; 00422611
        ;   XREF to: 00422627 (CONDITIONAL_JUMP)  ; LAB_00422627
    MOV EAX,dword ptr [EBX + 0x12960]   ; 00422613
    ADD EAX,0x20                        ; 00422619
    PUSH EAX                            ; 0042261c
    CALL core_path.cpp_getPathMap_FUN_004f1e00 ; 0042261d
        ;   XREF to: 004f1e00 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_004f1e00(CLocation * location)
    ADD ESP,0x4                         ; 00422622
    MOV EDX,EAX                         ; 00422625
    MOV ESI,dword ptr [EBX + 0x6c]      ; 00422627
        ;   Label: LAB_00422627
    PUSH ESI                            ; 0042262a
    LEA EAX,[ESP + 0x128]               ; 0042262b
    PUSH EAX                            ; 00422632
    LEA ESI,[EBX + 0x20]                ; 00422633
    PUSH ESI                            ; 00422636
    PUSH EDX                            ; 00422637
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600 ; 00422638
        ;   XREF to: 004f1600 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 0042263d
    TEST EAX,EAX                        ; 00422640
    JZ 0x00422745                       ; 00422642
        ;   XREF to: 00422745 (CONDITIONAL_JUMP)  ; LAB_00422745
    LEA EAX,[ESP + 0x124]               ; 00422648
    PUSH EAX                            ; 0042264f
    LEA EAX,[ESP + 0xd0]                ; 00422650
    PUSH EAX                            ; 00422657
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 00422658
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    FLD float ptr [0x0059aeb4]          ; 0042265d | FLOAT_0059aeb4
    ADD ESP,0x8                         ; 00422663
    XOR EAX,EAX                         ; 00422666
    FMUL float ptr [EBP + 0x18]         ; 00422668
    MOV dword ptr [ESP + 0xf4],EAX      ; 0042266b
    MOV dword ptr [ESP + 0xf8],EAX      ; 00422672
    FSTP float ptr [ESP + 0x16c]        ; 00422679
    MOV EAX,dword ptr [ESP + 0x16c]     ; 00422680
    MOV dword ptr [ESP + 0xfc],EAX      ; 00422687
    LEA EAX,[ESP + 0xf4]                ; 0042268e
    PUSH EAX                            ; 00422695
    LEA EAX,[ESP + 0x110]               ; 00422696
    PUSH EAX                            ; 0042269d
    LEA EAX,[ESP + 0xd4]                ; 0042269e
    PUSH EAX                            ; 004226a5
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 004226a6
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 004226ab
    MOV EAX,dword ptr [ESI]             ; 004226ae
    MOV dword ptr [ESP + 0x148],EAX     ; 004226b0
    LEA EAX,[ESI + 0x4]                 ; 004226b7
    MOV dword ptr [ESP + 0x16c],EAX     ; 004226ba
    MOV EAX,dword ptr [EAX]             ; 004226c1
    MOV dword ptr [ESP + 0x14c],EAX     ; 004226c3
    LEA EAX,[ESI + 0x8]                 ; 004226ca
    MOV dword ptr [ESP + 0x170],EAX     ; 004226cd
    MOV EAX,dword ptr [EAX]             ; 004226d4
    MOV dword ptr [ESP + 0x150],EAX     ; 004226d6
    LEA EAX,[ESP + 0x10c]               ; 004226dd
    PUSH EAX                            ; 004226e4
    PUSH EBX                            ; 004226e5
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 004226e6
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004226eb
    MOV EAX,dword ptr [ESI]             ; 004226ee
    MOV dword ptr [ESP + 0x118],EAX     ; 004226f0
    MOV EAX,dword ptr [ESP + 0x16c]     ; 004226f7
    MOV EAX,dword ptr [EAX]             ; 004226fe
    MOV dword ptr [ESP + 0x11c],EAX     ; 00422700
    MOV EAX,dword ptr [ESP + 0x170]     ; 00422707
    MOV EAX,dword ptr [EAX]             ; 0042270e
    MOV dword ptr [ESP + 0x120],EAX     ; 00422710
    MOV EAX,dword ptr [ESP + 0x148]     ; 00422717
    MOV dword ptr [ESI],EAX             ; 0042271e
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00422720
    MOV dword ptr [ESI + 0x4],EAX       ; 00422727
    MOV EAX,dword ptr [ESP + 0x150]     ; 0042272a
    MOV dword ptr [ESI + 0x8],EAX       ; 00422731
    LEA EAX,[ESP + 0x118]               ; 00422734
    PUSH EAX                            ; 0042273b
    PUSH EBX                            ; 0042273c
    CALL core_bugs.cpp_CBugs_applySwarmTranslation_FUN_00423a50 ; 0042273d
        ;   XREF to: 00423a50 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_applySwarmTranslation_FUN_00423a50(CBugs * this_ptr, CVector3f * new_position)
    ADD ESP,0x8                         ; 00422742
    PUSH EBX                            ; 00422745
        ;   Label: LAB_00422745
    CALL core_bugs.cpp_FUN_00421b80     ; 00422746
        ;   XREF to: 00421b80 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_FUN_00421b80(CBugs * this_ptr)
    ADD ESP,0x4                         ; 0042274b
    JMP 0x004223c4                      ; 0042274e
        ;   XREF to: 004223c4 (UNCONDITIONAL_JUMP)  ; LAB_004223c4
    FLD float ptr [ESP + 0x13c]         ; 00422753
        ;   Label: LAB_00422753
    FABS                                ; 0042275a
    FCOMP double ptr [0x00579d2d]       ; 0042275c | DOUBLE_00579d2d
    FNSTSW AX                           ; 00422762
    SAHF                                ; 00422764
    JA 0x004225f7                       ; 00422765
        ;   XREF to: 004225f7 (CONDITIONAL_JUMP)  ; LAB_004225f7
    FLD float ptr [ESP + 0x144]         ; 0042276b
    FABS                                ; 00422772
    FCOMP double ptr [0x00579d2d]       ; 00422774 | DOUBLE_00579d2d
    FNSTSW AX                           ; 0042277a
    SAHF                                ; 0042277c
    JA 0x004225f7                       ; 0042277d
        ;   XREF to: 004225f7 (CONDITIONAL_JUMP)  ; LAB_004225f7
    PUSH EBX                            ; 00422783
    CALL core_bugs.cpp_FUN_00421b80     ; 00422784
        ;   XREF to: 00421b80 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_FUN_00421b80(CBugs * this_ptr)
    ADD ESP,0x4                         ; 00422789
    JMP 0x004223c4                      ; 0042278c
        ;   XREF to: 004223c4 (UNCONDITIONAL_JUMP)  ; LAB_004223c4

