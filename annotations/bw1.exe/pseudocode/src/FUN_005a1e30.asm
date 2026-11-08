; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_005a1e30(undefined4 *param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_00607474 = 005a1e30
;   undefined4 DAT_00607490
;
; Called Functions:
;   FUN_005a14b0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1e30
        ;   Label: FUN_005a1e30
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a1e31
    TEST byte ptr [ESP + 0xc],0x4       ; 005a1e35
    JNZ 0x005a1e5c                      ; 005a1e3a
        ;   XREF to: 005a1e5c (CONDITIONAL_JUMP)  ; LAB_005a1e5c
    PUSH 0x1                            ; 005a1e3c
    PUSH EBX                            ; 005a1e3e
    MOV dword ptr [EBX],0x607474        ; 005a1e3f | PTR_FUN_00607474
    CALL FUN_005a14b0                   ; 005a1e45
        ;   XREF to: 005a14b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a14b0()
    ADD ESP,0x8                         ; 005a1e4a
    MOV DL,byte ptr [ESP + 0xc]         ; 005a1e4d
    MOV EBX,EAX                         ; 005a1e51
    TEST DL,0x2                         ; 005a1e53
    JNZ 0x005a1e77                      ; 005a1e56
        ;   XREF to: 005a1e77 (CONDITIONAL_JUMP)  ; LAB_005a1e77
    MOV EAX,EBX                         ; 005a1e58
    POP EBX                             ; 005a1e5a
    RET                                 ; 005a1e5b
    PUSH 0x607490                       ; 005a1e5c | DAT_00607490
        ;   Label: LAB_005a1e5c
    PUSH EBX                            ; 005a1e61
    CALL FUN_005c030f                   ; 005a1e62
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 005a1e67
    PUSH EAX                            ; 005a1e6a
    CALL FUN_005c0336                   ; 005a1e6b
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 005a1e70
    MOV EAX,EBX                         ; 005a1e73
    POP EBX                             ; 005a1e75
    RET                                 ; 005a1e76
    PUSH EAX                            ; 005a1e77
        ;   Label: LAB_005a1e77
    CALL FUN_005c0344                   ; 005a1e78
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 005a1e7d
    MOV EAX,EBX                         ; 005a1e80
    POP EBX                             ; 005a1e82
    RET                                 ; 005a1e83

