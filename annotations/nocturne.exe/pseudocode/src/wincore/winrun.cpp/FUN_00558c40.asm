; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_00558c40(void)
;
;
; Referenced Globals:
;   int INT_005c1654 = 0x8
;   undefined4 DAT_01bd1d8c
;   undefined4 DAT_01bd1d90
;   undefined4 DAT_01bf7720
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;   undefined4 DAT_01c00c70
;   undefined4 DAT_02de0858
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558c40
        ;   Label: wincore_winrun.cpp_FUN_00558c40
    PUSH ESI                            ; 00558c41
    PUSH EDI                            ; 00558c42
    PUSH EBP                            ; 00558c43
    MOV EAX,[0x005c1654]                ; 00558c44 | INT_005c1654
    MOV EDX,dword ptr [0x02de0858]      ; 00558c49 | DAT_02de0858
    ADD EDX,EAX                         ; 00558c4f
    MOV ESI,dword ptr [0x01bd1d8c]      ; 00558c51 | DAT_01bd1d8c
    MOV dword ptr [0x02de0858],EDX      ; 00558c57 | DAT_02de0858
    CMP EDX,0xff                        ; 00558c5d
    JG 0x00558ccd                       ; 00558c63
        ;   XREF to: 00558ccd (CONDITIONAL_JUMP)  ; LAB_00558ccd
    TEST EDX,EDX                        ; 00558c65
    JL 0x00558ce4                       ; 00558c67
        ;   XREF to: 00558ce4 (CONDITIONAL_JUMP)  ; LAB_00558ce4
    MOV EAX,[0x02de0858]                ; 00558c6d | DAT_02de0858
        ;   Label: LAB_00558c6d
    MOV EDX,EAX                         ; 00558c72
    SAR EDX,0x1f                        ; 00558c74
    SHL EDX,0x3                         ; 00558c77
    SBB EAX,EDX                         ; 00558c7a
    SAR EAX,0x3                         ; 00558c7c
    SHL EAX,0x5                         ; 00558c7f
    MOV AL,byte ptr [EAX + 0x1bf7720]   ; 00558c82 | DAT_01bf7720
    AND EAX,0xff                        ; 00558c88
    MOV EBX,0xfffffffb                  ; 00558c8d
    MOV [0x01c00c70],EAX                ; 00558c92 | DAT_01c00c70
    MOV EAX,[0x01bd1d90]                ; 00558c97 | DAT_01bd1d90
        ;   Label: LAB_00558c97
    MOV ECX,dword ptr [0x01c00c58]      ; 00558c9c | DAT_01c00c58
    ADD EAX,EBX                         ; 00558ca2
    CMP ESI,ECX                         ; 00558ca4
    JG 0x00558cfc                       ; 00558ca6
        ;   XREF to: 00558cfc (CONDITIONAL_JUMP)  ; LAB_00558cfc
    INC EBX                             ; 00558ca8
        ;   Label: LAB_00558ca8
    CMP EBX,0x5                         ; 00558ca9
    JLE 0x00558c97                      ; 00558cac
        ;   XREF to: 00558c97 (CONDITIONAL_JUMP)  ; LAB_00558c97
    LEA EBX,[ESI + -0x5]                ; 00558cae
    ADD ESI,0x6                         ; 00558cb1
    MOV ECX,dword ptr [0x01c00c58]      ; 00558cb4 | DAT_01c00c58
        ;   Label: LAB_00558cb4
    MOV EAX,[0x01bd1d90]                ; 00558cba | DAT_01bd1d90
    CMP EBX,ECX                         ; 00558cbf
    JG 0x00558d20                       ; 00558cc1
        ;   XREF to: 00558d20 (CONDITIONAL_JUMP)  ; LAB_00558d20
    INC EBX                             ; 00558cc3
        ;   Label: LAB_00558cc3
    CMP EBX,ESI                         ; 00558cc4
    JNZ 0x00558cb4                      ; 00558cc6
        ;   XREF to: 00558cb4 (CONDITIONAL_JUMP)  ; LAB_00558cb4
    POP EBP                             ; 00558cc8
    POP EDI                             ; 00558cc9
    POP ESI                             ; 00558cca
    POP EBX                             ; 00558ccb
    RET                                 ; 00558ccc
    MOV EDX,0xfffffff8                  ; 00558ccd
        ;   Label: LAB_00558ccd
    MOV EAX,0xff                        ; 00558cd2
    MOV dword ptr [0x005c1654],EDX      ; 00558cd7 | INT_005c1654
    MOV [0x02de0858],EAX                ; 00558cdd | DAT_02de0858
    JMP 0x00558c6d                      ; 00558ce2
        ;   XREF to: 00558c6d (UNCONDITIONAL_JUMP)  ; LAB_00558c6d
    MOV EBP,0x8                         ; 00558ce4
        ;   Label: LAB_00558ce4
    XOR EDI,EDI                         ; 00558ce9
    MOV dword ptr [0x005c1654],EBP      ; 00558ceb | INT_005c1654
    MOV dword ptr [0x02de0858],EDI      ; 00558cf1 | DAT_02de0858
    JMP 0x00558c6d                      ; 00558cf7
        ;   XREF to: 00558c6d (UNCONDITIONAL_JUMP)  ; LAB_00558c6d
    CMP EAX,dword ptr [0x01c00c5c]      ; 00558cfc | DAT_01c00c5c
        ;   Label: LAB_00558cfc
    JLE 0x00558ca8                      ; 00558d02
        ;   XREF to: 00558ca8 (CONDITIONAL_JUMP)  ; LAB_00558ca8
    CMP ESI,dword ptr [0x01c00c60]      ; 00558d04 | DAT_01c00c60
    JGE 0x00558ca8                      ; 00558d0a
        ;   XREF to: 00558ca8 (CONDITIONAL_JUMP)  ; LAB_00558ca8
    CMP EAX,dword ptr [0x01c00c64]      ; 00558d0c | DAT_01c00c64
    JGE 0x00558ca8                      ; 00558d12
        ;   XREF to: 00558ca8 (CONDITIONAL_JUMP)  ; LAB_00558ca8
    PUSH EAX                            ; 00558d14
    PUSH ESI                            ; 00558d15
    CALL engine_2d.c_plotPixel_FUN_00401530 ; 00558d16
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401530(int x, int y)
    ADD ESP,0x8                         ; 00558d1b
    JMP 0x00558ca8                      ; 00558d1e
        ;   XREF to: 00558ca8 (UNCONDITIONAL_JUMP)  ; LAB_00558ca8
    CMP EAX,dword ptr [0x01c00c5c]      ; 00558d20 | DAT_01c00c5c
        ;   Label: LAB_00558d20
    JLE 0x00558cc3                      ; 00558d26
        ;   XREF to: 00558cc3 (CONDITIONAL_JUMP)  ; LAB_00558cc3
    CMP EBX,dword ptr [0x01c00c60]      ; 00558d28 | DAT_01c00c60
    JGE 0x00558cc3                      ; 00558d2e
        ;   XREF to: 00558cc3 (CONDITIONAL_JUMP)  ; LAB_00558cc3
    CMP EAX,dword ptr [0x01c00c64]      ; 00558d30 | DAT_01c00c64
    JGE 0x00558cc3                      ; 00558d36
        ;   XREF to: 00558cc3 (CONDITIONAL_JUMP)  ; LAB_00558cc3
    PUSH EAX                            ; 00558d38
    PUSH EBX                            ; 00558d39
    CALL engine_2d.c_plotPixel_FUN_00401530 ; 00558d3a
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401530(int x, int y)
    ADD ESP,0x8                         ; 00558d3f
    INC EBX                             ; 00558d42
    CMP EBX,ESI                         ; 00558d43
    JNZ 0x00558cb4                      ; 00558d45
        ;   XREF to: 00558cb4 (CONDITIONAL_JUMP)  ; LAB_00558cb4
    POP EBP                             ; 00558d4b
    POP EDI                             ; 00558d4c
    POP ESI                             ; 00558d4d
    POP EBX                             ; 00558d4e
    RET                                 ; 00558d4f

