; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bmppuzzl_cpp_CChemPuzzle_process_FUN_00418220(CChemPuzzle *this_ptr)
;
; Parameters:
; CChemPuzzle *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_ChemPuzzleActive_005d4234
;   TerminatedCString s_SolvedChemistryPuzzle_005d4245
;   TerminatedCString s_FailedChemistryPuzzle_005d425b
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061f2a4
;   undefined4 DAT_01c4353c
;   undefined4 DAT_01c43540
;   undefined4 DAT_01c43544
;   undefined4 DAT_01d1bca0
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_004a1b70
;   engine_alphabit.cpp_FUN_00415be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418220
        ;   Label: core_bmppuzzl.cpp_CChemPuzzle_process_FUN_00418220
    PUSH ESI                            ; 00418221
    PUSH EDI                            ; 00418222
    PUSH EBP                            ; 00418223
    MOV EBX,dword ptr [ESP + 0x14]      ; 00418224
    PUSH 0x5d4234                       ; 00418228 | = "ChemPuzzleActive"
    MOV EDX,dword ptr [0x0061b4d0]      ; 0041822d | DAT_0061b4d0
    PUSH EDX                            ; 00418233
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 00418234
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    MOV ECX,dword ptr [EBX + 0x930]     ; 00418239
    ADD ESP,0x8                         ; 0041823f
    CMP ECX,0x1                         ; 00418242
    JZ 0x0041856f                       ; 00418245
        ;   XREF to: 0041856f (CONDITIONAL_JUMP)  ; LAB_0041856f
    MOV ESI,dword ptr [EBX + 0x28]      ; 0041824b
    TEST ESI,ESI                        ; 0041824e
    JZ 0x004186bf                       ; 00418250
        ;   XREF to: 004186bf (CONDITIONAL_JUMP)  ; LAB_004186bf
    CMP dword ptr [EBX + 0x30],0x0      ; 00418256
    JZ 0x004185b6                       ; 0041825a
        ;   XREF to: 004185b6 (CONDITIONAL_JUMP)  ; LAB_004185b6
    MOV EDX,dword ptr [EBX + 0x24]      ; 00418260
        ;   Label: LAB_00418260
    LEA EAX,[EDX*0x4 + 0x0]             ; 00418263
    SUB EAX,EDX                         ; 0041826a
    SHL EAX,0x2                         ; 0041826c
    SUB EAX,EDX                         ; 0041826f
    CMP dword ptr [EBX + EAX*0x4 + 0x84],0x1 ; 00418271
    JNZ 0x00418443                      ; 00418279
        ;   XREF to: 00418443 (CONDITIONAL_JUMP)  ; LAB_00418443
    MOV EDI,dword ptr [EBX + 0x1c]      ; 0041827f
    XOR ESI,ESI                         ; 00418282
    CMP EDI,0x2                         ; 00418284
    JG 0x0041829b                       ; 00418287
        ;   XREF to: 0041829b (CONDITIONAL_JUMP)  ; LAB_0041829b
    MOV EAX,0x25                        ; 00418289
    CMP dword ptr [EBX + 0x930],0x2     ; 0041828e
        ;   Label: LAB_0041828e
    JNZ 0x0041867e                      ; 00418295
        ;   XREF to: 0041867e (CONDITIONAL_JUMP)  ; LAB_0041867e
    CMP dword ptr [EBX + 0x1c],0x1      ; 0041829b
        ;   Label: LAB_0041829b
    JL 0x0041856a                       ; 0041829f
        ;   XREF to: 0041856a (CONDITIONAL_JUMP)  ; LAB_0041856a
    CMP dword ptr [EBX + 0x24],0x25     ; 004182a5
    JGE 0x00418443                      ; 004182a9
        ;   XREF to: 00418443 (CONDITIONAL_JUMP)  ; LAB_00418443
    MOV EAX,EBX                         ; 004182af
    LEA EDX,[EBX + 0x10]                ; 004182b1
    ADD EAX,0x4                         ; 004182b4
        ;   Label: LAB_004182b4
    MOV dword ptr [EAX + 0x930],0x2     ; 004182b7
    CMP EAX,EDX                         ; 004182c1
    JNZ 0x004182b4                      ; 004182c3
        ;   XREF to: 004182b4 (CONDITIONAL_JUMP)  ; LAB_004182b4
    MOV ECX,dword ptr [EBX + 0x1c]      ; 004182c5
    XOR ESI,ESI                         ; 004182c8
    TEST ECX,ECX                        ; 004182ca
    JLE 0x004183e5                      ; 004182cc
        ;   XREF to: 004183e5 (CONDITIONAL_JUMP)  ; LAB_004183e5
    MOV EAX,EBX                         ; 004182d2
    CMP dword ptr [EAX + 0x38],0x0      ; 004182d4
        ;   Label: LAB_004182d4
    JNZ 0x00418304                      ; 004182d8
        ;   XREF to: 00418304 (CONDITIONAL_JUMP)  ; LAB_00418304
    MOV dword ptr [EBX + 0x938],0x1     ; 004182da
    MOV ECX,dword ptr [EBX + 0x58]      ; 004182e4
    MOV dword ptr [EBX + 0x934],0x1     ; 004182e7
    CMP ECX,0x1                         ; 004182f1
    JZ 0x00418304                       ; 004182f4
        ;   XREF to: 00418304 (CONDITIONAL_JUMP)  ; LAB_00418304
    MOV EDI,dword ptr [EBX + 0x54]      ; 004182f6
    MOV dword ptr [EBX + 0x58],0x1      ; 004182f9
    INC EDI                             ; 00418300
    MOV dword ptr [EBX + 0x54],EDI      ; 00418301
    MOV EBP,dword ptr [EAX + 0x38]      ; 00418304
        ;   Label: LAB_00418304
    CMP EBP,0x1                         ; 00418307
    JNZ 0x0041832a                      ; 0041830a
        ;   XREF to: 0041832a (CONDITIONAL_JUMP)  ; LAB_0041832a
    MOV dword ptr [EBX + 0x93c],EBP     ; 0041830c
    MOV EDX,dword ptr [EBX + 0x5c]      ; 00418312
    MOV dword ptr [EBX + 0x938],EBP     ; 00418315
    CMP EDX,EBP                         ; 0041831b
    JZ 0x0041832a                       ; 0041831d
        ;   XREF to: 0041832a (CONDITIONAL_JUMP)  ; LAB_0041832a
    MOV ECX,dword ptr [EBX + 0x54]      ; 0041831f
    MOV dword ptr [EBX + 0x5c],EBP      ; 00418322
    SUB ECX,EBP                         ; 00418325
    MOV dword ptr [EBX + 0x54],ECX      ; 00418327
    CMP dword ptr [EAX + 0x38],0x2      ; 0041832a
        ;   Label: LAB_0041832a
    JNZ 0x0041835a                      ; 0041832e
        ;   XREF to: 0041835a (CONDITIONAL_JUMP)  ; LAB_0041835a
    MOV dword ptr [EBX + 0x940],0x1     ; 00418330
    MOV EBP,dword ptr [EBX + 0x60]      ; 0041833a
    MOV dword ptr [EBX + 0x93c],0x1     ; 0041833d
    CMP EBP,0x1                         ; 00418347
    JZ 0x0041835a                       ; 0041834a
        ;   XREF to: 0041835a (CONDITIONAL_JUMP)  ; LAB_0041835a
    MOV EDX,dword ptr [EBX + 0x54]      ; 0041834c
    MOV dword ptr [EBX + 0x60],0x1      ; 0041834f
    DEC EDX                             ; 00418356
    MOV dword ptr [EBX + 0x54],EDX      ; 00418357
    CMP dword ptr [EAX + 0x38],0x3      ; 0041835a
        ;   Label: LAB_0041835a
    JNZ 0x0041838a                      ; 0041835e
        ;   XREF to: 0041838a (CONDITIONAL_JUMP)  ; LAB_0041838a
    MOV dword ptr [EBX + 0x934],0x1     ; 00418360
    MOV EDI,dword ptr [EBX + 0x64]      ; 0041836a
    MOV dword ptr [EBX + 0x93c],0x1     ; 0041836d
    CMP EDI,0x1                         ; 00418377
    JZ 0x0041838a                       ; 0041837a
        ;   XREF to: 0041838a (CONDITIONAL_JUMP)  ; LAB_0041838a
    MOV EBP,dword ptr [EBX + 0x54]      ; 0041837c
    MOV dword ptr [EBX + 0x64],0x1      ; 0041837f
    INC EBP                             ; 00418386
    MOV dword ptr [EBX + 0x54],EBP      ; 00418387
    CMP dword ptr [EAX + 0x38],0x4      ; 0041838a
        ;   Label: LAB_0041838a
    JNZ 0x004183b0                      ; 0041838e
        ;   XREF to: 004183b0 (CONDITIONAL_JUMP)  ; LAB_004183b0
    MOV ECX,dword ptr [EBX + 0x68]      ; 00418390
    MOV dword ptr [EBX + 0x940],0x1     ; 00418393
    CMP ECX,0x1                         ; 0041839d
    JZ 0x004183b0                       ; 004183a0
        ;   XREF to: 004183b0 (CONDITIONAL_JUMP)  ; LAB_004183b0
    MOV EDI,dword ptr [EBX + 0x54]      ; 004183a2
    MOV dword ptr [EBX + 0x68],0x1      ; 004183a5
    DEC EDI                             ; 004183ac
    MOV dword ptr [EBX + 0x54],EDI      ; 004183ad
    CMP dword ptr [EAX + 0x38],0x5      ; 004183b0
        ;   Label: LAB_004183b0
    JNZ 0x004183d6                      ; 004183b4
        ;   XREF to: 004183d6 (CONDITIONAL_JUMP)  ; LAB_004183d6
    MOV EDX,dword ptr [EBX + 0x6c]      ; 004183b6
    MOV dword ptr [EBX + 0x938],0x1     ; 004183b9
    CMP EDX,0x1                         ; 004183c3
    JZ 0x004183d6                       ; 004183c6
        ;   XREF to: 004183d6 (CONDITIONAL_JUMP)  ; LAB_004183d6
    MOV ECX,dword ptr [EBX + 0x54]      ; 004183c8
    MOV dword ptr [EBX + 0x6c],0x1      ; 004183cb
    INC ECX                             ; 004183d2
    MOV dword ptr [EBX + 0x54],ECX      ; 004183d3
    INC ESI                             ; 004183d6
        ;   Label: LAB_004183d6
    MOV EDI,dword ptr [EBX + 0x1c]      ; 004183d7
    ADD EAX,0x4                         ; 004183da
    CMP ESI,EDI                         ; 004183dd
    JL 0x004182d4                       ; 004183df
        ;   XREF to: 004182d4 (CONDITIONAL_JUMP)  ; LAB_004182d4
    MOV EBP,dword ptr [EBX + 0x1c]      ; 004183e5
        ;   Label: LAB_004183e5
    XOR ESI,ESI                         ; 004183e8
    TEST EBP,EBP                        ; 004183ea
    JLE 0x0041841b                      ; 004183ec
        ;   XREF to: 0041841b (CONDITIONAL_JUMP)  ; LAB_0041841b
    MOV EAX,EBX                         ; 004183ee
    CMP dword ptr [EAX + 0x38],0x4      ; 004183f0
        ;   Label: LAB_004183f0
    JNZ 0x00418400                      ; 004183f4
        ;   XREF to: 00418400 (CONDITIONAL_JUMP)  ; LAB_00418400
    MOV dword ptr [EBX + 0x934],0x2     ; 004183f6
    CMP dword ptr [EAX + 0x38],0x5      ; 00418400
        ;   Label: LAB_00418400
    JNZ 0x00418410                      ; 00418404
        ;   XREF to: 00418410 (CONDITIONAL_JUMP)  ; LAB_00418410
    MOV dword ptr [EBX + 0x93c],0x2     ; 00418406
    INC ESI                             ; 00418410
        ;   Label: LAB_00418410
    MOV EDI,dword ptr [EBX + 0x1c]      ; 00418411
    ADD EAX,0x4                         ; 00418414
    CMP ESI,EDI                         ; 00418417
    JL 0x004183f0                       ; 00418419
        ;   XREF to: 004183f0 (CONDITIONAL_JUMP)  ; LAB_004183f0
    MOV EBP,dword ptr [EBX + 0x1c]      ; 0041841b
        ;   Label: LAB_0041841b
    MOV dword ptr [EBX + 0x930],0x2     ; 0041841e
    CMP EBP,0x3                         ; 00418428
    JNZ 0x0041843c                      ; 0041842b
        ;   XREF to: 0041843c (CONDITIONAL_JUMP)  ; LAB_0041843c
    CMP EBP,dword ptr [EBX + 0x54]      ; 0041842d
    JNZ 0x0041843c                      ; 00418430
        ;   XREF to: 0041843c (CONDITIONAL_JUMP)  ; LAB_0041843c
    MOV dword ptr [EBX + 0x930],0x1     ; 00418432
    MOV dword ptr [EBX + 0x1c],0x0      ; 0041843c
        ;   Label: LAB_0041843c
    MOV EDI,EBX                         ; 00418443
        ;   Label: LAB_00418443
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00418445
    MOV dword ptr [EBX + 0x34],0x0      ; 00418448
    XOR ESI,ESI                         ; 0041844f
    MOV dword ptr [EBX + 0x18],EAX      ; 00418451
    MOV EAX,dword ptr [EBX + 0x20]      ; 00418454
        ;   Label: LAB_00418454
    INC EAX                             ; 00418457
    CMP ESI,EAX                         ; 00418458
    JL 0x004186d4                       ; 0041845a
        ;   XREF to: 004186d4 (CONDITIONAL_JUMP)  ; LAB_004186d4
    MOV EAX,EBX                         ; 00418460
    LEA ESI,[EBX + 0x65c]               ; 00418462
    ADD EAX,0x2c                        ; 00418468
        ;   Label: LAB_00418468
    MOV dword ptr [EAX + 0x6c],0x0      ; 0041846b
    CMP EAX,ESI                         ; 00418472
    JNZ 0x00418468                      ; 00418474
        ;   XREF to: 00418468 (CONDITIONAL_JUMP)  ; LAB_00418468
    LEA EAX,[EBX + 0x65c]               ; 00418476
    LEA EDX,[EBX + 0x764]               ; 0041847c
    ADD EAX,0x2c                        ; 00418482
        ;   Label: LAB_00418482
    MOV dword ptr [EAX + 0x6c],0x1      ; 00418485
    CMP EAX,EDX                         ; 0041848c
    JNZ 0x00418482                      ; 0041848e
        ;   XREF to: 00418482 (CONDITIONAL_JUMP)  ; LAB_00418482
    MOV EDX,dword ptr [EBX + 0x44]      ; 00418490
    LEA EAX,[EDX*0x4 + 0x0]             ; 00418493
    SUB EAX,EDX                         ; 0041849a
    LEA ESI,[EAX + 0x1]                 ; 0041849c
    MOV EDX,dword ptr [EBX + 0x48]      ; 0041849f
    LEA EAX,[EDX*0x4 + 0x0]             ; 004184a2
    SUB EAX,EDX                         ; 004184a9
    LEA ECX,[EAX + 0xa]                 ; 004184ab
    MOV EDX,dword ptr [EBX + 0x4c]      ; 004184ae
    LEA EAX,[EDX*0x4 + 0x0]             ; 004184b1
    SUB EAX,EDX                         ; 004184b8
    MOV EDI,dword ptr [EBX + 0x50]      ; 004184ba
    LEA EDX,[EAX + 0x13]                ; 004184bd
    LEA EAX,[EDI*0x4 + 0x0]             ; 004184c0
    SUB EAX,EDI                         ; 004184c7
    LEA EDI,[EAX + 0x1c]                ; 004184c9
    ADD ESI,dword ptr [EBX + 0x934]     ; 004184cc
    ADD EDX,dword ptr [EBX + 0x93c]     ; 004184d2
    LEA EAX,[ESI*0x4 + 0x0]             ; 004184d8
    SUB EAX,ESI                         ; 004184df
    SHL EAX,0x2                         ; 004184e1
    MOV EBP,dword ptr [EBX + 0x938]     ; 004184e4
    SUB EAX,ESI                         ; 004184ea
    ADD ECX,EBP                         ; 004184ec
    MOV EBP,dword ptr [EBX + 0x940]     ; 004184ee
    MOV dword ptr [EBX + EAX*0x4 + 0x98],0x1 ; 004184f4
    LEA EAX,[ECX*0x4 + 0x0]             ; 004184ff
    SUB EAX,ECX                         ; 00418506
    SHL EAX,0x2                         ; 00418508
    SUB EAX,ECX                         ; 0041850b
    MOV dword ptr [EBX + EAX*0x4 + 0x98],0x1 ; 0041850d
    LEA EAX,[EDX*0x4 + 0x0]             ; 00418518
    SUB EAX,EDX                         ; 0041851f
    SHL EAX,0x2                         ; 00418521
    SUB EAX,EDX                         ; 00418524
    ADD EDI,EBP                         ; 00418526
    MOV dword ptr [EBX + EAX*0x4 + 0x98],0x1 ; 00418528
    LEA EAX,[EDI*0x4 + 0x0]             ; 00418533
    SUB EAX,EDI                         ; 0041853a
    SHL EAX,0x2                         ; 0041853c
    SUB EAX,EDI                         ; 0041853f
    MOV dword ptr [EBX + EAX*0x4 + 0x98],0x1 ; 00418541
    CMP dword ptr [EBX + 0x1c],0x0      ; 0041854c
    JLE 0x004186f9                      ; 00418550
        ;   XREF to: 004186f9 (CONDITIONAL_JUMP)  ; LAB_004186f9
    MOV dword ptr [EBX + 0x828],0x1     ; 00418556
        ;   Label: LAB_00418556
    MOV dword ptr [EBX + 0x7fc],0x1     ; 00418560
    POP EBP                             ; 0041856a
        ;   Label: LAB_0041856a
    POP EDI                             ; 0041856b
    POP ESI                             ; 0041856c
    POP EBX                             ; 0041856d
    RET                                 ; 0041856e
    PUSH 0x5d4245                       ; 0041856f | = "SolvedChemistryPuzzle"
        ;   Label: LAB_0041856f
    MOV EBP,dword ptr [0x0061b4d0]      ; 00418574 | DAT_0061b4d0
    PUSH EBP                            ; 0041857a
    MOV dword ptr [EBX + 0x930],0xffffffff ; 0041857b
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 00418585
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0041858a
    MOV EAX,[0x0061f2a4]                ; 0041858d | DAT_0061f2a4
    PUSH 0x200                          ; 00418592
    MOV EDX,dword ptr [EAX]             ; 00418597 | DAT_01d1bca0
    PUSH EAX                            ; 00418599 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0041859a
    ADD ESP,0x8                         ; 0041859d
    XOR EAX,EAX                         ; 004185a0
    PUSH EAX                            ; 004185a2
    PUSH EBX                            ; 004185a3
    MOV [0x01c43544],EAX                ; 004185a4 | DAT_01c43544
    CALL engine_alphabit.cpp_FUN_00415be0 ; 004185a9
        ;   XREF to: 00415be0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_00415be0()
    ADD ESP,0x8                         ; 004185ae
    POP EBP                             ; 004185b1
    POP EDI                             ; 004185b2
    POP ESI                             ; 004185b3
    POP EBX                             ; 004185b4
    RET                                 ; 004185b5
    MOV EDX,dword ptr [0x01c43540]      ; 004185b6 | DAT_01c43540
        ;   Label: LAB_004185b6
    PUSH EDX                            ; 004185bc
    MOV ECX,dword ptr [0x01c4353c]      ; 004185bd | DAT_01c4353c
    PUSH ECX                            ; 004185c3
    MOV EAX,dword ptr [EBX]             ; 004185c4
    PUSH EBX                            ; 004185c6
    MOV dword ptr [EBX + 0x30],0x1      ; 004185c7
    CALL dword ptr [EAX + 0x2c]         ; 004185ce
    ADD ESP,0xc                         ; 004185d1
    TEST EAX,EAX                        ; 004185d4
    JZ 0x0041856a                       ; 004185d6
        ;   XREF to: 0041856a (CONDITIONAL_JUMP)  ; LAB_0041856a
    MOV ESI,dword ptr [EBX + 0x24]      ; 004185d8
    CMP ESI,0x2b                        ; 004185db
    JNZ 0x00418630                      ; 004185de
        ;   XREF to: 00418630 (CONDITIONAL_JUMP)  ; LAB_00418630
    CMP dword ptr [EBX + 0x930],0x2     ; 004185e0
    JNZ 0x004185fc                      ; 004185e7
        ;   XREF to: 004185fc (CONDITIONAL_JUMP)  ; LAB_004185fc
    PUSH 0x5d425b                       ; 004185e9 | = "FailedChemistryPuzzle"
    MOV EAX,[0x0061b4d0]                ; 004185ee | DAT_0061b4d0
    PUSH EAX                            ; 004185f3
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 004185f4
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004185f9
    PUSH 0x200                          ; 004185fc
        ;   Label: LAB_004185fc
    MOV EAX,[0x0061f2a4]                ; 00418601 | DAT_0061f2a4
    PUSH EAX                            ; 00418606 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 00418607 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 00418609
    ADD ESP,0x8                         ; 0041860c
    XOR EDX,EDX                         ; 0041860f
    PUSH EDX                            ; 00418611
    PUSH EBX                            ; 00418612
    MOV dword ptr [0x01c43544],EDX      ; 00418613 | DAT_01c43544
    CALL engine_alphabit.cpp_FUN_00415be0 ; 00418619
        ;   XREF to: 00415be0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_00415be0()
    ADD ESP,0x8                         ; 0041861e
    MOV dword ptr [EBX + 0x930],0xffffffff ; 00418621
    POP EBP                             ; 0041862b
    POP EDI                             ; 0041862c
    POP ESI                             ; 0041862d
    POP EBX                             ; 0041862e
    RET                                 ; 0041862f
    CMP ESI,0x2c                        ; 00418630
        ;   Label: LAB_00418630
    JNZ 0x00418260                      ; 00418633
        ;   XREF to: 00418260 (CONDITIONAL_JUMP)  ; LAB_00418260
    PUSH EBX                            ; 00418639
    MOV EAX,dword ptr [EBX]             ; 0041863a
    CALL dword ptr [EAX + 0x8]          ; 0041863c
    ADD ESP,0x4                         ; 0041863f
    MOV EAX,[0x0061f2a4]                ; 00418642 | DAT_0061f2a4
    PUSH 0x200                          ; 00418647
    MOV EDX,dword ptr [EAX]             ; 0041864c | DAT_01d1bca0
    PUSH EAX                            ; 0041864e | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0041864f
    ADD ESP,0x8                         ; 00418652
    MOV dword ptr [EBX + 0x930],0xffffffff ; 00418655
    POP EBP                             ; 0041865f
    POP EDI                             ; 00418660
    POP ESI                             ; 00418661
    POP EBX                             ; 00418662
    RET                                 ; 00418663
    INC EAX                             ; 00418664
        ;   Label: LAB_00418664
    INC ESI                             ; 00418665
    CMP EAX,0x2b                        ; 00418666
    JGE 0x0041829b                      ; 00418669
        ;   XREF to: 0041829b (CONDITIONAL_JUMP)  ; LAB_0041829b
    CMP dword ptr [EBX + 0x1c],0x2      ; 0041866f
    JG 0x0041829b                       ; 00418673
        ;   XREF to: 0041829b (CONDITIONAL_JUMP)  ; LAB_0041829b
    JMP 0x0041828e                      ; 00418679
        ;   XREF to: 0041828e (UNCONDITIONAL_JUMP)  ; LAB_0041828e
    CMP EAX,dword ptr [EBX + 0x24]      ; 0041867e
        ;   Label: LAB_0041867e
    JNZ 0x00418664                      ; 00418681
        ;   XREF to: 00418664 (CONDITIONAL_JUMP)  ; LAB_00418664
    MOV EDI,0x1                         ; 00418683
    MOV EBP,dword ptr [EBX + 0x1c]      ; 00418688
    XOR EAX,EAX                         ; 0041868b
    TEST EBP,EBP                        ; 0041868d
    JLE 0x004186a5                      ; 0041868f
        ;   XREF to: 004186a5 (CONDITIONAL_JUMP)  ; LAB_004186a5
    MOV EDX,EBX                         ; 00418691
    CMP ESI,dword ptr [EDX + 0x38]      ; 00418693
        ;   Label: LAB_00418693
    JNZ 0x0041869a                      ; 00418696
        ;   XREF to: 0041869a (CONDITIONAL_JUMP)  ; LAB_0041869a
    XOR EDI,EDI                         ; 00418698
    INC EAX                             ; 0041869a
        ;   Label: LAB_0041869a
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0041869b
    ADD EDX,0x4                         ; 0041869e
    CMP EAX,ECX                         ; 004186a1
    JL 0x00418693                       ; 004186a3
        ;   XREF to: 00418693 (CONDITIONAL_JUMP)  ; LAB_00418693
    TEST EDI,EDI                        ; 004186a5
        ;   Label: LAB_004186a5
    JLE 0x0041829b                      ; 004186a7
        ;   XREF to: 0041829b (CONDITIONAL_JUMP)  ; LAB_0041829b
    MOV EDI,dword ptr [EBX + 0x1c]      ; 004186ad
    INC EDI                             ; 004186b0
    MOV EAX,EDI                         ; 004186b1
    MOV dword ptr [EBX + 0x1c],EDI      ; 004186b3
    MOV dword ptr [EBX + EAX*0x4 + 0x34],ESI ; 004186b6
    JMP 0x0041829b                      ; 004186ba
        ;   XREF to: 0041829b (UNCONDITIONAL_JUMP)  ; LAB_0041829b
    CMP ESI,dword ptr [EBX + 0x2c]      ; 004186bf
        ;   Label: LAB_004186bf
    JZ 0x00418443                       ; 004186c2
        ;   XREF to: 00418443 (CONDITIONAL_JUMP)  ; LAB_00418443
    MOV dword ptr [EBX + 0x24],0xffffffff ; 004186c8
    JMP 0x00418443                      ; 004186cf
        ;   XREF to: 00418443 (UNCONDITIONAL_JUMP)  ; LAB_00418443
    MOV EBP,dword ptr [EDI + 0x98]      ; 004186d4
        ;   Label: LAB_004186d4
    CMP EBP,0x1                         ; 004186da
    JNZ 0x004186f0                      ; 004186dd
        ;   XREF to: 004186f0 (CONDITIONAL_JUMP)  ; LAB_004186f0
    PUSH ESI                            ; 004186df
    MOV EAX,dword ptr [EBX]             ; 004186e0
    PUSH EBX                            ; 004186e2
    CALL dword ptr [EAX + 0x30]         ; 004186e3
    ADD ESP,0x8                         ; 004186e6
    TEST EAX,EAX                        ; 004186e9
    JZ 0x004186f0                       ; 004186eb
        ;   XREF to: 004186f0 (CONDITIONAL_JUMP)  ; LAB_004186f0
    MOV dword ptr [EBX + 0x34],EBP      ; 004186ed
    INC ESI                             ; 004186f0
        ;   Label: LAB_004186f0
    ADD EDI,0x2c                        ; 004186f1
    JMP 0x00418454                      ; 004186f4
        ;   XREF to: 00418454 (UNCONDITIONAL_JUMP)  ; LAB_00418454
    CMP dword ptr [EBX + 0x930],0x2     ; 004186f9
        ;   Label: LAB_004186f9
    JZ 0x00418556                       ; 00418700
        ;   XREF to: 00418556 (CONDITIONAL_JUMP)  ; LAB_00418556
    MOV dword ptr [EBX + 0x828],0x0     ; 00418706
    MOV dword ptr [EBX + 0x7fc],0x1     ; 00418710
    POP EBP                             ; 0041871a
    POP EDI                             ; 0041871b
    POP ESI                             ; 0041871c
    POP EBX                             ; 0041871d
    RET                                 ; 0041871e

