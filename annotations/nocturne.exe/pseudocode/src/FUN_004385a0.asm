; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004385a0(int *param_1,int param_2)
;
;
; XREF[2]:
;   FUN_00425c20 at 00425ca5
;   FUN_00541640 at 005416d0
;
; Called Functions:
;   FUN_00437cc0
;   FUN_00437db0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004385a0
        ;   Label: FUN_004385a0
    PUSH ESI                            ; 004385a1
    PUSH EDI                            ; 004385a2
    PUSH EBP                            ; 004385a3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004385a4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004385a8
    TEST EBP,EBP                        ; 004385ac
    JZ 0x004385e0                       ; 004385ae
        ;   XREF to: 004385e0 (CONDITIONAL_JUMP)  ; LAB_004385e0
    MOV EDX,dword ptr [EDI]             ; 004385b0
    XOR ESI,ESI                         ; 004385b2
    TEST EDX,EDX                        ; 004385b4
    JLE 0x004385e0                      ; 004385b6
        ;   XREF to: 004385e0 (CONDITIONAL_JUMP)  ; LAB_004385e0
    MOV EBX,EDI                         ; 004385b8
    PUSH EBP                            ; 004385ba
        ;   Label: LAB_004385ba
    MOV ECX,dword ptr [EBX + 0x194]     ; 004385bb
    PUSH ECX                            ; 004385c1
    ADD EBX,0x4                         ; 004385c2
    INC ESI                             ; 004385c5
    CALL FUN_00437cc0                   ; 004385c6
        ;   XREF to: 00437cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00437cc0()
    MOV EAX,dword ptr [EDI]             ; 004385cb
    ADD ESP,0x8                         ; 004385cd
    CMP ESI,EAX                         ; 004385d0
    JL 0x004385ba                       ; 004385d2
        ;   XREF to: 004385ba (CONDITIONAL_JUMP)  ; LAB_004385ba
    LEA EAX,[EAX]                       ; 004385d4
    LEA EDX,[EDX]                       ; 004385da
    MOV EDX,dword ptr [EDI]             ; 004385e0
        ;   Label: LAB_004385e0
    XOR ESI,ESI                         ; 004385e2
    TEST EDX,EDX                        ; 004385e4
    JLE 0x00438610                      ; 004385e6
        ;   XREF to: 00438610 (CONDITIONAL_JUMP)  ; LAB_00438610
    MOV EBX,EDI                         ; 004385e8
    PUSH EBP                            ; 004385ea
        ;   Label: LAB_004385ea
    MOV ECX,dword ptr [EBX + 0x194]     ; 004385eb
    PUSH ECX                            ; 004385f1
    ADD EBX,0x4                         ; 004385f2
    INC ESI                             ; 004385f5
    CALL FUN_00437db0                   ; 004385f6
        ;   XREF to: 00437db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00437db0()
    MOV EAX,dword ptr [EDI]             ; 004385fb
    ADD ESP,0x8                         ; 004385fd
    CMP ESI,EAX                         ; 00438600
    JL 0x004385ea                       ; 00438602
        ;   XREF to: 004385ea (CONDITIONAL_JUMP)  ; LAB_004385ea
    LEA EAX,[EAX]                       ; 00438604
    LEA EDX,[EDX]                       ; 0043860a
    POP EBP                             ; 00438610
        ;   Label: LAB_00438610
    POP EDI                             ; 00438611
    POP ESI                             ; 00438612
    POP EBX                             ; 00438613
    RET                                 ; 00438614

