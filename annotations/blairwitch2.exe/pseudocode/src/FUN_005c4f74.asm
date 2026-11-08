; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_005c4f74(void)
;
;
; XREF[2]:
;   FUN_005c4ff8 at 005c507a
;   FUN_005c50b8 at 005c511e
;
; Referenced Globals:
;   void* PTR_SetConsoleCtrlHandler_005c860c = 001c90da
;   undefined1 DAT_0061f7cc
;
; Called Functions:
;   SetConsoleCtrlHandler
;
; *****************************************************************************

section .text

    CMP byte ptr [0x0061f7cc],0x0       ; 005c4f74 | DAT_0061f7cc
        ;   Label: FUN_005c4f74
    JZ 0x005c4f97                       ; 005c4f7b
        ;   XREF to: 005c4f97 (CONDITIONAL_JUMP)  ; LAB_005c4f97
    PUSH 0x0                            ; 005c4f7d
    PUSH 0x5c4eb0                       ; 005c4f7f
    CALL dword ptr CS:[0x5c860c]        ; 005c4f84 | PTR_SetConsoleCtrlHandler_005c860c
    TEST EAX,EAX                        ; 005c4f8b
    JZ 0x005c4f97                       ; 005c4f8d
        ;   XREF to: 005c4f97 (CONDITIONAL_JUMP)  ; LAB_005c4f97
    XOR DL,DL                           ; 005c4f8f
    MOV byte ptr [0x0061f7cc],DL        ; 005c4f91 | DAT_0061f7cc
    XOR EAX,EAX                         ; 005c4f97
        ;   Label: LAB_005c4f97
    MOV AL,[0x0061f7cc]                 ; 005c4f99 | DAT_0061f7cc
    TEST EAX,EAX                        ; 005c4f9e
    SETZ AL                             ; 005c4fa0
    AND EAX,0xff                        ; 005c4fa3
    RET                                 ; 005c4fa8

