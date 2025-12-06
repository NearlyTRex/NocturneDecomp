; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_superopt.cpp_CPoly_hasColinearEdge_FUN_005d12d0(CPoly * this_ptr, CPoly * other)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; CPoly *          Stack[0x8]:4   other
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d12d0
        ;   Label: shape_superopt.cpp_CPoly_hasColinearEdge_FUN_005d12d0
    PUSH ESI                            ; 005d12d1
    PUSH EDI                            ; 005d12d2
    PUSH EBP                            ; 005d12d3
    MOV EAX,dword ptr [ESP + 0x14]      ; 005d12d4
    MOV EDX,dword ptr [ESP + 0x18]      ; 005d12d8
    MOV ECX,dword ptr [EAX + 0x4]       ; 005d12dc
    MOV EBX,dword ptr [EDX + 0x4]       ; 005d12df
    ADD EDX,0x4                         ; 005d12e2
    ADD EAX,0x4                         ; 005d12e5
    CMP ECX,EBX                         ; 005d12e8
    JNZ 0x005d12f8                      ; 005d12ea | LAB_005d12f8
        ;   XREF to: 005d12f8 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EDX + 0x4]       ; 005d12ec
    CMP ESI,dword ptr [EAX + 0x4]       ; 005d12ef
    JZ 0x005d1376                       ; 005d12f2 | LAB_005d1376
        ;   XREF to: 005d1376 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EDX + 0x4]       ; 005d12f8
        ;   Label: LAB_005d12f8
    CMP EDI,dword ptr [EAX]             ; 005d12fb
    JNZ 0x005d130b                      ; 005d12fd | LAB_005d130b
        ;   XREF to: 005d130b (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [EDX + 0x8]       ; 005d12ff
    CMP EBP,dword ptr [EAX + 0x4]       ; 005d1302
    JZ 0x005d1376                       ; 005d1305 | LAB_005d1376
        ;   XREF to: 005d1376 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [EDX + 0x8]       ; 005d130b
        ;   Label: LAB_005d130b
    CMP EBX,dword ptr [EAX]             ; 005d130e
    JNZ 0x005d131d                      ; 005d1310 | LAB_005d131d
        ;   XREF to: 005d131d (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EDX]             ; 005d1312
    CMP ESI,dword ptr [EAX + 0x4]       ; 005d1314
    JZ 0x005d1376                       ; 005d1317 | LAB_005d1376
        ;   XREF to: 005d1376 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EDX + 0x4]       ; 005d131d
        ;   Label: LAB_005d131d
    CMP EDI,dword ptr [EAX + 0x4]       ; 005d1320
    JNZ 0x005d132d                      ; 005d1323 | LAB_005d132d
        ;   XREF to: 005d132d (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [EDX + 0x8]       ; 005d1325
    CMP EBP,dword ptr [EAX + 0x8]       ; 005d1328
    JZ 0x005d1376                       ; 005d132b | LAB_005d1376
        ;   XREF to: 005d1376 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [EDX + 0x8]       ; 005d132d
        ;   Label: LAB_005d132d
    CMP EBX,dword ptr [EAX + 0x4]       ; 005d1330
    JNZ 0x005d133c                      ; 005d1333 | LAB_005d133c
        ;   XREF to: 005d133c (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EDX]             ; 005d1335
    CMP ESI,dword ptr [EAX + 0x8]       ; 005d1337
    JZ 0x005d1376                       ; 005d133a | LAB_005d1376
        ;   XREF to: 005d1376 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EDX]             ; 005d133c
        ;   Label: LAB_005d133c
    CMP EDI,dword ptr [EAX + 0x4]       ; 005d133e
    JNZ 0x005d134b                      ; 005d1341 | LAB_005d134b
        ;   XREF to: 005d134b (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [EDX + 0x4]       ; 005d1343
    CMP EBP,dword ptr [EAX + 0x8]       ; 005d1346
    JZ 0x005d1376                       ; 005d1349 | LAB_005d1376
        ;   XREF to: 005d1376 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [EDX + 0x8]       ; 005d134b
        ;   Label: LAB_005d134b
    CMP EBX,dword ptr [EAX + 0x8]       ; 005d134e
    JNZ 0x005d1359                      ; 005d1351 | LAB_005d1359
        ;   XREF to: 005d1359 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EDX]             ; 005d1353
    CMP ESI,dword ptr [EAX]             ; 005d1355
    JZ 0x005d1376                       ; 005d1357 | LAB_005d1376
        ;   XREF to: 005d1376 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EDX]             ; 005d1359
        ;   Label: LAB_005d1359
    CMP EDI,dword ptr [EAX + 0x8]       ; 005d135b
    JNZ 0x005d1367                      ; 005d135e | LAB_005d1367
        ;   XREF to: 005d1367 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [EDX + 0x4]       ; 005d1360
    CMP EBP,dword ptr [EAX]             ; 005d1363
    JZ 0x005d1376                       ; 005d1365 | LAB_005d1376
        ;   XREF to: 005d1376 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [EDX + 0x4]       ; 005d1367
        ;   Label: LAB_005d1367
    CMP EBX,dword ptr [EAX + 0x8]       ; 005d136a
    JNZ 0x005d1380                      ; 005d136d | LAB_005d1380
        ;   XREF to: 005d1380 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EDX + 0x8]       ; 005d136f
    CMP ESI,dword ptr [EAX]             ; 005d1372
    JNZ 0x005d1380                      ; 005d1374 | LAB_005d1380
        ;   XREF to: 005d1380 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 005d1376
        ;   Label: LAB_005d1376
    POP EBP                             ; 005d137b
    POP EDI                             ; 005d137c
    POP ESI                             ; 005d137d
    POP EBX                             ; 005d137e
    RET                                 ; 005d137f
    XOR EAX,EAX                         ; 005d1380
        ;   Label: LAB_005d1380
    POP EBP                             ; 005d1382
    POP EDI                             ; 005d1383
    POP ESI                             ; 005d1384
    POP EBX                             ; 005d1385
    RET                                 ; 005d1386

