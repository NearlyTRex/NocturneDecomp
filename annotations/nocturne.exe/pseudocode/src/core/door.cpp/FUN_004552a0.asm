; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004552a0(int param_1)
;
; Local Variables:
; undefined        Stack[-0xc8]:1  local_c8
;
; Referenced Globals:
;   undefined1* switchdataD_0045528c = 004552da
;   string s_..\\core\\door.cpp_0057d077
;   string s_CDoor::reposition_-_Unknown_type_0057d088
;   undefined4 DAT_0057d0aa
;   undefined4 DAT_0057d0b2
;   undefined4 DAT_0057d0ba
;   undefined4 DAT_0057d0c2
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_0040a000
;   FUN_0040a200
;   FUN_0040a240
;   FUN_0040dda0
;   FUN_0044da40
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004552a0
        ;   Label: FUN_004552a0
    PUSH ESI                            ; 004552a1
    PUSH EDI                            ; 004552a2
    PUSH EBP                            ; 004552a3
    MOV EBP,ESP                         ; 004552a4
    SUB ESP,0xc8                        ; 004552a6
    AND ESP,0xfffffff8                  ; 004552ac
    MOV EBX,dword ptr [EBP + 0x14]      ; 004552af
    LEA EAX,[ESP + 0x10]                ; 004552b2
    PUSH EAX                            ; 004552b6
    MOV ESI,dword ptr [EBX + 0x14c]     ; 004552b7
    PUSH EBX                            ; 004552bd
    CALL dword ptr [ESI + 0x14]         ; 004552be
    MOV EAX,dword ptr [EBX + 0x2d0]     ; 004552c1
    ADD ESP,0x8                         ; 004552c7
    CMP EAX,0x3                         ; 004552ca
    JA 0x00455559                       ; 004552cd
        ;   XREF to: 00455559 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x45528c]  ; 004552d3 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    LEA ESI,[EBX + 0x20]                ; 004552da
        ;   Label: caseD_0
    MOV dword ptr [EBX + 0x30],0x0      ; 004552dd
    LEA EAX,[EBX + 0x98c]               ; 004552e4
    MOV dword ptr [EBX + 0x38],0x0      ; 004552ea
    MOV EDX,dword ptr [EAX]             ; 004552f1
    MOV dword ptr [ESI],EDX             ; 004552f3
    MOV EDX,dword ptr [EAX + 0x4]       ; 004552f5
    MOV dword ptr [ESI + 0x4],EDX       ; 004552f8
    MOV EDX,dword ptr [EAX + 0x8]       ; 004552fb
    MOV dword ptr [ESI + 0x8],EDX       ; 004552fe
    CMP dword ptr [EBX + 0x2dc],0x0     ; 00455301
    JNZ 0x004553b3                      ; 00455308
        ;   XREF to: 004553b3 (CONDITIONAL_JUMP)  ; LAB_004553b3
    FLD float ptr [EBX + 0x9a4]         ; 0045530e
    FMUL double ptr [0x0057d0aa]        ; 00455314 | DAT_0057d0aa
    FADD float ptr [EBX + 0x99c]        ; 0045531a
    FSTP float ptr [EBX + 0x34]         ; 00455320
        ;   Label: LAB_00455320
    PUSH EBX                            ; 00455323
    CALL FUN_0040a000                   ; 00455324
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a000()
    ADD ESP,0x4                         ; 00455329
    FLD float ptr [ESP + 0x1c]          ; 0045532c
    FST double ptr [ESP + 0x8]          ; 00455330
    FABS                                ; 00455334
    FLD float ptr [ESP + 0x10]          ; 00455336
    FST double ptr [ESP]                ; 0045533a
    FABS                                ; 0045533d
    FCOMPP                              ; 0045533f
    FNSTSW AX                           ; 00455341
    SAHF                                ; 00455343
    JBE 0x004553ca                      ; 00455344
        ;   XREF to: 004553ca (CONDITIONAL_JUMP)  ; LAB_004553ca
    FLD double ptr [ESP]                ; 0045534a
    FADD double ptr [0x0057d0c2]        ; 0045534d | DAT_0057d0c2
    FSTP float ptr [EBX + 0x9b4]        ; 00455353
        ;   Label: LAB_00455353
    LEA ESI,[EBX + 0x9b4]               ; 00455359
    PUSH ESI                            ; 0045535f
    LEA EAX,[ESP + 0x8c]                ; 00455360
    PUSH EAX                            ; 00455367
    MOV dword ptr [EBX + 0x9b8],0x40600000 ; 00455368
    PUSH EBX                            ; 00455372
    MOV dword ptr [EBX + 0x9bc],0x0     ; 00455373
    CALL FUN_0040a240                   ; 0045537d
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a240()
    ADD ESP,0xc                         ; 00455382
        ;   Label: LAB_00455382
    CMP ESI,EAX                         ; 00455385
    JZ 0x00455399                       ; 00455387
        ;   XREF to: 00455399 (CONDITIONAL_JUMP)  ; LAB_00455399
    MOV EDX,dword ptr [EAX]             ; 00455389
    MOV dword ptr [ESI],EDX             ; 0045538b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045538d
    MOV dword ptr [ESI + 0x4],EDX       ; 00455390
    MOV EDX,dword ptr [EAX + 0x8]       ; 00455393
    MOV dword ptr [ESI + 0x8],EDX       ; 00455396
    FLD float ptr [EBX + 0x9c4]         ; 00455399
        ;   Label: LAB_00455399
    FLDZ                                ; 0045539f
    FCOMPP                              ; 004553a1
    FNSTSW AX                           ; 004553a3
    SAHF                                ; 004553a5
    JC 0x00455581                       ; 004553a6
        ;   XREF to: 00455581 (CONDITIONAL_JUMP)  ; LAB_00455581
    MOV ESP,EBP                         ; 004553ac
    POP EBP                             ; 004553ae
    POP EDI                             ; 004553af
    POP ESI                             ; 004553b0
    POP EBX                             ; 004553b1
    RET                                 ; 004553b2
    FLD float ptr [EBX + 0x9a4]         ; 004553b3
        ;   Label: LAB_004553b3
    FMUL double ptr [0x0057d0aa]        ; 004553b9 | DAT_0057d0aa
    FSUBR float ptr [EBX + 0x99c]       ; 004553bf
    JMP 0x00455320                      ; 004553c5
        ;   XREF to: 00455320 (UNCONDITIONAL_JUMP)  ; LAB_00455320
    FLD double ptr [ESP + 0x8]          ; 004553ca
        ;   Label: LAB_004553ca
    FADD double ptr [0x0057d0ba]        ; 004553ce | DAT_0057d0ba
    JMP 0x00455353                      ; 004553d4
        ;   XREF to: 00455353 (UNCONDITIONAL_JUMP)  ; LAB_00455353
    FLD float ptr [EBX + 0x990]         ; 004553d9
        ;   Label: caseD_1
    FADD float ptr [EBX + 0x9a4]        ; 004553df
    MOV EAX,0x40600000                  ; 004553e5
    FSTP float ptr [EBX + 0x24]         ; 004553ea
    MOV dword ptr [ESP + 0x98],EAX      ; 004553ed
    LEA EAX,[ESP + 0x94]                ; 004553f4
    PUSH EAX                            ; 004553fb
    LEA EAX,[ESP + 0x68]                ; 004553fc
    PUSH EAX                            ; 00455400
    XOR EDI,EDI                         ; 00455401
    PUSH EBX                            ; 00455403
    MOV dword ptr [ESP + 0xa0],EDI      ; 00455404
    MOV dword ptr [ESP + 0xa8],EDI      ; 0045540b
    CALL FUN_0040a240                   ; 00455412
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a240()
    LEA ESI,[EBX + 0x9b4]               ; 00455417
    JMP 0x00455382                      ; 0045541d
        ;   XREF to: 00455382 (UNCONDITIONAL_JUMP)  ; LAB_00455382
    CMP dword ptr [EBX + 0x2d4],0x1     ; 00455422
        ;   Label: caseD_2
    JZ 0x004554c3                       ; 00455429
        ;   XREF to: 004554c3 (CONDITIONAL_JUMP)  ; LAB_004554c3
    FLD float ptr [EBX + 0x9a4]         ; 0045542f
    FCHS                                ; 00455435
    FSTP float ptr [ESP + 0x34]         ; 00455437
    LEA EAX,[ESP + 0x34]                ; 0045543b
        ;   Label: LAB_0045543b
    PUSH EAX                            ; 0045543f
    LEA EAX,[ESP + 0xb0]                ; 00455440
    XOR EDI,EDI                         ; 00455447
    PUSH EAX                            ; 00455449
    LEA EAX,[EBX + 0x3c]                ; 0045544a
    MOV dword ptr [ESP + 0x40],EDI      ; 0045544d
    PUSH EAX                            ; 00455451
    LEA ESI,[EBX + 0x98c]               ; 00455452
    MOV dword ptr [ESP + 0x48],EDI      ; 00455458
    CALL FUN_0044da40                   ; 0045545c
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined FUN_0044da40()
    FLD float ptr [ESI]                 ; 00455461
    FADD float ptr [EAX]                ; 00455463
    ADD ESP,0xc                         ; 00455465
    FSTP float ptr [ESP + 0x58]         ; 00455468
    FLD float ptr [ESI + 0x4]           ; 0045546c
    FADD float ptr [EAX + 0x4]          ; 0045546f
    FSTP float ptr [ESP + 0x5c]         ; 00455472
    FLD float ptr [ESI + 0x8]           ; 00455476
    LEA ESI,[EBX + 0x20]                ; 00455479
    FADD float ptr [EAX + 0x8]          ; 0045547c
    MOV EAX,dword ptr [ESP + 0x58]      ; 0045547f
    FSTP float ptr [ESP + 0x60]         ; 00455483
    MOV dword ptr [ESI],EAX             ; 00455487
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00455489
    MOV dword ptr [ESI + 0x4],EAX       ; 0045548d
    MOV EAX,dword ptr [ESP + 0x60]      ; 00455490
    MOV dword ptr [ESI + 0x8],EAX       ; 00455494
    LEA EAX,[ESP + 0x4c]                ; 00455497
    PUSH EAX                            ; 0045549b
    LEA EAX,[ESP + 0x74]                ; 0045549c
    PUSH EAX                            ; 004554a0
    MOV ECX,0x40600000                  ; 004554a1
    MOV dword ptr [ESP + 0x54],EDI      ; 004554a6
    PUSH EBX                            ; 004554aa
    MOV dword ptr [ESP + 0x5c],ECX      ; 004554ab
    MOV dword ptr [ESP + 0x60],EDI      ; 004554af
    CALL FUN_0040a240                   ; 004554b3
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a240()
    LEA ESI,[EBX + 0x9b4]               ; 004554b8
    JMP 0x00455382                      ; 004554be
        ;   XREF to: 00455382 (UNCONDITIONAL_JUMP)  ; LAB_00455382
    MOV EAX,dword ptr [EBX + 0x9a4]     ; 004554c3
        ;   Label: LAB_004554c3
    MOV dword ptr [ESP + 0x34],EAX      ; 004554c9
    JMP 0x0045543b                      ; 004554cd
        ;   XREF to: 0045543b (UNCONDITIONAL_JUMP)  ; LAB_0045543b
    FLD float ptr [EBX + 0x9a4]         ; 004554d2
        ;   Label: caseD_3
    FMUL double ptr [0x0057d0aa]        ; 004554d8 | DAT_0057d0aa
    PUSH EBX                            ; 004554de
    FSTP float ptr [EBX + 0x30]         ; 004554df
    CALL FUN_0040a000                   ; 004554e2
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a000()
    ADD ESP,0x4                         ; 004554e7
    FLD float ptr [ESP + 0x14]          ; 004554ea
    FLD float ptr [ESP + 0x10]          ; 004554ee
    FADD float ptr [ESP + 0x1c]         ; 004554f2
    FXCH                                ; 004554f6
    FADD float ptr [ESP + 0x20]         ; 004554f8
    FXCH                                ; 004554fc
    FST float ptr [ESP + 0x28]          ; 004554fe
    FLD float ptr [0x0057d0b2]          ; 00455502 | DAT_0057d0b2
    FXCH                                ; 00455508
    FMUL ST1                            ; 0045550a
    FXCH ST2                            ; 0045550c
    FST float ptr [ESP + 0x2c]          ; 0045550e
    FMUL ST1                            ; 00455512
    LEA EAX,[ESP + 0x7c]                ; 00455514
    FLD float ptr [ESP + 0x18]          ; 00455518
    PUSH EAX                            ; 0045551c
    FADD float ptr [ESP + 0x28]         ; 0045551d
    LEA EAX,[ESP + 0xa4]                ; 00455521
    FST float ptr [ESP + 0x34]          ; 00455528
    PUSH EAX                            ; 0045552c
    FMULP ST2                           ; 0045552d
    PUSH EBX                            ; 0045552f
    FXCH ST2                            ; 00455530
    FSTP float ptr [ESP + 0x88]         ; 00455532
    FXCH                                ; 00455539
    FSTP float ptr [ESP + 0x8c]         ; 0045553b
    FSTP float ptr [ESP + 0x90]         ; 00455542
    CALL FUN_0040a240                   ; 00455549
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a240()
    LEA ESI,[EBX + 0x9b4]               ; 0045554e
    JMP 0x00455382                      ; 00455554
        ;   XREF to: 00455382 (UNCONDITIONAL_JUMP)  ; LAB_00455382
    MOV EDX,0x57d077                    ; 00455559 | = "..\\core\\door.cpp"
        ;   Label: default
    MOV ECX,0xf8                        ; 0045555e
    PUSH 0x57d088                       ; 00455563 | = "CDoor::reposition - Unknown type"
    MOV dword ptr [0x01cc4800],EDX      ; 00455568 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0045556e | DAT_01cc4804
    CALL FUN_004c8440                   ; 00455574
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00455579
    JMP 0x00455399                      ; 0045557c
        ;   XREF to: 00455399 (UNCONDITIONAL_JUMP)  ; LAB_00455399
    PUSH dword ptr [EBX + 0x9c4]        ; 00455581
        ;   Label: LAB_00455581
    FLD float ptr [EBX + 0x9c4]         ; 00455587
    SUB ESP,0x4                         ; 0045558d
    FCHS                                ; 00455590
    FSTP float ptr [ESP]                ; 00455592
    CALL FUN_0040dda0                   ; 00455595
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0xcc],EAX      ; 0045559a
    XOR ESI,ESI                         ; 004555a1
    FLD float ptr [ESP + 0xcc]          ; 004555a3
    ADD ESP,0x8                         ; 004555aa
    MOV dword ptr [ESP + 0xbc],ESI      ; 004555ad
    FSTP float ptr [ESP + 0xb8]         ; 004555b4
    PUSH dword ptr [EBX + 0x9c4]        ; 004555bb
    FLD float ptr [EBX + 0x9c4]         ; 004555c1
    SUB ESP,0x4                         ; 004555c7
    FCHS                                ; 004555ca
    FSTP float ptr [ESP]                ; 004555cc
    CALL FUN_0040dda0                   ; 004555cf
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0xcc],EAX      ; 004555d4
    FLD float ptr [ESP + 0xcc]          ; 004555db
    ADD ESP,0x8                         ; 004555e2
    LEA EAX,[ESP + 0xb8]                ; 004555e5
    PUSH EAX                            ; 004555ec
    LEA EAX,[ESP + 0x44]                ; 004555ed
    PUSH EAX                            ; 004555f1
    PUSH EBX                            ; 004555f2
    FSTP float ptr [ESP + 0xcc]         ; 004555f3
    CALL FUN_0040a200                   ; 004555fa
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a200()
    MOV ESI,EAX                         ; 004555ff
    LEA EAX,[EBX + 0x20]                ; 00455601
    FLD float ptr [ESI]                 ; 00455604
    FADD float ptr [EAX]                ; 00455606
    FSTP float ptr [EAX]                ; 00455608
    FLD float ptr [ESI + 0x4]           ; 0045560a
    FADD float ptr [EAX + 0x4]          ; 0045560d
    FSTP float ptr [EAX + 0x4]          ; 00455610
    FLD float ptr [ESI + 0x8]           ; 00455613
    FADD float ptr [EAX + 0x8]          ; 00455616
    ADD ESP,0xc                         ; 00455619
    FSTP float ptr [EAX + 0x8]          ; 0045561c
    MOV dword ptr [EBX + 0x9c4],0x0     ; 0045561f
    MOV ESP,EBP                         ; 00455629
    POP EBP                             ; 0045562b
    POP EDI                             ; 0045562c
    POP ESI                             ; 0045562d
    POP EBX                             ; 0045562e
    RET                                 ; 0045562f

