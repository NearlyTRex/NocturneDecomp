; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_gabriela_cpp_FUN_004b11a0(CGabriella *this_ptr,CDemonActor *target_actor,int use_wider_fov)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   target_actor
; int              Stack[0xc]:4   use_wider_fov
; Local Variables:
; undefined        Stack[-0x15c]:1  local_15c
;
; XREF[1]:
;   core_gabriela.cpp_FUN_004b1530 at 004b175e
;
; Referenced Globals:
;   undefined4 DAT_005d7143
;   undefined4 DAT_005d714b
;   undefined4 DAT_005d7153
;   undefined4 DAT_005d715b
;   undefined4 DAT_005d7163
;   undefined4 DAT_005d7167
;   WatcomTypeInfo g_CVectorTypeInfo
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CEnemyClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.field1364292_0x14d144
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0
;   core_setcolid.cpp_FUN_00535ee0
;   core_vecdir.cpp_FUN_005838f0
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b11a0
        ;   Label: core_gabriela.cpp_FUN_004b11a0
    PUSH ESI                            ; 004b11a1
    PUSH EDI                            ; 004b11a2
    PUSH EBP                            ; 004b11a3
    MOV EBP,ESP                         ; 004b11a4
    SUB ESP,0x154                       ; 004b11a6
    AND ESP,0xfffffff8                  ; 004b11ac
    MOV EDX,dword ptr [0x01c264e0]      ; 004b11af | g_CEnemyClassInfo.name_hash
    PUSH EDX                            ; 004b11b5
    MOV ECX,dword ptr [EBP + 0x18]      ; 004b11b6
    PUSH ECX                            ; 004b11b9
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004b11ba
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004b11bf
    PUSH 0x5f22b0                       ; 004b11c2 | g_CVectorTypeInfo
    PUSH 0xa                            ; 004b11c7
    MOV EBX,EAX                         ; 004b11c9
    LEA EAX,[ESP + 0x14]                ; 004b11cb
    PUSH EAX                            ; 004b11cf
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 004b11d0
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 004b11d5
    LEA EAX,[ESP + 0xc]                 ; 004b11d8
    PUSH EAX                            ; 004b11dc
    MOV EDI,dword ptr [EBP + 0x18]      ; 004b11dd
    MOV ESI,dword ptr [EBP + 0x18]      ; 004b11e0
    PUSH EDI                            ; 004b11e3
    MOV ESI,dword ptr [ESI + 0x2b0]     ; 004b11e4
    CALL dword ptr [ESI + 0x5c]         ; 004b11ea
    ADD ESP,0x8                         ; 004b11ed
    TEST EAX,EAX                        ; 004b11f0
    JZ 0x004b120c                       ; 004b11f2
        ;   XREF to: 004b120c (CONDITIONAL_JUMP)  ; LAB_004b120c
    TEST EBX,EBX                        ; 004b11f4
    JZ 0x004b1225                       ; 004b11f6
        ;   XREF to: 004b1225 (CONDITIONAL_JUMP)  ; LAB_004b1225
    PUSH EBX                            ; 004b11f8
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004b11f9
    CALL dword ptr [EAX + 0x114]        ; 004b11ff
    ADD ESP,0x4                         ; 004b1205
    TEST EAX,EAX                        ; 004b1208
    JLE 0x004b1225                      ; 004b120a
        ;   XREF to: 004b1225 (CONDITIONAL_JUMP)  ; LAB_004b1225
    MOV dword ptr [ESP + 0x14c],0xbf800000 ; 004b120c
        ;   Label: LAB_004b120c
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004b1217
    MOV ESP,EBP                         ; 004b121e
    POP EBP                             ; 004b1220
    POP EDI                             ; 004b1221
    POP ESI                             ; 004b1222
    POP EBX                             ; 004b1223
    RET                                 ; 004b1224
    MOV EAX,dword ptr [EBP + 0x18]      ; 004b1225
        ;   Label: LAB_004b1225
    ADD EAX,0x20                        ; 004b1228
    PUSH EAX                            ; 004b122b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b122c
    PUSH EAX                            ; 004b122f
    LEA ESI,[ESP + 0x140]               ; 004b1230
    LEA EDI,[ESP + 0xc8]                ; 004b1237
    CALL core_actor.cpp_FUN_00408de0    ; 004b123e
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x140]               ; 004b1243
    ADD ESP,0x8                         ; 004b124a
    MOVSD ES:EDI,ESI                    ; 004b124d
    MOVSD ES:EDI,ESI                    ; 004b124e
    MOVSD ES:EDI,ESI                    ; 004b124f
    FLD float ptr [ESP + 0xc8]          ; 004b1250
    FLDZ                                ; 004b1257
    FCOMPP                              ; 004b1259
    FNSTSW AX                           ; 004b125b
    SAHF                                ; 004b125d
    JNC 0x004b120c                      ; 004b125e
        ;   XREF to: 004b120c (CONDITIONAL_JUMP)  ; LAB_004b120c
    FLD float ptr [ESP + 0xc4]          ; 004b1260
    FMUL ST0                            ; 004b1267
    FLD float ptr [ESP + 0xc0]          ; 004b1269
    FMUL ST0                            ; 004b1270
    FADDP                               ; 004b1272
    FLD float ptr [ESP + 0xc8]          ; 004b1274
    FMUL ST0                            ; 004b127b
    FADDP                               ; 004b127d
    FSQRT                               ; 004b127f
    FSTP float ptr [ESP + 0x8]          ; 004b1281
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b1285
    MOV dword ptr [ESP + 0x148],EAX     ; 004b1289
    LEA EAX,[ESP + 0xc0]                ; 004b1290
    PUSH EAX                            ; 004b1297
    LEA ESI,[ESP + 0x100]               ; 004b1298
    LEA EDI,[ESP + 0x10c]               ; 004b129f
    CALL core_vecdir.cpp_FUN_005838f0   ; 004b12a6
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    ADD ESP,0x4                         ; 004b12ab
    LEA ESI,[ESP + 0xfc]                ; 004b12ae
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004b12b5
    MOVSD ES:EDI,ESI                    ; 004b12b8
    MOVSD ES:EDI,ESI                    ; 004b12b9
    MOVSD ES:EDI,ESI                    ; 004b12ba
    TEST EDX,EDX                        ; 004b12bb
    JZ 0x004b12fa                       ; 004b12bd
        ;   XREF to: 004b12fa (CONDITIONAL_JUMP)  ; LAB_004b12fa
    FLD float ptr [ESP + 0x8]           ; 004b12bf
    FCOMP double ptr [0x005d715b]       ; 004b12c3 | DAT_005d715b
    FNSTSW AX                           ; 004b12c9
    SAHF                                ; 004b12cb
    JA 0x004b120c                       ; 004b12cc
        ;   XREF to: 004b120c (CONDITIONAL_JUMP)  ; LAB_004b120c
    FLD float ptr [ESP + 0x10c]         ; 004b12d2
    FCOMP float ptr [0x005d7163]        ; 004b12d9 | DAT_005d7163
    FNSTSW AX                           ; 004b12df
    SAHF                                ; 004b12e1
    JC 0x004b120c                       ; 004b12e2
        ;   XREF to: 004b120c (CONDITIONAL_JUMP)  ; LAB_004b120c
    CMP dword ptr [ESP + 0x10c],0x3fc90fdb ; 004b12e8
    JLE 0x004b1338                      ; 004b12f3
        ;   XREF to: 004b1338 (CONDITIONAL_JUMP)  ; LAB_004b1338
    JMP 0x004b120c                      ; 004b12f5
        ;   XREF to: 004b120c (UNCONDITIONAL_JUMP)  ; LAB_004b120c
    FLD float ptr [ESP + 0x8]           ; 004b12fa
        ;   Label: LAB_004b12fa
    FCOMP double ptr [0x005d7143]       ; 004b12fe | DAT_005d7143
    FNSTSW AX                           ; 004b1304
    SAHF                                ; 004b1306
    JA 0x004b120c                       ; 004b1307
        ;   XREF to: 004b120c (CONDITIONAL_JUMP)  ; LAB_004b120c
    FLD float ptr [ESP + 0x10c]         ; 004b130d
    FST double ptr [ESP]                ; 004b1314
    FCOMP double ptr [0x005d714b]       ; 004b1317 | DAT_005d714b
    FNSTSW AX                           ; 004b131d
    SAHF                                ; 004b131f
    JC 0x004b120c                       ; 004b1320
        ;   XREF to: 004b120c (CONDITIONAL_JUMP)  ; LAB_004b120c
    FLD double ptr [ESP]                ; 004b1326
    FCOMP double ptr [0x005d7153]       ; 004b1329 | DAT_005d7153
    FNSTSW AX                           ; 004b132f
    SAHF                                ; 004b1331
    JA 0x004b120c                       ; 004b1332
        ;   XREF to: 004b120c (CONDITIONAL_JUMP)  ; LAB_004b120c
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b1338
        ;   Label: LAB_004b1338
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b133b
    PUSH EDX                            ; 004b133e
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004b133f
    LEA ESI,[ESP + 0xa0]                ; 004b1345
    LEA EDI,[ESP + 0x88]                ; 004b134c
    CALL dword ptr [EAX + 0x24]         ; 004b1353
    MOV ECX,0x6                         ; 004b1356
    LEA ESI,[ESP + 0xa0]                ; 004b135b
    ADD ESP,0x4                         ; 004b1362
    MOVSD.REP ES:EDI,ESI                ; 004b1365
    LEA EBX,[ESP + 0x84]                ; 004b1367
    FLD float ptr [ESP + 0x84]          ; 004b136e
    FLD float ptr [ESP + 0x88]          ; 004b1375
    FLD float ptr [ESP + 0x8c]          ; 004b137c
    LEA EDI,[ESP + 0xd8]                ; 004b1383
    LEA ESI,[ESP + 0xe4]                ; 004b138a
    FXCH ST2                            ; 004b1391
    FADD float ptr [EBX + 0xc]          ; 004b1393
    FXCH                                ; 004b1396
    FADD float ptr [EBX + 0x10]         ; 004b1398
    FXCH ST2                            ; 004b139b
    FADD float ptr [EBX + 0x14]         ; 004b139d
    FXCH                                ; 004b13a0
    FSTP float ptr [ESP + 0xe4]         ; 004b13a2
    FXCH                                ; 004b13a9
    FSTP float ptr [ESP + 0xe8]         ; 004b13ab
    FSTP float ptr [ESP + 0xec]         ; 004b13b2
    MOVSD ES:EDI,ESI                    ; 004b13b9
    MOVSD ES:EDI,ESI                    ; 004b13ba
    MOVSD ES:EDI,ESI                    ; 004b13bb
    FLD float ptr [0x005d7167]          ; 004b13bc | DAT_005d7167
    FLD float ptr [ESP + 0xd8]          ; 004b13c2
    FMUL ST1                            ; 004b13c9
    FLD float ptr [ESP + 0xdc]          ; 004b13cb
    FMUL ST2                            ; 004b13d2
    LEA EAX,[ESP + 0xc]                 ; 004b13d4
    FLD float ptr [ESP + 0xe0]          ; 004b13d8
    FMULP ST3                           ; 004b13df
    PUSH EAX                            ; 004b13e1
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b13e2
    LEA EDI,[ESP + 0x118]               ; 004b13e5
    LEA ESI,[ESP + 0x130]               ; 004b13ec
    FXCH                                ; 004b13f3
    FSTP float ptr [ESP + 0x130]        ; 004b13f5
    FSTP float ptr [ESP + 0x134]        ; 004b13fc
    FSTP float ptr [ESP + 0x138]        ; 004b1403
    MOVSD ES:EDI,ESI                    ; 004b140a
    MOVSD ES:EDI,ESI                    ; 004b140b
    MOVSD ES:EDI,ESI                    ; 004b140c
    MOV ECX,dword ptr [EBP + 0x18]      ; 004b140d
    FLD float ptr [EBX + 0x20]          ; 004b1410
    FLD float ptr [EBX + 0x24]          ; 004b1413
    FLD float ptr [EBX + 0x28]          ; 004b1416
    LEA EDI,[ESP + 0xb8]                ; 004b1419
    LEA ESI,[ESP + 0xd0]                ; 004b1420
    FXCH ST2                            ; 004b1427
    FADD float ptr [ESP + 0x118]        ; 004b1429
    FXCH                                ; 004b1430
    FADD float ptr [ESP + 0x11c]        ; 004b1432
    FXCH ST2                            ; 004b1439
    FADD float ptr [ESP + 0x120]        ; 004b143b
    FXCH                                ; 004b1442
    FSTP float ptr [ESP + 0xd0]         ; 004b1444
    FXCH                                ; 004b144b
    FSTP float ptr [ESP + 0xd4]         ; 004b144d
    FSTP float ptr [ESP + 0xd8]         ; 004b1454
    MOVSD ES:EDI,ESI                    ; 004b145b
    MOVSD ES:EDI,ESI                    ; 004b145c
    MOVSD ES:EDI,ESI                    ; 004b145d
    PUSH ECX                            ; 004b145e
    LEA ESI,[ESP + 0x128]               ; 004b145f
    CALL core_actor.cpp_FUN_00408d70    ; 004b1466
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004b146b
    LEA EDI,[ESP + 0xf0]                ; 004b146e
    PUSH 0x1                            ; 004b1475
    MOV EBX,dword ptr [0x0061b5a8]      ; 004b1477 | g_CDemonSetPtr
    LEA ESI,[ESP + 0x124]               ; 004b147d
    PUSH EBX                            ; 004b1484 | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 004b1485
    MOVSD ES:EDI,ESI                    ; 004b1486
    MOVSD ES:EDI,ESI                    ; 004b1487
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0 ; 004b1488
        ;   XREF to: 00537eb0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 004b148d
    MOV ESI,dword ptr [EBP + 0x14]      ; 004b1490
    PUSH ESI                            ; 004b1493
    MOV EDI,dword ptr [0x0061b5a8]      ; 004b1494 | g_CDemonSetPtr
    PUSH EDI                            ; 004b149a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 004b149b
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004b14a0
    LEA EAX,[ESP + 0xf0]                ; 004b14a3
    PUSH EAX                            ; 004b14aa
    LEA EAX,[ESP + 0xb8]                ; 004b14ab
    PUSH EAX                            ; 004b14b2
    MOV EAX,[0x0061b5a8]                ; 004b14b3 | g_CDemonSetPtr
    PUSH EAX                            ; 004b14b8 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00535ee0 ; 004b14b9
        ;   XREF to: 00535ee0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00535ee0()
    MOV dword ptr [ESP + 0x15c],EAX     ; 004b14be
    FLD float ptr [ESP + 0x15c]         ; 004b14c5
    ADD ESP,0xc                         ; 004b14cc
    MOV EDX,dword ptr [0x0061b5a8]      ; 004b14cf | g_CDemonSetPtr
    PUSH EDX                            ; 004b14d5 | g_CDemonSetInstance
    FSTP float ptr [ESP + 0x148]        ; 004b14d6
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 004b14dd
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004b14e2
    FLD float ptr [ESP + 0x144]         ; 004b14e5
    FLD1                                ; 004b14ec
    FCOMPP                              ; 004b14ee
    FNSTSW AX                           ; 004b14f0
    SAHF                                ; 004b14f2
    JC 0x004b120c                       ; 004b14f3
        ;   XREF to: 004b120c (CONDITIONAL_JUMP)  ; LAB_004b120c
    MOV EAX,[0x0061b5a8]                ; 004b14f9 | g_CDemonSetPtr
    MOV ECX,dword ptr [EBP + 0x18]      ; 004b14fe
    CMP ECX,dword ptr [EAX + 0x14d144]  ; 004b1501 | g_CDemonSetInstance.field1364292_0x14d144
    JNZ 0x004b120c                      ; 004b1507
        ;   XREF to: 004b120c (CONDITIONAL_JUMP)  ; LAB_004b120c
    MOV EAX,dword ptr [ESP + 0x148]     ; 004b150d
    MOV dword ptr [ESP + 0x14c],EAX     ; 004b1514
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004b151b
    MOV ESP,EBP                         ; 004b1522
    POP EBP                             ; 004b1524
    POP EDI                             ; 004b1525
    POP ESI                             ; 004b1526
    POP EBX                             ; 004b1527
    RET                                 ; 004b1528

