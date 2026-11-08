; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00410a00(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fbe70
;
; Called Functions:
;   FUN_00408730
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410a00
        ;   Label: FUN_00410a00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00410a01
    TEST byte ptr [ESP + 0xc],0x4       ; 00410a05
    JNZ 0x00410a26                      ; 00410a0a
        ;   XREF to: 00410a26 (CONDITIONAL_JUMP)  ; LAB_00410a26
    PUSH 0x1                            ; 00410a0c
    PUSH EBX                            ; 00410a0e
    CALL FUN_00408730                   ; 00410a0f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 00410a14
    MOV DL,byte ptr [ESP + 0xc]         ; 00410a17
    MOV EBX,EAX                         ; 00410a1b
    TEST DL,0x2                         ; 00410a1d
    JNZ 0x00410a41                      ; 00410a20
        ;   XREF to: 00410a41 (CONDITIONAL_JUMP)  ; LAB_00410a41
    MOV EAX,EBX                         ; 00410a22
    POP EBX                             ; 00410a24
    RET                                 ; 00410a25
    PUSH 0x5fbe70                       ; 00410a26 | DAT_005fbe70
        ;   Label: LAB_00410a26
    PUSH EBX                            ; 00410a2b
    CALL FUN_005c030f                   ; 00410a2c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00410a31
    PUSH EAX                            ; 00410a34
    CALL FUN_005c0336                   ; 00410a35
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00410a3a
    MOV EAX,EBX                         ; 00410a3d
    POP EBX                             ; 00410a3f
    RET                                 ; 00410a40
    PUSH EAX                            ; 00410a41
        ;   Label: LAB_00410a41
    CALL FUN_005c0344                   ; 00410a42
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00410a47
    MOV EAX,EBX                         ; 00410a4a
    POP EBX                             ; 00410a4c
    RET                                 ; 00410a4d

