; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00478d70(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005ff110
;
; Called Functions:
;   FUN_00408730
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478d70
        ;   Label: FUN_00478d70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00478d71
    TEST byte ptr [ESP + 0xc],0x4       ; 00478d75
    JNZ 0x00478d96                      ; 00478d7a
        ;   XREF to: 00478d96 (CONDITIONAL_JUMP)  ; LAB_00478d96
    PUSH 0x1                            ; 00478d7c
    PUSH EBX                            ; 00478d7e
    CALL FUN_00408730                   ; 00478d7f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 00478d84
    MOV DL,byte ptr [ESP + 0xc]         ; 00478d87
    MOV EBX,EAX                         ; 00478d8b
    TEST DL,0x2                         ; 00478d8d
    JNZ 0x00478db1                      ; 00478d90
        ;   XREF to: 00478db1 (CONDITIONAL_JUMP)  ; LAB_00478db1
    MOV EAX,EBX                         ; 00478d92
    POP EBX                             ; 00478d94
    RET                                 ; 00478d95
    PUSH 0x5ff110                       ; 00478d96 | DAT_005ff110
        ;   Label: LAB_00478d96
    PUSH EBX                            ; 00478d9b
    CALL FUN_005c030f                   ; 00478d9c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00478da1
    PUSH EAX                            ; 00478da4
    CALL FUN_005c0336                   ; 00478da5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00478daa
    MOV EAX,EBX                         ; 00478dad
    POP EBX                             ; 00478daf
    RET                                 ; 00478db0
    PUSH EAX                            ; 00478db1
        ;   Label: LAB_00478db1
    CALL FUN_005c0344                   ; 00478db2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00478db7
    MOV EAX,EBX                         ; 00478dba
    POP EBX                             ; 00478dbc
    RET                                 ; 00478dbd

