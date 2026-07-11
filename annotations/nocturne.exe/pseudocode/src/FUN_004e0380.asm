; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e0380(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; Called Functions:
;   FUN_004df7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0380
        ;   Label: FUN_004e0380
    PUSH ESI                            ; 004e0381
    MOV EDX,dword ptr [ESP + 0x18]      ; 004e0382
    PUSH EDX                            ; 004e0386
    MOV EDX,dword ptr [ESP + 0x14]      ; 004e0387
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e038b
    MOV ECX,dword ptr [ESP + 0x18]      ; 004e0392
    SUB EAX,EDX                         ; 004e0396
    MOV EBX,dword ptr [ESP + 0x20]      ; 004e0398
    SHL EAX,0x6                         ; 004e039c
    MOV ESI,dword ptr [ESP + 0x10]      ; 004e039f
    ADD EAX,EDX                         ; 004e03a3
    PUSH ECX                            ; 004e03a5
    SHL EAX,0x3                         ; 004e03a6
    PUSH EBX                            ; 004e03a9
    ADD EAX,ESI                         ; 004e03aa
    PUSH EAX                            ; 004e03ac
    CALL FUN_004df7c0                   ; 004e03ad
        ;   XREF to: 004df7c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004df7c0()
    ADD ESP,0x10                        ; 004e03b2
    POP ESI                             ; 004e03b5
    POP EBX                             ; 004e03b6
    RET                                 ; 004e03b7

