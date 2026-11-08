; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004e6e70(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00601890
;
; Called Functions:
;   FUN_00408730
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6e70
        ;   Label: FUN_004e6e70
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e6e71
    TEST byte ptr [ESP + 0xc],0x4       ; 004e6e75
    JNZ 0x004e6e96                      ; 004e6e7a
        ;   XREF to: 004e6e96 (CONDITIONAL_JUMP)  ; LAB_004e6e96
    PUSH 0x1                            ; 004e6e7c
    PUSH EBX                            ; 004e6e7e
    CALL FUN_00408730                   ; 004e6e7f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 004e6e84
    MOV DL,byte ptr [ESP + 0xc]         ; 004e6e87
    MOV EBX,EAX                         ; 004e6e8b
    TEST DL,0x2                         ; 004e6e8d
    JNZ 0x004e6eb1                      ; 004e6e90
        ;   XREF to: 004e6eb1 (CONDITIONAL_JUMP)  ; LAB_004e6eb1
    MOV EAX,EBX                         ; 004e6e92
    POP EBX                             ; 004e6e94
    RET                                 ; 004e6e95
    PUSH 0x601890                       ; 004e6e96 | DAT_00601890
        ;   Label: LAB_004e6e96
    PUSH EBX                            ; 004e6e9b
    CALL FUN_005c030f                   ; 004e6e9c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 004e6ea1
    PUSH EAX                            ; 004e6ea4
    CALL FUN_005c0336                   ; 004e6ea5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 004e6eaa
    MOV EAX,EBX                         ; 004e6ead
    POP EBX                             ; 004e6eaf
    RET                                 ; 004e6eb0
    PUSH EAX                            ; 004e6eb1
        ;   Label: LAB_004e6eb1
    CALL FUN_005c0344                   ; 004e6eb2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 004e6eb7
    MOV EAX,EBX                         ; 004e6eba
    POP EBX                             ; 004e6ebc
    RET                                 ; 004e6ebd

