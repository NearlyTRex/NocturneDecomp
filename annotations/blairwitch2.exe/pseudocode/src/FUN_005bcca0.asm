; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bcca0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061ee9c
;   undefined4 DAT_0061ee9d
;   undefined4 DAT_0061f27c
;
; Called Functions:
;   FUN_005bcc64
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bcca0
        ;   Label: FUN_005bcca0
    MOV AH,byte ptr [0x0061ee9c]        ; 005bcca1 | DAT_0061ee9c
    TEST AH,AH                          ; 005bcca7
    JNZ 0x005bcce2                      ; 005bcca9
        ;   XREF to: 005bcce2 (CONDITIONAL_JUMP)  ; LAB_005bcce2
    MOV byte ptr [0x0061ee9d],AH        ; 005bccab | DAT_0061ee9d
    XOR BH,BH                           ; 005bccb1
    SUB EAX,EAX                         ; 005bccb3
    PUSH EAX                            ; 005bccb5
    FNINIT                              ; 005bccb6
    FNSTCW word ptr [ESP]               ; 005bccb8
    POP EAX                             ; 005bccbb
    MOV AL,AH                           ; 005bccbc
    XOR BL,BL                           ; 005bccbe
    CMP AL,0x3                          ; 005bccc0
    JNZ 0x005bcccd                      ; 005bccc2
        ;   XREF to: 005bcccd (CONDITIONAL_JUMP)  ; LAB_005bcccd
    CALL FUN_005bcc64                   ; 005bccc4
        ;   XREF to: 005bcc64 (UNCONDITIONAL_CALL)  ; undefined FUN_005bcc64()
    MOV BH,AL                           ; 005bccc9
    MOV BL,AL                           ; 005bcccb
    CMP byte ptr [0x0061f27c],0x0       ; 005bcccd | DAT_0061f27c
        ;   Label: LAB_005bcccd
    JNZ 0x005bcce2                      ; 005bccd4
        ;   XREF to: 005bcce2 (CONDITIONAL_JUMP)  ; LAB_005bcce2
    MOV byte ptr [0x0061ee9c],BH        ; 005bccd6 | DAT_0061ee9c
    MOV byte ptr [0x0061ee9d],BL        ; 005bccdc | DAT_0061ee9d
    POP EBX                             ; 005bcce2
        ;   Label: LAB_005bcce2
    RET                                 ; 005bcce3

