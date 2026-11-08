; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c426c(char *param_1)
;
;
; XREF[1]:
;   FUN_005c3c08 at 005c4049
;
; Called Functions:
;   FUN_005c12b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c426c
        ;   Label: FUN_005c426c
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c426d
    CMP byte ptr [EBX],0x0              ; 005c4271
    JZ 0x005c428d                       ; 005c4274
        ;   XREF to: 005c428d (CONDITIONAL_JUMP)  ; LAB_005c428d
    XOR EAX,EAX                         ; 005c4276
        ;   Label: LAB_005c4276
    MOV AL,byte ptr [EBX]               ; 005c4278
    PUSH EAX                            ; 005c427a
    INC EBX                             ; 005c427b
    CALL FUN_005c12b0                   ; 005c427c
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c12b0()
    MOV byte ptr [EBX + -0x1],AL        ; 005c4281
    MOV DL,byte ptr [EBX]               ; 005c4284
    ADD ESP,0x4                         ; 005c4286
    TEST DL,DL                          ; 005c4289
    JNZ 0x005c4276                      ; 005c428b
        ;   XREF to: 005c4276 (CONDITIONAL_JUMP)  ; LAB_005c4276
    POP EBX                             ; 005c428d
        ;   Label: LAB_005c428d
    RET                                 ; 005c428e

