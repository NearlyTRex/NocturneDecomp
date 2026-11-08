; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00483d80(int param_1,int param_2,int param_3)
;
;
; Called Functions:
;   FUN_004811d0
;   FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483d80
        ;   Label: FUN_00483d80
    PUSH ESI                            ; 00483d81
    PUSH EDI                            ; 00483d82
    PUSH EBP                            ; 00483d83
    MOV EDI,dword ptr [ESP + 0x14]      ; 00483d84
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00483d88
    MOV ECX,dword ptr [ESP + 0x18]      ; 00483d8c
    CMP ECX,dword ptr [EDI + 0x1ac]     ; 00483d90
    JL 0x00483da0                       ; 00483d96
        ;   XREF to: 00483da0 (CONDITIONAL_JUMP)  ; LAB_00483da0
    CMP ECX,dword ptr [EDI + 0x1b4]     ; 00483d98
    JGE 0x00483df6                      ; 00483d9e
        ;   XREF to: 00483df6 (CONDITIONAL_JUMP)  ; LAB_00483df6
    MOV ESI,dword ptr [ESP + 0x18]      ; 00483da0
        ;   Label: LAB_00483da0
    MOV EBP,EAX                         ; 00483da4
    CMP EAX,ESI                         ; 00483da6
    JLE 0x00483df1                      ; 00483da8
        ;   XREF to: 00483df1 (CONDITIONAL_JUMP)  ; LAB_00483df1
    MOV EBX,dword ptr [ESP + 0x18]      ; 00483daa
        ;   Label: LAB_00483daa
    CMP EBP,EBX                         ; 00483dae
    JLE 0x00483de8                      ; 00483db0
        ;   XREF to: 00483de8 (CONDITIONAL_JUMP)  ; LAB_00483de8
    LEA ESI,[EBX*0x4 + 0x0]             ; 00483db2
    MOV EAX,dword ptr [EDI + 0x8]       ; 00483db9
        ;   Label: LAB_00483db9
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x4] ; 00483dbc
    PUSH ECX                            ; 00483dc0
    MOV EDX,dword ptr [ESI + EAX*0x1]   ; 00483dc1
    PUSH EDX                            ; 00483dc4
    CALL FUN_005b8130                   ; 00483dc5
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 00483dca
    TEST EAX,EAX                        ; 00483dcd
    JLE 0x00483de0                      ; 00483dcf
        ;   XREF to: 00483de0 (CONDITIONAL_JUMP)  ; LAB_00483de0
    LEA EDX,[EBX + 0x1]                 ; 00483dd1
    PUSH EDX                            ; 00483dd4
    PUSH EBX                            ; 00483dd5
    MOV EAX,dword ptr [EDI + 0xc]       ; 00483dd6
    PUSH EDI                            ; 00483dd9
    CALL dword ptr [EAX + 0x10]         ; 00483dda
    ADD ESP,0xc                         ; 00483ddd
    INC EBX                             ; 00483de0
        ;   Label: LAB_00483de0
    ADD ESI,0x4                         ; 00483de1
    CMP EBX,EBP                         ; 00483de4
    JL 0x00483db9                       ; 00483de6
        ;   XREF to: 00483db9 (CONDITIONAL_JUMP)  ; LAB_00483db9
    MOV EAX,dword ptr [ESP + 0x18]      ; 00483de8
        ;   Label: LAB_00483de8
    DEC EBP                             ; 00483dec
    CMP EBP,EAX                         ; 00483ded
    JG 0x00483daa                       ; 00483def
        ;   XREF to: 00483daa (CONDITIONAL_JUMP)  ; LAB_00483daa
    POP EBP                             ; 00483df1
        ;   Label: LAB_00483df1
    POP EDI                             ; 00483df2
    POP ESI                             ; 00483df3
    POP EBX                             ; 00483df4
    RET                                 ; 00483df5
    PUSH EAX                            ; 00483df6
        ;   Label: LAB_00483df6
    PUSH ECX                            ; 00483df7
    PUSH EDI                            ; 00483df8
    CALL FUN_004811d0                   ; 00483df9
        ;   XREF to: 004811d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004811d0()
    ADD ESP,0xc                         ; 00483dfe
    POP EBP                             ; 00483e01
    POP EDI                             ; 00483e02
    POP ESI                             ; 00483e03
    POP EBX                             ; 00483e04
    RET                                 ; 00483e05

