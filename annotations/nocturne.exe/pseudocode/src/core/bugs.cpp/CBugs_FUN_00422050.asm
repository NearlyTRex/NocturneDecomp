; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_FUN_00422050(CBugs *this_ptr,float delta_time)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[1]:
;   core_bugs.cpp_CBugs_process_FUN_00421480 at 004214c0
;
; Referenced Globals:
;   double DOUBLE_00579d1d = 2
;   double DOUBLE_00579d25 = 5.22209901682860E-315
;   float FLOAT_0059aeb4 = 2
;
; Called Functions:
;   core_bugs.cpp_CBugs_applySwarmTranslation_FUN_00423a50
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422370
;   core_bugs.cpp_CBugs_FUN_00421b80
;   core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423680
;   core_bugs.cpp_CBugs_setSwarmTarget_FUN_00423790
;   core_bugs.cpp_CBugs_updateBugPathfinding_FUN_004227b0
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600
;   core_path.cpp_getPathMap_FUN_004f1e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422050
        ;   Label: core_bugs.cpp_CBugs_FUN_00422050
    PUSH ESI                            ; 00422051
    PUSH EDI                            ; 00422052
    PUSH EBP                            ; 00422053
    MOV EBP,ESP                         ; 00422054
    SUB ESP,0x98                        ; 00422056
    AND ESP,0xfffffff8                  ; 0042205c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042205f
    PUSH dword ptr [EBP + 0x18]         ; 00422062
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00422065
    PUSH EBX                            ; 0042206b
    XOR EDI,EDI                         ; 0042206c
    CALL dword ptr [EAX + 0x13c]        ; 0042206e
    MOV EDX,dword ptr [EBX + 0x19704]   ; 00422074
    ADD ESP,0x8                         ; 0042207a
    TEST EDX,EDX                        ; 0042207d
    JZ 0x00422160                       ; 0042207f
        ;   XREF to: 00422160 (CONDITIONAL_JUMP)  ; LAB_00422160
    MOV ECX,dword ptr [EBX + 0xbca4]    ; 00422085
    TEST ECX,ECX                        ; 0042208b
    JZ 0x00422160                       ; 0042208d
        ;   XREF to: 00422160 (CONDITIONAL_JUMP)  ; LAB_00422160
    LEA ESI,[EBX + 0x20]                ; 00422093
    FLD float ptr [ESI]                 ; 00422096
    FSUB float ptr [ECX + 0x20]         ; 00422098
    FSTP float ptr [ESP + 0x34]         ; 0042209b
    FLD float ptr [ESI + 0x4]           ; 0042209f
    FSUB float ptr [ECX + 0x24]         ; 004220a2
    FST float ptr [ESP + 0x38]          ; 004220a5
    FABS                                ; 004220a9
    FLD float ptr [ESI + 0x8]           ; 004220ab
    FSUB float ptr [ECX + 0x28]         ; 004220ae
    FSTP float ptr [ESP + 0x3c]         ; 004220b1
    FCOMP double ptr [0x00579d1d]       ; 004220b5 | DOUBLE_00579d1d
    FNSTSW AX                           ; 004220bb
    SAHF                                ; 004220bd
    JNC 0x00422160                      ; 004220be
        ;   XREF to: 00422160 (CONDITIONAL_JUMP)  ; LAB_00422160
    FLD float ptr [ESP + 0x34]          ; 004220c4
    FABS                                ; 004220c8
    FCOMP double ptr [0x00579d1d]       ; 004220ca | DOUBLE_00579d1d
    FNSTSW AX                           ; 004220d0
    SAHF                                ; 004220d2
    JNC 0x00422160                      ; 004220d3
        ;   XREF to: 00422160 (CONDITIONAL_JUMP)  ; LAB_00422160
    FLD float ptr [ESP + 0x3c]          ; 004220d9
    FABS                                ; 004220dd
    FCOMP double ptr [0x00579d1d]       ; 004220df | DOUBLE_00579d1d
    FNSTSW AX                           ; 004220e5
    SAHF                                ; 004220e7
    JNC 0x00422160                      ; 004220e8
        ;   XREF to: 00422160 (CONDITIONAL_JUMP)  ; LAB_00422160
    PUSH EBX                            ; 004220ee
        ;   Label: LAB_004220ee
    CALL core_bugs.cpp_CBugs_FUN_00421b80 ; 004220ef
        ;   XREF to: 00421b80 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_FUN_00421b80(CBugs * this_ptr)
    ADD ESP,0x4                         ; 004220f4
    MOV ESI,dword ptr [EBX + 0xbca4]    ; 004220f7
    PUSH ESI                            ; 004220fd
    PUSH EBX                            ; 004220fe
    CALL core_bugs.cpp_CBugs_setSwarmTarget_FUN_00423790 ; 004220ff
        ;   XREF to: 00423790 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_setSwarmTarget_FUN_00423790(CBugs * this_ptr, CDemonActor * target)
    MOV EDI,dword ptr [EBX + 0xbd24]    ; 00422104
    ADD ESP,0x8                         ; 0042210a
    CMP EDI,0x1                         ; 0042210d
    JZ 0x00422356                       ; 00422110
        ;   XREF to: 00422356 (CONDITIONAL_JUMP)  ; LAB_00422356
    MOV EAX,dword ptr [EBX + 0xbd28]    ; 00422116
        ;   Label: LAB_00422116
    XOR ESI,ESI                         ; 0042211c
    TEST EAX,EAX                        ; 0042211e
    JLE 0x00422150                      ; 00422120
        ;   XREF to: 00422150 (CONDITIONAL_JUMP)  ; LAB_00422150
    LEA EDI,[EBX + 0xbd2c]              ; 00422122
    PUSH 0x0                            ; 00422128
        ;   Label: LAB_00422128
    PUSH dword ptr [EBP + 0x18]         ; 0042212a
    PUSH EDI                            ; 0042212d
    PUSH EBX                            ; 0042212e
    INC ESI                             ; 0042212f
    CALL core_bugs.cpp_CBugs_updateBugPathfinding_FUN_004227b0 ; 00422130
        ;   XREF to: 004227b0 (UNCONDITIONAL_CALL)  ; int core_bugs.cpp_CBugs_updateBugPathfinding_FUN_004227b0(CBugs * this_ptr, SBug * bug_data, float delta_time, CVector3f * dest_vertex)
    ADD EDI,0x40                        ; 00422135
    MOV EDX,dword ptr [EBX + 0xbd28]    ; 00422138
    ADD ESP,0x10                        ; 0042213e
    CMP ESI,EDX                         ; 00422141
    JL 0x00422128                       ; 00422143
        ;   XREF to: 00422128 (CONDITIONAL_JUMP)  ; LAB_00422128
    LEA EAX,[EAX]                       ; 00422145
    LEA EDX,[EDX]                       ; 0042214b
    MOV EBX,EBX                         ; 0042214e
    PUSH EBX                            ; 00422150
        ;   Label: LAB_00422150
    CALL core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423680 ; 00422151
        ;   XREF to: 00423680 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423680(CBugs * this_ptr)
    ADD ESP,0x4                         ; 00422156
    MOV ESP,EBP                         ; 00422159
    POP EBP                             ; 0042215b
    POP EDI                             ; 0042215c
    POP ESI                             ; 0042215d
    POP EBX                             ; 0042215e
    RET                                 ; 0042215f
    TEST EDI,EDI                        ; 00422160
        ;   Label: LAB_00422160
    JNZ 0x004220ee                      ; 00422162
        ;   XREF to: 004220ee (CONDITIONAL_JUMP)  ; LAB_004220ee
    CMP dword ptr [EBX + 0x19700],0x0   ; 00422164
    JZ 0x00422348                       ; 0042216b
        ;   XREF to: 00422348 (CONDITIONAL_JUMP)  ; LAB_00422348
    MOV EDI,dword ptr [EBX + 0xbca4]    ; 00422171
    TEST EDI,EDI                        ; 00422177
    JZ 0x00422348                       ; 00422179
        ;   XREF to: 00422348 (CONDITIONAL_JUMP)  ; LAB_00422348
    PUSH EDI                            ; 0042217f
    MOV ESI,dword ptr [EDI + 0x14c]     ; 00422180
    CALL dword ptr [ESI + 0xbc]         ; 00422186
    ADD ESP,0x4                         ; 0042218c
    MOV EDI,EAX                         ; 0042218f
    TEST EAX,EAX                        ; 00422191
    JNZ 0x004221a9                      ; 00422193
        ;   XREF to: 004221a9 (CONDITIONAL_JUMP)  ; LAB_004221a9
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00422195
    ADD EAX,0x20                        ; 0042219b
    PUSH EAX                            ; 0042219e
    CALL core_path.cpp_getPathMap_FUN_004f1e00 ; 0042219f
        ;   XREF to: 004f1e00 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_004f1e00(CLocation * location)
    ADD ESP,0x4                         ; 004221a4
    MOV EDI,EAX                         ; 004221a7
    MOV EAX,dword ptr [EBX + 0x6c]      ; 004221a9
        ;   Label: LAB_004221a9
    PUSH EAX                            ; 004221ac
    LEA EAX,[ESP + 0x5c]                ; 004221ad
    PUSH EAX                            ; 004221b1
    LEA ESI,[EBX + 0x20]                ; 004221b2
    PUSH ESI                            ; 004221b5
    PUSH EDI                            ; 004221b6
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600 ; 004221b7
        ;   XREF to: 004f1600 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 004221bc
    TEST EAX,EAX                        ; 004221bf
    JZ 0x00422348                       ; 004221c1
        ;   XREF to: 00422348 (CONDITIONAL_JUMP)  ; LAB_00422348
    LEA EAX,[ESP + 0x58]                ; 004221c7
    PUSH EAX                            ; 004221cb
    LEA EAX,[ESP + 0x4]                 ; 004221cc
    PUSH EAX                            ; 004221d0
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 004221d1
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004221d6
    FLD float ptr [0x0059aeb4]          ; 004221d9 | FLOAT_0059aeb4
    FMUL float ptr [EBP + 0x18]         ; 004221df
    FSTP float ptr [ESP + 0x94]         ; 004221e2
    MOV EAX,dword ptr [ESP + 0x94]      ; 004221e9
    MOV dword ptr [ESP + 0x30],EAX      ; 004221f0
    LEA EAX,[ESP + 0x28]                ; 004221f4
    PUSH EAX                            ; 004221f8
    LEA EAX,[ESP + 0x80]                ; 004221f9
    PUSH EAX                            ; 00422200
    LEA EAX,[ESP + 0x8]                 ; 00422201
    XOR EDX,EDX                         ; 00422205
    PUSH EAX                            ; 00422207
    MOV dword ptr [ESP + 0x34],EDX      ; 00422208
    MOV dword ptr [ESP + 0x38],EDX      ; 0042220c
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 00422210
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00422215
    MOV EAX,dword ptr [ESI]             ; 00422218
    LEA EDI,[ESI + 0x4]                 ; 0042221a
    MOV dword ptr [ESP + 0x40],EAX      ; 0042221d
    MOV EAX,dword ptr [EDI]             ; 00422221
    MOV dword ptr [ESP + 0x44],EAX      ; 00422223
    LEA EAX,[ESI + 0x8]                 ; 00422227
    MOV dword ptr [ESP + 0x94],EAX      ; 0042222a
    MOV EAX,dword ptr [EAX]             ; 00422231
    MOV dword ptr [ESP + 0x48],EAX      ; 00422233
    LEA EAX,[ESP + 0x7c]                ; 00422237
    PUSH EAX                            ; 0042223b
    PUSH EBX                            ; 0042223c
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 0042223d
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00422242
    MOV EAX,dword ptr [ESI]             ; 00422245
    MOV dword ptr [ESP + 0x70],EAX      ; 00422247
    MOV EAX,dword ptr [EDI]             ; 0042224b
    MOV dword ptr [ESP + 0x74],EAX      ; 0042224d
    MOV EAX,dword ptr [ESP + 0x94]      ; 00422251
    MOV EAX,dword ptr [EAX]             ; 00422258
    MOV dword ptr [ESP + 0x78],EAX      ; 0042225a
    MOV EAX,dword ptr [ESP + 0x40]      ; 0042225e
    MOV dword ptr [ESI],EAX             ; 00422262
    MOV EAX,dword ptr [ESP + 0x44]      ; 00422264
    MOV dword ptr [ESI + 0x4],EAX       ; 00422268
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042226b
    MOV dword ptr [ESI + 0x8],EAX       ; 0042226f
    FLD float ptr [ESP + 0x70]          ; 00422272
    FSUB float ptr [ESI]                ; 00422276
    FLD float ptr [ESP + 0x74]          ; 00422278
    FXCH                                ; 0042227c
    FSTP float ptr [ESP + 0x64]         ; 0042227e
    FSUB float ptr [ESI + 0x4]          ; 00422282
    FLD float ptr [ESP + 0x78]          ; 00422285
    FXCH                                ; 00422289
    FSTP float ptr [ESP + 0x68]         ; 0042228b
    FSUB float ptr [ESI + 0x8]          ; 0042228f
    LEA ESI,[EBX + 0x19834]             ; 00422292
    FSTP float ptr [ESP + 0x6c]         ; 00422298
    LEA EAX,[EBX + 0x19840]             ; 0042229c
    FLD float ptr [ESI]                 ; 004222a2
    FADD float ptr [EAX]                ; 004222a4
    FST float ptr [ESP + 0x88]          ; 004222a6
    FLD float ptr [ESI + 0x4]           ; 004222ad
    FADD float ptr [EAX + 0x4]          ; 004222b0
    FXCH                                ; 004222b3
    FLD float ptr [0x00579d25]          ; 004222b5 | DOUBLE_00579d25
    FXCH                                ; 004222bb
    FMUL ST1                            ; 004222bd
    FXCH ST2                            ; 004222bf
    FST float ptr [ESP + 0x8c]          ; 004222c1
    FLD float ptr [ESI + 0x8]           ; 004222c8
    FADD float ptr [EAX + 0x8]          ; 004222cb
    FXCH                                ; 004222ce
    FMUL ST2                            ; 004222d0
    FXCH                                ; 004222d2
    FST float ptr [ESP + 0x90]          ; 004222d4
    FMULP ST2                           ; 004222db
    FSTP float ptr [ESP + 0x50]         ; 004222dd
    MOV EAX,dword ptr [ESP + 0x50]      ; 004222e1
    FXCH                                ; 004222e5
    FSTP float ptr [ESP + 0x4c]         ; 004222e7
    MOV dword ptr [ESP + 0x68],EAX      ; 004222eb
    FSTP float ptr [ESP + 0x54]         ; 004222ef
    FLD float ptr [ESI]                 ; 004222f3
    FCOMP float ptr [ESP + 0x64]        ; 004222f5
    FNSTSW AX                           ; 004222f9
    SAHF                                ; 004222fb
    JA 0x00422348                       ; 004222fc
        ;   XREF to: 00422348 (CONDITIONAL_JUMP)  ; LAB_00422348
    FLD float ptr [ESI + 0x4]           ; 004222fe
    FCOMP float ptr [ESP + 0x50]        ; 00422301
    FNSTSW AX                           ; 00422305
    SAHF                                ; 00422307
    JA 0x00422348                       ; 00422308
        ;   XREF to: 00422348 (CONDITIONAL_JUMP)  ; LAB_00422348
    FLD float ptr [ESI + 0x8]           ; 0042230a
    FCOMP float ptr [ESP + 0x6c]        ; 0042230d
    FNSTSW AX                           ; 00422311
    SAHF                                ; 00422313
    JA 0x00422348                       ; 00422314
        ;   XREF to: 00422348 (CONDITIONAL_JUMP)  ; LAB_00422348
    FLD float ptr [ESI + 0xc]           ; 00422316
    FCOMP float ptr [ESP + 0x64]        ; 00422319
    FNSTSW AX                           ; 0042231d
    SAHF                                ; 0042231f
    JC 0x00422348                       ; 00422320
        ;   XREF to: 00422348 (CONDITIONAL_JUMP)  ; LAB_00422348
    FLD float ptr [ESI + 0x10]          ; 00422322
    FCOMP float ptr [ESP + 0x50]        ; 00422325
    FNSTSW AX                           ; 00422329
    SAHF                                ; 0042232b
    JC 0x00422348                       ; 0042232c
        ;   XREF to: 00422348 (CONDITIONAL_JUMP)  ; LAB_00422348
    FLD float ptr [ESI + 0x14]          ; 0042232e
    FCOMP float ptr [ESP + 0x6c]        ; 00422331
    FNSTSW AX                           ; 00422335
    SAHF                                ; 00422337
    JC 0x00422348                       ; 00422338
        ;   XREF to: 00422348 (CONDITIONAL_JUMP)  ; LAB_00422348
    LEA EAX,[ESP + 0x70]                ; 0042233a
    PUSH EAX                            ; 0042233e
    PUSH EBX                            ; 0042233f
    CALL core_bugs.cpp_CBugs_applySwarmTranslation_FUN_00423a50 ; 00422340
        ;   XREF to: 00423a50 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_applySwarmTranslation_FUN_00423a50(CBugs * this_ptr, CVector3f * new_position)
    ADD ESP,0x8                         ; 00422345
    PUSH EBX                            ; 00422348
        ;   Label: LAB_00422348
    CALL core_bugs.cpp_CBugs_FUN_00421b80 ; 00422349
        ;   XREF to: 00421b80 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_FUN_00421b80(CBugs * this_ptr)
    ADD ESP,0x4                         ; 0042234e
    JMP 0x00422116                      ; 00422351
        ;   XREF to: 00422116 (UNCONDITIONAL_JUMP)  ; LAB_00422116
    PUSH dword ptr [EBP + 0x18]         ; 00422356
        ;   Label: LAB_00422356
    PUSH EBX                            ; 00422359
    CALL core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422370 ; 0042235a
        ;   XREF to: 00422370 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422370(CBugs * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0042235f
    MOV ESP,EBP                         ; 00422362
    POP EBP                             ; 00422364
    POP EDI                             ; 00422365
    POP ESI                             ; 00422366
    POP EBX                             ; 00422367
    RET                                 ; 00422368

