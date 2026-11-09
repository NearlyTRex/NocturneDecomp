; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_unknown_c_FUN_005c12d0(byte *param_1,byte *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   crt_stdio.c_freopen_FUN_005c1614 at 005c1627
;   crt_unknown.c_FUN_005c1520 at 005c152e
;
; Referenced Globals:
;   undefined4 DAT_006264e0
;   undefined4 DAT_00626770
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005c6450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c12d0
        ;   Label: crt_unknown.c_FUN_005c12d0
    PUSH ESI                            ; 005c12d1
    PUSH EDI                            ; 005c12d2
    PUSH EBP                            ; 005c12d3
    SUB ESP,0x4                         ; 005c12d4
    MOV ECX,dword ptr [ESP + 0x18]      ; 005c12d7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005c12db
    MOV EDX,0x1                         ; 005c12df
    XOR EBX,EBX                         ; 005c12e4
    XOR EDI,EDI                         ; 005c12e6
    XOR EBP,EBP                         ; 005c12e8
    MOV dword ptr [ESP],EBX             ; 005c12ea
    TEST ESI,ESI                        ; 005c12ed
    JZ 0x005c12ff                       ; 005c12ef
        ;   XREF to: 005c12ff (CONDITIONAL_JUMP)  ; LAB_005c12ff
    CMP EDX,dword ptr [0x00626770]      ; 005c12f1 | DAT_00626770
    JNZ 0x005c12fd                      ; 005c12f7
        ;   XREF to: 005c12fd (CONDITIONAL_JUMP)  ; LAB_005c12fd
    MOV dword ptr [ESI],EDX             ; 005c12f9
    JMP 0x005c12ff                      ; 005c12fb
        ;   XREF to: 005c12ff (UNCONDITIONAL_JUMP)  ; LAB_005c12ff
    MOV dword ptr [ESI],EBX             ; 005c12fd
        ;   Label: LAB_005c12fd
    MOV AL,byte ptr [ECX]               ; 005c12ff
        ;   Label: LAB_005c12ff
    CMP AL,0x72                         ; 005c1301
    JC 0x005c130d                       ; 005c1303
        ;   XREF to: 005c130d (CONDITIONAL_JUMP)  ; LAB_005c130d
    JBE 0x005c1313                      ; 005c1305
        ;   XREF to: 005c1313 (CONDITIONAL_JUMP)  ; LAB_005c1313
    CMP AL,0x77                         ; 005c1307
    JZ 0x005c1318                       ; 005c1309
        ;   XREF to: 005c1318 (CONDITIONAL_JUMP)  ; LAB_005c1318
    JMP 0x005c1322                      ; 005c130b
        ;   XREF to: 005c1322 (UNCONDITIONAL_JUMP)  ; LAB_005c1322
    CMP AL,0x61                         ; 005c130d
        ;   Label: LAB_005c130d
    JZ 0x005c131d                       ; 005c130f
        ;   XREF to: 005c131d (CONDITIONAL_JUMP)  ; LAB_005c131d
    JMP 0x005c1322                      ; 005c1311
        ;   XREF to: 005c1322 (UNCONDITIONAL_JUMP)  ; LAB_005c1322
    OR BL,0x1                           ; 005c1313
        ;   Label: LAB_005c1313
    JMP 0x005c1333                      ; 005c1316
        ;   XREF to: 005c1333 (UNCONDITIONAL_JUMP)  ; LAB_005c1333
    OR BL,0x2                           ; 005c1318
        ;   Label: LAB_005c1318
    JMP 0x005c1333                      ; 005c131b
        ;   XREF to: 005c1333 (UNCONDITIONAL_JUMP)  ; LAB_005c1333
    OR BL,0x82                          ; 005c131d
        ;   Label: LAB_005c131d
    JMP 0x005c1333                      ; 005c1320
        ;   XREF to: 005c1333 (UNCONDITIONAL_JUMP)  ; LAB_005c1333
    PUSH 0x9                            ; 005c1322
        ;   Label: LAB_005c1322
    CALL crt_errno.c_setErrno_FUN_005c6450 ; 005c1324
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005c6450(int error_code)
    ADD ESP,0x4                         ; 005c1329
    XOR EDX,EDX                         ; 005c132c
    JMP 0x005c1402                      ; 005c132e
        ;   XREF to: 005c1402 (UNCONDITIONAL_JUMP)  ; LAB_005c1402
    MOV AH,byte ptr [ECX + 0x1]         ; 005c1333
        ;   Label: LAB_005c1333
    INC ECX                             ; 005c1336
    TEST AH,AH                          ; 005c1337
    JZ 0x005c13ed                       ; 005c1339
        ;   XREF to: 005c13ed (CONDITIONAL_JUMP)  ; LAB_005c13ed
    TEST EDX,EDX                        ; 005c133f
        ;   Label: LAB_005c133f
    JZ 0x005c13ed                       ; 005c1341
        ;   XREF to: 005c13ed (CONDITIONAL_JUMP)  ; LAB_005c13ed
    MOV AL,byte ptr [ECX]               ; 005c1347
    CMP AL,0x63                         ; 005c1349
    JC 0x005c136a                       ; 005c134b
        ;   XREF to: 005c136a (CONDITIONAL_JUMP)  ; LAB_005c136a
    JBE 0x005c13b8                      ; 005c134d
        ;   XREF to: 005c13b8 (CONDITIONAL_JUMP)  ; LAB_005c13b8
    CMP AL,0x6e                         ; 005c1353
    JC 0x005c13e1                       ; 005c1355
        ;   XREF to: 005c13e1 (CONDITIONAL_JUMP)  ; LAB_005c13e1
    JBE 0x005c13cd                      ; 005c135b
        ;   XREF to: 005c13cd (CONDITIONAL_JUMP)  ; LAB_005c13cd
    CMP AL,0x74                         ; 005c1361
    JZ 0x005c1397                       ; 005c1363
        ;   XREF to: 005c1397 (CONDITIONAL_JUMP)  ; LAB_005c1397
    JMP 0x005c13e1                      ; 005c1365
        ;   XREF to: 005c13e1 (UNCONDITIONAL_JUMP)  ; LAB_005c13e1
    CMP AL,0x2b                         ; 005c136a
        ;   Label: LAB_005c136a
    JC 0x005c13e1                       ; 005c136c
        ;   XREF to: 005c13e1 (CONDITIONAL_JUMP)  ; LAB_005c13e1
    JBE 0x005c137d                      ; 005c1372
        ;   XREF to: 005c137d (CONDITIONAL_JUMP)  ; LAB_005c137d
    CMP AL,0x62                         ; 005c1374
    JZ 0x005c13a6                       ; 005c1376
        ;   XREF to: 005c13a6 (CONDITIONAL_JUMP)  ; LAB_005c13a6
    JMP 0x005c13e1                      ; 005c1378
        ;   XREF to: 005c13e1 (UNCONDITIONAL_JUMP)  ; LAB_005c13e1
    CMP dword ptr [ESP],0x0             ; 005c137d
        ;   Label: LAB_005c137d
    JZ 0x005c138a                       ; 005c1381
        ;   XREF to: 005c138a (CONDITIONAL_JUMP)  ; LAB_005c138a
    XOR EDX,EDX                         ; 005c1383
    JMP 0x005c13e1                      ; 005c1385
        ;   XREF to: 005c13e1 (UNCONDITIONAL_JUMP)  ; LAB_005c13e1
    MOV EAX,0x1                         ; 005c138a
        ;   Label: LAB_005c138a
    OR BL,0x3                           ; 005c138f
    MOV dword ptr [ESP],EAX             ; 005c1392
    JMP 0x005c13e1                      ; 005c1395
        ;   XREF to: 005c13e1 (UNCONDITIONAL_JUMP)  ; LAB_005c13e1
    TEST EDI,EDI                        ; 005c1397
        ;   Label: LAB_005c1397
    JZ 0x005c139f                       ; 005c1399
        ;   XREF to: 005c139f (CONDITIONAL_JUMP)  ; LAB_005c139f
    XOR EDX,EDX                         ; 005c139b
    JMP 0x005c13e1                      ; 005c139d
        ;   XREF to: 005c13e1 (UNCONDITIONAL_JUMP)  ; LAB_005c13e1
    MOV EDI,0x1                         ; 005c139f
        ;   Label: LAB_005c139f
    JMP 0x005c13e1                      ; 005c13a4
        ;   XREF to: 005c13e1 (UNCONDITIONAL_JUMP)  ; LAB_005c13e1
    TEST EDI,EDI                        ; 005c13a6
        ;   Label: LAB_005c13a6
    JZ 0x005c13ae                       ; 005c13a8
        ;   XREF to: 005c13ae (CONDITIONAL_JUMP)  ; LAB_005c13ae
    XOR EDX,EDX                         ; 005c13aa
    JMP 0x005c13e1                      ; 005c13ac
        ;   XREF to: 005c13e1 (UNCONDITIONAL_JUMP)  ; LAB_005c13e1
    MOV EDI,0x1                         ; 005c13ae
        ;   Label: LAB_005c13ae
    OR BL,0x40                          ; 005c13b3
    JMP 0x005c13e1                      ; 005c13b6
        ;   XREF to: 005c13e1 (UNCONDITIONAL_JUMP)  ; LAB_005c13e1
    TEST EBP,EBP                        ; 005c13b8
        ;   Label: LAB_005c13b8
    JZ 0x005c13c0                       ; 005c13ba
        ;   XREF to: 005c13c0 (CONDITIONAL_JUMP)  ; LAB_005c13c0
    XOR EDX,EDX                         ; 005c13bc
    JMP 0x005c13e1                      ; 005c13be
        ;   XREF to: 005c13e1 (UNCONDITIONAL_JUMP)  ; LAB_005c13e1
    MOV AL,byte ptr [ESI]               ; 005c13c0
        ;   Label: LAB_005c13c0
    OR AL,0x1                           ; 005c13c2
    MOV EBP,0x1                         ; 005c13c4
    MOV byte ptr [ESI],AL               ; 005c13c9
    JMP 0x005c13e1                      ; 005c13cb
        ;   XREF to: 005c13e1 (UNCONDITIONAL_JUMP)  ; LAB_005c13e1
    TEST EBP,EBP                        ; 005c13cd
        ;   Label: LAB_005c13cd
    JZ 0x005c13d5                       ; 005c13cf
        ;   XREF to: 005c13d5 (CONDITIONAL_JUMP)  ; LAB_005c13d5
    XOR EDX,EDX                         ; 005c13d1
    JMP 0x005c13e1                      ; 005c13d3
        ;   XREF to: 005c13e1 (UNCONDITIONAL_JUMP)  ; LAB_005c13e1
    MOV AH,byte ptr [ESI]               ; 005c13d5
        ;   Label: LAB_005c13d5
    AND AH,0xfe                         ; 005c13d7
    MOV EBP,0x1                         ; 005c13da
    MOV byte ptr [ESI],AH               ; 005c13df
    MOV AL,byte ptr [ECX + 0x1]         ; 005c13e1
        ;   Label: LAB_005c13e1
    INC ECX                             ; 005c13e4
    TEST AL,AL                          ; 005c13e5
    JNZ 0x005c133f                      ; 005c13e7
        ;   XREF to: 005c133f (CONDITIONAL_JUMP)  ; LAB_005c133f
    TEST EDI,EDI                        ; 005c13ed
        ;   Label: LAB_005c13ed
    JNZ 0x005c1400                      ; 005c13ef
        ;   XREF to: 005c1400 (CONDITIONAL_JUMP)  ; LAB_005c1400
    CMP dword ptr [0x006264e0],0x200    ; 005c13f1 | DAT_006264e0
    JNZ 0x005c1400                      ; 005c13fb
        ;   XREF to: 005c1400 (CONDITIONAL_JUMP)  ; LAB_005c1400
    OR BL,0x40                          ; 005c13fd
    MOV EDX,EBX                         ; 005c1400
        ;   Label: LAB_005c1400
    MOV EAX,EDX                         ; 005c1402
        ;   Label: LAB_005c1402
    ADD ESP,0x4                         ; 005c1404
    POP EBP                             ; 005c1407
    POP EDI                             ; 005c1408
    POP ESI                             ; 005c1409
    POP EBX                             ; 005c140a
    RET                                 ; 005c140b

