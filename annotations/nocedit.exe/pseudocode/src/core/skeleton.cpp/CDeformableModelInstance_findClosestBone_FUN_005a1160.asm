; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_skeleton_cpp_CDeformableModelInstance_findClosestBone_FUN_005a1160 (CDeformableModelInstance *this_ptr,CVector3f *point)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   point
; Local Variables:
; undefined8       Stack[-0xd0]:8  local_d0
; undefined8       Stack[-0xc8]:8  local_c8
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_FUN_0042b5b0 at 0042b5f8
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1160
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_findClosestBone_FUN_005a1160
    PUSH ESI                            ; 005a1161
    PUSH EDI                            ; 005a1162
    PUSH EBP                            ; 005a1163
    MOV EBP,ESP                         ; 005a1164
    SUB ESP,0xbc                        ; 005a1166
    AND ESP,0xfffffff8                  ; 005a116c
    MOV EBX,dword ptr [EBP + 0x18]      ; 005a116f
    MOV EDX,dword ptr [EBP + 0x14]      ; 005a1172
    PUSH EDX                            ; 005a1175
    XOR ESI,ESI                         ; 005a1176
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 005a1178
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    MOV ECX,0x7149f2ca                  ; 005a117d
    ADD ESP,0x4                         ; 005a1182
    MOV EDI,dword ptr [EAX + 0x28558]   ; 005a1185
    MOV dword ptr [ESP + 0x80],EAX      ; 005a118b
    MOV dword ptr [ESP + 0x90],ECX      ; 005a1192
    MOV dword ptr [ESP + 0x84],ESI      ; 005a1199
    TEST EDI,EDI                        ; 005a11a0
    JLE 0x005a13b2                      ; 005a11a2
        ;   XREF to: 005a13b2 (CONDITIONAL_JUMP)  ; LAB_005a13b2
    MOV EDX,dword ptr [EBP + 0x14]      ; 005a11a8
    ADD EDX,0xe80                       ; 005a11ab
    MOV dword ptr [ESP + 0x94],EAX      ; 005a11b1
    MOV dword ptr [ESP + 0x88],EDX      ; 005a11b8
    MOV ECX,dword ptr [ESP + 0x94]      ; 005a11bf
        ;   Label: LAB_005a11bf
    MOV ECX,dword ptr [ECX + 0x2857c]   ; 005a11c6
    TEST ECX,ECX                        ; 005a11cc
    JL 0x005a1391                       ; 005a11ce
        ;   XREF to: 005a1391 (CONDITIONAL_JUMP)  ; LAB_005a1391
    MOV EAX,dword ptr [EDX + 0xc]       ; 005a11d4
    MOV dword ptr [ESP + 0xb4],EAX      ; 005a11d7
    MOV EAX,dword ptr [EDX + 0x1c]      ; 005a11de
    MOV dword ptr [ESP + 0xb8],EAX      ; 005a11e1
    MOV EAX,dword ptr [EDX + 0x2c]      ; 005a11e8
    MOV dword ptr [ESP + 0xb0],EAX      ; 005a11eb
    MOV EAX,dword ptr [ESP + 0xb4]      ; 005a11f2
    MOV dword ptr [ESP + 0x34],EAX      ; 005a11f9
    MOV EAX,dword ptr [ESP + 0xb8]      ; 005a11fd
    MOV dword ptr [ESP + 0x38],EAX      ; 005a1204
    MOV EAX,dword ptr [ESP + 0xb0]      ; 005a1208
    MOV dword ptr [ESP + 0x3c],EAX      ; 005a120f
    IMUL EAX,ECX,0x30                   ; 005a1213
    ADD EAX,dword ptr [ESP + 0x88]      ; 005a1216
    MOV EDI,dword ptr [EAX + 0xc]       ; 005a121d
    MOV dword ptr [ESP + 0x98],EDI      ; 005a1220
    MOV EDI,dword ptr [EAX + 0x1c]      ; 005a1227
    FLD float ptr [ESP + 0x98]          ; 005a122a
    MOV dword ptr [ESP + 0xa0],EDI      ; 005a1231
    FSUB float ptr [ESP + 0xb4]         ; 005a1238
    FLD float ptr [ESP + 0xa0]          ; 005a123f
    FSUB float ptr [ESP + 0xb8]         ; 005a1246
    MOV EAX,dword ptr [EAX + 0x2c]      ; 005a124d
    FST float ptr [ESP + 0x20]          ; 005a1250
    FMUL float ptr [ESP + 0x20]         ; 005a1254
    FXCH                                ; 005a1258
    FSTP float ptr [ESP + 0x1c]         ; 005a125a
    MOV dword ptr [ESP + 0xa4],EAX      ; 005a125e
    FLD float ptr [ESP + 0x1c]          ; 005a1265
    FMUL ST0                            ; 005a1269
    FLD float ptr [ESP + 0xa4]          ; 005a126b
    MOV EAX,dword ptr [ESP + 0x98]      ; 005a1272
    FSUB float ptr [ESP + 0xb0]         ; 005a1279
    FXCH                                ; 005a1280
    FADDP ST2,ST0                       ; 005a1282
    FST float ptr [ESP + 0x24]          ; 005a1284
    FMUL float ptr [ESP + 0x24]         ; 005a1288
    MOV dword ptr [ESP + 0x28],EAX      ; 005a128c
    MOV EAX,dword ptr [ESP + 0xa4]      ; 005a1290
    FADDP                               ; 005a1297
    MOV dword ptr [ESP + 0x30],EAX      ; 005a1299
    FSQRT                               ; 005a129d
    FLDZ                                ; 005a129f
    MOV dword ptr [ESP + 0x2c],EDI      ; 005a12a1
    FXCH                                ; 005a12a5
    FSTP double ptr [ESP + 0x8]         ; 005a12a7
    FCOMP double ptr [ESP + 0x8]        ; 005a12ab
    FNSTSW AX                           ; 005a12af
    SAHF                                ; 005a12b1
    JNC 0x005a1348                      ; 005a12b2
        ;   XREF to: 005a1348 (CONDITIONAL_JUMP)  ; LAB_005a1348
    FLD double ptr [ESP + 0x8]          ; 005a12b8
    FLD1                                ; 005a12bc
    FLD float ptr [ESP + 0x1c]          ; 005a12be
    FXCH ST2                            ; 005a12c2
    FSTP float ptr [ESP + 0x8c]         ; 005a12c4
    FDIV float ptr [ESP + 0x8c]         ; 005a12cb
    FXCH                                ; 005a12d2
    FMUL ST1                            ; 005a12d4
    FLD float ptr [ESP + 0x20]          ; 005a12d6
    FMUL ST2                            ; 005a12da
    FLD float ptr [ESP + 0x24]          ; 005a12dc
    FMULP ST3                           ; 005a12e0
    FLD float ptr [ESP + 0xb8]          ; 005a12e2
    FXCH                                ; 005a12e9
    FSTP float ptr [ESP + 0x20]         ; 005a12eb
    FMUL float ptr [ESP + 0x20]         ; 005a12ef
    FXCH                                ; 005a12f3
    FSTP float ptr [ESP + 0x1c]         ; 005a12f5
    FXCH                                ; 005a12f9
    FSTP float ptr [ESP + 0x24]         ; 005a12fb
    FLD float ptr [EBX + 0x4]           ; 005a12ff
    FMUL float ptr [ESP + 0x20]         ; 005a1302
    FLD float ptr [ESP + 0xb4]          ; 005a1306
    FMUL float ptr [ESP + 0x1c]         ; 005a130d
    FLD float ptr [EBX]                 ; 005a1311
    FXCH                                ; 005a1313
    FADDP ST3,ST0                       ; 005a1315
    FMUL float ptr [ESP + 0x1c]         ; 005a1317
    FLD float ptr [ESP + 0xb0]          ; 005a131b
    FXCH                                ; 005a1322
    FADDP ST2,ST0                       ; 005a1324
    FMUL float ptr [ESP + 0x24]         ; 005a1326
    FLD float ptr [EBX + 0x8]           ; 005a132a
    FMUL float ptr [ESP + 0x24]         ; 005a132d
    FXCH                                ; 005a1331
    FADDP ST3,ST0                       ; 005a1333
    FADDP                               ; 005a1335
    FSUBRP                              ; 005a1337
    FLDZ                                ; 005a1339
    FXCH                                ; 005a133b
    FSTP double ptr [ESP]               ; 005a133d
    FCOMP double ptr [ESP]              ; 005a1340
    FNSTSW AX                           ; 005a1343
    SAHF                                ; 005a1345
    JC 0x005a13c0                       ; 005a1346
        ;   XREF to: 005a13c0 (CONDITIONAL_JUMP)  ; LAB_005a13c0
    FLD float ptr [EBX]                 ; 005a1348
        ;   Label: LAB_005a1348
    FSUB float ptr [ESP + 0xb4]         ; 005a134a
    FMUL ST0                            ; 005a1351
    FLD float ptr [EBX + 0x4]           ; 005a1353
    FSUB float ptr [ESP + 0xb8]         ; 005a1356
    FMUL ST0                            ; 005a135d
    FLD float ptr [EBX + 0x8]           ; 005a135f
    FXCH                                ; 005a1362
    FADDP ST2,ST0                       ; 005a1364
    FSUB float ptr [ESP + 0xb0]         ; 005a1366
    FMUL ST0                            ; 005a136d
        ;   Label: LAB_005a136d
    FADDP                               ; 005a136f
    FSQRT                               ; 005a1371
    FSTP float ptr [ESP + 0xac]         ; 005a1373
    FLD float ptr [ESP + 0xac]          ; 005a137a
    FCOMP float ptr [ESP + 0x90]        ; 005a1381
    FNSTSW AX                           ; 005a1388
    SAHF                                ; 005a138a
    JC 0x005a1489                       ; 005a138b
        ;   XREF to: 005a1489 (CONDITIONAL_JUMP)  ; LAB_005a1489
    ADD dword ptr [ESP + 0x94],0x24     ; 005a1391
        ;   Label: LAB_005a1391
    MOV EAX,dword ptr [ESP + 0x80]      ; 005a1399
    INC ESI                             ; 005a13a0
    MOV ECX,dword ptr [EAX + 0x28558]   ; 005a13a1
    ADD EDX,0x30                        ; 005a13a7
    CMP ESI,ECX                         ; 005a13aa
    JL 0x005a11bf                       ; 005a13ac
        ;   XREF to: 005a11bf (CONDITIONAL_JUMP)  ; LAB_005a11bf
    MOV EAX,dword ptr [ESP + 0x84]      ; 005a13b2
        ;   Label: LAB_005a13b2
    MOV ESP,EBP                         ; 005a13b9
    POP EBP                             ; 005a13bb
    POP EDI                             ; 005a13bc
    POP ESI                             ; 005a13bd
    POP EBX                             ; 005a13be
    RET                                 ; 005a13bf
    FLD double ptr [ESP]                ; 005a13c0
        ;   Label: LAB_005a13c0
    FCOMP double ptr [ESP + 0x8]        ; 005a13c3
    FNSTSW AX                           ; 005a13c7
    SAHF                                ; 005a13c9
    JC 0x005a13f6                       ; 005a13ca
        ;   XREF to: 005a13f6 (CONDITIONAL_JUMP)  ; LAB_005a13f6
    FLD float ptr [EBX]                 ; 005a13cc
    FSUB float ptr [ESP + 0x98]         ; 005a13ce
    FMUL ST0                            ; 005a13d5
    FLD float ptr [EBX + 0x4]           ; 005a13d7
    FSUB float ptr [ESP + 0xa0]         ; 005a13da
    FMUL ST0                            ; 005a13e1
    FLD float ptr [EBX + 0x8]           ; 005a13e3
    FXCH                                ; 005a13e6
    FADDP ST2,ST0                       ; 005a13e8
    FSUB float ptr [ESP + 0xa4]         ; 005a13ea
    JMP 0x005a136d                      ; 005a13f1
        ;   XREF to: 005a136d (UNCONDITIONAL_JUMP)  ; LAB_005a136d
    FLD float ptr [ESP + 0x1c]          ; 005a13f6
        ;   Label: LAB_005a13f6
    FLD double ptr [ESP]                ; 005a13fa
    FSTP float ptr [ESP + 0xa8]         ; 005a13fd
    FMUL float ptr [ESP + 0xa8]         ; 005a1404
    FLD float ptr [ESP + 0x20]          ; 005a140b
    FMUL float ptr [ESP + 0xa8]         ; 005a140f
    FLD float ptr [ESP + 0x24]          ; 005a1416
    FMUL float ptr [ESP + 0xa8]         ; 005a141a
    FLD float ptr [ESP + 0xb4]          ; 005a1421
    FLD float ptr [ESP + 0xb8]          ; 005a1428
    FLD float ptr [ESP + 0xb0]          ; 005a142f
    FXCH ST5                            ; 005a1436
    FSTP float ptr [ESP + 0x40]         ; 005a1438
    FXCH ST3                            ; 005a143c
    FSTP float ptr [ESP + 0x44]         ; 005a143e
    FXCH                                ; 005a1442
    FSTP float ptr [ESP + 0x48]         ; 005a1444
    FADD float ptr [ESP + 0x40]         ; 005a1448
    FXCH                                ; 005a144c
    FADD float ptr [ESP + 0x44]         ; 005a144e
    FXCH ST2                            ; 005a1452
    FADD float ptr [ESP + 0x48]         ; 005a1454
    FXCH                                ; 005a1458
    FSTP float ptr [ESP + 0x10]         ; 005a145a
    FXCH                                ; 005a145e
    FSTP float ptr [ESP + 0x14]         ; 005a1460
    FSTP float ptr [ESP + 0x18]         ; 005a1464
    FLD float ptr [EBX]                 ; 005a1468
    FSUB float ptr [ESP + 0x10]         ; 005a146a
    FMUL ST0                            ; 005a146e
    FLD float ptr [EBX + 0x4]           ; 005a1470
    FSUB float ptr [ESP + 0x14]         ; 005a1473
    FMUL ST0                            ; 005a1477
    FLD float ptr [EBX + 0x8]           ; 005a1479
    FXCH                                ; 005a147c
    FADDP ST2,ST0                       ; 005a147e
    FSUB float ptr [ESP + 0x18]         ; 005a1480
    JMP 0x005a136d                      ; 005a1484
        ;   XREF to: 005a136d (UNCONDITIONAL_JUMP)  ; LAB_005a136d
    MOV EAX,dword ptr [ESP + 0xac]      ; 005a1489
        ;   Label: LAB_005a1489
    MOV dword ptr [ESP + 0x84],ECX      ; 005a1490
    MOV dword ptr [ESP + 0x90],EAX      ; 005a1497
    JMP 0x005a1391                      ; 005a149e
        ;   XREF to: 005a1391 (UNCONDITIONAL_JUMP)  ; LAB_005a1391

