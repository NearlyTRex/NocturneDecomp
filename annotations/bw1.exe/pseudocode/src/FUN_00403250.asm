; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00403250(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[6]:
;   FUN_004962b0 at 004967dd
;   FUN_00496ee0 at 004975d9
;   FUN_0049caa0 at 0049cd16
;   FUN_004cc210 at 004cc25c
;   FUN_004cc2b0 at 004cc598
;   FUN_0050a5e0 at 0050a72a
;
; Referenced Globals:
;   undefined4 DAT_01c4f020
;
; Called Functions:
;   FUN_00403170
;   FUN_004031c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403250
        ;   Label: FUN_00403250
    PUSH ESI                            ; 00403251
    PUSH EDI                            ; 00403252
    MOV EDX,dword ptr [ESP + 0x20]      ; 00403253
    PUSH EDX                            ; 00403257
    MOV ECX,dword ptr [ESP + 0x20]      ; 00403258
    PUSH ECX                            ; 0040325c
    MOV EBX,dword ptr [ESP + 0x20]      ; 0040325d
    PUSH EBX                            ; 00403261
    MOV ESI,dword ptr [ESP + 0x20]      ; 00403262
    PUSH ESI                            ; 00403266
    MOV EDI,dword ptr [ESP + 0x20]      ; 00403267
    PUSH EDI                            ; 0040326b
    CALL FUN_004031c0                   ; 0040326c
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004031c0()
    ADD ESP,0x14                        ; 00403271
    MOV EAX,dword ptr [ESP + 0x24]      ; 00403274
    MOV EBX,dword ptr [0x01c4f020]      ; 00403278 | DAT_01c4f020
    MOV [0x01c4f020],EAX                ; 0040327e | DAT_01c4f020
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00403283
    INC EAX                             ; 00403287
    PUSH EAX                            ; 00403288
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00403289
    INC EAX                             ; 0040328d
    PUSH EAX                            ; 0040328e
    LEA EAX,[ESI + -0x1]                ; 0040328f
    PUSH EAX                            ; 00403292
    LEA EAX,[EDI + -0x1]                ; 00403293
    PUSH EAX                            ; 00403296
    CALL FUN_00403170                   ; 00403297
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; undefined FUN_00403170()
    ADD ESP,0x10                        ; 0040329c
    MOV dword ptr [0x01c4f020],EBX      ; 0040329f | DAT_01c4f020
    POP EDI                             ; 004032a5
    POP ESI                             ; 004032a6
    POP EBX                             ; 004032a7
    RET                                 ; 004032a8

