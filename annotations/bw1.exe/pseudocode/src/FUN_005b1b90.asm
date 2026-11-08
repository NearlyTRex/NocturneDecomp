; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005b1b90(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_00608164 = 005b1b90
;   undefined4 DAT_00608180
;
; Called Functions:
;   FUN_00531ed0
;   FUN_005b2080
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1b90
        ;   Label: FUN_005b1b90
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b1b91
    TEST byte ptr [ESP + 0xc],0x4       ; 005b1b95
    JNZ 0x005b1bc9                      ; 005b1b9a
        ;   XREF to: 005b1bc9 (CONDITIONAL_JUMP)  ; LAB_005b1bc9
    PUSH EBX                            ; 005b1b9c
    MOV dword ptr [EBX + 0x6a44],0x608164 ; 005b1b9d | PTR_FUN_00608164
    CALL FUN_005b2080                   ; 005b1ba7
        ;   XREF to: 005b2080 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2080()
    ADD ESP,0x4                         ; 005b1bac
    PUSH 0x1                            ; 005b1baf
    PUSH EBX                            ; 005b1bb1
    CALL FUN_00531ed0                   ; 005b1bb2
        ;   XREF to: 00531ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_00531ed0()
    ADD ESP,0x8                         ; 005b1bb7
    MOV DL,byte ptr [ESP + 0xc]         ; 005b1bba
    MOV EBX,EAX                         ; 005b1bbe
    TEST DL,0x2                         ; 005b1bc0
    JNZ 0x005b1be4                      ; 005b1bc3
        ;   XREF to: 005b1be4 (CONDITIONAL_JUMP)  ; LAB_005b1be4
    MOV EAX,EBX                         ; 005b1bc5
    POP EBX                             ; 005b1bc7
    RET                                 ; 005b1bc8
    PUSH 0x608180                       ; 005b1bc9 | DAT_00608180
        ;   Label: LAB_005b1bc9
    PUSH EBX                            ; 005b1bce
    CALL FUN_005c030f                   ; 005b1bcf
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 005b1bd4
    PUSH EAX                            ; 005b1bd7
    CALL FUN_005c0336                   ; 005b1bd8
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 005b1bdd
    MOV EAX,EBX                         ; 005b1be0
    POP EBX                             ; 005b1be2
    RET                                 ; 005b1be3
    PUSH EAX                            ; 005b1be4
        ;   Label: LAB_005b1be4
    CALL FUN_005c0344                   ; 005b1be5
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 005b1bea
    MOV EAX,EBX                         ; 005b1bed
    POP EBX                             ; 005b1bef
    RET                                 ; 005b1bf0

