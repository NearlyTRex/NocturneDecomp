; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005a6190(undefined4 param_1,char *param_2,int *param_3,code *param_4)
;
; Local Variables:
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x78]:4  local_78
; undefined2       Stack[-0x6c]:2  local_6c
; undefined2       Stack[-0x6a]:2  local_6a
; undefined1       Stack[-0x18]:1  local_18
;
; XREF[2]:
;   crt_stdio.c_vsprintf_FUN_005a2898 at 005a28ad
;   crt_unknown.c_FUN_005a7e50 at 005a7ee0
;
; Called Functions:
;   crt_unknown.c_FUN_005a65b8
;   crt_unknown.c_FUN_005a6a00
;   crt_unknown.c_FUN_005a6a78
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a6190
        ;   Label: crt_unknown.c_FUN_005a6190
    PUSH ESI                            ; 005a6191
    PUSH EDI                            ; 005a6192
    PUSH ES                             ; 005a6193
    PUSH EBP                            ; 005a6194
    SUB ESP,0x74                        ; 005a6195
    MOV EAX,dword ptr [ESP + 0x90]      ; 005a6198
    MOV EBX,dword ptr [ESP + 0x94]      ; 005a619f
    MOV ESI,dword ptr [ESP + 0x98]      ; 005a61a6
    XOR DL,DL                           ; 005a61ad
    MOV byte ptr [ESP + 0x70],DL        ; 005a61af
    MOV EDX,dword ptr [ESP + 0x8c]      ; 005a61b3
    MOV dword ptr [ESP],EDX             ; 005a61ba
    XOR EDX,EDX                         ; 005a61bd
    MOV ECX,0x64                        ; 005a61bf
    MOV word ptr [ESP + 0x1e],DX        ; 005a61c4
    XOR EDX,EDX                         ; 005a61c9
    MOV word ptr [ESP + 0x1c],CX        ; 005a61cb
    MOV dword ptr [ESP + 0x10],EDX      ; 005a61d0
    MOV DH,byte ptr [EAX]               ; 005a61d4
    MOV EBP,EAX                         ; 005a61d6
    TEST DH,DH                          ; 005a61d8
    JZ 0x005a65aa                       ; 005a61da
        ;   XREF to: 005a65aa (CONDITIONAL_JUMP)  ; LAB_005a65aa
    MOV CH,byte ptr [EBP]               ; 005a61e0
        ;   Label: LAB_005a61e0
    LEA EDI,[EBP + 0x1]                 ; 005a61e3
    CMP CH,0x25                         ; 005a61e6
    JZ 0x005a6201                       ; 005a61e9
        ;   XREF to: 005a6201 (CONDITIONAL_JUMP)  ; LAB_005a6201
    XOR EAX,EAX                         ; 005a61eb
    MOV AL,CH                           ; 005a61ed
    PUSH EAX                            ; 005a61ef
    LEA EAX,[ESP + 0x4]                 ; 005a61f0
    PUSH EAX                            ; 005a61f4
    MOV EBP,EDI                         ; 005a61f5
    CALL ESI                            ; 005a61f7
    ADD ESP,0x8                         ; 005a61f9
    JMP 0x005a6581                      ; 005a61fc
        ;   XREF to: 005a6581 (UNCONDITIONAL_JUMP)  ; LAB_005a6581
    MOV EAX,dword ptr [EBX]             ; 005a6201
        ;   Label: LAB_005a6201
    MOV dword ptr [ESP + 0x60],EAX      ; 005a6203
    MOV EAX,ESP                         ; 005a6207
    PUSH EAX                            ; 005a6209
    LEA EAX,[ESP + 0x64]                ; 005a620a
    PUSH EAX                            ; 005a620e
    PUSH EDI                            ; 005a620f
    CALL crt_unknown.c_FUN_005a65b8     ; 005a6210
        ;   XREF to: 005a65b8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a65b8()
    ADD ESP,0xc                         ; 005a6215
    MOV EBP,EAX                         ; 005a6218
    MOV EAX,dword ptr [ESP + 0x60]      ; 005a621a
    MOV dword ptr [EBX],EAX             ; 005a621e
    MOV AL,byte ptr [EBP]               ; 005a6220
    INC EBP                             ; 005a6223
    MOV byte ptr [ESP + 0x15],AL        ; 005a6224
    TEST AL,AL                          ; 005a6228
    JZ 0x005a65aa                       ; 005a622a
        ;   XREF to: 005a65aa (CONDITIONAL_JUMP)  ; LAB_005a65aa
    CMP AL,0x6e                         ; 005a6230
    JNZ 0x005a63b1                      ; 005a6232
        ;   XREF to: 005a63b1 (CONDITIONAL_JUMP)  ; LAB_005a63b1
    MOV CL,byte ptr [ESP + 0x1e]        ; 005a6238
    TEST CL,0x20                        ; 005a623c
    JZ 0x005a62a5                       ; 005a623f
        ;   XREF to: 005a62a5 (CONDITIONAL_JUMP)  ; LAB_005a62a5
    TEST CL,0x80                        ; 005a6241
    JZ 0x005a6262                       ; 005a6244
        ;   XREF to: 005a6262 (CONDITIONAL_JUMP)  ; LAB_005a6262
    MOV ECX,dword ptr [EBX]             ; 005a6246
    ADD ECX,0x8                         ; 005a6248
    MOV dword ptr [EBX],ECX             ; 005a624b
    LES EDI,[ECX + -0x8]                ; 005a624d
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a6250
    MOV dword ptr ES:[EDI],EAX          ; 005a6254
    CMP byte ptr [EBP],0x0              ; 005a6257
    JNZ 0x005a61e0                      ; 005a625b
        ;   XREF to: 005a61e0 (CONDITIONAL_JUMP)  ; LAB_005a61e0
    JMP 0x005a65aa                      ; 005a625d
        ;   XREF to: 005a65aa (UNCONDITIONAL_JUMP)  ; LAB_005a65aa
    TEST CL,0x40                        ; 005a6262
        ;   Label: LAB_005a6262
    JZ 0x005a6286                       ; 005a6265
        ;   XREF to: 005a6286 (CONDITIONAL_JUMP)  ; LAB_005a6286
    MOV EDX,dword ptr [EBX]             ; 005a6267
    ADD EDX,0x4                         ; 005a6269
    MOV dword ptr [EBX],EDX             ; 005a626c
    MOV EDI,dword ptr [EDX + -0x4]      ; 005a626e
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a6271
    MOV dword ptr [EDI],EAX             ; 005a6275
    CMP byte ptr [EBP],0x0              ; 005a6277
    JNZ 0x005a61e0                      ; 005a627b
        ;   XREF to: 005a61e0 (CONDITIONAL_JUMP)  ; LAB_005a61e0
    JMP 0x005a65aa                      ; 005a6281
        ;   XREF to: 005a65aa (UNCONDITIONAL_JUMP)  ; LAB_005a65aa
    MOV EAX,dword ptr [EBX]             ; 005a6286
        ;   Label: LAB_005a6286
    ADD EAX,0x4                         ; 005a6288
    MOV dword ptr [EBX],EAX             ; 005a628b
    MOV EDI,dword ptr [EAX + -0x4]      ; 005a628d
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a6290
    MOV dword ptr [EDI],EAX             ; 005a6294
    CMP byte ptr [EBP],0x0              ; 005a6296
    JNZ 0x005a61e0                      ; 005a629a
        ;   XREF to: 005a61e0 (CONDITIONAL_JUMP)  ; LAB_005a61e0
    JMP 0x005a65aa                      ; 005a62a0
        ;   XREF to: 005a65aa (UNCONDITIONAL_JUMP)  ; LAB_005a65aa
    TEST CL,0x10                        ; 005a62a5
        ;   Label: LAB_005a62a5
    JZ 0x005a6331                       ; 005a62a8
        ;   XREF to: 005a6331 (CONDITIONAL_JUMP)  ; LAB_005a6331
    TEST CL,0x80                        ; 005a62ae
    JZ 0x005a62dc                       ; 005a62b1
        ;   XREF to: 005a62dc (CONDITIONAL_JUMP)  ; LAB_005a62dc
    MOV EDI,dword ptr [EBX]             ; 005a62b3
    ADD EDI,0x8                         ; 005a62b5
    MOV dword ptr [EBX],EDI             ; 005a62b8
    LES EDI,[EDI + -0x8]                ; 005a62ba
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a62bd
    MOV word ptr ES:[EDI],AX            ; 005a62c1
    CMP byte ptr [EBP],0x0              ; 005a62c5
    JNZ 0x005a61e0                      ; 005a62c9
        ;   XREF to: 005a61e0 (CONDITIONAL_JUMP)  ; LAB_005a61e0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a62cf
    ADD ESP,0x74                        ; 005a62d3
    POP EBP                             ; 005a62d6
    POP ES                              ; 005a62d7
    POP EDI                             ; 005a62d8
    POP ESI                             ; 005a62d9
    POP EBX                             ; 005a62da
    RET                                 ; 005a62db
    TEST CL,0x40                        ; 005a62dc
        ;   Label: LAB_005a62dc
    JZ 0x005a6309                       ; 005a62df
        ;   XREF to: 005a6309 (CONDITIONAL_JUMP)  ; LAB_005a6309
    MOV ECX,dword ptr [EBX]             ; 005a62e1
    ADD ECX,0x4                         ; 005a62e3
    MOV dword ptr [EBX],ECX             ; 005a62e6
    MOV EDI,dword ptr [ECX + -0x4]      ; 005a62e8
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a62eb
    MOV word ptr [EDI],AX               ; 005a62ef
    CMP byte ptr [EBP],0x0              ; 005a62f2
    JNZ 0x005a61e0                      ; 005a62f6
        ;   XREF to: 005a61e0 (CONDITIONAL_JUMP)  ; LAB_005a61e0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a62fc
    ADD ESP,0x74                        ; 005a6300
    POP EBP                             ; 005a6303
    POP ES                              ; 005a6304
    POP EDI                             ; 005a6305
    POP ESI                             ; 005a6306
    POP EBX                             ; 005a6307
    RET                                 ; 005a6308
    MOV EDX,dword ptr [EBX]             ; 005a6309
        ;   Label: LAB_005a6309
    ADD EDX,0x4                         ; 005a630b
    MOV dword ptr [EBX],EDX             ; 005a630e
    MOV EDI,dword ptr [EDX + -0x4]      ; 005a6310
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a6313
    MOV word ptr [EDI],AX               ; 005a6317
    CMP byte ptr [EBP],0x0              ; 005a631a
    JNZ 0x005a61e0                      ; 005a631e
        ;   XREF to: 005a61e0 (CONDITIONAL_JUMP)  ; LAB_005a61e0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a6324
    ADD ESP,0x74                        ; 005a6328
    POP EBP                             ; 005a632b
    POP ES                              ; 005a632c
    POP EDI                             ; 005a632d
    POP ESI                             ; 005a632e
    POP EBX                             ; 005a632f
    RET                                 ; 005a6330
    TEST CL,0x80                        ; 005a6331
        ;   Label: LAB_005a6331
    JZ 0x005a635e                       ; 005a6334
        ;   XREF to: 005a635e (CONDITIONAL_JUMP)  ; LAB_005a635e
    MOV EAX,dword ptr [EBX]             ; 005a6336
    ADD EAX,0x8                         ; 005a6338
    MOV dword ptr [EBX],EAX             ; 005a633b
    LES EDI,[EAX + -0x8]                ; 005a633d
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a6340
    MOV dword ptr ES:[EDI],EAX          ; 005a6344
    CMP byte ptr [EBP],0x0              ; 005a6347
    JNZ 0x005a61e0                      ; 005a634b
        ;   XREF to: 005a61e0 (CONDITIONAL_JUMP)  ; LAB_005a61e0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a6351
    ADD ESP,0x74                        ; 005a6355
    POP EBP                             ; 005a6358
    POP ES                              ; 005a6359
    POP EDI                             ; 005a635a
    POP ESI                             ; 005a635b
    POP EBX                             ; 005a635c
    RET                                 ; 005a635d
    TEST CL,0x40                        ; 005a635e
        ;   Label: LAB_005a635e
    JZ 0x005a638a                       ; 005a6361
        ;   XREF to: 005a638a (CONDITIONAL_JUMP)  ; LAB_005a638a
    MOV EDI,dword ptr [EBX]             ; 005a6363
    ADD EDI,0x4                         ; 005a6365
    MOV dword ptr [EBX],EDI             ; 005a6368
    MOV EDI,dword ptr [EDI + -0x4]      ; 005a636a
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a636d
    MOV dword ptr [EDI],EAX             ; 005a6371
    CMP byte ptr [EBP],0x0              ; 005a6373
    JNZ 0x005a61e0                      ; 005a6377
        ;   XREF to: 005a61e0 (CONDITIONAL_JUMP)  ; LAB_005a61e0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a637d
    ADD ESP,0x74                        ; 005a6381
    POP EBP                             ; 005a6384
    POP ES                              ; 005a6385
    POP EDI                             ; 005a6386
    POP ESI                             ; 005a6387
    POP EBX                             ; 005a6388
    RET                                 ; 005a6389
    MOV ECX,dword ptr [EBX]             ; 005a638a
        ;   Label: LAB_005a638a
    ADD ECX,0x4                         ; 005a638c
    MOV dword ptr [EBX],ECX             ; 005a638f
    MOV EDI,dword ptr [ECX + -0x4]      ; 005a6391
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a6394
    MOV dword ptr [EDI],EAX             ; 005a6398
    CMP byte ptr [EBP],0x0              ; 005a639a
    JNZ 0x005a61e0                      ; 005a639e
        ;   XREF to: 005a61e0 (CONDITIONAL_JUMP)  ; LAB_005a61e0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a63a4
    ADD ESP,0x74                        ; 005a63a8
    POP EBP                             ; 005a63ab
    POP ES                              ; 005a63ac
    POP EDI                             ; 005a63ad
    POP ESI                             ; 005a63ae
    POP EBX                             ; 005a63af
    RET                                 ; 005a63b0
    MOV EAX,dword ptr [EBX]             ; 005a63b1
        ;   Label: LAB_005a63b1
    MOV dword ptr [ESP + 0x64],EAX      ; 005a63b3
    LEA EAX,[ESP + 0x70]                ; 005a63b7
    PUSH EAX                            ; 005a63bb
    LEA EAX,[ESP + 0x4]                 ; 005a63bc
    PUSH EAX                            ; 005a63c0
    LEA EAX,[ESP + 0x6c]                ; 005a63c1
    PUSH EAX                            ; 005a63c5
    LEA EAX,[ESP + 0x44]                ; 005a63c6
    PUSH EAX                            ; 005a63ca
    CALL crt_unknown.c_FUN_005a6a78     ; 005a63cb
        ;   XREF to: 005a6a78 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a6a78()
    ADD ESP,0x10                        ; 005a63d0
    MOV EDI,EAX                         ; 005a63d3
    MOV EAX,dword ptr [ESP + 0x64]      ; 005a63d5
    MOV dword ptr [EBX],EAX             ; 005a63d9
    MOV dword ptr [ESP + 0x6c],EDX      ; 005a63db
    MOV EAX,dword ptr [ESP + 0x20]      ; 005a63df
    MOV ECX,dword ptr [ESP + 0x24]      ; 005a63e3
    MOV EDX,dword ptr [ESP + 0x28]      ; 005a63e7
    ADD EAX,ECX                         ; 005a63eb
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005a63ed
    ADD EAX,EDX                         ; 005a63f1
    MOV EDX,dword ptr [ESP + 0x30]      ; 005a63f3
    ADD EAX,ECX                         ; 005a63f7
    MOV ECX,dword ptr [ESP + 0x34]      ; 005a63f9
    ADD EAX,EDX                         ; 005a63fd
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a63ff
    ADD EAX,ECX                         ; 005a6403
    SUB EDX,EAX                         ; 005a6405
    MOV dword ptr [ESP + 0x4],EDX       ; 005a6407
    TEST byte ptr [ESP + 0x1e],0x8      ; 005a640b
    JNZ 0x005a6432                      ; 005a6410
        ;   XREF to: 005a6432 (CONDITIONAL_JUMP)  ; LAB_005a6432
    CMP byte ptr [ESP + 0x16],0x20      ; 005a6412
    JNZ 0x005a6432                      ; 005a6417
        ;   XREF to: 005a6432 (CONDITIONAL_JUMP)  ; LAB_005a6432
    CMP dword ptr [ESP + 0x4],0x0       ; 005a6419
        ;   Label: LAB_005a6419
    JLE 0x005a6432                      ; 005a641e
        ;   XREF to: 005a6432 (CONDITIONAL_JUMP)  ; LAB_005a6432
    PUSH 0x20                           ; 005a6420
    LEA EAX,[ESP + 0x4]                 ; 005a6422
    PUSH EAX                            ; 005a6426
    CALL ESI                            ; 005a6427
    ADD ESP,0x8                         ; 005a6429
    DEC dword ptr [ESP + 0x4]           ; 005a642c
    JMP 0x005a6419                      ; 005a6430
        ;   XREF to: 005a6419 (UNCONDITIONAL_JUMP)  ; LAB_005a6419
    LEA EAX,[ESP + 0x38]                ; 005a6432
        ;   Label: LAB_005a6432
    MOV ECX,dword ptr [ESP + 0x20]      ; 005a6436
    MOV dword ptr [ESP + 0x68],EAX      ; 005a643a
    TEST ECX,ECX                        ; 005a643e
    JLE 0x005a646b                      ; 005a6440
        ;   XREF to: 005a646b (CONDITIONAL_JUMP)  ; LAB_005a646b
    MOV EDX,dword ptr [ESP + 0x68]      ; 005a6442
        ;   Label: LAB_005a6442
    XOR EAX,EAX                         ; 005a6446
    MOV AL,byte ptr [EDX]               ; 005a6448
    PUSH EAX                            ; 005a644a
    LEA EAX,[ESP + 0x4]                 ; 005a644b
    PUSH EAX                            ; 005a644f
    CALL ESI                            ; 005a6450
    ADD ESP,0x8                         ; 005a6452
    MOV EAX,dword ptr [ESP + 0x68]      ; 005a6455
    MOV EDX,dword ptr [ESP + 0x20]      ; 005a6459
    INC EAX                             ; 005a645d
    DEC EDX                             ; 005a645e
    MOV dword ptr [ESP + 0x68],EAX      ; 005a645f
    MOV dword ptr [ESP + 0x20],EDX      ; 005a6463
    TEST EDX,EDX                        ; 005a6467
    JG 0x005a6442                       ; 005a6469
        ;   XREF to: 005a6442 (CONDITIONAL_JUMP)  ; LAB_005a6442
    CMP dword ptr [ESP + 0x24],0x0      ; 005a646b
        ;   Label: LAB_005a646b
    JLE 0x005a6484                      ; 005a6470
        ;   XREF to: 005a6484 (CONDITIONAL_JUMP)  ; LAB_005a6484
    PUSH 0x30                           ; 005a6472
    LEA EAX,[ESP + 0x4]                 ; 005a6474
    PUSH EAX                            ; 005a6478
    CALL ESI                            ; 005a6479
    ADD ESP,0x8                         ; 005a647b
    DEC dword ptr [ESP + 0x24]          ; 005a647e
    JMP 0x005a646b                      ; 005a6482
        ;   XREF to: 005a646b (UNCONDITIONAL_JUMP)  ; LAB_005a646b
    MOV AL,byte ptr [ESP + 0x15]        ; 005a6484
        ;   Label: LAB_005a6484
    CMP AL,0x73                         ; 005a6488
    JNZ 0x005a64d6                      ; 005a648a
        ;   XREF to: 005a64d6 (CONDITIONAL_JUMP)  ; LAB_005a64d6
    TEST byte ptr [ESP + 0x1e],0x20     ; 005a648c
    JZ 0x005a64af                       ; 005a6491
        ;   XREF to: 005a64af (CONDITIONAL_JUMP)  ; LAB_005a64af
    PUSH ESI                            ; 005a6493
    LEA EAX,[ESP + 0x4]                 ; 005a6494
    PUSH EAX                            ; 005a6498
    XOR EAX,EAX                         ; 005a6499
    MOV AX,word ptr [ESP + 0x74]        ; 005a649b
    PUSH EAX                            ; 005a64a0
    PUSH EDI                            ; 005a64a1
    CALL crt_unknown.c_FUN_005a6a00     ; 005a64a2
        ;   XREF to: 005a6a00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a6a00()
    ADD ESP,0x10                        ; 005a64a7
    JMP 0x005a651a                      ; 005a64aa
        ;   XREF to: 005a651a (UNCONDITIONAL_JUMP)  ; LAB_005a651a
    MOV ES,word ptr [ESP + 0x6c]        ; 005a64af
        ;   Label: LAB_005a64af
    CMP dword ptr [ESP + 0x28],0x0      ; 005a64b3
        ;   Label: LAB_005a64b3
    JLE 0x005a651a                      ; 005a64b8
        ;   XREF to: 005a651a (CONDITIONAL_JUMP)  ; LAB_005a651a
    XOR EAX,EAX                         ; 005a64ba
    MOV AL,byte ptr ES:[EDI]            ; 005a64bc
    PUSH EAX                            ; 005a64bf
    LEA EAX,[ESP + 0x4]                 ; 005a64c0
    PUSH EAX                            ; 005a64c4
    CALL ESI                            ; 005a64c5
    ADD ESP,0x8                         ; 005a64c7
    MOV ECX,dword ptr [ESP + 0x28]      ; 005a64ca
    DEC ECX                             ; 005a64ce
    INC EDI                             ; 005a64cf
    MOV dword ptr [ESP + 0x28],ECX      ; 005a64d0
    JMP 0x005a64b3                      ; 005a64d4
        ;   XREF to: 005a64b3 (UNCONDITIONAL_JUMP)  ; LAB_005a64b3
    CMP AL,0x53                         ; 005a64d6
        ;   Label: LAB_005a64d6
    JNZ 0x005a64f3                      ; 005a64d8
        ;   XREF to: 005a64f3 (CONDITIONAL_JUMP)  ; LAB_005a64f3
    PUSH ESI                            ; 005a64da
    LEA EAX,[ESP + 0x4]                 ; 005a64db
    PUSH EAX                            ; 005a64df
    XOR EAX,EAX                         ; 005a64e0
    MOV AX,word ptr [ESP + 0x74]        ; 005a64e2
    PUSH EAX                            ; 005a64e7
    PUSH EDI                            ; 005a64e8
    CALL crt_unknown.c_FUN_005a6a00     ; 005a64e9
        ;   XREF to: 005a6a00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a6a00()
    ADD ESP,0x10                        ; 005a64ee
    JMP 0x005a651a                      ; 005a64f1
        ;   XREF to: 005a651a (UNCONDITIONAL_JUMP)  ; LAB_005a651a
    MOV ES,word ptr [ESP + 0x6c]        ; 005a64f3
        ;   Label: LAB_005a64f3
    CMP dword ptr [ESP + 0x28],0x0      ; 005a64f7
        ;   Label: LAB_005a64f7
    JLE 0x005a651a                      ; 005a64fc
        ;   XREF to: 005a651a (CONDITIONAL_JUMP)  ; LAB_005a651a
    XOR EAX,EAX                         ; 005a64fe
    MOV AL,byte ptr ES:[EDI]            ; 005a6500
    PUSH EAX                            ; 005a6503
    LEA EAX,[ESP + 0x4]                 ; 005a6504
    PUSH EAX                            ; 005a6508
    CALL ESI                            ; 005a6509
    ADD ESP,0x8                         ; 005a650b
    MOV EAX,dword ptr [ESP + 0x28]      ; 005a650e
    DEC EAX                             ; 005a6512
    INC EDI                             ; 005a6513
    MOV dword ptr [ESP + 0x28],EAX      ; 005a6514
    JMP 0x005a64f7                      ; 005a6518
        ;   XREF to: 005a64f7 (UNCONDITIONAL_JUMP)  ; LAB_005a64f7
    CMP dword ptr [ESP + 0x2c],0x0      ; 005a651a
        ;   Label: LAB_005a651a
    JLE 0x005a6533                      ; 005a651f
        ;   XREF to: 005a6533 (CONDITIONAL_JUMP)  ; LAB_005a6533
    PUSH 0x30                           ; 005a6521
    LEA EAX,[ESP + 0x4]                 ; 005a6523
    PUSH EAX                            ; 005a6527
    CALL ESI                            ; 005a6528
    ADD ESP,0x8                         ; 005a652a
    DEC dword ptr [ESP + 0x2c]          ; 005a652d
    JMP 0x005a651a                      ; 005a6531
        ;   XREF to: 005a651a (UNCONDITIONAL_JUMP)  ; LAB_005a651a
    MOV ES,word ptr [ESP + 0x6c]        ; 005a6533
        ;   Label: LAB_005a6533
    CMP dword ptr [ESP + 0x30],0x0      ; 005a6537
        ;   Label: LAB_005a6537
    JLE 0x005a655a                      ; 005a653c
        ;   XREF to: 005a655a (CONDITIONAL_JUMP)  ; LAB_005a655a
    XOR EAX,EAX                         ; 005a653e
    MOV AL,byte ptr ES:[EDI]            ; 005a6540
    PUSH EAX                            ; 005a6543
    LEA EAX,[ESP + 0x4]                 ; 005a6544
    PUSH EAX                            ; 005a6548
    CALL ESI                            ; 005a6549
    ADD ESP,0x8                         ; 005a654b
    MOV EAX,dword ptr [ESP + 0x30]      ; 005a654e
    DEC EAX                             ; 005a6552
    INC EDI                             ; 005a6553
    MOV dword ptr [ESP + 0x30],EAX      ; 005a6554
    JMP 0x005a6537                      ; 005a6558
        ;   XREF to: 005a6537 (UNCONDITIONAL_JUMP)  ; LAB_005a6537
    CMP dword ptr [ESP + 0x34],0x0      ; 005a655a
        ;   Label: LAB_005a655a
    JLE 0x005a6573                      ; 005a655f
        ;   XREF to: 005a6573 (CONDITIONAL_JUMP)  ; LAB_005a6573
    PUSH 0x30                           ; 005a6561
    LEA EAX,[ESP + 0x4]                 ; 005a6563
    PUSH EAX                            ; 005a6567
    CALL ESI                            ; 005a6568
    ADD ESP,0x8                         ; 005a656a
    DEC dword ptr [ESP + 0x34]          ; 005a656d
    JMP 0x005a655a                      ; 005a6571
        ;   XREF to: 005a655a (UNCONDITIONAL_JUMP)  ; LAB_005a655a
    TEST byte ptr [ESP + 0x1e],0x8      ; 005a6573
        ;   Label: LAB_005a6573
    JZ 0x005a6581                       ; 005a6578
        ;   XREF to: 005a6581 (CONDITIONAL_JUMP)  ; LAB_005a6581
    CMP dword ptr [ESP + 0x4],0x0       ; 005a657a
        ;   Label: LAB_005a657a
    JG 0x005a6598                       ; 005a657f
        ;   XREF to: 005a6598 (CONDITIONAL_JUMP)  ; LAB_005a6598
    CMP byte ptr [EBP],0x0              ; 005a6581
        ;   Label: LAB_005a6581
    JNZ 0x005a61e0                      ; 005a6585
        ;   XREF to: 005a61e0 (CONDITIONAL_JUMP)  ; LAB_005a61e0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a658b
    ADD ESP,0x74                        ; 005a658f
    POP EBP                             ; 005a6592
    POP ES                              ; 005a6593
    POP EDI                             ; 005a6594
    POP ESI                             ; 005a6595
    POP EBX                             ; 005a6596
    RET                                 ; 005a6597
    PUSH 0x20                           ; 005a6598
        ;   Label: LAB_005a6598
    LEA EAX,[ESP + 0x4]                 ; 005a659a
    PUSH EAX                            ; 005a659e
    CALL ESI                            ; 005a659f
    ADD ESP,0x8                         ; 005a65a1
    DEC dword ptr [ESP + 0x4]           ; 005a65a4
    JMP 0x005a657a                      ; 005a65a8
        ;   XREF to: 005a657a (UNCONDITIONAL_JUMP)  ; LAB_005a657a
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a65aa
        ;   Label: LAB_005a65aa
    ADD ESP,0x74                        ; 005a65ae
    POP EBP                             ; 005a65b1
    POP ES                              ; 005a65b2
        ;   Label: LAB_005a65b2
    POP EDI                             ; 005a65b3
    POP ESI                             ; 005a65b4
    POP EBX                             ; 005a65b5
    RET                                 ; 005a65b6

