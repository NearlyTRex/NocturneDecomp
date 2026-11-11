; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005b12a0(CHAR *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005b0a70 at 005b0b9e
;
; Referenced Globals:
;   undefined4 DAT_02d25928
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005a3650
;   crt_unknown.c_FUN_005a3770
;   crt_unknown.c_FUN_005ab400
;   crt_unknown.c_FUN_005b08a0
;   crt_unknown.c_FUN_005b146c
;   crt_unknown.c_FUN_005b1970
;   crt_unknown.c_FUN_005b19a0
;   crt_unknown.c_FUN_005b1bd4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b12a0
        ;   Label: crt_unknown.c_FUN_005b12a0
    PUSH ESI                            ; 005b12a1
    PUSH EDI                            ; 005b12a2
    PUSH EBP                            ; 005b12a3
    SUB ESP,0x14                        ; 005b12a4
    MOV EDX,0x2                         ; 005b12a7
    PUSH 0x3d                           ; 005b12ac
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005b12ae
    MOV EBX,0x1                         ; 005b12b2
    PUSH ECX                            ; 005b12b7
    MOV dword ptr [ESP + 0xc],EDX       ; 005b12b8
    MOV dword ptr [ESP + 0x8],EBX       ; 005b12bc
    CALL crt_unknown.c_FUN_005b08a0     ; 005b12c0
        ;   XREF to: 005b08a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b08a0()
    MOV EBP,EAX                         ; 005b12c5
    ADD ESP,0x8                         ; 005b12c7
    TEST EAX,EAX                        ; 005b12ca
    JNZ 0x005b12d8                      ; 005b12cc
        ;   XREF to: 005b12d8 (CONDITIONAL_JUMP)  ; LAB_005b12d8
    MOV EAX,0xffffffff                  ; 005b12ce
    JMP 0x005b1464                      ; 005b12d3
        ;   XREF to: 005b1464 (UNCONDITIONAL_JUMP)  ; LAB_005b1464
    MOV ESI,dword ptr [ESP + 0x28]      ; 005b12d8
        ;   Label: LAB_005b12d8
    CMP EAX,ESI                         ; 005b12dc
    JNZ 0x005b12ed                      ; 005b12de
        ;   XREF to: 005b12ed (CONDITIONAL_JUMP)  ; LAB_005b12ed
    MOV EAX,0xffffffff                  ; 005b12e0
    ADD ESP,0x14                        ; 005b12e5
    POP EBP                             ; 005b12e8
    POP EDI                             ; 005b12e9
    POP ESI                             ; 005b12ea
    POP EBX                             ; 005b12eb
    RET                                 ; 005b12ec
    SUB EAX,ESI                         ; 005b12ed
        ;   Label: LAB_005b12ed
    MOV dword ptr [ESP + 0x10],EAX      ; 005b12ef
    ADD EAX,EBX                         ; 005b12f3
    PUSH EAX                            ; 005b12f5
    CALL crt_memory.c_malloc_FUN_005a3650 ; 005b12f6
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 005b12fb
    MOV EBX,EAX                         ; 005b12fe
    MOV dword ptr [ESP + 0x8],EAX       ; 005b1300
    TEST EAX,EAX                        ; 005b1304
    JNZ 0x005b1315                      ; 005b1306
        ;   XREF to: 005b1315 (CONDITIONAL_JUMP)  ; LAB_005b1315
    MOV EAX,0xffffffff                  ; 005b1308
    ADD ESP,0x14                        ; 005b130d
    POP EBP                             ; 005b1310
    POP EDI                             ; 005b1311
    POP ESI                             ; 005b1312
    POP EBX                             ; 005b1313
    RET                                 ; 005b1314
    MOV ECX,dword ptr [ESP + 0x10]      ; 005b1315
        ;   Label: LAB_005b1315
    MOV EDI,EAX                         ; 005b1319
    PUSH ES                             ; 005b131b
    MOV AX,DS                           ; 005b131c
    MOV ES,AX                           ; 005b131e
    PUSH EDI                            ; 005b1320
    MOV EAX,ECX                         ; 005b1321
    SHR ECX,0x2                         ; 005b1323
    MOVSD.REP ES:EDI,ESI                ; 005b1326
    MOV CL,AL                           ; 005b1328
    AND CL,0x3                          ; 005b132a
    MOVSB.REP ES:EDI,ESI                ; 005b132d
    POP EDI                             ; 005b132f
    POP ES                              ; 005b1330
    LEA ESI,[EBP + 0x1]                 ; 005b1331
    MOV EAX,dword ptr [ESP + 0x10]      ; 005b1334
    PUSH ESI                            ; 005b1338
    MOV byte ptr [EBX + EAX*0x1],0x0    ; 005b1339
    CALL crt_unknown.c_FUN_005b1970     ; 005b133d
        ;   XREF to: 005b1970 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b1970()
    MOV EBP,EAX                         ; 005b1342
    ADD ESP,0x4                         ; 005b1344
    TEST EAX,EAX                        ; 005b1347
    JZ 0x005b138f                       ; 005b1349
        ;   XREF to: 005b138f (CONDITIONAL_JUMP)  ; LAB_005b138f
    INC EAX                             ; 005b134b
    PUSH EAX                            ; 005b134c
    CALL crt_memory.c_malloc_FUN_005a3650 ; 005b134d
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 005b1352
    MOV EDX,EAX                         ; 005b1355
    MOV dword ptr [ESP + 0xc],EAX       ; 005b1357
    TEST EAX,EAX                        ; 005b135b
    JNZ 0x005b136f                      ; 005b135d
        ;   XREF to: 005b136f (CONDITIONAL_JUMP)  ; LAB_005b136f
    PUSH EBX                            ; 005b135f
    CALL crt_unknown.c_FUN_005a3770     ; 005b1360
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    MOV EAX,0xffffffff                  ; 005b1365
    JMP 0x005b1461                      ; 005b136a
        ;   XREF to: 005b1461 (UNCONDITIONAL_JUMP)  ; LAB_005b1461
    MOV ECX,EBP                         ; 005b136f
        ;   Label: LAB_005b136f
    MOV EDI,EAX                         ; 005b1371
    PUSH ES                             ; 005b1373
    MOV AX,DS                           ; 005b1374
    MOV ES,AX                           ; 005b1376
    PUSH EDI                            ; 005b1378
    MOV EAX,ECX                         ; 005b1379
    SHR ECX,0x2                         ; 005b137b
    MOVSD.REP ES:EDI,ESI                ; 005b137e
    MOV CL,AL                           ; 005b1380
    AND CL,0x3                          ; 005b1382
    MOVSB.REP ES:EDI,ESI                ; 005b1385
    POP EDI                             ; 005b1387
    POP ES                              ; 005b1388
    MOV byte ptr [EDX + EBP*0x1],0x0    ; 005b1389
    JMP 0x005b1393                      ; 005b138d
        ;   XREF to: 005b1393 (UNCONDITIONAL_JUMP)  ; LAB_005b1393
    MOV dword ptr [ESP + 0xc],EAX       ; 005b138f
        ;   Label: LAB_005b138f
    MOV EAX,dword ptr [ESP + 0xc]       ; 005b1393
        ;   Label: LAB_005b1393
    PUSH EAX                            ; 005b1397
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b1398
    PUSH EDX                            ; 005b139c
    CALL dword ptr CS:[0x5b3630]        ; 005b139d
    MOV ECX,dword ptr [ESP + 0x8]       ; 005b13a4
    PUSH ECX                            ; 005b13a8
    MOV EBX,EAX                         ; 005b13a9
    CALL crt_unknown.c_FUN_005a3770     ; 005b13ab
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 005b13b0
    MOV ESI,dword ptr [ESP + 0xc]       ; 005b13b3
    PUSH ESI                            ; 005b13b7
    CALL crt_unknown.c_FUN_005a3770     ; 005b13b8
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 005b13bd
    TEST EBX,EBX                        ; 005b13c0
    JNZ 0x005b13d1                      ; 005b13c2
        ;   XREF to: 005b13d1 (CONDITIONAL_JUMP)  ; LAB_005b13d1
    MOV EAX,0xffffffff                  ; 005b13c4
    ADD ESP,0x14                        ; 005b13c9
    POP EBP                             ; 005b13cc
    POP EDI                             ; 005b13cd
    POP ESI                             ; 005b13ce
    POP EBX                             ; 005b13cf
    RET                                 ; 005b13d0
    MOV EDI,dword ptr [ESP + 0x28]      ; 005b13d1
        ;   Label: LAB_005b13d1
    PUSH EDI                            ; 005b13d5
    CALL crt_unknown.c_FUN_005b146c     ; 005b13d6
        ;   XREF to: 005b146c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b146c()
    ADD ESP,0x4                         ; 005b13db
    TEST EAX,EAX                        ; 005b13de
    JZ 0x005b13ef                       ; 005b13e0
        ;   XREF to: 005b13ef (CONDITIONAL_JUMP)  ; LAB_005b13ef
    MOV EAX,0xffffffff                  ; 005b13e2
    ADD ESP,0x14                        ; 005b13e7
    POP EBP                             ; 005b13ea
    POP EDI                             ; 005b13eb
    POP ESI                             ; 005b13ec
    POP EBX                             ; 005b13ed
    RET                                 ; 005b13ee
    CMP dword ptr [0x02d25928],0x0      ; 005b13ef | DAT_02d25928
        ;   Label: LAB_005b13ef
    JZ 0x005b1464                       ; 005b13f6
        ;   XREF to: 005b1464 (CONDITIONAL_JUMP)  ; LAB_005b1464
    PUSH EDI                            ; 005b13f8
    CALL crt_unknown.c_FUN_005b1970     ; 005b13f9
        ;   XREF to: 005b1970 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b1970()
    ADD ESP,0x4                         ; 005b13fe
    LEA ESI,[EAX + 0x1]                 ; 005b1401
    MOV EAX,dword ptr [ESP + 0x4]       ; 005b1404
    IMUL EAX,ESI                        ; 005b1408
    PUSH EAX                            ; 005b140b
    CALL crt_memory.c_malloc_FUN_005a3650 ; 005b140c
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005a3650(ulong size)
    MOV EBX,EAX                         ; 005b1411
    ADD ESP,0x4                         ; 005b1413
    TEST EAX,EAX                        ; 005b1416
    JNZ 0x005b1431                      ; 005b1418
        ;   XREF to: 005b1431 (CONDITIONAL_JUMP)  ; LAB_005b1431
    PUSH 0x5                            ; 005b141a
    CALL crt_unknown.c_FUN_005ab400     ; 005b141c
        ;   XREF to: 005ab400 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab400()
    MOV EAX,0xffffffff                  ; 005b1421
    ADD ESP,0x4                         ; 005b1426
    ADD ESP,0x14                        ; 005b1429
    POP EBP                             ; 005b142c
    POP EDI                             ; 005b142d
    POP ESI                             ; 005b142e
    POP EBX                             ; 005b142f
    RET                                 ; 005b1430
    IMUL ESI,dword ptr [ESP]            ; 005b1431
        ;   Label: LAB_005b1431
    PUSH ESI                            ; 005b1435
    PUSH EDI                            ; 005b1436
    PUSH EAX                            ; 005b1437
    CALL crt_unknown.c_FUN_005b19a0     ; 005b1438
        ;   XREF to: 005b19a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b19a0()
    ADD ESP,0xc                         ; 005b143d
    CMP EAX,-0x1                        ; 005b1440
    JNZ 0x005b145b                      ; 005b1443
        ;   XREF to: 005b145b (CONDITIONAL_JUMP)  ; LAB_005b145b
    PUSH EBX                            ; 005b1445
    CALL crt_unknown.c_FUN_005a3770     ; 005b1446
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    MOV EAX,0xffffffff                  ; 005b144b
    ADD ESP,0x4                         ; 005b1450
    ADD ESP,0x14                        ; 005b1453
    POP EBP                             ; 005b1456
    POP EDI                             ; 005b1457
    POP ESI                             ; 005b1458
    POP EBX                             ; 005b1459
    RET                                 ; 005b145a
    PUSH EBX                            ; 005b145b
        ;   Label: LAB_005b145b
    CALL crt_unknown.c_FUN_005b1bd4     ; 005b145c
        ;   XREF to: 005b1bd4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b1bd4()
    ADD ESP,0x4                         ; 005b1461
        ;   Label: LAB_005b1461
    ADD ESP,0x14                        ; 005b1464
        ;   Label: LAB_005b1464
    POP EBP                             ; 005b1467
    POP EDI                             ; 005b1468
    POP ESI                             ; 005b1469
    POP EBX                             ; 005b146a
    RET                                 ; 005b146b

