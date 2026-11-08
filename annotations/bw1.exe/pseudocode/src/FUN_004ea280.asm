; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004ea280(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00601bd0
;
; Called Functions:
;   FUN_004ea980
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ea280
        ;   Label: FUN_004ea280
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ea281
    TEST byte ptr [ESP + 0xc],0x4       ; 004ea285
    JNZ 0x004ea2a6                      ; 004ea28a
        ;   XREF to: 004ea2a6 (CONDITIONAL_JUMP)  ; LAB_004ea2a6
    PUSH 0x1                            ; 004ea28c
    PUSH EBX                            ; 004ea28e
    CALL FUN_004ea980                   ; 004ea28f
        ;   XREF to: 004ea980 (UNCONDITIONAL_CALL)  ; undefined FUN_004ea980()
    ADD ESP,0x8                         ; 004ea294
    MOV DL,byte ptr [ESP + 0xc]         ; 004ea297
    MOV EBX,EAX                         ; 004ea29b
    TEST DL,0x2                         ; 004ea29d
    JNZ 0x004ea2c1                      ; 004ea2a0
        ;   XREF to: 004ea2c1 (CONDITIONAL_JUMP)  ; LAB_004ea2c1
    MOV EAX,EBX                         ; 004ea2a2
    POP EBX                             ; 004ea2a4
    RET                                 ; 004ea2a5
    PUSH 0x601bd0                       ; 004ea2a6 | DAT_00601bd0
        ;   Label: LAB_004ea2a6
    PUSH EBX                            ; 004ea2ab
    CALL FUN_005c030f                   ; 004ea2ac
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 004ea2b1
    PUSH EAX                            ; 004ea2b4
    CALL FUN_005c0336                   ; 004ea2b5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 004ea2ba
    MOV EAX,EBX                         ; 004ea2bd
    POP EBX                             ; 004ea2bf
    RET                                 ; 004ea2c0
    PUSH EAX                            ; 004ea2c1
        ;   Label: LAB_004ea2c1
    CALL FUN_005c0344                   ; 004ea2c2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 004ea2c7
    MOV EAX,EBX                         ; 004ea2ca
    POP EBX                             ; 004ea2cc
    RET                                 ; 004ea2cd

