; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_00401450(int param_1,int param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00402880 at 00402902
;
; Referenced Globals:
;   undefined4 DAT_005d2034
;   undefined4 DAT_005d203c
;   undefined4 DAT_005d2044
;   undefined4 DAT_005d204c
;   undefined4 DAT_005d2054
;   undefined4 DAT_00713638
;   undefined4 DAT_01c4e9f8
;   undefined4 DAT_01c4e9f9
;   undefined4 DAT_01c4e9fa
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401450
        ;   Label: FUN_00401450
    PUSH ESI                            ; 00401451
    PUSH EDI                            ; 00401452
    PUSH EBP                            ; 00401453
    SUB ESP,0x30                        ; 00401454
    MOV EBP,dword ptr [ESP + 0x48]      ; 00401457
    MOV ESI,dword ptr [ESP + 0x50]      ; 0040145b
    LEA EAX,[ESI*0x4 + 0x0]             ; 0040145f
    MOV ECX,0x1c4e9f8                   ; 00401466
    SUB EAX,ESI                         ; 0040146b
    ADD ECX,EAX                         ; 0040146d
    MOV EAX,dword ptr [ESP + 0x44]      ; 0040146f
    MOV dword ptr [ESP + 0x28],EAX      ; 00401473
    MOV dword ptr [ESP + 0x2c],EBP      ; 00401477
    FILD dword ptr [ESP + 0x28]         ; 0040147b
    FMUL ST0                            ; 0040147f
    FILD dword ptr [ESP + 0x2c]         ; 00401481
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00401485
    FMUL ST0                            ; 00401489
    MOV dword ptr [ESP + 0x2c],EAX      ; 0040148b
    FADDP                               ; 0040148f
    FILD dword ptr [ESP + 0x2c]         ; 00401491
    FMUL ST0                            ; 00401495
    FADDP                               ; 00401497
    FSQRT                               ; 00401499
    MOV EDX,0x7149f2ca                  ; 0040149b
    FMUL double ptr [0x005d2034]        ; 004014a0 | DAT_005d2034
    MOV dword ptr [ESP + 0x20],EDX      ; 004014a6
    MOV EBX,ESI                         ; 004014aa
    MOV EAX,dword ptr [ESP + 0x54]      ; 004014ac
    FSTP float ptr [ESP + 0x1c]         ; 004014b0
    CMP ESI,EAX                         ; 004014b4
    JG 0x0040156e                       ; 004014b6
        ;   XREF to: 0040156e (CONDITIONAL_JUMP)  ; LAB_0040156e
    SHL ESI,0x2                         ; 004014bc
    XOR EAX,EAX                         ; 004014bf
        ;   Label: LAB_004014bf
    MOV EDX,dword ptr [ESP + 0x44]      ; 004014c1
    MOV AL,byte ptr [ECX]               ; 004014c5 | DAT_01c4e9f8
    SUB EDX,EAX                         ; 004014c7
    MOV EAX,EDX                         ; 004014c9
    CDQ                                 ; 004014cb
    XOR EAX,EDX                         ; 004014cc
    SUB EAX,EDX                         ; 004014ce
    MOV dword ptr [ESP + 0x2c],EAX      ; 004014d0
    XOR EAX,EAX                         ; 004014d4
    MOV EDX,EBP                         ; 004014d6
    MOV AL,byte ptr [ECX + 0x1]         ; 004014d8 | DAT_01c4e9f9
    SUB EDX,EAX                         ; 004014db
    FILD dword ptr [ESP + 0x2c]         ; 004014dd
    MOV EAX,EDX                         ; 004014e1
    FSTP float ptr [ESP + 0x8]          ; 004014e3
    CDQ                                 ; 004014e7
    XOR EAX,EDX                         ; 004014e8
    SUB EAX,EDX                         ; 004014ea
    MOV dword ptr [ESP + 0x2c],EAX      ; 004014ec
    XOR EAX,EAX                         ; 004014f0
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004014f2
    MOV AL,byte ptr [ECX + 0x2]         ; 004014f6 | DAT_01c4e9fa
    SUB EDX,EAX                         ; 004014f9
    FILD dword ptr [ESP + 0x2c]         ; 004014fb
    MOV EAX,EDX                         ; 004014ff
    FSTP float ptr [ESP]                ; 00401501
    CDQ                                 ; 00401504
    XOR EAX,EDX                         ; 00401505
    SUB EAX,EDX                         ; 00401507
    FLD float ptr [ESP + 0x1c]          ; 00401509
    FSUB float ptr [ESI + 0x713638]     ; 0040150d | DAT_00713638
    MOV dword ptr [ESP + 0x2c],EAX      ; 00401513
    FABS                                ; 00401517
    FLD float ptr [ESP + 0x8]           ; 00401519
    FMUL ST0                            ; 0040151d
    FMUL double ptr [0x005d203c]        ; 0040151f | DAT_005d203c
    FLD float ptr [ESP]                 ; 00401525
    FMUL ST0                            ; 00401528
    FMUL double ptr [0x005d2044]        ; 0040152a | DAT_005d2044
    FADDP                               ; 00401530
    FILD dword ptr [ESP + 0x2c]         ; 00401532
    FMUL ST0                            ; 00401536
    FMUL double ptr [0x005d204c]        ; 00401538 | DAT_005d204c
    FADDP                               ; 0040153e
    FLD ST1                             ; 00401540
    FMULP ST2                           ; 00401542
    FXCH                                ; 00401544
    FMUL double ptr [0x005d2054]        ; 00401546 | DAT_005d2054
    FADDP                               ; 0040154c
    FST float ptr [ESP + 0x24]          ; 0040154e
    FCOMP float ptr [ESP + 0x20]        ; 00401552
    FNSTSW AX                           ; 00401556
    SAHF                                ; 00401558
    JC 0x00401581                       ; 00401559
        ;   XREF to: 00401581 (CONDITIONAL_JUMP)  ; LAB_00401581
    MOV EDX,dword ptr [ESP + 0x54]      ; 0040155b
        ;   Label: LAB_0040155b
    ADD ECX,0x3                         ; 0040155f
    INC EBX                             ; 00401562
    ADD ESI,0x4                         ; 00401563
    CMP EBX,EDX                         ; 00401566
    JLE 0x004014bf                      ; 00401568
        ;   XREF to: 004014bf (CONDITIONAL_JUMP)  ; LAB_004014bf
    MOV EAX,EDI                         ; 0040156e
        ;   Label: LAB_0040156e
    ADD ESP,0x30                        ; 00401570
    POP EBP                             ; 00401573
    POP EDI                             ; 00401574
    POP ESI                             ; 00401575
    POP EBX                             ; 00401576
    LEA EAX,[EAX]                       ; 00401577
    LEA EDX,[EDX]                       ; 0040157d
    RET                                 ; 00401580
    MOV EAX,dword ptr [ESP + 0x24]      ; 00401581
        ;   Label: LAB_00401581
    MOV EDI,EBX                         ; 00401585
    MOV dword ptr [ESP + 0x20],EAX      ; 00401587
    JMP 0x0040155b                      ; 0040158b
        ;   XREF to: 0040155b (UNCONDITIONAL_JUMP)  ; LAB_0040155b

