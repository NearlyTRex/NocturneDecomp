; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004ddb30(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH 0x5e3a31                       ; 004ddb30
        ;   Label: FUN_004ddb30
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ddb35
    PUSH EDX                            ; 004ddb39
    CALL FUN_0040c550                   ; 004ddb3a
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 004ddb3f
    TEST EAX,EAX                        ; 004ddb42
    JZ 0x004ddb50                       ; 004ddb44
        ;   XREF to: 004ddb50 (CONDITIONAL_JUMP)  ; LAB_004ddb50
    MOV EAX,0x2                         ; 004ddb46
    LEA EAX,[EAX]                       ; 004ddb4b
    MOV ECX,ECX                         ; 004ddb4e
    RET                                 ; 004ddb50
        ;   Label: LAB_004ddb50

