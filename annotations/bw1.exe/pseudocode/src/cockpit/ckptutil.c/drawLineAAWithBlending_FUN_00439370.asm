; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_drawLineAAWithBlending_FUN_00439370(int x0,int y0,int x1,int y1,int base_color,uchar blend_color,int blend_mode)
;
; Parameters:
; int              Stack[0x4]:4   x0
; int              Stack[0x8]:4   y0
; int              Stack[0xc]:4   x1
; int              Stack[0x10]:4   y1
; int              Stack[0x14]:4   base_color
; uchar            Stack[0x18]:1   blend_color
; int              Stack[0x1c]:4   blend_mode
;
; Referenced Globals:
;   undefined4 DAT_007c7550
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   undefined4 DAT_01c4f014
;
; Called Functions:
;   cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00439900
;   cockpit_ckptutil.c_putPixel_FUN_00439f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439370
        ;   Label: cockpit_ckptutil.c_drawLineAAWithBlending_FUN_00439370
    PUSH ESI                            ; 00439371
    PUSH EDI                            ; 00439372
    PUSH EBP                            ; 00439373
    MOV EBP,ESP                         ; 00439374
    SUB ESP,0x3c                        ; 00439376
    AND ESP,0xfffffff8                  ; 00439379
    MOV EDI,dword ptr [EBP + 0x14]      ; 0043937c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0043937f
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00439382
    MOV EAX,dword ptr [EBP + 0x20]      ; 00439385
    MOV EDX,dword ptr [EBP + 0x24]      ; 00439388
    MOV dword ptr [ESP],0x3b800000      ; 0043938b
    CMP ESI,EAX                         ; 00439392
    JG 0x00439410                       ; 00439394
        ;   XREF to: 00439410 (CONDITIONAL_JUMP)  ; LAB_00439410
    CMP dword ptr [0x007c7550],0x0      ; 0043939a | DAT_007c7550
    JNZ 0x004393df                      ; 004393a1
        ;   XREF to: 004393df (CONDITIONAL_JUMP)  ; LAB_004393df
    MOV ECX,dword ptr [0x01c4f008]      ; 004393a3 | DAT_01c4f008
    CMP EDI,ECX                         ; 004393a9
    JGE 0x004393b5                      ; 004393ab
        ;   XREF to: 004393b5 (CONDITIONAL_JUMP)  ; LAB_004393b5
    CMP EBX,ECX                         ; 004393ad
    JL 0x00439410                       ; 004393af
        ;   XREF to: 00439410 (CONDITIONAL_JUMP)  ; LAB_00439410
    MOV ECX,dword ptr [0x01c4f010]      ; 004393b5 | DAT_01c4f010
        ;   Label: LAB_004393b5
    CMP EDI,ECX                         ; 004393bb
    JLE 0x004393c3                      ; 004393bd
        ;   XREF to: 004393c3 (CONDITIONAL_JUMP)  ; LAB_004393c3
    CMP EBX,ECX                         ; 004393bf
    JG 0x00439410                       ; 004393c1
        ;   XREF to: 00439410 (CONDITIONAL_JUMP)  ; LAB_00439410
    MOV ECX,dword ptr [0x01c4f00c]      ; 004393c3 | DAT_01c4f00c
        ;   Label: LAB_004393c3
    CMP ESI,ECX                         ; 004393c9
    JGE 0x004393d1                      ; 004393cb
        ;   XREF to: 004393d1 (CONDITIONAL_JUMP)  ; LAB_004393d1
    CMP EAX,ECX                         ; 004393cd
    JL 0x00439410                       ; 004393cf
        ;   XREF to: 00439410 (CONDITIONAL_JUMP)  ; LAB_00439410
    MOV ECX,dword ptr [0x01c4f014]      ; 004393d1 | DAT_01c4f014
        ;   Label: LAB_004393d1
    CMP ESI,ECX                         ; 004393d7
    JLE 0x004393df                      ; 004393d9
        ;   XREF to: 004393df (CONDITIONAL_JUMP)  ; LAB_004393df
    CMP EAX,ECX                         ; 004393db
    JG 0x00439410                       ; 004393dd
        ;   XREF to: 00439410 (CONDITIONAL_JUMP)  ; LAB_00439410
    SUB EBX,EDI                         ; 004393df
        ;   Label: LAB_004393df
    MOV dword ptr [ESP + 0x2c],EBX      ; 004393e1
    TEST EBX,EBX                        ; 004393e5
    JL 0x00439417                       ; 004393e7
        ;   XREF to: 00439417 (CONDITIONAL_JUMP)  ; LAB_00439417
    MOV dword ptr [ESP + 0x24],0x1      ; 004393e9
    SUB EAX,ESI                         ; 004393f1
        ;   Label: LAB_004393f1
    MOV dword ptr [ESP + 0x28],EAX      ; 004393f3
    JNZ 0x0043943d                      ; 004393f7
        ;   XREF to: 0043943d (CONDITIONAL_JUMP)  ; LAB_0043943d
    MOV BL,DL                           ; 004393f9
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004393fb
        ;   Label: LAB_004393fb
    DEC EDX                             ; 004393ff
    MOV dword ptr [ESP + 0x2c],EDX      ; 00439400
    JNZ 0x00439428                      ; 00439404
        ;   XREF to: 00439428 (CONDITIONAL_JUMP)  ; LAB_00439428
    LEA EAX,[EAX]                       ; 00439406
    LEA EDX,[EDX]                       ; 0043940c
    MOV ESP,EBP                         ; 00439410
        ;   Label: LAB_00439410
    POP EBP                             ; 00439412
    POP EDI                             ; 00439413
    POP ESI                             ; 00439414
    POP EBX                             ; 00439415
    RET                                 ; 00439416
    NEG EBX                             ; 00439417
        ;   Label: LAB_00439417
    MOV ECX,0xffffffff                  ; 00439419
    MOV dword ptr [ESP + 0x2c],EBX      ; 0043941e
    MOV dword ptr [ESP + 0x24],ECX      ; 00439422
    JMP 0x004393f1                      ; 00439426
        ;   XREF to: 004393f1 (UNCONDITIONAL_JUMP)  ; LAB_004393f1
    ADD EDI,dword ptr [ESP + 0x24]      ; 00439428
        ;   Label: LAB_00439428
    XOR EAX,EAX                         ; 0043942c
    MOV AL,BL                           ; 0043942e
    PUSH EAX                            ; 00439430
    PUSH ESI                            ; 00439431
    PUSH EDI                            ; 00439432
    CALL cockpit_ckptutil.c_putPixel_FUN_00439f70 ; 00439433
        ;   XREF to: 00439f70 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_00439f70(int x, int y, int color)
    ADD ESP,0xc                         ; 00439438
    JMP 0x004393fb                      ; 0043943b
        ;   XREF to: 004393fb (UNCONDITIONAL_JUMP)  ; LAB_004393fb
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0043943d
        ;   Label: LAB_0043943d
    TEST EAX,EAX                        ; 00439441
    JNZ 0x0043946c                      ; 00439443
        ;   XREF to: 0043946c (CONDITIONAL_JUMP)  ; LAB_0043946c
    MOV BL,DL                           ; 00439445
    XOR EAX,EAX                         ; 00439447
        ;   Label: LAB_00439447
    MOV AL,BL                           ; 00439449
    PUSH EAX                            ; 0043944b
    INC ESI                             ; 0043944c
    PUSH ESI                            ; 0043944d
    PUSH EDI                            ; 0043944e
    CALL cockpit_ckptutil.c_putPixel_FUN_00439f70 ; 0043944f
        ;   XREF to: 00439f70 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_00439f70(int x, int y, int color)
    ADD ESP,0xc                         ; 00439454
    MOV ECX,dword ptr [ESP + 0x28]      ; 00439457
    DEC ECX                             ; 0043945b
    MOV dword ptr [ESP + 0x28],ECX      ; 0043945c
    CMP ECX,0x1                         ; 00439460
    JNZ 0x00439447                      ; 00439463
        ;   XREF to: 00439447 (CONDITIONAL_JUMP)  ; LAB_00439447
    MOV ESP,EBP                         ; 00439465
    POP EBP                             ; 00439467
    POP EDI                             ; 00439468
    POP ESI                             ; 00439469
    POP EBX                             ; 0043946a
    RET                                 ; 0043946b
    MOV ECX,dword ptr [ESP + 0x28]      ; 0043946c
        ;   Label: LAB_0043946c
    XOR EBX,EBX                         ; 00439470
    CMP EAX,ECX                         ; 00439472
    JLE 0x0043953a                      ; 00439474
        ;   XREF to: 0043953a (CONDITIONAL_JUMP)  ; LAB_0043953a
    CMP dword ptr [EBP + 0x2c],0x0      ; 0043947a
    JNZ 0x004394fd                      ; 0043947e
        ;   XREF to: 004394fd (CONDITIONAL_JUMP)  ; LAB_004394fd
    MOV byte ptr [ESP + 0x38],DL        ; 00439484
    MOV EAX,dword ptr [ESP + 0x28]      ; 00439488
        ;   Label: LAB_00439488
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0043948c
    XOR EDX,EDX                         ; 00439490
    SHL EAX,0x10                        ; 00439492
    DIV ECX                             ; 00439495
    MOV dword ptr [ESP + 0x20],EAX      ; 00439497
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0043949b
        ;   Label: LAB_0043949b
    DEC ECX                             ; 0043949f
    MOV dword ptr [ESP + 0x2c],ECX      ; 004394a0
    JZ 0x00439410                       ; 004394a4
        ;   XREF to: 00439410 (CONDITIONAL_JUMP)  ; LAB_00439410
    MOV EDX,dword ptr [ESP + 0x20]      ; 004394aa
    MOV EAX,EBX                         ; 004394ae
    ADD EBX,EDX                         ; 004394b0
    AND EBX,0xffff                      ; 004394b2
    CMP EBX,EAX                         ; 004394b8
    JA 0x004394bd                       ; 004394ba
        ;   XREF to: 004394bd (CONDITIONAL_JUMP)  ; LAB_004394bd
    INC ESI                             ; 004394bc
    MOV ECX,dword ptr [ESP + 0x24]      ; 004394bd
        ;   Label: LAB_004394bd
    MOV EAX,EBX                         ; 004394c1
    MOV EDX,dword ptr [EBP + 0x2c]      ; 004394c3
    SHR EAX,0x8                         ; 004394c6
    ADD EDI,ECX                         ; 004394c9
    TEST EDX,EDX                        ; 004394cb
    JNZ 0x00439506                      ; 004394cd
        ;   XREF to: 00439506 (CONDITIONAL_JUMP)  ; LAB_00439506
    MOV dword ptr [ESP + 0x8],EDX       ; 004394cf
    MOV dword ptr [ESP + 0x4],EAX       ; 004394d3
    FILD qword ptr [ESP + 0x4]          ; 004394d7
    FLD1                                ; 004394db
    XOR EAX,EAX                         ; 004394dd
    FADDP                               ; 004394df
    MOV AL,byte ptr [ESP + 0x38]        ; 004394e1
    FMUL float ptr [ESP]                ; 004394e5
    PUSH EAX                            ; 004394e8
    FSTP float ptr [ESP + 0x10]         ; 004394e9
    PUSH dword ptr [ESP + 0x10]         ; 004394ed
    PUSH ESI                            ; 004394f1
    PUSH EDI                            ; 004394f2
    CALL cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00439900 ; 004394f3
        ;   XREF to: 00439900 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00439900(int x, int y, float alpha, int color)
    ADD ESP,0x10                        ; 004394f8
    JMP 0x0043949b                      ; 004394fb
        ;   XREF to: 0043949b (UNCONDITIONAL_JUMP)  ; LAB_0043949b
    MOV AL,byte ptr [EBP + 0x28]        ; 004394fd
        ;   Label: LAB_004394fd
    MOV byte ptr [ESP + 0x38],AL        ; 00439500
    JMP 0x00439488                      ; 00439504
        ;   XREF to: 00439488 (UNCONDITIONAL_JUMP)  ; LAB_00439488
    XOR ECX,ECX                         ; 00439506
        ;   Label: LAB_00439506
    XOR AL,0xff                         ; 00439508
    MOV dword ptr [ESP + 0x8],ECX       ; 0043950a
    MOV dword ptr [ESP + 0x4],EAX       ; 0043950e
    XOR EAX,EAX                         ; 00439512
    FILD qword ptr [ESP + 0x4]          ; 00439514
    MOV AL,byte ptr [ESP + 0x38]        ; 00439518
    FMUL float ptr [ESP]                ; 0043951c
    PUSH EAX                            ; 0043951f
    FSTP float ptr [ESP + 0x34]         ; 00439520
    LEA EAX,[ESI + 0x1]                 ; 00439524
    PUSH dword ptr [ESP + 0x34]         ; 00439527
    PUSH EAX                            ; 0043952b
    PUSH EDI                            ; 0043952c
    CALL cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00439900 ; 0043952d
        ;   XREF to: 00439900 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00439900(int x, int y, float alpha, int color)
    ADD ESP,0x10                        ; 00439532
    JMP 0x0043949b                      ; 00439535
        ;   XREF to: 0043949b (UNCONDITIONAL_JUMP)  ; LAB_0043949b
    CMP dword ptr [EBP + 0x2c],0x0      ; 0043953a
        ;   Label: LAB_0043953a
    JNZ 0x004395da                      ; 0043953e
        ;   XREF to: 004395da (CONDITIONAL_JUMP)  ; LAB_004395da
    CMP dword ptr [ESP + 0x24],0x1      ; 00439544
    JNZ 0x004395da                      ; 00439549
        ;   XREF to: 004395da (CONDITIONAL_JUMP)  ; LAB_004395da
    MOV EAX,0x1                         ; 0043954f
        ;   Label: LAB_0043954f
    MOV dword ptr [ESP + 0x18],EAX      ; 00439554
        ;   Label: LAB_00439554
    TEST EAX,EAX                        ; 00439558
    JZ 0x004395f2                       ; 0043955a
        ;   XREF to: 004395f2 (CONDITIONAL_JUMP)  ; LAB_004395f2
    MOV byte ptr [ESP + 0x34],DL        ; 00439560
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00439564
        ;   Label: LAB_00439564
    MOV ECX,dword ptr [ESP + 0x28]      ; 00439568
    XOR EDX,EDX                         ; 0043956c
    SHL EAX,0x10                        ; 0043956e
    DIV ECX                             ; 00439571
    MOV dword ptr [ESP + 0x1c],EAX      ; 00439573
    MOV EAX,dword ptr [ESP + 0x28]      ; 00439577
        ;   Label: LAB_00439577
    DEC EAX                             ; 0043957b
    MOV dword ptr [ESP + 0x28],EAX      ; 0043957c
    JZ 0x00439410                       ; 00439580
        ;   XREF to: 00439410 (CONDITIONAL_JUMP)  ; LAB_00439410
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00439586
    MOV EAX,EBX                         ; 0043958a
    ADD EBX,ECX                         ; 0043958c
    AND EBX,0xffff                      ; 0043958e
    CMP EBX,EAX                         ; 00439594
    JA 0x0043959c                       ; 00439596
        ;   XREF to: 0043959c (CONDITIONAL_JUMP)  ; LAB_0043959c
    ADD EDI,dword ptr [ESP + 0x24]      ; 00439598
    MOV EDX,dword ptr [ESP + 0x18]      ; 0043959c
        ;   Label: LAB_0043959c
    MOV EAX,EBX                         ; 004395a0
    INC ESI                             ; 004395a2
    SHR EAX,0x8                         ; 004395a3
    TEST EDX,EDX                        ; 004395a6
    JZ 0x004395fe                       ; 004395a8
        ;   XREF to: 004395fe (CONDITIONAL_JUMP)  ; LAB_004395fe
    XOR EDX,EDX                         ; 004395aa
    MOV dword ptr [ESP + 0x4],EAX       ; 004395ac
    MOV dword ptr [ESP + 0x8],EDX       ; 004395b0
    XOR EAX,EAX                         ; 004395b4
    FILD qword ptr [ESP + 0x4]          ; 004395b6
    FLD1                                ; 004395ba
    FADDP                               ; 004395bc
    MOV AL,byte ptr [ESP + 0x34]        ; 004395be
    FMUL float ptr [ESP]                ; 004395c2
    PUSH EAX                            ; 004395c5
    FSTP float ptr [ESP + 0x14]         ; 004395c6
    PUSH dword ptr [ESP + 0x14]         ; 004395ca
    PUSH ESI                            ; 004395ce
    PUSH EDI                            ; 004395cf
    CALL cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00439900 ; 004395d0
        ;   XREF to: 00439900 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00439900(int x, int y, float alpha, int color)
    ADD ESP,0x10                        ; 004395d5
    JMP 0x00439577                      ; 004395d8
        ;   XREF to: 00439577 (UNCONDITIONAL_JUMP)  ; LAB_00439577
    CMP dword ptr [EBP + 0x2c],0x1      ; 004395da
        ;   Label: LAB_004395da
    JNZ 0x004395eb                      ; 004395de
        ;   XREF to: 004395eb (CONDITIONAL_JUMP)  ; LAB_004395eb
    CMP dword ptr [ESP + 0x24],-0x1     ; 004395e0
    JZ 0x0043954f                       ; 004395e5
        ;   XREF to: 0043954f (CONDITIONAL_JUMP)  ; LAB_0043954f
    XOR EAX,EAX                         ; 004395eb
        ;   Label: LAB_004395eb
    JMP 0x00439554                      ; 004395ed
        ;   XREF to: 00439554 (UNCONDITIONAL_JUMP)  ; LAB_00439554
    MOV AL,byte ptr [EBP + 0x28]        ; 004395f2
        ;   Label: LAB_004395f2
    MOV byte ptr [ESP + 0x34],AL        ; 004395f5
    JMP 0x00439564                      ; 004395f9
        ;   XREF to: 00439564 (UNCONDITIONAL_JUMP)  ; LAB_00439564
    XOR AL,0xff                         ; 004395fe
        ;   Label: LAB_004395fe
    MOV dword ptr [ESP + 0x8],EDX       ; 00439600
    MOV dword ptr [ESP + 0x4],EAX       ; 00439604
    XOR EAX,EAX                         ; 00439608
    FILD qword ptr [ESP + 0x4]          ; 0043960a
    MOV AL,byte ptr [ESP + 0x34]        ; 0043960e
    FMUL float ptr [ESP]                ; 00439612
    PUSH EAX                            ; 00439615
    FSTP float ptr [ESP + 0x18]         ; 00439616
    PUSH dword ptr [ESP + 0x18]         ; 0043961a
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0043961e
    PUSH ESI                            ; 00439622
    ADD EAX,EDI                         ; 00439623
    PUSH EAX                            ; 00439625
    CALL cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00439900 ; 00439626
        ;   XREF to: 00439900 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00439900(int x, int y, float alpha, int color)
    ADD ESP,0x10                        ; 0043962b
    JMP 0x00439577                      ; 0043962e
        ;   XREF to: 00439577 (UNCONDITIONAL_JUMP)  ; LAB_00439577

