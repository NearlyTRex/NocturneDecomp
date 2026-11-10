; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool crt_unknown_c_FUN_005b0004(void)
;
;
; XREF[3]:
;   crt_unknown.c_FUN_005b0088 at 005b010a
;   crt_unknown.c_FUN_005b020c at 005b0215
;   crt_unknown.c_processSignal_FUN_005b0148 at 005b01ae
;
; Referenced Globals:
;   void* PTR_SetConsoleCtrlHandler_005b3620 = 001b411c
;   undefined1 DAT_00607ef0
;
; Called Functions:
;   SetConsoleCtrlHandler
;
; *****************************************************************************

section .text

    CMP byte ptr [0x00607ef0],0x0       ; 005b0004 | DAT_00607ef0
        ;   Label: crt_unknown.c_FUN_005b0004
    JZ 0x005b0027                       ; 005b000b
        ;   XREF to: 005b0027 (CONDITIONAL_JUMP)  ; LAB_005b0027
    PUSH 0x0                            ; 005b000d
    PUSH 0x5aff40                       ; 005b000f
    CALL dword ptr CS:[0x5b3620]        ; 005b0014 | PTR_SetConsoleCtrlHandler_005b3620
    TEST EAX,EAX                        ; 005b001b
    JZ 0x005b0027                       ; 005b001d
        ;   XREF to: 005b0027 (CONDITIONAL_JUMP)  ; LAB_005b0027
    XOR DL,DL                           ; 005b001f
    MOV byte ptr [0x00607ef0],DL        ; 005b0021 | DAT_00607ef0
    XOR EAX,EAX                         ; 005b0027
        ;   Label: LAB_005b0027
    MOV AL,[0x00607ef0]                 ; 005b0029 | DAT_00607ef0
    TEST EAX,EAX                        ; 005b002e
    SETZ AL                             ; 005b0030
    AND EAX,0xff                        ; 005b0033
    RET                                 ; 005b0038

