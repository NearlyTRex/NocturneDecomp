; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00404fc0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_0062902c
;   undefined4 DAT_00629030
;   undefined4 DAT_00713a98
;   undefined4 DAT_00713a9c
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   FUN_00403920
;   FUN_004039d0
;   FUN_0043cbf0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00404fc0
        ;   Label: FUN_00404fc0
    PUSH EBP                            ; 00404fc1
    MOV EBP,dword ptr [ESP + 0xc]       ; 00404fc2
    LEA ESI,[EBP + 0x18]                ; 00404fc6
    LEA EAX,[EBP + 0x8]                 ; 00404fc9
    PUSH EAX                            ; 00404fcc
    CALL FUN_00403920                   ; 00404fcd
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 00404fd2
    TEST EAX,EAX                        ; 00404fd5
    JZ 0x00405099                       ; 00404fd7
        ;   XREF to: 00405099 (CONDITIONAL_JUMP)  ; LAB_00405099
    CMP dword ptr [0x01c51d00],0x0      ; 00404fdd | DAT_01c51d00
    JNZ 0x00405065                      ; 00404fe4
        ;   XREF to: 00405065 (CONDITIONAL_JUMP)  ; LAB_00405065
    CMP dword ptr [0x0061b4a0],0x20     ; 00404fea | DAT_0061b4a0
    JNZ 0x00405059                      ; 00404ff1
        ;   XREF to: 00405059 (CONDITIONAL_JUMP)  ; LAB_00405059
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00404ff3 | DAT_01c4f02c
    PUSH EDI                            ; 00404ffd
        ;   Label: LAB_00404ffd
    PUSH EBX                            ; 00404ffe
    MOV EBX,0x1                         ; 00404fff
    PUSH EBP                            ; 00405004
    XOR EDI,EDI                         ; 00405005
    MOV dword ptr [0x01c51d14],EBX      ; 00405007 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EDI      ; 0040500d | DAT_01c51d18
    CALL FUN_004039d0                   ; 00405013
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004039d0()
    ADD ESP,0x4                         ; 00405018
    MOV EAX,ESI                         ; 0040501b
    XOR EBX,EBX                         ; 0040501d
    XOR EDX,EDX                         ; 0040501f
    XOR ECX,ECX                         ; 00405021
    MOV ESI,dword ptr [EBP + 0x4]       ; 00405023
        ;   Label: LAB_00405023
    LEA ESI,[ESI + ESI*0x2]             ; 00405026
    CMP EDX,ESI                         ; 00405029
    JGE 0x00405089                      ; 0040502b
        ;   XREF to: 00405089 (CONDITIONAL_JUMP)  ; LAB_00405089
    MOV ESI,dword ptr [EAX]             ; 0040502d
    MOV dword ptr [ECX + 0x713a98],ESI  ; 0040502f | DAT_00713a98 | DAT_00713a9c
    IMUL EDI,ESI,0x30                   ; 00405035
    MOV ESI,dword ptr [EAX + 0x4]       ; 00405038
    MOV dword ptr [EDI + 0x62902c],ESI  ; 0040503b | DAT_0062902c
    IMUL EDI,dword ptr [EAX],0x30       ; 00405041
    ADD EAX,0xc                         ; 00405044
    ADD ECX,0x4                         ; 00405047
    INC EBX                             ; 0040504a
    MOV ESI,dword ptr [EAX + -0x4]      ; 0040504b
    ADD EDX,0x3                         ; 0040504e
    MOV dword ptr [EDI + 0x629030],ESI  ; 00405051 | DAT_00629030
    JMP 0x00405023                      ; 00405057
        ;   XREF to: 00405023 (UNCONDITIONAL_JUMP)  ; LAB_00405023
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00405059 | DAT_01c4f02c
        ;   Label: LAB_00405059
    JMP 0x00404ffd                      ; 00405063
        ;   XREF to: 00404ffd (UNCONDITIONAL_JUMP)  ; LAB_00404ffd
    CMP dword ptr [0x0061b4a0],0x20     ; 00405065 | DAT_0061b4a0
        ;   Label: LAB_00405065
    JNZ 0x0040507a                      ; 0040506c
        ;   XREF to: 0040507a (CONDITIONAL_JUMP)  ; LAB_0040507a
    MOV dword ptr [0x01c4f02c],0x57de01 ; 0040506e | DAT_01c4f02c | LAB_0057de01
    JMP 0x00404ffd                      ; 00405078
        ;   XREF to: 00404ffd (UNCONDITIONAL_JUMP)  ; LAB_00404ffd
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 0040507a | DAT_01c4f02c | LAB_0057e5e3
        ;   Label: LAB_0040507a
    JMP 0x00404ffd                      ; 00405084
        ;   XREF to: 00404ffd (UNCONDITIONAL_JUMP)  ; LAB_00404ffd
    PUSH 0x713a98                       ; 00405089 | DAT_00713a98
        ;   Label: LAB_00405089
    PUSH EBX                            ; 0040508e
    CALL FUN_0043cbf0                   ; 0040508f
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043cbf0()
    ADD ESP,0x8                         ; 00405094
    POP EBX                             ; 00405097
    POP EDI                             ; 00405098
    MOV EDX,dword ptr [EBP + 0x4]       ; 00405099
        ;   Label: LAB_00405099
    LEA EAX,[EDX*0x4 + 0x0]             ; 0040509c
    SUB EAX,EDX                         ; 004050a3
    LEA EDX,[EAX*0x4 + 0x0]             ; 004050a5
    LEA EAX,[EBP + 0x18]                ; 004050ac
    ADD EAX,EDX                         ; 004050af
    POP EBP                             ; 004050b1
    POP ESI                             ; 004050b2
    RET                                 ; 004050b3

