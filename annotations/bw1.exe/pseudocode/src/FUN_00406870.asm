; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00406870(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_0061b4b8
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

    PUSH ESI                            ; 00406870
        ;   Label: FUN_00406870
    PUSH EBP                            ; 00406871
    MOV EBP,dword ptr [ESP + 0xc]       ; 00406872
    LEA ESI,[EBP + 0x18]                ; 00406876
    LEA EAX,[EBP + 0x8]                 ; 00406879
    PUSH EAX                            ; 0040687c
    CALL FUN_00403920                   ; 0040687d
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 00406882
    TEST EAX,EAX                        ; 00406885
    JZ 0x0040696d                       ; 00406887
        ;   XREF to: 0040696d (CONDITIONAL_JUMP)  ; LAB_0040696d
    CMP dword ptr [0x01c51d00],0x0      ; 0040688d | DAT_01c51d00
    JNZ 0x0040692a                      ; 00406894
        ;   XREF to: 0040692a (CONDITIONAL_JUMP)  ; LAB_0040692a
    CMP dword ptr [0x0061b4a0],0x20     ; 0040689a | DAT_0061b4a0
    JNZ 0x0040691e                      ; 004068a1
        ;   XREF to: 0040691e (CONDITIONAL_JUMP)  ; LAB_0040691e
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 004068a7 | DAT_01c4f02c
    PUSH EDI                            ; 004068b1
        ;   Label: LAB_004068b1
    PUSH EBX                            ; 004068b2
    MOV EBX,0x13                        ; 004068b3
    PUSH EBP                            ; 004068b8
    MOV dword ptr [0x01c51d14],EBX      ; 004068b9 | DAT_01c51d14
    CALL FUN_004039d0                   ; 004068bf
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004039d0()
    MOV EDI,dword ptr [0x0061b4b8]      ; 004068c4 | DAT_0061b4b8
    ADD ESP,0x4                         ; 004068ca
    CMP EDI,0xff                        ; 004068cd
    JL 0x00406951                       ; 004068d3
        ;   XREF to: 00406951 (CONDITIONAL_JUMP)  ; LAB_00406951
    XOR EAX,EAX                         ; 004068d9
        ;   Label: LAB_004068d9
    XOR EBX,EBX                         ; 004068db
    XOR ECX,ECX                         ; 004068dd
    XOR EDX,EDX                         ; 004068df
    MOV [0x01c51d18],EAX                ; 004068e1 | DAT_01c51d18
    MOV EAX,ESI                         ; 004068e6
    MOV ESI,dword ptr [EBP + 0x4]       ; 004068e8
        ;   Label: LAB_004068e8
    LEA ESI,[ESI + ESI*0x2]             ; 004068eb
    CMP ECX,ESI                         ; 004068ee
    JGE 0x0040695d                      ; 004068f0
        ;   XREF to: 0040695d (CONDITIONAL_JUMP)  ; LAB_0040695d
    MOV ESI,dword ptr [EAX]             ; 004068f2
    MOV dword ptr [EDX + 0x713a98],ESI  ; 004068f4 | DAT_00713a98 | DAT_00713a9c
    IMUL EDI,ESI,0x30                   ; 004068fa
    MOV ESI,dword ptr [EAX + 0x4]       ; 004068fd
    MOV dword ptr [EDI + 0x62902c],ESI  ; 00406900 | DAT_0062902c
    IMUL EDI,dword ptr [EAX],0x30       ; 00406906
    ADD EAX,0xc                         ; 00406909
    ADD EDX,0x4                         ; 0040690c
    INC EBX                             ; 0040690f
    MOV ESI,dword ptr [EAX + -0x4]      ; 00406910
    ADD ECX,0x3                         ; 00406913
    MOV dword ptr [EDI + 0x629030],ESI  ; 00406916 | DAT_00629030
    JMP 0x004068e8                      ; 0040691c
        ;   XREF to: 004068e8 (UNCONDITIONAL_JUMP)  ; LAB_004068e8
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 0040691e | DAT_01c4f02c
        ;   Label: LAB_0040691e
    JMP 0x004068b1                      ; 00406928
        ;   XREF to: 004068b1 (UNCONDITIONAL_JUMP)  ; LAB_004068b1
    CMP dword ptr [0x0061b4a0],0x20     ; 0040692a | DAT_0061b4a0
        ;   Label: LAB_0040692a
    JNZ 0x00406942                      ; 00406931
        ;   XREF to: 00406942 (CONDITIONAL_JUMP)  ; LAB_00406942
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00406933 | DAT_01c4f02c | LAB_0057de01
    JMP 0x004068b1                      ; 0040693d
        ;   XREF to: 004068b1 (UNCONDITIONAL_JUMP)  ; LAB_004068b1
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00406942 | DAT_01c4f02c | LAB_0057e5e3
        ;   Label: LAB_00406942
    JMP 0x004068b1                      ; 0040694c
        ;   XREF to: 004068b1 (UNCONDITIONAL_JUMP)  ; LAB_004068b1
    OR byte ptr [0x01c51d14],0x20       ; 00406951 | DAT_01c51d14
        ;   Label: LAB_00406951
    JMP 0x004068d9                      ; 00406958
        ;   XREF to: 004068d9 (UNCONDITIONAL_JUMP)  ; LAB_004068d9
    PUSH 0x713a98                       ; 0040695d | DAT_00713a98
        ;   Label: LAB_0040695d
    PUSH EBX                            ; 00406962
    CALL FUN_0043cbf0                   ; 00406963
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043cbf0()
    ADD ESP,0x8                         ; 00406968
    POP EBX                             ; 0040696b
    POP EDI                             ; 0040696c
    MOV EDX,dword ptr [EBP + 0x4]       ; 0040696d
        ;   Label: LAB_0040696d
    LEA EAX,[EDX*0x4 + 0x0]             ; 00406970
    SUB EAX,EDX                         ; 00406977
    LEA EDX,[EAX*0x4 + 0x0]             ; 00406979
    LEA EAX,[EBP + 0x18]                ; 00406980
    ADD EAX,EDX                         ; 00406983
    POP EBP                             ; 00406985
    POP ESI                             ; 00406986
    RET                                 ; 00406987

