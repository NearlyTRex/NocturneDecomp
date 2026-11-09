; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_clipper_c_clipPolygonToViewFrustum_FUN_00431330(int vertex_count,int *vertex_indices)
;
; Parameters:
; int              Stack[0x4]:4   vertex_count
; int *            Stack[0x8]:4   vertex_indices
; Local Variables:
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
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
;   engine_clipper.c_clipAndRasterize_FUN_00431d90 at 00431da4
;
; Referenced Globals:
;   void* switchdataD_004312dc = 004315b2
;   void* PTR_caseD_1_004312e0 = 0043187c
;   void* PTR_caseD_3_004312e8 = 004315c5
;   void* switchdataD_004312ec = 0043164f
;   void* PTR_caseD_1_004312f0 = 00431955
;   void* PTR_caseD_3_004312f8 = 00431654
;   void* switchdataD_004312fc = 004316e8
;   void* PTR_caseD_1_00431300 = 00431a04
;   void* PTR_caseD_3_00431308 = 004316ed
;   void* switchdataD_0043130c = 0043178b
;   void* PTR_caseD_1_00431310 = 00431ab3
;   void* PTR_caseD_3_00431318 = 00431790
;   void* switchdataD_0043131c = 00431c52
;   void* PTR_caseD_3_00431328 = 00431c97
;   TerminatedCString s_engine_clipper_c_005cd962
;   ... and 38 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_clipper.c_interpolateVertexBottomClip_FUN_00430950
;   engine_clipper.c_interpolateVertexFarClip_FUN_00430a50
;   engine_clipper.c_interpolateVertexLeftClip_FUN_00430750
;   engine_clipper.c_interpolateVertexRightClip_FUN_00430650
;   engine_clipper.c_interpolateVertexTopClip_FUN_00430850
;   engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760
;   engine_special.cpp_drawPolygon2_FUN_0055f920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431330
        ;   Label: engine_clipper.c_clipPolygonToViewFrustum_FUN_00431330
    PUSH ESI                            ; 00431331
    PUSH EDI                            ; 00431332
    PUSH EBP                            ; 00431333
    SUB ESP,0x13c                       ; 00431334
    MOV EBP,dword ptr [ESP + 0x150]     ; 0043133a
    MOV ECX,0xffffffff                  ; 00431341
    XOR EAX,EAX                         ; 00431346
    XOR ESI,ESI                         ; 00431348
    TEST EBP,EBP                        ; 0043134a
    JLE 0x00431371                      ; 0043134c
        ;   XREF to: 00431371 (CONDITIONAL_JUMP)  ; LAB_00431371
    MOV EDX,dword ptr [ESP + 0x154]     ; 0043134e
    IMUL EBX,dword ptr [EDX],0x30       ; 00431355
        ;   Label: LAB_00431355
    MOV EBX,dword ptr [EBX + 0x622024]  ; 00431358 | DAT_00622024
    TEST EBX,0x80000000                 ; 0043135e
    JZ 0x00431367                       ; 00431364
        ;   XREF to: 00431367 (CONDITIONAL_JUMP)  ; LAB_00431367
    INC ESI                             ; 00431366
    ADD EDX,0x4                         ; 00431367
        ;   Label: LAB_00431367
    INC EAX                             ; 0043136a
    AND ECX,EBX                         ; 0043136b
    CMP EAX,EBP                         ; 0043136d
    JL 0x00431355                       ; 0043136f
        ;   XREF to: 00431355 (CONDITIONAL_JUMP)  ; LAB_00431355
    CMP ESI,EBP                         ; 00431371
        ;   Label: LAB_00431371
    JNZ 0x0043137e                      ; 00431373
        ;   XREF to: 0043137e (CONDITIONAL_JUMP)  ; LAB_0043137e
    TEST CL,0xff                        ; 00431375
    JNZ 0x00431440                      ; 00431378
        ;   XREF to: 00431440 (CONDITIONAL_JUMP)  ; LAB_00431440
    TEST ESI,ESI                        ; 0043137e
        ;   Label: LAB_0043137e
    JNZ 0x0043152d                      ; 00431380
        ;   XREF to: 0043152d (CONDITIONAL_JUMP)  ; LAB_0043152d
    CMP dword ptr [0x01c37788],0x0      ; 00431386 | DAT_01c37788
    JZ 0x004314a8                       ; 0043138d
        ;   XREF to: 004314a8 (CONDITIONAL_JUMP)  ; LAB_004314a8
    CMP dword ptr [0x0070ca74],0x0      ; 00431393 | DAT_0070ca74
    JNZ 0x004314a8                      ; 0043139a
        ;   XREF to: 004314a8 (CONDITIONAL_JUMP)  ; LAB_004314a8
    XOR EAX,EAX                         ; 004313a0
    TEST EBP,EBP                        ; 004313a2
    JLE 0x004313d0                      ; 004313a4
        ;   XREF to: 004313d0 (CONDITIONAL_JUMP)  ; LAB_004313d0
    MOV EBX,dword ptr [ESP + 0x154]     ; 004313a6
    IMUL EDX,dword ptr [EBX],0x30       ; 004313ad
        ;   Label: LAB_004313ad
    INC EAX                             ; 004313b0
    ADD EDX,0x622014                    ; 004313b1 | DAT_00622014
    ADD EBX,0x4                         ; 004313b7
    MOV dword ptr [EAX*0x4 + 0x7bf430],EDX ; 004313ba | DAT_007bf434 | DAT_007bf438
    CMP EAX,EBP                         ; 004313c1
    JL 0x004313ad                       ; 004313c3
        ;   XREF to: 004313ad (CONDITIONAL_JUMP)  ; LAB_004313ad
    LEA EAX,[EAX]                       ; 004313c5
    LEA EDX,[EDX]                       ; 004313cb
    MOV EBX,EBX                         ; 004313ce
    CMP dword ptr [0x0070ca7c],0x0      ; 004313d0 | DAT_0070ca7c
        ;   Label: LAB_004313d0
    JZ 0x00431472                       ; 004313d7
        ;   XREF to: 00431472 (CONDITIONAL_JUMP)  ; LAB_00431472
    CMP EBP,0x3                         ; 004313dd
    JLE 0x00431452                      ; 004313e0
        ;   XREF to: 00431452 (CONDITIONAL_JUMP)  ; LAB_00431452
    LEA EAX,[EBP + -0x2]                ; 004313e6
    XOR EBX,EBX                         ; 004313e9
    MOV dword ptr [ESP + 0x100],EAX     ; 004313eb
    LEA EDI,[EAX*0x4 + 0x0]             ; 004313f2
    XOR ESI,ESI                         ; 004313f9
    TEST EDI,EDI                        ; 004313fb
    JLE 0x00431427                      ; 004313fd
        ;   XREF to: 00431427 (CONDITIONAL_JUMP)  ; LAB_00431427
    MOV EAX,dword ptr [EBX + 0x7bf43c]  ; 004313ff | DAT_007bf43c | DAT_007bf440
        ;   Label: LAB_004313ff
    PUSH EAX                            ; 00431405
    MOV EDX,dword ptr [EBX + 0x7bf438]  ; 00431406 | DAT_007bf438 | DAT_007bf43c
    PUSH EDX                            ; 0043140c
    MOV ECX,dword ptr [0x007bf434]      ; 0043140d | DAT_007bf434
    PUSH ECX                            ; 00431413
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760 ; 00431414
        ;   XREF to: 0051c760 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760()
    ADD ESP,0xc                         ; 00431419
    TEST EAX,EAX                        ; 0043141c
    JZ 0x0043144f                       ; 0043141e
        ;   XREF to: 0043144f (CONDITIONAL_JUMP)  ; LAB_0043144f
    ADD EBX,0x4                         ; 00431420
        ;   Label: LAB_00431420
    CMP EBX,EDI                         ; 00431423
    JL 0x004313ff                       ; 00431425
        ;   XREF to: 004313ff (CONDITIONAL_JUMP)  ; LAB_004313ff
    CMP ESI,dword ptr [ESP + 0x100]     ; 00431427
        ;   Label: LAB_00431427
    JNZ 0x00431472                      ; 0043142e
        ;   XREF to: 00431472 (CONDITIONAL_JUMP)  ; LAB_00431472
        ;   Label: LAB_0043142e
    MOV EAX,0x1                         ; 00431430
        ;   Label: LAB_00431430
    ADD ESP,0x13c                       ; 00431435
        ;   Label: LAB_00431435
    POP EBP                             ; 0043143b
    POP EDI                             ; 0043143c
    POP ESI                             ; 0043143d
    POP EBX                             ; 0043143e
    RET                                 ; 0043143f
    XOR ESI,EBP                         ; 00431440
        ;   Label: LAB_00431440
    MOV EAX,0x1                         ; 00431442
    MOV dword ptr [0x007bee30],ESI      ; 00431447 | DAT_007bee30
    JMP 0x00431435                      ; 0043144d
        ;   XREF to: 00431435 (UNCONDITIONAL_JUMP)  ; LAB_00431435
    INC ESI                             ; 0043144f
        ;   Label: LAB_0043144f
    JMP 0x00431420                      ; 00431450
        ;   XREF to: 00431420 (UNCONDITIONAL_JUMP)  ; LAB_00431420
    MOV EAX,[0x007bf43c]                ; 00431452 | DAT_007bf43c
        ;   Label: LAB_00431452
    PUSH EAX                            ; 00431457
    MOV EDX,dword ptr [0x007bf438]      ; 00431458 | DAT_007bf438
    PUSH EDX                            ; 0043145e
    MOV ECX,dword ptr [0x007bf434]      ; 0043145f | DAT_007bf434
    PUSH ECX                            ; 00431465
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760 ; 00431466
        ;   XREF to: 0051c760 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760()
    ADD ESP,0xc                         ; 0043146b
    TEST EAX,EAX                        ; 0043146e
    JMP 0x0043142e                      ; 00431470
        ;   XREF to: 0043142e (UNCONDITIONAL_JUMP)  ; LAB_0043142e
    MOV ESI,dword ptr [0x01c38b54]      ; 00431472 | DAT_01c38b54
        ;   Label: LAB_00431472
    PUSH ESI                            ; 00431478
    LEA EAX,[EBP + -0x2]                ; 00431479
    MOV EBX,dword ptr [0x01e61b58]      ; 0043147c | DAT_01e61b58
    PUSH EBP                            ; 00431482
    ADD EBX,EAX                         ; 00431483
    PUSH 0x7bf434                       ; 00431485 | DAT_007bf434
    MOV dword ptr [0x01e61b58],EBX      ; 0043148a | DAT_01e61b58
    CALL engine_special.cpp_drawPolygon2_FUN_0055f920 ; 00431490
        ;   XREF to: 0055f920 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_drawPolygon2_FUN_0055f920()
    MOV EAX,0x1                         ; 00431495
    ADD ESP,0xc                         ; 0043149a
    ADD ESP,0x13c                       ; 0043149d
    POP EBP                             ; 004314a3
    POP EDI                             ; 004314a4
    POP ESI                             ; 004314a5
    POP EBX                             ; 004314a6
    RET                                 ; 004314a7
    XOR EBX,EBX                         ; 004314a8
        ;   Label: LAB_004314a8
    MOV dword ptr [0x007bee30],EBP      ; 004314aa | DAT_007bee30
    MOV dword ptr [ESP + 0x130],EBX     ; 004314b0
    TEST EBP,EBP                        ; 004314b7
    JLE 0x00431520                      ; 004314b9
        ;   XREF to: 00431520 (CONDITIONAL_JUMP)  ; LAB_00431520
    MOV EDX,dword ptr [ESP + 0x154]     ; 004314bb
    MOV EBX,0x7bee34                    ; 004314c2 | DAT_007bee34
    IMUL ESI,dword ptr [EDX],0x30       ; 004314c7
        ;   Label: LAB_004314c7
    MOV ECX,0x30                        ; 004314ca
    ADD ESI,0x622014                    ; 004314cf | DAT_00622014
    MOV EDI,EBX                         ; 004314d5
    TEST EDI,0x7                        ; 004314d7
    JZ 0x004314e5                       ; 004314dd
        ;   XREF to: 004314e5 (CONDITIONAL_JUMP)  ; LAB_004314e5
    MOVSD ES:EDI,ESI                    ; 004314df | DAT_00622014 | DAT_007bee34 | DAT_007bee64
    SUB ECX,0x4                         ; 004314e0
    JLE 0x00431502                      ; 004314e3
        ;   XREF to: 00431502 (CONDITIONAL_JUMP)  ; LAB_00431502
    SUB ECX,0x8                         ; 004314e5
        ;   Label: LAB_004314e5
    JL 0x004314f6                       ; 004314e8
        ;   XREF to: 004314f6 (CONDITIONAL_JUMP)  ; LAB_004314f6
    FILD qword ptr [ESI]                ; 004314ea | DAT_00622018 | DAT_00622020 | DAT_00622014
    ADD ESI,0x8                         ; 004314ec
    FISTP qword ptr [EDI]               ; 004314ef | DAT_007bee38 | DAT_007bee40 | DAT_007bee68
    ADD EDI,0x8                         ; 004314f1
    JMP 0x004314e5                      ; 004314f4
        ;   XREF to: 004314e5 (UNCONDITIONAL_JUMP)  ; LAB_004314e5
    ADD ECX,0x8                         ; 004314f6
        ;   Label: LAB_004314f6
    JLE 0x00431502                      ; 004314f9
        ;   XREF to: 00431502 (CONDITIONAL_JUMP)  ; LAB_00431502
    MOVSD ES:EDI,ESI                    ; 004314fb | DAT_00622020 | DAT_007bee40
    SUB ECX,0x4                         ; 004314fc
    JLE 0x00431502                      ; 004314ff
        ;   XREF to: 00431502 (CONDITIONAL_JUMP)  ; LAB_00431502
    MOVSD ES:EDI,ESI                    ; 00431501 | DAT_00622024 | DAT_007bee44
    MOV EAX,dword ptr [ESP + 0x130]     ; 00431502
        ;   Label: LAB_00431502
    ADD EDX,0x4                         ; 00431509
    INC EAX                             ; 0043150c
    ADD EBX,0x30                        ; 0043150d
    MOV dword ptr [ESP + 0x130],EAX     ; 00431510
    CMP EBP,EAX                         ; 00431517
    JG 0x004314c7                       ; 00431519
        ;   XREF to: 004314c7 (CONDITIONAL_JUMP)  ; LAB_004314c7
    LEA EAX,[EAX]                       ; 0043151b
    MOV ECX,ECX                         ; 0043151e
    XOR EAX,EAX                         ; 00431520
        ;   Label: LAB_00431520
    ADD ESP,0x13c                       ; 00431522
    POP EBP                             ; 00431528
    POP EDI                             ; 00431529
    POP ESI                             ; 0043152a
    POP EBX                             ; 0043152b
    RET                                 ; 0043152c
    XOR EAX,EAX                         ; 0043152d
        ;   Label: LAB_0043152d
    TEST EBP,EBP                        ; 0043152f
    JLE 0x00431550                      ; 00431531
        ;   XREF to: 00431550 (CONDITIONAL_JUMP)  ; LAB_00431550
    MOV EBX,dword ptr [ESP + 0x154]     ; 00431533
    IMUL EDX,dword ptr [EBX],0x30       ; 0043153a
        ;   Label: LAB_0043153a
    INC EAX                             ; 0043153d
    ADD EDX,0x622014                    ; 0043153e | DAT_00622014
    ADD EBX,0x4                         ; 00431544
    MOV dword ptr [ESP + EAX*0x4 + -0x4],EDX ; 00431547
    CMP EAX,EBP                         ; 0043154b
    JL 0x0043153a                       ; 0043154d
        ;   XREF to: 0043153a (CONDITIONAL_JUMP)  ; LAB_0043153a
    NOP                                 ; 0043154f
    LEA EAX,[ESP + 0x80]                ; 00431550
        ;   Label: LAB_00431550
    MOV EDX,ESP                         ; 00431557
    MOV dword ptr [0x007bee30],EBP      ; 00431559 | DAT_007bee30
    MOV dword ptr [ESP + 0x108],EBP     ; 0043155f
    XOR EBX,EBX                         ; 00431566
    XOR ESI,ESI                         ; 00431568
    XOR EDI,EDI                         ; 0043156a
    MOV dword ptr [0x007bfcf8],EBX      ; 0043156c | DAT_007bfcf8
    MOV dword ptr [ESP + 0x134],EAX     ; 00431572
    MOV dword ptr [ESP + 0x12c],EDI     ; 00431579
    MOV EBX,dword ptr [EDX + EBP*0x4 + -0x4] ; 00431580
    TEST EBP,EBP                        ; 00431584
    JLE 0x004315e4                      ; 00431586
        ;   XREF to: 004315e4 (CONDITIONAL_JUMP)  ; LAB_004315e4
    MOV EBP,ESP                         ; 00431588
    MOV EDX,dword ptr [EBX]             ; 0043158a | DAT_00622014
        ;   Label: LAB_0043158a
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043158c | DAT_0062201c
    MOV EDI,dword ptr [EBP]             ; 0043158f
    XOR EAX,EAX                         ; 00431592
    CMP EDX,ECX                         ; 00431594
    JL 0x0043159d                       ; 00431596
        ;   XREF to: 0043159d (CONDITIONAL_JUMP)  ; LAB_0043159d
    MOV EAX,0x1                         ; 00431598
    MOV ECX,dword ptr [EDI + 0x8]       ; 0043159d | DAT_0062201c
        ;   Label: LAB_0043159d
    CMP ECX,dword ptr [EDI]             ; 004315a0 | DAT_00622014
    JG 0x004315a6                       ; 004315a2
        ;   XREF to: 004315a6 (CONDITIONAL_JUMP)  ; LAB_004315a6
    OR AL,0x2                           ; 004315a4
    CMP EAX,0x3                         ; 004315a6
        ;   Label: LAB_004315a6
    JA 0x004315c5                       ; 004315a9
        ;   XREF to: 004315c5 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4312dc]  ; 004315ab | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ECX,dword ptr [ESP + 0x134]     ; 004315b2
        ;   Label: caseD_0
    LEA EAX,[ESI*0x4 + 0x0]             ; 004315b9
    ADD EAX,ECX                         ; 004315c0
    INC ESI                             ; 004315c2
    MOV dword ptr [EAX],EBX             ; 004315c3
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004315c5
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP + 0x108]     ; 004315cc
    MOV EBX,EDI                         ; 004315d3
    INC EAX                             ; 004315d5
    ADD EBP,0x4                         ; 004315d6
    MOV dword ptr [ESP + 0x12c],EAX     ; 004315d9
    CMP EAX,EDX                         ; 004315e0
    JL 0x0043158a                       ; 004315e2
        ;   XREF to: 0043158a (CONDITIONAL_JUMP)  ; LAB_0043158a
    MOV dword ptr [0x007bee30],ESI      ; 004315e4 | DAT_007bee30
        ;   Label: LAB_004315e4
    CMP ESI,0x3                         ; 004315ea
    JL 0x00431430                       ; 004315ed
        ;   XREF to: 00431430 (CONDITIONAL_JUMP)  ; LAB_00431430
    LEA EDX,[ESP + 0x80]                ; 004315f3
    MOV EBP,ESP                         ; 004315fa
    XOR EBX,EBX                         ; 004315fc
    MOV dword ptr [ESP + 0x104],ESI     ; 004315fe
    MOV dword ptr [ESP + 0x11c],EBX     ; 00431605
    MOV EDI,dword ptr [EDX + ESI*0x4 + -0x4] ; 0043160c
    TEST ESI,ESI                        ; 00431610
    JLE 0x00431681                      ; 00431612
        ;   XREF to: 00431681 (CONDITIONAL_JUMP)  ; LAB_00431681
    MOV dword ptr [ESP + 0x114],EDX     ; 00431614
    MOV ESI,dword ptr [ESP + 0x114]     ; 0043161b
        ;   Label: LAB_0043161b
    MOV EDX,dword ptr [EDI + 0x8]       ; 00431622
    MOV ECX,dword ptr [EDI]             ; 00431625
    XOR EAX,EAX                         ; 00431627
    NEG EDX                             ; 00431629
    MOV ESI,dword ptr [ESI]             ; 0043162b
    CMP EDX,ECX                         ; 0043162d
    JL 0x00431636                       ; 0043162f
        ;   XREF to: 00431636 (CONDITIONAL_JUMP)  ; LAB_00431636
    MOV EAX,0x1                         ; 00431631
    MOV EDX,dword ptr [ESI + 0x8]       ; 00431636
        ;   Label: LAB_00431636
    MOV ECX,dword ptr [ESI]             ; 00431639
    NEG EDX                             ; 0043163b
    CMP EDX,ECX                         ; 0043163d
    JL 0x00431643                       ; 0043163f
        ;   XREF to: 00431643 (CONDITIONAL_JUMP)  ; LAB_00431643
    OR AL,0x2                           ; 00431641
    CMP EAX,0x3                         ; 00431643
        ;   Label: LAB_00431643
    JA 0x00431654                       ; 00431646
        ;   XREF to: 00431654 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4312ec]  ; 00431648 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC EBX                             ; 0043164f
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDI ; 00431650
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00431654
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP + 0x104]     ; 0043165b
    MOV EDI,ESI                         ; 00431662
    MOV ESI,dword ptr [ESP + 0x114]     ; 00431664
    INC EAX                             ; 0043166b
    ADD ESI,0x4                         ; 0043166c
    MOV dword ptr [ESP + 0x11c],EAX     ; 0043166f
    MOV dword ptr [ESP + 0x114],ESI     ; 00431676
    CMP EAX,EDX                         ; 0043167d
    JL 0x0043161b                       ; 0043167f
        ;   XREF to: 0043161b (CONDITIONAL_JUMP)  ; LAB_0043161b
    MOV dword ptr [0x007bee30],EBX      ; 00431681 | DAT_007bee30
        ;   Label: LAB_00431681
    CMP EBX,0x3                         ; 00431687
    JL 0x00431430                       ; 0043168a
        ;   XREF to: 00431430 (CONDITIONAL_JUMP)  ; LAB_00431430
    MOV EDX,ESP                         ; 00431690
    LEA EBP,[ESP + 0x80]                ; 00431692
    XOR ESI,ESI                         ; 00431699
    MOV dword ptr [ESP + 0x110],EBX     ; 0043169b
    MOV dword ptr [ESP + 0x128],ESI     ; 004316a2
    MOV EDI,dword ptr [EDX + EBX*0x4 + -0x4] ; 004316a9
    TEST EBX,EBX                        ; 004316ad
    JLE 0x0043171a                      ; 004316af
        ;   XREF to: 0043171a (CONDITIONAL_JUMP)  ; LAB_0043171a
    MOV dword ptr [ESP + 0x120],EDX     ; 004316b1
    MOV EBX,dword ptr [ESP + 0x120]     ; 004316b8
        ;   Label: LAB_004316b8
    MOV EDX,dword ptr [EDI + 0x4]       ; 004316bf | DAT_00622018
    MOV ECX,dword ptr [EDI + 0x8]       ; 004316c2 | DAT_0062201c
    XOR EAX,EAX                         ; 004316c5
    MOV EBX,dword ptr [EBX]             ; 004316c7
    CMP EDX,ECX                         ; 004316c9
    JL 0x004316d2                       ; 004316cb
        ;   XREF to: 004316d2 (CONDITIONAL_JUMP)  ; LAB_004316d2
    MOV EAX,0x1                         ; 004316cd
    MOV ECX,dword ptr [EBX + 0x8]       ; 004316d2 | DAT_0062201c
        ;   Label: LAB_004316d2
    CMP ECX,dword ptr [EBX + 0x4]       ; 004316d5 | DAT_00622018
    JG 0x004316dc                       ; 004316d8
        ;   XREF to: 004316dc (CONDITIONAL_JUMP)  ; LAB_004316dc
    OR AL,0x2                           ; 004316da
    CMP EAX,0x3                         ; 004316dc
        ;   Label: LAB_004316dc
    JA 0x004316ed                       ; 004316df
        ;   XREF to: 004316ed (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4312fc]  ; 004316e1 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC ESI                             ; 004316e8
        ;   Label: caseD_0
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDI ; 004316e9
    MOV ECX,dword ptr [ESP + 0x120]     ; 004316ed
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP + 0x110]     ; 004316f4
    MOV EDI,EBX                         ; 004316fb
    MOV EBX,dword ptr [ESP + 0x128]     ; 004316fd
    ADD ECX,0x4                         ; 00431704
    INC EBX                             ; 00431707
    MOV dword ptr [ESP + 0x120],ECX     ; 00431708
    MOV dword ptr [ESP + 0x128],EBX     ; 0043170f
    CMP EBX,EDX                         ; 00431716
    JL 0x004316b8                       ; 00431718
        ;   XREF to: 004316b8 (CONDITIONAL_JUMP)  ; LAB_004316b8
    MOV dword ptr [0x007bee30],ESI      ; 0043171a | DAT_007bee30
        ;   Label: LAB_0043171a
    CMP ESI,0x3                         ; 00431720
    JL 0x00431430                       ; 00431723
        ;   XREF to: 00431430 (CONDITIONAL_JUMP)  ; LAB_00431430
    LEA EDX,[ESP + 0x80]                ; 00431729
    MOV EBP,ESP                         ; 00431730
    XOR EBX,EBX                         ; 00431732
    MOV dword ptr [ESP + 0x10c],ESI     ; 00431734
    MOV dword ptr [ESP + 0x124],EBX     ; 0043173b
    MOV EDI,dword ptr [EDX + ESI*0x4 + -0x4] ; 00431742
    TEST ESI,ESI                        ; 00431746
    JLE 0x004317bd                      ; 00431748
        ;   XREF to: 004317bd (CONDITIONAL_JUMP)  ; LAB_004317bd
    MOV dword ptr [ESP + 0x118],EDX     ; 0043174e
    MOV ESI,dword ptr [ESP + 0x118]     ; 00431755
        ;   Label: LAB_00431755
    MOV EDX,dword ptr [EDI + 0x8]       ; 0043175c
    MOV ECX,dword ptr [EDI + 0x4]       ; 0043175f
    XOR EAX,EAX                         ; 00431762
    NEG EDX                             ; 00431764
    MOV ESI,dword ptr [ESI]             ; 00431766
    CMP EDX,ECX                         ; 00431768
    JL 0x00431771                       ; 0043176a
        ;   XREF to: 00431771 (CONDITIONAL_JUMP)  ; LAB_00431771
    MOV EAX,0x1                         ; 0043176c
    MOV EDX,dword ptr [ESI + 0x8]       ; 00431771
        ;   Label: LAB_00431771
    MOV ECX,dword ptr [ESI + 0x4]       ; 00431774
    NEG EDX                             ; 00431777
    CMP EDX,ECX                         ; 00431779
    JL 0x0043177f                       ; 0043177b
        ;   XREF to: 0043177f (CONDITIONAL_JUMP)  ; LAB_0043177f
    OR AL,0x2                           ; 0043177d
    CMP EAX,0x3                         ; 0043177f
        ;   Label: LAB_0043177f
    JA 0x00431790                       ; 00431782
        ;   XREF to: 00431790 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43130c]  ; 00431784 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC EBX                             ; 0043178b
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDI ; 0043178c
    MOV ECX,dword ptr [ESP + 0x118]     ; 00431790
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00431797
    MOV EDI,ESI                         ; 0043179e
    MOV ESI,dword ptr [ESP + 0x124]     ; 004317a0
    ADD ECX,0x4                         ; 004317a7
    INC ESI                             ; 004317aa
    MOV dword ptr [ESP + 0x118],ECX     ; 004317ab
    MOV dword ptr [ESP + 0x124],ESI     ; 004317b2
    CMP ESI,EDX                         ; 004317b9
    JL 0x00431755                       ; 004317bb
        ;   XREF to: 00431755 (CONDITIONAL_JUMP)  ; LAB_00431755
    MOV dword ptr [0x007bee30],EBX      ; 004317bd | DAT_007bee30
        ;   Label: LAB_004317bd
    CMP EBX,0x3                         ; 004317c3
    JL 0x00431430                       ; 004317c6
        ;   XREF to: 00431430 (CONDITIONAL_JUMP)  ; LAB_00431430
    XOR EDX,EDX                         ; 004317cc
    TEST EBX,EBX                        ; 004317ce
    JLE 0x00431820                      ; 004317d0
        ;   XREF to: 00431820 (CONDITIONAL_JUMP)  ; LAB_00431820
    MOV EBX,0x7bee34                    ; 004317d2 | DAT_007bee34
    XOR EBP,EBP                         ; 004317d7
    MOV ECX,0x30                        ; 004317d9
        ;   Label: LAB_004317d9
    MOV EDI,EBX                         ; 004317de
    MOV ESI,dword ptr [ESP + EBP*0x1]   ; 004317e0
    TEST EDI,0x7                        ; 004317e3
    JZ 0x004317f1                       ; 004317e9
        ;   XREF to: 004317f1 (CONDITIONAL_JUMP)  ; LAB_004317f1
    MOVSD ES:EDI,ESI                    ; 004317eb | DAT_00622014 | DAT_007bee34 | DAT_007bee64
    SUB ECX,0x4                         ; 004317ec
    JLE 0x0043180e                      ; 004317ef
        ;   XREF to: 0043180e (CONDITIONAL_JUMP)  ; LAB_0043180e
    SUB ECX,0x8                         ; 004317f1
        ;   Label: LAB_004317f1
    JL 0x00431802                       ; 004317f4
        ;   XREF to: 00431802 (CONDITIONAL_JUMP)  ; LAB_00431802
    FILD qword ptr [ESI]                ; 004317f6 | DAT_00622018 | DAT_00622020
    ADD ESI,0x8                         ; 004317f8
    FISTP qword ptr [EDI]               ; 004317fb | DAT_007bee38 | DAT_007bee40 | DAT_007bee68
    ADD EDI,0x8                         ; 004317fd
    JMP 0x004317f1                      ; 00431800
        ;   XREF to: 004317f1 (UNCONDITIONAL_JUMP)  ; LAB_004317f1
    ADD ECX,0x8                         ; 00431802
        ;   Label: LAB_00431802
    JLE 0x0043180e                      ; 00431805
        ;   XREF to: 0043180e (CONDITIONAL_JUMP)  ; LAB_0043180e
    MOVSD ES:EDI,ESI                    ; 00431807 | DAT_00622020 | DAT_007bee40
    SUB ECX,0x4                         ; 00431808
    JLE 0x0043180e                      ; 0043180b
        ;   XREF to: 0043180e (CONDITIONAL_JUMP)  ; LAB_0043180e
    MOVSD ES:EDI,ESI                    ; 0043180d | DAT_00622024 | DAT_007bee44
    ADD EBP,0x4                         ; 0043180e
        ;   Label: LAB_0043180e
    INC EDX                             ; 00431811
    MOV ECX,dword ptr [0x007bee30]      ; 00431812 | DAT_007bee30
    ADD EBX,0x30                        ; 00431818
    CMP EDX,ECX                         ; 0043181b
    JL 0x004317d9                       ; 0043181d
        ;   XREF to: 004317d9 (CONDITIONAL_JUMP)  ; LAB_004317d9
    NOP                                 ; 0043181f
    MOV ESI,dword ptr [0x00609b34]      ; 00431820 | DAT_00609b34
        ;   Label: LAB_00431820
    XOR EBX,EBX                         ; 00431826
    TEST ESI,ESI                        ; 00431828
    JNZ 0x00431b62                      ; 0043182a
        ;   XREF to: 00431b62 (CONDITIONAL_JUMP)  ; LAB_00431b62
    MOV EBP,dword ptr [0x007bee30]      ; 00431830 | DAT_007bee30
        ;   Label: LAB_00431830
    CMP EBP,0x3                         ; 00431836
    JL 0x00431430                       ; 00431839
        ;   XREF to: 00431430 (CONDITIONAL_JUMP)  ; LAB_00431430
    XOR EDX,EDX                         ; 0043183f
    TEST EBP,EBP                        ; 00431841
    JLE 0x0043186f                      ; 00431843
        ;   XREF to: 0043186f (CONDITIONAL_JUMP)  ; LAB_0043186f
    MOV EAX,0x7bee34                    ; 00431845 | DAT_007bee34
    MOV EBX,dword ptr [EAX + 0x8]       ; 0043184a | DAT_007bee3c | DAT_007bee6c
        ;   Label: LAB_0043184a
    TEST EBX,EBX                        ; 0043184d
    JNZ 0x00431d53                      ; 0043184f
        ;   XREF to: 00431d53 (CONDITIONAL_JUMP)  ; LAB_00431d53
    MOV dword ptr [EAX + 0x8],0x1       ; 00431855 | DAT_007bee3c | DAT_007bee6c
    MOV dword ptr [EAX],EBX             ; 0043185c | DAT_007bee34 | DAT_007bee64
    MOV dword ptr [EAX + 0x4],EBX       ; 0043185e | DAT_007bee38 | DAT_007bee68
        ;   Label: LAB_0043185e
    MOV ECX,dword ptr [0x007bee30]      ; 00431861 | DAT_007bee30
        ;   Label: LAB_00431861
    INC EDX                             ; 00431867
    ADD EAX,0x30                        ; 00431868
    CMP EDX,ECX                         ; 0043186b
    JL 0x0043184a                       ; 0043186d
        ;   XREF to: 0043184a (CONDITIONAL_JUMP)  ; LAB_0043184a
    XOR EAX,EAX                         ; 0043186f
        ;   Label: LAB_0043186f
    ADD ESP,0x13c                       ; 00431871
    POP EBP                             ; 00431877
    POP EDI                             ; 00431878
    POP ESI                             ; 00431879
    POP EBX                             ; 0043187a
    RET                                 ; 0043187b
    CMP dword ptr [0x007bfcf8],0xc      ; 0043187c | DAT_007bfcf8
        ;   Label: caseD_1
    JL 0x004318a7                       ; 00431883
        ;   XREF to: 004318a7 (CONDITIONAL_JUMP)  ; LAB_004318a7
    MOV EAX,0x5cd962                    ; 00431885 | = "..\\engine\\clipper.c"
    MOV EDX,0x5e                        ; 0043188a
    PUSH 0x5cd976                       ; 0043188f | = "Ran out of clipped verts!"
    MOV [0x01d046a0],EAX                ; 00431894 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00431899 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0043189f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004318a4
    MOV EAX,[0x007bfcf8]                ; 004318a7 | DAT_007bfcf8
        ;   Label: LAB_004318a7
    IMUL EDX,EAX,0x30                   ; 004318ac
    MOV ECX,dword ptr [ESP + 0x134]     ; 004318af
    ADD EDX,0x7bfab8                    ; 004318b6 | DAT_007bfab8
    INC EAX                             ; 004318bc
    PUSH EDX                            ; 004318bd | DAT_007bfab8
    MOV [0x007bfcf8],EAX                ; 004318be | DAT_007bfcf8
    LEA EAX,[ESI*0x4 + 0x0]             ; 004318c3
    PUSH EBX                            ; 004318ca
    ADD EAX,ECX                         ; 004318cb
    PUSH EDI                            ; 004318cd
    INC ESI                             ; 004318ce
    MOV dword ptr [EAX],EDX             ; 004318cf | DAT_007bfab8
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_00430650 ; 004318d1
        ;   XREF to: 00430650 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexRightClip_FUN_00430650()
    ADD ESP,0xc                         ; 004318d6
    JMP 0x004315c5                      ; 004318d9
        ;   XREF to: 004315c5 (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV EDX,dword ptr [ESP + 0x134]     ; 004318de
        ;   Label: caseD_2
    LEA EAX,[ESI*0x4 + 0x0]             ; 004318e5
    ADD EAX,EDX                         ; 004318ec
    MOV ECX,dword ptr [0x007bfcf8]      ; 004318ee | DAT_007bfcf8
    INC ESI                             ; 004318f4
    MOV dword ptr [EAX],EBX             ; 004318f5
    CMP ECX,0xc                         ; 004318f7
    JL 0x0043191e                       ; 004318fa
        ;   XREF to: 0043191e (CONDITIONAL_JUMP)  ; LAB_0043191e
    MOV EAX,0x5cd962                    ; 004318fc | = "..\\engine\\clipper.c"
    MOV EDX,0x5e                        ; 00431901
    PUSH 0x5cd976                       ; 00431906 | = "Ran out of clipped verts!"
    MOV [0x01d046a0],EAX                ; 0043190b | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00431910 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00431916
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0043191b
    MOV EAX,[0x007bfcf8]                ; 0043191e | DAT_007bfcf8
        ;   Label: LAB_0043191e
    IMUL EDX,EAX,0x30                   ; 00431923
    MOV ECX,dword ptr [ESP + 0x134]     ; 00431926
    ADD EDX,0x7bfab8                    ; 0043192d | DAT_007bfab8
    INC EAX                             ; 00431933
    PUSH EDX                            ; 00431934 | DAT_007bfab8
    MOV [0x007bfcf8],EAX                ; 00431935 | DAT_007bfcf8
    LEA EAX,[ESI*0x4 + 0x0]             ; 0043193a
    PUSH EDI                            ; 00431941
    ADD EAX,ECX                         ; 00431942
    PUSH EBX                            ; 00431944
    INC ESI                             ; 00431945
    MOV dword ptr [EAX],EDX             ; 00431946 | DAT_007bfab8
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_00430650 ; 00431948
        ;   XREF to: 00430650 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexRightClip_FUN_00430650()
    ADD ESP,0xc                         ; 0043194d
    JMP 0x004315c5                      ; 00431950
        ;   XREF to: 004315c5 (UNCONDITIONAL_JUMP)  ; caseD_3
    CMP dword ptr [0x007bfcf8],0xc      ; 00431955 | DAT_007bfcf8
        ;   Label: caseD_1
    JL 0x00431980                       ; 0043195c
        ;   XREF to: 00431980 (CONDITIONAL_JUMP)  ; LAB_00431980
    MOV ECX,0x5cd962                    ; 0043195e | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 00431963
    PUSH 0x5cd976                       ; 00431968 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d046a0],ECX      ; 0043196d | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00431973 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00431978
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0043197d
    MOV EAX,[0x007bfcf8]                ; 00431980 | DAT_007bfcf8
        ;   Label: LAB_00431980
    IMUL EDX,EAX,0x30                   ; 00431985
    ADD EDX,0x7bfab8                    ; 00431988 | DAT_007bfab8
    PUSH EDX                            ; 0043198e | DAT_007bfab8
    PUSH EDI                            ; 0043198f
    INC EBX                             ; 00431990
    INC EAX                             ; 00431991
    PUSH ESI                            ; 00431992
    MOV [0x007bfcf8],EAX                ; 00431993 | DAT_007bfcf8
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 00431998 | DAT_007bfab8
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00430750 ; 0043199c
        ;   XREF to: 00430750 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClip_FUN_00430750()
    ADD ESP,0xc                         ; 004319a1
    JMP 0x00431654                      ; 004319a4
        ;   XREF to: 00431654 (UNCONDITIONAL_JUMP)  ; caseD_3
    INC EBX                             ; 004319a9
        ;   Label: caseD_2
    MOV EAX,[0x007bfcf8]                ; 004319aa | DAT_007bfcf8
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDI ; 004319af
    CMP EAX,0xc                         ; 004319b3
    JL 0x004319db                       ; 004319b6
        ;   XREF to: 004319db (CONDITIONAL_JUMP)  ; LAB_004319db
    MOV EDX,0x5cd962                    ; 004319b8 | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 004319bd
    PUSH 0x5cd976                       ; 004319c2 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d046a0],EDX      ; 004319c7 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004319cd | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004319d3
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004319d8
    MOV EAX,[0x007bfcf8]                ; 004319db | DAT_007bfcf8
        ;   Label: LAB_004319db
    IMUL EDX,EAX,0x30                   ; 004319e0
    ADD EDX,0x7bfab8                    ; 004319e3 | DAT_007bfab8
    PUSH EDX                            ; 004319e9 | DAT_007bfab8
    PUSH ESI                            ; 004319ea
    INC EBX                             ; 004319eb
    INC EAX                             ; 004319ec
    PUSH EDI                            ; 004319ed
    MOV [0x007bfcf8],EAX                ; 004319ee | DAT_007bfcf8
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 004319f3 | DAT_007bfab8
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00430750 ; 004319f7
        ;   XREF to: 00430750 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClip_FUN_00430750()
    ADD ESP,0xc                         ; 004319fc
    JMP 0x00431654                      ; 004319ff
        ;   XREF to: 00431654 (UNCONDITIONAL_JUMP)  ; caseD_3
    CMP dword ptr [0x007bfcf8],0xc      ; 00431a04 | DAT_007bfcf8
        ;   Label: caseD_1
    JL 0x00431a2f                       ; 00431a0b
        ;   XREF to: 00431a2f (CONDITIONAL_JUMP)  ; LAB_00431a2f
    MOV ECX,0x5cd962                    ; 00431a0d | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 00431a12
    PUSH 0x5cd976                       ; 00431a17 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d046a0],ECX      ; 00431a1c | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00431a22 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00431a27
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00431a2c
    MOV EAX,[0x007bfcf8]                ; 00431a2f | DAT_007bfcf8
        ;   Label: LAB_00431a2f
    IMUL EDX,EAX,0x30                   ; 00431a34
    ADD EDX,0x7bfab8                    ; 00431a37 | DAT_007bfab8
    PUSH EDX                            ; 00431a3d | DAT_007bfab8
    PUSH EDI                            ; 00431a3e
    INC ESI                             ; 00431a3f
    INC EAX                             ; 00431a40
    PUSH EBX                            ; 00431a41
    MOV [0x007bfcf8],EAX                ; 00431a42 | DAT_007bfcf8
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDX ; 00431a47 | DAT_007bfab8
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_00430850 ; 00431a4b
        ;   XREF to: 00430850 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexTopClip_FUN_00430850()
    ADD ESP,0xc                         ; 00431a50
    JMP 0x004316ed                      ; 00431a53
        ;   XREF to: 004316ed (UNCONDITIONAL_JUMP)  ; caseD_3
    INC ESI                             ; 00431a58
        ;   Label: caseD_2
    MOV EAX,[0x007bfcf8]                ; 00431a59 | DAT_007bfcf8
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDI ; 00431a5e
    CMP EAX,0xc                         ; 00431a62
    JL 0x00431a8a                       ; 00431a65
        ;   XREF to: 00431a8a (CONDITIONAL_JUMP)  ; LAB_00431a8a
    MOV EDX,0x5cd962                    ; 00431a67 | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 00431a6c
    PUSH 0x5cd976                       ; 00431a71 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d046a0],EDX      ; 00431a76 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00431a7c | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00431a82
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00431a87
    MOV EAX,[0x007bfcf8]                ; 00431a8a | DAT_007bfcf8
        ;   Label: LAB_00431a8a
    IMUL EDX,EAX,0x30                   ; 00431a8f
    ADD EDX,0x7bfab8                    ; 00431a92 | DAT_007bfab8
    PUSH EDX                            ; 00431a98 | DAT_007bfab8
    PUSH EBX                            ; 00431a99
    INC ESI                             ; 00431a9a
    INC EAX                             ; 00431a9b
    PUSH EDI                            ; 00431a9c
    MOV [0x007bfcf8],EAX                ; 00431a9d | DAT_007bfcf8
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDX ; 00431aa2 | DAT_007bfab8
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_00430850 ; 00431aa6
        ;   XREF to: 00430850 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexTopClip_FUN_00430850()
    ADD ESP,0xc                         ; 00431aab
    JMP 0x004316ed                      ; 00431aae
        ;   XREF to: 004316ed (UNCONDITIONAL_JUMP)  ; caseD_3
    CMP dword ptr [0x007bfcf8],0xc      ; 00431ab3 | DAT_007bfcf8
        ;   Label: caseD_1
    JL 0x00431ade                       ; 00431aba
        ;   XREF to: 00431ade (CONDITIONAL_JUMP)  ; LAB_00431ade
    MOV ECX,0x5cd962                    ; 00431abc | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 00431ac1
    PUSH 0x5cd976                       ; 00431ac6 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d046a0],ECX      ; 00431acb | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00431ad1 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00431ad6
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00431adb
    MOV EAX,[0x007bfcf8]                ; 00431ade | DAT_007bfcf8
        ;   Label: LAB_00431ade
    IMUL EDX,EAX,0x30                   ; 00431ae3
    ADD EDX,0x7bfab8                    ; 00431ae6 | DAT_007bfab8
    PUSH EDX                            ; 00431aec | DAT_007bfab8
    PUSH EDI                            ; 00431aed
    INC EBX                             ; 00431aee
    INC EAX                             ; 00431aef
    PUSH ESI                            ; 00431af0
    MOV [0x007bfcf8],EAX                ; 00431af1 | DAT_007bfcf8
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 00431af6 | DAT_007bfab8
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00430950 ; 00431afa
        ;   XREF to: 00430950 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexBottomClip_FUN_00430950()
    ADD ESP,0xc                         ; 00431aff
    JMP 0x00431790                      ; 00431b02
        ;   XREF to: 00431790 (UNCONDITIONAL_JUMP)  ; caseD_3
    INC EBX                             ; 00431b07
        ;   Label: caseD_2
    MOV EAX,[0x007bfcf8]                ; 00431b08 | DAT_007bfcf8
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDI ; 00431b0d
    CMP EAX,0xc                         ; 00431b11
    JL 0x00431b39                       ; 00431b14
        ;   XREF to: 00431b39 (CONDITIONAL_JUMP)  ; LAB_00431b39
    MOV EDX,0x5cd962                    ; 00431b16 | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 00431b1b
    PUSH 0x5cd976                       ; 00431b20 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d046a0],EDX      ; 00431b25 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00431b2b | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00431b31
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00431b36
    MOV EAX,[0x007bfcf8]                ; 00431b39 | DAT_007bfcf8
        ;   Label: LAB_00431b39
    IMUL EDX,EAX,0x30                   ; 00431b3e
    ADD EDX,0x7bfab8                    ; 00431b41 | DAT_007bfab8
    PUSH EDX                            ; 00431b47 | DAT_007bfab8
    PUSH ESI                            ; 00431b48
    INC EBX                             ; 00431b49
    INC EAX                             ; 00431b4a
    PUSH EDI                            ; 00431b4b
    MOV [0x007bfcf8],EAX                ; 00431b4c | DAT_007bfcf8
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 00431b51 | DAT_007bfab8
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00430950 ; 00431b55
        ;   XREF to: 00430950 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexBottomClip_FUN_00430950()
    ADD ESP,0xc                         ; 00431b5a
    JMP 0x00431790                      ; 00431b5d
        ;   XREF to: 00431790 (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV EDI,dword ptr [0x007bee30]      ; 00431b62 | DAT_007bee30
        ;   Label: LAB_00431b62
    TEST EDI,EDI                        ; 00431b68
    JLE 0x00431b8d                      ; 00431b6a
        ;   XREF to: 00431b8d (CONDITIONAL_JUMP)  ; LAB_00431b8d
    LEA ECX,[EDI*0x4 + 0x0]             ; 00431b6c
    SUB ECX,EDI                         ; 00431b73
    XOR EAX,EAX                         ; 00431b75
    SHL ECX,0x4                         ; 00431b77
    MOV ESI,dword ptr [EAX + 0x7bee3c]  ; 00431b7a | DAT_007bee3c | DAT_007bee6c
        ;   Label: LAB_00431b7a
    CMP EBX,ESI                         ; 00431b80
    JGE 0x00431b86                      ; 00431b82
        ;   XREF to: 00431b86 (CONDITIONAL_JUMP)  ; LAB_00431b86
    MOV EBX,ESI                         ; 00431b84
    ADD EAX,0x30                        ; 00431b86
        ;   Label: LAB_00431b86
    CMP EAX,ECX                         ; 00431b89
    JL 0x00431b7a                       ; 00431b8b
        ;   XREF to: 00431b7a (CONDITIONAL_JUMP)  ; LAB_00431b7a
    CMP EBX,dword ptr [0x00609b34]      ; 00431b8d | DAT_00609b34
        ;   Label: LAB_00431b8d
    JL 0x00431830                       ; 00431b93
        ;   XREF to: 00431830 (CONDITIONAL_JUMP)  ; LAB_00431830
    MOV EAX,[0x007bee30]                ; 00431b99 | DAT_007bee30
    MOV [0x007bf4b4],EAX                ; 00431b9e | DAT_007bf4b4
    LEA ECX,[EAX*0x4 + 0x0]             ; 00431ba3
    MOV ESI,0x7bee34                    ; 00431baa | DAT_007bee34
    SUB ECX,EAX                         ; 00431baf
    MOV EDI,0x7bf4b8                    ; 00431bb1 | DAT_007bf4b8
    SHL ECX,0x4                         ; 00431bb6
    TEST EDI,0x7                        ; 00431bb9
    JZ 0x00431bc7                       ; 00431bbf
        ;   XREF to: 00431bc7 (CONDITIONAL_JUMP)  ; LAB_00431bc7
    MOVSD ES:EDI,ESI                    ; 00431bc1 | DAT_007bee34 | DAT_007bf4b8
    SUB ECX,0x4                         ; 00431bc2
    JLE 0x00431be4                      ; 00431bc5
        ;   XREF to: 00431be4 (CONDITIONAL_JUMP)  ; LAB_00431be4
    SUB ECX,0x8                         ; 00431bc7
        ;   Label: LAB_00431bc7
    JL 0x00431bd8                       ; 00431bca
        ;   XREF to: 00431bd8 (CONDITIONAL_JUMP)  ; LAB_00431bd8
    FILD qword ptr [ESI]                ; 00431bcc | DAT_007bee34
    ADD ESI,0x8                         ; 00431bce
    FISTP qword ptr [EDI]               ; 00431bd1 | DAT_007bf4b8
    ADD EDI,0x8                         ; 00431bd3
    JMP 0x00431bc7                      ; 00431bd6
        ;   XREF to: 00431bc7 (UNCONDITIONAL_JUMP)  ; LAB_00431bc7
    ADD ECX,0x8                         ; 00431bd8
        ;   Label: LAB_00431bd8
    JLE 0x00431be4                      ; 00431bdb
        ;   XREF to: 00431be4 (CONDITIONAL_JUMP)  ; LAB_00431be4
    MOVSD ES:EDI,ESI                    ; 00431bdd | DAT_007bee34 | DAT_007bf4b8
    SUB ECX,0x4                         ; 00431bde
    JLE 0x00431be4                      ; 00431be1
        ;   XREF to: 00431be4 (CONDITIONAL_JUMP)  ; LAB_00431be4
    MOVSD ES:EDI,ESI                    ; 00431be3 | DAT_007bee38 | DAT_007bf4bc
    XOR EAX,EAX                         ; 00431be4
        ;   Label: LAB_00431be4
    MOV ECX,dword ptr [0x007bf4b4]      ; 00431be6 | DAT_007bf4b4
    MOV [0x007bee30],EAX                ; 00431bec | DAT_007bee30
    MOV dword ptr [ESP + 0x138],EAX     ; 00431bf1
    TEST ECX,ECX                        ; 00431bf8
    JLE 0x00431830                      ; 00431bfa
        ;   XREF to: 00431830 (CONDITIONAL_JUMP)  ; LAB_00431830
    MOV EBP,0x7bf4b8                    ; 00431c00 | DAT_007bf4b8
    MOV EAX,dword ptr [ESP + 0x138]     ; 00431c05
        ;   Label: LAB_00431c05
    MOV ECX,dword ptr [0x007bf4b4]      ; 00431c0c | DAT_007bf4b4
    INC EAX                             ; 00431c12
    CMP EAX,ECX                         ; 00431c13
    JNZ 0x00431c19                      ; 00431c15
        ;   XREF to: 00431c19 (CONDITIONAL_JUMP)  ; LAB_00431c19
    XOR EAX,ECX                         ; 00431c17
    IMUL EAX,EAX,0x30                   ; 00431c19
        ;   Label: LAB_00431c19
    MOV EDX,0x7bf4b8                    ; 00431c1c | DAT_007bf4b8
    MOV ESI,dword ptr [0x00609b34]      ; 00431c21 | DAT_00609b34
    MOV EBX,EBP                         ; 00431c27
    MOV ECX,dword ptr [EBP + 0x8]       ; 00431c29 | DAT_007bf4c0 | DAT_007bf4f0
    ADD EDX,EAX                         ; 00431c2c
    XOR EAX,EAX                         ; 00431c2e
    CMP ECX,ESI                         ; 00431c30
    JL 0x00431c39                       ; 00431c32
        ;   XREF to: 00431c39 (CONDITIONAL_JUMP)  ; LAB_00431c39
    MOV EAX,0x1                         ; 00431c34
    MOV EDI,dword ptr [0x00609b34]      ; 00431c39 | DAT_00609b34
        ;   Label: LAB_00431c39
    CMP EDI,dword ptr [EDX + 0x8]       ; 00431c3f | DAT_007bf4c0
    JG 0x00431c46                       ; 00431c42
        ;   XREF to: 00431c46 (CONDITIONAL_JUMP)  ; LAB_00431c46
    OR AL,0x2                           ; 00431c44
    CMP EAX,0x3                         ; 00431c46
        ;   Label: LAB_00431c46
    JA 0x00431c97                       ; 00431c49
        ;   XREF to: 00431c97 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43131c]  ; 00431c4b | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007bee30],0x30 ; 00431c52 | DAT_007bee30
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00431c59
    ADD EDI,0x7bee34                    ; 00431c5e | DAT_007bee34
    MOV ESI,EBX                         ; 00431c64
    TEST EDI,0x7                        ; 00431c66
    JZ 0x00431c74                       ; 00431c6c
        ;   XREF to: 00431c74 (CONDITIONAL_JUMP)  ; LAB_00431c74
    MOVSD ES:EDI,ESI                    ; 00431c6e | DAT_007bf4e8 | DAT_007bee34
    SUB ECX,0x4                         ; 00431c6f
    JLE 0x00431c91                      ; 00431c72
        ;   XREF to: 00431c91 (CONDITIONAL_JUMP)  ; LAB_00431c91
    SUB ECX,0x8                         ; 00431c74
        ;   Label: LAB_00431c74
    JL 0x00431c85                       ; 00431c77
        ;   XREF to: 00431c85 (CONDITIONAL_JUMP)  ; LAB_00431c85
    FILD qword ptr [ESI]                ; 00431c79 | DAT_007bf4e8+4 | DAT_007bf4f4
    ADD ESI,0x8                         ; 00431c7b
    FISTP qword ptr [EDI]               ; 00431c7e | DAT_007bee38 | DAT_007bee40 | DAT_007bee34
    ADD EDI,0x8                         ; 00431c80
    JMP 0x00431c74                      ; 00431c83
        ;   XREF to: 00431c74 (UNCONDITIONAL_JUMP)  ; LAB_00431c74
    ADD ECX,0x8                         ; 00431c85
        ;   Label: LAB_00431c85
    JLE 0x00431c91                      ; 00431c88
        ;   XREF to: 00431c91 (CONDITIONAL_JUMP)  ; LAB_00431c91
    MOVSD ES:EDI,ESI                    ; 00431c8a | DAT_007bf4f4 | DAT_007bee40
    SUB ECX,0x4                         ; 00431c8b
    JLE 0x00431c91                      ; 00431c8e
        ;   XREF to: 00431c91 (CONDITIONAL_JUMP)  ; LAB_00431c91
    MOVSD ES:EDI,ESI                    ; 00431c90 | DAT_007bf4f8 | DAT_007bee44
    INC dword ptr [0x007bee30]          ; 00431c91 | DAT_007bee30
        ;   Label: LAB_00431c91
    MOV EDI,dword ptr [ESP + 0x138]     ; 00431c97
        ;   Label: caseD_3
    MOV EDX,dword ptr [0x007bf4b4]      ; 00431c9e | DAT_007bf4b4
    INC EDI                             ; 00431ca4
    ADD EBP,0x30                        ; 00431ca5
    MOV dword ptr [ESP + 0x138],EDI     ; 00431ca8
    CMP EDI,EDX                         ; 00431caf
    JGE 0x00431830                      ; 00431cb1
        ;   XREF to: 00431830 (CONDITIONAL_JUMP)  ; LAB_00431830
    JMP 0x00431c05                      ; 00431cb7
        ;   XREF to: 00431c05 (UNCONDITIONAL_JUMP)  ; LAB_00431c05
    IMUL EAX,dword ptr [0x007bee30],0x30 ; 00431cbc | DAT_007bee30
        ;   Label: caseD_1
    ADD EAX,0x7bee34                    ; 00431cc3 | DAT_007bee34
    PUSH EAX                            ; 00431cc8 | DAT_007bee34
    PUSH EBX                            ; 00431cc9 | DAT_007bf4e8
    PUSH EDX                            ; 00431cca
    CALL engine_clipper.c_interpolateVertexFarClip_FUN_00430a50 ; 00431ccb
        ;   XREF to: 00430a50 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexFarClip_FUN_00430a50()
    MOV EBX,dword ptr [0x007bee30]      ; 00431cd0 | DAT_007bee30
    INC EBX                             ; 00431cd6
    ADD ESP,0xc                         ; 00431cd7
    MOV dword ptr [0x007bee30],EBX      ; 00431cda | DAT_007bee30
    JMP 0x00431c97                      ; 00431ce0
        ;   XREF to: 00431c97 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007bee30],0x30 ; 00431ce2 | DAT_007bee30
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 00431ce9
    MOV ESI,EBX                         ; 00431cee
    ADD EDI,0x7bee34                    ; 00431cf0 | DAT_007bee34
    TEST EDI,0x7                        ; 00431cf6
    JZ 0x00431d04                       ; 00431cfc
        ;   XREF to: 00431d04 (CONDITIONAL_JUMP)  ; LAB_00431d04
    MOVSD ES:EDI,ESI                    ; 00431cfe | DAT_007bf4e8 | DAT_007bee34
    SUB ECX,0x4                         ; 00431cff
    JLE 0x00431d21                      ; 00431d02
        ;   XREF to: 00431d21 (CONDITIONAL_JUMP)  ; LAB_00431d21
    SUB ECX,0x8                         ; 00431d04
        ;   Label: LAB_00431d04
    JL 0x00431d15                       ; 00431d07
        ;   XREF to: 00431d15 (CONDITIONAL_JUMP)  ; LAB_00431d15
    FILD qword ptr [ESI]                ; 00431d09 | DAT_007bf4e8+4 | DAT_007bf4f4
    ADD ESI,0x8                         ; 00431d0b
    FISTP qword ptr [EDI]               ; 00431d0e | DAT_007bee38 | DAT_007bee40 | DAT_007bee34
    ADD EDI,0x8                         ; 00431d10
    JMP 0x00431d04                      ; 00431d13
        ;   XREF to: 00431d04 (UNCONDITIONAL_JUMP)  ; LAB_00431d04
    ADD ECX,0x8                         ; 00431d15
        ;   Label: LAB_00431d15
    JLE 0x00431d21                      ; 00431d18
        ;   XREF to: 00431d21 (CONDITIONAL_JUMP)  ; LAB_00431d21
    MOVSD ES:EDI,ESI                    ; 00431d1a | DAT_007bf4f4 | DAT_007bee40
    SUB ECX,0x4                         ; 00431d1b
    JLE 0x00431d21                      ; 00431d1e
        ;   XREF to: 00431d21 (CONDITIONAL_JUMP)  ; LAB_00431d21
    MOVSD ES:EDI,ESI                    ; 00431d20 | DAT_007bf4f8 | DAT_007bee44
    MOV ECX,dword ptr [0x007bee30]      ; 00431d21 | DAT_007bee30
        ;   Label: LAB_00431d21
    INC ECX                             ; 00431d27
    MOV dword ptr [0x007bee30],ECX      ; 00431d28 | DAT_007bee30
    IMUL EAX,ECX,0x30                   ; 00431d2e
    ADD EAX,0x7bee34                    ; 00431d31 | DAT_007bee34
    PUSH EAX                            ; 00431d36 | DAT_007bee64
    PUSH EDX                            ; 00431d37
    PUSH EBX                            ; 00431d38 | DAT_007bf4e8
    CALL engine_clipper.c_interpolateVertexFarClip_FUN_00430a50 ; 00431d39
        ;   XREF to: 00430a50 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexFarClip_FUN_00430a50()
    MOV EDI,dword ptr [0x007bee30]      ; 00431d3e | DAT_007bee30
    INC EDI                             ; 00431d44
    ADD ESP,0xc                         ; 00431d45
    MOV dword ptr [0x007bee30],EDI      ; 00431d48 | DAT_007bee30
    JMP 0x00431c97                      ; 00431d4e
        ;   XREF to: 00431c97 (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV ECX,dword ptr [EAX]             ; 00431d53 | DAT_007bee64
        ;   Label: LAB_00431d53
    CMP ECX,EBX                         ; 00431d55
    JLE 0x00431d60                      ; 00431d57
        ;   XREF to: 00431d60 (CONDITIONAL_JUMP)  ; LAB_00431d60
    MOV dword ptr [EAX],EBX             ; 00431d59 | DAT_007bee64
    JMP 0x00431861                      ; 00431d5b
        ;   XREF to: 00431861 (UNCONDITIONAL_JUMP)  ; LAB_00431861
    NEG EBX                             ; 00431d60
        ;   Label: LAB_00431d60
    CMP EBX,ECX                         ; 00431d62
    JLE 0x00431d6d                      ; 00431d64
        ;   XREF to: 00431d6d (CONDITIONAL_JUMP)  ; LAB_00431d6d
    MOV dword ptr [EAX],EBX             ; 00431d66 | DAT_007bee64
    JMP 0x00431861                      ; 00431d68
        ;   XREF to: 00431861 (UNCONDITIONAL_JUMP)  ; LAB_00431861
    MOV EBP,dword ptr [EAX + 0x8]       ; 00431d6d | DAT_007bee6c
        ;   Label: LAB_00431d6d
    MOV ECX,dword ptr [EAX + 0x4]       ; 00431d70 | DAT_007bee68
    CMP ECX,EBP                         ; 00431d73
    JLE 0x00431d7f                      ; 00431d75
        ;   XREF to: 00431d7f (CONDITIONAL_JUMP)  ; LAB_00431d7f
    MOV dword ptr [EAX + 0x4],EBP       ; 00431d77 | DAT_007bee68
    JMP 0x00431861                      ; 00431d7a
        ;   XREF to: 00431861 (UNCONDITIONAL_JUMP)  ; LAB_00431861
    CMP EBX,ECX                         ; 00431d7f
        ;   Label: LAB_00431d7f
    JLE 0x00431861                      ; 00431d81
        ;   XREF to: 00431861 (CONDITIONAL_JUMP)  ; LAB_00431861
    JMP 0x0043185e                      ; 00431d87
        ;   XREF to: 0043185e (UNCONDITIONAL_JUMP)  ; LAB_0043185e

