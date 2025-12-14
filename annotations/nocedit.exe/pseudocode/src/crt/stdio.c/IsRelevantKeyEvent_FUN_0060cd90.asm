; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int crt_stdio.c_IsRelevantKeyEvent_FUN_0060cd90(_INPUT_RECORD * pInputRecord)
;
; Parameters:
; _INPUT_RECORD *  Stack[0x4]:4   pInputRecord
;
; XREF[1]:
;   crt_stdio.c_DrainConsoleInputWithBuffering_FUN_0060b2e0 at 0060b36c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0060cd90
        ;   Label: crt_stdio.c_IsRelevantKeyEvent_FUN_0060cd90
    CMP word ptr [EAX],0x1              ; 0060cd94
    JNZ 0x0060cdb6                      ; 0060cd98
        ;   XREF to: 0060cdb6 (CONDITIONAL_JUMP)  ; LAB_0060cdb6
    CMP dword ptr [EAX + 0x4],0x0       ; 0060cd9a
    JZ 0x0060cdb6                       ; 0060cd9e
        ;   XREF to: 0060cdb6 (CONDITIONAL_JUMP)  ; LAB_0060cdb6
    MOV AX,word ptr [EAX + 0xa]         ; 0060cda0
    CMP AX,0x10                         ; 0060cda4
    JC 0x0060cdb0                       ; 0060cda8
        ;   XREF to: 0060cdb0 (CONDITIONAL_JUMP)  ; LAB_0060cdb0
    CMP AX,0x12                         ; 0060cdaa
    JBE 0x0060cdb6                      ; 0060cdae
        ;   XREF to: 0060cdb6 (CONDITIONAL_JUMP)  ; LAB_0060cdb6
    MOV EAX,0x1                         ; 0060cdb0
        ;   Label: LAB_0060cdb0
    RET                                 ; 0060cdb5
    XOR EAX,EAX                         ; 0060cdb6
        ;   Label: LAB_0060cdb6
    RET                                 ; 0060cdb8

