; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0049e3e0(undefined4 param_1,float *param_2,float param_3,float *param_4,float *param_5)
;
; Local Variables:
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
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_0052e940 at 0052ec61
;
; Referenced Globals:
;   undefined4 DAT_005d5812
;   undefined4 DAT_005d581a
;   undefined4 DAT_01c975f0
;   undefined4 DAT_01c97600
;   undefined4 DAT_01c97604
;   undefined4 DAT_01c97608
;   undefined4 DAT_01c9760c
;   undefined4 DAT_01c97610
;   undefined4 DAT_01c97614
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e3e0
        ;   Label: FUN_0049e3e0
    PUSH ESI                            ; 0049e3e1
    PUSH EDI                            ; 0049e3e2
    PUSH EBP                            ; 0049e3e3
    MOV EBP,ESP                         ; 0049e3e4
    SUB ESP,0x64                        ; 0049e3e6
    AND ESP,0xfffffff8                  ; 0049e3e9
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0049e3ec
    MOV EBX,dword ptr [EBP + 0x18]      ; 0049e3ef
    MOV dword ptr [ESP],EAX             ; 0049e3f2
    MOV EDX,0x1c975e4                   ; 0049e3f5
    XOR ECX,ECX                         ; 0049e3fa
    FLD float ptr [EDX + 0xc]           ; 0049e3fc | DAT_01c975f0 | DAT_01c9760c
        ;   Label: LAB_0049e3fc
    MOV dword ptr [ESP + 0x60],EDX      ; 0049e3ff
    FCOMP double ptr [0x005d5812]       ; 0049e403 | DAT_005d5812
    FNSTSW AX                           ; 0049e409
    SAHF                                ; 0049e40b
    JA 0x0049e420                       ; 0049e40c
        ;   XREF to: 0049e420 (CONDITIONAL_JUMP)  ; LAB_0049e420
    INC ECX                             ; 0049e40e
        ;   Label: LAB_0049e40e
    ADD EDX,0x1c                        ; 0049e40f
    CMP ECX,0xa                         ; 0049e412
    JL 0x0049e3fc                       ; 0049e415
        ;   XREF to: 0049e3fc (CONDITIONAL_JUMP)  ; LAB_0049e3fc
    XOR EAX,EAX                         ; 0049e417
    MOV ESP,EBP                         ; 0049e419
    POP EBP                             ; 0049e41b
    POP EDI                             ; 0049e41c
    POP ESI                             ; 0049e41d
    POP EBX                             ; 0049e41e
    RET                                 ; 0049e41f
    FLD float ptr [EBX]                 ; 0049e420
        ;   Label: LAB_0049e420
    FLD float ptr [EBX + 0x4]           ; 0049e422
    FLD float ptr [EBX + 0x8]           ; 0049e425
    LEA EDI,[ESP + 0x20]                ; 0049e428
    LEA ESI,[ESP + 0x14]                ; 0049e42c
    FXCH ST2                            ; 0049e430
    FSUB float ptr [EDX]                ; 0049e432 | DAT_01c97600
    FXCH                                ; 0049e434
    FSUB float ptr [EDX + 0x4]          ; 0049e436 | DAT_01c97604
    FXCH ST2                            ; 0049e439
    FSUB float ptr [EDX + 0x8]          ; 0049e43b | DAT_01c97608
    FXCH ST2                            ; 0049e43e
    FSTP float ptr [ESP + 0x18]         ; 0049e440
    FXCH                                ; 0049e444
    FSTP float ptr [ESP + 0x1c]         ; 0049e446
    FSTP float ptr [ESP + 0x14]         ; 0049e44a
    MOVSD ES:EDI,ESI                    ; 0049e44e
    MOVSD ES:EDI,ESI                    ; 0049e44f
    MOVSD ES:EDI,ESI                    ; 0049e450
    LEA EAX,[ESP + 0x44]                ; 0049e451
    LEA ESI,[ESP + 0x20]                ; 0049e455
    CMP EAX,ESI                         ; 0049e459
    JZ 0x0049e475                       ; 0049e45b
        ;   XREF to: 0049e475 (CONDITIONAL_JUMP)  ; LAB_0049e475
    MOV EAX,dword ptr [ESP + 0x20]      ; 0049e45d
    MOV dword ptr [ESP + 0x44],EAX      ; 0049e461
    MOV EAX,dword ptr [ESP + 0x24]      ; 0049e465
    MOV dword ptr [ESP + 0x48],EAX      ; 0049e469
    MOV EAX,dword ptr [ESP + 0x28]      ; 0049e46d
    MOV dword ptr [ESP + 0x4c],EAX      ; 0049e471
    FLD float ptr [ESP + 0x48]          ; 0049e475
        ;   Label: LAB_0049e475
    FMUL ST0                            ; 0049e479
    FLD float ptr [ESP + 0x44]          ; 0049e47b
    FMUL ST0                            ; 0049e47f
    FADDP                               ; 0049e481
    FLD float ptr [ESP + 0x4c]          ; 0049e483
    FMUL ST0                            ; 0049e487
    FADDP                               ; 0049e489
    FSQRT                               ; 0049e48b
    MOV EAX,dword ptr [ESP + 0x60]      ; 0049e48d
    FLD float ptr [EAX + 0x10]          ; 0049e491 | DAT_01c97610
    FMUL double ptr [0x005d5812]        ; 0049e494 | DAT_005d5812
    FADD float ptr [ESP]                ; 0049e49a
    FXCH                                ; 0049e49d
    FST float ptr [ESP + 0x4]           ; 0049e49f
    FCOMPP                              ; 0049e4a3
    FNSTSW AX                           ; 0049e4a5
    SAHF                                ; 0049e4a7
    JNC 0x0049e40e                      ; 0049e4a8
        ;   XREF to: 0049e40e (CONDITIONAL_JUMP)  ; LAB_0049e40e
    MOV EDX,dword ptr [EBP + 0x20]      ; 0049e4ae
    TEST EDX,EDX                        ; 0049e4b1
    JZ 0x0049e53b                       ; 0049e4b3
        ;   XREF to: 0049e53b (CONDITIONAL_JUMP)  ; LAB_0049e53b
    FLD1                                ; 0049e4b9
    FLD float ptr [ESP + 0x44]          ; 0049e4bb
    FXCH                                ; 0049e4bf
    FDIV float ptr [ESP + 0x4]          ; 0049e4c1
    FXCH                                ; 0049e4c5
    FMUL ST1                            ; 0049e4c7
    FLD float ptr [ESP + 0x48]          ; 0049e4c9
    FMUL ST2                            ; 0049e4cd
    FLD float ptr [ESP + 0x4c]          ; 0049e4cf
    FMULP ST3                           ; 0049e4d3
    LEA EDI,[ESP + 0x38]                ; 0049e4d5
    LEA ESI,[ESP + 0x2c]                ; 0049e4d9
    FXCH                                ; 0049e4dd
    FSTP float ptr [ESP + 0x2c]         ; 0049e4df
    FSTP float ptr [ESP + 0x30]         ; 0049e4e3
    FSTP float ptr [ESP + 0x34]         ; 0049e4e7
    MOVSD ES:EDI,ESI                    ; 0049e4eb
    MOVSD ES:EDI,ESI                    ; 0049e4ec
    MOVSD ES:EDI,ESI                    ; 0049e4ed
    FLD float ptr [0x005d581a]          ; 0049e4ee | DAT_005d581a
    FLD float ptr [ESP + 0x38]          ; 0049e4f4
    FMUL ST1                            ; 0049e4f8
    FLD float ptr [ESP + 0x3c]          ; 0049e4fa
    FMUL ST2                            ; 0049e4fe
    FLD float ptr [ESP + 0x40]          ; 0049e500
    FMULP ST3                           ; 0049e504
    LEA EAX,[ESP + 0x50]                ; 0049e506
    LEA EDI,[ESP + 0x50]                ; 0049e50a
    LEA ESI,[ESP + 0x8]                 ; 0049e50e
    FXCH                                ; 0049e512
    FSTP float ptr [ESP + 0x8]          ; 0049e514
    FSTP float ptr [ESP + 0xc]          ; 0049e518
    FSTP float ptr [ESP + 0x10]         ; 0049e51c
    MOVSD ES:EDI,ESI                    ; 0049e520
    MOVSD ES:EDI,ESI                    ; 0049e521
    MOVSD ES:EDI,ESI                    ; 0049e522
    CMP EAX,EDX                         ; 0049e523
    JZ 0x0049e53b                       ; 0049e525
        ;   XREF to: 0049e53b (CONDITIONAL_JUMP)  ; LAB_0049e53b
    MOV EAX,dword ptr [ESP + 0x50]      ; 0049e527
    MOV dword ptr [EDX],EAX             ; 0049e52b
    MOV EAX,dword ptr [ESP + 0x54]      ; 0049e52d
    MOV dword ptr [EDX + 0x4],EAX       ; 0049e531
    MOV EAX,dword ptr [ESP + 0x58]      ; 0049e534
    MOV dword ptr [EDX + 0x8],EAX       ; 0049e538
    MOV EBX,dword ptr [EBP + 0x24]      ; 0049e53b
        ;   Label: LAB_0049e53b
    TEST EBX,EBX                        ; 0049e53e
    JZ 0x0049e54b                       ; 0049e540
        ;   XREF to: 0049e54b (CONDITIONAL_JUMP)  ; LAB_0049e54b
    MOV EAX,dword ptr [ESP + 0x60]      ; 0049e542
    MOV EDX,dword ptr [EAX + 0x14]      ; 0049e546 | DAT_01c97614
    MOV dword ptr [EBX],EDX             ; 0049e549
    MOV EAX,0x1                         ; 0049e54b
        ;   Label: LAB_0049e54b
    MOV ESP,EBP                         ; 0049e550
    POP EBP                             ; 0049e552
    POP EDI                             ; 0049e553
    POP ESI                             ; 0049e554
    POP EBX                             ; 0049e555
    RET                                 ; 0049e556

