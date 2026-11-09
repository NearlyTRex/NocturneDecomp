; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dlight_cpp_FUN_00466220(int param_1,int param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
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
;   core_set.cpp_FUN_00551170 at 0055143b
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c4e9d4
;   undefined4 DAT_01c4e9d8
;   undefined4 DAT_01c4e9e0
;   undefined4 DAT_01c4e9e4
;   undefined4 DAT_01c4e9ec
;   undefined4 DAT_01c4e9f0
;
; Called Functions:
;   engine_special.cpp_clearScreen_FUN_0057dc40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00466220
        ;   Label: core_dlight.cpp_FUN_00466220
    PUSH ESI                            ; 00466221
    PUSH EDI                            ; 00466222
    PUSH EBP                            ; 00466223
    SUB ESP,0x30                        ; 00466224
    MOV EDI,dword ptr [ESP + 0x48]      ; 00466227
    MOV EBP,dword ptr [ESP + 0x54]      ; 0046622b
    CALL engine_special.cpp_clearScreen_FUN_0057dc40 ; 0046622f
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0057dc40()
    CMP dword ptr [0x0061b4a0],0x20     ; 00466234 | DAT_0061b4a0
    JNZ 0x004663e3                      ; 0046623b
        ;   XREF to: 004663e3 (CONDITIONAL_JUMP)  ; LAB_004663e3
    MOV EAX,dword ptr [ESP + 0x44]      ; 00466241
    XOR ESI,ESI                         ; 00466245
    MOV EDX,dword ptr [EAX + 0x1cc4]    ; 00466247
    MOV dword ptr [ESP + 0x18],ESI      ; 0046624d
    TEST EDX,EDX                        ; 00466251
    JLE 0x00466297                      ; 00466253
        ;   XREF to: 00466297 (CONDITIONAL_JUMP)  ; LAB_00466297
    SHL EDI,0x2                         ; 00466255
    MOV dword ptr [ESP + 0x10],EDI      ; 00466258
    CMP dword ptr [0x0061b49c],0xf0     ; 0046625c | DAT_0061b49c
        ;   Label: LAB_0046625c
    JLE 0x0046629f                      ; 00466266
        ;   XREF to: 0046629f (CONDITIONAL_JUMP)  ; LAB_0046629f
    MOV EAX,dword ptr [ESP + 0x18]      ; 00466268
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0046626c
    ADD EAX,EAX                         ; 00466270
    ADD EAX,EDX                         ; 00466272
    TEST EAX,EAX                        ; 00466274
        ;   Label: LAB_00466274
    JL 0x00466280                       ; 00466276
        ;   XREF to: 00466280 (CONDITIONAL_JUMP)  ; LAB_00466280
    CMP EAX,dword ptr [0x0061b49c]      ; 00466278 | DAT_0061b49c
    JL 0x004662a9                       ; 0046627e
        ;   XREF to: 004662a9 (CONDITIONAL_JUMP)  ; LAB_004662a9
    MOV ECX,dword ptr [ESP + 0x18]      ; 00466280
        ;   Label: LAB_00466280
    MOV EDX,dword ptr [ESP + 0x44]      ; 00466284
    INC ECX                             ; 00466288
    MOV EBX,dword ptr [EDX + 0x1cc4]    ; 00466289
    MOV dword ptr [ESP + 0x18],ECX      ; 0046628f
    CMP ECX,EBX                         ; 00466293
    JL 0x0046625c                       ; 00466295
        ;   XREF to: 0046625c (CONDITIONAL_JUMP)  ; LAB_0046625c
    ADD ESP,0x30                        ; 00466297
        ;   Label: LAB_00466297
    POP EBP                             ; 0046629a
    POP EDI                             ; 0046629b
    POP ESI                             ; 0046629c
    POP EBX                             ; 0046629d
    RET                                 ; 0046629e
    MOV EAX,dword ptr [ESP + 0x18]      ; 0046629f
        ;   Label: LAB_0046629f
    ADD EAX,dword ptr [ESP + 0x4c]      ; 004662a3
    JMP 0x00466274                      ; 004662a7
        ;   XREF to: 00466274 (UNCONDITIONAL_JUMP)  ; LAB_00466274
    MOV EDX,dword ptr [ESP + 0x44]      ; 004662a9
        ;   Label: LAB_004662a9
    MOV ESI,dword ptr [EAX*0x4 + 0x1c4354c] ; 004662ad | DAT_01c4354c
    MOV EAX,dword ptr [ESP + 0x18]      ; 004662b4
    IMUL EAX,dword ptr [EDX + 0x1cc0]   ; 004662b8
    MOV EDX,dword ptr [EDX + 0x2f94]    ; 004662bf
    ADD EAX,EAX                         ; 004662c5
    LEA EDI,[EDX + EAX*0x1]             ; 004662c7
    XOR EAX,EAX                         ; 004662ca
    MOV dword ptr [ESP + 0x1c],EAX      ; 004662cc
    MOV dword ptr [ESP + 0x2c],EAX      ; 004662d0
    MOV EAX,dword ptr [ESP + 0x44]      ; 004662d4
    MOV EBX,dword ptr [ESP + 0x10]      ; 004662d8
    MOV ECX,dword ptr [EAX + 0x1cc0]    ; 004662dc
    ADD ESI,EBX                         ; 004662e2
    TEST ECX,ECX                        ; 004662e4
    JLE 0x00466280                      ; 004662e6
        ;   XREF to: 00466280 (CONDITIONAL_JUMP)  ; LAB_00466280
    XOR EBX,EBX                         ; 004662e8
        ;   Label: LAB_004662e8
    MOV BX,word ptr [EDI]               ; 004662ea
    TEST EBX,EBX                        ; 004662ed
    JZ 0x00466387                       ; 004662ef
        ;   XREF to: 00466387 (CONDITIONAL_JUMP)  ; LAB_00466387
    SHR EBX,0x6                         ; 004662f5
    CMP EBX,0x7f                        ; 004662f8
    JBE 0x00466302                      ; 004662fb
        ;   XREF to: 00466302 (CONDITIONAL_JUMP)  ; LAB_00466302
    MOV EBX,0x7f                        ; 004662fd
    MOV EAX,dword ptr [ESP + 0x50]      ; 00466302
        ;   Label: LAB_00466302
    XOR BL,0x7f                         ; 00466306
    TEST EAX,EAX                        ; 00466309
    JLE 0x0046631c                      ; 0046630b
        ;   XREF to: 0046631c (CONDITIONAL_JUMP)  ; LAB_0046631c
    ADD EBX,EAX                         ; 0046630d
    CMP EBX,0xff                        ; 0046630f
    JBE 0x0046631c                      ; 00466315
        ;   XREF to: 0046631c (CONDITIONAL_JUMP)  ; LAB_0046631c
    MOV EBX,0xff                        ; 00466317
    ADD EBX,dword ptr [ESP + 0x1c]      ; 0046631c
        ;   Label: LAB_0046631c
    SHR EBX,0x1                         ; 00466320
    MOV dword ptr [ESP + 0x1c],EBX      ; 00466322
    LEA EAX,[EBX + EBX*0x1]             ; 00466326
    ADD EAX,EBX                         ; 00466329
    LEA EDX,[EAX + 0x96]                ; 0046632b
    SHR EBX,0x1                         ; 00466331
    SAR EDX,0x1                         ; 00466333
    TEST EBP,EBP                        ; 00466335
    JNZ 0x004663b9                      ; 00466337
        ;   XREF to: 004663b9 (CONDITIONAL_JUMP)  ; LAB_004663b9
    MOV EAX,EDX                         ; 0046633d
    MOV EDX,EBX                         ; 0046633f
    CMP dword ptr [0x0061b4a0],0x20     ; 00466341 | DAT_0061b4a0
        ;   Label: LAB_00466341
    JNZ 0x004663d0                      ; 00466348
        ;   XREF to: 004663d0 (CONDITIONAL_JUMP)  ; LAB_004663d0
    MOV CL,byte ptr [0x01c4e9d4]        ; 0046634e | DAT_01c4e9d4
    SHL EAX,CL                          ; 00466354
    MOV CL,byte ptr [0x01c4e9e0]        ; 00466356 | DAT_01c4e9e0
    MOV dword ptr [ESP],EAX             ; 0046635c
    MOV EAX,EDX                         ; 0046635f
    SHL EAX,CL                          ; 00466361
    MOV CL,byte ptr [0x01c4e9ec]        ; 00466363 | DAT_01c4e9ec
    MOV EDX,dword ptr [ESP]             ; 00466369
    SHL EBX,CL                          ; 0046636c
    OR EAX,EDX                          ; 0046636e
    MOV ECX,EBX                         ; 00466370
    OR ECX,EAX                          ; 00466372
    MOV EBX,dword ptr [0x0061b498]      ; 00466374 | DAT_0061b498
        ;   Label: LAB_00466374
    MOV dword ptr [ESI],ECX             ; 0046637a
    CMP EBX,0x140                       ; 0046637c
    JLE 0x00466387                      ; 00466382
        ;   XREF to: 00466387 (CONDITIONAL_JUMP)  ; LAB_00466387
    MOV dword ptr [ESI + 0x4],ECX       ; 00466384
    MOV EAX,[0x0061b498]                ; 00466387 | DAT_0061b498
        ;   Label: LAB_00466387
    ADD EDI,0x2                         ; 0046638c
    CMP EAX,0x140                       ; 0046638f
    JLE 0x004663de                      ; 00466394
        ;   XREF to: 004663de (CONDITIONAL_JUMP)  ; LAB_004663de
    ADD ESI,0x8                         ; 00466396
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00466399
        ;   Label: LAB_00466399
    MOV EDX,dword ptr [ESP + 0x44]      ; 0046639d
    INC EBX                             ; 004663a1
    MOV ECX,dword ptr [EDX + 0x1cc0]    ; 004663a2
    MOV dword ptr [ESP + 0x2c],EBX      ; 004663a8
    CMP EBX,ECX                         ; 004663ac
    JGE 0x00466280                      ; 004663ae
        ;   XREF to: 00466280 (CONDITIONAL_JUMP)  ; LAB_00466280
    JMP 0x004662e8                      ; 004663b4
        ;   XREF to: 004662e8 (UNCONDITIONAL_JUMP)  ; LAB_004662e8
    CMP EBP,0x1                         ; 004663b9
        ;   Label: LAB_004663b9
    JNZ 0x004663c9                      ; 004663bc
        ;   XREF to: 004663c9 (CONDITIONAL_JUMP)  ; LAB_004663c9
    SAR EAX,0x1                         ; 004663be
    MOV EDX,EAX                         ; 004663c0
    MOV EBX,EAX                         ; 004663c2
    JMP 0x00466341                      ; 004663c4
        ;   XREF to: 00466341 (UNCONDITIONAL_JUMP)  ; LAB_00466341
    MOV EAX,EBX                         ; 004663c9
        ;   Label: LAB_004663c9
    JMP 0x00466341                      ; 004663cb
        ;   XREF to: 00466341 (UNCONDITIONAL_JUMP)  ; LAB_00466341
    MOV ECX,EAX                         ; 004663d0
        ;   Label: LAB_004663d0
    SHL EDX,0x8                         ; 004663d2
    SHL ECX,0x10                        ; 004663d5
    OR ECX,EDX                          ; 004663d8
    OR ECX,EBX                          ; 004663da
    JMP 0x00466374                      ; 004663dc
        ;   XREF to: 00466374 (UNCONDITIONAL_JUMP)  ; LAB_00466374
    ADD ESI,0x4                         ; 004663de
        ;   Label: LAB_004663de
    JMP 0x00466399                      ; 004663e1
        ;   XREF to: 00466399 (UNCONDITIONAL_JUMP)  ; LAB_00466399
    MOV EAX,dword ptr [ESP + 0x44]      ; 004663e3
        ;   Label: LAB_004663e3
    XOR ECX,ECX                         ; 004663e7
    MOV EBX,dword ptr [EAX + 0x1cc4]    ; 004663e9
    MOV dword ptr [ESP + 0x14],ECX      ; 004663ef
    TEST EBX,EBX                        ; 004663f3
    JLE 0x00466297                      ; 004663f5
        ;   XREF to: 00466297 (CONDITIONAL_JUMP)  ; LAB_00466297
    ADD EDI,EDI                         ; 004663fb
    MOV dword ptr [ESP + 0xc],EDI       ; 004663fd
    CMP dword ptr [0x0061b49c],0xf0     ; 00466401 | DAT_0061b49c
        ;   Label: LAB_00466401
    JLE 0x00466442                      ; 0046640b
        ;   XREF to: 00466442 (CONDITIONAL_JUMP)  ; LAB_00466442
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046640d
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00466411
    ADD EAX,EAX                         ; 00466415
    ADD EAX,EDX                         ; 00466417
    TEST EAX,EAX                        ; 00466419
        ;   Label: LAB_00466419
    JL 0x00466425                       ; 0046641b
        ;   XREF to: 00466425 (CONDITIONAL_JUMP)  ; LAB_00466425
    CMP EAX,dword ptr [0x0061b49c]      ; 0046641d | DAT_0061b49c
    JL 0x0046644c                       ; 00466423
        ;   XREF to: 0046644c (CONDITIONAL_JUMP)  ; LAB_0046644c
    MOV ECX,dword ptr [ESP + 0x14]      ; 00466425
        ;   Label: LAB_00466425
    MOV EDX,dword ptr [ESP + 0x44]      ; 00466429
    INC ECX                             ; 0046642d
    MOV EBX,dword ptr [EDX + 0x1cc4]    ; 0046642e
    MOV dword ptr [ESP + 0x14],ECX      ; 00466434
    CMP ECX,EBX                         ; 00466438
    JGE 0x00466297                      ; 0046643a
        ;   XREF to: 00466297 (CONDITIONAL_JUMP)  ; LAB_00466297
    JMP 0x00466401                      ; 00466440
        ;   XREF to: 00466401 (UNCONDITIONAL_JUMP)  ; LAB_00466401
    MOV EAX,dword ptr [ESP + 0x14]      ; 00466442
        ;   Label: LAB_00466442
    ADD EAX,dword ptr [ESP + 0x4c]      ; 00466446
    JMP 0x00466419                      ; 0046644a
        ;   XREF to: 00466419 (UNCONDITIONAL_JUMP)  ; LAB_00466419
    MOV EDX,dword ptr [ESP + 0x44]      ; 0046644c
        ;   Label: LAB_0046644c
    MOV ESI,dword ptr [EAX*0x4 + 0x1c4354c] ; 00466450 | DAT_01c4354c
    MOV EAX,dword ptr [ESP + 0x14]      ; 00466457
    IMUL EAX,dword ptr [EDX + 0x1cc0]   ; 0046645b
    LEA EDX,[EAX + EAX*0x1]             ; 00466462
    MOV EAX,dword ptr [ESP + 0x44]      ; 00466465
    MOV EAX,dword ptr [EAX + 0x2f94]    ; 00466469
    ADD EAX,EDX                         ; 0046646f
    MOV dword ptr [ESP + 0x24],EAX      ; 00466471
    XOR EAX,EAX                         ; 00466475
    MOV dword ptr [ESP + 0x20],EAX      ; 00466477
    MOV dword ptr [ESP + 0x28],EAX      ; 0046647b
    MOV EAX,dword ptr [ESP + 0x44]      ; 0046647f
    MOV EBX,dword ptr [ESP + 0xc]       ; 00466483
    MOV ECX,dword ptr [EAX + 0x1cc0]    ; 00466487
    ADD ESI,EBX                         ; 0046648d
    TEST ECX,ECX                        ; 0046648f
    JLE 0x00466425                      ; 00466491
        ;   XREF to: 00466425 (CONDITIONAL_JUMP)  ; LAB_00466425
    MOV EAX,dword ptr [ESP + 0x24]      ; 00466493
        ;   Label: LAB_00466493
    XOR EBX,EBX                         ; 00466497
    MOV BX,word ptr [EAX]               ; 00466499
    TEST EBX,EBX                        ; 0046649c
    JZ 0x0046655e                       ; 0046649e
        ;   XREF to: 0046655e (CONDITIONAL_JUMP)  ; LAB_0046655e
    SHR EBX,0x6                         ; 004664a4
    CMP EBX,0x7f                        ; 004664a7
    JBE 0x004664b1                      ; 004664aa
        ;   XREF to: 004664b1 (CONDITIONAL_JUMP)  ; LAB_004664b1
    MOV EBX,0x7f                        ; 004664ac
    MOV EAX,dword ptr [ESP + 0x50]      ; 004664b1
        ;   Label: LAB_004664b1
    XOR BL,0x7f                         ; 004664b5
    TEST EAX,EAX                        ; 004664b8
    JLE 0x004664cb                      ; 004664ba
        ;   XREF to: 004664cb (CONDITIONAL_JUMP)  ; LAB_004664cb
    ADD EBX,EAX                         ; 004664bc
    CMP EBX,0xff                        ; 004664be
    JBE 0x004664cb                      ; 004664c4
        ;   XREF to: 004664cb (CONDITIONAL_JUMP)  ; LAB_004664cb
    MOV EBX,0xff                        ; 004664c6
    ADD EBX,dword ptr [ESP + 0x20]      ; 004664cb
        ;   Label: LAB_004664cb
    SHR EBX,0x1                         ; 004664cf
    MOV dword ptr [ESP + 0x20],EBX      ; 004664d1
    LEA EAX,[EBX + EBX*0x1]             ; 004664d5
    ADD EAX,EBX                         ; 004664d8
    LEA ECX,[EAX + 0x96]                ; 004664da
    SHR EBX,0x1                         ; 004664e0
    SAR ECX,0x1                         ; 004664e2
    TEST EBP,EBP                        ; 004664e4
    JNZ 0x0046659a                      ; 004664e6
        ;   XREF to: 0046659a (CONDITIONAL_JUMP)  ; LAB_0046659a
    MOV EAX,ECX                         ; 004664ec
    MOV ECX,EBX                         ; 004664ee
    MOV EDI,dword ptr [0x01c4e9d8]      ; 004664f0 | DAT_01c4e9d8
        ;   Label: LAB_004664f0
    XOR EDX,EDX                         ; 004664f6
    DIV EDI                             ; 004664f8
    MOV dword ptr [ESP + 0x4],ECX       ; 004664fa
    MOV EDI,EAX                         ; 004664fe
    XOR EDX,EDX                         ; 00466500
    MOV EAX,ECX                         ; 00466502
    DIV dword ptr [0x01c4e9e4]          ; 00466504 | DAT_01c4e9e4
    MOV dword ptr [ESP + 0x8],EBX       ; 0046650a
    MOV dword ptr [ESP + 0x4],EAX       ; 0046650e
    XOR EDX,EDX                         ; 00466512
    MOV EAX,EBX                         ; 00466514
    DIV dword ptr [0x01c4e9f0]          ; 00466516 | DAT_01c4e9f0
    MOV CL,byte ptr [0x01c4e9d4]        ; 0046651c | DAT_01c4e9d4
    SHL EDI,CL                          ; 00466522
    MOV CL,byte ptr [0x01c4e9e0]        ; 00466524 | DAT_01c4e9e0
    MOV dword ptr [ESP + 0x8],EAX       ; 0046652a
    MOV EDX,dword ptr [ESP + 0x4]       ; 0046652e
    MOV EAX,dword ptr [ESP + 0x8]       ; 00466532
    SHL EDX,CL                          ; 00466536
    MOV CL,byte ptr [0x01c4e9ec]        ; 00466538 | DAT_01c4e9ec
    OR EDX,EDI                          ; 0046653e
    SHL EAX,CL                          ; 00466540
    XOR EBX,EBX                         ; 00466542
    OR EAX,EDX                          ; 00466544
    MOV EDI,dword ptr [0x0061b498]      ; 00466546 | DAT_0061b498
    MOV BX,AX                           ; 0046654c
    MOV word ptr [ESI],AX               ; 0046654f
    CMP EDI,0x140                       ; 00466552
    JLE 0x0046655e                      ; 00466558
        ;   XREF to: 0046655e (CONDITIONAL_JUMP)  ; LAB_0046655e
    MOV word ptr [ESI + 0x2],AX         ; 0046655a
    MOV EAX,dword ptr [ESP + 0x24]      ; 0046655e
        ;   Label: LAB_0046655e
    ADD EAX,0x2                         ; 00466562
    MOV EDX,dword ptr [0x0061b498]      ; 00466565 | DAT_0061b498
    MOV dword ptr [ESP + 0x24],EAX      ; 0046656b
    CMP EDX,0x140                       ; 0046656f
    JLE 0x004665b1                      ; 00466575
        ;   XREF to: 004665b1 (CONDITIONAL_JUMP)  ; LAB_004665b1
    ADD ESI,0x4                         ; 00466577
    MOV EBX,dword ptr [ESP + 0x28]      ; 0046657a
        ;   Label: LAB_0046657a
    MOV EDX,dword ptr [ESP + 0x44]      ; 0046657e
    INC EBX                             ; 00466582
    MOV EDI,dword ptr [EDX + 0x1cc0]    ; 00466583
    MOV dword ptr [ESP + 0x28],EBX      ; 00466589
    CMP EBX,EDI                         ; 0046658d
    JGE 0x00466425                      ; 0046658f
        ;   XREF to: 00466425 (CONDITIONAL_JUMP)  ; LAB_00466425
    JMP 0x00466493                      ; 00466595
        ;   XREF to: 00466493 (UNCONDITIONAL_JUMP)  ; LAB_00466493
    CMP EBP,0x1                         ; 0046659a
        ;   Label: LAB_0046659a
    JNZ 0x004665aa                      ; 0046659d
        ;   XREF to: 004665aa (CONDITIONAL_JUMP)  ; LAB_004665aa
    SAR EAX,0x1                         ; 0046659f
    MOV ECX,EAX                         ; 004665a1
    MOV EBX,EAX                         ; 004665a3
    JMP 0x004664f0                      ; 004665a5
        ;   XREF to: 004664f0 (UNCONDITIONAL_JUMP)  ; LAB_004664f0
    MOV EAX,EBX                         ; 004665aa
        ;   Label: LAB_004665aa
    JMP 0x004664f0                      ; 004665ac
        ;   XREF to: 004664f0 (UNCONDITIONAL_JUMP)  ; LAB_004664f0
    ADD ESI,0x2                         ; 004665b1
        ;   Label: LAB_004665b1
    JMP 0x0046657a                      ; 004665b4
        ;   XREF to: 0046657a (UNCONDITIONAL_JUMP)  ; LAB_0046657a

