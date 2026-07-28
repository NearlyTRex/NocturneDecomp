; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool crt_signal_c_unregisterConsoleHandler_FUN_00571694(void)
;
;
; XREF[3]:
;   FUN_00571718 at 0057179a
;   FUN_0057189c at 005718a5
;   crt_signal.c_processSignal_FUN_005717d8 at 0057183e
;
; Referenced Globals:
;   void* PTR_SetConsoleCtrlHandler_00575584 = 00175f5c
;   undefined1 DAT_005c2140
;
; Called Functions:
;   SetConsoleCtrlHandler
;
; *****************************************************************************

section .text

    CMP byte ptr [0x005c2140],0x0       ; 00571694 | DAT_005c2140
        ;   Label: crt_signal.c_unregisterConsoleHandler_FUN_00571694
    JZ 0x005716b7                       ; 0057169b
        ;   XREF to: 005716b7 (CONDITIONAL_JUMP)  ; LAB_005716b7
    PUSH 0x0                            ; 0057169d
    PUSH 0x5715d0                       ; 0057169f
    CALL dword ptr CS:[0x575584]        ; 005716a4 | PTR_SetConsoleCtrlHandler_00575584
    TEST EAX,EAX                        ; 005716ab
    JZ 0x005716b7                       ; 005716ad
        ;   XREF to: 005716b7 (CONDITIONAL_JUMP)  ; LAB_005716b7
    XOR DL,DL                           ; 005716af
    MOV byte ptr [0x005c2140],DL        ; 005716b1 | DAT_005c2140
    XOR EAX,EAX                         ; 005716b7
        ;   Label: LAB_005716b7
    MOV AL,[0x005c2140]                 ; 005716b9 | DAT_005c2140
    TEST EAX,EAX                        ; 005716be
    SETZ AL                             ; 005716c0
    AND EAX,0xff                        ; 005716c3
    RET                                 ; 005716c8

