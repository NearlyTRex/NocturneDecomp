; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a7de0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_006075c0
;   undefined4 DAT_006075c1
;   undefined4 DAT_00607978
;
; Called Functions:
;   FUN_005a7da4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a7de0
        ;   Label: FUN_005a7de0
    MOV AH,byte ptr [0x006075c0]        ; 005a7de1 | DAT_006075c0
    TEST AH,AH                          ; 005a7de7
    JNZ 0x005a7e22                      ; 005a7de9
        ;   XREF to: 005a7e22 (CONDITIONAL_JUMP)  ; LAB_005a7e22
    MOV byte ptr [0x006075c1],AH        ; 005a7deb | DAT_006075c1
    XOR BH,BH                           ; 005a7df1
    SUB EAX,EAX                         ; 005a7df3
    PUSH EAX                            ; 005a7df5
    FNINIT                              ; 005a7df6
    FNSTCW word ptr [ESP]               ; 005a7df8
    POP EAX                             ; 005a7dfb
    MOV AL,AH                           ; 005a7dfc
    XOR BL,BL                           ; 005a7dfe
    CMP AL,0x3                          ; 005a7e00
    JNZ 0x005a7e0d                      ; 005a7e02
        ;   XREF to: 005a7e0d (CONDITIONAL_JUMP)  ; LAB_005a7e0d
    CALL FUN_005a7da4                   ; 005a7e04
        ;   XREF to: 005a7da4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7da4()
    MOV BH,AL                           ; 005a7e09
    MOV BL,AL                           ; 005a7e0b
    CMP byte ptr [0x00607978],0x0       ; 005a7e0d | DAT_00607978
        ;   Label: LAB_005a7e0d
    JNZ 0x005a7e22                      ; 005a7e14
        ;   XREF to: 005a7e22 (CONDITIONAL_JUMP)  ; LAB_005a7e22
    MOV byte ptr [0x006075c0],BH        ; 005a7e16 | DAT_006075c0
    MOV byte ptr [0x006075c1],BL        ; 005a7e1c | DAT_006075c1
    POP EBX                             ; 005a7e22
        ;   Label: LAB_005a7e22
    RET                                 ; 005a7e23

