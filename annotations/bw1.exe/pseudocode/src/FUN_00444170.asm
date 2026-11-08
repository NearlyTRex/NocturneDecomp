; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00444170(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fdb40
;
; Called Functions:
;   FUN_00442bb0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444170
        ;   Label: FUN_00444170
    MOV EBX,dword ptr [ESP + 0x8]       ; 00444171
    TEST byte ptr [ESP + 0xc],0x4       ; 00444175
    JNZ 0x00444196                      ; 0044417a
        ;   XREF to: 00444196 (CONDITIONAL_JUMP)  ; LAB_00444196
    PUSH 0x1                            ; 0044417c
    PUSH EBX                            ; 0044417e
    CALL FUN_00442bb0                   ; 0044417f
        ;   XREF to: 00442bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00442bb0()
    ADD ESP,0x8                         ; 00444184
    MOV DL,byte ptr [ESP + 0xc]         ; 00444187
    MOV EBX,EAX                         ; 0044418b
    TEST DL,0x2                         ; 0044418d
    JNZ 0x004441b1                      ; 00444190
        ;   XREF to: 004441b1 (CONDITIONAL_JUMP)  ; LAB_004441b1
    MOV EAX,EBX                         ; 00444192
    POP EBX                             ; 00444194
    RET                                 ; 00444195
    PUSH 0x5fdb40                       ; 00444196 | DAT_005fdb40
        ;   Label: LAB_00444196
    PUSH EBX                            ; 0044419b
    CALL FUN_005c030f                   ; 0044419c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 004441a1
    PUSH EAX                            ; 004441a4
    CALL FUN_005c0336                   ; 004441a5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 004441aa
    MOV EAX,EBX                         ; 004441ad
    POP EBX                             ; 004441af
    RET                                 ; 004441b0
    PUSH EAX                            ; 004441b1
        ;   Label: LAB_004441b1
    CALL FUN_005c0344                   ; 004441b2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 004441b7
    MOV EAX,EBX                         ; 004441ba
    POP EBX                             ; 004441bc
    RET                                 ; 004441bd

