; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cfbd0(int *param_1)
;
;
; XREF[1]:
;   FUN_00572370 at 00572382
;
; Referenced Globals:
;   TerminatedCString s_core_ground_cpp_005c494c
;   TerminatedCString s_CGround_init_Out_of_memo_005c495f
;   TerminatedCString s_core_ground_cpp_005c497d
;   TerminatedCString s_CGround_init_Out_of_memo_005c4990
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004cfc70
;   FUN_004e4330
;   FUN_005690a0
;   FUN_005a3650
;   FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cfbd0
        ;   Label: FUN_004cfbd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cfbd1
    PUSH EBX                            ; 004cfbd5
    CALL FUN_004cfc70                   ; 004cfbd6
        ;   XREF to: 004cfc70 (UNCONDITIONAL_CALL)  ; undefined FUN_004cfc70()
    MOV EAX,dword ptr [EBX]             ; 004cfbdb
    IMUL EAX,dword ptr [EBX + 0x4]      ; 004cfbdd
    ADD ESP,0x4                         ; 004cfbe1
    SHL EAX,0x2                         ; 004cfbe4
    PUSH EAX                            ; 004cfbe7
    CALL FUN_005a3650                   ; 004cfbe8
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3650()
    ADD ESP,0x4                         ; 004cfbed
    MOV dword ptr [EBX + 0x24],EAX      ; 004cfbf0
    TEST EAX,EAX                        ; 004cfbf3
    JZ 0x004cfc1a                       ; 004cfbf5
        ;   XREF to: 004cfc1a (CONDITIONAL_JUMP)  ; LAB_004cfc1a
    PUSH 0x6d64                         ; 004cfbf7
        ;   Label: LAB_004cfbf7
    CALL FUN_005a3cb2                   ; 004cfbfc
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3cb2()
    ADD ESP,0x4                         ; 004cfc01
    TEST EAX,EAX                        ; 004cfc04
    JZ 0x004cfc11                       ; 004cfc06
        ;   XREF to: 004cfc11 (CONDITIONAL_JUMP)  ; LAB_004cfc11
    PUSH EAX                            ; 004cfc08
    CALL FUN_005690a0                   ; 004cfc09
        ;   XREF to: 005690a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005690a0()
    ADD ESP,0x4                         ; 004cfc0e
    MOV dword ptr [EBX + 0x28],EAX      ; 004cfc11
        ;   Label: LAB_004cfc11
    TEST EAX,EAX                        ; 004cfc14
    JZ 0x004cfc43                       ; 004cfc16
        ;   XREF to: 004cfc43 (CONDITIONAL_JUMP)  ; LAB_004cfc43
    POP EBX                             ; 004cfc18
    RET                                 ; 004cfc19
    PUSH EDI                            ; 004cfc1a
        ;   Label: LAB_004cfc1a
    PUSH ESI                            ; 004cfc1b
    MOV ESI,0x5c494c                    ; 004cfc1c | = "..\\core\\ground.cpp"
    MOV EDI,0xd5                        ; 004cfc21
    PUSH 0x5c495f                       ; 004cfc26 | = "CGround::init - Out of memory"
    MOV dword ptr [0x01d71de0],ESI      ; 004cfc2b | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004cfc31 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004cfc37
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004cfc3c
    POP ESI                             ; 004cfc3f
    POP EDI                             ; 004cfc40
    JMP 0x004cfbf7                      ; 004cfc41
        ;   XREF to: 004cfbf7 (UNCONDITIONAL_JUMP)  ; LAB_004cfbf7
    MOV EAX,0x5c497d                    ; 004cfc43 | = "..\\core\\ground.cpp"
        ;   Label: LAB_004cfc43
    MOV EDX,0xda                        ; 004cfc48
    PUSH 0x5c4990                       ; 004cfc4d | = "CGround::init - Out of memory2"
    MOV [0x01d71de0],EAX                ; 004cfc52 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 004cfc57 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004cfc5d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004cfc62
    POP EBX                             ; 004cfc65
    RET                                 ; 004cfc66

