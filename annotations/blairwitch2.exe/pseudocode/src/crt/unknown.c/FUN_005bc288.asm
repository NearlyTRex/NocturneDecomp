; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bc288(uint *param_1,int *param_2,undefined1 *param_3)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005c23bf at 005c2471
;   crt_unknown.c_FUN_005c49cc at 005c4a2d
;
; Called Functions:
;   crt_unknown.c_FUN_005bc597
;   crt_unknown.c_FUN_005c24dc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005bc288
        ;   Label: crt_unknown.c_FUN_005bc288
    MOV EBP,ESP                         ; 005bc289
    PUSH EBX                            ; 005bc28b
    PUSH ESI                            ; 005bc28c
    PUSH EDI                            ; 005bc28d
    SUB ESP,0x88                        ; 005bc28e
    MOV EBX,dword ptr [EBP + 0x8]       ; 005bc294
    MOV ESI,dword ptr [EBP + 0xc]       ; 005bc297
    PUSH 0x0                            ; 005bc29a
    FSTCW word ptr [ESP]                ; 005bc29c
    POP EAX                             ; 005bc2a0
    MOV dword ptr [EBP + -0x14],EAX     ; 005bc2a1
    OR AH,0x3                           ; 005bc2a4
    AND EAX,0xffff                      ; 005bc2a7
    PUSH EAX                            ; 005bc2ac
    FLDCW word ptr [ESP]                ; 005bc2ad
    POP EAX                             ; 005bc2b0
    MOV dword ptr [ESI + 0x14],0x0      ; 005bc2b1
    MOV AX,word ptr [EBX + 0x8]         ; 005bc2b8
    MOV word ptr [EBP + -0x40],AX       ; 005bc2bc
    MOV EAX,dword ptr [EBX + 0x4]       ; 005bc2c0
    MOV dword ptr [EBP + -0x44],EAX     ; 005bc2c3
    MOV EAX,dword ptr [EBX]             ; 005bc2c6
    MOV dword ptr [EBP + -0x48],EAX     ; 005bc2c8
    TEST byte ptr [EBP + -0x3f],0x80    ; 005bc2cb
    JZ 0x005bc2d8                       ; 005bc2cf
        ;   XREF to: 005bc2d8 (CONDITIONAL_JUMP)  ; LAB_005bc2d8
    MOV dword ptr [ESI + 0x14],0xffffffff ; 005bc2d1
    AND byte ptr [EBP + -0x3f],0x7f     ; 005bc2d8
        ;   Label: LAB_005bc2d8
    MOV dword ptr [ESI + 0x1c],0x0      ; 005bc2dc
    MOV dword ptr [ESI + 0x20],0x0      ; 005bc2e3
    LEA EAX,[EBP + -0x48]               ; 005bc2ea
    MOV dword ptr [ESI + 0x24],0x0      ; 005bc2ed
    PUSH EAX                            ; 005bc2f4
    MOV dword ptr [ESI + 0x28],0x0      ; 005bc2f5
    XOR EDI,EDI                         ; 005bc2fc
    MOV dword ptr [ESI + 0x18],0x0      ; 005bc2fe
    CALL crt_unknown.c_FUN_005c24dc     ; 005bc305
        ;   XREF to: 005c24dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c24dc()
    ADD ESP,0x4                         ; 005bc30a
    CMP EAX,0x4                         ; 005bc30d
    JA 0x005bc490                       ; 005bc310
        ;   XREF to: 005bc490 (CONDITIONAL_JUMP)  ; LAB_005bc490
    JMP dword ptr CS:[EAX*0x4 + 0x5bc274] ; 005bc316
    TEST byte ptr [ESI + 0x8],0x2       ; 005bc490
        ;   Label: LAB_005bc490
    JZ 0x005bc4b2                       ; 005bc494
        ;   XREF to: 005bc4b2 (CONDITIONAL_JUMP)  ; LAB_005bc4b2
    MOV EDX,dword ptr [EBP + -0x20]     ; 005bc496
    MOV EAX,dword ptr [ESI]             ; 005bc499
    ADD EAX,EDX                         ; 005bc49b
    ADD EAX,0xa                         ; 005bc49d
    MOV EBX,dword ptr [ESI + 0x4]       ; 005bc4a0
    MOV dword ptr [EBP + -0x18],EAX     ; 005bc4a3
    TEST EBX,EBX                        ; 005bc4a6
    JLE 0x005bc4ba                      ; 005bc4a8
        ;   XREF to: 005bc4ba (CONDITIONAL_JUMP)  ; LAB_005bc4ba
    LEA ECX,[EAX + EBX*0x1]             ; 005bc4aa
    MOV dword ptr [EBP + -0x18],ECX     ; 005bc4ad
    JMP 0x005bc4ba                      ; 005bc4b0
        ;   XREF to: 005bc4ba (UNCONDITIONAL_JUMP)  ; LAB_005bc4ba
    MOV EAX,dword ptr [ESI]             ; 005bc4b2
        ;   Label: LAB_005bc4b2
    ADD EAX,0x7                         ; 005bc4b4
    MOV dword ptr [EBP + -0x18],EAX     ; 005bc4b7
    MOV BH,byte ptr [ESI + 0x8]         ; 005bc4ba
        ;   Label: LAB_005bc4ba
    MOV EAX,0xf                         ; 005bc4bd
    TEST BH,0x20                        ; 005bc4c2
    JZ 0x005bc4cc                       ; 005bc4c5
        ;   XREF to: 005bc4cc (CONDITIONAL_JUMP)  ; LAB_005bc4cc
    MOV EAX,0x14                        ; 005bc4c7
    TEST byte ptr [ESI + 0x8],0x40      ; 005bc4cc
        ;   Label: LAB_005bc4cc
    JZ 0x005bc4d4                       ; 005bc4d0
        ;   XREF to: 005bc4d4 (CONDITIONAL_JUMP)  ; LAB_005bc4d4
    ADD EAX,EAX                         ; 005bc4d2
    MOV EDX,dword ptr [EBP + -0x18]     ; 005bc4d4
        ;   Label: LAB_005bc4d4
    ADD EAX,0x4                         ; 005bc4d7
    CMP EAX,EDX                         ; 005bc4da
    JGE 0x005bc4e1                      ; 005bc4dc
        ;   XREF to: 005bc4e1 (CONDITIONAL_JUMP)  ; LAB_005bc4e1
    MOV dword ptr [EBP + -0x18],EAX     ; 005bc4de
    MOV CH,0x30                         ; 005bc4e1
        ;   Label: LAB_005bc4e1
    XOR AL,AL                           ; 005bc4e3
    XOR EBX,EBX                         ; 005bc4e5
    MOV byte ptr [EBP + 0xffffff6c],CH  ; 005bc4e7
    MOV byte ptr [EBP + 0xffffff6d],AL  ; 005bc4ed
    LEA EAX,[EBP + 0xffffff6d]          ; 005bc4f3
    MOV dword ptr [EBP + -0x24],EBX     ; 005bc4f9
    MOV dword ptr [EBP + -0x1c],EAX     ; 005bc4fc
    MOV ECX,dword ptr [EBP + -0x18]     ; 005bc4ff
        ;   Label: LAB_005bc4ff
    TEST ECX,ECX                        ; 005bc502
    JLE 0x005bc5f5                      ; 005bc504
        ;   XREF to: 005bc5f5 (CONDITIONAL_JUMP)  ; LAB_005bc5f5
    LEA EAX,[ECX + -0x8]                ; 005bc50a
    MOV dword ptr [EBP + -0x18],EAX     ; 005bc50d
    TEST EDI,EDI                        ; 005bc510
    JNZ 0x005bc589                      ; 005bc512
        ;   XREF to: 005bc589 (CONDITIONAL_JUMP)  ; LAB_005bc589
    TEST word ptr [EBP + -0x40],0x7fff  ; 005bc514
    JZ 0x005bc5f5                       ; 005bc51a
        ;   XREF to: 005bc5f5 (CONDITIONAL_JUMP)  ; LAB_005bc5f5
    LEA EAX,[EBP + -0x48]               ; 005bc520
    FLD extended double ptr [EAX]       ; 005bc523
    PUSH EAX                            ; 005bc525
    PUSH EAX                            ; 005bc526
    FSTCW word ptr [ESP]                ; 005bc527
    POP EAX                             ; 005bc52b
    PUSH EAX                            ; 005bc52c
    OR AH,0xc                           ; 005bc52d
    PUSH EAX                            ; 005bc530
    FLDCW word ptr [ESP]                ; 005bc531
    POP EAX                             ; 005bc534
    FISTP dword ptr [ESP + 0x4]         ; 005bc535
    FLDCW word ptr [ESP]                ; 005bc539
    POP EAX                             ; 005bc53c
    POP EAX                             ; 005bc53d
    MOV EDX,dword ptr [EBP + -0x18]     ; 005bc53e
    MOV EDI,EAX                         ; 005bc541
    TEST EDX,EDX                        ; 005bc543
    JLE 0x005bc589                      ; 005bc545
        ;   XREF to: 005bc589 (CONDITIONAL_JUMP)  ; LAB_005bc589
    LEA EDX,[EBP + -0x54]               ; 005bc547
    LEA EBX,[EBP + -0x48]               ; 005bc54a
    PUSH EAX                            ; 005bc54d
    FILD dword ptr [ESP]                ; 005bc54e
    POP EAX                             ; 005bc551
    FSTP extended double ptr [EDX]      ; 005bc552
    LEA EDX,[EBP + -0x54]               ; 005bc554
    LEA EAX,[EBP + -0x48]               ; 005bc557
    FLD extended double ptr [EAX]       ; 005bc55a
    FLD extended double ptr [EDX]       ; 005bc55c
    FSUBP                               ; 005bc55e
    FSTP extended double ptr [EBX]      ; 005bc560
    MOV ECX,0x4019                      ; 005bc562
    MOV EBX,0xbebc2000                  ; 005bc567
    LEA EDX,[EBP + -0x54]               ; 005bc56c
    LEA EAX,[EBP + -0x48]               ; 005bc56f
    MOV word ptr [EBP + -0x4c],CX       ; 005bc572
    MOV dword ptr [EBP + -0x50],EBX     ; 005bc576
    XOR ECX,ECX                         ; 005bc579
    LEA EBX,[EBP + -0x48]               ; 005bc57b
    MOV dword ptr [EBP + -0x54],ECX     ; 005bc57e
    FLD extended double ptr [EAX]       ; 005bc581
    FLD extended double ptr [EDX]       ; 005bc583
    FMULP                               ; 005bc585
    FSTP extended double ptr [EBX]      ; 005bc587
    MOV EBX,dword ptr [EBP + -0x1c]     ; 005bc589
        ;   Label: LAB_005bc589
    MOV EAX,EDI                         ; 005bc58c
    PUSH ECX                            ; 005bc58e
    PUSH EDX                            ; 005bc58f
    CALL crt_unknown.c_FUN_005bc597     ; 005bc590
        ;   XREF to: 005bc597 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bc597()
    JMP 0x005bc5dc                      ; 005bc595
        ;   XREF to: 005bc5dc (UNCONDITIONAL_JUMP)

