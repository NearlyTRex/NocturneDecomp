; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004e8f70(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00601a20
;
; Called Functions:
;   FUN_005ad5d0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e8f70
        ;   Label: FUN_004e8f70
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e8f71
    TEST byte ptr [ESP + 0xc],0x4       ; 004e8f75
    JNZ 0x004e8f96                      ; 004e8f7a
        ;   XREF to: 004e8f96 (CONDITIONAL_JUMP)  ; LAB_004e8f96
    PUSH 0x1                            ; 004e8f7c
    PUSH EBX                            ; 004e8f7e
    CALL FUN_005ad5d0                   ; 004e8f7f
        ;   XREF to: 005ad5d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad5d0()
    ADD ESP,0x8                         ; 004e8f84
    MOV DL,byte ptr [ESP + 0xc]         ; 004e8f87
    MOV EBX,EAX                         ; 004e8f8b
    TEST DL,0x2                         ; 004e8f8d
    JNZ 0x004e8fb1                      ; 004e8f90
        ;   XREF to: 004e8fb1 (CONDITIONAL_JUMP)  ; LAB_004e8fb1
    MOV EAX,EBX                         ; 004e8f92
    POP EBX                             ; 004e8f94
    RET                                 ; 004e8f95
    PUSH 0x601a20                       ; 004e8f96 | DAT_00601a20
        ;   Label: LAB_004e8f96
    PUSH EBX                            ; 004e8f9b
    CALL FUN_005c030f                   ; 004e8f9c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 004e8fa1
    PUSH EAX                            ; 004e8fa4
    CALL FUN_005c0336                   ; 004e8fa5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 004e8faa
    MOV EAX,EBX                         ; 004e8fad
    POP EBX                             ; 004e8faf
    RET                                 ; 004e8fb0
    PUSH EAX                            ; 004e8fb1
        ;   Label: LAB_004e8fb1
    CALL FUN_005c0344                   ; 004e8fb2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 004e8fb7
    MOV EAX,EBX                         ; 004e8fba
    POP EBX                             ; 004e8fbc
    RET                                 ; 004e8fbd

