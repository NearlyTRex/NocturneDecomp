; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f2610(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004f27a0 at 004f283b
;
; Referenced Globals:
;   undefined4 DAT_006004e0
;   undefined4 DAT_006004e8
;   undefined4 DAT_01d80844
;   undefined4 DAT_01d80848
;   undefined4 DAT_01d8084c
;   undefined4 DAT_01d80850
;   undefined4 DAT_01d80854
;   undefined4 DAT_01d80d48
;   undefined4 DAT_01d80d4c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2610
        ;   Label: FUN_004f2610
    PUSH ESI                            ; 004f2611
    PUSH EDI                            ; 004f2612
    PUSH EBP                            ; 004f2613
    SUB ESP,0x10                        ; 004f2614
    MOV EBP,dword ptr [ESP + 0x24]      ; 004f2617
    MOV EAX,[0x01d80844]                ; 004f261b | DAT_01d80844
    LEA EDI,[EAX*0x4 + 0x0]             ; 004f2620
    ADD EDI,EAX                         ; 004f2627
    MOV EAX,dword ptr [ESP + 0x28]      ; 004f2629
    SHL EDI,0x4                         ; 004f262d
    FLD float ptr [EBP + 0x18]          ; 004f2630
    ADD EDI,0x1d80848                   ; 004f2633
    FCOMP float ptr [EAX + 0x18]        ; 004f2639
    FNSTSW AX                           ; 004f263c
    SAHF                                ; 004f263e
    JBE 0x004f264b                      ; 004f263f
        ;   XREF to: 004f264b (CONDITIONAL_JUMP)  ; LAB_004f264b
    MOV EAX,EBP                         ; 004f2641
    MOV EBP,dword ptr [ESP + 0x28]      ; 004f2643
    MOV dword ptr [ESP + 0x28],EAX      ; 004f2647
    LEA EBX,[EBP + 0x18]                ; 004f264b
        ;   Label: LAB_004f264b
    MOV EAX,EDI                         ; 004f264e
    FLD float ptr [EBX]                 ; 004f2650
    FLD float ptr [0x006004e0]          ; 004f2652 | DAT_006004e0
    FSUBP                               ; 004f2658
    FISTP dword ptr [EAX]               ; 004f265a | DAT_01d80848
    MOV EBX,dword ptr [ESP + 0x28]      ; 004f265c
    LEA EAX,[EDI + 0x4]                 ; 004f2660
    ADD EBX,0x18                        ; 004f2663
    FLD float ptr [EBX]                 ; 004f2666
    FLD float ptr [0x006004e0]          ; 004f2668 | DAT_006004e0
    FSUBP                               ; 004f266e
    FISTP dword ptr [EAX]               ; 004f2670 | DAT_01d8084c
    MOV EAX,dword ptr [EDI]             ; 004f2672 | DAT_01d80848
    CMP EAX,dword ptr [EDI + 0x4]       ; 004f2674 | DAT_01d8084c
    JZ 0x004f2738                       ; 004f2677
        ;   XREF to: 004f2738 (CONDITIONAL_JUMP)  ; LAB_004f2738
    CMP EAX,dword ptr [0x01d80d48]      ; 004f267d | DAT_01d80d48
    JGE 0x004f268a                      ; 004f2683
        ;   XREF to: 004f268a (CONDITIONAL_JUMP)  ; LAB_004f268a
    MOV [0x01d80d48],EAX                ; 004f2685 | DAT_01d80d48
    MOV EBX,dword ptr [0x01d80d4c]      ; 004f268a | DAT_01d80d4c
        ;   Label: LAB_004f268a
    MOV EAX,dword ptr [EDI + 0x4]       ; 004f2690 | DAT_01d8084c
    CMP EAX,EBX                         ; 004f2693
    JLE 0x004f269c                      ; 004f2695
        ;   XREF to: 004f269c (CONDITIONAL_JUMP)  ; LAB_004f269c
    MOV [0x01d80d4c],EAX                ; 004f2697 | DAT_01d80d4c
    MOV EAX,dword ptr [ESP + 0x28]      ; 004f269c
        ;   Label: LAB_004f269c
    FLD float ptr [EAX + 0x18]          ; 004f26a0
    FSUB float ptr [EBP + 0x18]         ; 004f26a3
    FSTP float ptr [ESP + 0x8]          ; 004f26a6
    CMP dword ptr [ESP + 0x8],0x3f800000 ; 004f26aa
    JGE 0x004f2740                      ; 004f26b2
        ;   XREF to: 004f2740 (CONDITIONAL_JUMP)  ; LAB_004f2740
    XOR EAX,EAX                         ; 004f26b8
    MOV dword ptr [ESP + 0x8],EAX       ; 004f26ba
    FLD1                                ; 004f26be
        ;   Label: LAB_004f26be
    MOV EAX,dword ptr [ESP + 0x28]      ; 004f26c0
    FSUB float ptr [EBP + 0x18]         ; 004f26c4
    FILD dword ptr [EDI]                ; 004f26c7 | DAT_01d80848
    FLD float ptr [EAX + 0x14]          ; 004f26c9
    FSUB float ptr [EBP + 0x14]         ; 004f26cc
    FXCH                                ; 004f26cf
    FADDP ST2,ST0                       ; 004f26d1
    FLD float ptr [ESP + 0x8]           ; 004f26d3
    FXCH                                ; 004f26d7
    FMUL ST1                            ; 004f26d9
    FXCH ST2                            ; 004f26db
    FMULP                               ; 004f26dd
    LEA EBX,[ESP + 0x4]                 ; 004f26df
    LEA EAX,[EDI + 0xc]                 ; 004f26e3
    FXCH                                ; 004f26e6
    FSTP float ptr [ESP + 0x4]          ; 004f26e8
    FSTP float ptr [ESP]                ; 004f26ec
    FLD float ptr [EBX]                 ; 004f26ef
    FLD float ptr [0x006004e8]          ; 004f26f1 | DAT_006004e8
    FMULP                               ; 004f26f7
    FLD float ptr [0x006004e0]          ; 004f26f9 | DAT_006004e0
    FSUBP                               ; 004f26ff
    FISTP dword ptr [EAX]               ; 004f2701 | DAT_01d80854
    MOV EAX,dword ptr [ESP + 0x28]      ; 004f2703
    FLD float ptr [EAX + 0x14]          ; 004f2707
    FSUB float ptr [EBP + 0x14]         ; 004f270a
    FMUL float ptr [ESP]                ; 004f270d
    LEA EBX,[ESP + 0xc]                 ; 004f2710
    FADD float ptr [EBP + 0x14]         ; 004f2714
    LEA EAX,[EDI + 0x8]                 ; 004f2717
    FSTP float ptr [ESP + 0xc]          ; 004f271a
    FLD float ptr [EBX]                 ; 004f271e
    FLD float ptr [0x006004e8]          ; 004f2720 | DAT_006004e8
    FMULP                               ; 004f2726
    FLD float ptr [0x006004e0]          ; 004f2728 | DAT_006004e0
    FSUBP                               ; 004f272e
    FISTP dword ptr [EAX]               ; 004f2730 | DAT_01d80850
    INC dword ptr [0x01d80844]          ; 004f2732 | DAT_01d80844
    ADD ESP,0x10                        ; 004f2738
        ;   Label: LAB_004f2738
    POP EBP                             ; 004f273b
    POP EDI                             ; 004f273c
    POP ESI                             ; 004f273d
    POP EBX                             ; 004f273e
    RET                                 ; 004f273f
    FLD1                                ; 004f2740
        ;   Label: LAB_004f2740
    FDIV float ptr [ESP + 0x8]          ; 004f2742
    FSTP float ptr [ESP + 0x8]          ; 004f2746
    JMP 0x004f26be                      ; 004f274a
        ;   XREF to: 004f26be (UNCONDITIONAL_JUMP)  ; LAB_004f26be

