; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e0340(int param_1,int param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_004d5e20 at 004d5f34
;
; Called Functions:
;   FUN_004df770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0340
        ;   Label: FUN_004e0340
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e0341
    PUSH EDX                            ; 004e0345
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e0346
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e034a
    SUB EAX,EDX                         ; 004e0351
    SHL EAX,0x6                         ; 004e0353
    MOV ECX,dword ptr [ESP + 0x18]      ; 004e0356
    ADD EAX,EDX                         ; 004e035a
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e035c
    SHL EAX,0x3                         ; 004e0360
    PUSH ECX                            ; 004e0363
    ADD EAX,EBX                         ; 004e0364
    PUSH EAX                            ; 004e0366
    CALL FUN_004df770                   ; 004e0367
        ;   XREF to: 004df770 (UNCONDITIONAL_CALL)  ; undefined FUN_004df770()
    ADD ESP,0xc                         ; 004e036c
    POP EBX                             ; 004e036f
    RET                                 ; 004e0370

