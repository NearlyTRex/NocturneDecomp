; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005b1a40(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00608140
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

    PUSH EBX                            ; 005b1a40
        ;   Label: FUN_005b1a40
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b1a41
    TEST byte ptr [ESP + 0xc],0x4       ; 005b1a45
    JNZ 0x005b1a9d                      ; 005b1a4a
        ;   XREF to: 005b1a9d (CONDITIONAL_JUMP)  ; LAB_005b1a9d
    PUSH 0x0                            ; 005b1a4c
    ADD EBX,0x35dc                      ; 005b1a4e
    PUSH EBX                            ; 005b1a54
    CALL FUN_0040ee30                   ; 005b1a55
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 005b1a5a
    PUSH 0x0                            ; 005b1a5d
    SUB EAX,0x93c                       ; 005b1a5f
    PUSH EAX                            ; 005b1a64
    CALL FUN_00441ca0                   ; 005b1a65
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 005b1a6a
    PUSH 0x0                            ; 005b1a6d
    SUB EAX,0x2b48                      ; 005b1a6f
    PUSH EAX                            ; 005b1a74
    CALL FUN_005673f0                   ; 005b1a75
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 005b1a7a
    PUSH 0x1                            ; 005b1a7d
    LEA EBX,[EAX + 0xfffffea8]          ; 005b1a7f
    PUSH EBX                            ; 005b1a85
    CALL FUN_00408730                   ; 005b1a86
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 005b1a8b
    MOV DL,byte ptr [ESP + 0xc]         ; 005b1a8e
    MOV EBX,EAX                         ; 005b1a92
    TEST DL,0x2                         ; 005b1a94
    JNZ 0x005b1ab8                      ; 005b1a97
        ;   XREF to: 005b1ab8 (CONDITIONAL_JUMP)  ; LAB_005b1ab8
    MOV EAX,EBX                         ; 005b1a99
    POP EBX                             ; 005b1a9b
    RET                                 ; 005b1a9c
    PUSH 0x608140                       ; 005b1a9d | DAT_00608140
        ;   Label: LAB_005b1a9d
    PUSH EBX                            ; 005b1aa2
    CALL FUN_005c030f                   ; 005b1aa3
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 005b1aa8
    PUSH EAX                            ; 005b1aab
    CALL FUN_005c0336                   ; 005b1aac
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 005b1ab1
    MOV EAX,EBX                         ; 005b1ab4
    POP EBX                             ; 005b1ab6
    RET                                 ; 005b1ab7
    PUSH EAX                            ; 005b1ab8
        ;   Label: LAB_005b1ab8
    CALL FUN_005c0344                   ; 005b1ab9
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 005b1abe
    MOV EAX,EBX                         ; 005b1ac1
    POP EBX                             ; 005b1ac3
    RET                                 ; 005b1ac4

