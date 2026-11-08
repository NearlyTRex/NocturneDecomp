; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005b8f9c(undefined4 param_1,undefined1 param_2,uint param_3,undefined4 param_4,undefined4 param_5,int param_6)
;
;
; XREF[2]:
;   FUN_005b90b0 at 005b90f6
;   FUN_005b91a4 at 005b9218
;
; Called Functions:
;   FUN_005b8470
;   FUN_005b929c
;   FUN_005be810
;   FUN_005bef94
;   FUN_005bf210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8f9c
        ;   Label: FUN_005b8f9c
    PUSH ESI                            ; 005b8f9d
    PUSH EDI                            ; 005b8f9e
    PUSH EBP                            ; 005b8f9f
    MOV EBX,dword ptr [ESP + 0x28]      ; 005b8fa0
    AND byte ptr [EBX + 0xc],0xfc       ; 005b8fa4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005b8fa8
    MOV EDX,dword ptr [EBX + 0xc]       ; 005b8fac
    OR EDX,EAX                          ; 005b8faf
    XOR EAX,EAX                         ; 005b8fb1
    MOV AL,byte ptr [ESP + 0x18]        ; 005b8fb3
    PUSH EAX                            ; 005b8fb7
    MOV dword ptr [EBX + 0xc],EDX       ; 005b8fb8
    CALL FUN_005b8470                   ; 005b8fbb
        ;   XREF to: 005b8470 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8470()
    ADD ESP,0x4                         ; 005b8fc0
    CMP AL,0x72                         ; 005b8fc3
    JNZ 0x005b8ff5                      ; 005b8fc5
        ;   XREF to: 005b8ff5 (CONDITIONAL_JUMP)  ; LAB_005b8ff5
    MOV CH,byte ptr [ESP + 0x1c]        ; 005b8fc7
    XOR EAX,EAX                         ; 005b8fcb
    TEST CH,0x2                         ; 005b8fcd
    JZ 0x005b8fd7                       ; 005b8fd0
        ;   XREF to: 005b8fd7 (CONDITIONAL_JUMP)  ; LAB_005b8fd7
    MOV EAX,0x2                         ; 005b8fd2
    TEST byte ptr [ESP + 0x1c],0x40     ; 005b8fd7
        ;   Label: LAB_005b8fd7
    JZ 0x005b8fe3                       ; 005b8fdc
        ;   XREF to: 005b8fe3 (CONDITIONAL_JUMP)  ; LAB_005b8fe3
    OR AH,0x2                           ; 005b8fde
    JMP 0x005b8fe6                      ; 005b8fe1
        ;   XREF to: 005b8fe6 (UNCONDITIONAL_JUMP)  ; LAB_005b8fe6
    OR AH,0x1                           ; 005b8fe3
        ;   Label: LAB_005b8fe3
    PUSH 0x0                            ; 005b8fe6
        ;   Label: LAB_005b8fe6
    MOV EDI,dword ptr [ESP + 0x28]      ; 005b8fe8
    PUSH EDI                            ; 005b8fec
    PUSH EAX                            ; 005b8fed
    MOV EBP,dword ptr [ESP + 0x20]      ; 005b8fee
    PUSH EBP                            ; 005b8ff2
    JMP 0x005b9031                      ; 005b8ff3
        ;   XREF to: 005b9031 (UNCONDITIONAL_JUMP)  ; LAB_005b9031
    MOV DL,byte ptr [ESP + 0x1c]        ; 005b8ff5
        ;   Label: LAB_005b8ff5
    TEST DL,0x1                         ; 005b8ff9
    SETNZ AL                            ; 005b8ffc
    AND EAX,0xff                        ; 005b8fff
    ADD EAX,0x21                        ; 005b9004
    TEST DL,0x80                        ; 005b9007
    JZ 0x005b9010                       ; 005b900a
        ;   XREF to: 005b9010 (CONDITIONAL_JUMP)  ; LAB_005b9010
    OR AL,0x10                          ; 005b900c
    JMP 0x005b9012                      ; 005b900e
        ;   XREF to: 005b9012 (UNCONDITIONAL_JUMP)  ; LAB_005b9012
    OR AL,0x40                          ; 005b9010
        ;   Label: LAB_005b9010
    TEST byte ptr [ESP + 0x1c],0x40     ; 005b9012
        ;   Label: LAB_005b9012
    JZ 0x005b901e                       ; 005b9017
        ;   XREF to: 005b901e (CONDITIONAL_JUMP)  ; LAB_005b901e
    OR AH,0x2                           ; 005b9019
    JMP 0x005b9021                      ; 005b901c
        ;   XREF to: 005b9021 (UNCONDITIONAL_JUMP)  ; LAB_005b9021
    OR AH,0x1                           ; 005b901e
        ;   Label: LAB_005b901e
    PUSH 0x180                          ; 005b9021
        ;   Label: LAB_005b9021
    MOV ECX,dword ptr [ESP + 0x28]      ; 005b9026
    PUSH ECX                            ; 005b902a
    PUSH EAX                            ; 005b902b
    MOV ESI,dword ptr [ESP + 0x20]      ; 005b902c
    PUSH ESI                            ; 005b9030
    CALL FUN_005bef94                   ; 005b9031
        ;   XREF to: 005bef94 (UNCONDITIONAL_CALL)  ; undefined FUN_005bef94()
        ;   Label: LAB_005b9031
    ADD ESP,0x10                        ; 005b9036
    MOV dword ptr [EBX + 0x10],EAX      ; 005b9039
    CMP dword ptr [EBX + 0x10],-0x1     ; 005b903c
    JNZ 0x005b9052                      ; 005b9040
        ;   XREF to: 005b9052 (CONDITIONAL_JUMP)  ; LAB_005b9052
    PUSH EBX                            ; 005b9042
    CALL FUN_005be810                   ; 005b9043
        ;   XREF to: 005be810 (UNCONDITIONAL_CALL)  ; undefined FUN_005be810()
    ADD ESP,0x4                         ; 005b9048
    XOR EAX,EAX                         ; 005b904b
    POP EBP                             ; 005b904d
    POP EDI                             ; 005b904e
    POP ESI                             ; 005b904f
    POP EBX                             ; 005b9050
    RET                                 ; 005b9051
    MOV dword ptr [EBX + 0x4],0x0       ; 005b9052
        ;   Label: LAB_005b9052
    MOV EAX,dword ptr [EBX + 0x8]       ; 005b9059
    MOV dword ptr [EBX + 0x14],0x0      ; 005b905c
    MOV dword ptr [EAX + 0xc],0x0       ; 005b9063
    MOV EAX,dword ptr [EBX + 0x8]       ; 005b906a
    MOV EDX,dword ptr [ESP + 0x20]      ; 005b906d
    MOV dword ptr [EAX + 0x10],EDX      ; 005b9071
    MOV EAX,dword ptr [EBX + 0x8]       ; 005b9074
    MOV dword ptr [EAX + 0x15],0x0      ; 005b9077
    MOV EAX,dword ptr [EBX + 0x8]       ; 005b907e
    MOV DH,byte ptr [ESP + 0x1c]        ; 005b9081
    MOV dword ptr [EAX + 0x8],0x0       ; 005b9085
    TEST DH,0x80                        ; 005b908c
    JZ 0x005b909e                       ; 005b908f
        ;   XREF to: 005b909e (CONDITIONAL_JUMP)  ; LAB_005b909e
    PUSH 0x2                            ; 005b9091
    PUSH 0x0                            ; 005b9093
    PUSH EBX                            ; 005b9095
    CALL FUN_005b929c                   ; 005b9096
        ;   XREF to: 005b929c (UNCONDITIONAL_CALL)  ; undefined FUN_005b929c()
    ADD ESP,0xc                         ; 005b909b
    PUSH EBX                            ; 005b909e
        ;   Label: LAB_005b909e
    CALL FUN_005bf210                   ; 005b909f
        ;   XREF to: 005bf210 (UNCONDITIONAL_CALL)  ; undefined FUN_005bf210()
    ADD ESP,0x4                         ; 005b90a4
    MOV EAX,EBX                         ; 005b90a7
    POP EBP                             ; 005b90a9
    POP EDI                             ; 005b90aa
    POP ESI                             ; 005b90ab
    POP EBX                             ; 005b90ac
    RET                                 ; 005b90ad

