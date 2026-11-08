; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004e7230(int param_1)
;
;
; Called Functions:
;   FUN_0040ce40
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 004e7230
        ;   Label: FUN_004e7230
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e7233
    PUSH dword ptr [EAX + 0x59c]        ; 004e7237
    PUSH dword ptr [EAX + 0x598]        ; 004e723d
    CALL FUN_0040ce40                   ; 004e7243
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0xc],EAX       ; 004e7248
    FLD float ptr [ESP + 0xc]           ; 004e724c
    ADD ESP,0x8                         ; 004e7250
    FSTP float ptr [ESP]                ; 004e7253
    MOV EAX,dword ptr [ESP]             ; 004e7256
    ADD ESP,0x8                         ; 004e7259
    LEA EAX,[EAX]                       ; 004e725c
    RET                                 ; 004e7260
        ;   Label: LAB_004e7260

