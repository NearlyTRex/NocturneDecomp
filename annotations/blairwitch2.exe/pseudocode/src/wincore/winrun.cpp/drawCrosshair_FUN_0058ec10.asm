; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_drawCrosshair_FUN_0058ec10(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061e980
;   undefined4 DAT_01c2a37c
;   undefined4 DAT_01c2a380
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;   undefined4 DAT_01c35e60
;   undefined4 DAT_02662de8
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058ec10
        ;   Label: wincore_winrun.cpp_drawCrosshair_FUN_0058ec10
    PUSH ESI                            ; 0058ec11
    PUSH EDI                            ; 0058ec12
    PUSH EBP                            ; 0058ec13
    MOV EAX,[0x0061e980]                ; 0058ec14 | DAT_0061e980
    MOV EDX,dword ptr [0x02662de8]      ; 0058ec19 | DAT_02662de8
    ADD EDX,EAX                         ; 0058ec1f
    MOV ESI,dword ptr [0x01c2a37c]      ; 0058ec21 | DAT_01c2a37c
    MOV dword ptr [0x02662de8],EDX      ; 0058ec27 | DAT_02662de8
    CMP EDX,0xff                        ; 0058ec2d
    JG 0x0058ec7f                       ; 0058ec33
        ;   XREF to: 0058ec7f (CONDITIONAL_JUMP)  ; LAB_0058ec7f
    TEST EDX,EDX                        ; 0058ec35
    JL 0x0058ec96                       ; 0058ec37
        ;   XREF to: 0058ec96 (CONDITIONAL_JUMP)  ; LAB_0058ec96
    MOV ECX,0x1                         ; 0058ec39
        ;   Label: LAB_0058ec39
    MOV EBX,0xfffffffb                  ; 0058ec3e
    MOV dword ptr [0x01c35e60],ECX      ; 0058ec43 | DAT_01c35e60
    MOV EAX,[0x01c2a380]                ; 0058ec49 | DAT_01c2a380
        ;   Label: LAB_0058ec49
    MOV EDI,dword ptr [0x01c35e48]      ; 0058ec4e | DAT_01c35e48
    ADD EAX,EBX                         ; 0058ec54
    CMP ESI,EDI                         ; 0058ec56
    JG 0x0058ecab                       ; 0058ec58
        ;   XREF to: 0058ecab (CONDITIONAL_JUMP)  ; LAB_0058ecab
    INC EBX                             ; 0058ec5a
        ;   Label: LAB_0058ec5a
    CMP EBX,0x5                         ; 0058ec5b
    JLE 0x0058ec49                      ; 0058ec5e
        ;   XREF to: 0058ec49 (CONDITIONAL_JUMP)  ; LAB_0058ec49
    LEA EBX,[ESI + -0x5]                ; 0058ec60
    ADD ESI,0x6                         ; 0058ec63
    MOV EDI,dword ptr [0x01c35e48]      ; 0058ec66 | DAT_01c35e48
        ;   Label: LAB_0058ec66
    MOV EAX,[0x01c2a380]                ; 0058ec6c | DAT_01c2a380
    CMP EBX,EDI                         ; 0058ec71
    JG 0x0058eccf                       ; 0058ec73
        ;   XREF to: 0058eccf (CONDITIONAL_JUMP)  ; LAB_0058eccf
    INC EBX                             ; 0058ec75
        ;   Label: LAB_0058ec75
    CMP EBX,ESI                         ; 0058ec76
    JNZ 0x0058ec66                      ; 0058ec78
        ;   XREF to: 0058ec66 (CONDITIONAL_JUMP)  ; LAB_0058ec66
    POP EBP                             ; 0058ec7a
    POP EDI                             ; 0058ec7b
    POP ESI                             ; 0058ec7c
    POP EBX                             ; 0058ec7d
    RET                                 ; 0058ec7e
    MOV EDX,0xfffffff8                  ; 0058ec7f
        ;   Label: LAB_0058ec7f
    MOV EAX,0xff                        ; 0058ec84
    MOV dword ptr [0x0061e980],EDX      ; 0058ec89 | DAT_0061e980
    MOV [0x02662de8],EAX                ; 0058ec8f | DAT_02662de8
    JMP 0x0058ec39                      ; 0058ec94
        ;   XREF to: 0058ec39 (UNCONDITIONAL_JUMP)  ; LAB_0058ec39
    MOV EBP,0x8                         ; 0058ec96
        ;   Label: LAB_0058ec96
    XOR EDI,EDI                         ; 0058ec9b
    MOV dword ptr [0x0061e980],EBP      ; 0058ec9d | DAT_0061e980
    MOV dword ptr [0x02662de8],EDI      ; 0058eca3 | DAT_02662de8
    JMP 0x0058ec39                      ; 0058eca9
        ;   XREF to: 0058ec39 (UNCONDITIONAL_JUMP)  ; LAB_0058ec39
    CMP EAX,dword ptr [0x01c35e4c]      ; 0058ecab | DAT_01c35e4c
        ;   Label: LAB_0058ecab
    JLE 0x0058ec5a                      ; 0058ecb1
        ;   XREF to: 0058ec5a (CONDITIONAL_JUMP)  ; LAB_0058ec5a
    CMP ESI,dword ptr [0x01c35e50]      ; 0058ecb3 | DAT_01c35e50
    JGE 0x0058ec5a                      ; 0058ecb9
        ;   XREF to: 0058ec5a (CONDITIONAL_JUMP)  ; LAB_0058ec5a
    CMP EAX,dword ptr [0x01c35e54]      ; 0058ecbb | DAT_01c35e54
    JGE 0x0058ec5a                      ; 0058ecc1
        ;   XREF to: 0058ec5a (CONDITIONAL_JUMP)  ; LAB_0058ec5a
    PUSH EAX                            ; 0058ecc3
    PUSH ESI                            ; 0058ecc4
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0058ecc5
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0058ecca
    JMP 0x0058ec5a                      ; 0058eccd
        ;   XREF to: 0058ec5a (UNCONDITIONAL_JUMP)  ; LAB_0058ec5a
    CMP EAX,dword ptr [0x01c35e4c]      ; 0058eccf | DAT_01c35e4c
        ;   Label: LAB_0058eccf
    JLE 0x0058ec75                      ; 0058ecd5
        ;   XREF to: 0058ec75 (CONDITIONAL_JUMP)  ; LAB_0058ec75
    CMP EBX,dword ptr [0x01c35e50]      ; 0058ecd7 | DAT_01c35e50
    JGE 0x0058ec75                      ; 0058ecdd
        ;   XREF to: 0058ec75 (CONDITIONAL_JUMP)  ; LAB_0058ec75
    CMP EAX,dword ptr [0x01c35e54]      ; 0058ecdf | DAT_01c35e54
    JGE 0x0058ec75                      ; 0058ece5
        ;   XREF to: 0058ec75 (CONDITIONAL_JUMP)  ; LAB_0058ec75
    PUSH EAX                            ; 0058ece7
    PUSH EBX                            ; 0058ece8
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0058ece9
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0058ecee
    INC EBX                             ; 0058ecf1
    CMP EBX,ESI                         ; 0058ecf2
    JNZ 0x0058ec66                      ; 0058ecf4
        ;   XREF to: 0058ec66 (CONDITIONAL_JUMP)  ; LAB_0058ec66
    POP EBP                             ; 0058ecfa
    POP EDI                             ; 0058ecfb
    POP ESI                             ; 0058ecfc
    POP EBX                             ; 0058ecfd
    RET                                 ; 0058ecfe

