; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b4300(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x150]:1  local_150
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined        Stack[-0x1c]:1  local_1c
; undefined        Stack[-0x18]:1  local_18
; undefined        Stack[-0x14]:1  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_0040bee0 at 0040bf19
;
; Referenced Globals:
;   undefined4 DAT_005f1340
;   TerminatedCString s_f_f_f_005f1345
;   TerminatedCString s_f_f_f_005f1350
;   TerminatedCString s_f_f_f_005f135b
;   undefined4 DAT_005f1366
;   TerminatedCString s_f_f_f_005f136b
;   TerminatedCString s_f_f_f_005f1376
;   undefined4 DAT_005f1381
;
; Called Functions:
;   FUN_00449530
;   FUN_005b1c80
;   FUN_005b8100
;   FUN_005b9600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b4300
        ;   Label: FUN_005b4300
    PUSH ESI                            ; 005b4301
    PUSH EDI                            ; 005b4302
    SUB ESP,0x144                       ; 005b4303
    MOV EBX,dword ptr [ESP + 0x154]     ; 005b4309
    MOV ESI,dword ptr [ESP + 0x158]     ; 005b4310
    PUSH ESI                            ; 005b4317
    PUSH 0xff                           ; 005b4318
    LEA EAX,[ESP + 0x8]                 ; 005b431d
    PUSH EAX                            ; 005b4321
    CALL FUN_005b9600                   ; 005b4322
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 005b4327
    LEA EAX,[ESP + 0x13c]               ; 005b432a
    PUSH EAX                            ; 005b4331
    PUSH 0x5f1340                       ; 005b4332 | DAT_005f1340
    PUSH ESI                            ; 005b4337
    CALL FUN_005b8100                   ; 005b4338
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 005b433d
    PUSH ESI                            ; 005b4340
    PUSH 0xff                           ; 005b4341
    LEA EAX,[ESP + 0x8]                 ; 005b4346
    PUSH EAX                            ; 005b434a
    CALL FUN_005b9600                   ; 005b434b
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 005b4350
    LEA EAX,[ESP + 0x138]               ; 005b4353
    PUSH EAX                            ; 005b435a
    LEA EAX,[ESP + 0x138]               ; 005b435b
    PUSH EAX                            ; 005b4362
    LEA EAX,[ESP + 0x138]               ; 005b4363
    PUSH EAX                            ; 005b436a
    PUSH 0x5f1345                       ; 005b436b | = " %f,%f,%f\n"
    PUSH ESI                            ; 005b4370
    CALL FUN_005b8100                   ; 005b4371
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x14                        ; 005b4376
    LEA EAX,[ESP + 0x110]               ; 005b4379
    PUSH EAX                            ; 005b4380
    LEA EAX,[ESP + 0x118]               ; 005b4381
    PUSH EAX                            ; 005b4388
    LEA EAX,[ESP + 0x114]               ; 005b4389
    PUSH EAX                            ; 005b4390
    PUSH 0x5f1350                       ; 005b4391 | = " %f,%f,%f\n"
    PUSH ESI                            ; 005b4396
    CALL FUN_005b8100                   ; 005b4397
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x14                        ; 005b439c
    LEA EAX,[ESP + 0x120]               ; 005b439f
    PUSH EAX                            ; 005b43a6
    LEA EAX,[ESP + 0x120]               ; 005b43a7
    PUSH EAX                            ; 005b43ae
    LEA EAX,[ESP + 0x120]               ; 005b43af
    PUSH EAX                            ; 005b43b6
    PUSH 0x5f135b                       ; 005b43b7 | = " %f,%f,%f\n"
    PUSH ESI                            ; 005b43bc
    CALL FUN_005b8100                   ; 005b43bd
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x14                        ; 005b43c2
    LEA EAX,[ESP + 0x140]               ; 005b43c5
    PUSH EAX                            ; 005b43cc
    PUSH 0x5f1366                       ; 005b43cd | DAT_005f1366
    PUSH ESI                            ; 005b43d2
    CALL FUN_005b8100                   ; 005b43d3
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 005b43d8
    LEA EAX,[ESP + 0x118]               ; 005b43db
    PUSH dword ptr [ESP + 0x140]        ; 005b43e2
    PUSH EAX                            ; 005b43e9
    LEA EAX,[ESP + 0x114]               ; 005b43ea
    PUSH EAX                            ; 005b43f1
    LEA EAX,[ESP + 0x13c]               ; 005b43f2
    PUSH EAX                            ; 005b43f9
    PUSH EBX                            ; 005b43fa
    CALL FUN_005b1c80                   ; 005b43fb
        ;   XREF to: 005b1c80 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1c80()
    ADD ESP,0x14                        ; 005b4400
    LEA EAX,[EBX + 0x54]                ; 005b4403
    PUSH EAX                            ; 005b4406
    LEA EAX,[EBX + 0x50]                ; 005b4407
    PUSH EAX                            ; 005b440a
    LEA EDI,[EBX + 0x4c]                ; 005b440b
    PUSH EDI                            ; 005b440e
    PUSH 0x5f136b                       ; 005b440f | = " %f,%f,%f\n"
    PUSH ESI                            ; 005b4414
    CALL FUN_005b8100                   ; 005b4415
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x14                        ; 005b441a
    LEA EAX,[EBX + 0x78]                ; 005b441d
    PUSH EAX                            ; 005b4420
    LEA EAX,[EBX + 0x74]                ; 005b4421
    PUSH EAX                            ; 005b4424
    LEA EAX,[EBX + 0x70]                ; 005b4425
    PUSH EAX                            ; 005b4428
    PUSH 0x5f1376                       ; 005b4429 | = " %f,%f,%f\n"
    PUSH ESI                            ; 005b442e
    CALL FUN_005b8100                   ; 005b442f
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x14                        ; 005b4434
    LEA EAX,[EBX + 0x254]               ; 005b4437
    PUSH EAX                            ; 005b443d
    PUSH 0x5f1381                       ; 005b443e | DAT_005f1381
    PUSH ESI                            ; 005b4443
    CALL FUN_005b8100                   ; 005b4444
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 005b4449
    PUSH EDI                            ; 005b444c
    LEA EAX,[EBX + 0x18]                ; 005b444d
    LEA ESI,[ESP + 0x104]               ; 005b4450
    PUSH EAX                            ; 005b4457
    ADD EBX,0x40                        ; 005b4458
    LEA EDI,[ESP + 0x12c]               ; 005b445b
    CALL FUN_00449530                   ; 005b4462
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined FUN_00449530()
    LEA ESI,[ESP + 0x108]               ; 005b4467
    ADD ESP,0x8                         ; 005b446e
    LEA EAX,[ESP + 0x124]               ; 005b4471
    MOVSD ES:EDI,ESI                    ; 005b4478
    MOVSD ES:EDI,ESI                    ; 005b4479
    MOVSD ES:EDI,ESI                    ; 005b447a
    CMP EBX,EAX                         ; 005b447b
    JNZ 0x005b4489                      ; 005b447d
        ;   XREF to: 005b4489 (CONDITIONAL_JUMP)  ; LAB_005b4489
    ADD ESP,0x144                       ; 005b447f
    POP EDI                             ; 005b4485
    POP ESI                             ; 005b4486
    POP EBX                             ; 005b4487
    RET                                 ; 005b4488
    MOV EAX,dword ptr [ESP + 0x124]     ; 005b4489
        ;   Label: LAB_005b4489
    MOV dword ptr [EBX],EAX             ; 005b4490
    MOV EAX,dword ptr [ESP + 0x128]     ; 005b4492
    MOV dword ptr [EBX + 0x4],EAX       ; 005b4499
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005b449c
    MOV dword ptr [EBX + 0x8],EAX       ; 005b44a3
    ADD ESP,0x144                       ; 005b44a6
    POP EDI                             ; 005b44ac
    POP ESI                             ; 005b44ad
    POP EBX                             ; 005b44ae
    RET                                 ; 005b44af

