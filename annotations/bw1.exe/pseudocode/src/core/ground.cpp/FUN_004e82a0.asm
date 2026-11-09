; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ground_cpp_FUN_004e82a0(int *param_1,uint param_2,uint param_3)
;
;
; Called Functions:
;   engine_matrix.c_normalizeVector3DFloat_FUN_00508780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e82a0
        ;   Label: core_ground.cpp_FUN_004e82a0
    PUSH EDI                            ; 004e82a1
    PUSH EBP                            ; 004e82a2
    SUB ESP,0x54                        ; 004e82a3
    MOV EDI,dword ptr [ESP + 0x6c]      ; 004e82a6
    MOV EBP,ESI                         ; 004e82aa
    MOV ESI,dword ptr [ESP + 0x64]      ; 004e82ac
    MOV EBX,dword ptr [ESI + 0x1c]      ; 004e82b0
    SHL EBX,0x8                         ; 004e82b3
    LEA EAX,[EBX + -0x1]                ; 004e82b6
    MOV EDX,0x10000                     ; 004e82b9
    AND EAX,EDI                         ; 004e82be
    IMUL EDX                            ; 004e82c0
    IDIV EBX                            ; 004e82c2
    MOV EBX,dword ptr [ESI + 0x1c]      ; 004e82c4
    MOV EDX,dword ptr [ESP + 0x68]      ; 004e82c7
    SHL EBX,0x8                         ; 004e82cb
    MOV dword ptr [ESP + 0x4c],EAX      ; 004e82ce
    LEA EAX,[EBX + -0x1]                ; 004e82d2
    AND EAX,EDX                         ; 004e82d5
    MOV EDX,0x10000                     ; 004e82d7
    IMUL EDX                            ; 004e82dc
    IDIV EBX                            ; 004e82de
    MOV dword ptr [ESP + 0x50],EAX      ; 004e82e0
    MOV ECX,dword ptr [ESI + 0x1c]      ; 004e82e4
    XOR EDX,EDX                         ; 004e82e7
    SHL ECX,0x8                         ; 004e82e9
    MOV EAX,EDI                         ; 004e82ec
    DIV ECX                             ; 004e82ee
    MOV EDI,dword ptr [ESI + 0x8]       ; 004e82f0
    AND EDI,EAX                         ; 004e82f3
    XOR EDX,EDX                         ; 004e82f5
    MOV EAX,dword ptr [ESP + 0x68]      ; 004e82f7
    DIV ECX                             ; 004e82fb
    MOV EDX,EDI                         ; 004e82fd
    MOV ECX,dword ptr [ESI + 0xc]       ; 004e82ff
    AND EDX,0x1                         ; 004e8302
    AND EAX,ECX                         ; 004e8305
    MOV dword ptr [ESP + 0x44],EDX      ; 004e8307
    MOV EDX,EAX                         ; 004e830b
    MOV EBX,dword ptr [ESP + 0x44]      ; 004e830d
    AND EDX,0x1                         ; 004e8311
    LEA ECX,[EAX + 0x1]                 ; 004e8314
    MOV dword ptr [ESP + 0x44],EDX      ; 004e8317
    LEA EDX,[EDI + 0x1]                 ; 004e831b
    CMP EBX,dword ptr [ESP + 0x44]      ; 004e831e
    JNZ 0x004e844a                      ; 004e8322
        ;   XREF to: 004e844a (CONDITIONAL_JUMP)  ; LAB_004e844a
    MOV EBX,dword ptr [ESP + 0x4c]      ; 004e8328
    CMP EBX,dword ptr [ESP + 0x50]      ; 004e832c
    JLE 0x004e83c2                      ; 004e8330
        ;   XREF to: 004e83c2 (CONDITIONAL_JUMP)  ; LAB_004e83c2
    MOV EBX,dword ptr [ESI]             ; 004e8336
    IMUL EBX,EAX                        ; 004e8338
    MOV EAX,dword ptr [ESI + 0x24]      ; 004e833b
    MOV dword ptr [ESP + 0x44],EBX      ; 004e833e
    ADD EBX,EDI                         ; 004e8342
    MOVSX EBX,word ptr [EAX + EBX*0x4]  ; 004e8344
    MOV EDI,dword ptr [ESI + 0x20]      ; 004e8348
    IMUL EBX,EDI                        ; 004e834b
    MOV dword ptr [ESP + 0x3c],EBX      ; 004e834e
    MOV EBX,dword ptr [ESI + 0x8]       ; 004e8352
    MOV EDI,dword ptr [ESP + 0x44]      ; 004e8355
    AND EBX,EDX                         ; 004e8359
    ADD EBX,EDI                         ; 004e835b
    MOVSX EBX,word ptr [EAX + EBX*0x4]  ; 004e835d
    IMUL EBX,dword ptr [ESI + 0x20]     ; 004e8361
    AND ECX,dword ptr [ESI + 0xc]       ; 004e8365
    IMUL ECX,dword ptr [ESI]            ; 004e8368
    AND EDX,dword ptr [ESI + 0xc]       ; 004e836b
    ADD EDX,ECX                         ; 004e836e
    MOVSX EAX,word ptr [EAX + EDX*0x4]  ; 004e8370
    MOV EDX,dword ptr [ESI + 0x20]      ; 004e8374
    IMUL EDX,EAX                        ; 004e8377
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004e837a
    SUB EAX,EBX                         ; 004e837e
    MOV dword ptr [ESP + 0x24],EAX      ; 004e8380
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004e8384
    SHL EAX,0x8                         ; 004e8387
    LEA EDI,[ESP + 0x24]                ; 004e838a
    MOV dword ptr [ESP + 0x28],EAX      ; 004e838e
    LEA EAX,[ESP + 0x24]                ; 004e8392
    SUB EBX,EDX                         ; 004e8396
    PUSH EAX                            ; 004e8398
    LEA ESI,[ESP + 0x10]                ; 004e8399
    MOV dword ptr [ESP + 0x30],EBX      ; 004e839d
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_00508780 ; 004e83a1
        ;   XREF to: 00508780 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_normalizeVector3DFloat_FUN_00508780()
    LEA ESI,[ESP + 0x10]                ; 004e83a6
    ADD ESP,0x4                         ; 004e83aa
        ;   Label: LAB_004e83aa
    MOVSD ES:EDI,ESI                    ; 004e83ad
    MOVSD ES:EDI,ESI                    ; 004e83ae
    MOVSD ES:EDI,ESI                    ; 004e83af
    LEA ESI,[ESP + 0x24]                ; 004e83b0
    MOV EDI,EBP                         ; 004e83b4
    MOVSD ES:EDI,ESI                    ; 004e83b6
    MOVSD ES:EDI,ESI                    ; 004e83b7
    MOVSD ES:EDI,ESI                    ; 004e83b8
    MOV EAX,EBP                         ; 004e83b9
    ADD ESP,0x54                        ; 004e83bb
    POP EBP                             ; 004e83be
    POP EDI                             ; 004e83bf
    POP EBX                             ; 004e83c0
    RET                                 ; 004e83c1
    IMUL EAX,dword ptr [ESI]            ; 004e83c2
        ;   Label: LAB_004e83c2
    ADD EAX,EDI                         ; 004e83c5
    MOV EBX,dword ptr [ESI + 0x24]      ; 004e83c7
    SHL EAX,0x2                         ; 004e83ca
    ADD EAX,EBX                         ; 004e83cd
    MOV dword ptr [ESP + 0x44],EBX      ; 004e83cf
    MOVSX EAX,word ptr [EAX]            ; 004e83d3
    MOV EBX,dword ptr [ESI + 0x20]      ; 004e83d6
    IMUL EAX,EBX                        ; 004e83d9
    MOV dword ptr [ESP + 0x3c],EAX      ; 004e83dc
    MOV EAX,dword ptr [ESI + 0xc]       ; 004e83e0
    AND EAX,ECX                         ; 004e83e3
    IMUL EAX,dword ptr [ESI]            ; 004e83e5
    AND EDX,dword ptr [ESI + 0x8]       ; 004e83e8
    ADD EDX,EAX                         ; 004e83eb
    MOV ECX,dword ptr [ESP + 0x44]      ; 004e83ed
    SHL EDX,0x2                         ; 004e83f1
    ADD EDX,ECX                         ; 004e83f4
    MOVSX EDX,word ptr [EDX]            ; 004e83f6
    MOV ECX,dword ptr [ESI + 0x20]      ; 004e83f9
    IMUL ECX,EDX                        ; 004e83fc
    ADD EAX,EDI                         ; 004e83ff
    MOV EBX,dword ptr [ESP + 0x44]      ; 004e8401
    SHL EAX,0x2                         ; 004e8405
    ADD EAX,EBX                         ; 004e8408
    MOV EDI,dword ptr [ESI + 0x20]      ; 004e840a
    MOVSX EDX,word ptr [EAX]            ; 004e840d
    IMUL EDX,EDI                        ; 004e8410
    MOV EAX,EDX                         ; 004e8413
    SUB EAX,ECX                         ; 004e8415
    MOV dword ptr [ESP + 0x24],EAX      ; 004e8417
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004e841b
    SHL EAX,0x8                         ; 004e841e
    MOV dword ptr [ESP + 0x28],EAX      ; 004e8421
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004e8425
    SUB EAX,EDX                         ; 004e8429
    MOV dword ptr [ESP + 0x2c],EAX      ; 004e842b
    LEA EAX,[ESP + 0x24]                ; 004e842f
    PUSH EAX                            ; 004e8433
    LEA ESI,[ESP + 0x34]                ; 004e8434
    LEA EDI,[ESP + 0x28]                ; 004e8438
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_00508780 ; 004e843c
        ;   XREF to: 00508780 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_normalizeVector3DFloat_FUN_00508780()
    LEA ESI,[ESP + 0x34]                ; 004e8441
    JMP 0x004e83aa                      ; 004e8445
        ;   XREF to: 004e83aa (UNCONDITIONAL_JUMP)  ; LAB_004e83aa
    MOV EBX,0x10000                     ; 004e844a
        ;   Label: LAB_004e844a
    SUB EBX,dword ptr [ESP + 0x4c]      ; 004e844f
    CMP EBX,dword ptr [ESP + 0x50]      ; 004e8453
    JLE 0x004e84f0                      ; 004e8457
        ;   XREF to: 004e84f0 (CONDITIONAL_JUMP)  ; LAB_004e84f0
    MOV EBX,dword ptr [ESI]             ; 004e845d
    IMUL EBX,EAX                        ; 004e845f
    MOV dword ptr [ESP + 0x44],EBX      ; 004e8462
    LEA EAX,[EBX + EDI*0x1]             ; 004e8466
    SHL EAX,0x2                         ; 004e8469
    MOV EBX,dword ptr [ESI + 0x24]      ; 004e846c
    ADD EAX,EBX                         ; 004e846f
    MOV dword ptr [ESP + 0x48],EBX      ; 004e8471
    MOVSX EAX,word ptr [EAX]            ; 004e8475
    MOV EBX,dword ptr [ESI + 0x20]      ; 004e8478
    IMUL EBX,EAX                        ; 004e847b
    AND EDX,dword ptr [ESI + 0x8]       ; 004e847e
    ADD EDX,dword ptr [ESP + 0x44]      ; 004e8481
    MOV EAX,dword ptr [ESP + 0x48]      ; 004e8485
    SHL EDX,0x2                         ; 004e8489
    ADD EDX,EAX                         ; 004e848c
    MOVSX EAX,word ptr [EDX]            ; 004e848e
    MOV EDX,dword ptr [ESI + 0x20]      ; 004e8491
    IMUL EAX,EDX                        ; 004e8494
    MOV dword ptr [ESP + 0x40],EAX      ; 004e8497
    MOV EAX,dword ptr [ESI + 0xc]       ; 004e849b
    MOV EDX,dword ptr [ESI]             ; 004e849e
    AND ECX,EAX                         ; 004e84a0
    IMUL ECX,EDX                        ; 004e84a2
    ADD EDI,ECX                         ; 004e84a5
    MOV ECX,dword ptr [ESP + 0x48]      ; 004e84a7
    SHL EDI,0x2                         ; 004e84ab
    ADD EDI,ECX                         ; 004e84ae
    MOV EDX,dword ptr [ESI + 0x20]      ; 004e84b0
    MOVSX EAX,word ptr [EDI]            ; 004e84b3
    IMUL EDX,EAX                        ; 004e84b6
    MOV EDI,dword ptr [ESP + 0x40]      ; 004e84b9
    MOV EAX,EBX                         ; 004e84bd
    SUB EAX,EDI                         ; 004e84bf
    MOV dword ptr [ESP + 0x24],EAX      ; 004e84c1
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004e84c5
    SHL EAX,0x8                         ; 004e84c8
    SUB EBX,EDX                         ; 004e84cb
    MOV dword ptr [ESP + 0x28],EAX      ; 004e84cd
    LEA EAX,[ESP + 0x24]                ; 004e84d1
    LEA EDI,[ESP + 0x24]                ; 004e84d5
    PUSH EAX                            ; 004e84d9
    LEA ESI,[ESP + 0x4]                 ; 004e84da
    MOV dword ptr [ESP + 0x30],EBX      ; 004e84de
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_00508780 ; 004e84e2
        ;   XREF to: 00508780 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_normalizeVector3DFloat_FUN_00508780()
    LEA ESI,[ESP + 0x4]                 ; 004e84e7
    JMP 0x004e83aa                      ; 004e84eb
        ;   XREF to: 004e83aa (UNCONDITIONAL_JUMP)  ; LAB_004e83aa
    MOV EBX,dword ptr [ESI + 0x8]       ; 004e84f0
        ;   Label: LAB_004e84f0
    AND EBX,EDX                         ; 004e84f3
    MOV dword ptr [ESP + 0x48],EBX      ; 004e84f5
    IMUL EAX,dword ptr [ESI]            ; 004e84f9
    ADD EAX,dword ptr [ESP + 0x48]      ; 004e84fc
    LEA EDX,[EAX*0x4 + 0x0]             ; 004e8500
    MOV EAX,dword ptr [ESI + 0x24]      ; 004e8507
    MOV EBX,dword ptr [ESI + 0x20]      ; 004e850a
    MOVSX EDX,word ptr [EDX + EAX*0x1]  ; 004e850d
    IMUL EBX,EDX                        ; 004e8511
    MOV dword ptr [ESP + 0x40],EBX      ; 004e8514
    MOV EBX,dword ptr [ESI + 0xc]       ; 004e8518
    MOV EDX,dword ptr [ESI]             ; 004e851b
    AND ECX,EBX                         ; 004e851d
    IMUL ECX,EDX                        ; 004e851f
    MOV EDX,dword ptr [ESP + 0x48]      ; 004e8522
    ADD EDX,ECX                         ; 004e8526
    MOV EBX,dword ptr [ESI + 0x20]      ; 004e8528
    MOVSX EDX,word ptr [EAX + EDX*0x4]  ; 004e852b
    IMUL EDX,EBX                        ; 004e852f
    ADD ECX,EDI                         ; 004e8532
    MOVSX EAX,word ptr [EAX + ECX*0x4]  ; 004e8534
    IMUL EAX,EBX                        ; 004e8538
    SUB EAX,EDX                         ; 004e853b
    MOV dword ptr [ESP + 0x24],EAX      ; 004e853d
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004e8541
    SHL EAX,0x8                         ; 004e8544
    MOV dword ptr [ESP + 0x28],EAX      ; 004e8547
    MOV EAX,dword ptr [ESP + 0x40]      ; 004e854b
    SUB EAX,EDX                         ; 004e854f
    MOV dword ptr [ESP + 0x2c],EAX      ; 004e8551
    LEA EAX,[ESP + 0x24]                ; 004e8555
    PUSH EAX                            ; 004e8559
    LEA ESI,[ESP + 0x1c]                ; 004e855a
    LEA EDI,[ESP + 0x28]                ; 004e855e
    CALL engine_matrix.c_normalizeVector3DFloat_FUN_00508780 ; 004e8562
        ;   XREF to: 00508780 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_normalizeVector3DFloat_FUN_00508780()
    LEA ESI,[ESP + 0x1c]                ; 004e8567
    JMP 0x004e83aa                      ; 004e856b
        ;   XREF to: 004e83aa (UNCONDITIONAL_JUMP)  ; LAB_004e83aa

