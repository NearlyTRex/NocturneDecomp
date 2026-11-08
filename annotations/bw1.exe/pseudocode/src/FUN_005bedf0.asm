; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005bedf0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00608510
;
; Called Functions:
;   FUN_00408730
;   FUN_0040ee30
;   FUN_00441ca0
;   FUN_005673f0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bedf0
        ;   Label: FUN_005bedf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005bedf1
    TEST byte ptr [ESP + 0xc],0x4       ; 005bedf5
    JNZ 0x005bee4d                      ; 005bedfa
        ;   XREF to: 005bee4d (CONDITIONAL_JUMP)  ; LAB_005bee4d
    PUSH 0x0                            ; 005bedfc
    ADD EBX,0x35dc                      ; 005bedfe
    PUSH EBX                            ; 005bee04
    CALL FUN_0040ee30                   ; 005bee05
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 005bee0a
    PUSH 0x0                            ; 005bee0d
    SUB EAX,0x93c                       ; 005bee0f
    PUSH EAX                            ; 005bee14
    CALL FUN_00441ca0                   ; 005bee15
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 005bee1a
    PUSH 0x0                            ; 005bee1d
    SUB EAX,0x2b48                      ; 005bee1f
    PUSH EAX                            ; 005bee24
    CALL FUN_005673f0                   ; 005bee25
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 005bee2a
    PUSH 0x1                            ; 005bee2d
    LEA EBX,[EAX + 0xfffffea8]          ; 005bee2f
    PUSH EBX                            ; 005bee35
    CALL FUN_00408730                   ; 005bee36
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 005bee3b
    MOV DL,byte ptr [ESP + 0xc]         ; 005bee3e
    MOV EBX,EAX                         ; 005bee42
    TEST DL,0x2                         ; 005bee44
    JNZ 0x005bee68                      ; 005bee47
        ;   XREF to: 005bee68 (CONDITIONAL_JUMP)  ; LAB_005bee68
    MOV EAX,EBX                         ; 005bee49
    POP EBX                             ; 005bee4b
    RET                                 ; 005bee4c
    PUSH 0x608510                       ; 005bee4d | DAT_00608510
        ;   Label: LAB_005bee4d
    PUSH EBX                            ; 005bee52
    CALL FUN_005c030f                   ; 005bee53
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 005bee58
    PUSH EAX                            ; 005bee5b
    CALL FUN_005c0336                   ; 005bee5c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 005bee61
    MOV EAX,EBX                         ; 005bee64
    POP EBX                             ; 005bee66
    RET                                 ; 005bee67
    PUSH EAX                            ; 005bee68
        ;   Label: LAB_005bee68
    CALL FUN_005c0344                   ; 005bee69
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 005bee6e
    MOV EAX,EBX                         ; 005bee71
    POP EBX                             ; 005bee73
    RET                                 ; 005bee74

