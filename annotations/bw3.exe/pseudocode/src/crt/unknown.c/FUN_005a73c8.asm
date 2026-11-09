; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a73c8(uint *param_1,int *param_2,undefined1 *param_3)
;
;
; XREF[2]:
;   unkafter_asgaya.cpp_FUN_005ad52f at 005ad5e1
;   unkafter_asgaya.cpp_FUN_005afa5c at 005afabd
;
; Called Functions:
;   crt_unknown.c_FUN_005a76d7
;   unkafter_asgaya.cpp_FUN_005ad64c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005a73c8
        ;   Label: crt_unknown.c_FUN_005a73c8
    MOV EBP,ESP                         ; 005a73c9
    PUSH EBX                            ; 005a73cb
    PUSH ESI                            ; 005a73cc
    PUSH EDI                            ; 005a73cd
    SUB ESP,0x88                        ; 005a73ce
    MOV EBX,dword ptr [EBP + 0x8]       ; 005a73d4
    MOV ESI,dword ptr [EBP + 0xc]       ; 005a73d7
    PUSH 0x0                            ; 005a73da
    FSTCW word ptr [ESP]                ; 005a73dc
    POP EAX                             ; 005a73e0
    MOV dword ptr [EBP + -0x14],EAX     ; 005a73e1
    OR AH,0x3                           ; 005a73e4
    AND EAX,0xffff                      ; 005a73e7
    PUSH EAX                            ; 005a73ec
    FLDCW word ptr [ESP]                ; 005a73ed
    POP EAX                             ; 005a73f0
    MOV dword ptr [ESI + 0x14],0x0      ; 005a73f1
    MOV AX,word ptr [EBX + 0x8]         ; 005a73f8
    MOV word ptr [EBP + -0x40],AX       ; 005a73fc
    MOV EAX,dword ptr [EBX + 0x4]       ; 005a7400
    MOV dword ptr [EBP + -0x44],EAX     ; 005a7403
    MOV EAX,dword ptr [EBX]             ; 005a7406
    MOV dword ptr [EBP + -0x48],EAX     ; 005a7408
    TEST byte ptr [EBP + -0x3f],0x80    ; 005a740b
    JZ 0x005a7418                       ; 005a740f
        ;   XREF to: 005a7418 (CONDITIONAL_JUMP)  ; LAB_005a7418
    MOV dword ptr [ESI + 0x14],0xffffffff ; 005a7411
    AND byte ptr [EBP + -0x3f],0x7f     ; 005a7418
        ;   Label: LAB_005a7418
    MOV dword ptr [ESI + 0x1c],0x0      ; 005a741c
    MOV dword ptr [ESI + 0x20],0x0      ; 005a7423
    LEA EAX,[EBP + -0x48]               ; 005a742a
    MOV dword ptr [ESI + 0x24],0x0      ; 005a742d
    PUSH EAX                            ; 005a7434
    MOV dword ptr [ESI + 0x28],0x0      ; 005a7435
    XOR EDI,EDI                         ; 005a743c
    MOV dword ptr [ESI + 0x18],0x0      ; 005a743e
    CALL unkafter_asgaya.cpp_FUN_005ad64c ; 005a7445
        ;   XREF to: 005ad64c (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005ad64c()
    ADD ESP,0x4                         ; 005a744a
    CMP EAX,0x4                         ; 005a744d
    JA 0x005a75d0                       ; 005a7450
        ;   XREF to: 005a75d0 (CONDITIONAL_JUMP)  ; LAB_005a75d0
    JMP dword ptr CS:[EAX*0x4 + 0x5a73b4] ; 005a7456
    TEST byte ptr [ESI + 0x8],0x2       ; 005a75d0
        ;   Label: LAB_005a75d0
    JZ 0x005a75f2                       ; 005a75d4
        ;   XREF to: 005a75f2 (CONDITIONAL_JUMP)  ; LAB_005a75f2
    MOV EDX,dword ptr [EBP + -0x20]     ; 005a75d6
    MOV EAX,dword ptr [ESI]             ; 005a75d9
    ADD EAX,EDX                         ; 005a75db
    ADD EAX,0xa                         ; 005a75dd
    MOV EBX,dword ptr [ESI + 0x4]       ; 005a75e0
    MOV dword ptr [EBP + -0x18],EAX     ; 005a75e3
    TEST EBX,EBX                        ; 005a75e6
    JLE 0x005a75fa                      ; 005a75e8
        ;   XREF to: 005a75fa (CONDITIONAL_JUMP)  ; LAB_005a75fa
    LEA ECX,[EAX + EBX*0x1]             ; 005a75ea
    MOV dword ptr [EBP + -0x18],ECX     ; 005a75ed
    JMP 0x005a75fa                      ; 005a75f0
        ;   XREF to: 005a75fa (UNCONDITIONAL_JUMP)  ; LAB_005a75fa
    MOV EAX,dword ptr [ESI]             ; 005a75f2
        ;   Label: LAB_005a75f2
    ADD EAX,0x7                         ; 005a75f4
    MOV dword ptr [EBP + -0x18],EAX     ; 005a75f7
    MOV BH,byte ptr [ESI + 0x8]         ; 005a75fa
        ;   Label: LAB_005a75fa
    MOV EAX,0xf                         ; 005a75fd
    TEST BH,0x20                        ; 005a7602
    JZ 0x005a760c                       ; 005a7605
        ;   XREF to: 005a760c (CONDITIONAL_JUMP)  ; LAB_005a760c
    MOV EAX,0x14                        ; 005a7607
    TEST byte ptr [ESI + 0x8],0x40      ; 005a760c
        ;   Label: LAB_005a760c
    JZ 0x005a7614                       ; 005a7610
        ;   XREF to: 005a7614 (CONDITIONAL_JUMP)  ; LAB_005a7614
    ADD EAX,EAX                         ; 005a7612
    MOV EDX,dword ptr [EBP + -0x18]     ; 005a7614
        ;   Label: LAB_005a7614
    ADD EAX,0x4                         ; 005a7617
    CMP EAX,EDX                         ; 005a761a
    JGE 0x005a7621                      ; 005a761c
        ;   XREF to: 005a7621 (CONDITIONAL_JUMP)  ; LAB_005a7621
    MOV dword ptr [EBP + -0x18],EAX     ; 005a761e
    MOV CH,0x30                         ; 005a7621
        ;   Label: LAB_005a7621
    XOR AL,AL                           ; 005a7623
    XOR EBX,EBX                         ; 005a7625
    MOV byte ptr [EBP + 0xffffff6c],CH  ; 005a7627
    MOV byte ptr [EBP + 0xffffff6d],AL  ; 005a762d
    LEA EAX,[EBP + 0xffffff6d]          ; 005a7633
    MOV dword ptr [EBP + -0x24],EBX     ; 005a7639
    MOV dword ptr [EBP + -0x1c],EAX     ; 005a763c
    MOV ECX,dword ptr [EBP + -0x18]     ; 005a763f
        ;   Label: LAB_005a763f
    TEST ECX,ECX                        ; 005a7642
    JLE 0x005a7735                      ; 005a7644
        ;   XREF to: 005a7735 (CONDITIONAL_JUMP)  ; LAB_005a7735
    LEA EAX,[ECX + -0x8]                ; 005a764a
    MOV dword ptr [EBP + -0x18],EAX     ; 005a764d
    TEST EDI,EDI                        ; 005a7650
    JNZ 0x005a76c9                      ; 005a7652
        ;   XREF to: 005a76c9 (CONDITIONAL_JUMP)  ; LAB_005a76c9
    TEST word ptr [EBP + -0x40],0x7fff  ; 005a7654
    JZ 0x005a7735                       ; 005a765a
        ;   XREF to: 005a7735 (CONDITIONAL_JUMP)  ; LAB_005a7735
    LEA EAX,[EBP + -0x48]               ; 005a7660
    FLD extended double ptr [EAX]       ; 005a7663
    PUSH EAX                            ; 005a7665
    PUSH EAX                            ; 005a7666
    FSTCW word ptr [ESP]                ; 005a7667
    POP EAX                             ; 005a766b
    PUSH EAX                            ; 005a766c
    OR AH,0xc                           ; 005a766d
    PUSH EAX                            ; 005a7670
    FLDCW word ptr [ESP]                ; 005a7671
    POP EAX                             ; 005a7674
    FISTP dword ptr [ESP + 0x4]         ; 005a7675
    FLDCW word ptr [ESP]                ; 005a7679
    POP EAX                             ; 005a767c
    POP EAX                             ; 005a767d
    MOV EDX,dword ptr [EBP + -0x18]     ; 005a767e
    MOV EDI,EAX                         ; 005a7681
    TEST EDX,EDX                        ; 005a7683
    JLE 0x005a76c9                      ; 005a7685
        ;   XREF to: 005a76c9 (CONDITIONAL_JUMP)  ; LAB_005a76c9
    LEA EDX,[EBP + -0x54]               ; 005a7687
    LEA EBX,[EBP + -0x48]               ; 005a768a
    PUSH EAX                            ; 005a768d
    FILD dword ptr [ESP]                ; 005a768e
    POP EAX                             ; 005a7691
    FSTP extended double ptr [EDX]      ; 005a7692
    LEA EDX,[EBP + -0x54]               ; 005a7694
    LEA EAX,[EBP + -0x48]               ; 005a7697
    FLD extended double ptr [EAX]       ; 005a769a
    FLD extended double ptr [EDX]       ; 005a769c
    FSUBP                               ; 005a769e
    FSTP extended double ptr [EBX]      ; 005a76a0
    MOV ECX,0x4019                      ; 005a76a2
    MOV EBX,0xbebc2000                  ; 005a76a7
    LEA EDX,[EBP + -0x54]               ; 005a76ac
    LEA EAX,[EBP + -0x48]               ; 005a76af
    MOV word ptr [EBP + -0x4c],CX       ; 005a76b2
    MOV dword ptr [EBP + -0x50],EBX     ; 005a76b6
    XOR ECX,ECX                         ; 005a76b9
    LEA EBX,[EBP + -0x48]               ; 005a76bb
    MOV dword ptr [EBP + -0x54],ECX     ; 005a76be
    FLD extended double ptr [EAX]       ; 005a76c1
    FLD extended double ptr [EDX]       ; 005a76c3
    FMULP                               ; 005a76c5
    FSTP extended double ptr [EBX]      ; 005a76c7
    MOV EBX,dword ptr [EBP + -0x1c]     ; 005a76c9
        ;   Label: LAB_005a76c9
    MOV EAX,EDI                         ; 005a76cc
    PUSH ECX                            ; 005a76ce
    PUSH EDX                            ; 005a76cf
    CALL crt_unknown.c_FUN_005a76d7     ; 005a76d0
        ;   XREF to: 005a76d7 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a76d7()
    JMP 0x005a771c                      ; 005a76d5
        ;   XREF to: 005a771c (UNCONDITIONAL_JUMP)

