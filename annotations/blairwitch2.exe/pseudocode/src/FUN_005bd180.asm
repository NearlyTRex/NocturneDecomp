; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005bd180(int param_1,byte *param_2,undefined4 *param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_005b8078 at 005b80dc
;   FUN_005ba890 at 005ba8be
;
; Referenced Globals:
;   undefined4 DAT_0061ed94
;
; Called Functions:
;   FUN_005bd160
;   FUN_005bd16c
;   FUN_005bd44c
;   FUN_005bd548
;   FUN_005bd584
;   FUN_005bd67c
;   FUN_005bd7e0
;   FUN_005bd894
;   FUN_005bd9a8
;   FUN_005bdcac
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bd180
        ;   Label: FUN_005bd180
    PUSH ESI                            ; 005bd181
    PUSH EDI                            ; 005bd182
    PUSH EBP                            ; 005bd183
    SUB ESP,0x4                         ; 005bd184
    MOV ESI,dword ptr [ESP + 0x18]      ; 005bd187
    MOV EAX,dword ptr [ESP + 0x20]      ; 005bd18b
    MOV EAX,dword ptr [EAX]             ; 005bd18f
    MOV dword ptr [ESP],EAX             ; 005bd191
    MOV AH,byte ptr [ESI + 0x10]        ; 005bd194
    XOR EBP,EBP                         ; 005bd197
    AND AH,0xfd                         ; 005bd199
    XOR EDI,EDI                         ; 005bd19c
    MOV byte ptr [ESI + 0x10],AH        ; 005bd19e
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005bd1a1
        ;   Label: LAB_005bd1a1
    LEA EDX,[EBX + 0x1]                 ; 005bd1a5
    MOV dword ptr [ESP + 0x1c],EDX      ; 005bd1a8
    MOV BL,byte ptr [EBX]               ; 005bd1ac
    AND EBX,0xff                        ; 005bd1ae
    JZ 0x005bd430                       ; 005bd1b4
        ;   XREF to: 005bd430 (CONDITIONAL_JUMP)  ; LAB_005bd430
    MOV AL,BL                           ; 005bd1ba
    INC AL                              ; 005bd1bc
    AND EAX,0xff                        ; 005bd1be
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 005bd1c3 | DAT_0061ed94
    JZ 0x005bd1dc                       ; 005bd1ca
        ;   XREF to: 005bd1dc (CONDITIONAL_JUMP)  ; LAB_005bd1dc
    PUSH ESI                            ; 005bd1cc
    CALL FUN_005bd548                   ; 005bd1cd
        ;   XREF to: 005bd548 (UNCONDITIONAL_CALL)  ; undefined FUN_005bd548()
    ADD ESP,0x4                         ; 005bd1d2
    ADD EDI,EAX                         ; 005bd1d5
    JMP 0x005bd3f4                      ; 005bd1d7
        ;   XREF to: 005bd3f4 (UNCONDITIONAL_JUMP)  ; LAB_005bd3f4
    CMP EBX,0x25                        ; 005bd1dc
        ;   Label: LAB_005bd1dc
    JZ 0x005bd20b                       ; 005bd1df
        ;   XREF to: 005bd20b (CONDITIONAL_JUMP)  ; LAB_005bd20b
    PUSH ESI                            ; 005bd1e1
    CALL FUN_005bd160                   ; 005bd1e2
        ;   XREF to: 005bd160 (UNCONDITIONAL_CALL)  ; undefined FUN_005bd160()
    ADD ESP,0x4                         ; 005bd1e7
    CMP EAX,EBX                         ; 005bd1ea
    JZ 0x005bd3f3                       ; 005bd1ec
        ;   XREF to: 005bd3f3 (CONDITIONAL_JUMP)  ; LAB_005bd3f3
    TEST byte ptr [ESI + 0x10],0x2      ; 005bd1f2
    JNZ 0x005bd430                      ; 005bd1f6
        ;   XREF to: 005bd430 (CONDITIONAL_JUMP)  ; LAB_005bd430
    PUSH ESI                            ; 005bd1fc
    PUSH EAX                            ; 005bd1fd
    CALL FUN_005bd16c                   ; 005bd1fe
        ;   XREF to: 005bd16c (UNCONDITIONAL_CALL)  ; undefined FUN_005bd16c()
    ADD ESP,0x8                         ; 005bd203
    JMP 0x005bd430                      ; 005bd206
        ;   XREF to: 005bd430 (UNCONDITIONAL_JUMP)  ; LAB_005bd430
    PUSH ESI                            ; 005bd20b
        ;   Label: LAB_005bd20b
    MOV EBX,dword ptr [ESP + 0x20]      ; 005bd20c
    PUSH EBX                            ; 005bd210
    CALL FUN_005bd44c                   ; 005bd211
        ;   XREF to: 005bd44c (UNCONDITIONAL_CALL)  ; undefined FUN_005bd44c()
    ADD ESP,0x8                         ; 005bd216
    XOR EBX,EBX                         ; 005bd219
    MOV dword ptr [ESP + 0x1c],EAX      ; 005bd21b
    MOV BL,byte ptr [EAX]               ; 005bd21f
    TEST EBX,EBX                        ; 005bd221
    JZ 0x005bd22a                       ; 005bd223
        ;   XREF to: 005bd22a (CONDITIONAL_JUMP)  ; LAB_005bd22a
    INC EAX                             ; 005bd225
    MOV dword ptr [ESP + 0x1c],EAX      ; 005bd226
    CMP EBX,0x64                        ; 005bd22a
        ;   Label: LAB_005bd22a
    JC 0x005bd29d                       ; 005bd22d
        ;   XREF to: 005bd29d (CONDITIONAL_JUMP)  ; LAB_005bd29d
    JBE 0x005bd305                      ; 005bd22f
        ;   XREF to: 005bd305 (CONDITIONAL_JUMP)  ; LAB_005bd305
    CMP EBX,0x6f                        ; 005bd235
    JC 0x005bd276                       ; 005bd238
        ;   XREF to: 005bd276 (CONDITIONAL_JUMP)  ; LAB_005bd276
    JBE 0x005bd333                      ; 005bd23a
        ;   XREF to: 005bd333 (CONDITIONAL_JUMP)  ; LAB_005bd333
    CMP EBX,0x73                        ; 005bd240
    JC 0x005bd268                       ; 005bd243
        ;   XREF to: 005bd268 (CONDITIONAL_JUMP)  ; LAB_005bd268
    JBE 0x005bd37e                      ; 005bd245
        ;   XREF to: 005bd37e (CONDITIONAL_JUMP)  ; LAB_005bd37e
    CMP EBX,0x75                        ; 005bd24b
    JC 0x005bd3f4                       ; 005bd24e
        ;   XREF to: 005bd3f4 (CONDITIONAL_JUMP)  ; LAB_005bd3f4
    JBE 0x005bd347                      ; 005bd254
        ;   XREF to: 005bd347 (CONDITIONAL_JUMP)  ; LAB_005bd347
    CMP EBX,0x78                        ; 005bd25a
    JZ 0x005bd35b                       ; 005bd25d
        ;   XREF to: 005bd35b (CONDITIONAL_JUMP)  ; LAB_005bd35b
    JMP 0x005bd3f4                      ; 005bd263
        ;   XREF to: 005bd3f4 (UNCONDITIONAL_JUMP)  ; LAB_005bd3f4
    CMP EBX,0x70                        ; 005bd268
        ;   Label: LAB_005bd268
    JZ 0x005bd35b                       ; 005bd26b
        ;   XREF to: 005bd35b (CONDITIONAL_JUMP)  ; LAB_005bd35b
    JMP 0x005bd3f4                      ; 005bd271
        ;   XREF to: 005bd3f4 (UNCONDITIONAL_JUMP)  ; LAB_005bd3f4
    CMP EBX,0x69                        ; 005bd276
        ;   Label: LAB_005bd276
    JC 0x005bd28f                       ; 005bd279
        ;   XREF to: 005bd28f (CONDITIONAL_JUMP)  ; LAB_005bd28f
    JBE 0x005bd31c                      ; 005bd27b
        ;   XREF to: 005bd31c (CONDITIONAL_JUMP)  ; LAB_005bd31c
    CMP EBX,0x6e                        ; 005bd281
    JZ 0x005bd3c3                       ; 005bd284
        ;   XREF to: 005bd3c3 (CONDITIONAL_JUMP)  ; LAB_005bd3c3
    JMP 0x005bd3f4                      ; 005bd28a
        ;   XREF to: 005bd3f4 (UNCONDITIONAL_JUMP)  ; LAB_005bd3f4
    CMP EBX,0x67                        ; 005bd28f
        ;   Label: LAB_005bd28f
    JBE 0x005bd36f                      ; 005bd292
        ;   XREF to: 005bd36f (CONDITIONAL_JUMP)  ; LAB_005bd36f
    JMP 0x005bd3f4                      ; 005bd298
        ;   XREF to: 005bd3f4 (UNCONDITIONAL_JUMP)  ; LAB_005bd3f4
    CMP EBX,0x47                        ; 005bd29d
        ;   Label: LAB_005bd29d
    JC 0x005bd2de                       ; 005bd2a0
        ;   XREF to: 005bd2de (CONDITIONAL_JUMP)  ; LAB_005bd2de
    JBE 0x005bd36f                      ; 005bd2a2
        ;   XREF to: 005bd36f (CONDITIONAL_JUMP)  ; LAB_005bd36f
    CMP EBX,0x58                        ; 005bd2a8
    JC 0x005bd2d0                       ; 005bd2ab
        ;   XREF to: 005bd2d0 (CONDITIONAL_JUMP)  ; LAB_005bd2d0
    JBE 0x005bd35b                      ; 005bd2ad
        ;   XREF to: 005bd35b (CONDITIONAL_JUMP)  ; LAB_005bd35b
    CMP EBX,0x5b                        ; 005bd2b3
    JC 0x005bd3f4                       ; 005bd2b6
        ;   XREF to: 005bd3f4 (CONDITIONAL_JUMP)  ; LAB_005bd3f4
    JBE 0x005bd389                      ; 005bd2bc
        ;   XREF to: 005bd389 (CONDITIONAL_JUMP)  ; LAB_005bd389
    CMP EBX,0x63                        ; 005bd2c2
    JZ 0x005bd3a2                       ; 005bd2c5
        ;   XREF to: 005bd3a2 (CONDITIONAL_JUMP)  ; LAB_005bd3a2
    JMP 0x005bd3f4                      ; 005bd2cb
        ;   XREF to: 005bd3f4 (UNCONDITIONAL_JUMP)  ; LAB_005bd3f4
    CMP EBX,0x53                        ; 005bd2d0
        ;   Label: LAB_005bd2d0
    JZ 0x005bd37a                       ; 005bd2d3
        ;   XREF to: 005bd37a (CONDITIONAL_JUMP)  ; LAB_005bd37a
    JMP 0x005bd3f4                      ; 005bd2d9
        ;   XREF to: 005bd3f4 (UNCONDITIONAL_JUMP)  ; LAB_005bd3f4
    CMP EBX,0x43                        ; 005bd2de
        ;   Label: LAB_005bd2de
    JC 0x005bd2f7                       ; 005bd2e1
        ;   XREF to: 005bd2f7 (CONDITIONAL_JUMP)  ; LAB_005bd2f7
    JBE 0x005bd39e                      ; 005bd2e3
        ;   XREF to: 005bd39e (CONDITIONAL_JUMP)  ; LAB_005bd39e
    CMP EBX,0x45                        ; 005bd2e9
    JZ 0x005bd36f                       ; 005bd2ec
        ;   XREF to: 005bd36f (CONDITIONAL_JUMP)  ; LAB_005bd36f
    JMP 0x005bd3f4                      ; 005bd2f2
        ;   XREF to: 005bd3f4 (UNCONDITIONAL_JUMP)  ; LAB_005bd3f4
    CMP EBX,0x25                        ; 005bd2f7
        ;   Label: LAB_005bd2f7
    JZ 0x005bd3d4                       ; 005bd2fa
        ;   XREF to: 005bd3d4 (CONDITIONAL_JUMP)  ; LAB_005bd3d4
    JMP 0x005bd3f4                      ; 005bd300
        ;   XREF to: 005bd3f4 (UNCONDITIONAL_JUMP)  ; LAB_005bd3f4
    PUSH 0x1                            ; 005bd305
        ;   Label: LAB_005bd305
    PUSH 0xa                            ; 005bd307
    LEA EAX,[ESP + 0x8]                 ; 005bd309
    PUSH EAX                            ; 005bd30d
    PUSH ESI                            ; 005bd30e
    CALL FUN_005bdcac                   ; 005bd30f
        ;   XREF to: 005bdcac (UNCONDITIONAL_CALL)  ; undefined FUN_005bdcac()
    ADD ESP,0x10                        ; 005bd314
    JMP 0x005bd3ae                      ; 005bd317
        ;   XREF to: 005bd3ae (UNCONDITIONAL_JUMP)  ; LAB_005bd3ae
    PUSH 0x1                            ; 005bd31c
        ;   Label: LAB_005bd31c
    PUSH 0x0                            ; 005bd31e
    LEA EAX,[ESP + 0x8]                 ; 005bd320
    PUSH EAX                            ; 005bd324
    PUSH ESI                            ; 005bd325
    CALL FUN_005bdcac                   ; 005bd326
        ;   XREF to: 005bdcac (UNCONDITIONAL_CALL)  ; undefined FUN_005bdcac()
    ADD ESP,0x10                        ; 005bd32b
    JMP 0x005bd3ae                      ; 005bd32e
        ;   XREF to: 005bd3ae (UNCONDITIONAL_JUMP)  ; LAB_005bd3ae
    PUSH 0x1                            ; 005bd333
        ;   Label: LAB_005bd333
    PUSH 0x8                            ; 005bd335
    LEA EAX,[ESP + 0x8]                 ; 005bd337
    PUSH EAX                            ; 005bd33b
    PUSH ESI                            ; 005bd33c
    CALL FUN_005bdcac                   ; 005bd33d
        ;   XREF to: 005bdcac (UNCONDITIONAL_CALL)  ; undefined FUN_005bdcac()
    ADD ESP,0x10                        ; 005bd342
    JMP 0x005bd3ae                      ; 005bd345
        ;   XREF to: 005bd3ae (UNCONDITIONAL_JUMP)  ; LAB_005bd3ae
    PUSH 0x0                            ; 005bd347
        ;   Label: LAB_005bd347
    PUSH 0xa                            ; 005bd349
    LEA EAX,[ESP + 0x8]                 ; 005bd34b
    PUSH EAX                            ; 005bd34f
    PUSH ESI                            ; 005bd350
    CALL FUN_005bdcac                   ; 005bd351
        ;   XREF to: 005bdcac (UNCONDITIONAL_CALL)  ; undefined FUN_005bdcac()
    ADD ESP,0x10                        ; 005bd356
    JMP 0x005bd3ae                      ; 005bd359
        ;   XREF to: 005bd3ae (UNCONDITIONAL_JUMP)  ; LAB_005bd3ae
    PUSH 0x1                            ; 005bd35b
        ;   Label: LAB_005bd35b
    PUSH 0x10                           ; 005bd35d
    LEA EAX,[ESP + 0x8]                 ; 005bd35f
    PUSH EAX                            ; 005bd363
    PUSH ESI                            ; 005bd364
    CALL FUN_005bdcac                   ; 005bd365
        ;   XREF to: 005bdcac (UNCONDITIONAL_CALL)  ; undefined FUN_005bdcac()
    ADD ESP,0x10                        ; 005bd36a
    JMP 0x005bd3ae                      ; 005bd36d
        ;   XREF to: 005bd3ae (UNCONDITIONAL_JUMP)  ; LAB_005bd3ae
    MOV EAX,ESP                         ; 005bd36f
        ;   Label: LAB_005bd36f
    PUSH EAX                            ; 005bd371
    PUSH ESI                            ; 005bd372
    CALL FUN_005bd9a8                   ; 005bd373
        ;   XREF to: 005bd9a8 (UNCONDITIONAL_CALL)  ; undefined FUN_005bd9a8()
    JMP 0x005bd3ab                      ; 005bd378
        ;   XREF to: 005bd3ab (UNCONDITIONAL_JUMP)  ; LAB_005bd3ab
    OR byte ptr [ESI + 0x10],0x20       ; 005bd37a
        ;   Label: LAB_005bd37a
    MOV EAX,ESP                         ; 005bd37e
        ;   Label: LAB_005bd37e
    PUSH EAX                            ; 005bd380
    PUSH ESI                            ; 005bd381
    CALL FUN_005bd67c                   ; 005bd382
        ;   XREF to: 005bd67c (UNCONDITIONAL_CALL)  ; undefined FUN_005bd67c()
    JMP 0x005bd3ab                      ; 005bd387
        ;   XREF to: 005bd3ab (UNCONDITIONAL_JUMP)  ; LAB_005bd3ab
    LEA EAX,[ESP + 0x1c]                ; 005bd389
        ;   Label: LAB_005bd389
    PUSH EAX                            ; 005bd38d
    LEA EAX,[ESP + 0x4]                 ; 005bd38e
    PUSH EAX                            ; 005bd392
    PUSH ESI                            ; 005bd393
    CALL FUN_005bd894                   ; 005bd394
        ;   XREF to: 005bd894 (UNCONDITIONAL_CALL)  ; undefined FUN_005bd894()
    ADD ESP,0xc                         ; 005bd399
    JMP 0x005bd3ae                      ; 005bd39c
        ;   XREF to: 005bd3ae (UNCONDITIONAL_JUMP)  ; LAB_005bd3ae
    OR byte ptr [ESI + 0x10],0x20       ; 005bd39e
        ;   Label: LAB_005bd39e
    MOV EAX,ESP                         ; 005bd3a2
        ;   Label: LAB_005bd3a2
    PUSH EAX                            ; 005bd3a4
    PUSH ESI                            ; 005bd3a5
    CALL FUN_005bd584                   ; 005bd3a6
        ;   XREF to: 005bd584 (UNCONDITIONAL_CALL)  ; undefined FUN_005bd584()
    ADD ESP,0x8                         ; 005bd3ab
        ;   Label: LAB_005bd3ab
    MOV EBX,EAX                         ; 005bd3ae
        ;   Label: LAB_005bd3ae
    TEST EBX,EBX                        ; 005bd3b0
    JLE 0x005bd430                      ; 005bd3b2
        ;   XREF to: 005bd430 (CONDITIONAL_JUMP)  ; LAB_005bd430
    ADD EDI,EBX                         ; 005bd3b8
    TEST byte ptr [ESI + 0x10],0x1      ; 005bd3ba
    JZ 0x005bd3f4                       ; 005bd3be
        ;   XREF to: 005bd3f4 (CONDITIONAL_JUMP)  ; LAB_005bd3f4
    INC EBP                             ; 005bd3c0
    JMP 0x005bd3f4                      ; 005bd3c1
        ;   XREF to: 005bd3f4 (UNCONDITIONAL_JUMP)  ; LAB_005bd3f4
    PUSH EDI                            ; 005bd3c3
        ;   Label: LAB_005bd3c3
    LEA EAX,[ESP + 0x4]                 ; 005bd3c4
    PUSH EAX                            ; 005bd3c8
    PUSH ESI                            ; 005bd3c9
    CALL FUN_005bd7e0                   ; 005bd3ca
        ;   XREF to: 005bd7e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005bd7e0()
    ADD ESP,0xc                         ; 005bd3cf
    JMP 0x005bd3f4                      ; 005bd3d2
        ;   XREF to: 005bd3f4 (UNCONDITIONAL_JUMP)  ; LAB_005bd3f4
    PUSH ESI                            ; 005bd3d4
        ;   Label: LAB_005bd3d4
    CALL FUN_005bd160                   ; 005bd3d5
        ;   XREF to: 005bd160 (UNCONDITIONAL_CALL)  ; undefined FUN_005bd160()
    ADD ESP,0x4                         ; 005bd3da
    CMP EAX,EBX                         ; 005bd3dd
    JZ 0x005bd3f3                       ; 005bd3df
        ;   XREF to: 005bd3f3 (CONDITIONAL_JUMP)  ; LAB_005bd3f3
    TEST byte ptr [ESI + 0x10],0x2      ; 005bd3e1
    JNZ 0x005bd430                      ; 005bd3e5
        ;   XREF to: 005bd430 (CONDITIONAL_JUMP)  ; LAB_005bd430
    PUSH ESI                            ; 005bd3e7
    PUSH EAX                            ; 005bd3e8
    CALL FUN_005bd16c                   ; 005bd3e9
        ;   XREF to: 005bd16c (UNCONDITIONAL_CALL)  ; undefined FUN_005bd16c()
    ADD ESP,0x8                         ; 005bd3ee
    JMP 0x005bd430                      ; 005bd3f1
        ;   XREF to: 005bd430 (UNCONDITIONAL_JUMP)  ; LAB_005bd430
    INC EDI                             ; 005bd3f3
        ;   Label: LAB_005bd3f3
    TEST byte ptr [ESI + 0x10],0x2      ; 005bd3f4
        ;   Label: LAB_005bd3f4
    JZ 0x005bd1a1                       ; 005bd3f8
        ;   XREF to: 005bd1a1 (CONDITIONAL_JUMP)  ; LAB_005bd1a1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005bd3fe
    CMP byte ptr [EAX],0x25             ; 005bd402
    JNZ 0x005bd430                      ; 005bd405
        ;   XREF to: 005bd430 (CONDITIONAL_JUMP)  ; LAB_005bd430
    PUSH ESI                            ; 005bd407
    LEA ECX,[EAX + 0x1]                 ; 005bd408
    PUSH ECX                            ; 005bd40b
    MOV dword ptr [ESP + 0x24],ECX      ; 005bd40c
    CALL FUN_005bd44c                   ; 005bd410
        ;   XREF to: 005bd44c (UNCONDITIONAL_CALL)  ; undefined FUN_005bd44c()
    ADD ESP,0x8                         ; 005bd415
    MOV dword ptr [ESP + 0x1c],EAX      ; 005bd418
    CMP byte ptr [EAX],0x6e             ; 005bd41c
    JNZ 0x005bd430                      ; 005bd41f
        ;   XREF to: 005bd430 (CONDITIONAL_JUMP)  ; LAB_005bd430
    PUSH EDI                            ; 005bd421
    LEA EAX,[ESP + 0x4]                 ; 005bd422
    PUSH EAX                            ; 005bd426
    PUSH ESI                            ; 005bd427
    CALL FUN_005bd7e0                   ; 005bd428
        ;   XREF to: 005bd7e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005bd7e0()
    ADD ESP,0xc                         ; 005bd42d
    TEST EBP,EBP                        ; 005bd430
        ;   Label: LAB_005bd430
    JNZ 0x005bd441                      ; 005bd432
        ;   XREF to: 005bd441 (CONDITIONAL_JUMP)  ; LAB_005bd441
    TEST byte ptr [ESI + 0x10],0x2      ; 005bd434
    JZ 0x005bd441                       ; 005bd438
        ;   XREF to: 005bd441 (CONDITIONAL_JUMP)  ; LAB_005bd441
    MOV EAX,0xffffffff                  ; 005bd43a
    JMP 0x005bd443                      ; 005bd43f
        ;   XREF to: 005bd443 (UNCONDITIONAL_JUMP)  ; LAB_005bd443
    MOV EAX,EBP                         ; 005bd441
        ;   Label: LAB_005bd441
    ADD ESP,0x4                         ; 005bd443
        ;   Label: LAB_005bd443
    POP EBP                             ; 005bd446
    POP EDI                             ; 005bd447
    POP ESI                             ; 005bd448
    POP EBX                             ; 005bd449
    RET                                 ; 005bd44a

