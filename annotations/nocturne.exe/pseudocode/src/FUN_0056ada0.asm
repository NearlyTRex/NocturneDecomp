; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056ada0(void)
;
;
; Referenced Globals:
;   undefined4 SUB_0056ad64
;   undefined4 DAT_005c1794
;   undefined4 DAT_005c1795
;   undefined4 DAT_005c1d04
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ada0
        ;   Label: FUN_0056ada0
    MOV AH,byte ptr [0x005c1794]        ; 0056ada1 | DAT_005c1794
    TEST AH,AH                          ; 0056ada7
    JNZ 0x0056ade2                      ; 0056ada9
        ;   XREF to: 0056ade2 (CONDITIONAL_JUMP)  ; LAB_0056ade2
    MOV byte ptr [0x005c1795],AH        ; 0056adab | DAT_005c1795
    XOR BH,BH                           ; 0056adb1
    SUB EAX,EAX                         ; 0056adb3
    PUSH EAX                            ; 0056adb5
    FNINIT                              ; 0056adb6
    FNSTCW word ptr [ESP]               ; 0056adb8
    POP EAX                             ; 0056adbb
    MOV AL,AH                           ; 0056adbc
    XOR BL,BL                           ; 0056adbe
    CMP AL,0x3                          ; 0056adc0
    JNZ 0x0056adcd                      ; 0056adc2
        ;   XREF to: 0056adcd (CONDITIONAL_JUMP)  ; LAB_0056adcd
    CALL 0x0056ad64                     ; 0056adc4
        ;   XREF to: 0056ad64 (UNCONDITIONAL_CALL)  ; SUB_0056ad64
    MOV BH,AL                           ; 0056adc9
    MOV BL,AL                           ; 0056adcb
    CMP byte ptr [0x005c1d04],0x0       ; 0056adcd | DAT_005c1d04
        ;   Label: LAB_0056adcd
    JNZ 0x0056ade2                      ; 0056add4
        ;   XREF to: 0056ade2 (CONDITIONAL_JUMP)  ; LAB_0056ade2
    MOV byte ptr [0x005c1794],BH        ; 0056add6 | DAT_005c1794
    MOV byte ptr [0x005c1795],BL        ; 0056addc | DAT_005c1795
    POP EBX                             ; 0056ade2
        ;   Label: LAB_0056ade2
    RET                                 ; 0056ade3

