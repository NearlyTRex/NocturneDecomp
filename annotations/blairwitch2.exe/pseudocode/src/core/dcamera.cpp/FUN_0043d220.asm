; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043d220(int param_1,int param_2,int *param_3)
;
; Local Variables:
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
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
;
; XREF[1]:
;   FUN_0052ddf0 at 0052e7ca
;
; Referenced Globals:
;   undefined4 s_movscrn_raw_005ce3d5+1
;   TerminatedCString s_core_dcamera_cpp_005ce3e2
;   TerminatedCString s_CDemonCamera_precomputeL_005ce3f6
;   undefined4 DAT_0083c7d4
;   undefined4 DAT_00b667a4
;   undefined4 DAT_0126e7a8
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_0043cbe0
;   FUN_0044a810
;   FUN_0044cf50
;   FUN_004e4500
;   FUN_005b8c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043d220
        ;   Label: FUN_0043d220
    PUSH ESI                            ; 0043d221
    PUSH EDI                            ; 0043d222
    PUSH EBP                            ; 0043d223
    MOV EBP,ESP                         ; 0043d224
    SUB ESP,0x6c                        ; 0043d226
    AND ESP,0xfffffff8                  ; 0043d229
    MOV EBX,dword ptr [EBP + 0x18]      ; 0043d22c
    MOV EDX,0x80                        ; 0043d22f
    PUSH 0x5ce3d6                       ; 0043d234 | s_movscrn_raw_005ce3d5+1
    LEA EAX,[EBX + 0x1c74]              ; 0043d239
    XOR ECX,ECX                         ; 0043d23f
    PUSH EAX                            ; 0043d241
    MOV dword ptr [ESP + 0x48],EDX      ; 0043d242
    MOV dword ptr [ESP + 0x4c],ECX      ; 0043d246
    CALL FUN_005b8c30                   ; 0043d24a
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8c30()
    ADD ESP,0x8                         ; 0043d24f
    TEST EAX,EAX                        ; 0043d252
    JZ 0x0043d54a                       ; 0043d254
        ;   XREF to: 0043d54a (CONDITIONAL_JUMP)  ; LAB_0043d54a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0043d25a
        ;   Label: LAB_0043d25a
    TEST EAX,EAX                        ; 0043d25d
    JNZ 0x0043d26b                      ; 0043d25f
        ;   XREF to: 0043d26b (CONDITIONAL_JUMP)  ; LAB_0043d26b
    MOV [0x0126e7a8],EAX                ; 0043d261 | DAT_0126e7a8
    MOV [0x00b667a4],EAX                ; 0043d266 | DAT_00b667a4
    MOV ESI,dword ptr [0x00b667a4]      ; 0043d26b | DAT_00b667a4
        ;   Label: LAB_0043d26b
    LEA EAX,[ESI*0x4 + 0x0]             ; 0043d271
    ADD EAX,ESI                         ; 0043d278
    SHL EAX,0xc                         ; 0043d27a
    MOV ESI,EAX                         ; 0043d27d
    SHL EAX,0x4                         ; 0043d27f
    SUB EAX,ESI                         ; 0043d282
    MOV ESI,dword ptr [0x00b667a4]      ; 0043d284 | DAT_00b667a4
    INC ESI                             ; 0043d28a
    ADD EAX,0xb667a8                    ; 0043d28b
    MOV dword ptr [0x00b667a4],ESI      ; 0043d290 | DAT_00b667a4
    CMP ESI,0x18                        ; 0043d296
    JBE 0x0043d29d                      ; 0043d299
        ;   XREF to: 0043d29d (CONDITIONAL_JUMP)  ; LAB_0043d29d
    XOR EAX,EAX                         ; 0043d29b
    MOV ESI,dword ptr [0x00b667a4]      ; 0043d29d | DAT_00b667a4
        ;   Label: LAB_0043d29d
    MOV dword ptr [EBX + 0x1c48],EAX    ; 0043d2a3
    LEA EAX,[ESI*0x4 + 0x0]             ; 0043d2a9
    ADD EAX,ESI                         ; 0043d2b0
    SHL EAX,0xc                         ; 0043d2b2
    MOV EDX,dword ptr [0x00b667a4]      ; 0043d2b5 | DAT_00b667a4
    MOV ESI,EAX                         ; 0043d2bb
    SHL EAX,0x4                         ; 0043d2bd
    INC EDX                             ; 0043d2c0
    SUB EAX,ESI                         ; 0043d2c1
    MOV dword ptr [0x00b667a4],EDX      ; 0043d2c3 | DAT_00b667a4
    ADD EAX,0xb667a8                    ; 0043d2c9
    CMP EDX,0x18                        ; 0043d2ce
    JBE 0x0043d2d5                      ; 0043d2d1
        ;   XREF to: 0043d2d5 (CONDITIONAL_JUMP)  ; LAB_0043d2d5
    XOR EAX,EAX                         ; 0043d2d3
    MOV ESI,dword ptr [0x00b667a4]      ; 0043d2d5 | DAT_00b667a4
        ;   Label: LAB_0043d2d5
    MOV dword ptr [EBX + 0x1c4c],EAX    ; 0043d2db
    LEA EAX,[ESI*0x4 + 0x0]             ; 0043d2e1
    ADD EAX,ESI                         ; 0043d2e8
    SHL EAX,0xc                         ; 0043d2ea
    MOV ESI,EAX                         ; 0043d2ed
    SHL EAX,0x4                         ; 0043d2ef
    SUB EAX,ESI                         ; 0043d2f2
    MOV ESI,dword ptr [0x00b667a4]      ; 0043d2f4 | DAT_00b667a4
    INC ESI                             ; 0043d2fa
    ADD EAX,0xb667a8                    ; 0043d2fb
    MOV dword ptr [0x00b667a4],ESI      ; 0043d300 | DAT_00b667a4
    CMP ESI,0x18                        ; 0043d306
    JBE 0x0043d30d                      ; 0043d309
        ;   XREF to: 0043d30d (CONDITIONAL_JUMP)  ; LAB_0043d30d
    XOR EAX,EAX                         ; 0043d30b
    MOV dword ptr [EBX + 0x1c50],EAX    ; 0043d30d
        ;   Label: LAB_0043d30d
    CMP dword ptr [EBX + 0x1c48],0x0    ; 0043d313
    JNZ 0x0043d561                      ; 0043d31a
        ;   XREF to: 0043d561 (CONDITIONAL_JUMP)  ; LAB_0043d561
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043d320
        ;   Label: LAB_0043d320
    ADD EAX,0x40                        ; 0043d323
    PUSH EAX                            ; 0043d326
    MOV ESI,0x5ce3e2                    ; 0043d327 | = "..\\core\\dcamera.cpp"
    MOV EDI,0x6c6                       ; 0043d32c
    PUSH 0x5ce3f6                       ; 0043d331 | = "CDemonCamera::precomputeLight - Too m..."
    MOV dword ptr [0x01d046a0],ESI      ; 0043d336 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0043d33c | DAT_01d046a4
    CALL FUN_004e4500                   ; 0043d342
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 0043d347
    PUSH EBX                            ; 0043d34a
        ;   Label: LAB_0043d34a
    CALL FUN_0044cf50                   ; 0043d34b
        ;   XREF to: 0044cf50 (UNCONDITIONAL_CALL)  ; undefined FUN_0044cf50()
    ADD ESP,0x4                         ; 0043d350
    CMP dword ptr [EBP + 0x1c],0x0      ; 0043d353
    JNZ 0x0043d580                      ; 0043d357
        ;   XREF to: 0043d580 (CONDITIONAL_JUMP)  ; LAB_0043d580
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043d35d
        ;   Label: LAB_0043d35d
    MOV EAX,dword ptr [EAX + 0x150]     ; 0043d360
    DEC EAX                             ; 0043d366
    MOV dword ptr [ESP + 0x4],EAX       ; 0043d367
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043d36b
    XOR ESI,ESI                         ; 0043d36e
    MOV EAX,dword ptr [EAX + 0x154]     ; 0043d370
    MOV dword ptr [ESP + 0x8],ESI       ; 0043d376
    DEC EAX                             ; 0043d37a
    MOV dword ptr [ESP],ESI             ; 0043d37b
    MOV dword ptr [ESP + 0xc],EAX       ; 0043d37e
    LEA EAX,[EAX]                       ; 0043d382
    LEA EDX,[EDX]                       ; 0043d388
    MOV EAX,EAX                         ; 0043d38e
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043d390
        ;   Label: LAB_0043d390
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043d394
    MOV dword ptr [ESP + 0x54],EAX      ; 0043d398
    CMP EAX,EDX                         ; 0043d39c
    JG 0x0043d543                       ; 0043d39e
        ;   XREF to: 0043d543 (CONDITIONAL_JUMP)  ; LAB_0043d543
    MOV ESI,dword ptr [ESP]             ; 0043d3a4
    LEA EAX,[ESI*0x4 + 0x0]             ; 0043d3a7
    SUB EAX,ESI                         ; 0043d3ae
    SHL EAX,0x2                         ; 0043d3b0
    MOV dword ptr [ESP + 0x28],EAX      ; 0043d3b3
    LEA EAX,[ESI*0x4 + 0x0]             ; 0043d3b7
    MOV ESI,dword ptr [ESP + 0x8]       ; 0043d3be
    MOV dword ptr [ESP + 0x34],EAX      ; 0043d3c2
    LEA EAX,[ESI*0x4 + 0x0]             ; 0043d3c6
    ADD EAX,ESI                         ; 0043d3cd
    SHL EAX,0x8                         ; 0043d3cf
    SHL ESI,0x8                         ; 0043d3d2
    MOV dword ptr [ESP + 0x3c],EAX      ; 0043d3d5
    MOV EAX,ESI                         ; 0043d3d9
    SHL EAX,0x4                         ; 0043d3db
    SUB EAX,ESI                         ; 0043d3de
    MOV ESI,EAX                         ; 0043d3e0
    ADD EAX,0x83c7d4                    ; 0043d3e2 | DAT_0083c7d4
    MOV dword ptr [ESP + 0x30],EAX      ; 0043d3e7
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043d3eb
    SHL EAX,0x2                         ; 0043d3ef
    ADD ESI,0xa005d4                    ; 0043d3f2
    ADD EAX,EBX                         ; 0043d3f8
    MOV dword ptr [ESP + 0x2c],ESI      ; 0043d3fa
    MOV dword ptr [ESP + 0x38],EAX      ; 0043d3fe
    MOV EAX,dword ptr [ESP + 0x30]      ; 0043d402
        ;   Label: LAB_0043d402
    MOV EDX,dword ptr [ESP + 0x28]      ; 0043d406
    ADD EAX,EDX                         ; 0043d40a
    MOV ESI,0x3e7                       ; 0043d40c
    MOV dword ptr [ESP + 0x50],EAX      ; 0043d411
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0043d415
    MOV dword ptr [ESP + 0x4c],ESI      ; 0043d419
    ADD EAX,EDX                         ; 0043d41d
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0043d41f
    MOV dword ptr [ESP + 0x58],EAX      ; 0043d423
    MOV EAX,dword ptr [EBX + 0x1c48]    ; 0043d427
    MOV EDX,dword ptr [ESP + 0x34]      ; 0043d42d
    ADD EAX,ESI                         ; 0043d431
    ADD EDX,EAX                         ; 0043d433
    MOV dword ptr [ESP + 0x60],EDX      ; 0043d435
    MOV EAX,dword ptr [EBX + 0x1c4c]    ; 0043d439
    MOV EDX,dword ptr [ESP + 0x34]      ; 0043d43f
    ADD EAX,ESI                         ; 0043d443
    MOV ECX,dword ptr [ESP + 0x4]       ; 0043d445
    ADD EDX,EAX                         ; 0043d449
    XOR EDI,EDI                         ; 0043d44b
    MOV dword ptr [ESP + 0x64],EDX      ; 0043d44d
    MOV EAX,dword ptr [EBX + 0x1c50]    ; 0043d451
    MOV EDX,dword ptr [ESP + 0x34]      ; 0043d457
    ADD EAX,ESI                         ; 0043d45b
    MOV dword ptr [ESP + 0x48],EDI      ; 0043d45d
    ADD EDX,EAX                         ; 0043d461
    MOV EAX,dword ptr [ESP]             ; 0043d463
    MOV dword ptr [ESP + 0x5c],EDX      ; 0043d466
    MOV dword ptr [ESP + 0x68],EAX      ; 0043d46a
    CMP EAX,ECX                         ; 0043d46e
    JG 0x0043d4e5                       ; 0043d470
        ;   XREF to: 0043d4e5 (CONDITIONAL_JUMP)  ; LAB_0043d4e5
    MOV EAX,dword ptr [ESP + 0x68]      ; 0043d472
        ;   Label: LAB_0043d472
    CMP EAX,0x1                         ; 0043d476
    JGE 0x0043d617                      ; 0043d479
        ;   XREF to: 0043d617 (CONDITIONAL_JUMP)  ; LAB_0043d617
    MOV EAX,dword ptr [ESP + 0x60]      ; 0043d47f
        ;   Label: LAB_0043d47f
    MOV dword ptr [EAX],0x0             ; 0043d483
    MOV EAX,dword ptr [ESP + 0x64]      ; 0043d489
    MOV dword ptr [EAX],0x0             ; 0043d48d
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0043d493
    MOV dword ptr [EAX],0x0             ; 0043d497
        ;   Label: LAB_0043d497
    MOV ESI,dword ptr [ESP + 0x58]      ; 0043d49d
        ;   Label: LAB_0043d49d
    MOV EDI,dword ptr [ESP + 0x50]      ; 0043d4a1
    MOV EAX,dword ptr [ESP + 0x60]      ; 0043d4a5
    MOV EDX,dword ptr [ESP + 0x64]      ; 0043d4a9
    MOV ECX,dword ptr [ESP + 0x5c]      ; 0043d4ad
    ADD ESI,0xc                         ; 0043d4b1
    ADD EDI,0xc                         ; 0043d4b4
    ADD EAX,0x4                         ; 0043d4b7
    ADD EDX,0x4                         ; 0043d4ba
    ADD ECX,0x4                         ; 0043d4bd
    MOV dword ptr [ESP + 0x58],ESI      ; 0043d4c0
    MOV dword ptr [ESP + 0x50],EDI      ; 0043d4c4
    MOV dword ptr [ESP + 0x60],EAX      ; 0043d4c8
    MOV dword ptr [ESP + 0x64],EDX      ; 0043d4cc
    MOV ESI,dword ptr [ESP + 0x68]      ; 0043d4d0
    MOV dword ptr [ESP + 0x5c],ECX      ; 0043d4d4
    INC ESI                             ; 0043d4d8
    MOV EDI,dword ptr [ESP + 0x4]       ; 0043d4d9
    MOV dword ptr [ESP + 0x68],ESI      ; 0043d4dd
    CMP ESI,EDI                         ; 0043d4e1
    JLE 0x0043d472                      ; 0043d4e3
        ;   XREF to: 0043d472 (CONDITIONAL_JUMP)  ; LAB_0043d472
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0043d4e5
        ;   Label: LAB_0043d4e5
    MOV EDX,dword ptr [ESP + 0x38]      ; 0043d4e9
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0043d4ed
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0043d4f1
    MOV EDI,dword ptr [ESP + 0x30]      ; 0043d4f5
    ADD ECX,0x500                       ; 0043d4f9
    ADD ESI,0xf00                       ; 0043d4ff
    ADD EDI,0xf00                       ; 0043d505
    MOV dword ptr [EDX + 0x14c8],EAX    ; 0043d50b
    MOV EAX,dword ptr [ESP + 0x48]      ; 0043d511
    MOV dword ptr [ESP + 0x3c],ECX      ; 0043d515
    MOV dword ptr [ESP + 0x2c],ESI      ; 0043d519
    MOV dword ptr [EDX + 0x1888],EAX    ; 0043d51d
    LEA EAX,[EDX + 0x4]                 ; 0043d523
    MOV dword ptr [ESP + 0x30],EDI      ; 0043d526
    MOV EDX,dword ptr [ESP + 0x54]      ; 0043d52a
    MOV ECX,dword ptr [ESP + 0xc]       ; 0043d52e
    INC EDX                             ; 0043d532
    MOV dword ptr [ESP + 0x38],EAX      ; 0043d533
    MOV dword ptr [ESP + 0x54],EDX      ; 0043d537
    CMP EDX,ECX                         ; 0043d53b
    JLE 0x0043d402                      ; 0043d53d
        ;   XREF to: 0043d402 (CONDITIONAL_JUMP)  ; LAB_0043d402
    MOV ESP,EBP                         ; 0043d543
        ;   Label: LAB_0043d543
    POP EBP                             ; 0043d545
    POP EDI                             ; 0043d546
    POP ESI                             ; 0043d547
    POP EBX                             ; 0043d548
    RET                                 ; 0043d549
    MOV EDI,0x1                         ; 0043d54a
        ;   Label: LAB_0043d54a
    MOV ESI,0x100                       ; 0043d54f
    MOV dword ptr [ESP + 0x44],EDI      ; 0043d554
    MOV dword ptr [ESP + 0x40],ESI      ; 0043d558
    JMP 0x0043d25a                      ; 0043d55c
        ;   XREF to: 0043d25a (UNCONDITIONAL_JUMP)  ; LAB_0043d25a
    CMP dword ptr [EBX + 0x1c4c],0x0    ; 0043d561
        ;   Label: LAB_0043d561
    JZ 0x0043d320                       ; 0043d568
        ;   XREF to: 0043d320 (CONDITIONAL_JUMP)  ; LAB_0043d320
    CMP dword ptr [EBX + 0x1c50],0x0    ; 0043d56e
    JZ 0x0043d320                       ; 0043d575
        ;   XREF to: 0043d320 (CONDITIONAL_JUMP)  ; LAB_0043d320
    JMP 0x0043d34a                      ; 0043d57b
        ;   XREF to: 0043d34a (UNCONDITIONAL_JUMP)  ; LAB_0043d34a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043d580
        ;   Label: LAB_0043d580
    CMP dword ptr [EAX + 0x148],0x1e0   ; 0043d583
    JNZ 0x0043d35d                      ; 0043d58d
        ;   XREF to: 0043d35d (CONDITIONAL_JUMP)  ; LAB_0043d35d
    MOV EDI,ESP                         ; 0043d593
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0043d595
    MOVSD ES:EDI,ESI                    ; 0043d598
    MOVSD ES:EDI,ESI                    ; 0043d599
    MOVSD ES:EDI,ESI                    ; 0043d59a
    MOVSD ES:EDI,ESI                    ; 0043d59b
    MOV ECX,dword ptr [ESP + 0x8]       ; 0043d59c
    XOR ESI,ESI                         ; 0043d5a0
    TEST ECX,ECX                        ; 0043d5a2
    JLE 0x0043d5d0                      ; 0043d5a4
        ;   XREF to: 0043d5d0 (CONDITIONAL_JUMP)  ; LAB_0043d5d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043d5a6
    MOV EAX,EBX                         ; 0043d5aa
    ADD EAX,0x4                         ; 0043d5ac
        ;   Label: LAB_0043d5ac
    MOV dword ptr [EAX + 0x14c4],0x3e7  ; 0043d5af
    INC ESI                             ; 0043d5b9
    MOV dword ptr [EAX + 0x1884],0x0    ; 0043d5ba
    CMP ESI,EDX                         ; 0043d5c4
    JL 0x0043d5ac                       ; 0043d5c6
        ;   XREF to: 0043d5ac (CONDITIONAL_JUMP)  ; LAB_0043d5ac
    LEA EAX,[EAX]                       ; 0043d5c8
    MOV EDX,EDX                         ; 0043d5ce
    MOV ESI,dword ptr [ESP + 0xc]       ; 0043d5d0
        ;   Label: LAB_0043d5d0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043d5d4
    INC ESI                             ; 0043d5d7
    CMP ESI,dword ptr [EAX + 0x154]     ; 0043d5d8
    JGE 0x0043d390                      ; 0043d5de
        ;   XREF to: 0043d390 (CONDITIONAL_JUMP)  ; LAB_0043d390
    LEA EAX,[ESI*0x4 + 0x0]             ; 0043d5e4
    MOV EDX,dword ptr [EBP + 0x14]      ; 0043d5eb
    ADD EAX,EBX                         ; 0043d5ee
    MOV dword ptr [EAX + 0x14c8],0x3e7  ; 0043d5f0
        ;   Label: LAB_0043d5f0
    MOV dword ptr [EAX + 0x1888],0x0    ; 0043d5fa
    INC ESI                             ; 0043d604
    MOV EDI,dword ptr [EDX + 0x154]     ; 0043d605
    ADD EAX,0x4                         ; 0043d60b
    CMP ESI,EDI                         ; 0043d60e
    JL 0x0043d5f0                       ; 0043d610
        ;   XREF to: 0043d5f0 (CONDITIONAL_JUMP)  ; LAB_0043d5f0
    JMP 0x0043d390                      ; 0043d612
        ;   XREF to: 0043d390 (UNCONDITIONAL_JUMP)  ; LAB_0043d390
    MOV EDX,dword ptr [ESP + 0x54]      ; 0043d617
        ;   Label: LAB_0043d617
    CMP EDX,0x1                         ; 0043d61b
    JL 0x0043d47f                       ; 0043d61e
        ;   XREF to: 0043d47f (CONDITIONAL_JUMP)  ; LAB_0043d47f
    MOV ESI,dword ptr [EBP + 0x14]      ; 0043d624
    IMUL EAX,dword ptr [ESI + 0x14c]    ; 0043d627
    MOV ESI,dword ptr [ESI + 0x144]     ; 0043d62e
    SUB ESI,0x2                         ; 0043d634
    CMP EAX,ESI                         ; 0043d637
    JG 0x0043d47f                       ; 0043d639
        ;   XREF to: 0043d47f (CONDITIONAL_JUMP)  ; LAB_0043d47f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043d63f
    MOV ESI,EDX                         ; 0043d642
    IMUL ESI,dword ptr [EAX + 0x14c]    ; 0043d644
    MOV EAX,dword ptr [EAX + 0x148]     ; 0043d64b
    SUB EAX,0x2                         ; 0043d651
    CMP ESI,EAX                         ; 0043d654
    JG 0x0043d47f                       ; 0043d656
        ;   XREF to: 0043d47f (CONDITIONAL_JUMP)  ; LAB_0043d47f
    CMP dword ptr [ESP + 0x44],0x0      ; 0043d65c
    JZ 0x0043d723                       ; 0043d661
        ;   XREF to: 0043d723 (CONDITIONAL_JUMP)  ; LAB_0043d723
    MOV EDX,dword ptr [ESP + 0x50]      ; 0043d667
        ;   Label: LAB_0043d667
    PUSH EDX                            ; 0043d66b
    PUSH EBX                            ; 0043d66c
    LEA ESI,[ESP + 0x18]                ; 0043d66d
    LEA EDI,[ESP + 0x24]                ; 0043d671
    CALL FUN_0043cbe0                   ; 0043d675
        ;   XREF to: 0043cbe0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043cbe0()
    LEA ESI,[ESP + 0x18]                ; 0043d67a
    ADD ESP,0x8                         ; 0043d67e
    MOVSD ES:EDI,ESI                    ; 0043d681
    MOVSD ES:EDI,ESI                    ; 0043d682
    MOVSD ES:EDI,ESI                    ; 0043d683
    MOV ECX,dword ptr [ESP + 0x24]      ; 0043d684
    TEST ECX,ECX                        ; 0043d688
    JLE 0x0043d47f                      ; 0043d68a
        ;   XREF to: 0043d47f (CONDITIONAL_JUMP)  ; LAB_0043d47f
    MOV ESI,dword ptr [ESP + 0x40]      ; 0043d690
    MOV EAX,ECX                         ; 0043d694
    MOV EDI,dword ptr [ESP + 0x54]      ; 0043d696
    SUB EAX,ESI                         ; 0043d69a
    MOV ESI,dword ptr [ESP + 0x60]      ; 0043d69c
    PUSH EDI                            ; 0043d6a0
    MOV dword ptr [ESI],EAX             ; 0043d6a1
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0043d6a3
    PUSH EAX                            ; 0043d6a7
    LEA EAX,[ESP + 0x24]                ; 0043d6a8
    PUSH EAX                            ; 0043d6ac
    PUSH EBX                            ; 0043d6ad
    CALL FUN_0044a810                   ; 0043d6ae
        ;   XREF to: 0044a810 (UNCONDITIONAL_CALL)  ; undefined FUN_0044a810()
    ADD ESP,0x10                        ; 0043d6b3
    MOV ESI,dword ptr [ESP + 0x64]      ; 0043d6b6
    MOV dword ptr [ESI],EAX             ; 0043d6ba
    TEST EAX,EAX                        ; 0043d6bc
    JZ 0x0043d74e                       ; 0043d6be
        ;   XREF to: 0043d74e (CONDITIONAL_JUMP)  ; LAB_0043d74e
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0043d6c4
    MOV CL,byte ptr [EBX + 0x1cc8]      ; 0043d6c8
    SAR ESI,CL                          ; 0043d6ce
    MOV ECX,dword ptr [EBX + 0x1c68]    ; 0043d6d0
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043d6d6
    AND ESI,ECX                         ; 0043d6da
    MOV CL,byte ptr [EBX + 0x1ccc]      ; 0043d6dc
    MOV EDI,dword ptr [EBX + 0x1c68]    ; 0043d6e2
    SAR EAX,CL                          ; 0043d6e8
    MOV CL,byte ptr [EBX + 0x1c60]      ; 0043d6ea
    AND EAX,EDI                         ; 0043d6f0
    SHL EAX,CL                          ; 0043d6f2
    ADD EAX,ESI                         ; 0043d6f4
    MOV ESI,dword ptr [ESP + 0x5c]      ; 0043d6f6
    MOV EDX,dword ptr [ESP + 0x48]      ; 0043d6fa
    MOV dword ptr [ESI],EAX             ; 0043d6fe
    MOV EAX,dword ptr [ESP + 0x68]      ; 0043d700
    CMP EAX,EDX                         ; 0043d704
    JLE 0x0043d70c                      ; 0043d706
        ;   XREF to: 0043d70c (CONDITIONAL_JUMP)  ; LAB_0043d70c
    MOV dword ptr [ESP + 0x48],EAX      ; 0043d708
    MOV EAX,dword ptr [ESP + 0x68]      ; 0043d70c
        ;   Label: LAB_0043d70c
    CMP EAX,dword ptr [ESP + 0x4c]      ; 0043d710
    JGE 0x0043d49d                      ; 0043d714
        ;   XREF to: 0043d49d (CONDITIONAL_JUMP)  ; LAB_0043d49d
    MOV dword ptr [ESP + 0x4c],EAX      ; 0043d71a
    JMP 0x0043d49d                      ; 0043d71e
        ;   XREF to: 0043d49d (UNCONDITIONAL_JUMP)  ; LAB_0043d49d
    MOV EAX,dword ptr [ESP + 0x58]      ; 0043d723
        ;   Label: LAB_0043d723
    FLD float ptr [EAX + 0x4]           ; 0043d727
    FMUL float ptr [EBX + 0x24]         ; 0043d72a
    FLD float ptr [EAX]                 ; 0043d72d
    FMUL float ptr [EBX + 0x18]         ; 0043d72f
    FADDP                               ; 0043d732
    FLD float ptr [EAX + 0x8]           ; 0043d734
    FMUL float ptr [EBX + 0x30]         ; 0043d737
    FADDP                               ; 0043d73a
    FLDZ                                ; 0043d73c
    FCOMPP                              ; 0043d73e
    FNSTSW AX                           ; 0043d740
    SAHF                                ; 0043d742
    JBE 0x0043d667                      ; 0043d743
        ;   XREF to: 0043d667 (CONDITIONAL_JUMP)  ; LAB_0043d667
    JMP 0x0043d47f                      ; 0043d749
        ;   XREF to: 0043d47f (UNCONDITIONAL_JUMP)  ; LAB_0043d47f
    MOV EAX,dword ptr [ESP + 0x60]      ; 0043d74e
        ;   Label: LAB_0043d74e
    MOV dword ptr [EAX],0x0             ; 0043d752
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0043d758
    MOV dword ptr [ESI],0x0             ; 0043d75c
    JMP 0x0043d497                      ; 0043d762
        ;   XREF to: 0043d497 (UNCONDITIONAL_JUMP)  ; LAB_0043d497

