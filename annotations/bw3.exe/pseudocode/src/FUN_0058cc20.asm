; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0058cc20(int param_1)
;
;
; XREF[2]:
;   FUN_00588ee0 at 00589e92
;   FUN_0058b3f0 at 0058b89c
;
; Referenced Globals:
;   TerminatedCString s_CHASE_FAST_005d8979
;
; Called Functions:
;   FUN_0040cea0
;   FUN_004fba50
;   FUN_004fc0d0
;   FUN_004fc310
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058cc20
        ;   Label: FUN_0058cc20
    PUSH 0x0                            ; 0058cc21
    MOV EBX,dword ptr [ESP + 0xc]       ; 0058cc23
    PUSH 0x5d8979                       ; 0058cc27 | = "CHASE_FAST"
    ADD EBX,0x158                       ; 0058cc2c
    PUSH EBX                            ; 0058cc32
    CALL FUN_004fc310                   ; 0058cc33
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc310()
    ADD ESP,0x4                         ; 0058cc38
    PUSH EAX                            ; 0058cc3b
    CALL FUN_004fba50                   ; 0058cc3c
        ;   XREF to: 004fba50 (UNCONDITIONAL_CALL)  ; undefined FUN_004fba50()
    ADD ESP,0xc                         ; 0058cc41
    CMP EAX,0x2                         ; 0058cc44
    JNZ 0x0058cc77                      ; 0058cc47
        ;   XREF to: 0058cc77 (CONDITIONAL_JUMP)  ; LAB_0058cc77
    MOV EAX,dword ptr [ESP + 0x8]       ; 0058cc49
    MOV EDX,dword ptr [EAX + 0xd0dc]    ; 0058cc4d
    TEST EDX,EDX                        ; 0058cc53
    JZ 0x0058cc66                       ; 0058cc55
        ;   XREF to: 0058cc66 (CONDITIONAL_JUMP)  ; LAB_0058cc66
    PUSH 0x1                            ; 0058cc57
    PUSH 0x2                            ; 0058cc59
    PUSH EBX                            ; 0058cc5b
        ;   Label: LAB_0058cc5b
    CALL FUN_004fc0d0                   ; 0058cc5c
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 0058cc61
    POP EBX                             ; 0058cc64
    RET                                 ; 0058cc65
    PUSH 0x1                            ; 0058cc66
        ;   Label: LAB_0058cc66
    PUSH 0x2                            ; 0058cc68
    PUSH EDX                            ; 0058cc6a
    CALL FUN_0040cea0                   ; 0058cc6b
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cea0()
    ADD ESP,0x8                         ; 0058cc70
    INC EAX                             ; 0058cc73
    PUSH EAX                            ; 0058cc74
    JMP 0x0058cc5b                      ; 0058cc75
        ;   XREF to: 0058cc5b (UNCONDITIONAL_JUMP)  ; LAB_0058cc5b
    PUSH 0x1                            ; 0058cc77
        ;   Label: LAB_0058cc77
    PUSH 0x1                            ; 0058cc79
    PUSH EBX                            ; 0058cc7b
    CALL FUN_004fc0d0                   ; 0058cc7c
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 0058cc81
    POP EBX                             ; 0058cc84
    RET                                 ; 0058cc85

