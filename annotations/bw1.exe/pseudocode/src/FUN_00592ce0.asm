; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00592ce0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_006063d0
;
; Called Functions:
;   FUN_00408730
;   FUN_0040ee30
;   FUN_00441ca0
;   FUN_00522fc0
;   FUN_005673f0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00592ce0
        ;   Label: FUN_00592ce0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00592ce1
    TEST byte ptr [ESP + 0xc],0x4       ; 00592ce5
    JNZ 0x00592d71                      ; 00592cea
        ;   XREF to: 00592d71 (CONDITIONAL_JUMP)  ; LAB_00592d71
    PUSH 0x0                            ; 00592cf0
    ADD EBX,0xe7d8                      ; 00592cf2
    PUSH EBX                            ; 00592cf8
    CALL FUN_00522fc0                   ; 00592cf9
        ;   XREF to: 00522fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00522fc0()
    ADD ESP,0x8                         ; 00592cfe
    PUSH 0x0                            ; 00592d01
    SUB EAX,0x1cc                       ; 00592d03
    PUSH EAX                            ; 00592d08
    CALL FUN_00441ca0                   ; 00592d09
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 00592d0e
    PUSH 0x0                            ; 00592d11
    SUB EAX,0x23a4                      ; 00592d13
    PUSH EAX                            ; 00592d18
    CALL FUN_005673f0                   ; 00592d19
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 00592d1e
    PUSH 0x0                            ; 00592d21
    SUB EAX,0x8c8c                      ; 00592d23
    PUSH EAX                            ; 00592d28
    CALL FUN_0040ee30                   ; 00592d29
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 00592d2e
    PUSH 0x0                            ; 00592d31
    SUB EAX,0x93c                       ; 00592d33
    PUSH EAX                            ; 00592d38
    CALL FUN_00441ca0                   ; 00592d39
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 00592d3e
    PUSH 0x0                            ; 00592d41
    SUB EAX,0x2b48                      ; 00592d43
    PUSH EAX                            ; 00592d48
    CALL FUN_005673f0                   ; 00592d49
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 00592d4e
    PUSH 0x1                            ; 00592d51
    LEA EBX,[EAX + 0xfffffea8]          ; 00592d53
    PUSH EBX                            ; 00592d59
    CALL FUN_00408730                   ; 00592d5a
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 00592d5f
    MOV DL,byte ptr [ESP + 0xc]         ; 00592d62
    MOV EBX,EAX                         ; 00592d66
    TEST DL,0x2                         ; 00592d68
    JNZ 0x00592d8c                      ; 00592d6b
        ;   XREF to: 00592d8c (CONDITIONAL_JUMP)  ; LAB_00592d8c
    MOV EAX,EBX                         ; 00592d6d
    POP EBX                             ; 00592d6f
    RET                                 ; 00592d70
    PUSH 0x6063d0                       ; 00592d71 | DAT_006063d0
        ;   Label: LAB_00592d71
    PUSH EBX                            ; 00592d76
    CALL FUN_005c030f                   ; 00592d77
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00592d7c
    PUSH EAX                            ; 00592d7f
    CALL FUN_005c0336                   ; 00592d80
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00592d85
    MOV EAX,EBX                         ; 00592d88
    POP EBX                             ; 00592d8a
    RET                                 ; 00592d8b
    PUSH EAX                            ; 00592d8c
        ;   Label: LAB_00592d8c
    CALL FUN_005c0344                   ; 00592d8d
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00592d92
    MOV EAX,EBX                         ; 00592d95
    POP EBX                             ; 00592d97
    RET                                 ; 00592d98

