; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00551990(undefined4 param_1,int param_2)
;
;
; XREF[2]:
;   FUN_004301e0 at 00430371
;   FUN_0055fc60 at 0055fd9b
;
; Referenced Globals:
;   undefined4 DAT_01fe55d0
;
; Called Functions:
;   FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551990
        ;   Label: FUN_00551990
    PUSH ESI                            ; 00551991
    PUSH EDI                            ; 00551992
    PUSH EBP                            ; 00551993
    MOV ESI,dword ptr [ESP + 0x18]      ; 00551994
    MOV EDX,dword ptr [0x01fe55d0]      ; 00551998 | DAT_01fe55d0
    XOR ECX,ECX                         ; 0055199e
    TEST EDX,EDX                        ; 005519a0
    JLE 0x005519c1                      ; 005519a2
        ;   XREF to: 005519c1 (CONDITIONAL_JUMP)  ; LAB_005519c1
    LEA EBX,[EDX*0x4 + 0x0]             ; 005519a4
    XOR EAX,EAX                         ; 005519ab
    MOV EDI,dword ptr [EAX + 0x1fe55d4] ; 005519ad
        ;   Label: LAB_005519ad
    LEA EDX,[EAX + 0x4]                 ; 005519b3
    CMP ESI,EDI                         ; 005519b6
    JZ 0x005519c6                       ; 005519b8
        ;   XREF to: 005519c6 (CONDITIONAL_JUMP)  ; LAB_005519c6
    MOV EAX,EDX                         ; 005519ba
    INC ECX                             ; 005519bc
    CMP EDX,EBX                         ; 005519bd
    JL 0x005519ad                       ; 005519bf
        ;   XREF to: 005519ad (CONDITIONAL_JUMP)  ; LAB_005519ad
    POP EBP                             ; 005519c1
        ;   Label: LAB_005519c1
    POP EDI                             ; 005519c2
    POP ESI                             ; 005519c3
    POP EBX                             ; 005519c4
    RET                                 ; 005519c5
    MOV EBP,dword ptr [0x01fe55d0]      ; 005519c6 | DAT_01fe55d0
        ;   Label: LAB_005519c6
    DEC EBP                             ; 005519cc
    MOV EBX,EBP                         ; 005519cd
    SUB EBX,ECX                         ; 005519cf
    LEA ECX,[EBX*0x4 + 0x0]             ; 005519d1
    PUSH ECX                            ; 005519d8
    ADD EDX,0x1fe55d4                   ; 005519d9
    PUSH EDX                            ; 005519df
    ADD EAX,0x1fe55d4                   ; 005519e0
    PUSH EAX                            ; 005519e5
    MOV dword ptr [0x01fe55d0],EBP      ; 005519e6 | DAT_01fe55d0
    CALL FUN_005c25d0                   ; 005519ec
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25d0()
    ADD ESP,0xc                         ; 005519f1
    POP EBP                             ; 005519f4
    POP EDI                             ; 005519f5
    POP ESI                             ; 005519f6
    POP EBX                             ; 005519f7
    RET                                 ; 005519f8

