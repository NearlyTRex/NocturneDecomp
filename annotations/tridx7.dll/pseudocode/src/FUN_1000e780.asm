; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_1000e780(ushort *param_1,ushort *param_2)
;
;
; XREF[1]:
;   FUN_1000e350 at 1000e4dc
;
; Referenced Globals:
;   undefined4 DAT_10017f38
;   undefined4 DAT_10017f3a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 1000e780
        ;   Label: FUN_1000e780
    PUSH EBX                            ; 1000e784
    MOV ECX,dword ptr [ESP + 0x8]       ; 1000e785
    PUSH ESI                            ; 1000e789
    MOV SI,0x64                         ; 1000e78a
    PUSH EDI                            ; 1000e78e
    MOV DI,word ptr [EAX]               ; 1000e78f
    PUSH EBP                            ; 1000e792
    MOV AX,word ptr [ECX]               ; 1000e793
    SUB DX,DX                           ; 1000e796
    DIV SI                              ; 1000e799
    CMP DX,0x5a                         ; 1000e79c
    JBE 0x1000e7a9                      ; 1000e7a0
        ;   XREF to: 1000e7a9 (CONDITIONAL_JUMP)  ; LAB_1000e7a9
    XOR EAX,EAX                         ; 1000e7a2
    POP EBP                             ; 1000e7a4
    POP EDI                             ; 1000e7a5
    POP ESI                             ; 1000e7a6
    POP EBX                             ; 1000e7a7
    RET                                 ; 1000e7a8
    MOVZX EBX,DX                        ; 1000e7a9
        ;   Label: LAB_1000e7a9
    XOR ESI,ESI                         ; 1000e7ac
    LEA EAX,[EBX + EBX*0x2]             ; 1000e7ae
    LEA EAX,[EAX*0x2 + 0x10017f38]      ; 1000e7b1 | DAT_10017f38
    MOV DX,word ptr [EAX]               ; 1000e7b8 | DAT_10017f38 | DAT_10017f3a
        ;   Label: LAB_1000e7b8
    TEST DX,DX                          ; 1000e7bb
    JZ 0x1000e7d6                       ; 1000e7be
        ;   XREF to: 1000e7d6 (CONDITIONAL_JUMP)  ; LAB_1000e7d6
    MOV BP,DX                           ; 1000e7c0
    XOR BP,DI                           ; 1000e7c3
    TEST BP,0x3ff                       ; 1000e7c6
    JZ 0x1000e7f0                       ; 1000e7cb
        ;   XREF to: 1000e7f0 (CONDITIONAL_JUMP)  ; LAB_1000e7f0
    ADD EAX,0x2                         ; 1000e7cd
    INC ESI                             ; 1000e7d0
    CMP ESI,0x3                         ; 1000e7d1
    JC 0x1000e7b8                       ; 1000e7d4
        ;   XREF to: 1000e7b8 (CONDITIONAL_JUMP)  ; LAB_1000e7b8
    LEA EAX,[EBX + EBX*0x2]             ; 1000e7d6
        ;   Label: LAB_1000e7d6
    POP EBP                             ; 1000e7d9
    MOV AX,word ptr [EAX*0x2 + 0x10017f38] ; 1000e7da | DAT_10017f38
    POP EDI                             ; 1000e7e2
    MOV word ptr [ECX],AX               ; 1000e7e3
    POP ESI                             ; 1000e7e6
    CMP AX,0x1                          ; 1000e7e7
    POP EBX                             ; 1000e7eb
    SBB EAX,EAX                         ; 1000e7ec
    INC EAX                             ; 1000e7ee
    RET                                 ; 1000e7ef
    MOVZX EAX,DI                        ; 1000e7f0
        ;   Label: LAB_1000e7f0
    TEST EAX,0xfffffc00                 ; 1000e7f3
    JNZ 0x1000e801                      ; 1000e7f8
        ;   XREF to: 1000e801 (CONDITIONAL_JUMP)  ; LAB_1000e801
    MOV EAX,dword ptr [ESP + 0x18]      ; 1000e7fa
    MOV word ptr [EAX],DX               ; 1000e7fe
    MOV word ptr [ECX],DX               ; 1000e801
        ;   Label: LAB_1000e801
    MOV EAX,0x1                         ; 1000e804
    POP EBP                             ; 1000e809
    POP EDI                             ; 1000e80a
    POP ESI                             ; 1000e80b
    POP EBX                             ; 1000e80c
    RET                                 ; 1000e80d

