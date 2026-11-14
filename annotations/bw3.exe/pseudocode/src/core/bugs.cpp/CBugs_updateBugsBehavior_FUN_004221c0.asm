; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_updateBugsBehavior_FUN_004221c0(CBugs *this_ptr,float delta_time)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[1]:
;   core_bugs.cpp_CBugs_process_FUN_00421300 at 004213c5
;
; Referenced Globals:
;   undefined4 DAT_005b7851
;   undefined4 DAT_005b7859
;   undefined4 DAT_005dcbd4
;
; Called Functions:
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422570
;   core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423bc0
;   core_bugs.cpp_CBugs_setSwarmTarget_FUN_00423cd0
;   core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_00421c90
;   core_bugs.cpp_FUN_00422a00
;   core_bugs.cpp_FUN_00423fb0
;   core_charactr.cpp_FUN_0042c230
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
;   core_dirmat.cpp_FUN_0045b800
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_0050c680
;   core_path.cpp_getPathMap_FUN_0050ced0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004221c0
        ;   Label: core_bugs.cpp_CBugs_updateBugsBehavior_FUN_004221c0
    PUSH ESI                            ; 004221c1
    PUSH EDI                            ; 004221c2
    PUSH EBP                            ; 004221c3
    MOV EBP,ESP                         ; 004221c4
    SUB ESP,0xd8                        ; 004221c6
    AND ESP,0xfffffff8                  ; 004221cc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004221cf
    PUSH dword ptr [EBP + 0x18]         ; 004221d2
    MOV EAX,dword ptr [EBX + 0x154]     ; 004221d5
    PUSH EBX                            ; 004221db
    CALL dword ptr [EAX + 0x144]        ; 004221dc
    ADD ESP,0x8                         ; 004221e2
    MOV EDX,dword ptr [EBX + 0x1bd30]   ; 004221e5
    XOR ECX,ECX                         ; 004221eb
    TEST EDX,EDX                        ; 004221ed
    JZ 0x004222e0                       ; 004221ef
        ;   XREF to: 004222e0 (CONDITIONAL_JUMP)  ; LAB_004222e0
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 004221f5
    TEST ESI,ESI                        ; 004221fb
    JZ 0x004222e0                       ; 004221fd
        ;   XREF to: 004222e0 (CONDITIONAL_JUMP)  ; LAB_004222e0
    LEA EDX,[EBX + 0x20]                ; 00422203
    LEA EDI,[ESP + 0x4c]                ; 00422206
    FLD float ptr [EDX]                 ; 0042220a
    FLD float ptr [EDX + 0x4]           ; 0042220c
    FLD float ptr [EDX + 0x8]           ; 0042220f
    FXCH ST2                            ; 00422212
    FSUB float ptr [ESI + 0x20]         ; 00422214
    FXCH                                ; 00422217
    FSUB float ptr [ESI + 0x24]         ; 00422219
    FXCH ST2                            ; 0042221c
    FSUB float ptr [ESI + 0x28]         ; 0042221e
    FXCH                                ; 00422221
    FSTP float ptr [ESP + 0x70]         ; 00422223
    FXCH                                ; 00422227
    FSTP float ptr [ESP + 0x74]         ; 00422229
    LEA ESI,[ESP + 0x70]                ; 0042222d
    FSTP float ptr [ESP + 0x78]         ; 00422231
    MOVSD ES:EDI,ESI                    ; 00422235
    MOVSD ES:EDI,ESI                    ; 00422236
    MOVSD ES:EDI,ESI                    ; 00422237
    FLD float ptr [ESP + 0x50]          ; 00422238
    FABS                                ; 0042223c
    FCOMP double ptr [0x005b7851]       ; 0042223e | DAT_005b7851
    FNSTSW AX                           ; 00422244
    SAHF                                ; 00422246
    JNC 0x004222e0                      ; 00422247
        ;   XREF to: 004222e0 (CONDITIONAL_JUMP)  ; LAB_004222e0
    FLD float ptr [ESP + 0x4c]          ; 0042224d
    FABS                                ; 00422251
    FCOMP double ptr [0x005b7851]       ; 00422253 | DAT_005b7851
    FNSTSW AX                           ; 00422259
    SAHF                                ; 0042225b
    JNC 0x004222e0                      ; 0042225c
        ;   XREF to: 004222e0 (CONDITIONAL_JUMP)  ; LAB_004222e0
    FLD float ptr [ESP + 0x54]          ; 00422262
    FABS                                ; 00422266
    FCOMP double ptr [0x005b7851]       ; 00422268 | DAT_005b7851
    FNSTSW AX                           ; 0042226e
    SAHF                                ; 00422270
    JNC 0x004222e0                      ; 00422271
        ;   XREF to: 004222e0 (CONDITIONAL_JUMP)  ; LAB_004222e0
    PUSH EBX                            ; 00422277
        ;   Label: LAB_00422277
    CALL core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_00421c90 ; 00422278
        ;   XREF to: 00421c90 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_00421c90(CBugs * this_ptr)
    ADD ESP,0x4                         ; 0042227d
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 00422280
    PUSH EDX                            ; 00422286
    PUSH EBX                            ; 00422287
    CALL core_bugs.cpp_CBugs_setSwarmTarget_FUN_00423cd0 ; 00422288
        ;   XREF to: 00423cd0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_setSwarmTarget_FUN_00423cd0(CBugs * this_ptr, CDemonActor * target)
    MOV ECX,dword ptr [EBX + 0xd054]    ; 0042228d
    ADD ESP,0x8                         ; 00422293
    CMP ECX,0x1                         ; 00422296
    JZ 0x00422545                       ; 00422299
        ;   XREF to: 00422545 (CONDITIONAL_JUMP)  ; LAB_00422545
    MOV ESI,dword ptr [EBX + 0xd058]    ; 0042229f
        ;   Label: LAB_0042229f
    XOR EDI,EDI                         ; 004222a5
    TEST ESI,ESI                        ; 004222a7
    JLE 0x004222d0                      ; 004222a9
        ;   XREF to: 004222d0 (CONDITIONAL_JUMP)  ; LAB_004222d0
    LEA ESI,[EBX + 0xd05c]              ; 004222ab
    PUSH 0x0                            ; 004222b1
        ;   Label: LAB_004222b1
    PUSH dword ptr [EBP + 0x18]         ; 004222b3
    PUSH ESI                            ; 004222b6
    PUSH EBX                            ; 004222b7
    INC EDI                             ; 004222b8
    CALL core_bugs.cpp_FUN_00422a00     ; 004222b9
        ;   XREF to: 00422a00 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_00422a00()
    ADD ESI,0x40                        ; 004222be
    MOV EAX,dword ptr [EBX + 0xd058]    ; 004222c1
    ADD ESP,0x10                        ; 004222c7
    CMP EDI,EAX                         ; 004222ca
    JL 0x004222b1                       ; 004222cc
        ;   XREF to: 004222b1 (CONDITIONAL_JUMP)  ; LAB_004222b1
    MOV EAX,EAX                         ; 004222ce
    PUSH EBX                            ; 004222d0
        ;   Label: LAB_004222d0
    CALL core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423bc0 ; 004222d1
        ;   XREF to: 00423bc0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423bc0(CBugs * this_ptr)
    ADD ESP,0x4                         ; 004222d6
    MOV ESP,EBP                         ; 004222d9
    POP EBP                             ; 004222db
    POP EDI                             ; 004222dc
    POP ESI                             ; 004222dd
    POP EBX                             ; 004222de
    RET                                 ; 004222df
    TEST ECX,ECX                        ; 004222e0
        ;   Label: LAB_004222e0
    JNZ 0x00422277                      ; 004222e2
        ;   XREF to: 00422277 (CONDITIONAL_JUMP)  ; LAB_00422277
    CMP dword ptr [EBX + 0x1bd2c],0x0   ; 004222e4
    JZ 0x00422537                       ; 004222eb
        ;   XREF to: 00422537 (CONDITIONAL_JUMP)  ; LAB_00422537
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004222f1
    TEST EAX,EAX                        ; 004222f7
    JZ 0x00422537                       ; 004222f9
        ;   XREF to: 00422537 (CONDITIONAL_JUMP)  ; LAB_00422537
    PUSH EAX                            ; 004222ff
    MOV EDX,dword ptr [EAX + 0x154]     ; 00422300
    CALL dword ptr [EDX + 0xc4]         ; 00422306
    ADD ESP,0x4                         ; 0042230c
    MOV EDX,EAX                         ; 0042230f
    TEST EAX,EAX                        ; 00422311
    JNZ 0x00422329                      ; 00422313
        ;   XREF to: 00422329 (CONDITIONAL_JUMP)  ; LAB_00422329
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00422315
    ADD EAX,0x20                        ; 0042231b
    PUSH EAX                            ; 0042231e
    CALL core_path.cpp_getPathMap_FUN_0050ced0 ; 0042231f
        ;   XREF to: 0050ced0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_0050ced0(CLocation * location)
    ADD ESP,0x4                         ; 00422324
    MOV EDX,EAX                         ; 00422327
    MOV ECX,dword ptr [EBX + 0x6c]      ; 00422329
        ;   Label: LAB_00422329
    PUSH ECX                            ; 0042232c
    LEA EAX,[ESP + 0x5c]                ; 0042232d
    PUSH EAX                            ; 00422331
    LEA EAX,[EBX + 0x20]                ; 00422332
    PUSH EAX                            ; 00422335
    PUSH EDX                            ; 00422336
    MOV dword ptr [ESP + 0xe0],EAX      ; 00422337
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_0050c680 ; 0042233e
        ;   XREF to: 0050c680 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_0050c680(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 00422343
    TEST EAX,EAX                        ; 00422346
    JZ 0x00422537                       ; 00422348
        ;   XREF to: 00422537 (CONDITIONAL_JUMP)  ; LAB_00422537
    LEA EAX,[ESP + 0x58]                ; 0042234e
    PUSH EAX                            ; 00422352
    LEA EAX,[ESP + 0x4]                 ; 00422353
    PUSH EAX                            ; 00422357
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 00422358
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0042235d
    FLD float ptr [0x005dcbd4]          ; 00422360 | DAT_005dcbd4
    FMUL float ptr [EBP + 0x18]         ; 00422366
    FSTP float ptr [ESP + 0xd4]         ; 00422369
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00422370
    LEA ESI,[ESP + 0x34]                ; 00422377
    MOV dword ptr [ESP + 0x84],EAX      ; 0042237b
    LEA EAX,[ESP + 0x7c]                ; 00422382
    XOR EDI,EDI                         ; 00422386
    PUSH EAX                            ; 00422388
    LEA EAX,[ESP + 0x4]                 ; 00422389
    MOV dword ptr [ESP + 0x80],EDI      ; 0042238d
    PUSH EAX                            ; 00422394
    MOV dword ptr [ESP + 0x88],EDI      ; 00422395
    LEA EDI,[ESP + 0xb4]                ; 0042239c
    CALL core_dirmat.cpp_FUN_0045b800   ; 004223a3
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    LEA ESI,[ESP + 0x3c]                ; 004223a8
    ADD ESP,0x8                         ; 004223ac
    LEA EAX,[ESP + 0xac]                ; 004223af
    MOVSD ES:EDI,ESI                    ; 004223b6
    MOVSD ES:EDI,ESI                    ; 004223b7
    MOVSD ES:EDI,ESI                    ; 004223b8
    PUSH EAX                            ; 004223b9
    LEA EDI,[ESP + 0x98]                ; 004223ba
    LEA ESI,[EBX + 0x20]                ; 004223c1
    PUSH EBX                            ; 004223c4
    MOVSD ES:EDI,ESI                    ; 004223c5
    MOVSD ES:EDI,ESI                    ; 004223c6
    MOVSD ES:EDI,ESI                    ; 004223c7
    CALL core_charactr.cpp_FUN_0042c230 ; 004223c8
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    LEA EDI,[ESP + 0xa8]                ; 004223cd
    ADD ESP,0x8                         ; 004223d4
    LEA ESI,[EBX + 0x20]                ; 004223d7
    MOV EAX,dword ptr [ESP + 0x94]      ; 004223da
    MOV EDX,dword ptr [ESP + 0xd0]      ; 004223e1
    MOVSD ES:EDI,ESI                    ; 004223e8
    MOVSD ES:EDI,ESI                    ; 004223e9
    MOVSD ES:EDI,ESI                    ; 004223ea
    MOV dword ptr [EDX],EAX             ; 004223eb
    MOV EAX,dword ptr [ESP + 0x98]      ; 004223ed
    MOV dword ptr [EDX + 0x4],EAX       ; 004223f4
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004223f7
    LEA EDI,[ESP + 0xb8]                ; 004223fe
    MOV dword ptr [EDX + 0x8],EAX       ; 00422405
    LEA ESI,[ESP + 0x28]                ; 00422408
    FLD float ptr [ESP + 0xa0]          ; 0042240c
    FLD float ptr [ESP + 0xa4]          ; 00422413
    FLD float ptr [ESP + 0xa8]          ; 0042241a
    FXCH ST2                            ; 00422421
    FSUB float ptr [EDX]                ; 00422423
    FXCH                                ; 00422425
    FSUB float ptr [EDX + 0x4]          ; 00422427
    FXCH ST2                            ; 0042242a
    FSUB float ptr [EDX + 0x8]          ; 0042242c
    FXCH                                ; 0042242f
    FSTP float ptr [ESP + 0x28]         ; 00422431
    FXCH                                ; 00422435
    FSTP float ptr [ESP + 0x2c]         ; 00422437
    FSTP float ptr [ESP + 0x30]         ; 0042243b
    LEA EDX,[EBX + 0x1be68]             ; 0042243f
    MOVSD ES:EDI,ESI                    ; 00422445
    MOVSD ES:EDI,ESI                    ; 00422446
    MOVSD ES:EDI,ESI                    ; 00422447
    LEA EAX,[EBX + 0x1be74]             ; 00422448
    FLD float ptr [EDX]                 ; 0042244e
    FLD float ptr [EDX + 0x4]           ; 00422450
    FLD float ptr [EDX + 0x8]           ; 00422453
    LEA EDI,[ESP + 0x88]                ; 00422456
    LEA ESI,[ESP + 0x64]                ; 0042245d
    FXCH ST2                            ; 00422461
    FADD float ptr [EAX]                ; 00422463
    FXCH                                ; 00422465
    FADD float ptr [EAX + 0x4]          ; 00422467
    FXCH ST2                            ; 0042246a
    FADD float ptr [EAX + 0x8]          ; 0042246c
    FXCH                                ; 0042246f
    FSTP float ptr [ESP + 0x64]         ; 00422471
    FXCH                                ; 00422475
    FSTP float ptr [ESP + 0x68]         ; 00422477
    FSTP float ptr [ESP + 0x6c]         ; 0042247b
    MOVSD ES:EDI,ESI                    ; 0042247f
    MOVSD ES:EDI,ESI                    ; 00422480
    MOVSD ES:EDI,ESI                    ; 00422481
    FLD float ptr [0x005b7859]          ; 00422482 | DAT_005b7859
    FLD float ptr [ESP + 0x88]          ; 00422488
    FMUL ST1                            ; 0042248f
    FLD float ptr [ESP + 0x8c]          ; 00422491
    FMUL ST2                            ; 00422498
    FLD float ptr [ESP + 0x90]          ; 0042249a
    FMULP ST3                           ; 004224a1
    LEA EDI,[ESP + 0x40]                ; 004224a3
    LEA ESI,[ESP + 0xc4]                ; 004224a7
    FXCH                                ; 004224ae
    FSTP float ptr [ESP + 0xc4]         ; 004224b0
    FSTP float ptr [ESP + 0xc8]         ; 004224b7
    FSTP float ptr [ESP + 0xcc]         ; 004224be
    MOVSD ES:EDI,ESI                    ; 004224c5
    MOVSD ES:EDI,ESI                    ; 004224c6
    MOVSD ES:EDI,ESI                    ; 004224c7
    MOV EAX,dword ptr [ESP + 0x44]      ; 004224c8
    FLD float ptr [EDX]                 ; 004224cc
    MOV dword ptr [ESP + 0xbc],EAX      ; 004224ce
    FCOMP float ptr [ESP + 0xb8]        ; 004224d5
    FNSTSW AX                           ; 004224dc
    SAHF                                ; 004224de
    JA 0x00422537                       ; 004224df
        ;   XREF to: 00422537 (CONDITIONAL_JUMP)  ; LAB_00422537
    FLD float ptr [EDX + 0x4]           ; 004224e1
    FCOMP float ptr [ESP + 0x44]        ; 004224e4
    FNSTSW AX                           ; 004224e8
    SAHF                                ; 004224ea
    JA 0x00422537                       ; 004224eb
        ;   XREF to: 00422537 (CONDITIONAL_JUMP)  ; LAB_00422537
    FLD float ptr [EDX + 0x8]           ; 004224ed
    FCOMP float ptr [ESP + 0xc0]        ; 004224f0
    FNSTSW AX                           ; 004224f7
    SAHF                                ; 004224f9
    JA 0x00422537                       ; 004224fa
        ;   XREF to: 00422537 (CONDITIONAL_JUMP)  ; LAB_00422537
    FLD float ptr [EDX + 0xc]           ; 004224fc
    FCOMP float ptr [ESP + 0xb8]        ; 004224ff
    FNSTSW AX                           ; 00422506
    SAHF                                ; 00422508
    JC 0x00422537                       ; 00422509
        ;   XREF to: 00422537 (CONDITIONAL_JUMP)  ; LAB_00422537
    FLD float ptr [EDX + 0x10]          ; 0042250b
    FCOMP float ptr [ESP + 0x44]        ; 0042250e
    FNSTSW AX                           ; 00422512
    SAHF                                ; 00422514
    JC 0x00422537                       ; 00422515
        ;   XREF to: 00422537 (CONDITIONAL_JUMP)  ; LAB_00422537
    FLD float ptr [EDX + 0x14]          ; 00422517
    FCOMP float ptr [ESP + 0xc0]        ; 0042251a
    FNSTSW AX                           ; 00422521
    SAHF                                ; 00422523
    JC 0x00422537                       ; 00422524
        ;   XREF to: 00422537 (CONDITIONAL_JUMP)  ; LAB_00422537
    LEA EAX,[ESP + 0xa0]                ; 00422526
    PUSH EAX                            ; 0042252d
    PUSH EBX                            ; 0042252e
    CALL core_bugs.cpp_FUN_00423fb0     ; 0042252f
        ;   XREF to: 00423fb0 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_00423fb0()
    ADD ESP,0x8                         ; 00422534
    PUSH EBX                            ; 00422537
        ;   Label: LAB_00422537
    CALL core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_00421c90 ; 00422538
        ;   XREF to: 00421c90 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_00421c90(CBugs * this_ptr)
    ADD ESP,0x4                         ; 0042253d
    JMP 0x0042229f                      ; 00422540
        ;   XREF to: 0042229f (UNCONDITIONAL_JUMP)  ; LAB_0042229f
    PUSH dword ptr [EBP + 0x18]         ; 00422545
        ;   Label: LAB_00422545
    PUSH EBX                            ; 00422548
    CALL core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422570 ; 00422549
        ;   XREF to: 00422570 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422570(CBugs * this_ptr, float delta_time)
    MOV dword ptr [EBX + 0x1be94],0x1   ; 0042254e
    ADD ESP,0x8                         ; 00422558
    MOV dword ptr [EBX + 0x1be98],0x41200000 ; 0042255b
    MOV ESP,EBP                         ; 00422565
    POP EBP                             ; 00422567
    POP EDI                             ; 00422568
    POP ESI                             ; 00422569
    POP EBX                             ; 0042256a
    RET                                 ; 0042256b

