; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 crt_unknown_c_FUN_005af350(void)
;
; Local Variables:
; undefined1[12]   Stack[-0x30]:12  local_30
; undefined1[12]   Stack[-0x24]:12  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_unknown.c_FUN_005accb8 at 005acccb
;
; Referenced Globals:
;   undefined4 DAT_0060a014
;   undefined1* PTR_crt_unknown.c_FUN_005af4b0_0060a024 = 005af4b0
;   undefined4 DAT_0060a058
;   undefined4 DAT_0060a05c
;   undefined4 DAT_0060a060
;   undefined4 DAT_0060a06a
;   undefined4 DAT_0060a074
;   undefined4 DAT_0060a07e
;   undefined4 DAT_0060a088
;   undefined4 DAT_0060a092
;   undefined4 DAT_0060a09c
;
; Called Functions:
;   crt_unknown.c_FUN_005aa623
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005af350
        ;   Label: crt_unknown.c_FUN_005af350
    PUSH ECX                            ; 005af351
    PUSH EDX                            ; 005af352
    SUB ESP,0x24                        ; 005af353
    FSTP extended double ptr [ESP + 0xc] ; 005af356
    FSTP extended double ptr [ESP]      ; 005af35a
    MOV ECX,dword ptr [ESP + 0x4]       ; 005af35d
    ADD ECX,ECX                         ; 005af361
    JNC 0x005af540                      ; 005af363
        ;   XREF to: 005af540 (CONDITIONAL_JUMP)  ; LAB_005af540
    MOV EAX,dword ptr [ESP + 0x10]      ; 005af369
    ADD EAX,EAX                         ; 005af36d
    JNC 0x005af540                      ; 005af36f
        ;   XREF to: 005af540 (CONDITIONAL_JUMP)  ; LAB_005af540
    MOV ECX,dword ptr [ESP + 0x8]       ; 005af375
    MOV EAX,dword ptr [ESP + 0x14]      ; 005af379
    AND ECX,0x7fff                      ; 005af37d
    JZ 0x005af540                       ; 005af383
        ;   XREF to: 005af540 (CONDITIONAL_JUMP)  ; LAB_005af540
    AND EAX,0x7fff                      ; 005af389
    JZ 0x005af540                       ; 005af38e
        ;   XREF to: 005af540 (CONDITIONAL_JUMP)  ; LAB_005af540
    CMP ECX,0x7fff                      ; 005af394
    JZ 0x005af540                       ; 005af39a
        ;   XREF to: 005af540 (CONDITIONAL_JUMP)  ; LAB_005af540
    CMP EAX,0x7fff                      ; 005af3a0
    JZ 0x005af540                       ; 005af3a5
        ;   XREF to: 005af540 (CONDITIONAL_JUMP)  ; LAB_005af540
    FLD extended double ptr [ESP + 0xc] ; 005af3ab
    FABS                                ; 005af3af
    FLD extended double ptr [ESP]       ; 005af3b1
    FABS                                ; 005af3b4
    FNSTCW word ptr [ESP + 0x18]        ; 005af3b6
    MOV EDX,dword ptr [ESP + 0x18]      ; 005af3ba
    OR EDX,0x33f                        ; 005af3be
    AND EDX,0xf3ff                      ; 005af3c4
    MOV dword ptr [ESP + 0x1c],EDX      ; 005af3ca
    FLDCW word ptr [ESP + 0x1c]         ; 005af3ce
    XOR EDX,EDX                         ; 005af3d2
    FCOM                                ; 005af3d4
    PUSH EAX                            ; 005af3d6
    FNSTSW AX                           ; 005af3d7
    SAHF                                ; 005af3d9
    POP EAX                             ; 005af3da
    JC 0x005af3e0                       ; 005af3db
        ;   XREF to: 005af3e0 (CONDITIONAL_JUMP)  ; LAB_005af3e0
    FXCH                                ; 005af3dd
    INC EDX                             ; 005af3df
    PUSH EAX                            ; 005af3e0
        ;   Label: LAB_005af3e0
    MOV EAX,0xf                         ; 005af3e1
    CALL crt_unknown.c_FUN_005aa623     ; 005af3e6
        ;   XREF to: 005aa623 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa623()
    POP EAX                             ; 005af3eb
    FLD float ptr [0x0060a058]          ; 005af3ec | DAT_0060a058
    FMUL ST1                            ; 005af3f2
    FISTP dword ptr [ESP + 0x20]        ; 005af3f4
    MOV ECX,dword ptr [ESP + 0x20]      ; 005af3f8
    SHL ECX,0x4                         ; 005af3fc
    FILD dword ptr [ESP + 0x20]         ; 005af3ff
    FMUL float ptr [0x0060a05c]         ; 005af403 | DAT_0060a05c
    FLD ST1                             ; 005af409
    FSUB ST0,ST1                        ; 005af40b
    FXCH                                ; 005af40d
    FMULP ST2                           ; 005af40f
    FLD double ptr [0x0060a014]         ; 005af411 | DAT_0060a014
    FADDP ST2,ST0                       ; 005af417
    PUSH EAX                            ; 005af419
    MOV EAX,0xf                         ; 005af41a
    CALL crt_unknown.c_FUN_005aa623     ; 005af41f
        ;   XREF to: 005aa623 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa623()
    POP EAX                             ; 005af424
    FLD ST0                             ; 005af425
    FMUL ST1                            ; 005af427
    FLD ST0                             ; 005af429
    FMUL ST1                            ; 005af42b
    FLD ST0                             ; 005af42d
    FMUL ST1                            ; 005af42f
    FLD extended double ptr [0x0060a092] ; 005af431 | DAT_0060a092
    FLD extended double ptr [0x0060a088] ; 005af437 | DAT_0060a088
    FXCH                                ; 005af43d
    FMUL ST2                            ; 005af43f
    FLD extended double ptr [0x0060a07e] ; 005af441 | DAT_0060a07e
    FXCH ST2                            ; 005af447
    FMUL ST3                            ; 005af449
    FLD extended double ptr [0x0060a074] ; 005af44b | DAT_0060a074
    FXCH ST2                            ; 005af451
    FMUL ST5                            ; 005af453
    FXCH ST3                            ; 005af455
    FMULP ST4                           ; 005af457
    FLD extended double ptr [0x0060a06a] ; 005af459 | DAT_0060a06a
    FXCH ST3                            ; 005af45f
    FADDP ST4,ST0                       ; 005af461
    MOV EAX,dword ptr [ESP + 0x14]      ; 005af463
    FLD extended double ptr [0x0060a060] ; 005af467 | DAT_0060a060
    FXCH                                ; 005af46d
    SHL EAX,0x10                        ; 005af46f
    FMUL ST6                            ; 005af472
    FXCH ST2                            ; 005af474
    ADD EAX,EAX                         ; 005af476
    FMUL ST5                            ; 005af478
    FXCH ST3                            ; 005af47a
    ADC EDX,EDX                         ; 005af47c
    FMULP ST5                           ; 005af47e
    FXCH ST2                            ; 005af480
    MOV EAX,dword ptr [ESP + 0x8]       ; 005af482
    FMUL ST5                            ; 005af486
    FXCH ST2                            ; 005af488
    SHL EAX,0x10                        ; 005af48a
    FMULP ST5                           ; 005af48d
    FXCH ST2                            ; 005af48f
    FADDP ST3,ST0                       ; 005af491
    ADD EAX,EAX                         ; 005af493
    FADDP                               ; 005af495
    ADC EDX,EDX                         ; 005af497
    FADDP ST2,ST0                       ; 005af499
    FADDP                               ; 005af49b
    FMUL ST1                            ; 005af49d
    FADDP                               ; 005af49f
    FLD extended double ptr [ECX + 0x60a09c] ; 005af4a1 | DAT_0060a09c
    FADDP                               ; 005af4a7
    JMP dword ptr [EDX*0x4 + 0x60a024]  ; 005af4a9 | PTR_crt_unknown.c_FUN_005af4b0_0060a024
    FLD extended double ptr [ESP]       ; 005af540
        ;   Label: LAB_005af540
    FLD extended double ptr [ESP + 0xc] ; 005af543
    FPATAN                              ; 005af547
    ADD ESP,0x24                        ; 005af549
    POP EDX                             ; 005af54c
    POP ECX                             ; 005af54d
    POP EAX                             ; 005af54e
    RET                                 ; 005af54f

