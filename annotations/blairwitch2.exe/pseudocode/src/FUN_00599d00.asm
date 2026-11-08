; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00599d00(int param_1)
;
;
; XREF[2]:
;   FUN_00595f30 at 005960b3
;   FUN_005984e0 at 0059898c
;
; Referenced Globals:
;   TerminatedCString s_CHASE_2_005ef3ec
;
; Called Functions:
;   FUN_0040cfc0
;   FUN_00502fa0
;   FUN_00503620
;   FUN_00503860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599d00
        ;   Label: FUN_00599d00
    PUSH 0x0                            ; 00599d01
    MOV EBX,dword ptr [ESP + 0xc]       ; 00599d03
    PUSH 0x5ef3ec                       ; 00599d07 | = "CHASE_2"
    ADD EBX,0x2b4                       ; 00599d0c
    PUSH EBX                            ; 00599d12
    CALL FUN_00503860                   ; 00599d13
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; undefined FUN_00503860()
    ADD ESP,0x4                         ; 00599d18
    PUSH EAX                            ; 00599d1b
    CALL FUN_00502fa0                   ; 00599d1c
        ;   XREF to: 00502fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00502fa0()
    ADD ESP,0xc                         ; 00599d21
    CMP EAX,0x16                        ; 00599d24
    JNZ 0x00599d59                      ; 00599d27
        ;   XREF to: 00599d59 (CONDITIONAL_JUMP)  ; LAB_00599d59
    MOV EAX,dword ptr [ESP + 0x8]       ; 00599d29
    MOV EDX,dword ptr [EAX + 0x10b80]   ; 00599d2d
    TEST EDX,EDX                        ; 00599d33
    JZ 0x00599d46                       ; 00599d35
        ;   XREF to: 00599d46 (CONDITIONAL_JUMP)  ; LAB_00599d46
    PUSH 0x1                            ; 00599d37
    PUSH 0x16                           ; 00599d39
    PUSH EBX                            ; 00599d3b
        ;   Label: LAB_00599d3b
    CALL FUN_00503620                   ; 00599d3c
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 00599d41
    POP EBX                             ; 00599d44
    RET                                 ; 00599d45
    PUSH 0x1                            ; 00599d46
        ;   Label: LAB_00599d46
    PUSH 0x2                            ; 00599d48
    PUSH EDX                            ; 00599d4a
    CALL FUN_0040cfc0                   ; 00599d4b
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfc0()
    ADD ESP,0x8                         ; 00599d50
    ADD EAX,0x15                        ; 00599d53
    PUSH EAX                            ; 00599d56
    JMP 0x00599d3b                      ; 00599d57
        ;   XREF to: 00599d3b (UNCONDITIONAL_JUMP)  ; LAB_00599d3b
    PUSH 0x1                            ; 00599d59
        ;   Label: LAB_00599d59
    PUSH 0x1                            ; 00599d5b
    PUSH EBX                            ; 00599d5d
    CALL FUN_00503620                   ; 00599d5e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 00599d63
    POP EBX                             ; 00599d66
    RET                                 ; 00599d67

