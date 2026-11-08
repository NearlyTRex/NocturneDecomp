; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004c6640(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408600
;   FUN_00462500
;   FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6640
        ;   Label: FUN_004c6640
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c6641
    PUSH EBX                            ; 004c6645
    CALL FUN_00408600                   ; 004c6646
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; undefined FUN_00408600()
    ADD ESP,0x4                         ; 004c664b
    ADD EAX,0x158                       ; 004c664e
    PUSH EAX                            ; 004c6653
    CALL FUN_00462500                   ; 004c6654
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; undefined FUN_00462500()
    ADD ESP,0x4                         ; 004c6659
    LEA EBX,[EAX + 0xfffffea8]          ; 004c665c
    PUSH 0x5c4031                       ; 004c6662
    LEA EAX,[EBX + 0x158]               ; 004c6667
    PUSH EAX                            ; 004c666d
    MOV dword ptr [EBX + 0x154],0x5e0914 ; 004c666e
    CALL FUN_004625f0                   ; 004c6678
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 004c667d
    MOV EAX,EBX                         ; 004c6680
    MOV dword ptr [EBX + 0x2d4],0x0     ; 004c6682
    POP EBX                             ; 004c668c
    RET                                 ; 004c668d

