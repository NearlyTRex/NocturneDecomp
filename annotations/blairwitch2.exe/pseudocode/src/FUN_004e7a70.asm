; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004e7a70(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f9b10
;
; Called Functions:
;   FUN_00408930
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7a70
        ;   Label: FUN_004e7a70
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e7a71
    TEST byte ptr [ESP + 0xc],0x4       ; 004e7a75
    JNZ 0x004e7a96                      ; 004e7a7a
        ;   XREF to: 004e7a96 (CONDITIONAL_JUMP)  ; LAB_004e7a96
    PUSH 0x1                            ; 004e7a7c
    PUSH EBX                            ; 004e7a7e
    CALL FUN_00408930                   ; 004e7a7f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 004e7a84
    MOV DL,byte ptr [ESP + 0xc]         ; 004e7a87
    MOV EBX,EAX                         ; 004e7a8b
    TEST DL,0x2                         ; 004e7a8d
    JNZ 0x004e7ab1                      ; 004e7a90
        ;   XREF to: 004e7ab1 (CONDITIONAL_JUMP)  ; LAB_004e7ab1
    MOV EAX,EBX                         ; 004e7a92
    POP EBX                             ; 004e7a94
    RET                                 ; 004e7a95
    PUSH 0x5f9b10                       ; 004e7a96 | DAT_005f9b10
        ;   Label: LAB_004e7a96
    PUSH EBX                            ; 004e7a9b
    CALL FUN_005b7fa7                   ; 004e7a9c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 004e7aa1
    PUSH EAX                            ; 004e7aa4
    CALL FUN_005b7fce                   ; 004e7aa5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004e7aaa
    MOV EAX,EBX                         ; 004e7aad
    POP EBX                             ; 004e7aaf
    RET                                 ; 004e7ab0
    PUSH EAX                            ; 004e7ab1
        ;   Label: LAB_004e7ab1
    CALL FUN_005b7fdc                   ; 004e7ab2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004e7ab7
    MOV EAX,EBX                         ; 004e7aba
    POP EBX                             ; 004e7abc
    RET                                 ; 004e7abd

