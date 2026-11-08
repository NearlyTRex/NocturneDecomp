; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00441e70(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005dd660
;
; Called Functions:
;   FUN_00440810
;   FUN_00440bf0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441e70
        ;   Label: FUN_00441e70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00441e71
    TEST byte ptr [ESP + 0xc],0x4       ; 00441e75
    JNZ 0x00441ea7                      ; 00441e7a
        ;   XREF to: 00441ea7 (CONDITIONAL_JUMP)  ; LAB_00441ea7
    PUSH 0x0                            ; 00441e7c
    ADD EBX,0x4                         ; 00441e7e
    PUSH EBX                            ; 00441e81
    CALL FUN_00440bf0                   ; 00441e82
        ;   XREF to: 00440bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00440bf0()
    ADD ESP,0x8                         ; 00441e87
    PUSH 0x1                            ; 00441e8a
    LEA EBX,[EAX + -0x4]                ; 00441e8c
    PUSH EBX                            ; 00441e8f
    CALL FUN_00440810                   ; 00441e90
        ;   XREF to: 00440810 (UNCONDITIONAL_CALL)  ; undefined FUN_00440810()
    ADD ESP,0x8                         ; 00441e95
    MOV DL,byte ptr [ESP + 0xc]         ; 00441e98
    MOV EBX,EAX                         ; 00441e9c
    TEST DL,0x2                         ; 00441e9e
    JNZ 0x00441ec2                      ; 00441ea1
        ;   XREF to: 00441ec2 (CONDITIONAL_JUMP)  ; LAB_00441ec2
    MOV EAX,EBX                         ; 00441ea3
    POP EBX                             ; 00441ea5
    RET                                 ; 00441ea6
    PUSH 0x5dd660                       ; 00441ea7 | DAT_005dd660
        ;   Label: LAB_00441ea7
    PUSH EBX                            ; 00441eac
    CALL FUN_005a308f                   ; 00441ead
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00441eb2
    PUSH EAX                            ; 00441eb5
    CALL FUN_005a30b6                   ; 00441eb6
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00441ebb
    MOV EAX,EBX                         ; 00441ebe
    POP EBX                             ; 00441ec0
    RET                                 ; 00441ec1
    PUSH EAX                            ; 00441ec2
        ;   Label: LAB_00441ec2
    CALL FUN_005a30c4                   ; 00441ec3
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00441ec8
    MOV EAX,EBX                         ; 00441ecb
    POP EBX                             ; 00441ecd
    RET                                 ; 00441ece

