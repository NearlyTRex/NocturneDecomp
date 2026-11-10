; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool crt_unknown_c_FUN_005cd274(void)
;
;
; XREF[3]:
;   crt_unknown.c_FUN_005cd2f8 at 005cd37a
;   crt_unknown.c_FUN_005cd47c at 005cd485
;   crt_unknown.c_processSignal_FUN_005cd3b8 at 005cd41e
;
; Referenced Globals:
;   void* PTR_SetConsoleCtrlHandler_005d0620 = 001d1116
;   undefined1 DAT_00626b4c
;
; Called Functions:
;   SetConsoleCtrlHandler
;
; *****************************************************************************

section .text

    CMP byte ptr [0x00626b4c],0x0       ; 005cd274 | DAT_00626b4c
        ;   Label: crt_unknown.c_FUN_005cd274
    JZ 0x005cd297                       ; 005cd27b
        ;   XREF to: 005cd297 (CONDITIONAL_JUMP)  ; LAB_005cd297
    PUSH 0x0                            ; 005cd27d
    PUSH 0x5cd1b0                       ; 005cd27f
    CALL dword ptr CS:[0x5d0620]        ; 005cd284 | PTR_SetConsoleCtrlHandler_005d0620
    TEST EAX,EAX                        ; 005cd28b
    JZ 0x005cd297                       ; 005cd28d
        ;   XREF to: 005cd297 (CONDITIONAL_JUMP)  ; LAB_005cd297
    XOR DL,DL                           ; 005cd28f
    MOV byte ptr [0x00626b4c],DL        ; 005cd291 | DAT_00626b4c
    XOR EAX,EAX                         ; 005cd297
        ;   Label: LAB_005cd297
    MOV AL,[0x00626b4c]                 ; 005cd299 | DAT_00626b4c
    TEST EAX,EAX                        ; 005cd29e
    SETZ AL                             ; 005cd2a0
    AND EAX,0xff                        ; 005cd2a3
    RET                                 ; 005cd2a8

