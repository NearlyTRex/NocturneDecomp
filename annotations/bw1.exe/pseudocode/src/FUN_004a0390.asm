; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a0390(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005ffb10
;
; Called Functions:
;   FUN_00408730
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0390
        ;   Label: FUN_004a0390
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a0391
    TEST byte ptr [ESP + 0xc],0x4       ; 004a0395
    JNZ 0x004a03b6                      ; 004a039a
        ;   XREF to: 004a03b6 (CONDITIONAL_JUMP)  ; LAB_004a03b6
    PUSH 0x1                            ; 004a039c
    PUSH EBX                            ; 004a039e
    CALL FUN_00408730                   ; 004a039f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 004a03a4
    MOV DL,byte ptr [ESP + 0xc]         ; 004a03a7
    MOV EBX,EAX                         ; 004a03ab
    TEST DL,0x2                         ; 004a03ad
    JNZ 0x004a03d1                      ; 004a03b0
        ;   XREF to: 004a03d1 (CONDITIONAL_JUMP)  ; LAB_004a03d1
    MOV EAX,EBX                         ; 004a03b2
    POP EBX                             ; 004a03b4
    RET                                 ; 004a03b5
    PUSH 0x5ffb10                       ; 004a03b6 | DAT_005ffb10
        ;   Label: LAB_004a03b6
    PUSH EBX                            ; 004a03bb
    CALL FUN_005c030f                   ; 004a03bc
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 004a03c1
    PUSH EAX                            ; 004a03c4
    CALL FUN_005c0336                   ; 004a03c5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 004a03ca
    MOV EAX,EBX                         ; 004a03cd
    POP EBX                             ; 004a03cf
    RET                                 ; 004a03d0
    PUSH EAX                            ; 004a03d1
        ;   Label: LAB_004a03d1
    CALL FUN_005c0344                   ; 004a03d2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 004a03d7
    MOV EAX,EBX                         ; 004a03da
    POP EBX                             ; 004a03dc
    RET                                 ; 004a03dd

