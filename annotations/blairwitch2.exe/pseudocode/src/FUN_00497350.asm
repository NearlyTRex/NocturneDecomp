; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00497350(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined        Stack[-0xc4]:1  local_c4
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined        Stack[-0xa0]:1  local_a0
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined        Stack[-0x64]:1  local_64
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_0049c780 at 0049ca28
;
; Referenced Globals:
;   undefined4 DAT_005d5462
;   undefined4 DAT_005d546a
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   FUN_0044e6a0
;   FUN_0046b2b0
;   FUN_0046b350
;   FUN_005838f0
;   FUN_005b7ff0
;   thunk_FUN_004e9810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00497350
        ;   Label: FUN_00497350
    PUSH ESI                            ; 00497351
    PUSH EDI                            ; 00497352
    PUSH EBP                            ; 00497353
    MOV EBP,ESP                         ; 00497354
    SUB ESP,0xc4                        ; 00497356
    AND ESP,0xfffffff8                  ; 0049735c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049735f
    LEA EAX,[EBX + 0xc]                 ; 00497362
    LEA EDI,[ESP + 0x20]                ; 00497365
    LEA ESI,[ESP + 0x50]                ; 00497369
    FLD float ptr [EAX]                 ; 0049736d
    FLD float ptr [EAX + 0x4]           ; 0049736f
    FLD float ptr [EAX + 0x8]           ; 00497372
    FXCH ST2                            ; 00497375
    FSUB float ptr [EBX]                ; 00497377
    FXCH                                ; 00497379
    FSUB float ptr [EBX + 0x4]          ; 0049737b
    FXCH ST2                            ; 0049737e
    FSUB float ptr [EBX + 0x8]          ; 00497380
    FXCH                                ; 00497383
    FSTP float ptr [ESP + 0x50]         ; 00497385
    FXCH                                ; 00497389
    FSTP float ptr [ESP + 0x54]         ; 0049738b
    FSTP float ptr [ESP + 0x58]         ; 0049738f
    MOVSD ES:EDI,ESI                    ; 00497393
    MOVSD ES:EDI,ESI                    ; 00497394
    MOVSD ES:EDI,ESI                    ; 00497395
    FLD float ptr [ESP + 0x24]          ; 00497396
    FMUL ST0                            ; 0049739a
    FLD float ptr [ESP + 0x20]          ; 0049739c
    FMUL ST0                            ; 004973a0
    FADDP                               ; 004973a2
    FLD float ptr [ESP + 0x28]          ; 004973a4
    FMUL ST0                            ; 004973a8
    FADDP                               ; 004973aa
    FSQRT                               ; 004973ac
    MOV EAX,dword ptr [EBX + 0x18]      ; 004973ae
    LEA EDI,[ESP + 0x38]                ; 004973b1
    LEA ESI,[ESP + 0x68]                ; 004973b5
    FLD float ptr [EAX + 0x344]         ; 004973b9
    FLD float ptr [EAX + 0x348]         ; 004973bf
    LEA EDX,[EAX + 0x338]               ; 004973c5
    FLD float ptr [EAX + 0x34c]         ; 004973cb
    FXCH ST2                            ; 004973d1
    FSUB float ptr [EDX]                ; 004973d3
    FXCH                                ; 004973d5
    FSUB float ptr [EDX + 0x4]          ; 004973d7
    FXCH ST2                            ; 004973da
    FSUB float ptr [EDX + 0x8]          ; 004973dc
    FXCH                                ; 004973df
    FSTP float ptr [ESP + 0x68]         ; 004973e1
    FXCH                                ; 004973e5
    FSTP float ptr [ESP + 0x6c]         ; 004973e7
    FSTP float ptr [ESP + 0x70]         ; 004973eb
    MOVSD ES:EDI,ESI                    ; 004973ef
    MOVSD ES:EDI,ESI                    ; 004973f0
    MOVSD ES:EDI,ESI                    ; 004973f1
    FSUB float ptr [ESP + 0x40]         ; 004973f2
    FST float ptr [ESP]                 ; 004973f6
    FLDZ                                ; 004973f9
    FCOMPP                              ; 004973fb
    FNSTSW AX                           ; 004973fd
    SAHF                                ; 004973ff
    JNC 0x00497539                      ; 00497400
        ;   XREF to: 00497539 (CONDITIONAL_JUMP)  ; LAB_00497539
    FLD float ptr [EBX + 0x1c]          ; 00497406
    MOV EDX,0x2                         ; 00497409
    FLDZ                                ; 0049740e
    MOV dword ptr [ESP + 0xb0],EDX      ; 00497410
    FCOMPP                              ; 00497417
    FNSTSW AX                           ; 00497419
    SAHF                                ; 0049741b
    JNC 0x00497446                      ; 0049741c
        ;   XREF to: 00497446 (CONDITIONAL_JUMP)  ; LAB_00497446
    FLD float ptr [ESP]                 ; 0049741e
    FDIV float ptr [EBX + 0x1c]         ; 00497421
    CALL FUN_005b7ff0                   ; 00497424
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xb0]        ; 00497429
    MOV ECX,dword ptr [ESP + 0xb0]      ; 00497430
    CMP ECX,EDX                         ; 00497437
    JGE 0x00497540                      ; 00497439
        ;   XREF to: 00497540 (CONDITIONAL_JUMP)  ; LAB_00497540
    MOV dword ptr [ESP + 0xb0],EDX      ; 0049743f
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00497446
        ;   Label: LAB_00497446
    FLD1                                ; 0049744d
    MOV dword ptr [ESP + 0xc0],EAX      ; 0049744f
    FLD float ptr [ESP + 0x20]          ; 00497456
    FILD dword ptr [ESP + 0xc0]         ; 0049745a
    FSTP float ptr [ESP + 0xb4]         ; 00497461
    FXCH                                ; 00497468
    FDIV float ptr [ESP + 0xb4]         ; 0049746a
    FXCH                                ; 00497471
    FMUL ST1                            ; 00497473
    FLD float ptr [ESP + 0x24]          ; 00497475
    FMUL ST2                            ; 00497479
    FLD float ptr [ESP + 0x28]          ; 0049747b
    FMULP ST3                           ; 0049747f
    LEA EDI,[ESP + 0x80]                ; 00497481
    LEA ESI,[ESP + 0x2c]                ; 00497488
    LEA EAX,[ESP + 0x20]                ; 0049748c
    FXCH                                ; 00497490
    FSTP float ptr [ESP + 0x2c]         ; 00497492
    FSTP float ptr [ESP + 0x30]         ; 00497496
    FSTP float ptr [ESP + 0x34]         ; 0049749a
    MOVSD ES:EDI,ESI                    ; 0049749e
    MOVSD ES:EDI,ESI                    ; 0049749f
    MOVSD ES:EDI,ESI                    ; 004974a0
    PUSH EAX                            ; 004974a1
    LEA ESI,[ESP + 0x18]                ; 004974a2
    LEA EDI,[ESP + 0x48]                ; 004974a6
    CALL FUN_005838f0                   ; 004974aa
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005838f0()
    LEA ESI,[ESP + 0x18]                ; 004974af
    ADD ESP,0x4                         ; 004974b3
    XOR EDX,EDX                         ; 004974b6
    MOV ECX,dword ptr [ESP + 0xb0]      ; 004974b8
    MOV dword ptr [ESP + 0xb8],EDX      ; 004974bf
    MOVSD ES:EDI,ESI                    ; 004974c6
    MOVSD ES:EDI,ESI                    ; 004974c7
    MOVSD ES:EDI,ESI                    ; 004974c8
    TEST ECX,ECX                        ; 004974c9
    JLE 0x00497539                      ; 004974cb
        ;   XREF to: 00497539 (CONDITIONAL_JUMP)  ; LAB_00497539
    LEA EAX,[ECX + -0x1]                ; 004974cd
    MOV dword ptr [ESP + 0xac],EAX      ; 004974d0
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004974d7
        ;   Label: LAB_004974d7
    MOV dword ptr [ESP + 0xc0],EAX      ; 004974de
    FILD dword ptr [ESP + 0xc0]         ; 004974e5
    MOV EAX,dword ptr [ESP + 0xac]      ; 004974ec
    FST float ptr [ESP + 0xbc]          ; 004974f3
    FMUL float ptr [0x005d5462]         ; 004974fa | DAT_005d5462
    MOV dword ptr [ESP + 0xc0],EAX      ; 00497500
    FILD dword ptr [ESP + 0xc0]         ; 00497507
    FDIVP                               ; 0049750e
    FST float ptr [ESP + 0x4]           ; 00497510
    FCOMP double ptr [0x005d546a]       ; 00497514 | DAT_005d546a
    FNSTSW AX                           ; 0049751a
    SAHF                                ; 0049751c
    JA 0x00497559                       ; 0049751d
        ;   XREF to: 00497559 (CONDITIONAL_JUMP)  ; LAB_00497559
    MOV ESI,dword ptr [ESP + 0xb8]      ; 0049751f
        ;   Label: LAB_0049751f
    INC ESI                             ; 00497526
    MOV EDI,dword ptr [ESP + 0xb0]      ; 00497527
    MOV dword ptr [ESP + 0xb8],ESI      ; 0049752e
    CMP ESI,EDI                         ; 00497535
    JL 0x004974d7                       ; 00497537
        ;   XREF to: 004974d7 (CONDITIONAL_JUMP)  ; LAB_004974d7
    MOV ESP,EBP                         ; 00497539
        ;   Label: LAB_00497539
    POP EBP                             ; 0049753b
    POP EDI                             ; 0049753c
    POP ESI                             ; 0049753d
    POP EBX                             ; 0049753e
    RET                                 ; 0049753f
    CMP ECX,0x64                        ; 00497540
        ;   Label: LAB_00497540
    JLE 0x00497446                      ; 00497543
        ;   XREF to: 00497446 (CONDITIONAL_JUMP)  ; LAB_00497446
    MOV dword ptr [ESP + 0xb0],0x64     ; 00497549
    JMP 0x00497446                      ; 00497554
        ;   XREF to: 00497446 (UNCONDITIONAL_JUMP)  ; LAB_00497446
    FLD float ptr [ESP + 0xbc]          ; 00497559
        ;   Label: LAB_00497559
    FLD float ptr [ESP + 0x80]          ; 00497560
    FMUL ST1                            ; 00497567
    FLD float ptr [ESP + 0x84]          ; 00497569
    FMUL ST2                            ; 00497570
    FLD float ptr [ESP + 0x88]          ; 00497572
    FMULP ST3                           ; 00497579
    LEA EDI,[ESP + 0x98]                ; 0049757b
    LEA EAX,[ESP + 0x74]                ; 00497582
    LEA ESI,[ESP + 0x8c]                ; 00497586
    PUSH EAX                            ; 0049758d
    FXCH                                ; 0049758e
    FSTP float ptr [ESP + 0x90]         ; 00497590
    FSTP float ptr [ESP + 0x94]         ; 00497597
    FSTP float ptr [ESP + 0x98]         ; 0049759e
    MOV EAX,[0x0060b280]                ; 004975a5 | DAT_0060b280
    MOVSD ES:EDI,ESI                    ; 004975aa
    MOVSD ES:EDI,ESI                    ; 004975ab
    MOVSD ES:EDI,ESI                    ; 004975ac
    PUSH EAX                            ; 004975ad | DAT_01ba5c50
    FLD float ptr [EBX]                 ; 004975ae
    FLD float ptr [EBX + 0x4]           ; 004975b0
    FLD float ptr [EBX + 0x8]           ; 004975b3
    LEA EDI,[ESP + 0x7c]                ; 004975b6
    LEA ESI,[ESP + 0x64]                ; 004975ba
    FXCH ST2                            ; 004975be
    FADD float ptr [ESP + 0xa0]         ; 004975c0
    FXCH                                ; 004975c7
    FADD float ptr [ESP + 0xa4]         ; 004975c9
    FXCH ST2                            ; 004975d0
    FADD float ptr [ESP + 0xa8]         ; 004975d2
    FXCH                                ; 004975d9
    FSTP float ptr [ESP + 0x64]         ; 004975db
    FXCH                                ; 004975df
    FSTP float ptr [ESP + 0x68]         ; 004975e1
    FSTP float ptr [ESP + 0x6c]         ; 004975e5
    MOVSD ES:EDI,ESI                    ; 004975e9
    MOVSD ES:EDI,ESI                    ; 004975ea
    MOVSD ES:EDI,ESI                    ; 004975eb
    CALL FUN_0046b2b0                   ; 004975ec
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b2b0()
    ADD ESP,0x8                         ; 004975f1
    LEA EAX,[ESP + 0x8]                 ; 004975f4
    PUSH EAX                            ; 004975f8
    LEA EAX,[ESP + 0x48]                ; 004975f9
    XOR EDX,EDX                         ; 004975fd
    PUSH EAX                            ; 004975ff
    MOV EDI,dword ptr [0x0060b280]      ; 00497600 | DAT_0060b280
    MOV dword ptr [ESP + 0x10],EDX      ; 00497606
    PUSH EDI                            ; 0049760a | DAT_01ba5c50
    MOV dword ptr [ESP + 0x18],EDX      ; 0049760b
    MOV dword ptr [ESP + 0x1c],EDX      ; 0049760f
    CALL FUN_0046b350                   ; 00497613
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b350()
    ADD ESP,0xc                         ; 00497618
    FLD float ptr [ESP + 0x4]           ; 0049761b
    CALL FUN_005b7ff0                   ; 0049761f
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xc0]        ; 00497624
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0049762b
    PUSH EAX                            ; 00497632
    XOR ESI,ESI                         ; 00497633
    PUSH ESI                            ; 00497635
    PUSH ESI                            ; 00497636
    MOV EDX,dword ptr [EBX + 0x18]      ; 00497637
    PUSH EDX                            ; 0049763a
    CALL FUN_0044e6a0                   ; 0049763b
        ;   XREF to: 0044e6a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044e6a0()
    ADD ESP,0x10                        ; 00497640
    MOV ECX,dword ptr [0x0060b280]      ; 00497643 | DAT_0060b280
    PUSH ECX                            ; 00497649 | DAT_01ba5c50
    CALL thunk_FUN_004e9810             ; 0049764a
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e9810()
    ADD ESP,0x4                         ; 0049764f
    JMP 0x0049751f                      ; 00497652
        ;   XREF to: 0049751f (UNCONDITIONAL_JUMP)  ; LAB_0049751f

