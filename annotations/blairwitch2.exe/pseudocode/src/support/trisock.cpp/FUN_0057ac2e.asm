; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_FUN_0057ac2e(int param_1,char *param_2)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005b7790
;   support_trisock.cpp_FUN_0057a360
;   support_trisock.cpp_FUN_0057a750
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 0057ac2e
        ;   Label: support_trisock.cpp_FUN_0057ac2e
    PUSH EBX                            ; 0057ac30
    PUSH ESI                            ; 0057ac31
    PUSH EDI                            ; 0057ac32
    PUSH EBP                            ; 0057ac33
    MOV EBX,dword ptr [ESP + 0x14]      ; 0057ac34
    MOV ESI,dword ptr [ESP + 0x18]      ; 0057ac38
    LEA EBP,[EBX + 0x200]               ; 0057ac3c
    MOV EDI,EBP                         ; 0057ac42
    PUSH EDI                            ; 0057ac44
    MOV AL,byte ptr [ESI]               ; 0057ac45
        ;   Label: LAB_0057ac45
    MOV byte ptr [EDI],AL               ; 0057ac47
    CMP AL,0x0                          ; 0057ac49
    JZ 0x0057ac5d                       ; 0057ac4b
        ;   XREF to: 0057ac5d (CONDITIONAL_JUMP)  ; LAB_0057ac5d
    MOV AL,byte ptr [ESI + 0x1]         ; 0057ac4d
    ADD ESI,0x2                         ; 0057ac50
    MOV byte ptr [EDI + 0x1],AL         ; 0057ac53
    ADD EDI,0x2                         ; 0057ac56
    CMP AL,0x0                          ; 0057ac59
    JNZ 0x0057ac45                      ; 0057ac5b
        ;   XREF to: 0057ac45 (CONDITIONAL_JUMP)  ; LAB_0057ac45
    POP EDI                             ; 0057ac5d
        ;   Label: LAB_0057ac5d
    PUSH 0x100                          ; 0057ac5e
    LEA EAX,[EBX + 0x500]               ; 0057ac63
    PUSH EAX                            ; 0057ac69
    LEA EAX,[EBX + 0x604]               ; 0057ac6a
    PUSH EAX                            ; 0057ac70
    LEA ESI,[EBX + 0x400]               ; 0057ac71
    PUSH ESI                            ; 0057ac77
    PUSH EBP                            ; 0057ac78
    CALL support_trisock.cpp_FUN_0057a360 ; 0057ac79
        ;   XREF to: 0057a360 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0057a360()
    ADD ESP,0x14                        ; 0057ac7e
    TEST EAX,EAX                        ; 0057ac81
    JZ 0x0057aca1                       ; 0057ac83
        ;   XREF to: 0057aca1 (CONDITIONAL_JUMP)  ; LAB_0057aca1
    PUSH ESI                            ; 0057ac85
    ADD EBX,0xd30                       ; 0057ac86
    PUSH EBX                            ; 0057ac8c
    MOV dword ptr [EBX + -0x8],0x1      ; 0057ac8d
    CALL support_trisock.cpp_FUN_0057a750 ; 0057ac94
        ;   XREF to: 0057a750 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0057a750()
    ADD ESP,0x8                         ; 0057ac99
    POP EBP                             ; 0057ac9c
    POP EDI                             ; 0057ac9d
    POP ESI                             ; 0057ac9e
    POP EBX                             ; 0057ac9f
    RET                                 ; 0057aca0
    PUSH EBP                            ; 0057aca1
        ;   Label: LAB_0057aca1
    PUSH 0x5ed346                       ; 0057aca2
    ADD EBX,0xa18                       ; 0057aca7
    PUSH EBX                            ; 0057acad
    MOV dword ptr [EBX + 0x310],0xffffffff ; 0057acae
    CALL crt_unknown.c_FUN_005b7790     ; 0057acb8
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 0057acbd
    POP EBP                             ; 0057acc0
    POP EDI                             ; 0057acc1
    POP ESI                             ; 0057acc2
    POP EBX                             ; 0057acc3
    RET                                 ; 0057acc4

