; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; HANDLE crt_unknown_c_FUN_005abbf8(void)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005aa0f0 at 005aa18b
;   crt_unknown.c_FUN_005abb90 at 005abba4
;
; Referenced Globals:
;   void* PTR_CreateEventA_005b3520 = 001b3c6a
;   undefined4 DAT_00607be4
;
; Called Functions:
;   CreateEventA
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 005abbf8
        ;   Label: crt_unknown.c_FUN_005abbf8
    PUSH 0x0                            ; 005abbfa
    PUSH 0x0                            ; 005abbfc
    PUSH 0x0                            ; 005abbfe
    CALL dword ptr CS:[0x5b3520]        ; 005abc00 | PTR_CreateEventA_005b3520
    MOV EDX,EAX                         ; 005abc07
    TEST EAX,EAX                        ; 005abc09
    JNZ 0x005abc1a                      ; 005abc0b
        ;   XREF to: 005abc1a (CONDITIONAL_JUMP)  ; LAB_005abc1a
    MOV EDX,dword ptr [0x00607be4]      ; 005abc0d | DAT_00607be4
    INC EDX                             ; 005abc13
    MOV dword ptr [0x00607be4],EDX      ; 005abc14 | DAT_00607be4
    MOV EAX,EDX                         ; 005abc1a
        ;   Label: LAB_005abc1a
    RET                                 ; 005abc1c

