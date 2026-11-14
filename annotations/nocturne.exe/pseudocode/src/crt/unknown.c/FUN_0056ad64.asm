; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056ad64(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0056ada0 at 0056adc4
;
; Referenced Globals:
;   undefined4 DAT_005c1795
;   undefined4 DAT_005c2040
;   undefined4 DAT_005c2044
;   undefined4 DAT_005c2048
;
; Called Functions:
;   crt_unknown.c_FUN_0056fa50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ad64
        ;   Label: crt_unknown.c_FUN_0056ad64
    CMP byte ptr [0x005c1795],0x0       ; 0056ad65 | DAT_005c1795
    JZ 0x0056ad84                       ; 0056ad6c
        ;   XREF to: 0056ad84 (CONDITIONAL_JUMP)  ; LAB_0056ad84
    MOV EDX,0x56ad50                    ; 0056ad6e
    MOV EBX,0x56ad5c                    ; 0056ad73
    MOV dword ptr [0x005c2040],EDX      ; 0056ad78 | DAT_005c2040
    MOV dword ptr [0x005c2044],EBX      ; 0056ad7e | DAT_005c2044
    XOR EAX,EAX                         ; 0056ad84
        ;   Label: LAB_0056ad84
    MOV AX,[0x005c2048]                 ; 0056ad86 | DAT_005c2048
    CALL crt_unknown.c_FUN_0056fa50     ; 0056ad8c
        ;   XREF to: 0056fa50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056fa50()
    POP EBX                             ; 0056ad91
    RET                                 ; 0056ad92

