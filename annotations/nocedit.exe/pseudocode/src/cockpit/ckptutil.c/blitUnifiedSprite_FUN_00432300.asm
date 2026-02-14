; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_ckptutil_c_blitUnifiedSprite_FUN_00432300(void *sprite_data,void *span_data,int dest_x,int dest_y,int width,int height)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; void *           Stack[0x8]:4   span_data
; int              Stack[0xc]:4   dest_x
; int              Stack[0x10]:4   dest_y
; int              Stack[0x14]:4   width
; int              Stack[0x18]:4   height
; Local Variables:
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
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   int g_ClipLeft
;   int g_ClipRight
;
; Called Functions:
;   cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432300
        ;   Label: cockpit_ckptutil.c_blitUnifiedSprite_FUN_00432300
    PUSH ESI                            ; 00432301
    PUSH EDI                            ; 00432302
    PUSH EBP                            ; 00432303
    SUB ESP,0x2c                        ; 00432304
    MOV EDX,dword ptr [ESP + 0x48]      ; 00432307
    MOV EBP,dword ptr [ESP + 0x40]      ; 0043230b
    MOV EBX,dword ptr [0x02d02560]      ; 0043230f | g_ClipRight
    MOV EAX,[0x02cf6aa0]                ; 00432315 | g_ScreenBufferArray[1]
    MOV EDI,dword ptr [0x02cf6a9c]      ; 0043231a | g_ScreenBufferArray
    MOV ESI,dword ptr [0x02d02558]      ; 00432320 | g_ClipLeft
    SUB EBX,EDX                         ; 00432326
    SUB EAX,EDI                         ; 00432328
    SUB ESI,EDX                         ; 0043232a
    MOV dword ptr [ESP + 0xc],EAX       ; 0043232c
    TEST EBP,EBP                        ; 00432330
    JNZ 0x0043233c                      ; 00432332
        ;   XREF to: 0043233c (CONDITIONAL_JUMP)  ; LAB_0043233c
    ADD ESP,0x2c                        ; 00432334
        ;   Label: LAB_00432334
    POP EBP                             ; 00432337
    POP EDI                             ; 00432338
    POP ESI                             ; 00432339
    POP EBX                             ; 0043233a
    RET                                 ; 0043233b
    CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760 ; 0043233c
        ;   XREF to: 00431760 (UNCONDITIONAL_CALL)  ; ColorConversionFunc * cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760()
        ;   Label: LAB_0043233c
    MOV EDX,dword ptr [ESP + 0x54]      ; 00432341
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00432345
    MOV EDI,EDX                         ; 00432349
    MOV dword ptr [ESP + 0x28],EAX      ; 0043234b
    SHL EDI,0x5                         ; 0043234f
    MOV EAX,[0x0067939c]                ; 00432352 | g_BitsPerPixel
    ADD EDI,EDX                         ; 00432357
    SHL EBP,0x2                         ; 00432359
    SHL EDI,0x2                         ; 0043235c
    CMP EAX,0x8                         ; 0043235f
    JNZ 0x0043243e                      ; 00432362
        ;   XREF to: 0043243e (CONDITIONAL_JUMP)  ; LAB_0043243e
    MOV EDX,dword ptr [ESP + 0x48]      ; 00432368
    MOV EAX,dword ptr [EBP + 0x2cf6a9c] ; 0043236c | g_ScreenBufferArray
    ADD EDX,EAX                         ; 00432372
    MOV ECX,dword ptr [ESP + 0x54]      ; 00432374
    MOV dword ptr [ESP + 0x24],EDX      ; 00432378
    TEST ECX,ECX                        ; 0043237c
    JLE 0x00432334                      ; 0043237e
        ;   XREF to: 00432334 (CONDITIONAL_JUMP)  ; LAB_00432334
    XOR ECX,ECX                         ; 00432380
    MOV dword ptr [ESP + 0x8],EDI       ; 00432382
    MOV dword ptr [ESP + 0x14],ECX      ; 00432386
    CMP dword ptr [ESP + 0x44],0x0      ; 0043238a
        ;   Label: LAB_0043238a
    JZ 0x004323fa                       ; 0043238f
        ;   XREF to: 004323fa (CONDITIONAL_JUMP)  ; LAB_004323fa
    MOV EAX,dword ptr [ESP + 0x14]      ; 00432391
    XOR EBP,EBP                         ; 00432395
    XOR EDI,EDI                         ; 00432397
    MOV dword ptr [ESP + 0x1c],EAX      ; 00432399
    MOV EDX,dword ptr [ESP + 0x44]      ; 0043239d
        ;   Label: LAB_0043239d
    ADD EDX,dword ptr [ESP + 0x1c]      ; 004323a1
    CMP EDI,dword ptr [EDX]             ; 004323a5
    JGE 0x004323c2                      ; 004323a7
        ;   XREF to: 004323c2 (CONDITIONAL_JUMP)  ; LAB_004323c2
    MOV EAX,dword ptr [EDX + EBP*0x1 + 0x4] ; 004323a9
    MOV EDX,dword ptr [EDX + EBP*0x1 + 0x44] ; 004323ad
    ADD EDX,EAX                         ; 004323b1
    DEC EDX                             ; 004323b3
    CMP EAX,ESI                         ; 004323b4
    JGE 0x00432414                      ; 004323b6
        ;   XREF to: 00432414 (CONDITIONAL_JUMP)  ; LAB_00432414
    CMP EDX,ESI                         ; 004323b8
    JGE 0x00432412                      ; 004323ba
        ;   XREF to: 00432412 (CONDITIONAL_JUMP)  ; LAB_00432412
    INC EDI                             ; 004323bc
        ;   Label: LAB_004323bc
    ADD EBP,0x4                         ; 004323bd
    JMP 0x0043239d                      ; 004323c0
        ;   XREF to: 0043239d (UNCONDITIONAL_JUMP)  ; LAB_0043239d
    MOV ECX,dword ptr [ESP + 0x14]      ; 004323c2
        ;   Label: LAB_004323c2
    MOV EAX,dword ptr [ESP + 0xc]       ; 004323c6
    MOV EDI,dword ptr [ESP + 0x24]      ; 004323ca
    MOV EBP,dword ptr [ESP + 0x40]      ; 004323ce
    MOV EDX,dword ptr [ESP + 0x8]       ; 004323d2
    ADD ECX,0x84                        ; 004323d6
    ADD EDI,EAX                         ; 004323dc
    MOV EAX,dword ptr [ESP + 0x50]      ; 004323de
    MOV dword ptr [ESP + 0x14],ECX      ; 004323e2
    ADD EBP,EAX                         ; 004323e6
    MOV dword ptr [ESP + 0x24],EDI      ; 004323e8
    MOV dword ptr [ESP + 0x40],EBP      ; 004323ec
    CMP ECX,EDX                         ; 004323f0
    JGE 0x00432334                      ; 004323f2
        ;   XREF to: 00432334 (CONDITIONAL_JUMP)  ; LAB_00432334
    JMP 0x0043238a                      ; 004323f8
        ;   XREF to: 0043238a (UNCONDITIONAL_JUMP)  ; LAB_0043238a
    MOV EBP,dword ptr [ESP + 0x50]      ; 004323fa
        ;   Label: LAB_004323fa
    PUSH EBP                            ; 004323fe
    MOV EAX,dword ptr [ESP + 0x44]      ; 004323ff
    PUSH EAX                            ; 00432403
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00432404
    PUSH EDX                            ; 00432408
    CALL dword ptr [ESP + 0x34]         ; 00432409
    ADD ESP,0xc                         ; 0043240d
    JMP 0x004323c2                      ; 00432410
        ;   XREF to: 004323c2 (UNCONDITIONAL_JUMP)  ; LAB_004323c2
    MOV EAX,ESI                         ; 00432412
        ;   Label: LAB_00432412
    CMP EDX,EBX                         ; 00432414
        ;   Label: LAB_00432414
    JLE 0x0043241e                      ; 00432416
        ;   XREF to: 0043241e (CONDITIONAL_JUMP)  ; LAB_0043241e
    CMP EAX,EBX                         ; 00432418
    JG 0x004323bc                       ; 0043241a
        ;   XREF to: 004323bc (CONDITIONAL_JUMP)  ; LAB_004323bc
    MOV EDX,EBX                         ; 0043241c
    SUB EDX,EAX                         ; 0043241e
        ;   Label: LAB_0043241e
    INC EDX                             ; 00432420
    PUSH EDX                            ; 00432421
    MOV EDX,dword ptr [ESP + 0x44]      ; 00432422
    ADD EDX,EAX                         ; 00432426
    PUSH EDX                            ; 00432428
    ADD EAX,dword ptr [ESP + 0x2c]      ; 00432429
    PUSH EAX                            ; 0043242d
    CALL dword ptr [ESP + 0x34]         ; 0043242e
    ADD ESP,0xc                         ; 00432432
    INC EDI                             ; 00432435
    ADD EBP,0x4                         ; 00432436
    JMP 0x0043239d                      ; 00432439
        ;   XREF to: 0043239d (UNCONDITIONAL_JUMP)  ; LAB_0043239d
    MOV EAX,dword ptr [ESP + 0x48]      ; 0043243e
        ;   Label: LAB_0043243e
    MOV EDX,dword ptr [EBP + 0x2cf6a9c] ; 00432442 | g_ScreenBufferArray
    ADD EAX,EAX                         ; 00432448
    ADD EDX,EAX                         ; 0043244a
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043244c
    MOV dword ptr [ESP + 0x20],EDX      ; 00432450
    MOV EDX,EAX                         ; 00432454
    SAR EDX,0x1f                        ; 00432456
    SUB EAX,EDX                         ; 00432459
    SAR EAX,0x1                         ; 0043245b
    MOV EDX,dword ptr [ESP + 0x54]      ; 0043245d
    MOV dword ptr [ESP + 0xc],EAX       ; 00432461
    TEST EDX,EDX                        ; 00432465
    JLE 0x00432334                      ; 00432467
        ;   XREF to: 00432334 (CONDITIONAL_JUMP)  ; LAB_00432334
    MOV dword ptr [ESP + 0x4],EDI       ; 0043246d
    XOR EBP,EBP                         ; 00432471
    ADD EAX,EAX                         ; 00432473
    MOV dword ptr [ESP + 0x10],EBP      ; 00432475
    MOV dword ptr [ESP],EAX             ; 00432479
    CMP dword ptr [ESP + 0x44],0x0      ; 0043247c
        ;   Label: LAB_0043247c
    JZ 0x004324eb                       ; 00432481
        ;   XREF to: 004324eb (CONDITIONAL_JUMP)  ; LAB_004324eb
    MOV EAX,dword ptr [ESP + 0x10]      ; 00432483
    XOR EBP,EBP                         ; 00432487
    XOR EDI,EDI                         ; 00432489
    MOV dword ptr [ESP + 0x18],EAX      ; 0043248b
    MOV EDX,dword ptr [ESP + 0x44]      ; 0043248f
        ;   Label: LAB_0043248f
    ADD EDX,dword ptr [ESP + 0x18]      ; 00432493
    CMP EDI,dword ptr [EDX]             ; 00432497
    JGE 0x004324b4                      ; 00432499
        ;   XREF to: 004324b4 (CONDITIONAL_JUMP)  ; LAB_004324b4
    MOV EAX,dword ptr [EDX + EBP*0x1 + 0x4] ; 0043249b
    MOV EDX,dword ptr [EDX + EBP*0x1 + 0x44] ; 0043249f
    ADD EDX,EAX                         ; 004324a3
    DEC EDX                             ; 004324a5
    CMP EAX,ESI                         ; 004324a6
    JGE 0x00432505                      ; 004324a8
        ;   XREF to: 00432505 (CONDITIONAL_JUMP)  ; LAB_00432505
    CMP EDX,ESI                         ; 004324aa
    JGE 0x00432503                      ; 004324ac
        ;   XREF to: 00432503 (CONDITIONAL_JUMP)  ; LAB_00432503
    INC EDI                             ; 004324ae
        ;   Label: LAB_004324ae
    ADD EBP,0x4                         ; 004324af
    JMP 0x0043248f                      ; 004324b2
        ;   XREF to: 0043248f (UNCONDITIONAL_JUMP)  ; LAB_0043248f
    MOV EDI,dword ptr [ESP + 0x10]      ; 004324b4
        ;   Label: LAB_004324b4
    MOV EAX,dword ptr [ESP]             ; 004324b8
    MOV EBP,dword ptr [ESP + 0x20]      ; 004324bb
    MOV EDX,dword ptr [ESP + 0x40]      ; 004324bf
    MOV ECX,dword ptr [ESP + 0x4]       ; 004324c3
    ADD EDI,0x84                        ; 004324c7
    ADD EBP,EAX                         ; 004324cd
    MOV EAX,dword ptr [ESP + 0x50]      ; 004324cf
    MOV dword ptr [ESP + 0x10],EDI      ; 004324d3
    ADD EDX,EAX                         ; 004324d7
    MOV dword ptr [ESP + 0x20],EBP      ; 004324d9
    MOV dword ptr [ESP + 0x40],EDX      ; 004324dd
    CMP EDI,ECX                         ; 004324e1
    JGE 0x00432334                      ; 004324e3
        ;   XREF to: 00432334 (CONDITIONAL_JUMP)  ; LAB_00432334
    JMP 0x0043247c                      ; 004324e9
        ;   XREF to: 0043247c (UNCONDITIONAL_JUMP)  ; LAB_0043247c
    MOV EDX,dword ptr [ESP + 0x50]      ; 004324eb
        ;   Label: LAB_004324eb
    PUSH EDX                            ; 004324ef
    MOV ECX,dword ptr [ESP + 0x44]      ; 004324f0
    PUSH ECX                            ; 004324f4
    MOV EDI,dword ptr [ESP + 0x28]      ; 004324f5
    PUSH EDI                            ; 004324f9
    CALL dword ptr [ESP + 0x34]         ; 004324fa
    ADD ESP,0xc                         ; 004324fe
    JMP 0x004324b4                      ; 00432501
        ;   XREF to: 004324b4 (UNCONDITIONAL_JUMP)  ; LAB_004324b4
    MOV EAX,ESI                         ; 00432503
        ;   Label: LAB_00432503
    CMP EDX,EBX                         ; 00432505
        ;   Label: LAB_00432505
    JLE 0x0043250f                      ; 00432507
        ;   XREF to: 0043250f (CONDITIONAL_JUMP)  ; LAB_0043250f
    CMP EAX,EBX                         ; 00432509
    JG 0x004324ae                       ; 0043250b
        ;   XREF to: 004324ae (CONDITIONAL_JUMP)  ; LAB_004324ae
    MOV EDX,EBX                         ; 0043250d
    SUB EDX,EAX                         ; 0043250f
        ;   Label: LAB_0043250f
    INC EDX                             ; 00432511
    PUSH EDX                            ; 00432512
    MOV EDX,dword ptr [ESP + 0x44]      ; 00432513
    ADD EDX,EAX                         ; 00432517
    PUSH EDX                            ; 00432519
    ADD EAX,EAX                         ; 0043251a
    ADD EAX,dword ptr [ESP + 0x28]      ; 0043251c
    PUSH EAX                            ; 00432520
    CALL dword ptr [ESP + 0x34]         ; 00432521
    ADD ESP,0xc                         ; 00432525
    INC EDI                             ; 00432528
    ADD EBP,0x4                         ; 00432529
    JMP 0x0043248f                      ; 0043252c
        ;   XREF to: 0043248f (UNCONDITIONAL_JUMP)  ; LAB_0043248f

