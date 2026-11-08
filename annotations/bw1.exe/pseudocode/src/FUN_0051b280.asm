; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0051b280(int param_1)
;
;
; XREF[1]:
;   FUN_0051ac40 at 0051ad83
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0051b280
        ;   Label: FUN_0051b280
    MOV EAX,dword ptr [EAX + 0x1118]    ; 0051b284
    XOR EDX,EDX                         ; 0051b28a
    TEST EAX,EAX                        ; 0051b28c
    JZ 0x0051b2a0                       ; 0051b28e
        ;   XREF to: 0051b2a0 (CONDITIONAL_JUMP)  ; LAB_0051b2a0
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0051b290
        ;   Label: LAB_0051b290
    INC EDX                             ; 0051b296
    TEST EAX,EAX                        ; 0051b297
    JNZ 0x0051b290                      ; 0051b299
        ;   XREF to: 0051b290 (CONDITIONAL_JUMP)  ; LAB_0051b290
    LEA EAX,[EAX]                       ; 0051b29b
    MOV ECX,ECX                         ; 0051b29e
    MOV EAX,EDX                         ; 0051b2a0
        ;   Label: LAB_0051b2a0
    RET                                 ; 0051b2a2

