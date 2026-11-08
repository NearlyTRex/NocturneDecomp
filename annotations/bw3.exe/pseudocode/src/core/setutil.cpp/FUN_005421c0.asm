; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005421c0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x148]:1  local_148
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00532b80 at 00533043
;
; Referenced Globals:
;   TerminatedCString s_anon_005d0e9a
;   TerminatedCString s_f_f_f_005d0ea1
;   TerminatedCString s_f_f_f_005d0eab
;   undefined4 DAT_005d0eb5
;   undefined4 DAT_005d0eb9
;   undefined4 DAT_005d0ebd
;   undefined4 DAT_005d0ec1
;   TerminatedCString s_f_f_f_f_f_005d0ec5
;   TerminatedCString s_d_d_005d0ed5
;   undefined4 DAT_005d0edc
;   undefined4 DAT_005d0ee0
;   TerminatedCString s_f_s_005d0ee4
;   TerminatedCString s_f_d_s_005d0eeb
;   undefined4 DAT_005d0ef5
;   TerminatedCString s_d_d_d_d_d_005d0ef9
;   ... and 11 more
;
; Called Functions:
;   FUN_004e4330
;   FUN_005a28f0
;   FUN_005a3230
;   FUN_005a3f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005421c0
        ;   Label: FUN_005421c0
    PUSH ESI                            ; 005421c1
    PUSH EDI                            ; 005421c2
    PUSH EBP                            ; 005421c3
    SUB ESP,0x138                       ; 005421c4
    MOV EBX,dword ptr [ESP + 0x14c]     ; 005421ca
    MOV ESI,dword ptr [ESP + 0x150]     ; 005421d1
    MOV EAX,[0x00603b28]                ; 005421d8 | DAT_00603b28
    CMP dword ptr [EAX + 0x15acc0],0xb  ; 005421dd | DAT_02032588
    JGE 0x005426ec                      ; 005421e4
        ;   XREF to: 005426ec (CONDITIONAL_JUMP)  ; LAB_005426ec
    LEA EAX,[EBX + 0x4]                 ; 005421ea
        ;   Label: LAB_005421ea
    PUSH EAX                            ; 005421ed
    PUSH 0x5d0e9a                       ; 005421ee | = "%[^\n]\n"
    PUSH ESI                            ; 005421f3
    CALL FUN_005a3230                   ; 005421f4
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    MOV EAX,[0x00603b28]                ; 005421f9 | DAT_00603b28
    MOV ECX,dword ptr [EAX + 0x15acc0]  ; 005421fe | DAT_02032588
    ADD ESP,0xc                         ; 00542204
    CMP ECX,0xb                         ; 00542207
    JL 0x0054221f                       ; 0054220a
        ;   XREF to: 0054221f (CONDITIONAL_JUMP)  ; LAB_0054221f
    PUSH ESI                            ; 0054220c
    PUSH 0xff                           ; 0054220d
    LEA EAX,[ESP + 0x8]                 ; 00542212
    PUSH EAX                            ; 00542216
    CALL FUN_005a3f00                   ; 00542217
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 0054221c
    LEA EAX,[EBX + 0x10c]               ; 0054221f
        ;   Label: LAB_0054221f
    PUSH EAX                            ; 00542225
    LEA EAX,[EBX + 0x108]               ; 00542226
    PUSH EAX                            ; 0054222c
    LEA EAX,[EBX + 0x104]               ; 0054222d
    PUSH EAX                            ; 00542233
    PUSH 0x5d0ea1                       ; 00542234 | = "%f,%f,%f\n"
    PUSH ESI                            ; 00542239
    CALL FUN_005a3230                   ; 0054223a
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    MOV EAX,[0x00603b28]                ; 0054223f | DAT_00603b28
    MOV EDI,dword ptr [EAX + 0x15acc0]  ; 00542244 | DAT_02032588
    ADD ESP,0x14                        ; 0054224a
    CMP EDI,0xb                         ; 0054224d
    JL 0x00542265                       ; 00542250
        ;   XREF to: 00542265 (CONDITIONAL_JUMP)  ; LAB_00542265
    PUSH ESI                            ; 00542252
    PUSH 0xff                           ; 00542253
    LEA EAX,[ESP + 0x8]                 ; 00542258
    PUSH EAX                            ; 0054225c
    CALL FUN_005a3f00                   ; 0054225d
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 00542262
    LEA EAX,[EBX + 0x114]               ; 00542265
        ;   Label: LAB_00542265
    PUSH EAX                            ; 0054226b
    LEA EAX,[EBX + 0x118]               ; 0054226c
    PUSH EAX                            ; 00542272
    LEA EAX,[EBX + 0x110]               ; 00542273
    PUSH EAX                            ; 00542279
    PUSH 0x5d0eab                       ; 0054227a | = "%f,%f,%f\n"
    PUSH ESI                            ; 0054227f
    CALL FUN_005a3230                   ; 00542280
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    MOV EAX,[0x00603b28]                ; 00542285 | DAT_00603b28
    MOV EBP,dword ptr [EAX + 0x15acc0]  ; 0054228a | DAT_02032588
    ADD ESP,0x14                        ; 00542290
    CMP EBP,0xb                         ; 00542293
    JL 0x005422ab                       ; 00542296
        ;   XREF to: 005422ab (CONDITIONAL_JUMP)  ; LAB_005422ab
    PUSH ESI                            ; 00542298
    PUSH 0xff                           ; 00542299
    LEA EAX,[ESP + 0x8]                 ; 0054229e
    PUSH EAX                            ; 005422a2
    CALL FUN_005a3f00                   ; 005422a3
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 005422a8
    LEA EAX,[EBX + 0x11c]               ; 005422ab
        ;   Label: LAB_005422ab
    PUSH EAX                            ; 005422b1
    PUSH 0x5d0eb5                       ; 005422b2 | DAT_005d0eb5
    PUSH ESI                            ; 005422b7
    CALL FUN_005a3230                   ; 005422b8
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    MOV EAX,[0x00603b28]                ; 005422bd | DAT_00603b28
    MOV EDX,dword ptr [EAX + 0x15acc0]  ; 005422c2 | DAT_02032588
    ADD ESP,0xc                         ; 005422c8
    CMP EDX,0x15                        ; 005422cb
    JL 0x00542704                       ; 005422ce
        ;   XREF to: 00542704 (CONDITIONAL_JUMP)  ; LAB_00542704
    PUSH ESI                            ; 005422d4
    PUSH 0xff                           ; 005422d5
    LEA EAX,[ESP + 0x8]                 ; 005422da
    PUSH EAX                            ; 005422de
    CALL FUN_005a3f00                   ; 005422df
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 005422e4
    LEA EAX,[EBX + 0x120]               ; 005422e7
    PUSH EAX                            ; 005422ed
    PUSH 0x5d0eb9                       ; 005422ee | DAT_005d0eb9
    PUSH ESI                            ; 005422f3
    CALL FUN_005a3230                   ; 005422f4
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0xc                         ; 005422f9
    MOV EAX,[0x00603b28]                ; 005422fc | DAT_00603b28
        ;   Label: LAB_005422fc
    CMP dword ptr [EAX + 0x15acc0],0x16 ; 00542301 | DAT_02032588
    JL 0x00542713                       ; 00542308
        ;   XREF to: 00542713 (CONDITIONAL_JUMP)  ; LAB_00542713
    PUSH ESI                            ; 0054230e
    PUSH 0xff                           ; 0054230f
    LEA EAX,[ESP + 0x8]                 ; 00542314
    PUSH EAX                            ; 00542318
    CALL FUN_005a3f00                   ; 00542319
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 0054231e
    LEA EAX,[EBX + 0x124]               ; 00542321
    PUSH EAX                            ; 00542327
    PUSH 0x5d0ebd                       ; 00542328 | DAT_005d0ebd
    PUSH ESI                            ; 0054232d
    CALL FUN_005a3230                   ; 0054232e
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0xc                         ; 00542333
    MOV EAX,[0x00603b28]                ; 00542336 | DAT_00603b28
        ;   Label: LAB_00542336
    CMP dword ptr [EAX + 0x15acc0],0xb  ; 0054233b | DAT_02032588
    JL 0x00542357                       ; 00542342
        ;   XREF to: 00542357 (CONDITIONAL_JUMP)  ; LAB_00542357
    PUSH ESI                            ; 00542344
    PUSH 0xff                           ; 00542345
    LEA EAX,[ESP + 0x8]                 ; 0054234a
    PUSH EAX                            ; 0054234e
    CALL FUN_005a3f00                   ; 0054234f
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 00542354
    PUSH EBX                            ; 00542357
        ;   Label: LAB_00542357
    PUSH 0x5d0ec1                       ; 00542358 | DAT_005d0ec1
    PUSH ESI                            ; 0054235d
    CALL FUN_005a3230                   ; 0054235e
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    MOV EAX,[0x00603b28]                ; 00542363 | DAT_00603b28
    MOV EBP,dword ptr [EAX + 0x15acc0]  ; 00542368 | DAT_02032588
    ADD ESP,0xc                         ; 0054236e
    CMP EBP,0xb                         ; 00542371
    JL 0x00542389                       ; 00542374
        ;   XREF to: 00542389 (CONDITIONAL_JUMP)  ; LAB_00542389
    PUSH ESI                            ; 00542376
    PUSH 0xff                           ; 00542377
    LEA EAX,[ESP + 0x8]                 ; 0054237c
    PUSH EAX                            ; 00542380
    CALL FUN_005a3f00                   ; 00542381
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 00542386
    LEA EAX,[EBX + 0x11d4]              ; 00542389
        ;   Label: LAB_00542389
    PUSH EAX                            ; 0054238f
    LEA EAX,[EBX + 0x11d0]              ; 00542390
    PUSH EAX                            ; 00542396
    LEA EAX,[EBX + 0x11cc]              ; 00542397
    PUSH EAX                            ; 0054239d
    LEA EAX,[EBX + 0x11c8]              ; 0054239e
    PUSH EAX                            ; 005423a4
    LEA EAX,[EBX + 0x11c4]              ; 005423a5
    PUSH EAX                            ; 005423ab
    PUSH 0x5d0ec5                       ; 005423ac | = "%f,%f,%f,%f,%f\n"
    PUSH ESI                            ; 005423b1
    CALL FUN_005a3230                   ; 005423b2
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    MOV EAX,[0x00603b28]                ; 005423b7 | DAT_00603b28
    MOV EDX,dword ptr [EAX + 0x15acc0]  ; 005423bc | DAT_02032588
    ADD ESP,0x1c                        ; 005423c2
    CMP EDX,0xb                         ; 005423c5
    JL 0x005423dd                       ; 005423c8
        ;   XREF to: 005423dd (CONDITIONAL_JUMP)  ; LAB_005423dd
    PUSH ESI                            ; 005423ca
    PUSH 0xff                           ; 005423cb
    LEA EAX,[ESP + 0x8]                 ; 005423d0
    PUSH EAX                            ; 005423d4
    CALL FUN_005a3f00                   ; 005423d5
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 005423da
    LEA EAX,[EBX + 0x180c]              ; 005423dd
        ;   Label: LAB_005423dd
    PUSH EAX                            ; 005423e3
    LEA EAX,[EBX + 0x1808]              ; 005423e4
    PUSH EAX                            ; 005423ea
    PUSH 0x5d0ed5                       ; 005423eb | = "%d,%d\n"
    PUSH ESI                            ; 005423f0
    CALL FUN_005a3230                   ; 005423f1
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    MOV EAX,[0x00603b28]                ; 005423f6 | DAT_00603b28
    MOV ECX,dword ptr [EAX + 0x15acc0]  ; 005423fb | DAT_02032588
    ADD ESP,0x10                        ; 00542401
    CMP ECX,0xb                         ; 00542404
    JL 0x0054241c                       ; 00542407
        ;   XREF to: 0054241c (CONDITIONAL_JUMP)  ; LAB_0054241c
    PUSH ESI                            ; 00542409
    PUSH 0xff                           ; 0054240a
    LEA EAX,[ESP + 0x8]                 ; 0054240f
    PUSH EAX                            ; 00542413
    CALL FUN_005a3f00                   ; 00542414
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 00542419
    LEA EAX,[EBX + 0x11ec]              ; 0054241c
        ;   Label: LAB_0054241c
    PUSH EAX                            ; 00542422
    PUSH 0x5d0edc                       ; 00542423 | DAT_005d0edc
    PUSH ESI                            ; 00542428
    CALL FUN_005a3230                   ; 00542429
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    MOV EAX,[0x00603b28]                ; 0054242e | DAT_00603b28
    MOV EDI,dword ptr [EAX + 0x15acc0]  ; 00542433 | DAT_02032588
    ADD ESP,0xc                         ; 00542439
    CMP EDI,0xb                         ; 0054243c
    JL 0x00542454                       ; 0054243f
        ;   XREF to: 00542454 (CONDITIONAL_JUMP)  ; LAB_00542454
    PUSH ESI                            ; 00542441
    PUSH 0xff                           ; 00542442
    LEA EAX,[ESP + 0x8]                 ; 00542447
    PUSH EAX                            ; 0054244b
    CALL FUN_005a3f00                   ; 0054244c
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 00542451
    MOV EAX,[0x00603b28]                ; 00542454 | DAT_00603b28
        ;   Label: LAB_00542454
    CMP dword ptr [EAX + 0x15acc0],0x9  ; 00542459 | DAT_02032588
    JL 0x00542722                       ; 00542460
        ;   XREF to: 00542722 (CONDITIONAL_JUMP)  ; LAB_00542722
    LEA EAX,[EBX + 0x11f0]              ; 00542466
    PUSH EAX                            ; 0054246c
    PUSH 0x5d0ee0                       ; 0054246d | DAT_005d0ee0
    PUSH ESI                            ; 00542472
    CALL FUN_005a3230                   ; 00542473
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0xc                         ; 00542478
    MOV EAX,dword ptr [EBX + 0x11ec]    ; 0054247b
        ;   Label: LAB_0054247b
    XOR EDI,EDI                         ; 00542481
    TEST EAX,EAX                        ; 00542483
    JLE 0x00542539                      ; 00542485
        ;   XREF to: 00542539 (CONDITIONAL_JUMP)  ; LAB_00542539
    LEA EAX,[EBX + 0x1774]              ; 0054248b
    LEA EBP,[EBX + 0x16f4]              ; 00542491
    MOV dword ptr [ESP + 0x120],EAX     ; 00542497
    LEA EAX,[EBX + 0x11f4]              ; 0054249e
    MOV dword ptr [ESP + 0x134],EAX     ; 005424a4
    MOV dword ptr [ESP + 0x130],EBX     ; 005424ab
    LEA EDX,[EDI*0x4 + 0x0]             ; 005424b2
        ;   Label: LAB_005424b2
    MOV EAX,[0x00603b28]                ; 005424b9 | DAT_00603b28
    MOV dword ptr [ESP + 0x12c],EDX     ; 005424be
    CMP dword ptr [EAX + 0x15acc0],0x10 ; 005424c5 | DAT_02032588
    JGE 0x00542731                      ; 005424cc
        ;   XREF to: 00542731 (CONDITIONAL_JUMP)  ; LAB_00542731
    MOV ECX,dword ptr [ESP + 0x134]     ; 005424d2
    PUSH ECX                            ; 005424d9
    PUSH EBP                            ; 005424da
    PUSH 0x5d0ee4                       ; 005424db | = "%f,%s\n"
    PUSH ESI                            ; 005424e0
    CALL FUN_005a3230                   ; 005424e1
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x10                        ; 005424e6
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005424e9
    MOV dword ptr [EBX + EAX*0x1 + 0x1774],0x0 ; 005424f0
    MOV EAX,dword ptr [ESP + 0x130]     ; 005424fb
        ;   Label: LAB_005424fb
    MOV EDX,dword ptr [ESP + 0x134]     ; 00542502
    ADD EBP,0x4                         ; 00542509
    INC EDI                             ; 0054250c
    ADD EDX,0x28                        ; 0054250d
    LEA ECX,[EAX + 0x4]                 ; 00542510
    MOV dword ptr [EAX + 0x1810],0x0    ; 00542513
    MOV dword ptr [ESP + 0x134],EDX     ; 0054251d
    MOV EAX,dword ptr [EBX + 0x11ec]    ; 00542524
    MOV dword ptr [ESP + 0x130],ECX     ; 0054252a
    CMP EDI,EAX                         ; 00542531
    JL 0x005424b2                       ; 00542533
        ;   XREF to: 005424b2 (CONDITIONAL_JUMP)  ; LAB_005424b2
    MOV EAX,[0x00603b28]                ; 00542539 | DAT_00603b28
        ;   Label: LAB_00542539
    CMP dword ptr [EAX + 0x15acc0],0xb  ; 0054253e | DAT_02032588
    JL 0x0054255a                       ; 00542545
        ;   XREF to: 0054255a (CONDITIONAL_JUMP)  ; LAB_0054255a
    PUSH ESI                            ; 00542547
    PUSH 0xff                           ; 00542548
    LEA EAX,[ESP + 0x8]                 ; 0054254d
    PUSH EAX                            ; 00542551
    CALL FUN_005a3f00                   ; 00542552
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 00542557
    LEA EAX,[EBX + 0x1890]              ; 0054255a
        ;   Label: LAB_0054255a
    PUSH EAX                            ; 00542560
    PUSH 0x5d0ef5                       ; 00542561 | DAT_005d0ef5
    PUSH ESI                            ; 00542566
    CALL FUN_005a3230                   ; 00542567
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    MOV EAX,[0x00603b28]                ; 0054256c | DAT_00603b28
    MOV ECX,dword ptr [EAX + 0x15acc0]  ; 00542571 | DAT_02032588
    ADD ESP,0xc                         ; 00542577
    CMP ECX,0x13                        ; 0054257a
    JL 0x0054275e                       ; 0054257d
        ;   XREF to: 0054275e (CONDITIONAL_JUMP)  ; LAB_0054275e
    PUSH ESI                            ; 00542583
    PUSH 0xff                           ; 00542584
    LEA EAX,[ESP + 0x8]                 ; 00542589
    PUSH EAX                            ; 0054258d
    CALL FUN_005a3f00                   ; 0054258e
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 00542593
    LEA EAX,[EBX + 0x1804]              ; 00542596
    PUSH EAX                            ; 0054259c
    LEA EAX,[EBX + 0x1800]              ; 0054259d
    PUSH EAX                            ; 005425a3
    LEA EAX,[EBX + 0x17fc]              ; 005425a4
    PUSH EAX                            ; 005425aa
    LEA EAX,[EBX + 0x17f8]              ; 005425ab
    PUSH EAX                            ; 005425b1
    LEA EAX,[EBX + 0x17f4]              ; 005425b2
    PUSH EAX                            ; 005425b8
    PUSH 0x5d0ef9                       ; 005425b9 | = "%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 005425be
    CALL FUN_005a3230                   ; 005425bf
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x1c                        ; 005425c4
    MOV EAX,[0x00603b28]                ; 005425c7 | DAT_00603b28
        ;   Label: LAB_005425c7
    CMP dword ptr [EAX + 0x15acc0],0xb  ; 005425cc | DAT_02032588
    JL 0x005425e8                       ; 005425d3
        ;   XREF to: 005425e8 (CONDITIONAL_JUMP)  ; LAB_005425e8
    PUSH ESI                            ; 005425d5
    PUSH 0xff                           ; 005425d6
    LEA EAX,[ESP + 0x8]                 ; 005425db
    PUSH EAX                            ; 005425df
    CALL FUN_005a3f00                   ; 005425e0
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 005425e5
    LEA EAX,[EBX + 0x11e4]              ; 005425e8
        ;   Label: LAB_005425e8
    PUSH EAX                            ; 005425ee
    LEA EAX,[EBX + 0x11e0]              ; 005425ef
    PUSH EAX                            ; 005425f5
    PUSH 0x5d0f09                       ; 005425f6 | = "%f,%f\n"
    PUSH ESI                            ; 005425fb
    CALL FUN_005a3230                   ; 005425fc
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x10                        ; 00542601
    PUSH ESI                            ; 00542604
    PUSH 0xff                           ; 00542605
    LEA EAX,[ESP + 0x8]                 ; 0054260a
    PUSH EAX                            ; 0054260e
    CALL FUN_005a3f00                   ; 0054260f
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    MOV EBP,dword ptr [0x00603b28]      ; 00542614 | DAT_00603b28
    MOV EAX,dword ptr [EBP + 0x15acc0]  ; 0054261a | DAT_02032588
    ADD ESP,0xc                         ; 00542620
    CMP EAX,0xb                         ; 00542623
    JGE 0x005427f2                      ; 00542626
        ;   XREF to: 005427f2 (CONDITIONAL_JUMP)  ; LAB_005427f2
    MOV ECX,dword ptr [EBP + 0x15acc0]  ; 0054262c | DAT_02032588
    MOV EAX,0x64                        ; 00542632
    CMP ECX,0x7                         ; 00542637
    JL 0x0054264a                       ; 0054263a
        ;   XREF to: 0054264a (CONDITIONAL_JUMP)  ; LAB_0054264a
    CMP ECX,0x1a                        ; 0054263c
    JL 0x00542795                       ; 0054263f
        ;   XREF to: 00542795 (CONDITIONAL_JUMP)  ; LAB_00542795
    MOV EAX,0xfa                        ; 00542645
    TEST EAX,EAX                        ; 0054264a
        ;   Label: LAB_0054264a
    JLE 0x005426c3                      ; 0054264c
        ;   XREF to: 005426c3 (CONDITIONAL_JUMP)  ; LAB_005426c3
    LEA EDX,[EBX + 0x224]               ; 0054264e
    SHL EAX,0x4                         ; 00542654
    XOR EDI,EDI                         ; 00542657
    MOV EBP,EBX                         ; 00542659
    MOV dword ptr [ESP + 0x128],EAX     ; 0054265b
    MOV dword ptr [ESP + 0x124],EDX     ; 00542662
    MOV EAX,[0x00603b28]                ; 00542669 | DAT_00603b28
        ;   Label: LAB_00542669
    CMP dword ptr [EAX + 0x15acc0],0x2  ; 0054266e | DAT_02032588
    JL 0x0054279f                       ; 00542675
        ;   XREF to: 0054279f (CONDITIONAL_JUMP)  ; LAB_0054279f
    MOV EAX,dword ptr [ESP + 0x124]     ; 0054267b
    ADD EAX,EDI                         ; 00542682
    LEA EDX,[EAX + 0xc]                 ; 00542684
    PUSH EDX                            ; 00542687
    LEA EDX,[EAX + 0x8]                 ; 00542688
    PUSH EDX                            ; 0054268b
    LEA EDX,[EAX + 0x4]                 ; 0054268c
    PUSH EDX                            ; 0054268f
    PUSH EAX                            ; 00542690
    LEA EAX,[ESP + 0x118]               ; 00542691
    PUSH EAX                            ; 00542698
    PUSH 0x5d0f14                       ; 00542699 | = "%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 0054269e
    CALL FUN_005a3230                   ; 0054269f
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x1c                        ; 005426a4
    MOV AL,byte ptr [ESP + 0x108]       ; 005426a7
    MOV byte ptr [EBP + 0x128],AL       ; 005426ae
    MOV EAX,dword ptr [ESP + 0x128]     ; 005426b4
        ;   Label: LAB_005426b4
    ADD EDI,0x10                        ; 005426bb
    INC EBP                             ; 005426be
    CMP EDI,EAX                         ; 005426bf
    JL 0x00542669                       ; 005426c1
        ;   XREF to: 00542669 (CONDITIONAL_JUMP)  ; LAB_00542669
    FLD float ptr [EBX + 0x11d4]        ; 005426c3
        ;   Label: LAB_005426c3
    FLD1                                ; 005426c9
    FDIVRP                              ; 005426cb
    FLD float ptr [EBX + 0x11d4]        ; 005426cd
    FMUL ST0                            ; 005426d3
    FSTP float ptr [EBX + 0x11d8]       ; 005426d5
    FSTP float ptr [EBX + 0x11dc]       ; 005426db
    ADD ESP,0x138                       ; 005426e1
    POP EBP                             ; 005426e7
    POP EDI                             ; 005426e8
    POP ESI                             ; 005426e9
    POP EBX                             ; 005426ea
    RET                                 ; 005426eb
    PUSH ESI                            ; 005426ec
        ;   Label: LAB_005426ec
    PUSH 0xff                           ; 005426ed
    LEA EAX,[ESP + 0x8]                 ; 005426f2
    PUSH EAX                            ; 005426f6
    CALL FUN_005a3f00                   ; 005426f7
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 005426fc
    JMP 0x005421ea                      ; 005426ff
        ;   XREF to: 005421ea (UNCONDITIONAL_JUMP)  ; LAB_005421ea
    MOV dword ptr [EBX + 0x120],0x3f800000 ; 00542704
        ;   Label: LAB_00542704
    JMP 0x005422fc                      ; 0054270e
        ;   XREF to: 005422fc (UNCONDITIONAL_JUMP)  ; LAB_005422fc
    MOV dword ptr [EBX + 0x124],0x3f800000 ; 00542713
        ;   Label: LAB_00542713
    JMP 0x00542336                      ; 0054271d
        ;   XREF to: 00542336 (UNCONDITIONAL_JUMP)  ; LAB_00542336
    MOV dword ptr [EBX + 0x11f0],0x1    ; 00542722
        ;   Label: LAB_00542722
    JMP 0x0054247b                      ; 0054272c
        ;   XREF to: 0054247b (UNCONDITIONAL_JUMP)  ; LAB_0054247b
    MOV ECX,dword ptr [ESP + 0x134]     ; 00542731
        ;   Label: LAB_00542731
    MOV EAX,dword ptr [ESP + 0x120]     ; 00542738
    MOV EDX,dword ptr [ESP + 0x12c]     ; 0054273f
    PUSH ECX                            ; 00542746
    ADD EAX,EDX                         ; 00542747
    PUSH EAX                            ; 00542749
    PUSH EBP                            ; 0054274a
    PUSH 0x5d0eeb                       ; 0054274b | = "%f,%d,%s\n"
    PUSH ESI                            ; 00542750
    CALL FUN_005a3230                   ; 00542751
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x14                        ; 00542756
    JMP 0x005424fb                      ; 00542759
        ;   XREF to: 005424fb (UNCONDITIONAL_JUMP)  ; LAB_005424fb
    MOV dword ptr [EBX + 0x17f8],0x0    ; 0054275e
        ;   Label: LAB_0054275e
    MOV dword ptr [EBX + 0x17fc],0x0    ; 00542768
    MOV dword ptr [EBX + 0x1800],0x0    ; 00542772
    MOV dword ptr [EBX + 0x1804],0x0    ; 0054277c
    MOV dword ptr [EBX + 0x17f4],0x0    ; 00542786
    JMP 0x005425c7                      ; 00542790
        ;   XREF to: 005425c7 (UNCONDITIONAL_JUMP)  ; LAB_005425c7
    MOV EAX,0xc8                        ; 00542795
        ;   Label: LAB_00542795
    JMP 0x0054264a                      ; 0054279a
        ;   XREF to: 0054264a (UNCONDITIONAL_JUMP)  ; LAB_0054264a
    LEA EAX,[ESP + 0x104]               ; 0054279f
        ;   Label: LAB_0054279f
    PUSH EAX                            ; 005427a6
    PUSH 0x5d0f10                       ; 005427a7 | DAT_005d0f10
    PUSH ESI                            ; 005427ac
    CALL FUN_005a3230                   ; 005427ad
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0xc                         ; 005427b2
    MOV AL,byte ptr [ESP + 0x104]       ; 005427b5
    MOV byte ptr [EBP + 0x128],AL       ; 005427bc
    LEA EAX,[EBX + EDI*0x1]             ; 005427c2
    MOV dword ptr [EAX + 0x224],0x1     ; 005427c5
    MOV dword ptr [EAX + 0x228],0x13e   ; 005427cf
    MOV dword ptr [EAX + 0x22c],0x1     ; 005427d9
    MOV dword ptr [EAX + 0x230],0xee    ; 005427e3
    JMP 0x005426b4                      ; 005427ed
        ;   XREF to: 005426b4 (UNCONDITIONAL_JUMP)  ; LAB_005426b4
    PUSH 0xfa                           ; 005427f2
        ;   Label: LAB_005427f2
    PUSH 0x0                            ; 005427f7
    LEA EAX,[EBX + 0x128]               ; 005427f9
    PUSH EAX                            ; 005427ff
    CALL FUN_005a28f0                   ; 00542800
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 00542805
    PUSH 0xfa0                          ; 00542808
    PUSH 0x0                            ; 0054280d
    LEA EAX,[EBX + 0x224]               ; 0054280f
    PUSH EAX                            ; 00542815
    CALL FUN_005a28f0                   ; 00542816
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 0054281b
    LEA EAX,[ESP + 0x100]               ; 0054281e
    PUSH EAX                            ; 00542825
    PUSH 0x5d0f24                       ; 00542826 | DAT_005d0f24
    PUSH ESI                            ; 0054282b
    CALL FUN_005a3230                   ; 0054282c
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0xc                         ; 00542831
    MOV EDX,dword ptr [ESP + 0x100]     ; 00542834
    XOR EBP,EBP                         ; 0054283b
    TEST EDX,EDX                        ; 0054283d
    JLE 0x005426c3                      ; 0054283f
        ;   XREF to: 005426c3 (CONDITIONAL_JUMP)  ; LAB_005426c3
    LEA EAX,[ESP + 0x11c]               ; 00542845
        ;   Label: LAB_00542845
    PUSH EAX                            ; 0054284c
    LEA EAX,[ESP + 0x118]               ; 0054284d
    PUSH EAX                            ; 00542854
    LEA EAX,[ESP + 0x120]               ; 00542855
    PUSH EAX                            ; 0054285c
    LEA EAX,[ESP + 0x11c]               ; 0054285d
    PUSH EAX                            ; 00542864
    LEA EAX,[ESP + 0x11c]               ; 00542865
    PUSH EAX                            ; 0054286c
    PUSH 0x5d0f28                       ; 0054286d | = "%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 00542872
    CALL FUN_005a3230                   ; 00542873
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x1c                        ; 00542878
    CMP dword ptr [ESP + 0x10c],0xfa    ; 0054287b
    JGE 0x00542914                      ; 00542886
        ;   XREF to: 00542914 (CONDITIONAL_JUMP)  ; LAB_00542914
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0054288c
        ;   Label: LAB_0054288c
    MOV byte ptr [EBX + EAX*0x1 + 0x128],0x1 ; 00542893
    MOV EDX,dword ptr [ESP + 0x10c]     ; 0054289b
    SHL EDX,0x4                         ; 005428a2
    MOV EAX,dword ptr [ESP + 0x110]     ; 005428a5
    MOV dword ptr [EDX + EBX*0x1 + 0x224],EAX ; 005428ac
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005428b3
    SHL EAX,0x4                         ; 005428ba
    LEA EDX,[EBX + EAX*0x1]             ; 005428bd
    MOV EAX,dword ptr [ESP + 0x118]     ; 005428c0
    MOV dword ptr [EDX + 0x228],EAX     ; 005428c7
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005428cd
    SHL EAX,0x4                         ; 005428d4
    LEA EDX,[EBX + EAX*0x1]             ; 005428d7
    MOV EAX,dword ptr [ESP + 0x114]     ; 005428da
    MOV dword ptr [EDX + 0x22c],EAX     ; 005428e1
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005428e7
    SHL EAX,0x4                         ; 005428ee
    LEA EDX,[EBX + EAX*0x1]             ; 005428f1
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005428f4
    MOV dword ptr [EDX + 0x230],EAX     ; 005428fb
    INC EBP                             ; 00542901
    CMP EBP,dword ptr [ESP + 0x100]     ; 00542902
    JGE 0x005426c3                      ; 00542909
        ;   XREF to: 005426c3 (CONDITIONAL_JUMP)  ; LAB_005426c3
    JMP 0x00542845                      ; 0054290f
        ;   XREF to: 00542845 (UNCONDITIONAL_JUMP)  ; LAB_00542845
    MOV EDX,0x5d0f38                    ; 00542914 | = "..\\core\\setutil.cpp"
        ;   Label: LAB_00542914
    MOV ECX,0x2d8                       ; 00542919
    PUSH 0x5d0f4c                       ; 0054291e | = "Invalid camera number in visiblilty l..."
    MOV dword ptr [0x01d71de0],EDX      ; 00542923 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00542929 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0054292f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00542934
    JMP 0x0054288c                      ; 00542937
        ;   XREF to: 0054288c (UNCONDITIONAL_JUMP)  ; LAB_0054288c

