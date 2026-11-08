; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004ff9f0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00602fd0
;
; Called Functions:
;   FUN_00408730
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ff9f0
        ;   Label: FUN_004ff9f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ff9f1
    TEST byte ptr [ESP + 0xc],0x4       ; 004ff9f5
    JNZ 0x004ffa16                      ; 004ff9fa
        ;   XREF to: 004ffa16 (CONDITIONAL_JUMP)  ; LAB_004ffa16
    PUSH 0x1                            ; 004ff9fc
    PUSH EBX                            ; 004ff9fe
    CALL FUN_00408730                   ; 004ff9ff
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 004ffa04
    MOV DL,byte ptr [ESP + 0xc]         ; 004ffa07
    MOV EBX,EAX                         ; 004ffa0b
    TEST DL,0x2                         ; 004ffa0d
    JNZ 0x004ffa31                      ; 004ffa10
        ;   XREF to: 004ffa31 (CONDITIONAL_JUMP)  ; LAB_004ffa31
    MOV EAX,EBX                         ; 004ffa12
    POP EBX                             ; 004ffa14
    RET                                 ; 004ffa15
    PUSH 0x602fd0                       ; 004ffa16 | DAT_00602fd0
        ;   Label: LAB_004ffa16
    PUSH EBX                            ; 004ffa1b
    CALL FUN_005c030f                   ; 004ffa1c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 004ffa21
    PUSH EAX                            ; 004ffa24
    CALL FUN_005c0336                   ; 004ffa25
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 004ffa2a
    MOV EAX,EBX                         ; 004ffa2d
    POP EBX                             ; 004ffa2f
    RET                                 ; 004ffa30
    PUSH EAX                            ; 004ffa31
        ;   Label: LAB_004ffa31
    CALL FUN_005c0344                   ; 004ffa32
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 004ffa37
    MOV EAX,EBX                         ; 004ffa3a
    POP EBX                             ; 004ffa3c
    RET                                 ; 004ffa3d

