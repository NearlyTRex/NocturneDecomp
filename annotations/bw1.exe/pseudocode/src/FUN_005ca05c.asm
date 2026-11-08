; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005ca05c(int param_1)
;
;
; XREF[1]:
;   FUN_005ca040 at 005ca042
;
; Referenced Globals:
;   undefined4 DAT_02c9f050
;
; Called Functions:
;   FUN_005c0d54
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ca05c
        ;   Label: FUN_005ca05c
    PUSH ESI                            ; 005ca05d
    PUSH EDI                            ; 005ca05e
    MOV EDX,dword ptr [ESP + 0x10]      ; 005ca05f
    LEA EAX,[EDX*0x4 + 0x0]             ; 005ca063
    SUB EAX,EDX                         ; 005ca06a
    SHL EAX,0x2                         ; 005ca06c
    ADD EAX,EDX                         ; 005ca06f
    MOV EDI,0x6262d4                    ; 005ca071
    ADD EAX,EAX                         ; 005ca076
    ADD EDI,EAX                         ; 005ca078
    MOV EAX,[0x02c9f050]                ; 005ca07a | DAT_02c9f050
    XOR EBX,EBX                         ; 005ca07f
    TEST EAX,EAX                        ; 005ca081
    JZ 0x005ca0ba                       ; 005ca083
        ;   XREF to: 005ca0ba (CONDITIONAL_JUMP)  ; LAB_005ca0ba
    MOV ESI,dword ptr [EAX]             ; 005ca085
        ;   Label: LAB_005ca085
    MOV EAX,dword ptr [EAX + 0x4]       ; 005ca087
    MOV CL,byte ptr [EAX + 0xd]         ; 005ca08a
    MOV EDX,0x1                         ; 005ca08d
    TEST CL,0x40                        ; 005ca092
    JNZ 0x005ca0a9                      ; 005ca095
        ;   XREF to: 005ca0a9 (CONDITIONAL_JUMP)  ; LAB_005ca0a9
    TEST CL,0x8                         ; 005ca097
    JNZ 0x005ca0a9                      ; 005ca09a
        ;   XREF to: 005ca0a9 (CONDITIONAL_JUMP)  ; LAB_005ca0a9
    CMP EAX,EDI                         ; 005ca09c
    JC 0x005ca0b4                       ; 005ca09e
        ;   XREF to: 005ca0b4 (CONDITIONAL_JUMP)  ; LAB_005ca0b4
    CMP EAX,0x626322                    ; 005ca0a0
    JNC 0x005ca0a9                      ; 005ca0a5
        ;   XREF to: 005ca0a9 (CONDITIONAL_JUMP)  ; LAB_005ca0a9
    XOR EDX,EDX                         ; 005ca0a7
    PUSH EDX                            ; 005ca0a9
        ;   Label: LAB_005ca0a9
    PUSH EAX                            ; 005ca0aa
    INC EBX                             ; 005ca0ab
    CALL FUN_005c0d54                   ; 005ca0ac
        ;   XREF to: 005c0d54 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0d54()
    ADD ESP,0x8                         ; 005ca0b1
    MOV EAX,ESI                         ; 005ca0b4
        ;   Label: LAB_005ca0b4
    TEST ESI,ESI                        ; 005ca0b6
    JNZ 0x005ca085                      ; 005ca0b8
        ;   XREF to: 005ca085 (CONDITIONAL_JUMP)  ; LAB_005ca085
    MOV EAX,EBX                         ; 005ca0ba
        ;   Label: LAB_005ca0ba
    POP EDI                             ; 005ca0bc
    POP ESI                             ; 005ca0bd
    POP EBX                             ; 005ca0be
    RET                                 ; 005ca0bf

