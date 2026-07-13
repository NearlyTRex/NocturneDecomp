; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00558000(undefined4 *param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_005a4484 = 00558000
;   undefined4 DAT_005a44a0
;
; Called Functions:
;   FUN_004eefc0
;   FUN_005586a0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558000
        ;   Label: FUN_00558000
    MOV EBX,dword ptr [ESP + 0x8]       ; 00558001
    TEST byte ptr [ESP + 0xc],0x4       ; 00558005
    JNZ 0x00558035                      ; 0055800a
        ;   XREF to: 00558035 (CONDITIONAL_JUMP)  ; LAB_00558035
    PUSH EBX                            ; 0055800c
    MOV dword ptr [EBX],0x5a4484        ; 0055800d | PTR_FUN_005a4484
    CALL FUN_005586a0                   ; 00558013
        ;   XREF to: 005586a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005586a0()
    ADD ESP,0x4                         ; 00558018
    PUSH 0x1                            ; 0055801b
    PUSH EBX                            ; 0055801d
    CALL FUN_004eefc0                   ; 0055801e
        ;   XREF to: 004eefc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eefc0()
    ADD ESP,0x8                         ; 00558023
    MOV DL,byte ptr [ESP + 0xc]         ; 00558026
    MOV EBX,EAX                         ; 0055802a
    TEST DL,0x2                         ; 0055802c
    JNZ 0x00558050                      ; 0055802f
        ;   XREF to: 00558050 (CONDITIONAL_JUMP)  ; LAB_00558050
    MOV EAX,EBX                         ; 00558031
    POP EBX                             ; 00558033
    RET                                 ; 00558034
    PUSH 0x5a44a0                       ; 00558035 | DAT_005a44a0
        ;   Label: LAB_00558035
    PUSH EBX                            ; 0055803a
    CALL FUN_0056445f                   ; 0055803b
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 00558040
    PUSH EAX                            ; 00558043
    CALL FUN_00564486                   ; 00558044
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 00558049
    MOV EAX,EBX                         ; 0055804c
    POP EBX                             ; 0055804e
    RET                                 ; 0055804f
    PUSH EAX                            ; 00558050
        ;   Label: LAB_00558050
    CALL FUN_00564494                   ; 00558051
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 00558056
    MOV EAX,EBX                         ; 00558059
    POP EBX                             ; 0055805b
    RET                                 ; 0055805c

