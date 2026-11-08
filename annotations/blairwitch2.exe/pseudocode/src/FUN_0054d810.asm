; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0054d810(int param_1)
;
;
; Called Functions:
;   FUN_0054d9b0
;   FUN_0057cec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054d810
        ;   Label: FUN_0054d810
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054d811
    PUSH EBX                            ; 0054d815
    CALL FUN_0054d9b0                   ; 0054d816
        ;   XREF to: 0054d9b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054d9b0()
    ADD ESP,0x4                         ; 0054d81b
    PUSH 0x0                            ; 0054d81e
    ADD EBX,0x17c                       ; 0054d820
    PUSH EBX                            ; 0054d826
    CALL FUN_0057cec0                   ; 0054d827
        ;   XREF to: 0057cec0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057cec0()
    ADD ESP,0x8                         ; 0054d82c
    SUB EAX,0x17c                       ; 0054d82f
    POP EBX                             ; 0054d834
    RET                                 ; 0054d835

