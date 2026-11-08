; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00574b50(undefined4 *param_1,byte param_2)
;
;
; XREF[3]:
;   FUN_004408e0 at 0044093a
;   FUN_00440b60 at 00440bb8
;   FUN_00441c80 at 00441d15
;
; Referenced Globals:
;   undefined4 DAT_005dd5a0
;   undefined1* PTR_FUN_005e5b54 = 00574b50
;
; Called Functions:
;   FUN_005744a0
;   FUN_00574d10
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574b50
        ;   Label: FUN_00574b50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00574b51
    TEST byte ptr [ESP + 0xc],0x4       ; 00574b55
    JNZ 0x00574b85                      ; 00574b5a
        ;   XREF to: 00574b85 (CONDITIONAL_JUMP)  ; LAB_00574b85
    PUSH EBX                            ; 00574b5c
    MOV dword ptr [EBX],0x5e5b54        ; 00574b5d | PTR_FUN_005e5b54
    CALL FUN_00574d10                   ; 00574b63
        ;   XREF to: 00574d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00574d10()
    ADD ESP,0x4                         ; 00574b68
    PUSH 0x1                            ; 00574b6b
    PUSH EBX                            ; 00574b6d
    CALL FUN_005744a0                   ; 00574b6e
        ;   XREF to: 005744a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005744a0()
    ADD ESP,0x8                         ; 00574b73
    MOV DL,byte ptr [ESP + 0xc]         ; 00574b76
    MOV EBX,EAX                         ; 00574b7a
    TEST DL,0x2                         ; 00574b7c
    JNZ 0x00574ba0                      ; 00574b7f
        ;   XREF to: 00574ba0 (CONDITIONAL_JUMP)  ; LAB_00574ba0
    MOV EAX,EBX                         ; 00574b81
    POP EBX                             ; 00574b83
    RET                                 ; 00574b84
    PUSH 0x5dd5a0                       ; 00574b85 | DAT_005dd5a0
        ;   Label: LAB_00574b85
    PUSH EBX                            ; 00574b8a
    CALL FUN_005a308f                   ; 00574b8b
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00574b90
    PUSH EAX                            ; 00574b93
    CALL FUN_005a30b6                   ; 00574b94
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00574b99
    MOV EAX,EBX                         ; 00574b9c
    POP EBX                             ; 00574b9e
    RET                                 ; 00574b9f
    PUSH EAX                            ; 00574ba0
        ;   Label: LAB_00574ba0
    CALL FUN_005a30c4                   ; 00574ba1
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00574ba6
    MOV EAX,EBX                         ; 00574ba9
    POP EBX                             ; 00574bab
    RET                                 ; 00574bac

