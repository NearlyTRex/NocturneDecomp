; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0043ae70(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f4da0
;
; Called Functions:
;   FUN_00408930
;   FUN_00589ae0
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ae70
        ;   Label: FUN_0043ae70
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043ae71
    TEST byte ptr [ESP + 0xc],0x4       ; 0043ae75
    JNZ 0x0043aead                      ; 0043ae7a
        ;   XREF to: 0043aead (CONDITIONAL_JUMP)  ; LAB_0043aead
    PUSH 0x1                            ; 0043ae7c
    ADD EBX,0x6d8                       ; 0043ae7e
    PUSH EBX                            ; 0043ae84
    CALL FUN_00408930                   ; 0043ae85
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 0043ae8a
    PUSH 0x1                            ; 0043ae8d
    LEA EBX,[EAX + 0xfffff928]          ; 0043ae8f
    PUSH EBX                            ; 0043ae95
    CALL FUN_00589ae0                   ; 0043ae96
        ;   XREF to: 00589ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00589ae0()
    ADD ESP,0x8                         ; 0043ae9b
    MOV DL,byte ptr [ESP + 0xc]         ; 0043ae9e
    MOV EBX,EAX                         ; 0043aea2
    TEST DL,0x2                         ; 0043aea4
    JNZ 0x0043aec8                      ; 0043aea7
        ;   XREF to: 0043aec8 (CONDITIONAL_JUMP)  ; LAB_0043aec8
    MOV EAX,EBX                         ; 0043aea9
    POP EBX                             ; 0043aeab
    RET                                 ; 0043aeac
    PUSH 0x5f4da0                       ; 0043aead | DAT_005f4da0
        ;   Label: LAB_0043aead
    PUSH EBX                            ; 0043aeb2
    CALL FUN_005b7fa7                   ; 0043aeb3
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0043aeb8
    PUSH EAX                            ; 0043aebb
    CALL FUN_005b7fce                   ; 0043aebc
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0043aec1
    MOV EAX,EBX                         ; 0043aec4
    POP EBX                             ; 0043aec6
    RET                                 ; 0043aec7
    PUSH EAX                            ; 0043aec8
        ;   Label: LAB_0043aec8
    CALL FUN_005b7fdc                   ; 0043aec9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0043aece
    MOV EAX,EBX                         ; 0043aed1
    POP EBX                             ; 0043aed3
    RET                                 ; 0043aed4

