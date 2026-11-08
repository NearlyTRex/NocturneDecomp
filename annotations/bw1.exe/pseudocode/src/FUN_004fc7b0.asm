; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004fc7b0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00602bb0
;
; Called Functions:
;   FUN_00408730
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc7b0
        ;   Label: FUN_004fc7b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fc7b1
    TEST byte ptr [ESP + 0xc],0x4       ; 004fc7b5
    JNZ 0x004fc7d6                      ; 004fc7ba
        ;   XREF to: 004fc7d6 (CONDITIONAL_JUMP)  ; LAB_004fc7d6
    PUSH 0x1                            ; 004fc7bc
    PUSH EBX                            ; 004fc7be
    CALL FUN_00408730                   ; 004fc7bf
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 004fc7c4
    MOV DL,byte ptr [ESP + 0xc]         ; 004fc7c7
    MOV EBX,EAX                         ; 004fc7cb
    TEST DL,0x2                         ; 004fc7cd
    JNZ 0x004fc7f1                      ; 004fc7d0
        ;   XREF to: 004fc7f1 (CONDITIONAL_JUMP)  ; LAB_004fc7f1
    MOV EAX,EBX                         ; 004fc7d2
    POP EBX                             ; 004fc7d4
    RET                                 ; 004fc7d5
    PUSH 0x602bb0                       ; 004fc7d6 | DAT_00602bb0
        ;   Label: LAB_004fc7d6
    PUSH EBX                            ; 004fc7db
    CALL FUN_005c030f                   ; 004fc7dc
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 004fc7e1
    PUSH EAX                            ; 004fc7e4
    CALL FUN_005c0336                   ; 004fc7e5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 004fc7ea
    MOV EAX,EBX                         ; 004fc7ed
    POP EBX                             ; 004fc7ef
    RET                                 ; 004fc7f0
    PUSH EAX                            ; 004fc7f1
        ;   Label: LAB_004fc7f1
    CALL FUN_005c0344                   ; 004fc7f2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 004fc7f7
    MOV EAX,EBX                         ; 004fc7fa
    POP EBX                             ; 004fc7fc
    RET                                 ; 004fc7fd

