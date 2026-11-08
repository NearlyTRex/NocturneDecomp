; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00527280(int param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined8       Stack[-0xf0]:8  local_f0
; undefined8       Stack[-0x64]:8  local_64
; undefined8       Stack[-0x5c]:8  local_5c
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0052b450 at 0052b631
;
; Referenced Globals:
;   undefined4 DAT_005eb286
;   undefined4 DAT_005eb28e
;   undefined4 DAT_005eb296
;   undefined4 DAT_005eb29e
;   undefined4 DAT_005eb2a6
;   undefined4 DAT_005eb2ae
;   undefined4 DAT_005eb2b6
;   undefined4 DAT_0061fa40
;   undefined4 DAT_0061fac0
;   undefined4 DAT_00620240
;   undefined4 DAT_01d39d40
;   undefined4 DAT_01d39d44
;   undefined4 DAT_01d39dc0
;
; Called Functions:
;   FUN_005c3166
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527280
        ;   Label: FUN_00527280
    PUSH ESI                            ; 00527281
    PUSH EDI                            ; 00527282
    PUSH EBP                            ; 00527283
    MOV EBP,ESP                         ; 00527284
    SUB ESP,0xd4                        ; 00527286
    CMP dword ptr [0x00620240],0x0      ; 0052728c | DAT_00620240
    JNZ 0x0052744e                      ; 00527293
        ;   XREF to: 0052744e (CONDITIONAL_JUMP)  ; LAB_0052744e
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00527299
        ;   Label: LAB_00527299
    MOV ECX,dword ptr [EBP + 0x14]      ; 0052729c
    SHL EAX,0x2                         ; 0052729f
    ADD EAX,ECX                         ; 005272a2
    MOV EBX,dword ptr [EAX + 0x7350]    ; 005272a4
    SUB EBX,0x40                        ; 005272aa
    AND EBX,0x3ff                       ; 005272ad
    MOV dword ptr [EAX + 0x7350],EBX    ; 005272b3
    LEA ESI,[EBX*0x4 + 0x0]             ; 005272b9
    MOV EBX,dword ptr [EBP + 0x1c]      ; 005272c0
    LEA EAX,[ECX + 0x5350]              ; 005272c3
    SHL EBX,0xc                         ; 005272c9
    ADD EAX,EBX                         ; 005272cc
    ADD EAX,ESI                         ; 005272ce
    MOV dword ptr [EBP + -0x34],EAX     ; 005272d0
    XOR EBX,EBX                         ; 005272d3
    MOV dword ptr [EBP + -0x3c],EBX     ; 005272d5
    MOV ESI,dword ptr [EBP + 0x18]      ; 005272d8
    LEA EAX,[EBX*0x4 + 0x0]             ; 005272db
        ;   Label: LAB_005272db
    ADD EAX,ESI                         ; 005272e2
    FLD float ptr [EAX]                 ; 005272e4
    FABS                                ; 005272e6
    FCOMP double ptr [0x005eb2b6]       ; 005272e8 | DAT_005eb2b6
    FNSTSW AX                           ; 005272ee
    SAHF                                ; 005272f0
    JBE 0x00527300                      ; 005272f1
        ;   XREF to: 00527300 (CONDITIONAL_JUMP)  ; LAB_00527300
    MOV EAX,dword ptr [EBP + -0x3c]     ; 005272f3
    MOV dword ptr [EBP + EAX*0x4 + 0xffffff2c],EBX ; 005272f6
    INC dword ptr [EBP + -0x3c]         ; 005272fd
    INC EBX                             ; 00527300
        ;   Label: LAB_00527300
    CMP EBX,0x20                        ; 00527301
    JL 0x005272db                       ; 00527304
        ;   XREF to: 005272db (CONDITIONAL_JUMP)  ; LAB_005272db
    XOR EAX,EAX                         ; 00527306
    MOV dword ptr [EBP + -0x10],EAX     ; 00527308
    MOV EAX,dword ptr [EBP + -0x10]     ; 0052730b
        ;   Label: LAB_0052730b
    MOV EBX,0x1d39d40                   ; 0052730e
    SHL EAX,0x7                         ; 00527313
    ADD EBX,EAX                         ; 00527316
    MOV dword ptr [EBP + -0x30],EBX     ; 00527318
    MOV EAX,dword ptr [EBP + 0x18]      ; 0052731b
    MOV dword ptr [EBP + -0x2c],EAX     ; 0052731e
    FLDZ                                ; 00527321
    MOV ECX,dword ptr [EBP + 0xffffffc4] ; 00527323
    SUB ECX,0x1                         ; 00527329
    JL 0x0052734e                       ; 0052732c
        ;   XREF to: 0052734e (CONDITIONAL_JUMP)  ; LAB_0052734e
    MOV EBX,dword ptr [EBP + 0xffffffd0] ; 0052732e
    MOV EDX,dword ptr [EBP + 0xffffffd4] ; 00527334
    MOV EAX,dword ptr [EBP + ECX*0x4 + 0xffffff2c] ; 0052733a
        ;   Label: LAB_0052733a
    FLD float ptr [EBX + EAX*0x4]       ; 00527341
    FMUL float ptr [EDX + EAX*0x4]      ; 00527344
    FADDP                               ; 00527347
    SUB ECX,0x1                         ; 00527349
    JGE 0x0052733a                      ; 0052734c
        ;   XREF to: 0052733a (CONDITIONAL_JUMP)  ; LAB_0052733a
    MOV EBX,dword ptr [EBP + 0xffffffcc] ; 0052734e
        ;   Label: LAB_0052734e
    FSTP float ptr [EBX]                ; 00527354
    ADD dword ptr [EBP + -0x34],0x4     ; 00527356
    MOV ECX,dword ptr [EBP + -0x10]     ; 0052735a
    INC ECX                             ; 0052735d
    MOV dword ptr [EBP + -0x10],ECX     ; 0052735e
    CMP ECX,0x40                        ; 00527361
    JL 0x0052730b                       ; 00527364
        ;   XREF to: 0052730b (CONDITIONAL_JUMP)  ; LAB_0052730b
    XOR ESI,ESI                         ; 00527366
    MOV dword ptr [EBP + -0x38],ESI     ; 00527368
    CMP dword ptr [EBP + -0x38],0x20    ; 0052736b
    JGE 0x00527447                      ; 0052736f
        ;   XREF to: 00527447 (CONDITIONAL_JUMP)  ; LAB_00527447
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00527375
    MOV EBX,dword ptr [EBP + 0x14]      ; 00527378
    SHL EAX,0x2                         ; 0052737b
    ADD EBX,EAX                         ; 0052737e
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00527380
    MOV dword ptr [EBP + -0x1c],EBX     ; 00527383
    MOV EBX,dword ptr [EBP + 0x14]      ; 00527386
    SHL EAX,0xc                         ; 00527389
    ADD EBX,0x5350                      ; 0052738c
    ADD EBX,EAX                         ; 00527392
    MOV dword ptr [EBP + -0x18],EBX     ; 00527394
    MOV EAX,dword ptr [EBP + -0x38]     ; 00527397
        ;   Label: LAB_00527397
    MOV EBX,dword ptr [EBP + -0x1c]     ; 0052739a
    MOV ESI,dword ptr [EBX + 0x7350]    ; 0052739d
    ADD EAX,ESI                         ; 005273a3
    MOV dword ptr [EBP + -0x8],EAX      ; 005273a5
    MOV EAX,dword ptr [EBP + -0x18]     ; 005273a8
    MOV dword ptr [EBP + -0x28],EAX     ; 005273ab
    MOV dword ptr [EBP + -0x24],0x47000000 ; 005273ae
    FLDZ                                ; 005273b5
    MOV EBX,dword ptr [EBP + 0xffffffc8] ; 005273b7
    MOV EDX,dword ptr [EBP + 0xfffffff8] ; 005273bd
    MOV ECX,0x8                         ; 005273c3
    MOV ESI,dword ptr [EBP + 0xffffffd8] ; 005273c8
    FLD float ptr [EBX*0x4 + 0x61fa40]  ; 005273ce | DAT_0061fa40
        ;   Label: LAB_005273ce
    AND EDX,0x3ff                       ; 005273d5
    FMUL float ptr [ESI + EDX*0x4]      ; 005273db
    ADD EDX,0x60                        ; 005273de
    FLD float ptr [EBX*0x4 + 0x61fac0]  ; 005273e1 | DAT_0061fac0
    AND EDX,0x3ff                       ; 005273e8
    FMUL float ptr [ESI + EDX*0x4]      ; 005273ee
    ADD EBX,0x40                        ; 005273f1
    ADD EDX,0x20                        ; 005273f4
    FADDP                               ; 005273f7
    FADDP                               ; 005273f9
    DEC ECX                             ; 005273fb
    JNZ 0x005273ce                      ; 005273fc
        ;   XREF to: 005273ce (CONDITIONAL_JUMP)  ; LAB_005273ce
    FMUL float ptr [EBP + 0xffffffdc]   ; 005273fe
    FISTP dword ptr [EBP + 0xffffffe0]  ; 00527404
    CMP dword ptr [EBP + -0x20],0x8000  ; 0052740a
    JGE 0x00527522                      ; 00527411
        ;   XREF to: 00527522 (CONDITIONAL_JUMP)  ; LAB_00527522
    CMP dword ptr [EBP + -0x20],0xffff8000 ; 00527417
    JGE 0x00527427                      ; 0052741e
        ;   XREF to: 00527427 (CONDITIONAL_JUMP)  ; LAB_00527427
    MOV dword ptr [EBP + -0x20],0xffff8000 ; 00527420
    MOV EBX,dword ptr [EBP + -0x38]     ; 00527427
        ;   Label: LAB_00527427
    MOV EAX,dword ptr [EBP + 0x20]      ; 0052742a
    ADD EBX,EBX                         ; 0052742d
    ADD EBX,EAX                         ; 0052742f
    MOV EAX,dword ptr [EBP + -0x20]     ; 00527431
    MOV word ptr [EBX],AX               ; 00527434
    MOV EAX,dword ptr [EBP + -0x38]     ; 00527437
    INC dword ptr [EBP + -0x38]         ; 0052743a
    CMP dword ptr [EBP + -0x38],0x20    ; 0052743d
    JL 0x00527397                       ; 00527441
        ;   XREF to: 00527397 (CONDITIONAL_JUMP)  ; LAB_00527397
    MOV ESP,EBP                         ; 00527447
        ;   Label: LAB_00527447
    POP EBP                             ; 00527449
    POP EDI                             ; 0052744a
    POP ESI                             ; 0052744b
    POP EBX                             ; 0052744c
    RET                                 ; 0052744d
    XOR ECX,ECX                         ; 0052744e
        ;   Label: LAB_0052744e
    MOV EBX,0x1d39d40                   ; 00527450
    MOV dword ptr [EBP + -0xc],ECX      ; 00527455
    MOV dword ptr [EBP + -0x14],EBX     ; 00527458
    MOV EBX,dword ptr [EBP + -0x14]     ; 0052745b
        ;   Label: LAB_0052745b
    MOV EDI,0x1                         ; 0052745e
    MOV ESI,EBX                         ; 00527463
    MOV EAX,dword ptr [EBP + -0xc]      ; 00527465
        ;   Label: LAB_00527465
    MOV dword ptr [EBP + -0x4],EAX      ; 00527468
    FILD dword ptr [EBP + -0x4]         ; 0052746b
    FMUL double ptr [0x005eb286]        ; 0052746e | DAT_005eb286
    FADD double ptr [0x005eb29e]        ; 00527474 | DAT_005eb29e
    MOV dword ptr [EBP + -0x4],EDI      ; 0052747a
    FILD dword ptr [EBP + -0x4]         ; 0052747d
    FMULP                               ; 00527480
    FCOS                                ; 00527482
    FMUL double ptr [0x005eb28e]        ; 00527484 | DAT_005eb28e
    FLDZ                                ; 0052748a
    FXCH                                ; 0052748c
    FSTP float ptr [EBX]                ; 0052748e | DAT_01d39d40 | DAT_01d39d44 | DAT_01d39dc0
    FCOMP float ptr [EBX]               ; 00527490 | DAT_01d39d40 | DAT_01d39d44 | DAT_01d39dc0
    FNSTSW AX                           ; 00527492
    SAHF                                ; 00527494
    JA 0x00527501                       ; 00527495
        ;   XREF to: 00527501 (CONDITIONAL_JUMP)  ; LAB_00527501
    FLD float ptr [EBX]                 ; 00527497 | DAT_01d39d40
    LEA EAX,[EBP + -0x54]               ; 00527499
    FSTP double ptr [EBP + -0x54]       ; 0052749c
    FLD float ptr [EBX]                 ; 0052749f | DAT_01d39d40
    PUSH EAX                            ; 005274a1
    FADD double ptr [0x005eb2ae]        ; 005274a2 | DAT_005eb2ae
    SUB ESP,0x8                         ; 005274a8
    FSTP double ptr [ESP]               ; 005274ab
    CALL FUN_005c3166                   ; 005274ae
        ;   XREF to: 005c3166 (UNCONDITIONAL_CALL)  ; undefined FUN_005c3166()
    FLD double ptr [EBP + -0x54]        ; 005274b3
    ADD ESP,0xc                         ; 005274b6
        ;   Label: LAB_005274b6
    FSTP float ptr [EBX]                ; 005274b9 | DAT_01d39d40 | DAT_01d39d44
    FLD float ptr [ESI]                 ; 005274bb | DAT_01d39d40 | DAT_01d39d44
    FLD ST0                             ; 005274bd
    FMUL double ptr [0x005eb296]        ; 005274bf | DAT_005eb296
    ADD EBX,0x4                         ; 005274c5
    ADD EDI,0x2                         ; 005274c8
    ADD ESI,0x4                         ; 005274cb
    FSTP ST1                            ; 005274ce
    FSTP float ptr [ESI + -0x4]         ; 005274d0 | DAT_01d39d40 | DAT_01d39d44
    CMP EDI,0x41                        ; 005274d3
    JNZ 0x00527465                      ; 005274d6
        ;   XREF to: 00527465 (CONDITIONAL_JUMP)  ; LAB_00527465
    MOV EDI,dword ptr [EBP + -0xc]      ; 005274d8
    MOV ESI,dword ptr [EBP + -0x14]     ; 005274db
    INC EDI                             ; 005274de
    ADD ESI,0x80                        ; 005274df
    MOV dword ptr [EBP + -0xc],EDI      ; 005274e5
    MOV dword ptr [EBP + -0x14],ESI     ; 005274e8
    CMP EDI,0x40                        ; 005274eb
    JL 0x0052745b                       ; 005274ee
        ;   XREF to: 0052745b (CONDITIONAL_JUMP)  ; LAB_0052745b
    XOR EDX,EDX                         ; 005274f4
    MOV dword ptr [0x00620240],EDX      ; 005274f6 | DAT_00620240
    JMP 0x00527299                      ; 005274fc
        ;   XREF to: 00527299 (UNCONDITIONAL_JUMP)  ; LAB_00527299
    FLD float ptr [EBX]                 ; 00527501 | DAT_01d39d44
        ;   Label: LAB_00527501
    LEA EAX,[EBP + -0x4c]               ; 00527503
    FSTP double ptr [EBP + -0x4c]       ; 00527506
    FLD float ptr [EBX]                 ; 00527509 | DAT_01d39d44
    PUSH EAX                            ; 0052750b
    FADD double ptr [0x005eb2a6]        ; 0052750c | DAT_005eb2a6
    SUB ESP,0x8                         ; 00527512
    FSTP double ptr [ESP]               ; 00527515
    CALL FUN_005c3166                   ; 00527518
        ;   XREF to: 005c3166 (UNCONDITIONAL_CALL)  ; undefined FUN_005c3166()
    FLD double ptr [EBP + -0x4c]        ; 0052751d
    JMP 0x005274b6                      ; 00527520
        ;   XREF to: 005274b6 (UNCONDITIONAL_JUMP)  ; LAB_005274b6
    MOV dword ptr [EBP + -0x20],0x7fff  ; 00527522
        ;   Label: LAB_00527522
    JMP 0x00527427                      ; 00527529
        ;   XREF to: 00527427 (UNCONDITIONAL_JUMP)  ; LAB_00527427

