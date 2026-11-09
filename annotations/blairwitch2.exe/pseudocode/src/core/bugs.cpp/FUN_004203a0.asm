; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_FUN_004203a0(CBugs *this_ptr,float delta_time)
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
;   core_bugs.cpp_FUN_0041f390 at 0041f42c
;   core_bugs.cpp_FUN_00420000 at 00420389
;
; Referenced Globals:
;   undefined4 DAT_005cca31
;   undefined4 DAT_005cca39
;   undefined4 DAT_005cca41
;   undefined4 DAT_005f3e34
;   undefined4 g_CCharacterClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_0041fad0
;   core_bugs.cpp_FUN_00420e90
;   core_bugs.cpp_FUN_00421a00
;   core_bugs.cpp_FUN_00421dd0
;   core_charactr.cpp_FUN_00423a60
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   core_dirmat.cpp_FUN_00449280
;   core_dirmat.cpp_FUN_00449530
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650
;   core_path.cpp_getPathMap_FUN_00513ea0
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0
;   core_xform.cpp_FUN_00591ad0
;   core_xform.cpp_FUN_00591c10
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004203a0
        ;   Label: core_bugs.cpp_FUN_004203a0
    PUSH ESI                            ; 004203a1
    PUSH EDI                            ; 004203a2
    PUSH EBP                            ; 004203a3
    MOV EBP,ESP                         ; 004203a4
    SUB ESP,0x1a8                       ; 004203a6
    AND ESP,0xfffffff8                  ; 004203ac
    MOV EBX,dword ptr [EBP + 0x14]      ; 004203af
    MOV EDX,dword ptr [EBX + 0x17734]   ; 004203b2
    TEST EDX,EDX                        ; 004203b8
    JZ 0x0042063e                       ; 004203ba
        ;   XREF to: 0042063e (CONDITIONAL_JUMP)  ; LAB_0042063e
    MOV EDI,dword ptr [EBX + 0x10afc]   ; 004203c0
    XOR ECX,ECX                         ; 004203c6
    XOR ESI,ESI                         ; 004203c8
    MOV dword ptr [ESP],ECX             ; 004203ca
    TEST EDI,EDI                        ; 004203cd
    JLE 0x004203ed                      ; 004203cf
        ;   XREF to: 004203ed (CONDITIONAL_JUMP)  ; LAB_004203ed
    MOV EAX,EBX                         ; 004203d1
    CMP dword ptr [EAX + 0x10b2c],0x0   ; 004203d3
        ;   Label: LAB_004203d3
    JL 0x004203df                       ; 004203da
        ;   XREF to: 004203df (CONDITIONAL_JUMP)  ; LAB_004203df
    INC dword ptr [ESP]                 ; 004203dc
    INC ESI                             ; 004203df
        ;   Label: LAB_004203df
    MOV EDX,dword ptr [EBX + 0x10afc]   ; 004203e0
    ADD EAX,0x40                        ; 004203e6
    CMP ESI,EDX                         ; 004203e9
    JL 0x004203d3                       ; 004203eb
        ;   XREF to: 004203d3 (CONDITIONAL_JUMP)  ; LAB_004203d3
    MOV EAX,dword ptr [ESP]             ; 004203ed
        ;   Label: LAB_004203ed
    CMP EAX,dword ptr [EBX + 0x10afc]   ; 004203f0
    JL 0x0042064b                       ; 004203f6
        ;   XREF to: 0042064b (CONDITIONAL_JUMP)  ; LAB_0042064b
    CMP dword ptr [ESP],0x0             ; 004203fc
        ;   Label: LAB_004203fc
    JLE 0x00420489                      ; 00420400
        ;   XREF to: 00420489 (CONDITIONAL_JUMP)  ; LAB_00420489
    FLD float ptr [EBX + 0x1e630]       ; 00420406
    FSUB float ptr [EBP + 0x18]         ; 0042040c
    FST float ptr [EBX + 0x1e630]       ; 0042040f
    FLDZ                                ; 00420415
    FCOMPP                              ; 00420417
    FNSTSW AX                           ; 00420419
    SAHF                                ; 0042041b
    JC 0x00420489                       ; 0042041c
        ;   XREF to: 00420489 (CONDITIONAL_JUMP)  ; LAB_00420489
    MOV EDI,dword ptr [0x007bdc94]      ; 0042041e | g_CCharacterClassInfo.name_hash
    PUSH EDI                            ; 00420424
    MOV EAX,dword ptr [EBX + 0x17734]   ; 00420425
    PUSH EAX                            ; 0042042b
    MOV dword ptr [EBX + 0x1e630],0x3e4ccccd ; 0042042c
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00420436
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV ESI,EAX                         ; 0042043b
    ADD ESP,0x8                         ; 0042043d
    TEST EAX,EAX                        ; 00420440
    JZ 0x00420489                       ; 00420442
        ;   XREF to: 00420489 (CONDITIONAL_JUMP)  ; LAB_00420489
    LEA EAX,[ESP + 0x4]                 ; 00420444
    PUSH EAX                            ; 00420448
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 00420449
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0042044e
    MOV EAX,dword ptr [ESP]             ; 00420451
    MOV dword ptr [ESP + 0x1a4],EAX     ; 00420454
    FILD dword ptr [ESP + 0x1a4]        ; 0042045b
    LEA EAX,[ESP + 0x4]                 ; 00420462
    FMUL double ptr [0x005cca39]        ; 00420466 | DAT_005cca39
    PUSH EAX                            ; 0042046c
    MOV dword ptr [ESP + 0x3c],EBX      ; 0042046d
    MOV dword ptr [ESP + 0x40],EBX      ; 00420471
    PUSH ESI                            ; 00420475
    FSTP float ptr [ESP + 0x10]         ; 00420476
    MOV EDI,dword ptr [ESI + 0x2b0]     ; 0042047a
    CALL dword ptr [EDI + 0x110]        ; 00420480
    ADD ESP,0x8                         ; 00420486
    MOV EAX,dword ptr [EBX + 0x17734]   ; 00420489
        ;   Label: LAB_00420489
    LEA ESI,[EAX + 0x30]                ; 0042048f
    PUSH ESI                            ; 00420492
    ADD EAX,0x20                        ; 00420493
    PUSH EAX                            ; 00420496
    LEA EAX,[ESP + 0x78]                ; 00420497
    PUSH EAX                            ; 0042049b
    CALL core_xform.cpp_FUN_00591c10    ; 0042049c
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    ADD ESP,0xc                         ; 004204a1
    LEA EAX,[EBX + 0x30]                ; 004204a4
    PUSH EAX                            ; 004204a7
    LEA EAX,[EBX + 0x20]                ; 004204a8
    PUSH EAX                            ; 004204ab
    LEA EAX,[ESP + 0x48]                ; 004204ac
    PUSH EAX                            ; 004204b0
    CALL core_xform.cpp_FUN_00591ad0    ; 004204b1
        ;   XREF to: 00591ad0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_00591ad0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 004204b6
    LEA EAX,[ESP + 0x40]                ; 004204b9
    PUSH EAX                            ; 004204bd
    LEA EAX,[ESP + 0x74]                ; 004204be
    PUSH EAX                            ; 004204c2
    LEA ESI,[ESP + 0xa8]                ; 004204c3
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 004204ca
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 004204cf
    LEA ESI,[ESP + 0xa8]                ; 004204d4
    LEA EDI,[EBX + 0x1773c]             ; 004204db
    ADD ESP,0x8                         ; 004204e1
    MOVSD.REP ES:EDI,ESI                ; 004204e4
    MOV EAX,dword ptr [EBX + 0x17738]   ; 004204e6
    MOV EDX,dword ptr [EBX + 0x1776c]   ; 004204ec
    CMP EDX,dword ptr [EAX + 0x2230]    ; 004204f2
    JZ 0x00420504                       ; 004204f8
        ;   XREF to: 00420504 (CONDITIONAL_JUMP)  ; LAB_00420504
    PUSH EDX                            ; 004204fa
    PUSH EAX                            ; 004204fb
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0 ; 004204fc
        ;   XREF to: 005471f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 00420501
    MOV EDI,dword ptr [EBX + 0x10afc]   ; 00420504
        ;   Label: LAB_00420504
    XOR ESI,ESI                         ; 0042050a
    TEST EDI,EDI                        ; 0042050c
    JLE 0x00420540                      ; 0042050e
        ;   XREF to: 00420540 (CONDITIONAL_JUMP)  ; LAB_00420540
    LEA EDI,[EBX + 0x10b00]             ; 00420510
    PUSH dword ptr [EBP + 0x18]         ; 00420516
        ;   Label: LAB_00420516
    PUSH EDI                            ; 00420519
    PUSH EBX                            ; 0042051a
    INC ESI                             ; 0042051b
    CALL core_bugs.cpp_FUN_00420e90     ; 0042051c
        ;   XREF to: 00420e90 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_00420e90()
    ADD EDI,0x40                        ; 00420521
    MOV EAX,dword ptr [EBX + 0x10afc]   ; 00420524
    ADD ESP,0xc                         ; 0042052a
    CMP ESI,EAX                         ; 0042052d
    JL 0x00420516                       ; 0042052f
        ;   XREF to: 00420516 (CONDITIONAL_JUMP)  ; LAB_00420516
    LEA EAX,[EAX]                       ; 00420531
    LEA EDX,[EDX]                       ; 00420537
    LEA EAX,[EAX]                       ; 0042053d
    PUSH EBX                            ; 00420540
        ;   Label: LAB_00420540
    LEA EDI,[ESP + 0x108]               ; 00420541
    LEA ESI,[EBX + 0x1e608]             ; 00420548
    CALL core_bugs.cpp_FUN_00421a00     ; 0042054e
        ;   XREF to: 00421a00 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_FUN_00421a00(CBugs * this_ptr)
    ADD ESP,0x4                         ; 00420553
    FLD float ptr [ESI + 0x4]           ; 00420556
    FLD float ptr [ESI + 0x8]           ; 00420559
    LEA EAX,[EBX + 0x1e614]             ; 0042055c
    FLD float ptr [ESI]                 ; 00420562
    LEA ESI,[ESP + 0x110]               ; 00420564
    FADD float ptr [EAX]                ; 0042056b
    FXCH ST2                            ; 0042056d
    FADD float ptr [EAX + 0x4]          ; 0042056f
    FXCH                                ; 00420572
    FADD float ptr [EAX + 0x8]          ; 00420574
    FXCH ST2                            ; 00420577
    FSTP float ptr [ESP + 0x110]        ; 00420579
    FSTP float ptr [ESP + 0x114]        ; 00420580
    FSTP float ptr [ESP + 0x118]        ; 00420587
    MOVSD ES:EDI,ESI                    ; 0042058e
    MOVSD ES:EDI,ESI                    ; 0042058f
    MOVSD ES:EDI,ESI                    ; 00420590
    FLD float ptr [0x005cca41]          ; 00420591 | DAT_005cca41
    FLD float ptr [ESP + 0x104]         ; 00420597
    FMUL ST1                            ; 0042059e
    FLD float ptr [ESP + 0x108]         ; 004205a0
    FMUL ST2                            ; 004205a7
    FLD float ptr [ESP + 0x10c]         ; 004205a9
    FMULP ST3                           ; 004205b0
    LEA EAX,[EBX + 0x20]                ; 004205b2
    LEA EDI,[ESP + 0xf8]                ; 004205b5
    LEA ESI,[ESP + 0x11c]               ; 004205bc
    FXCH                                ; 004205c3
    FSTP float ptr [ESP + 0x11c]        ; 004205c5
    FSTP float ptr [ESP + 0x120]        ; 004205cc
    FSTP float ptr [ESP + 0x124]        ; 004205d3
    MOVSD ES:EDI,ESI                    ; 004205da
    MOVSD ES:EDI,ESI                    ; 004205db
    MOVSD ES:EDI,ESI                    ; 004205dc
    FLD float ptr [EAX + 0x4]           ; 004205dd
    FLD float ptr [EAX + 0x8]           ; 004205e0
    FLD float ptr [EAX]                 ; 004205e3
    LEA EDI,[ESP + 0x140]               ; 004205e5
    LEA ESI,[ESP + 0x128]               ; 004205ec
    LEA EAX,[ESP + 0x140]               ; 004205f3
    FADD float ptr [ESP + 0xf8]         ; 004205fa
    FXCH ST2                            ; 00420601
    FADD float ptr [ESP + 0xfc]         ; 00420603
    FXCH                                ; 0042060a
    FADD float ptr [ESP + 0x100]        ; 0042060c
    FXCH ST2                            ; 00420613
    FSTP float ptr [ESP + 0x128]        ; 00420615
    FSTP float ptr [ESP + 0x12c]        ; 0042061c
    PUSH EAX                            ; 00420623
    FSTP float ptr [ESP + 0x134]        ; 00420624
    PUSH EBX                            ; 0042062b
    MOVSD ES:EDI,ESI                    ; 0042062c
    MOVSD ES:EDI,ESI                    ; 0042062d
    MOVSD ES:EDI,ESI                    ; 0042062e
    CALL core_bugs.cpp_FUN_00421dd0     ; 0042062f
        ;   XREF to: 00421dd0 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_00421dd0()
    ADD ESP,0x8                         ; 00420634
    MOV ESP,EBP                         ; 00420637
    POP EBP                             ; 00420639
    POP EDI                             ; 0042063a
    POP ESI                             ; 0042063b
    POP EBX                             ; 0042063c
    RET                                 ; 0042063d
    MOV dword ptr [EBX + 0x10af8],EDX   ; 0042063e
        ;   Label: LAB_0042063e
    MOV ESP,EBP                         ; 00420644
    POP EBP                             ; 00420646
    POP EDI                             ; 00420647
    POP ESI                             ; 00420648
    POP EBX                             ; 00420649
    RET                                 ; 0042064a
    LEA ESI,[EBX + 0x20]                ; 0042064b
        ;   Label: LAB_0042064b
    LEA EDI,[ESP + 0x17c]               ; 0042064e
    MOV EAX,dword ptr [EBX + 0x17734]   ; 00420655
    FLD float ptr [ESI + 0x4]           ; 0042065b
    FLD float ptr [ESI + 0x8]           ; 0042065e
    FLD float ptr [ESI]                 ; 00420661
    LEA ESI,[ESP + 0x134]               ; 00420663
    FSUB float ptr [EAX + 0x20]         ; 0042066a
    FXCH ST2                            ; 0042066d
    FSUB float ptr [EAX + 0x24]         ; 0042066f
    FXCH                                ; 00420672
    FSUB float ptr [EAX + 0x28]         ; 00420674
    FXCH ST2                            ; 00420677
    FSTP float ptr [ESP + 0x134]        ; 00420679
    FSTP float ptr [ESP + 0x138]        ; 00420680
    FSTP float ptr [ESP + 0x13c]        ; 00420687
    MOVSD ES:EDI,ESI                    ; 0042068e
    MOVSD ES:EDI,ESI                    ; 0042068f
    MOVSD ES:EDI,ESI                    ; 00420690
    FLD float ptr [ESP + 0x180]         ; 00420691
    FABS                                ; 00420698
    FCOMP double ptr [0x005cca31]       ; 0042069a | DAT_005cca31
    FNSTSW AX                           ; 004206a0
    SAHF                                ; 004206a2
    JBE 0x004207e5                      ; 004206a3
        ;   XREF to: 004207e5 (CONDITIONAL_JUMP)  ; LAB_004207e5
    MOV EAX,dword ptr [EBX + 0x17734]   ; 004206a9
        ;   Label: LAB_004206a9
    PUSH EAX                            ; 004206af
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 004206b0
    CALL dword ptr [ESI + 0xcc]         ; 004206b6
    ADD ESP,0x4                         ; 004206bc
    MOV ESI,EAX                         ; 004206bf
    TEST EAX,EAX                        ; 004206c1
    JNZ 0x004206d9                      ; 004206c3
        ;   XREF to: 004206d9 (CONDITIONAL_JUMP)  ; LAB_004206d9
    MOV EAX,dword ptr [EBX + 0x17734]   ; 004206c5
    ADD EAX,0x20                        ; 004206cb
    PUSH EAX                            ; 004206ce
    CALL core_path.cpp_getPathMap_FUN_00513ea0 ; 004206cf
        ;   XREF to: 00513ea0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_00513ea0(CLocation * location)
    ADD ESP,0x4                         ; 004206d4
    MOV ESI,EAX                         ; 004206d7
    MOV EDI,dword ptr [EBX + 0x6c]      ; 004206d9
        ;   Label: LAB_004206d9
    PUSH EDI                            ; 004206dc
    LEA EAX,[ESP + 0x168]               ; 004206dd
    PUSH EAX                            ; 004206e4
    LEA EAX,[EBX + 0x20]                ; 004206e5
    PUSH EAX                            ; 004206e8
    PUSH ESI                            ; 004206e9
    MOV dword ptr [ESP + 0x1b0],EAX     ; 004206ea
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650 ; 004206f1
        ;   XREF to: 00513650 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 004206f6
    TEST EAX,EAX                        ; 004206f9
    JZ 0x004207d7                       ; 004206fb
        ;   XREF to: 004207d7 (CONDITIONAL_JUMP)  ; LAB_004207d7
    LEA EAX,[ESP + 0x164]               ; 00420701
    PUSH EAX                            ; 00420708
    LEA EAX,[ESP + 0xd4]                ; 00420709
    PUSH EAX                            ; 00420710
    CALL core_dirmat.cpp_FUN_00449280   ; 00420711
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00420716
    FLD float ptr [0x005f3e34]          ; 00420719 | DAT_005f3e34
    FMUL float ptr [EBP + 0x18]         ; 0042071f
    FSTP float ptr [ESP + 0x1a4]        ; 00420722
    MOV EAX,dword ptr [ESP + 0x1a4]     ; 00420729
    LEA ESI,[ESP + 0x188]               ; 00420730
    MOV dword ptr [ESP + 0x154],EAX     ; 00420737
    LEA EAX,[ESP + 0x14c]               ; 0042073e
    LEA EDI,[ESP + 0x158]               ; 00420745
    PUSH EAX                            ; 0042074c
    LEA EAX,[ESP + 0xd4]                ; 0042074d
    XOR EDX,EDX                         ; 00420754
    PUSH EAX                            ; 00420756
    MOV dword ptr [ESP + 0x154],EDX     ; 00420757
    MOV dword ptr [ESP + 0x158],EDX     ; 0042075e
    CALL core_dirmat.cpp_FUN_00449530   ; 00420765
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x190]               ; 0042076a
    ADD ESP,0x8                         ; 00420771
    LEA EAX,[ESP + 0x158]               ; 00420774
    MOVSD ES:EDI,ESI                    ; 0042077b
    MOVSD ES:EDI,ESI                    ; 0042077c
    MOVSD ES:EDI,ESI                    ; 0042077d
    PUSH EAX                            ; 0042077e
    LEA EDI,[ESP + 0x198]               ; 0042077f
    LEA ESI,[EBX + 0x20]                ; 00420786
    PUSH EBX                            ; 00420789
    MOVSD ES:EDI,ESI                    ; 0042078a
    MOVSD ES:EDI,ESI                    ; 0042078b
    MOVSD ES:EDI,ESI                    ; 0042078c
    CALL core_charactr.cpp_FUN_00423a60 ; 0042078d
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    LEA EDI,[ESP + 0x178]               ; 00420792
    LEA ESI,[EBX + 0x20]                ; 00420799
    ADD ESP,0x8                         ; 0042079c
    MOVSD ES:EDI,ESI                    ; 0042079f
    MOVSD ES:EDI,ESI                    ; 004207a0
    MOVSD ES:EDI,ESI                    ; 004207a1
    MOV ESI,dword ptr [ESP + 0x1a0]     ; 004207a2
    MOV EAX,dword ptr [ESP + 0x194]     ; 004207a9
    MOV dword ptr [ESI],EAX             ; 004207b0
    MOV EAX,dword ptr [ESP + 0x198]     ; 004207b2
    MOV dword ptr [ESI + 0x4],EAX       ; 004207b9
    MOV EAX,dword ptr [ESP + 0x19c]     ; 004207bc
    MOV dword ptr [ESI + 0x8],EAX       ; 004207c3
    LEA EAX,[ESP + 0x170]               ; 004207c6
    PUSH EAX                            ; 004207cd
    PUSH EBX                            ; 004207ce
    CALL core_bugs.cpp_FUN_00421dd0     ; 004207cf
        ;   XREF to: 00421dd0 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_00421dd0()
    ADD ESP,0x8                         ; 004207d4
    PUSH EBX                            ; 004207d7
        ;   Label: LAB_004207d7
    CALL core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_0041fad0 ; 004207d8
        ;   XREF to: 0041fad0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_0041fad0(CBugs * this_ptr)
    ADD ESP,0x4                         ; 004207dd
    JMP 0x004203fc                      ; 004207e0
        ;   XREF to: 004203fc (UNCONDITIONAL_JUMP)  ; LAB_004203fc
    FLD float ptr [ESP + 0x17c]         ; 004207e5
        ;   Label: LAB_004207e5
    FABS                                ; 004207ec
    FCOMP double ptr [0x005cca31]       ; 004207ee | DAT_005cca31
    FNSTSW AX                           ; 004207f4
    SAHF                                ; 004207f6
    JA 0x004206a9                       ; 004207f7
        ;   XREF to: 004206a9 (CONDITIONAL_JUMP)  ; LAB_004206a9
    FLD float ptr [ESP + 0x184]         ; 004207fd
    FABS                                ; 00420804
    FCOMP double ptr [0x005cca31]       ; 00420806 | DAT_005cca31
    FNSTSW AX                           ; 0042080c
    SAHF                                ; 0042080e
    JA 0x004206a9                       ; 0042080f
        ;   XREF to: 004206a9 (CONDITIONAL_JUMP)  ; LAB_004206a9
    PUSH EBX                            ; 00420815
    CALL core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_0041fad0 ; 00420816
        ;   XREF to: 0041fad0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_0041fad0(CBugs * this_ptr)
    ADD ESP,0x4                         ; 0042081b
    JMP 0x004203fc                      ; 0042081e
        ;   XREF to: 004203fc (UNCONDITIONAL_JUMP)  ; LAB_004203fc

