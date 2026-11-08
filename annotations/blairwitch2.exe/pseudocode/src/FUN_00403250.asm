; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00403250(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[6]:
;   FUN_0047dc40 at 0047e16d
;   FUN_0047e870 at 0047ef69
;   FUN_00484440 at 004846b6
;   FUN_004b32c0 at 004b35a8
;   FUN_004eb7c0 at 004eb90a
;   FUN_004ebf10 at 004ecaab
;
; Referenced Globals:
;   undefined4 DAT_01c35e60
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
    MOV EBX,dword ptr [0x01c35e60]      ; 00403278 | DAT_01c35e60
    MOV [0x01c35e60],EAX                ; 0040327e | DAT_01c35e60
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
    MOV dword ptr [0x01c35e60],EBX      ; 0040329f | DAT_01c35e60
    POP EDI                             ; 004032a5
    POP ESI                             ; 004032a6
    POP EBX                             ; 004032a7
    RET                                 ; 004032a8

