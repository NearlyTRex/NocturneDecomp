; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00584de0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fdb00
;
; Called Functions:
;   FUN_00408930
;   FUN_00438a70
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00584de0
        ;   Label: FUN_00584de0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00584de1
    TEST byte ptr [ESP + 0xc],0x4       ; 00584de5
    JNZ 0x00584e1d                      ; 00584dea
        ;   XREF to: 00584e1d (CONDITIONAL_JUMP)  ; LAB_00584e1d
    PUSH 0x0                            ; 00584dec
    ADD EBX,0x117c                      ; 00584dee
    PUSH EBX                            ; 00584df4
    CALL FUN_00438a70                   ; 00584df5
        ;   XREF to: 00438a70 (UNCONDITIONAL_CALL)  ; undefined FUN_00438a70()
    ADD ESP,0x8                         ; 00584dfa
    PUSH 0x1                            ; 00584dfd
    LEA EBX,[EAX + 0xffffee84]          ; 00584dff
    PUSH EBX                            ; 00584e05
    CALL FUN_00408930                   ; 00584e06
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 00584e0b
    MOV DL,byte ptr [ESP + 0xc]         ; 00584e0e
    MOV EBX,EAX                         ; 00584e12
    TEST DL,0x2                         ; 00584e14
    JNZ 0x00584e38                      ; 00584e17
        ;   XREF to: 00584e38 (CONDITIONAL_JUMP)  ; LAB_00584e38
    MOV EAX,EBX                         ; 00584e19
    POP EBX                             ; 00584e1b
    RET                                 ; 00584e1c
    PUSH 0x5fdb00                       ; 00584e1d | DAT_005fdb00
        ;   Label: LAB_00584e1d
    PUSH EBX                            ; 00584e22
    CALL FUN_005b7fa7                   ; 00584e23
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00584e28
    PUSH EAX                            ; 00584e2b
    CALL FUN_005b7fce                   ; 00584e2c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 00584e31
    MOV EAX,EBX                         ; 00584e34
    POP EBX                             ; 00584e36
    RET                                 ; 00584e37
    PUSH EAX                            ; 00584e38
        ;   Label: LAB_00584e38
    CALL FUN_005b7fdc                   ; 00584e39
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 00584e3e
    MOV EAX,EBX                         ; 00584e41
    POP EBX                             ; 00584e43
    RET                                 ; 00584e44

