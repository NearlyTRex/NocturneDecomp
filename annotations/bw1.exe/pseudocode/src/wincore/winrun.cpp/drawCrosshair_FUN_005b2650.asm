; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_drawCrosshair_FUN_005b2650(void)
;
;
; Referenced Globals:
;   undefined4 DAT_006260d8
;   undefined4 DAT_01c4353c
;   undefined4 DAT_01c43540
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   undefined4 DAT_01c4f014
;   undefined4 DAT_01c4f020
;   undefined4 DAT_02c9a628
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b2650
        ;   Label: wincore_winrun.cpp_drawCrosshair_FUN_005b2650
    PUSH ESI                            ; 005b2651
    PUSH EDI                            ; 005b2652
    PUSH EBP                            ; 005b2653
    MOV EAX,[0x006260d8]                ; 005b2654 | DAT_006260d8
    MOV EDX,dword ptr [0x02c9a628]      ; 005b2659 | DAT_02c9a628
    ADD EDX,EAX                         ; 005b265f
    MOV ESI,dword ptr [0x01c4353c]      ; 005b2661 | DAT_01c4353c
    MOV dword ptr [0x02c9a628],EDX      ; 005b2667 | DAT_02c9a628
    CMP EDX,0xff                        ; 005b266d
    JG 0x005b26bf                       ; 005b2673
        ;   XREF to: 005b26bf (CONDITIONAL_JUMP)  ; LAB_005b26bf
    TEST EDX,EDX                        ; 005b2675
    JL 0x005b26d6                       ; 005b2677
        ;   XREF to: 005b26d6 (CONDITIONAL_JUMP)  ; LAB_005b26d6
    MOV ECX,0x1                         ; 005b2679
        ;   Label: LAB_005b2679
    MOV EBX,0xfffffffb                  ; 005b267e
    MOV dword ptr [0x01c4f020],ECX      ; 005b2683 | DAT_01c4f020
    MOV EAX,[0x01c43540]                ; 005b2689 | DAT_01c43540
        ;   Label: LAB_005b2689
    MOV EDI,dword ptr [0x01c4f008]      ; 005b268e | DAT_01c4f008
    ADD EAX,EBX                         ; 005b2694
    CMP ESI,EDI                         ; 005b2696
    JG 0x005b26eb                       ; 005b2698
        ;   XREF to: 005b26eb (CONDITIONAL_JUMP)  ; LAB_005b26eb
    INC EBX                             ; 005b269a
        ;   Label: LAB_005b269a
    CMP EBX,0x5                         ; 005b269b
    JLE 0x005b2689                      ; 005b269e
        ;   XREF to: 005b2689 (CONDITIONAL_JUMP)  ; LAB_005b2689
    LEA EBX,[ESI + -0x5]                ; 005b26a0
    ADD ESI,0x6                         ; 005b26a3
    MOV EDI,dword ptr [0x01c4f008]      ; 005b26a6 | DAT_01c4f008
        ;   Label: LAB_005b26a6
    MOV EAX,[0x01c43540]                ; 005b26ac | DAT_01c43540
    CMP EBX,EDI                         ; 005b26b1
    JG 0x005b270f                       ; 005b26b3
        ;   XREF to: 005b270f (CONDITIONAL_JUMP)  ; LAB_005b270f
    INC EBX                             ; 005b26b5
        ;   Label: LAB_005b26b5
    CMP EBX,ESI                         ; 005b26b6
    JNZ 0x005b26a6                      ; 005b26b8
        ;   XREF to: 005b26a6 (CONDITIONAL_JUMP)  ; LAB_005b26a6
    POP EBP                             ; 005b26ba
    POP EDI                             ; 005b26bb
    POP ESI                             ; 005b26bc
    POP EBX                             ; 005b26bd
    RET                                 ; 005b26be
    MOV EDX,0xfffffff8                  ; 005b26bf
        ;   Label: LAB_005b26bf
    MOV EAX,0xff                        ; 005b26c4
    MOV dword ptr [0x006260d8],EDX      ; 005b26c9 | DAT_006260d8
    MOV [0x02c9a628],EAX                ; 005b26cf | DAT_02c9a628
    JMP 0x005b2679                      ; 005b26d4
        ;   XREF to: 005b2679 (UNCONDITIONAL_JUMP)  ; LAB_005b2679
    MOV EBP,0x8                         ; 005b26d6
        ;   Label: LAB_005b26d6
    XOR EDI,EDI                         ; 005b26db
    MOV dword ptr [0x006260d8],EBP      ; 005b26dd | DAT_006260d8
    MOV dword ptr [0x02c9a628],EDI      ; 005b26e3 | DAT_02c9a628
    JMP 0x005b2679                      ; 005b26e9
        ;   XREF to: 005b2679 (UNCONDITIONAL_JUMP)  ; LAB_005b2679
    CMP EAX,dword ptr [0x01c4f00c]      ; 005b26eb | DAT_01c4f00c
        ;   Label: LAB_005b26eb
    JLE 0x005b269a                      ; 005b26f1
        ;   XREF to: 005b269a (CONDITIONAL_JUMP)  ; LAB_005b269a
    CMP ESI,dword ptr [0x01c4f010]      ; 005b26f3 | DAT_01c4f010
    JGE 0x005b269a                      ; 005b26f9
        ;   XREF to: 005b269a (CONDITIONAL_JUMP)  ; LAB_005b269a
    CMP EAX,dword ptr [0x01c4f014]      ; 005b26fb | DAT_01c4f014
    JGE 0x005b269a                      ; 005b2701
        ;   XREF to: 005b269a (CONDITIONAL_JUMP)  ; LAB_005b269a
    PUSH EAX                            ; 005b2703
    PUSH ESI                            ; 005b2704
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 005b2705
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 005b270a
    JMP 0x005b269a                      ; 005b270d
        ;   XREF to: 005b269a (UNCONDITIONAL_JUMP)  ; LAB_005b269a
    CMP EAX,dword ptr [0x01c4f00c]      ; 005b270f | DAT_01c4f00c
        ;   Label: LAB_005b270f
    JLE 0x005b26b5                      ; 005b2715
        ;   XREF to: 005b26b5 (CONDITIONAL_JUMP)  ; LAB_005b26b5
    CMP EBX,dword ptr [0x01c4f010]      ; 005b2717 | DAT_01c4f010
    JGE 0x005b26b5                      ; 005b271d
        ;   XREF to: 005b26b5 (CONDITIONAL_JUMP)  ; LAB_005b26b5
    CMP EAX,dword ptr [0x01c4f014]      ; 005b271f | DAT_01c4f014
    JGE 0x005b26b5                      ; 005b2725
        ;   XREF to: 005b26b5 (CONDITIONAL_JUMP)  ; LAB_005b26b5
    PUSH EAX                            ; 005b2727
    PUSH EBX                            ; 005b2728
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 005b2729
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 005b272e
    INC EBX                             ; 005b2731
    CMP EBX,ESI                         ; 005b2732
    JNZ 0x005b26a6                      ; 005b2734
        ;   XREF to: 005b26a6 (CONDITIONAL_JUMP)  ; LAB_005b26a6
    POP EBP                             ; 005b273a
    POP EDI                             ; 005b273b
    POP ESI                             ; 005b273c
    POP EBX                             ; 005b273d
    RET                                 ; 005b273e

