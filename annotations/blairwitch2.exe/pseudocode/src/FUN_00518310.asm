; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00518310(int param_1)
;
; Local Variables:
; undefined4       Stack[-0xa4]:4  local_a4
; undefined        Stack[-0x98]:1  local_98
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
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
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[2]:
;   FUN_00518280 at 0051829b
;   FUN_005184c0 at 005186dd
;
; Called Functions:
;   FUN_00438c40
;   FUN_00593df0
;   FUN_005940b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00518310
        ;   Label: FUN_00518310
    PUSH ESI                            ; 00518311
    PUSH EDI                            ; 00518312
    PUSH EBP                            ; 00518313
    MOV EBP,ESP                         ; 00518314
    SUB ESP,0x88                        ; 00518316
    SUB EBP,0x7e                        ; 0051831c
    MOV EDX,dword ptr [EBP + 0x92]      ; 0051831f
    FLD float ptr [EDX + 0x438]         ; 00518325
    FLDZ                                ; 0051832b
    FCOMPP                              ; 0051832d
    FNSTSW AX                           ; 0051832f
    SAHF                                ; 00518331
    JA 0x0051845c                       ; 00518332
        ;   XREF to: 0051845c (CONDITIONAL_JUMP)  ; LAB_0051845c
    FLD float ptr [EDX + 0x438]         ; 00518338
        ;   Label: LAB_00518338
    FLD1                                ; 0051833e
    FCOMPP                              ; 00518340
    FNSTSW AX                           ; 00518342
    SAHF                                ; 00518344
    JNC 0x00518351                      ; 00518345
        ;   XREF to: 00518351 (CONDITIONAL_JUMP)  ; LAB_00518351
    MOV dword ptr [EDX + 0x438],0x3f800000 ; 00518347
    LEA ECX,[EDX + 0x20]                ; 00518351
        ;   Label: LAB_00518351
    MOV AH,byte ptr [EDX + 0x44c]       ; 00518354
    LEA EBX,[EDX + 0x30]                ; 0051835a
    TEST AH,AH                          ; 0051835d
    JNZ 0x0051846b                      ; 0051835f
        ;   XREF to: 0051846b (CONDITIONAL_JUMP)  ; LAB_0051846b
    LEA EAX,[EDX + 0x484]               ; 00518365
    LEA ESI,[EDX + 0x438]               ; 0051836b
    FLD float ptr [EAX]                 ; 00518371
    FMUL float ptr [ESI]                ; 00518373
    FLD float ptr [EAX + 0x4]           ; 00518375
    FMUL float ptr [ESI]                ; 00518378
    FLD float ptr [EAX + 0x8]           ; 0051837a
    FMUL float ptr [ESI]                ; 0051837d
    LEA EDI,[EBP + 0x5e]                ; 0051837f
    FXCH ST2                            ; 00518382
    FSTP float ptr [EBP + 0x22]         ; 00518384
    FSTP float ptr [EBP + 0x26]         ; 00518387
    LEA ESI,[EBP + 0x22]                ; 0051838a
    FSTP float ptr [EBP + 0x2a]         ; 0051838d
    MOVSD ES:EDI,ESI                    ; 00518390
    MOVSD ES:EDI,ESI                    ; 00518391
    MOVSD ES:EDI,ESI                    ; 00518392
    LEA EAX,[EDX + 0x478]               ; 00518393
    FLD float ptr [EDX + 0x438]         ; 00518399
    FLD1                                ; 0051839f
    FSUBRP                              ; 005183a1
    FLD float ptr [EAX]                 ; 005183a3
    FXCH                                ; 005183a5
    FSTP float ptr [EBP + 0x76]         ; 005183a7
    FMUL float ptr [EBP + 0x76]         ; 005183aa
    FLD float ptr [EAX + 0x4]           ; 005183ad
    FMUL float ptr [EBP + 0x76]         ; 005183b0
    FLD float ptr [EAX + 0x8]           ; 005183b3
    FMUL float ptr [EBP + 0x76]         ; 005183b6
    LEA EDI,[EBP + 0x6a]                ; 005183b9
    LEA ESI,[EBP + 0x46]                ; 005183bc
    FXCH ST2                            ; 005183bf
    FSTP float ptr [EBP + 0x46]         ; 005183c1
    FSTP float ptr [EBP + 0x4a]         ; 005183c4
    FSTP float ptr [EBP + 0x4e]         ; 005183c7
    MOVSD ES:EDI,ESI                    ; 005183ca
    MOVSD ES:EDI,ESI                    ; 005183cb
    MOVSD ES:EDI,ESI                    ; 005183cc
    FLD float ptr [EBP + 0x6a]          ; 005183cd
    FLD float ptr [EBP + 0x6e]          ; 005183d0
    FLD float ptr [EBP + 0x72]          ; 005183d3
    LEA EDI,[EBP + 0x3a]                ; 005183d6
    LEA ESI,[EBP + 0x2e]                ; 005183d9
    FXCH ST2                            ; 005183dc
    FADD float ptr [EBP + 0x5e]         ; 005183de
    FXCH                                ; 005183e1
    FADD float ptr [EBP + 0x62]         ; 005183e3
    FXCH ST2                            ; 005183e6
    FADD float ptr [EBP + 0x66]         ; 005183e8
    FXCH                                ; 005183eb
    FSTP float ptr [EBP + 0x2e]         ; 005183ed
    FXCH                                ; 005183f0
    FSTP float ptr [EBP + 0x32]         ; 005183f2
    FSTP float ptr [EBP + 0x36]         ; 005183f5
    MOVSD ES:EDI,ESI                    ; 005183f8
    MOVSD ES:EDI,ESI                    ; 005183f9
    MOVSD ES:EDI,ESI                    ; 005183fa
    MOV EAX,dword ptr [EBP + 0x3a]      ; 005183fb
    MOV dword ptr [ECX],EAX             ; 005183fe
    MOV EAX,dword ptr [EBP + 0x3e]      ; 00518400
    MOV dword ptr [ECX + 0x4],EAX       ; 00518403
    MOV EAX,dword ptr [EBP + 0x42]      ; 00518406
    MOV dword ptr [ECX + 0x8],EAX       ; 00518409
    LEA EAX,[EDX + 0x4a0]               ; 0051840c
    PUSH dword ptr [EDX + 0x438]        ; 00518412
    PUSH EAX                            ; 00518418
    ADD EDX,0x490                       ; 00518419
    PUSH EDX                            ; 0051841f
    LEA ESI,[EBP + 0x6]                 ; 00518420
    LEA EDI,[EBP + -0xa]                ; 00518423
    CALL FUN_00593df0                   ; 00518426
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined FUN_00593df0()
    LEA ESI,[EBP + 0x6]                 ; 0051842b
    LEA EAX,[EBP + -0xa]                ; 0051842e
    ADD ESP,0xc                         ; 00518431
    MOVSD ES:EDI,ESI                    ; 00518434
    MOVSD ES:EDI,ESI                    ; 00518435
    MOVSD ES:EDI,ESI                    ; 00518436
    MOVSD ES:EDI,ESI                    ; 00518437
    PUSH EAX                            ; 00518438
    LEA ESI,[EBP + 0x52]                ; 00518439
    LEA EDI,[EBP + 0x16]                ; 0051843c
    CALL FUN_005940b0                   ; 0051843f
        ;   XREF to: 005940b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005940b0()
    LEA ESI,[EBP + 0x52]                ; 00518444
    LEA EAX,[EBP + 0x16]                ; 00518447
    ADD ESP,0x4                         ; 0051844a
    MOVSD ES:EDI,ESI                    ; 0051844d
    MOVSD ES:EDI,ESI                    ; 0051844e
    MOVSD ES:EDI,ESI                    ; 0051844f
    CMP EBX,EAX                         ; 00518450
    JNZ 0x00518492                      ; 00518452
        ;   XREF to: 00518492 (CONDITIONAL_JUMP)  ; LAB_00518492
    LEA ESP,[EBP + 0x7e]                ; 00518454
        ;   Label: LAB_00518454
    POP EBP                             ; 00518457
    POP EDI                             ; 00518458
    POP ESI                             ; 00518459
    POP EBX                             ; 0051845a
    RET                                 ; 0051845b
    MOV dword ptr [EDX + 0x438],0x0     ; 0051845c
        ;   Label: LAB_0051845c
    JMP 0x00518338                      ; 00518466
        ;   XREF to: 00518338 (UNCONDITIONAL_JUMP)  ; LAB_00518338
    PUSH EBX                            ; 0051846b
        ;   Label: LAB_0051846b
    LEA EAX,[EDX + 0x46c]               ; 0051846c
    PUSH ECX                            ; 00518472
    MOV ECX,dword ptr [EAX]             ; 00518473
    MOV dword ptr [EBP + 0x7a],ECX      ; 00518475
    FILD dword ptr [EBP + 0x7a]         ; 00518478
    FMUL float ptr [EDX + 0x438]        ; 0051847b
    SUB ESP,0x4                         ; 00518481
    FSTP float ptr [ESP]                ; 00518484
    PUSH EAX                            ; 00518487
    CALL FUN_00438c40                   ; 00518488
        ;   XREF to: 00438c40 (UNCONDITIONAL_CALL)  ; undefined FUN_00438c40()
    ADD ESP,0x10                        ; 0051848d
    JMP 0x00518454                      ; 00518490
        ;   XREF to: 00518454 (UNCONDITIONAL_JUMP)  ; LAB_00518454
    MOV EAX,dword ptr [EBP + 0x16]      ; 00518492
        ;   Label: LAB_00518492
    MOV dword ptr [EBX],EAX             ; 00518495
    MOV EAX,dword ptr [EBP + 0x1a]      ; 00518497
    MOV dword ptr [EBX + 0x4],EAX       ; 0051849a
    MOV EAX,dword ptr [EBP + 0x1e]      ; 0051849d
    MOV dword ptr [EBX + 0x8],EAX       ; 005184a0
    LEA ESP,[EBP + 0x7e]                ; 005184a3
    POP EBP                             ; 005184a6
    POP EDI                             ; 005184a7
    POP ESI                             ; 005184a8
    POP EBX                             ; 005184a9
    RET                                 ; 005184aa

