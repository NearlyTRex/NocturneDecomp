; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004c09c0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00600bc0
;
; Called Functions:
;   FUN_00408730
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c09c0
        ;   Label: FUN_004c09c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c09c1
    TEST byte ptr [ESP + 0xc],0x4       ; 004c09c5
    JNZ 0x004c09e6                      ; 004c09ca
        ;   XREF to: 004c09e6 (CONDITIONAL_JUMP)  ; LAB_004c09e6
    PUSH 0x1                            ; 004c09cc
    PUSH EBX                            ; 004c09ce
    CALL FUN_00408730                   ; 004c09cf
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 004c09d4
    MOV DL,byte ptr [ESP + 0xc]         ; 004c09d7
    MOV EBX,EAX                         ; 004c09db
    TEST DL,0x2                         ; 004c09dd
    JNZ 0x004c0a01                      ; 004c09e0
        ;   XREF to: 004c0a01 (CONDITIONAL_JUMP)  ; LAB_004c0a01
    MOV EAX,EBX                         ; 004c09e2
    POP EBX                             ; 004c09e4
    RET                                 ; 004c09e5
    PUSH 0x600bc0                       ; 004c09e6 | DAT_00600bc0
        ;   Label: LAB_004c09e6
    PUSH EBX                            ; 004c09eb
    CALL FUN_005c030f                   ; 004c09ec
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 004c09f1
    PUSH EAX                            ; 004c09f4
    CALL FUN_005c0336                   ; 004c09f5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 004c09fa
    MOV EAX,EBX                         ; 004c09fd
    POP EBX                             ; 004c09ff
    RET                                 ; 004c0a00
    PUSH EAX                            ; 004c0a01
        ;   Label: LAB_004c0a01
    CALL FUN_005c0344                   ; 004c0a02
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 004c0a07
    MOV EAX,EBX                         ; 004c0a0a
    POP EBX                             ; 004c0a0c
    RET                                 ; 004c0a0d

