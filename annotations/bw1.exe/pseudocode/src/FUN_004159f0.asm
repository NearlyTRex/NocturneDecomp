; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004159f0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fc8b0
;
; Called Functions:
;   FUN_00408730
;   FUN_0040ee30
;   FUN_00441ca0
;   FUN_00533060
;   FUN_005673f0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004159f0
        ;   Label: FUN_004159f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004159f1
    TEST byte ptr [ESP + 0xc],0x4       ; 004159f5
    JNZ 0x00415a5d                      ; 004159fa
        ;   XREF to: 00415a5d (CONDITIONAL_JUMP)  ; LAB_00415a5d
    PUSH 0x0                            ; 004159fc
    ADD EBX,0xc1d0                      ; 004159fe
    PUSH EBX                            ; 00415a04
    CALL FUN_00533060                   ; 00415a05
        ;   XREF to: 00533060 (UNCONDITIONAL_CALL)  ; undefined FUN_00533060()
    ADD ESP,0x8                         ; 00415a0a
    PUSH 0x0                            ; 00415a0d
    SUB EAX,0x8bf4                      ; 00415a0f
    PUSH EAX                            ; 00415a14
    CALL FUN_0040ee30                   ; 00415a15
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 00415a1a
    PUSH 0x0                            ; 00415a1d
    SUB EAX,0x93c                       ; 00415a1f
    PUSH EAX                            ; 00415a24
    CALL FUN_00441ca0                   ; 00415a25
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 00415a2a
    PUSH 0x0                            ; 00415a2d
    SUB EAX,0x2b48                      ; 00415a2f
    PUSH EAX                            ; 00415a34
    CALL FUN_005673f0                   ; 00415a35
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 00415a3a
    PUSH 0x1                            ; 00415a3d
    LEA EBX,[EAX + 0xfffffea8]          ; 00415a3f
    PUSH EBX                            ; 00415a45
    CALL FUN_00408730                   ; 00415a46
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 00415a4b
    MOV DL,byte ptr [ESP + 0xc]         ; 00415a4e
    MOV EBX,EAX                         ; 00415a52
    TEST DL,0x2                         ; 00415a54
    JNZ 0x00415a78                      ; 00415a57
        ;   XREF to: 00415a78 (CONDITIONAL_JUMP)  ; LAB_00415a78
    MOV EAX,EBX                         ; 00415a59
    POP EBX                             ; 00415a5b
    RET                                 ; 00415a5c
    PUSH 0x5fc8b0                       ; 00415a5d | DAT_005fc8b0
        ;   Label: LAB_00415a5d
    PUSH EBX                            ; 00415a62
    CALL FUN_005c030f                   ; 00415a63
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00415a68
    PUSH EAX                            ; 00415a6b
    CALL FUN_005c0336                   ; 00415a6c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00415a71
    MOV EAX,EBX                         ; 00415a74
    POP EBX                             ; 00415a76
    RET                                 ; 00415a77
    PUSH EAX                            ; 00415a78
        ;   Label: LAB_00415a78
    CALL FUN_005c0344                   ; 00415a79
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00415a7e
    MOV EAX,EBX                         ; 00415a81
    POP EBX                             ; 00415a83
    RET                                 ; 00415a84

