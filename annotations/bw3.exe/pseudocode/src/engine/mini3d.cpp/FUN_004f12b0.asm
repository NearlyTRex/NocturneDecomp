; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f12b0(undefined4 param_1,undefined4 param_2,ushort *param_3,int param_4,int param_5)
;
;
; XREF[5]:
;   engine_mini3d.cpp_FUN_004edea0 at 004ee0f1
;   engine_mini3d.cpp_FUN_004ee1a0 at 004ee38b
;   engine_mini3d.cpp_FUN_004ee51e at 004ee59f
;   engine_mini3d.cpp_FUN_004ee5b0 at 004ee91b
;   engine_mini3d.cpp_FUN_004f2e30 at 004f337e
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01d76f60
;   undefined4 DAT_02cf60cc
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f0da0
;   engine_mini3d.cpp_FUN_004f0f20
;   engine_mini3d.cpp_FUN_004f1020
;   engine_mini3d.cpp_FUN_004f1830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f12b0
        ;   Label: engine_mini3d.cpp_FUN_004f12b0
    PUSH ESI                            ; 004f12b1
    PUSH EDI                            ; 004f12b2
    MOV ESI,dword ptr [ESP + 0x14]      ; 004f12b3
    MOV EBX,dword ptr [ESP + 0x18]      ; 004f12b7
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004f12bb
    CMP dword ptr [ESP + 0x20],0x0      ; 004f12bf
    JNZ 0x004f1341                      ; 004f12c4
        ;   XREF to: 004f1341 (CONDITIONAL_JUMP)  ; LAB_004f1341
    CMP dword ptr [0x02cf60cc],0x0      ; 004f12ca | DAT_02cf60cc
    JZ 0x004f12dc                       ; 004f12d1
        ;   XREF to: 004f12dc (CONDITIONAL_JUMP)  ; LAB_004f12dc
    CMP dword ptr [0x01c6cee8],0x0      ; 004f12d3 | DAT_01c6cee8
    JNZ 0x004f1324                      ; 004f12da
        ;   XREF to: 004f1324 (CONDITIONAL_JUMP)  ; LAB_004f1324
    XOR ESI,ESI                         ; 004f12dc
        ;   Label: LAB_004f12dc
    TEST EDI,EDI                        ; 004f12de
    JLE 0x004f1320                      ; 004f12e0
        ;   XREF to: 004f1320 (CONDITIONAL_JUMP)  ; LAB_004f1320
    XOR EAX,EAX                         ; 004f12e2
        ;   Label: LAB_004f12e2
    MOV AX,word ptr [EBX + 0x4]         ; 004f12e4
    MOV EDX,EAX                         ; 004f12e8
    MOV EAX,[0x01d76f60]                ; 004f12ea | DAT_01d76f60
    SHL EDX,0x6                         ; 004f12ef
    ADD EDX,EAX                         ; 004f12f2
    PUSH EDX                            ; 004f12f4
    XOR EDX,EDX                         ; 004f12f5
    MOV DX,word ptr [EBX + 0x2]         ; 004f12f7
    SHL EDX,0x6                         ; 004f12fb
    ADD EDX,EAX                         ; 004f12fe
    PUSH EDX                            ; 004f1300
    XOR EDX,EDX                         ; 004f1301
    MOV DX,word ptr [EBX]               ; 004f1303
    SHL EDX,0x6                         ; 004f1306
    ADD EAX,EDX                         ; 004f1309
    PUSH EAX                            ; 004f130b
    ADD EBX,0x6                         ; 004f130c
    INC ESI                             ; 004f130f
    CALL engine_mini3d.cpp_FUN_004f1830 ; 004f1310
        ;   XREF to: 004f1830 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1830()
    ADD ESP,0xc                         ; 004f1315
    CMP ESI,EDI                         ; 004f1318
    JL 0x004f12e2                       ; 004f131a
        ;   XREF to: 004f12e2 (CONDITIONAL_JUMP)  ; LAB_004f12e2
    LEA EAX,[EAX]                       ; 004f131c
    POP EDI                             ; 004f1320
        ;   Label: LAB_004f1320
    POP ESI                             ; 004f1321
    POP EBX                             ; 004f1322
    RET                                 ; 004f1323
    MOV EAX,[0x01c6e2b4]                ; 004f1324 | DAT_01c6e2b4
        ;   Label: LAB_004f1324
    PUSH EAX                            ; 004f1329
    PUSH EDI                            ; 004f132a
    PUSH EBX                            ; 004f132b
    PUSH ESI                            ; 004f132c
    MOV EDX,dword ptr [0x01d76f60]      ; 004f132d | DAT_01d76f60
    PUSH EDX                            ; 004f1333
    CALL dword ptr [0x02cf60cc]         ; 004f1334 | DAT_02cf60cc
    ADD ESP,0x14                        ; 004f133a
    POP EDI                             ; 004f133d
    POP ESI                             ; 004f133e
    POP EBX                             ; 004f133f
    RET                                 ; 004f1340
    PUSH ESI                            ; 004f1341
        ;   Label: LAB_004f1341
    CALL engine_mini3d.cpp_FUN_004f0da0 ; 004f1342
        ;   XREF to: 004f0da0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f0da0()
    ADD ESP,0x4                         ; 004f1347
    XOR ESI,ESI                         ; 004f134a
    TEST EDI,EDI                        ; 004f134c
    JLE 0x004f1390                      ; 004f134e
        ;   XREF to: 004f1390 (CONDITIONAL_JUMP)  ; LAB_004f1390
    XOR EAX,EAX                         ; 004f1350
        ;   Label: LAB_004f1350
    MOV AX,word ptr [EBX + 0x4]         ; 004f1352
    MOV EDX,EAX                         ; 004f1356
    MOV EAX,[0x01d76f60]                ; 004f1358 | DAT_01d76f60
    SHL EDX,0x6                         ; 004f135d
    ADD EDX,EAX                         ; 004f1360
    PUSH EDX                            ; 004f1362
    XOR EDX,EDX                         ; 004f1363
    MOV DX,word ptr [EBX + 0x2]         ; 004f1365
    SHL EDX,0x6                         ; 004f1369
    ADD EDX,EAX                         ; 004f136c
    PUSH EDX                            ; 004f136e
    XOR EDX,EDX                         ; 004f136f
    MOV DX,word ptr [EBX]               ; 004f1371
    SHL EDX,0x6                         ; 004f1374
    ADD EAX,EDX                         ; 004f1377
    PUSH EAX                            ; 004f1379
    ADD EBX,0x6                         ; 004f137a
    INC ESI                             ; 004f137d
    CALL engine_mini3d.cpp_FUN_004f1020 ; 004f137e
        ;   XREF to: 004f1020 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f1020()
    ADD ESP,0xc                         ; 004f1383
    CMP ESI,EDI                         ; 004f1386
    JL 0x004f1350                       ; 004f1388
        ;   XREF to: 004f1350 (CONDITIONAL_JUMP)  ; LAB_004f1350
    LEA EAX,[EAX]                       ; 004f138a
    CALL engine_mini3d.cpp_FUN_004f0f20 ; 004f1390
        ;   XREF to: 004f0f20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f0f20()
        ;   Label: LAB_004f1390
    POP EDI                             ; 004f1395
    POP ESI                             ; 004f1396
    POP EBX                             ; 004f1397
    RET                                 ; 004f1398

