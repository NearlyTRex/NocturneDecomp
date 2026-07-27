; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_motion_cpp_CMotionController_advance_FUN_004e11c0(int param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x54]:4  local_54
; undefined8       Stack[-0x50]:8  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[40]:
;   core_armour.cpp_FUN_0040fa20 at 0040fb11
;   core_baron.cpp_CBaron_advanceMotion_FUN_00411010 at 00411026
;   core_batcreat.cpp_CBatCreature_process_FUN_00412480 at 00412699
;   core_batman.cpp_CBatman_process_FUN_00413800 at 00413a47
;   core_beast.cpp_CBeast_process_FUN_004150d0 at 00415128
;   core_biggs.cpp_CBiggs_process_FUN_004154b0 at 004156fe
;   core_boneguy.cpp_FUN_00418a00 at 00418d83
;   core_bride.cpp_FUN_0041fe40 at 0041ffd4
;   core_colonel.cpp_CColonel_processMotionEvents_FUN_0043a980 at 0043a996
;   core_cow.cpp_CZombieCow_process_FUN_0043bdb0 at 0043bffa
;   ... and 30 more
;
; Referenced Globals:
;   void* switchdataD_004e1194 = 004e12b6
;   void* switchdataD_004e11a4 = 004e144e
;   TerminatedCString s_core_motion_cpp_0058b1f2
;   TerminatedCString s_CMotionController_advanc_0058b205
;   TerminatedCString s_core_motion_cpp_0058b24b
;   TerminatedCString s_Invalid_transition_comma_0058b25e
;   double DOUBLE_0058b2ad = 0.0000100000000000000
;   double DOUBLE_0058b2b5 = 0.5
;   double DOUBLE_0058b2bd = 0.499900000000000
;   double DOUBLE_0058b2c5 = 0.000100000000000000
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_motion.cpp_CMotionController_advanceFrameAndCheckSignals_FUN_004e1a20
;   core_motion.cpp_CMotionController_advanceFrameToExitPoint_FUN_004e1bd0
;   core_motion.cpp_CMotionController_advanceTween_FUN_004e1d80
;   core_motion.cpp_CMotionController_clearTweenState_FUN_004e19f0
;   core_motion.cpp_CMotionController_findAndStartTransition_FUN_004e1500
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_reverseTransition_FUN_004e1600
;   core_motion.cpp_CMotionController_startTransition_FUN_004e1770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e11c0
        ;   Label: core_motion.cpp_CMotionController_advance_FUN_004e11c0
    PUSH ESI                            ; 004e11c1
    PUSH EDI                            ; 004e11c2
    PUSH EBP                            ; 004e11c3
    MOV EBP,ESP                         ; 004e11c4
    SUB ESP,0x40                        ; 004e11c6
    AND ESP,0xfffffff8                  ; 004e11c9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e11cc
    LEA EAX,[EBX + 0x1c]                ; 004e11cf
    MOV dword ptr [ESP + 0x2c],EAX      ; 004e11d2
    LEA EAX,[EBX + 0x18]                ; 004e11d6
    MOV dword ptr [ESP + 0x34],EAX      ; 004e11d9
    LEA EAX,[EBX + 0x8]                 ; 004e11dd
    XOR EDX,EDX                         ; 004e11e0
    MOV dword ptr [ESP + 0x28],EAX      ; 004e11e2
    LEA EAX,[EBX + 0x4]                 ; 004e11e6
    MOV dword ptr [ESP + 0x3c],EDX      ; 004e11e9
    MOV dword ptr [ESP + 0x30],EAX      ; 004e11ed
    MOV EAX,dword ptr [EBP + 0x18]      ; 004e11f1
        ;   Label: LAB_004e11f1
    FLD float ptr [EAX]                 ; 004e11f4
    FCOMP double ptr [0x0058b2ad]       ; 004e11f6 | DOUBLE_0058b2ad
    FNSTSW AX                           ; 004e11fc
    SAHF                                ; 004e11fe
    JA 0x004e1223                       ; 004e11ff
        ;   XREF to: 004e1223 (CONDITIONAL_JUMP)  ; LAB_004e1223
    MOV EAX,dword ptr [EBP + 0x18]      ; 004e1201
        ;   Label: LAB_004e1201
    MOV dword ptr [EAX],0x0             ; 004e1204
    XOR EAX,EAX                         ; 004e120a
    MOV ESP,EBP                         ; 004e120c
    POP EBP                             ; 004e120e
    POP EDI                             ; 004e120f
    POP ESI                             ; 004e1210
    POP EBX                             ; 004e1211
    RET                                 ; 004e1212
    MOV ESI,dword ptr [ESP + 0x3c]      ; 004e1213
        ;   Label: LAB_004e1213
    INC ESI                             ; 004e1217
    MOV dword ptr [ESP + 0x3c],ESI      ; 004e1218
    CMP ESI,0x5                         ; 004e121c
    JL 0x004e11f1                       ; 004e121f
        ;   XREF to: 004e11f1 (CONDITIONAL_JUMP)  ; LAB_004e11f1
    JMP 0x004e1201                      ; 004e1221
        ;   XREF to: 004e1201 (UNCONDITIONAL_JUMP)  ; LAB_004e1201
    PUSH EBX                            ; 004e1223
        ;   Label: LAB_004e1223
    CALL core_motion.cpp_CMotionController_findAndStartTransition_FUN_004e1500 ; 004e1224
        ;   XREF to: 004e1500 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_findAndStartTransition_FUN_004e1500()
    ADD ESP,0x4                         ; 004e1229
    TEST EAX,EAX                        ; 004e122c
    JNZ 0x004e1213                      ; 004e122e
        ;   XREF to: 004e1213 (CONDITIONAL_JUMP)  ; LAB_004e1213
    MOV EAX,dword ptr [EBP + 0x18]      ; 004e1230
    MOV EAX,dword ptr [EAX]             ; 004e1233
    FLDZ                                ; 004e1235
    MOV dword ptr [ESP + 0x8],EAX       ; 004e1237
    XOR ESI,ESI                         ; 004e123b
    FLD float ptr [EBX + 0x14]          ; 004e123d
    FSTP double ptr [ESP]               ; 004e1240
    FCOMP double ptr [ESP]              ; 004e1243
    FNSTSW AX                           ; 004e1246
    SAHF                                ; 004e1248
    JA 0x004e14ba                       ; 004e1249
        ;   XREF to: 004e14ba (CONDITIONAL_JUMP)  ; LAB_004e14ba
    CMP dword ptr [EBX + 0x20],0x0      ; 004e124f
    JZ 0x004e1364                       ; 004e1253
        ;   XREF to: 004e1364 (CONDITIONAL_JUMP)  ; LAB_004e1364
    FLD float ptr [EBX + 0x14]          ; 004e1259
    FDIV float ptr [EBX + 0x10]         ; 004e125c
        ;   Label: LAB_004e125c
    FSTP float ptr [ESP + 0xc]          ; 004e125f
    FLD float ptr [ESP + 0xc]           ; 004e1263
    FLDZ                                ; 004e1267
    FCOMPP                              ; 004e1269
    FNSTSW AX                           ; 004e126b
    SAHF                                ; 004e126d
    JBE 0x004e1276                      ; 004e126e
        ;   XREF to: 004e1276 (CONDITIONAL_JUMP)  ; LAB_004e1276
    XOR EAX,EAX                         ; 004e1270
    MOV dword ptr [ESP + 0xc],EAX       ; 004e1272
    FLD float ptr [ESP + 0xc]           ; 004e1276
        ;   Label: LAB_004e1276
    FCOMP float ptr [ESP + 0x8]         ; 004e127a
    FNSTSW AX                           ; 004e127e
    SAHF                                ; 004e1280
    JNC 0x004e128b                      ; 004e1281
        ;   XREF to: 004e128b (CONDITIONAL_JUMP)  ; LAB_004e128b
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e1283
    MOV dword ptr [ESP + 0x8],EAX       ; 004e1287
    FLD float ptr [ESP + 0x8]           ; 004e128b
        ;   Label: LAB_004e128b
    FLDZ                                ; 004e128f
    XOR EDX,EDX                         ; 004e1291
    XOR EDI,EDI                         ; 004e1293
    MOV dword ptr [ESP + 0x38],EDX      ; 004e1295
    FCOMPP                              ; 004e1299
    FNSTSW AX                           ; 004e129b
    SAHF                                ; 004e129d
    JNC 0x004e12b6                      ; 004e129e
        ;   XREF to: 004e12b6 (CONDITIONAL_JUMP)  ; caseD_3
    MOV EAX,dword ptr [EBX + 0xc]       ; 004e12a0
    SUB EAX,0x3                         ; 004e12a3
    CMP EAX,0x3                         ; 004e12a6
    JA 0x004e13df                       ; 004e12a9
        ;   XREF to: 004e13df (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4e1194]  ; 004e12af | caseD_3 | caseD_4 | caseD_5
        ;   Label: switchD
    CMP dword ptr [ESP + 0x38],0x0      ; 004e12b6
        ;   Label: caseD_3
    JZ 0x004e12d9                       ; 004e12bb
        ;   XREF to: 004e12d9 (CONDITIONAL_JUMP)  ; LAB_004e12d9
    PUSH dword ptr [EBX + 0x14]         ; 004e12bd
        ;   Label: LAB_004e12bd
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004e12c0
    PUSH dword ptr [ESP + 0xc]          ; 004e12c4
    PUSH ESI                            ; 004e12c8
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004e12c9
    PUSH EAX                            ; 004e12cd
    PUSH EBX                            ; 004e12ce
    CALL core_motion.cpp_CMotionController_advanceFrameAndCheckSignals_FUN_004e1a20 ; 004e12cf
        ;   XREF to: 004e1a20 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_advanceFrameAndCheckSignals_FUN_004e1a20()
    ADD ESP,0x14                        ; 004e12d4
    MOV ESI,EAX                         ; 004e12d7
    TEST EDI,EDI                        ; 004e12d9
        ;   Label: LAB_004e12d9
    JZ 0x004e1307                       ; 004e12db
        ;   XREF to: 004e1307 (CONDITIONAL_JUMP)  ; LAB_004e1307
    SUB ESP,0x4                         ; 004e12dd
    FLD float ptr [EBX + 0x14]          ; 004e12e0
    FLD1                                ; 004e12e3
    FSUBRP                              ; 004e12e5
    MOV EDX,dword ptr [ESP + 0x30]      ; 004e12e7
    FSTP float ptr [ESP]                ; 004e12eb
    PUSH dword ptr [ESP + 0xc]          ; 004e12ee
    PUSH EDX                            ; 004e12f2
    MOV ECX,dword ptr [ESP + 0x40]      ; 004e12f3
    PUSH ECX                            ; 004e12f7
    PUSH EBX                            ; 004e12f8
    CALL core_motion.cpp_CMotionController_advanceFrameAndCheckSignals_FUN_004e1a20 ; 004e12f9
        ;   XREF to: 004e1a20 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_advanceFrameAndCheckSignals_FUN_004e1a20()
    ADD ESP,0x14                        ; 004e12fe
    TEST ESI,ESI                        ; 004e1301
    JNZ 0x004e1307                      ; 004e1303
        ;   XREF to: 004e1307 (CONDITIONAL_JUMP)  ; LAB_004e1307
    MOV ESI,EAX                         ; 004e1305
    CMP dword ptr [EBX + 0x20],0x0      ; 004e1307
        ;   Label: LAB_004e1307
    JZ 0x004e140a                       ; 004e130b
        ;   XREF to: 004e140a (CONDITIONAL_JUMP)  ; LAB_004e140a
    FLD float ptr [ESP + 0x8]           ; 004e1311
    FMUL float ptr [EBX + 0x10]         ; 004e1315
    FSUBR float ptr [EBX + 0x14]        ; 004e1318
    FST float ptr [EBX + 0x14]          ; 004e131b
    FCOMP double ptr [0x0058b2c5]       ; 004e131e | DOUBLE_0058b2c5
    FNSTSW AX                           ; 004e1324
    SAHF                                ; 004e1326
    JNC 0x004e1332                      ; 004e1327
        ;   XREF to: 004e1332 (CONDITIONAL_JUMP)  ; LAB_004e1332
    PUSH EBX                            ; 004e1329
    CALL core_motion.cpp_CMotionController_clearTweenState_FUN_004e19f0 ; 004e132a
        ;   XREF to: 004e19f0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_clearTweenState_FUN_004e19f0()
    ADD ESP,0x4                         ; 004e132f
    MOV EAX,dword ptr [EBP + 0x18]      ; 004e1332
        ;   Label: LAB_004e1332
    FLD float ptr [EAX]                 ; 004e1335
    FSUB float ptr [ESP + 0x8]          ; 004e1337
    FSTP float ptr [EAX]                ; 004e133b
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004e133d
    TEST EDX,EDX                        ; 004e1340
    JZ 0x004e1353                       ; 004e1342
        ;   XREF to: 004e1353 (CONDITIONAL_JUMP)  ; LAB_004e1353
    MOV EAX,dword ptr [EDX + 0x8]       ; 004e1344
    CMP EAX,dword ptr [EBX + 0x4]       ; 004e1347
    JNZ 0x004e1353                      ; 004e134a
        ;   XREF to: 004e1353 (CONDITIONAL_JUMP)  ; LAB_004e1353
    MOV dword ptr [EBX + 0x2c],0x0      ; 004e134c
    TEST ESI,ESI                        ; 004e1353
        ;   Label: LAB_004e1353
    JZ 0x004e1213                       ; 004e1355
        ;   XREF to: 004e1213 (CONDITIONAL_JUMP)  ; LAB_004e1213
    MOV EAX,ESI                         ; 004e135b
    MOV ESP,EBP                         ; 004e135d
    POP EBP                             ; 004e135f
    POP EDI                             ; 004e1360
    POP ESI                             ; 004e1361
    POP EBX                             ; 004e1362
    RET                                 ; 004e1363
    FLD double ptr [0x0058b2b5]         ; 004e1364 | DOUBLE_0058b2b5
        ;   Label: LAB_004e1364
    FSUB double ptr [ESP]               ; 004e136a
    JMP 0x004e125c                      ; 004e136d
        ;   XREF to: 004e125c (UNCONDITIONAL_JUMP)  ; LAB_004e125c
    LEA EAX,[ESP + 0x8]                 ; 004e1372
        ;   Label: caseD_4
    PUSH EAX                            ; 004e1376
    MOV EDX,dword ptr [EBX + 0x18]      ; 004e1377
    PUSH dword ptr [EBX + 0x1c]         ; 004e137a
    PUSH EDX                            ; 004e137d
    PUSH EBX                            ; 004e137e
    MOV EDI,0x1                         ; 004e137f
    CALL core_motion.cpp_CMotionController_advanceTween_FUN_004e1d80 ; 004e1384
        ;   XREF to: 004e1d80 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_advanceTween_FUN_004e1d80()
    ADD ESP,0x10                        ; 004e1389
    JMP 0x004e12b6                      ; 004e138c
        ;   XREF to: 004e12b6 (UNCONDITIONAL_JUMP)  ; caseD_3
    LEA EAX,[ESP + 0x8]                 ; 004e1391
        ;   Label: caseD_5
    PUSH EAX                            ; 004e1395
    MOV EAX,dword ptr [EBX + 0x4]       ; 004e1396
    PUSH dword ptr [EBX + 0x8]          ; 004e1399
    PUSH EAX                            ; 004e139c
    PUSH EBX                            ; 004e139d
    CALL core_motion.cpp_CMotionController_advanceTween_FUN_004e1d80 ; 004e139e
        ;   XREF to: 004e1d80 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_advanceTween_FUN_004e1d80()
    ADD ESP,0x10                        ; 004e13a3
    JMP 0x004e12bd                      ; 004e13a6
        ;   XREF to: 004e12bd (UNCONDITIONAL_JUMP)  ; LAB_004e12bd
    LEA EAX,[ESP + 0x8]                 ; 004e13ab
        ;   Label: caseD_6
    PUSH EAX                            ; 004e13af
    MOV ECX,dword ptr [EBX + 0x4]       ; 004e13b0
    PUSH dword ptr [EBX + 0x8]          ; 004e13b3
    PUSH ECX                            ; 004e13b6
    PUSH EBX                            ; 004e13b7
    CALL core_motion.cpp_CMotionController_advanceTween_FUN_004e1d80 ; 004e13b8
        ;   XREF to: 004e1d80 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_advanceTween_FUN_004e1d80()
    ADD ESP,0x10                        ; 004e13bd
    LEA EAX,[ESP + 0x8]                 ; 004e13c0
    PUSH EAX                            ; 004e13c4
    MOV ESI,dword ptr [EBX + 0x18]      ; 004e13c5
    PUSH dword ptr [EBX + 0x1c]         ; 004e13c8
    PUSH ESI                            ; 004e13cb
    PUSH EBX                            ; 004e13cc
    MOV EDI,0x1                         ; 004e13cd
    CALL core_motion.cpp_CMotionController_advanceTween_FUN_004e1d80 ; 004e13d2
        ;   XREF to: 004e1d80 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_advanceTween_FUN_004e1d80()
    ADD ESP,0x10                        ; 004e13d7
    JMP 0x004e12bd                      ; 004e13da
        ;   XREF to: 004e12bd (UNCONDITIONAL_JUMP)  ; LAB_004e12bd
    MOV EDX,dword ptr [EBX + 0xc]       ; 004e13df
        ;   Label: default
    PUSH EDX                            ; 004e13e2
    MOV ECX,0x58b1f2                    ; 004e13e3 | = "..\\core\\motion.cpp"
    MOV EAX,0x17e                       ; 004e13e8
    PUSH 0x58b205                       ; 004e13ed | = "CMotionController::advance: Tweening ..."
    MOV dword ptr [0x01cc4800],ECX      ; 004e13f2 | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004e13f8 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e13fd
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004e1402
    JMP 0x004e12b6                      ; 004e1405
        ;   XREF to: 004e12b6 (UNCONDITIONAL_JUMP)  ; caseD_3
    FLD float ptr [ESP + 0x8]           ; 004e140a
        ;   Label: LAB_004e140a
    FMUL float ptr [EBX + 0x10]         ; 004e140e
    FADD float ptr [EBX + 0x14]         ; 004e1411
    FST float ptr [EBX + 0x14]          ; 004e1414
    FCOMP double ptr [0x0058b2bd]       ; 004e1417 | DOUBLE_0058b2bd
    FNSTSW AX                           ; 004e141d
    SAHF                                ; 004e141f
    JBE 0x004e1332                      ; 004e1420
        ;   XREF to: 004e1332 (CONDITIONAL_JUMP)  ; LAB_004e1332
    PUSH EBX                            ; 004e1426
    CALL core_motion.cpp_CMotionController_reverseTransition_FUN_004e1600 ; 004e1427
        ;   XREF to: 004e1600 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_reverseTransition_FUN_004e1600()
    MOV EAX,dword ptr [EBX + 0x24]      ; 004e142c
    ADD ESP,0x4                         ; 004e142f
    TEST EAX,EAX                        ; 004e1432
    JZ 0x004e1332                       ; 004e1434
        ;   XREF to: 004e1332 (CONDITIONAL_JUMP)  ; LAB_004e1332
    PUSH EBX                            ; 004e143a
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004e143b
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004e1440
    ADD ESP,0x4                         ; 004e1443
    MOV dword ptr [EBX + 0x28],EAX      ; 004e1446
    JMP 0x004e1332                      ; 004e1449
        ;   XREF to: 004e1332 (UNCONDITIONAL_JUMP)  ; LAB_004e1332
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e144e
        ;   Label: caseD_1
    MOV dword ptr [EBX + 0x4],EAX       ; 004e1452
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004e1455
    MOV dword ptr [EBX + 0x8],EAX       ; 004e1459
    CMP dword ptr [ESP + 0x24],0x0      ; 004e145c
    JZ 0x004e1332                       ; 004e1461
        ;   XREF to: 004e1332 (CONDITIONAL_JUMP)  ; LAB_004e1332
    PUSH EBX                            ; 004e1467
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004e1468
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004e146d
    ADD ESP,0x4                         ; 004e1470
    MOV dword ptr [EBX + 0x28],EAX      ; 004e1473
    JMP 0x004e1332                      ; 004e1476
        ;   XREF to: 004e1332 (UNCONDITIONAL_JUMP)  ; LAB_004e1332
    LEA EAX,[ESP + 0x10]                ; 004e147b
        ;   Label: caseD_3
    PUSH EAX                            ; 004e147f
    PUSH EBX                            ; 004e1480
    CALL core_motion.cpp_CMotionController_startTransition_FUN_004e1770 ; 004e1481
        ;   XREF to: 004e1770 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_startTransition_FUN_004e1770()
    ADD ESP,0x8                         ; 004e1486
    JMP 0x004e1332                      ; 004e1489
        ;   XREF to: 004e1332 (UNCONDITIONAL_JUMP)  ; LAB_004e1332
    MOV EDX,dword ptr [ESP + 0x14]      ; 004e148e
        ;   Label: default
    PUSH EDX                            ; 004e1492
    MOV EDI,0x58b24b                    ; 004e1493 | = "..\\core\\motion.cpp"
    MOV EAX,0x1b7                       ; 004e1498
    PUSH 0x58b25e                       ; 004e149d | = "Invalid transition command returned b..."
    MOV dword ptr [0x01cc4800],EDI      ; 004e14a2 | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004e14a8 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e14ad
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004e14b2
    JMP 0x004e1332                      ; 004e14b5
        ;   XREF to: 004e1332 (UNCONDITIONAL_JUMP)  ; LAB_004e1332
    LEA EAX,[ESP + 0x10]                ; 004e14ba
        ;   Label: LAB_004e14ba
    PUSH EAX                            ; 004e14be
    LEA EAX,[ESP + 0xc]                 ; 004e14bf
    PUSH EAX                            ; 004e14c3
    MOV ECX,dword ptr [EBX + 0x4]       ; 004e14c4
    PUSH dword ptr [EBX + 0x8]          ; 004e14c7
    PUSH ECX                            ; 004e14ca
    PUSH EBX                            ; 004e14cb
    CALL core_motion.cpp_CMotionController_advanceFrameToExitPoint_FUN_004e1bd0 ; 004e14cc
        ;   XREF to: 004e1bd0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_advanceFrameToExitPoint_FUN_004e1bd0()
    ADD ESP,0x14                        ; 004e14d1
    MOV ESI,EAX                         ; 004e14d4
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e14d6
    DEC EAX                             ; 004e14da
    CMP EAX,0x5                         ; 004e14db
    JA 0x004e148e                       ; 004e14de
        ;   XREF to: 004e148e (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4e11a4]  ; 004e14e0 | caseD_2 | caseD_6 | switchdataD_004e11a4
        ;   Label: switchD

