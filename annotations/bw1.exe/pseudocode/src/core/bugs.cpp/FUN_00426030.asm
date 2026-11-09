; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_FUN_00426030(CBugs *this_ptr,float delta_time)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[1]:
;   core_bugs.cpp_FUN_004253c0 at 00425400
;
; Referenced Globals:
;   undefined4 DAT_005d5110
;   undefined4 DAT_005d5118
;   undefined4 DAT_005fd234
;
; Called Functions:
;   core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_00425b00
;   core_bugs.cpp_FUN_004263d0
;   core_bugs.cpp_FUN_00426870
;   core_bugs.cpp_FUN_00427a30
;   core_bugs.cpp_FUN_00427b40
;   core_bugs.cpp_FUN_00427e00
;   core_charactr.cpp_FUN_0042d750
;   core_dirmat.cpp_FUN_0045f3e0
;   core_dirmat.cpp_FUN_0045f690
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0
;   core_path.cpp_getPathMap_FUN_005351f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00426030
        ;   Label: core_bugs.cpp_FUN_00426030
    PUSH ESI                            ; 00426031
    PUSH EDI                            ; 00426032
    PUSH EBP                            ; 00426033
    MOV EBP,ESP                         ; 00426034
    SUB ESP,0xd8                        ; 00426036
    AND ESP,0xfffffff8                  ; 0042603c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042603f
    PUSH dword ptr [EBP + 0x18]         ; 00426042
    MOV EAX,dword ptr [EBX + 0x154]     ; 00426045
    PUSH EBX                            ; 0042604b
    CALL dword ptr [EAX + 0x144]        ; 0042604c
    ADD ESP,0x8                         ; 00426052
    MOV EDX,dword ptr [EBX + 0x19c48]   ; 00426055
    XOR ECX,ECX                         ; 0042605b
    TEST EDX,EDX                        ; 0042605d
    JZ 0x00426150                       ; 0042605f
        ;   XREF to: 00426150 (CONDITIONAL_JUMP)  ; LAB_00426150
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 00426065
    TEST ESI,ESI                        ; 0042606b
    JZ 0x00426150                       ; 0042606d
        ;   XREF to: 00426150 (CONDITIONAL_JUMP)  ; LAB_00426150
    LEA EDX,[EBX + 0x20]                ; 00426073
    LEA EDI,[ESP + 0x4c]                ; 00426076
    FLD float ptr [EDX]                 ; 0042607a
    FLD float ptr [EDX + 0x4]           ; 0042607c
    FLD float ptr [EDX + 0x8]           ; 0042607f
    FXCH ST2                            ; 00426082
    FSUB float ptr [ESI + 0x20]         ; 00426084
    FXCH                                ; 00426087
    FSUB float ptr [ESI + 0x24]         ; 00426089
    FXCH ST2                            ; 0042608c
    FSUB float ptr [ESI + 0x28]         ; 0042608e
    FXCH                                ; 00426091
    FSTP float ptr [ESP + 0x70]         ; 00426093
    FXCH                                ; 00426097
    FSTP float ptr [ESP + 0x74]         ; 00426099
    LEA ESI,[ESP + 0x70]                ; 0042609d
    FSTP float ptr [ESP + 0x78]         ; 004260a1
    MOVSD ES:EDI,ESI                    ; 004260a5
    MOVSD ES:EDI,ESI                    ; 004260a6
    MOVSD ES:EDI,ESI                    ; 004260a7
    FLD float ptr [ESP + 0x50]          ; 004260a8
    FABS                                ; 004260ac
    FCOMP double ptr [0x005d5110]       ; 004260ae | DAT_005d5110
    FNSTSW AX                           ; 004260b4
    SAHF                                ; 004260b6
    JNC 0x00426150                      ; 004260b7
        ;   XREF to: 00426150 (CONDITIONAL_JUMP)  ; LAB_00426150
    FLD float ptr [ESP + 0x4c]          ; 004260bd
    FABS                                ; 004260c1
    FCOMP double ptr [0x005d5110]       ; 004260c3 | DAT_005d5110
    FNSTSW AX                           ; 004260c9
    SAHF                                ; 004260cb
    JNC 0x00426150                      ; 004260cc
        ;   XREF to: 00426150 (CONDITIONAL_JUMP)  ; LAB_00426150
    FLD float ptr [ESP + 0x54]          ; 004260d2
    FABS                                ; 004260d6
    FCOMP double ptr [0x005d5110]       ; 004260d8 | DAT_005d5110
    FNSTSW AX                           ; 004260de
    SAHF                                ; 004260e0
    JNC 0x00426150                      ; 004260e1
        ;   XREF to: 00426150 (CONDITIONAL_JUMP)  ; LAB_00426150
    PUSH EBX                            ; 004260e7
        ;   Label: LAB_004260e7
    CALL core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_00425b00 ; 004260e8
        ;   XREF to: 00425b00 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_00425b00(CBugs * this_ptr)
    ADD ESP,0x4                         ; 004260ed
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 004260f0
    PUSH EDX                            ; 004260f6
    PUSH EBX                            ; 004260f7
    CALL core_bugs.cpp_FUN_00427b40     ; 004260f8
        ;   XREF to: 00427b40 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_FUN_00427b40(CBugs * this_ptr, CDemonActor * target)
    MOV ECX,dword ptr [EBX + 0xc268]    ; 004260fd
    ADD ESP,0x8                         ; 00426103
    CMP ECX,0x1                         ; 00426106
    JZ 0x004263b5                       ; 00426109
        ;   XREF to: 004263b5 (CONDITIONAL_JUMP)  ; LAB_004263b5
    MOV ESI,dword ptr [EBX + 0xc26c]    ; 0042610f
        ;   Label: LAB_0042610f
    XOR EDI,EDI                         ; 00426115
    TEST ESI,ESI                        ; 00426117
    JLE 0x00426140                      ; 00426119
        ;   XREF to: 00426140 (CONDITIONAL_JUMP)  ; LAB_00426140
    LEA ESI,[EBX + 0xc270]              ; 0042611b
    PUSH 0x0                            ; 00426121
        ;   Label: LAB_00426121
    PUSH dword ptr [EBP + 0x18]         ; 00426123
    PUSH ESI                            ; 00426126
    PUSH EBX                            ; 00426127
    INC EDI                             ; 00426128
    CALL core_bugs.cpp_FUN_00426870     ; 00426129
        ;   XREF to: 00426870 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_00426870()
    ADD ESI,0x40                        ; 0042612e
    MOV EAX,dword ptr [EBX + 0xc26c]    ; 00426131
    ADD ESP,0x10                        ; 00426137
    CMP EDI,EAX                         ; 0042613a
    JL 0x00426121                       ; 0042613c
        ;   XREF to: 00426121 (CONDITIONAL_JUMP)  ; LAB_00426121
    MOV EAX,EAX                         ; 0042613e
    PUSH EBX                            ; 00426140
        ;   Label: LAB_00426140
    CALL core_bugs.cpp_FUN_00427a30     ; 00426141
        ;   XREF to: 00427a30 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_FUN_00427a30(CBugs * this_ptr)
    ADD ESP,0x4                         ; 00426146
    MOV ESP,EBP                         ; 00426149
    POP EBP                             ; 0042614b
    POP EDI                             ; 0042614c
    POP ESI                             ; 0042614d
    POP EBX                             ; 0042614e
    RET                                 ; 0042614f
    TEST ECX,ECX                        ; 00426150
        ;   Label: LAB_00426150
    JNZ 0x004260e7                      ; 00426152
        ;   XREF to: 004260e7 (CONDITIONAL_JUMP)  ; LAB_004260e7
    CMP dword ptr [EBX + 0x19c44],0x0   ; 00426154
    JZ 0x004263a7                       ; 0042615b
        ;   XREF to: 004263a7 (CONDITIONAL_JUMP)  ; LAB_004263a7
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00426161
    TEST EAX,EAX                        ; 00426167
    JZ 0x004263a7                       ; 00426169
        ;   XREF to: 004263a7 (CONDITIONAL_JUMP)  ; LAB_004263a7
    PUSH EAX                            ; 0042616f
    MOV EDX,dword ptr [EAX + 0x154]     ; 00426170
    CALL dword ptr [EDX + 0xc4]         ; 00426176
    ADD ESP,0x4                         ; 0042617c
    MOV EDX,EAX                         ; 0042617f
    TEST EAX,EAX                        ; 00426181
    JNZ 0x00426199                      ; 00426183
        ;   XREF to: 00426199 (CONDITIONAL_JUMP)  ; LAB_00426199
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00426185
    ADD EAX,0x20                        ; 0042618b
    PUSH EAX                            ; 0042618e
    CALL core_path.cpp_getPathMap_FUN_005351f0 ; 0042618f
        ;   XREF to: 005351f0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_005351f0(CLocation * location)
    ADD ESP,0x4                         ; 00426194
    MOV EDX,EAX                         ; 00426197
    MOV ECX,dword ptr [EBX + 0x6c]      ; 00426199
        ;   Label: LAB_00426199
    PUSH ECX                            ; 0042619c
    LEA EAX,[ESP + 0x5c]                ; 0042619d
    PUSH EAX                            ; 004261a1
    LEA EAX,[EBX + 0x20]                ; 004261a2
    PUSH EAX                            ; 004261a5
    PUSH EDX                            ; 004261a6
    MOV dword ptr [ESP + 0xe0],EAX      ; 004261a7
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0 ; 004261ae
        ;   XREF to: 005349a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 004261b3
    TEST EAX,EAX                        ; 004261b6
    JZ 0x004263a7                       ; 004261b8
        ;   XREF to: 004263a7 (CONDITIONAL_JUMP)  ; LAB_004263a7
    LEA EAX,[ESP + 0x58]                ; 004261be
    PUSH EAX                            ; 004261c2
    LEA EAX,[ESP + 0x4]                 ; 004261c3
    PUSH EAX                            ; 004261c7
    CALL core_dirmat.cpp_FUN_0045f3e0   ; 004261c8
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004261cd
    FLD float ptr [0x005fd234]          ; 004261d0 | DAT_005fd234
    FMUL float ptr [EBP + 0x18]         ; 004261d6
    FSTP float ptr [ESP + 0xd4]         ; 004261d9
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004261e0
    LEA ESI,[ESP + 0x34]                ; 004261e7
    MOV dword ptr [ESP + 0x84],EAX      ; 004261eb
    LEA EAX,[ESP + 0x7c]                ; 004261f2
    XOR EDI,EDI                         ; 004261f6
    PUSH EAX                            ; 004261f8
    LEA EAX,[ESP + 0x4]                 ; 004261f9
    MOV dword ptr [ESP + 0x80],EDI      ; 004261fd
    PUSH EAX                            ; 00426204
    MOV dword ptr [ESP + 0x88],EDI      ; 00426205
    LEA EDI,[ESP + 0xb4]                ; 0042620c
    CALL core_dirmat.cpp_FUN_0045f690   ; 00426213
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x3c]                ; 00426218
    ADD ESP,0x8                         ; 0042621c
    LEA EAX,[ESP + 0xac]                ; 0042621f
    MOVSD ES:EDI,ESI                    ; 00426226
    MOVSD ES:EDI,ESI                    ; 00426227
    MOVSD ES:EDI,ESI                    ; 00426228
    PUSH EAX                            ; 00426229
    LEA EDI,[ESP + 0x98]                ; 0042622a
    LEA ESI,[EBX + 0x20]                ; 00426231
    PUSH EBX                            ; 00426234
    MOVSD ES:EDI,ESI                    ; 00426235
    MOVSD ES:EDI,ESI                    ; 00426236
    MOVSD ES:EDI,ESI                    ; 00426237
    CALL core_charactr.cpp_FUN_0042d750 ; 00426238
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    LEA EDI,[ESP + 0xa8]                ; 0042623d
    ADD ESP,0x8                         ; 00426244
    LEA ESI,[EBX + 0x20]                ; 00426247
    MOV EAX,dword ptr [ESP + 0x94]      ; 0042624a
    MOV EDX,dword ptr [ESP + 0xd0]      ; 00426251
    MOVSD ES:EDI,ESI                    ; 00426258
    MOVSD ES:EDI,ESI                    ; 00426259
    MOVSD ES:EDI,ESI                    ; 0042625a
    MOV dword ptr [EDX],EAX             ; 0042625b
    MOV EAX,dword ptr [ESP + 0x98]      ; 0042625d
    MOV dword ptr [EDX + 0x4],EAX       ; 00426264
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00426267
    LEA EDI,[ESP + 0xb8]                ; 0042626e
    MOV dword ptr [EDX + 0x8],EAX       ; 00426275
    LEA ESI,[ESP + 0x28]                ; 00426278
    FLD float ptr [ESP + 0xa0]          ; 0042627c
    FLD float ptr [ESP + 0xa4]          ; 00426283
    FLD float ptr [ESP + 0xa8]          ; 0042628a
    FXCH ST2                            ; 00426291
    FSUB float ptr [EDX]                ; 00426293
    FXCH                                ; 00426295
    FSUB float ptr [EDX + 0x4]          ; 00426297
    FXCH ST2                            ; 0042629a
    FSUB float ptr [EDX + 0x8]          ; 0042629c
    FXCH                                ; 0042629f
    FSTP float ptr [ESP + 0x28]         ; 004262a1
    FXCH                                ; 004262a5
    FSTP float ptr [ESP + 0x2c]         ; 004262a7
    FSTP float ptr [ESP + 0x30]         ; 004262ab
    LEA EDX,[EBX + 0x19d78]             ; 004262af
    MOVSD ES:EDI,ESI                    ; 004262b5
    MOVSD ES:EDI,ESI                    ; 004262b6
    MOVSD ES:EDI,ESI                    ; 004262b7
    LEA EAX,[EBX + 0x19d84]             ; 004262b8
    FLD float ptr [EDX]                 ; 004262be
    FLD float ptr [EDX + 0x4]           ; 004262c0
    FLD float ptr [EDX + 0x8]           ; 004262c3
    LEA EDI,[ESP + 0x88]                ; 004262c6
    LEA ESI,[ESP + 0x64]                ; 004262cd
    FXCH ST2                            ; 004262d1
    FADD float ptr [EAX]                ; 004262d3
    FXCH                                ; 004262d5
    FADD float ptr [EAX + 0x4]          ; 004262d7
    FXCH ST2                            ; 004262da
    FADD float ptr [EAX + 0x8]          ; 004262dc
    FXCH                                ; 004262df
    FSTP float ptr [ESP + 0x64]         ; 004262e1
    FXCH                                ; 004262e5
    FSTP float ptr [ESP + 0x68]         ; 004262e7
    FSTP float ptr [ESP + 0x6c]         ; 004262eb
    MOVSD ES:EDI,ESI                    ; 004262ef
    MOVSD ES:EDI,ESI                    ; 004262f0
    MOVSD ES:EDI,ESI                    ; 004262f1
    FLD float ptr [0x005d5118]          ; 004262f2 | DAT_005d5118
    FLD float ptr [ESP + 0x88]          ; 004262f8
    FMUL ST1                            ; 004262ff
    FLD float ptr [ESP + 0x8c]          ; 00426301
    FMUL ST2                            ; 00426308
    FLD float ptr [ESP + 0x90]          ; 0042630a
    FMULP ST3                           ; 00426311
    LEA EDI,[ESP + 0x40]                ; 00426313
    LEA ESI,[ESP + 0xc4]                ; 00426317
    FXCH                                ; 0042631e
    FSTP float ptr [ESP + 0xc4]         ; 00426320
    FSTP float ptr [ESP + 0xc8]         ; 00426327
    FSTP float ptr [ESP + 0xcc]         ; 0042632e
    MOVSD ES:EDI,ESI                    ; 00426335
    MOVSD ES:EDI,ESI                    ; 00426336
    MOVSD ES:EDI,ESI                    ; 00426337
    MOV EAX,dword ptr [ESP + 0x44]      ; 00426338
    FLD float ptr [EDX]                 ; 0042633c
    MOV dword ptr [ESP + 0xbc],EAX      ; 0042633e
    FCOMP float ptr [ESP + 0xb8]        ; 00426345
    FNSTSW AX                           ; 0042634c
    SAHF                                ; 0042634e
    JA 0x004263a7                       ; 0042634f
        ;   XREF to: 004263a7 (CONDITIONAL_JUMP)  ; LAB_004263a7
    FLD float ptr [EDX + 0x4]           ; 00426351
    FCOMP float ptr [ESP + 0x44]        ; 00426354
    FNSTSW AX                           ; 00426358
    SAHF                                ; 0042635a
    JA 0x004263a7                       ; 0042635b
        ;   XREF to: 004263a7 (CONDITIONAL_JUMP)  ; LAB_004263a7
    FLD float ptr [EDX + 0x8]           ; 0042635d
    FCOMP float ptr [ESP + 0xc0]        ; 00426360
    FNSTSW AX                           ; 00426367
    SAHF                                ; 00426369
    JA 0x004263a7                       ; 0042636a
        ;   XREF to: 004263a7 (CONDITIONAL_JUMP)  ; LAB_004263a7
    FLD float ptr [EDX + 0xc]           ; 0042636c
    FCOMP float ptr [ESP + 0xb8]        ; 0042636f
    FNSTSW AX                           ; 00426376
    SAHF                                ; 00426378
    JC 0x004263a7                       ; 00426379
        ;   XREF to: 004263a7 (CONDITIONAL_JUMP)  ; LAB_004263a7
    FLD float ptr [EDX + 0x10]          ; 0042637b
    FCOMP float ptr [ESP + 0x44]        ; 0042637e
    FNSTSW AX                           ; 00426382
    SAHF                                ; 00426384
    JC 0x004263a7                       ; 00426385
        ;   XREF to: 004263a7 (CONDITIONAL_JUMP)  ; LAB_004263a7
    FLD float ptr [EDX + 0x14]          ; 00426387
    FCOMP float ptr [ESP + 0xc0]        ; 0042638a
    FNSTSW AX                           ; 00426391
    SAHF                                ; 00426393
    JC 0x004263a7                       ; 00426394
        ;   XREF to: 004263a7 (CONDITIONAL_JUMP)  ; LAB_004263a7
    LEA EAX,[ESP + 0xa0]                ; 00426396
    PUSH EAX                            ; 0042639d
    PUSH EBX                            ; 0042639e
    CALL core_bugs.cpp_FUN_00427e00     ; 0042639f
        ;   XREF to: 00427e00 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_00427e00()
    ADD ESP,0x8                         ; 004263a4
    PUSH EBX                            ; 004263a7
        ;   Label: LAB_004263a7
    CALL core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_00425b00 ; 004263a8
        ;   XREF to: 00425b00 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_00425b00(CBugs * this_ptr)
    ADD ESP,0x4                         ; 004263ad
    JMP 0x0042610f                      ; 004263b0
        ;   XREF to: 0042610f (UNCONDITIONAL_JUMP)  ; LAB_0042610f
    PUSH dword ptr [EBP + 0x18]         ; 004263b5
        ;   Label: LAB_004263b5
    PUSH EBX                            ; 004263b8
    CALL core_bugs.cpp_FUN_004263d0     ; 004263b9
        ;   XREF to: 004263d0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_FUN_004263d0(CBugs * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004263be
    MOV ESP,EBP                         ; 004263c1
    POP EBP                             ; 004263c3
    POP EDI                             ; 004263c4
    POP ESI                             ; 004263c5
    POP EBX                             ; 004263c6
    RET                                 ; 004263c7

