; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044d020(void)
;
;
; XREF[2]:
;   FUN_0045abd0 at 0045adb4
;   FUN_0045d170 at 0045d525
;
; Called Functions:
;   FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH 0x4b000                        ; 0044d020
        ;   Label: FUN_0044d020
    PUSH 0x7f                           ; 0044d025
    PUSH 0x14fba80                      ; 0044d027
    CALL FUN_005a28f0                   ; 0044d02c
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    MOV ECX,0x13f                       ; 0044d031
    ADD ESP,0xc                         ; 0044d036
    XOR EAX,EAX                         ; 0044d039
    ADD EAX,0x4                         ; 0044d03b
        ;   Label: LAB_0044d03b
    XOR EDX,EDX                         ; 0044d03e
    MOV dword ptr [EAX + 0x14fb6bc],ECX ; 0044d040
    MOV dword ptr [EAX + 0x14fb2fc],EDX ; 0044d046
    CMP EAX,0x3c0                       ; 0044d04c
    JNZ 0x0044d03b                      ; 0044d051
        ;   XREF to: 0044d03b (CONDITIONAL_JUMP)  ; LAB_0044d03b
    RET                                 ; 0044d053

