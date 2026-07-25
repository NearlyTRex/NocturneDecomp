; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_renderPolygonSolidLitClampedOp17_FUN_00405540(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_005b763c
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;   undefined4 DAT_006b027c
;   undefined4 DAT_006b029c
;   undefined4 DAT_006b02a0
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c02594
;   undefined4 DAT_01c03948
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00404710
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_clipper.c_FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00405540
        ;   Label: engine_3d.c_renderPolygonSolidLitClampedOp17_FUN_00405540
    PUSH EDI                            ; 00405541
    PUSH EBP                            ; 00405542
    MOV EAX,dword ptr [ESP + 0x10]      ; 00405543
    ADD EAX,0x8                         ; 00405547
    MOV EBP,dword ptr [ESP + 0x10]      ; 0040554a
    PUSH EAX                            ; 0040554e
    ADD EBP,0x18                        ; 0040554f
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00405552
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 00405557
    TEST EAX,EAX                        ; 0040555a
    JZ 0x0040571f                       ; 0040555c
        ;   XREF to: 0040571f (CONDITIONAL_JUMP)  ; LAB_0040571f
    CMP dword ptr [0x006b027c],0x0      ; 00405562 | DAT_006b027c
    JNZ 0x0040567f                      ; 00405569
        ;   XREF to: 0040567f (CONDITIONAL_JUMP)  ; LAB_0040567f
    CMP dword ptr [0x01c03948],0x0      ; 0040556f | DAT_01c03948
    JNZ 0x00405658                      ; 00405576
        ;   XREF to: 00405658 (CONDITIONAL_JUMP)  ; LAB_00405658
    CMP dword ptr [0x005b7624],0x20     ; 0040557c | DAT_005b7624
    JNZ 0x00405649                      ; 00405583
        ;   XREF to: 00405649 (CONDITIONAL_JUMP)  ; LAB_00405649
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00405589 | DAT_01c00c7c
        ;   Label: LAB_00405589
    MOV ESI,dword ptr [ESP + 0x10]      ; 00405593
        ;   Label: LAB_00405593
    PUSH ESI                            ; 00405597
    MOV EDI,0x13                        ; 00405598
    CALL engine_3d.c_calculatePolygonLighting_FUN_00404710 ; 0040559d
        ;   XREF to: 00404710 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_calculatePolygonLighting_FUN_00404710()
    MOV EAX,[0x005b763c]                ; 004055a2 | DAT_005b763c
    ADD ESP,0x4                         ; 004055a7
    MOV dword ptr [0x01c039a0],EDI      ; 004055aa | DAT_01c039a0
    CMP EAX,0xff                        ; 004055b0
    JL 0x004056bc                       ; 004055b5
        ;   XREF to: 004056bc (CONDITIONAL_JUMP)  ; LAB_004056bc
    PUSH EBX                            ; 004055bb
        ;   Label: LAB_004055bb
    XOR ECX,ECX                         ; 004055bc
    XOR EDI,EDI                         ; 004055be
    XOR EBX,EBX                         ; 004055c0
    XOR ESI,ESI                         ; 004055c2
    MOV dword ptr [0x01c039a4],ECX      ; 004055c4 | DAT_01c039a4
    MOV ECX,EBP                         ; 004055ca
    MOV EAX,dword ptr [ESP + 0x14]      ; 004055cc
        ;   Label: LAB_004055cc
    MOV EAX,dword ptr [EAX + 0x4]       ; 004055d0
    LEA EAX,[EAX + EAX*0x2]             ; 004055d3
    CMP EBX,EAX                         ; 004055d6
    JGE 0x00405710                      ; 004055d8
        ;   XREF to: 00405710 (CONDITIONAL_JUMP)  ; LAB_00405710
    MOV EAX,dword ptr [ECX]             ; 004055de
    MOV dword ptr [ESI + 0x6b029c],EAX  ; 004055e0 | DAT_006b029c | DAT_006b02a0
    MOV EBP,dword ptr [0x01c02594]      ; 004055e6 | DAT_01c02594
    MOV EAX,dword ptr [ECX + 0x4]       ; 004055ec
    MOV EDX,dword ptr [ECX + 0x8]       ; 004055ef
    TEST EBP,EBP                        ; 004055f2
    JZ 0x004056d5                       ; 004055f4
        ;   XREF to: 004056d5 (CONDITIONAL_JUMP)  ; LAB_004056d5
    CMP EAX,0x20000                     ; 004055fa
    JGE 0x00405606                      ; 004055ff
        ;   XREF to: 00405606 (CONDITIONAL_JUMP)  ; LAB_00405606
    MOV EAX,0x20000                     ; 00405601
    CMP EDX,0x20000                     ; 00405606
        ;   Label: LAB_00405606
    JGE 0x00405613                      ; 0040560c
        ;   XREF to: 00405613 (CONDITIONAL_JUMP)  ; LAB_00405613
    MOV EDX,0x20000                     ; 0040560e
    CMP EAX,0xfdffff                    ; 00405613
        ;   Label: LAB_00405613
    JLE 0x0040561f                      ; 00405618
        ;   XREF to: 0040561f (CONDITIONAL_JUMP)  ; LAB_0040561f
    MOV EAX,0xfdffff                    ; 0040561a
    CMP EDX,0xfdffff                    ; 0040561f
        ;   Label: LAB_0040561f
    JG 0x004056cb                       ; 00405625
        ;   XREF to: 004056cb (CONDITIONAL_JUMP)  ; LAB_004056cb
    IMUL EBP,dword ptr [ECX],0x30       ; 0040562b
        ;   Label: LAB_0040562b
    MOV dword ptr [EBP + 0x5c502c],EAX  ; 0040562e | DAT_005c502c
    IMUL EAX,dword ptr [ECX],0x30       ; 00405634
    ADD ESI,0x4                         ; 00405637
    INC EDI                             ; 0040563a
    ADD EBX,0x3                         ; 0040563b
    ADD ECX,0xc                         ; 0040563e
    MOV dword ptr [EAX + 0x5c5030],EDX  ; 00405641 | DAT_005c5030
    JMP 0x004055cc                      ; 00405647
        ;   XREF to: 004055cc (UNCONDITIONAL_JUMP)  ; LAB_004055cc
    MOV dword ptr [0x01c00c7c],0x530322 ; 00405649 | DAT_01c00c7c
        ;   Label: LAB_00405649
    JMP 0x00405593                      ; 00405653
        ;   XREF to: 00405593 (UNCONDITIONAL_JUMP)  ; LAB_00405593
    CMP dword ptr [0x005b7624],0x20     ; 00405658 | DAT_005b7624
        ;   Label: LAB_00405658
    JNZ 0x00405670                      ; 0040565f
        ;   XREF to: 00405670 (CONDITIONAL_JUMP)  ; LAB_00405670
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00405661 | DAT_01c00c7c
    JMP 0x00405593                      ; 0040566b
        ;   XREF to: 00405593 (UNCONDITIONAL_JUMP)  ; LAB_00405593
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00405670 | DAT_01c00c7c
        ;   Label: LAB_00405670
    JMP 0x00405593                      ; 0040567a
        ;   XREF to: 00405593 (UNCONDITIONAL_JUMP)  ; LAB_00405593
    CMP dword ptr [0x01c03948],0x0      ; 0040567f | DAT_01c03948
        ;   Label: LAB_0040567f
    JNZ 0x004056a4                      ; 00405686
        ;   XREF to: 004056a4 (CONDITIONAL_JUMP)  ; LAB_004056a4
    CMP dword ptr [0x005b7624],0x20     ; 00405688 | DAT_005b7624
    JZ 0x00405589                       ; 0040568f
        ;   XREF to: 00405589 (CONDITIONAL_JUMP)  ; LAB_00405589
    MOV dword ptr [0x01c00c7c],0x530322 ; 00405695 | DAT_01c00c7c
    JMP 0x00405593                      ; 0040569f
        ;   XREF to: 00405593 (UNCONDITIONAL_JUMP)  ; LAB_00405593
    CMP dword ptr [0x005b7624],0x20     ; 004056a4 | DAT_005b7624
        ;   Label: LAB_004056a4
    JNZ 0x00405670                      ; 004056ab
        ;   XREF to: 00405670 (CONDITIONAL_JUMP)  ; LAB_00405670
    MOV dword ptr [0x01c00c7c],0x52f031 ; 004056ad | DAT_01c00c7c
    JMP 0x00405593                      ; 004056b7
        ;   XREF to: 00405593 (UNCONDITIONAL_JUMP)  ; LAB_00405593
    MOV dword ptr [0x01c039a0],0x33     ; 004056bc | DAT_01c039a0
        ;   Label: LAB_004056bc
    JMP 0x004055bb                      ; 004056c6
        ;   XREF to: 004055bb (UNCONDITIONAL_JUMP)  ; LAB_004055bb
    MOV EDX,0xfdffff                    ; 004056cb
        ;   Label: LAB_004056cb
    JMP 0x0040562b                      ; 004056d0
        ;   XREF to: 0040562b (UNCONDITIONAL_JUMP)  ; LAB_0040562b
    CMP EAX,0x10000                     ; 004056d5
        ;   Label: LAB_004056d5
    JGE 0x004056e1                      ; 004056da
        ;   XREF to: 004056e1 (CONDITIONAL_JUMP)  ; LAB_004056e1
    MOV EAX,0x10000                     ; 004056dc
    CMP EDX,0x10000                     ; 004056e1
        ;   Label: LAB_004056e1
    JGE 0x004056ee                      ; 004056e7
        ;   XREF to: 004056ee (CONDITIONAL_JUMP)  ; LAB_004056ee
    MOV EDX,0x10000                     ; 004056e9
    CMP EAX,0xfeffff                    ; 004056ee
        ;   Label: LAB_004056ee
    JLE 0x004056fa                      ; 004056f3
        ;   XREF to: 004056fa (CONDITIONAL_JUMP)  ; LAB_004056fa
    MOV EAX,0xfeffff                    ; 004056f5
    CMP EDX,0xfeffff                    ; 004056fa
        ;   Label: LAB_004056fa
    JLE 0x0040562b                      ; 00405700
        ;   XREF to: 0040562b (CONDITIONAL_JUMP)  ; LAB_0040562b
    MOV EDX,0xfeffff                    ; 00405706
    JMP 0x0040562b                      ; 0040570b
        ;   XREF to: 0040562b (UNCONDITIONAL_JUMP)  ; LAB_0040562b
    PUSH 0x6b029c                       ; 00405710 | DAT_006b029c
        ;   Label: LAB_00405710
    PUSH EDI                            ; 00405715
    CALL engine_clipper.c_FUN_00432cd0  ; 00405716
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    ADD ESP,0x8                         ; 0040571b
    POP EBX                             ; 0040571e
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040571f
        ;   Label: LAB_0040571f
    MOV EDX,dword ptr [EDX + 0x4]       ; 00405723
    LEA EAX,[EDX*0x4 + 0x0]             ; 00405726
    SUB EAX,EDX                         ; 0040572d
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040572f
    SHL EAX,0x2                         ; 00405733
    ADD EDX,0x18                        ; 00405736
    ADD EAX,EDX                         ; 00405739
    POP EBP                             ; 0040573b
    POP EDI                             ; 0040573c
    POP ESI                             ; 0040573d
    RET                                 ; 0040573e

